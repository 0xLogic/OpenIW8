/*
==============
SV_ScrAgentPMove
==============
*/

int __fastcall SV_ScrAgentPMove(gentity_s *pEnt, pmove_t *pm, const vec3_t *moveDelta, ScriptedAgentPhysicsMode_t physicsMode, int serverTime, int breakGlass, unsigned __int16 *pSurfaceType)
{
  return ?SV_ScrAgentPMove@@YAHPEAUgentity_s@@PEAVpmove_t@@AEBTvec3_t@@W4ScriptedAgentPhysicsMode_t@@HHPEAG@Z(pEnt, pm, moveDelta, physicsMode, serverTime, breakGlass, pSurfaceType);
}

/*
==============
SV_ScrAgentPMove
==============
*/
__int64 SV_ScrAgentPMove(gentity_s *pEnt, pmove_t *pm, const vec3_t *moveDelta, ScriptedAgentPhysicsMode_t physicsMode, int serverTime, int breakGlass, unsigned __int16 *pSurfaceType)
{
  bool v7; 
  playerState_s *ps; 
  _QWORD *v; 
  int v14; 
  BgGroundState *ground; 
  float v16; 
  float v17; 
  Bounds *bounds; 
  BgTrace *m_trace; 
  float v20; 
  __int128 v21; 
  float v22; 
  float v23; 
  BgGroundState *v27; 
  float v28; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  int passEntityNum; 
  int contentMask; 
  vec3_t start; 
  vec3_t wishdir; 
  trace_t outResults; 
  pml_t pml; 

  v7 = pm->ground == NULL;
  ps = pm->ps;
  *(_QWORD *)start.v = pSurfaceType;
  pml.isSkydiveTraced = 0;
  if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_move.cpp", 28, ASSERT_TYPE_ASSERT, "(pm->ground)", (const char *)&queryFormat, "pm->ground") )
    __debugbreak();
  if ( !pm->movingPlatforms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_move.cpp", 29, ASSERT_TYPE_ASSERT, "(pm->movingPlatforms)", (const char *)&queryFormat, "pm->movingPlatforms") )
    __debugbreak();
  ps->viewangles.v[0] = pEnt->r.currentAngles.v[0];
  ps->viewangles.v[1] = pEnt->r.currentAngles.v[1];
  ps->viewangles.v[2] = pEnt->r.currentAngles.v[2];
  memset_0(&pml, 0, sizeof(pml));
  pml.holdrand = BG_srand_timeangles(serverTime, &ps->viewangles);
  v = (_QWORD *)ps->origin.v;
  v14 = serverTime - ps->serverTime;
  if ( v14 > 200 )
    v14 = 200;
  if ( v14 < 1 )
    v14 = 1;
  pml.msec = v14;
  pml.frametime = (float)v14 * 0.001;
  ps->serverTime = serverTime;
  ps->serverTimeInterpolated = serverTime;
  ps->commandTime = serverTime;
  ps->commandTimeInterpolated = serverTime;
  ps->inputTime = serverTime;
  ps->inputTimeInterpolated = serverTime;
  *(_QWORD *)pml.previous_origin.v = *v;
  pml.previous_origin.v[2] = ps->origin.v[2];
  pml.previous_velocity = ps->velocity;
  PM_DropTimers(pm, &pml);
  PM_GroundTrace(pm, &pml, 0);
  PM_SlopeWorldmodel_Update(pm, &pml);
  PM_CheckKnockbackFlag(pm, &pml);
  PM_UpdateCustomAnimFlags(pm);
  if ( *(_QWORD *)start.v )
    **(_WORD **)start.v = (pm->ground->trace.surfaceFlags >> 19) & 0x3F;
  switch ( physicsMode )
  {
    case SA_PHYSICS_GRAVITY:
      ground = pm->ground;
      if ( ground->walking )
      {
        v16 = 1.0 / pml.frametime;
        ps->velocity.v[0] = (float)(1.0 / pml.frametime) * moveDelta->v[0];
        ps->velocity.v[1] = v16 * moveDelta->v[1];
        ps->velocity.v[2] = 0.0;
        PM_ProjectVelocity(pm, &ps->velocity, &pm->ground->trace.normal, &ps->velocity);
        if ( (pm->ground->trace.surfaceFlags & 2) != 0 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0xDu) )
        {
          ps->velocity.v[2] = ps->velocity.v[2] - (float)((float)ps->gravity * pml.frametime);
          PM_ProjectVelocity(pm, &ps->velocity, &pm->ground->trace.normal, &ps->velocity);
        }
        if ( ps->velocity.v[0] == 0.0 && ps->velocity.v[1] == 0.0 )
          break;
        if ( !breakGlass )
          goto LABEL_42;
        goto LABEL_41;
      }
      if ( ground->trace.allsolid || ground->trace.startsolid )
      {
        v17 = ps->origin.v[1];
        contentMask = pm->tracemask;
        bounds = pm->bounds;
        passEntityNum = pEnt->s.number;
        m_trace = pm->m_trace;
        start.v[0] = *(float *)v;
        v20 = ps->origin.v[2];
        start.v[1] = v17;
        start.v[2] = v20 + 12.0;
        BgTrace::LegacyPlayerTrace(m_trace, pm, &outResults, &start, &ps->origin, bounds, passEntityNum, contentMask, 0);
        PM_AddTraceTouchEnt(&outResults, pm);
        if ( outResults.allsolid || outResults.startsolid )
        {
          v28 = 1.0 / pml.frametime;
          ps->velocity.v[0] = (float)(1.0 / pml.frametime) * moveDelta->v[0];
          ps->velocity.v[1] = v28 * moveDelta->v[1];
          ps->velocity.v[2] = v28 * moveDelta->v[2];
          *(float *)v = moveDelta->v[0] + *(float *)v;
          ps->origin.v[1] = ps->origin.v[1] + moveDelta->v[1];
          ps->origin.v[2] = ps->origin.v[2] + moveDelta->v[2];
          return 1i64;
        }
        ps->origin.v[2] = ps->origin.v[2] + 3.0;
      }
      v21 = LODWORD(FLOAT_1_0);
      v22 = (float)(1.0 / pml.frametime) * moveDelta->v[1];
      v23 = (float)(1.0 / pml.frametime) * moveDelta->v[0];
      *(float *)&v21 = fsqrt((float)(v22 * v22) + (float)(v23 * v23));
      _XMM3 = v21;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm5, xmm0
      }
      wishdir.v[0] = v23 * (float)(1.0 / *(float *)&_XMM0);
      wishdir.v[2] = 0.0;
      wishdir.v[1] = v22 * (float)(1.0 / *(float *)&_XMM0);
      PM_Accelerate(pm, &pml, &wishdir, *(float *)&v21, 1.0);
      v27 = pm->ground;
      if ( v27->groundPlane )
        PM_ClipVelocity(&ps->velocity, &v27->trace.normal, &ps->velocity);
      if ( breakGlass )
        SV_BotBreakGlassMove(pEnt, &ps->velocity, pm->bounds);
      PM_StepSlideMove(pm, &pml, 1, 0, 0);
      BG_UpdateMovementDir(pm, &pml, 0);
      break;
    case SA_PHYSICS_NOCLIP:
      v30 = 1.0 / pml.frametime;
      ps->velocity.v[0] = (float)(1.0 / pml.frametime) * moveDelta->v[0];
      ps->velocity.v[1] = v30 * moveDelta->v[1];
      ps->velocity.v[2] = v30 * moveDelta->v[2];
      *(float *)v = moveDelta->v[0] + *(float *)v;
      ps->origin.v[1] = ps->origin.v[1] + moveDelta->v[1];
      ps->origin.v[2] = ps->origin.v[2] + moveDelta->v[2];
      if ( breakGlass )
        SV_BotBreakGlassMove(pEnt, &ps->velocity, pm->bounds);
      break;
    case SA_PHYSICS_NOGRAVITY:
      v31 = 1.0 / pml.frametime;
      v32 = (float)(1.0 / pml.frametime) * moveDelta->v[0];
      ps->velocity.v[0] = v32;
      ps->velocity.v[1] = v31 * moveDelta->v[1];
      v33 = v31 * moveDelta->v[2];
      ps->velocity.v[2] = v33;
      if ( v32 != 0.0 || ps->velocity.v[1] != 0.0 || v33 != 0.0 )
      {
        if ( !breakGlass )
        {
LABEL_42:
          PM_StepSlideMove(pm, &pml, 0, 0, 0);
          break;
        }
LABEL_41:
        SV_BotBreakGlassMove(pEnt, &ps->velocity, pm->bounds);
        goto LABEL_42;
      }
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_move.cpp", 149, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unimplemented.") )
        __debugbreak();
      break;
  }
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  ps->velocity.v[0] = *(float *)&_XMM2;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  ps->velocity.v[1] = *(float *)&_XMM2;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  ps->velocity.v[2] = *(float *)&_XMM2;
  return 0i64;
}

