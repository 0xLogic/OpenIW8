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
  int v16; 
  BgGroundState *ground; 
  bool v29; 
  bool v30; 
  Bounds *bounds; 
  BgTrace *m_trace; 
  BgGroundState *v56; 
  float fmt; 
  int passEntityNum; 
  int contentMask; 
  vec3_t start; 
  vec3_t wishdir; 
  trace_t outResults; 
  pml_t pml; 

  v30 = pm->ground == NULL;
  _R14 = pm->ps;
  _RSI = moveDelta;
  *(_QWORD *)start.v = pSurfaceType;
  pml.isSkydiveTraced = 0;
  if ( v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_move.cpp", 28, ASSERT_TYPE_ASSERT, "(pm->ground)", (const char *)&queryFormat, "pm->ground") )
    __debugbreak();
  if ( !pm->movingPlatforms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_move.cpp", 29, ASSERT_TYPE_ASSERT, "(pm->movingPlatforms)", (const char *)&queryFormat, "pm->movingPlatforms") )
    __debugbreak();
  _R14->viewangles.v[0] = pEnt->r.currentAngles.v[0];
  _R14->viewangles.v[1] = pEnt->r.currentAngles.v[1];
  _R14->viewangles.v[2] = pEnt->r.currentAngles.v[2];
  memset_0(&pml, 0, sizeof(pml));
  pml.holdrand = BG_srand_timeangles(serverTime, &_R14->viewangles);
  _R15 = &_R14->origin;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  v16 = serverTime - _R14->serverTime;
  if ( v16 > 200 )
    v16 = 200;
  if ( v16 < 1 )
    v16 = 1;
  pml.msec = v16;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vmovss  [rbp+2D0h+pml.frametime], xmm1
  }
  _R14->serverTime = serverTime;
  _R14->serverTimeInterpolated = serverTime;
  _R14->commandTime = serverTime;
  _R14->commandTimeInterpolated = serverTime;
  _R14->inputTime = serverTime;
  _R14->inputTimeInterpolated = serverTime;
  __asm
  {
    vmovss  xmm0, dword ptr [r15]
    vmovss  dword ptr [rbp+2D0h+pml.previous_origin], xmm0
    vmovss  xmm1, dword ptr [r15+4]
    vmovss  dword ptr [rbp+2D0h+pml.previous_origin+4], xmm1
    vmovss  xmm0, dword ptr [r15+8]
    vmovss  dword ptr [rbp+2D0h+pml.previous_origin+8], xmm0
    vmovss  xmm0, dword ptr [r14+3Ch]
    vmovss  dword ptr [rbp+2D0h+pml.previous_velocity], xmm0
    vmovss  xmm1, dword ptr [r14+40h]
    vmovss  dword ptr [rbp+2D0h+pml.previous_velocity+4], xmm1
    vmovss  xmm0, dword ptr [r14+44h]
    vmovss  dword ptr [rbp+2D0h+pml.previous_velocity+8], xmm0
  }
  PM_DropTimers(pm, &pml);
  PM_GroundTrace(pm, &pml, 0);
  PM_SlopeWorldmodel_Update(pm, &pml);
  PM_CheckKnockbackFlag(pm, &pml);
  PM_UpdateCustomAnimFlags(pm);
  if ( *(_QWORD *)start.v )
    **(_WORD **)start.v = (pm->ground->trace.surfaceFlags >> 19) & 0x3F;
  if ( physicsMode == SA_PHYSICS_GRAVITY )
  {
    ground = pm->ground;
    if ( ground->walking )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vdivss  xmm2, xmm0, [rbp+2D0h+pml.frametime]
        vmulss  xmm1, xmm2, dword ptr [rsi]
        vmovss  dword ptr [r14+3Ch], xmm1
        vmulss  xmm0, xmm2, dword ptr [rsi+4]
        vmovss  dword ptr [r14+40h], xmm0
      }
      _R14->velocity.v[2] = 0.0;
      PM_ProjectVelocity(pm, &_R14->velocity, &pm->ground->trace.normal, &_R14->velocity);
      if ( (pm->ground->trace.surfaceFlags & 2) != 0 || (v29 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_R14->pm_flags, ACTIVE, 0xDu), v30 = !v29, v29) )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [r14+44h]
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm2, xmm0, [rbp+2D0h+pml.frametime]
          vsubss  xmm2, xmm1, xmm2
          vmovss  dword ptr [r14+44h], xmm2
        }
        PM_ProjectVelocity(pm, &_R14->velocity, &pm->ground->trace.normal, &_R14->velocity);
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vucomiss xmm0, dword ptr [r14+3Ch]
      }
      if ( !v30 )
        goto LABEL_20;
      __asm { vucomiss xmm0, dword ptr [r14+40h] }
      if ( !v30 )
      {
LABEL_20:
        if ( breakGlass )
          SV_BotBreakGlassMove(pEnt, &_R14->velocity, pm->bounds);
        PM_StepSlideMove(pm, &pml, 0, 0, 0);
      }
    }
    else
    {
      if ( ground->trace.allsolid || ground->trace.startsolid )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r15]
          vmovss  xmm1, dword ptr [r14+34h]
        }
        contentMask = pm->tracemask;
        bounds = pm->bounds;
        passEntityNum = pEnt->s.number;
        m_trace = pm->m_trace;
        __asm
        {
          vmovss  dword ptr [rsp+3D0h+start], xmm0
          vmovss  xmm0, dword ptr [r14+38h]
          vmovss  dword ptr [rsp+3D0h+start+4], xmm1
          vaddss  xmm1, xmm0, cs:__real@41400000
          vmovss  dword ptr [rsp+3D0h+start+8], xmm1
        }
        BgTrace::LegacyPlayerTrace(m_trace, pm, &outResults, &start, &_R14->origin, bounds, passEntityNum, contentMask, 0);
        PM_AddTraceTouchEnt(&outResults, pm);
        if ( outResults.allsolid || outResults.startsolid )
        {
          __asm
          {
            vmovss  xmm0, cs:__real@3f800000
            vdivss  xmm2, xmm0, [rbp+2D0h+pml.frametime]
            vmulss  xmm1, xmm2, dword ptr [rsi]
            vmovss  dword ptr [r14+3Ch], xmm1
            vmulss  xmm0, xmm2, dword ptr [rsi+4]
            vmovss  dword ptr [r14+40h], xmm0
            vmulss  xmm0, xmm2, dword ptr [rsi+8]
            vmovss  dword ptr [r14+44h], xmm0
            vmovss  xmm0, dword ptr [rsi]
            vaddss  xmm1, xmm0, dword ptr [r15]
            vmovss  dword ptr [r15], xmm1
            vmovss  xmm2, dword ptr [r15+4]
            vaddss  xmm0, xmm2, dword ptr [rsi+4]
            vmovss  dword ptr [r15+4], xmm0
            vmovss  xmm1, dword ptr [r15+8]
            vaddss  xmm2, xmm1, dword ptr [rsi+8]
            vmovss  dword ptr [r15+8], xmm2
          }
          return 1i64;
        }
        __asm
        {
          vmovss  xmm0, dword ptr [r14+38h]
          vaddss  xmm1, xmm0, cs:__real@40400000
          vmovss  dword ptr [r14+38h], xmm1
        }
      }
      __asm
      {
        vmovss  xmm5, cs:__real@3f800000
        vdivss  xmm0, xmm5, [rbp+2D0h+pml.frametime]
        vmulss  xmm2, xmm0, dword ptr [rsi+4]
        vmulss  xmm4, xmm0, dword ptr [rsi]
        vmulss  xmm1, xmm2, xmm2
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm3, xmm1, xmm1; wishspeed
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm5, xmm0
        vdivss  xmm1, xmm5, xmm0
        vmulss  xmm0, xmm4, xmm1
        vmovss  dword ptr [rsp+3D0h+wishdir], xmm0
        vxorps  xmm0, xmm0, xmm0
        vmulss  xmm1, xmm2, xmm1
        vmovss  dword ptr [rsp+3D0h+wishdir+8], xmm0
        vmovss  dword ptr [rsp+3D0h+wishdir+4], xmm1
        vmovss  dword ptr [rsp+3D0h+fmt], xmm5
      }
      PM_Accelerate(pm, &pml, &wishdir, *(float *)&_XMM3, fmt);
      v56 = pm->ground;
      if ( v56->groundPlane )
        PM_ClipVelocity(&_R14->velocity, &v56->trace.normal, &_R14->velocity);
      if ( breakGlass )
        SV_BotBreakGlassMove(pEnt, &_R14->velocity, pm->bounds);
      PM_StepSlideMove(pm, &pml, 1, 0, 0);
      BG_UpdateMovementDir(pm, &pml, 0);
    }
  }
  else if ( physicsMode )
  {
    if ( physicsMode == SA_PHYSICS_NOGRAVITY )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vdivss  xmm1, xmm0, [rbp+2D0h+pml.frametime]
        vmulss  xmm2, xmm1, dword ptr [rsi]
        vmovss  dword ptr [r14+3Ch], xmm2
        vmulss  xmm0, xmm1, dword ptr [rsi+4]
        vmovss  dword ptr [r14+40h], xmm0
        vmulss  xmm1, xmm1, dword ptr [rsi+8]
        vxorps  xmm0, xmm0, xmm0
        vucomiss xmm2, xmm0
        vmovss  dword ptr [r14+44h], xmm1
        vucomiss xmm0, dword ptr [r14+40h]
        vucomiss xmm0, xmm1
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_agent_move.cpp", 149, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unimplemented.") )
    {
      __debugbreak();
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm2, xmm0, [rbp+2D0h+pml.frametime]
      vmulss  xmm1, xmm2, dword ptr [rsi]
      vmovss  dword ptr [r14+3Ch], xmm1
      vmulss  xmm0, xmm2, dword ptr [rsi+4]
      vmovss  dword ptr [r14+40h], xmm0
      vmulss  xmm0, xmm2, dword ptr [rsi+8]
      vmovss  dword ptr [r14+44h], xmm0
      vmovss  xmm0, dword ptr [rsi]
      vaddss  xmm1, xmm0, dword ptr [r15]
      vmovss  dword ptr [r15], xmm1
      vmovss  xmm2, dword ptr [r15+4]
      vaddss  xmm0, xmm2, dword ptr [rsi+4]
      vmovss  dword ptr [r15+4], xmm0
      vmovss  xmm1, dword ptr [r15+8]
      vaddss  xmm2, xmm1, dword ptr [rsi+8]
      vmovss  dword ptr [r15+8], xmm2
    }
    if ( breakGlass != (unsigned __int8)physicsMode )
      SV_BotBreakGlassMove(pEnt, &_R14->velocity, pm->bounds);
  }
  __asm
  {
    vmovss  xmm3, cs:__real@3f000000
    vaddss  xmm1, xmm3, dword ptr [r14+3Ch]
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vaddss  xmm1, xmm3, dword ptr [r14+40h]
    vmovss  dword ptr [r14+3Ch], xmm2
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vaddss  xmm1, xmm3, dword ptr [r14+44h]
    vmovss  dword ptr [r14+40h], xmm2
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vmovss  dword ptr [r14+44h], xmm2
  }
  return 0i64;
}

