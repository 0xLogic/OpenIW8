/*
==============
Sentient_GetOrigin
==============
*/

void __fastcall Sentient_GetOrigin(const sentient_s *self, vec3_t *vOriginOut)
{
  ?Sentient_GetOrigin@@YAXPEBUsentient_s@@AEATvec3_t@@@Z(self, vOriginOut);
}

/*
==============
Sentient_FirstSentient
==============
*/

sentient_s *__fastcall Sentient_FirstSentient(const bitarray<224> *iTeamFlags)
{
  return ?Sentient_FirstSentient@@YAPEAUsentient_s@@AEBV?$bitarray@$0OA@@@@Z(iTeamFlags);
}

/*
==============
Sentient_GetRemoteVehicleSentient
==============
*/

sentient_s *__fastcall Sentient_GetRemoteVehicleSentient(const sentient_s *self)
{
  return ?Sentient_GetRemoteVehicleSentient@@YAPEAUsentient_s@@PEBU1@@Z(self);
}

/*
==============
Sentient_GetForwardDir
==============
*/

void __fastcall Sentient_GetForwardDir(const sentient_s *self, vec3_t *vDirOut)
{
  ?Sentient_GetForwardDir@@YAXPEBUsentient_s@@AEATvec3_t@@@Z(self, vDirOut);
}

/*
==============
Sentient_NodeClaimRevoked
==============
*/

void __fastcall Sentient_NodeClaimRevoked(sentient_s *self, pathnode_t *node)
{
  ?Sentient_NodeClaimRevoked@@YAXPEAUsentient_s@@PEAUpathnode_t@@@Z(self, node);
}

/*
==============
Sentient_GetLastKnownEnemyPos
==============
*/

void __fastcall Sentient_GetLastKnownEnemyPos(const sentient_s *pSelf, const gentity_s *enemy, vec3_t *outLastKnownPos)
{
  ?Sentient_GetLastKnownEnemyPos@@YAXPEBUsentient_s@@PEBUgentity_s@@AEATvec3_t@@@Z(pSelf, enemy, outLastKnownPos);
}

/*
==============
Sentient_SetTeam
==============
*/

void __fastcall Sentient_SetTeam(sentient_s *self, team_t eTeam)
{
  ?Sentient_SetTeam@@YAXPEAUsentient_s@@W4team_t@@@Z(self, eTeam);
}

/*
==============
Sentient_GetEyePosition
==============
*/

void __fastcall Sentient_GetEyePosition(const sentient_s *self, vec3_t *vEyePosOut)
{
  ?Sentient_GetEyePosition@@YAXPEBUsentient_s@@AEATvec3_t@@@Z(self, vEyePosOut);
}

/*
==============
Sentient_IsAerial
==============
*/

int __fastcall Sentient_IsAerial(const sentient_s *self)
{
  return ?Sentient_IsAerial@@YAHPEBUsentient_s@@@Z(self);
}

/*
==============
Sentient_GetVelocity
==============
*/

void __fastcall Sentient_GetVelocity(const sentient_s *self, vec3_t *vVelOut)
{
  ?Sentient_GetVelocity@@YAXPEBUsentient_s@@AEATvec3_t@@@Z(self, vVelOut);
}

/*
==============
Sentient_SetThreatSightState
==============
*/

void __fastcall Sentient_SetThreatSightState(sentient_s *pSelf, const sentient_info_t *infoOther)
{
  ?Sentient_SetThreatSightState@@YAXPEAUsentient_s@@PEBUsentient_info_t@@@Z(pSelf, infoOther);
}

/*
==============
Sentient_HasDecentVisFromExposed
==============
*/

bool __fastcall Sentient_HasDecentVisFromExposed(sentient_s *pSelf, sentient_s *pOther)
{
  return ?Sentient_HasDecentVisFromExposed@@YA_NPEAUsentient_s@@0@Z(pSelf, pOther);
}

/*
==============
Sentient_Dissociate
==============
*/

void __fastcall Sentient_Dissociate(sentient_s *pSentient)
{
  ?Sentient_Dissociate@@YAXPEAUsentient_s@@@Z(pSentient);
}

/*
==============
Sentient_NearestTacPoint
==============
*/

const tacpoint_t *__fastcall Sentient_NearestTacPoint(sentient_s *pSelf)
{
  return ?Sentient_NearestTacPoint@@YAPEBUtacpoint_t@@PEAUsentient_s@@@Z(pSelf);
}

/*
==============
Sentient_SetEnemy
==============
*/

void __fastcall Sentient_SetEnemy(sentient_s *self, gentity_s *enemy, int bNotify, int resetThreatUpdate)
{
  ?Sentient_SetEnemy@@YAXPEAUsentient_s@@PEAUgentity_s@@HH@Z(self, enemy, bNotify, resetThreatUpdate);
}

/*
==============
Sentient_InvalidateNearestTacPoint
==============
*/

void __fastcall Sentient_InvalidateNearestTacPoint(sentient_s *pSelf)
{
  ?Sentient_InvalidateNearestTacPoint@@YAXPEAUsentient_s@@@Z(pSelf);
}

/*
==============
Sentient_Init
==============
*/

void __fastcall Sentient_Init(sentient_s *sentient, gentity_s *ent, team_t eTeam)
{
  ?Sentient_Init@@YAXPEAUsentient_s@@PEAUgentity_s@@W4team_t@@@Z(sentient, ent, eTeam);
}

/*
==============
Sentient_BanNodesInDirAndRadius
==============
*/

void __fastcall Sentient_BanNodesInDirAndRadius(sentient_s *self, float radius)
{
  ?Sentient_BanNodesInDirAndRadius@@YAXPEAUsentient_s@@M@Z(self, radius);
}

/*
==============
Sentient_InvalidateNearestNode
==============
*/

void __fastcall Sentient_InvalidateNearestNode(sentient_s *self)
{
  ?Sentient_InvalidateNearestNode@@YAXPEAUsentient_s@@@Z(self);
}

/*
==============
Sentient_ClaimNode
==============
*/

void __fastcall Sentient_ClaimNode(sentient_s *self, pathnode_t *node)
{
  ?Sentient_ClaimNode@@YAXPEAUsentient_s@@PEAUpathnode_t@@@Z(self, node);
}

/*
==============
Sentient_GetGroundFromPs
==============
*/

unsigned __int16 __fastcall Sentient_GetGroundFromPs(const playerState_s *ps)
{
  return ?Sentient_GetGroundFromPs@@YAGPEBUplayerState_s@@@Z(ps);
}

/*
==============
Sentient_Alloc
==============
*/

sentient_s *__fastcall Sentient_Alloc(SentientType type)
{
  return ?Sentient_Alloc@@YAPEAUsentient_s@@W4SentientType@@@Z(type);
}

/*
==============
Sentient_NearestNodeOfEnemy
==============
*/

pathnode_t *__fastcall Sentient_NearestNodeOfEnemy(sentient_s *self)
{
  return ?Sentient_NearestNodeOfEnemy@@YAPEAUpathnode_t@@PEAUsentient_s@@@Z(self);
}

/*
==============
Sentient_DissociateNode
==============
*/

void __fastcall Sentient_DissociateNode(sentient_s *pSentient, pathnode_t *pNode)
{
  ?Sentient_DissociateNode@@YAXPEAUsentient_s@@PEAUpathnode_t@@@Z(pSentient, pNode);
}

/*
==============
Sentient_IsIndoor
==============
*/

int __fastcall Sentient_IsIndoor(sentient_s *self)
{
  return ?Sentient_IsIndoor@@YAHPEAUsentient_s@@@Z(self);
}

/*
==============
Sentient_GetHeadHeight
==============
*/

double __fastcall Sentient_GetHeadHeight(const sentient_s *self)
{
  double result; 

  *(float *)&result = ?Sentient_GetHeadHeight@@YAMPEBUsentient_s@@@Z(self);
  return result;
}

/*
==============
Sentient_GetScarinessForDistance
==============
*/

double __fastcall Sentient_GetScarinessForDistance(sentient_s *self, sentient_s *enemy, float fDist)
{
  double result; 

  *(float *)&result = ?Sentient_GetScarinessForDistance@@YAMPEAUsentient_s@@0M@Z(self, enemy, fDist);
  return result;
}

/*
==============
Sentient_GetDebugEyePosition
==============
*/

void __fastcall Sentient_GetDebugEyePosition(const sentient_s *self, vec3_t *vEyePosOut)
{
  ?Sentient_GetDebugEyePosition@@YAXPEBUsentient_s@@AEATvec3_t@@@Z(self, vEyePosOut);
}

/*
==============
Sentient_NearestNode
==============
*/

pathnode_t *__fastcall Sentient_NearestNode(sentient_s *pSelf)
{
  return ?Sentient_NearestNode@@YAPEAUpathnode_t@@PEAUsentient_s@@@Z(pSelf);
}

/*
==============
Sentient_NearestNode
==============
*/

pathnode_t *__fastcall Sentient_NearestNode(sentient_s *self, bool allowDontLinkNodes)
{
  return ?Sentient_NearestNode@@YAPEAUpathnode_t@@PEAUsentient_s@@_N@Z(self, allowDontLinkNodes);
}

/*
==============
Sentient_GetRemoteEyePosition
==============
*/

void __fastcall Sentient_GetRemoteEyePosition(const sentient_s *self, vec3_t *vEyePosOut)
{
  ?Sentient_GetRemoteEyePosition@@YAXPEBUsentient_s@@AEATvec3_t@@@Z(self, vEyePosOut);
}

/*
==============
Sentient_Free
==============
*/

void __fastcall Sentient_Free(sentient_s *sentient)
{
  ?Sentient_Free@@YAXPEAUsentient_s@@@Z(sentient);
}

/*
==============
G_Sentient_InitSentients
==============
*/

void __fastcall G_Sentient_InitSentients(unsigned int maxSentients, unsigned int maxNonAiSentients)
{
  ?G_Sentient_InitSentients@@YAXII@Z(maxSentients, maxNonAiSentients);
}

/*
==============
Sentient_IsEnemyIndoor
==============
*/

int __fastcall Sentient_IsEnemyIndoor(sentient_s *self)
{
  return ?Sentient_IsEnemyIndoor@@YAHPEAUsentient_s@@@Z(self);
}

/*
==============
Sentient_GetLastKnownEnemyPosWithDuration
==============
*/

void __fastcall Sentient_GetLastKnownEnemyPosWithDuration(const sentient_s *pSelf, const gentity_s *enemy, int cheatDuration, vec3_t *outLastKnownPos)
{
  ?Sentient_GetLastKnownEnemyPosWithDuration@@YAXPEBUsentient_s@@PEBUgentity_s@@HAEATvec3_t@@@Z(pSelf, enemy, cheatDuration, outLastKnownPos);
}

/*
==============
Sentient_GetMaxSightDistSqrd
==============
*/

double __fastcall Sentient_GetMaxSightDistSqrd(sentient_s *pSelf)
{
  double result; 

  *(float *)&result = ?Sentient_GetMaxSightDistSqrd@@YAMPEAUsentient_s@@@Z(pSelf);
  return result;
}

/*
==============
Sentient_GetHeadPosition
==============
*/

void __fastcall Sentient_GetHeadPosition(const sentient_s *self, vec3_t *vEyePosOut)
{
  ?Sentient_GetHeadPosition@@YAXPEBUsentient_s@@AEATvec3_t@@@Z(self, vEyePosOut);
}

/*
==============
Sentient_NextSentient
==============
*/

sentient_s *__fastcall Sentient_NextSentient(sentient_s *pPrevSentient, const bitarray<224> *iTeamFlags)
{
  return ?Sentient_NextSentient@@YAPEAUsentient_s@@PEAU1@AEBV?$bitarray@$0OA@@@@Z(pPrevSentient, iTeamFlags);
}

/*
==============
Sentient_HasRemoteEyes
==============
*/

bool __fastcall Sentient_HasRemoteEyes(const sentient_s *self)
{
  return ?Sentient_HasRemoteEyes@@YA_NPEBUsentient_s@@@Z(self);
}

/*
==============
Sentient_SetPrevClaimNode
==============
*/

void __fastcall Sentient_SetPrevClaimNode(sentient_s *self)
{
  ?Sentient_SetPrevClaimNode@@YAXPEAUsentient_s@@@Z(self);
}

/*
==============
Sentient_DissociateSentient
==============
*/

void __fastcall Sentient_DissociateSentient(sentient_s *self, sentient_s *other)
{
  ?Sentient_DissociateSentient@@YAXPEAUsentient_s@@0@Z(self, other);
}

/*
==============
Sentient_GetGround
==============
*/

unsigned __int16 __fastcall Sentient_GetGround(const sentient_s *self)
{
  return ?Sentient_GetGround@@YAGPEBUsentient_s@@@Z(self);
}

/*
==============
Sentient_CheckAndUpdateNearestData
==============
*/

void __fastcall Sentient_CheckAndUpdateNearestData(sentient_s *pSelf, bool originChanged)
{
  ?Sentient_CheckAndUpdateNearestData@@YAXPEAUsentient_s@@_N@Z(pSelf, originChanged);
}

/*
==============
Sentient_UpdateNavObstacles
==============
*/

void __fastcall Sentient_UpdateNavObstacles(sentient_s *self)
{
  ?Sentient_UpdateNavObstacles@@YAXPEAUsentient_s@@@Z(self);
}

/*
==============
Sentient_SetMaxSightDistSqrd
==============
*/

void __fastcall Sentient_SetMaxSightDistSqrd(sentient_s *pSelf, float maxSightDistSqrd)
{
  ?Sentient_SetMaxSightDistSqrd@@YAXPEAUsentient_s@@M@Z(pSelf, maxSightDistSqrd);
}

/*
==============
Sentient_StealClaimNode
==============
*/

void __fastcall Sentient_StealClaimNode(sentient_s *self, sentient_s *other)
{
  ?Sentient_StealClaimNode@@YAXPEAUsentient_s@@0@Z(self, other);
}

/*
==============
Sentient_NearestTacPointOfEnemy
==============
*/

const tacpoint_t *__fastcall Sentient_NearestTacPointOfEnemy(sentient_s *pSelf)
{
  return ?Sentient_NearestTacPointOfEnemy@@YAPEBUtacpoint_t@@PEAUsentient_s@@@Z(pSelf);
}

/*
==============
Sentient_FindLastTacPointOnPathWithVis
==============
*/

const tacpoint_t *__fastcall Sentient_FindLastTacPointOnPathWithVis(sentient_s *pSelf, sentient_s *pOtherGuy, sentient_info_t *pInfo, const vec3_t *pos, vec3_t *outCornerPos)
{
  return ?Sentient_FindLastTacPointOnPathWithVis@@YAPEBUtacpoint_t@@PEAUsentient_s@@0PEAUsentient_info_t@@AEBTvec3_t@@AEAT4@@Z(pSelf, pOtherGuy, pInfo, pos, outCornerPos);
}

/*
==============
Sentient_BanNearNodes
==============
*/

void __fastcall Sentient_BanNearNodes(sentient_s *self, bool ignoreBanNodeTime)
{
  ?Sentient_BanNearNodes@@YAXPEAUsentient_s@@_N@Z(self, ignoreBanNodeTime);
}

/*
==============
Sentient_HasDecentVis
==============
*/

bool __fastcall Sentient_HasDecentVis(sentient_s *pSelf, sentient_s *pOther)
{
  return ?Sentient_HasDecentVis@@YA_NPEAUsentient_s@@0@Z(pSelf, pOther);
}

/*
==============
G_Sentient_InitSentients
==============
*/
void G_Sentient_InitSentients(unsigned int maxSentients, unsigned int maxNonAiSentients)
{
  sentient_s *sentients; 
  unsigned int v5; 
  __int64 v6; 

  if ( maxSentients > 0x110 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1332, ASSERT_TYPE_ASSERT, "(maxSentients <= ( sizeof( *array_counter( g_sentients ) ) + 0 ))", (const char *)&queryFormat, "maxSentients <= ARRAY_COUNT( g_sentients )") )
    __debugbreak();
  sentients = g_sentients;
  memset_0(g_sentients, 0, sizeof(g_sentients));
  v5 = 0;
  level.sentients = g_sentients;
  level.maxSentients = maxSentients;
  level.maxNonAiSentients = maxNonAiSentients;
  if ( maxSentients )
  {
    while ( 1 )
    {
      v6 = v5++;
      sentients[v6].inuse = 0;
      if ( v5 >= level.maxSentients )
        break;
      sentients = level.sentients;
    }
  }
  AICommonInterface::InitThreatBiasGroups();
}

/*
==============
Sentient_Alloc
==============
*/
sentient_s *Sentient_Alloc(SentientType type)
{
  sentient_s *sentients; 
  unsigned int v3; 
  unsigned int maxSentients; 
  unsigned int v5; 
  ai_common_t **p_ai; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  bool *i; 
  sentient_s *result; 

  sentients = level.sentients;
  if ( !level.sentients )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", LODWORD(level.sentients) + 89, ASSERT_TYPE_ASSERT, "(level.sentients != 0)", (const char *)&queryFormat, "level.sentients != NULL") )
      __debugbreak();
    sentients = level.sentients;
  }
  v3 = 0;
  if ( (unsigned int)(type - 2) > 1 )
  {
LABEL_22:
    maxSentients = level.maxSentients;
    goto LABEL_23;
  }
  maxSentients = level.maxSentients;
  v5 = 0;
  if ( level.maxSentients )
  {
    p_ai = &sentients->ai;
    v7 = level.maxSentients;
    do
    {
      if ( *((_BYTE *)p_ai + 146) )
      {
        if ( !*p_ai )
        {
          v8 = (__int64)*(p_ai - 1);
          if ( !v8 || !*(_QWORD *)(v8 + 336) )
            ++v5;
        }
      }
      p_ai += 23;
      --v7;
    }
    while ( v7 );
  }
  if ( v5 >= level.maxNonAiSentients )
  {
    v9 = 0;
    if ( !level.maxSentients )
      return 0i64;
    for ( i = &sentients->expendable; !*(i - 1) || !*i; i += 184 )
    {
      if ( ++v9 >= level.maxSentients )
        return 0i64;
    }
    Sentient_Free((sentient_s *)(i - 155));
    sentients = level.sentients;
    goto LABEL_22;
  }
LABEL_23:
  if ( !maxSentients )
  {
LABEL_26:
    Com_DPrintf(15, "Sentient allocation failed\n");
    return 0i64;
  }
  while ( sentients->inuse )
  {
    ++v3;
    ++sentients;
    if ( v3 >= maxSentients )
      goto LABEL_26;
  }
  memset_0(sentients, 0, sizeof(sentient_s));
  sentients->inuse = 1;
  result = sentients;
  sentients->expendable = type == ST_OTHER_EXPENDABLE;
  return result;
}

/*
==============
Sentient_BanNearNodes
==============
*/
void Sentient_BanNearNodes(sentient_s *self, bool ignoreBanNodeTime)
{
  pathnode_t *pClaimedNode; 
  int v4; 
  team_t eTeam; 
  __int64 v6; 
  pathsort_s *p_nodes; 
  pathnode_t *node; 
  int NodeTeam; 
  gentity_s *ent; 
  AICommonInterface *m_pAI; 
  gclient_s *client; 
  __int128 v13; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  __int128 v21; 
  float v25; 
  float v26; 
  AICommonWrapper v27; 
  vec2_t v28; 
  vec3_t forward; 
  vec3_t pos; 
  vec3_t v31; 
  vec3_t vector; 
  pathsort_s nodes; 

  if ( ignoreBanNodeTime || level.time - self->banNodeTime >= 0 )
  {
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    pClaimedNode = self->pClaimedNode;
    self->banNodeTime = level.time - level.frameDuration + 2500;
    if ( pClaimedNode )
    {
      if ( (pClaimedNode->constant.spawnflags & 0x8000) != 0 )
      {
        pathnode_t::GetPos(pClaimedNode, &pos);
        v4 = Path_NodesInCylinder(&pos, NULL, 80.0, 80.0, &nodes, 64, -2107367684);
        eTeam = self->eTeam;
        v6 = v4;
        if ( v4 > 0 )
        {
          p_nodes = &nodes;
          do
          {
            node = p_nodes->node;
            if ( (p_nodes->node->constant.spawnflags & 0x8000) == 0 )
              goto LABEL_29;
            NodeTeam = Path_GetNodeTeam(eTeam);
            if ( Path_NodeIsClaimed(node, NodeTeam) )
              goto LABEL_29;
            pathnode_t::GetPos(node, &v31);
            if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1235, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
              __debugbreak();
            ent = self->ent;
            AIActorInterface::AIActorInterface(&v27.m_actorInterface);
            AIAgentInterface::AIAgentInterface(&v27.m_newAgentInterface);
            v27.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
            AICommonInterface::AICommonInterface(&v27.m_botInterface);
            v27.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
            AICommonInterface::AICommonInterface(&v27.m_botAgentInterface);
            v27.m_pAI = NULL;
            v27.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
            AICommonWrapper::Setup(&v27, ent);
            m_pAI = v27.m_pAI;
            client = self->ent->client;
            if ( client && BG_IsPlayerZeroG(&client->ps) || m_pAI && AICommonInterface::Use3DPathing(m_pAI) )
            {
              v13 = LODWORD(pos.v[1]);
              *(float *)&v13 = fsqrt((float)((float)((float)(pos.v[1] - v31.v[1]) * (float)(pos.v[1] - v31.v[1])) + (float)((float)(pos.v[0] - v31.v[0]) * (float)(pos.v[0] - v31.v[0]))) + (float)((float)(pos.v[2] - v31.v[2]) * (float)(pos.v[2] - v31.v[2])));
              _XMM1 = v13;
              __asm
              {
                vcmpless xmm0, xmm1, xmm12
                vblendvps xmm0, xmm1, xmm11, xmm0
              }
              v17 = (float)(1.0 / *(float *)&_XMM0) * (float)(pos.v[0] - v31.v[0]);
              v18 = (float)(1.0 / *(float *)&_XMM0) * (float)(pos.v[1] - v31.v[1]);
              v19 = (float)(1.0 / *(float *)&_XMM0) * (float)(pos.v[2] - v31.v[2]);
              if ( !Path_NodeIgnoresAngles(pClaimedNode) )
              {
                pathnode_t::GetAngles(pClaimedNode, &vector);
                AngleVectors(&vector, &forward, NULL, NULL);
                if ( (float)((float)((float)(v18 * forward.v[1]) + (float)(v17 * forward.v[0])) + (float)(v19 * forward.v[2])) > -0.5 )
                  goto LABEL_29;
              }
              if ( Path_NodeIgnoresAngles(node) )
              {
LABEL_28:
                Path_MarkNodeInvalid(node, eTeam, 2500);
                goto LABEL_29;
              }
              pathnode_t::GetAngles(node, &vector);
              AngleVectors(&vector, &forward, NULL, NULL);
              v20 = (float)((float)(v18 * forward.v[1]) + (float)(v17 * forward.v[0])) + (float)(v19 * forward.v[2]);
            }
            else
            {
              v21 = LODWORD(pos.v[1]);
              *(float *)&v21 = fsqrt((float)((float)(pos.v[1] - v31.v[1]) * (float)(pos.v[1] - v31.v[1])) + (float)((float)(pos.v[0] - v31.v[0]) * (float)(pos.v[0] - v31.v[0])));
              _XMM3 = v21;
              __asm
              {
                vcmpless xmm0, xmm3, xmm12
                vblendvps xmm0, xmm3, xmm11, xmm0
              }
              v25 = (float)(1.0 / *(float *)&_XMM0) * (float)(pos.v[0] - v31.v[0]);
              v26 = (float)(1.0 / *(float *)&_XMM0) * (float)(pos.v[1] - v31.v[1]);
              if ( !Path_NodeIgnoresAngles(pClaimedNode) )
              {
                pathnode_t::GetForward(pClaimedNode, &v28);
                if ( (float)((float)(v25 * v28.v[0]) + (float)(v26 * v28.v[1])) > -0.5 )
                  goto LABEL_29;
              }
              if ( Path_NodeIgnoresAngles(node) )
                goto LABEL_28;
              pathnode_t::GetForward(node, &v28);
              v20 = (float)(v25 * v28.v[0]) + (float)(v26 * v28.v[1]);
            }
            if ( v20 >= 0.5 )
              goto LABEL_28;
LABEL_29:
            ++p_nodes;
            --v6;
          }
          while ( v6 );
        }
      }
    }
  }
}

/*
==============
Sentient_BanNodesInDirAndRadius
==============
*/
void Sentient_BanNodesInDirAndRadius(sentient_s *self, float radius)
{
  gentity_s *ent; 
  int v4; 
  team_t eTeam; 
  __int64 v6; 
  __int64 v7; 
  pathsort_s *i; 
  pathnode_t *node; 
  unsigned int v10; 
  bool v11; 
  __int64 maxNodes; 
  __int64 typeFlags; 
  vec2_t v14; 
  vec3_t forward; 
  pathsort_s nodes; 

  if ( level.time - self->banNodeTime >= 0 )
  {
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    ent = self->ent;
    self->banNodeTime = level.time - level.frameDuration + 2500;
    v4 = Path_NodesInCylinder(&ent->r.currentOrigin, NULL, radius, 80.0, &nodes, 64, -2107367684);
    eTeam = self->eTeam;
    v6 = v4;
    YawVectors(self->ent->r.currentAngles.v[1], &forward, NULL);
    v7 = v6;
    if ( (int)v6 > 0 )
    {
      for ( i = &nodes; ; ++i )
      {
        node = i->node;
        if ( (i->node->constant.spawnflags & 0x8000) != 0 )
          break;
LABEL_22:
        if ( !--v7 )
          return;
      }
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      {
        v10 = 2;
        if ( eTeam <= TEAM_TWO )
          v10 = eTeam - 1;
        if ( v10 < 3 )
          goto LABEL_19;
        LODWORD(typeFlags) = 3;
        LODWORD(maxNodes) = v10;
        v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 205, ASSERT_TYPE_ASSERT, "(unsigned)( result ) < (unsigned)( (3) )", "result doesn't index MAX_NODE_TEAMS_SP\n\t%i not in [0, %i)", maxNodes, typeFlags);
      }
      else
      {
        v10 = 1;
        if ( eTeam <= TEAM_ONE )
          v10 = eTeam - 1;
        if ( v10 < 2 )
          goto LABEL_19;
        LODWORD(typeFlags) = 2;
        LODWORD(maxNodes) = v10;
        v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\pathnode.h", 210, ASSERT_TYPE_ASSERT, "(unsigned)( result ) < (unsigned)( (2) )", "result doesn't index MAX_NODE_TEAMS_MP\n\t%i not in [0, %i)", maxNodes, typeFlags);
      }
      if ( v11 )
        __debugbreak();
LABEL_19:
      if ( Path_NodeGetFreeTime(node, v10) != 0x7FFFFFFF )
      {
        pathnode_t::GetForward(node, &v14);
        if ( (float)((float)(forward.v[0] * v14.v[0]) + (float)(forward.v[1] * v14.v[1])) >= 0.0 )
          Path_MarkNodeInvalid(node, eTeam, 2500);
      }
      goto LABEL_22;
    }
  }
}

/*
==============
Sentient_CheckAndUpdateNearestData
==============
*/
void Sentient_CheckAndUpdateNearestData(sentient_s *pSelf, bool originChanged)
{
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1352, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( originChanged )
    pSelf->originChanged = 1;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm2, 1 }
  if ( level.framenum % (int)*(float *)&_XMM4 == ((int)pSelf - LODWORD(level.sentients)) / 184 % (int)*(float *)&_XMM4 )
  {
    if ( pSelf->originChanged )
    {
      pSelf->originChanged = 0;
      Sentient_InvalidateNearestNode(pSelf);
      pSelf->bNearestTacPointValid = 0;
    }
    else
    {
      if ( !pSelf->pNearestNode )
        Sentient_InvalidateNearestNode(pSelf);
      if ( !tacpoint_ref_t::IsDefined(&pSelf->nearestTacPoint) )
        pSelf->bNearestTacPointValid = 0;
    }
  }
}

/*
==============
Sentient_ClaimNode
==============
*/
void Sentient_ClaimNode(sentient_s *self, pathnode_t *node)
{
  AIScriptedInterface *m_pAI; 
  pathnode_t *pClaimedNode; 
  __int64 NodeTeam; 
  __int64 v7; 
  const dvar_t *v8; 
  __int64 v9; 
  AIWrapper v10; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1097, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1098, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
    __debugbreak();
  AIWrapper::AIWrapper(&v10, self->ent);
  m_pAI = v10.m_pAI;
  if ( v10.m_pAI && AIScriptedInterface::KeepClaimedNode(v10.m_pAI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1102, ASSERT_TYPE_ASSERT, "(!pAI || !pAI->KeepClaimedNode())", (const char *)&queryFormat, "!pAI || !pAI->KeepClaimedNode()") )
    __debugbreak();
  pClaimedNode = self->pClaimedNode;
  if ( pClaimedNode != node )
  {
    self->pPrevClaimedNode = pClaimedNode;
    if ( pClaimedNode )
      Path_RelinquishNodeNow(self);
    if ( node )
    {
      NodeTeam = Path_GetNodeTeam(self->eTeam);
      if ( m_pAI )
      {
        v7 = m_pAI->GetAI(m_pAI);
        if ( (unsigned int)NodeTeam >= 3 )
        {
          LODWORD(v9) = NodeTeam;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1121, ASSERT_TYPE_ASSERT, "(unsigned)( nodeTeam ) < (unsigned)( ( sizeof( *array_counter( node->dynamic.actors.dangerousNodeTime ) ) + 0 ) )", "nodeTeam doesn't index ARRAY_COUNT( node->dynamic.actors.dangerousNodeTime )\n\t%i not in [0, %i)", v9, 3) )
            __debugbreak();
        }
        if ( Com_GameMode_SupportsFeature(WEAPON_READY) )
        {
          v8 = DVARBOOL_ai_debugOverlay;
          if ( !DVARBOOL_ai_debugOverlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugOverlay") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v8);
          if ( v8->current.enabled && node->dynamic.actors.dangerousNodeTime[NodeTeam] > level.time && !*(_BYTE *)(v7 + 1517) && !*(_BYTE *)(v7 + 1621) )
            Com_PrintWarning(18, "AI %d going to dangerous node.\n", (unsigned int)self->ent->s.number);
        }
      }
      if ( (node->constant.spawnflags & 0x40) != 0 && level.time < Path_NodeGetFreeTime(node, NodeTeam) )
        Path_ForceClaimNode(node, self);
      else
        Path_ClaimNode(node, self);
      self->timeOfNodeClaim = level.time;
    }
  }
}

/*
==============
Sentient_Dissociate
==============
*/
void Sentient_Dissociate(sentient_s *pSentient)
{
  const bitarray<224> *AllTeamFlags; 
  double v3; 
  unsigned int v4; 
  const bitarray<224> *v5; 
  __int128 v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  _DWORD *v10; 
  __int64 v11; 
  unsigned __int64 eTeam; 
  sentient_s *i; 
  __int64 v14; 
  __int64 v15; 
  _DWORD v16[4]; 
  __int64 v17; 
  unsigned int v18; 
  bitarray<224> iTeamFlags; 

  if ( !pSentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 205, ASSERT_TYPE_ASSERT, "( pSentient )", (const char *)&queryFormat, "pSentient") )
    __debugbreak();
  Sentient_SetEnemy(pSentient, NULL, 0, 1);
  if ( pSentient->pClaimedNode )
    Path_RelinquishNodeNow(pSentient);
  pSentient->eTeam = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? TEAM_FIVE : TEAM_ZERO;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    AllTeamFlags = Com_TeamsSP_GetAllTeamFlags();
  else
    AllTeamFlags = Com_TeamsMP_GetAllTeamFlags();
  v3 = *(double *)&AllTeamFlags->array[4];
  v4 = AllTeamFlags->array[6];
  *(_OWORD *)iTeamFlags.array = *(_OWORD *)AllTeamFlags->array;
  *(double *)&iTeamFlags.array[4] = v3;
  iTeamFlags.array[6] = v4;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    v5 = Com_TeamsSP_GetAllTeamFlags();
  else
    v5 = Com_TeamsMP_GetAllTeamFlags();
  v6 = *(_OWORD *)v5->array;
  v7 = v5->array[6];
  v17 = *(_QWORD *)&v5->array[4];
  v16[0] = iTeamFlags.array[0] & ~(_DWORD)v6;
  v18 = v4 & ~v7;
  v16[1] = iTeamFlags.array[1] & ~DWORD1(v6);
  v16[2] = iTeamFlags.array[2] & ~DWORD2(v6);
  v16[3] = iTeamFlags.array[3] & ~HIDWORD(v6);
  v17 = *(_QWORD *)&iTeamFlags.array[4] & ~v17;
  v8 = 0;
  v9 = 0;
  v10 = v16;
  while ( !*v10 )
  {
    ++v9;
    ++v10;
    if ( v9 >= 7 )
      goto LABEL_18;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 986, ASSERT_TYPE_ASSERT, "( Com_Teams_IsValidTeamFlag( iTeamFlags ) )", (const char *)&queryFormat, "Com_Teams_IsValidTeamFlag( iTeamFlags )") )
    __debugbreak();
LABEL_18:
  if ( level.maxSentients )
  {
    while ( 1 )
    {
      v11 = v8;
      if ( level.sentients[v11].inuse )
      {
        eTeam = (unsigned int)level.sentients[v11].eTeam;
        if ( (unsigned int)eTeam >= 0xE0 )
        {
          LODWORD(v15) = 224;
          LODWORD(v14) = level.sentients[v11].eTeam;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v14, v15) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (eTeam & 0x1F)) & iTeamFlags.array[eTeam >> 5]) != 0 )
          break;
      }
      if ( ++v8 >= level.maxSentients )
        return;
    }
    for ( i = &level.sentients[v11]; i; i = Sentient_NextSentient(i, &iTeamFlags) )
    {
      if ( i != pSentient )
        Sentient_DissociateSentient(i, pSentient);
    }
  }
}

/*
==============
Sentient_DissociateNode
==============
*/
void Sentient_DissociateNode(sentient_s *pSentient, pathnode_t *pNode)
{
  if ( !pSentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 311, ASSERT_TYPE_ASSERT, "( pSentient )", (const char *)&queryFormat, "pSentient") )
    __debugbreak();
  if ( !pNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 312, ASSERT_TYPE_ASSERT, "( pNode )", (const char *)&queryFormat, "pNode") )
    __debugbreak();
  if ( pSentient->pClaimedNode == pNode )
    Path_RelinquishNodeNow(pSentient);
  if ( pSentient->pPrevClaimedNode == pNode )
    pSentient->pPrevClaimedNode = NULL;
  if ( pSentient->pNearestNode == pNode )
  {
    pSentient->pNearestNode = NULL;
    Sentient_InvalidateNearestNode(pSentient);
  }
}

/*
==============
Sentient_DissociateSentient
==============
*/
void Sentient_DissociateSentient(sentient_s *self, sentient_s *other)
{
  gentity_s *ent; 
  gentity_s *v5; 
  gclient_s *client; 
  gagent_s *agent; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  AICommonWrapper v12; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 243, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 244, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
    __debugbreak();
  if ( self == other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 245, ASSERT_TYPE_ASSERT, "(self != other)", (const char *)&queryFormat, "self != other") )
    __debugbreak();
  if ( !other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 246, ASSERT_TYPE_ASSERT, "(other)", (const char *)&queryFormat, "other") )
    __debugbreak();
  ent = self->ent;
  AIActorInterface::AIActorInterface(&v12.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v12.m_newAgentInterface);
  v12.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  AICommonInterface::AICommonInterface(&v12.m_botInterface);
  v12.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
  AICommonInterface::AICommonInterface(&v12.m_botAgentInterface);
  v12.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
  v12.m_pAI = NULL;
  AICommonWrapper::Setup(&v12, ent);
  if ( v12.m_pAI )
    v12.m_pAI->DissociateSentient(v12.m_pAI, other);
  v5 = self->ent;
  client = self->ent->client;
  if ( client && client->ps.throwbackGrenadeOwner == other->ent->s.number )
  {
    client->ps.throwbackGrenadeOwner = 2046;
    v5 = self->ent;
  }
  agent = v5->agent;
  if ( agent && agent->playerState.throwbackGrenadeOwner == other->ent->s.number )
    agent->playerState.throwbackGrenadeOwner = 2046;
  if ( self->ai && EntHandle::isDefined(&self->targetEnt) && EntHandle::ent(&self->targetEnt)->sentient == other )
    self->ai->sight.lastEnemySightPosValid = 0;
  v8 = self->meleeAttackerSpot[0];
  if ( v8 && v8 == other->ent->s.number )
    self->meleeAttackerSpot[0] = 0;
  v9 = self->meleeAttackerSpot[1];
  if ( v9 && v9 == other->ent->s.number )
    self->meleeAttackerSpot[1] = 0;
  v10 = self->meleeAttackerSpot[2];
  if ( v10 && v10 == other->ent->s.number )
    self->meleeAttackerSpot[2] = 0;
  v11 = self->meleeAttackerSpot[3];
  if ( v11 )
  {
    if ( v11 == other->ent->s.number )
      self->meleeAttackerSpot[3] = 0;
  }
}

/*
==============
Sentient_FindLastTacPointOnPathWithVis
==============
*/
const tacpoint_t *Sentient_FindLastTacPointOnPathWithVis(sentient_s *pSelf, sentient_s *pOtherGuy, sentient_info_t *pInfo, const vec3_t *pos, vec3_t *outCornerPos)
{
  AINavigator *Navigator; 
  gentity_s *ent; 
  const tacpoint_t *ClosestPointWithStaticNavLos; 
  __int64 v12; 
  __int64 v13; 
  bfx::SpaceHandle *v15; 
  const tacpoint_t *v16; 
  const tacpoint_t *v17; 
  bfx::AreaHandle hArea; 
  __int64 v19; 
  vec3_t outUp; 
  vec3_t losPos; 
  vec3_t outLastKnownPos; 

  v19 = -2i64;
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1650, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pOtherGuy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1651, ASSERT_TYPE_ASSERT, "(pOtherGuy)", (const char *)&queryFormat, "pOtherGuy") )
    __debugbreak();
  if ( !pInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1652, ASSERT_TYPE_ASSERT, "(pInfo)", (const char *)&queryFormat, "pInfo") )
    __debugbreak();
  SentientInfo_GetLastKnownPos(pInfo, &outLastKnownPos);
  Navigator = Nav_GetNavigator(pOtherGuy->ent);
  if ( !Navigator )
  {
    Navigator = Nav_GetNavigator(pSelf->ent);
    if ( !Navigator )
      return 0i64;
  }
  ent = pSelf->ent;
  if ( pos->v[0] == pSelf->ent->r.currentOrigin.v[0] && pos->v[1] == ent->r.currentOrigin.v[1] && pos->v[2] == ent->r.currentOrigin.v[2] )
  {
    ClosestPointWithStaticNavLos = Sentient_NearestTacPoint(pSelf);
  }
  else
  {
    bfx::AreaHandle::AreaHandle(&hArea);
    AINavigator::GetUpVector(Navigator, &outUp);
    v12 = (__int64)Navigator->Get2DNavigator(Navigator);
    v13 = v12;
    if ( !v12 )
    {
      bfx::AreaHandle::~AreaHandle(&hArea);
      return 0i64;
    }
    v15 = *(bfx::SpaceHandle **)(v12 + 16);
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1681, ASSERT_TYPE_ASSERT, "(navSpace)", (const char *)&queryFormat, "navSpace") )
      __debugbreak();
    Nav_GetClosestVerticalPos(pos, &outUp, *(_DWORD *)(v13 + 112), v15, (const bfx::PathSpec *)(v13 + 1188), &losPos, &hArea);
    ClosestPointWithStaticNavLos = TacGraph_FindClosestPointWithStaticNavLos(pos, &losPos, &hArea);
    bfx::AreaHandle::~AreaHandle(&hArea);
  }
  if ( !ClosestPointWithStaticNavLos )
    return 0i64;
  v16 = Sentient_NearestTacPoint(pOtherGuy);
  v17 = v16;
  if ( !v16 || !TacVisGraph_HasVis(ClosestPointWithStaticNavLos, v16) )
    return Navigator->FindLastTacPointOnPathWithVis(Navigator, &outLastKnownPos, ClosestPointWithStaticNavLos, pos, outCornerPos);
  TacGraph_GetApproxGroundPosForPoint(v17, outCornerPos);
  return v17;
}

/*
==============
Sentient_FirstSentient
==============
*/
sentient_s *Sentient_FirstSentient(const bitarray<224> *iTeamFlags)
{
  const bitarray<224> *AllTeamFlags; 
  __int128 v3; 
  double v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  __int128 *v8; 
  __int64 v9; 
  unsigned __int64 eTeam; 
  __int64 v12; 
  __int64 v13; 
  __int128 v14; 
  double v15; 
  unsigned int v16; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    AllTeamFlags = Com_TeamsSP_GetAllTeamFlags();
  else
    AllTeamFlags = Com_TeamsMP_GetAllTeamFlags();
  v3 = *(_OWORD *)AllTeamFlags->array;
  v4 = *(double *)&AllTeamFlags->array[4];
  v5 = AllTeamFlags->array[6];
  v14 = v3;
  v15 = v4;
  LODWORD(v14) = iTeamFlags->array[0] & ~(_DWORD)v3;
  DWORD1(v14) = ~DWORD1(v3) & iTeamFlags->array[1];
  DWORD2(v14) = ~DWORD2(v3) & iTeamFlags->array[2];
  HIDWORD(v14) = ~HIDWORD(v3) & iTeamFlags->array[3];
  *(_QWORD *)&v15 = ~*(_QWORD *)&v4 & *(_QWORD *)&iTeamFlags->array[4];
  v6 = 0;
  v16 = ~v5 & iTeamFlags->array[6];
  v7 = 0;
  v8 = &v14;
  while ( !*(_DWORD *)v8 )
  {
    ++v7;
    v8 = (__int128 *)((char *)v8 + 4);
    if ( v7 >= 7 )
      goto LABEL_10;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 986, ASSERT_TYPE_ASSERT, "( Com_Teams_IsValidTeamFlag( iTeamFlags ) )", (const char *)&queryFormat, "Com_Teams_IsValidTeamFlag( iTeamFlags )") )
    __debugbreak();
LABEL_10:
  if ( !level.maxSentients )
    return 0i64;
  while ( 1 )
  {
    v9 = v6;
    if ( level.sentients[v9].inuse )
    {
      eTeam = (unsigned int)level.sentients[v9].eTeam;
      if ( (unsigned int)eTeam >= 0xE0 )
      {
        LODWORD(v13) = 224;
        LODWORD(v12) = level.sentients[v9].eTeam;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v12, v13) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (eTeam & 0x1F)) & iTeamFlags->array[eTeam >> 5]) != 0 )
        break;
    }
    if ( ++v6 >= level.maxSentients )
      return 0i64;
  }
  return &level.sentients[v9];
}

/*
==============
Sentient_Free
==============
*/
void Sentient_Free(sentient_s *sentient)
{
  sentient_s *sentients; 
  gentity_s *ent; 
  XAnimTree *v4; 
  __int64 i; 
  actor_s *v6; 
  int iDamageParts; 
  AIActorInterface v8; 
  AIActorInterface *v9; 

  if ( !sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 136, ASSERT_TYPE_ASSERT, "(sentient)", (const char *)&queryFormat, "sentient") )
    __debugbreak();
  sentients = level.sentients;
  if ( !level.sentients )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 137, (AssertType)level.sentients, "(level.sentients)", (const char *)&queryFormat, "level.sentients") )
      __debugbreak();
    sentients = level.sentients;
  }
  if ( sentient < sentients || sentient >= &sentients[level.maxSentients] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 138, ASSERT_TYPE_ASSERT, "(sentient >= level.sentients && sentient < level.sentients + level.maxSentients)", (const char *)&queryFormat, "sentient >= level.sentients && sentient < level.sentients + level.maxSentients") )
      __debugbreak();
    sentients = level.sentients;
  }
  if ( &sentients[sentient - sentients] != sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 139, ASSERT_TYPE_ASSERT, "(&level.sentients[sentient - level.sentients] == sentient)", (const char *)&queryFormat, "&level.sentients[sentient - level.sentients] == sentient") )
    __debugbreak();
  if ( !sentient->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 140, ASSERT_TYPE_ASSERT, "(sentient->ent)", (const char *)&queryFormat, "sentient->ent") )
    __debugbreak();
  if ( sentient->ent->actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 141, ASSERT_TYPE_ASSERT, "(sentient->ent->actor == 0)", (const char *)&queryFormat, "sentient->ent->actor == NULL") )
    __debugbreak();
  ent = sentient->ent;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( ((ent->s.eType - 1) & 0xFFEF) == 0 )
    {
      if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
        __debugbreak();
      v4 = *(XAnimTree **)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)ent->s.number) + 2040);
      if ( v4 )
        XAnimClearTreeNoObj(v4);
    }
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_READY) )
  {
    for ( i = 0i64; i < 38; ++i )
    {
      v6 = &level.actors[i];
      if ( level.actors[i].inuse && v6->pPileUpEnt == ent )
      {
        AIActorInterface::AIActorInterface(&v8);
        v9 = NULL;
        AIActorInterface::SetActor(&v8, v6);
        v9 = &v8;
        v8.ClearPileUp(&v8);
      }
    }
  }
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->FreeEntityRefs(GUtils::ms_gUtils, sentient->ent);
  Sentient_Dissociate(sentient);
  sentient->ent->sentient = NULL;
  SentientHandleDissociate(sentient);
  if ( !GSave::ms_gSave && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 71, ASSERT_TYPE_ASSERT, "( ms_gSave )", (const char *)&queryFormat, "ms_gSave") )
    __debugbreak();
  GSave::ms_gSave->ScrFreeSentientFields(GSave::ms_gSave, sentient);
  iDamageParts = sentient->iDamageParts;
  if ( iDamageParts != -1 )
  {
    DamageParts_Free(iDamageParts);
    sentient->iDamageParts = -1;
  }
  DebugWipe(sentient, 0xB8ui64);
  sentient->inuse = 0;
}

/*
==============
Sentient_GetDebugEyePosition
==============
*/
void Sentient_GetDebugEyePosition(const sentient_s *self, vec3_t *vEyePosOut)
{
  const playerState_s *EntityPlayerState; 
  gentity_s *ent; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 470, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 471, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(self->ent);
  if ( EntityPlayerState )
  {
    G_Client_GetEyePosition(EntityPlayerState, vEyePosOut);
  }
  else
  {
    ent = self->ent;
    vEyePosOut->v[0] = self->ent->r.currentOrigin.v[0];
    vEyePosOut->v[1] = ent->r.currentOrigin.v[1];
    vEyePosOut->v[2] = ent->r.currentOrigin.v[2] + 56.0;
  }
}

/*
==============
Sentient_GetEyePosition
==============
*/
void Sentient_GetEyePosition(const sentient_s *self, vec3_t *vEyePosOut)
{
  gentity_s *ent; 
  AICommonWrapper v5; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 392, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 393, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
    __debugbreak();
  ent = self->ent;
  AIActorInterface::AIActorInterface(&v5.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v5.m_newAgentInterface);
  v5.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  AICommonInterface::AICommonInterface(&v5.m_botInterface);
  v5.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
  AICommonInterface::AICommonInterface(&v5.m_botAgentInterface);
  v5.m_pAI = NULL;
  v5.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
  AICommonWrapper::Setup(&v5, ent);
  if ( v5.m_pAI )
  {
    v5.m_pAI->GetEyePosition(v5.m_pAI, vEyePosOut);
  }
  else if ( self->ent->client )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Client_GetEyePosition");
    G_Client_GetEyePosition_NoBob(&self->ent->client->ps, vEyePosOut);
    Sys_ProfEndNamedEvent();
  }
  else
  {
    G_Utils_EntityCentroid(self->ent, vEyePosOut);
  }
}

/*
==============
Sentient_GetForwardDir
==============
*/
void Sentient_GetForwardDir(const sentient_s *self, vec3_t *vDirOut)
{
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 341, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 342, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
    __debugbreak();
  YawVectors(self->ent->r.currentAngles.v[1], vDirOut, NULL);
}

/*
==============
Sentient_GetGround
==============
*/
__int64 Sentient_GetGround(const sentient_s *self)
{
  gclient_s *client; 
  int MoverThenGroundEnt; 
  unsigned __int16 v5; 
  AIWrapper v6; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 358, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 359, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
    __debugbreak();
  AIWrapper::AIWrapper(&v6, self->ent);
  if ( v6.m_pAI )
  {
    AIScriptedInterface::GetGroundEntNum(v6.m_pAI);
    return 2047i64;
  }
  client = self->ent->client;
  if ( !client )
    return 2047i64;
  MoverThenGroundEnt = BGMovingPlatformPS::GetMoverThenGroundEnt(&client->ps.movingPlatforms, &client->ps);
  v5 = MoverThenGroundEnt;
  if ( (MoverThenGroundEnt < 0 || (unsigned int)MoverThenGroundEnt > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)MoverThenGroundEnt, "signed", MoverThenGroundEnt) )
    __debugbreak();
  return v5;
}

/*
==============
Sentient_GetGroundFromPs
==============
*/
__int64 Sentient_GetGroundFromPs(const playerState_s *ps)
{
  int MoverThenGroundEnt; 
  unsigned __int16 v2; 

  MoverThenGroundEnt = BGMovingPlatformPS::GetMoverThenGroundEnt(&ps->movingPlatforms, ps);
  v2 = MoverThenGroundEnt;
  if ( (MoverThenGroundEnt < 0 || (unsigned int)MoverThenGroundEnt > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)MoverThenGroundEnt, "signed", MoverThenGroundEnt) )
    __debugbreak();
  return v2;
}

/*
==============
Sentient_GetHeadHeight
==============
*/
float Sentient_GetHeadHeight(const sentient_s *self)
{
  gclient_s *client; 
  const SuitDef *SuitDef; 
  gagent_s *agent; 
  AIWrapper v6; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 490, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 491, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
    __debugbreak();
  AIWrapper::AIWrapper(&v6, self->ent);
  client = self->ent->client;
  if ( client )
  {
    SuitDef = BG_GetSuitDef(client->ps.suitIndex);
    if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 498, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    return (float)(SuitDef->bounds_height_stand - SuitDef->viewheight_stand);
  }
  agent = self->ent->agent;
  if ( !agent )
  {
    if ( !v6.m_pAI )
      return 0.0;
    return FLOAT_6_0;
  }
  if ( v6.m_pAI )
    return FLOAT_6_0;
  SuitDef = BG_GetSuitDef(agent->playerState.suitIndex);
  if ( SuitDef || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 504, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    return (float)(SuitDef->bounds_height_stand - SuitDef->viewheight_stand);
  __debugbreak();
  return (float)(MEMORY[0x224] - MEMORY[0x200]);
}

/*
==============
Sentient_GetHeadPosition
==============
*/
void Sentient_GetHeadPosition(const sentient_s *self, vec3_t *vEyePosOut)
{
  bool HasRemoteEyes; 
  playerState_s *EntityPlayerState; 
  const playerState_s *v6; 
  gentity_s *ent; 
  float v8; 
  GHandler *Handler; 
  int BoneIndex; 
  gentity_s *v11; 
  float v12; 
  gentity_s *v13; 
  AICommonWrapper v14; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 422, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 423, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
    goto LABEL_25;
  HasRemoteEyes = Sentient_HasRemoteEyes(self);
  EntityPlayerState = G_GetEntityPlayerState(self->ent);
  v6 = EntityPlayerState;
  if ( HasRemoteEyes )
  {
    ent = self->ent;
    vEyePosOut->v[0] = self->ent->r.currentOrigin.v[0];
    vEyePosOut->v[1] = ent->r.currentOrigin.v[1];
    v8 = ent->r.currentOrigin.v[2];
    vEyePosOut->v[2] = v8;
    vEyePosOut->v[2] = v8 + EntityPlayerState->viewHeightCurrent;
    return;
  }
  if ( EntityPlayerState && (Handler = GHandler::getHandler(), BG_ShouldHandleThirdPersonVehicleCamera(v6, Handler)) )
  {
    BoneIndex = SV_Game_DObjGetBoneIndex(self->ent, scr_const.tag_eye);
    v11 = self->ent;
    if ( BoneIndex < 0 )
    {
      vEyePosOut->v[0] = v11->r.currentOrigin.v[0];
      vEyePosOut->v[1] = v11->r.currentOrigin.v[1];
      v12 = v11->r.currentOrigin.v[2];
      vEyePosOut->v[2] = v12;
      vEyePosOut->v[2] = v12 + v6->viewHeightCurrent;
    }
    else
    {
      G_Utils_DObjGetWorldBoneIndexPos(v11, BoneIndex, vEyePosOut);
    }
  }
  else
  {
LABEL_25:
    if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 393, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
      __debugbreak();
    v13 = self->ent;
    AIActorInterface::AIActorInterface(&v14.m_actorInterface);
    AIAgentInterface::AIAgentInterface(&v14.m_newAgentInterface);
    v14.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    AICommonInterface::AICommonInterface(&v14.m_botInterface);
    v14.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
    AICommonInterface::AICommonInterface(&v14.m_botAgentInterface);
    v14.m_pAI = NULL;
    v14.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
    AICommonWrapper::Setup(&v14, v13);
    if ( v14.m_pAI )
    {
      v14.m_pAI->GetEyePosition(v14.m_pAI, vEyePosOut);
    }
    else if ( self->ent->client )
    {
      Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Client_GetEyePosition");
      G_Client_GetEyePosition_NoBob(&self->ent->client->ps, vEyePosOut);
      Sys_ProfEndNamedEvent();
    }
    else
    {
      G_Utils_EntityCentroid(self->ent, vEyePosOut);
    }
  }
}

/*
==============
Sentient_GetLastKnownEnemyPos
==============
*/
void Sentient_GetLastKnownEnemyPos(const sentient_s *pSelf, const gentity_s *enemy, vec3_t *outLastKnownPos)
{
  sentient_s *sentient; 
  sentient_info_t *SentientInfo; 
  int lastKnownPosTime; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1458, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1459, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  sentient = enemy->sentient;
  if ( !sentient || (SentientInfo = Sentient_GetSentientInfo(pSelf, sentient), SentientInfo->VisCache.bVisible) || (lastKnownPosTime = SentientInfo->lastKnownPosTime, lastKnownPosTime <= 0) || level.time - lastKnownPosTime <= 0 )
  {
    outLastKnownPos->v[0] = enemy->r.currentOrigin.v[0];
    outLastKnownPos->v[1] = enemy->r.currentOrigin.v[1];
    outLastKnownPos->v[2] = enemy->r.currentOrigin.v[2];
  }
  else
  {
    SentientInfo_GetLastKnownPos(SentientInfo, outLastKnownPos);
  }
}

/*
==============
Sentient_GetLastKnownEnemyPosWithDuration
==============
*/
void Sentient_GetLastKnownEnemyPosWithDuration(const sentient_s *pSelf, const gentity_s *enemy, int cheatDuration, vec3_t *outLastKnownPos)
{
  sentient_s *sentient; 
  sentient_info_t *SentientInfo; 
  int lastKnownPosTime; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1458, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1459, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  sentient = enemy->sentient;
  if ( !sentient || (SentientInfo = Sentient_GetSentientInfo(pSelf, sentient), SentientInfo->VisCache.bVisible) || (lastKnownPosTime = SentientInfo->lastKnownPosTime, lastKnownPosTime <= 0) || level.time - lastKnownPosTime <= cheatDuration )
  {
    outLastKnownPos->v[0] = enemy->r.currentOrigin.v[0];
    outLastKnownPos->v[1] = enemy->r.currentOrigin.v[1];
    outLastKnownPos->v[2] = enemy->r.currentOrigin.v[2];
  }
  else
  {
    SentientInfo_GetLastKnownPos(SentientInfo, outLastKnownPos);
  }
}

/*
==============
Sentient_GetMaxSightDistSqrd
==============
*/
float Sentient_GetMaxSightDistSqrd(sentient_s *pSelf)
{
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 528, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pSelf->ai && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 529, ASSERT_TYPE_ASSERT, "(pSelf->ai)", (const char *)&queryFormat, "pSelf->ai") )
    __debugbreak();
  return pSelf->ai->sight.fMaxSightDistSqrd;
}

/*
==============
Sentient_GetOrigin
==============
*/
void Sentient_GetOrigin(const sentient_s *self, vec3_t *vOriginOut)
{
  gentity_s *ent; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 330, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 331, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
    __debugbreak();
  ent = self->ent;
  vOriginOut->v[0] = self->ent->r.currentOrigin.v[0];
  vOriginOut->v[1] = ent->r.currentOrigin.v[1];
  vOriginOut->v[2] = ent->r.currentOrigin.v[2];
}

/*
==============
Sentient_GetRemoteEyePosition
==============
*/
void Sentient_GetRemoteEyePosition(const sentient_s *self, vec3_t *vEyePosOut)
{
  playerState_s *EntityPlayerState; 
  int entity; 
  __int16 remoteControlEnt; 
  gentity_s *v7; 
  const VehicleDef *ServerDef; 
  gentity_s *ent; 
  float vehCam_offsetZ; 
  float vehCam_offsetY; 
  scr_string_t v15; 
  int WorldTagMatrix; 
  int v17; 
  float v18; 
  Vehicle *vehicle; 
  const VehicleDef *v20; 
  float vehCam_offsetZ3P; 
  float vehCam_offsetX3P; 
  float targetFovOffset; 
  vec3_t in1; 
  tmat43_t<vec3_t> outTagMat; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 625, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 626, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(self->ent);
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerState->otherFlags, ACTIVE, 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 636, ASSERT_TYPE_ASSERT, "(ps->otherFlags.TestFlag( POtherFlagsCommon::REMOTE_EYES ))", (const char *)&queryFormat, "ps->otherFlags.TestFlag( POtherFlagsCommon::REMOTE_EYES )") )
    __debugbreak();
  if ( EntityPlayerState->remoteEyesEnt == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 637, ASSERT_TYPE_ASSERT, "(ps->remoteEyesEnt != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->remoteEyesEnt != ENTITYNUM_NONE") )
    __debugbreak();
  entity = EntityPlayerState->vehicleState.entity;
  if ( entity != 2047 && entity != EntityPlayerState->remoteEyesEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 638, ASSERT_TYPE_ASSERT, "((ps->vehicleState.entity == ENTITYNUM_NONE) || (ps->vehicleState.entity == ps->remoteEyesEnt))", (const char *)&queryFormat, "(ps->vehicleState.entity == ENTITYNUM_NONE) || (ps->vehicleState.entity == ps->remoteEyesEnt)") )
    __debugbreak();
  remoteControlEnt = EntityPlayerState->remoteControlEnt;
  if ( remoteControlEnt != 2047 && remoteControlEnt != EntityPlayerState->remoteEyesEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 639, ASSERT_TYPE_ASSERT, "((ps->remoteControlEnt == ENTITYNUM_NONE) || (ps->remoteControlEnt == ps->remoteEyesEnt))", (const char *)&queryFormat, "(ps->remoteControlEnt == ENTITYNUM_NONE) || (ps->remoteControlEnt == ps->remoteEyesEnt)") )
    __debugbreak();
  v7 = &g_entities[EntityPlayerState->remoteEyesEnt];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 642, ASSERT_TYPE_ASSERT, "( remoteEyesEnt )", (const char *)&queryFormat, "remoteEyesEnt") )
    __debugbreak();
  if ( EntityPlayerState->vehicleState.entity == 2047 )
  {
    if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
      __debugbreak();
    v15 = GConfigStrings::ms_gConfigStrings->GetClientTagName(GConfigStrings::ms_gConfigStrings, EntityPlayerState->remoteEyesTagname);
    WorldTagMatrix = G_Utils_DObjGetWorldTagMatrix(v7, v15, &outTagMat);
    if ( WorldTagMatrix || (v17 = G_Utils_DObjGetWorldTagMatrix(v7, scr_const.tag_origin, &outTagMat)) != 0 )
    {
      v18 = outTagMat.m[3].v[1];
      vEyePosOut->v[0] = outTagMat.m[3].v[0];
      vEyePosOut->v[2] = outTagMat.m[3].v[2];
      vEyePosOut->v[1] = v18;
      goto LABEL_43;
    }
    goto LABEL_42;
  }
  if ( !G_Utils_DObjGetWorldTagMatrix(v7, scr_const.tag_camera, &outTagMat) && !G_Utils_DObjGetWorldTagMatrix(v7, scr_const.tag_player, &outTagMat) && !G_Utils_DObjGetWorldTagMatrix(v7, scr_const.tag_origin, &outTagMat) )
  {
LABEL_42:
    vEyePosOut->v[0] = v7->r.currentOrigin.v[0];
    vEyePosOut->v[1] = v7->r.currentOrigin.v[1];
    vEyePosOut->v[2] = v7->r.currentOrigin.v[2];
    goto LABEL_43;
  }
  if ( !v7->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 658, ASSERT_TYPE_ASSERT, "( remoteEyesEnt->vehicle )", (const char *)&queryFormat, "remoteEyesEnt->vehicle") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(v7->vehicle->defIndex);
  if ( !ServerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 660, ASSERT_TYPE_ASSERT, "( vehicleDef )", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  ent = self->ent;
  vehCam_offsetZ = ServerDef->vehCam_offsetZ;
  vehCam_offsetY = ServerDef->vehCam_offsetY;
  in1.v[0] = ServerDef->vehCam_offsetX;
  in1.v[1] = vehCam_offsetY;
  in1.v[2] = vehCam_offsetZ;
  vEyePosOut->v[0] = ent->r.currentOrigin.v[0];
  vEyePosOut->v[1] = ent->r.currentOrigin.v[1];
  vEyePosOut->v[2] = ent->r.currentOrigin.v[2];
  MatrixTransformVector43(&in1, &outTagMat, vEyePosOut);
LABEL_43:
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((v7->s.eType - 12) & 0xFFFD) == 0 )
  {
    vehicle = v7->vehicle;
    if ( vehicle )
    {
      v20 = G_Vehicle_GetServerDef(vehicle->defIndex);
      if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 692, ASSERT_TYPE_ASSERT, "( vehicleDef )", (const char *)&queryFormat, "vehicleDef") )
        __debugbreak();
      if ( !v20->camRemoteDrive && v20->vehCam_zOffsetMode == VEHCAM_ZMODE_VEHICLE && v20->vehCam_zOffsetMode3P == VEHCAM_ZMODE_VIEW && v20->vehCam_radius3P > 0.0 )
      {
        if ( EntityPlayerState->vehicleState.entity == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 701, ASSERT_TYPE_ASSERT, "( ps->vehicleState.entity != ENTITYNUM_NONE )", (const char *)&queryFormat, "ps->vehicleState.entity != ENTITYNUM_NONE") )
          __debugbreak();
        vectoangles(&self->ai->eyeInfo.dir, &angles);
        AnglesToAxis(&angles, &axis);
        vehCam_offsetZ3P = v20->vehCam_offsetZ3P;
        vehCam_offsetX3P = v20->vehCam_offsetX3P;
        in1.v[1] = v20->vehCam_offsetY3P;
        in1.v[2] = vehCam_offsetZ3P;
        in1.v[0] = vehCam_offsetX3P;
        BG_Vehicle_GetCameraTargetFovAndOffset(v20, fsqrt((float)((float)(EntityPlayerState->vehicleState.velocity.v[0] * EntityPlayerState->vehicleState.velocity.v[0]) + (float)(EntityPlayerState->vehicleState.velocity.v[1] * EntityPlayerState->vehicleState.velocity.v[1])) + (float)(EntityPlayerState->vehicleState.velocity.v[2] * EntityPlayerState->vehicleState.velocity.v[2])), NULL, &targetFovOffset);
        G_Vehicle_GetVehicleViewOrigin(EntityPlayerState, vEyePosOut);
      }
    }
  }
}

/*
==============
Sentient_GetRemoteVehicleSentient
==============
*/
sentient_s *Sentient_GetRemoteVehicleSentient(const sentient_s *self)
{
  playerState_s *EntityPlayerState; 
  __int64 entity; 

  if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 537, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(self->ent);
  if ( !EntityPlayerState )
    return 0i64;
  entity = EntityPlayerState->vehicleState.entity;
  if ( (_DWORD)entity == 2047 )
    return 0i64;
  else
    return g_entities[entity].sentient;
}

/*
==============
Sentient_GetScarinessForDistance
==============
*/
float Sentient_GetScarinessForDistance(sentient_s *self, sentient_s *enemy, float fDist)
{
  double DefaultScarinessForDistance; 
  gentity_s *ent; 
  AICommonWrapper v8; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1430, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1431, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
    __debugbreak();
  if ( !enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1432, ASSERT_TYPE_ASSERT, "(enemy)", (const char *)&queryFormat, "enemy") )
    __debugbreak();
  LODWORD(DefaultScarinessForDistance) = 0;
  if ( fDist < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1433, ASSERT_TYPE_ASSERT, "(fDist >= 0)", (const char *)&queryFormat, "fDist >= 0") )
    __debugbreak();
  ent = self->ent;
  AIActorInterface::AIActorInterface(&v8.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v8.m_newAgentInterface);
  v8.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  AICommonInterface::AICommonInterface(&v8.m_botInterface);
  v8.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
  AICommonInterface::AICommonInterface(&v8.m_botAgentInterface);
  v8.m_pAI = NULL;
  v8.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
  AICommonWrapper::Setup(&v8, ent);
  if ( v8.m_pAI )
    ((void (__fastcall *)(AICommonInterface *, sentient_s *))v8.m_pAI->GetScarinessForDistance)(v8.m_pAI, enemy);
  else
    DefaultScarinessForDistance = AICommonInterface::GetDefaultScarinessForDistance(enemy, fDist);
  return *(float *)&DefaultScarinessForDistance;
}

/*
==============
Sentient_GetVelocity
==============
*/
void Sentient_GetVelocity(const sentient_s *self, vec3_t *vVelOut)
{
  gentity_s *ent; 
  gclient_s *client; 
  AICommonWrapper v6; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 375, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 376, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
    __debugbreak();
  ent = self->ent;
  AIActorInterface::AIActorInterface(&v6.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v6.m_newAgentInterface);
  v6.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  AICommonInterface::AICommonInterface(&v6.m_botInterface);
  v6.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
  AICommonInterface::AICommonInterface(&v6.m_botAgentInterface);
  v6.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
  v6.m_pAI = NULL;
  AICommonWrapper::Setup(&v6, ent);
  if ( v6.m_pAI )
  {
    v6.m_pAI->GetVelocity(v6.m_pAI, vVelOut);
  }
  else
  {
    client = self->ent->client;
    if ( client )
    {
      vVelOut->v[0] = client->ps.velocity.v[0];
      vVelOut->v[1] = client->ps.velocity.v[1];
      vVelOut->v[2] = client->ps.velocity.v[2];
    }
    else
    {
      *(_QWORD *)vVelOut->v = 0i64;
      vVelOut->v[2] = 0.0;
    }
  }
}

/*
==============
Sentient_HasDecentVis
==============
*/
bool Sentient_HasDecentVis(sentient_s *pSelf, sentient_s *pOther)
{
  ai_common_t *ai; 
  pathnode_t *v5; 
  pathnode_t *pClaimedNode; 
  AICommonInterface *m_pAI; 
  ai_common_t *v8; 
  AICommonInterface *v9; 
  const tacpoint_t *v11; 
  const tacpoint_t *v12; 
  const tacpoint_t *v13; 
  const tacpoint_t *v14; 
  AICommonWrapper v15; 
  AICommonWrapper v16; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1544, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pOther && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1545, ASSERT_TYPE_ASSERT, "(pOther)", (const char *)&queryFormat, "pOther") )
    __debugbreak();
  ai = pSelf->ai;
  v5 = NULL;
  pClaimedNode = NULL;
  if ( ai )
  {
    AIActorInterface::AIActorInterface(&v15.m_actorInterface);
    AIAgentInterface::AIAgentInterface(&v15.m_newAgentInterface);
    v15.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    AICommonInterface::AICommonInterface(&v15.m_botInterface);
    v15.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
    AICommonInterface::AICommonInterface(&v15.m_botAgentInterface);
    v15.m_pAI = NULL;
    v15.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
    AICommonWrapper::Setup(&v15, ai->ent);
    m_pAI = v15.m_pAI;
    if ( !v15.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1558, ASSERT_TYPE_ASSERT, "(pSelfAI)", (const char *)&queryFormat, "pSelfAI") )
      __debugbreak();
    if ( AICommonInterface::NearClaimNode(m_pAI, 48.0) )
      pClaimedNode = pSelf->pClaimedNode;
  }
  v8 = pOther->ai;
  if ( v8 )
  {
    AIActorInterface::AIActorInterface(&v16.m_actorInterface);
    AIAgentInterface::AIAgentInterface(&v16.m_newAgentInterface);
    v16.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    AICommonInterface::AICommonInterface(&v16.m_botInterface);
    v16.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
    AICommonInterface::AICommonInterface(&v16.m_botAgentInterface);
    v16.m_pAI = NULL;
    v16.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
    AICommonWrapper::Setup(&v16, v8->ent);
    v9 = v16.m_pAI;
    if ( !v16.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1566, ASSERT_TYPE_ASSERT, "(pOtherAI)", (const char *)&queryFormat, "pOtherAI") )
      __debugbreak();
    if ( AICommonInterface::NearClaimNode(v9, 48.0) )
      v5 = pOther->pClaimedNode;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && SV_BotIsBotEnt(pSelf->ent) )
  {
    if ( pClaimedNode && v5 && Path_NodesVisibleNoPeek(pClaimedNode, v5) )
      return 1;
  }
  else if ( pClaimedNode && v5 && Path_NodesVisible(pClaimedNode, v5) )
  {
    return 1;
  }
  v11 = Sentient_NearestTacPoint(pSelf);
  v12 = v11;
  if ( v11 && v5 && TacGraph_HasVis(v11, v5) )
    return 1;
  v13 = Sentient_NearestTacPoint(pOther);
  v14 = v13;
  if ( pClaimedNode )
  {
    if ( v13 && TacGraph_HasVis(v13, pClaimedNode) )
      return 1;
  }
  return v12 && v14 && TacVisGraph_HasVis(v12, v14);
}

/*
==============
Sentient_HasDecentVisFromExposed
==============
*/
bool Sentient_HasDecentVisFromExposed(sentient_s *pSelf, sentient_s *pOther)
{
  ai_common_t *ai; 
  pathnode_t *v5; 
  pathnode_t *pClaimedNode; 
  AICommonInterface *m_pAI; 
  ai_common_t *v8; 
  AICommonInterface *v9; 
  const tacpoint_t *PointForPathnode; 
  const tacpoint_t *v11; 
  const tacpoint_t *v12; 
  AICommonWrapper v14; 
  AICommonWrapper v15; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1489, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pOther && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1490, ASSERT_TYPE_ASSERT, "(pOther)", (const char *)&queryFormat, "pOther") )
    __debugbreak();
  ai = pSelf->ai;
  v5 = NULL;
  pClaimedNode = NULL;
  if ( ai )
  {
    AIActorInterface::AIActorInterface(&v14.m_actorInterface);
    AIAgentInterface::AIAgentInterface(&v14.m_newAgentInterface);
    v14.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    AICommonInterface::AICommonInterface(&v14.m_botInterface);
    v14.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
    AICommonInterface::AICommonInterface(&v14.m_botAgentInterface);
    v14.m_pAI = NULL;
    v14.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
    AICommonWrapper::Setup(&v14, ai->ent);
    m_pAI = v14.m_pAI;
    if ( !v14.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1503, ASSERT_TYPE_ASSERT, "(pSelfAI)", (const char *)&queryFormat, "pSelfAI") )
      __debugbreak();
    if ( AICommonInterface::NearClaimNode(m_pAI, 48.0) )
      pClaimedNode = pSelf->pClaimedNode;
  }
  v8 = pOther->ai;
  if ( v8 )
  {
    AIActorInterface::AIActorInterface(&v15.m_actorInterface);
    AIAgentInterface::AIAgentInterface(&v15.m_newAgentInterface);
    v15.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    AICommonInterface::AICommonInterface(&v15.m_botInterface);
    v15.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
    AICommonInterface::AICommonInterface(&v15.m_botAgentInterface);
    v15.m_pAI = NULL;
    v15.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
    AICommonWrapper::Setup(&v15, v8->ent);
    v9 = v15.m_pAI;
    if ( !v15.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1511, ASSERT_TYPE_ASSERT, "(pOtherAI)", (const char *)&queryFormat, "pOtherAI") )
      __debugbreak();
    if ( AICommonInterface::NearClaimNode(v9, 48.0) )
      v5 = pOther->pClaimedNode;
  }
  if ( pClaimedNode )
    PointForPathnode = TacGraph_GetPointForPathnode(pClaimedNode);
  else
    PointForPathnode = Sentient_NearestTacPoint(pSelf);
  v11 = PointForPathnode;
  if ( v5 )
    v12 = TacGraph_GetPointForPathnode(v5);
  else
    v12 = Sentient_NearestTacPoint(pOther);
  return v11 && v12 && TacVisGraph_HasVis(v11, v12);
}

/*
==============
Sentient_HasRemoteEyes
==============
*/
char Sentient_HasRemoteEyes(const sentient_s *self)
{
  playerState_s *EntityPlayerState; 
  playerState_s *v3; 
  __int16 remoteEyesEnt; 
  __int16 remoteTurretEnt; 
  __int16 v6; 
  gentity_s *GEntity; 
  gentity_s *v8; 
  EntityTagInfo *tagInfo; 
  gentity_s *parent; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned int entity; 
  __int64 v15; 
  __int64 v16; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 575, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 576, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(self->ent);
  v3 = EntityPlayerState;
  if ( EntityPlayerState )
  {
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&EntityPlayerState->otherFlags, ACTIVE, 1u) )
    {
      remoteEyesEnt = v3->remoteEyesEnt;
      if ( remoteEyesEnt != 2047 )
      {
        if ( (unsigned __int16)remoteEyesEnt >= 0x800u )
        {
          LODWORD(v15) = remoteEyesEnt;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 583, ASSERT_TYPE_ASSERT, "(unsigned)( ps->remoteEyesEnt ) < (unsigned)( ( 2048 ) )", "ps->remoteEyesEnt doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, 2048) )
            __debugbreak();
        }
        if ( G_IsEntityInUse(v3->remoteEyesEnt) )
          return 1;
      }
    }
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v3->otherFlags, ACTIVE, 0x18u) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2396, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
        __debugbreak();
      remoteTurretEnt = v3->remoteTurretEnt;
      if ( remoteTurretEnt != 2047 && G_IsEntityInUse(remoteTurretEnt) )
      {
        v6 = v3->remoteTurretEnt;
        if ( (unsigned __int16)v6 >= 0x800u )
        {
          LODWORD(v16) = 2048;
          LODWORD(v15) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 592, ASSERT_TYPE_ASSERT, "(unsigned)( ps->remoteTurretEnt ) < (unsigned)( ( 2048 ) )", "ps->remoteTurretEnt doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        GEntity = G_GetGEntity(v3->remoteTurretEnt);
        v8 = GEntity;
        if ( GEntity )
        {
          if ( GEntity->turretHandle.m_objIndex )
          {
            tagInfo = GEntity->tagInfo;
            if ( !tagInfo )
              return 1;
            parent = tagInfo->parent;
            if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
              __debugbreak();
            v11 = (__int64)((unsigned __int128)(((char *)parent - (char *)g_entities) * (__int128)0x2D02D02D02D02D03i64) >> 64) >> 8;
            v12 = (v11 >> 63) + v11;
            if ( (unsigned int)v12 >= 0x800 )
            {
              LODWORD(v16) = 2048;
              LODWORD(v15) = v12;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
                __debugbreak();
            }
            if ( G_IsEntityInUse((__int16)v12) )
            {
              if ( !v8->tagInfo->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 601, ASSERT_TYPE_ASSERT, "(turretEnt->tagInfo->parent)", (const char *)&queryFormat, "turretEnt->tagInfo->parent") )
                __debugbreak();
              entity = v3->vehicleState.entity;
              if ( entity < 0x7FF && G_GetGEntity(entity) != v8->tagInfo->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 602, ASSERT_TYPE_ASSERT, "((ps->vehicleState.entity >= ENTITYNUM_NONE) || (G_GetGEntity( ps->vehicleState.entity ) == turretEnt->tagInfo->parent))", (const char *)&queryFormat, "(ps->vehicleState.entity >= ENTITYNUM_NONE) || (G_GetGEntity( ps->vehicleState.entity ) == turretEnt->tagInfo->parent)") )
                __debugbreak();
              if ( v8->tagInfo->parent->s.number == v3->remoteTurretEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 603, ASSERT_TYPE_ASSERT, "(turretEnt->tagInfo->parent->s.number != ps->remoteTurretEnt)", (const char *)&queryFormat, "turretEnt->tagInfo->parent->s.number != ps->remoteTurretEnt") )
                __debugbreak();
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

/*
==============
Sentient_Init
==============
*/
void Sentient_Init(sentient_s *sentient, gentity_s *ent, team_t eTeam)
{
  sentient->ent = ent;
  if ( Com_GameMode_SupportsFeature(WEAPON_READY) )
    sentient->ai = ent->actor;
  Sentient_SetTeam(sentient, eTeam);
  *(_QWORD *)&sentient->iThreatBias = 0i64;
  sentient->pPrevClaimedNode = NULL;
  sentient->locDamageTableIndex = 0;
  _XMM0 = Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH);
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_20000_0);
  __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  sentient->maxVisibleDist = *(float *)&_XMM0;
  sentient->attackerAccuracy = 1.0;
  sentient->iDamageParts = -1;
  sentient->oldOrigin.v[0] = ent->r.currentOrigin.v[0];
  sentient->oldOrigin.v[1] = ent->r.currentOrigin.v[1];
  sentient->oldOrigin.v[2] = ent->r.currentOrigin.v[2];
  sentient->lastNavObstacleTime = level.time;
  sentient->navObstacleActive = 0;
  Scr_SetString(&sentient->enemySelector, scr_const.enemyselector_default);
}

/*
==============
Sentient_InvalidateNearestNode
==============
*/
void Sentient_InvalidateNearestNode(sentient_s *self)
{
  if ( self )
  {
    self->bNearestNodeValid = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 848, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
      __debugbreak();
    MEMORY[0x90] = 0;
  }
}

/*
==============
Sentient_InvalidateNearestTacPoint
==============
*/
void Sentient_InvalidateNearestTacPoint(sentient_s *pSelf)
{
  pSelf->bNearestTacPointValid = 0;
}

/*
==============
Sentient_IsAerial
==============
*/
_BOOL8 Sentient_IsAerial(const sentient_s *self)
{
  entityType_s eType; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 550, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 551, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
    __debugbreak();
  eType = self->ent->s.eType;
  return eType == ET_HELICOPTER || eType == ET_SCRIPTMOVER && (self->sentientFlags & 3) != 0;
}

/*
==============
Sentient_IsEnemyIndoor
==============
*/
_BOOL8 Sentient_IsEnemyIndoor(sentient_s *self)
{
  EntHandle *p_targetEnt; 
  sentient_s *sentient; 
  pathnode_t *pNearestNode; 
  _BOOL8 result; 

  p_targetEnt = &self->targetEnt;
  result = 0;
  if ( EntHandle::isDefined(&self->targetEnt) )
  {
    sentient = EntHandle::ent(p_targetEnt)->sentient;
    if ( sentient )
    {
      if ( sentient->bNearestNodeValid )
      {
        pNearestNode = sentient->pNearestNode;
        if ( pNearestNode )
        {
          if ( (pNearestNode->constant.spawnflags & 0x2000) != 0 )
            return 1;
        }
      }
    }
  }
  return result;
}

/*
==============
Sentient_IsIndoor
==============
*/
_BOOL8 Sentient_IsIndoor(sentient_s *self)
{
  pathnode_t *pNearestNode; 
  _BOOL8 result; 

  result = 0;
  if ( self->bNearestNodeValid )
  {
    pNearestNode = self->pNearestNode;
    if ( pNearestNode )
    {
      if ( (pNearestNode->constant.spawnflags & 0x2000) != 0 )
        return 1;
    }
  }
  return result;
}

/*
==============
Sentient_NearestNode
==============
*/
pathnode_t *Sentient_NearestNode(sentient_s *pSelf)
{
  return Sentient_NearestNode(pSelf, 0);
}

/*
==============
Sentient_NearestNode
==============
*/
pathnode_t *Sentient_NearestNode(sentient_s *self, bool allowDontLinkNodes)
{
  gentity_s *ent; 
  float v5; 
  int clipmask; 
  pathnode_t *v7; 
  entityType_s eType; 
  __int128 v9; 
  __int128 v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  bool v14; 
  pathsort_s *v15; 
  pathnode_t *node; 
  int v17; 
  double IndoorPercent; 
  int returnCount; 
  NearestNodeInput pInput; 
  int v22[4]; 
  pathsort_s nodes; 
  pathsort_s _First[256]; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 776, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->bNearestNodeValid )
  {
    v14 = self->ent == NULL;
    pInput.fMaxDist = FLOAT_192_0;
    pInput.typeFlags = -2;
    pInput.blockPlanes = NULL;
    pInput.heightCheck = NEAREST_NODE_DO_HEIGHT_CHECK;
    pInput.entNum = 2047;
    *(_WORD *)&pInput.bAllowCrouch = 257;
    pInput.bAllowFailedUnuseable = 1;
    if ( v14 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 782, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
        __debugbreak();
      if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 331, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
        __debugbreak();
    }
    ent = self->ent;
    v22[0] = LODWORD(self->ent->r.currentOrigin.v[0]);
    v22[1] = LODWORD(ent->r.currentOrigin.v[1]);
    v5 = ent->r.currentOrigin.v[2];
    pInput.vOrigin = (const vec3_t *)v22;
    clipmask = 33685521;
    *(float *)&v22[2] = v5;
    if ( ent->clipmask )
      clipmask = ent->clipmask;
    pInput.traceMask = clipmask;
    pInput.baseBounds = &ent->r.box;
    pInput.entNum = ent->s.number;
    v7 = Path_NearestNodeExtended(&pInput, &nodes, 64, &returnCount, allowDontLinkNodes);
    if ( v7 )
    {
      self->pNearestNode = v7;
      self->bNearestNodeBad = 0;
LABEL_51:
      self->bNearestNodeValid = 1;
      return self->pNearestNode;
    }
    if ( returnCount && (!self->bOnlyGoodNearestNodes || !self->pNearestNode) )
    {
      if ( !nodes.node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 799, ASSERT_TYPE_ASSERT, "(nodes[0].node)", (const char *)&queryFormat, "nodes[0].node") )
        __debugbreak();
      self->pNearestNode = nodes.node;
      goto LABEL_51;
    }
    if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
      goto LABEL_50;
    if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 551, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
      __debugbreak();
    eType = self->ent->s.eType;
    if ( eType != ET_HELICOPTER && (eType != ET_SCRIPTMOVER || (self->sentientFlags & 3) == 0) )
    {
LABEL_50:
      self->bNearestNodeBad = 1;
      goto LABEL_51;
    }
    if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 718, ASSERT_TYPE_ASSERT, "( self->ent )", (const char *)&queryFormat, "self->ent") )
      __debugbreak();
    if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 719, ASSERT_TYPE_ASSERT, "( G_Bot_SystemActive() )", (const char *)&queryFormat, "G_Bot_SystemActive()") )
      __debugbreak();
    v9 = 0i64;
    self->bNearestNodeBad = 1;
    while ( 1 )
    {
      if ( *(float *)&v9 > 6000.0 || !self->bNearestNodeBad )
        goto LABEL_51;
      v10 = v9;
      *(float *)&v10 = *(float *)&v9 + 500.0;
      v9 = v10;
      v11 = Path_NodesInCylinder(&self->ent->r.currentOrigin, NULL, *(float *)&v10, *(float *)&v10 + 3000.0, _First, 256, -2);
      v12 = v11;
      if ( v11 <= 0 )
        goto LABEL_47;
      std::_Sort_unchecked<pathsort_s *,bool (*)(pathsort_s const &,pathsort_s const &)>(_First, &_First[v11], v11, Path_CompareNodesIncreasing);
      v13 = 0i64;
      v14 = (_DWORD)v12 == 0;
      if ( (int)v12 > 0 )
        break;
LABEL_48:
      if ( !v14 )
        goto LABEL_51;
    }
    v15 = _First;
    while ( 1 )
    {
      node = v15->node;
      v17 = Path_NodeZoneFromNode(v15->node);
      if ( Path_IsExposedSky(node) && v17 != 255 )
      {
        IndoorPercent = SV_BotZoneGetIndoorPercent(v17);
        if ( *(float *)&IndoorPercent < 0.25 )
          break;
      }
      ++v13;
      ++v15;
      if ( v13 >= v12 )
        goto LABEL_47;
    }
    self->pNearestNode = node;
    self->bNearestNodeBad = 0;
LABEL_47:
    v14 = (_DWORD)v12 == 0;
    goto LABEL_48;
  }
  return self->pNearestNode;
}

/*
==============
Sentient_NearestNodeOfEnemy
==============
*/
pathnode_t *Sentient_NearestNodeOfEnemy(sentient_s *self)
{
  sentient_s *sentient; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 827, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( EntHandle::isDefined(&self->targetEnt) && (sentient = EntHandle::ent(&self->targetEnt)->sentient) != NULL )
    return Sentient_NearestNode(sentient, 0);
  else
    return 0i64;
}

/*
==============
Sentient_NearestTacPoint
==============
*/
tacpoint_t *Sentient_NearestTacPoint(sentient_s *pSelf)
{
  pathnode_t *pClaimedNode; 
  const tacpoint_t *PointForPathnode; 
  ai_common_t *ai; 
  AINavigator *pNavigator; 
  tacpoint_ref_t *p_nearestTacPoint; 
  bfx::AreaHandle pOutArea; 
  __int64 v9; 
  vec3_t pos; 
  vec3_t outClosestPos; 

  v9 = -2i64;
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1603, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( pSelf->bNearestTacPointValid )
  {
    p_nearestTacPoint = &pSelf->nearestTacPoint;
  }
  else
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Sentient_NearestTacPoint");
    pClaimedNode = pSelf->pClaimedNode;
    if ( pClaimedNode )
    {
      pathnode_t::GetPos(pClaimedNode, &pos);
      if ( (float)((float)((float)((float)(pSelf->ent->r.currentOrigin.v[1] - pos.v[1]) * (float)(pSelf->ent->r.currentOrigin.v[1] - pos.v[1])) + (float)((float)(pSelf->ent->r.currentOrigin.v[0] - pos.v[0]) * (float)(pSelf->ent->r.currentOrigin.v[0] - pos.v[0]))) + (float)((float)(pSelf->ent->r.currentOrigin.v[2] - pos.v[2]) * (float)(pSelf->ent->r.currentOrigin.v[2] - pos.v[2]))) < 2304.0 )
      {
        PointForPathnode = TacGraph_GetPointForPathnode(pSelf->pClaimedNode);
        if ( PointForPathnode )
          goto LABEL_12;
      }
    }
    if ( (ai = pSelf->ai) != NULL && (pNavigator = ai->pNavigator) != NULL && (PointForPathnode = pNavigator->FindClosestStraightLineReachableTacPoint(pNavigator)) != NULL || (bfx::AreaHandle::AreaHandle(&pOutArea), Nav_GetClosestVerticalPosDefault(&pSelf->ent->r.currentOrigin, &outClosestPos, &pOutArea), PointForPathnode = TacGraph_FindClosestPointWithStaticNavLos(&pSelf->ent->r.currentOrigin, &outClosestPos, &pOutArea), bfx::AreaHandle::~AreaHandle(&pOutArea), PointForPathnode) )
    {
LABEL_12:
      pSelf->bNearestTacPointBad = 0;
    }
    else
    {
      PointForPathnode = TacGraph_FindClosestPoint(&pSelf->ent->r.currentOrigin);
      pSelf->bNearestTacPointBad = 1;
    }
    p_nearestTacPoint = &pSelf->nearestTacPoint;
    tacpoint_ref_t::SetPoint(&pSelf->nearestTacPoint, PointForPathnode);
    pSelf->bNearestTacPointValid = PointForPathnode != NULL;
    Sys_ProfEndNamedEvent();
  }
  return tacpoint_ref_t::GetPoint(p_nearestTacPoint);
}

/*
==============
Sentient_NearestTacPointOfEnemy
==============
*/
const tacpoint_t *Sentient_NearestTacPointOfEnemy(sentient_s *pSelf)
{
  gentity_s *v2; 
  sentient_s *sentient; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 861, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !EntHandle::isDefined(&pSelf->targetEnt) )
    return 0i64;
  v2 = EntHandle::ent(&pSelf->targetEnt);
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 866, ASSERT_TYPE_ASSERT, "(pEnemy)", (const char *)&queryFormat, "pEnemy") )
    __debugbreak();
  sentient = v2->sentient;
  if ( sentient )
    return Sentient_NearestTacPoint(sentient);
  else
    return 0i64;
}

/*
==============
Sentient_NextSentient
==============
*/
sentient_s *Sentient_NextSentient(sentient_s *pPrevSentient, const bitarray<224> *iTeamFlags)
{
  const bitarray<224> *AllTeamFlags; 
  __int128 v5; 
  double v6; 
  unsigned int v7; 
  unsigned int v8; 
  __int128 *v9; 
  unsigned int v10; 
  __int64 v11; 
  unsigned __int64 eTeam; 
  __int64 v14; 
  __int64 v15; 
  __int128 v16; 
  double v17; 
  unsigned int v18; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    AllTeamFlags = Com_TeamsSP_GetAllTeamFlags();
  else
    AllTeamFlags = Com_TeamsMP_GetAllTeamFlags();
  v5 = *(_OWORD *)AllTeamFlags->array;
  v6 = *(double *)&AllTeamFlags->array[4];
  v7 = AllTeamFlags->array[6];
  v16 = v5;
  v17 = v6;
  LODWORD(v16) = iTeamFlags->array[0] & ~(_DWORD)v5;
  DWORD1(v16) = ~DWORD1(v5) & iTeamFlags->array[1];
  DWORD2(v16) = ~DWORD2(v5) & iTeamFlags->array[2];
  HIDWORD(v16) = ~HIDWORD(v5) & iTeamFlags->array[3];
  *(_QWORD *)&v17 = ~*(_QWORD *)&v6 & *(_QWORD *)&iTeamFlags->array[4];
  v18 = ~v7 & iTeamFlags->array[6];
  v8 = 0;
  v9 = &v16;
  while ( !*(_DWORD *)v9 )
  {
    ++v8;
    v9 = (__int128 *)((char *)v9 + 4);
    if ( v8 >= 7 )
      goto LABEL_10;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1012, ASSERT_TYPE_ASSERT, "( Com_Teams_IsValidTeamFlag( iTeamFlags ) )", (const char *)&queryFormat, "Com_Teams_IsValidTeamFlag( iTeamFlags )") )
    __debugbreak();
LABEL_10:
  if ( !pPrevSentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1014, ASSERT_TYPE_ASSERT, "( pPrevSentient )", (const char *)&queryFormat, "pPrevSentient") )
    __debugbreak();
  if ( (pPrevSentient < level.sentients || pPrevSentient >= &level.sentients[(unsigned __int64)level.maxSentients]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1015, ASSERT_TYPE_ASSERT, "( pPrevSentient >= level.sentients && pPrevSentient < level.sentients + level.maxSentients )", (const char *)&queryFormat, "pPrevSentient >= level.sentients && pPrevSentient < level.sentients + level.maxSentients") )
    __debugbreak();
  if ( pPrevSentient != &level.sentients[pPrevSentient - level.sentients] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1016, ASSERT_TYPE_ASSERT, "( pPrevSentient == level.sentients + (pPrevSentient - level.sentients) )", (const char *)&queryFormat, "pPrevSentient == level.sentients + (pPrevSentient - level.sentients)") )
    __debugbreak();
  v10 = ((int)pPrevSentient - LODWORD(level.sentients)) / 184 + 1;
  if ( v10 >= level.maxSentients )
    return 0i64;
  while ( 1 )
  {
    v11 = v10;
    if ( level.sentients[v11].inuse )
    {
      eTeam = (unsigned int)level.sentients[v11].eTeam;
      if ( (unsigned int)eTeam >= 0xE0 )
      {
        LODWORD(v15) = 224;
        LODWORD(v14) = level.sentients[v11].eTeam;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v14, v15) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (eTeam & 0x1F)) & iTeamFlags->array[eTeam >> 5]) != 0 )
        break;
    }
    if ( ++v10 >= level.maxSentients )
      return 0i64;
  }
  return &level.sentients[v11];
}

/*
==============
Sentient_NodeClaimRevoked
==============
*/
void Sentient_NodeClaimRevoked(sentient_s *self, pathnode_t *node)
{
  ai_scripted_t *AIScripted; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1152, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1153, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( node != self->pClaimedNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1154, ASSERT_TYPE_ASSERT, "(node == self->pClaimedNode)", (const char *)&queryFormat, "node == self->pClaimedNode") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_READY) && !AI_GetAIScripted(self->ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1155, ASSERT_TYPE_ASSERT, "(!BG_ActorSystemEnabled() || AI_GetAIScripted( self->ent ))", (const char *)&queryFormat, "!BG_ActorSystemEnabled() || AI_GetAIScripted( self->ent )") )
    __debugbreak();
  Path_MarkNodeInvalid(node, self->eTeam, 3000);
  AIScripted = AI_GetAIScripted(self->ent);
  if ( AIScripted && AIScripted->fixedNode )
    AIScripted->fixedNodeNudged = 1;
  if ( self->pClaimedNode == node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1166, ASSERT_TYPE_ASSERT, "(self->pClaimedNode != node)", (const char *)&queryFormat, "self->pClaimedNode != node") )
    __debugbreak();
}

/*
==============
Sentient_SetEnemy
==============
*/
void Sentient_SetEnemy(sentient_s *self, gentity_s *enemy, int bNotify, int resetThreatUpdate)
{
  int v4; 
  gentity_s *v9; 
  ai_common_t *ai; 
  sentient_s *sentient; 
  int iEnemyNotifyTime; 
  sentient_s *v13; 
  const scrContext_t *v14; 
  AIWrapper v15; 

  v4 = 0;
  v9 = NULL;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 888, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !self->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 889, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
    __debugbreak();
  if ( self->ent == enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 890, ASSERT_TYPE_ASSERT, "(self->ent != enemy)", (const char *)&queryFormat, "self->ent != enemy") )
    __debugbreak();
  ai = self->ai;
  if ( EntHandle::isDefined(&self->targetEnt) )
  {
    v9 = EntHandle::ent(&self->targetEnt);
    sentient = v9->sentient;
    if ( bNotify )
    {
      iEnemyNotifyTime = self->iEnemyNotifyTime;
      if ( iEnemyNotifyTime )
      {
        if ( level.time >= iEnemyNotifyTime )
        {
          if ( BG_AISystemEnabled() )
            Actor_BroadcastTeamEvent(self, AI_EV_NEW_ENEMY);
          self->iEnemyNotifyTime = 0;
        }
      }
    }
    if ( v9 != enemy )
    {
      if ( sentient )
      {
        if ( bNotify && self->iEnemyNotifyTime )
        {
          if ( BG_AISystemEnabled() )
            Actor_BroadcastTeamEvent(self, AI_EV_NEW_ENEMY);
          self->iEnemyNotifyTime = 0;
        }
        --sentient->attackerCount;
      }
      if ( !enemy )
        goto LABEL_35;
      goto LABEL_26;
    }
  }
  else
  {
    if ( enemy )
    {
LABEL_26:
      v13 = enemy->sentient;
      if ( v13 )
      {
        if ( !v13->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 946, ASSERT_TYPE_ASSERT, "(enemy->sentient->inuse)", (const char *)&queryFormat, "enemy->sentient->inuse") )
          __debugbreak();
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && enemy->sentient->eTeam == TEAM_FIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 947, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ) || enemy->sentient->eTeam != TEAM_DEAD)", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ) || enemy->sentient->eTeam != TEAM_DEAD") )
          __debugbreak();
        ++enemy->sentient->attackerCount;
        v4 = level.time + 1000;
      }
LABEL_35:
      self->iEnemyNotifyTime = v4;
      EntHandle::setEnt(&self->targetEnt, enemy);
      v14 = ScriptContext_Server();
      if ( bNotify && Scr_IsSystemActive(v14, 1u) )
        GScr_Notify(self->ent, scr_const.enemy, 0);
      if ( BG_ActorOrAgentSystemEnabled() )
      {
        AIWrapper::AIWrapper(&v15, self->ent);
        if ( v15.m_pAI )
          AIScriptedInterface::OnSetNewEnemy(v15.m_pAI, v9, enemy, resetThreatUpdate != 0);
      }
      return;
    }
    if ( ai )
      ai->threat.newEnemyReaction = 0;
  }
}

/*
==============
Sentient_SetMaxSightDistSqrd
==============
*/
void Sentient_SetMaxSightDistSqrd(sentient_s *pSelf, float maxSightDistSqrd)
{
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 518, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( maxSightDistSqrd < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 519, ASSERT_TYPE_ASSERT, "(maxSightDistSqrd >= 0)", (const char *)&queryFormat, "maxSightDistSqrd >= 0") )
    __debugbreak();
  if ( !pSelf->ai && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 520, ASSERT_TYPE_ASSERT, "(pSelf->ai)", (const char *)&queryFormat, "pSelf->ai") )
    __debugbreak();
  pSelf->ai->sight.fMaxSightDistSqrd = maxSightDistSqrd;
}

/*
==============
Sentient_SetPrevClaimNode
==============
*/
void Sentient_SetPrevClaimNode(sentient_s *self)
{
  if ( self )
  {
    self->pPrevClaimedNode = self->pClaimedNode;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1081, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
      __debugbreak();
    MEMORY[0x78] = MEMORY[0x70];
  }
}

/*
==============
Sentient_SetTeam
==============
*/
void Sentient_SetTeam(sentient_s *self, team_t eTeam)
{
  unsigned __int64 v2; 
  const char *v4; 
  int v5; 
  const char *v6; 
  gentity_s *ent; 
  AINavigator *Navigator; 
  unsigned int ObstacleBlockageFlagsFromTeamFlags; 
  ai_scripted_t *AIScripted; 
  bitarray<224> teamflags; 

  v2 = (unsigned int)eTeam;
  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1038, ASSERT_TYPE_ASSERT, "(self != 0)", (const char *)&queryFormat, "self != NULL") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
  {
    if ( (unsigned int)(v2 - 1) <= 4 )
      goto LABEL_11;
    v4 = "eTeam > TEAM_BAD && eTeam < TEAM_SP_NUM_TEAMS";
    v5 = 1042;
    v6 = "(eTeam > TEAM_BAD && eTeam < TEAM_SP_NUM_TEAMS)";
  }
  else
  {
    if ( (unsigned int)v2 <= 0xCA )
      goto LABEL_11;
    v4 = "eTeam >= TEAM_BAD && eTeam < TEAM_MP_NUM_TEAMS";
    v5 = 1048;
    v6 = "(eTeam >= TEAM_BAD && eTeam < TEAM_MP_NUM_TEAMS)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", v5, ASSERT_TYPE_ASSERT, v6, (const char *)&queryFormat, v4) )
    __debugbreak();
LABEL_11:
  ent = self->ent;
  self->eTeam = v2;
  if ( ent )
  {
    Navigator = Nav_GetNavigator(ent);
    if ( Navigator )
    {
      memset(&teamflags, 0, sizeof(teamflags));
      if ( (unsigned int)v2 >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v2, 224) )
        __debugbreak();
      teamflags.array[v2 >> 5] |= 0x80000000 >> (v2 & 0x1F);
      ObstacleBlockageFlagsFromTeamFlags = Nav_GetObstacleBlockageFlagsFromTeamFlags(&teamflags);
      AIScripted = AI_GetAIScripted(self->ent);
      if ( (_DWORD)v2 == 2 && AIScripted && !AIScripted->avoidance.pushPlayerEnabled )
        ObstacleBlockageFlagsFromTeamFlags |= 0x4000u;
      Nav_SetObstacleBlockageFlags(Navigator, ObstacleBlockageFlagsFromTeamFlags);
    }
  }
}

/*
==============
Sentient_SetThreatSightState
==============
*/
void Sentient_SetThreatSightState(sentient_s *pSelf, const sentient_info_t *infoOther)
{
  signed __int64 v4; 
  gentity_s *ent; 
  bool bInCombat; 
  ThreatSight *v7; 
  char v8; 
  char v9; 
  __int64 v10; 
  __int64 v11; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1718, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pSelf->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1719, ASSERT_TYPE_ASSERT, "( pSelf->ent )", (const char *)&queryFormat, "pSelf->ent") )
    __debugbreak();
  if ( !pSelf->ai && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1720, ASSERT_TYPE_ASSERT, "( pSelf->ai )", (const char *)&queryFormat, "pSelf->ai") )
    __debugbreak();
  if ( !pSelf->ai->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1721, ASSERT_TYPE_ASSERT, "( pSelf->ai->sentientInfo )", (const char *)&queryFormat, "pSelf->ai->sentientInfo") )
    __debugbreak();
  v4 = infoOther - pSelf->ai->sentientInfo;
  if ( (unsigned int)v4 >= 0x110 )
  {
    LODWORD(v10) = infoOther - pSelf->ai->sentientInfo;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1724, ASSERT_TYPE_ASSERT, "(unsigned)( otherSentientIndex ) < (unsigned)( ( sizeof( *array_counter( g_sentients ) ) + 0 ) )", "otherSentientIndex doesn't index ARRAY_COUNT( g_sentients )\n\t%i not in [0, %i)", v10, 272) )
      __debugbreak();
  }
  ent = level.sentients[(int)v4].ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1726, ASSERT_TYPE_ASSERT, "(otherEnt)", (const char *)&queryFormat, "otherEnt") )
    __debugbreak();
  if ( ent->client && pSelf->ent->actor )
  {
    if ( ent->s.number )
    {
      LODWORD(v11) = 1;
      LODWORD(v10) = ent->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1732, ASSERT_TYPE_ASSERT, "(unsigned)( otherEnt->s.number ) < (unsigned)( ( sizeof( *array_counter( pSelf->ent->s.lerp.u.actor.threatSight ) ) + 0 ) )", "otherEnt->s.number doesn't index ARRAY_COUNT( pSelf->ent->s.lerp.u.actor.threatSight )\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    bInCombat = pSelf->ent->actor->combat.bInCombat;
    v7 = &pSelf->ent->s.lerp.u.actor.threatSight[ent->s.number];
    if ( !infoOther && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1703, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
      __debugbreak();
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1704, ASSERT_TYPE_ASSERT, "(threatSight)", (const char *)&queryFormat, "threatSight") )
      __debugbreak();
    v8 = 0;
    *v7 = 0;
    v9 = (int)(float)(infoOther->threatSight * 127.0) & 0x7F;
    *(_BYTE *)v7 = v9;
    if ( infoOther->VisCache.bVisible || infoOther->VisCache.bPeripherallyVisible )
      v8 = 0x80;
    *((_BYTE *)v7 + 1) &= ~1u;
    *(_BYTE *)v7 = v9 | v8;
    *((_BYTE *)v7 + 1) |= bInCombat;
  }
}

/*
==============
Sentient_StealClaimNode
==============
*/
void Sentient_StealClaimNode(sentient_s *self, sentient_s *other)
{
  pathnode_t *pClaimedNode; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1179, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  if ( !other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1180, ASSERT_TYPE_ASSERT, "(other)", (const char *)&queryFormat, "other") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_READY) && !AI_GetAIScripted(other->ent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 1181, ASSERT_TYPE_ASSERT, "(!BG_ActorSystemEnabled() || AI_GetAIScripted( other->ent ))", (const char *)&queryFormat, "!BG_ActorSystemEnabled() || AI_GetAIScripted( other->ent )") )
    __debugbreak();
  pClaimedNode = other->pClaimedNode;
  if ( pClaimedNode )
    Path_ForceClaimNode(pClaimedNode, self);
}

/*
==============
Sentient_UpdateNavObstacles
==============
*/
void Sentient_UpdateNavObstacles(sentient_s *self)
{
  gentity_s *ent; 
  gentity_s *v3; 
  unsigned int userDataFlags; 
  float v5; 
  float v6; 
  float v7; 
  gclient_s *client; 
  bool navObstacleActive; 
  float v10; 
  bool v11; 
  int lastNavObstacleTime; 
  gentity_s *v13; 
  AINavigator *Navigator; 
  __int64 v15; 
  nav_space_s *pSpace; 
  nav_repulsor_s *FirstRepulsor; 
  AICommonWrapper v18; 
  float v19; 
  float v20; 
  float v21; 

  ent = self->ent;
  if ( self->ent->tagInfo )
  {
    if ( self->navObstacleActive )
    {
      self->navObstacleActive = 0;
      Nav_DestroyObstacleByEnt(ent);
    }
    self->lastNavObstacleTime = level.time;
  }
  else
  {
    if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.cpp", 376, ASSERT_TYPE_ASSERT, "(self->ent)", (const char *)&queryFormat, "self->ent") )
      __debugbreak();
    v3 = self->ent;
    AIActorInterface::AIActorInterface(&v18.m_actorInterface);
    AIAgentInterface::AIAgentInterface(&v18.m_newAgentInterface);
    v18.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    AICommonInterface::AICommonInterface(&v18.m_botInterface);
    v18.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
    AICommonInterface::AICommonInterface(&v18.m_botAgentInterface);
    userDataFlags = 0;
    v18.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
    v18.m_pAI = NULL;
    AICommonWrapper::Setup(&v18, v3);
    if ( v18.m_pAI )
    {
      v18.m_pAI->GetVelocity(v18.m_pAI, (vec3_t *)&v19);
      v5 = v21;
      v6 = v20;
      v7 = v19;
    }
    else
    {
      client = self->ent->client;
      if ( client )
      {
        v7 = client->ps.velocity.v[0];
        v19 = v7;
        v6 = client->ps.velocity.v[1];
        v20 = v6;
        v5 = client->ps.velocity.v[2];
      }
      else
      {
        v7 = 0.0;
        v6 = 0.0;
        v19 = 0.0;
        v20 = 0.0;
        v5 = 0.0;
      }
      v21 = v5;
    }
    navObstacleActive = self->navObstacleActive;
    v10 = (float)((float)(v6 * v6) + (float)(v7 * v7)) + (float)(v5 * v5);
    if ( v10 < 25.0 && navObstacleActive )
    {
      self->lastNavObstacleTime = level.time;
      v11 = navObstacleActive;
    }
    else
    {
      v11 = self->navObstacleActive;
      if ( v10 > 25.0 && !navObstacleActive )
      {
        self->lastNavObstacleTime = level.time;
        v11 = 0;
      }
    }
    lastNavObstacleTime = self->lastNavObstacleTime;
    if ( v11 )
    {
      if ( level.time - lastNavObstacleTime > 400 )
      {
        v13 = self->ent;
        self->navObstacleActive = 0;
        Nav_DestroyObstacleByEnt(v13);
      }
    }
    else
    {
      if ( level.time - lastNavObstacleTime <= 3000 )
        return;
      Navigator = Nav_GetNavigator(self->ent);
      if ( Navigator )
      {
        v15 = (__int64)Navigator->Get2DNavigator(Navigator);
        if ( !v15 )
          return;
        pSpace = *(nav_space_s **)(v15 + 16);
      }
      else
      {
        FirstRepulsor = Nav_GetFirstRepulsor();
        if ( !FirstRepulsor )
          return;
        while ( self->ent->s.number != FirstRepulsor->entNum )
        {
          FirstRepulsor = Nav_GetNextRepulsor(FirstRepulsor);
          if ( !FirstRepulsor )
            return;
        }
        pSpace = FirstRepulsor->pSpace;
        userDataFlags = 0x8000000;
      }
      if ( pSpace )
      {
        Nav_CreateObstacleByEnt(pSpace, self->ent, 14.0, 0xFFFFFFFF, 0x6000u, 0, userDataFlags);
        self->navObstacleActive = 1;
      }
    }
  }
}

