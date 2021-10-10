/*
==============
AIActorInterface::BecomeCorpse
==============
*/

int __fastcall AIActorInterface::BecomeCorpse(AIActorInterface *this)
{
  return ?BecomeCorpse@AIActorInterface@@UEBAHXZ(this);
}

/*
==============
G_GetActorCorpseAnimTree
==============
*/

XAnimTree *__fastcall G_GetActorCorpseAnimTree(gentity_s *ent)
{
  return ?G_GetActorCorpseAnimTree@@YAPEAUXAnimTree@@PEAUgentity_s@@@Z(ent);
}

/*
==============
G_RemoveActorCorpses
==============
*/

void __fastcall G_RemoveActorCorpses(int allowedCorpseCount)
{
  ?G_RemoveActorCorpses@@YAXH@Z(allowedCorpseCount);
}

/*
==============
BG_ActorCorpse_SynchEnabled
==============
*/

bool __fastcall BG_ActorCorpse_SynchEnabled()
{
  return ?BG_ActorCorpse_SynchEnabled@@YA_NXZ();
}

/*
==============
CG_ActorCorpse_PhysicsOriginFrameToggle
==============
*/

void CG_ActorCorpse_PhysicsOriginFrameToggle(void)
{
  ?CG_ActorCorpse_PhysicsOriginFrameToggle@@YAXXZ();
}

/*
==============
G_GetActorCorpseIndexAnimTree
==============
*/

XAnimTree *__fastcall G_GetActorCorpseIndexAnimTree(int index)
{
  return ?G_GetActorCorpseIndexAnimTree@@YAPEAUXAnimTree@@H@Z(index);
}

/*
==============
G_ActorCorpse_PhysicsOriginFrameRead
==============
*/

void G_ActorCorpse_PhysicsOriginFrameRead(void)
{
  ?G_ActorCorpse_PhysicsOriginFrameRead@@YAXXZ();
}

/*
==============
AIActorInterface::PruneLoadedCorpses
==============
*/

void AIActorInterface::PruneLoadedCorpses(void)
{
  ?PruneLoadedCorpses@AIActorInterface@@SAXXZ();
}

/*
==============
G_GetFreeActorCorpseIndex
==============
*/

int __fastcall G_GetFreeActorCorpseIndex(bool reuse)
{
  return ?G_GetFreeActorCorpseIndex@@YAH_N@Z(reuse);
}

/*
==============
G_GetActorCorpseIndexByEntNum
==============
*/

int __fastcall G_GetActorCorpseIndexByEntNum(int entNum)
{
  return ?G_GetActorCorpseIndexByEntNum@@YAHH@Z(entNum);
}

/*
==============
ActorCorpse_Free
==============
*/

void __fastcall ActorCorpse_Free(gentity_s *ent)
{
  ?ActorCorpse_Free@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
AIScriptedInterface::GetBodyPlantAngles
==============
*/

void __fastcall AIScriptedInterface::GetBodyPlantAngles(int iEntNum, int iClipMask, const vec3_t *vOrigin, const float fYaw, float *pfPitch, float *pfRoll, float *pfHeight)
{
  ?GetBodyPlantAngles@AIScriptedInterface@@SAXHHAEBTvec3_t@@MPEAM11@Z(iEntNum, iClipMask, vOrigin, fYaw, pfPitch, pfRoll, pfHeight);
}

/*
==============
G_GetActorCorpseIndex
==============
*/

int __fastcall G_GetActorCorpseIndex(gentity_s *ent)
{
  return ?G_GetActorCorpseIndex@@YAHPEAUgentity_s@@@Z(ent);
}

/*
==============
Actor_CorpseThink
==============
*/

void __fastcall Actor_CorpseThink(gentity_s *self)
{
  ?Actor_CorpseThink@@YAXPEAUgentity_s@@@Z(self);
}

/*
==============
AIActorInterface::OrientCorpseToGround
==============
*/

void __fastcall AIActorInterface::OrientCorpseToGround(gentity_s *self, int bLerp)
{
  ?OrientCorpseToGround@AIActorInterface@@SAXPEAUgentity_s@@H@Z(self, bLerp);
}

/*
==============
G_UpdateActorCorpses
==============
*/

void G_UpdateActorCorpses(void)
{
  ?G_UpdateActorCorpses@@YAXXZ();
}

/*
==============
CG_ActorCorpse_PhysicsOriginWrite
==============
*/

void __fastcall CG_ActorCorpse_PhysicsOriginWrite(int iEntNum, const vec3_t *inOrigin)
{
  ?CG_ActorCorpse_PhysicsOriginWrite@@YAXHAEBTvec3_t@@@Z(iEntNum, inOrigin);
}

/*
==============
AIScriptedInterface::OrientPitchToGround
==============
*/

void __fastcall AIScriptedInterface::OrientPitchToGround(AIScriptedInterface *this, int bLerp)
{
  ?OrientPitchToGround@AIScriptedInterface@@QEBAXH@Z(this, bLerp);
}

/*
==============
ActorCorpse_Free
==============
*/
void ActorCorpse_Free(gentity_s *ent)
{
  __int64 ActorCorpseIndex; 
  int *p_entnum; 

  ActorCorpseIndex = G_GetActorCorpseIndex(ent);
  p_entnum = &GameScriptDataSP::GetGameScriptDataSP()->actorCorpseInfo[ActorCorpseIndex].entnum;
  if ( *p_entnum != ent->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 412, ASSERT_TYPE_ASSERT, "(gScrData->actorCorpseInfo[actorCorpseIndex].entnum == ent->s.number)", (const char *)&queryFormat, "gScrData->actorCorpseInfo[actorCorpseIndex].entnum == ent->s.number") )
    __debugbreak();
  *p_entnum = -1;
}

/*
==============
Actor_CorpseThink
==============
*/
void Actor_CorpseThink(gentity_s *self)
{
  char *Value; 
  int *v3; 
  _QWORD *v4; 
  char *v5; 
  int *v6; 
  unsigned __int64 v7; 
  ThreadContext CurrentThreadContext; 
  bool v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  int v13; 

  Value = (char *)Sys_GetValue(0);
  v3 = (int *)(Value + 12256);
  if ( (unsigned int)(*((_DWORD *)Value + 3064) + 1) >= 3 )
  {
    v13 = 3;
    v11 = *((_DWORD *)Value + 3064) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  if ( (unsigned int)++*v3 >= 3 )
  {
    LODWORD(v12) = 3;
    LODWORD(v10) = *v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  v4 = Value + 2088;
  v5 = Value + 40;
  if ( *v4 < (unsigned __int64)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v4 += 8i64;
  if ( *v4 >= (unsigned __int64)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v4 = v3;
  if ( *v4 <= (unsigned __int64)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v6 = &v3[*v3 + 2];
  v7 = __rdtsc();
  *v6 = v7;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 254, NULL, 0);
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v9 = self->tagInfo == NULL;
  self->nextthink = level.time + level.frameDuration;
  if ( !v9 )
  {
    if ( self->s.lerp.pos.trType >= TR_RAGDOLL_BLEND && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 430, ASSERT_TYPE_ASSERT, "(self->s.lerp.pos.trType < TR_FIRST_RAGDOLL || self->s.lerp.pos.trType < TR_LAST_RAGDOLL)", "%s\n\tLinked ragdoll - will interrupt ragdoll state and bolt a corpse onto an object :(", "self->s.lerp.pos.trType < TR_FIRST_RAGDOLL || self->s.lerp.pos.trType < TR_LAST_RAGDOLL") )
      __debugbreak();
    G_GeneralLink(self);
  }
  Profile_EndInternal(NULL);
}

/*
==============
Actor_SetBodyPlantAngle
==============
*/
float Actor_SetBodyPlantAngle(const int entNum, const int clipMask, const vec3_t *origin, const vec3_t *center, const vec3_t *dir, float *angleOut, int movingPlatform, vec3_t *up)
{
  __int64 passEntityNum; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  __int64 v42; 
  gentity_s *v43; 
  double v44; 
  float v45; 
  const dvar_t *v48; 
  __int64 contentmask; 
  __int64 v50; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v53; 
  vec3_t v54; 
  vec3_t vec; 
  Bounds bounds; 
  trace_t results; 

  passEntityNum = entNum;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "Actor_SetBodyPlantAngle");
  v12 = origin->v[0];
  v13 = origin->v[1];
  v14 = origin->v[2];
  bounds.halfSize.v[1] = FLOAT_4_0;
  bounds.halfSize.v[2] = FLOAT_4_0;
  start.v[0] = v12;
  start.v[1] = v13;
  *(_OWORD *)bounds.midPoint.v = _xmm;
  if ( movingPlatform )
  {
    v12 = (float)(30.0 * up->v[0]) + v12;
    v13 = (float)(30.0 * up->v[1]) + v13;
    v15 = (float)(30.0 * up->v[2]) + v14;
    start.v[0] = v12;
    start.v[1] = v13;
  }
  else
  {
    v15 = v14 + 30.0;
  }
  end.v[0] = (float)(10.8 * dir->v[0]) + v12;
  v16 = 10.8 * dir->v[2];
  end.v[1] = (float)(10.8 * dir->v[1]) + v13;
  end.v[2] = v16 + v15;
  start.v[2] = v15;
  G_Main_TraceCapsule(&results, &start, &end, &bounds, passEntityNum, clipMask);
  v17 = 0.0;
  if ( results.fraction == 0.0 )
    goto LABEL_5;
  v19 = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
  v20 = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
  v21 = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
  start.v[2] = v21;
  start.v[0] = v19;
  start.v[1] = v20;
  end.v[0] = v19;
  end.v[1] = v20;
  if ( movingPlatform )
  {
    v22 = 60.0 * up->v[1];
    end.v[0] = v19 - (float)(60.0 * up->v[0]);
    v23 = v20 - v22;
    v24 = 60.0 * up->v[2];
    end.v[1] = v23;
    end.v[2] = v21 - v24;
  }
  else
  {
    end.v[2] = origin->v[2] - 30.0;
  }
  G_Main_TraceCapsule(&results, &start, &end, &bounds, passEntityNum, clipMask);
  if ( results.startsolid || results.fraction >= 1.0 )
  {
    v25 = center->v[1];
    v53.v[0] = center->v[0];
    v53.v[2] = center->v[2];
    v53.v[1] = v25;
  }
  else
  {
    v53.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
    v53.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
    v53.v[2] = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
  }
  v26 = origin->v[0];
  v27 = origin->v[1];
  v28 = origin->v[2];
  start.v[0] = origin->v[0];
  start.v[1] = v27;
  if ( movingPlatform )
  {
    v26 = (float)(30.0 * up->v[0]) + v26;
    v27 = (float)(30.0 * up->v[1]) + v27;
    v29 = (float)(30.0 * up->v[2]) + v28;
    start.v[0] = v26;
    start.v[1] = v27;
  }
  else
  {
    v29 = v28 + 30.0;
  }
  v30 = 10.8 * dir->v[1];
  end.v[0] = v26 - (float)(10.8 * dir->v[0]);
  v31 = v27 - v30;
  v32 = 10.8 * dir->v[2];
  end.v[1] = v31;
  end.v[2] = v29 - v32;
  start.v[2] = v29;
  G_Main_TraceCapsule(&results, &start, &end, &bounds, passEntityNum, clipMask);
  if ( results.fraction == 0.0 )
  {
LABEL_5:
    *angleOut = 0.0;
    Sys_ProfEndNamedEvent();
    return center->v[2];
  }
  else
  {
    v33 = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
    v34 = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
    v35 = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
    start.v[2] = v35;
    start.v[0] = v33;
    start.v[1] = v34;
    end.v[0] = v33;
    end.v[1] = v34;
    if ( movingPlatform )
    {
      v36 = 60.0 * up->v[1];
      end.v[0] = v33 - (float)(60.0 * up->v[0]);
      v37 = v34 - v36;
      v38 = 60.0 * up->v[2];
      end.v[1] = v37;
      end.v[2] = v35 - v38;
    }
    else
    {
      end.v[2] = origin->v[2] - 30.0;
    }
    G_Main_TraceCapsule(&results, &start, &end, &bounds, passEntityNum, clipMask);
    if ( results.startsolid || results.fraction >= 1.0 )
    {
      v39 = center->v[0];
      v40 = center->v[1];
      v41 = center->v[2];
    }
    else
    {
      v39 = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
      v40 = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
      v41 = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
    }
    v54.v[2] = v41;
    v54.v[1] = v40;
    v54.v[0] = v39;
    if ( v53.v[0] == v39 && v53.v[1] == v40 && v53.v[2] == v41 )
    {
      if ( (unsigned int)passEntityNum >= 0x7FE )
      {
        LODWORD(contentmask) = passEntityNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 536, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "entNum doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", contentmask, 2046) )
          __debugbreak();
      }
      if ( (unsigned int)passEntityNum >= 0x800 )
      {
        LODWORD(v50) = 2048;
        LODWORD(contentmask) = passEntityNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", contentmask, v50) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v42 = passEntityNum;
      if ( g_entities[passEntityNum].r.isInUse != g_entityIsInUse[passEntityNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[passEntityNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 537, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( entNum ))", (const char *)&queryFormat, "G_IsEntityInUse( entNum )") )
        __debugbreak();
      v43 = &g_entities[v42];
      if ( movingPlatform && (unsigned int)(v43->s.lerp.pos.trType - 23) > 5 )
      {
        G_EntUnlink(&g_entities[v42]);
        G_SetOriginAndAngle(v43, &v43->r.currentOrigin, &v43->r.currentAngles, 1, 1);
        v43->s.lerp.pos.trType = TR_GRAVITY;
        v43->s.lerp.pos.trTime = level.time;
      }
    }
    else
    {
      vec.v[0] = v53.v[0] - v39;
      vec.v[2] = v53.v[2] - v41;
      vec.v[1] = v53.v[1] - v40;
      v44 = vectopitch(&vec);
      v45 = *(float *)&v44 * 0.0027777778;
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm3, 1 }
      v17 = (float)(v45 - *(float *)&_XMM4) * 360.0;
    }
    *angleOut = v17;
    v48 = DVARBOOL_ai_debugCorpsePlant;
    if ( !DVARBOOL_ai_debugCorpsePlant && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugCorpsePlant") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v48);
    if ( v48->current.enabled )
    {
      G_DebugLine(&v53, center, &colorWhite, 0);
      G_DebugLine(center, &v54, &colorWhite, 0);
    }
    Sys_ProfEndNamedEvent();
    return (float)((float)(v53.v[2] + center->v[2]) + v54.v[2]) * 0.33333334;
  }
}

/*
==============
BG_ActorCorpse_SynchEnabled
==============
*/
bool BG_ActorCorpse_SynchEnabled()
{
  const dvar_t *v0; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE|0x80) )
    return 0;
  v0 = DVARBOOL_ai_corpseSynch;
  if ( !DVARBOOL_ai_corpseSynch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_corpseSynch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled;
}

/*
==============
AIActorInterface::BecomeCorpse
==============
*/
__int64 AIActorInterface::BecomeCorpse(AIActorInterface *this)
{
  gentity_s *v2; 
  int FreeActorCorpseIndex; 
  __int64 v4; 
  int IsProne; 
  actor_s *m_pAI; 
  int v8; 
  int number; 
  Ai_Asm *v10; 
  actor_s *v11; 
  gentity_s *v12; 
  unsigned __int16 groundEntNum; 
  trajectory_t_secure *p_pos; 
  trType_t trType; 
  __int64 v16; 
  GameScriptDataSP *GameScriptDataSP; 
  scrContext_t *v18; 
  __int128 v19; 
  double v20; 

  v2 = this->GetEntity(this);
  Sys_ProfBeginNamedEvent(0xFFFF0000, "Actor_BecomeCorpse");
  FreeActorCorpseIndex = G_GetFreeActorCorpseIndex(1);
  v4 = FreeActorCorpseIndex;
  if ( FreeActorCorpseIndex >= 0 )
  {
    AIActorInterface::GetActorIndex(this->m_pAI);
    IsProne = BG_ActorIsProne(&this->m_pAI->ProneInfo, level.time);
    m_pAI = this->m_pAI;
    v19 = *(_OWORD *)&m_pAI->ProneInfo.bCorpseOrientation;
    v20 = *(double *)&m_pAI->ProneInfo.fTorsoPitch;
    if ( IsProne || m_pAI->eAnimMode == AI_ANIM_NOPHYSICS || v2->tagInfo || (v8 = 1, m_pAI->painDeath.disableDeathOrient) )
      v8 = 0;
    Actor_EventListener_RemoveEntity(v2->s.number);
    AI_BT_FreeTreeInstance(v2->s.number);
    number = v2->s.number;
    v10 = Ai_Asm::Singleton();
    Ai_Asm::FreeInstance(v10, NULL, number);
    if ( BGMovingPlatforms::IsMovingPlatform(this->m_pAI->Physics.groundEntNum) )
    {
      if ( !Com_IsRagdollTrajectory(&v2->s.lerp.pos) )
      {
        v11 = this->m_pAI;
        if ( !v11->ent->tagInfo )
        {
          if ( G_IsEntityInUse(v11->Physics.groundEntNum) )
          {
            v12 = g_entities;
            if ( g_entities[this->m_pAI->Physics.groundEntNum].s.eType == ET_SCRIPTMOVER )
            {
              if ( GameModeFlagValues::ms_spValue != ACTIVE )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
                  __debugbreak();
                v12 = g_entities;
              }
              groundEntNum = this->m_pAI->Physics.groundEntNum;
              if ( (v2->flags.m_flags[1] & 8) != 0 )
                EntHandle::setEnt(&v2->movingPlatformTrack.m_trackEnt, &v12[groundEntNum]);
              else
                G_EntLinkTo(v2, &v12[groundEntNum], (scr_string_t)0, 0, NULL);
            }
          }
        }
      }
    }
    this->Free(this);
    if ( v2->actor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 886, ASSERT_TYPE_ASSERT, "(self->actor == 0)", (const char *)&queryFormat, "self->actor == NULL") )
      __debugbreak();
    if ( v2->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 887, ASSERT_TYPE_ASSERT, "(self->sentient == 0)", (const char *)&queryFormat, "self->sentient == NULL") )
      __debugbreak();
    p_pos = &v2->s.lerp.pos;
    v2->handler = 3;
    v2->clipmask = 131089;
    v2->s.eType = ET_ACTOR_CORPSE;
    v2->c.item[0].clipAmmoCount[1] = 0;
    v2->c.item[0].ammoCount = 2047;
    v2->physicsObject = 1;
    if ( v2 == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2263, ASSERT_TYPE_ASSERT, "(trajectory)", (const char *)&queryFormat, "trajectory") )
      __debugbreak();
    trType = p_pos->trType;
    if ( (unsigned int)(p_pos->trType - 23) > 5 )
      trType = TR_STATIONARY;
    else
      v8 = 0;
    G_SetOrigin(v2, &v2->r.currentOrigin, 1, 1);
    p_pos->trType = trType;
    v16 = v4;
    GameScriptDataSP = GameScriptDataSP::GetGameScriptDataSP();
    GameScriptDataSP->actorCorpseInfo[v16].tree = v2->pAnimTree;
    GameScriptDataSP->actorCorpseInfo[v16].entnum = v2->s.number;
    GameScriptDataSP->actorCorpseInfo[v16].physicsOrigin = v2->r.currentOrigin;
    GScr_Notify(v2, scr_const.death, 0);
    GScr_Notify(v2, scr_const.death_or_disconnect, 0);
    v18 = ScriptContext_Server();
    Scr_FreeEntityNum(v18, v2->s.number, ENTITY_CLASS_GENTITY);
    *(_OWORD *)&GameScriptDataSP->actorCorpseInfo[v4].proneInfo.bCorpseOrientation = v19;
    *(double *)&GameScriptDataSP->actorCorpseInfo[v4].proneInfo.fTorsoPitch = v20;
    if ( v8 )
    {
      if ( !GameScriptDataSP->actorCorpseInfo[v4].proneInfo.bCorpseOrientation )
      {
        *(_QWORD *)&GameScriptDataSP->actorCorpseInfo[v4].proneInfo.fTorsoPitch = 0i64;
        GameScriptDataSP->actorCorpseInfo[v4].proneInfo.bCorpseOrientation = 1;
        GameScriptDataSP->actorCorpseInfo[v4].proneInfo.iProneTime = level.time;
        GameScriptDataSP->actorCorpseInfo[v4].proneInfo.prone = 1;
        GameScriptDataSP->actorCorpseInfo[v4].proneInfo.iProneTrans = 500;
      }
      AIActorInterface::OrientCorpseToGround(v2, 0);
    }
    G_UtilsSP_DObjUpdateAndKeepHiddenPartBits(v2, 1);
    Sys_ProfEndNamedEvent();
    return 1i64;
  }
  else
  {
    Sys_ProfEndNamedEvent();
    return 0i64;
  }
}

/*
==============
CG_ActorCorpse_PhysicsOriginFrameToggle
==============
*/
void CG_ActorCorpse_PhysicsOriginFrameToggle(void)
{
  CorpseSynchBuffer *v0; 

  if ( !*(_QWORD *)&sCorpseSynchWrite && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 971, ASSERT_TYPE_ASSERT, "(sCorpseSynchWrite)", (const char *)&queryFormat, "sCorpseSynchWrite") )
    __debugbreak();
  if ( BG_ActorCorpse_SynchEnabled() && **(_DWORD **)&sCorpseSynchWrite )
  {
    Sys_EnterCriticalSection(CRITSECT_CORPSE_SYNCH);
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 982, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    v0 = sCorpseSynchRead;
    sCorpseSynchRead = *(CorpseSynchBuffer **)&sCorpseSynchWrite;
    *(_QWORD *)&sCorpseSynchWrite = v0;
    v0->count = 0;
    Sys_LeaveCriticalSection(CRITSECT_CORPSE_SYNCH);
  }
}

/*
==============
CG_ActorCorpse_PhysicsOriginWrite
==============
*/
void CG_ActorCorpse_PhysicsOriginWrite(int iEntNum, const vec3_t *inOrigin)
{
  int *v4; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  _DWORD *v8; 
  __int64 v9; 
  __int64 v10; 

  if ( BG_ActorCorpse_SynchEnabled() )
  {
    v4 = *(int **)&sCorpseSynchWrite;
    if ( !*(_QWORD *)&sCorpseSynchWrite )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 1009, sCorpseSynchWrite, "(sCorpseSynchWrite)", (const char *)&queryFormat, "sCorpseSynchWrite") )
        __debugbreak();
      v4 = *(int **)&sCorpseSynchWrite;
    }
    v5 = *v4;
    v6 = 0;
    if ( (int)v5 <= 0 )
    {
LABEL_10:
      if ( (unsigned int)v5 < 0x1C )
      {
        v4[v5 + 1] = iEntNum;
        v9 = 3i64 * *v4;
        v4[v9 + 29] = LODWORD(inOrigin->v[0]);
        v4[v9 + 30] = LODWORD(inOrigin->v[1]);
        v4[v9 + 31] = LODWORD(inOrigin->v[2]);
        ++*v4;
      }
    }
    else
    {
      v7 = 0i64;
      v8 = v4 + 1;
      while ( *v8 != iEntNum )
      {
        ++v6;
        ++v7;
        ++v8;
        if ( v7 >= v5 )
          goto LABEL_10;
      }
      v10 = 3i64 * v6;
      v4[v10 + 29] = LODWORD(inOrigin->v[0]);
      v4[v10 + 30] = LODWORD(inOrigin->v[1]);
      v4[v10 + 31] = LODWORD(inOrigin->v[2]);
    }
  }
}

/*
==============
G_ActorCorpse_PhysicsOriginFrameRead
==============
*/
void G_ActorCorpse_PhysicsOriginFrameRead(void)
{
  GameScriptDataSP *GameScriptDataSP; 
  int v1; 
  __int64 v2; 
  __int64 v3; 
  int v4; 
  GameScriptDataSP *v5; 
  int v6; 
  __int64 v7; 
  int *p_entnum; 
  CorpseSynchBuffer *v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  if ( SV_IsDemoPlaying() )
  {
    SV_DemoSP_GetCorpseOrigins();
  }
  else
  {
    GameScriptDataSP = GameScriptDataSP::GetGameScriptDataSP();
    if ( BG_ActorCorpse_SynchEnabled() )
    {
      Sys_EnterCriticalSection(CRITSECT_CORPSE_SYNCH);
      if ( !sCorpseSynchRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 1050, ASSERT_TYPE_ASSERT, "(sCorpseSynchRead)", (const char *)&queryFormat, "sCorpseSynchRead") )
        __debugbreak();
      if ( sCorpseSynchRead->count > 0x1Cu )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 1051, ASSERT_TYPE_ASSERT, "(sCorpseSynchRead->count <= ( sizeof( *array_counter( sCorpseSynchRead->entNum ) ) + 0 ))", (const char *)&queryFormat, "sCorpseSynchRead->count <= ARRAY_COUNT( sCorpseSynchRead->entNum )") )
          __debugbreak();
        if ( sCorpseSynchRead->count > 0x1Cu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 1052, ASSERT_TYPE_ASSERT, "(sCorpseSynchRead->count <= ( sizeof( *array_counter( sCorpseSynchRead->physicsOrigin ) ) + 0 ))", (const char *)&queryFormat, "sCorpseSynchRead->count <= ARRAY_COUNT( sCorpseSynchRead->physicsOrigin )") )
          __debugbreak();
      }
      v1 = 0;
      if ( sCorpseSynchRead->count > 0 )
      {
        v2 = 0i64;
        v3 = 0i64;
        do
        {
          v4 = sCorpseSynchRead->entNum[v3];
          v5 = GameScriptDataSP::GetGameScriptDataSP();
          v6 = 0;
          v7 = 0i64;
          p_entnum = &v5->actorCorpseInfo[0].entnum;
          while ( *p_entnum != v4 )
          {
            ++v6;
            ++v7;
            p_entnum += 12;
            if ( v7 >= 28 )
              goto LABEL_23;
          }
          if ( v6 >= 0 )
          {
            if ( (unsigned int)v6 >= 0x1C )
            {
              LODWORD(v12) = 28;
              LODWORD(v11) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 1061, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( gScrData->actorCorpseInfo ) ) + 0 ) )", "corpseIndex doesn't index ARRAY_COUNT( gScrData->actorCorpseInfo )\n\t%i not in [0, %i)", v11, v12) )
                __debugbreak();
            }
            v9 = sCorpseSynchRead;
            v10 = v7;
            GameScriptDataSP->actorCorpseInfo[v10].physicsOrigin.v[0] = sCorpseSynchRead->physicsOrigin[v2].v[0];
            GameScriptDataSP->actorCorpseInfo[v10].physicsOrigin.v[1] = v9->physicsOrigin[v2].v[1];
            GameScriptDataSP->actorCorpseInfo[v10].physicsOrigin.v[2] = v9->physicsOrigin[v2].v[2];
          }
LABEL_23:
          ++v1;
          ++v3;
          ++v2;
        }
        while ( v1 < sCorpseSynchRead->count );
      }
      sCorpseSynchRead->count = 0;
      Sys_LeaveCriticalSection(CRITSECT_CORPSE_SYNCH);
    }
    SV_DemoSP_RecordCorpseOrigins();
  }
}

/*
==============
G_GetActorCorpseAnimTree
==============
*/
XAnimTree *G_GetActorCorpseAnimTree(gentity_s *ent)
{
  GameScriptDataSP *GameScriptDataSP; 

  GameScriptDataSP = GameScriptDataSP::GetGameScriptDataSP();
  return GameScriptDataSP->actorCorpseInfo[G_GetActorCorpseIndex(ent)].tree;
}

/*
==============
G_GetActorCorpseIndex
==============
*/
__int64 G_GetActorCorpseIndex(gentity_s *ent)
{
  int number; 
  GameScriptDataSP *GameScriptDataSP; 
  int v3; 
  __int64 v4; 
  int *p_entnum; 

  number = ent->s.number;
  GameScriptDataSP = GameScriptDataSP::GetGameScriptDataSP();
  v3 = 0;
  v4 = 0i64;
  p_entnum = &GameScriptDataSP->actorCorpseInfo[0].entnum;
  while ( *p_entnum != number )
  {
    ++v3;
    ++v4;
    p_entnum += 12;
    if ( v4 >= 28 )
    {
      v3 = -1;
      goto LABEL_6;
    }
  }
  if ( v3 >= 0 )
    return (unsigned int)v3;
LABEL_6:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 96, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "G_GetActorCorpseIndex called for non actor corpse") )
    __debugbreak();
  return (unsigned int)v3;
}

/*
==============
G_GetActorCorpseIndexAnimTree
==============
*/
XAnimTree *G_GetActorCorpseIndexAnimTree(int index)
{
  __int64 v1; 
  GameScriptDataSP *GameScriptDataSP; 
  int v4; 
  int v5; 

  v1 = index;
  GameScriptDataSP = GameScriptDataSP::GetGameScriptDataSP();
  if ( (unsigned int)v1 >= 0x1C )
  {
    v5 = 28;
    v4 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 58, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( gScrData->actorCorpseInfo ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( gScrData->actorCorpseInfo )\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  return GameScriptDataSP->actorCorpseInfo[v1].tree;
}

/*
==============
G_GetActorCorpseIndexByEntNum
==============
*/
__int64 G_GetActorCorpseIndexByEntNum(int entNum)
{
  GameScriptDataSP *GameScriptDataSP; 
  unsigned int v3; 
  __int64 v4; 
  int *i; 

  GameScriptDataSP = GameScriptDataSP::GetGameScriptDataSP();
  v3 = 0;
  v4 = 0i64;
  for ( i = &GameScriptDataSP->actorCorpseInfo[0].entnum; *i != entNum; i += 12 )
  {
    ++v3;
    if ( ++v4 >= 28 )
      return 0xFFFFFFFFi64;
  }
  return v3;
}

/*
==============
G_GetFreeActorCorpseIndex
==============
*/
__int64 G_GetFreeActorCorpseIndex(bool reuse)
{
  int v1; 
  int v3; 
  float v5; 
  _BYTE *v7; 
  __int64 v8; 
  float *v9; 
  gentity_s *v10; 
  __int128 v11; 
  __int128 v12; 
  int v16; 
  GameScriptDataSP *GameScriptDataSP; 
  int actorCorpseCount; 
  __int64 v19; 
  GameScriptDataSP *v20; 
  int v21; 
  gentity_s *gentities; 
  int *p_entnum; 
  __int128 v24; 
  float v25; 
  __int64 v26; 
  int v27; 
  __int64 result; 
  int v29; 
  gentity_s *v30; 
  __int64 v31; 
  int v35; 
  __int128 v36; 
  float v37; 
  __int64 v38; 
  float v39; 
  float v40; 
  __int128 v41; 
  float v46; 
  float v50; 
  float v51; 
  __int128 v52; 
  float v57; 
  float v61; 
  float v62; 
  __int128 v63; 
  float v68; 
  float v72; 
  float v73; 
  __int128 v74; 
  float v79; 
  unsigned __int8 *v80; 
  __int64 v81; 
  __int64 v82; 
  float v83; 
  __int128 v84; 
  float v85; 
  float v90; 
  bool v95; 
  _BYTE v96[3]; 
  int v97; 
  float v98; 
  int v99; 
  float v100; 
  int v101; 
  int v102; 
  unsigned int v103; 
  vec3_t outForward; 
  int v105; 
  vec3_t vEyePosOut; 
  int v107[8]; 

  v95 = reuse;
  v1 = 0;
  v98 = FLOAT_N1_0;
  _XMM15 = LODWORD(FLOAT_N1_0);
  v97 = 0;
  v3 = 0;
  _XMM14 = LODWORD(FLOAT_N1_0);
  v101 = 0;
  v5 = FLOAT_N1_0;
  v99 = 0;
  _XMM7 = 0i64;
  if ( level.maxclients > 0 )
  {
    v7 = v96;
    v8 = 0i64;
    v9 = &outForward.v[1];
    do
    {
      v10 = &g_entities[v8];
      if ( !g_entities[v8].client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 142, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
        __debugbreak();
      Sentient_GetEyePosition(v10->sentient, &vEyePosOut + v3);
      G_Client_GetViewDirection(v10, &outForward + v3, NULL, NULL);
      *v7 = 1;
      v9[1] = 0.0;
      v11 = *((unsigned int *)v9 - 1);
      v12 = v11;
      *(float *)&v12 = fsqrt((float)(*(float *)&v11 * *(float *)&v11) + (float)(*v9 * *v9));
      _XMM3 = v12;
      __asm
      {
        vcmpless xmm0, xmm3, xmm8
        vblendvps xmm0, xmm3, xmm6, xmm0
      }
      *(v9 - 1) = *(float *)&v11 * (float)(1.0 / *(float *)&_XMM0);
      *v9 = (float)(1.0 / *(float *)&_XMM0) * *v9;
      if ( *(float *)&v12 == 0.0 )
      {
        *v7 = 0;
        G_Client_GetViewDirection(v10, &outForward + v3, NULL, NULL);
      }
      ++v3;
      ++v8;
      v9 += 3;
      ++v7;
    }
    while ( v3 < level.maxclients );
    v1 = v97;
  }
  v16 = 0;
  GameScriptDataSP = GameScriptDataSP::GetGameScriptDataSP();
  actorCorpseCount = level.actorCorpseCount;
  v19 = 0i64;
  v20 = GameScriptDataSP;
  v21 = 0;
  if ( level.actorCorpseCount <= 0 )
  {
LABEL_82:
    if ( v95 && actorCorpseCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 224, ASSERT_TYPE_ASSERT, "(!reuse || !level.actorCorpseCount)", (const char *)&queryFormat, "!reuse || !level.actorCorpseCount") )
      __debugbreak();
    return 0xFFFFFFFFi64;
  }
  gentities = level.gentities;
  p_entnum = &GameScriptDataSP->actorCorpseInfo[0].entnum;
  v24 = LODWORD(FLOAT_3_4028235e38);
  v25 = FLOAT_0_5;
  do
  {
    v26 = *p_entnum;
    if ( (_DWORD)v26 == -1 )
    {
      if ( v95 )
        return (unsigned int)v21;
LABEL_14:
      v27 = v99;
      goto LABEL_15;
    }
    v16 = 1;
    v29 = 0;
    v30 = &gentities[v26];
    v31 = 0i64;
    _XMM9 = v24;
    _XMM8 = v24;
    LODWORD(_XMM10) = v24;
    if ( level.maxclients >= 4 )
    {
      v35 = SLODWORD(v30->r.currentOrigin.v[0]);
      v36 = LODWORD(v30->r.currentOrigin.v[1]);
      v37 = v30->r.currentOrigin.v[2];
      v102 = v35;
      v103 = v36;
      v100 = v37;
      v29 = 4 * (((unsigned int)(level.maxclients - 4) >> 2) + 1);
      v38 = ((unsigned int)(level.maxclients - 4) >> 2) + 1;
      do
      {
        v39 = *(float *)&v35 - vEyePosOut.v[v19];
        v41 = v36;
        v40 = *(float *)&v36 - vEyePosOut.v[v19 + 1];
        _XMM0 = (unsigned __int8)v96[v31];
        __asm
        {
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm4, xmm7, xmm3, xmm2
        }
        *(float *)&v41 = (float)((float)(v40 * v40) + (float)(v39 * v39)) + (float)(*(float *)&_XMM4 * *(float *)&_XMM4);
        _XMM3 = v41;
        v46 = (float)((float)(v40 * outForward.v[v19 + 1]) + (float)(v39 * outForward.v[v19])) + (float)(*(float *)&_XMM4 * outForward.v[v19 + 2]);
        if ( v46 < 0.0 && *(float *)&_XMM15 < *(float *)&_XMM3 )
          __asm { vminss  xmm11, xmm3, xmm9 }
        if ( (float)(v46 * v46) <= (float)(*(float *)&_XMM3 * v25) && *(float *)&_XMM14 < *(float *)&_XMM3 )
          __asm { vminss  xmm9, xmm3, xmm8 }
        if ( v5 < *(float *)&_XMM3 )
          __asm { vminss  xmm8, xmm3, xmm10 }
        v50 = v30->r.currentOrigin.v[0] - *(float *)&v107[v19];
        v52 = LODWORD(v30->r.currentOrigin.v[1]);
        v51 = v30->r.currentOrigin.v[1] - *(float *)&v107[v19 + 1];
        _XMM0 = (unsigned __int8)v96[v31 + 1];
        __asm
        {
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm4, xmm7, xmm3, xmm2
        }
        *(float *)&v52 = (float)((float)(v51 * v51) + (float)(v50 * v50)) + (float)(*(float *)&_XMM4 * *(float *)&_XMM4);
        _XMM3 = v52;
        v57 = (float)((float)(v51 * vEyePosOut.v[v19]) + (float)(v50 * *(float *)((char *)&v105 + v19 * 4))) + (float)(*(float *)&_XMM4 * vEyePosOut.v[v19 + 1]);
        if ( v57 < 0.0 && *(float *)&_XMM15 < *(float *)&_XMM3 )
          __asm { vminss  xmm11, xmm3, xmm11 }
        if ( (float)(v57 * v57) <= (float)(*(float *)&_XMM3 * v25) && *(float *)&_XMM14 < *(float *)&_XMM3 )
          __asm { vminss  xmm10, xmm3, xmm9 }
        if ( v5 < *(float *)&_XMM3 )
          __asm { vminss  xmm9, xmm3, xmm8 }
        v61 = v30->r.currentOrigin.v[0] - *(float *)&v107[v19 + 3];
        v63 = LODWORD(v30->r.currentOrigin.v[1]);
        v62 = v30->r.currentOrigin.v[1] - *(float *)&v107[v19 + 4];
        _XMM0 = (unsigned __int8)v96[v31 + 2];
        __asm
        {
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm4, xmm7, xmm3, xmm2
        }
        *(float *)&v63 = (float)((float)(v62 * v62) + (float)(v61 * v61)) + (float)(*(float *)&_XMM4 * *(float *)&_XMM4);
        _XMM3 = v63;
        v68 = (float)((float)(v62 * *(float *)&v107[v19]) + (float)(v61 * vEyePosOut.v[v19 + 2])) + (float)(*(float *)&_XMM4 * *(float *)&v107[v19 + 1]);
        if ( v68 < 0.0 && *(float *)&_XMM15 < *(float *)&_XMM3 )
          __asm { vminss  xmm11, xmm3, xmm11 }
        if ( (float)(v68 * v68) <= (float)(*(float *)&_XMM3 * v25) && *(float *)&_XMM14 < *(float *)&_XMM3 )
          __asm { vminss  xmm8, xmm3, xmm10 }
        if ( v5 < *(float *)&_XMM3 )
          __asm { vminss  xmm10, xmm3, xmm9 }
        v72 = v30->r.currentOrigin.v[0] - *(float *)&v107[v19 + 6];
        v74 = LODWORD(v30->r.currentOrigin.v[1]);
        v73 = v30->r.currentOrigin.v[1] - *(float *)&v107[v19 + 7];
        _XMM0 = *((unsigned __int8 *)&v97 + v31);
        __asm
        {
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm4, xmm7, xmm3, xmm2
        }
        *(float *)&v74 = (float)((float)(v73 * v73) + (float)(v72 * v72)) + (float)(*(float *)&_XMM4 * *(float *)&_XMM4);
        _XMM3 = v74;
        v79 = (float)((float)(v73 * *(float *)&v107[v19 + 3]) + (float)(v72 * *(float *)&v107[v19 + 2])) + (float)(*(float *)&_XMM4 * *(float *)&v107[v19 + 4]);
        if ( v79 >= 0.0 || *(float *)&_XMM15 >= *(float *)&_XMM3 )
          _XMM9 = 0i64;
        else
          __asm { vminss  xmm9, xmm3, xmm11 }
        if ( (float)(v79 * v79) > (float)(*(float *)&_XMM3 * v25) || *(float *)&_XMM14 >= *(float *)&_XMM3 )
          _XMM8 = 0i64;
        else
          __asm { vminss  xmm8, xmm3, xmm8 }
        if ( v5 >= *(float *)&_XMM3 )
          LODWORD(_XMM10) = 0;
        else
          __asm { vminss  xmm10, xmm3, xmm10 }
        v35 = v102;
        v36 = v103;
        v31 += 4i64;
        v19 += 12i64;
        --v38;
      }
      while ( v38 );
      gentities = level.gentities;
    }
    if ( v29 < level.maxclients )
    {
      v80 = &v96[v31];
      v81 = 3 * v31;
      v82 = (unsigned int)(level.maxclients - v29);
      do
      {
        v84 = LODWORD(v30->r.currentOrigin.v[0]);
        v83 = v30->r.currentOrigin.v[0] - vEyePosOut.v[v81];
        v85 = v30->r.currentOrigin.v[1] - vEyePosOut.v[v81 + 1];
        _XMM0 = *v80;
        __asm
        {
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm4, xmm7, xmm3, xmm2
        }
        *(float *)&v84 = (float)((float)(v83 * v83) + (float)(v85 * v85)) + (float)(*(float *)&_XMM4 * *(float *)&_XMM4);
        _XMM3 = v84;
        v90 = (float)((float)(v85 * outForward.v[v81 + 1]) + (float)(v83 * outForward.v[v81])) + (float)(*(float *)&_XMM4 * outForward.v[v81 + 2]);
        if ( v90 >= 0.0 || *(float *)&_XMM15 >= *(float *)&_XMM3 )
          _XMM9 = 0i64;
        else
          __asm { vminss  xmm9, xmm3, xmm9 }
        if ( (float)(v90 * v90) > (float)(*(float *)&_XMM3 * 0.5) || *(float *)&_XMM14 >= *(float *)&_XMM3 )
          _XMM8 = 0i64;
        else
          __asm { vminss  xmm8, xmm3, xmm8 }
        if ( v98 >= *(float *)&_XMM3 )
          LODWORD(_XMM10) = 0;
        else
          __asm { vminss  xmm10, xmm3, xmm10 }
        ++v80;
        v81 += 3i64;
        --v82;
      }
      while ( v82 );
      v5 = v98;
      v25 = FLOAT_0_5;
      actorCorpseCount = level.actorCorpseCount;
    }
    if ( *(float *)&_XMM9 != 0.0 )
      v1 = v21;
    __asm
    {
      vcmpneqss xmm0, xmm9, xmm7
      vblendvps xmm0, xmm15, xmm9, xmm0
    }
    _XMM15 = _XMM0;
    v100 = *(float *)&_XMM0;
    if ( *(float *)&_XMM8 != 0.0 )
      v101 = v21;
    __asm
    {
      vcmpneqss xmm0, xmm8, xmm7
      vblendvps xmm0, xmm14, xmm8, xmm0
    }
    v19 = 0i64;
    _XMM14 = _XMM0;
    v100 = *(float *)&_XMM0;
    v24 = LODWORD(FLOAT_3_4028235e38);
    if ( *(float *)&_XMM10 == 0.0 )
      goto LABEL_14;
    v27 = v21;
    v99 = v21;
    v98 = *(float *)&_XMM10;
    v5 = *(float *)&_XMM10;
LABEL_15:
    ++v21;
    p_entnum += 12;
  }
  while ( v21 < actorCorpseCount );
  if ( !v16 )
    goto LABEL_82;
  if ( *(float *)&_XMM15 == -1.0 )
  {
    v1 = v101;
    if ( *(float *)&_XMM14 == -1.0 )
      v1 = v27;
  }
  G_FreeEntity(&gentities[v20->actorCorpseInfo[v1].entnum]);
  result = (unsigned int)v1;
  v20->actorCorpseInfo[v1].entnum = -1;
  return result;
}

/*
==============
G_PruneCorpsesSortCmp
==============
*/
__int64 G_PruneCorpsesSortCmp(const void *a, const void *b)
{
  __int64 v2; 
  __int64 v3; 
  GameScriptDataSP *GameScriptDataSP; 
  unsigned int num_entities; 
  GameScriptDataSP *v6; 
  unsigned int entnum; 
  __int64 v8; 
  float v9; 
  float v10; 
  float v11; 
  __int64 v12; 
  double v13; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  int v18; 

  v2 = *(int *)a;
  v3 = *(int *)b;
  GameScriptDataSP = GameScriptDataSP::GetGameScriptDataSP();
  num_entities = level.num_entities;
  v6 = GameScriptDataSP;
  entnum = GameScriptDataSP->actorCorpseInfo[v2].entnum;
  if ( entnum >= level.num_entities )
  {
    v18 = level.num_entities;
    v16 = entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 377, ASSERT_TYPE_ASSERT, "(unsigned)( gScrData->actorCorpseInfo[aIdx].entnum ) < (unsigned)( level.num_entities )", "gScrData->actorCorpseInfo[aIdx].entnum doesn't index level.num_entities\n\t%i not in [0, %i)", v16, v18) )
      __debugbreak();
    num_entities = level.num_entities;
  }
  if ( v6->actorCorpseInfo[v3].entnum >= num_entities )
  {
    LODWORD(v17) = num_entities;
    LODWORD(v15) = v6->actorCorpseInfo[v3].entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 378, ASSERT_TYPE_ASSERT, "(unsigned)( gScrData->actorCorpseInfo[bIdx].entnum ) < (unsigned)( level.num_entities )", "gScrData->actorCorpseInfo[bIdx].entnum doesn't index level.num_entities\n\t%i not in [0, %i)", v15, v17) )
      __debugbreak();
  }
  v8 = v6->actorCorpseInfo[v2].entnum;
  v9 = level.gentities[v8].r.currentOrigin.v[0] - playerEyePos.v[0];
  v10 = level.gentities[v8].r.currentOrigin.v[2] - playerEyePos.v[2];
  v11 = level.gentities[v8].r.currentOrigin.v[1] - playerEyePos.v[1];
  v12 = v6->actorCorpseInfo[v3].entnum;
  v13 = (float)((float)((float)((float)(v11 * v11) + (float)(v9 * v9)) + (float)(v10 * v10)) - (float)((float)((float)((float)(level.gentities[v12].r.currentOrigin.v[1] - playerEyePos.v[1]) * (float)(level.gentities[v12].r.currentOrigin.v[1] - playerEyePos.v[1])) + (float)((float)(level.gentities[v12].r.currentOrigin.v[0] - playerEyePos.v[0]) * (float)(level.gentities[v12].r.currentOrigin.v[0] - playerEyePos.v[0]))) + (float)((float)(level.gentities[v12].r.currentOrigin.v[2] - playerEyePos.v[2]) * (float)(level.gentities[v12].r.currentOrigin.v[2] - playerEyePos.v[2]))));
  if ( v13 >= -0.000002 )
    return v13 > 0.000002;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
G_RemoveActorCorpses
==============
*/
void G_RemoveActorCorpses(int allowedCorpseCount)
{
  __int64 v1; 
  GameScriptDataSP *GameScriptDataSP; 
  int actorCorpseCount; 
  int v4; 
  int *p_entnum; 
  __int64 v6; 
  gentity_s *v7; 

  v1 = allowedCorpseCount;
  if ( (unsigned int)allowedCorpseCount > 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 324, ASSERT_TYPE_ASSERT, "( ( allowedCorpseCount >= 0 && allowedCorpseCount <= 28 ) )", "( allowedCorpseCount ) = %i", allowedCorpseCount) )
    __debugbreak();
  GameScriptDataSP = GameScriptDataSP::GetGameScriptDataSP();
  actorCorpseCount = level.actorCorpseCount;
  v4 = v1;
  if ( (int)v1 < level.actorCorpseCount )
  {
    p_entnum = &GameScriptDataSP->actorCorpseInfo[v1].entnum;
    do
    {
      v6 = *p_entnum;
      if ( (int)v6 >= 0 )
      {
        v7 = &level.gentities[v6];
        if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
          __debugbreak();
        GUtils::ms_gUtils->FreeEntity(GUtils::ms_gUtils, v7);
        actorCorpseCount = level.actorCorpseCount;
      }
      ++v4;
      p_entnum += 12;
    }
    while ( v4 < actorCorpseCount );
  }
  level.actorCorpseCount = v1;
}

/*
==============
G_RemoveExpiredActorCorpses
==============
*/
void G_RemoveExpiredActorCorpses()
{
  int v0; 
  __int64 v1; 
  gentity_s *v2; 
  const sentient_s *sentient; 
  GameScriptDataSP *GameScriptDataSP; 
  int v5; 
  int *p_entnum; 
  __int64 v7; 
  gentity_s *v8; 
  int v9; 
  int maxclients; 
  int v11; 
  int v12; 
  __int64 v13; 
  float v14; 
  float v15; 
  float v16; 
  bool v17; 
  vec3_t vEyePosOut; 
  vec3_t outForward; 

  v0 = 0;
  if ( level.maxclients <= 0 )
  {
LABEL_8:
    GameScriptDataSP = GameScriptDataSP::GetGameScriptDataSP();
    v5 = 0;
    if ( level.actorCorpseCount > 0 )
    {
      p_entnum = &GameScriptDataSP->actorCorpseInfo[0].entnum;
      do
      {
        v7 = *p_entnum;
        if ( (int)v7 >= 0 )
        {
          v8 = &level.gentities[v7];
          v9 = v8->c.item[0].clipAmmoCount[1];
          if ( v9 )
          {
            if ( v9 <= level.time )
            {
              maxclients = level.maxclients;
              v11 = 1;
              v12 = 0;
              if ( level.maxclients <= 0 )
                goto LABEL_23;
              v13 = 0i64;
              do
              {
                v14 = v8->r.currentOrigin.v[0] - vEyePosOut.v[v13];
                v15 = v8->r.currentOrigin.v[1] - vEyePosOut.v[v13 + 1];
                v16 = v8->r.currentOrigin.v[2] - vEyePosOut.v[v13 + 2];
                if ( (float)((float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v16 * v16)) >= 4096.0 )
                {
                  if ( (float)((float)(v15 * outForward.v[v13 + 1]) + (float)(v14 * outForward.v[v13])) > 0.0 )
                  {
                    v17 = PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, &vEyePosOut + v12, &v8->r.currentOrigin, &bounds_origin, v12, 2047, 2049) == 0;
                    maxclients = level.maxclients;
                    if ( v17 )
                      v11 = 0;
                  }
                }
                else
                {
                  v11 = 0;
                }
                ++v12;
                v13 += 3i64;
              }
              while ( v12 < maxclients );
              if ( v11 )
              {
LABEL_23:
                if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
                  __debugbreak();
                GUtils::ms_gUtils->FreeEntity(GUtils::ms_gUtils, v8);
              }
              else
              {
                v8->c.item[0].clipAmmoCount[1] = level.time + 500;
              }
            }
          }
        }
        ++v5;
        p_entnum += 12;
      }
      while ( v5 < level.actorCorpseCount );
    }
  }
  else
  {
    v1 = 0i64;
    while ( 1 )
    {
      v2 = &g_entities[v1];
      if ( !g_entities[v1].client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 262, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
        __debugbreak();
      sentient = v2->sentient;
      if ( !sentient )
        break;
      Sentient_GetEyePosition(sentient, &vEyePosOut + v0);
      G_Client_GetViewDirection(v2, &outForward + v0++, NULL, NULL);
      ++v1;
      if ( v0 >= level.maxclients )
        goto LABEL_8;
    }
  }
}

/*
==============
G_UpdateActorCorpses
==============
*/
void G_UpdateActorCorpses(void)
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  signed int integer; 
  GameScriptDataSP *GameScriptDataSP; 
  int actorCorpseCount; 
  int v5; 
  int *p_entnum; 
  __int64 v7; 
  gentity_s *v8; 
  __int64 v9; 

  G_RemoveExpiredActorCorpses();
  v0 = DVARINT_ai_corpseLimit;
  if ( !DVARINT_ai_corpseLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_corpseLimit") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  v1 = DVARINT_ai_corpseCount;
  integer = v0->current.integer;
  if ( !DVARINT_ai_corpseCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_corpseCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.integer < integer )
    integer = v1->current.integer;
  if ( (unsigned int)(integer - 1) > 0x1B )
  {
    LODWORD(v9) = integer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 353, ASSERT_TYPE_ASSERT, "( ( actorCorpseCount >= 1 && actorCorpseCount <= 28 ) )", "( actorCorpseCount ) = %i", v9) )
      __debugbreak();
  }
  if ( level.actorCorpseCount != integer )
  {
    if ( (unsigned int)integer > 0x1C )
    {
      LODWORD(v9) = integer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 324, ASSERT_TYPE_ASSERT, "( ( allowedCorpseCount >= 0 && allowedCorpseCount <= 28 ) )", "( allowedCorpseCount ) = %i", v9) )
        __debugbreak();
    }
    GameScriptDataSP = GameScriptDataSP::GetGameScriptDataSP();
    actorCorpseCount = level.actorCorpseCount;
    v5 = integer;
    if ( integer < level.actorCorpseCount )
    {
      p_entnum = &GameScriptDataSP->actorCorpseInfo[integer].entnum;
      do
      {
        v7 = *p_entnum;
        if ( (int)v7 >= 0 )
        {
          v8 = &level.gentities[v7];
          if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
            __debugbreak();
          GUtils::ms_gUtils->FreeEntity(GUtils::ms_gUtils, v8);
          actorCorpseCount = level.actorCorpseCount;
        }
        ++v5;
        p_entnum += 12;
      }
      while ( v5 < actorCorpseCount );
    }
    level.actorCorpseCount = integer;
  }
}

/*
==============
AIScriptedInterface::GetBodyPlantAngles
==============
*/
void AIScriptedInterface::GetBodyPlantAngles(int iEntNum, int iClipMask, const vec3_t *vOrigin, const float fYaw, float *pfPitch, float *pfRoll, float *pfHeight)
{
  __int128 v7; 
  __int64 v9; 
  int movingPlatform; 
  gentity_s *v11; 
  int groundEntNum; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v20; 
  float v21; 
  float v22; 
  float *angleOut; 
  vec3_t up; 
  vec3_t forward; 
  vec3_t end; 
  vec3_t right; 
  vec3_t start; 
  __int128 v32; 

  v9 = iEntNum;
  if ( !pfPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 591, ASSERT_TYPE_ASSERT, "(pfPitch)", (const char *)&queryFormat, "pfPitch") )
    __debugbreak();
  if ( (unsigned int)v9 >= 0x7FE )
  {
    LODWORD(angleOut) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 593, ASSERT_TYPE_ASSERT, "(unsigned)( iEntNum ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "iEntNum doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", angleOut, 2046) )
      __debugbreak();
  }
  movingPlatform = 0;
  v11 = &g_entities[v9];
  _XMM9 = 0i64;
  if ( (BG_IsCorpseEntity(&v11->s) || v11->actor) && (!BG_IsCorpseEntity(&v11->s) ? (groundEntNum = v11->actor->Physics.groundEntNum) : (groundEntNum = v11->s.groundEntityNum), (movingPlatform = BGMovingPlatforms::IsMovingPlatform(groundEntNum)) != 0) )
  {
    AngleVectors(&g_entities[groundEntNum].r.currentAngles, NULL, NULL, &up);
  }
  else
  {
    up.v[0] = 0.0;
    up.v[1] = 0.0;
    up.v[2] = FLOAT_1_0;
  }
  YawVectors(fYaw, &forward, &right);
  if ( movingPlatform )
  {
    v32 = v7;
    v14 = (float)(up.v[2] * forward.v[1]) - (float)(up.v[1] * forward.v[2]);
    v15 = (float)(up.v[0] * forward.v[2]) - (float)(up.v[2] * forward.v[0]);
    v16 = (float)(up.v[1] * forward.v[0]) - (float)(up.v[0] * forward.v[1]);
    forward.v[0] = (float)(up.v[1] * v16) - (float)(up.v[2] * v15);
    right.v[2] = v16;
    forward.v[1] = (float)(up.v[2] * v14) - (float)(up.v[0] * v16);
    right.v[0] = v14;
    forward.v[2] = (float)(up.v[0] * v15) - (float)(up.v[1] * v14);
    right.v[1] = v15;
  }
  v17 = Actor_SetBodyPlantAngle(v9, iClipMask, vOrigin, vOrigin, &forward, pfPitch, movingPlatform, &up);
  if ( pfRoll )
  {
    if ( COERCE_FLOAT(*(_DWORD *)pfPitch & _xmm) >= 30.0 )
      *pfRoll = 0.0;
    else
      v17 = (float)(Actor_SetBodyPlantAngle(v9, iClipMask, vOrigin, vOrigin, &right, pfRoll, movingPlatform, &up) + v17) * 0.5;
  }
  if ( pfHeight )
  {
    v18 = vOrigin->v[2];
    *(float *)&_XMM6 = v17 - v18;
    if ( *(float *)&_XMM6 < 0.0 )
    {
      v20 = vOrigin->v[0];
      v21 = vOrigin->v[1];
      start.v[0] = v20;
      start.v[1] = v21;
      end.v[0] = v20;
      end.v[1] = v21;
      start.v[2] = v18;
      if ( movingPlatform )
      {
        end.v[0] = v20 - up.v[0];
        v22 = v18 - up.v[2];
        end.v[1] = v21 - up.v[1];
      }
      else
      {
        v22 = v18 - 1.0;
      }
      end.v[2] = v22;
      _XMM0 = (unsigned int)G_Main_TraceCapsuleComplete(&start, &end, &actorBox, v9, 2047, iClipMask);
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm6, xmm9, xmm6, xmm2
      }
    }
    *pfHeight = *(float *)&_XMM6;
  }
}

/*
==============
AIActorInterface::OrientCorpseToGround
==============
*/
void AIActorInterface::OrientCorpseToGround(gentity_s *self, int bLerp)
{
  GameScriptDataSP *GameScriptDataSP; 
  actor_prone_info_t *p_proneInfo; 
  int v6; 
  double FrameDurationInSeconds; 
  float v8; 
  float v9; 
  float fTorsoPitch; 
  float v11; 
  float v18; 
  float v19; 
  float fBodyHeight; 
  float v24; 
  bool v25; 
  float pfPitch; 
  float pfRoll; 
  float pfHeight; 

  if ( ((self->s.eType - 19) & 0xFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 739, ASSERT_TYPE_ASSERT, "((self->s.eType == ET_ACTOR_CORPSE) || (self->s.eType == ET_ACTOR))", (const char *)&queryFormat, "(self->s.eType == ET_ACTOR_CORPSE) || (self->s.eType == ET_ACTOR)") )
    __debugbreak();
  if ( self->s.eType == ET_ACTOR_CORPSE )
  {
    GameScriptDataSP = GameScriptDataSP::GetGameScriptDataSP();
    p_proneInfo = &GameScriptDataSP->actorCorpseInfo[G_GetActorCorpseIndex(self)].proneInfo;
  }
  else
  {
    p_proneInfo = &self->actor->ProneInfo;
  }
  if ( p_proneInfo->bCorpseOrientation && !BG_IsRagdollTrajectory(&self->s.lerp.pos) )
  {
    v6 = self->clipmask & 0xFDFFBFFF;
    if ( bLerp )
    {
      FrameDurationInSeconds = G_Level_GetFrameDurationInSeconds();
      v8 = *(float *)&FrameDurationInSeconds * 30.0;
      v9 = *(float *)&FrameDurationInSeconds * 12.0;
      AIScriptedInterface::GetBodyPlantAngles(self->s.number, v6, &self->r.currentOrigin, self->r.currentAngles.v[1], &pfPitch, &pfRoll, &pfHeight);
      fTorsoPitch = p_proneInfo->fTorsoPitch;
      v11 = pfPitch;
      _XMM8 = LODWORD(FLOAT_N1_0);
      _XMM14 = 0i64;
      __asm { vroundss xmm2, xmm14, xmm1, 1 }
      _XMM6 = 0i64;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(pfPitch - fTorsoPitch) * 0.0027777778) - *(float *)&_XMM2) * 360.0) & _xmm) > (float)(*(float *)&FrameDurationInSeconds * 30.0) )
      {
        __asm
        {
          vcmpless xmm0, xmm6, xmm2
          vblendvps xmm0, xmm8, xmm7, xmm0
        }
        v11 = (float)(*(float *)&_XMM0 * v8) + fTorsoPitch;
      }
      v18 = pfRoll;
      v19 = pfRoll - p_proneInfo->fWaistPitch;
      p_proneInfo->fTorsoPitch = v11;
      __asm { vroundss xmm3, xmm14, xmm2, 1 }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v19 * 0.0027777778) - *(float *)&_XMM3) * 360.0) & _xmm) > v8 )
      {
        __asm
        {
          vcmpless xmm0, xmm6, xmm2
          vblendvps xmm0, xmm8, xmm7, xmm0
        }
        v18 = (float)(*(float *)&_XMM0 * v8) + p_proneInfo->fWaistPitch;
      }
      fBodyHeight = p_proneInfo->fBodyHeight;
      v24 = pfHeight;
      v25 = COERCE_FLOAT(COERCE_UNSIGNED_INT(pfHeight - fBodyHeight) & _xmm) <= v9;
      p_proneInfo->fWaistPitch = v18;
      if ( !v25 )
      {
        __asm
        {
          vcmpless xmm0, xmm6, xmm3
          vblendvps xmm0, xmm8, xmm7, xmm0
        }
        v24 = (float)(*(float *)&_XMM0 * v9) + fBodyHeight;
      }
      p_proneInfo->fBodyHeight = v24;
    }
    else
    {
      AIScriptedInterface::GetBodyPlantAngles(self->s.number, v6, &self->r.currentOrigin, self->r.currentAngles.v[1], &p_proneInfo->fTorsoPitch, &p_proneInfo->fWaistPitch, &p_proneInfo->fBodyHeight);
    }
  }
}

/*
==============
AIScriptedInterface::OrientPitchToGround
==============
*/
void AIScriptedInterface::OrientPitchToGround(AIScriptedInterface *this, int bLerp)
{
  gentity_s *v4; 
  ai_scripted_t *m_pAI; 
  int v6; 
  double FrameDurationInSeconds; 
  float v8; 
  float v9; 
  float v10; 
  float v14; 
  float fBodyHeight; 
  float v19; 
  bool v20; 
  float pfPitch; 
  float pfHeight; 

  v4 = this->GetEntity(this);
  if ( ((v4->s.eType - 17) & 0xFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 800, ASSERT_TYPE_ASSERT, "(self->s.eType == ET_ACTOR || self->s.eType == ET_AGENT)", (const char *)&queryFormat, "self->s.eType == ET_ACTOR || self->s.eType == ET_AGENT") )
    __debugbreak();
  m_pAI = this->m_pAI;
  if ( m_pAI->ProneInfo.orientPitch )
  {
    v6 = v4->clipmask & 0xFDFFBFFF;
    if ( bLerp )
    {
      FrameDurationInSeconds = G_Level_GetFrameDurationInSeconds();
      v8 = *(float *)&FrameDurationInSeconds * 30.0;
      v9 = *(float *)&FrameDurationInSeconds * 12.0;
      AIScriptedInterface::GetBodyPlantAngles(v4->s.number, v6, &v4->r.currentOrigin, v4->r.currentAngles.v[1], &pfPitch, NULL, &pfHeight);
      v10 = pfPitch;
      _XMM8 = LODWORD(FLOAT_N1_0);
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm2, 1 }
      v14 = (float)((float)((float)(pfPitch - m_pAI->ProneInfo.fTorsoPitch) * 0.0027777778) - *(float *)&_XMM4) * 360.0;
      _XMM4 = 0i64;
      if ( COERCE_FLOAT(LODWORD(v14) & _xmm) > v8 )
      {
        __asm
        {
          vcmpless xmm0, xmm4, xmm2
          vblendvps xmm0, xmm8, xmm5, xmm0
        }
        v10 = (float)(*(float *)&_XMM0 * v8) + m_pAI->ProneInfo.fTorsoPitch;
      }
      fBodyHeight = m_pAI->ProneInfo.fBodyHeight;
      v19 = pfHeight;
      v20 = COERCE_FLOAT(COERCE_UNSIGNED_INT(pfHeight - fBodyHeight) & _xmm) <= v9;
      m_pAI->ProneInfo.fTorsoPitch = v10;
      if ( !v20 )
      {
        __asm
        {
          vcmpless xmm0, xmm4, xmm3
          vblendvps xmm0, xmm8, xmm5, xmm0
        }
        v19 = (float)(*(float *)&_XMM0 * v9) + fBodyHeight;
      }
      m_pAI->ProneInfo.fBodyHeight = v19;
    }
    else
    {
      AIScriptedInterface::GetBodyPlantAngles(v4->s.number, v6, &v4->r.currentOrigin, v4->r.currentAngles.v[1], &m_pAI->ProneInfo.fTorsoPitch, NULL, &m_pAI->ProneInfo.fBodyHeight);
    }
  }
}

/*
==============
AIActorInterface::PruneLoadedCorpses
==============
*/
void AIActorInterface::PruneLoadedCorpses(void)
{
  GameScriptDataSP *GameScriptDataSP; 
  int v1; 
  int *p_levelscript; 
  int entnum; 
  bool v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  gentity_s *v34; 
  __int64 v35; 
  __int64 v36; 
  int *v37; 
  gentity_s *v38; 
  __int64 v39; 
  __int64 v40; 
  int Base[28]; 

  if ( SV_DemoSP_UsingDemoSave() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 686, ASSERT_TYPE_ASSERT, "(!SV_DemoSP_UsingDemoSave())", (const char *)&queryFormat, "!SV_DemoSP_UsingDemoSave()") )
    __debugbreak();
  memset_0(Base, 0, sizeof(Base));
  GameScriptDataSP = GameScriptDataSP::GetGameScriptDataSP();
  v1 = Base[0];
  p_levelscript = &GameScriptDataSP->levelscript;
  entnum = GameScriptDataSP->actorCorpseInfo[0].entnum;
  v4 = entnum < 0;
  v5 = ~entnum;
  if ( !v4 )
    v1 = 0;
  v6 = v5 >> 31;
  Base[0] = v1;
  if ( GameScriptDataSP->actorCorpseInfo[1].entnum >= 0 )
  {
    Base[v6] = 1;
    LODWORD(v6) = v6 + 1;
  }
  if ( GameScriptDataSP->actorCorpseInfo[2].entnum >= 0 )
  {
    v7 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v7] = 2;
  }
  if ( p_levelscript[3382] >= 0 )
  {
    v8 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v8] = 3;
  }
  if ( p_levelscript[3394] >= 0 )
  {
    v9 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v9] = 4;
  }
  if ( p_levelscript[3406] >= 0 )
  {
    v10 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v10] = 5;
  }
  v11 = 6i64;
  if ( p_levelscript[3418] >= 0 )
  {
    v12 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v12] = 6;
  }
  if ( p_levelscript[3430] >= 0 )
  {
    v13 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v13] = 7;
  }
  if ( p_levelscript[3442] >= 0 )
  {
    v14 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v14] = 8;
  }
  if ( p_levelscript[3454] >= 0 )
  {
    v15 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v15] = 9;
  }
  if ( p_levelscript[3466] >= 0 )
  {
    v16 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v16] = 10;
  }
  if ( p_levelscript[3478] >= 0 )
  {
    v17 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v17] = 11;
  }
  if ( p_levelscript[3490] >= 0 )
  {
    v18 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v18] = 12;
  }
  if ( p_levelscript[3502] >= 0 )
  {
    v19 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v19] = 13;
  }
  if ( p_levelscript[3514] >= 0 )
  {
    v20 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v20] = 14;
  }
  if ( p_levelscript[3526] >= 0 )
  {
    v21 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v21] = 15;
  }
  if ( p_levelscript[3538] >= 0 )
  {
    v22 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v22] = 16;
  }
  if ( p_levelscript[3550] >= 0 )
  {
    v23 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v23] = 17;
  }
  if ( p_levelscript[3562] >= 0 )
  {
    v24 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v24] = 18;
  }
  if ( p_levelscript[3574] >= 0 )
  {
    v25 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v25] = 19;
  }
  if ( p_levelscript[3586] >= 0 )
  {
    v26 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v26] = 20;
  }
  if ( p_levelscript[3598] >= 0 )
  {
    v27 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v27] = 21;
  }
  if ( p_levelscript[3610] >= 0 )
  {
    v28 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v28] = 22;
  }
  if ( p_levelscript[3622] >= 0 )
  {
    v29 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v29] = 23;
  }
  if ( p_levelscript[3634] >= 0 )
  {
    v30 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v30] = 24;
  }
  if ( p_levelscript[3646] >= 0 )
  {
    v31 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v31] = 25;
  }
  if ( p_levelscript[3658] >= 0 )
  {
    v32 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v32] = 26;
  }
  if ( p_levelscript[3670] >= 0 )
  {
    v33 = (int)v6;
    LODWORD(v6) = v6 + 1;
    Base[v33] = 27;
  }
  if ( (int)v6 > 6 )
  {
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities->r.isInUse != *g_entityIsInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !*g_entityIsInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 704, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( 0 ) )", (const char *)&queryFormat, "G_IsEntityInUse( 0 )") )
      __debugbreak();
    v34 = g_entities;
    if ( g_entities->classname != scr_const.player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 706, ASSERT_TYPE_ASSERT, "( ent->classname == scr_const.player )", (const char *)&queryFormat, "ent->classname == scr_const.player") )
      __debugbreak();
    if ( !v34->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 707, ASSERT_TYPE_ASSERT, "( ent->sentient )", (const char *)&queryFormat, "ent->sentient") )
      __debugbreak();
    Sentient_GetEyePosition(v34->sentient, &playerEyePos);
    v35 = (int)v6;
    qsort(Base, (int)v6, 4ui64, (_CoreCrtNonSecureSearchSortCompareFunction)G_PruneCorpsesSortCmp);
    if ( (int)v6 > 6i64 )
    {
      do
      {
        v36 = Base[v11];
        if ( (unsigned int)p_levelscript[12 * v36 + 3346] >= level.num_entities )
        {
          LODWORD(v40) = level.num_entities;
          LODWORD(v39) = p_levelscript[12 * v36 + 3346];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 716, ASSERT_TYPE_ASSERT, "(unsigned)( gScrData->actorCorpseInfo[corpseIdx].entnum ) < (unsigned)( level.num_entities )", "gScrData->actorCorpseInfo[corpseIdx].entnum doesn't index level.num_entities\n\t%i not in [0, %i)", v39, v40) )
            __debugbreak();
        }
        v37 = &p_levelscript[12 * v36 + 3346];
        v38 = &level.gentities[*v37];
        if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
          __debugbreak();
        GUtils::ms_gUtils->FreeEntity(GUtils::ms_gUtils, v38);
        ++v11;
        *v37 = -1;
      }
      while ( v11 < v35 );
    }
  }
}

