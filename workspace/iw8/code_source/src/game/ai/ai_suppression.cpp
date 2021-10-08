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
  sentient_s *sentient; 
  pathnode_t *pClaimedNode; 
  unsigned int eTeam; 
  bitarray<224> *AllCombatTeamFlags; 
  char v36; 
  ai_scripted_t *m_pAI; 
  int v46; 
  int v49; 
  __int64 v50; 
  __int64 v52; 
  int iTime; 
  int v54; 
  __int64 v55; 
  int v56; 
  ai_scripted_t *v60; 
  ai_scripted_t *v61; 
  vec2_t v63; 
  vec2_t forward; 
  vec3_t pos; 

  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  _R12 = vStart;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 275, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !pSuppressor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 276, ASSERT_TYPE_ASSERT, "(pSuppressor)", (const char *)&queryFormat, "pSuppressor") )
    __debugbreak();
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovss  xmm0, dword ptr [rax+53Ch]
    vaddss  xmm1, xmm0, cs:__real@3e19999a
    vminss  xmm1, xmm1, xmm6
    vmovss  dword ptr [rax+53Ch], xmm1
  }
  AIScriptedInterface::BulletWhizbyNotify(this, pSuppressor, vClosest);
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 96, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 97, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  __asm { vmovss  xmm1, cs:__real@42800000; dist }
  if ( AICommonInterface::NearClaimNode(this, *(float *)&_XMM1) )
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
        __asm
        {
          vmovss  xmm0, dword ptr [r12]
          vsubss  xmm5, xmm0, dword ptr [r15]
          vmovss  xmm1, dword ptr [r12+4]
          vsubss  xmm4, xmm1, dword ptr [r15+4]
          vmulss  xmm0, xmm5, xmm5
          vmulss  xmm2, xmm4, xmm4
          vaddss  xmm1, xmm2, xmm0
          vsqrtss xmm3, xmm1, xmm1
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm6, xmm0
          vdivss  xmm1, xmm6, xmm0
          vmulss  xmm0, xmm4, xmm1
          vmulss  xmm3, xmm0, dword ptr [rsp+0A8h+forward+4]
          vmulss  xmm1, xmm5, xmm1
          vmulss  xmm2, xmm1, dword ptr [rsp+0A8h+forward]
          vaddss  xmm0, xmm3, xmm2
          vcomiss xmm0, cs:__real@3f000000
        }
        if ( !v36 )
        {
          __asm { vmovaps [rsp+0A8h+var_48], xmm7 }
          pathnode_t::GetForward(pClaimedNode, &v63);
          if ( pClaimedNode->constant.type == 7 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+0A8h+var_78+4]
              vxorps  xmm6, xmm0, cs:__xmm@80000000800000008000000080000000
              vmovss  xmm7, dword ptr [rsp+0A8h+var_78]
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+0A8h+var_78]
              vxorps  xmm7, xmm0, cs:__xmm@80000000800000008000000080000000
              vmovss  xmm6, dword ptr [rsp+0A8h+var_78+4]
            }
          }
          pathnode_t::GetPos(pClaimedNode, &pos);
          __asm
          {
            vmulss  xmm0, xmm7, cs:__real@42000000
            vaddss  xmm1, xmm0, dword ptr [rsp+0A8h+pos+4]
            vmulss  xmm2, xmm6, cs:__real@42000000
            vaddss  xmm0, xmm2, dword ptr [rsp+0A8h+pos]
          }
          m_pAI = this->m_pAI;
          v46 = 0;
          __asm
          {
            vmulss  xmm3, xmm1, xmm7
            vmulss  xmm1, xmm0, xmm6
          }
          v49 = 0;
          v50 = 0i64;
          __asm { vaddss  xmm4, xmm3, xmm1 }
          v52 = 0i64;
          while ( m_pAI->Suppressant[v52].movementOnly )
          {
            iTime = m_pAI->Suppressant[v52].iTime;
            v54 = m_pAI->Suppressant[v50].iTime;
            v55 = v52;
            if ( iTime >= v54 )
              v55 = v50;
            v50 = v55;
            v56 = v49;
            if ( iTime >= v54 )
              v56 = v46;
            ++v49;
            ++v52;
            v46 = v56;
            if ( v49 >= 4 )
              goto LABEL_34;
          }
          v46 = v49;
LABEL_34:
          _RCX = v46;
          m_pAI->Suppressant[_RCX].iTime = level.time;
          this->m_pAI->Suppressant[_RCX].pSuppressor = pSuppressor;
          _RAX = this->m_pAI;
          __asm
          {
            vmovss  dword ptr [rcx+rax+55Ch], xmm7
            vmovaps xmm7, [rsp+0A8h+var_48]
            vmovss  dword ptr [rcx+rax+558h], xmm6
            vmovss  dword ptr [rcx+rax+560h], xmm4
          }
          v60 = this->m_pAI;
          if ( v60->suppression.ignoreSuppression )
          {
            AIScriptedInterface::BulletWhizbyNotify(this, pSuppressor, vClosest);
          }
          else
          {
            v60->Suppressant[_RCX].movementOnly = 0;
            v61 = this->m_pAI;
            if ( !v61->suppression.suppressionStartTime )
              v61->suppression.suppressionStartTime = level.time;
            GScr_AddEntity(pSuppressor->ent);
            GScr_Notify(this->m_pAI->ent, scr_const.suppression, 1u);
          }
        }
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
}

/*
==============
AIScriptedInterface::AddFriendlySuppressionLine
==============
*/
void AIScriptedInterface::AddFriendlySuppressionLine(AIScriptedInterface *this, sentient_s *pSuppressor, const vec3_t *vStart, const vec3_t *vEnd, const vec3_t *vClosest)
{
  const dvar_t *v11; 
  char v13; 
  bool v14; 
  ai_scripted_t *m_pAI; 
  int v52; 
  int v53; 
  __int64 v54; 
  __int64 v55; 
  int iTime; 
  int v57; 
  __int64 v58; 
  int v59; 
  AIWrapper v71; 
  vec2_t planeNormal; 
  vec3_t vProj; 

  _R15 = vEnd;
  _R14 = vStart;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 193, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !pSuppressor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 194, ASSERT_TYPE_ASSERT, "(pSuppressor)", (const char *)&queryFormat, "pSuppressor") )
    __debugbreak();
  v11 = DVARINT_ai_friendlyFireBlockDuration;
  if ( !DVARINT_ai_friendlyFireBlockDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_friendlyFireBlockDuration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.integer )
  {
    AIWrapper::AIWrapper(&v71, pSuppressor->ent);
    if ( v71.m_pAI )
    {
      if ( this->m_pAI->suppression.ignoreSuppression || ((unsigned __int8 (*)(void))v71.m_pAI->IsMoving)() )
        return;
      _RSI = DVARFLT_ai_friendlySuppressionDist;
      if ( !DVARFLT_ai_friendlySuppressionDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_friendlySuppressionDist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      _RCX = pSuppressor->ent;
      m_pAI = this->m_pAI;
      __asm
      {
        vmovss  xmm5, dword ptr [rsi+28h]
        vmovss  xmm0, dword ptr [rcx+130h]
        vmovss  xmm1, dword ptr [rcx+134h]
        vsubss  xmm3, xmm0, dword ptr [rax+130h]
        vsubss  xmm2, xmm1, dword ptr [rax+134h]
        vmovss  xmm0, dword ptr [rcx+138h]
        vsubss  xmm4, xmm0, dword ptr [rax+138h]
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm2, xmm2, xmm2
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm4, xmm3, xmm0
        vmulss  xmm1, xmm5, xmm5
        vcomiss xmm4, xmm1
      }
      if ( !(v13 | v14) )
        return;
    }
    else
    {
      AIScriptedInterface::BulletWhizbyNotify(this, pSuppressor, vClosest);
      m_pAI = this->m_pAI;
      v13 = 0;
      v14 = !m_pAI->suppression.ignorePlayerSuppressionLines;
      if ( m_pAI->suppression.ignorePlayerSuppressionLines )
        return;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r15]
      vsubss  xmm5, xmm0, dword ptr [r14]
      vmovaps [rsp+128h+var_58], xmm6
      vmovaps [rsp+128h+var_68], xmm7
      vmovss  xmm7, dword ptr [r14+4]
      vsubss  xmm4, xmm7, dword ptr [r15+4]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm2, xmm5, xmm5
      vaddss  xmm0, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm3, xmm0, xmm0
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
      vdivss  xmm1, xmm1, xmm0
      vmulss  xmm2, xmm4, xmm1
      vmulss  xmm3, xmm5, xmm1
      vmulss  xmm1, xmm2, dword ptr [r14]
      vmulss  xmm0, xmm3, xmm7
      vmovaps xmm7, [rsp+128h+var_68]
      vaddss  xmm6, xmm1, xmm0
      vmulss  xmm1, xmm3, dword ptr [rax+134h]
      vmulss  xmm0, xmm2, dword ptr [rax+130h]
      vaddss  xmm1, xmm1, xmm0
      vcomiss xmm1, xmm6
      vmovss  dword ptr [rsp+128h+planeNormal], xmm2
      vmovss  dword ptr [rsp+128h+planeNormal+4], xmm3
    }
    if ( !(v13 | v14) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr cs:__xmm@80000000800000008000000080000000
        vxorps  xmm2, xmm2, xmm0
        vxorps  xmm3, xmm3, xmm0
        vmovss  dword ptr [rsp+128h+planeNormal], xmm2
        vmovss  dword ptr [rsp+128h+planeNormal+4], xmm3
        vxorps  xmm6, xmm6, xmm0
      }
    }
    v52 = 0;
    v53 = 0;
    v54 = 0i64;
    v55 = 0i64;
    while ( m_pAI->Suppressant[v55].pSuppressor != pSuppressor )
    {
      iTime = m_pAI->Suppressant[v55].iTime;
      v57 = m_pAI->Suppressant[v54].iTime;
      v58 = v55;
      if ( iTime >= v57 )
        v58 = v54;
      v54 = v58;
      v59 = v53;
      if ( iTime >= v57 )
        v59 = v52;
      ++v53;
      ++v55;
      v52 = v59;
      if ( v53 >= 4 )
        goto LABEL_31;
    }
    v52 = v53;
LABEL_31:
    _RDX = v52;
    this->m_pAI->Suppressant[_RDX].iTime = level.time;
    this->m_pAI->Suppressant[_RDX].pSuppressor = pSuppressor;
    _RAX = this->m_pAI;
    __asm
    {
      vmovss  dword ptr [rdx+rax+558h], xmm2
      vmovss  dword ptr [rdx+rax+55Ch], xmm3
      vmovss  dword ptr [rdx+rax+560h], xmm6
    }
    this->m_pAI->Suppressant[_RDX].movementOnly = 1;
    if ( this->m_pAI->eState[this->m_pAI->stateLevel] == AIS_BEHAVE && AICommonInterface::HasPath(this) )
    {
      ProjectPointOntoVector(&this->m_pAI->ent->r.currentOrigin, _R14, _R15, &vProj, NULL);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+128h+vProj]
        vmovss  xmm1, dword ptr [rsp+128h+vProj+4]
        vsubss  xmm3, xmm1, dword ptr [rcx+134h]
        vsubss  xmm5, xmm0, dword ptr [rcx+130h]
        vmulss  xmm4, xmm3, xmm3
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm1, xmm4, xmm0
        vcomiss xmm1, cs:__real@44100000
      }
      if ( !(v13 | v14) )
      {
        __asm { vmovaps xmm2, xmm6; planeDistance }
        if ( AIScriptedInterface::DoesPathCrossPlane(this, planeNormal, *(float *)&_XMM2) )
        {
          if ( !this->m_pAI->pNavigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 260, ASSERT_TYPE_ASSERT, "(m_pAI->pNavigator)", (const char *)&queryFormat, "m_pAI->pNavigator") )
            __debugbreak();
          AINavigator::PathSuppressed(this->m_pAI->pNavigator);
        }
      }
    }
    __asm { vmovaps xmm6, [rsp+128h+var_58] }
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
  scrContext_t *v16; 
  team_t eTeam; 

  _RBX = vClosest;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 125, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !pSuppressor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 126, ASSERT_TYPE_ASSERT, "(pSuppressor)", (const char *)&queryFormat, "pSuppressor") )
    __debugbreak();
  if ( !this->IsInExecution(this) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rbx+4]
      vmovaps [rsp+58h+var_28], xmm6
      vsubss  xmm2, xmm1, dword ptr [rcx+134h]
      vsubss  xmm4, xmm0, dword ptr [rcx+130h]
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm3, xmm0
      vsqrtss xmm6, xmm1, xmm1
      vmovaps xmm1, xmm6; value
    }
    v16 = ScriptContext_Server();
    Scr_AddFloat(v16, *(float *)&_XMM1);
    GScr_AddEntity(pSuppressor->ent);
    GScr_Notify(this->m_pAI->ent, scr_const.bulletwhizby, 2u);
    Scr_MakeArray(v16);
    GScr_AddEntity(pSuppressor->ent);
    Scr_AddArray(v16);
    __asm { vmovaps xmm1, xmm6; value }
    Scr_AddFloat(v16, *(float *)&_XMM1);
    Scr_AddArray(v16);
    Scr_AddConstString(v16, scr_const.bulletwhizby);
    GScr_Notify(this->m_pAI->ent, scr_const.ai_notify, 2u);
    eTeam = pSuppressor->eTeam;
    __asm { vmovaps xmm6, [rsp+58h+var_28] }
    if ( eTeam == TEAM_ZERO || eTeam != this->m_pAI->sentient->eTeam )
      AIScriptedInterface::UpdateWhizbyAnim(this);
  }
}

/*
==============
AIScriptedInterface::CalcSuppressSpot
==============
*/
bool AIScriptedInterface::CalcSuppressSpot(AIScriptedInterface *this, const vec3_t *shootFromPos, const vec3_t *curEnemyPos, int numGoodTracesOverride, vec3_t *outShootPos)
{
  char v83; 
  bool bIgnoreFoliage; 
  int v85; 
  int v86; 
  bool v91; 
  bool result; 
  int v124; 
  int v125; 
  float pos_8; 
  vec3_t endPos; 
  char v132; 
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
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _RBX = curEnemyPos;
  _R14 = outShootPos;
  __asm
  {
    vmovss  xmm0, dword ptr [r8]
    vmovss  dword ptr [rbp+0B0h+pos], xmm0
    vmovss  xmm1, dword ptr [r8+4]
    vmovss  dword ptr [rbp+0B0h+pos+4], xmm1
    vmovss  xmm0, dword ptr [r8+8]
    vmovss  dword ptr [rbp+0B0h+pos+8], xmm0
  }
  if ( !this->m_pAI->sight.lastEnemySightPosValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 367, ASSERT_TYPE_ASSERT, "(m_pAI->sight.lastEnemySightPosValid)", (const char *)&queryFormat, "m_pAI->sight.lastEnemySightPosValid") )
    __debugbreak();
  _RAX = this->m_pAI;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm4, xmm0, dword ptr [rax+0B8h]
    vmovss  xmm1, dword ptr [rbx+4]
    vsubss  xmm2, xmm1, dword ptr [rax+0BCh]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm3, xmm0
    vcomiss xmm1, cs:__real@43610000
    vmovss  xmm2, dword ptr [rax+0B8h]
    vmovss  xmm12, dword ptr [rbp+0B0h+pos]
    vsubss  xmm10, xmm2, xmm12
    vmovss  xmm1, dword ptr [rax+0BCh]
    vmovss  xmm11, dword ptr [rbp+0B0h+pos+4]
    vsubss  xmm9, xmm1, xmm11
    vmovss  xmm0, dword ptr [rax+0C0h]
    vsubss  xmm8, xmm0, dword ptr [rbp+0B0h+pos+8]
    vsubss  xmm4, xmm2, dword ptr [r13+0]
    vsubss  xmm5, xmm1, dword ptr [r13+4]
    vsubss  xmm6, xmm0, dword ptr [r13+8]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vmovss  xmm7, cs:__real@3f800000
    vblendvps xmm0, xmm3, xmm7, xmm0
    vdivss  xmm1, xmm7, xmm0
    vmulss  xmm13, xmm4, xmm1
    vmulss  xmm14, xmm5, xmm1
    vmulss  xmm15, xmm6, xmm1
    vmulss  xmm1, xmm14, xmm9
    vmulss  xmm0, xmm13, xmm10
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm15, xmm8
    vaddss  xmm3, xmm2, xmm1
    vxorps  xmm4, xmm3, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm0, xmm4, xmm13
    vaddss  xmm5, xmm0, xmm10
    vmulss  xmm1, xmm4, xmm14
    vaddss  xmm2, xmm1, xmm9
    vmulss  xmm0, xmm4, xmm15
    vaddss  xmm4, xmm0, xmm8
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vmulss  xmm3, xmm1, cs:__real@3d4ccccd
    vcvttss2si eax, xmm3
  }
  if ( _EAX > 4 )
    _EAX = 4;
  if ( _EAX < 1 )
    _EAX = 1;
  v125 = _EAX;
  _ECX = _EAX + 1;
  __asm
  {
    vmovd   xmm0, ecx
    vcvtdq2ps xmm0, xmm0
    vdivss  xmm1, xmm7, xmm0
    vmulss  xmm6, xmm10, xmm1
    vmulss  xmm7, xmm9, xmm1
    vmulss  xmm8, xmm8, xmm1
    vunpcklps xmm0, xmm12, xmm11
    vmovsd  qword ptr [rbp+0B0h+pos], xmm0
    vmovsd  qword ptr [rbp+0B0h+endPos], xmm0
  }
  endPos.v[2] = pos_8;
  v83 = 0;
  bIgnoreFoliage = 0;
  v85 = 0;
  v86 = 0;
  v124 = _EAX + 3;
  if ( _EAX + 3 <= 0 )
  {
LABEL_23:
    result = 0;
  }
  else
  {
    __asm
    {
      vmovss  xmm12, cs:__real@3a83126f
      vmovss  xmm9, [rsp+1B0h+var_170]
      vmovss  xmm10, [rsp+1B0h+var_170]
      vmovss  xmm11, [rsp+1B0h+var_170]
    }
    do
    {
      v91 = AIScriptedInterface::SightTracePassed(this, shootFromPos, &endPos, 2047, 2047, 1, bIgnoreFoliage, 0);
      if ( v86 == v125 )
      {
        __asm
        {
          vmulss  xmm1, xmm7, xmm14
          vmulss  xmm0, xmm6, xmm13
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm15, xmm8
          vaddss  xmm2, xmm2, xmm1
          vxorps  xmm3, xmm2, cs:__xmm@80000000800000008000000080000000
          vmulss  xmm0, xmm13, xmm3
          vaddss  xmm6, xmm6, xmm0
          vmulss  xmm1, xmm14, xmm3
          vaddss  xmm7, xmm7, xmm1
          vmulss  xmm0, xmm15, xmm3
          vaddss  xmm8, xmm8, xmm0
        }
      }
      __asm
      {
        vmovss  xmm3, dword ptr [rbp+0B0h+endPos+8]
        vmovss  xmm4, dword ptr [rbp+0B0h+endPos+4]
        vmovss  xmm5, dword ptr [rbp+0B0h+endPos]
      }
      if ( v91 )
      {
        ++v85;
        __asm
        {
          vmovaps xmm11, xmm5
          vmovaps xmm10, xmm4
          vmovaps xmm9, xmm3
        }
        v83 = 1;
        if ( !v86 )
        {
          __asm
          {
            vmovss  dword ptr [r14], xmm5
            vmovss  dword ptr [r14+4], xmm4
            vmovss  dword ptr [r14+8], xmm3
          }
          result = 1;
          goto LABEL_24;
        }
        if ( v85 >= 2 || v85 >= 0 && v85 >= numGoodTracesOverride )
        {
          __asm
          {
            vmovss  dword ptr [r14], xmm5
            vmovss  dword ptr [r14+4], xmm4
            vmovss  dword ptr [r14+8], xmm3
          }
          result = 1;
          goto LABEL_24;
        }
      }
      else
      {
        __asm
        {
          vmulss  xmm1, xmm6, xmm6
          vmulss  xmm0, xmm7, xmm7
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm8, xmm8
          vaddss  xmm2, xmm2, xmm1
          vcomiss xmm2, xmm12
        }
        v85 = 0;
      }
      bIgnoreFoliage = 1;
      __asm
      {
        vaddss  xmm0, xmm5, xmm6
        vmovss  dword ptr [rbp+0B0h+endPos], xmm0
        vaddss  xmm1, xmm4, xmm7
        vmovss  dword ptr [rbp+0B0h+endPos+4], xmm1
        vaddss  xmm0, xmm3, xmm8
        vmovss  dword ptr [rbp+0B0h+endPos+8], xmm0
      }
      ++v86;
    }
    while ( v86 < v124 );
    if ( !v83 )
      goto LABEL_23;
    __asm
    {
      vmovss  dword ptr [r14], xmm11
      vmovss  dword ptr [r14+4], xmm10
      vmovss  dword ptr [r14+8], xmm9
    }
    result = 1;
  }
LABEL_24:
  _R11 = &v132;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return result;
}

/*
==============
AIScriptedInterface::ClearAllSuppressionFromEnemySentient
==============
*/
void AIScriptedInterface::ClearAllSuppressionFromEnemySentient(AIScriptedInterface *this)
{
  AIIterator *v3; 
  sentient_s *v4; 
  team_t eTeam; 
  bool v6; 
  unsigned int v10; 
  const gentity_s *v11; 
  AIAgentInterface *v13; 
  ai_agent_t *ScriptedAgentInfo; 
  AIAgentInterface *v15; 
  actor_s *actor; 
  __int64 v17; 
  unsigned __int64 v18; 
  char v20; 
  __int64 v21; 
  ai_scripted_t *m_pAI; 
  __int64 v23; 
  __int64 v25; 
  __int64 v26; 
  int suppressionStartTime; 
  AIIterator *v28; 
  AIActorInterface v29; 
  AIAgentInterface v30; 
  AIAgentInterface *v31; 
  bitarray<224> result; 

  v3 = this->GetAIIterator(this);
  v28 = v3;
  v4 = this->GetSentient(this);
  eTeam = this->GetSentient(this)->eTeam;
  if ( level.teammode == TEAMMODE_FFA )
  {
    v6 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      _RAX = Com_TeamsMP_GetAllTeamFlags();
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovsd  xmm1, qword ptr [rax+10h]
    }
    v10 = _RAX->array[6] & 0xFFEFFFFF;
    __asm
    {
      vmovups xmmword ptr [rsp+108h+result.array], xmm0
      vmovsd  qword ptr [rsp+108h+result.array+10h], xmm1
    }
    if ( v6 )
      result.array[0] &= ~0x8000000u;
    result.array[6] = v10 & 0xFF9FFFFF;
  }
  else
  {
    Com_Teams_GetEnemyTeamFlags(&result, eTeam);
  }
  v11 = (const gentity_s *)v3->GetFirst(v3);
  if ( v11 )
  {
    __asm
    {
      vmovaps [rsp+108h+var_38], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    while ( 1 )
    {
      AIActorInterface::AIActorInterface(&v29);
      AIAgentInterface::AIAgentInterface(&v30);
      v30.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
      v13 = NULL;
      v31 = NULL;
      if ( v11->agent )
      {
        if ( SV_Agent_IsScripted(v11->s.number) )
        {
          ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(v11);
          if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
            __debugbreak();
          if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
            __debugbreak();
          AINewAgentInterface::SetAgent((AINewAgentInterface *)&v30, ScriptedAgentInfo);
          v13 = &v30;
          v31 = &v30;
          v15 = &v30;
          goto LABEL_27;
        }
        v13 = v31;
      }
      actor = v11->actor;
      if ( actor )
      {
        if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
          __debugbreak();
        AIActorInterface::SetActor(&v29, v11->actor);
        v13 = (AIAgentInterface *)&v29;
        v31 = (AIAgentInterface *)&v29;
      }
      v15 = v13;
      if ( !v13 )
        goto LABEL_59;
LABEL_27:
      v17 = (__int64)v13->GetSentient(v13);
      if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 586, ASSERT_TYPE_ASSERT, "( pSentient )", (const char *)&queryFormat, "pSentient") )
        __debugbreak();
      v18 = *(unsigned int *)(v17 + 16);
      if ( (unsigned int)v18 >= 0xE0 )
      {
        LODWORD(v26) = 224;
        LODWORD(v25) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v25, v26) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v18 & 0x1F)) & result.array[v18 >> 5]) == 0 )
        goto LABEL_59;
      if ( !v15->AIScriptedInterface::m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 633, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
        __debugbreak();
      _RAX = v15->AIScriptedInterface::m_pAI;
      __asm { vcomiss xmm6, dword ptr [rax+53Ch] }
      if ( _RAX->suppression.suppressionStartTime <= 0 )
        goto LABEL_59;
      if ( !_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 543, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
        __debugbreak();
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 544, ASSERT_TYPE_ASSERT, "(pSuppressor)", (const char *)&queryFormat, "pSuppressor") )
        __debugbreak();
      v20 = 0;
      v21 = 0i64;
      suppressionStartTime = v15->AIScriptedInterface::m_pAI->suppression.suppressionStartTime;
      do
      {
        m_pAI = v15->AIScriptedInterface::m_pAI;
        v23 = (__int64)&m_pAI->Suppressant[v21];
        if ( m_pAI->Suppressant[v21].pSuppressor == v4 )
        {
          if ( (ai_scripted_t *)((char *)m_pAI + v21 * 32) == (ai_scripted_t *)-1352i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 349, ASSERT_TYPE_ASSERT, "(suppressant)", (const char *)&queryFormat, "suppressant") )
            __debugbreak();
          *(_DWORD *)v23 = 0;
          *(_QWORD *)(v23 + 8) = 0i64;
          *(_DWORD *)(v23 + 28) = 0;
        }
        else if ( *(int *)v23 > 0 && !m_pAI->Suppressant[v21].movementOnly )
        {
          v20 = 1;
        }
        ++v21;
      }
      while ( v21 < 4 );
      v3 = v28;
      if ( suppressionStartTime <= 0 )
      {
        if ( !v20 )
          goto LABEL_58;
      }
      else if ( !v20 )
      {
        GScr_Notify(v15->AIScriptedInterface::m_pAI->ent, scr_const.suppression_end, 0);
LABEL_58:
        v15->AIScriptedInterface::m_pAI->suppression.suppressionStartTime = 0;
      }
LABEL_59:
      v11 = v3->GetNext(v3);
      if ( !v11 )
      {
        __asm { vmovaps xmm6, [rsp+108h+var_38] }
        return;
      }
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
  vec3_t *p_clipPlane; 
  __int64 v6; 
  const vec4_t *v7; 
  float v10; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  _RBX = &self->Suppressant[0].movementOnly;
  __asm { vmovss  xmm6, cs:__real@42c80000 }
  p_clipPlane = &self->Suppressant[0].clipPlane;
  v6 = 4i64;
  do
  {
    if ( *(_RBX - 7) )
    {
      v7 = &colorRed;
      __asm { vmovss  xmm1, dword ptr [rbx-4]; dist }
      if ( *_RBX )
        v7 = &colorCyan;
      __asm { vmovss  [rsp+68h+var_48], xmm6 }
      G_DebugPlane((const vec2_t *)p_clipPlane, *(float *)&_XMM1, &self->ent->r.currentOrigin, v7, v10, 0, 0);
    }
    p_clipPlane = (vec3_t *)((char *)p_clipPlane + 32);
    _RBX += 8;
    --v6;
  }
  while ( v6 );
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
AIScriptedInterface::DecaySuppressionLines
==============
*/

void __fastcall AIScriptedInterface::DecaySuppressionLines(AIScriptedInterface *this, double _XMM1_8)
{
  ai_scripted_t *m_pAI; 
  char v5; 
  __int64 i; 
  ai_scripted_t *v12; 
  int iTime; 
  int v14; 
  const dvar_t *v15; 
  int integer; 
  __int64 v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  const dvar_t *v21; 
  ai_scripted_t *v22; 
  int suppressionStartTime; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 480, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  m_pAI = this->m_pAI;
  v5 = 0;
  suppressionStartTime = m_pAI->suppression.suppressionStartTime;
  if ( !m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 491, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  _RAX = this->m_pAI;
  if ( _RAX->suppression.ignoreSuppression )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+53Ch]
      vsubss  xmm2, xmm0, dword ptr [rax+540h]
      vxorps  xmm1, xmm1, xmm1
      vmaxss  xmm0, xmm2, xmm1
    }
  }
  __asm { vmovss  dword ptr [rax+53Ch], xmm0 }
  for ( i = 0i64; i < 4; ++i )
  {
    v12 = this->m_pAI;
    iTime = v12->Suppressant[i].iTime;
    if ( iTime > 0 )
    {
      v14 = level.time - iTime;
      if ( v12->Suppressant[i].movementOnly )
      {
        v15 = DVARINT_ai_friendlyFireBlockDuration;
        if ( !DVARINT_ai_friendlyFireBlockDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_friendlyFireBlockDuration") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v15);
        integer = v15->current.integer;
        v12 = this->m_pAI;
      }
      else
      {
        integer = 0;
        if ( !v12->suppression.ignoreSuppression )
          integer = v12->suppression.suppressionDuration;
      }
      if ( v14 < integer )
      {
        if ( !v12->Suppressant[i].movementOnly )
          v5 = 1;
      }
      else
      {
        v17 = (__int64)&v12->Suppressant[i];
        if ( (ai_scripted_t *)((char *)v12 + i * 32) == (ai_scripted_t *)-1352i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 349, ASSERT_TYPE_ASSERT, "(suppressant)", (const char *)&queryFormat, "suppressant") )
          __debugbreak();
        *(_DWORD *)v17 = 0;
        *(_QWORD *)(v17 + 8) = 0i64;
        *(_DWORD *)(v17 + 28) = 0;
      }
    }
  }
  if ( !v5 )
  {
    if ( suppressionStartTime > 0 )
      GScr_Notify(this->m_pAI->ent, scr_const.suppression_end, 0);
    this->m_pAI->suppression.suppressionStartTime = 0;
  }
  v18 = DVARINT_ai_debugEntIndex;
  if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( v18->current.integer == this->m_pAI->ent->s.number )
  {
    v19 = DVARINT_ai_showSuppression;
    if ( !DVARINT_ai_showSuppression && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showSuppression") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    if ( v19->current.integer > 0 )
      DebugDrawSuppression(this->m_pAI);
  }
  v20 = DVARINT_ai_debugEntIndex;
  if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  if ( v20->current.integer != this->m_pAI->ent->s.number )
  {
    v21 = DVARINT_ai_showSuppression;
    if ( !DVARINT_ai_showSuppression && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showSuppression") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    v22 = this->m_pAI;
    if ( v21->current.integer == v22->ent->s.number )
      DebugDrawSuppression(v22);
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
  vec2_t forward; 
  vec3_t pos; 

  _RBX = outClipPlane;
  if ( !suppressedNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 165, ASSERT_TYPE_ASSERT, "(suppressedNode)", (const char *)&queryFormat, "suppressedNode") )
    __debugbreak();
  pathnode_t::GetForward((pathnode_t *)suppressedNode, &forward);
  __asm { vmovss  xmm0, dword ptr [rsp+58h+forward+4] }
  if ( suppressedNode->constant.type == 7 )
  {
    __asm
    {
      vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  xmm2, dword ptr [rsp+58h+forward]
      vmovss  dword ptr [rbx], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+58h+forward]
      vxorps  xmm2, xmm1, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rbx], xmm0
    }
  }
  __asm { vmovss  dword ptr [rbx+4], xmm2 }
  pathnode_t::GetPos((pathnode_t *)suppressedNode, &pos);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+4]
    vmulss  xmm0, xmm2, cs:__real@42000000
    vaddss  xmm1, xmm0, dword ptr [rsp+58h+pos+4]
    vmovss  xmm5, dword ptr [rbx]
    vmulss  xmm4, xmm1, xmm2
    vmulss  xmm2, xmm5, cs:__real@42000000
    vaddss  xmm0, xmm2, dword ptr [rsp+58h+pos]
    vmulss  xmm1, xmm0, xmm5
    vaddss  xmm3, xmm4, xmm1
    vmovss  dword ptr [rbx+8], xmm3
  }
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
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_suppression.cpp", 633, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  _RAX = this->m_pAI;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rax+53Ch]
  }
  return _RAX->suppression.suppressionStartTime > 0;
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
  __asm { vmovss  xmm1, cs:__real@42800000; dist }
  if ( !AICommonInterface::NearClaimNode(this, *(float *)&_XMM1) )
    return 0i64;
  result = this->m_pAI->sentient->pClaimedNode;
  if ( (unsigned int)result->constant.type - 6 > 1 )
    return 0i64;
  return result;
}

