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
bool AI_ComparePointsInternal(const vec3_t *vPoint1, const vec3_t *vPoint2, float heightDistSQ, float distSQ, bool is3D)
{
  float v5; 
  float v6; 
  float v8; 

  if ( is3D )
  {
    v5 = vPoint2->v[1] - vPoint1->v[1];
    v6 = vPoint2->v[2] - vPoint1->v[2];
    return distSQ >= (float)((float)((float)(v5 * v5) + (float)((float)(vPoint2->v[0] - vPoint1->v[0]) * (float)(vPoint2->v[0] - vPoint1->v[0]))) + (float)(v6 * v6));
  }
  else if ( (float)((float)(vPoint1->v[2] - vPoint2->v[2]) * (float)(vPoint1->v[2] - vPoint2->v[2])) <= heightDistSQ )
  {
    v8 = vPoint2->v[1] - vPoint1->v[1];
    return distSQ >= (float)((float)(v8 * v8) + (float)((float)(vPoint2->v[0] - vPoint1->v[0]) * (float)(vPoint2->v[0] - vPoint1->v[0])));
  }
  else
  {
    return 0;
  }
}

/*
==============
AI_DissociateAIFromEnt
==============
*/
void AI_DissociateAIFromEnt(gentity_s *victim)
{
  sentient_s *sentient; 
  bitarray<224> *AllTeamFlags; 
  sentient_s *i; 
  const gentity_s **p_ent; 
  AICommonInterface *m_pAI; 
  AICommonWrapper v7; 
  bitarray<224> iTeamFlags; 

  if ( !victim->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 752, ASSERT_TYPE_ASSERT, "( victim->sentient )", (const char *)&queryFormat, "victim->sentient") )
    __debugbreak();
  sentient = victim->sentient;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    AllTeamFlags = (bitarray<224> *)Com_TeamsSP_GetAllTeamFlags();
  else
    AllTeamFlags = (bitarray<224> *)Com_TeamsMP_GetAllTeamFlags();
  iTeamFlags = *AllTeamFlags;
  for ( i = Sentient_FirstSentient(&iTeamFlags); i; i = Sentient_NextSentient(i, &iTeamFlags) )
  {
    if ( i != sentient )
    {
      p_ent = (const gentity_s **)&i->ai->ent;
      if ( p_ent )
      {
        AIActorInterface::AIActorInterface(&v7.m_actorInterface);
        AIAgentInterface::AIAgentInterface(&v7.m_newAgentInterface);
        v7.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
        AICommonInterface::AICommonInterface(&v7.m_botInterface);
        v7.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
        AICommonInterface::AICommonInterface(&v7.m_botAgentInterface);
        v7.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
        v7.m_pAI = NULL;
        AICommonWrapper::Setup(&v7, *p_ent);
        m_pAI = v7.m_pAI;
        if ( !v7.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 763, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
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
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float fraction; 
  float v12; 
  float v13; 
  vec3_t start; 
  vec3_t end; 
  trace_t results; 

  v5 = point->v[0];
  v6 = point->v[1];
  v7 = point->v[2];
  if ( useUp )
  {
    v8 = 18.0 * up->v[0];
    v9 = 18.0 * up->v[1];
    v10 = 18.0 * up->v[2];
    start.v[0] = v8 + v5;
    start.v[1] = v6 + v9;
    start.v[2] = v7 + v10;
    end.v[0] = v5 - v8;
    end.v[1] = v6 - v9;
    end.v[2] = v7 - v10;
  }
  else
  {
    start.v[2] = v7 + 18.0;
    end.v[2] = v7 - 800.0;
    start.v[0] = v5;
    start.v[1] = v6;
    end.v[0] = v5;
    end.v[1] = v6;
  }
  G_Main_TraceCapsule(&results, &start, &end, bounds, 2047, 131089);
  if ( !*(_WORD *)&results.allsolid )
  {
    fraction = results.fraction;
    v12 = end.v[1];
    point->v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
    v13 = (float)(end.v[2] - start.v[2]) * fraction;
    point->v[1] = (float)((float)(v12 - start.v[1]) * fraction) + start.v[1];
    point->v[2] = v13 + start.v[2];
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
  float v4; 
  float v5; 
  gclient_s *client; 
  EffectiveStance EffectiveStance; 
  double BoundsHeight; 
  float v9; 
  int contentmask; 
  entityType_s eType; 
  float fraction; 
  float v14; 
  float v15; 
  vec3_t start; 
  vec3_t end; 
  Bounds bounds; 
  trace_t results; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 562, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v4 = inOutPosition->v[1];
  v5 = inOutPosition->v[2];
  client = ent->client;
  end.v[0] = inOutPosition->v[0];
  end.v[1] = v4;
  end.v[2] = v5;
  start.v[0] = end.v[0];
  start.v[1] = v4;
  start.v[2] = v5;
  if ( client )
  {
    EffectiveStance = PM_GetEffectiveStance(&client->ps);
    BoundsHeight = BG_Suit_GetBoundsHeight(&client->ps, EffectiveStance);
    v9 = *(float *)&BoundsHeight;
    contentmask = 65553;
    if ( *(float *)&BoundsHeight < 30.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 584, ASSERT_TYPE_ASSERT, "(height >= radius * 2.f)", (const char *)&queryFormat, "height >= radius * 2.f") )
      __debugbreak();
  }
  else
  {
    eType = ent->s.eType;
    if ( (unsigned __int16)(eType - 19) > 2u && eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 577, ASSERT_TYPE_ASSERT, "(ent->s.eType == ET_ACTOR || ent->s.eType == ET_ACTOR_CORPSE || ent->s.eType == ET_ACTOR_SPAWNER || ent->s.eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "ent->s.eType == ET_ACTOR || ent->s.eType == ET_ACTOR_CORPSE || ent->s.eType == ET_ACTOR_SPAWNER || ent->s.eType == ET_SCRIPTMOVER") )
      __debugbreak();
    v9 = FLOAT_72_0;
    contentmask = 131089;
  }
  start.v[2] = (float)(v9 + start.v[2]) - 30.0;
  *(_OWORD *)bounds.midPoint.v = _xmm;
  end.v[2] = end.v[2] + -800.0;
  bounds.halfSize.v[1] = FLOAT_15_0;
  bounds.halfSize.v[2] = FLOAT_15_0;
  G_Main_TraceCapsule(&results, &start, &end, &bounds, 2047, contentmask);
  if ( results.startsolid )
    return 0i64;
  fraction = results.fraction;
  v14 = end.v[1];
  inOutPosition->v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
  v15 = (float)(end.v[2] - start.v[2]) * fraction;
  inOutPosition->v[1] = (float)((float)(v14 - start.v[1]) * fraction) + start.v[1];
  inOutPosition->v[2] = v15 + start.v[2];
  return 1i64;
}

/*
==============
AI_IsInsideArc
==============
*/
bool AI_IsInsideArc(gentity_s *self, const vec3_t *origin, float radius, float angle0, float angle1, float halfHeight)
{
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 368, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  return IsPosInsideArc(&self->r.currentOrigin, 15.0, origin, radius, angle0, angle1, halfHeight) != 0;
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
  float v7; 
  bool v8; 
  bool v9; 
  float v11; 
  float v12; 
  vec3_t pos; 

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
    v7 = (float)((float)((float)(pos.v[1] - vPoint->v[1]) * (float)(pos.v[1] - vPoint->v[1])) + (float)((float)(pos.v[0] - vPoint->v[0]) * (float)(pos.v[0] - vPoint->v[0]))) + (float)((float)(pos.v[2] - vPoint->v[2]) * (float)(pos.v[2] - vPoint->v[2]));
    v8 = v7 < 225.0;
    v9 = v7 == 225.0;
  }
  else
  {
    if ( (float)((float)(vPoint->v[2] - pos.v[2]) * (float)(vPoint->v[2] - pos.v[2])) > 6400.0 )
      return 0;
    v11 = (float)(pos.v[1] - vPoint->v[1]) * (float)(pos.v[1] - vPoint->v[1]);
    v12 = (float)(pos.v[0] - vPoint->v[0]) * (float)(pos.v[0] - vPoint->v[0]);
    v8 = (float)(v11 + v12) < 225.0;
    v9 = (float)(v11 + v12) == 225.0;
  }
  return v8 || v9;
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
char AICommonInterface::AllSecondaryTargetsForward(AICommonInterface *this)
{
  gentity_s *TargetEntity; 
  ai_common_t *m_pAI; 
  float v4; 
  float v5; 
  __int128 v6; 
  float v7; 
  float v11; 
  float v12; 
  __int64 v13; 
  float *i; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 275, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 276, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  TargetEntity = AICommonInterface::GetTargetEntity(this);
  if ( !TargetEntity )
    return 1;
  m_pAI = this->m_pAI;
  v4 = TargetEntity->r.currentOrigin.v[0] - m_pAI->ent->r.currentOrigin.v[0];
  v6 = LODWORD(TargetEntity->r.currentOrigin.v[1]);
  v5 = TargetEntity->r.currentOrigin.v[1] - m_pAI->ent->r.currentOrigin.v[1];
  v7 = TargetEntity->r.currentOrigin.v[2] - m_pAI->ent->r.currentOrigin.v[2];
  *(float *)&v6 = fsqrt((float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v7 * v7));
  _XMM4 = v6;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  v11 = v4 * (float)(1.0 / *(float *)&_XMM0);
  v12 = v7 * (float)(1.0 / *(float *)&_XMM0);
  if ( m_pAI->threat.numSecondaryTarget <= 0 )
    return 1;
  v13 = 0i64;
  for ( i = &m_pAI->threat.secondaryTargets[0].dirToEnt.v[2]; (float)((float)((float)(v11 * *(i - 2)) + (float)((float)(v5 * (float)(1.0 / *(float *)&_XMM0)) * *(i - 1))) + (float)(v12 * *i)) >= 0.0; i += 6 )
  {
    if ( ++v13 >= m_pAI->threat.numSecondaryTarget )
      return 1;
  }
  return 0;
}

/*
==============
AICommonInterface::BlendOldVelocityWithMoveDelta
==============
*/
void AICommonInterface::BlendOldVelocityWithMoveDelta(AICommonInterface *this, const vec3_t *myPos, const vec3_t *currentMoveDelta, const vec3_t *desiredMoveDelta, vec3_t *outBlendedMoveDelta)
{
  float v10; 
  __int128 v11; 
  float v12; 
  __m128 v13; 
  __int128 v15; 
  AINavigator3D *v19; 
  float v21; 
  __int128 v22; 
  float v23; 
  float v24; 
  bool v26; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  __int128 v36; 
  float v37; 
  float v38; 
  __int128 v39; 
  float v43; 
  bool IsStraightLineReachable; 
  float v48; 
  float v49; 
  float v50; 
  vec3_t endPos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 686, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->Is3D(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 687, ASSERT_TYPE_ASSERT, "(Is3D())", (const char *)&queryFormat, "Is3D()") )
    __debugbreak();
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v10 = desiredMoveDelta->v[1];
  v11 = LODWORD(desiredMoveDelta->v[0]);
  v12 = desiredMoveDelta->v[2];
  v13 = _mm_cvtepi32_ps((__m128i)(unsigned int)level.frameDuration);
  v13.m128_f32[0] = v13.m128_f32[0] * 0.011;
  _XMM8 = v13;
  v15 = v11;
  *(float *)&v15 = fsqrt((float)((float)(*(float *)&v11 * *(float *)&v11) + (float)(v10 * v10)) + (float)(v12 * v12));
  _XMM3 = v15;
  __asm
  {
    vcmpless xmm0, xmm3, xmm15
    vblendvps xmm0, xmm3, xmm12, xmm0
  }
  v48 = *(float *)&v11 * (float)(1.0 / *(float *)&_XMM0);
  v49 = v10 * (float)(1.0 / *(float *)&_XMM0);
  v50 = v12 * (float)(1.0 / *(float *)&_XMM0);
  if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 699, ASSERT_TYPE_ASSERT, "(m_pAI->pNavigator)", (const char *)&queryFormat, "m_pAI->pNavigator") )
    __debugbreak();
  v19 = this->m_pAI->pNavigator->Get3DNavigator(this->m_pAI->pNavigator);
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 701, ASSERT_TYPE_ASSERT, "(pNav3D)", (const char *)&queryFormat, "pNav3D") )
    __debugbreak();
  __asm { vxorpd  xmm14, xmm14, xmm14 }
  while ( 1 )
  {
    v22 = LODWORD(desiredMoveDelta->v[1]);
    v21 = desiredMoveDelta->v[1] - currentMoveDelta->v[1];
    v23 = desiredMoveDelta->v[2] - currentMoveDelta->v[2];
    v24 = desiredMoveDelta->v[0] - currentMoveDelta->v[0];
    *(float *)&v22 = fsqrt((float)((float)(v21 * v21) + (float)(v24 * v24)) + (float)(v23 * v23));
    _XMM4 = v22;
    v26 = *(float *)&v22 < _XMM8.m128_f32[0];
    __asm
    {
      vcmpless xmm0, xmm4, xmm15
      vblendvps xmm0, xmm4, xmm12, xmm0
    }
    v29 = (float)(1.0 / *(float *)&_XMM0) * v24;
    v30 = v21 * (float)(1.0 / *(float *)&_XMM0);
    v31 = v23 * (float)(1.0 / *(float *)&_XMM0);
    if ( v26 )
      break;
    if ( _XMM8.m128_f32[0] <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 715, ASSERT_TYPE_ASSERT, "( velocityDeltaPerFrame ) > ( 0.0f )", "%s > %s\n\t%g, %g", "velocityDeltaPerFrame", "0.0f", _XMM8.m128_f32[0], *(double *)&_XMM14) )
      __debugbreak();
    v32 = (float)((float)(v30 * v30) + (float)(v29 * v29)) + (float)(v31 * v31);
    if ( v32 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 716, ASSERT_TYPE_ASSERT, "( Vec3LengthSq( currentMoveDeltaToDesired ) ) > ( 0.0f )", "%s > %s\n\t%g, %g", "Vec3LengthSq( currentMoveDeltaToDesired )", "0.0f", v32, *(double *)&_XMM14) )
      __debugbreak();
    v33 = (float)(v29 * _XMM8.m128_f32[0]) + currentMoveDelta->v[0];
    outBlendedMoveDelta->v[0] = v33;
    v34 = (float)(v30 * _XMM8.m128_f32[0]) + currentMoveDelta->v[1];
    outBlendedMoveDelta->v[1] = v34;
    v35 = (float)(v31 * _XMM8.m128_f32[0]) + currentMoveDelta->v[2];
    outBlendedMoveDelta->v[2] = v35;
    v36 = LODWORD(currentMoveDelta->v[0]);
    v37 = currentMoveDelta->v[1];
    v38 = currentMoveDelta->v[2];
    v39 = v36;
    *(float *)&v39 = fsqrt((float)((float)(*(float *)&v36 * *(float *)&v36) + (float)(v37 * v37)) + (float)(v38 * v38));
    _XMM3 = v39;
    __asm
    {
      vcmpless xmm0, xmm3, xmm15
      vblendvps xmm0, xmm3, xmm12, xmm0
    }
    if ( (float)((float)((float)((float)(*(float *)&v36 * (float)(1.0 / *(float *)&_XMM0)) * v48) + (float)((float)(v37 * (float)(1.0 / *(float *)&_XMM0)) * v49)) + (float)((float)(v38 * (float)(1.0 / *(float *)&_XMM0)) * v50)) >= 0.94999999 )
      return;
    v43 = v34 + myPos->v[1];
    endPos.v[0] = v33 + myPos->v[0];
    endPos.v[2] = v35 + myPos->v[2];
    endPos.v[1] = v43;
    IsStraightLineReachable = Nav3D_IsStraightLineReachable(v19->m_pSpace, myPos, &endPos, &v19->m_PathSpec);
    _XMM0 = IsStraightLineReachable;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm8, xmm3, xmm2
    }
    if ( IsStraightLineReachable )
      return;
    _XMM8 = (__m128)(unsigned int)_XMM1;
  }
  *outBlendedMoveDelta = *desiredMoveDelta;
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
__int64 G_GetAngleIndex(const float angle, const float threshold)
{
  _XMM3 = 0i64;
  if ( angle >= 0.0 )
    __asm { vroundss xmm3, xmm3, xmm2, 1 }
  else
    __asm { vroundss xmm3, xmm3, xmm2, 2 }
  _XMM1 = 0i64;
  __asm { vroundss xmm3, xmm1, xmm2, 1 }
  return (unsigned int)(int)*(float *)&_XMM3;
}

/*
==============
G_GetAngleIndices
==============
*/
void G_GetAngleIndices(const float angle, const float threshold, int *outAngleIndices, unsigned int *outAngleIndexCount)
{
  int v13; 
  unsigned int v14; 
  float v24; 
  __int64 v28; 
  int v30; 
  __m256i v31; 
  float v32; 

  v31 = _ymm;
  v32 = FLOAT_180_0;
  _XMM6 = 0i64;
  if ( angle >= 0.0 )
  {
    _XMM2 = 0i64;
    __asm
    {
      vroundss xmm2, xmm2, xmm1, 1
      vroundss xmm2, xmm6, xmm2, 1
    }
  }
  else
  {
    _XMM0 = 0i64;
    __asm
    {
      vroundss xmm0, xmm0, xmm2, 2
      vroundss xmm2, xmm6, xmm1, 1
    }
  }
  _XMM1 = LODWORD(FLOAT_N44_900002);
  v13 = (int)*(float *)&_XMM2;
  v14 = 1;
  *outAngleIndices = (int)*(float *)&_XMM2;
  *outAngleIndexCount = 1;
  _XMM0 = v31.m256i_u32[*(float *)&_XMM2];
  __asm
  {
    vcmpltss xmm3, xmm0, xmm4
    vblendvps xmm12, xmm1, xmm2, xmm3
    vroundss xmm2, xmm6, xmm1, 1
  }
  _XMM3 = 0i64;
  if ( (float)((float)((float)((float)(*(float *)&_XMM12 + angle) * 0.0027777778) - *(float *)&_XMM2) * 360.0) >= 0.0 )
    __asm { vroundss xmm3, xmm3, xmm2, 1 }
  else
    __asm { vroundss xmm3, xmm3, xmm2, 2 }
  __asm { vroundss xmm2, xmm6, xmm1, 1 }
  if ( v13 != (int)*(float *)&_XMM2 )
  {
    outAngleIndices[1] = (int)*(float *)&_XMM2;
    v14 = ++*outAngleIndexCount;
  }
  __asm { vroundss xmm3, xmm6, xmm0, 1 }
  v24 = (float)((float)((float)(angle - *(float *)&_XMM12) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
  _XMM3 = 0i64;
  if ( v24 >= 0.0 )
    __asm { vroundss xmm3, xmm3, xmm2, 1 }
  else
    __asm { vroundss xmm3, xmm3, xmm2, 2 }
  v28 = 0i64;
  __asm { vroundss xmm2, xmm6, xmm1, 1 }
  v30 = (int)*(float *)&_XMM2;
  if ( v14 )
  {
    while ( outAngleIndices[v28] != v30 )
    {
      v14 = *outAngleIndexCount;
      v28 = (unsigned int)(v28 + 1);
      if ( (unsigned int)v28 >= *outAngleIndexCount )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    outAngleIndices[v14] = v30;
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
bool AICommonInterface::NearClaimNode(AICommonInterface *this, float dist)
{
  pathnode_t *pClaimedNode; 
  float v4; 
  gentity_s *ent; 
  bool v6; 
  vec3_t pos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 487, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 488, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  pClaimedNode = this->m_pAI->sentient->pClaimedNode;
  if ( !pClaimedNode )
    return 0;
  pathnode_t::GetPos(pClaimedNode, &pos);
  v4 = dist * dist;
  ent = this->m_pAI->ent;
  if ( !AICommonInterface::Use3DPathing(this) )
  {
    if ( (float)((float)(ent->r.currentOrigin.v[2] - pos.v[2]) * (float)(ent->r.currentOrigin.v[2] - pos.v[2])) <= 6400.0 )
    {
      v6 = v4 < (float)((float)((float)(pos.v[1] - ent->r.currentOrigin.v[1]) * (float)(pos.v[1] - ent->r.currentOrigin.v[1])) + (float)((float)(pos.v[0] - ent->r.currentOrigin.v[0]) * (float)(pos.v[0] - ent->r.currentOrigin.v[0])));
      return !v6;
    }
    return 0;
  }
  v6 = v4 < (float)((float)((float)((float)(pos.v[1] - ent->r.currentOrigin.v[1]) * (float)(pos.v[1] - ent->r.currentOrigin.v[1])) + (float)((float)(pos.v[0] - ent->r.currentOrigin.v[0]) * (float)(pos.v[0] - ent->r.currentOrigin.v[0]))) + (float)((float)(pos.v[2] - ent->r.currentOrigin.v[2]) * (float)(pos.v[2] - ent->r.currentOrigin.v[2])));
  return !v6;
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
  return AI_ComparePointsInternal(vPoint, vGoalPos, 6400.0, 4.0, is3D);
}

/*
==============
AICommonInterface::PointAtGoal
==============
*/
bool AICommonInterface::PointAtGoal(AICommonInterface *this, const vec3_t *vPoint, const ai_goal_t *goal)
{
  bool is3D; 
  const gentity_s *v6; 
  unsigned int Instance; 
  bool result; 

  is3D = AICommonInterface::Use3DPathing(this);
  result = 0;
  if ( AI_ComparePointsInternal(vPoint, &goal->pos, goal->height * goal->height, goal->radius * goal->radius, is3D) )
  {
    if ( !EntHandle::isDefined(&goal->hVolume) )
      return 1;
    v6 = EntHandle::ent(&goal->hVolume);
    Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v6);
    if ( PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, vPoint, Instance, v6) )
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
  return AI_ComparePointsInternal(vPoint, vGoalPos, 6400.0, 900.0, is3D);
}

/*
==============
AICommonInterface::PointNearGoal
==============
*/
bool AICommonInterface::PointNearGoal(AICommonInterface *this, const vec3_t *vPoint, const ai_goal_t *goal, float buffer)
{
  bool is3D; 

  is3D = AICommonInterface::Use3DPathing(this);
  return AI_ComparePointsInternal(vPoint, &goal->pos, goal->height * goal->height, (float)(buffer + goal->radius) * (float)(buffer + goal->radius), is3D);
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
  float v8; 
  bool v9; 
  bool v10; 
  float v12; 
  float v13; 
  vec3_t pos; 

  m_pAI = this->m_pAI;
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
    v8 = (float)((float)((float)(pos.v[1] - vPoint->v[1]) * (float)(pos.v[1] - vPoint->v[1])) + (float)((float)(pos.v[0] - vPoint->v[0]) * (float)(pos.v[0] - vPoint->v[0]))) + (float)((float)(pos.v[2] - vPoint->v[2]) * (float)(pos.v[2] - vPoint->v[2]));
    v9 = v8 < 225.0;
    v10 = v8 == 225.0;
  }
  else
  {
    if ( (float)((float)(vPoint->v[2] - pos.v[2]) * (float)(vPoint->v[2] - pos.v[2])) > 6400.0 )
      return 0;
    v12 = (float)(pos.v[1] - vPoint->v[1]) * (float)(pos.v[1] - vPoint->v[1]);
    v13 = (float)(pos.v[0] - vPoint->v[0]) * (float)(pos.v[0] - vPoint->v[0]);
    v9 = (float)(v12 + v13) < 225.0;
    v10 = (float)(v12 + v13) == 225.0;
  }
  return v9 || v10;
}

/*
==============
AICommonInterface::PointNearPoint
==============
*/
bool AICommonInterface::PointNearPoint(AICommonInterface *this, const vec3_t *vPoint, const vec3_t *vGoalPos, float buffer)
{
  bool is3D; 

  is3D = AICommonInterface::Use3DPathing(this);
  return AI_ComparePointsInternal(vPoint, vGoalPos, 6400.0, buffer * buffer, is3D);
}

/*
==============
AICommonInterface::PointNearPointSqDist
==============
*/
bool AICommonInterface::PointNearPointSqDist(AICommonInterface *this, const vec3_t *vPoint, const vec3_t *vGoalPos, float bufferSq)
{
  bool is3D; 

  is3D = AICommonInterface::Use3DPathing(this);
  return AI_ComparePointsInternal(vPoint, vGoalPos, 6400.0, bufferSq, is3D);
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
  vec3_t *p_vLastKnownLocalPos; 
  gentity_s *v6; 
  float v7; 
  float v8; 
  __int64 v9; 
  tmat33_t<vec3_t> axis; 

  lastKnownGroundEntNum = pInfo->lastKnownGroundEntNum;
  if ( (unsigned __int16)(lastKnownGroundEntNum - 2046) <= 1u )
  {
    v7 = pInfo->vLastKnownLocalPos.v[0];
    outLastKnownPos->v[0] = v7;
    outLastKnownPos->v[1] = pInfo->vLastKnownLocalPos.v[1];
    v8 = pInfo->vLastKnownLocalPos.v[2];
    goto LABEL_6;
  }
  p_vLastKnownLocalPos = &pInfo->vLastKnownLocalPos;
  if ( !G_IsEntityInUse(lastKnownGroundEntNum) )
  {
    v7 = p_vLastKnownLocalPos->v[0];
    outLastKnownPos->v[0] = p_vLastKnownLocalPos->v[0];
    outLastKnownPos->v[1] = pInfo->vLastKnownLocalPos.v[1];
    v8 = pInfo->vLastKnownLocalPos.v[2];
LABEL_6:
    outLastKnownPos->v[2] = v8;
    goto LABEL_7;
  }
  v6 = &g_entities[pInfo->lastKnownGroundEntNum];
  AnglesToAxis(&v6->r.currentAngles, &axis);
  MatrixTransformVector(p_vLastKnownLocalPos, &axis, outLastKnownPos);
  v7 = outLastKnownPos->v[0] + v6->r.currentOrigin.v[0];
  outLastKnownPos->v[0] = v7;
  outLastKnownPos->v[1] = v6->r.currentOrigin.v[1] + outLastKnownPos->v[1];
  outLastKnownPos->v[2] = v6->r.currentOrigin.v[2] + outLastKnownPos->v[2];
LABEL_7:
  if ( (LODWORD(v7) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 155, ASSERT_TYPE_ASSERT, "(!IS_NAN( outLastKnownPos[0] ))", (const char *)&queryFormat, "!IS_NAN( outLastKnownPos[0] )", v7) )
    __debugbreak();
  if ( (LODWORD(outLastKnownPos->v[1]) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 156, ASSERT_TYPE_ASSERT, "(!IS_NAN( outLastKnownPos[1] ))", (const char *)&queryFormat, "!IS_NAN( outLastKnownPos[1] )") )
    __debugbreak();
  *(float *)&v9 = outLastKnownPos->v[2];
  if ( (v9 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 157, ASSERT_TYPE_ASSERT, "(!IS_NAN( outLastKnownPos[2] ))", (const char *)&queryFormat, "!IS_NAN( outLastKnownPos[2] )", v9) )
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
  float v10; 
  vec3_t in1; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

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
    v10 = vLastKnownPos->v[1] - v6->r.currentOrigin.v[1];
    in1.v[0] = vLastKnownPos->v[0] - v6->r.currentOrigin.v[0];
    in1.v[2] = vLastKnownPos->v[2] - v6->r.currentOrigin.v[2];
    in1.v[1] = v10;
    MatrixTransformVector(&in1, &out, &pInfo->vLastKnownLocalPos);
    pInfo->lastKnownGroundEntNum = groundEntNum;
  }
  else
  {
    pInfo->vLastKnownLocalPos.v[0] = vLastKnownPos->v[0];
    pInfo->vLastKnownLocalPos.v[1] = vLastKnownPos->v[1];
    pInfo->vLastKnownLocalPos.v[2] = vLastKnownPos->v[2];
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
  _XMM8 = *(_OWORD *)&fRadius;
  _XMM6 = *(_OWORD *)&fHeight;
  if ( !goal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 506, ASSERT_TYPE_ASSERT, "(goal)", (const char *)&queryFormat, "goal") )
    __debugbreak();
  goal->pos.v[0] = vPoint->v[0];
  goal->pos.v[1] = vPoint->v[1];
  goal->pos.v[2] = vPoint->v[2];
  if ( *(float *)&fRadius < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 519, ASSERT_TYPE_ASSERT, "(radius >= 0)", (const char *)&queryFormat, "radius >= 0") )
    __debugbreak();
  __asm { vmaxss  xmm0, xmm8, cs:__real@40800000 }
  goal->radius = *(float *)&_XMM0;
  if ( *(float *)&fHeight < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 533, ASSERT_TYPE_ASSERT, "(height >= 0)", (const char *)&queryFormat, "height >= 0") )
    __debugbreak();
  if ( bEnforceMinHeight )
  {
    __asm { vmaxss  xmm0, xmm6, cs:__real@42a00000 }
    goal->height = *(float *)&_XMM0;
  }
  else
  {
    goal->height = *(float *)&fHeight;
  }
}

/*
==============
AICommonInterface::SetGoalHeight
==============
*/

void __fastcall AICommonInterface::SetGoalHeight(ai_goal_t *goal, double height, bool bEnforceMin)
{
  _XMM6 = *(_OWORD *)&height;
  if ( !goal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 532, ASSERT_TYPE_ASSERT, "(goal)", (const char *)&queryFormat, "goal") )
    __debugbreak();
  if ( *(float *)&height < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 533, ASSERT_TYPE_ASSERT, "(height >= 0)", (const char *)&queryFormat, "height >= 0") )
    __debugbreak();
  if ( bEnforceMin )
  {
    __asm { vmaxss  xmm0, xmm6, cs:__real@42a00000 }
    goal->height = *(float *)&_XMM0;
  }
  else
  {
    goal->height = *(float *)&height;
  }
}

/*
==============
AICommonInterface::SetGoalRadius
==============
*/

void __fastcall AICommonInterface::SetGoalRadius(ai_goal_t *goal, double radius)
{
  _XMM6 = *(_OWORD *)&radius;
  if ( !goal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 518, ASSERT_TYPE_ASSERT, "(goal)", (const char *)&queryFormat, "goal") )
    __debugbreak();
  if ( *(float *)&radius < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 519, ASSERT_TYPE_ASSERT, "(radius >= 0)", (const char *)&queryFormat, "radius >= 0") )
    __debugbreak();
  __asm { vmaxss  xmm0, xmm6, cs:__real@40800000 }
  goal->radius = *(float *)&_XMM0;
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
  if ( !pDstCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 48, ASSERT_TYPE_ASSERT, "(pDstCache)", (const char *)&queryFormat, "pDstCache") )
    __debugbreak();
  if ( !pSrcCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai_common.cpp", 49, ASSERT_TYPE_ASSERT, "(pSrcCache)", (const char *)&queryFormat, "pSrcCache") )
    __debugbreak();
  *pDstCache = *pSrcCache;
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

