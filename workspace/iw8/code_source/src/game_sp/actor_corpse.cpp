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
float Actor_SetBodyPlantAngle(const int entNum, const int clipMask, const vec3_t *origin, const vec3_t *center, const vec3_t *dir, float *angleOut, int movingPlatform)
{
  __int64 passEntityNum; 
  char v39; 
  __int64 v107; 
  gentity_s *v108; 
  const dvar_t *v119; 
  __int64 contentmask; 
  __int64 v131; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v134; 
  vec3_t v135; 
  vec3_t vec; 
  Bounds bounds; 
  trace_t results; 
  char v140; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
  }
  _R15 = angleOut;
  passEntityNum = entNum;
  _RBX = center;
  _R14 = origin;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "Actor_SetBodyPlantAngle");
  __asm
  {
    vmovss  xmm1, cs:__real@40800000
    vmovups xmm0, cs:__xmm@40800000408000000000000000000000
    vmovss  xmm2, dword ptr [r14]
    vmovss  xmm4, dword ptr [r14+4]
    vmovss  xmm3, dword ptr [r14+8]
    vmovss  xmm6, cs:__real@41f00000
    vmovss  dword ptr [rbp+0A0h+bounds.halfSize+4], xmm1
    vmovss  dword ptr [rbp+0A0h+bounds.halfSize+8], xmm1
    vmovss  dword ptr [rsp+1A0h+start], xmm2
    vmovss  dword ptr [rsp+1A0h+start+4], xmm4
    vmovups xmmword ptr [rbp+0A0h+bounds.midPoint], xmm0
  }
  if ( movingPlatform )
  {
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rsi]
      vaddss  xmm2, xmm0, xmm2
      vmulss  xmm0, xmm6, dword ptr [rsi+4]
      vaddss  xmm4, xmm0, xmm4
      vmulss  xmm0, xmm6, dword ptr [rsi+8]
      vaddss  xmm3, xmm0, xmm3
      vmovss  dword ptr [rsp+1A0h+start], xmm2
      vmovss  dword ptr [rsp+1A0h+start+4], xmm4
    }
  }
  else
  {
    __asm { vaddss  xmm3, xmm3, xmm6 }
  }
  __asm
  {
    vmovss  xmm10, cs:__real@412ccccd
    vmulss  xmm0, xmm10, dword ptr [rax]
    vaddss  xmm1, xmm0, xmm2
    vmovss  dword ptr [rsp+1A0h+end], xmm1
    vmulss  xmm1, xmm10, dword ptr [rax+4]
    vaddss  xmm2, xmm1, xmm4
    vmulss  xmm1, xmm10, dword ptr [rax+8]
    vmovss  dword ptr [rsp+1A0h+end+4], xmm2
    vaddss  xmm2, xmm1, xmm3
    vmovss  dword ptr [rsp+1A0h+end+8], xmm2
    vmovss  dword ptr [rsp+1A0h+start+8], xmm3
  }
  G_Main_TraceCapsule(&results, &start, &end, &bounds, passEntityNum, clipMask);
  __asm
  {
    vmovss  xmm7, [rbp+0A0h+results.fraction]
    vxorps  xmm11, xmm11, xmm11
    vucomiss xmm7, xmm11
  }
  if ( v39 )
  {
    *angleOut = 0.0;
    Sys_ProfEndNamedEvent();
    __asm { vmovss  xmm0, dword ptr [rbx+8] }
  }
  else
  {
    __asm
    {
      vmovaps [rsp+1A0h+var_60], xmm8
      vmovss  xmm0, dword ptr [rsp+1A0h+end]
      vsubss  xmm1, xmm0, dword ptr [rsp+1A0h+start]
      vmovss  xmm0, dword ptr [rsp+1A0h+end+4]
      vmulss  xmm2, xmm1, xmm7
      vsubss  xmm1, xmm0, dword ptr [rsp+1A0h+start+4]
      vaddss  xmm5, xmm2, dword ptr [rsp+1A0h+start]
      vmovss  xmm0, dword ptr [rsp+1A0h+end+8]
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm4, xmm2, dword ptr [rsp+1A0h+start+4]
      vsubss  xmm1, xmm0, dword ptr [rsp+1A0h+start+8]
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm3, xmm2, dword ptr [rsp+1A0h+start+8]
      vmovss  xmm7, cs:__real@42700000
      vmovss  dword ptr [rsp+1A0h+start+8], xmm3
      vmovss  dword ptr [rsp+1A0h+start], xmm5
      vmovss  dword ptr [rsp+1A0h+start+4], xmm4
      vmovss  dword ptr [rsp+1A0h+end], xmm5
      vmovss  dword ptr [rsp+1A0h+end+4], xmm4
    }
    if ( movingPlatform )
    {
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rsi]
        vsubss  xmm2, xmm5, xmm1
        vmulss  xmm1, xmm7, dword ptr [rsi+4]
        vmovss  dword ptr [rsp+1A0h+end], xmm2
        vsubss  xmm2, xmm4, xmm1
        vmulss  xmm1, xmm7, dword ptr [rsi+8]
        vmovss  dword ptr [rsp+1A0h+end+4], xmm2
        vsubss  xmm2, xmm3, xmm1
        vmovss  dword ptr [rsp+1A0h+end+8], xmm2
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14+8]
        vsubss  xmm1, xmm0, xmm6
        vmovss  dword ptr [rsp+1A0h+end+8], xmm1
      }
    }
    G_Main_TraceCapsule(&results, &start, &end, &bounds, passEntityNum, clipMask);
    if ( !results.startsolid )
    {
      __asm
      {
        vmovss  xmm8, [rbp+0A0h+results.fraction]
        vcomiss xmm8, cs:__real@3f800000
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  dword ptr [rsp+1A0h+var_140], xmm0
      vmovss  xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rsp+1A0h+var_140+8], xmm0
      vmovss  dword ptr [rsp+1A0h+var_140+4], xmm1
      vmovss  xmm2, dword ptr [r14]
      vmovss  xmm3, dword ptr [r14+4]
      vmovss  xmm4, dword ptr [r14+8]
      vmovss  dword ptr [rsp+1A0h+start], xmm2
      vmovss  dword ptr [rsp+1A0h+start+4], xmm3
    }
    if ( movingPlatform )
    {
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rsi]
        vaddss  xmm2, xmm1, xmm2
        vmulss  xmm1, xmm6, dword ptr [rsi+4]
        vaddss  xmm3, xmm1, xmm3
        vmulss  xmm1, xmm6, dword ptr [rsi+8]
        vaddss  xmm4, xmm1, xmm4
        vmovss  dword ptr [rsp+1A0h+start], xmm2
        vmovss  dword ptr [rsp+1A0h+start+4], xmm3
      }
    }
    else
    {
      __asm { vaddss  xmm4, xmm4, xmm6 }
    }
    __asm
    {
      vmulss  xmm1, xmm10, dword ptr [rax]
      vsubss  xmm2, xmm2, xmm1
      vmulss  xmm1, xmm10, dword ptr [rax+4]
      vmovss  dword ptr [rsp+1A0h+end], xmm2
      vsubss  xmm2, xmm3, xmm1
      vmulss  xmm1, xmm10, dword ptr [rax+8]
      vmovss  dword ptr [rsp+1A0h+end+4], xmm2
      vsubss  xmm2, xmm4, xmm1
      vmovss  dword ptr [rsp+1A0h+end+8], xmm2
      vmovss  dword ptr [rsp+1A0h+start+8], xmm4
    }
    G_Main_TraceCapsule(&results, &start, &end, &bounds, passEntityNum, clipMask);
    __asm
    {
      vmovss  xmm8, [rbp+0A0h+results.fraction]
      vucomiss xmm8, xmm11
    }
    if ( v39 )
    {
      *angleOut = 0.0;
      Sys_ProfEndNamedEvent();
      __asm { vmovss  xmm0, dword ptr [rbx+8] }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1A0h+end]
        vsubss  xmm1, xmm0, dword ptr [rsp+1A0h+start]
        vmovss  xmm0, dword ptr [rsp+1A0h+end+4]
        vmulss  xmm2, xmm1, xmm8
        vsubss  xmm1, xmm0, dword ptr [rsp+1A0h+start+4]
        vaddss  xmm5, xmm2, dword ptr [rsp+1A0h+start]
        vmovss  xmm0, dword ptr [rsp+1A0h+end+8]
        vmulss  xmm2, xmm1, xmm8
        vaddss  xmm4, xmm2, dword ptr [rsp+1A0h+start+4]
        vsubss  xmm1, xmm0, dword ptr [rsp+1A0h+start+8]
        vmulss  xmm2, xmm1, xmm8
        vaddss  xmm3, xmm2, dword ptr [rsp+1A0h+start+8]
        vmovss  dword ptr [rsp+1A0h+start+8], xmm3
        vmovss  dword ptr [rsp+1A0h+start], xmm5
        vmovss  dword ptr [rsp+1A0h+start+4], xmm4
        vmovss  dword ptr [rsp+1A0h+end], xmm5
        vmovss  dword ptr [rsp+1A0h+end+4], xmm4
      }
      if ( movingPlatform )
      {
        __asm
        {
          vmulss  xmm1, xmm7, dword ptr [rsi]
          vsubss  xmm2, xmm5, xmm1
          vmulss  xmm1, xmm7, dword ptr [rsi+4]
          vmovss  dword ptr [rsp+1A0h+end], xmm2
          vsubss  xmm2, xmm4, xmm1
          vmulss  xmm1, xmm7, dword ptr [rsi+8]
          vmovss  dword ptr [rsp+1A0h+end+4], xmm2
          vsubss  xmm2, xmm3, xmm1
          vmovss  dword ptr [rsp+1A0h+end+8], xmm2
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+8]
          vsubss  xmm1, xmm0, xmm6
          vmovss  dword ptr [rsp+1A0h+end+8], xmm1
        }
      }
      G_Main_TraceCapsule(&results, &start, &end, &bounds, passEntityNum, clipMask);
      if ( !results.startsolid )
      {
        __asm
        {
          vmovss  xmm6, [rbp+0A0h+results.fraction]
          vcomiss xmm6, cs:__real@3f800000
        }
      }
      __asm
      {
        vmovss  xmm5, dword ptr [rbx]
        vmovss  xmm4, dword ptr [rbx+4]
        vmovss  xmm2, dword ptr [rbx+8]
        vmovss  xmm0, dword ptr [rsp+1A0h+var_140]
        vucomiss xmm0, xmm5
        vmovss  xmm3, dword ptr [rsp+1A0h+var_140+8]
        vmovss  xmm1, dword ptr [rsp+1A0h+var_140+4]
        vmovss  dword ptr [rsp+1A0h+var_130+8], xmm2
        vmovss  dword ptr [rsp+1A0h+var_130+4], xmm4
        vmovss  dword ptr [rsp+1A0h+var_130], xmm5
      }
      if ( results.startsolid )
      {
        __asm
        {
          vsubss  xmm0, xmm0, xmm5
          vmovss  dword ptr [rbp+0A0h+vec], xmm0
          vsubss  xmm0, xmm3, xmm2
          vsubss  xmm1, xmm1, xmm4
          vmovss  dword ptr [rbp+0A0h+vec+8], xmm0
          vmovss  dword ptr [rbp+0A0h+vec+4], xmm1
        }
        *(double *)&_XMM0 = vectopitch(&vec);
        __asm
        {
          vmulss  xmm5, xmm0, cs:__real@3b360b61
          vaddss  xmm2, xmm5, cs:__real@3f000000
          vxorps  xmm1, xmm1, xmm1
          vmovss  xmm3, xmm1, xmm2
          vxorps  xmm0, xmm0, xmm0
          vroundss xmm4, xmm0, xmm3, 1
          vsubss  xmm1, xmm5, xmm4
          vmulss  xmm11, xmm1, cs:__real@43b40000
        }
      }
      else
      {
        __asm
        {
          vucomiss xmm1, xmm4
          vucomiss xmm3, xmm2
        }
        if ( (unsigned int)passEntityNum >= 0x7FE )
        {
          LODWORD(contentmask) = passEntityNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 536, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "entNum doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", contentmask, 2046) )
            __debugbreak();
        }
        if ( (unsigned int)passEntityNum >= 0x800 )
        {
          LODWORD(v131) = 2048;
          LODWORD(contentmask) = passEntityNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", contentmask, v131) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v107 = passEntityNum;
        if ( g_entities[passEntityNum].r.isInUse != g_entityIsInUse[passEntityNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[passEntityNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 537, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( entNum ))", (const char *)&queryFormat, "G_IsEntityInUse( entNum )") )
          __debugbreak();
        v108 = &g_entities[v107];
        if ( movingPlatform && (unsigned int)(v108->s.lerp.pos.trType - 23) > 5 )
        {
          G_EntUnlink(&g_entities[v107]);
          G_SetOriginAndAngle(v108, &v108->r.currentOrigin, &v108->r.currentAngles, 1, 1);
          v108->s.lerp.pos.trType = TR_GRAVITY;
          v108->s.lerp.pos.trTime = level.time;
        }
      }
      __asm { vmovss  dword ptr [r15], xmm11 }
      v119 = DVARBOOL_ai_debugCorpsePlant;
      if ( !DVARBOOL_ai_debugCorpsePlant && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugCorpsePlant") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v119);
      if ( v119->current.enabled )
      {
        G_DebugLine(&v134, _RBX, &colorWhite, 0);
        G_DebugLine(_RBX, &v135, &colorWhite, 0);
      }
      Sys_ProfEndNamedEvent();
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1A0h+var_140+8]
        vaddss  xmm1, xmm0, dword ptr [rbx+8]
        vaddss  xmm2, xmm1, dword ptr [rsp+1A0h+var_130+8]
        vmulss  xmm0, xmm2, cs:__real@3eaaaaab
      }
    }
    __asm { vmovaps xmm8, [rsp+1A0h+var_60] }
  }
  _R11 = &v140;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
  }
  return *(float *)&_XMM0;
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
  int v10; 
  int number; 
  Ai_Asm *v12; 
  actor_s *m_pAI; 
  gentity_s *v14; 
  unsigned __int16 groundEntNum; 
  trajectory_t_secure *p_pos; 
  trType_t trType; 
  scrContext_t *v20; 

  v2 = this->GetEntity(this);
  Sys_ProfBeginNamedEvent(0xFFFF0000, "Actor_BecomeCorpse");
  FreeActorCorpseIndex = G_GetFreeActorCorpseIndex(1);
  v4 = FreeActorCorpseIndex;
  if ( FreeActorCorpseIndex >= 0 )
  {
    AIActorInterface::GetActorIndex(this->m_pAI);
    IsProne = BG_ActorIsProne(&this->m_pAI->ProneInfo, level.time);
    _RCX = this->m_pAI;
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx+0BB0h]
      vmovups [rsp+68h+var_38], xmm0
      vmovsd  xmm0, qword ptr [rcx+0BC0h]
      vmovsd  [rsp+68h+arg_0], xmm0
    }
    if ( IsProne || _RCX->eAnimMode == AI_ANIM_NOPHYSICS || v2->tagInfo || (v10 = 1, _RCX->painDeath.disableDeathOrient) )
      v10 = 0;
    Actor_EventListener_RemoveEntity(v2->s.number);
    AI_BT_FreeTreeInstance(v2->s.number);
    number = v2->s.number;
    v12 = Ai_Asm::Singleton();
    Ai_Asm::FreeInstance(v12, NULL, number);
    if ( BGMovingPlatforms::IsMovingPlatform(this->m_pAI->Physics.groundEntNum) )
    {
      if ( !Com_IsRagdollTrajectory(&v2->s.lerp.pos) )
      {
        m_pAI = this->m_pAI;
        if ( !m_pAI->ent->tagInfo )
        {
          if ( G_IsEntityInUse(m_pAI->Physics.groundEntNum) )
          {
            v14 = g_entities;
            if ( g_entities[this->m_pAI->Physics.groundEntNum].s.eType == ET_SCRIPTMOVER )
            {
              if ( GameModeFlagValues::ms_spValue != ACTIVE )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
                  __debugbreak();
                v14 = g_entities;
              }
              groundEntNum = this->m_pAI->Physics.groundEntNum;
              if ( (v2->flags.m_flags[1] & 8) != 0 )
                EntHandle::setEnt(&v2->movingPlatformTrack.m_trackEnt, &v14[groundEntNum]);
              else
                G_EntLinkTo(v2, &v14[groundEntNum], (scr_string_t)0, 0, NULL);
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
      v10 = 0;
    G_SetOrigin(v2, &v2->r.currentOrigin, 1, 1);
    p_pos->trType = trType;
    _RBX = v4;
    _RSI = GameScriptDataSP::GetGameScriptDataSP();
    _RSI->actorCorpseInfo[_RBX].tree = v2->pAnimTree;
    _RSI->actorCorpseInfo[_RBX].entnum = v2->s.number;
    _RSI->actorCorpseInfo[_RBX].physicsOrigin = v2->r.currentOrigin;
    GScr_Notify(v2, scr_const.death, 0);
    GScr_Notify(v2, scr_const.death_or_disconnect, 0);
    v20 = ScriptContext_Server();
    Scr_FreeEntityNum(v20, v2->s.number, ENTITY_CLASS_GENTITY);
    __asm
    {
      vmovups xmm0, [rsp+68h+var_38]
      vmovups xmmword ptr [rsi+rbx*8+344Ch], xmm0
      vmovsd  xmm0, [rsp+68h+arg_0]
      vmovsd  qword ptr [rsi+rbx*8+345Ch], xmm0
    }
    if ( v10 )
    {
      if ( !_RSI->actorCorpseInfo[v4].proneInfo.bCorpseOrientation )
      {
        *(_QWORD *)&_RSI->actorCorpseInfo[v4].proneInfo.fTorsoPitch = 0i64;
        _RSI->actorCorpseInfo[v4].proneInfo.bCorpseOrientation = 1;
        _RSI->actorCorpseInfo[v4].proneInfo.iProneTime = level.time;
        _RSI->actorCorpseInfo[v4].proneInfo.prone = 1;
        _RSI->actorCorpseInfo[v4].proneInfo.iProneTrans = 500;
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
  int v13; 
  int v15; 
  _BYTE *v21; 
  __int64 v22; 
  gentity_s *v24; 
  int v36; 
  GameScriptDataSP *GameScriptDataSP; 
  int actorCorpseCount; 
  __int64 v39; 
  GameScriptDataSP *v40; 
  int v41; 
  gentity_s *gentities; 
  int *p_entnum; 
  __int64 v46; 
  __int64 result; 
  int v49; 
  __int64 v51; 
  __int64 v58; 
  bool v59; 
  char v60; 
  bool v169; 
  unsigned __int8 *v173; 
  __int64 v174; 
  __int64 v175; 
  bool v176; 
  char v177; 
  bool v216; 
  _BYTE v217[3]; 
  int v218; 
  int v220; 
  int v222; 
  vec3_t outForward; 
  vec3_t vEyePosOut; 
  char v231; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
    vmovss  xmm0, cs:__real@bf800000
  }
  v216 = reuse;
  v13 = 0;
  __asm
  {
    vmovss  [rsp+140h+var_108], xmm0
    vmovaps xmm15, xmm0
  }
  v218 = 0;
  v15 = 0;
  __asm { vmovaps xmm14, xmm0 }
  v222 = 0;
  __asm { vmovaps xmm12, xmm0 }
  v220 = 0;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( level.maxclients > 0 )
  {
    __asm
    {
      vmovss  xmm8, cs:__real@80000000
      vmovss  xmm6, cs:__real@3f800000
    }
    v21 = v217;
    v22 = 0i64;
    _RDI = &outForward.v[1];
    do
    {
      v24 = &g_entities[v22];
      if ( !g_entities[v22].client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 142, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
        __debugbreak();
      Sentient_GetEyePosition(v24->sentient, &vEyePosOut + v15);
      G_Client_GetViewDirection(v24, &outForward + v15, NULL, NULL);
      *v21 = 1;
      _RDI[1] = 0.0;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vmovss  xmm2, dword ptr [rdi-4]
        vmulss  xmm0, xmm0, xmm0
        vmulss  xmm1, xmm2, xmm2
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm3, xmm1, xmm1
        vucomiss xmm3, xmm7
        vcmpless xmm0, xmm3, xmm8
        vblendvps xmm0, xmm3, xmm6, xmm0
        vdivss  xmm1, xmm6, xmm0
        vmulss  xmm0, xmm2, xmm1
        vmovss  dword ptr [rdi-4], xmm0
        vmulss  xmm1, xmm1, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm1
      }
      *v21 = 0;
      G_Client_GetViewDirection(v24, &outForward + v15++, NULL, NULL);
      ++v22;
      _RDI += 3;
      ++v21;
    }
    while ( v15 < level.maxclients );
    v13 = v218;
  }
  __asm { vmovaps xmmword ptr [rsp+140h+var_68+8], xmm9 }
  v36 = 0;
  __asm
  {
    vmovaps [rsp+140h+var_78+8], xmm10
    vmovaps [rsp+140h+var_88+8], xmm11
    vmovaps xmmword ptr [rsp+140h+var_A8+8], xmm13
  }
  GameScriptDataSP = GameScriptDataSP::GetGameScriptDataSP();
  actorCorpseCount = level.actorCorpseCount;
  v39 = 0i64;
  v40 = GameScriptDataSP;
  v41 = 0;
  if ( level.actorCorpseCount <= 0 )
  {
LABEL_84:
    if ( v216 && actorCorpseCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 224, ASSERT_TYPE_ASSERT, "(!reuse || !level.actorCorpseCount)", (const char *)&queryFormat, "!reuse || !level.actorCorpseCount") )
      __debugbreak();
    result = 0xFFFFFFFFi64;
  }
  else
  {
    gentities = level.gentities;
    p_entnum = &GameScriptDataSP->actorCorpseInfo[0].entnum;
    __asm
    {
      vmovss  xmm0, cs:__real@7f7fffff
      vmovss  xmm13, cs:__real@3f000000
    }
    do
    {
      v46 = *p_entnum;
      if ( (_DWORD)v46 == -1 )
      {
        if ( v216 )
        {
          result = (unsigned int)v41;
          goto LABEL_89;
        }
      }
      else
      {
        v36 = 1;
        v49 = 0;
        _R9 = &gentities[v46];
        v51 = 0i64;
        __asm
        {
          vmovaps xmm9, xmm0
          vmovaps xmm8, xmm0
          vmovaps xmm10, xmm0
        }
        if ( level.maxclients >= 4 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r9+130h]
            vmovss  xmm1, dword ptr [r9+134h]
            vmovss  xmm2, dword ptr [r9+138h]
            vmovss  [rsp+140h+var_F8], xmm0
            vmovss  [rsp+140h+var_F4], xmm1
            vmovss  [rsp+140h+var_100], xmm2
          }
          v49 = 4 * (((unsigned int)(level.maxclients - 4) >> 2) + 1);
          v58 = ((unsigned int)(level.maxclients - 4) >> 2) + 1;
          v59 = 0;
          v60 = 1;
          _ER15 = 0;
          do
          {
            __asm
            {
              vsubss  xmm6, xmm0, dword ptr [rsp+rcx+140h+vEyePosOut]
              vsubss  xmm3, xmm2, dword ptr [rsp+rcx+140h+vEyePosOut+8]
              vsubss  xmm5, xmm1, dword ptr [rsp+rcx+140h+vEyePosOut+4]
            }
            _EAX = (unsigned __int8)v217[v51];
            __asm
            {
              vmovd   xmm0, eax
              vmovd   xmm1, r15d
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm4, xmm7, xmm3, xmm2
              vmulss  xmm1, xmm5, xmm5
              vmulss  xmm0, xmm6, xmm6
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm5, dword ptr [rsp+rcx+140h+outForward+4]
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm0
              vmulss  xmm0, xmm6, dword ptr [rsp+rcx+140h+outForward]
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm4, dword ptr [rsp+rcx+140h+outForward+8]
              vaddss  xmm0, xmm2, xmm1
              vcomiss xmm0, xmm7
            }
            if ( !v59 )
              goto LABEL_20;
            __asm { vcomiss xmm15, xmm3 }
            if ( v59 )
              __asm { vminss  xmm11, xmm3, xmm9 }
            else
LABEL_20:
              __asm { vmovaps xmm11, xmm7 }
            __asm
            {
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm3, xmm13
              vcomiss xmm1, xmm0
            }
            if ( !v60 )
              goto LABEL_24;
            __asm { vcomiss xmm14, xmm3 }
            if ( v59 )
              __asm { vminss  xmm9, xmm3, xmm8 }
            else
LABEL_24:
              __asm { vmovaps xmm9, xmm7 }
            __asm { vcomiss xmm12, xmm3 }
            if ( v59 )
              __asm { vminss  xmm8, xmm3, xmm10 }
            else
              __asm { vmovaps xmm8, xmm7 }
            __asm
            {
              vmovss  xmm2, dword ptr [r9+138h]
              vsubss  xmm3, xmm2, [rsp+rcx+140h+var_CC]
              vmovss  xmm0, dword ptr [r9+130h]
              vsubss  xmm6, xmm0, [rsp+rcx+140h+var_D4]
              vmovss  xmm1, dword ptr [r9+134h]
              vsubss  xmm5, xmm1, [rsp+rcx+140h+var_D0]
            }
            _EAX = (unsigned __int8)v217[v51 + 1];
            __asm
            {
              vmovd   xmm1, r15d
              vmovd   xmm0, eax
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm4, xmm7, xmm3, xmm2
              vmulss  xmm1, xmm5, xmm5
              vmulss  xmm0, xmm6, xmm6
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm5, dword ptr [rsp+rcx+140h+vEyePosOut]
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm0
              vmulss  xmm0, xmm6, [rsp+rcx+140h+var_E4]
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm4, dword ptr [rsp+rcx+140h+vEyePosOut+4]
              vaddss  xmm0, xmm2, xmm1
              vcomiss xmm0, xmm7
            }
            if ( !v59 )
              goto LABEL_31;
            __asm { vcomiss xmm15, xmm3 }
            if ( v59 )
              __asm { vminss  xmm11, xmm3, xmm11 }
            else
LABEL_31:
              __asm { vmovaps xmm11, xmm7 }
            __asm
            {
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm3, xmm13
              vcomiss xmm1, xmm0
            }
            if ( !v60 )
              goto LABEL_35;
            __asm { vcomiss xmm14, xmm3 }
            if ( v59 )
              __asm { vminss  xmm10, xmm3, xmm9 }
            else
LABEL_35:
              __asm { vmovaps xmm10, xmm7 }
            __asm { vcomiss xmm12, xmm3 }
            if ( v59 )
              __asm { vminss  xmm9, xmm3, xmm8 }
            else
              __asm { vmovaps xmm9, xmm7 }
            __asm
            {
              vmovss  xmm0, dword ptr [r9+130h]
              vsubss  xmm6, xmm0, [rsp+rcx+140h+var_C8]
              vmovss  xmm0, dword ptr [r9+134h]
              vsubss  xmm5, xmm0, [rsp+rcx+140h+var_C4]
              vmovss  xmm0, dword ptr [r9+138h]
              vsubss  xmm3, xmm0, [rbp+rcx+40h+var_C0]
            }
            _EAX = (unsigned __int8)v217[v51 + 2];
            __asm
            {
              vmovd   xmm0, eax
              vmovd   xmm1, r15d
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm4, xmm7, xmm3, xmm2
              vmulss  xmm1, xmm5, xmm5
              vmulss  xmm0, xmm6, xmm6
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm5, [rsp+rcx+140h+var_D4]
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm0
              vmulss  xmm0, xmm6, dword ptr [rsp+rcx+140h+vEyePosOut+8]
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm4, [rsp+rcx+140h+var_D0]
              vaddss  xmm0, xmm2, xmm1
              vcomiss xmm0, xmm7
            }
            if ( !v59 )
              goto LABEL_42;
            __asm { vcomiss xmm15, xmm3 }
            if ( v59 )
              __asm { vminss  xmm11, xmm3, xmm11 }
            else
LABEL_42:
              __asm { vmovaps xmm11, xmm7 }
            __asm
            {
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm3, xmm13
              vcomiss xmm1, xmm0
            }
            if ( !v60 )
              goto LABEL_46;
            __asm { vcomiss xmm14, xmm3 }
            if ( v59 )
              __asm { vminss  xmm8, xmm3, xmm10 }
            else
LABEL_46:
              __asm { vmovaps xmm8, xmm7 }
            __asm { vcomiss xmm12, xmm3 }
            if ( v59 )
              __asm { vminss  xmm10, xmm3, xmm9 }
            else
              __asm { vmovaps xmm10, xmm7 }
            __asm
            {
              vmovss  xmm0, dword ptr [r9+130h]
              vsubss  xmm6, xmm0, [rbp+rcx+40h+var_BC]
              vmovss  xmm0, dword ptr [r9+134h]
              vsubss  xmm5, xmm0, [rbp+rcx+40h+var_B8]
              vmovss  xmm0, dword ptr [r9+138h]
              vsubss  xmm3, xmm0, [rbp+rcx+40h+var_B4]
            }
            _EAX = *((unsigned __int8 *)&v218 + v51);
            __asm
            {
              vmovd   xmm0, eax
              vmovd   xmm1, r15d
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm4, xmm7, xmm3, xmm2
              vmulss  xmm1, xmm5, xmm5
              vmulss  xmm0, xmm6, xmm6
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm5, [rsp+rcx+140h+var_C8]
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm0
              vmulss  xmm0, xmm6, [rsp+rcx+140h+var_CC]
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm4, [rsp+rcx+140h+var_C4]
              vaddss  xmm0, xmm2, xmm1
              vcomiss xmm0, xmm7
            }
            if ( !v59 )
              goto LABEL_53;
            __asm { vcomiss xmm15, xmm3 }
            if ( v59 )
              __asm { vminss  xmm9, xmm3, xmm11 }
            else
LABEL_53:
              __asm { vmovaps xmm9, xmm7 }
            __asm
            {
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm3, xmm13
              vcomiss xmm1, xmm0
            }
            if ( !v60 )
              goto LABEL_57;
            __asm { vcomiss xmm14, xmm3 }
            if ( v59 )
              __asm { vminss  xmm8, xmm3, xmm8 }
            else
LABEL_57:
              __asm { vmovaps xmm8, xmm7 }
            __asm { vcomiss xmm12, xmm3 }
            if ( v59 )
              __asm { vminss  xmm10, xmm3, xmm10 }
            else
              __asm { vmovaps xmm10, xmm7 }
            __asm
            {
              vmovss  xmm0, [rsp+140h+var_F8]
              vmovss  xmm1, [rsp+140h+var_F4]
              vmovss  xmm2, [rsp+140h+var_100]
            }
            v51 += 4i64;
            v39 += 48i64;
            v59 = v58-- == 0;
            v60 = v59 || v58 == 0;
          }
          while ( v58 );
          gentities = level.gentities;
        }
        v169 = v49 == level.maxclients;
        if ( v49 < level.maxclients )
        {
          __asm
          {
            vmovss  xmm11, dword ptr [r9+130h]
            vmovss  xmm12, dword ptr [r9+134h]
            vmovss  xmm13, dword ptr [r9+138h]
          }
          v173 = &v217[v51];
          v174 = 12 * v51;
          v175 = (unsigned int)(level.maxclients - v49);
          v176 = 0;
          v177 = 1;
          _ESI = 0;
          do
          {
            __asm
            {
              vsubss  xmm6, xmm11, dword ptr [rsp+rcx+140h+vEyePosOut]
              vsubss  xmm5, xmm12, dword ptr [rsp+rcx+140h+vEyePosOut+4]
              vsubss  xmm3, xmm13, dword ptr [rsp+rcx+140h+vEyePosOut+8]
            }
            _EAX = *v173;
            __asm
            {
              vmovd   xmm0, eax
              vmovd   xmm1, esi
              vpcmpeqd xmm2, xmm0, xmm1
              vblendvps xmm4, xmm7, xmm3, xmm2
              vmulss  xmm1, xmm6, xmm6
              vmulss  xmm0, xmm5, xmm5
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm5, dword ptr [rsp+rcx+140h+outForward+4]
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm0
              vmulss  xmm0, xmm6, dword ptr [rsp+rcx+140h+outForward]
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm4, dword ptr [rsp+rcx+140h+outForward+8]
              vaddss  xmm0, xmm2, xmm1
              vcomiss xmm0, xmm7
            }
            if ( !v176 )
              goto LABEL_68;
            __asm { vcomiss xmm15, xmm3 }
            if ( v176 )
              __asm { vminss  xmm9, xmm3, xmm9 }
            else
LABEL_68:
              __asm { vmovaps xmm9, xmm7 }
            __asm
            {
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm3, cs:__real@3f000000
              vcomiss xmm1, xmm0
            }
            if ( !v177 )
              goto LABEL_72;
            __asm { vcomiss xmm14, xmm3 }
            if ( v176 )
              __asm { vminss  xmm8, xmm3, xmm8 }
            else
LABEL_72:
              __asm { vmovaps xmm8, xmm7 }
            __asm
            {
              vmovss  xmm0, [rsp+140h+var_108]
              vcomiss xmm0, xmm3
            }
            if ( v176 )
              __asm { vminss  xmm10, xmm3, xmm10 }
            else
              __asm { vmovaps xmm10, xmm7 }
            ++v173;
            v174 += 12i64;
            v176 = v175-- == 0;
            v169 = v175 == 0;
            v177 = v176 || v175 == 0;
          }
          while ( v175 );
          __asm
          {
            vmovss  xmm12, [rsp+140h+var_108]
            vmovss  xmm13, cs:__real@3f000000
          }
          actorCorpseCount = level.actorCorpseCount;
        }
        __asm { vucomiss xmm9, xmm7 }
        if ( !v169 )
          v13 = v41;
        __asm
        {
          vucomiss xmm8, xmm7
          vcmpneqss xmm0, xmm9, xmm7
          vblendvps xmm0, xmm15, xmm9, xmm0
          vmovaps xmm15, xmm0
          vmovss  [rsp+140h+var_100], xmm0
        }
        if ( !v169 )
          v222 = v41;
        __asm
        {
          vcmpneqss xmm0, xmm8, xmm7
          vblendvps xmm0, xmm14, xmm8, xmm0
        }
        v39 = 0i64;
        __asm
        {
          vucomiss xmm10, xmm7
          vmovaps xmm14, xmm0
          vmovss  [rsp+140h+var_100], xmm0
          vmovss  xmm0, cs:__real@7f7fffff
        }
      }
      ++v41;
      p_entnum += 12;
    }
    while ( v41 < actorCorpseCount );
    if ( !v36 )
      goto LABEL_84;
    __asm
    {
      vmovss  xmm0, cs:__real@bf800000
      vucomiss xmm15, xmm0
    }
    G_FreeEntity(&gentities[v40->actorCorpseInfo[v13].entnum]);
    result = (unsigned int)v13;
    v40->actorCorpseInfo[v13].entnum = -1;
  }
LABEL_89:
  __asm
  {
    vmovaps xmm13, xmmword ptr [rsp+140h+var_A8+8]
    vmovaps xmm11, [rsp+140h+var_88+8]
    vmovaps xmm10, [rsp+140h+var_78+8]
    vmovaps xmm9, xmmword ptr [rsp+140h+var_68+8]
  }
  _R11 = &v231;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return result;
}

/*
==============
G_PruneCorpsesSortCmp
==============
*/
__int64 G_PruneCorpsesSortCmp(const void *a, const void *b)
{
  __int64 v8; 
  __int64 v9; 
  GameScriptDataSP *GameScriptDataSP; 
  unsigned int num_entities; 
  GameScriptDataSP *v12; 
  unsigned int entnum; 
  __int64 result; 
  __int64 v48; 
  unsigned int v49; 
  __int64 v50; 
  int v51; 
  char v53; 
  void *retaddr; 

  _RAX = &retaddr;
  v8 = *(int *)a;
  v9 = *(int *)b;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  GameScriptDataSP = GameScriptDataSP::GetGameScriptDataSP();
  num_entities = level.num_entities;
  v12 = GameScriptDataSP;
  entnum = GameScriptDataSP->actorCorpseInfo[v8].entnum;
  if ( entnum >= level.num_entities )
  {
    v51 = level.num_entities;
    v49 = entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 377, ASSERT_TYPE_ASSERT, "(unsigned)( gScrData->actorCorpseInfo[aIdx].entnum ) < (unsigned)( level.num_entities )", "gScrData->actorCorpseInfo[aIdx].entnum doesn't index level.num_entities\n\t%i not in [0, %i)", v49, v51) )
      __debugbreak();
    num_entities = level.num_entities;
  }
  if ( v12->actorCorpseInfo[v9].entnum >= num_entities )
  {
    LODWORD(v50) = num_entities;
    LODWORD(v48) = v12->actorCorpseInfo[v9].entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 378, ASSERT_TYPE_ASSERT, "(unsigned)( gScrData->actorCorpseInfo[bIdx].entnum ) < (unsigned)( level.num_entities )", "gScrData->actorCorpseInfo[bIdx].entnum doesn't index level.num_entities\n\t%i not in [0, %i)", v48, v50) )
      __debugbreak();
  }
  _RDX = level.gentities;
  _RCX = 1456i64 * v12->actorCorpseInfo[v8].entnum;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+rdx+130h]
    vsubss  xmm10, xmm0, dword ptr cs:playerEyePos
    vmovss  xmm0, dword ptr [rcx+rdx+138h]
    vsubss  xmm9, xmm0, dword ptr cs:playerEyePos+8
    vmovss  xmm1, dword ptr [rcx+rdx+134h]
    vsubss  xmm8, xmm1, dword ptr cs:playerEyePos+4
  }
  _RCX = 1456i64 * v12->actorCorpseInfo[v9].entnum;
  __asm
  {
    vmulss  xmm2, xmm8, xmm8
    vmovss  xmm0, dword ptr [rcx+rdx+130h]
    vsubss  xmm7, xmm0, dword ptr cs:playerEyePos
    vmovss  xmm1, dword ptr [rcx+rdx+134h]
    vsubss  xmm5, xmm1, dword ptr cs:playerEyePos+4
    vmovss  xmm0, dword ptr [rcx+rdx+138h]
    vsubss  xmm6, xmm0, dword ptr cs:playerEyePos+8
    vmulss  xmm1, xmm10, xmm10
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm0, xmm9, xmm9
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm4, xmm2
    vcvtss2sd xmm5, xmm1, xmm1
    vcomisd xmm5, cs:__real@bec0c6f7a0b5ed8d
  }
  if ( is_mul_ok(0x5B0ui64, v12->actorCorpseInfo[v9].entnum) )
  {
    __asm { vcomisd xmm5, cs:__real@3ec0c6f7a0b5ed8d }
    result = 0i64;
  }
  else
  {
    result = 0xFFFFFFFFi64;
  }
  __asm { vmovaps xmm7, [rsp+0A8h+var_38] }
  _R11 = &v53;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return result;
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
  int v3; 
  __int64 v4; 
  gentity_s *v5; 
  const sentient_s *sentient; 
  GameScriptDataSP *GameScriptDataSP; 
  int v8; 
  int *p_entnum; 
  __int64 v12; 
  int v14; 
  unsigned int maxclients; 
  int v16; 
  int v17; 
  bool v18; 
  bool v19; 
  __int64 v20; 
  bool v35; 
  vec3_t vEyePosOut; 
  vec3_t outForward; 

  v3 = 0;
  if ( level.maxclients <= 0 )
  {
LABEL_8:
    GameScriptDataSP = GameScriptDataSP::GetGameScriptDataSP();
    v8 = 0;
    if ( level.actorCorpseCount > 0 )
    {
      __asm { vmovaps [rsp+0C8h+var_38], xmm6 }
      p_entnum = &GameScriptDataSP->actorCorpseInfo[0].entnum;
      __asm
      {
        vmovaps [rsp+0C8h+var_48], xmm7
        vmovaps [rsp+0C8h+var_58], xmm8
        vmovss  xmm8, cs:__real@45800000
        vxorps  xmm7, xmm7, xmm7
      }
      do
      {
        v12 = *p_entnum;
        if ( (int)v12 >= 0 )
        {
          _RBP = &level.gentities[v12];
          v14 = _RBP->c.item[0].clipAmmoCount[1];
          if ( v14 )
          {
            if ( v14 <= level.time )
            {
              maxclients = level.maxclients;
              v16 = 1;
              v17 = 0;
              v18 = 0;
              v19 = level.maxclients == 0;
              if ( level.maxclients <= 0 )
                goto LABEL_23;
              v20 = 0i64;
              do
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rbp+130h]
                  vsubss  xmm6, xmm0, dword ptr [rsp+rbx+0C8h+vEyePosOut]
                  vmovss  xmm1, dword ptr [rbp+134h]
                  vmovss  xmm0, dword ptr [rbp+138h]
                  vsubss  xmm5, xmm1, dword ptr [rsp+rbx+0C8h+vEyePosOut+4]
                  vsubss  xmm4, xmm0, dword ptr [rsp+rbx+0C8h+vEyePosOut+8]
                  vmulss  xmm2, xmm5, xmm5
                  vmulss  xmm1, xmm6, xmm6
                  vmulss  xmm0, xmm4, xmm4
                  vaddss  xmm3, xmm2, xmm1
                  vaddss  xmm2, xmm3, xmm0
                  vcomiss xmm2, xmm8
                }
                if ( v18 )
                {
                  v16 = 0;
                }
                else
                {
                  __asm
                  {
                    vmulss  xmm1, xmm5, dword ptr [rsp+rbx+0C8h+outForward+4]
                    vmulss  xmm0, xmm6, dword ptr [rsp+rbx+0C8h+outForward]
                    vaddss  xmm1, xmm1, xmm0
                    vcomiss xmm1, xmm7
                  }
                  if ( !v19 )
                  {
                    v35 = PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, &vEyePosOut + v17, &_RBP->r.currentOrigin, &bounds_origin, v17, 2047, 2049) == 0;
                    maxclients = level.maxclients;
                    if ( v35 )
                      v16 = 0;
                  }
                }
                ++v17;
                v20 += 12i64;
                v18 = v17 < maxclients;
                v19 = v17 <= maxclients;
              }
              while ( v17 < (int)maxclients );
              if ( v16 )
              {
LABEL_23:
                if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
                  __debugbreak();
                GUtils::ms_gUtils->FreeEntity(GUtils::ms_gUtils, _RBP);
              }
              else
              {
                _RBP->c.item[0].clipAmmoCount[1] = level.time + 500;
              }
            }
          }
        }
        ++v8;
        p_entnum += 12;
      }
      while ( v8 < level.actorCorpseCount );
      __asm
      {
        vmovaps xmm8, [rsp+0C8h+var_58]
        vmovaps xmm7, [rsp+0C8h+var_48]
        vmovaps xmm6, [rsp+0C8h+var_38]
      }
    }
  }
  else
  {
    v4 = 0i64;
    while ( 1 )
    {
      v5 = &g_entities[v4];
      if ( !g_entities[v4].client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 262, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
        __debugbreak();
      sentient = v5->sentient;
      if ( !sentient )
        break;
      Sentient_GetEyePosition(sentient, &vEyePosOut + v3);
      G_Client_GetViewDirection(v5, &outForward + v3++, NULL, NULL);
      ++v4;
      if ( v3 >= level.maxclients )
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

void __fastcall AIScriptedInterface::GetBodyPlantAngles(int iEntNum, int iClipMask, const vec3_t *vOrigin, double fYaw, float *pfPitch, float *pfRoll, float *pfHeight)
{
  __int64 v16; 
  int movingPlatform; 
  gentity_s *v19; 
  int groundEntNum; 
  float *angleOut; 
  vec3_t up; 
  vec3_t forward; 
  vec3_t right; 
  char v62; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm6
    vmovaps xmmword ptr [r11-88h], xmm9
    vmovaps xmmword ptr [r11-98h], xmm10
  }
  _R15 = pfPitch;
  _RDI = vOrigin;
  _R13 = pfHeight;
  v16 = iEntNum;
  __asm { vmovaps xmm6, xmm3 }
  if ( !pfPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 591, ASSERT_TYPE_ASSERT, "(pfPitch)", (const char *)&queryFormat, "pfPitch") )
    __debugbreak();
  if ( (unsigned int)v16 >= 0x7FE )
  {
    LODWORD(angleOut) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 593, ASSERT_TYPE_ASSERT, "(unsigned)( iEntNum ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "iEntNum doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", angleOut, 2046) )
      __debugbreak();
  }
  movingPlatform = 0;
  v19 = &g_entities[v16];
  __asm
  {
    vmovss  xmm10, cs:__real@3f800000
    vxorps  xmm9, xmm9, xmm9
  }
  if ( (BG_IsCorpseEntity(&v19->s) || v19->actor) && (!BG_IsCorpseEntity(&v19->s) ? (groundEntNum = v19->actor->Physics.groundEntNum) : (groundEntNum = v19->s.groundEntityNum), (movingPlatform = BGMovingPlatforms::IsMovingPlatform(groundEntNum)) != 0) )
  {
    AngleVectors(&g_entities[groundEntNum].r.currentAngles, NULL, NULL, &up);
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [rsp+130h+up], xmm9
      vmovss  dword ptr [rsp+130h+up+4], xmm9
      vmovss  dword ptr [rsp+130h+up+8], xmm10
    }
  }
  __asm { vmovaps xmm0, xmm6; yaw }
  YawVectors(*(float *)&_XMM0, &forward, &right);
  if ( movingPlatform )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rsp+130h+up+8]
      vmovss  xmm5, dword ptr [rsp+130h+up]
      vmulss  xmm1, xmm6, dword ptr [rsp+130h+forward+4]
      vmovaps xmmword ptr [rsp+130h+var_68+8], xmm7
      vmovaps [rsp+130h+var_78+8], xmm8
      vmovss  xmm8, dword ptr [rsp+130h+up+4]
      vmulss  xmm0, xmm8, dword ptr [rsp+130h+forward+8]
      vsubss  xmm7, xmm1, xmm0
      vmulss  xmm1, xmm5, dword ptr [rsp+130h+forward+8]
      vmulss  xmm0, xmm6, dword ptr [rsp+130h+forward]
      vsubss  xmm4, xmm1, xmm0
      vmulss  xmm1, xmm8, dword ptr [rsp+130h+forward]
      vmulss  xmm0, xmm5, dword ptr [rsp+130h+forward+4]
      vsubss  xmm3, xmm1, xmm0
      vmulss  xmm1, xmm8, xmm3
      vmulss  xmm0, xmm6, xmm4
      vsubss  xmm1, xmm1, xmm0
      vmulss  xmm0, xmm5, xmm3
      vmulss  xmm2, xmm6, xmm7
      vmovss  dword ptr [rsp+130h+forward], xmm1
      vsubss  xmm1, xmm2, xmm0
      vmulss  xmm0, xmm8, xmm7
      vmovaps xmm8, [rsp+130h+var_78+8]
      vmovss  dword ptr [rbp+3Fh+right+8], xmm3
      vmulss  xmm3, xmm5, xmm4
      vmovss  dword ptr [rsp+130h+forward+4], xmm1
      vsubss  xmm1, xmm3, xmm0
      vmovss  dword ptr [rbp+3Fh+right], xmm7
      vmovaps xmm7, xmmword ptr [rsp+130h+var_68+8]
      vmovss  dword ptr [rsp+130h+forward+8], xmm1
      vmovss  dword ptr [rbp+3Fh+right+4], xmm4
    }
  }
  *(float *)&_XMM0 = Actor_SetBodyPlantAngle(v16, iClipMask, _RDI, _RDI, &forward, pfPitch, movingPlatform);
  __asm { vmovaps xmm6, xmm0 }
  if ( pfRoll )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [r15]
      vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm1, cs:__real@41f00000
    }
    *pfRoll = 0.0;
  }
  if ( pfHeight )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+8]
      vsubss  xmm6, xmm6, xmm2
      vcomiss xmm6, xmm9
      vmovss  dword ptr [r13+0], xmm6
    }
  }
  _R11 = &v62;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-50h]
    vmovaps xmm10, xmmword ptr [r11-60h]
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
  int v13; 
  char v17; 
  char v18; 
  float pfPitch; 
  float pfRoll; 
  float pfHeight; 

  _RDI = self;
  if ( ((self->s.eType - 19) & 0xFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 739, ASSERT_TYPE_ASSERT, "((self->s.eType == ET_ACTOR_CORPSE) || (self->s.eType == ET_ACTOR))", (const char *)&queryFormat, "(self->s.eType == ET_ACTOR_CORPSE) || (self->s.eType == ET_ACTOR)") )
    __debugbreak();
  if ( _RDI->s.eType == ET_ACTOR_CORPSE )
  {
    GameScriptDataSP = GameScriptDataSP::GetGameScriptDataSP();
    _RBX = (__int64)&GameScriptDataSP->actorCorpseInfo[G_GetActorCorpseIndex(_RDI)].proneInfo;
  }
  else
  {
    _RBX = (__int64)&_RDI->actor->ProneInfo;
  }
  if ( *(_BYTE *)_RBX && !BG_IsRagdollTrajectory(&_RDI->s.lerp.pos) )
  {
    v13 = _RDI->clipmask & 0xFDFFBFFF;
    if ( bLerp )
    {
      __asm
      {
        vmovaps [rsp+0C8h+var_38], xmm6
        vmovaps [rsp+0C8h+var_48], xmm7
        vmovaps [rsp+0C8h+var_58], xmm8
        vmovaps [rsp+0C8h+var_68], xmm9
        vmovaps [rsp+0C8h+var_78], xmm11
        vmovaps [rsp+0C8h+var_88], xmm14
      }
      *(double *)&_XMM0 = G_Level_GetFrameDurationInSeconds();
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+140h]; fYaw
        vmulss  xmm9, xmm0, cs:__real@41f00000
        vmulss  xmm11, xmm0, cs:__real@41400000
      }
      AIScriptedInterface::GetBodyPlantAngles(_RDI->s.number, v13, &_RDI->r.currentOrigin, *(const float *)&_XMM3, &pfPitch, &pfRoll, &pfHeight);
      __asm
      {
        vmovss  xmm5, dword ptr [rbx+10h]
        vmovss  xmm4, [rsp+0C8h+pfPitch]
        vmovss  xmm7, cs:__real@3f800000
        vmovss  xmm8, cs:__real@bf800000
        vsubss  xmm0, xmm4, xmm5
        vmulss  xmm3, xmm0, cs:__real@3b360b61
        vaddss  xmm1, xmm3, cs:__real@3f000000
        vxorps  xmm14, xmm14, xmm14
        vroundss xmm2, xmm14, xmm1, 1
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm2, xmm0, cs:__real@43b40000
        vandps  xmm1, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm1, xmm9
        vxorps  xmm6, xmm6, xmm6
      }
      if ( !(v17 | v18) )
      {
        __asm
        {
          vcmpless xmm0, xmm6, xmm2
          vblendvps xmm0, xmm8, xmm7, xmm0
          vmulss  xmm1, xmm0, xmm9
          vaddss  xmm4, xmm1, xmm5
        }
      }
      __asm
      {
        vmovss  xmm5, [rsp+0C8h+arg_10]
        vsubss  xmm0, xmm5, dword ptr [rbx+14h]
        vmovss  dword ptr [rbx+10h], xmm4
        vmulss  xmm4, xmm0, cs:__real@3b360b61
        vaddss  xmm2, xmm4, cs:__real@3f000000
        vroundss xmm3, xmm14, xmm2, 1
        vmovaps xmm14, [rsp+0C8h+var_88]
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm2, xmm1, cs:__real@43b40000
        vandps  xmm0, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, xmm9
      }
      if ( !(v17 | v18) )
      {
        __asm
        {
          vcmpless xmm0, xmm6, xmm2
          vblendvps xmm0, xmm8, xmm7, xmm0
          vmulss  xmm1, xmm0, xmm9
          vaddss  xmm5, xmm1, dword ptr [rbx+14h]
        }
      }
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+0Ch]
        vmovss  xmm1, [rsp+0C8h+arg_18]
        vmovaps xmm9, [rsp+0C8h+var_68]
        vsubss  xmm3, xmm1, xmm2
        vandps  xmm0, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, xmm11
        vmovss  dword ptr [rbx+14h], xmm5
      }
      if ( !(v17 | v18) )
      {
        __asm
        {
          vcmpless xmm0, xmm6, xmm3
          vblendvps xmm0, xmm8, xmm7, xmm0
          vmulss  xmm1, xmm0, xmm11
          vaddss  xmm1, xmm1, xmm2
        }
      }
      __asm
      {
        vmovaps xmm11, [rsp+0C8h+var_78]
        vmovaps xmm8, [rsp+0C8h+var_58]
        vmovaps xmm7, [rsp+0C8h+var_48]
        vmovaps xmm6, [rsp+0C8h+var_38]
        vmovss  dword ptr [rbx+0Ch], xmm1
      }
    }
    else
    {
      __asm { vmovss  xmm3, dword ptr [rdi+140h]; fYaw }
      AIScriptedInterface::GetBodyPlantAngles(_RDI->s.number, v13, &_RDI->r.currentOrigin, *(const float *)&_XMM3, (float *)(_RBX + 16), (float *)(_RBX + 20), (float *)(_RBX + 12));
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
  int v11; 
  char v15; 
  char v16; 
  float pfPitch; 
  float pfHeight; 

  _RDI = this->GetEntity(this);
  if ( ((_RDI->s.eType - 17) & 0xFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\actor_corpse.cpp", 800, ASSERT_TYPE_ASSERT, "(self->s.eType == ET_ACTOR || self->s.eType == ET_AGENT)", (const char *)&queryFormat, "self->s.eType == ET_ACTOR || self->s.eType == ET_AGENT") )
    __debugbreak();
  _RBX = this->m_pAI;
  if ( _RBX->ProneInfo.orientPitch )
  {
    v11 = _RDI->clipmask & 0xFDFFBFFF;
    if ( bLerp )
    {
      __asm
      {
        vmovaps [rsp+98h+var_28], xmm6
        vmovaps [rsp+98h+var_38], xmm7
        vmovaps [rsp+98h+var_48], xmm8
        vmovaps [rsp+98h+var_58], xmm10
      }
      *(double *)&_XMM0 = G_Level_GetFrameDurationInSeconds();
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+140h]; fYaw
        vmulss  xmm10, xmm0, cs:__real@41f00000
        vmulss  xmm7, xmm0, cs:__real@41400000
      }
      AIScriptedInterface::GetBodyPlantAngles(_RDI->s.number, v11, &_RDI->r.currentOrigin, *(const float *)&_XMM3, &pfPitch, NULL, &pfHeight);
      __asm
      {
        vmovss  xmm6, [rsp+98h+pfPitch]
        vsubss  xmm0, xmm6, dword ptr [rbx+0BC0h]
        vmulss  xmm5, xmm0, cs:__real@3b360b61
        vaddss  xmm2, xmm5, cs:__real@3f000000
        vmovss  xmm8, cs:__real@bf800000
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm4, xmm0, xmm2, 1
        vsubss  xmm1, xmm5, xmm4
        vmulss  xmm2, xmm1, cs:__real@43b40000
        vandps  xmm0, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, xmm10
        vmovss  xmm5, cs:__real@3f800000
        vxorps  xmm4, xmm4, xmm4
      }
      if ( !(v15 | v16) )
      {
        __asm
        {
          vcmpless xmm0, xmm4, xmm2
          vblendvps xmm0, xmm8, xmm5, xmm0
          vmulss  xmm1, xmm0, xmm10
          vaddss  xmm6, xmm1, dword ptr [rbx+0BC0h]
        }
      }
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+0BBCh]
        vmovss  xmm1, [rsp+98h+arg_10]
        vmovaps xmm10, [rsp+98h+var_58]
        vsubss  xmm3, xmm1, xmm2
        vandps  xmm0, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, xmm7
        vmovss  dword ptr [rbx+0BC0h], xmm6
        vmovaps xmm6, [rsp+98h+var_28]
      }
      if ( !(v15 | v16) )
      {
        __asm
        {
          vcmpless xmm0, xmm4, xmm3
          vblendvps xmm0, xmm8, xmm5, xmm0
          vmulss  xmm1, xmm0, xmm7
          vaddss  xmm1, xmm1, xmm2
        }
      }
      __asm
      {
        vmovaps xmm8, [rsp+98h+var_48]
        vmovaps xmm7, [rsp+98h+var_38]
        vmovss  dword ptr [rbx+0BBCh], xmm1
      }
    }
    else
    {
      __asm { vmovss  xmm3, dword ptr [rdi+140h]; fYaw }
      AIScriptedInterface::GetBodyPlantAngles(_RDI->s.number, v11, &_RDI->r.currentOrigin, *(const float *)&_XMM3, &_RBX->ProneInfo.fTorsoPitch, NULL, &_RBX->ProneInfo.fBodyHeight);
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

