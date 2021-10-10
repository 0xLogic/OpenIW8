/*
==============
AIScriptedInterface::GetSuppressionPlanes
==============
*/

int __fastcall AIScriptedInterface::GetSuppressionPlanes(AIScriptedInterface *this, PathBlockPlanes *blockPlanes)
{
  return ?GetSuppressionPlanes@AIScriptedInterface@@QEBAHPEAUPathBlockPlanes@@@Z(this, blockPlanes);
}

/*
==============
AIScriptedInterface::GetMoveOnlySuppressionPlanes
==============
*/

int __fastcall AIScriptedInterface::GetMoveOnlySuppressionPlanes(AIScriptedInterface *this, PathBlockPlanes *blockPlanes)
{
  return ?GetMoveOnlySuppressionPlanes@AIScriptedInterface@@QEBAHPEAUPathBlockPlanes@@@Z(this, blockPlanes);
}

/*
==============
AIScriptedInterface::DecaySuppressionLines
==============
*/

void __fastcall AIScriptedInterface::DecaySuppressionLines(AIScriptedInterface *this)
{
  ?DecaySuppressionLines@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::PickNewEnemySuppressantEntry
==============
*/

int __fastcall AIScriptedInterface::PickNewEnemySuppressantEntry(AIScriptedInterface *this)
{
  return ?PickNewEnemySuppressantEntry@AIScriptedInterface@@IEBAHXZ(this);
}

/*
==============
AIScriptedInterface::AddEnemySuppressionLine
==============
*/

void __fastcall AIScriptedInterface::AddEnemySuppressionLine(AIScriptedInterface *this, sentient_s *pSuppressor, const vec3_t *vStart, const vec3_t *vEnd, const vec3_t *vClosest)
{
  ?AddEnemySuppressionLine@AIScriptedInterface@@IEBAXPEAUsentient_s@@AEBTvec3_t@@11@Z(this, pSuppressor, vStart, vEnd, vClosest);
}

/*
==============
AIScriptedInterface::AddSuppressionLine
==============
*/

void __fastcall AIScriptedInterface::AddSuppressionLine(AIScriptedInterface *this, sentient_s *pSuppressor, const vec3_t *vStart, const vec3_t *vEnd, const vec3_t *vClosest)
{
  ?AddSuppressionLine@AIScriptedInterface@@UEBAXPEAUsentient_s@@AEBTvec3_t@@11@Z(this, pSuppressor, vStart, vEnd, vClosest);
}

/*
==============
AIScriptedInterface::AddFriendlySuppressionLine
==============
*/

void __fastcall AIScriptedInterface::AddFriendlySuppressionLine(AIScriptedInterface *this, sentient_s *pSuppressor, const vec3_t *vStart, const vec3_t *vEnd, const vec3_t *vClosest)
{
  ?AddFriendlySuppressionLine@AIScriptedInterface@@IEBAXPEAUsentient_s@@AEBTvec3_t@@11@Z(this, pSuppressor, vStart, vEnd, vClosest);
}

/*
==============
AIScriptedInterface::ClearAllSuppressionFromEnemySentient
==============
*/

void __fastcall AIScriptedInterface::ClearAllSuppressionFromEnemySentient(AIScriptedInterface *this)
{
  ?ClearAllSuppressionFromEnemySentient@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::IsSuppressed
==============
*/

int __fastcall AIScriptedInterface::IsSuppressed(AIScriptedInterface *this)
{
  return ?IsSuppressed@AIScriptedInterface@@QEBAHXZ(this);
}

/*
==============
AIScriptedInterface::IsMoveSuppressed
==============
*/

int __fastcall AIScriptedInterface::IsMoveSuppressed(AIScriptedInterface *this)
{
  return ?IsMoveSuppressed@AIScriptedInterface@@QEBAHXZ(this);
}

/*
==============
AIScriptedInterface::IsSuppressionWaiting
==============
*/

int __fastcall AIScriptedInterface::IsSuppressionWaiting(AIScriptedInterface *this)
{
  return ?IsSuppressionWaiting@AIScriptedInterface@@QEBAHXZ(this);
}

/*
==============
AIScriptedInterface::SuppressedCornerNode
==============
*/

pathnode_t *__fastcall AIScriptedInterface::SuppressedCornerNode(AIScriptedInterface *this)
{
  return ?SuppressedCornerNode@AIScriptedInterface@@IEBAPEAUpathnode_t@@XZ(this);
}

/*
==============
AIScriptedInterface::IsSuppressedInAnyway
==============
*/

int __fastcall AIScriptedInterface::IsSuppressedInAnyway(AIScriptedInterface *this)
{
  return ?IsSuppressedInAnyway@AIScriptedInterface@@QEBAHXZ(this);
}

/*
==============
AIScriptedInterface::GetCornerSuppressionPlane
==============
*/

void __fastcall AIScriptedInterface::GetCornerSuppressionPlane(const pathnode_t *suppressedNode, vec3_t *outClipPlane)
{
  ?GetCornerSuppressionPlane@AIScriptedInterface@@KAXPEBUpathnode_t@@AEATvec3_t@@@Z(suppressedNode, outClipPlane);
}

/*
==============
AIScriptedInterface::BulletWhizbyNotify
==============
*/

void __fastcall AIScriptedInterface::BulletWhizbyNotify(AIScriptedInterface *this, sentient_s *pSuppressor, const vec3_t *vClosest)
{
  ?BulletWhizbyNotify@AIScriptedInterface@@IEBAXPEAUsentient_s@@AEBTvec3_t@@@Z(this, pSuppressor, vClosest);
}

/*
==============
AIScriptedInterface::DissociateSuppressor
==============
*/

void __fastcall AIScriptedInterface::DissociateSuppressor(AIScriptedInterface *this, sentient_s *pSuppressor)
{
  ?DissociateSuppressor@AIScriptedInterface@@QEBAXPEAUsentient_s@@@Z(this, pSuppressor);
}

/*
==============
AIScriptedInterface::CalcSuppressSpot
==============
*/

bool __fastcall AIScriptedInterface::CalcSuppressSpot(AIScriptedInterface *this, const vec3_t *shootFromPos, const vec3_t *curEnemyPos, int numGoodTracesOverride, vec3_t *outShootPos)
{
  return ?CalcSuppressSpot@AIScriptedInterface@@UEBA_NAEBTvec3_t@@0HAEAT2@@Z(this, shootFromPos, curEnemyPos, numGoodTracesOverride, outShootPos);
}

/*
==============
AIScriptedInterface::AddEnemySuppressionLine
==============
*/
void AIScriptedInterface::AddEnemySuppressionLine(AIScriptedInterface *this, sentient_s *pSuppressor, const vec3_t *vStart, const vec3_t *vEnd, const vec3_t *vClosest)
{
  ai_scripted_t *m_pAI; 
  __int128 suppressionMeter_low; 
  sentient_s *sentient; 
  pathnode_t *pClaimedNode; 
  unsigned int eTeam; 
  bitarray<224> *AllCombatTeamFlags; 
  float v17; 
  float v18; 
  __int128 v19; 
  float v23; 
  float v24; 
  ai_scripted_t *v25; 
  int v26; 
  int v27; 
  __int64 v28; 
  float v29; 
  __int64 v30; 
  int iTime; 
  int v32; 
  __int64 v33; 
  int v34; 
  unsigned __int64 v35; 
  ai_scripted_t *v36; 
  ai_scripted_t *v37; 
  ai_scripted_t *v38; 
  vec2_t v39; 
  vec2_t forward; 
  vec3_t pos; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 275, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !pSuppressor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 276, ASSERT_TYPE_ASSERT, "(pSuppressor)", (const char *)&queryFormat, "pSuppressor") )
    __debugbreak();
  m_pAI = this->m_pAI;
  suppressionMeter_low = LODWORD(m_pAI->suppression.suppressionMeter);
  *(float *)&suppressionMeter_low = m_pAI->suppression.suppressionMeter + 0.15000001;
  _XMM1 = suppressionMeter_low;
  __asm { vminss  xmm1, xmm1, xmm6 }
  m_pAI->suppression.suppressionMeter = *(float *)&_XMM1;
  AIScriptedInterface::BulletWhizbyNotify(this, pSuppressor, vClosest);
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 96, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 97, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( AICommonInterface::NearClaimNode(this, 64.0) )
  {
    sentient = this->m_pAI->sentient;
    pClaimedNode = sentient->pClaimedNode;
    if ( (unsigned int)pClaimedNode->constant.type - 6 <= 1 )
    {
      if ( pClaimedNode )
      {
        eTeam = sentient->eTeam;
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
          AllCombatTeamFlags = (bitarray<224> *)Com_TeamsSP_GetAllCombatTeamFlags();
        else
          AllCombatTeamFlags = (bitarray<224> *)Com_TeamsMP_GetAllTeamFlags();
        if ( bitarray_base<bitarray<224>>::testBit(AllCombatTeamFlags, eTeam) )
          Path_ActorMarkNodeDangerous(pClaimedNode, this->m_pAI->sentient->eTeam);
        pathnode_t::GetForward(pClaimedNode, &forward);
        v17 = vStart->v[0] - vEnd->v[0];
        v19 = LODWORD(vStart->v[1]);
        v18 = vStart->v[1] - vEnd->v[1];
        *(float *)&v19 = fsqrt((float)(v18 * v18) + (float)(v17 * v17));
        _XMM3 = v19;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm6, xmm0
        }
        if ( (float)((float)((float)(v18 * (float)(1.0 / *(float *)&_XMM0)) * forward.v[1]) + (float)((float)(v17 * (float)(1.0 / *(float *)&_XMM0)) * forward.v[0])) >= 0.5 )
        {
          pathnode_t::GetForward(pClaimedNode, &v39);
          if ( pClaimedNode->constant.type == 7 )
          {
            LODWORD(v23) = LODWORD(v39.v[1]) ^ _xmm;
            v24 = v39.v[0];
          }
          else
          {
            LODWORD(v24) = LODWORD(v39.v[0]) ^ _xmm;
            v23 = v39.v[1];
          }
          pathnode_t::GetPos(pClaimedNode, &pos);
          v25 = this->m_pAI;
          v26 = 0;
          v27 = 0;
          v28 = 0i64;
          v29 = (float)((float)((float)(v24 * 32.0) + pos.v[1]) * v24) + (float)((float)((float)(v23 * 32.0) + pos.v[0]) * v23);
          v30 = 0i64;
          while ( v25->Suppressant[v30].movementOnly )
          {
            iTime = v25->Suppressant[v30].iTime;
            v32 = v25->Suppressant[v28].iTime;
            v33 = v30;
            if ( iTime >= v32 )
              v33 = v28;
            v28 = v33;
            v34 = v27;
            if ( iTime >= v32 )
              v34 = v26;
            ++v27;
            ++v30;
            v26 = v34;
            if ( v27 >= 4 )
              goto LABEL_34;
          }
          v26 = v27;
LABEL_34:
          v35 = v26;
          v25->Suppressant[v35].iTime = level.time;
          this->m_pAI->Suppressant[v35].pSuppressor = pSuppressor;
          v36 = this->m_pAI;
          v36->Suppressant[v35].clipPlane.v[1] = v24;
          v36->Suppressant[v35].clipPlane.v[0] = v23;
          v36->Suppressant[v35].clipPlane.v[2] = v29;
          v37 = this->m_pAI;
          if ( v37->suppression.ignoreSuppression )
          {
            AIScriptedInterface::BulletWhizbyNotify(this, pSuppressor, vClosest);
          }
          else
          {
            v37->Suppressant[v35].movementOnly = 0;
            v38 = this->m_pAI;
            if ( !v38->suppression.suppressionStartTime )
              v38->suppression.suppressionStartTime = level.time;
            GScr_AddEntity(pSuppressor->ent);
            GScr_Notify(this->m_pAI->ent, scr_const.suppression, 1u);
          }
        }
      }
    }
  }
}

/*
==============
AIScriptedInterface::AddFriendlySuppressionLine
==============
*/
void AIScriptedInterface::AddFriendlySuppressionLine(AIScriptedInterface *this, sentient_s *pSuppressor, const vec3_t *vStart, const vec3_t *vEnd, const vec3_t *vClosest)
{
  __int128 v5; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  ai_scripted_t *m_pAI; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  __int128 v17; 
  gentity_s *ent; 
  float v19; 
  float v20; 
  float v24; 
  float v25; 
  float v26; 
  int v27; 
  int v28; 
  __int64 v29; 
  __int64 v30; 
  int iTime; 
  int v32; 
  __int64 v33; 
  int v34; 
  __int64 v35; 
  ai_scripted_t *v36; 
  AIWrapper v37; 
  vec2_t planeNormal; 
  vec3_t vProj; 
  __int128 v40; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 193, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !pSuppressor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 194, ASSERT_TYPE_ASSERT, "(pSuppressor)", (const char *)&queryFormat, "pSuppressor") )
    __debugbreak();
  v10 = DVARINT_ai_friendlyFireBlockDuration;
  if ( !DVARINT_ai_friendlyFireBlockDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_friendlyFireBlockDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.integer )
  {
    AIWrapper::AIWrapper(&v37, pSuppressor->ent);
    if ( v37.m_pAI )
    {
      if ( this->m_pAI->suppression.ignoreSuppression || ((unsigned __int8 (*)(void))v37.m_pAI->IsMoving)() )
        return;
      v11 = DVARFLT_ai_friendlySuppressionDist;
      if ( !DVARFLT_ai_friendlySuppressionDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_friendlySuppressionDist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      m_pAI = this->m_pAI;
      v13 = pSuppressor->ent->r.currentOrigin.v[0] - m_pAI->ent->r.currentOrigin.v[0];
      v14 = pSuppressor->ent->r.currentOrigin.v[1] - m_pAI->ent->r.currentOrigin.v[1];
      v15 = pSuppressor->ent->r.currentOrigin.v[2] - m_pAI->ent->r.currentOrigin.v[2];
      if ( (float)((float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v15 * v15)) > (float)(v11->current.value * v11->current.value) )
        return;
    }
    else
    {
      AIScriptedInterface::BulletWhizbyNotify(this, pSuppressor, vClosest);
      m_pAI = this->m_pAI;
      if ( m_pAI->suppression.ignorePlayerSuppressionLines )
        return;
    }
    v17 = LODWORD(vEnd->v[0]);
    v16 = vEnd->v[0] - vStart->v[0];
    ent = m_pAI->ent;
    v40 = v5;
    v19 = vStart->v[1];
    v20 = v19 - vEnd->v[1];
    *(float *)&v17 = fsqrt((float)(v16 * v16) + (float)(v20 * v20));
    _XMM3 = v17;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
    }
    v24 = v20 * (float)(1.0 / *(float *)&_XMM0);
    v25 = v16 * (float)(1.0 / *(float *)&_XMM0);
    v26 = (float)(v24 * vStart->v[0]) + (float)(v25 * v19);
    *(float *)&v17 = (float)(v25 * ent->r.currentOrigin.v[1]) + (float)(v24 * ent->r.currentOrigin.v[0]);
    planeNormal.v[0] = v24;
    planeNormal.v[1] = v25;
    if ( *(float *)&v17 > v26 )
    {
      LODWORD(v24) ^= _xmm;
      LODWORD(v25) ^= _xmm;
      planeNormal.v[0] = v24;
      planeNormal.v[1] = v25;
      LODWORD(v26) ^= _xmm;
    }
    v27 = 0;
    v28 = 0;
    v29 = 0i64;
    v30 = 0i64;
    while ( m_pAI->Suppressant[v30].pSuppressor != pSuppressor )
    {
      iTime = m_pAI->Suppressant[v30].iTime;
      v32 = m_pAI->Suppressant[v29].iTime;
      v33 = v30;
      if ( iTime >= v32 )
        v33 = v29;
      v29 = v33;
      v34 = v28;
      if ( iTime >= v32 )
        v34 = v27;
      ++v28;
      ++v30;
      v27 = v34;
      if ( v28 >= 4 )
        goto LABEL_31;
    }
    v27 = v28;
LABEL_31:
    v35 = v27;
    this->m_pAI->Suppressant[v35].iTime = level.time;
    this->m_pAI->Suppressant[v35].pSuppressor = pSuppressor;
    v36 = this->m_pAI;
    v36->Suppressant[v35].clipPlane.v[0] = v24;
    v36->Suppressant[v35].clipPlane.v[1] = v25;
    v36->Suppressant[v35].clipPlane.v[2] = v26;
    this->m_pAI->Suppressant[v35].movementOnly = 1;
    if ( this->m_pAI->eState[this->m_pAI->stateLevel] == AIS_BEHAVE && AICommonInterface::HasPath(this) )
    {
      ProjectPointOntoVector(&this->m_pAI->ent->r.currentOrigin, vStart, vEnd, &vProj, NULL);
      if ( (float)((float)((float)(vProj.v[1] - this->m_pAI->ent->r.currentOrigin.v[1]) * (float)(vProj.v[1] - this->m_pAI->ent->r.currentOrigin.v[1])) + (float)((float)(vProj.v[0] - this->m_pAI->ent->r.currentOrigin.v[0]) * (float)(vProj.v[0] - this->m_pAI->ent->r.currentOrigin.v[0]))) > 576.0 && AIScriptedInterface::DoesPathCrossPlane(this, planeNormal, v26) )
      {
        if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 260, ASSERT_TYPE_ASSERT, "(m_pAI->pNavigator)", (const char *)&queryFormat, "m_pAI->pNavigator") )
          __debugbreak();
        AINavigator::PathSuppressed(this->m_pAI->pNavigator);
      }
    }
  }
}

/*
==============
AIScriptedInterface::AddSuppressionLine
==============
*/
void AIScriptedInterface::AddSuppressionLine(AIScriptedInterface *this, sentient_s *pSuppressor, const vec3_t *vStart, const vec3_t *vEnd, const vec3_t *vClosest)
{
  if ( this->m_pAI->sentient->eTeam == pSuppressor->eTeam )
    AIScriptedInterface::AddFriendlySuppressionLine(this, pSuppressor, vStart, vEnd, vClosest);
  else
    AIScriptedInterface::AddEnemySuppressionLine(this, pSuppressor, vStart, vEnd, vClosest);
}

/*
==============
AIScriptedInterface::BulletWhizbyNotify
==============
*/
void AIScriptedInterface::BulletWhizbyNotify(AIScriptedInterface *this, sentient_s *pSuppressor, const vec3_t *vClosest)
{
  ai_scripted_t *m_pAI; 
  float v7; 
  float v8; 
  float v9; 
  scrContext_t *v10; 
  team_t eTeam; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 125, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !pSuppressor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 126, ASSERT_TYPE_ASSERT, "(pSuppressor)", (const char *)&queryFormat, "pSuppressor") )
    __debugbreak();
  if ( !this->IsInExecution(this) )
  {
    m_pAI = this->m_pAI;
    v7 = vClosest->v[1] - m_pAI->ent->r.currentOrigin.v[1];
    v8 = vClosest->v[0] - m_pAI->ent->r.currentOrigin.v[0];
    v9 = fsqrt((float)(v7 * v7) + (float)(v8 * v8));
    v10 = ScriptContext_Server();
    Scr_AddFloat(v10, v9);
    GScr_AddEntity(pSuppressor->ent);
    GScr_Notify(this->m_pAI->ent, scr_const.bulletwhizby, 2u);
    Scr_MakeArray(v10);
    GScr_AddEntity(pSuppressor->ent);
    Scr_AddArray(v10);
    Scr_AddFloat(v10, v9);
    Scr_AddArray(v10);
    Scr_AddConstString(v10, scr_const.bulletwhizby);
    GScr_Notify(this->m_pAI->ent, scr_const.ai_notify, 2u);
    eTeam = pSuppressor->eTeam;
    if ( eTeam == TEAM_ZERO || eTeam != this->m_pAI->sentient->eTeam )
      AIScriptedInterface::UpdateWhizbyAnim(this);
  }
}

/*
==============
AIScriptedInterface::CalcSuppressSpot
==============
*/
char AIScriptedInterface::CalcSuppressSpot(AIScriptedInterface *this, const vec3_t *shootFromPos, const vec3_t *curEnemyPos, int numGoodTracesOverride, vec3_t *outShootPos)
{
  ai_scripted_t *m_pAI; 
  float v9; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  hkMemoryAllocator *v11; 
  hkMemoryAllocator *v12; 
  __int128 v13; 
  __int128 v15; 
  __int128 v16; 
  __int128 v17; 
  __int128 v18; 
  __int128 v19; 
  __int128 v20; 
  __int128 v21; 
  __int128 v22; 
  float v23; 
  float v24; 
  __int128 v25; 
  float v26; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  int v34; 
  float v35; 
  __int128 v36; 
  __int128 v37; 
  __int128 v38; 
  __int128 v39; 
  __int128 v40; 
  __int128 v41; 
  char v43; 
  bool bIgnoreFoliage; 
  int v45; 
  int v46; 
  float v47; 
  float v48; 
  float v49; 
  bool v50; 
  float v51; 
  __int128 v52; 
  __int128 v53; 
  __int128 v54; 
  float v55; 
  float v56; 
  int v58; 
  int v59; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v62; 
  __int64 v63; 
  vec3_t pos; 
  vec3_t endPos; 

  v63 = -2i64;
  pos = *curEnemyPos;
  if ( !this->m_pAI->sight.lastEnemySightPosValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 367, ASSERT_TYPE_ASSERT, "(m_pAI->sight.lastEnemySightPosValid)", (const char *)&queryFormat, "m_pAI->sight.lastEnemySightPosValid") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v9 = curEnemyPos->v[1] - m_pAI->sight.lastEnemySightPos.v[1];
  if ( (float)((float)(v9 * v9) + (float)((float)(curEnemyPos->v[0] - m_pAI->sight.lastEnemySightPos.v[0]) * (float)(curEnemyPos->v[0] - m_pAI->sight.lastEnemySightPos.v[0]))) > 225.0 )
  {
    CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST);
    HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v62, 0, 0);
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    extendedData.collisionBuffer = 0.0;
    extendedData.phaseSelection = All;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&extendedData.collectInsideHits = 256;
    extendedData.contents = 8399137;
    extendedData.ignoreBodies = &v62;
    Physics_Raycast(PHYSICS_WORLD_ID_FIRST, &this->m_pAI->sight.lastEnemySightPos, curEnemyPos, &extendedData, CollisionQueryResult);
    if ( HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult) )
      HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(CollisionQueryResult, 0, &pos);
    Physics_FreeCollisionQueryResult(CollisionQueryResult);
    v11 = hkMemHeapAllocator();
    v62.m_ignoreBodies.m_size = 0;
    if ( v62.m_ignoreBodies.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v11, v62.m_ignoreBodies.m_data, 4, v62.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
    v62.m_ignoreBodies.m_data = NULL;
    v62.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
    v12 = hkMemHeapAllocator();
    v62.m_ignoreEntities.m_size = 0;
    if ( v62.m_ignoreEntities.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v12, v62.m_ignoreEntities.m_data, 8, v62.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
    m_pAI = this->m_pAI;
  }
  v13 = LODWORD(m_pAI->sight.lastEnemySightPos.v[0]);
  _XMM12 = LODWORD(pos.v[0]);
  v16 = v13;
  *(float *)&v16 = *(float *)&v13 - pos.v[0];
  v15 = v16;
  v17 = LODWORD(m_pAI->sight.lastEnemySightPos.v[1]);
  v19 = v17;
  *(float *)&v19 = *(float *)&v17 - pos.v[1];
  v18 = v19;
  v20 = LODWORD(m_pAI->sight.lastEnemySightPos.v[2]);
  v22 = v20;
  *(float *)&v22 = *(float *)&v20 - pos.v[2];
  v21 = v22;
  v23 = *(float *)&v13 - shootFromPos->v[0];
  v25 = v17;
  v24 = *(float *)&v17 - shootFromPos->v[1];
  v26 = *(float *)&v20 - shootFromPos->v[2];
  *(float *)&v25 = fsqrt((float)((float)(v24 * v24) + (float)(v23 * v23)) + (float)(v26 * v26));
  _XMM3 = v25;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
  }
  v30 = v23 * (float)(1.0 / *(float *)&_XMM0);
  v31 = v24 * (float)(1.0 / *(float *)&_XMM0);
  v32 = v26 * (float)(1.0 / *(float *)&_XMM0);
  LODWORD(v33) = COERCE_UNSIGNED_INT((float)((float)(v31 * *(float *)&v18) + (float)(v30 * *(float *)&v15)) + (float)(v32 * *(float *)&v21)) ^ _xmm;
  v34 = (int)(float)(fsqrt((float)((float)((float)((float)(v33 * v31) + *(float *)&v18) * (float)((float)(v33 * v31) + *(float *)&v18)) + (float)((float)((float)(v33 * v30) + *(float *)&v15) * (float)((float)(v33 * v30) + *(float *)&v15))) + (float)((float)((float)(v33 * v32) + *(float *)&v21) * (float)((float)(v33 * v32) + *(float *)&v21))) * 0.050000001);
  if ( v34 > 4 )
    v34 = 4;
  if ( v34 < 1 )
    v34 = 1;
  v59 = v34;
  v35 = 1.0 / _mm_cvtepi32_ps((__m128i)(unsigned int)(v34 + 1)).m128_f32[0];
  v37 = v15;
  *(float *)&v37 = *(float *)&v15 * v35;
  v36 = v37;
  v39 = v18;
  *(float *)&v39 = *(float *)&v18 * v35;
  v38 = v39;
  v41 = v21;
  *(float *)&v41 = *(float *)&v21 * v35;
  v40 = v41;
  __asm { vunpcklps xmm0, xmm12, xmm11 }
  *(double *)pos.v = *(double *)&_XMM0;
  *(double *)endPos.v = *(double *)&_XMM0;
  endPos.v[2] = pos.v[2];
  v43 = 0;
  bIgnoreFoliage = 0;
  v45 = 0;
  v46 = 0;
  v58 = v34 + 3;
  if ( v34 + 3 <= 0 )
    return 0;
  LODWORD(v47) = v34 + 3;
  LODWORD(v48) = v34 + 3;
  LODWORD(v49) = v34 + 3;
  do
  {
    v50 = AIScriptedInterface::SightTracePassed(this, shootFromPos, &endPos, 2047, 2047, 1, bIgnoreFoliage, 0);
    if ( v46 == v59 )
    {
      LODWORD(v51) = COERCE_UNSIGNED_INT((float)((float)(*(float *)&v38 * v31) + (float)(*(float *)&v36 * v30)) + (float)(v32 * *(float *)&v40)) ^ _xmm;
      v52 = v36;
      *(float *)&v52 = *(float *)&v36 + (float)(v30 * v51);
      v36 = v52;
      v53 = v38;
      *(float *)&v53 = *(float *)&v38 + (float)(v31 * v51);
      v38 = v53;
      v54 = v40;
      *(float *)&v54 = *(float *)&v40 + (float)(v32 * v51);
      v40 = v54;
    }
    v55 = endPos.v[2];
    v56 = endPos.v[1];
    if ( v50 )
    {
      ++v45;
      v49 = endPos.v[0];
      v48 = endPos.v[1];
      v47 = endPos.v[2];
      v43 = 1;
      if ( !v46 )
      {
        outShootPos->v[0] = endPos.v[0];
        outShootPos->v[1] = v56;
        outShootPos->v[2] = v55;
        return 1;
      }
      if ( v45 >= 2 || v45 >= 0 && v45 >= numGoodTracesOverride )
      {
        outShootPos->v[0] = endPos.v[0];
        outShootPos->v[1] = v56;
        outShootPos->v[2] = v55;
        return 1;
      }
    }
    else
    {
      if ( (float)((float)((float)(*(float *)&v36 * *(float *)&v36) + (float)(*(float *)&v38 * *(float *)&v38)) + (float)(*(float *)&v40 * *(float *)&v40)) < 0.001 && bIgnoreFoliage )
        return 0;
      v45 = 0;
    }
    bIgnoreFoliage = 1;
    endPos.v[0] = endPos.v[0] + *(float *)&v36;
    endPos.v[1] = endPos.v[1] + *(float *)&v38;
    endPos.v[2] = endPos.v[2] + *(float *)&v40;
    ++v46;
  }
  while ( v46 < v58 );
  if ( !v43 )
    return 0;
  outShootPos->v[0] = v49;
  outShootPos->v[1] = v48;
  outShootPos->v[2] = v47;
  return 1;
}

/*
==============
AIScriptedInterface::ClearAllSuppressionFromEnemySentient
==============
*/
void AIScriptedInterface::ClearAllSuppressionFromEnemySentient(AIScriptedInterface *this)
{
  AIIterator *v2; 
  sentient_s *v3; 
  team_t eTeam; 
  bool v5; 
  const bitarray<224> *AllCombatTeamFlags; 
  __int128 v7; 
  double v8; 
  unsigned int v9; 
  const gentity_s *i; 
  AIAgentInterface *v11; 
  ai_agent_t *ScriptedAgentInfo; 
  AIAgentInterface *v13; 
  actor_s *actor; 
  __int64 v15; 
  unsigned __int64 v16; 
  ai_scripted_t *m_pAI; 
  char v18; 
  __int64 v19; 
  ai_scripted_t *v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  int suppressionStartTime; 
  AIIterator *v25; 
  AIActorInterface v26; 
  AIAgentInterface v27; 
  AIAgentInterface *v28; 
  bitarray<224> result; 

  v2 = this->GetAIIterator(this);
  v25 = v2;
  v3 = this->GetSentient(this);
  eTeam = this->GetSentient(this)->eTeam;
  if ( level.teammode == TEAMMODE_FFA )
  {
    v5 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
    v7 = *(_OWORD *)AllCombatTeamFlags->array;
    v8 = *(double *)&AllCombatTeamFlags->array[4];
    v9 = AllCombatTeamFlags->array[6] & 0xFFEFFFFF;
    *(_OWORD *)result.array = v7;
    *(double *)&result.array[4] = v8;
    if ( v5 )
      result.array[0] &= ~0x8000000u;
    result.array[6] = v9 & 0xFF9FFFFF;
  }
  else
  {
    Com_Teams_GetEnemyTeamFlags(&result, eTeam);
  }
  for ( i = (const gentity_s *)v2->GetFirst(v2); i; i = v2->GetNext(v2) )
  {
    AIActorInterface::AIActorInterface(&v26);
    AIAgentInterface::AIAgentInterface(&v27);
    v27.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    v11 = NULL;
    v28 = NULL;
    if ( i->agent )
    {
      if ( SV_Agent_IsScripted(i->s.number) )
      {
        ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(i);
        if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
          __debugbreak();
        if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
          __debugbreak();
        AINewAgentInterface::SetAgent((AINewAgentInterface *)&v27, ScriptedAgentInfo);
        v11 = &v27;
        v28 = &v27;
        v13 = &v27;
        goto LABEL_26;
      }
      v11 = v28;
    }
    actor = i->actor;
    if ( actor )
    {
      if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
        __debugbreak();
      AIActorInterface::SetActor(&v26, i->actor);
      v11 = (AIAgentInterface *)&v26;
      v28 = (AIAgentInterface *)&v26;
    }
    v13 = v11;
    if ( !v11 )
      continue;
LABEL_26:
    v15 = (__int64)v11->GetSentient(v11);
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 586, ASSERT_TYPE_ASSERT, "( pSentient )", (const char *)&queryFormat, "pSentient") )
      __debugbreak();
    v16 = *(unsigned int *)(v15 + 16);
    if ( (unsigned int)v16 >= 0xE0 )
    {
      LODWORD(v23) = 224;
      LODWORD(v22) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v22, v23) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v16 & 0x1F)) & result.array[v16 >> 5]) == 0 )
      continue;
    if ( !v13->AIScriptedInterface::m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 633, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
      __debugbreak();
    m_pAI = v13->AIScriptedInterface::m_pAI;
    if ( m_pAI->suppression.suppressionMeter <= 0.0 && m_pAI->suppression.suppressionStartTime <= 0 )
      continue;
    if ( !m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 543, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
      __debugbreak();
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 544, ASSERT_TYPE_ASSERT, "(pSuppressor)", (const char *)&queryFormat, "pSuppressor") )
      __debugbreak();
    v18 = 0;
    v19 = 0i64;
    suppressionStartTime = v13->AIScriptedInterface::m_pAI->suppression.suppressionStartTime;
    do
    {
      v20 = v13->AIScriptedInterface::m_pAI;
      v21 = (__int64)&v20->Suppressant[v19];
      if ( v20->Suppressant[v19].pSuppressor == v3 )
      {
        if ( (ai_scripted_t *)((char *)v20 + v19 * 32) == (ai_scripted_t *)-1352i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 349, ASSERT_TYPE_ASSERT, "(suppressant)", (const char *)&queryFormat, "suppressant") )
          __debugbreak();
        *(_DWORD *)v21 = 0;
        *(_QWORD *)(v21 + 8) = 0i64;
        *(_DWORD *)(v21 + 28) = 0;
      }
      else if ( *(int *)v21 > 0 && !v20->Suppressant[v19].movementOnly )
      {
        v18 = 1;
      }
      ++v19;
    }
    while ( v19 < 4 );
    v2 = v25;
    if ( suppressionStartTime <= 0 )
    {
      if ( !v18 )
        goto LABEL_58;
    }
    else if ( !v18 )
    {
      GScr_Notify(v13->AIScriptedInterface::m_pAI->ent, scr_const.suppression_end, 0);
LABEL_58:
      v13->AIScriptedInterface::m_pAI->suppression.suppressionStartTime = 0;
    }
  }
}

/*
==============
DebugDrawSuppression
==============
*/
void DebugDrawSuppression(ai_scripted_t *self)
{
  int *p_movementOnly; 
  vec3_t *p_clipPlane; 
  __int64 v4; 
  const vec4_t *v5; 

  p_movementOnly = &self->Suppressant[0].movementOnly;
  p_clipPlane = &self->Suppressant[0].clipPlane;
  v4 = 4i64;
  do
  {
    if ( *(p_movementOnly - 7) )
    {
      v5 = &colorRed;
      if ( *p_movementOnly )
        v5 = &colorCyan;
      G_DebugPlane((const vec2_t *)p_clipPlane, *((float *)p_movementOnly - 1), &self->ent->r.currentOrigin, v5, 100.0, 0, 0);
    }
    p_clipPlane = (vec3_t *)((char *)p_clipPlane + 32);
    p_movementOnly += 8;
    --v4;
  }
  while ( v4 );
}

/*
==============
AIScriptedInterface::DecaySuppressionLines
==============
*/
void AIScriptedInterface::DecaySuppressionLines(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  char v3; 
  ai_scripted_t *v4; 
  __int128 suppressionMeter_low; 
  __int64 i; 
  ai_scripted_t *v9; 
  int iTime; 
  int v11; 
  const dvar_t *v12; 
  int integer; 
  __int64 v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  ai_scripted_t *v19; 
  int suppressionStartTime; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 480, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v3 = 0;
  suppressionStartTime = m_pAI->suppression.suppressionStartTime;
  if ( !m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 491, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  v4 = this->m_pAI;
  if ( v4->suppression.ignoreSuppression )
  {
    LODWORD(_XMM0) = 0;
  }
  else
  {
    suppressionMeter_low = LODWORD(v4->suppression.suppressionMeter);
    *(float *)&suppressionMeter_low = v4->suppression.suppressionMeter - v4->suppression.suppressionDecrement;
    _XMM2 = suppressionMeter_low;
    __asm { vmaxss  xmm0, xmm2, xmm1 }
  }
  v4->suppression.suppressionMeter = *(float *)&_XMM0;
  for ( i = 0i64; i < 4; ++i )
  {
    v9 = this->m_pAI;
    iTime = v9->Suppressant[i].iTime;
    if ( iTime > 0 )
    {
      v11 = level.time - iTime;
      if ( v9->Suppressant[i].movementOnly )
      {
        v12 = DVARINT_ai_friendlyFireBlockDuration;
        if ( !DVARINT_ai_friendlyFireBlockDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_friendlyFireBlockDuration") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v12);
        integer = v12->current.integer;
        v9 = this->m_pAI;
      }
      else
      {
        integer = 0;
        if ( !v9->suppression.ignoreSuppression )
          integer = v9->suppression.suppressionDuration;
      }
      if ( v11 < integer )
      {
        if ( !v9->Suppressant[i].movementOnly )
          v3 = 1;
      }
      else
      {
        v14 = (__int64)&v9->Suppressant[i];
        if ( (ai_scripted_t *)((char *)v9 + i * 32) == (ai_scripted_t *)-1352i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 349, ASSERT_TYPE_ASSERT, "(suppressant)", (const char *)&queryFormat, "suppressant") )
          __debugbreak();
        *(_DWORD *)v14 = 0;
        *(_QWORD *)(v14 + 8) = 0i64;
        *(_DWORD *)(v14 + 28) = 0;
      }
    }
  }
  if ( !v3 )
  {
    if ( suppressionStartTime > 0 )
      GScr_Notify(this->m_pAI->ent, scr_const.suppression_end, 0);
    this->m_pAI->suppression.suppressionStartTime = 0;
  }
  v15 = DVARINT_ai_debugEntIndex;
  if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.integer == this->m_pAI->ent->s.number )
  {
    v16 = DVARINT_ai_showSuppression;
    if ( !DVARINT_ai_showSuppression && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showSuppression") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.integer > 0 )
      DebugDrawSuppression(this->m_pAI);
  }
  v17 = DVARINT_ai_debugEntIndex;
  if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  if ( v17->current.integer != this->m_pAI->ent->s.number )
  {
    v18 = DVARINT_ai_showSuppression;
    if ( !DVARINT_ai_showSuppression && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showSuppression") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    v19 = this->m_pAI;
    if ( v18->current.integer == v19->ent->s.number )
      DebugDrawSuppression(v19);
  }
}

/*
==============
AIScriptedInterface::DissociateSuppressor
==============
*/
void AIScriptedInterface::DissociateSuppressor(AIScriptedInterface *this, sentient_s *pSuppressor)
{
  char v4; 
  __int64 v5; 
  ai_scripted_t *m_pAI; 
  __int64 v7; 
  int suppressionStartTime; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 543, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !pSuppressor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 544, ASSERT_TYPE_ASSERT, "(pSuppressor)", (const char *)&queryFormat, "pSuppressor") )
    __debugbreak();
  v4 = 0;
  v5 = 0i64;
  suppressionStartTime = this->m_pAI->suppression.suppressionStartTime;
  do
  {
    m_pAI = this->m_pAI;
    v7 = (__int64)&m_pAI->Suppressant[v5];
    if ( m_pAI->Suppressant[v5].pSuppressor == pSuppressor )
    {
      if ( (ai_scripted_t *)((char *)m_pAI + v5 * 32) == (ai_scripted_t *)-1352i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 349, ASSERT_TYPE_ASSERT, "(suppressant)", (const char *)&queryFormat, "suppressant") )
        __debugbreak();
      *(_DWORD *)v7 = 0;
      *(_QWORD *)(v7 + 8) = 0i64;
      *(_DWORD *)(v7 + 28) = 0;
    }
    else if ( *(int *)v7 > 0 && !m_pAI->Suppressant[v5].movementOnly )
    {
      v4 = 1;
    }
    ++v5;
  }
  while ( v5 < 4 );
  if ( !v4 )
  {
    if ( suppressionStartTime > 0 )
      GScr_Notify(this->m_pAI->ent, scr_const.suppression_end, 0);
    this->m_pAI->suppression.suppressionStartTime = 0;
  }
}

/*
==============
AIScriptedInterface::GetCornerSuppressionPlane
==============
*/
void AIScriptedInterface::GetCornerSuppressionPlane(const pathnode_t *suppressedNode, vec3_t *outClipPlane)
{
  float v4; 
  vec2_t forward; 
  vec3_t pos; 

  if ( !suppressedNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 165, ASSERT_TYPE_ASSERT, "(suppressedNode)", (const char *)&queryFormat, "suppressedNode") )
    __debugbreak();
  pathnode_t::GetForward((pathnode_t *)suppressedNode, &forward);
  if ( suppressedNode->constant.type == 7 )
  {
    v4 = forward.v[0];
    outClipPlane->v[0] = COERCE_FLOAT(LODWORD(forward.v[1]) ^ _xmm);
  }
  else
  {
    LODWORD(v4) = LODWORD(forward.v[0]) ^ _xmm;
    outClipPlane->v[0] = forward.v[1];
  }
  outClipPlane->v[1] = v4;
  pathnode_t::GetPos((pathnode_t *)suppressedNode, &pos);
  outClipPlane->v[2] = (float)((float)((float)(outClipPlane->v[1] * 32.0) + pos.v[1]) * outClipPlane->v[1]) + (float)((float)((float)(outClipPlane->v[0] * 32.0) + pos.v[0]) * outClipPlane->v[0]);
}

/*
==============
AIScriptedInterface::GetMoveOnlySuppressionPlanes
==============
*/
__int64 AIScriptedInterface::GetMoveOnlySuppressionPlanes(AIScriptedInterface *this, PathBlockPlanes *blockPlanes)
{
  ai_scripted_t *m_pAI; 
  unsigned int v5; 
  __int64 v6; 
  ai_scripted_t *v7; 
  ai_scripted_t *v8; 
  ai_scripted_t *v9; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 730, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v5 = 0;
  v6 = 0i64;
  v7 = m_pAI;
  if ( m_pAI->Suppressant[0].iTime && m_pAI->Suppressant[0].movementOnly )
  {
    v6 = 1i64;
    blockPlanes->vNormal[0].v[0] = m_pAI->Suppressant[0].clipPlane.v[0];
    v5 = 1;
    blockPlanes->vNormal[0].v[1] = m_pAI->Suppressant[0].clipPlane.v[1];
    blockPlanes->fDist[0] = this->m_pAI->Suppressant[0].clipPlane.v[2];
    v7 = this->m_pAI;
  }
  v8 = v7;
  if ( v7->Suppressant[1].iTime && v7->Suppressant[1].movementOnly )
  {
    ++v5;
    blockPlanes->vNormal[v6].v[0] = v7->Suppressant[1].clipPlane.v[0];
    blockPlanes->vNormal[v6].v[1] = v7->Suppressant[1].clipPlane.v[1];
    blockPlanes->fDist[v6++] = this->m_pAI->Suppressant[1].clipPlane.v[2];
    v8 = this->m_pAI;
  }
  v9 = v8;
  if ( v8->Suppressant[2].iTime && v8->Suppressant[2].movementOnly )
  {
    ++v5;
    blockPlanes->vNormal[v6].v[0] = v8->Suppressant[2].clipPlane.v[0];
    blockPlanes->vNormal[v6].v[1] = v8->Suppressant[2].clipPlane.v[1];
    blockPlanes->fDist[v6++] = this->m_pAI->Suppressant[2].clipPlane.v[2];
    v9 = this->m_pAI;
  }
  if ( v9->Suppressant[3].iTime && v9->Suppressant[3].movementOnly )
  {
    ++v5;
    blockPlanes->vNormal[v6].v[0] = v9->Suppressant[3].clipPlane.v[0];
    blockPlanes->vNormal[v6].v[1] = v9->Suppressant[3].clipPlane.v[1];
    blockPlanes->fDist[v6] = this->m_pAI->Suppressant[3].clipPlane.v[2];
  }
  blockPlanes->iPlaneCount = v5;
  return v5;
}

/*
==============
AIScriptedInterface::GetSuppressionPlanes
==============
*/
__int64 AIScriptedInterface::GetSuppressionPlanes(AIScriptedInterface *this, PathBlockPlanes *blockPlanes)
{
  ai_scripted_t *m_pAI; 
  unsigned int v5; 
  __int64 v6; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 701, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v5 = 0;
  v6 = 0i64;
  if ( m_pAI->Suppressant[0].iTime )
  {
    v6 = 1i64;
    blockPlanes->vNormal[0].v[0] = m_pAI->Suppressant[0].clipPlane.v[0];
    v5 = 1;
    blockPlanes->vNormal[0].v[1] = m_pAI->Suppressant[0].clipPlane.v[1];
    blockPlanes->fDist[0] = this->m_pAI->Suppressant[0].clipPlane.v[2];
    m_pAI = this->m_pAI;
  }
  if ( m_pAI->Suppressant[1].iTime )
  {
    ++v5;
    blockPlanes->vNormal[v6].v[0] = m_pAI->Suppressant[1].clipPlane.v[0];
    blockPlanes->vNormal[v6].v[1] = m_pAI->Suppressant[1].clipPlane.v[1];
    blockPlanes->fDist[v6++] = this->m_pAI->Suppressant[1].clipPlane.v[2];
    m_pAI = this->m_pAI;
  }
  if ( m_pAI->Suppressant[2].iTime )
  {
    ++v5;
    blockPlanes->vNormal[v6].v[0] = m_pAI->Suppressant[2].clipPlane.v[0];
    blockPlanes->vNormal[v6].v[1] = m_pAI->Suppressant[2].clipPlane.v[1];
    blockPlanes->fDist[v6++] = this->m_pAI->Suppressant[2].clipPlane.v[2];
    m_pAI = this->m_pAI;
  }
  if ( m_pAI->Suppressant[3].iTime )
  {
    ++v5;
    blockPlanes->vNormal[v6].v[0] = m_pAI->Suppressant[3].clipPlane.v[0];
    blockPlanes->vNormal[v6].v[1] = m_pAI->Suppressant[3].clipPlane.v[1];
    blockPlanes->fDist[v6] = this->m_pAI->Suppressant[3].clipPlane.v[2];
  }
  blockPlanes->iPlaneCount = v5;
  return v5;
}

/*
==============
AIScriptedInterface::IsMoveSuppressed
==============
*/
__int64 AIScriptedInterface::IsMoveSuppressed(AIScriptedInterface *this)
{
  __int64 v2; 
  int *i; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 648, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  v2 = 0i64;
  for ( i = &this->m_pAI->Suppressant[0].movementOnly; !*(i - 7) || !*i; i += 8 )
  {
    if ( ++v2 >= 4 )
      return 0i64;
  }
  return 1i64;
}

/*
==============
AIScriptedInterface::IsSuppressed
==============
*/
_BOOL8 AIScriptedInterface::IsSuppressed(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 633, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  return m_pAI->suppression.suppressionMeter > 0.0 || m_pAI->suppression.suppressionStartTime > 0;
}

/*
==============
AIScriptedInterface::IsSuppressedInAnyway
==============
*/
__int64 AIScriptedInterface::IsSuppressedInAnyway(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  __int64 v3; 
  ai_suppression_t *i; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 607, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( m_pAI->suppression.suppressionStartTime <= 0 )
  {
    v3 = 0i64;
    for ( i = m_pAI->Suppressant; !i->iTime; ++i )
    {
      if ( ++v3 >= 4 )
        return 0i64;
    }
  }
  return 1i64;
}

/*
==============
AIScriptedInterface::IsSuppressionWaiting
==============
*/
__int64 AIScriptedInterface::IsSuppressionWaiting(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  int *p_movementOnly; 
  __int64 v4; 
  int v5; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 671, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( m_pAI->suppression.ignoreSuppression )
    return 0i64;
  p_movementOnly = &m_pAI->Suppressant[0].movementOnly;
  v4 = 0i64;
  while ( 1 )
  {
    v5 = *(p_movementOnly - 7);
    if ( v5 )
    {
      if ( !*p_movementOnly && level.time - v5 < m_pAI->suppression.suppressionWait )
        break;
    }
    ++v4;
    p_movementOnly += 8;
    if ( v4 >= 4 )
      return 0i64;
  }
  return 1i64;
}

/*
==============
AIScriptedInterface::PickNewEnemySuppressantEntry
==============
*/
__int64 AIScriptedInterface::PickNewEnemySuppressantEntry(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  unsigned int v2; 
  int v3; 
  __int64 v4; 
  __int64 i; 
  int iTime; 
  int v7; 
  __int64 v8; 
  __int64 result; 

  m_pAI = this->m_pAI;
  v2 = 0;
  v3 = 0;
  v4 = 0i64;
  for ( i = 0i64; m_pAI->Suppressant[i].movementOnly; ++i )
  {
    iTime = m_pAI->Suppressant[i].iTime;
    v7 = m_pAI->Suppressant[v4].iTime;
    v8 = i;
    if ( iTime >= v7 )
      v8 = v4;
    v4 = v8;
    result = (unsigned int)v3;
    if ( iTime >= v7 )
      result = v2;
    ++v3;
    v2 = result;
    if ( v3 >= 4 )
      return result;
  }
  return (unsigned int)v3;
}

/*
==============
AIScriptedInterface::SuppressedCornerNode
==============
*/
pathnode_t *AIScriptedInterface::SuppressedCornerNode(AIScriptedInterface *this)
{
  pathnode_t *result; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 96, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 97, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !AICommonInterface::NearClaimNode(this, 64.0) )
    return 0i64;
  result = this->m_pAI->sentient->pClaimedNode;
  if ( (unsigned int)result->constant.type - 6 > 1 )
    return 0i64;
  return result;
}

