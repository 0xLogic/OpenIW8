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
  unsigned int v12; 
  const bitarray<224> *v13; 
  sentient_s *sentient; 
  int v15; 
  bitarray<224> *i; 
  float radiusSqrd; 
  double v18; 
  AIIterator *AIScriptedIterator; 
  __int64 v20; 
  gentity_s *v21; 
  float v22; 
  float v23; 
  float v24; 
  AICommonInterface *v25; 
  int j; 
  gentity_s *Entity; 
  gentity_s *v28; 
  float v29; 
  float v30; 
  const gentity_s **p_ent; 
  float v32; 
  AICommonInterface *m_pAI; 
  AICommonWrapper v34; 
  bitarray<224> result; 

  if ( eType != AI_EV_BADPLACE_ARC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 652, ASSERT_TYPE_ASSERT, "(eType > AI_EV_FIRST_ARC_EVENT && eType < AI_EV_LAST_ARC_EVENT)", (const char *)&queryFormat, "eType > AI_EV_FIRST_ARC_EVENT && eType < AI_EV_LAST_ARC_EVENT") )
    __debugbreak();
  if ( !BG_AISystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 654, ASSERT_TYPE_ASSERT, "( BG_AISystemEnabled() )", (const char *)&queryFormat, "BG_AISystemEnabled()") )
    __debugbreak();
  if ( angle0 != angle1 )
  {
    v12 = 0;
    v13 = teamFlags;
    do
    {
      if ( v13->array[0] )
        goto LABEL_19;
      ++v12;
      v13 = (const bitarray<224> *)((char *)v13 + 4);
    }
    while ( v12 < 7 );
    if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 665, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
      __debugbreak();
    sentient = originator->sentient;
    if ( sentient )
    {
      Sentient_EnemyTeamFlags(&result, sentient->eTeam);
      v15 = 0;
      for ( i = &result; !i->array[0]; i = (bitarray<224> *)((char *)i + 4) )
      {
        if ( (unsigned int)++v15 >= 7 )
          return;
      }
LABEL_19:
      radiusSqrd = radius * radius;
      if ( (float)(radius * radius) == 0.0 )
      {
        v18 = Actor_EventDefaultRadiusSqrd(eType);
        radiusSqrd = *(float *)&v18;
      }
      if ( BG_ActorOrAgentSystemEnabled() )
      {
        AIScriptedIterator = AIScriptedInterface::GetAIScriptedIterator();
        v20 = AIScriptedIterator->GetFirst(AIScriptedIterator);
        while ( v20 )
        {
          v21 = (gentity_s *)v20;
          v20 = (__int64)AIScriptedIterator->GetNext(AIScriptedIterator);
          if ( (v21 != originator || g_ai_event_info[(unsigned __int8)eType].notifySelf) && bitarray_base<bitarray<224>>::testBit((bitarray_base<bitarray<224> > *)teamFlags, v21->sentient->eTeam) && AI_IsInsideArc(v21, origin, radius, angle0, angle1, halfHeight) )
          {
            v22 = v21->r.currentOrigin.v[1] - origin->v[1];
            v23 = v21->r.currentOrigin.v[2] - origin->v[2];
            v24 = (float)((float)(v22 * v22) + (float)((float)(v21->r.currentOrigin.v[0] - origin->v[0]) * (float)(v21->r.currentOrigin.v[0] - origin->v[0]))) + (float)(v23 * v23);
            AIWrapper::AIWrapper((AIWrapper *)&v34, v21);
            v25 = (AICommonInterface *)v34.m_botInterface.__vftable;
            if ( !v34.m_botInterface.__vftable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 700, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
              __debugbreak();
            AICommonInterface::ReceiveArcEvent(v25, originator, eType, origin, v24, radiusSqrd, angle0, angle1, halfHeight);
          }
        }
      }
      for ( j = Actor_EventListener_First(eType, teamFlags); j >= 0; j = Actor_EventListener_Next(j, eType, teamFlags) )
      {
        Entity = Actor_EventListener_GetEntity(j);
        v28 = Entity;
        if ( Entity != originator || g_ai_event_info[(unsigned __int8)eType].notifySelf )
        {
          if ( IsPosInsideArc(&Entity->r.currentOrigin, 15.0, origin, radius, angle0, angle1, halfHeight) )
          {
            Actor_EventListener_NotifyToListener(v28, originator, eType, origin);
            if ( AI_IsLiveBot(v28) )
            {
              v29 = v28->r.currentOrigin.v[1] - origin->v[1];
              v30 = v28->r.currentOrigin.v[2] - origin->v[2];
              p_ent = (const gentity_s **)&v28->sentient->ai->ent;
              v32 = (float)((float)(v29 * v29) + (float)((float)(v28->r.currentOrigin.v[0] - origin->v[0]) * (float)(v28->r.currentOrigin.v[0] - origin->v[0]))) + (float)(v30 * v30);
              AIActorInterface::AIActorInterface(&v34.m_actorInterface);
              AIAgentInterface::AIAgentInterface(&v34.m_newAgentInterface);
              v34.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
              AICommonInterface::AICommonInterface(&v34.m_botInterface);
              v34.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
              AICommonInterface::AICommonInterface(&v34.m_botAgentInterface);
              m_pAI = NULL;
              v34.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
              v34.m_pAI = NULL;
              if ( p_ent )
              {
                AICommonWrapper::Setup(&v34, *p_ent);
                m_pAI = v34.m_pAI;
              }
              if ( !m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 724, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
                __debugbreak();
              AICommonInterface::ReceiveArcEvent(m_pAI, originator, eType, origin, v32, radiusSqrd, angle0, angle1, halfHeight);
            }
          }
        }
      }
    }
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
  float v9; 
  float v10; 
  hkMemoryAllocator *v11; 
  hkMemoryAllocator *v12; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v14; 
  __int64 v15; 
  vec3_t end; 
  vec3_t pos; 

  v15 = -2i64;
  Actor_BroadcastPointEvent(originator, eType, teamFlags, vOrigin);
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY);
  v9 = vOrigin->v[2];
  v10 = vOrigin->v[1];
  end.v[0] = vOrigin->v[0];
  end.v[1] = v10;
  end.v[2] = v9 - 1024.0;
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v14, originator != NULL, 0);
  HavokPhysics_IgnoreBodies::SetIsClutter(&v14, 1);
  if ( originator )
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v14, 0, originator->s.number, 1, 0, 0, 0, 0);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = 33685505;
  extendedData.ignoreBodies = &v14;
  Physics_Raycast(PHYSICS_WORLD_ID_FIRST, vOrigin, &end, &extendedData, CollisionQueryResult);
  if ( HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult) )
  {
    HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(CollisionQueryResult, 0, &pos);
    if ( (float)(vOrigin->v[2] - pos.v[2]) > 72.0 )
      Actor_BroadcastPointEvent(originator, eType, teamFlags, &pos);
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  v11 = hkMemHeapAllocator();
  v14.m_ignoreBodies.m_size = 0;
  if ( v14.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v11, v14.m_ignoreBodies.m_data, 4, v14.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v14.m_ignoreBodies.m_data = NULL;
  v14.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v12 = hkMemHeapAllocator();
  v14.m_ignoreEntities.m_size = 0;
  if ( v14.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v12, v14.m_ignoreEntities.m_data, 8, v14.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
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
  __int128 v6; 
  const bitarray<224> *v9; 
  const bitarray<224> *v11; 
  unsigned int v12; 
  sentient_s *sentient; 
  int v14; 
  bitarray<224> *i; 
  float v16; 
  float v17; 
  __int128 v18; 
  float v20; 
  float v24; 
  __int64 v25; 
  float defaultHeight; 
  float v27; 
  float v28; 
  AIIterator *v29; 
  __int64 v30; 
  gentity_s *v31; 
  unsigned __int64 eTeam; 
  AICommonInterface *v33; 
  float v34; 
  bool v35; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  int j; 
  gentity_s *Entity; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  const gentity_s **p_ent; 
  float v52; 
  AICommonInterface *m_pAI; 
  bool v54; 
  vec3_t *vClosest; 
  WeaponDef *v59; 
  AIIterator *AIScriptedIterator; 
  float v61; 
  AICommonWrapper v64; 
  vec3_t origin; 
  vec3_t outCentroid; 
  bitarray<224> result; 

  v9 = teamFlags;
  if ( (unsigned __int8)(eType - 17) > 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 502, ASSERT_TYPE_ASSERT, "(eType > AI_EV_FIRST_LINE_EVENT && eType < AI_EV_LAST_LINE_EVENT)", (const char *)&queryFormat, "eType > AI_EV_FIRST_LINE_EVENT && eType < AI_EV_LAST_LINE_EVENT") )
    __debugbreak();
  if ( !BG_AISystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 504, ASSERT_TYPE_ASSERT, "( BG_AISystemEnabled() )", (const char *)&queryFormat, "BG_AISystemEnabled()") )
    __debugbreak();
  v11 = v9;
  v12 = 0;
  while ( !v11->array[0] )
  {
    ++v12;
    v11 = (const bitarray<224> *)((char *)v11 + 4);
    if ( v12 >= 7 )
    {
      sentient = originator->sentient;
      if ( !sentient )
        return;
      Sentient_EnemyTeamFlags(&result, sentient->eTeam);
      v14 = 0;
      for ( i = &result; !i->array[0]; i = (bitarray<224> *)((char *)i + 4) )
      {
        if ( (unsigned int)++v14 >= 7 )
          return;
      }
      break;
    }
  }
  Actor_EventDefaultRadiusSqrd(eType);
  *(double *)&v6 = Actor_EventBusyRadiusSqrd(eType);
  v16 = vEnd->v[0] - vStart->v[0];
  v18 = LODWORD(vEnd->v[1]);
  v17 = vEnd->v[1] - vStart->v[1];
  v61 = *(float *)&v6;
  _XMM8 = v6;
  v20 = vEnd->v[2] - vStart->v[2];
  *(float *)&v18 = fsqrt((float)((float)(v17 * v17) + (float)(v16 * v16)) + (float)(v20 * v20));
  _XMM13 = v18;
  __asm
  {
    vcmpless xmm0, xmm13, cs:__real@80000000
    vblendvps xmm0, xmm13, xmm1, xmm0
  }
  v24 = v16 * (float)(1.0 / *(float *)&_XMM0);
  v25 = (unsigned __int8)eType;
  defaultHeight = g_ai_event_info[(unsigned __int8)eType].defaultHeight;
  v27 = v17 * (float)(1.0 / *(float *)&_XMM0);
  v28 = v20 * (float)(1.0 / *(float *)&_XMM0);
  if ( !BG_ActorOrAgentSystemEnabled() )
    goto LABEL_46;
  AIScriptedIterator = AIScriptedInterface::GetAIScriptedIterator();
  v29 = AIScriptedIterator;
  v30 = AIScriptedIterator->GetFirst(AIScriptedIterator);
  if ( !v30 )
    goto LABEL_45;
  do
  {
    v31 = (gentity_s *)v30;
    v30 = (__int64)v29->GetNext(v29);
    if ( v31 != originator || g_ai_event_info[(unsigned __int8)eType].notifySelf )
    {
      eTeam = (unsigned int)v31->sentient->eTeam;
      if ( (unsigned int)eTeam >= 0xE0 )
      {
        LODWORD(v59) = 224;
        LODWORD(vClosest) = v31->sentient->eTeam;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", vClosest, v59) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (eTeam & 0x1F)) & teamFlags->array[eTeam >> 5]) == 0 )
        goto LABEL_42;
      AIWrapper::AIWrapper((AIWrapper *)&v64, v31);
      v33 = (AICommonInterface *)v64.m_botInterface.__vftable;
      if ( !v64.m_botInterface.__vftable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 556, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
        __debugbreak();
      if ( eType == AI_EV_BLOCK_FRIENDLIES && !((unsigned __int8 (__fastcall *)(AICommonInterface *))v33->__vftable[2].GetWeaponFlashTagName)(v33) )
        goto LABEL_42;
      v34 = (float)((float)((float)(v31->r.currentOrigin.v[1] - vStart->v[1]) * v27) + (float)((float)(v31->r.currentOrigin.v[0] - vStart->v[0]) * v24)) + (float)((float)(v31->r.currentOrigin.v[2] - vStart->v[2]) * v28);
      if ( v34 < 0.0 )
        goto LABEL_42;
      v35 = v33->m_pAI->threat.hasThreateningEnemy && AICommonInterface::GetTargetEntity(v33) != originator;
      _XMM0 = v35;
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM0 = LODWORD(v61);
      __asm { vblendvps xmm0, xmm0, xmm15, xmm2 }
      if ( v34 < *(float *)&_XMM13 )
      {
        v40 = (float)(v24 * v34) + vStart->v[0];
        v42 = (float)(v28 * v34) + vStart->v[2];
        v41 = (float)(v27 * v34) + vStart->v[1];
        origin.v[2] = v42;
        origin.v[0] = v40;
        origin.v[1] = v41;
      }
      else
      {
        v40 = vEnd->v[0];
        v41 = vEnd->v[1];
        v42 = vEnd->v[2];
        origin.v[0] = vEnd->v[0];
        origin.v[1] = v41;
        origin.v[2] = v42;
        if ( eType == AI_EV_BULLET && (float)(v34 - *(float *)&_XMM13) > 15.0 )
        {
          v43 = *(float *)&_XMM0 * 0.5;
LABEL_39:
          if ( (float)((float)((float)(v31->r.currentOrigin.v[1] - v41) * (float)(v31->r.currentOrigin.v[1] - v41)) + (float)((float)(v31->r.currentOrigin.v[0] - v40) * (float)(v31->r.currentOrigin.v[0] - v40))) <= v43 && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v31->r.currentOrigin.v[2] - v42) + v31->r.box.halfSize.v[2]) & _xmm) < COERCE_FLOAT(LODWORD(defaultHeight) & _xmm) )
            AICommonInterface::ReceiveLineEvent(v33, originator, eType, vStart, vEnd, &origin, weapDef);
LABEL_42:
          v29 = AIScriptedIterator;
          continue;
        }
      }
      v43 = *(float *)&_XMM0;
      goto LABEL_39;
    }
  }
  while ( v30 );
  _XMM8 = LODWORD(v61);
  v9 = teamFlags;
LABEL_45:
  v25 = (unsigned __int8)eType;
LABEL_46:
  for ( j = Actor_EventListener_First(eType, v9); j >= 0; j = Actor_EventListener_Next(j, eType, teamFlags) )
  {
    Entity = Actor_EventListener_GetEntity(j);
    if ( Entity != originator || g_ai_event_info[v25].notifySelf )
    {
      v46 = vStart->v[1];
      v47 = vStart->v[2];
      v48 = (float)((float)((float)(Entity->r.currentOrigin.v[1] - v46) * v27) + (float)((float)(Entity->r.currentOrigin.v[0] - vStart->v[0]) * v24)) + (float)((float)(Entity->r.currentOrigin.v[2] - v47) * v28);
      if ( v48 >= 0.0 )
      {
        if ( v48 < *(float *)&_XMM13 )
        {
          origin.v[0] = (float)(v24 * v48) + vStart->v[0];
          origin.v[2] = (float)(v28 * v48) + v47;
          origin.v[1] = (float)(v27 * v48) + v46;
        }
        else
        {
          v49 = vEnd->v[1];
          origin.v[0] = vEnd->v[0];
          origin.v[2] = vEnd->v[2];
          origin.v[1] = v49;
        }
        G_Utils_EntityCentroid(Entity, &outCentroid);
        v50 = outCentroid.v[2] - origin.v[2];
        p_ent = (const gentity_s **)&Entity->sentient->ai->ent;
        v52 = (float)((float)(outCentroid.v[1] - origin.v[1]) * (float)(outCentroid.v[1] - origin.v[1])) + (float)((float)(outCentroid.v[0] - origin.v[0]) * (float)(outCentroid.v[0] - origin.v[0]));
        if ( p_ent )
        {
          AIActorInterface::AIActorInterface(&v64.m_actorInterface);
          AIAgentInterface::AIAgentInterface(&v64.m_newAgentInterface);
          v64.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
          AICommonInterface::AICommonInterface(&v64.m_botInterface);
          v64.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
          AICommonInterface::AICommonInterface(&v64.m_botAgentInterface);
          v64.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
          v64.m_pAI = NULL;
          AICommonWrapper::Setup(&v64, *p_ent);
          m_pAI = v64.m_pAI;
          if ( !v64.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 623, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
            __debugbreak();
          v54 = m_pAI->m_pAI->threat.hasThreateningEnemy && AICommonInterface::GetTargetEntity(m_pAI) != originator;
          _XMM0 = v54;
          __asm
          {
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm0, xmm8, xmm15, xmm2
          }
          if ( v52 <= *(float *)&_XMM0 && COERCE_FLOAT(LODWORD(v50) & _xmm) < COERCE_FLOAT(LODWORD(defaultHeight) & _xmm) )
          {
            Actor_EventListener_NotifyToListener(Entity, originator, eType, &origin);
            if ( AI_IsLiveBot(Entity) )
              AICommonInterface::ReceiveLineEvent(m_pAI, originator, eType, vStart, vEnd, &origin, weapDef);
          }
        }
      }
    }
    v25 = (unsigned __int8)eType;
  }
}

/*
==============
Actor_BroadcastPointEvent
==============
*/
void Actor_BroadcastPointEvent(gentity_s *originator, ai_event_t eType, const bitarray<224> *teamFlags, const vec3_t *vOrigin)
{
  __int128 v4; 
  const bitarray<224> *v9; 
  unsigned int i; 
  sentient_s *sentient; 
  int v12; 
  bitarray<224> *j; 
  __int64 v14; 
  AIIterator *AIScriptedIterator; 
  __int64 v17; 
  gentity_s *v18; 
  float v19; 
  float v20; 
  float v21; 
  AICommonInterface *v22; 
  bool v23; 
  int k; 
  gentity_s *Entity; 
  gentity_s *v29; 
  float v30; 
  float v31; 
  const gentity_s **p_ent; 
  float v33; 
  AICommonInterface *m_pAI; 
  bool v35; 
  AICommonWrapper v39; 
  bitarray<224> result; 

  if ( (unsigned __int8)(eType - 2) > 0xCu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 404, ASSERT_TYPE_ASSERT, "(eType > AI_EV_FIRST_POINT_EVENT && eType < AI_EV_LAST_POINT_EVENT)", (const char *)&queryFormat, "eType > AI_EV_FIRST_POINT_EVENT && eType < AI_EV_LAST_POINT_EVENT") )
    __debugbreak();
  if ( !BG_AISystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 406, ASSERT_TYPE_ASSERT, "( BG_AISystemEnabled() )", (const char *)&queryFormat, "BG_AISystemEnabled()") )
    __debugbreak();
  v9 = teamFlags;
  for ( i = 0; i < 7; ++i )
  {
    if ( v9->array[0] )
      goto LABEL_18;
    v9 = (const bitarray<224> *)((char *)v9 + 4);
  }
  if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 415, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
    __debugbreak();
  sentient = originator->sentient;
  if ( sentient )
  {
    Sentient_EnemyTeamFlags(&result, sentient->eTeam);
    v12 = 0;
    for ( j = &result; !j->array[0]; j = (bitarray<224> *)((char *)j + 4) )
    {
      if ( (unsigned int)++v12 >= 7 )
        return;
    }
LABEL_18:
    v14 = (unsigned __int8)eType;
    if ( g_ai_event_info[(unsigned __int8)eType].variableRadius )
    {
      Actor_BroadcastVariableRadiusPointEvent(originator, eType, teamFlags, vOrigin);
    }
    else
    {
      Actor_EventDefaultRadiusSqrd(eType);
      *(double *)&v4 = Actor_EventBusyRadiusSqrd(eType);
      _XMM8 = v4;
      if ( BG_ActorOrAgentSystemEnabled() )
      {
        AIScriptedIterator = AIScriptedInterface::GetAIScriptedIterator();
        v17 = AIScriptedIterator->GetFirst(AIScriptedIterator);
        if ( v17 )
        {
          do
          {
            v18 = (gentity_s *)v17;
            v17 = (__int64)AIScriptedIterator->GetNext(AIScriptedIterator);
            if ( (v18 != originator || g_ai_event_info[(unsigned __int8)eType].notifySelf) && bitarray_base<bitarray<224>>::testBit((bitarray_base<bitarray<224> > *)teamFlags, v18->sentient->eTeam) )
            {
              v19 = vOrigin->v[1] - v18->r.currentOrigin.v[1];
              v20 = vOrigin->v[2] - v18->r.currentOrigin.v[2];
              v21 = (float)((float)(v19 * v19) + (float)((float)(vOrigin->v[0] - v18->r.currentOrigin.v[0]) * (float)(vOrigin->v[0] - v18->r.currentOrigin.v[0]))) + (float)(v20 * v20);
              AIWrapper::AIWrapper((AIWrapper *)&v39, v18);
              v22 = (AICommonInterface *)v39.m_botInterface.__vftable;
              if ( !v39.m_botInterface.__vftable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 453, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
                __debugbreak();
              v23 = v22->m_pAI->threat.hasThreateningEnemy && AICommonInterface::GetTargetEntity(v22) != originator;
              _XMM0 = v23;
              __asm
              {
                vpcmpeqd xmm2, xmm0, xmm1
                vblendvps xmm0, xmm8, xmm7, xmm2
              }
              if ( v21 <= *(float *)&_XMM0 )
                AICommonInterface::ReceivePointEvent(v22, originator, eType, vOrigin);
            }
          }
          while ( v17 );
          v14 = (unsigned __int8)eType;
        }
      }
      for ( k = Actor_EventListener_First(eType, teamFlags); k >= 0; k = Actor_EventListener_Next(k, eType, teamFlags) )
      {
        Entity = Actor_EventListener_GetEntity(k);
        v29 = Entity;
        if ( Entity != originator || g_ai_event_info[v14].notifySelf )
        {
          v30 = vOrigin->v[1] - Entity->r.currentOrigin.v[1];
          v31 = vOrigin->v[2] - Entity->r.currentOrigin.v[2];
          p_ent = (const gentity_s **)&Entity->sentient->ai->ent;
          v33 = (float)((float)(v30 * v30) + (float)((float)(vOrigin->v[0] - Entity->r.currentOrigin.v[0]) * (float)(vOrigin->v[0] - Entity->r.currentOrigin.v[0]))) + (float)(v31 * v31);
          if ( p_ent )
          {
            AIActorInterface::AIActorInterface(&v39.m_actorInterface);
            AIAgentInterface::AIAgentInterface(&v39.m_newAgentInterface);
            v39.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
            AICommonInterface::AICommonInterface(&v39.m_botInterface);
            v39.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
            AICommonInterface::AICommonInterface(&v39.m_botAgentInterface);
            v39.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
            v39.m_pAI = NULL;
            AICommonWrapper::Setup(&v39, *p_ent);
            m_pAI = v39.m_pAI;
            if ( !v39.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 474, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
              __debugbreak();
            v35 = m_pAI->m_pAI->threat.hasThreateningEnemy && AICommonInterface::GetTargetEntity(m_pAI) != originator;
            _XMM0 = v35;
            __asm
            {
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm0, xmm8, xmm7, xmm2
            }
            if ( v33 <= *(float *)&_XMM0 )
            {
              Actor_EventListener_NotifyToListener(v29, originator, eType, vOrigin);
              if ( AI_IsLiveBot(v29) )
                AICommonInterface::ReceivePointEvent(m_pAI, originator, eType, vOrigin);
            }
          }
        }
        v14 = (unsigned __int8)eType;
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
  __int128 v4; 
  const bitarray<224> *v5; 
  int v9; 
  AIIterator *AIScriptedIterator; 
  __int64 v12; 
  const gentity_s *v13; 
  unsigned __int64 eTeam; 
  unsigned __int64 v15; 
  char v16; 
  float v17; 
  float v18; 
  float v19; 
  AICommonInterface *p_m_newAgentInterface; 
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 
  bool v23; 
  int i; 
  gentity_s *Entity; 
  float v29; 
  float v30; 
  const gentity_s **p_ent; 
  float v32; 
  AICommonInterface *m_pAI; 
  bool v34; 
  double v38; 
  const gentity_s **v39; 
  AICommonInterface *v40; 
  __int64 v41; 
  __int64 v42; 
  AICommonWrapper v44; 

  v5 = teamFlags;
  if ( !BG_AISystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 326, ASSERT_TYPE_ASSERT, "( BG_AISystemEnabled() )", (const char *)&queryFormat, "BG_AISystemEnabled()") )
    __debugbreak();
  *(double *)&v4 = Actor_EventDefaultRadiusSqrd(eType);
  v9 = v4;
  *(double *)&v4 = Actor_EventBusyRadiusSqrd(eType);
  _XMM8 = v4;
  if ( BG_ActorOrAgentSystemEnabled() )
  {
    AIScriptedIterator = AIScriptedInterface::GetAIScriptedIterator();
    v12 = AIScriptedIterator->GetFirst(AIScriptedIterator);
    if ( v12 )
    {
      while ( 1 )
      {
        v13 = (const gentity_s *)v12;
        v12 = (__int64)AIScriptedIterator->GetNext(AIScriptedIterator);
        if ( v13 != originator || g_ai_event_info[(unsigned __int8)eType].notifySelf )
          break;
LABEL_36:
        v5 = teamFlags;
LABEL_37:
        if ( !v12 )
          goto LABEL_38;
      }
      eTeam = (unsigned int)v13->sentient->eTeam;
      if ( (unsigned int)eTeam >= 0xE0 )
      {
        LODWORD(v42) = 224;
        LODWORD(v41) = v13->sentient->eTeam;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v41, v42) )
          __debugbreak();
      }
      v15 = eTeam;
      v16 = eTeam;
      v5 = teamFlags;
      if ( ((0x80000000 >> (v16 & 0x1F)) & teamFlags->array[v15 >> 5]) == 0 )
        goto LABEL_37;
      v17 = vOrigin->v[1] - v13->r.currentOrigin.v[1];
      v18 = vOrigin->v[2] - v13->r.currentOrigin.v[2];
      v19 = (float)((float)(v17 * v17) + (float)((float)(vOrigin->v[0] - v13->r.currentOrigin.v[0]) * (float)(vOrigin->v[0] - v13->r.currentOrigin.v[0]))) + (float)(v18 * v18);
      AIActorInterface::AIActorInterface(&v44.m_actorInterface);
      AIAgentInterface::AIAgentInterface(&v44.m_newAgentInterface);
      v44.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
      v44.m_botInterface.__vftable = NULL;
      p_m_newAgentInterface = NULL;
      if ( v13->agent )
      {
        if ( SV_Agent_IsScripted(v13->s.number) )
        {
          ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(v13);
          if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
            __debugbreak();
          if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
            __debugbreak();
          AINewAgentInterface::SetAgent(&v44.m_newAgentInterface, ScriptedAgentInfo);
          v44.m_botInterface.__vftable = (AIBotInterface_vtbl *)&v44.m_newAgentInterface;
          p_m_newAgentInterface = &v44.m_newAgentInterface;
LABEL_30:
          v23 = p_m_newAgentInterface->m_pAI->threat.hasThreateningEnemy && AICommonInterface::GetTargetEntity(p_m_newAgentInterface) != originator;
          _XMM0 = v23;
          __asm
          {
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm3, xmm8, xmm7, xmm2; defaultRadiusSqrd
          }
          *(double *)&_XMM0 = AICommonInterface::EventVariableRadiusSqrd(p_m_newAgentInterface, originator, eType, *(float *)&_XMM3);
          if ( v19 <= *(float *)&_XMM0 )
            AICommonInterface::ReceivePointEvent(p_m_newAgentInterface, originator, eType, vOrigin);
          goto LABEL_36;
        }
        p_m_newAgentInterface = (AICommonInterface *)v44.m_botInterface.__vftable;
      }
      actor = v13->actor;
      if ( actor )
      {
        if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
          __debugbreak();
        AIActorInterface::SetActor(&v44.m_actorInterface, v13->actor);
        p_m_newAgentInterface = (AICommonInterface *)&v44;
        v44.m_botInterface.__vftable = (AIBotInterface_vtbl *)&v44;
      }
      if ( !p_m_newAgentInterface && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 348, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
        __debugbreak();
      goto LABEL_30;
    }
  }
LABEL_38:
  for ( i = Actor_EventListener_First(eType, v5); i >= 0; i = Actor_EventListener_Next(i, eType, teamFlags) )
  {
    Entity = Actor_EventListener_GetEntity(i);
    if ( !Entity->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 362, ASSERT_TYPE_ASSERT, "( ent->sentient )", (const char *)&queryFormat, "ent->sentient") )
      __debugbreak();
    if ( Entity != originator || g_ai_event_info[(unsigned __int8)eType].notifySelf )
    {
      v29 = vOrigin->v[1] - Entity->r.currentOrigin.v[1];
      v30 = vOrigin->v[2] - Entity->r.currentOrigin.v[2];
      p_ent = (const gentity_s **)&Entity->sentient->ai->ent;
      v32 = (float)((float)(v29 * v29) + (float)((float)(vOrigin->v[0] - Entity->r.currentOrigin.v[0]) * (float)(vOrigin->v[0] - Entity->r.currentOrigin.v[0]))) + (float)(v30 * v30);
      if ( p_ent )
      {
        AIActorInterface::AIActorInterface(&v44.m_actorInterface);
        AIAgentInterface::AIAgentInterface(&v44.m_newAgentInterface);
        v44.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
        AICommonInterface::AICommonInterface(&v44.m_botInterface);
        v44.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
        AICommonInterface::AICommonInterface(&v44.m_botAgentInterface);
        v44.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
        v44.m_pAI = NULL;
        AICommonWrapper::Setup(&v44, *p_ent);
        m_pAI = v44.m_pAI;
        if ( !v44.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 371, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
          __debugbreak();
        v34 = m_pAI->m_pAI->threat.hasThreateningEnemy && AICommonInterface::GetTargetEntity(m_pAI) != originator;
        _XMM0 = v34;
        __asm
        {
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm3, xmm8, xmm7, xmm2; defaultRadiusSqrd
        }
        v38 = AICommonInterface::EventVariableRadiusSqrd(m_pAI, originator, eType, *(float *)&_XMM3);
      }
      else
      {
        LODWORD(v38) = v9;
      }
      if ( v32 <= *(float *)&v38 )
      {
        Actor_EventListener_NotifyToListener(Entity, originator, eType, vOrigin);
        if ( AI_IsLiveBot(Entity) )
        {
          v39 = (const gentity_s **)&Entity->sentient->ai->ent;
          AIActorInterface::AIActorInterface(&v44.m_actorInterface);
          AIAgentInterface::AIAgentInterface(&v44.m_newAgentInterface);
          v44.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
          AICommonInterface::AICommonInterface(&v44.m_botInterface);
          v44.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
          AICommonInterface::AICommonInterface(&v44.m_botAgentInterface);
          v40 = NULL;
          v44.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
          v44.m_pAI = NULL;
          if ( v39 )
          {
            AICommonWrapper::Setup(&v44, *v39);
            v40 = v44.m_pAI;
          }
          if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 386, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
            __debugbreak();
          AICommonInterface::ReceivePointEvent(v40, originator, eType, vOrigin);
        }
      }
    }
  }
}

/*
==============
Actor_BroadcastVolumeEvent
==============
*/
void Actor_BroadcastVolumeEvent(gentity_s *originator, ai_event_t eType, const bitarray<224> *teamFlags, gentity_s *volumeEnt, float radius)
{
  const bitarray<224> *v6; 
  unsigned int v9; 
  const bitarray<224> *v10; 
  sentient_s *sentient; 
  int v12; 
  bitarray<224> *i; 
  float v14; 
  AIIterator *AIScriptedIterator; 
  __int64 v16; 
  gentity_s *v17; 
  unsigned __int64 eTeam; 
  unsigned int Instance; 
  float v20; 
  float v21; 
  float v22; 
  AICommonInterface *v23; 
  int j; 
  gentity_s *Entity; 
  unsigned int v26; 
  float v27; 
  float v28; 
  float v29; 
  const gentity_s **p_ent; 
  AICommonInterface *m_pAI; 
  __int64 v32; 
  __int64 v33; 
  AICommonWrapper v35; 
  bitarray<224> result; 

  v6 = teamFlags;
  if ( eType != AI_EV_BADPLACE_VOLUME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 741, ASSERT_TYPE_ASSERT, "(eType > AI_EV_FIRST_VOLUME_EVENT && eType < AI_EV_LAST_VOLUME_EVENT)", (const char *)&queryFormat, "eType > AI_EV_FIRST_VOLUME_EVENT && eType < AI_EV_LAST_VOLUME_EVENT") )
    __debugbreak();
  if ( !BG_AISystemEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 743, ASSERT_TYPE_ASSERT, "( BG_AISystemEnabled() )", (const char *)&queryFormat, "BG_AISystemEnabled()") )
    __debugbreak();
  v9 = 0;
  v10 = v6;
  do
  {
    if ( v10->array[0] )
      goto LABEL_18;
    ++v9;
    v10 = (const bitarray<224> *)((char *)v10 + 4);
  }
  while ( v9 < 7 );
  if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 747, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
    __debugbreak();
  sentient = originator->sentient;
  if ( sentient )
  {
    Sentient_EnemyTeamFlags(&result, sentient->eTeam);
    v12 = 0;
    for ( i = &result; !i->array[0]; i = (bitarray<224> *)((char *)i + 4) )
    {
      if ( (unsigned int)++v12 >= 7 )
        return;
    }
LABEL_18:
    v14 = radius * radius;
    if ( BG_ActorOrAgentSystemEnabled() )
    {
      AIScriptedIterator = AIScriptedInterface::GetAIScriptedIterator();
      v16 = AIScriptedIterator->GetFirst(AIScriptedIterator);
      while ( v16 )
      {
        v17 = (gentity_s *)v16;
        v16 = (__int64)AIScriptedIterator->GetNext(AIScriptedIterator);
        if ( v17 != originator || g_ai_event_info[(unsigned __int8)eType].notifySelf )
        {
          eTeam = (unsigned int)v17->sentient->eTeam;
          if ( (unsigned int)eTeam >= 0xE0 )
          {
            LODWORD(v33) = 224;
            LODWORD(v32) = v17->sentient->eTeam;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v32, v33) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (eTeam & 0x1F)) & teamFlags->array[eTeam >> 5]) != 0 )
          {
            Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, volumeEnt);
            v20 = v17->r.currentOrigin.v[0] - volumeEnt->r.currentOrigin.v[0];
            v21 = v17->r.currentOrigin.v[1] - volumeEnt->r.currentOrigin.v[1];
            v22 = v17->r.currentOrigin.v[2] - volumeEnt->r.currentOrigin.v[2];
            if ( (float)((float)((float)(v21 * v21) + (float)(v20 * v20)) + (float)(v22 * v22)) < v14 )
            {
              if ( PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, &v17->r.currentOrigin, Instance, volumeEnt) )
              {
                AIWrapper::AIWrapper((AIWrapper *)&v35, v17);
                v23 = (AICommonInterface *)v35.m_botInterface.__vftable;
                if ( !v35.m_botInterface.__vftable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 784, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
                  __debugbreak();
                AICommonInterface::ReceiveVolumeEvent(v23, originator, eType);
              }
            }
          }
        }
      }
      v6 = teamFlags;
    }
    for ( j = Actor_EventListener_First(eType, v6); j >= 0; j = Actor_EventListener_Next(j, eType, v6) )
    {
      Entity = Actor_EventListener_GetEntity(j);
      if ( Entity != originator || g_ai_event_info[(unsigned __int8)eType].notifySelf )
      {
        v26 = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, volumeEnt);
        v27 = Entity->r.currentOrigin.v[0] - volumeEnt->r.currentOrigin.v[0];
        v28 = Entity->r.currentOrigin.v[1] - volumeEnt->r.currentOrigin.v[1];
        v29 = Entity->r.currentOrigin.v[2] - volumeEnt->r.currentOrigin.v[2];
        if ( (float)((float)((float)(v28 * v28) + (float)(v27 * v27)) + (float)(v29 * v29)) < v14 )
        {
          if ( PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, &Entity->r.currentOrigin, v26, volumeEnt) )
          {
            Actor_EventListener_NotifyToListener(Entity, originator, eType, &volumeEnt->r.currentOrigin);
            if ( AI_IsLiveBot(Entity) )
            {
              p_ent = (const gentity_s **)&Entity->sentient->ai->ent;
              AIActorInterface::AIActorInterface(&v35.m_actorInterface);
              AIAgentInterface::AIAgentInterface(&v35.m_newAgentInterface);
              v35.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
              AICommonInterface::AICommonInterface(&v35.m_botInterface);
              v35.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
              AICommonInterface::AICommonInterface(&v35.m_botAgentInterface);
              m_pAI = NULL;
              v35.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
              v35.m_pAI = NULL;
              if ( p_ent )
              {
                AICommonWrapper::Setup(&v35, *p_ent);
                m_pAI = v35.m_pAI;
              }
              if ( !m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 812, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
                __debugbreak();
              AICommonInterface::ReceiveVolumeEvent(m_pAI, originator, eType);
            }
          }
        }
      }
    }
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
  const dvar_t *v2; 

  v1 = (unsigned __int8)eType;
  if ( !g_ai_event_info[(unsigned __int8)eType].busyDistDvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 105, ASSERT_TYPE_ASSERT, "(g_ai_event_info[eType].busyDistDvar)", (const char *)&queryFormat, "g_ai_event_info[eType].busyDistDvar") )
    __debugbreak();
  v2 = *g_ai_event_info[v1].busyDistDvar;
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 108, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  return v2->current.value * v2->current.value;
}

/*
==============
Actor_EventDefaultRadiusSqrd
==============
*/
float Actor_EventDefaultRadiusSqrd(ai_event_t eType)
{
  __int64 v1; 
  const dvar_t *v2; 

  v1 = (unsigned __int8)eType;
  if ( !g_ai_event_info[(unsigned __int8)eType].defaultDistDvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 91, ASSERT_TYPE_ASSERT, "(g_ai_event_info[eType].defaultDistDvar)", (const char *)&queryFormat, "g_ai_event_info[eType].defaultDistDvar") )
    __debugbreak();
  v2 = *g_ai_event_info[v1].defaultDistDvar;
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 94, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  return v2->current.value * v2->current.value;
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
  const tacpoint_t *v8; 
  const tacpoint_t *v9; 
  const dvar_t *v10; 
  gentity_s *ent; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  const dvar_t *v16; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1004, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1005, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  if ( !pCasualty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1006, ASSERT_TYPE_ASSERT, "(pCasualty)", (const char *)&queryFormat, "pCasualty") )
    __debugbreak();
  if ( !pAttacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1007, ASSERT_TYPE_ASSERT, "(pAttacker)", (const char *)&queryFormat, "pAttacker") )
    __debugbreak();
  this->ReactToDanger(this);
  v8 = Sentient_NearestTacPoint(this->m_pAI->sentient);
  v9 = Sentient_NearestTacPoint(pAttacker);
  if ( v8 && v9 && TacVisGraph_HasVis(v8, v9) && AICommonInterface::CanSeeEntity(this, pAttacker->ent) )
    this->GetPerfectInfo(this, pAttacker, reason);
  v10 = DVARFLT_ai_teamDeathListenRadius;
  ent = this->m_pAI->ent;
  v12 = ent->r.currentOrigin.v[0] - pCasualty->ent->r.currentOrigin.v[0];
  v13 = ent->r.currentOrigin.v[1] - pCasualty->ent->r.currentOrigin.v[1];
  v14 = ent->r.currentOrigin.v[2] - pCasualty->ent->r.currentOrigin.v[2];
  v15 = (float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14);
  if ( !DVARFLT_ai_teamDeathListenRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_teamDeathListenRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( pCasualty->eTeam == this->m_pAI->sentient->eTeam && v15 <= (float)(v10->current.value * v10->current.value) )
    this->ReactToTeamDeath(this, pCasualty, pAttacker);
  v16 = DVARFLT_ai_teamDeathRetreatDistance;
  if ( !DVARFLT_ai_teamDeathRetreatDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_teamDeathRetreatDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v15 < (float)(v16->current.value * v16->current.value) )
    this->UpdateRetreat(this);
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
  const bitarray<224> *AllCombatTeamFlags; 
  __int128 v13; 
  double v14; 
  unsigned int v15; 
  ai_common_t *v16; 
  sentient_s *v17; 
  float v18; 
  float v19; 
  float v20; 
  scrContext_t *v21; 
  scrContext_t *v22; 
  bitarray<224> result; 

  if ( !this->m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1085, ASSERT_TYPE_ASSERT, "(m_pAI)", (const char *)&queryFormat, "m_pAI") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 1086, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( !m_pAI->threat.ignoreExplosionEvents )
  {
    if ( originator )
    {
      sentient = originator->sentient;
      if ( sentient )
      {
        v10 = m_pAI->sentient;
        if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\sentient.h", 258, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
          __debugbreak();
        if ( level.teammode == TEAMMODE_FFA )
        {
          v11 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
            AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
          else
            AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
          v13 = *(_OWORD *)AllCombatTeamFlags->array;
          v14 = *(double *)&AllCombatTeamFlags->array[4];
          v15 = AllCombatTeamFlags->array[6] & 0xFFEFFFFF;
          *(_OWORD *)result.array = v13;
          *(double *)&result.array[4] = v14;
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
          v16 = this->m_pAI;
          v17 = originator->sentient;
          v18 = originator->r.currentOrigin.v[1] - v16->ent->r.currentOrigin.v[1];
          v19 = originator->r.currentOrigin.v[0] - v16->ent->r.currentOrigin.v[0];
          v20 = originator->r.currentOrigin.v[2] - v16->ent->r.currentOrigin.v[2];
          if ( (float)((float)((float)(v18 * v18) + (float)(v19 * v19)) + (float)(v20 * v20)) >= 262144.0 )
            AICommonInterface::UpdateLastKnownPos(this, v17, vOrigin, reason);
          else
            this->GetPerfectInfo(this, v17, reason);
        }
      }
    }
    this->EnterAlertState(this);
  }
  v21 = ScriptContext_Server();
  v22 = v21;
  if ( originator )
    GScr_AddEntity(originator);
  else
    Scr_AddUndefined(v21);
  Scr_AddVector(v22, vOrigin->v);
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
  playerState_s *v11; 
  float v12; 
  const dvar_t *v13; 
  const char *v14; 
  double Float_Internal_DebugName; 
  const dvar_t *v16; 
  double v17; 
  sentient_s *sentient; 
  team_t eTeam; 
  double v20; 
  const dvar_t *v21; 

  _XMM7 = *(_OWORD *)&defaultRadiusSqrd;
  if ( !this->m_pAI->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 133, ASSERT_TYPE_ASSERT, "(m_pAI->sentient)", (const char *)&queryFormat, "m_pAI->sentient") )
    __debugbreak();
  switch ( eType )
  {
    case AI_EV_FOOTSTEP:
      _XMM2 = LODWORD(this->m_pAI->threat.footstepDetectDistSq);
      break;
    case AI_EV_FOOTSTEP_WALK:
      _XMM2 = LODWORD(this->m_pAI->threat.footstepDetectDistWalkSq);
      break;
    case AI_EV_FOOTSTEP_SPRINT:
      _XMM2 = LODWORD(this->m_pAI->threat.footstepDetectDistSprintSq);
      break;
    default:
      goto LABEL_11;
  }
  __asm
  {
    vcmpneqss xmm1, xmm2, xmm0
    vblendvps xmm7, xmm7, xmm2, xmm1
  }
LABEL_11:
  if ( (unsigned __int8)(eType - 2) > 2u )
    return *(float *)&_XMM7;
  if ( !originator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 156, ASSERT_TYPE_ASSERT, "(originator)", (const char *)&queryFormat, "originator") )
    __debugbreak();
  if ( !this->m_pAI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_events.cpp", 157, ASSERT_TYPE_ASSERT, "(m_pAI->ent)", (const char *)&queryFormat, "m_pAI->ent") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(originator);
  v11 = G_GetEntityPlayerState(this->m_pAI->ent);
  v12 = FLOAT_1_0;
  if ( EntityPlayerState && BG_HasPerk(&EntityPlayerState->perks, 0x1Fu) )
  {
    if ( originator->client )
    {
      v13 = DCONST_DVARFLT_perk_footstepActorNotifyVolumeQuietPlayer;
      v14 = "perk_footstepActorNotifyVolumeQuietPlayer";
    }
    else
    {
      v13 = DCONST_DVARFLT_perk_footstepActorNotifyVolumeQuietNPC;
      v14 = "perk_footstepActorNotifyVolumeQuietNPC";
    }
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(v13, v14);
    v12 = *(float *)&Float_Internal_DebugName;
  }
  if ( v11 && BG_HasPerk(&v11->perks, 0x28u) )
  {
    v16 = DVARFLT_perk_footstepVolumeSelectiveHearingMin;
    if ( !DVARFLT_perk_footstepVolumeSelectiveHearingMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_footstepVolumeSelectiveHearingMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v12 < v16->current.value )
    {
      v17 = Dvar_GetFloat_Internal_DebugName(DVARFLT_perk_footstepVolumeSelectiveHearingMin, "perk_footstepVolumeSelectiveHearingMin");
      v12 = *(float *)&v17;
    }
    sentient = originator->sentient;
    if ( sentient && (eTeam = sentient->eTeam) != TEAM_ZERO && eTeam == this->m_pAI->sentient->eTeam )
    {
      v20 = Dvar_GetFloat_Internal_DebugName(DVARFLT_perk_footstepVolumeAlly, "perk_footstepVolumeAlly");
      v12 = v12 * *(float *)&v20;
    }
    else
    {
      v21 = DVARFLT_perk_footstepVolumeEnemy;
      if ( !DVARFLT_perk_footstepVolumeEnemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "perk_footstepVolumeEnemy") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      v12 = v12 * v21->current.value;
    }
  }
  if ( v12 == 1.0 )
    return *(float *)&_XMM7;
  else
    return (float)(v12 * *(float *)&_XMM7) * v12;
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
  gentity_s *v8; 
  __int128 v9; 
  float v13; 
  int v14; 
  AILookAtType v15; 
  __int64 v16; 
  float v17; 
  vec3_t worldPos; 
  vec3_t forward; 

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
  v8 = m_pAI->ent;
  v16 = *(_QWORD *)m_pAI->ent->r.currentOrigin.v;
  v17 = v8->r.currentOrigin.v[2];
  worldPos = pCasualty->ent->r.currentOrigin;
  EntHandle::setEnt(&m_pAI->lastTeamKillerEnemy, ent);
  this->m_pAI->lastNearbyTeammateKilledTime = level.time;
  this->AddSuppressionLine(this, pAttacker, &pAttacker->ent->r.currentOrigin, (const vec3_t *)&v16, (const vec3_t *)&v16);
  v9 = LODWORD(worldPos.v[1]);
  *(float *)&v9 = fsqrt((float)((float)(worldPos.v[1] - *((float *)&v16 + 1)) * (float)(worldPos.v[1] - *((float *)&v16 + 1))) + (float)((float)(worldPos.v[0] - *(float *)&v16) * (float)(worldPos.v[0] - *(float *)&v16)));
  _XMM3 = v9;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  v13 = (float)(worldPos.v[0] - *(float *)&v16) * (float)(1.0 / *(float *)&_XMM0);
  *(float *)&v9 = (float)(worldPos.v[1] - *((float *)&v16 + 1)) * (float)(1.0 / *(float *)&_XMM0);
  AngleVectors(&this->m_pAI->ent->r.currentAngles, &forward, NULL, NULL);
  if ( (float)((float)(*(float *)&v9 * forward.v[1]) + (float)(v13 * forward.v[0])) >= 0.175 )
  {
    v14 = G_irand(300, 400);
    LOBYTE(v15) = 5;
    AIScriptedInterface::SetGlancePos(this, &worldPos, v15, 1, v14);
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

