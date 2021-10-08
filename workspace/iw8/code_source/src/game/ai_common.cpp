/*
==============
AICommonInterface::PointAtGoal
==============
*/

bool __fastcall AICommonInterface::PointAtGoal(AICommonInterface *this, const vec3_t *vPoint, const ai_goal_t *goal)
{
  return ?PointAtGoal@AICommonInterface@@QEBA_NAEBTvec3_t@@PEBUai_goal_t@@@Z(this, vPoint, goal);
}

/*
==============
AICommonInterface::RemoveEntRefs
==============
*/

void __fastcall AICommonInterface::RemoveEntRefs(ai_common_t *self)
{
  ?RemoveEntRefs@AICommonInterface@@SAXPEAUai_common_t@@@Z(self);
}

/*
==============
AI_IsInsideArc
==============
*/

bool __fastcall AI_IsInsideArc(gentity_s *self, const vec3_t *origin, float radius, float angle0, float angle1, float halfHeight)
{
  return ?AI_IsInsideArc@@YA_NPEAUgentity_s@@AEBTvec3_t@@MMMM@Z(self, origin, radius, angle0, angle1, halfHeight);
}

/*
==============
AICommonInterface::PointNearPointSqDist
==============
*/

bool __fastcall AICommonInterface::PointNearPointSqDist(AICommonInterface *this, const vec3_t *vPoint, const vec3_t *vGoalPos, float bufferSq)
{
  return ?PointNearPointSqDist@AICommonInterface@@QEBA_NAEBTvec3_t@@0M@Z(this, vPoint, vGoalPos, bufferSq);
}

/*
==============
AICommonInterface::NearClaimNode
==============
*/

bool __fastcall AICommonInterface::NearClaimNode(AICommonInterface *this, float dist)
{
  return ?NearClaimNode@AICommonInterface@@QEBA_NM@Z(this, dist);
}

/*
==============
AICommonInterface::DissociateSentient
==============
*/

void __fastcall AICommonInterface::DissociateSentient(AICommonInterface *this, sentient_s *other)
{
  ?DissociateSentient@AICommonInterface@@UEBAXPEAUsentient_s@@@Z(this, other);
}

/*
==============
AI_DropPointToFloorInternal
==============
*/

void __fastcall AI_DropPointToFloorInternal(vec3_t *point, const Bounds *bounds, int useUp, const vec3_t *up)
{
  ?AI_DropPointToFloorInternal@@YAXAEATvec3_t@@PEBUBounds@@HAEBT1@@Z(point, bounds, useUp, up);
}

/*
==============
AI_PointNearNode
==============
*/

bool __fastcall AI_PointNearNode(const ai_common_t *self, const vec3_t *vPoint, const pathnode_t *node)
{
  return ?AI_PointNearNode@@YA_NPEBUai_common_t@@AEBTvec3_t@@PEBUpathnode_t@@@Z(self, vPoint, node);
}

/*
==============
AICommonInterface::GetTargetLookPosition
==============
*/

void __fastcall AICommonInterface::GetTargetLookPosition(AICommonInterface *this, vec3_t *position)
{
  ?GetTargetLookPosition@AICommonInterface@@QEBAXAEATvec3_t@@@Z(this, position);
}

/*
==============
AI_GetAICommon
==============
*/

ai_common_t *__fastcall AI_GetAICommon(gentity_s *pEnt)
{
  return ?AI_GetAICommon@@YAPEAUai_common_t@@PEAUgentity_s@@@Z(pEnt);
}

/*
==============
AI_DissociateAIFromEnt
==============
*/

void __fastcall AI_DissociateAIFromEnt(gentity_s *victim)
{
  ?AI_DissociateAIFromEnt@@YAXPEAUgentity_s@@@Z(victim);
}

/*
==============
AICommonInterface::BlendOldVelocityWithMoveDelta
==============
*/

void __fastcall AICommonInterface::BlendOldVelocityWithMoveDelta(AICommonInterface *this, const vec3_t *myPos, const vec3_t *currentMoveDelta, const vec3_t *desiredMoveDelta, vec3_t *outBlendedMoveDelta)
{
  ?BlendOldVelocityWithMoveDelta@AICommonInterface@@IEBAXAEBTvec3_t@@00AEAT2@@Z(this, myPos, currentMoveDelta, desiredMoveDelta, outBlendedMoveDelta);
}

/*
==============
SentientInfo_Clear
==============
*/

void __fastcall SentientInfo_Clear(sentient_s *self, sentient_s *other)
{
  ?SentientInfo_Clear@@YAXPEAUsentient_s@@0@Z(self, other);
}

/*
==============
AI_DropPointToFloorNonWorldUp
==============
*/

void __fastcall AI_DropPointToFloorNonWorldUp(vec3_t *point, const Bounds *bounds, const vec3_t *up)
{
  ?AI_DropPointToFloorNonWorldUp@@YAXAEATvec3_t@@PEBUBounds@@AEBT1@@Z(point, bounds, up);
}

/*
==============
AICommonInterface::SentientInfo_Copy
==============
*/

void __fastcall AICommonInterface::SentientInfo_Copy(AICommonInterface *this, ai_common_t *pFrom, int index, unsigned __int8 reason)
{
  ?SentientInfo_Copy@AICommonInterface@@UEBAXPEAUai_common_t@@HE@Z(this, pFrom, index, reason);
}

/*
==============
AICommonInterface::ClearPath
==============
*/

void __fastcall AICommonInterface::ClearPath(AICommonInterface *this)
{
  ?ClearPath@AICommonInterface@@UEBAXXZ(this);
}

/*
==============
AICommonInterface::GetTurretUsed
==============
*/

gentity_s *__fastcall AICommonInterface::GetTurretUsed(AICommonInterface *this)
{
  return ?GetTurretUsed@AICommonInterface@@QEBAPEAUgentity_s@@XZ(this);
}

/*
==============
AICommonInterface::PointNearNode
==============
*/

bool __fastcall AICommonInterface::PointNearNode(AICommonInterface *this, const vec3_t *vPoint, const pathnode_t *node)
{
  return ?PointNearNode@AICommonInterface@@QEBA_NAEBTvec3_t@@PEBUpathnode_t@@@Z(this, vPoint, node);
}

/*
==============
SentientInfo_GetLastKnownPos
==============
*/

void __fastcall SentientInfo_GetLastKnownPos(const sentient_info_t *pInfo, vec3_t *outLastKnownPos)
{
  ?SentientInfo_GetLastKnownPos@@YAXPEBUsentient_info_t@@AEATvec3_t@@@Z(pInfo, outLastKnownPos);
}

/*
==============
AI_GetDropToFloorPosition
==============
*/

int __fastcall AI_GetDropToFloorPosition(gentity_s *ent, vec3_t *inOutPosition)
{
  return ?AI_GetDropToFloorPosition@@YAHPEAUgentity_s@@AEATvec3_t@@@Z(ent, inOutPosition);
}

/*
==============
Sentient_GetSentientInfo
==============
*/

sentient_info_t *__fastcall Sentient_GetSentientInfo(const sentient_s *self, const sentient_s *enemy)
{
  return ?Sentient_GetSentientInfo@@YAPEAUsentient_info_t@@PEBUsentient_s@@0@Z(self, enemy);
}

/*
==============
AICommonInterface::IsUsingTurret
==============
*/

bool __fastcall AICommonInterface::IsUsingTurret(AICommonInterface *this)
{
  return ?IsUsingTurret@AICommonInterface@@QEBA_NXZ(this);
}

/*
==============
AI_StringToStance
==============
*/

ai_stance_e __fastcall AI_StringToStance(const scr_string_t stance)
{
  return ?AI_StringToStance@@YA?AW4ai_stance_e@@W4scr_string_t@@@Z(stance);
}

/*
==============
SentientInfo_ForceCopy
==============
*/

void __fastcall SentientInfo_ForceCopy(sentient_info_t *pTo, const sentient_info_t *pFrom, unsigned __int8 reason)
{
  ?SentientInfo_ForceCopy@@YAXPEAUsentient_info_t@@PEBU1@E@Z(pTo, pFrom, reason);
}

/*
==============
AICommonInterface::PointNear
==============
*/

bool __fastcall AICommonInterface::PointNear(AICommonInterface *this, const vec3_t *vPoint, const vec3_t *vGoalPos)
{
  return ?PointNear@AICommonInterface@@QEBA_NAEBTvec3_t@@0@Z(this, vPoint, vGoalPos);
}

/*
==============
AICommonInterface::AllSecondaryTargetsForward
==============
*/

bool __fastcall AICommonInterface::AllSecondaryTargetsForward(AICommonInterface *this)
{
  return ?AllSecondaryTargetsForward@AICommonInterface@@QEBA_NXZ(this);
}

/*
==============
AICommonInterface::PointAt
==============
*/

bool __fastcall AICommonInterface::PointAt(AICommonInterface *this, const vec3_t *vPoint, const vec3_t *vGoalPos)
{
  return ?PointAt@AICommonInterface@@QEBA_NAEBTvec3_t@@0@Z(this, vPoint, vGoalPos);
}

/*
==============
G_GetAngleIndices
==============
*/

void __fastcall G_GetAngleIndices(const float angle, const float threshold, int *outAngleIndices, unsigned int *outAngleIndexCount)
{
  ?G_GetAngleIndices@@YAXMMPEAHPEAI@Z(angle, threshold, outAngleIndices, outAngleIndexCount);
}

/*
==============
AI_StanceToString
==============
*/

scr_string_t __fastcall AI_StanceToString(ai_stance_e eStance)
{
  return ?AI_StanceToString@@YA?AW4scr_string_t@@W4ai_stance_e@@@Z(eStance);
}

/*
==============
AICommonInterface::SetGoalHeight
==============
*/

void __fastcall AICommonInterface::SetGoalHeight(ai_goal_t *goal, float height, bool bEnforceMin)
{
  ?SetGoalHeight@AICommonInterface@@SAXPEAUai_goal_t@@M_N@Z(goal, height, bEnforceMin);
}

/*
==============
AICommonInterface::SetGoal
==============
*/

void __fastcall AICommonInterface::SetGoal(ai_goal_t *goal, const vec3_t *vPoint, float fRadius, float fHeight, bool bEnforceMinHeight)
{
  ?SetGoal@AICommonInterface@@SAXPEAUai_goal_t@@AEBTvec3_t@@MM_N@Z(goal, vPoint, fRadius, fHeight, bEnforceMinHeight);
}

/*
==============
AICommonInterface::GetPathFinalGoal
==============
*/

void __fastcall AICommonInterface::GetPathFinalGoal(AICommonInterface *this, vec3_t *vFinalGoal)
{
  ?GetPathFinalGoal@AICommonInterface@@QEBAXAEATvec3_t@@@Z(this, vFinalGoal);
}

/*
==============
SentientInfo_SetLastKnownPos
==============
*/

void __fastcall SentientInfo_SetLastKnownPos(sentient_info_t *pInfo, const sentient_s *pSentient, const vec3_t *vLastKnownPos)
{
  ?SentientInfo_SetLastKnownPos@@YAXPEAUsentient_info_t@@PEBUsentient_s@@AEBTvec3_t@@@Z(pInfo, pSentient, vLastKnownPos);
}

/*
==============
AICommonInterface::HasSecondaryTargets
==============
*/

bool __fastcall AICommonInterface::HasSecondaryTargets(AICommonInterface *this)
{
  return ?HasSecondaryTargets@AICommonInterface@@QEBA_NXZ(this);
}

/*
==============
AI_DropToFloor
==============
*/

int __fastcall AI_DropToFloor(gentity_s *ent)
{
  return ?AI_DropToFloor@@YAHPEAUgentity_s@@@Z(ent);
}

/*
==============
VisCache_Copy
==============
*/

void __fastcall VisCache_Copy(vis_cache_t *pDstCache, const vis_cache_t *pSrcCache)
{
  ?VisCache_Copy@@YAXPEAUvis_cache_t@@PEBU1@@Z(pDstCache, pSrcCache);
}

/*
==============
AICommonInterface::PointNearGoal
==============
*/

bool __fastcall AICommonInterface::PointNearGoal(AICommonInterface *this, const vec3_t *vPoint, const ai_goal_t *goal, float buffer)
{
  return ?PointNearGoal@AICommonInterface@@QEBA_NAEBTvec3_t@@PEBUai_goal_t@@M@Z(this, vPoint, goal, buffer);
}

/*
==============
AICommonInterface::NotifyKnownEvent
==============
*/

void __fastcall AICommonInterface::NotifyKnownEvent(AICommonInterface *this, gentity_s *pOther, const vec3_t *position, unsigned __int8 reason, int time)
{
  ?NotifyKnownEvent@AICommonInterface@@QEBAXPEAUgentity_s@@AEBTvec3_t@@EH@Z(this, pOther, position, reason, time);
}

/*
==============
G_GetAngleIndex
==============
*/

int __fastcall G_GetAngleIndex(const float angle, const float threshold)
{
  return ?G_GetAngleIndex@@YAHMM@Z(angle, threshold);
}

/*
==============
AICommonInterface::GetTargetPosition
==============
*/

void __fastcall AICommonInterface::GetTargetPosition(AICommonInterface *this, vec3_t *position)
{
  ?GetTargetPosition@AICommonInterface@@QEBAXAEATvec3_t@@@Z(this, position);
}

/*
==============
AI_DropPointToFloor
==============
*/

void __fastcall AI_DropPointToFloor(vec3_t *point, const Bounds *bounds)
{
  ?AI_DropPointToFloor@@YAXAEATvec3_t@@PEBUBounds@@@Z(point, bounds);
}

/*
==============
AICommonInterface::PointNearPoint
==============
*/

bool __fastcall AICommonInterface::PointNearPoint(AICommonInterface *this, const vec3_t *vPoint, const vec3_t *vGoalPos, float buffer)
{
  return ?PointNearPoint@AICommonInterface@@QEBA_NAEBTvec3_t@@0M@Z(this, vPoint, vGoalPos, buffer);
}

/*
==============
AICommonInterface::Use3DPathing
==============
*/

bool __fastcall AICommonInterface::Use3DPathing(AICommonInterface *this)
{
  return ?Use3DPathing@AICommonInterface@@QEBA_NXZ(this);
}

/*
==============
VisCache_UpdateInternal
==============
*/

void __fastcall VisCache_UpdateInternal(vis_cache_t *pCache, int bVisible, int bObscured, bool bPeriphVisible)
{
  ?VisCache_UpdateInternal@@YAXPEAUvis_cache_t@@HH_N@Z(pCache, bVisible, bObscured, bPeriphVisible);
}

/*
==============
AICommonInterface::SetGoalRadius
==============
*/

void __fastcall AICommonInterface::SetGoalRadius(ai_goal_t *goal, float radius)
{
  ?SetGoalRadius@AICommonInterface@@SAXPEAUai_goal_t@@M@Z(goal, radius);
}

/*
==============
AI_ComparePointsInternal
==============
*/

bool __fastcall AI_ComparePointsInternal(const vec3_t *vPoint1, const vec3_t *vPoint2, double heightDistSQ, double distSQ, bool is3D)
{
  bool result; 

  __asm
  {
    vmovaps [rsp+18h+var_18], xmm6
    vmovaps xmm6, xmm3
    vmovaps xmm4, xmm2
  }
  if ( is3D )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdx]
      vsubss  xmm5, xmm0, dword ptr [rcx]
      vmovss  xmm1, dword ptr [rdx+4]
      vsubss  xmm2, xmm1, dword ptr [rcx+4]
      vmovss  xmm0, dword ptr [rdx+8]
      vsubss  xmm4, xmm0, dword ptr [rcx+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm6, xmm2
    }
    result = 1;
    __asm { vmovaps xmm6, [rsp+18h+var_18] }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+8]
      vsubss  xmm1, xmm0, dword ptr [rdx+8]
      vmulss  xmm2, xmm1, xmm1
      vcomiss xmm2, xmm4
      vmovss  xmm0, dword ptr [rdx]
      vmovss  xmm1, dword ptr [rdx+4]
      vsubss  xmm2, xmm1, dword ptr [rcx+4]
      vsubss  xmm4, xmm0, dword ptr [rcx]
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm3, xmm0
      vcomiss xmm6, xmm1
      vmovaps xmm6, [rsp+18h+var_18]
    }
    return 1;
  }
  return result;
}

/*
==============
AI_DissociateAIFromEnt
==============
*/
void AI_DissociateAIFromEnt(gentity_s *victim)
{
  sentient_s *sentient; 
  sentient_s *i; 
  const gentity_s **p_ent; 
  AICommonInterface *m_pAI; 
  AICommonWrapper v9; 
  bitarray<224> iTeamFlags; 

  if ( !victim->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 752, ASSERT_TYPE_ASSERT, "( victim->sentient )", (const char *)&queryFormat, "victim->sentient") )
    __debugbreak();
  sentient = victim->sentient;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    _RAX = Com_TeamsSP_GetAllTeamFlags();
  else
    _RAX = Com_TeamsMP_GetAllTeamFlags();
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rsp+108h+iTeamFlags.array], xmm0
    vmovsd  xmm1, qword ptr [rax+10h]
    vmovsd  qword ptr [rsp+108h+iTeamFlags.array+10h], xmm1
  }
  iTeamFlags.array[6] = _RAX->array[6];
  for ( i = Sentient_FirstSentient(&iTeamFlags); i; i = Sentient_NextSentient(i, &iTeamFlags) )
  {
    if ( i != sentient )
    {
      p_ent = (const gentity_s **)&i->ai->ent;
      if ( p_ent )
      {
        AIActorInterface::AIActorInterface(&v9.m_actorInterface);
        AIAgentInterface::AIAgentInterface(&v9.m_newAgentInterface);
        v9.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
        AICommonInterface::AICommonInterface(&v9.m_botInterface);
        v9.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
        AICommonInterface::AICommonInterface(&v9.m_botAgentInterface);
        v9.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
        v9.m_pAI = NULL;
        AICommonWrapper::Setup(&v9, *p_ent);
        m_pAI = v9.m_pAI;
        if ( !v9.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 763, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
          __debugbreak();
        m_pAI->DissociateSentient(m_pAI, sentient);
      }
    }
  }
}

/*
==============
AI_DropPointToFloor
==============
*/
void AI_DropPointToFloor(vec3_t *point, const Bounds *bounds)
{
  AI_DropPointToFloorInternal(point, bounds, 0, &vec3_origin);
}

/*
==============
AI_DropPointToFloorInternal
==============
*/
void AI_DropPointToFloorInternal(vec3_t *point, const Bounds *bounds, int useUp, const vec3_t *up)
{
  vec3_t start; 
  vec3_t end; 
  trace_t results; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RBX = point;
  __asm
  {
    vmovss  xmm5, dword ptr [rcx]
    vmovss  xmm6, dword ptr [rcx+4]
    vmovss  xmm7, dword ptr [rcx+8]
  }
  if ( useUp )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@41900000
      vmulss  xmm4, xmm2, dword ptr [r9]
      vmulss  xmm3, xmm2, dword ptr [r9+4]
      vmulss  xmm2, xmm2, dword ptr [r9+8]
      vaddss  xmm0, xmm4, xmm5
      vmovss  dword ptr [rbp+57h+start], xmm0
      vaddss  xmm0, xmm6, xmm3
      vmovss  dword ptr [rbp+57h+start+4], xmm0
      vaddss  xmm0, xmm7, xmm2
      vsubss  xmm1, xmm5, xmm4
      vmovss  dword ptr [rbp+57h+start+8], xmm0
      vmovss  dword ptr [rbp+57h+end], xmm1
      vsubss  xmm0, xmm6, xmm3
      vsubss  xmm1, xmm7, xmm2
      vmovss  dword ptr [rbp+57h+end+4], xmm0
      vmovss  dword ptr [rbp+57h+end+8], xmm1
    }
  }
  else
  {
    __asm
    {
      vaddss  xmm0, xmm7, cs:__real@41900000
      vmovss  dword ptr [rbp+57h+start+8], xmm0
      vsubss  xmm0, xmm7, cs:__real@44480000
      vmovss  dword ptr [rbp+57h+end+8], xmm0
      vmovss  dword ptr [rbp+57h+start], xmm5
      vmovss  dword ptr [rbp+57h+start+4], xmm6
      vmovss  dword ptr [rbp+57h+end], xmm5
      vmovss  dword ptr [rbp+57h+end+4], xmm6
    }
  }
  G_Main_TraceCapsule(&results, &start, &end, bounds, 2047, 131089);
  if ( !*(_WORD *)&results.allsolid )
  {
    __asm
    {
      vmovss  xmm5, [rbp+57h+results.fraction]
      vmovss  xmm0, dword ptr [rbp+57h+end]
      vsubss  xmm1, xmm0, dword ptr [rbp+57h+start]
      vmulss  xmm1, xmm1, xmm5
      vaddss  xmm0, xmm1, dword ptr [rbp+57h+start]
      vmovss  xmm1, dword ptr [rbp+57h+end+4]
      vmovss  dword ptr [rbx], xmm0
      vsubss  xmm0, xmm1, dword ptr [rbp+57h+start+4]
      vmulss  xmm2, xmm0, xmm5
      vaddss  xmm3, xmm2, dword ptr [rbp+57h+start+4]
      vmovss  xmm0, dword ptr [rbp+57h+end+8]
      vsubss  xmm1, xmm0, dword ptr [rbp+57h+start+8]
      vmulss  xmm2, xmm1, xmm5
      vmovss  dword ptr [rbx+4], xmm3
      vaddss  xmm3, xmm2, dword ptr [rbp+57h+start+8]
      vmovss  dword ptr [rbx+8], xmm3
    }
  }
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
AI_DropPointToFloorNonWorldUp
==============
*/
void AI_DropPointToFloorNonWorldUp(vec3_t *point, const Bounds *bounds, const vec3_t *up)
{
  AI_DropPointToFloorInternal(point, bounds, 1, up);
}

/*
==============
AI_DropToFloor
==============
*/
int AI_DropToFloor(gentity_s *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 602, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  return AI_GetDropToFloorPosition(ent, &ent->r.currentOrigin);
}

/*
==============
AI_GetAICommon
==============
*/
actor_s *AI_GetAICommon(gentity_s *pEnt)
{
  actor_s *result; 

  result = pEnt->actor;
  if ( !result )
  {
    if ( pEnt->agent )
      return (actor_s *)Agent_GetAICommonData(pEnt);
    else
      return 0i64;
  }
  return result;
}

/*
==============
AI_GetDropToFloorPosition
==============
*/
__int64 AI_GetDropToFloorPosition(gentity_s *ent, vec3_t *inOutPosition)
{
  gclient_s *client; 
  EffectiveStance EffectiveStance; 
  int contentmask; 
  char v13; 
  entityType_s eType; 
  __int64 result; 
  __int128 start; 
  vec3_t end; 
  Bounds bounds; 
  trace_t results; 
  char v41; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _RDI = inOutPosition;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 562, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  __asm
  {
    vmovss  xmm2, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  xmm0, dword ptr [rdi+8]
  }
  client = ent->client;
  __asm
  {
    vmovss  dword ptr [rbp+57h+end], xmm2
    vmovss  dword ptr [rbp+57h+end+4], xmm1
    vmovss  dword ptr [rbp+57h+end+8], xmm0
    vmovss  dword ptr [rbp+57h+start], xmm2
    vmovss  dword ptr [rbp+57h+start+4], xmm1
    vmovss  dword ptr [rbp+57h+start+8], xmm0
  }
  if ( client )
  {
    EffectiveStance = PM_GetEffectiveStance(&client->ps);
    *(double *)&_XMM0 = BG_Suit_GetBoundsHeight(&client->ps, EffectiveStance);
    __asm
    {
      vcomiss xmm0, cs:__real@41f00000
      vmovaps xmm6, xmm0
    }
    contentmask = 65553;
    if ( v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 584, ASSERT_TYPE_ASSERT, "(height >= radius * 2.f)", (const char *)&queryFormat, "height >= radius * 2.f", start) )
      __debugbreak();
  }
  else
  {
    eType = ent->s.eType;
    if ( (unsigned __int16)(eType - 19) > 2u && eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 577, ASSERT_TYPE_ASSERT, "(ent->s.eType == ET_ACTOR || ent->s.eType == ET_ACTOR_CORPSE || ent->s.eType == ET_ACTOR_SPAWNER || ent->s.eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "ent->s.eType == ET_ACTOR || ent->s.eType == ET_ACTOR_CORPSE || ent->s.eType == ET_ACTOR_SPAWNER || ent->s.eType == ET_SCRIPTMOVER", start) )
      __debugbreak();
    __asm { vmovss  xmm6, cs:__real@42900000 }
    contentmask = 131089;
  }
  __asm
  {
    vaddss  xmm1, xmm6, dword ptr [rbp+57h+start+8]
    vsubss  xmm2, xmm1, cs:__real@41f00000
    vmovss  xmm0, dword ptr [rbp+57h+end+8]
    vaddss  xmm1, xmm0, cs:__real@c4480000
    vmovss  xmm0, cs:__real@41700000
    vmovss  dword ptr [rbp+57h+start+8], xmm2
    vmovups xmm2, cs:__xmm@41700000417000000000000000000000
    vmovups xmmword ptr [rbp+57h+bounds.midPoint], xmm2
    vmovss  dword ptr [rbp+57h+end+8], xmm1
    vmovss  dword ptr [rbp+57h+bounds.halfSize+4], xmm0
    vmovss  dword ptr [rbp+57h+bounds.halfSize+8], xmm0
  }
  G_Main_TraceCapsule(&results, (const vec3_t *)&start, &end, &bounds, 2047, contentmask);
  if ( results.startsolid )
  {
    result = 0i64;
  }
  else
  {
    __asm
    {
      vmovss  xmm5, [rbp+57h+results.fraction]
      vmovss  xmm0, dword ptr [rbp+57h+end]
      vsubss  xmm1, xmm0, dword ptr [rbp+57h+start]
      vmulss  xmm1, xmm1, xmm5
      vaddss  xmm0, xmm1, dword ptr [rbp+57h+start]
      vmovss  xmm1, dword ptr [rbp+57h+end+4]
      vmovss  dword ptr [rdi], xmm0
      vsubss  xmm0, xmm1, dword ptr [rbp+57h+start+4]
      vmulss  xmm2, xmm0, xmm5
      vaddss  xmm3, xmm2, dword ptr [rbp+57h+start+4]
      vmovss  xmm0, dword ptr [rbp+57h+end+8]
      vsubss  xmm1, xmm0, dword ptr [rbp+57h+start+8]
      vmulss  xmm2, xmm1, xmm5
      vmovss  dword ptr [rdi+4], xmm3
      vaddss  xmm3, xmm2, dword ptr [rbp+57h+start+8]
      vmovss  dword ptr [rdi+8], xmm3
    }
    result = 1i64;
  }
  _R11 = &v41;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return result;
}

/*
==============
AI_IsInsideArc
==============
*/

bool __fastcall AI_IsInsideArc(gentity_s *self, const vec3_t *origin, double radius, double angle0, float angle1, float halfHeight)
{
  float fmt; 
  float arcAngle1; 
  float v21; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm3
  }
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 368, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, [rsp+68h+angle1]
    vmovss  xmm0, [rsp+68h+halfHeight]
    vmovss  [rsp+68h+var_38], xmm0
    vmovss  [rsp+68h+arcAngle1], xmm1
    vmovss  xmm1, cs:__real@41700000; posRadius
    vmovaps xmm3, xmm7; arcRadius
    vmovss  dword ptr [rsp+68h+fmt], xmm6
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
  return IsPosInsideArc(&self->r.currentOrigin, *(float *)&_XMM1, origin, *(float *)&_XMM3, fmt, arcAngle1, v21) != 0;
}

/*
==============
AI_PointNearNode
==============
*/
bool AI_PointNearNode(const ai_common_t *self, const vec3_t *vPoint, const pathnode_t *node)
{
  AINavigator *pNavigator; 
  bool v6; 
  vec3_t pos; 

  _RBX = vPoint;
  v6 = 0;
  if ( self )
  {
    pNavigator = self->pNavigator;
    if ( pNavigator )
    {
      if ( pNavigator->Is3D(pNavigator) )
        v6 = 1;
    }
  }
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  if ( v6 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+48h+pos]
      vsubss  xmm3, xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rsp+48h+pos+4]
      vsubss  xmm2, xmm1, dword ptr [rbx+4]
      vmovss  xmm0, dword ptr [rsp+48h+pos+8]
      vsubss  xmm4, xmm0, dword ptr [rbx+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, cs:__real@43610000
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+8]
      vsubss  xmm1, xmm0, dword ptr [rsp+48h+pos+8]
      vmulss  xmm2, xmm1, xmm1
      vcomiss xmm2, cs:__real@45c80000
      vmovss  xmm0, dword ptr [rsp+48h+pos]
      vmovss  xmm1, dword ptr [rsp+48h+pos+4]
      vsubss  xmm2, xmm1, dword ptr [rbx+4]
      vsubss  xmm4, xmm0, dword ptr [rbx]
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm3, xmm0
      vcomiss xmm1, cs:__real@43610000
    }
  }
  return !v6;
}

/*
==============
AI_StanceToString
==============
*/
__int64 AI_StanceToString(ai_stance_e eStance)
{
  __int64 result; 

  if ( eStance == STANCE_STAND )
    return (unsigned int)scr_const.stand;
  if ( eStance == STANCE_CROUCH )
    return (unsigned int)scr_const.crouch;
  result = (unsigned int)scr_const._;
  if ( eStance == STANCE_PRONE )
    return (unsigned int)scr_const.prone;
  return result;
}

/*
==============
AI_StringToStance
==============
*/
__int64 AI_StringToStance(const scr_string_t stance)
{
  __int64 result; 

  if ( stance == scr_const.stand )
    return 1i64;
  if ( stance == scr_const.crouch )
    return 2i64;
  result = 0i64;
  if ( stance == scr_const.prone )
    return 4i64;
  return result;
}

/*
==============
AICommonInterface::AllSecondaryTargetsForward
==============
*/
bool AICommonInterface::AllSecondaryTargetsForward(AICommonInterface *this)
{
  ai_common_t *m_pAI; 
  unsigned __int64 numSecondaryTarget; 
  bool v26; 
  unsigned __int64 v27; 
  float *v28; 
  bool result; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 275, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 276, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  if ( !AICommonInterface::GetTargetEntity(this) )
    goto LABEL_12;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+130h]
    vmovss  xmm1, dword ptr [rax+134h]
  }
  m_pAI = this->m_pAI;
  __asm
  {
    vsubss  xmm7, xmm0, dword ptr [rcx+130h]
    vsubss  xmm6, xmm1, dword ptr [rcx+134h]
    vmovss  xmm0, dword ptr [rax+138h]
    vsubss  xmm5, xmm0, dword ptr [rcx+138h]
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm7, xmm7, xmm1
    vmulss  xmm6, xmm6, xmm1
    vmulss  xmm5, xmm5, xmm1
  }
  if ( m_pAI->threat.numSecondaryTarget > 0 )
  {
    numSecondaryTarget = m_pAI->threat.numSecondaryTarget;
    v26 = 0;
    v27 = 0i64;
    v28 = &m_pAI->threat.secondaryTargets[0].dirToEnt.v[2];
    __asm { vxorps  xmm4, xmm4, xmm4 }
    while ( 1 )
    {
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rax-8]
        vmulss  xmm0, xmm6, dword ptr [rax-4]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, dword ptr [rax]
        vaddss  xmm3, xmm2, xmm1
        vcomiss xmm3, xmm4
      }
      if ( v26 )
        break;
      ++v27;
      v28 += 6;
      v26 = v27 < numSecondaryTarget;
      if ( (__int64)v27 >= (__int64)numSecondaryTarget )
        goto LABEL_12;
    }
    __asm { vmovaps xmm7, [rsp+58h+var_28] }
    result = 0;
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
  }
  else
  {
LABEL_12:
    result = 1;
    __asm
    {
      vmovaps xmm7, [rsp+58h+var_28]
      vmovaps xmm6, [rsp+58h+var_18]
    }
  }
  return result;
}

/*
==============
AICommonInterface::BlendOldVelocityWithMoveDelta
==============
*/
void AICommonInterface::BlendOldVelocityWithMoveDelta(AICommonInterface *this, const vec3_t *myPos, const vec3_t *currentMoveDelta, const vec3_t *desiredMoveDelta, vec3_t *outBlendedMoveDelta)
{
  AINavigator3D *v41; 
  bool v42; 
  bool v43; 
  bool v65; 
  double v109; 
  double v110; 
  double v111; 
  double v112; 
  char v118; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _R14 = outBlendedMoveDelta;
  _RDI = desiredMoveDelta;
  _RSI = currentMoveDelta;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 686, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->Is3D(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 687, ASSERT_TYPE_ASSERT, "(Is3D())", (const char *)&queryFormat, "Is3D()") )
    __debugbreak();
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+4]
    vmovss  xmm4, dword ptr [rdi]
    vmovss  xmm5, dword ptr [rdi+8]
    vmovss  xmm12, cs:__real@3f800000
    vmovd   xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmovss  xmm15, cs:__real@80000000
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm0, xmm0, cs:__real@3c343958
    vmovss  [rsp+158h+var_FC], xmm0
    vmovaps xmm8, xmm0
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm15
    vblendvps xmm0, xmm3, xmm12, xmm0
    vdivss  xmm1, xmm12, xmm0
    vmulss  xmm0, xmm4, xmm1
    vmovss  [rsp+158h+var_108], xmm0
    vmulss  xmm0, xmm6, xmm1
    vmovss  [rsp+158h+var_104], xmm0
    vmulss  xmm0, xmm5, xmm1
    vmovss  [rsp+158h+var_100], xmm0
  }
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 699, ASSERT_TYPE_ASSERT, "(m_pAI->pNavigator)", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  v41 = this->m_pAI->pNavigator->Get3DNavigator(this->m_pAI->pNavigator);
  v42 = v41 == NULL;
  if ( !v41 )
  {
    v43 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 701, ASSERT_TYPE_ASSERT, "(pNav3D)", (const char *)&queryFormat, "pNav3D");
    v42 = !v43;
    if ( v43 )
      __debugbreak();
  }
  __asm
  {
    vmovaps [rsp+158h+var_B8], xmm13
    vxorps  xmm11, xmm11, xmm11
    vxorpd  xmm14, xmm14, xmm14
    vmovss  xmm0, dword ptr [rdi+4]
    vsubss  xmm6, xmm0, dword ptr [rsi+4]
    vmovss  xmm1, dword ptr [rdi+8]
    vsubss  xmm5, xmm1, dword ptr [rsi+8]
    vmovss  xmm10, dword ptr [rdi]
    vsubss  xmm7, xmm10, dword ptr [rsi]
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm3, xmm1
    vsqrtss xmm4, xmm2, xmm2
    vcomiss xmm4, xmm8
    vcmpless xmm0, xmm4, xmm15
    vblendvps xmm0, xmm4, xmm12, xmm0
    vdivss  xmm1, xmm12, xmm0
    vmulss  xmm7, xmm1, xmm7
    vmulss  xmm6, xmm6, xmm1
    vmulss  xmm9, xmm5, xmm1
    vcomiss xmm8, xmm11
  }
  if ( v42 )
  {
    __asm
    {
      vmovsd  [rsp+158h+var_118], xmm14
      vcvtss2sd xmm0, xmm8, xmm8
      vmovsd  [rsp+158h+var_120], xmm0
    }
    v65 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 715, ASSERT_TYPE_ASSERT, "( velocityDeltaPerFrame ) > ( 0.0f )", "%s > %s\n\t%g, %g", "velocityDeltaPerFrame", "0.0f", v109, v111);
    v42 = !v65;
    if ( v65 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm3, xmm2, xmm1
    vcomiss xmm3, xmm11
  }
  if ( v42 )
  {
    __asm
    {
      vmovsd  [rsp+158h+var_118], xmm14
      vcvtss2sd xmm0, xmm3, xmm3
      vmovsd  [rsp+158h+var_120], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 716, ASSERT_TYPE_ASSERT, "( Vec3LengthSq( currentMoveDeltaToDesired ) ) > ( 0.0f )", "%s > %s\n\t%g, %g", "Vec3LengthSq( currentMoveDeltaToDesired )", "0.0f", v110, v112) )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm7, xmm8
    vaddss  xmm10, xmm0, dword ptr [rsi]
    vmovss  dword ptr [r14], xmm10
    vmulss  xmm0, xmm6, xmm8
    vaddss  xmm13, xmm0, dword ptr [rsi+4]
    vmovss  dword ptr [r14+4], xmm13
    vmulss  xmm0, xmm9, xmm8
    vaddss  xmm9, xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [r14+8], xmm9
    vmovss  xmm4, dword ptr [rsi]
    vmovss  xmm6, dword ptr [rsi+4]
    vmovss  xmm7, dword ptr [rsi+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm15
    vblendvps xmm0, xmm3, xmm12, xmm0
    vdivss  xmm5, xmm12, xmm0
    vmulss  xmm0, xmm4, xmm5
    vmulss  xmm3, xmm0, [rsp+158h+var_108]
    vmulss  xmm1, xmm6, xmm5
    vmulss  xmm2, xmm1, [rsp+158h+var_104]
    vmulss  xmm0, xmm7, xmm5
    vmulss  xmm1, xmm0, [rsp+158h+var_100]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, cs:__real@3f733333
    vmovaps xmm13, [rsp+158h+var_B8]
  }
  _R11 = &v118;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
AICommonInterface::ClearPath
==============
*/
void AICommonInterface::ClearPath(AICommonInterface *this)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 214, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  Nav_ClearGoalPos(this->m_pAI->pNavigator);
}

/*
==============
AICommonInterface::DissociateSentient
==============
*/
void AICommonInterface::DissociateSentient(AICommonInterface *this, sentient_s *other)
{
  ai_common_t *m_pAI; 
  sentient_s *sentient; 
  gentity_s *ent; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 232, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 233, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( this->m_pAI->sentient == other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 234, ASSERT_TYPE_ASSERT, "(m_pAI->sentient != other)", (const char *)&queryFormat, "m_pAI->sentient != other") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 235, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  m_pAI = this->m_pAI;
  sentient = m_pAI->sentient;
  if ( sentient && sentient->ai && m_pAI->ent )
  {
    SentientInfo_Clear(sentient, other);
    if ( other == AICommonInterface::GetTargetSentient(this) )
      Sentient_SetEnemy(this->m_pAI->sentient, NULL, 1, 1);
    ent = this->m_pAI->ent;
    if ( other->ent->s.number == ent->s.otherEntityNum )
      ent->s.otherEntityNum = 2047;
  }
}

/*
==============
G_GetAngleIndex
==============
*/

int __fastcall G_GetAngleIndex(double angle, const float threshold, double _XMM2_8, double _XMM3_8)
{
  char v4; 
  int result; 

  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vcomiss xmm0, xmm2
    vxorps  xmm3, xmm3, xmm3
  }
  if ( v4 )
  {
    __asm
    {
      vaddss  xmm0, xmm0, cs:__real@43340000
      vsubss  xmm1, xmm0, xmm1
      vmulss  xmm2, xmm1, cs:__real@3cb60b61
      vroundss xmm3, xmm3, xmm2, 2
    }
  }
  else
  {
    __asm
    {
      vaddss  xmm0, xmm0, xmm1
      vmulss  xmm1, xmm0, cs:__real@3cb60b61
      vaddss  xmm2, xmm1, cs:__real@40800000
      vroundss xmm3, xmm3, xmm2, 1
    }
  }
  __asm
  {
    vaddss  xmm2, xmm3, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm3, xmm1, xmm2, 1
    vcvttss2si eax, xmm3
  }
  return result;
}

/*
==============
G_GetAngleIndices
==============
*/

void __fastcall G_GetAngleIndices(double angle, double threshold, int *outAngleIndices, unsigned int *outAngleIndexCount)
{
  unsigned int v32; 
  __int64 v69; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovups ymm2, cs:__ymm@4307000042b400004234000000000000c2340000c2b40000c3070000c3340000
    vmovss  xmm5, cs:__real@3f000000
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps xmmword ptr [r11-28h], xmm7
    vmovss  xmm7, cs:__real@3cb60b61
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovaps xmmword ptr [r11-48h], xmm9
    vmovss  xmm9, cs:__real@43340000
    vmovaps xmmword ptr [r11-58h], xmm11
    vxorps  xmm11, xmm11, xmm11
    vcomiss xmm0, xmm11
    vmovups [rsp+0A8h+var_A0], ymm2
    vmovss  dword ptr [r11-80h], xmm9
    vmovaps xmmword ptr [r11-68h], xmm12
    vmovaps xmm8, xmm1
    vmovaps xmm4, xmm0
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm2, xmm2, xmm2
    vaddss  xmm0, xmm4, xmm8
    vmulss  xmm0, xmm0, xmm7
    vaddss  xmm1, xmm0, cs:__real@40800000
    vroundss xmm2, xmm2, xmm1, 1
    vaddss  xmm2, xmm2, xmm5
    vroundss xmm2, xmm6, xmm2, 1
    vmovss  xmm1, cs:__real@c233999a
    vcvttss2si ecx, xmm2
    vmovss  xmm2, cs:__real@4233999a
  }
  _RAX = _ECX;
  v32 = 1;
  *outAngleIndices = _ECX;
  *outAngleIndexCount = 1;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+rax*4+0A8h+var_A0]
    vcmpltss xmm3, xmm0, xmm4
    vblendvps xmm12, xmm1, xmm2, xmm3
    vaddss  xmm0, xmm12, xmm4
    vmulss  xmm3, xmm0, cs:__real@3b360b61
    vaddss  xmm1, xmm3, xmm5
    vroundss xmm2, xmm6, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vcomiss xmm1, xmm11
    vmovss  [rsp+0A8h+var_A8], xmm12
    vxorps  xmm3, xmm3, xmm3
    vaddss  xmm0, xmm1, xmm8
    vmulss  xmm1, xmm0, xmm7
    vaddss  xmm2, xmm1, cs:__real@40800000
    vroundss xmm3, xmm3, xmm2, 1
    vaddss  xmm1, xmm3, xmm5
    vroundss xmm2, xmm6, xmm1, 1
    vcvttss2si eax, xmm2
  }
  if ( _ECX != _EAX )
  {
    outAngleIndices[1] = _EAX;
    v32 = ++*outAngleIndexCount;
  }
  __asm
  {
    vsubss  xmm0, xmm4, xmm12
    vmulss  xmm4, xmm0, cs:__real@3b360b61
    vmovaps xmm12, [rsp+0A8h+var_68]
    vxorps  xmm1, xmm1, xmm1
    vaddss  xmm2, xmm4, xmm5
    vmovss  xmm0, xmm1, xmm2
    vroundss xmm3, xmm6, xmm0, 1
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm0, xmm1, cs:__real@43b40000
    vcomiss xmm0, xmm11
    vmovaps xmm11, [rsp+0A8h+var_58]
    vxorps  xmm3, xmm3, xmm3
  }
  if ( _ECX >= _EAX )
  {
    __asm
    {
      vaddss  xmm0, xmm8, xmm0
      vmulss  xmm1, xmm0, xmm7
      vaddss  xmm2, xmm1, cs:__real@40800000
      vroundss xmm3, xmm3, xmm2, 1
    }
  }
  else
  {
    __asm
    {
      vaddss  xmm0, xmm0, xmm9
      vsubss  xmm1, xmm0, xmm8
      vmulss  xmm2, xmm1, xmm7
      vroundss xmm3, xmm3, xmm2, 2
    }
  }
  __asm { vmovaps xmm9, [rsp+0A8h+var_48] }
  v69 = 0i64;
  __asm
  {
    vmovaps xmm8, [rsp+0A8h+var_38]
    vmovaps xmm7, [rsp+0A8h+var_28]
    vaddss  xmm1, xmm3, xmm5
    vroundss xmm2, xmm6, xmm1, 1
    vmovaps xmm6, [rsp+0A8h+var_18]
    vcvttss2si r8d, xmm2
  }
  if ( v32 )
  {
    while ( outAngleIndices[v69] != _ER8 )
    {
      v32 = *outAngleIndexCount;
      v69 = (unsigned int)(v69 + 1);
      if ( (unsigned int)v69 >= *outAngleIndexCount )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    outAngleIndices[v32] = _ER8;
    ++*outAngleIndexCount;
  }
}

/*
==============
AICommonInterface::GetPathFinalGoal
==============
*/
void AICommonInterface::GetPathFinalGoal(AICommonInterface *this, vec3_t *vFinalGoal)
{
  bool ShouldPathOutOfBounds; 
  AINavigator *pNavigator; 

  ShouldPathOutOfBounds = AINavigator::ShouldPathOutOfBounds(this->m_pAI->pNavigator);
  pNavigator = this->m_pAI->pNavigator;
  if ( ShouldPathOutOfBounds )
    Nav_GetRequestedGoalPos(pNavigator, vFinalGoal);
  else
    Nav_GetGoalPos(pNavigator, vFinalGoal);
}

/*
==============
AICommonInterface::GetTargetLookPosition
==============
*/
void AICommonInterface::GetTargetLookPosition(AICommonInterface *this, vec3_t *position)
{
  gentity_s *TargetEntity; 
  const sentient_s *sentient; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 304, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 305, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  if ( !TargetEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 308, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
    __debugbreak();
  sentient = TargetEntity->sentient;
  if ( sentient )
    Sentient_GetEyePosition(sentient, position);
  else
    G_Utils_EntityCentroid(TargetEntity, position);
}

/*
==============
AICommonInterface::GetTargetPosition
==============
*/
void AICommonInterface::GetTargetPosition(AICommonInterface *this, vec3_t *position)
{
  sentient_s *sentient; 
  unsigned __int16 number; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 255, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 256, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  sentient = this->m_pAI->sentient;
  number = sentient->targetEnt.number;
  if ( !number )
    goto LABEL_26;
  v6 = number;
  v7 = number - 1;
  if ( v7 >= 0x800 )
  {
    LODWORD(v9) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v8 = v6 - 1;
  if ( g_entities[v8].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v8] )
  {
    LODWORD(v10) = sentient->targetEnt.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v10) )
      __debugbreak();
  }
  if ( !sentient->targetEnt.number )
  {
LABEL_26:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 257, ASSERT_TYPE_ASSERT, "(m_pAI->sentient->targetEnt.isDefined())", (const char *)&queryFormat, "m_pAI->sentient->targetEnt.isDefined()") )
      __debugbreak();
  }
  *position = EntHandle::ent(&this->m_pAI->sentient->targetEnt)->r.currentOrigin;
}

/*
==============
AICommonInterface::GetTurretUsed
==============
*/
gentity_s *AICommonInterface::GetTurretUsed(AICommonInterface *this)
{
  return this->m_pAI->turret.pTurret;
}

/*
==============
AICommonInterface::HasSecondaryTargets
==============
*/
bool AICommonInterface::HasSecondaryTargets(AICommonInterface *this)
{
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 265, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  return this->m_pAI->threat.numSecondaryTarget > 0;
}

/*
==============
AICommonInterface::IsUsingTurret
==============
*/
bool AICommonInterface::IsUsingTurret(AICommonInterface *this)
{
  gentity_s *pTurret; 
  EntHandle *p_ownerNum; 
  bool result; 

  pTurret = this->m_pAI->turret.pTurret;
  result = 0;
  if ( pTurret )
  {
    p_ownerNum = &pTurret->r.ownerNum;
    if ( EntHandle::isDefined(&pTurret->r.ownerNum) )
    {
      if ( EntHandle::ent(p_ownerNum) == this->m_pAI->ent )
        return 1;
    }
  }
  return result;
}

/*
==============
AICommonInterface::NearClaimNode
==============
*/

bool __fastcall AICommonInterface::NearClaimNode(AICommonInterface *this, double dist)
{
  pathnode_t *pClaimedNode; 
  bool result; 
  vec3_t pos; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 487, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 488, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  pClaimedNode = this->m_pAI->sentient->pClaimedNode;
  if ( pClaimedNode )
  {
    pathnode_t::GetPos(pClaimedNode, &pos);
    __asm { vmulss  xmm6, xmm6, xmm6 }
    _RBX = this->m_pAI->ent;
    if ( AICommonInterface::Use3DPathing(this) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+68h+pos]
        vsubss  xmm3, xmm0, dword ptr [rbx+130h]
        vmovss  xmm1, dword ptr [rsp+68h+pos+4]
        vsubss  xmm2, xmm1, dword ptr [rbx+134h]
        vmovss  xmm0, dword ptr [rsp+68h+pos+8]
        vsubss  xmm4, xmm0, dword ptr [rbx+138h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vcomiss xmm6, xmm2
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+138h]
        vsubss  xmm1, xmm0, dword ptr [rsp+68h+pos+8]
        vmulss  xmm2, xmm1, xmm1
        vcomiss xmm2, cs:__real@45c80000
        vmovss  xmm0, dword ptr [rsp+68h+pos]
        vmovss  xmm1, dword ptr [rsp+68h+pos+4]
        vsubss  xmm2, xmm1, dword ptr [rbx+134h]
        vsubss  xmm4, xmm0, dword ptr [rbx+130h]
        vmulss  xmm3, xmm2, xmm2
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm1, xmm3, xmm0
        vcomiss xmm6, xmm1
      }
    }
    result = 1;
  }
  else
  {
    result = 0;
  }
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
  return result;
}

/*
==============
AICommonInterface::NotifyKnownEvent
==============
*/
void AICommonInterface::NotifyKnownEvent(AICommonInterface *this, gentity_s *pOther, const vec3_t *position, unsigned __int8 reason, int time)
{
  int v5; 
  scrContext_t *v9; 

  v5 = reason;
  v9 = ScriptContext_Server();
  Scr_AddVector(v9, position->v);
  Scr_AddInt(v9, time);
  Scr_AddInt(v9, v5);
  if ( pOther )
    GScr_AddEntity(pOther);
  else
    Scr_AddUndefined(v9);
  GScr_Notify(this->m_pAI->ent, scr_const.known_event, 4u);
}

/*
==============
AICommonInterface::PointAt
==============
*/
bool AICommonInterface::PointAt(AICommonInterface *this, const vec3_t *vPoint, const vec3_t *vGoalPos)
{
  bool is3D; 

  is3D = AICommonInterface::Use3DPathing(this);
  __asm
  {
    vmovss  xmm3, cs:__real@40800000; distSQ
    vmovss  xmm2, cs:__real@45c80000; heightDistSQ
  }
  return AI_ComparePointsInternal(vPoint, vGoalPos, *(double *)&_XMM2, *(double *)&_XMM3, is3D);
}

/*
==============
AICommonInterface::PointAtGoal
==============
*/
bool AICommonInterface::PointAtGoal(AICommonInterface *this, const vec3_t *vPoint, const ai_goal_t *goal)
{
  bool is3D; 
  const gentity_s *v10; 
  unsigned int Instance; 
  bool result; 

  _RBX = goal;
  is3D = AICommonInterface::Use3DPathing(this);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  xmm1, dword ptr [rbx+10h]
    vmulss  xmm3, xmm0, xmm0; distSQ
    vmulss  xmm2, xmm1, xmm1; heightDistSQ
  }
  result = 0;
  if ( AI_ComparePointsInternal(vPoint, &_RBX->pos, *(double *)&_XMM2, *(double *)&_XMM3, is3D) )
  {
    if ( !EntHandle::isDefined(&_RBX->hVolume) )
      return 1;
    v10 = EntHandle::ent(&_RBX->hVolume);
    Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v10);
    if ( PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, vPoint, Instance, v10) )
      return 1;
  }
  return result;
}

/*
==============
AICommonInterface::PointNear
==============
*/
bool AICommonInterface::PointNear(AICommonInterface *this, const vec3_t *vPoint, const vec3_t *vGoalPos)
{
  bool is3D; 

  is3D = AICommonInterface::Use3DPathing(this);
  __asm
  {
    vmovss  xmm3, cs:__real@44610000; distSQ
    vmovss  xmm2, cs:__real@45c80000; heightDistSQ
  }
  return AI_ComparePointsInternal(vPoint, vGoalPos, *(double *)&_XMM2, *(double *)&_XMM3, is3D);
}

/*
==============
AICommonInterface::PointNearGoal
==============
*/

bool __fastcall AICommonInterface::PointNearGoal(AICommonInterface *this, const vec3_t *vPoint, const ai_goal_t *goal, double buffer)
{
  bool is3D; 
  bool result; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = goal;
  __asm { vmovaps xmm6, xmm3 }
  is3D = AICommonInterface::Use3DPathing(this);
  __asm
  {
    vaddss  xmm0, xmm6, dword ptr [rbx+0Ch]
    vmovss  xmm1, dword ptr [rbx+10h]
    vmulss  xmm3, xmm0, xmm0; distSQ
    vmulss  xmm2, xmm1, xmm1; heightDistSQ
  }
  result = AI_ComparePointsInternal(vPoint, &_RBX->pos, *(double *)&_XMM2, *(double *)&_XMM3, is3D);
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

/*
==============
AICommonInterface::PointNearNode
==============
*/
bool AICommonInterface::PointNearNode(AICommonInterface *this, const vec3_t *vPoint, const pathnode_t *node)
{
  ai_common_t *m_pAI; 
  AINavigator *pNavigator; 
  bool v7; 
  vec3_t pos; 

  m_pAI = this->m_pAI;
  _RBX = vPoint;
  v7 = 0;
  if ( m_pAI )
  {
    pNavigator = m_pAI->pNavigator;
    if ( pNavigator )
    {
      if ( pNavigator->Is3D(pNavigator) )
        v7 = 1;
    }
  }
  pathnode_t::GetPos((pathnode_t *)node, &pos);
  if ( v7 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+48h+pos]
      vsubss  xmm3, xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rsp+48h+pos+4]
      vsubss  xmm2, xmm1, dword ptr [rbx+4]
      vmovss  xmm0, dword ptr [rsp+48h+pos+8]
      vsubss  xmm4, xmm0, dword ptr [rbx+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, cs:__real@43610000
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+8]
      vsubss  xmm1, xmm0, dword ptr [rsp+48h+pos+8]
      vmulss  xmm2, xmm1, xmm1
      vcomiss xmm2, cs:__real@45c80000
      vmovss  xmm0, dword ptr [rsp+48h+pos]
      vmovss  xmm1, dword ptr [rsp+48h+pos+4]
      vsubss  xmm2, xmm1, dword ptr [rbx+4]
      vsubss  xmm4, xmm0, dword ptr [rbx]
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm3, xmm0
      vcomiss xmm1, cs:__real@43610000
    }
  }
  return !v7;
}

/*
==============
AICommonInterface::PointNearPoint
==============
*/

bool __fastcall AICommonInterface::PointNearPoint(AICommonInterface *this, const vec3_t *vPoint, const vec3_t *vGoalPos, double buffer)
{
  bool is3D; 
  bool result; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  is3D = AICommonInterface::Use3DPathing(this);
  __asm
  {
    vmovss  xmm2, cs:__real@45c80000; heightDistSQ
    vmulss  xmm3, xmm6, xmm6; distSQ
  }
  result = AI_ComparePointsInternal(vPoint, vGoalPos, *(double *)&_XMM2, *(double *)&_XMM3, is3D);
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

/*
==============
AICommonInterface::PointNearPointSqDist
==============
*/

bool __fastcall AICommonInterface::PointNearPointSqDist(AICommonInterface *this, const vec3_t *vPoint, const vec3_t *vGoalPos, double bufferSq)
{
  bool is3D; 
  bool result; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  is3D = AICommonInterface::Use3DPathing(this);
  __asm
  {
    vmovss  xmm2, cs:__real@45c80000; heightDistSQ
    vmovaps xmm3, xmm6; distSQ
  }
  result = AI_ComparePointsInternal(vPoint, vGoalPos, *(double *)&_XMM2, *(double *)&_XMM3, is3D);
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

/*
==============
AICommonInterface::RemoveEntRefs
==============
*/
void AICommonInterface::RemoveEntRefs(ai_common_t *self)
{
  AISecondaryTarget *secondaryTargets; 
  __int64 v3; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 664, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  SentientHandle::setSentient(&self->threat.pFavoriteEnemy, NULL);
  secondaryTargets = self->threat.secondaryTargets;
  v3 = 2i64;
  do
  {
    EntHandle::setEnt(&secondaryTargets->entity, NULL);
    ++secondaryTargets;
    --v3;
  }
  while ( v3 );
}

/*
==============
SentientInfo_Clear
==============
*/
void SentientInfo_Clear(sentient_s *self, sentient_s *other)
{
  sentient_info_t *v4; 
  __int64 v5; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 100, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 101, ASSERT_TYPE_ASSERT, "( other )", (const char *)&queryFormat, "other") )
    __debugbreak();
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 88, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->ai && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 89, ASSERT_TYPE_ASSERT, "( self->ai )", (const char *)&queryFormat, "self->ai") )
    __debugbreak();
  if ( !self->ai->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 90, ASSERT_TYPE_ASSERT, "( self->ai->sentientInfo )", (const char *)&queryFormat, "self->ai->sentientInfo") )
    __debugbreak();
  if ( !other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 91, ASSERT_TYPE_ASSERT, "( enemy )", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( (unsigned int)(other - level.sentients) >= level.maxSentients )
  {
    LODWORD(v5) = other - level.sentients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 92, ASSERT_TYPE_ASSERT, "(unsigned)( enemy - level.sentients ) < (unsigned)( level.maxSentients )", "enemy - level.sentients doesn't index level.maxSentients\n\t%i not in [0, %i)", v5, level.maxSentients) )
      __debugbreak();
  }
  v4 = &self->ai->sentientInfo[other - level.sentients];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 106, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
    __debugbreak();
  *(_QWORD *)&v4->VisCache.bVisible = 0i64;
  *(_QWORD *)&v4->VisCache.iLastVisTime = 0i64;
  *(_QWORD *)&v4->iLastAttackMeTime = 0i64;
  *(_QWORD *)&v4->attackTime = 0i64;
  *(_QWORD *)v4->vLastKnownLocalPos.v = 0i64;
  *(_QWORD *)&v4->vLastKnownLocalPos.z = 0i64;
  v4->pLastKnownNode = NULL;
  *(_QWORD *)&v4->lastKnownTacPoint.m_PointID = 0i64;
  if ( SV_BotIsBotEnt(self->ent) )
    SV_BotClearBotSentientInfo(self, other);
  v4->lastKnownGroundEntNum = 2047;
}

/*
==============
AICommonInterface::SentientInfo_Copy
==============
*/
void AICommonInterface::SentientInfo_Copy(AICommonInterface *this, ai_common_t *pFrom, int index, unsigned __int8 reason)
{
  __int64 v5; 
  sentient_info_t *sentientInfo; 
  __int64 v9; 
  sentient_info_t *v10; 
  int v11; 
  ai_common_t *m_pAI; 
  const gentity_s *ent; 
  int v14; 
  scrContext_t *v15; 
  vec3_t outLastKnownPos; 

  v5 = index;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 352, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 353, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  if ( !pFrom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 354, ASSERT_TYPE_ASSERT, "( pFrom )", (const char *)&queryFormat, "pFrom") )
    __debugbreak();
  sentientInfo = pFrom->sentientInfo;
  v9 = v5 << 6;
  v10 = this->m_pAI->sentientInfo;
  v11 = *(int *)((char *)&sentientInfo->lastKnownPosTime + v9);
  if ( *(int *)((char *)&v10->lastKnownPosTime + v9) < v11 )
  {
    *(int *)((char *)&v10->lastKnownPosTime + v9) = v11;
    *(float *)((char *)v10->vLastKnownLocalPos.v + v9) = *(float *)((char *)sentientInfo->vLastKnownLocalPos.v + v9);
    *(float *)((char *)&v10->vLastKnownLocalPos.v[1] + v9) = *(float *)((char *)&sentientInfo->vLastKnownLocalPos.v[1] + v9);
    *(float *)((char *)&v10->vLastKnownLocalPos.v[2] + v9) = *(float *)((char *)&sentientInfo->vLastKnownLocalPos.v[2] + v9);
    *(__int16 *)((char *)&v10->lastKnownGroundEntNum + v9) = *(__int16 *)((char *)&sentientInfo->lastKnownGroundEntNum + v9);
    *(pathnode_t **)((char *)&v10->pLastKnownNode + v9) = *(pathnode_t **)((char *)&sentientInfo->pLastKnownNode + v9);
    *(tacpoint_ref_t *)((char *)&v10->lastKnownTacPoint + v9) = *(tacpoint_ref_t *)((char *)&sentientInfo->lastKnownTacPoint + v9);
    *(&v10->lastKnownReason + v9) = reason;
    SentientInfo_GetLastKnownPos((const sentient_info_t *)((char *)this->m_pAI->sentientInfo + v9), &outLastKnownPos);
    m_pAI = this->m_pAI;
    ent = m_pAI->ent;
    v14 = *(int *)((char *)&m_pAI->sentientInfo->lastKnownPosTime + v9);
    v15 = ScriptContext_Server();
    Scr_AddVector(v15, outLastKnownPos.v);
    Scr_AddInt(v15, v14);
    Scr_AddInt(v15, reason);
    if ( ent )
      GScr_AddEntity(ent);
    else
      Scr_AddUndefined(v15);
    GScr_Notify(this->m_pAI->ent, scr_const.known_event, 4u);
  }
}

/*
==============
SentientInfo_ForceCopy
==============
*/
void SentientInfo_ForceCopy(sentient_info_t *pTo, const sentient_info_t *pFrom, unsigned __int8 reason)
{
  pTo->lastKnownPosTime = pFrom->lastKnownPosTime;
  pTo->vLastKnownLocalPos = pFrom->vLastKnownLocalPos;
  pTo->lastKnownGroundEntNum = pFrom->lastKnownGroundEntNum;
  pTo->pLastKnownNode = pFrom->pLastKnownNode;
  pTo->lastKnownTacPoint = pFrom->lastKnownTacPoint;
  pTo->lastKnownReason = reason;
}

/*
==============
SentientInfo_GetLastKnownPos
==============
*/
void SentientInfo_GetLastKnownPos(const sentient_info_t *pInfo, vec3_t *outLastKnownPos)
{
  __int16 lastKnownGroundEntNum; 
  float v13; 
  int v16; 
  int v17; 
  int v18; 
  tmat33_t<vec3_t> axis; 

  _RBX = pInfo;
  lastKnownGroundEntNum = pInfo->lastKnownGroundEntNum;
  _RDI = outLastKnownPos;
  if ( (unsigned __int16)(lastKnownGroundEntNum - 2046) <= 1u )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+20h]
      vmovss  dword ptr [rdi], xmm3
    }
    outLastKnownPos->v[1] = _RBX->vLastKnownLocalPos.v[1];
    v13 = _RBX->vLastKnownLocalPos.v[2];
    goto LABEL_6;
  }
  _RSI = &_RBX->vLastKnownLocalPos;
  if ( !G_IsEntityInUse(lastKnownGroundEntNum) )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rsi]
      vmovss  dword ptr [rdi], xmm3
    }
    _RDI->v[1] = _RBX->vLastKnownLocalPos.v[1];
    v13 = _RBX->vLastKnownLocalPos.v[2];
LABEL_6:
    _RDI->v[2] = v13;
    goto LABEL_7;
  }
  _RBX = &g_entities[_RBX->lastKnownGroundEntNum];
  AnglesToAxis(&_RBX->r.currentAngles, &axis);
  MatrixTransformVector(_RSI, &axis, _RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vaddss  xmm3, xmm0, dword ptr [rbx+130h]
    vmovss  dword ptr [rdi], xmm3
    vmovss  xmm1, dword ptr [rbx+134h]
    vaddss  xmm0, xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rdi+4], xmm0
    vmovss  xmm2, dword ptr [rbx+138h]
    vaddss  xmm1, xmm2, dword ptr [rdi+8]
    vmovss  dword ptr [rdi+8], xmm1
  }
LABEL_7:
  __asm { vmovss  [rsp+78h+var_48], xmm3 }
  if ( (v16 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 155, ASSERT_TYPE_ASSERT, "(!IS_NAN( outLastKnownPos[0] ))", (const char *)&queryFormat, "!IS_NAN( outLastKnownPos[0] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+78h+var_48], xmm0
  }
  if ( (v17 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 156, ASSERT_TYPE_ASSERT, "(!IS_NAN( outLastKnownPos[1] ))", (const char *)&queryFormat, "!IS_NAN( outLastKnownPos[1] )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+78h+var_48], xmm0
  }
  if ( (v18 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 157, ASSERT_TYPE_ASSERT, "(!IS_NAN( outLastKnownPos[2] ))", (const char *)&queryFormat, "!IS_NAN( outLastKnownPos[2] )") )
    __debugbreak();
}

/*
==============
SentientInfo_SetLastKnownPos
==============
*/
void SentientInfo_SetLastKnownPos(sentient_info_t *pInfo, const sentient_s *pSentient, const vec3_t *vLastKnownPos)
{
  gentity_s *v6; 
  __int16 groundEntNum; 
  actor_s *actor; 
  playerState_s *EntityPlayerState; 
  vec3_t in1; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  _R14 = vLastKnownPos;
  if ( !pSentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 166, ASSERT_TYPE_ASSERT, "(pSentient)", (const char *)&queryFormat, "pSentient") )
    __debugbreak();
  v6 = NULL;
  groundEntNum = 2047;
  actor = pSentient->ent->actor;
  if ( actor )
  {
    groundEntNum = actor->Physics.groundEntNum;
  }
  else
  {
    EntityPlayerState = G_GetEntityPlayerState(pSentient->ent);
    if ( !EntityPlayerState )
      goto LABEL_11;
    groundEntNum = EntityPlayerState->movingPlatforms.m_movingPlatformEntity;
  }
  if ( (unsigned __int16)(groundEntNum - 2046) > 1u && G_IsEntityInUse(groundEntNum) )
    v6 = &g_entities[groundEntNum];
LABEL_11:
  if ( v6 )
  {
    AnglesToAxis(&v6->r.currentAngles, &axis);
    MatrixInverse(&axis, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vsubss  xmm1, xmm0, dword ptr [rdi+130h]
      vmovss  xmm2, dword ptr [r14+4]
      vsubss  xmm0, xmm2, dword ptr [rdi+134h]
      vmovss  dword ptr [rsp+0C8h+in1], xmm1
      vmovss  xmm1, dword ptr [r14+8]
      vsubss  xmm2, xmm1, dword ptr [rdi+138h]
      vmovss  dword ptr [rsp+0C8h+in1+8], xmm2
      vmovss  dword ptr [rsp+0C8h+in1+4], xmm0
    }
    MatrixTransformVector(&in1, &out, &pInfo->vLastKnownLocalPos);
    pInfo->lastKnownGroundEntNum = groundEntNum;
  }
  else
  {
    pInfo->vLastKnownLocalPos.v[0] = _R14->v[0];
    pInfo->vLastKnownLocalPos.v[1] = _R14->v[1];
    pInfo->vLastKnownLocalPos.v[2] = _R14->v[2];
    pInfo->lastKnownGroundEntNum = 2047;
  }
}

/*
==============
Sentient_GetSentientInfo
==============
*/
sentient_info_t *Sentient_GetSentientInfo(const sentient_s *self, const sentient_s *enemy)
{
  __int64 v5; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 88, ASSERT_TYPE_ASSERT, "( self )", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->ai && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 89, ASSERT_TYPE_ASSERT, "( self->ai )", (const char *)&queryFormat, "self->ai") )
    __debugbreak();
  if ( !self->ai->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 90, ASSERT_TYPE_ASSERT, "( self->ai->sentientInfo )", (const char *)&queryFormat, "self->ai->sentientInfo") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 91, ASSERT_TYPE_ASSERT, "( enemy )", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  if ( (unsigned int)(enemy - level.sentients) >= level.maxSentients )
  {
    LODWORD(v5) = enemy - level.sentients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 92, ASSERT_TYPE_ASSERT, "(unsigned)( enemy - level.sentients ) < (unsigned)( level.maxSentients )", "enemy - level.sentients doesn't index level.maxSentients\n\t%i not in [0, %i)", v5, level.maxSentients) )
      __debugbreak();
  }
  return &self->ai->sentientInfo[enemy - level.sentients];
}

/*
==============
AICommonInterface::SetGoal
==============
*/

void __fastcall AICommonInterface::SetGoal(ai_goal_t *goal, const vec3_t *vPoint, double fRadius, double fHeight, bool bEnforceMinHeight)
{
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  _RBX = goal;
  __asm
  {
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm8, xmm2
    vmovaps xmm6, xmm3
  }
  if ( !goal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 506, ASSERT_TYPE_ASSERT, "(goal)", (const char *)&queryFormat, "goal") )
    __debugbreak();
  _RBX->pos.v[0] = vPoint->v[0];
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm8, xmm7
  }
  _RBX->pos.v[1] = vPoint->v[1];
  _RBX->pos.v[2] = vPoint->v[2];
  __asm
  {
    vcomiss xmm6, xmm7
    vmaxss  xmm0, xmm8, cs:__real@40800000
    vmovss  dword ptr [rbx+0Ch], xmm0
  }
  if ( bEnforceMinHeight )
  {
    __asm
    {
      vmaxss  xmm0, xmm6, cs:__real@42a00000
      vmovss  dword ptr [rbx+10h], xmm0
    }
  }
  else
  {
    __asm { vmovss  dword ptr [rbx+10h], xmm6 }
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
  }
}

/*
==============
AICommonInterface::SetGoalHeight
==============
*/

void __fastcall AICommonInterface::SetGoalHeight(ai_goal_t *goal, double height, bool bEnforceMin)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = goal;
  __asm { vmovaps xmm6, xmm1 }
  if ( !goal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 532, ASSERT_TYPE_ASSERT, "(goal)", (const char *)&queryFormat, "goal") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( bEnforceMin )
  {
    __asm
    {
      vmaxss  xmm0, xmm6, cs:__real@42a00000
      vmovss  dword ptr [rbx+10h], xmm0
    }
  }
  else
  {
    __asm { vmovss  dword ptr [rbx+10h], xmm6 }
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
AICommonInterface::SetGoalRadius
==============
*/

void __fastcall AICommonInterface::SetGoalRadius(ai_goal_t *goal, double radius)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = goal;
  __asm { vmovaps xmm6, xmm1 }
  if ( !goal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 518, ASSERT_TYPE_ASSERT, "(goal)", (const char *)&queryFormat, "goal") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vmaxss  xmm0, xmm6, cs:__real@40800000
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rbx+0Ch], xmm0
  }
}

/*
==============
AICommonInterface::Use3DPathing
==============
*/
bool AICommonInterface::Use3DPathing(AICommonInterface *this)
{
  AINavigator *pNavigator; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 743, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  pNavigator = this->m_pAI->pNavigator;
  return pNavigator && pNavigator->Is3D(pNavigator);
}

/*
==============
VisCache_Copy
==============
*/
void VisCache_Copy(vis_cache_t *pDstCache, const vis_cache_t *pSrcCache)
{
  _RBX = pSrcCache;
  _RDI = pDstCache;
  if ( !pDstCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 48, ASSERT_TYPE_ASSERT, "(pDstCache)", (const char *)&queryFormat, "pDstCache") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 49, ASSERT_TYPE_ASSERT, "(pSrcCache)", (const char *)&queryFormat, "pSrcCache") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rdi], xmm0
  }
}

/*
==============
VisCache_UpdateInternal
==============
*/
void VisCache_UpdateInternal(vis_cache_t *pCache, int bVisible, int bObscured, bool bPeriphVisible)
{
  int iLastUpdateTime; 
  int iLastVisTime; 
  bool v10; 
  int time; 

  if ( !pCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 63, ASSERT_TYPE_ASSERT, "(pCache)", (const char *)&queryFormat, "pCache") )
    __debugbreak();
  iLastUpdateTime = pCache->iLastUpdateTime;
  iLastVisTime = pCache->iLastVisTime;
  pCache->bPeripherallyVisible = bPeriphVisible;
  pCache->bVisible = bVisible != 0;
  pCache->bObscured = bObscured != 0;
  pCache->iLastUpdateTime = level.time;
  if ( bVisible )
  {
    v10 = iLastUpdateTime == iLastVisTime;
    time = level.time;
    if ( !v10 && level.time - iLastVisTime > 4000 )
    {
      pCache->iFirstVisTime = level.time;
      time = level.time;
    }
    pCache->iLastVisTime = time;
  }
}

