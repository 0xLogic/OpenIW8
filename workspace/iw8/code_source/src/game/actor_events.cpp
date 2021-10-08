/*
==============
Actor_EventDefaultRadiusSqrd
==============
*/

double __fastcall Actor_EventDefaultRadiusSqrd(ai_event_t eType)
{
  double result; 

  *(float *)&result = ?Actor_EventDefaultRadiusSqrd@@YAMW4ai_event_t@@@Z(eType);
  return result;
}

/*
==============
Actor_BroadcastVolumeEvent
==============
*/

void __fastcall Actor_BroadcastVolumeEvent(gentity_s *originator, ai_event_t eType, const bitarray<224> *teamFlags, gentity_s *volumeEnt, float radius)
{
  ?Actor_BroadcastVolumeEvent@@YAXPEAUgentity_s@@W4ai_event_t@@AEBV?$bitarray@$0OA@@@0M@Z(originator, eType, teamFlags, volumeEnt, radius);
}

/*
==============
AICommonInterface::ReceivePointEvent
==============
*/

void __fastcall AICommonInterface::ReceivePointEvent(AICommonInterface *this, gentity_s *originator, ai_event_t eType, const vec3_t *vOrigin)
{
  ?ReceivePointEvent@AICommonInterface@@QEBAXPEAUgentity_s@@W4ai_event_t@@AEBTvec3_t@@@Z(this, originator, eType, vOrigin);
}

/*
==============
Actor_BroadcastGlassEvent
==============
*/

void __fastcall Actor_BroadcastGlassEvent(gentity_s *originator, ai_event_t eType, const bitarray<224> *teamFlags, const vec3_t *vOrigin)
{
  ?Actor_BroadcastGlassEvent@@YAXPEAUgentity_s@@W4ai_event_t@@AEBV?$bitarray@$0OA@@@AEBTvec3_t@@@Z(originator, eType, teamFlags, vOrigin);
}

/*
==============
AIScriptedInterface::ReactToDanger
==============
*/

void __fastcall AIScriptedInterface::ReactToDanger(AIScriptedInterface *this)
{
  ?ReactToDanger@AIScriptedInterface@@UEBAXXZ(this);
}

/*
==============
Actor_BroadcastLineEvent
==============
*/

void __fastcall Actor_BroadcastLineEvent(gentity_s *originator, ai_event_t eType, const bitarray<224> *teamFlags, const vec3_t *vStart, const vec3_t *vEnd, const WeaponDef *weapDef)
{
  ?Actor_BroadcastLineEvent@@YAXPEAUgentity_s@@W4ai_event_t@@AEBV?$bitarray@$0OA@@@AEBTvec3_t@@3PEBUWeaponDef@@@Z(originator, eType, teamFlags, vStart, vEnd, weapDef);
}

/*
==============
AICommonInterface::EventNewEnemy
==============
*/

void __fastcall AICommonInterface::EventNewEnemy(AICommonInterface *this, sentient_s *originator, unsigned __int8 reason)
{
  ?EventNewEnemy@AICommonInterface@@QEBAXPEAUsentient_s@@E@Z(this, originator, reason);
}

/*
==============
AICommonInterface::EventBullet
==============
*/

void __fastcall AICommonInterface::EventBullet(AICommonInterface *this, gentity_s *originator, const vec3_t *vStart, const vec3_t *vEnd, const vec3_t *vClosest, PARM_SUPPRESSION suppression, unsigned __int8 reason)
{
  ?EventBullet@AICommonInterface@@QEBAXPEAUgentity_s@@AEBTvec3_t@@11W4PARM_SUPPRESSION@@E@Z(this, originator, vStart, vEnd, vClosest, suppression, reason);
}

/*
==============
AICommonInterface::ReceiveGlobalEvent
==============
*/

void __fastcall AICommonInterface::ReceiveGlobalEvent(AICommonInterface *this, gentity_s *originator, ai_event_t eType, int restrictionFlags)
{
  ?ReceiveGlobalEvent@AICommonInterface@@QEBAXPEAUgentity_s@@W4ai_event_t@@H@Z(this, originator, eType, restrictionFlags);
}

/*
==============
AICommonInterface::EventVariableRadiusSqrd
==============
*/

double __fastcall AICommonInterface::EventVariableRadiusSqrd(AICommonInterface *this, gentity_s *originator, ai_event_t eType, float defaultRadiusSqrd)
{
  double result; 

  *(float *)&result = ?EventVariableRadiusSqrd@AICommonInterface@@QEBAMPEAUgentity_s@@W4ai_event_t@@M@Z(this, originator, eType, defaultRadiusSqrd);
  return result;
}

/*
==============
Actor_BroadcastTeamEvent
==============
*/

void __fastcall Actor_BroadcastTeamEvent(sentient_s *sentient, ai_event_t eType)
{
  ?Actor_BroadcastTeamEvent@@YAXPEAUsentient_s@@W4ai_event_t@@@Z(sentient, eType);
}

/*
==============
AICommonInterface::EventDeath
==============
*/

void __fastcall AICommonInterface::EventDeath(AICommonInterface *this, sentient_s *pCasualty, sentient_s *pAttacker, unsigned __int8 reason)
{
  ?EventDeath@AICommonInterface@@QEBAXPEAUsentient_s@@0E@Z(this, pCasualty, pAttacker, reason);
}

/*
==============
AICommonInterface::ReceiveVolumeEvent
==============
*/

void __fastcall AICommonInterface::ReceiveVolumeEvent(AICommonInterface *this, gentity_s *originator, ai_event_t eType)
{
  ?ReceiveVolumeEvent@AICommonInterface@@QEBAXPEAUgentity_s@@W4ai_event_t@@@Z(this, originator, eType);
}

/*
==============
AICommonInterface::EventFootstep
==============
*/

void __fastcall AICommonInterface::EventFootstep(AICommonInterface *this, sentient_s *originator, const vec3_t *vOrigin, unsigned __int8 reason)
{
  ?EventFootstep@AICommonInterface@@QEBAXPEAUsentient_s@@AEBTvec3_t@@E@Z(this, originator, vOrigin, reason);
}

/*
==============
Actor_EventForName
==============
*/

ai_event_t __fastcall Actor_EventForName(const char *name)
{
  return ?Actor_EventForName@@YA?AW4ai_event_t@@PEBD@Z(name);
}

/*
==============
AICommonInterface::EventProjectilePing
==============
*/

void __fastcall AICommonInterface::EventProjectilePing(AICommonInterface *this, gentity_s *originator, const vec3_t *vOrigin, unsigned __int8 reason)
{
  ?EventProjectilePing@AICommonInterface@@QEBAXPEAUgentity_s@@AEBTvec3_t@@E@Z(this, originator, vOrigin, reason);
}

/*
==============
AICommonInterface::EventGrenadePing
==============
*/

void __fastcall AICommonInterface::EventGrenadePing(AICommonInterface *this, gentity_s *originator, const vec3_t *vOrigin, unsigned __int8 reason)
{
  ?EventGrenadePing@AICommonInterface@@QEBAXPEAUgentity_s@@AEBTvec3_t@@E@Z(this, originator, vOrigin, reason);
}

/*
==============
AICommonInterface::EventPain
==============
*/

void __fastcall AICommonInterface::EventPain(AICommonInterface *this, sentient_s *pCasualty, sentient_s *pAttacker, unsigned __int8 reason)
{
  ?EventPain@AICommonInterface@@QEBAXPEAUsentient_s@@0E@Z(this, pCasualty, pAttacker, reason);
}

/*
==============
Actor_EventBusyRadiusSqrd
==============
*/

double __fastcall Actor_EventBusyRadiusSqrd(ai_event_t eType)
{
  double result; 

  *(float *)&result = ?Actor_EventBusyRadiusSqrd@@YAMW4ai_event_t@@@Z(eType);
  return result;
}

/*
==============
AICommonInterface::UseBusyEventDist
==============
*/

bool __fastcall AICommonInterface::UseBusyEventDist(AICommonInterface *this, gentity_s *originator)
{
  return ?UseBusyEventDist@AICommonInterface@@QEBA_NPEAUgentity_s@@@Z(this, originator);
}

/*
==============
AICommonInterface::ReceiveArcEvent
==============
*/

void __fastcall AICommonInterface::ReceiveArcEvent(AICommonInterface *this, gentity_s *originator, ai_event_t eType, const vec3_t *origin, float distSqrd, float radiusSqrd, float angle0, float angle1, float halfHeight)
{
  ?ReceiveArcEvent@AICommonInterface@@QEBAXPEAUgentity_s@@W4ai_event_t@@AEBTvec3_t@@MMMMM@Z(this, originator, eType, origin, distSqrd, radiusSqrd, angle0, angle1, halfHeight);
}

/*
==============
AICommonInterface::EventGunshot
==============
*/

void __fastcall AICommonInterface::EventGunshot(AICommonInterface *this, sentient_s *originator, const vec3_t *vOrigin, unsigned __int8 reason)
{
  ?EventGunshot@AICommonInterface@@QEBAXPEAUsentient_s@@AEBTvec3_t@@E@Z(this, originator, vOrigin, reason);
}

/*
==============
AICommonInterface::EventGlassDestroyed
==============
*/

void __fastcall AICommonInterface::EventGlassDestroyed(AICommonInterface *this, gentity_s *originator, const vec3_t *glassPos, unsigned __int8 reason)
{
  ?EventGlassDestroyed@AICommonInterface@@QEBAXPEAUgentity_s@@AEBTvec3_t@@E@Z(this, originator, glassPos, reason);
}

/*
==============
Actor_BroadcastGlobalEvent
==============
*/

void __fastcall Actor_BroadcastGlobalEvent(gentity_s *originator, ai_event_t eType, const bitarray<224> *teamFlags, int restrictionFlags)
{
  ?Actor_BroadcastGlobalEvent@@YAXPEAUgentity_s@@W4ai_event_t@@AEBV?$bitarray@$0OA@@@H@Z(originator, eType, teamFlags, restrictionFlags);
}

/*
==============
AICommonInterface::WasAttackedBy
==============
*/

void __fastcall AICommonInterface::WasAttackedBy(AICommonInterface *this, sentient_s *pOther)
{
  ?WasAttackedBy@AICommonInterface@@QEBAXPEAUsentient_s@@@Z(this, pOther);
}

/*
==============
AICommonInterface::ReceiveLineEvent
==============
*/

void __fastcall AICommonInterface::ReceiveLineEvent(AICommonInterface *this, gentity_s *originator, ai_event_t eType, const vec3_t *vStart, const vec3_t *vEnd, const vec3_t *vClosest, const WeaponDef *weapDef)
{
  ?ReceiveLineEvent@AICommonInterface@@QEBAXPEAUgentity_s@@W4ai_event_t@@AEBTvec3_t@@22PEBUWeaponDef@@@Z(this, originator, eType, vStart, vEnd, vClosest, weapDef);
}

/*
==============
AICommonInterface::EventExplosion
==============
*/

void __fastcall AICommonInterface::EventExplosion(AICommonInterface *this, gentity_s *originator, const vec3_t *vOrigin, unsigned __int8 reason)
{
  ?EventExplosion@AICommonInterface@@QEBAXPEAUgentity_s@@AEBTvec3_t@@E@Z(this, originator, vOrigin, reason);
}

/*
==============
Actor_BroadcastPointEvent
==============
*/

void __fastcall Actor_BroadcastPointEvent(gentity_s *originator, ai_event_t eType, const bitarray<224> *teamFlags, const vec3_t *vOrigin)
{
  ?Actor_BroadcastPointEvent@@YAXPEAUgentity_s@@W4ai_event_t@@AEBV?$bitarray@$0OA@@@AEBTvec3_t@@@Z(originator, eType, teamFlags, vOrigin);
}

/*
==============
AICommonInterface::ShouldKnowAboutPainDeathEvent
==============
*/

bool __fastcall AICommonInterface::ShouldKnowAboutPainDeathEvent(AICommonInterface *this, gentity_s *originator, const vec3_t *vOrigin)
{
  return ?ShouldKnowAboutPainDeathEvent@AICommonInterface@@QEBA_NPEAUgentity_s@@AEBTvec3_t@@@Z(this, originator, vOrigin);
}

/*
==============
Actor_BroadcastArcEvent
==============
*/

void __fastcall Actor_BroadcastArcEvent(gentity_s *originator, ai_event_t eType, const bitarray<224> *teamFlags, const vec3_t *origin, float radius, float angle0, float angle1, float halfHeight)
{
  ?Actor_BroadcastArcEvent@@YAXPEAUgentity_s@@W4ai_event_t@@AEBV?$bitarray@$0OA@@@AEBTvec3_t@@MMMM@Z(originator, eType, teamFlags, origin, radius, angle0, angle1, halfHeight);
}

/*
==============
AIScriptedInterface::ReactToTeamDeath
==============
*/

void __fastcall AIScriptedInterface::ReactToTeamDeath(AIScriptedInterface *this, sentient_s *pCasualty, sentient_s *pAttacker)
{
  ?ReactToTeamDeath@AIScriptedInterface@@UEBAXPEAUsentient_s@@0@Z(this, pCasualty, pAttacker);
}

/*
==============
AICommonInterface::EventGunshotTeammate
==============
*/

bool __fastcall AICommonInterface::EventGunshotTeammate(AICommonInterface *this, sentient_s *originator, const vec3_t *vOrigin, unsigned __int8 reason)
{
  return ?EventGunshotTeammate@AICommonInterface@@UEBA_NPEAUsentient_s@@AEBTvec3_t@@E@Z(this, originator, vOrigin, reason);
}

/*
==============
AI_DumpEvents
==============
*/
void AI_DumpEvents(ai_common_t *self, ai_event_t event, gentity_s *originator)
{
  const dvar_t *v6; 
  __int64 number; 
  int v8; 
  char *fmt; 
  __int64 v10; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 215, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  v6 = DVARINT_g_aiEventDump;
  if ( !DVARINT_g_aiEventDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_aiEventDump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  number = (unsigned int)self->ent->s.number;
  if ( v6->current.integer == (_DWORD)number )
  {
    if ( originator )
      v8 = originator->s.number;
    else
      v8 = -1;
    LODWORD(v10) = level.time;
    LODWORD(fmt) = v8;
    Com_Printf(18, "%d ^3 %s^7:  from entity^5 %d ^7at time^5 %d\n", number, g_ai_event_info[(unsigned __int8)event].name, fmt, v10);
  }
}

/*
==============
AI_IsLiveBot
==============
*/
_BOOL8 AI_IsLiveBot(gentity_s *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 235, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  return ent->sentient && ent->health > 0 && SV_BotIsBotEnt(ent);
}

/*
==============
Actor_BroadcastArcEvent
==============
*/
void Actor_BroadcastArcEvent(gentity_s *originator, ai_event_t eType, const bitarray<224> *teamFlags, const vec3_t *origin, float radius, float angle0, float angle1, float halfHeight)
{
  int v21; 
  bool v22; 
  bool v23; 
  unsigned int v26; 
  const bitarray<224> *v27; 
  bool v28; 
  sentient_s *sentient; 
  unsigned int v30; 
  bitarray<224> *p_result; 
  AIIterator *AIScriptedIterator; 
  __int64 v37; 
  AICommonInterface *v52; 
  int v53; 
  gentity_s *Entity; 
  const gentity_s **p_ent; 
  AICommonInterface *m_pAI; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float radiusSqrd; 
  float radiusSqrda; 
  float radiusSqrdb; 
  float radiusSqrdc; 
  float v87; 
  float v88; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  AICommonWrapper v94; 
  bitarray<224> result; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  if ( eType != AI_EV_BADPLACE_ARC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 652, ASSERT_TYPE_ASSERT, "(eType > AI_EV_FIRST_ARC_EVENT && eType < AI_EV_LAST_ARC_EVENT)", (const char *)&queryFormat, "eType > AI_EV_FIRST_ARC_EVENT && eType < AI_EV_LAST_ARC_EVENT") )
    __debugbreak();
  v21 = BG_AISystemEnabled();
  v22 = v21 == 0;
  if ( !v21 )
  {
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 654, ASSERT_TYPE_ASSERT, "( BG_AISystemEnabled() )", (const char *)&queryFormat, "BG_AISystemEnabled()");
    v22 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, [rsp+1B8h+angle0]
    vmovss  xmm7, [rsp+1B8h+angle1]
    vucomiss xmm6, xmm7
  }
  if ( !v22 )
  {
    v26 = 0;
    v27 = teamFlags;
    do
    {
      v28 = v27->array[0] == 0;
      if ( v27->array[0] )
        goto LABEL_19;
      ++v26;
      v27 = (const bitarray<224> *)((char *)v27 + 4);
    }
    while ( v26 < 7 );
    if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 665, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
      __debugbreak();
    sentient = originator->sentient;
    if ( sentient )
    {
      Sentient_EnemyTeamFlags(&result, sentient->eTeam);
      v30 = 0;
      p_result = &result;
      while ( 1 )
      {
        v28 = p_result->array[0] == 0;
        if ( p_result->array[0] )
          break;
        ++v30;
        p_result = (bitarray<224> *)((char *)p_result + 4);
        if ( v30 >= 7 )
          goto LABEL_47;
      }
LABEL_19:
      __asm
      {
        vmovaps [rsp+1B8h+var_78], xmm8
        vmovaps [rsp+1B8h+var_98], xmm10
        vmovaps [rsp+1B8h+var_A8], xmm11
        vmovss  xmm11, [rsp+1B8h+radius]
        vmulss  xmm10, xmm11, xmm11
        vxorps  xmm0, xmm0, xmm0
        vucomiss xmm10, xmm0
      }
      if ( v28 )
      {
        *(double *)&_XMM0 = Actor_EventDefaultRadiusSqrd(eType);
        __asm { vmovaps xmm10, xmm0 }
      }
      __asm
      {
        vmovaps [rsp+1B8h+var_88], xmm9
        vmovss  xmm8, [rsp+1B8h+halfHeight]
      }
      if ( BG_ActorOrAgentSystemEnabled() )
      {
        AIScriptedIterator = AIScriptedInterface::GetAIScriptedIterator();
        v37 = AIScriptedIterator->GetFirst(AIScriptedIterator);
        while ( v37 )
        {
          _RBX = (gentity_s *)v37;
          v37 = (__int64)AIScriptedIterator->GetNext(AIScriptedIterator);
          if ( (_RBX != originator || g_ai_event_info[(unsigned __int8)eType].notifySelf) && bitarray_base<bitarray<224>>::testBit((bitarray_base<bitarray<224> > *)teamFlags, _RBX->sentient->eTeam) )
          {
            __asm
            {
              vmovss  [rsp+1B8h+radiusSqrd], xmm8
              vmovaps xmm3, xmm6; angle0
              vmovaps xmm2, xmm11; radius
              vmovss  dword ptr [rsp+1B8h+fmt], xmm7
            }
            if ( AI_IsInsideArc(_RBX, origin, *(float *)&_XMM2, *(float *)&_XMM3, fmt, radiusSqrd) )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+130h]
                vsubss  xmm3, xmm0, dword ptr [rdi]
                vmovss  xmm1, dword ptr [rbx+134h]
                vmovss  xmm0, dword ptr [rbx+138h]
                vsubss  xmm2, xmm1, dword ptr [rdi+4]
                vsubss  xmm4, xmm0, dword ptr [rdi+8]
                vmulss  xmm2, xmm2, xmm2
                vmulss  xmm1, xmm3, xmm3
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm3, xmm2, xmm1
                vaddss  xmm9, xmm3, xmm0
              }
              AIWrapper::AIWrapper((AIWrapper *)&v94, _RBX);
              v52 = (AICommonInterface *)v94.m_botInterface.__vftable;
              if ( !v94.m_botInterface.__vftable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 700, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
                __debugbreak();
              __asm
              {
                vmovss  [rsp+1B8h+var_178], xmm8
                vmovss  [rsp+1B8h+var_180], xmm7
                vmovss  [rsp+1B8h+var_188], xmm6
                vmovss  [rsp+1B8h+radiusSqrd], xmm10
                vmovss  dword ptr [rsp+1B8h+fmt], xmm9
              }
              AICommonInterface::ReceiveArcEvent(v52, originator, eType, origin, fmta, radiusSqrda, v87, v90, v92);
            }
          }
        }
      }
      v53 = Actor_EventListener_First(eType, teamFlags);
      if ( v53 >= 0 )
      {
        __asm
        {
          vmovaps [rsp+1B8h+var_B8], xmm12
          vmovss  xmm12, cs:__real@41700000
        }
        do
        {
          Entity = Actor_EventListener_GetEntity(v53);
          _RBX = Entity;
          if ( Entity != originator || g_ai_event_info[(unsigned __int8)eType].notifySelf )
          {
            __asm
            {
              vmovss  [rsp+1B8h+var_188], xmm8
              vmovss  [rsp+1B8h+radiusSqrd], xmm7
              vmovaps xmm3, xmm11; arcRadius
              vmovaps xmm1, xmm12; posRadius
              vmovss  dword ptr [rsp+1B8h+fmt], xmm6
            }
            if ( IsPosInsideArc(&Entity->r.currentOrigin, *(float *)&_XMM1, origin, *(float *)&_XMM3, fmtb, radiusSqrdb, v88) )
            {
              Actor_EventListener_NotifyToListener(_RBX, originator, eType, origin);
              if ( AI_IsLiveBot(_RBX) )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rbx+130h]
                  vsubss  xmm3, xmm0, dword ptr [rdi]
                  vmovss  xmm1, dword ptr [rbx+134h]
                  vmovss  xmm0, dword ptr [rbx+138h]
                  vsubss  xmm2, xmm1, dword ptr [rdi+4]
                  vsubss  xmm4, xmm0, dword ptr [rdi+8]
                  vmulss  xmm2, xmm2, xmm2
                  vmulss  xmm1, xmm3, xmm3
                }
                p_ent = (const gentity_s **)&_RBX->sentient->ai->ent;
                __asm
                {
                  vmulss  xmm0, xmm4, xmm4
                  vaddss  xmm3, xmm2, xmm1
                  vaddss  xmm9, xmm3, xmm0
                }
                AIActorInterface::AIActorInterface(&v94.m_actorInterface);
                AIAgentInterface::AIAgentInterface(&v94.m_newAgentInterface);
                v94.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
                AICommonInterface::AICommonInterface(&v94.m_botInterface);
                v94.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
                AICommonInterface::AICommonInterface(&v94.m_botAgentInterface);
                m_pAI = NULL;
                v94.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
                v94.m_pAI = NULL;
                if ( p_ent )
                {
                  AICommonWrapper::Setup(&v94, *p_ent);
                  m_pAI = v94.m_pAI;
                }
                if ( !m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 724, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
                  __debugbreak();
                __asm
                {
                  vmovss  [rsp+1B8h+var_178], xmm8
                  vmovss  [rsp+1B8h+var_180], xmm7
                  vmovss  [rsp+1B8h+var_188], xmm6
                  vmovss  [rsp+1B8h+radiusSqrd], xmm10
                  vmovss  dword ptr [rsp+1B8h+fmt], xmm9
                }
                AICommonInterface::ReceiveArcEvent(m_pAI, originator, eType, origin, fmtc, radiusSqrdc, v89, v91, v93);
              }
            }
          }
          v53 = Actor_EventListener_Next(v53, eType, teamFlags);
        }
        while ( v53 >= 0 );
        __asm { vmovaps xmm12, [rsp+1B8h+var_B8] }
      }
      __asm
      {
        vmovaps xmm9, [rsp+1B8h+var_88]
        vmovaps xmm10, [rsp+1B8h+var_98]
        vmovaps xmm8, [rsp+1B8h+var_78]
        vmovaps xmm11, [rsp+1B8h+var_A8]
      }
    }
  }
LABEL_47:
  __asm
  {
    vmovaps xmm6, [rsp+1B8h+var_58]
    vmovaps xmm7, [rsp+1B8h+var_68]
  }
}

/*
==============
Actor_BroadcastGlassEvent
==============
*/
void Actor_BroadcastGlassEvent(gentity_s *originator, ai_event_t eType, const bitarray<224> *teamFlags, const vec3_t *vOrigin)
{
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  char v16; 
  char v17; 
  hkMemoryAllocator *v18; 
  hkMemoryAllocator *v19; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v21; 
  __int64 v22; 
  vec3_t end; 
  vec3_t pos; 

  v22 = -2i64;
  _RSI = vOrigin;
  Actor_BroadcastPointEvent(originator, eType, teamFlags, vOrigin);
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm3, xmm0, cs:__real@44800000
    vmovss  xmm2, dword ptr [rsi+4]
    vmovss  xmm1, dword ptr [rsi]
    vmovss  dword ptr [rbp+57h+end], xmm1
    vmovss  dword ptr [rbp+57h+end+4], xmm2
    vmovss  dword ptr [rbp+57h+end+8], xmm3
  }
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v21, originator != NULL, 0);
  HavokPhysics_IgnoreBodies::SetIsClutter(&v21, 1);
  if ( originator )
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v21, 0, originator->s.number, 1, 0, 0, 0, 0);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+57h+extendedData.collisionBuffer], xmm0
  }
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = 33685505;
  extendedData.ignoreBodies = &v21;
  Physics_Raycast(PHYSICS_WORLD_ID_FIRST, _RSI, &end, &extendedData, CollisionQueryResult);
  if ( HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult) )
  {
    HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(CollisionQueryResult, 0, &pos);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+8]
      vsubss  xmm1, xmm0, dword ptr [rbp+57h+pos+8]
      vcomiss xmm1, cs:__real@42900000
    }
    if ( !(v16 | v17) )
      Actor_BroadcastPointEvent(originator, eType, teamFlags, &pos);
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  v18 = hkMemHeapAllocator();
  v21.m_ignoreBodies.m_size = 0;
  if ( v21.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v18, v21.m_ignoreBodies.m_data, 4, v21.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v21.m_ignoreBodies.m_data = NULL;
  v21.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v19 = hkMemHeapAllocator();
  v21.m_ignoreEntities.m_size = 0;
  if ( v21.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v19, v21.m_ignoreEntities.m_data, 8, v21.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
Actor_BroadcastGlobalEvent
==============
*/
void Actor_BroadcastGlobalEvent(gentity_s *originator, ai_event_t eType, const bitarray<224> *teamFlags, int restrictionFlags)
{
  unsigned int v8; 
  const bitarray<224> *v9; 
  sentient_s *sentient; 
  int v11; 
  bitarray<224> *i; 
  AIIterator *AIScriptedIterator; 
  __int64 v14; 
  gentity_s *v15; 
  unsigned __int64 eTeam; 
  AICommonInterface *v17; 
  int j; 
  gentity_s *Entity; 
  const gentity_s **p_ent; 
  AICommonInterface *m_pAI; 
  __int64 v22; 
  __int64 v23; 
  AICommonWrapper v24; 
  bitarray<224> result; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 825, ASSERT_TYPE_ASSERT, "( G_Bot_UseGlobalBadPlace() )", (const char *)&queryFormat, "G_Bot_UseGlobalBadPlace()") )
    __debugbreak();
  if ( eType != AI_EV_BADPLACE_GLOBAL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 826, ASSERT_TYPE_ASSERT, "( eType > AI_EV_FIRST_GLOBAL_EVENT && eType < AI_EV_LAST_GLOBAL_EVENT )", (const char *)&queryFormat, "eType > AI_EV_FIRST_GLOBAL_EVENT && eType < AI_EV_LAST_GLOBAL_EVENT") )
    __debugbreak();
  if ( !BG_AISystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 828, ASSERT_TYPE_ASSERT, "( BG_AISystemEnabled() )", (const char *)&queryFormat, "BG_AISystemEnabled()") )
    __debugbreak();
  v8 = 0;
  v9 = teamFlags;
  do
  {
    if ( v9->array[0] )
      goto LABEL_21;
    ++v8;
    v9 = (const bitarray<224> *)((char *)v9 + 4);
  }
  while ( v8 < 7 );
  if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 832, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
    __debugbreak();
  sentient = originator->sentient;
  if ( sentient )
  {
    Sentient_EnemyTeamFlags(&result, sentient->eTeam);
    v11 = 0;
    for ( i = &result; !i->array[0]; i = (bitarray<224> *)((char *)i + 4) )
    {
      if ( (unsigned int)++v11 >= 7 )
        return;
    }
LABEL_21:
    if ( BG_ActorOrAgentSystemEnabled() )
    {
      AIScriptedIterator = AIScriptedInterface::GetAIScriptedIterator();
      v14 = AIScriptedIterator->GetFirst(AIScriptedIterator);
      while ( v14 )
      {
        v15 = (gentity_s *)v14;
        v14 = (__int64)AIScriptedIterator->GetNext(AIScriptedIterator);
        if ( v15 != originator || g_ai_event_info[(unsigned __int8)eType].notifySelf )
        {
          eTeam = (unsigned int)v15->sentient->eTeam;
          if ( (unsigned int)eTeam >= 0xE0 )
          {
            LODWORD(v23) = 224;
            LODWORD(v22) = v15->sentient->eTeam;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v22, v23) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (eTeam & 0x1F)) & teamFlags->array[eTeam >> 5]) != 0 )
          {
            AIWrapper::AIWrapper((AIWrapper *)&v24, v15);
            v17 = (AICommonInterface *)v24.m_botInterface.__vftable;
            if ( !v24.m_botInterface.__vftable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 858, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
              __debugbreak();
            AICommonInterface::ReceiveGlobalEvent(v17, originator, eType, restrictionFlags);
          }
        }
      }
    }
    for ( j = Actor_EventListener_First(eType, teamFlags); j >= 0; j = Actor_EventListener_Next(j, eType, teamFlags) )
    {
      Entity = Actor_EventListener_GetEntity(j);
      if ( Entity != originator || g_ai_event_info[(unsigned __int8)eType].notifySelf )
      {
        Actor_EventListener_NotifyToListener(Entity, originator, eType, &vec3_origin);
        if ( AI_IsLiveBot(Entity) )
        {
          p_ent = (const gentity_s **)&Entity->sentient->ai->ent;
          AIActorInterface::AIActorInterface(&v24.m_actorInterface);
          AIAgentInterface::AIAgentInterface(&v24.m_newAgentInterface);
          v24.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
          AICommonInterface::AICommonInterface(&v24.m_botInterface);
          v24.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
          AICommonInterface::AICommonInterface(&v24.m_botAgentInterface);
          m_pAI = NULL;
          v24.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
          v24.m_pAI = NULL;
          if ( p_ent )
          {
            AICommonWrapper::Setup(&v24, *p_ent);
            m_pAI = v24.m_pAI;
          }
          if ( !m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 874, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
            __debugbreak();
          AICommonInterface::ReceiveGlobalEvent(m_pAI, originator, eType, restrictionFlags);
        }
      }
    }
  }
}

/*
==============
Actor_BroadcastLineEvent
==============
*/
void Actor_BroadcastLineEvent(gentity_s *originator, ai_event_t eType, const bitarray<224> *teamFlags, const vec3_t *vStart, const vec3_t *vEnd, const WeaponDef *weapDef)
{
  const bitarray<224> *v20; 
  const bitarray<224> *v22; 
  unsigned int v23; 
  sentient_s *sentient; 
  int v25; 
  bitarray<224> *i; 
  AIIterator *v52; 
  __int64 v53; 
  unsigned __int64 eTeam; 
  AICommonInterface *v58; 
  bool v59; 
  char v60; 
  int j; 
  bool v99; 
  const gentity_s **p_ent; 
  AICommonInterface *m_pAI; 
  vec3_t *vClosest; 
  WeaponDef *v149; 
  AIIterator *AIScriptedIterator; 
  AICommonWrapper v155; 
  vec3_t origin; 
  vec3_t outCentroid; 
  bitarray<224> result; 

  _R12 = vEnd;
  v20 = teamFlags;
  if ( (unsigned __int8)(eType - 17) > 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 502, ASSERT_TYPE_ASSERT, "(eType > AI_EV_FIRST_LINE_EVENT && eType < AI_EV_LAST_LINE_EVENT)", (const char *)&queryFormat, "eType > AI_EV_FIRST_LINE_EVENT && eType < AI_EV_LAST_LINE_EVENT") )
    __debugbreak();
  if ( !BG_AISystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 504, ASSERT_TYPE_ASSERT, "( BG_AISystemEnabled() )", (const char *)&queryFormat, "BG_AISystemEnabled()") )
    __debugbreak();
  v22 = v20;
  v23 = 0;
  while ( !v22->array[0] )
  {
    ++v23;
    v22 = (const bitarray<224> *)((char *)v22 + 4);
    if ( v23 >= 7 )
    {
      sentient = originator->sentient;
      if ( !sentient )
        return;
      Sentient_EnemyTeamFlags(&result, sentient->eTeam);
      v25 = 0;
      for ( i = &result; !i->array[0]; i = (bitarray<224> *)((char *)i + 4) )
      {
        if ( (unsigned int)++v25 >= 7 )
          return;
      }
      break;
    }
  }
  __asm
  {
    vmovaps [rsp+220h+var_50], xmm6
    vmovaps [rsp+220h+var_60], xmm7
    vmovaps [rsp+220h+var_70], xmm8
    vmovaps [rsp+220h+var_80], xmm9
    vmovaps [rsp+220h+var_90], xmm10
    vmovaps [rsp+220h+var_A0], xmm11
    vmovaps [rsp+220h+var_B0], xmm12
    vmovaps [rsp+220h+var_C0], xmm13
    vmovaps [rsp+220h+var_D0], xmm14
    vmovaps [rsp+220h+var_E0], xmm15
  }
  *(double *)&_XMM0 = Actor_EventDefaultRadiusSqrd(eType);
  __asm { vmovaps xmm15, xmm0 }
  *(double *)&_XMM0 = Actor_EventBusyRadiusSqrd(eType);
  __asm
  {
    vmovss  xmm1, dword ptr [r12]
    vsubss  xmm6, xmm1, dword ptr [r14]
    vmovss  xmm1, dword ptr [r12+4]
    vsubss  xmm5, xmm1, dword ptr [r14+4]
    vmovss  [rsp+220h+var_1D0], xmm0
    vmovaps xmm8, xmm0
    vmovss  xmm0, dword ptr [r12+8]
    vsubss  xmm4, xmm0, dword ptr [r14+8]
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm13, xmm2, xmm2
    vcmpless xmm0, xmm13, cs:__real@80000000
  }
  _RSI = g_ai_event_info;
  __asm
  {
    vblendvps xmm0, xmm13, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm10, xmm6, xmm1
  }
  _RBX = (unsigned __int8)eType;
  __asm
  {
    vmovss  xmm14, dword ptr [rsi+rbx*8+18h]
    vmulss  xmm11, xmm5, xmm1
    vmulss  xmm12, xmm4, xmm1
    vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  if ( BG_ActorOrAgentSystemEnabled() )
  {
    AIScriptedIterator = AIScriptedInterface::GetAIScriptedIterator();
    v52 = AIScriptedIterator;
    v53 = AIScriptedIterator->GetFirst(AIScriptedIterator);
    if ( v53 )
    {
      __asm
      {
        vmovss  xmm7, cs:__real@41700000
        vmovss  xmm8, cs:__real@3f000000
      }
      do
      {
        _RDI = (gentity_s *)v53;
        v53 = (__int64)v52->GetNext(v52);
        if ( _RDI != originator || g_ai_event_info[(unsigned __int8)eType].notifySelf )
        {
          eTeam = (unsigned int)_RDI->sentient->eTeam;
          if ( (unsigned int)eTeam >= 0xE0 )
          {
            LODWORD(v149) = 224;
            LODWORD(vClosest) = _RDI->sentient->eTeam;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", vClosest, v149) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (eTeam & 0x1F)) & teamFlags->array[eTeam >> 5]) != 0 )
          {
            AIWrapper::AIWrapper((AIWrapper *)&v155, _RDI);
            v58 = (AICommonInterface *)v155.m_botInterface.__vftable;
            if ( !v155.m_botInterface.__vftable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 556, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
              __debugbreak();
            v59 = (unsigned __int8)eType < AI_EV_BLOCK_FRIENDLIES;
            if ( eType != AI_EV_BLOCK_FRIENDLIES || (v60 = ((__int64 (__fastcall *)(AICommonInterface *))v58->__vftable[2].GetWeaponFlashTagName)(v58), v59 = 0, v60) )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rdi+134h]
                vsubss  xmm1, xmm0, dword ptr [r14+4]
                vmovss  xmm2, dword ptr [rdi+130h]
                vsubss  xmm0, xmm2, dword ptr [r14]
                vmovss  xmm2, dword ptr [rdi+138h]
                vmulss  xmm3, xmm1, xmm11
                vmulss  xmm1, xmm0, xmm10
                vsubss  xmm0, xmm2, dword ptr [r14+8]
                vaddss  xmm4, xmm3, xmm1
                vmulss  xmm1, xmm0, xmm12
                vaddss  xmm6, xmm4, xmm1
                vxorps  xmm0, xmm0, xmm0
                vcomiss xmm6, xmm0
              }
              if ( !v59 )
              {
                LOBYTE(_EAX) = v58->m_pAI->threat.hasThreateningEnemy && AICommonInterface::GetTargetEntity(v58) != originator;
                _ECX = 0;
                _EAX = (unsigned __int8)_EAX;
                __asm
                {
                  vcomiss xmm6, xmm13
                  vmovd   xmm0, eax
                  vmovd   xmm1, ecx
                  vpcmpeqd xmm2, xmm0, xmm1
                  vmovss  xmm0, [rsp+220h+var_1D0]
                  vblendvps xmm0, xmm0, xmm15, xmm2
                  vmovss  [rsp+220h+var_1E0], xmm0
                  vmovss  xmm2, dword ptr [r12]
                  vmovss  xmm3, dword ptr [r12+4]
                  vmovss  xmm5, dword ptr [r12+8]
                  vmovss  dword ptr [rbp+120h+origin], xmm2
                  vmovss  dword ptr [rbp+120h+origin+4], xmm3
                  vmovss  dword ptr [rbp+120h+origin+8], xmm5
                }
                if ( eType == AI_EV_BULLET )
                {
                  __asm
                  {
                    vsubss  xmm0, xmm6, xmm13
                    vcomiss xmm0, xmm7
                  }
                }
                __asm
                {
                  vmovss  xmm6, [rsp+220h+var_1E0]
                  vmovss  xmm0, dword ptr [rdi+130h]
                  vmovss  xmm1, dword ptr [rdi+134h]
                  vsubss  xmm4, xmm0, xmm2
                  vmovss  xmm0, dword ptr [rdi+138h]
                  vsubss  xmm3, xmm1, xmm3
                  vsubss  xmm2, xmm0, xmm5
                  vaddss  xmm5, xmm2, dword ptr [rdi+114h]
                  vmulss  xmm0, xmm4, xmm4
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm1, xmm1, xmm0
                  vcomiss xmm1, xmm6
                }
                if ( (unsigned __int8)eType <= AI_EV_BULLET )
                {
                  __asm
                  {
                    vandps  xmm5, xmm5, xmm9
                    vandps  xmm0, xmm14, xmm9
                    vcomiss xmm5, xmm0
                  }
                  if ( (unsigned __int8)eType < AI_EV_BULLET )
                    AICommonInterface::ReceiveLineEvent(v58, originator, eType, vStart, vEnd, &origin, weapDef);
                }
              }
            }
          }
          v52 = AIScriptedIterator;
        }
      }
      while ( v53 );
      __asm { vmovss  xmm8, [rsp+220h+var_1D0] }
      v20 = teamFlags;
    }
    _RBX = (unsigned __int8)eType;
  }
  for ( j = Actor_EventListener_First(eType, v20); j >= 0; j = Actor_EventListener_Next(j, eType, teamFlags) )
  {
    _RDI = Actor_EventListener_GetEntity(j);
    v99 = _RDI < originator;
    if ( _RDI != originator || (v99 = 0, g_ai_event_info[_RBX].notifySelf) )
    {
      _RAX = vStart;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+134h]
        vmovss  xmm2, dword ptr [rdi+130h]
        vmovss  xmm6, dword ptr [rax+4]
        vmovss  xmm5, dword ptr [rax]
        vmovss  xmm7, dword ptr [rax+8]
        vsubss  xmm1, xmm0, xmm6
        vmulss  xmm3, xmm1, xmm11
        vsubss  xmm0, xmm2, xmm5
        vmovss  xmm2, dword ptr [rdi+138h]
        vmulss  xmm1, xmm0, xmm10
        vsubss  xmm0, xmm2, xmm7
        vaddss  xmm4, xmm3, xmm1
        vmulss  xmm1, xmm0, xmm12
        vaddss  xmm3, xmm4, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm3, xmm0
      }
      if ( !v99 )
      {
        __asm
        {
          vcomiss xmm3, xmm13
          vmovss  xmm0, dword ptr [r12]
          vmovss  xmm1, dword ptr [r12+4]
          vmovss  dword ptr [rbp+120h+origin], xmm0
          vmovss  xmm0, dword ptr [r12+8]
          vmovss  dword ptr [rbp+120h+origin+8], xmm0
          vmovss  dword ptr [rbp+120h+origin+4], xmm1
        }
        G_Utils_EntityCentroid(_RDI, &outCentroid);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+120h+outCentroid]
          vmovss  xmm1, dword ptr [rbp+120h+outCentroid+4]
          vsubss  xmm3, xmm0, dword ptr [rbp+120h+origin]
          vsubss  xmm2, xmm1, dword ptr [rbp+120h+origin+4]
          vmovss  xmm0, dword ptr [rbp+120h+outCentroid+8]
          vsubss  xmm6, xmm0, dword ptr [rbp+120h+origin+8]
          vmulss  xmm2, xmm2, xmm2
        }
        p_ent = (const gentity_s **)&_RDI->sentient->ai->ent;
        __asm
        {
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm7, xmm2, xmm1
        }
        if ( p_ent )
        {
          AIActorInterface::AIActorInterface(&v155.m_actorInterface);
          AIAgentInterface::AIAgentInterface(&v155.m_newAgentInterface);
          v155.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
          AICommonInterface::AICommonInterface(&v155.m_botInterface);
          v155.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
          AICommonInterface::AICommonInterface(&v155.m_botAgentInterface);
          v155.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
          v155.m_pAI = NULL;
          AICommonWrapper::Setup(&v155, *p_ent);
          m_pAI = v155.m_pAI;
          if ( !v155.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 623, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
            __debugbreak();
          LOBYTE(_EAX) = m_pAI->m_pAI->threat.hasThreateningEnemy && AICommonInterface::GetTargetEntity(m_pAI) != originator;
          _ECX = 0;
          _EAX = (unsigned __int8)_EAX;
          __asm
          {
            vmovd   xmm0, eax
            vmovd   xmm1, ecx
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm0, xmm8, xmm15, xmm2
            vcomiss xmm7, xmm0
            vandps  xmm6, xmm6, xmm9
            vandps  xmm0, xmm14, xmm9
            vcomiss xmm6, xmm0
          }
        }
      }
    }
    _RBX = (unsigned __int8)eType;
  }
  __asm
  {
    vmovaps xmm14, [rsp+220h+var_D0]
    vmovaps xmm13, [rsp+220h+var_C0]
    vmovaps xmm12, [rsp+220h+var_B0]
    vmovaps xmm11, [rsp+220h+var_A0]
    vmovaps xmm10, [rsp+220h+var_90]
    vmovaps xmm9, [rsp+220h+var_80]
    vmovaps xmm8, [rsp+220h+var_70]
    vmovaps xmm7, [rsp+220h+var_60]
    vmovaps xmm6, [rsp+220h+var_50]
    vmovaps xmm15, [rsp+220h+var_E0]
  }
}

/*
==============
Actor_BroadcastPointEvent
==============
*/
void Actor_BroadcastPointEvent(gentity_s *originator, ai_event_t eType, const bitarray<224> *teamFlags, const vec3_t *vOrigin)
{
  const bitarray<224> *v12; 
  unsigned int i; 
  sentient_s *sentient; 
  int v15; 
  bitarray<224> *j; 
  __int64 v17; 
  AIIterator *AIScriptedIterator; 
  __int64 v21; 
  gentity_s *v22; 
  AICommonInterface *v34; 
  int k; 
  gentity_s *Entity; 
  gentity_s *v43; 
  const gentity_s **p_ent; 
  AICommonInterface *m_pAI; 
  AICommonWrapper v66; 
  bitarray<224> result; 

  _R12 = vOrigin;
  if ( (unsigned __int8)(eType - 2) > 0xCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 404, ASSERT_TYPE_ASSERT, "(eType > AI_EV_FIRST_POINT_EVENT && eType < AI_EV_LAST_POINT_EVENT)", (const char *)&queryFormat, "eType > AI_EV_FIRST_POINT_EVENT && eType < AI_EV_LAST_POINT_EVENT") )
    __debugbreak();
  if ( !BG_AISystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 406, ASSERT_TYPE_ASSERT, "( BG_AISystemEnabled() )", (const char *)&queryFormat, "BG_AISystemEnabled()") )
    __debugbreak();
  v12 = teamFlags;
  for ( i = 0; i < 7; ++i )
  {
    if ( v12->array[0] )
      goto LABEL_18;
    v12 = (const bitarray<224> *)((char *)v12 + 4);
  }
  if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 415, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
    __debugbreak();
  sentient = originator->sentient;
  if ( sentient )
  {
    Sentient_EnemyTeamFlags(&result, sentient->eTeam);
    v15 = 0;
    for ( j = &result; !j->array[0]; j = (bitarray<224> *)((char *)j + 4) )
    {
      if ( (unsigned int)++v15 >= 7 )
        return;
    }
LABEL_18:
    v17 = (unsigned __int8)eType;
    if ( g_ai_event_info[(unsigned __int8)eType].variableRadius )
    {
      Actor_BroadcastVariableRadiusPointEvent(originator, eType, teamFlags, _R12);
    }
    else
    {
      __asm
      {
        vmovaps [rsp+168h+var_58], xmm6
        vmovaps [rsp+168h+var_68], xmm7
        vmovaps [rsp+168h+var_78], xmm8
      }
      *(double *)&_XMM0 = Actor_EventDefaultRadiusSqrd(eType);
      __asm { vmovaps xmm7, xmm0 }
      *(double *)&_XMM0 = Actor_EventBusyRadiusSqrd(eType);
      __asm { vmovaps xmm8, xmm0 }
      if ( BG_ActorOrAgentSystemEnabled() )
      {
        AIScriptedIterator = AIScriptedInterface::GetAIScriptedIterator();
        v21 = AIScriptedIterator->GetFirst(AIScriptedIterator);
        if ( v21 )
        {
          do
          {
            v22 = (gentity_s *)v21;
            v21 = (__int64)AIScriptedIterator->GetNext(AIScriptedIterator);
            if ( (v22 != originator || g_ai_event_info[(unsigned __int8)eType].notifySelf) && bitarray_base<bitarray<224>>::testBit((bitarray_base<bitarray<224> > *)teamFlags, v22->sentient->eTeam) )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [r12]
                vsubss  xmm3, xmm0, dword ptr [rbx+130h]
                vmovss  xmm1, dword ptr [r12+4]
                vmovss  xmm0, dword ptr [r12+8]
                vsubss  xmm2, xmm1, dword ptr [rbx+134h]
                vsubss  xmm4, xmm0, dword ptr [rbx+138h]
                vmulss  xmm2, xmm2, xmm2
                vmulss  xmm1, xmm3, xmm3
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm3, xmm2, xmm1
                vaddss  xmm6, xmm3, xmm0
              }
              AIWrapper::AIWrapper((AIWrapper *)&v66, v22);
              v34 = (AICommonInterface *)v66.m_botInterface.__vftable;
              if ( !v66.m_botInterface.__vftable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 453, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
                __debugbreak();
              LOBYTE(_EAX) = v34->m_pAI->threat.hasThreateningEnemy && AICommonInterface::GetTargetEntity(v34) != originator;
              _ECX = 0;
              _EAX = (unsigned __int8)_EAX;
              __asm
              {
                vmovd   xmm0, eax
                vmovd   xmm1, ecx
                vpcmpeqd xmm2, xmm0, xmm1
                vblendvps xmm0, xmm8, xmm7, xmm2
                vcomiss xmm6, xmm0
              }
              AICommonInterface::ReceivePointEvent(v34, originator, eType, _R12);
            }
          }
          while ( v21 );
          v17 = (unsigned __int8)eType;
        }
      }
      for ( k = Actor_EventListener_First(eType, teamFlags); k >= 0; k = Actor_EventListener_Next(k, eType, teamFlags) )
      {
        Entity = Actor_EventListener_GetEntity(k);
        v43 = Entity;
        if ( Entity != originator || g_ai_event_info[v17].notifySelf )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r12]
            vsubss  xmm3, xmm0, dword ptr [rax+130h]
            vmovss  xmm0, dword ptr [r12+8]
            vmovss  xmm1, dword ptr [r12+4]
            vsubss  xmm2, xmm1, dword ptr [rax+134h]
            vsubss  xmm4, xmm0, dword ptr [rax+138h]
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm1
          }
          p_ent = (const gentity_s **)&Entity->sentient->ai->ent;
          __asm
          {
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm6, xmm3, xmm0
          }
          if ( p_ent )
          {
            AIActorInterface::AIActorInterface(&v66.m_actorInterface);
            AIAgentInterface::AIAgentInterface(&v66.m_newAgentInterface);
            v66.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
            AICommonInterface::AICommonInterface(&v66.m_botInterface);
            v66.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
            AICommonInterface::AICommonInterface(&v66.m_botAgentInterface);
            v66.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
            v66.m_pAI = NULL;
            AICommonWrapper::Setup(&v66, *p_ent);
            m_pAI = v66.m_pAI;
            if ( !v66.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 474, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
              __debugbreak();
            LOBYTE(_EAX) = m_pAI->m_pAI->threat.hasThreateningEnemy && AICommonInterface::GetTargetEntity(m_pAI) != originator;
            _ECX = 0;
            _EAX = (unsigned __int8)_EAX;
            __asm
            {
              vmovd   xmm0, eax
              vmovd   xmm1, ecx
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm0, xmm8, xmm7, xmm2
              vcomiss xmm6, xmm0
            }
            Actor_EventListener_NotifyToListener(v43, originator, eType, _R12);
            if ( AI_IsLiveBot(v43) )
              AICommonInterface::ReceivePointEvent(m_pAI, originator, eType, _R12);
          }
        }
        v17 = (unsigned __int8)eType;
      }
      __asm
      {
        vmovaps xmm7, [rsp+168h+var_68]
        vmovaps xmm6, [rsp+168h+var_58]
        vmovaps xmm8, [rsp+168h+var_78]
      }
    }
  }
}

/*
==============
Actor_BroadcastTeamEvent
==============
*/
void Actor_BroadcastTeamEvent(sentient_s *sentient, ai_event_t eType)
{
  unsigned __int64 eTeam; 
  gentity_s *ent; 
  bitarray<224> teamFlags; 

  if ( !sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 294, ASSERT_TYPE_ASSERT, "(sentient)", (const char *)&queryFormat, "sentient") )
    __debugbreak();
  if ( !sentient->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 295, ASSERT_TYPE_ASSERT, "(sentient->ent)", (const char *)&queryFormat, "sentient->ent") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) || (sentient->eTeam & 5) != 5 )
  {
    eTeam = (unsigned int)sentient->eTeam;
    ent = sentient->ent;
    memset(&teamFlags, 0, sizeof(teamFlags));
    if ( (unsigned int)eTeam >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", eTeam, 224) )
      __debugbreak();
    teamFlags.array[eTeam >> 5] |= 0x80000000 >> (eTeam & 0x1F);
    Actor_BroadcastPointEvent(sentient->ent, eType, &teamFlags, &ent->r.currentOrigin);
  }
}

/*
==============
Actor_BroadcastVariableRadiusPointEvent
==============
*/
void Actor_BroadcastVariableRadiusPointEvent(gentity_s *originator, ai_event_t eType, const bitarray<224> *teamFlags, const vec3_t *vOrigin)
{
  const bitarray<224> *v9; 
  AIIterator *AIScriptedIterator; 
  __int64 v16; 
  const gentity_s *v17; 
  unsigned __int64 eTeam; 
  unsigned __int64 v19; 
  char v20; 
  AICommonInterface *p_m_newAgentInterface; 
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 
  int i; 
  gentity_s *Entity; 
  const gentity_s **p_ent; 
  AICommonInterface *m_pAI; 
  char v61; 
  char v62; 
  const gentity_s **v64; 
  AICommonInterface *v65; 
  __int64 v69; 
  __int64 v70; 
  AICommonWrapper v72; 
  void *retaddr; 

  _RAX = &retaddr;
  v9 = teamFlags;
  __asm { vmovaps xmmword ptr [rax-68h], xmm7 }
  _R13 = vOrigin;
  __asm { vmovaps xmmword ptr [rax-78h], xmm8 }
  if ( !BG_AISystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 326, ASSERT_TYPE_ASSERT, "( BG_AISystemEnabled() )", (const char *)&queryFormat, "BG_AISystemEnabled()") )
    __debugbreak();
  __asm { vmovaps xmmword ptr [rsp+140h+var_58+8], xmm6 }
  *(double *)&_XMM0 = Actor_EventDefaultRadiusSqrd(eType);
  __asm { vmovaps xmm7, xmm0 }
  *(double *)&_XMM0 = Actor_EventBusyRadiusSqrd(eType);
  __asm { vmovaps xmm8, xmm0 }
  if ( BG_ActorOrAgentSystemEnabled() )
  {
    AIScriptedIterator = AIScriptedInterface::GetAIScriptedIterator();
    v16 = AIScriptedIterator->GetFirst(AIScriptedIterator);
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = (const gentity_s *)v16;
        v16 = (__int64)AIScriptedIterator->GetNext(AIScriptedIterator);
        if ( v17 != originator || g_ai_event_info[(unsigned __int8)eType].notifySelf )
          break;
LABEL_36:
        v9 = teamFlags;
LABEL_37:
        if ( !v16 )
          goto LABEL_38;
      }
      eTeam = (unsigned int)v17->sentient->eTeam;
      if ( (unsigned int)eTeam >= 0xE0 )
      {
        LODWORD(v70) = 224;
        LODWORD(v69) = v17->sentient->eTeam;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v69, v70) )
          __debugbreak();
      }
      v19 = eTeam;
      v20 = eTeam;
      v9 = teamFlags;
      if ( ((0x80000000 >> (v20 & 0x1F)) & teamFlags->array[v19 >> 5]) == 0 )
        goto LABEL_37;
      __asm
      {
        vmovss  xmm0, dword ptr [r13+0]
        vsubss  xmm3, xmm0, dword ptr [rdi+130h]
        vmovss  xmm1, dword ptr [r13+4]
        vmovss  xmm0, dword ptr [r13+8]
        vsubss  xmm2, xmm1, dword ptr [rdi+134h]
        vsubss  xmm4, xmm0, dword ptr [rdi+138h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm6, xmm3, xmm0
      }
      AIActorInterface::AIActorInterface(&v72.m_actorInterface);
      AIAgentInterface::AIAgentInterface(&v72.m_newAgentInterface);
      v72.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
      v72.m_botInterface.__vftable = NULL;
      p_m_newAgentInterface = NULL;
      if ( v17->agent )
      {
        if ( SV_Agent_IsScripted(v17->s.number) )
        {
          ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(v17);
          if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
            __debugbreak();
          if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
            __debugbreak();
          AINewAgentInterface::SetAgent(&v72.m_newAgentInterface, ScriptedAgentInfo);
          v72.m_botInterface.__vftable = (AIBotInterface_vtbl *)&v72.m_newAgentInterface;
          p_m_newAgentInterface = &v72.m_newAgentInterface;
LABEL_30:
          LOBYTE(_EAX) = p_m_newAgentInterface->m_pAI->threat.hasThreateningEnemy && AICommonInterface::GetTargetEntity(p_m_newAgentInterface) != originator;
          _ECX = 0;
          _EAX = (unsigned __int8)_EAX;
          __asm
          {
            vmovd   xmm1, ecx
            vmovd   xmm0, eax
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm3, xmm8, xmm7, xmm2; defaultRadiusSqrd
          }
          *(double *)&_XMM0 = AICommonInterface::EventVariableRadiusSqrd(p_m_newAgentInterface, originator, eType, *(float *)&_XMM3);
          __asm { vcomiss xmm6, xmm0 }
          if ( v61 | v62 )
            AICommonInterface::ReceivePointEvent(p_m_newAgentInterface, originator, eType, _R13);
          goto LABEL_36;
        }
        p_m_newAgentInterface = (AICommonInterface *)v72.m_botInterface.__vftable;
      }
      actor = v17->actor;
      if ( actor )
      {
        if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
          __debugbreak();
        AIActorInterface::SetActor(&v72.m_actorInterface, v17->actor);
        p_m_newAgentInterface = (AICommonInterface *)&v72;
        v72.m_botInterface.__vftable = (AIBotInterface_vtbl *)&v72;
      }
      if ( !p_m_newAgentInterface && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 348, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
        __debugbreak();
      goto LABEL_30;
    }
  }
LABEL_38:
  for ( i = Actor_EventListener_First(eType, v9); i >= 0; i = Actor_EventListener_Next(i, eType, teamFlags) )
  {
    Entity = Actor_EventListener_GetEntity(i);
    if ( !Entity->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 362, ASSERT_TYPE_ASSERT, "( ent->sentient )", (const char *)&queryFormat, "ent->sentient") )
      __debugbreak();
    if ( Entity != originator || g_ai_event_info[(unsigned __int8)eType].notifySelf )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r13+0]
        vsubss  xmm3, xmm0, dword ptr [rbx+130h]
        vmovss  xmm1, dword ptr [r13+4]
        vmovss  xmm0, dword ptr [r13+8]
        vsubss  xmm2, xmm1, dword ptr [rbx+134h]
        vsubss  xmm4, xmm0, dword ptr [rbx+138h]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
      }
      p_ent = (const gentity_s **)&Entity->sentient->ai->ent;
      __asm
      {
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm6, xmm3, xmm0
      }
      if ( p_ent )
      {
        AIActorInterface::AIActorInterface(&v72.m_actorInterface);
        AIAgentInterface::AIAgentInterface(&v72.m_newAgentInterface);
        v72.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
        AICommonInterface::AICommonInterface(&v72.m_botInterface);
        v72.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
        AICommonInterface::AICommonInterface(&v72.m_botAgentInterface);
        v72.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
        v72.m_pAI = NULL;
        AICommonWrapper::Setup(&v72, *p_ent);
        m_pAI = v72.m_pAI;
        if ( !v72.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 371, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
          __debugbreak();
        LOBYTE(_EAX) = m_pAI->m_pAI->threat.hasThreateningEnemy && AICommonInterface::GetTargetEntity(m_pAI) != originator;
        _ESI = 0;
        _EAX = (unsigned __int8)_EAX;
        __asm
        {
          vmovd   xmm1, esi
          vmovd   xmm0, eax
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm3, xmm8, xmm7, xmm2; defaultRadiusSqrd
        }
        *(double *)&_XMM0 = AICommonInterface::EventVariableRadiusSqrd(m_pAI, originator, eType, *(float *)&_XMM3);
      }
      else
      {
        __asm { vmovaps xmm0, xmm7 }
        v61 = 0;
        v62 = 1;
      }
      __asm { vcomiss xmm6, xmm0 }
      if ( v61 | v62 )
      {
        Actor_EventListener_NotifyToListener(Entity, originator, eType, _R13);
        if ( AI_IsLiveBot(Entity) )
        {
          v64 = (const gentity_s **)&Entity->sentient->ai->ent;
          AIActorInterface::AIActorInterface(&v72.m_actorInterface);
          AIAgentInterface::AIAgentInterface(&v72.m_newAgentInterface);
          v72.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
          AICommonInterface::AICommonInterface(&v72.m_botInterface);
          v72.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
          AICommonInterface::AICommonInterface(&v72.m_botAgentInterface);
          v65 = NULL;
          v72.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
          v72.m_pAI = NULL;
          if ( v64 )
          {
            AICommonWrapper::Setup(&v72, *v64);
            v65 = v72.m_pAI;
          }
          if ( !v65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 386, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
            __debugbreak();
          AICommonInterface::ReceivePointEvent(v65, originator, eType, _R13);
        }
      }
    }
  }
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+140h+var_58+8]
    vmovaps xmm7, [rsp+140h+var_68+8]
    vmovaps xmm8, [rsp+140h+var_78+8]
  }
}

/*
==============
Actor_BroadcastVolumeEvent
==============
*/
void Actor_BroadcastVolumeEvent(gentity_s *originator, ai_event_t eType, const bitarray<224> *teamFlags, gentity_s *volumeEnt, float radius)
{
  const bitarray<224> *v7; 
  unsigned int v10; 
  const bitarray<224> *v11; 
  sentient_s *sentient; 
  int v13; 
  bitarray<224> *i; 
  AIIterator *AIScriptedIterator; 
  __int64 v18; 
  gentity_s *v19; 
  unsigned __int64 eTeam; 
  unsigned int Instance; 
  char v34; 
  AICommonInterface *v35; 
  int j; 
  gentity_s *Entity; 
  unsigned int v38; 
  const gentity_s **p_ent; 
  AICommonInterface *m_pAI; 
  __int64 v54; 
  __int64 v55; 
  AICommonWrapper v57; 
  bitarray<224> result; 

  v7 = teamFlags;
  if ( eType != AI_EV_BADPLACE_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 741, ASSERT_TYPE_ASSERT, "(eType > AI_EV_FIRST_VOLUME_EVENT && eType < AI_EV_LAST_VOLUME_EVENT)", (const char *)&queryFormat, "eType > AI_EV_FIRST_VOLUME_EVENT && eType < AI_EV_LAST_VOLUME_EVENT") )
    __debugbreak();
  if ( !BG_AISystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 743, ASSERT_TYPE_ASSERT, "( BG_AISystemEnabled() )", (const char *)&queryFormat, "BG_AISystemEnabled()") )
    __debugbreak();
  v10 = 0;
  v11 = v7;
  do
  {
    if ( v11->array[0] )
      goto LABEL_18;
    ++v10;
    v11 = (const bitarray<224> *)((char *)v11 + 4);
  }
  while ( v10 < 7 );
  if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 747, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
    __debugbreak();
  sentient = originator->sentient;
  if ( sentient )
  {
    Sentient_EnemyTeamFlags(&result, sentient->eTeam);
    v13 = 0;
    for ( i = &result; !i->array[0]; i = (bitarray<224> *)((char *)i + 4) )
    {
      if ( (unsigned int)++v13 >= 7 )
        return;
    }
LABEL_18:
    __asm
    {
      vmovss  xmm0, [rsp+158h+radius]
      vmovaps [rsp+158h+var_58], xmm6
      vmulss  xmm6, xmm0, xmm0
    }
    if ( BG_ActorOrAgentSystemEnabled() )
    {
      AIScriptedIterator = AIScriptedInterface::GetAIScriptedIterator();
      v18 = AIScriptedIterator->GetFirst(AIScriptedIterator);
      while ( v18 )
      {
        v19 = (gentity_s *)v18;
        v18 = (__int64)AIScriptedIterator->GetNext(AIScriptedIterator);
        if ( v19 != originator || g_ai_event_info[(unsigned __int8)eType].notifySelf )
        {
          eTeam = (unsigned int)v19->sentient->eTeam;
          if ( (unsigned int)eTeam >= 0xE0 )
          {
            LODWORD(v55) = 224;
            LODWORD(v54) = v19->sentient->eTeam;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v54, v55) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (eTeam & 0x1F)) & teamFlags->array[eTeam >> 5]) != 0 )
          {
            Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, volumeEnt);
            _RDX = &v19->r.currentOrigin;
            __asm
            {
              vmovss  xmm0, dword ptr [rdx]
              vsubss  xmm3, xmm0, dword ptr [r13+130h]
              vmovss  xmm1, dword ptr [rdx+4]
              vsubss  xmm2, xmm1, dword ptr [r13+134h]
              vmovss  xmm0, dword ptr [rdx+8]
              vsubss  xmm4, xmm0, dword ptr [r13+138h]
              vmulss  xmm2, xmm2, xmm2
              vmulss  xmm1, xmm3, xmm3
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm1
              vaddss  xmm2, xmm3, xmm0
              vcomiss xmm2, xmm6
            }
            if ( v34 )
            {
              if ( PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, _RDX, Instance, volumeEnt) )
              {
                AIWrapper::AIWrapper((AIWrapper *)&v57, v19);
                v35 = (AICommonInterface *)v57.m_botInterface.__vftable;
                if ( !v57.m_botInterface.__vftable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 784, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
                  __debugbreak();
                AICommonInterface::ReceiveVolumeEvent(v35, originator, eType);
              }
            }
          }
        }
      }
      v7 = teamFlags;
    }
    for ( j = Actor_EventListener_First(eType, v7); j >= 0; j = Actor_EventListener_Next(j, eType, v7) )
    {
      Entity = Actor_EventListener_GetEntity(j);
      if ( Entity != originator || g_ai_event_info[(unsigned __int8)eType].notifySelf )
      {
        v38 = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, volumeEnt);
        _RDX = &Entity->r.currentOrigin;
        __asm
        {
          vmovss  xmm0, dword ptr [rdx]
          vsubss  xmm3, xmm0, dword ptr [r13+130h]
          vmovss  xmm1, dword ptr [rdx+4]
          vsubss  xmm2, xmm1, dword ptr [r13+134h]
          vmovss  xmm0, dword ptr [rdx+8]
          vsubss  xmm4, xmm0, dword ptr [r13+138h]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vcomiss xmm2, xmm6
        }
        if ( v34 )
        {
          if ( PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, _RDX, v38, volumeEnt) )
          {
            Actor_EventListener_NotifyToListener(Entity, originator, eType, &volumeEnt->r.currentOrigin);
            if ( AI_IsLiveBot(Entity) )
            {
              p_ent = (const gentity_s **)&Entity->sentient->ai->ent;
              AIActorInterface::AIActorInterface(&v57.m_actorInterface);
              AIAgentInterface::AIAgentInterface(&v57.m_newAgentInterface);
              v57.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
              AICommonInterface::AICommonInterface(&v57.m_botInterface);
              v57.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
              AICommonInterface::AICommonInterface(&v57.m_botAgentInterface);
              m_pAI = NULL;
              v57.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
              v57.m_pAI = NULL;
              if ( p_ent )
              {
                AICommonWrapper::Setup(&v57, *p_ent);
                m_pAI = v57.m_pAI;
              }
              if ( !m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 812, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
                __debugbreak();
              AICommonInterface::ReceiveVolumeEvent(m_pAI, originator, eType);
            }
          }
        }
      }
    }
    __asm { vmovaps xmm6, [rsp+158h+var_58] }
  }
}

/*
==============
Actor_EventBusyRadiusSqrd
==============
*/
float Actor_EventBusyRadiusSqrd(ai_event_t eType)
{
  __int64 v1; 

  v1 = (unsigned __int8)eType;
  if ( !g_ai_event_info[(unsigned __int8)eType].busyDistDvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 105, ASSERT_TYPE_ASSERT, "(g_ai_event_info[eType].busyDistDvar)", (const char *)&queryFormat, "g_ai_event_info[eType].busyDistDvar") )
    __debugbreak();
  _RBX = *g_ai_event_info[v1].busyDistDvar;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 108, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm0, xmm0, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
Actor_EventDefaultRadiusSqrd
==============
*/
float Actor_EventDefaultRadiusSqrd(ai_event_t eType)
{
  __int64 v1; 

  v1 = (unsigned __int8)eType;
  if ( !g_ai_event_info[(unsigned __int8)eType].defaultDistDvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 91, ASSERT_TYPE_ASSERT, "(g_ai_event_info[eType].defaultDistDvar)", (const char *)&queryFormat, "g_ai_event_info[eType].defaultDistDvar") )
    __debugbreak();
  _RBX = *g_ai_event_info[v1].defaultDistDvar;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 94, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm0, xmm0, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
Actor_EventForName
==============
*/
ai_event_t Actor_EventForName(const char *name)
{
  __int64 v2; 
  const char *v3; 
  __int64 v4; 
  const char *v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 

  v2 = 0i64;
  while ( 1 )
  {
    v3 = g_ai_event_info[v2].name;
    if ( v3 )
      break;
LABEL_16:
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= 0x1E )
      return 0;
  }
  v4 = 0x7FFFFFFFi64;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = (const char *)(name - v3);
  do
  {
    v6 = (unsigned __int8)v3[(_QWORD)v5];
    v7 = v4;
    v8 = *(unsigned __int8 *)v3++;
    --v4;
    if ( !v7 )
      break;
    if ( v6 != v8 )
    {
      v9 = v6 + 32;
      if ( (unsigned int)(v6 - 65) > 0x19 )
        v9 = v6;
      v6 = v9;
      v10 = v8 + 32;
      if ( (unsigned int)(v8 - 65) > 0x19 )
        v10 = v8;
      if ( v6 != v10 )
        goto LABEL_16;
    }
  }
  while ( v6 );
  return (char)v2;
}

/*
==============
AICommonInterface::EventBullet
==============
*/
void AICommonInterface::EventBullet(AICommonInterface *this, gentity_s *originator, const vec3_t *vStart, const vec3_t *vEnd, const vec3_t *vClosest, PARM_SUPPRESSION suppression, unsigned __int8 reason)
{
  sentient_s *sentient; 
  sentient_s *RemoteVehicleSentient; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1230, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1231, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1232, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
    __debugbreak();
  sentient = originator->sentient;
  this->EnterAlertState(this);
  if ( sentient )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
    {
      RemoteVehicleSentient = Sentient_GetRemoteVehicleSentient(sentient);
      if ( RemoteVehicleSentient )
        sentient = RemoteVehicleSentient;
    }
    AICommonInterface::WasAttackedBy(this, sentient);
    this->GetPerfectInfo(this, sentient, reason);
    if ( suppression == DO_SUPPRESSION )
      this->AddSuppressionLine(this, sentient, vStart, vEnd, vClosest);
  }
}

/*
==============
AICommonInterface::EventDeath
==============
*/
void AICommonInterface::EventDeath(AICommonInterface *this, sentient_s *pCasualty, sentient_s *pAttacker, unsigned __int8 reason)
{
  const tacpoint_t *v9; 
  const tacpoint_t *v10; 
  team_t eTeam; 
  char v30; 

  __asm { vmovaps [rsp+88h+var_48], xmm6 }
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1004, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1005, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !pCasualty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1006, ASSERT_TYPE_ASSERT, "(pCasualty)", (const char *)&queryFormat, "pCasualty") )
    __debugbreak();
  if ( !pAttacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1007, ASSERT_TYPE_ASSERT, "(pAttacker)", (const char *)&queryFormat, "pAttacker") )
    __debugbreak();
  this->ReactToDanger(this);
  v9 = Sentient_NearestTacPoint(this->m_pAI->sentient);
  v10 = Sentient_NearestTacPoint(pAttacker);
  if ( v9 && v10 && TacVisGraph_HasVis(v9, v10) && AICommonInterface::CanSeeEntity(this, pAttacker->ent) )
    this->GetPerfectInfo(this, pAttacker, reason);
  _RBP = DVARFLT_ai_teamDeathListenRadius;
  _RCX = this->m_pAI->ent;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+130h]
    vsubss  xmm3, xmm0, dword ptr [rax+130h]
    vmovss  xmm1, dword ptr [rcx+134h]
    vmovss  xmm0, dword ptr [rcx+138h]
    vsubss  xmm2, xmm1, dword ptr [rax+134h]
    vsubss  xmm4, xmm0, dword ptr [rax+138h]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm6, xmm3, xmm0
  }
  if ( !DVARFLT_ai_teamDeathListenRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_teamDeathListenRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBP);
  eTeam = this->m_pAI->sentient->eTeam;
  if ( pCasualty->eTeam == eTeam )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+28h]
      vmulss  xmm1, xmm0, xmm0
      vcomiss xmm6, xmm1
    }
    if ( pCasualty->eTeam <= (unsigned int)eTeam )
      this->ReactToTeamDeath(this, pCasualty, pAttacker);
  }
  _RDI = DVARFLT_ai_teamDeathRetreatDistance;
  if ( !DVARFLT_ai_teamDeathRetreatDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_teamDeathRetreatDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmulss  xmm1, xmm0, xmm0
    vcomiss xmm6, xmm1
  }
  if ( v30 )
    this->UpdateRetreat(this);
  __asm { vmovaps xmm6, [rsp+88h+var_48] }
}

/*
==============
AICommonInterface::EventExplosion
==============
*/
void AICommonInterface::EventExplosion(AICommonInterface *this, gentity_s *originator, const vec3_t *vOrigin, unsigned __int8 reason)
{
  ai_common_t *m_pAI; 
  sentient_s *sentient; 
  sentient_s *v10; 
  bool v11; 
  unsigned int v15; 
  scrContext_t *v27; 
  scrContext_t *v28; 
  bitarray<224> result; 

  _RDI = originator;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1085, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1086, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( !m_pAI->threat.ignoreExplosionEvents )
  {
    if ( _RDI )
    {
      sentient = _RDI->sentient;
      if ( sentient )
      {
        v10 = m_pAI->sentient;
        if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 258, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
          __debugbreak();
        if ( level.teammode == TEAMMODE_FFA )
        {
          v11 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
            _RAX = Com_TeamsSP_GetAllCombatTeamFlags();
          else
            _RAX = Com_TeamsMP_GetAllTeamFlags();
          __asm
          {
            vmovups xmm0, xmmword ptr [rax]
            vmovsd  xmm1, qword ptr [rax+10h]
          }
          v15 = _RAX->array[6] & 0xFFEFFFFF;
          __asm
          {
            vmovups xmmword ptr [rsp+98h+result.array], xmm0
            vmovsd  qword ptr [rsp+98h+result.array+10h], xmm1
          }
          if ( v11 )
            result.array[0] &= ~0x8000000u;
          result.array[6] = v15 & 0xFF9FFFFF;
        }
        else
        {
          Com_Teams_GetEnemyTeamFlags(&result, sentient->eTeam);
        }
        if ( bitarray_base<bitarray<224>>::testBit(&result, v10->eTeam) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+130h]
            vmovss  xmm1, dword ptr [rdi+134h]
            vsubss  xmm2, xmm1, dword ptr [rcx+134h]
            vsubss  xmm4, xmm0, dword ptr [rcx+130h]
            vmovss  xmm0, dword ptr [rdi+138h]
            vsubss  xmm3, xmm0, dword ptr [rcx+138h]
            vmulss  xmm1, xmm2, xmm2
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm2, xmm2, xmm1
            vcomiss xmm2, cs:__real@48800000
          }
          AICommonInterface::UpdateLastKnownPos(this, _RDI->sentient, vOrigin, reason);
        }
      }
    }
    this->EnterAlertState(this);
  }
  v27 = ScriptContext_Server();
  v28 = v27;
  if ( _RDI )
    GScr_AddEntity(_RDI);
  else
    Scr_AddUndefined(v27);
  Scr_AddVector(v28, vOrigin->v);
  GScr_Notify(this->m_pAI->ent, scr_const.explode, 2u);
}

/*
==============
AICommonInterface::EventFootstep
==============
*/
void AICommonInterface::EventFootstep(AICommonInterface *this, sentient_s *originator, const vec3_t *vOrigin, unsigned __int8 reason)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 923, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 924, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
    __debugbreak();
  this->GetPerfectInfo(this, originator, reason);
}

/*
==============
AICommonInterface::EventGlassDestroyed
==============
*/
void AICommonInterface::EventGlassDestroyed(AICommonInterface *this, gentity_s *originator, const vec3_t *glassPos, unsigned __int8 reason)
{
  const tacpoint_t *ClosestPoint; 
  const tacpoint_t *v8; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1262, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1263, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1264, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  ClosestPoint = TacGraph_FindClosestPoint(glassPos);
  v8 = Sentient_NearestTacPoint(this->m_pAI->sentient);
  if ( ClosestPoint && v8 && TacVisGraph_HasVis(ClosestPoint, v8) )
    this->EnterAlertState(this);
}

/*
==============
AICommonInterface::EventGrenadePing
==============
*/
void AICommonInterface::EventGrenadePing(AICommonInterface *this, gentity_s *originator, const vec3_t *vOrigin, __int64 reason)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1124, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1125, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1126, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
    __debugbreak();
  ((void (__fastcall *)(AICommonInterface *, gentity_s *, const vec3_t *, __int64))this->Grenade_Ping)(this, originator, vOrigin, reason);
}

/*
==============
AICommonInterface::EventGunshot
==============
*/
void AICommonInterface::EventGunshot(AICommonInterface *this, sentient_s *originator, const vec3_t *vOrigin, unsigned __int8 reason)
{
  sentient_s *v5; 
  sentient_s *RemoteVehicleSentient; 

  v5 = originator;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1158, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1159, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
    __debugbreak();
  ((void (__fastcall *)(AICommonInterface *, sentient_s *, const vec3_t *))this->EnterAlertState)(this, originator, vOrigin);
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
  {
    RemoteVehicleSentient = Sentient_GetRemoteVehicleSentient(v5);
    if ( RemoteVehicleSentient )
      v5 = RemoteVehicleSentient;
  }
  if ( AICommonInterface::CaresAboutInfo(this, v5) )
  {
    this->GetPerfectInfo(this, v5, reason);
  }
  else if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
  {
    if ( SV_BotIsBotEnt(this->m_pAI->ent) )
      SV_BotPerfectInfoIgnored(this->m_pAI, v5, reason);
  }
}

/*
==============
AICommonInterface::EventGunshotTeammate
==============
*/
char AICommonInterface::EventGunshotTeammate(AICommonInterface *this, sentient_s *originator, const vec3_t *vOrigin, unsigned __int8 reason)
{
  ai_common_t *ai; 
  const gentity_s *ent; 
  AICommonInterface *m_pAI; 
  sentient_s *TargetSentient; 
  sentient_s *v11; 
  ai_common_t *v12; 
  actor_s *actor; 
  actor_s *v14; 
  int v15; 
  void (__fastcall *SentientInfo_Copy)(AICommonInterface *, ai_common_t *, int, unsigned __int8); 
  unsigned int v18; 
  AICommonWrapper v19; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1190, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1191, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
    __debugbreak();
  ((void (__fastcall *)(AICommonInterface *, sentient_s *, const vec3_t *))this->EnterAlertState)(this, originator, vOrigin);
  ai = originator->ai;
  if ( !ai )
    return 0;
  ent = ai->ent;
  AIActorInterface::AIActorInterface(&v19.m_actorInterface);
  AIAgentInterface::AIAgentInterface(&v19.m_newAgentInterface);
  v19.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  AICommonInterface::AICommonInterface(&v19.m_botInterface);
  v19.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
  AICommonInterface::AICommonInterface(&v19.m_botAgentInterface);
  v19.m_pAI = NULL;
  v19.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
  AICommonWrapper::Setup(&v19, ent);
  m_pAI = v19.m_pAI;
  if ( !v19.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1203, ASSERT_TYPE_ASSERT, "(pTeammate)", (const char *)&queryFormat, "pTeammate") )
    __debugbreak();
  TargetSentient = AICommonInterface::GetTargetSentient(m_pAI);
  v11 = TargetSentient;
  if ( !TargetSentient || !AICommonInterface::CaresAboutInfo(m_pAI, TargetSentient) )
    return 0;
  v12 = this->m_pAI;
  actor = v12->ent->actor;
  if ( actor && (v14 = ai->ent->actor) != NULL )
  {
    v15 = truncate_cast<int,__int64>(v11 - level.sentients);
    AIActorInterface::SentientInfo_Copy(actor, v14, v15, reason);
    return 1;
  }
  else
  {
    if ( v12->ent->client )
    {
      SentientInfo_Copy = this->SentientInfo_Copy;
      v18 = truncate_cast<int,__int64>(v11 - level.sentients);
      SentientInfo_Copy(this, ai, v18, reason);
    }
    return 1;
  }
}

/*
==============
AICommonInterface::EventNewEnemy
==============
*/
void AICommonInterface::EventNewEnemy(AICommonInterface *this, sentient_s *originator, unsigned __int8 reason)
{
  unsigned __int16 number; 
  __int64 v7; 
  unsigned int v8; 
  int v9; 
  __int64 v10; 
  sentient_s *sentient; 
  int v12; 
  void (__fastcall *SentientInfo_Copy)(AICommonInterface *, ai_common_t *, int, unsigned __int8); 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 939, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 940, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
    __debugbreak();
  if ( !originator->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 941, ASSERT_TYPE_ASSERT, "(originator->ent)", (const char *)&queryFormat, "originator->ent") )
    __debugbreak();
  number = originator->targetEnt.number;
  if ( !number )
    goto LABEL_53;
  v7 = number;
  v8 = number - 1;
  if ( v8 >= 0x800 )
  {
    LODWORD(v15) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v7 - 1].r.isInUse != g_entityIsInUse[v7 - 1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v7 - 1] )
  {
    LODWORD(v16) = originator->targetEnt.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v16) )
      __debugbreak();
  }
  if ( !originator->targetEnt.number )
  {
LABEL_53:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 942, ASSERT_TYPE_ASSERT, "(originator->targetEnt.isDefined())", (const char *)&queryFormat, "originator->targetEnt.isDefined()") )
      __debugbreak();
  }
  v9 = originator->targetEnt.number;
  if ( (unsigned int)(v9 - 1) >= 0x7FF )
  {
    LODWORD(v16) = 2047;
    LODWORD(v15) = v9 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  v10 = originator->targetEnt.number;
  if ( (unsigned int)(v10 - 1) >= 0x800 )
  {
    LODWORD(v16) = 2048;
    LODWORD(v15) = v10 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v10 - 1].r.isInUse != g_entityIsInUse[v10 - 1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v10 - 1] )
  {
    LODWORD(v16) = originator->targetEnt.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v16) )
      __debugbreak();
  }
  if ( !g_entities[originator->targetEnt.number - 1].sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 943, ASSERT_TYPE_ASSERT, "(originator->targetEnt.ent()->sentient)", (const char *)&queryFormat, "originator->targetEnt.ent()->sentient") )
    __debugbreak();
  sentient = EntHandle::ent(&originator->targetEnt)->sentient;
  if ( sentient && originator->ai )
  {
    if ( originator->ent->actor && this->m_pAI->ent->actor )
    {
      v12 = truncate_cast<int,__int64>(sentient - level.sentients);
      AIActorInterface::SentientInfo_Copy(this->m_pAI->ent->actor, originator->ent->actor, v12, reason);
    }
    else
    {
      SentientInfo_Copy = this->SentientInfo_Copy;
      v14 = truncate_cast<int,__int64>(sentient - level.sentients);
      SentientInfo_Copy(this, originator->ai, v14, reason);
    }
  }
  else
  {
    this->GetPerfectInfo(this, sentient, reason);
  }
}

/*
==============
AICommonInterface::EventPain
==============
*/
void AICommonInterface::EventPain(AICommonInterface *this, sentient_s *pCasualty, sentient_s *pAttacker, unsigned __int8 reason)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 984, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 985, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !pCasualty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 986, ASSERT_TYPE_ASSERT, "(pCasualty)", (const char *)&queryFormat, "pCasualty") )
    __debugbreak();
  if ( !pAttacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 987, ASSERT_TYPE_ASSERT, "(pAttacker)", (const char *)&queryFormat, "pAttacker") )
    __debugbreak();
  this->ReactToDanger(this);
  AICommonInterface::WasAttackedBy(this, pAttacker);
  this->GetPerfectInfo(this, pAttacker, reason);
}

/*
==============
AICommonInterface::EventProjectilePing
==============
*/
void AICommonInterface::EventProjectilePing(AICommonInterface *this, gentity_s *originator, const vec3_t *vOrigin, __int64 reason)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1141, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1142, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1143, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
    __debugbreak();
  ((void (__fastcall *)(AICommonInterface *, gentity_s *, const vec3_t *, __int64))this->Projectile_Ping)(this, originator, vOrigin, reason);
}

/*
==============
AICommonInterface::EventVariableRadiusSqrd
==============
*/

float __fastcall AICommonInterface::EventVariableRadiusSqrd(AICommonInterface *this, gentity_s *originator, ai_event_t eType, double defaultRadiusSqrd)
{
  playerState_s *EntityPlayerState; 
  playerState_s *v17; 
  const dvar_t *v19; 
  const char *v20; 
  bool v21; 
  bool HasPerk; 
  char v24; 
  sentient_s *sentient; 
  team_t eTeam; 
  const dvar_t *v27; 

  __asm
  {
    vmovaps [rsp+78h+var_38], xmm7
    vmovaps xmm7, xmm3
  }
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 133, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  switch ( eType )
  {
    case AI_EV_FOOTSTEP:
      _RAX = this->m_pAI;
      __asm { vmovss  xmm2, dword ptr [rax+48h] }
      break;
    case AI_EV_FOOTSTEP_WALK:
      _RAX = this->m_pAI;
      __asm { vmovss  xmm2, dword ptr [rax+4Ch] }
      break;
    case AI_EV_FOOTSTEP_SPRINT:
      _RAX = this->m_pAI;
      __asm { vmovss  xmm2, dword ptr [rax+50h] }
      break;
    default:
      goto LABEL_11;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcmpneqss xmm1, xmm2, xmm0
    vblendvps xmm7, xmm7, xmm2, xmm1
  }
LABEL_11:
  if ( (unsigned __int8)(eType - 2) > 2u )
  {
    __asm { vmovaps xmm0, xmm7 }
  }
  else
  {
    __asm { vmovaps [rsp+78h+var_28], xmm6 }
    if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 156, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
      __debugbreak();
    if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 157, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
      __debugbreak();
    EntityPlayerState = G_GetEntityPlayerState(originator);
    v17 = G_GetEntityPlayerState(this->m_pAI->ent);
    __asm { vmovss  xmm6, cs:__real@3f800000 }
    if ( EntityPlayerState && BG_HasPerk(&EntityPlayerState->perks, 0x1Fu) )
    {
      if ( originator->client )
      {
        v19 = DCONST_DVARFLT_perk_footstepActorNotifyVolumeQuietPlayer;
        v20 = "perk_footstepActorNotifyVolumeQuietPlayer";
      }
      else
      {
        v19 = DCONST_DVARFLT_perk_footstepActorNotifyVolumeQuietNPC;
        v20 = "perk_footstepActorNotifyVolumeQuietNPC";
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v19, v20);
      __asm { vmovaps xmm6, xmm0 }
    }
    v21 = v17 == NULL;
    if ( v17 )
    {
      HasPerk = BG_HasPerk(&v17->perks, 0x28u);
      v21 = !HasPerk;
      if ( HasPerk )
      {
        _RBX = DVARFLT_perk_footstepVolumeSelectiveHearingMin;
        if ( !DVARFLT_perk_footstepVolumeSelectiveHearingMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_footstepVolumeSelectiveHearingMin") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vcomiss xmm6, dword ptr [rbx+28h] }
        if ( v24 )
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_perk_footstepVolumeSelectiveHearingMin, "perk_footstepVolumeSelectiveHearingMin");
          __asm { vmovaps xmm6, xmm0 }
        }
        sentient = originator->sentient;
        if ( sentient && (eTeam = sentient->eTeam) != TEAM_ZERO && eTeam == this->m_pAI->sentient->eTeam )
        {
          Dvar_GetFloat_Internal_DebugName(DVARFLT_perk_footstepVolumeAlly, "perk_footstepVolumeAlly");
          __asm { vmulss  xmm6, xmm6, xmm0 }
        }
        else
        {
          v27 = DVARFLT_perk_footstepVolumeEnemy;
          if ( !DVARFLT_perk_footstepVolumeEnemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_footstepVolumeEnemy") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v27);
          __asm { vmulss  xmm6, xmm6, dword ptr [rbx+28h] }
        }
      }
    }
    __asm { vucomiss xmm6, cs:__real@3f800000 }
    if ( v21 )
    {
      __asm { vmovaps xmm0, xmm7 }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm6, xmm7
        vmulss  xmm0, xmm0, xmm6
      }
    }
    __asm { vmovaps xmm6, [rsp+78h+var_28] }
  }
  __asm { vmovaps xmm7, [rsp+78h+var_38] }
  return *(float *)&_XMM0;
}

/*
==============
AIScriptedInterface::ReactToDanger
==============
*/
void AIScriptedInterface::ReactToDanger(AIScriptedInterface *this)
{
  int frameDuration; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 967, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( this->m_pAI->nodeSelect.doDangerReact )
  {
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    frameDuration = level.frameDuration;
    this->m_pAI->nodeSelect.dangerReactGoalTime = level.time + frameDuration * (G_rand() % 2);
  }
}

/*
==============
AIScriptedInterface::ReactToTeamDeath
==============
*/
void AIScriptedInterface::ReactToTeamDeath(AIScriptedInterface *this, sentient_s *pCasualty, sentient_s *pAttacker)
{
  ai_scripted_t *m_pAI; 
  gentity_s *ent; 
  char v31; 
  int v32; 
  AILookAtType v33; 
  __int64 v36; 
  float v37; 
  vec3_t worldPos; 
  vec3_t forward; 

  __asm
  {
    vmovaps [rsp+0A8h+var_28], xmm6
    vmovaps [rsp+0A8h+var_38], xmm7
  }
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1044, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1045, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !pCasualty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1046, ASSERT_TYPE_ASSERT, "(pCasualty)", (const char *)&queryFormat, "pCasualty") )
    __debugbreak();
  if ( !pAttacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1047, ASSERT_TYPE_ASSERT, "(pAttacker)", (const char *)&queryFormat, "pAttacker") )
    __debugbreak();
  m_pAI = this->m_pAI;
  ent = pAttacker->ent;
  _RAX = m_pAI->ent;
  __asm
  {
    vmovsd  xmm0, qword ptr [rax+130h]
    vmovsd  [rsp+0A8h+var_78], xmm0
  }
  v37 = _RAX->r.currentOrigin.v[2];
  _RAX = pCasualty->ent;
  __asm
  {
    vmovsd  xmm0, qword ptr [rax+130h]
    vmovsd  qword ptr [rsp+0A8h+worldPos], xmm0
  }
  worldPos.v[2] = _RAX->r.currentOrigin.v[2];
  EntHandle::setEnt(&m_pAI->lastTeamKillerEnemy, ent);
  this->m_pAI->lastNearbyTeammateKilledTime = level.time;
  this->AddSuppressionLine(this, pAttacker, &pAttacker->ent->r.currentOrigin, (const vec3_t *)&v36, (const vec3_t *)&v36);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0A8h+worldPos]
    vsubss  xmm5, xmm0, dword ptr [rsp+0A8h+var_78]
    vmovss  xmm1, dword ptr [rsp+0A8h+worldPos+4]
    vsubss  xmm4, xmm1, dword ptr [rsp+0A8h+var_78+4]
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm2, xmm4, xmm4
    vaddss  xmm1, xmm2, xmm0
    vsqrtss xmm3, xmm1, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm7, xmm5, xmm1
    vmulss  xmm6, xmm4, xmm1
  }
  AngleVectors(&this->m_pAI->ent->r.currentAngles, &forward, NULL, NULL);
  __asm
  {
    vmulss  xmm1, xmm6, dword ptr [rsp+0A8h+forward+4]
    vmulss  xmm0, xmm7, dword ptr [rsp+0A8h+forward]
    vaddss  xmm1, xmm1, xmm0
    vcomiss xmm1, cs:__real@3e333333
  }
  if ( !v31 )
  {
    v32 = G_irand(300, 400);
    LOBYTE(v33) = 5;
    AIScriptedInterface::SetGlancePos(this, &worldPos, v33, 1, v32);
  }
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_28]
    vmovaps xmm7, [rsp+0A8h+var_38]
  }
}

/*
==============
AICommonInterface::ReceiveArcEvent
==============
*/
void AICommonInterface::ReceiveArcEvent(AICommonInterface *this, gentity_s *originator, ai_event_t eType, const vec3_t *origin)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1466, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( eType == AI_EV_BADPLACE_ARC )
  {
    AICommonInterface::Badplace_Ping(this);
    AI_DumpEvents(this->m_pAI, AI_EV_BADPLACE_ARC, originator);
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1467, ASSERT_TYPE_ASSERT, "(eType > AI_EV_FIRST_ARC_EVENT && eType < AI_EV_LAST_ARC_EVENT)", (const char *)&queryFormat, "eType > AI_EV_FIRST_ARC_EVENT && eType < AI_EV_LAST_ARC_EVENT") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1477, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "AI_ReceiveArcEvent: unhandled case\n") )
      __debugbreak();
  }
}

/*
==============
AICommonInterface::ReceiveGlobalEvent
==============
*/
void AICommonInterface::ReceiveGlobalEvent(AICommonInterface *this, gentity_s *originator, ai_event_t eType, int restrictionFlags)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1511, ASSERT_TYPE_ASSERT, "( G_Bot_UseGlobalBadPlace() )", (const char *)&queryFormat, "G_Bot_UseGlobalBadPlace()") )
    __debugbreak();
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1512, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( eType == AI_EV_BADPLACE_GLOBAL )
  {
    if ( AICommonInterface::BadPlaceAppliesViaFlags(this, restrictionFlags) )
      AICommonInterface::Badplace_Ping(this);
    AI_DumpEvents(this->m_pAI, AI_EV_BADPLACE_GLOBAL, originator);
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1513, ASSERT_TYPE_ASSERT, "( eType > AI_EV_FIRST_GLOBAL_EVENT && eType < AI_EV_LAST_GLOBAL_EVENT )", (const char *)&queryFormat, "eType > AI_EV_FIRST_GLOBAL_EVENT && eType < AI_EV_LAST_GLOBAL_EVENT") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1523, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "AI_ReceiveGlobalEvent: unhandled case\n") )
      __debugbreak();
  }
}

/*
==============
AICommonInterface::ReceiveLineEvent
==============
*/
void AICommonInterface::ReceiveLineEvent(AICommonInterface *this, gentity_s *originator, ai_event_t eType, const vec3_t *vStart, const vec3_t *vEnd, const vec3_t *vClosest, const WeaponDef *weapDef)
{
  BOOL suppression; 
  unsigned __int8 reason; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1424, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( (unsigned __int8)(eType - 17) > 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1425, ASSERT_TYPE_ASSERT, "(eType > AI_EV_FIRST_LINE_EVENT && eType < AI_EV_LAST_LINE_EVENT)", (const char *)&queryFormat, "eType > AI_EV_FIRST_LINE_EVENT && eType < AI_EV_LAST_LINE_EVENT") )
    __debugbreak();
  if ( (unsigned __int8)eType >= AI_EV_BULLET )
  {
    if ( (unsigned __int8)eType <= AI_EV_BLOCK_FRIENDLIES )
    {
      if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1432, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
        __debugbreak();
      suppression = 0;
      if ( weapDef )
        suppression = weapDef->doNotSuppressAI;
      reason = 12;
LABEL_18:
      AICommonInterface::EventBullet(this, originator, vStart, vEnd, vClosest, (PARM_SUPPRESSION)suppression, reason);
      AI_DumpEvents(this->m_pAI, eType, originator);
      return;
    }
    if ( eType == AI_EV_PROJECTILE_IMPACT )
    {
      if ( this->m_pAI->threat.ignoreExplosionEvents )
        return;
      suppression = 1;
      reason = 13;
      goto LABEL_18;
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1453, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "AI_ReceiveLineEvent: unhandled case\n") )
    __debugbreak();
}

/*
==============
AICommonInterface::ReceivePointEvent
==============
*/
void AICommonInterface::ReceivePointEvent(AICommonInterface *this, gentity_s *originator, ai_event_t eType, const vec3_t *vOrigin)
{
  const vec3_t *v4; 
  gentity_s *TurretUsed; 
  sentient_s *v9; 
  unsigned __int8 v10; 
  sentient_s *sentient; 
  gentity_s *v12; 
  sentient_s *v13; 
  sentient_s *v14; 
  __int64 v15; 
  gentity_s *v16; 
  sentient_s *v17; 
  unsigned __int8 v18; 
  sentient_s *RemoteVehicleSentient; 
  const tacpoint_t *ClosestPoint; 
  const tacpoint_t *v21; 

  v4 = vOrigin;
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1307, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1308, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  if ( (unsigned __int8)(eType - 2) > 0xCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1309, ASSERT_TYPE_ASSERT, "( eType > AI_EV_FIRST_POINT_EVENT && eType < AI_EV_LAST_POINT_EVENT )", (const char *)&queryFormat, "eType > AI_EV_FIRST_POINT_EVENT && eType < AI_EV_LAST_POINT_EVENT") )
    __debugbreak();
  switch ( eType )
  {
    case AI_EV_FOOTSTEP:
    case AI_EV_FOOTSTEP_WALK:
    case AI_EV_FOOTSTEP_SPRINT:
      if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1318, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
        __debugbreak();
      if ( !originator->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1319, ASSERT_TYPE_ASSERT, "(originator->sentient)", (const char *)&queryFormat, "originator->sentient") )
        __debugbreak();
      if ( AICommonInterface::CaresAboutInfo(this, originator->sentient) )
      {
        if ( !this->m_pAI->ent->actor || !AICommonInterface::IsUsingTurret(this) || (TurretUsed = AICommonInterface::GetTurretUsed(this)) == NULL || !G_Turret_IsFiring(TurretUsed) || (v9 = originator->sentient) == NULL || level.time - this->m_pAI->sentientInfo[v9 - level.sentients].lastKnownPosTime < 3000 )
        {
          if ( eType == AI_EV_FOOTSTEP )
            v10 = 0;
          else
            v10 = (eType != AI_EV_FOOTSTEP_WALK) + 1;
          sentient = originator->sentient;
          if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 923, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
            __debugbreak();
          if ( !sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 924, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
            __debugbreak();
          this->GetPerfectInfo(this, sentient, v10);
          AI_DumpEvents(this->m_pAI, eType, originator);
        }
      }
      break;
    case AI_EV_NEW_ENEMY:
      if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1350, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
        __debugbreak();
      if ( !originator->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1351, ASSERT_TYPE_ASSERT, "(originator->sentient)", (const char *)&queryFormat, "originator->sentient") )
        __debugbreak();
      AICommonInterface::EventNewEnemy(this, originator->sentient, 3u);
      AI_DumpEvents(this->m_pAI, eType, originator);
      break;
    case AI_EV_PAIN:
      if ( !AICommonInterface::ShouldKnowAboutPainDeathEvent(this, originator, v4) )
        goto LABEL_118;
      if ( !EntHandle::isDefined(&originator->sentient->lastAttacker) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1359, ASSERT_TYPE_ASSERT, "(originator->sentient->lastAttacker.isDefined())", (const char *)&queryFormat, "originator->sentient->lastAttacker.isDefined()") )
        __debugbreak();
      v12 = EntHandle::ent(&originator->sentient->lastAttacker);
      v13 = originator->sentient;
      v14 = v12->sentient;
      if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 984, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
        __debugbreak();
      if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 985, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
        __debugbreak();
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 986, ASSERT_TYPE_ASSERT, "(pCasualty)", (const char *)&queryFormat, "pCasualty") )
        __debugbreak();
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 987, ASSERT_TYPE_ASSERT, "(pAttacker)", (const char *)&queryFormat, "pAttacker") )
        __debugbreak();
      this->ReactToDanger(this);
      AICommonInterface::WasAttackedBy(this, v14);
      LOBYTE(v15) = 4;
      this->GetPerfectInfo(this, v14, v15);
      AI_DumpEvents(this->m_pAI, eType, originator);
      break;
    case AI_EV_DEATH:
      if ( !AICommonInterface::ShouldKnowAboutPainDeathEvent(this, originator, v4) )
        goto LABEL_118;
      if ( !EntHandle::isDefined(&originator->sentient->lastAttacker) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1367, ASSERT_TYPE_ASSERT, "(originator->sentient->lastAttacker.isDefined())", (const char *)&queryFormat, "originator->sentient->lastAttacker.isDefined()") )
        __debugbreak();
      v16 = EntHandle::ent(&originator->sentient->lastAttacker);
      AICommonInterface::EventDeath(this, originator->sentient, v16->sentient, 5u);
      AI_DumpEvents(this->m_pAI, eType, originator);
      break;
    case AI_EV_EXPLOSION:
      AICommonInterface::EventExplosion(this, originator, v4, 6u);
      AI_DumpEvents(this->m_pAI, eType, originator);
      break;
    case AI_EV_GRENADE_PING:
      if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1124, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
        __debugbreak();
      if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1125, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
        __debugbreak();
      if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1126, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
        __debugbreak();
      this->Grenade_Ping(this, originator, v4);
      AI_DumpEvents(this->m_pAI, eType, originator);
      break;
    case AI_EV_PROJECTILE_PING:
      if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1381, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
        __debugbreak();
      if ( !EntHandle::isDefined(&originator->parent) || EntHandle::ent(&originator->parent) != this->m_pAI->ent )
      {
        if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1141, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
          __debugbreak();
        if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1142, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
          __debugbreak();
        if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1143, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
          __debugbreak();
        this->Projectile_Ping(this, originator, v4);
        AI_DumpEvents(this->m_pAI, eType, originator);
      }
      break;
    case AI_EV_GUNSHOT:
    case AI_EV_SILENCED_SHOT:
      if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1390, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
        __debugbreak();
      if ( !originator->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1391, ASSERT_TYPE_ASSERT, "(originator->sentient)", (const char *)&queryFormat, "originator->sentient") )
        __debugbreak();
      v17 = originator->sentient;
      v18 = 11;
      if ( eType != AI_EV_SILENCED_SHOT )
        v18 = 9;
      if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1158, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
        __debugbreak();
      if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1159, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
        __debugbreak();
      this->EnterAlertState(this);
      if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) )
      {
        RemoteVehicleSentient = Sentient_GetRemoteVehicleSentient(v17);
        if ( RemoteVehicleSentient )
          v17 = RemoteVehicleSentient;
      }
      if ( AICommonInterface::CaresAboutInfo(this, v17) )
      {
        this->GetPerfectInfo(this, v17, v18);
        AI_DumpEvents(this->m_pAI, eType, originator);
      }
      else
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH) || !SV_BotIsBotEnt(this->m_pAI->ent) )
          goto LABEL_118;
        SV_BotPerfectInfoIgnored(this->m_pAI, v17, v18);
        AI_DumpEvents(this->m_pAI, eType, originator);
      }
      break;
    case AI_EV_GUNSHOT_TEAMMATE:
      if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1401, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
        __debugbreak();
      if ( !originator->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1402, ASSERT_TYPE_ASSERT, "(originator->sentient)", (const char *)&queryFormat, "originator->sentient") )
        __debugbreak();
      LOBYTE(vOrigin) = 10;
      if ( this->EventGunshotTeammate(this, originator->sentient, v4, (unsigned __int8)vOrigin) )
        goto LABEL_118;
      break;
    case AI_EV_GLASS_DESTROYED:
      if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1262, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
        __debugbreak();
      if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1263, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
        __debugbreak();
      if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1264, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
        __debugbreak();
      ClosestPoint = TacGraph_FindClosestPoint(v4);
      v21 = Sentient_NearestTacPoint(this->m_pAI->sentient);
      if ( ClosestPoint && v21 && TacVisGraph_HasVis(ClosestPoint, v21) )
        this->EnterAlertState(this);
LABEL_118:
      AI_DumpEvents(this->m_pAI, eType, originator);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1412, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "AI_ReceivePointEvent: unhandled case\n") )
        __debugbreak();
      break;
  }
}

/*
==============
AICommonInterface::ReceiveVolumeEvent
==============
*/
void AICommonInterface::ReceiveVolumeEvent(AICommonInterface *this, gentity_s *originator, ai_event_t eType)
{
  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1489, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( eType == AI_EV_BADPLACE_VOLUME )
  {
    AICommonInterface::Badplace_Ping(this);
    AI_DumpEvents(this->m_pAI, AI_EV_BADPLACE_VOLUME, originator);
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1490, ASSERT_TYPE_ASSERT, "(eType > AI_EV_FIRST_VOLUME_EVENT && eType < AI_EV_LAST_VOLUME_EVENT)", (const char *)&queryFormat, "eType > AI_EV_FIRST_VOLUME_EVENT && eType < AI_EV_LAST_VOLUME_EVENT") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1499, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "AI_ReceiveVolumeEvent: unhandled case\n") )
      __debugbreak();
  }
}

/*
==============
AICommonInterface::ShouldKnowAboutPainDeathEvent
==============
*/
bool AICommonInterface::ShouldKnowAboutPainDeathEvent(AICommonInterface *this, gentity_s *originator, const vec3_t *vOrigin)
{
  const tacpoint_t *v6; 
  const tacpoint_t *v7; 
  bool result; 
  AIWrapper v9; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1278, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1279, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
    __debugbreak();
  if ( !originator->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1280, ASSERT_TYPE_ASSERT, "(originator->sentient)", (const char *)&queryFormat, "originator->sentient") )
    __debugbreak();
  result = 0;
  if ( EntHandle::isDefined(&originator->sentient->lastAttacker) )
  {
    if ( EntHandle::ent(&originator->sentient->lastAttacker)->sentient )
    {
      AIWrapper::AIWrapper(&v9, originator);
      if ( !v9.m_pAI )
        return 1;
      if ( !*(_BYTE *)((__int64)v9.m_pAI->GetAI(v9.m_pAI) + 1852) )
        return 1;
      if ( AICommonInterface::PointInFov(this, vOrigin) )
      {
        v6 = Sentient_NearestTacPoint(this->m_pAI->sentient);
        v7 = Sentient_NearestTacPoint(originator->sentient);
        if ( !v6 || !v7 || TacVisGraph_HasVis(v6, v7) )
          return 1;
      }
    }
  }
  return result;
}

/*
==============
AICommonInterface::UseBusyEventDist
==============
*/
bool AICommonInterface::UseBusyEventDist(AICommonInterface *this, gentity_s *originator)
{
  return this->m_pAI->threat.hasThreateningEnemy && AICommonInterface::GetTargetEntity(this) != originator;
}

/*
==============
AICommonInterface::WasAttackedBy
==============
*/
void AICommonInterface::WasAttackedBy(AICommonInterface *this, sentient_s *pOther)
{
  sentient_s *sentients; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 271, ASSERT_TYPE_ASSERT, "( m_pAI )", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 272, ASSERT_TYPE_ASSERT, "( m_pAI->sentient )", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  if ( !this->m_pAI->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 273, ASSERT_TYPE_ASSERT, "( m_pAI->sentientInfo )", (const char *)&queryFormat, "m_pAI->sentientInfo") )
    __debugbreak();
  if ( !pOther && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 274, ASSERT_TYPE_ASSERT, "( pOther )", (const char *)&queryFormat, "pOther") )
    __debugbreak();
  sentients = level.sentients;
  if ( pOther < level.sentients || pOther >= &level.sentients[(unsigned __int64)level.maxSentients] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 275, ASSERT_TYPE_ASSERT, "( pOther >= level.sentients && pOther < level.sentients + level.maxSentients )", (const char *)&queryFormat, "pOther >= level.sentients && pOther < level.sentients + level.maxSentients") )
      __debugbreak();
    sentients = level.sentients;
  }
  if ( pOther != &sentients[pOther - sentients] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 276, ASSERT_TYPE_ASSERT, "( pOther == level.sentients + (pOther - level.sentients) )", (const char *)&queryFormat, "pOther == level.sentients + (pOther - level.sentients)") )
      __debugbreak();
    sentients = level.sentients;
  }
  this->m_pAI->sentientInfo[pOther - sentients].iLastAttackMeTime = level.time;
  this->EnterAlertState(this);
}

