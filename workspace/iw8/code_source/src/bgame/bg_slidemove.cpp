/*
==============
PM_StepSlideMove
==============
*/

void __fastcall PM_StepSlideMove(pmove_t *pm, pml_t *pml, int gravity, int bCheckFootsteps, int ignoreImpulseFields)
{
  ?PM_StepSlideMove@@YAXPEAVpmove_t@@PEAUpml_t@@HHH@Z(pm, pml, gravity, bCheckFootsteps, ignoreImpulseFields);
}

/*
==============
PM_PermuteRestrictiveClipPlanes
==============
*/

double __fastcall PM_PermuteRestrictiveClipPlanes(const vec3_t *velocity, int planeCount, const vec3_t *planes, int *permutation)
{
  double result; 

  *(float *)&result = ?PM_PermuteRestrictiveClipPlanes@@YAMAEBTvec3_t@@HQEBT1@QEAH@Z(velocity, planeCount, planes, permutation);
  return result;
}

/*
==============
PM_ClipVelocity_Internal
==============
*/

void __fastcall PM_ClipVelocity_Internal(const pmove_t *pm, const vec3_t *in, const vec3_t *normal, const vec3_t *walkableRefUp, const float overclip, vec3_t *out)
{
  ?PM_ClipVelocity_Internal@@YAXPEBVpmove_t@@AEBTvec3_t@@1PEBT2@MAEAT2@@Z(pm, in, normal, walkableRefUp, overclip, out);
}

/*
==============
PM_PlayerSwimSlideMove
==============
*/

void __fastcall PM_PlayerSwimSlideMove(pmove_t *pm, pml_t *pml)
{
  ?PM_PlayerSwimSlideMove@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_SlideMove
==============
*/

int __fastcall PM_SlideMove(const pmove_t *pm, pml_t *pml, int gravity, float frameTime, const vec3_t *groundNormal, const vec3_t *walkableRefUp, vec3_t *inOutOrigin, vec3_t *inOutVelocity, float *inOutMaxImpactSpeed, pmove_t *inOutPm)
{
  return ?PM_SlideMove@@YAHPEBVpmove_t@@PEAUpml_t@@HMPEBTvec3_t@@2AEAT3@3PEAMPEAV1@@Z(pm, pml, gravity, frameTime, groundNormal, walkableRefUp, inOutOrigin, inOutVelocity, inOutMaxImpactSpeed, inOutPm);
}

/*
==============
PM_UpdateImpulseFields
==============
*/

void __fastcall PM_UpdateImpulseFields(pmove_t *pm, pml_t *pml)
{
  ?PM_UpdateImpulseFields@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_AdjustSlideUp
==============
*/

void __fastcall PM_AdjustSlideUp(pmove_t *pm, pml_t *pml, vec3_t *inOutVector, double value)
{
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  _RBX = inOutVector;
  __asm { vmovaps xmm6, xmm3 }
  if ( BGMovingPlatforms::IsOnMovingPlatform(pm->ps) )
  {
    __asm
    {
      vmulss  xmm0, xmm6, dword ptr [rsi+68h]
      vaddss  xmm1, xmm0, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm1
      vmulss  xmm0, xmm6, dword ptr [rsi+6Ch]
      vaddss  xmm1, xmm0, dword ptr [rbx+4]
      vmovss  dword ptr [rbx+4], xmm1
      vmulss  xmm0, xmm6, dword ptr [rsi+70h]
      vaddss  xmm1, xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm1
    }
  }
  else
  {
    __asm { vmovaps xmm1, xmm6; height }
    WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&_XMM1, _RBX);
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
}

/*
==============
PM_CalcEndPosStoreContact
==============
*/
void PM_CalcEndPosStoreContact(const trace_t *trace, pmove_t *pm, pml_t *pml, const vec3_t *start, const vec3_t *end, vec3_t *result)
{
  bool v23; 
  unsigned int hitId; 

  _RAX = end;
  _R10 = result;
  __asm
  {
    vmovaps [rsp+18h+var_18], xmm6
    vmovss  xmm6, dword ptr [rcx]
    vmovss  xmm0, dword ptr [rax]
    vsubss  xmm1, xmm0, dword ptr [r9]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [r9]
    vmovss  dword ptr [r10], xmm3
    vmovss  xmm0, dword ptr [rax+4]
    vsubss  xmm1, xmm0, dword ptr [r9+4]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [r9+4]
    vmovss  dword ptr [r10+4], xmm3
    vmovss  xmm0, dword ptr [rax+8]
    vsubss  xmm1, xmm0, dword ptr [r9+8]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [r9+8]
    vmovss  dword ptr [r10+8], xmm3
  }
  v23 = pm == NULL;
  if ( pm )
  {
    v23 = trace->hitType <= (unsigned int)TRACE_HITTYPE_ENTITY;
    if ( trace->hitType == TRACE_HITTYPE_ENTITY )
    {
      hitId = trace->hitId;
      v23 = hitId <= 0x7FE;
      if ( hitId != 2046 )
        pm->movingPlatforms->m_contactEnt = hitId;
    }
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vcomiss xmm0, dword ptr [rcx]
  }
  if ( !v23 && !pml->hadSlideContact )
  {
    pml->hadSlideContact = 1;
    pml->slideFirstContactPos = *result;
    pml->slideFirstContactNormal = trace->normal;
  }
  __asm { vmovaps xmm6, [rsp+18h+var_18] }
}

/*
==============
PM_ClipVelocity_Internal
==============
*/
void PM_ClipVelocity_Internal(const pmove_t *pm, const vec3_t *in, const vec3_t *normal, const vec3_t *walkableRefUp, const float overclip, vec3_t *out)
{
  const dvar_t *v6; 
  float v12; 

  v6 = DCONST_DVARBOOL_playerCharacterCollisionStickyMovementFix;
  if ( !DCONST_DVARBOOL_playerCharacterCollisionStickyMovementFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionStickyMovementFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, [rsp+48h+overclip]
      vmovss  [rsp+48h+var_28], xmm0
    }
    PM_ClipVelocityOverClip(pm, in, normal, walkableRefUp, v12, out);
  }
  else
  {
    PM_ClipVelocity(in, normal, out);
  }
}

/*
==============
PM_PermuteRestrictiveClipPlanes
==============
*/
float PM_PermuteRestrictiveClipPlanes(const vec3_t *velocity, int planeCount, const vec3_t *planes, int *permutation)
{
  __int64 v4; 
  int v8; 
  __int64 v11; 
  bool v20; 
  bool v22; 

  v4 = planeCount;
  _RBP = velocity;
  if ( (unsigned int)(planeCount - 1) > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 104, ASSERT_TYPE_ASSERT, "( ( planeCount > 0 && planeCount <= 8 ) )", "( planeCount ) = %i", planeCount) )
    __debugbreak();
  if ( !planes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 105, ASSERT_TYPE_ASSERT, "(planes)", (const char *)&queryFormat, "planes") )
    __debugbreak();
  if ( !permutation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 106, ASSERT_TYPE_ASSERT, "(permutation)", (const char *)&queryFormat, "permutation") )
    __debugbreak();
  v8 = 0;
  if ( (int)v4 > 0 )
  {
    _R8 = 0i64;
    _R10 = &planes->v[2];
    do
    {
      v11 = _R8;
      __asm
      {
        vmovss  xmm0, dword ptr [r10-8]
        vmovss  xmm1, dword ptr [r10-4]
        vmulss  xmm2, xmm1, dword ptr [rbp+4]
        vmulss  xmm3, xmm0, dword ptr [rbp+0]
        vmovss  xmm0, dword ptr [rbp+8]
        vmulss  xmm1, xmm0, dword ptr [r10]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vmovss  [rsp+r8*4+78h+var_48], xmm2
      }
      v20 = _R8 == 0;
      if ( _R8 )
      {
        do
        {
          _RDX = permutation[v11 - 1];
          __asm { vcomiss xmm2, [rsp+rdx*4+78h+var_48] }
          if ( !v20 )
            break;
          permutation[v11] = _RDX;
          v22 = v11-- == 0;
          v20 = v22 || v11 == 0;
        }
        while ( v11 );
      }
      permutation[v11] = v8;
      ++_R8;
      ++v8;
      _R10 += 3;
    }
    while ( _R8 < v4 );
  }
  _RAX = *permutation;
  __asm { vmovss  xmm0, [rsp+rax*4+78h+var_48] }
  return *(float *)&_XMM0;
}

/*
==============
PM_PlayerSwimSlideMove
==============
*/
void PM_PlayerSwimSlideMove(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const char *v16; 
  int v17; 
  const char *v18; 
  const char *v19; 
  BOOL groundPlane; 
  int v33; 
  const dvar_t *v34; 
  int v35; 
  bool enabled; 
  BOOL v44; 
  int tracemask; 
  BgTrace *m_trace; 
  bool v60; 
  bool v61; 
  unsigned int m_characterCount; 
  unsigned __int16 EntityHitId; 
  char v71; 
  char v72; 
  BOOL v103; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v109; 
  trace_t outResults; 
  char v111; 
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
  _R13 = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 1195, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 1196, ASSERT_TYPE_ASSERT, "(pm->bounds)", (const char *)&queryFormat, "pm->bounds") )
    __debugbreak();
  if ( !pm->ground && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 1197, ASSERT_TYPE_ASSERT, "(pm->ground)", (const char *)&queryFormat, "pm->ground") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2555, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, GameModeFlagValues::ms_spValue, 0x3Au) )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_FIRING) )
      goto LABEL_19;
    v16 = "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )";
    v17 = 2559;
    v18 = "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))";
    v19 = "c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h";
  }
  else
  {
    v16 = "BG_IsPlayerSwimming( pm->ps )";
    v17 = 1198;
    v18 = "(BG_IsPlayerSwimming( pm->ps ))";
    v19 = "c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp";
  }
  if ( CoreAssert_Handler(v19, v17, ASSERT_TYPE_ASSERT, v18, (const char *)&queryFormat, v16) )
    __debugbreak();
LABEL_19:
  _R15 = pm->ps;
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 1200, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RDI = &_R15->origin;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm3, dword ptr [r13+24h]; frameTime
  }
  _RSI = &_R15->velocity;
  groundPlane = pm->ground->groundPlane;
  __asm
  {
    vmovss  dword ptr [rsp+1D0h+start], xmm0
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rsp+1D0h+start+4], xmm1
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rsp+1D0h+start+8], xmm0
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  xmm14, dword ptr [rsi]
    vmovss  xmm15, dword ptr [rsi+4]
  }
  v103 = groundPlane;
  __asm
  {
    vmovss  [rsp+1D0h+var_17C], xmm0
    vxorps  xmm13, xmm13, xmm13
    vxorps  xmm6, xmm6, xmm6
  }
  v33 = PM_SlideMove(pm, _R13, 0, *(float *)&_XMM3, NULL, NULL, &_R15->origin, &_R15->velocity, &_R13->impactSpeed, pm);
  v34 = DCONST_DVARMPBOOL_player_spaceEnabled;
  v35 = v33;
  if ( !DCONST_DVARMPBOOL_player_spaceEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_spaceEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  enabled = v34->current.enabled;
  __asm
  {
    vmovss  xmm8, dword ptr [rdi]
    vsubss  xmm0, xmm8, dword ptr [rsp+1D0h+start]
    vmovss  xmm9, dword ptr [rdi+4]
    vmovss  xmm7, dword ptr [rdi+8]
    vmovss  xmm10, dword ptr [rsi]
    vmovss  xmm11, dword ptr [rsi+4]
    vmovss  xmm12, dword ptr [rsi+8]
  }
  v44 = 0;
  if ( !enabled )
    v44 = v103;
  if ( enabled )
    v35 = 0;
  __asm
  {
    vmovss  [rsp+1D0h+var_180], xmm0
    vsubss  xmm0, xmm9, dword ptr [rsp+1D0h+start+4]
    vmovss  [rsp+1D0h+var_178], xmm0
  }
  if ( v35 )
    goto LABEL_32;
  _RAX = pm->ground;
  if ( _RAX->groundPlane )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f666666
      vcomiss xmm0, dword ptr [rax+18h]
    }
    if ( _RAX->groundPlane )
    {
LABEL_32:
      if ( !enabled )
      {
        tracemask = pm->tracemask;
        __asm
        {
          vmovss  xmm1, dword ptr [rsp+1D0h+start+4]
          vmovss  xmm0, dword ptr [rsp+1D0h+start]
          vmovss  xmm6, cs:__real@41980000
        }
        m_trace = pm->m_trace;
        __asm
        {
          vmovss  dword ptr [rsp+1D0h+end+4], xmm1
          vaddss  xmm1, xmm6, dword ptr [rsp+1D0h+start+8]
          vmovss  dword ptr [rsp+1D0h+end+8], xmm1
          vmovss  dword ptr [rsp+1D0h+end], xmm0
        }
        BgTrace::LegacyPlayerTrace(m_trace, pm, &outResults, &start, &end, pm->bounds, _R15->clientNum, tracemask, 0);
        PM_AddTraceTouchEnt(&outResults, pm);
        __asm
        {
          vmulss  xmm1, xmm6, [rbp+0D0h+outResults.fraction]
          vsubss  xmm6, xmm1, cs:__real@3f800000
          vcomiss xmm6, cs:__real@3f800000
        }
        if ( v60 )
        {
          __asm { vxorps  xmm6, xmm6, xmm6 }
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+1D0h+end]
            vaddss  xmm2, xmm6, dword ptr [rsp+1D0h+start+8]
            vmovss  xmm1, dword ptr [rsp+1D0h+end+4]
            vmovss  dword ptr [rdi], xmm0
            vmovss  xmm0, [rsp+1D0h+var_17C]
            vmovss  dword ptr [rdi+4], xmm1
            vmovss  dword ptr [rdi+8], xmm2
            vmovss  dword ptr [rsi+8], xmm0
            vmovss  dword ptr [rsi], xmm14
            vmovss  dword ptr [rsi+4], xmm15
            vmovss  xmm3, dword ptr [r13+24h]; frameTime
          }
          PM_SlideMove(pm, _R13, 0, *(float *)&_XMM3, NULL, NULL, &_R15->origin, &_R15->velocity, &_R13->impactSpeed, pm);
        }
      }
    }
  }
  v60 = 0;
  v61 = !v44;
  if ( v44 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  dword ptr [rbp+0D0h+var_150], xmm0
      vmovss  xmm1, dword ptr [rdi+4]
      vmovss  dword ptr [rbp+0D0h+var_150+4], xmm1
      vmovss  xmm0, dword ptr [rdi+8]
      vsubss  xmm2, xmm0, xmm6
      vmovss  dword ptr [rbp+0D0h+var_150+8], xmm2
    }
    if ( v44 )
    {
      __asm
      {
        vsubss  xmm0, xmm2, cs:__real@41100000
        vmovss  dword ptr [rbp+0D0h+var_150+8], xmm0
      }
    }
    BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, _RDI, &v109, pm->bounds, _R15->clientNum, pm->tracemask, 0);
    PM_AddTraceTouchEnt(&outResults, pm);
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
    EntityHitId = Trace_GetEntityHitId(&outResults);
    v60 = EntityHitId < m_characterCount;
    v61 = EntityHitId == m_characterCount;
    if ( EntityHitId < (int)m_characterCount )
      goto LABEL_53;
    __asm
    {
      vmovss  xmm0, [rbp+0D0h+outResults.fraction]
      vcomiss xmm0, cs:__real@3f800000
    }
    if ( EntityHitId >= m_characterCount )
    {
      __asm { vucomiss xmm6, xmm13 }
      if ( EntityHitId != m_characterCount )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r15+38h]
          vsubss  xmm1, xmm0, xmm6
          vmovss  dword ptr [r15+38h], xmm1
        }
      }
    }
    else
    {
      if ( !outResults.walkable )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+0D0h+outResults.normal+8]
          vcomiss xmm0, cs:__real@3e99999a
        }
      }
      PM_CalcEndPosStoreContact(&outResults, pm, _R13, _RDI, &v109, _RDI);
      __asm { vucomiss xmm6, xmm13 }
      if ( !v72 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+1D0h+start+8]
          vmovss  xmm1, dword ptr [r15+38h]
          vmaxss  xmm2, xmm0, xmm7
          vmovss  xmm0, dword ptr [rbp+0D0h+outResults.normal+8]
          vsubss  xmm3, xmm1, xmm2
          vmulss  xmm2, xmm0, cs:__real@42100000
          vcomiss xmm3, xmm2
        }
        if ( !(v71 | v72) )
          goto LABEL_53;
      }
      PM_ProjectVelocity(pm, &_R15->velocity, &outResults.normal, &_R15->velocity);
    }
  }
  else
  {
    __asm { vucomiss xmm6, xmm13 }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vsubss  xmm1, xmm0, dword ptr [rsp+1D0h+start+4]
    vmovss  xmm2, dword ptr [rdi]
    vsubss  xmm0, xmm2, dword ptr [rsp+1D0h+start]
    vmulss  xmm2, xmm14, [rsp+1D0h+var_180]
    vmulss  xmm3, xmm1, xmm15
    vmulss  xmm1, xmm0, xmm14
    vmulss  xmm0, xmm15, [rsp+1D0h+var_178]
    vaddss  xmm4, xmm3, xmm1
    vaddss  xmm1, xmm2, xmm0
    vaddss  xmm2, xmm1, cs:__real@3a83126f
    vcomiss xmm4, xmm2
  }
  if ( v60 || v61 )
  {
LABEL_53:
    __asm
    {
      vmovss  dword ptr [rdi], xmm8
      vmovss  dword ptr [rdi+4], xmm9
      vmovss  dword ptr [rdi+8], xmm7
      vmovss  dword ptr [rsi+8], xmm12
      vmovss  dword ptr [rsi+4], xmm11
      vmovss  dword ptr [rsi], xmm10
    }
  }
  _R11 = &v111;
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
}

/*
==============
PM_SlideMove
==============
*/

_BOOL8 __fastcall PM_SlideMove(const pmove_t *pm, pml_t *pml, int gravity, double frameTime, const vec3_t *groundNormal, const vec3_t *walkableRefUp, vec3_t *inOutOrigin, vec3_t *inOutVelocity, float *inOutMaxImpactSpeed, pmove_t *inOutPm)
{
  pmove_t *v25; 
  playerState_s *v26; 
  unsigned int v28; 
  bool v33; 
  WorldUpReferenceFramePM *p_refFrame; 
  __int64 v69; 
  __int64 v70; 
  int v75; 
  const char *v93; 
  bool v97; 
  bool v98; 
  __int16 groundRefEnt; 
  bool v100; 
  bool v101; 
  bool v117; 
  const dvar_t *v125; 
  bool v126; 
  Physics_WorldId v127; 
  bool v128; 
  unsigned __int16 EntityHitId; 
  int v132; 
  __int64 v133; 
  bool v137; 
  float *v138; 
  const dvar_t *v144; 
  int v149; 
  int v150; 
  bool v152; 
  float *v156; 
  __int64 v162; 
  bool i; 
  __int64 v169; 
  bool v170; 
  BOOL v230; 
  unsigned __int64 v231; 
  signed int v244; 
  _BOOL8 result; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  Bounds *bounds; 
  char v270; 
  int v271; 
  unsigned int inOutNumPhysicsBodies[2]; 
  playerState_s *ps; 
  int v274; 
  vec3_t *normal; 
  vec3_t *v277; 
  pml_t *pmla; 
  float *v279; 
  pmove_t *v280; 
  vec3_t *v281; 
  __int64 v282; 
  vec3_t out; 
  vec3_t vec; 
  vec3_t end; 
  vec3_t in; 
  vec3_t v287; 
  trace_t outResults; 
  vec3_t outCustomGravityDir; 
  char v290[16]; 
  WorldUpReferenceFrame v291; 
  trace_t results; 
  int v294[8]; 
  unsigned int inOutPhysicsBodies[8]; 
  vec3_t v296; 
  char v297; 
  char v298; 
  void *retaddr; 

  _RAX = &retaddr;
  v282 = -2i64;
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
    vmovaps xmm8, xmm3
    vmovss  [rbp+2C0h+var_338], xmm3
  }
  v274 = gravity;
  pmla = pml;
  _R14 = inOutVelocity;
  normal = (vec3_t *)groundNormal;
  v277 = (vec3_t *)walkableRefUp;
  _RDI = inOutOrigin;
  v281 = inOutOrigin;
  v279 = inOutMaxImpactSpeed;
  v25 = inOutPm;
  v280 = inOutPm;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_SlideMove");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 444, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( inOutPm && inOutPm != pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 445, ASSERT_TYPE_ASSERT, "((inOutPm == 0) || (inOutPm == pm))", "%s\n\tPM_SlideMove: if specified, inOutPm must reference the same object as pm.", "(inOutPm == NULL) || (inOutPm == pm)") )
    __debugbreak();
  v26 = pm->ps;
  ps = v26;
  inOutNumPhysicsBodies[0] = 0;
  PM_DebugMispredict(pm, 7, NULL);
  __asm { vxorps  xmm10, xmm10, xmm10 }
  v28 = 1;
  if ( (pm->m_flags & 0x202) == 0 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v26->pm_flags, ACTIVE, 0x13u) )
  {
    v270 = 0;
    __asm { vmovss  xmm2, dword ptr [r14+8] }
  }
  else
  {
    v270 = 1;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+8]
      vminss  xmm2, xmm0, xmm10
      vmovss  dword ptr [r14+8], xmm2
    }
  }
  __asm
  {
    vmovss  xmm1, dword ptr [r14]
    vmovss  dword ptr [rbp+2C0h+var_2A8], xmm1
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  dword ptr [rbp+2C0h+var_2A8+4], xmm0
    vmovss  dword ptr [rbp+2C0h+var_2A8+8], xmm2
    vmovss  dword ptr [rbp+2C0h+vec], xmm1
    vmovss  dword ptr [rbp+2C0h+vec+4], xmm0
    vmovss  dword ptr [rbp+2C0h+vec+8], xmm2
  }
  v33 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v26->pm_flags, ACTIVE, 0x10u);
  if ( v274 && !v33 )
  {
    if ( WorldUpReferenceFramePM::GetCustomSlideMoveGravityDir(&pm->refFrame, pm, &outCustomGravityDir) )
    {
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v291);
      WorldUpReferenceFrame::InitFromNormal(&v291, &outCustomGravityDir);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm8; height
      }
      WorldUpReferenceFrame::AddUpContribution(&v291, *(float *)&_XMM1, &vec);
      *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v291, inOutVelocity);
      __asm { vmulss  xmm7, xmm0, cs:__real@3f000000 }
      *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v291, &vec);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@3f000000
        vaddss  xmm1, xmm1, xmm7; height
      }
      WorldUpReferenceFrame::SetUpContribution(&v291, *(float *)&_XMM1, inOutVelocity);
      *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v291, &vec);
      p_refFrame = (WorldUpReferenceFramePM *)&v291;
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm8; height
      }
      WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, *(float *)&_XMM1, &vec);
      *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &vec);
      __asm { vmulss  xmm7, xmm0, cs:__real@3f000000 }
      *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, inOutVelocity);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@3f000000
        vaddss  xmm1, xmm1, xmm7; height
      }
      WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, inOutVelocity);
      *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &vec);
      p_refFrame = &pm->refFrame;
    }
    __asm { vmovaps xmm1, xmm0; height }
    WorldUpReferenceFrame::SetUpContribution(p_refFrame, *(float *)&_XMM1, &v287);
    _RAX = normal;
    if ( !normal )
      goto LABEL_24;
    PM_ClipVelocity(inOutVelocity, normal, inOutVelocity);
  }
  _RAX = normal;
LABEL_24:
  __asm { vmovaps xmm13, xmm8 }
  if ( _RAX )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vmovss  dword ptr [rbp+2C0h+var_140], xmm0
      vmovss  xmm1, dword ptr [rax+4]
      vmovss  dword ptr [rbp+2C0h+var_140+4], xmm1
      vmovss  xmm0, dword ptr [rax+8]
      vmovss  dword ptr [rbp+2C0h+var_140+8], xmm0
    }
    v28 = 2;
    _RAX = (vec3_t *)&v297;
  }
  else
  {
    _RAX = &v296;
  }
  v271 = v28;
  __asm
  {
    vmovss  xmm6, dword ptr [r14+4]
    vmovss  xmm4, dword ptr [r14]
    vmovss  xmm5, dword ptr [r14+8]
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vmovss  xmm12, cs:__real@3f800000
    vblendvps xmm1, xmm3, xmm12, xmm0
    vmovss  [rsp+3C0h+inOutNumPhysicsBodies+4], xmm1
    vdivss  xmm2, xmm12, xmm1
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rax], xmm0
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rax+4], xmm1
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rax+8], xmm0
  }
  if ( (pm->m_flags & 2) != 0 )
  {
    v69 = 3i64 * v28;
    *(_QWORD *)&v296.v[v69] = 0i64;
    v296.v[v69 + 2] = -1.0;
    v271 = ++v28;
  }
  PM_Door_GetIgnoreBodies(pm, pmla, inOutPhysicsBodies, inOutNumPhysicsBodies);
  inOutNumPhysicsBodies[1] = 0;
  v70 = v28;
  __asm
  {
    vmovss  xmm15, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm14, cs:__real@3f7fbe77
    vmovss  xmm11, cs:__real@3a83126f
    vmovss  xmm9, cs:__real@3dcccccd
  }
  v75 = v294[0];
  while ( 1 )
  {
    __asm
    {
      vmovsd  xmm6, cs:__real@3eb0c6f7a0b5ed8d
      vmulss  xmm0, xmm13, dword ptr [r14]
      vaddss  xmm1, xmm0, dword ptr [rdi]
      vmovss  dword ptr [rbp+2C0h+end], xmm1
      vmulss  xmm0, xmm13, dword ptr [r14+4]
      vaddss  xmm1, xmm0, dword ptr [rdi+4]
      vmovss  dword ptr [rbp+2C0h+end+4], xmm1
      vmulss  xmm0, xmm13, dword ptr [r14+8]
      vaddss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rbp+2C0h+end+8], xmm1
    }
    BgTrace::LegacyPlayerTraceIgnoreBodies(pm->m_trace, pm, &outResults, _RDI, &end, pm->bounds, v26->clientNum, inOutPhysicsBodies, inOutNumPhysicsBodies[0], pm->tracemask, 0);
    PM_AddTraceTouchEnt(&outResults, v25);
    if ( v25 && v26->pm_type != 5 && BG_Glass_CanBreakGlass(&outResults) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+2C0h+outResults.normal+4]
        vmulss  xmm3, xmm0, dword ptr [rbx+40h]
        vmovss  xmm1, dword ptr [rbp+2C0h+outResults.normal]
        vmulss  xmm2, xmm1, dword ptr [rbx+3Ch]
        vaddss  xmm4, xmm3, xmm2
        vmovss  xmm0, dword ptr [rbp+2C0h+outResults.normal+8]
        vmulss  xmm1, xmm0, dword ptr [rbx+44h]
        vaddss  xmm2, xmm4, xmm1
        vxorps  xmm6, xmm2, xmm15
      }
      if ( outResults.walkable )
      {
        _RBX = DCONST_DVARFLT_player_glassBreakWalkableSpeed;
        if ( !DCONST_DVARFLT_player_glassBreakWalkableSpeed )
        {
          v93 = "player_glassBreakWalkableSpeed";
          goto LABEL_38;
        }
      }
      else
      {
        _RBX = DCONST_DVARFLT_player_glassBreakSpeed;
        if ( !DCONST_DVARFLT_player_glassBreakSpeed )
        {
          v93 = "player_glassBreakSpeed";
LABEL_38:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v93) )
            __debugbreak();
        }
      }
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vcomiss xmm6, dword ptr [rbx+28h] }
      if ( v117 || v126 )
      {
        v26 = ps;
      }
      else
      {
        BG_AddPredictableEventToPlayerstate(EV_BREAK_GLASS, 0, pm->cmd.serverTime, pm->weaponMap, v25->ps);
        v26 = ps;
        BgTrace::LegacyPlayerTraceIgnoreBodies(pm->m_trace, pm, &outResults, _RDI, &end, pm->bounds, ps->clientNum, inOutPhysicsBodies, inOutNumPhysicsBodies[0], pm->tracemask & 0xFFFFFFEF, 0);
        PM_AddTraceTouchEnt(&outResults, v25);
      }
      __asm { vmovsd  xmm6, cs:__real@3eb0c6f7a0b5ed8d }
    }
    if ( outResults.allsolid )
    {
      if ( v25 && BG_Glass_CanBreakGlass(&outResults) )
      {
        BG_AddPredictableEventToPlayerstate(EV_BREAK_GLASS, 0, pm->cmd.serverTime, pm->weaponMap, v25->ps);
        BgTrace::LegacyPlayerTraceIgnoreBodies(pm->m_trace, pm, &outResults, _RDI, &end, pm->bounds, v26->clientNum, inOutPhysicsBodies, inOutNumPhysicsBodies[0], pm->tracemask & 0xFFFFFFEF, 0);
        PM_AddTraceTouchEnt(&outResults, v25);
      }
      if ( outResults.allsolid )
      {
        if ( !BGMovingPlatformClient::CorrectPlatformPenetration(pm->movingPlatforms, pm, &outResults, _RDI, 0) )
        {
          __asm { vmovaps xmm1, xmm10; height }
          WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, *(float *)&_XMM1, inOutVelocity);
          v230 = 1;
          goto LABEL_135;
        }
        if ( BGMovingPlatformPS::UseRockingMoverWallFix2() )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi]
            vmovss  dword ptr [rbp+2C0h+end], xmm0
            vmovss  xmm1, dword ptr [rdi+4]
            vmovss  dword ptr [rbp+2C0h+end+4], xmm1
            vmovss  xmm0, dword ptr [rdi+8]
            vmovss  dword ptr [rbp+2C0h+end+8], xmm0
          }
        }
        PM_AddTraceTouchEnt(&outResults, v25);
      }
    }
    v97 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v26->pm_flags, ACTIVE, 0x2Au);
    v98 = !v97;
    if ( v97 && ((groundRefEnt = v26->groundRefEnt, groundRefEnt == 2047) || (v98 = groundRefEnt == 0, !groundRefEnt)) )
    {
      v100 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING);
      v98 = !v100;
      if ( !v100 )
      {
        v101 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2575, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )");
        v98 = !v101;
        if ( v101 )
          __debugbreak();
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, [rbp+2C0h+outResults.fraction]
        vcvtss2sd xmm0, xmm0, xmm0
        vcomisd xmm0, xmm6
      }
    }
    __asm
    {
      vmovss  xmm6, [rbp+2C0h+outResults.fraction]
      vcomiss xmm6, xmm10
    }
    if ( !v98 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+2C0h+end]
        vsubss  xmm1, xmm0, dword ptr [rdi]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm3
        vmovss  xmm0, dword ptr [rbp+2C0h+end+4]
        vsubss  xmm1, xmm0, dword ptr [rdi+4]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rdi+4]
        vmovss  dword ptr [rdi+4], xmm3
        vmovss  xmm0, dword ptr [rbp+2C0h+end+8]
        vsubss  xmm1, xmm0, dword ptr [rdi+8]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rdi+8]
        vmovss  dword ptr [rdi+8], xmm3
      }
      v117 = 0;
      if ( v25 )
      {
        v117 = outResults.hitType == TRACE_HITTYPE_BEGIN;
        if ( outResults.hitType == TRACE_HITTYPE_ENTITY )
        {
          v117 = outResults.hitId < 0x7FE;
          if ( outResults.hitId != 2046 )
            v25->movingPlatforms->m_contactEnt = outResults.hitId;
        }
      }
      __asm
      {
        vmovss  xmm0, [rbp+2C0h+outResults.fraction]
        vcomiss xmm0, xmm12
      }
      if ( v117 )
      {
        _RCX = pmla;
        if ( !pmla->hadSlideContact )
        {
          pmla->hadSlideContact = 1;
          _RCX->slideFirstContactPos.v[0] = _RDI->v[0];
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+4]
            vmovss  dword ptr [rcx+230h], xmm0
            vmovss  xmm1, dword ptr [rdi+8]
            vmovss  dword ptr [rcx+234h], xmm1
            vmovss  xmm0, dword ptr [rbp+2C0h+outResults.normal]
            vmovss  dword ptr [rcx+238h], xmm0
            vmovss  xmm1, dword ptr [rbp+2C0h+outResults.normal+4]
            vmovss  dword ptr [rcx+23Ch], xmm1
            vmovss  xmm0, dword ptr [rbp+2C0h+outResults.normal+8]
            vmovss  dword ptr [rcx+240h], xmm0
          }
        }
      }
    }
    v125 = DVARBOOL_bg_checkPlayerOutsideSolid;
    if ( !DVARBOOL_bg_checkPlayerOutsideSolid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_checkPlayerOutsideSolid") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v125);
    v126 = !v125->current.enabled;
    if ( v125->current.enabled )
    {
      v127 = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
      BgTrace::LegacyTraceHandler(pm->m_trace, v127, &results, _RDI, _RDI, pm->bounds, ps->clientNum, pm->tracemask, ps);
      v126 = !results.startsolid;
      if ( results.startsolid )
      {
        v128 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 616, ASSERT_TYPE_ASSERT, "(!checkTrace.startsolid)", (const char *)&queryFormat, "!checkTrace.startsolid");
        v126 = !v128;
        if ( v128 )
          __debugbreak();
      }
    }
    __asm
    {
      vmovss  xmm0, [rbp+2C0h+outResults.fraction]
      vucomiss xmm0, xmm12
    }
    if ( v126 )
    {
      v244 = inOutNumPhysicsBodies[1];
LABEL_130:
      if ( v274 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+2C0h+vec]
          vmovss  dword ptr [r14], xmm0
          vmovss  xmm1, dword ptr [rbp+2C0h+vec+4]
          vmovss  dword ptr [r14+4], xmm1
          vmovss  xmm0, dword ptr [rbp+2C0h+vec+8]
          vmovss  dword ptr [r14+8], xmm0
        }
      }
      if ( ps->pm_time )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+2C0h+var_2A8]
          vmovss  dword ptr [r14], xmm0
          vmovss  xmm1, dword ptr [rbp+2C0h+var_2A8+4]
          vmovss  dword ptr [r14+4], xmm1
          vmovss  xmm0, dword ptr [rbp+2C0h+var_2A8+8]
          vmovss  dword ptr [r14+8], xmm0
        }
      }
      v230 = v244 != 0;
      goto LABEL_135;
    }
    if ( v25 )
    {
      EntityHitId = Trace_GetEntityHitId(&outResults);
      PM_AddTouchEnt(v25, EntityHitId, PMTF_TOUCHER_PLAYER);
      __asm { vmovss  xmm0, [rbp+2C0h+outResults.fraction] }
    }
    __asm
    {
      vmulss  xmm0, xmm0, xmm13
      vsubss  xmm13, xmm13, xmm0
    }
    if ( v271 >= 8 )
    {
      *(_QWORD *)inOutVelocity->v = 0i64;
      inOutVelocity->v[2] = 0.0;
      v230 = 1;
      goto LABEL_135;
    }
    v132 = 0;
    v133 = 0i64;
    __asm
    {
      vmovss  xmm4, dword ptr [rbp+2C0h+outResults.normal+8]
      vmovss  xmm5, dword ptr [rbp+2C0h+outResults.normal+4]
      vmovss  xmm6, dword ptr [rbp+2C0h+outResults.normal]
    }
    v137 = v70 == 0;
    if ( v70 > 0 )
    {
      v138 = &v296.v[2];
      while ( 1 )
      {
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [rax-8]
          vmulss  xmm0, xmm5, dword ptr [rax-4]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm4, dword ptr [rax]
          vaddss  xmm2, xmm2, xmm1
          vcomiss xmm2, xmm14
        }
        if ( !v137 )
          break;
        ++v132;
        ++v133;
        v138 += 3;
        v137 = v133 <= (unsigned __int64)v70;
        if ( v133 >= v70 )
          goto LABEL_91;
      }
      v144 = DCONST_DVARBOOL_playerCharacterCollisionStickyMovementFix;
      if ( !DCONST_DVARBOOL_playerCharacterCollisionStickyMovementFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionStickyMovementFix") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v144);
      if ( v144->current.enabled )
      {
        __asm { vmovss  dword ptr [rsp+3C0h+fmt], xmm11 }
        PM_ClipVelocityOverClip(pm, inOutVelocity, &outResults.normal, v277, fmt, inOutVelocity);
      }
      else
      {
        PM_ClipVelocity(inOutVelocity, &outResults.normal, inOutVelocity);
      }
      __asm
      {
        vmovss  xmm6, dword ptr [rbp+2C0h+outResults.normal]
        vmovss  xmm5, dword ptr [rbp+2C0h+outResults.normal+4]
        vmovss  xmm4, dword ptr [rbp+2C0h+outResults.normal+8]
        vcomiss xmm8, xmm10
        vaddss  xmm0, xmm6, dword ptr [r14]
        vmovss  dword ptr [r14], xmm0
        vaddss  xmm1, xmm5, dword ptr [r14+4]
        vaddss  xmm0, xmm4, dword ptr [r14+8]
        vmovss  dword ptr [r14+8], xmm0
        vmovss  dword ptr [r14+4], xmm1
      }
    }
LABEL_91:
    if ( v132 >= v271 )
    {
      _RAX = 3 * v70;
      __asm
      {
        vmovss  dword ptr [rbp+rax*4+2C0h+var_140], xmm6
        vmovss  dword ptr [rbp+rax*4+2C0h+var_140+4], xmm5
        vmovss  dword ptr [rbp+rax*4+2C0h+var_140+8], xmm4
      }
      v149 = v271 + 1;
      v271 = v149;
      ++v70;
      if ( (unsigned int)(v149 - 1) > 7 )
      {
        LODWORD(bounds) = v149;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 104, ASSERT_TYPE_ASSERT, "( ( planeCount > 0 && planeCount <= 8 ) )", "( planeCount ) = %i", bounds) )
          __debugbreak();
      }
      v150 = 0;
      _R8 = 0i64;
      v152 = 0;
      if ( v70 > 0 )
      {
        __asm
        {
          vmovss  xmm4, dword ptr [r14+4]
          vmovss  xmm3, dword ptr [r14]
          vmovss  xmm5, dword ptr [r14+8]
        }
        v156 = &v296.v[2];
        do
        {
          __asm
          {
            vmulss  xmm1, xmm3, dword ptr [r9-8]
            vmulss  xmm0, xmm4, dword ptr [r9-4]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm5, dword ptr [r9]
            vaddss  xmm0, xmm2, xmm1
            vmovss  dword ptr [rbp+r8*4+2C0h+var_210.m_axisAdjusted], xmm0
          }
          v162 = _R8;
          for ( i = _R8 == 0; v162; i = v117 || v162 == 0 )
          {
            _RDX = v294[v162 - 1];
            __asm { vcomiss xmm0, dword ptr [rbp+rdx*4+2C0h+var_210.m_axisAdjusted] }
            if ( !i )
              break;
            v294[v162] = _RDX;
            v117 = v162-- == 0;
          }
          v294[v162] = v150++;
          ++_R8;
          v156 += 3;
          v152 = _R8 < (unsigned __int64)v70;
        }
        while ( _R8 < v70 );
        v75 = v294[0];
      }
      _RAX = v75;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+rax*4+2C0h+var_210.m_axisAdjusted]
        vcomiss xmm0, xmm9
      }
      if ( v152 )
        break;
    }
LABEL_124:
    v244 = inOutNumPhysicsBodies[1] + 1;
    inOutNumPhysicsBodies[1] = v244;
    if ( v244 >= 4 )
      goto LABEL_130;
    _RDI = v281;
    v26 = ps;
  }
  _RCX = v279;
  if ( v279 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm15
      vcomiss xmm0, dword ptr [rcx]
      vmovss  dword ptr [rcx], xmm0
    }
  }
  __asm { vmovss  dword ptr [rsp+3C0h+fmt], xmm11 }
  PM_ClipVelocityOverClip(pm, inOutVelocity, &v296 + v75, v277, fmta, &out);
  __asm { vmovss  dword ptr [rsp+3C0h+fmt], xmm11 }
  PM_ClipVelocityOverClip(pm, &vec, &v296 + v75, v277, fmtb, &in);
  v169 = 1i64;
  v170 = (unsigned __int64)v70 > 1;
  if ( v70 <= 1 )
  {
LABEL_123:
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+2C0h+out]
      vmovss  dword ptr [r14], xmm0
      vmovss  xmm1, dword ptr [rbp+2C0h+out+4]
      vmovss  dword ptr [r14+4], xmm1
      vmovss  xmm0, dword ptr [rbp+2C0h+out+8]
      vmovss  dword ptr [r14+8], xmm0
      vmovsd  xmm1, qword ptr [rbp+2C0h+in]
      vmovsd  qword ptr [rbp+2C0h+vec], xmm1
    }
    vec.v[2] = in.v[2];
    goto LABEL_124;
  }
  while ( 1 )
  {
    _RBX = &v296 + v294[v169];
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+2C0h+out+4]
      vmulss  xmm3, xmm0, dword ptr [rbx+4]
      vmovss  xmm1, dword ptr [rbp+2C0h+out]
      vmulss  xmm2, xmm1, dword ptr [rbx]
      vaddss  xmm4, xmm3, xmm2
      vmovss  xmm0, dword ptr [rbp+2C0h+out+8]
      vmulss  xmm1, xmm0, dword ptr [rbx+8]
      vaddss  xmm2, xmm4, xmm1
      vcomiss xmm2, xmm9
    }
    if ( v170 )
    {
      __asm { vmovss  dword ptr [rsp+3C0h+fmt], xmm11 }
      PM_ClipVelocityOverClip(pm, &out, _RBX, v277, fmtc, &out);
      __asm { vmovss  dword ptr [rsp+3C0h+fmt], xmm11 }
      PM_ClipVelocityOverClip(pm, &in, _RBX, v277, fmtd, &in);
      _RSI = (char *)(&v296 + v75);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+2C0h+out+4]
        vmulss  xmm3, xmm0, dword ptr [rsi+4]
        vmovss  xmm1, dword ptr [rbp+2C0h+out]
        vmulss  xmm2, xmm1, dword ptr [rsi]
        vaddss  xmm4, xmm3, xmm2
        vmovss  xmm0, dword ptr [rbp+2C0h+out+8]
        vmulss  xmm1, xmm0, dword ptr [rsi+8]
        vaddss  xmm2, xmm4, xmm1
        vcomiss xmm2, xmm10
      }
      if ( v117 )
        break;
    }
LABEL_121:
    v170 = ++v169 < (unsigned __int64)v70;
    if ( v169 >= v70 )
    {
      __asm { vmovss  xmm8, [rbp+2C0h+var_338] }
      v25 = v280;
      goto LABEL_123;
    }
  }
  if ( _RSI == v290 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  if ( _RBX == (const vec3_t *)v290 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, dword ptr [rsi+4]
    vmovss  xmm5, dword ptr [rbx+8]
    vmovss  xmm4, dword ptr [rsi+8]
    vmovss  xmm6, dword ptr [rbx+4]
    vmulss  xmm1, xmm7, xmm5
    vmulss  xmm0, xmm4, xmm6
    vsubss  xmm8, xmm1, xmm0
    vmulss  xmm1, xmm4, dword ptr [rbx]
    vmulss  xmm0, xmm5, dword ptr [rsi]
    vsubss  xmm5, xmm1, xmm0
    vmulss  xmm2, xmm6, dword ptr [rsi]
    vmulss  xmm1, xmm7, dword ptr [rbx]
    vsubss  xmm4, xmm2, xmm1
    vmulss  xmm3, xmm5, xmm5
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm12, xmm0
    vdivss  xmm0, xmm12, xmm1
    vmulss  xmm6, xmm8, xmm0
    vmulss  xmm5, xmm5, xmm0
    vmulss  xmm7, xmm4, xmm0
  }
  if ( !v270 )
  {
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [r14]
      vmulss  xmm0, xmm5, dword ptr [r14+4]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, dword ptr [r14+8]
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm3, xmm6
      vmovss  dword ptr [rbp+2C0h+out], xmm0
      vmulss  xmm1, xmm3, xmm5
      vmovss  dword ptr [rbp+2C0h+out+4], xmm1
      vmulss  xmm0, xmm3, xmm7
      vmovss  dword ptr [rbp+2C0h+out+8], xmm0
      vmulss  xmm3, xmm5, dword ptr [rbp+2C0h+vec+4]
      vmulss  xmm2, xmm6, dword ptr [rbp+2C0h+vec]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm0, xmm7, dword ptr [rbp+2C0h+vec+8]
      vaddss  xmm3, xmm4, xmm0
      vmulss  xmm2, xmm3, xmm6
      vmovss  dword ptr [rbp+2C0h+in], xmm2
      vmulss  xmm0, xmm3, xmm5
      vmovss  dword ptr [rbp+2C0h+in+4], xmm0
      vmulss  xmm1, xmm3, xmm7
      vmovss  dword ptr [rbp+2C0h+in+8], xmm1
    }
  }
  v230 = 1;
  v231 = 1i64;
  while ( 1 )
  {
    if ( v231 != v169 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+2C0h+out+4]
        vmulss  xmm3, xmm0, dword ptr [rbp+rcx*4+2C0h+var_140+4]
        vmovss  xmm1, dword ptr [rbp+2C0h+out]
        vmulss  xmm2, xmm1, dword ptr [rbp+rcx*4+2C0h+var_140]
        vaddss  xmm4, xmm3, xmm2
        vmovss  xmm0, dword ptr [rbp+2C0h+out+8]
        vmulss  xmm1, xmm0, dword ptr [rbp+rcx*4+2C0h+var_140+8]
        vaddss  xmm2, xmm4, xmm1
        vcomiss xmm2, xmm9
      }
      if ( v231 < v169 )
        break;
    }
    if ( (__int64)++v231 >= v70 )
      goto LABEL_121;
  }
  *(_QWORD *)inOutVelocity->v = 0i64;
  inOutVelocity->v[2] = 0.0;
LABEL_135:
  Sys_ProfEndNamedEvent();
  result = v230;
  _R11 = &v298;
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
PM_StepSlideMove
==============
*/
void PM_StepSlideMove(pmove_t *pm, pml_t *pml, int gravity, int bCheckFootsteps, int ignoreImpulseFields)
{
  pmove_t *inOutPm; 
  playerState_s *ps; 
  const dvar_t *v36; 
  BgGroundState *ground; 
  const vec3_t *p_normal; 
  const vec3_t *p_platformUp; 
  int v41; 
  int v49; 
  int v56; 
  BgGroundState *v67; 
  int EntityHitId; 
  int CharacterMaxCount; 
  char v91; 
  const BgHandler *v101; 
  void (__fastcall *v102)(BgHandler *, const vec3_t *, const vec3_t *, const playerState_s *, float, bool); 
  bool v103; 
  int v106; 
  char v108; 
  bool IsPlayerZeroG; 
  const vec3_t *p_velocity; 
  const BgHandler *m_bgHandler; 
  void (__fastcall *BotStuckCheck)(BgHandler *, const vec3_t *, const vec3_t *, const playerState_s *, float, bool); 
  bool v180; 
  int fmt; 
  float fmta; 
  float fmtb; 
  int fmtc; 
  int walkableRefUp; 
  vec3_t *walkableRefUpa; 
  int v199; 
  BOOL v200; 
  int gravitya; 
  const dvar_t *v203; 
  vec3_t *v206; 
  vec3_t vFallbackOrg; 
  vec3_t origin; 
  vec3_t vFallbackVel; 
  vec3_t vec; 
  vec3_t end; 
  vec3_t v212; 
  vec3_t inOutVector; 
  vec3_t groundNormal; 
  vec3_t result; 
  trace_t outResults; 
  char v217; 
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
  _R15 = pml;
  inOutPm = pm;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm6, xmm6, xmm6
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_StepSlideMove");
  if ( !inOutPm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 845, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = inOutPm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 845, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _EBX = 0;
  v200 = 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
  {
    v199 = 0;
LABEL_13:
    Jump_ClearState(inOutPm);
    goto LABEL_14;
  }
  if ( inOutPm->ground->groundPlane )
  {
    v199 = 1;
    goto LABEL_14;
  }
  v199 = 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) && ps->pm_time )
    goto LABEL_13;
LABEL_14:
  PM_ApplyCollisionAvoid(inOutPm, _R15);
  if ( ignoreImpulseFields )
  {
    *(_QWORD *)_R15->impulseFieldVelocity.v = 0i64;
    _R15->impulseFieldVelocity.v[2] = 0.0;
  }
  _R14 = &ps->velocity;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+200h]
    vaddss  xmm1, xmm0, dword ptr [r14]
    vmovss  dword ptr [r14], xmm1
    vmovss  xmm2, dword ptr [r14+4]
    vaddss  xmm0, xmm2, dword ptr [r15+204h]
    vmovss  dword ptr [r14+4], xmm0
    vmovss  xmm1, dword ptr [r14+8]
    vaddss  xmm2, xmm1, dword ptr [r15+208h]
    vmovss  dword ptr [r14+8], xmm2
  }
  _RSI = &ps->origin;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  dword ptr [rbp+150h+vFallbackOrg], xmm0
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  dword ptr [rbp+150h+vFallbackOrg+4], xmm1
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rbp+150h+vFallbackOrg+8], xmm0
    vmovss  xmm1, dword ptr [r14]
    vmovss  dword ptr [rbp+150h+vFallbackVel], xmm1
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  dword ptr [rbp+150h+vFallbackVel+4], xmm0
    vmovss  xmm1, dword ptr [r14+8]
    vmovss  dword ptr [rbp+150h+vFallbackVel+8], xmm1
  }
  v36 = DCONST_DVARMPBOOL_pmove_moveWalkableOnly;
  v203 = DCONST_DVARMPBOOL_pmove_moveWalkableOnly;
  if ( !DCONST_DVARMPBOOL_pmove_moveWalkableOnly )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pmove_moveWalkableOnly") )
      __debugbreak();
    v36 = v203;
  }
  Dvar_CheckFrontendServerThread(v36);
  ground = inOutPm->ground;
  p_normal = &ground->trace.normal;
  if ( !ground->groundPlane )
    p_normal = NULL;
  *(_QWORD *)groundNormal.v = p_normal;
  p_platformUp = &_R15->platformUp;
  if ( !v203->current.enabled )
    p_platformUp = NULL;
  v206 = (vec3_t *)p_platformUp;
  __asm { vmovss  xmm3, dword ptr [r15+24h]; frameTime }
  v41 = PM_SlideMove(inOutPm, _R15, gravity, *(float *)&_XMM3, p_normal, p_platformUp, &ps->origin, &ps->velocity, &_R15->impactSpeed, inOutPm);
  gravitya = v41;
  if ( !_R15->initialSlideMoveBumped )
    _R15->initialSlideMoveBumped = v41;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2612, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
  {
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2605, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !BG_IsPlayerZeroG(ps) || BG_IsPlayerZeroGWalking(ps) )
    {
      if ( BG_UsingNewPlayerCollision() )
      {
        if ( v199 )
          PM_VerifyPronePosition(inOutPm, &vFallbackOrg, &vFallbackVel);
        goto LABEL_99;
      }
      _EAX = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0);
      __asm
      {
        vmovd   xmm1, ebx
        vmovd   xmm0, eax
        vpcmpeqd xmm3, xmm0, xmm1
        vmovss  xmm2, cs:__real@41900000
        vmovss  xmm1, cs:__real@41200000
        vblendvps xmm0, xmm1, xmm2, xmm3
        vmovss  dword ptr [rsp+250h+var_1F0], xmm0
      }
      if ( ps->groundEntityNum == 2047 )
      {
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) && ps->pm_time )
          Jump_ClearState(inOutPm);
        v49 = gravitya;
        if ( gravitya )
          v200 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u);
      }
      else
      {
        v49 = gravitya;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vmovss  dword ptr [rbp+150h+origin], xmm0
        vmovss  xmm1, dword ptr [rsi+4]
        vmovss  dword ptr [rbp+150h+origin+4], xmm1
        vmovss  xmm0, dword ptr [rsi+8]
        vmovss  dword ptr [rbp+150h+origin+8], xmm0
        vmovss  xmm9, dword ptr [r14]
        vmovss  xmm10, dword ptr [r14+4]
        vmovss  xmm11, dword ptr [r14+8]
      }
      v56 = BGMovingPlatforms::IsOnMovingPlatform(inOutPm->ps);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+150h+origin]
        vmovss  xmm2, dword ptr [rbp+150h+origin+4]
        vsubss  xmm1, xmm0, dword ptr [rbp+150h+vFallbackOrg]
        vmovss  dword ptr [rbp+150h+vec], xmm1
        vsubss  xmm0, xmm2, dword ptr [rbp+150h+vFallbackOrg+4]
        vmovss  xmm1, dword ptr [rbp+150h+origin+8]
        vmovss  dword ptr [rbp+150h+vec+4], xmm0
        vsubss  xmm2, xmm1, dword ptr [rbp+150h+vFallbackOrg+8]
        vmovss  dword ptr [rbp+150h+vec+8], xmm2
      }
      if ( !v56 )
      {
        __asm { vxorps  xmm1, xmm1, xmm1; height }
        WorldUpReferenceFrame::SetUpContribution(&inOutPm->refFrame, *(float *)&_XMM1, &vec);
      }
      __asm
      {
        vmovss  xmm15, dword ptr [rsp+250h+var_1F0]
        vmovss  xmm12, cs:__real@3f800000
        vmovss  xmm14, cs:__real@3a83126f
      }
      if ( v49 )
        goto LABEL_50;
      v67 = inOutPm->ground;
      if ( v67->groundPlane )
      {
        *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&inOutPm->refFrame, &v67->trace.normal);
        __asm { vcomiss xmm0, cs:__real@3f666666 }
        if ( v108 )
        {
LABEL_50:
          Sys_ProfBeginNamedEvent(0xFF008008, "PM_StepSlideMove - Step Up");
          __asm
          {
            vmovsd  xmm0, qword ptr [rbp+150h+vFallbackOrg]
            vmovsd  qword ptr [rbp+150h+inOutVector], xmm0
          }
          inOutVector.v[2] = vFallbackOrg.v[2];
          __asm
          {
            vaddss  xmm7, xmm15, xmm12
            vmovaps xmm3, xmm7; value
          }
          PM_AdjustSlideUp(inOutPm, _R15, &inOutVector, *(double *)&_XMM3);
          BgTrace::LegacyPlayerTrace(inOutPm->m_trace, inOutPm, &outResults, &vFallbackOrg, &inOutVector, inOutPm->bounds, ps->clientNum, inOutPm->tracemask, 0);
          PM_AddTraceTouchEnt(&outResults, inOutPm);
          __asm
          {
            vmulss  xmm0, xmm7, [rbp+150h+outResults.fraction]
            vsubss  xmm6, xmm0, xmm12
          }
          if ( BGMovingPlatforms::IsOnMovingPlatform(inOutPm->ps) )
          {
            __asm
            {
              vmovss  xmm0, [rbp+150h+outResults.fraction]
              vcomiss xmm0, xmm14
            }
          }
          Sys_ProfEndNamedEvent();
          __asm { vcomiss xmm6, xmm12 }
          if ( v108 )
          {
            __asm { vxorps  xmm6, xmm6, xmm6 }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+150h+vFallbackOrg]
              vmovss  dword ptr [rsi], xmm0
              vmovss  xmm1, dword ptr [rbp+150h+vFallbackOrg+4]
              vmovss  dword ptr [rsi+4], xmm1
              vmovss  xmm0, dword ptr [rbp+150h+vFallbackOrg+8]
              vmovss  dword ptr [rsi+8], xmm0
              vmovaps xmm3, xmm6; value
            }
            PM_AdjustSlideUp(inOutPm, _R15, &ps->origin, *(double *)&_XMM3);
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+150h+vFallbackVel]
              vmovss  dword ptr [r14], xmm0
              vmovss  xmm1, dword ptr [rbp+150h+vFallbackVel+4]
              vmovss  dword ptr [r14+4], xmm1
              vmovss  xmm0, dword ptr [rbp+150h+vFallbackVel+8]
              vmovss  dword ptr [r14+8], xmm0
              vmovss  xmm3, dword ptr [r15+24h]; frameTime
            }
            PM_SlideMove(inOutPm, _R15, gravity, *(float *)&_XMM3, *(const vec3_t **)groundNormal.v, v206, &ps->origin, &ps->velocity, &_R15->impactSpeed, inOutPm);
          }
        }
      }
      __asm { vmovss  xmm13, cs:__real@c1100000 }
      if ( !v199 )
      {
        __asm { vucomiss xmm6, xmm8 }
LABEL_75:
        v106 = BGMovingPlatforms::IsOnMovingPlatform(inOutPm->ps);
        __asm { vmovss  xmm0, dword ptr [rsi] }
        v108 = 0;
        if ( v106 )
        {
          __asm
          {
            vsubss  xmm4, xmm0, dword ptr [rbp+150h+vFallbackOrg]
            vmovss  dword ptr [rbp+150h+var_180], xmm4
            vmovss  xmm1, dword ptr [rsi+4]
            vsubss  xmm2, xmm1, dword ptr [rbp+150h+vFallbackOrg+4]
            vmovss  dword ptr [rbp+150h+var_180+4], xmm2
            vmovss  xmm0, dword ptr [rsi+8]
            vsubss  xmm3, xmm0, dword ptr [rbp+150h+vFallbackOrg+8]
            vmovss  dword ptr [rbp+150h+var_180+8], xmm3
            vmovss  xmm5, dword ptr [rbp+150h+vFallbackVel+4]
            vmulss  xmm1, xmm2, xmm5
            vmovss  xmm6, dword ptr [rbp+150h+vFallbackVel]
            vmulss  xmm0, xmm4, xmm6
            vaddss  xmm2, xmm1, xmm0
            vmovss  xmm4, dword ptr [rbp+150h+vFallbackVel+8]
            vmulss  xmm1, xmm3, xmm4
            vaddss  xmm7, xmm2, xmm1
            vmulss  xmm3, xmm5, dword ptr [rbp+150h+vec+4]
            vmulss  xmm1, xmm6, dword ptr [rbp+150h+vec]
            vaddss  xmm3, xmm3, xmm1
            vmulss  xmm2, xmm4, dword ptr [rbp+150h+vec+8]
            vaddss  xmm0, xmm3, xmm2
            vcomiss xmm0, xmm7
          }
        }
        else
        {
          __asm
          {
            vsubss  xmm1, xmm0, dword ptr [rbp+150h+vFallbackOrg]
            vmovss  dword ptr [rbp+150h+var_180], xmm1
            vmovss  xmm2, dword ptr [rsi+4]
            vsubss  xmm0, xmm2, dword ptr [rbp+150h+vFallbackOrg+4]
            vmovss  dword ptr [rbp+150h+var_180+4], xmm0
            vmovss  xmm1, dword ptr [rsi+8]
            vsubss  xmm2, xmm1, dword ptr [rbp+150h+vFallbackOrg+8]
            vmovss  dword ptr [rbp+150h+var_180+8], xmm2
            vxorps  xmm1, xmm1, xmm1; height
          }
          WorldUpReferenceFrame::SetUpContribution(&inOutPm->refFrame, *(float *)&_XMM1, &v212);
          __asm
          {
            vmovsd  xmm0, qword ptr [rbp+150h+vFallbackVel]
            vmovsd  [rbp+150h+groundNormal], xmm0
          }
          groundNormal.v[2] = vFallbackVel.v[2];
          __asm { vxorps  xmm1, xmm1, xmm1; height }
          WorldUpReferenceFrame::SetUpContribution(&inOutPm->refFrame, *(float *)&_XMM1, &groundNormal);
          __asm
          {
            vmovss  xmm3, dword ptr [rbp+150h+groundNormal+4]
            vmulss  xmm1, xmm3, dword ptr [rbp+150h+var_180+4]
            vmovss  xmm5, dword ptr [rbp+150h+groundNormal]
            vmulss  xmm0, xmm5, dword ptr [rbp+150h+var_180]
            vaddss  xmm2, xmm1, xmm0
            vmovss  xmm4, [rbp+150h+var_158]
            vmulss  xmm1, xmm4, dword ptr [rbp+150h+var_180+8]
            vaddss  xmm6, xmm2, xmm1
            vmulss  xmm3, xmm3, dword ptr [rbp+150h+vec+4]
            vmulss  xmm1, xmm5, dword ptr [rbp+150h+vec]
            vaddss  xmm3, xmm3, xmm1
            vmulss  xmm2, xmm4, dword ptr [rbp+150h+vec+8]
            vaddss  xmm0, xmm3, xmm2
            vaddss  xmm1, xmm0, xmm14
            vcomiss xmm1, xmm6
          }
        }
        if ( !v108 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+150h+origin]
            vmovss  dword ptr [rsi], xmm0
            vmovss  xmm1, dword ptr [rbp+150h+origin+4]
            vmovss  dword ptr [rsi+4], xmm1
            vmovss  xmm0, dword ptr [rbp+150h+origin+8]
            vmovss  dword ptr [rsi+8], xmm0
            vmovss  dword ptr [r14], xmm9
            vmovss  dword ptr [r14+4], xmm10
            vmovss  dword ptr [r14+8], xmm11
          }
          if ( v199 )
          {
            Sys_ProfBeginNamedEvent(0xFF808080, "PM_StepSlideMove - Step Down Moved Less");
            __asm
            {
              vmovss  xmm0, dword ptr [rsi]
              vmovss  dword ptr [rbp+150h+end], xmm0
              vmovss  xmm1, dword ptr [rsi+4]
              vmovss  dword ptr [rbp+150h+end+4], xmm1
              vmovss  xmm0, dword ptr [rsi+8]
              vmovss  dword ptr [rbp+150h+end+8], xmm0
              vmovaps xmm3, xmm13; value
            }
            PM_AdjustSlideUp(inOutPm, _R15, &end, *(double *)&_XMM3);
            BgTrace::LegacyPlayerTrace(inOutPm->m_trace, inOutPm, &outResults, &ps->origin, &end, inOutPm->bounds, ps->clientNum, inOutPm->tracemask, 0);
            PM_AddTraceTouchEnt(&outResults, inOutPm);
            __asm
            {
              vmovss  xmm0, [rbp+150h+outResults.fraction]
              vcomiss xmm0, xmm12
            }
            if ( v108 )
            {
              PM_CalcEndPosStoreContact(&outResults, inOutPm, _R15, &ps->origin, &end, &result);
              WorldUpReferenceFrame::GetUpContribution(&inOutPm->refFrame, &result);
              WorldUpReferenceFrame::GetUpContribution(&inOutPm->refFrame, &ps->origin);
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+150h+result]
                vmovss  dword ptr [rsi], xmm0
                vmovss  xmm1, dword ptr [rbp+150h+result+4]
                vmovss  dword ptr [rsi+4], xmm1
                vmovss  xmm0, dword ptr [rbp+150h+result+8]
                vmovss  dword ptr [rsi+8], xmm0
              }
              IsPlayerZeroG = BG_IsPlayerZeroG(ps);
              walkableRefUpa = &ps->velocity;
              p_velocity = &ps->velocity;
              if ( IsPlayerZeroG )
              {
                __asm { vmovss  dword ptr [rsp+250h+fmt], xmm8 }
                PM_ClipVelocityOverClip(inOutPm, p_velocity, &outResults.normal, NULL, fmta, walkableRefUpa);
              }
              else
              {
                __asm { vmovss  dword ptr [rsp+250h+fmt], xmm14 }
                PM_ClipVelocity_Internal(inOutPm, p_velocity, &outResults.normal, v206, fmtb, walkableRefUpa);
              }
            }
            Sys_ProfEndNamedEvent();
          }
        }
        if ( v200 )
          Jump_ClampVelocity(inOutPm, ps, &origin);
        if ( PM_VerifyPronePosition(inOutPm, &vFallbackOrg, &vFallbackVel) )
        {
          *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&inOutPm->refFrame, &ps->origin);
          __asm { vmovaps xmm6, xmm0 }
          WorldUpReferenceFrame::GetUpContribution(&inOutPm->refFrame, &origin);
          __asm
          {
            vsubss  xmm1, xmm6, xmm0
            vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
            vandps  xmm1, xmm1, xmm7
            vcomiss xmm1, cs:__real@3f000000
          }
          if ( !(v108 | v91) )
          {
            inOutPm->m_flags |= 0x100u;
            if ( bCheckFootsteps )
            {
              if ( (v199 || v200) && ps->pm_type < 7 )
              {
                *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&inOutPm->refFrame, &ps->origin);
                __asm { vmovaps xmm6, xmm0 }
                WorldUpReferenceFrame::GetUpContribution(&inOutPm->refFrame, &vFallbackOrg);
                __asm
                {
                  vsubss  xmm1, xmm6, xmm0
                  vandps  xmm1, xmm1, xmm7
                  vdivss  xmm0, xmm1, xmm15
                  vsubss  xmm0, xmm12, xmm0
                  vmulss  xmm1, xmm0, cs:__real@3f4ccccd
                  vaddss  xmm3, xmm1, cs:__real@3e4ccccc
                  vmulss  xmm2, xmm3, dword ptr [r14]
                  vmovss  dword ptr [r14], xmm2
                  vmulss  xmm0, xmm3, dword ptr [r14+4]
                  vmovss  dword ptr [r14+4], xmm0
                  vmulss  xmm3, xmm3, dword ptr [r14+8]
                  vmovss  dword ptr [r14+8], xmm3
                  vmulss  xmm1, xmm0, xmm0
                  vmulss  xmm0, xmm2, xmm2
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm2, xmm2, xmm1
                  vsqrtss xmm0, xmm2, xmm2
                  vmovss  dword ptr [rdi+330h], xmm0
                }
              }
            }
          }
        }
        m_bgHandler = inOutPm->m_bgHandler;
        BotStuckCheck = m_bgHandler->BotStuckCheck;
        v180 = inOutPm->numtouch && inOutPm->touchents[0] < ComCharacterLimits::GetCharacterMaxCount();
        LOBYTE(walkableRefUp) = v180;
        __asm
        {
          vmovss  xmm0, dword ptr [r15+24h]
          vmovss  dword ptr [rsp+250h+fmt], xmm0
        }
        ((void (__fastcall *)(const BgHandler *, vec3_t *, vec3_t *, playerState_s *, int, int))BotStuckCheck)(m_bgHandler, &vFallbackVel, &vFallbackOrg, ps, fmtc, walkableRefUp);
        PM_StepSlideMoveNullifyImpulseFieldAffectsForNextFrame(inOutPm, _R15);
        goto LABEL_99;
      }
      Sys_ProfBeginNamedEvent(0xFF808080, "PM_StepSlideMove - Step Down");
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vmovss  dword ptr [rbp+150h+end], xmm0
        vmovss  xmm1, dword ptr [rsi+4]
        vmovss  dword ptr [rbp+150h+end+4], xmm1
        vmovss  xmm0, dword ptr [rsi+8]
        vmovss  dword ptr [rbp+150h+end+8], xmm0
        vxorps  xmm7, xmm6, cs:__xmm@80000000800000008000000080000000
        vmovaps xmm3, xmm7; value
      }
      PM_AdjustSlideUp(inOutPm, _R15, &end, *(double *)&_XMM3);
      __asm { vmovaps xmm3, xmm13; value }
      PM_AdjustSlideUp(inOutPm, _R15, &end, *(double *)&_XMM3);
      BgTrace::LegacyPlayerTrace(inOutPm->m_trace, inOutPm, &outResults, &ps->origin, &end, inOutPm->bounds, ps->clientNum, inOutPm->tracemask, 0);
      PM_AddTraceTouchEnt(&outResults, inOutPm);
      EntityHitId = Trace_GetEntityHitId(&outResults);
      CharacterMaxCount = ComCharacterLimits::GetCharacterMaxCount();
      if ( EntityHitId >= CharacterMaxCount )
      {
        __asm
        {
          vmovss  xmm0, [rbp+150h+outResults.fraction]
          vcomiss xmm0, xmm12
        }
        if ( EntityHitId >= (unsigned int)CharacterMaxCount )
        {
          __asm { vucomiss xmm6, xmm8 }
          if ( EntityHitId != CharacterMaxCount )
          {
            __asm { vmovaps xmm3, xmm7; value }
            PM_AdjustSlideUp(inOutPm, _R15, &ps->origin, *(double *)&_XMM3);
          }
        }
        else
        {
          if ( !outResults.walkable )
          {
            if ( v200 )
              goto LABEL_66;
            *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&inOutPm->refFrame, &outResults.normal);
            __asm { vcomiss xmm0, cs:__real@3e99999a }
            if ( v108 )
              goto LABEL_66;
          }
          PM_CalcEndPosStoreContact(&outResults, inOutPm, _R15, &ps->origin, &end, &ps->origin);
          __asm { vucomiss xmm6, xmm8 }
          if ( !v91 )
          {
            *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&inOutPm->refFrame, &vFallbackOrg);
            __asm { vmovaps xmm7, xmm0 }
            *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&inOutPm->refFrame, &origin);
            __asm { vmovaps xmm6, xmm0 }
            *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&inOutPm->refFrame, &ps->origin);
            __asm
            {
              vmaxss  xmm1, xmm7, xmm6
              vsubss  xmm6, xmm0, xmm1
            }
            *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&inOutPm->refFrame, &outResults.normal);
            __asm
            {
              vmulss  xmm1, xmm15, cs:__real@40000000
              vmulss  xmm0, xmm0, xmm1
              vcomiss xmm6, xmm0
            }
            if ( !(v108 | v91) )
              goto LABEL_66;
          }
          PM_ProjectVelocity(inOutPm, &ps->velocity, &outResults.normal, &ps->velocity);
        }
        Sys_ProfEndNamedEvent();
        goto LABEL_75;
      }
LABEL_66:
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+150h+origin]
        vmovss  dword ptr [rsi], xmm0
        vmovss  xmm1, dword ptr [rbp+150h+origin+4]
        vmovss  dword ptr [rsi+4], xmm1
        vmovss  xmm0, dword ptr [rbp+150h+origin+8]
        vmovss  dword ptr [rsi+8], xmm0
        vmovss  dword ptr [r14], xmm9
        vmovss  dword ptr [r14+4], xmm10
        vmovss  dword ptr [r14+8], xmm11
      }
      v101 = inOutPm->m_bgHandler;
      v102 = v101->BotStuckCheck;
      v103 = inOutPm->numtouch && inOutPm->touchents[0] < ComCharacterLimits::GetCharacterMaxCount();
      LOBYTE(walkableRefUp) = v103;
      __asm
      {
        vmovss  xmm0, dword ptr [r15+24h]
        vmovss  dword ptr [rsp+250h+fmt], xmm0
      }
      ((void (__fastcall *)(const BgHandler *, vec3_t *, vec3_t *, playerState_s *, int, int))v102)(v101, &vFallbackVel, &vFallbackOrg, ps, fmt, walkableRefUp);
      PM_StepSlideMoveNullifyImpulseFieldAffectsForNextFrame(inOutPm, _R15);
      Sys_ProfEndNamedEvent();
    }
  }
LABEL_99:
  Sys_ProfEndNamedEvent();
  _R11 = &v217;
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
}

/*
==============
PM_StepSlideMoveNullifyImpulseFieldAffectsForNextFrame
==============
*/
void PM_StepSlideMoveNullifyImpulseFieldAffectsForNextFrame(pmove_t *pm, pml_t *pml)
{
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 811, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 812, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 814, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 814, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+3Ch]
    vsubss  xmm1, xmm0, dword ptr [rdi+200h]
    vmovss  dword ptr [rbx+3Ch], xmm1
    vmovss  xmm2, dword ptr [rbx+40h]
    vsubss  xmm0, xmm2, dword ptr [rdi+204h]
    vmovss  dword ptr [rbx+40h], xmm0
    vmovss  xmm1, dword ptr [rbx+44h]
    vsubss  xmm2, xmm1, dword ptr [rdi+208h]
    vmovss  dword ptr [rbx+44h], xmm2
  }
}

/*
==============
PM_UpdateImpulseFields
==============
*/
void PM_UpdateImpulseFields(pmove_t *pm, pml_t *pml)
{
  int v17; 
  int clientNum; 
  CgHandler *m_bgHandler; 
  char v20; 
  CgHandler_vtbl *v23; 
  const BgHandler *v27; 
  BgWeaponMap *weaponMap; 
  int v29; 
  int v33; 
  BgHandler *v34; 
  unsigned int v35; 
  centity_t *Entity; 
  const entityState_t *p_nextState; 
  BgWeaponMap *v38; 
  const Weapon *Weapon; 
  __int64 v40; 
  __int16 otherEntityNum; 
  CgHandler *v43; 
  int v44; 
  int v45; 
  int v46; 
  const entityState_t *EntityState; 
  const BgHandler *v48; 
  char v60; 
  char v61; 
  int impulseFieldAirborneStartTime; 
  Bounds *bounds; 
  __int64 passEntityNum; 
  char v132; 
  char v133; 
  int v135; 
  team_t outTeam; 
  team_t v141; 
  int v142; 
  int v143; 
  vec3_t start; 
  vec3_t outOrigin; 
  trace_t results; 

  _R13 = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 151, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 151, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v143 = pm->m_bgHandler->GetImpulseFieldCount((BgHandler *)pm->m_bgHandler, pm->localClientNum);
  v17 = v143;
  if ( v143 <= 0 )
  {
    *(_QWORD *)&_RBX->impulseFieldSpeed = 0i64;
    *(_QWORD *)_R13->impulseFieldVelocity.v = 0i64;
    _R13->impulseFieldVelocity.v[2] = 0.0;
    return;
  }
  clientNum = _RBX->clientNum;
  m_bgHandler = (CgHandler *)pm->m_bgHandler;
  __asm { vmovaps [rsp+1C8h+var_78], xmm9 }
  v20 = 0;
  __asm
  {
    vmovaps [rsp+1C8h+var_98], xmm11
    vmovaps [rsp+1C8h+var_B8], xmm13
    vmovss  xmm13, cs:__real@7f7fffff
    vxorps  xmm0, xmm0, xmm0
  }
  v133 = 0;
  v23 = m_bgHandler->__vftable;
  __asm
  {
    vmovaps [rsp+1C8h+var_C8], xmm14
    vxorps  xmm9, xmm9, xmm9
    vmovaps [rsp+1C8h+var_D8], xmm15
    vmovss  [rsp+1C8h+var_17C], xmm0
    vmovss  [rsp+1C8h+var_184], xmm0
    vmovss  [rsp+1C8h+var_180], xmm9
  }
  v132 = 0;
  __asm
  {
    vxorps  xmm15, xmm15, xmm15
    vmovaps xmm14, xmm13
  }
  if ( v23->IsClient(m_bgHandler) )
    CgHandler::GetPlayerTeam(m_bgHandler, clientNum, &outTeam);
  else
    GHandler::GetPlayerTeam((GHandler *)m_bgHandler, clientNum, &outTeam);
  v27 = pm->m_bgHandler;
  weaponMap = pm->weaponMap;
  __asm { vmovaps [rsp+1C8h+var_88], xmm10 }
  BG_GetPlayerEyePosition(weaponMap, _RBX, &outOrigin, v27);
  v29 = 0;
  v142 = 0;
  if ( v17 <= 0 )
  {
LABEL_81:
    *(_QWORD *)_R13->impulseFieldVelocity.v = 0i64;
    _R13->impulseFieldVelocity.v[2] = 0.0;
    _RBX->impulseFieldSpeed = 0.0;
    goto LABEL_80;
  }
  __asm
  {
    vmovss  xmm10, cs:__real@3f800000
    vmovss  xmm11, [rsp+1C8h+var_184]
    vmovaps [rsp+1C8h+var_A8], xmm12
    vmovss  xmm12, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovaps [rsp+1C8h+var_48], xmm6
    vmovaps [rsp+1C8h+var_58], xmm7
    vmovaps [rsp+1C8h+var_68], xmm8
  }
  do
  {
    v33 = pm->m_bgHandler->GetEntIndexByImpulseFieldIndex((BgHandler *)pm->m_bgHandler, pm->localClientNum, v29);
    v34 = (BgHandler *)pm->m_bgHandler;
    v35 = v33;
    v135 = v33;
    if ( v34->IsClient(v34) )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)LODWORD(v34[1].__vftable), v35);
      if ( Entity )
        p_nextState = &Entity->nextState;
      else
        p_nextState = NULL;
    }
    else
    {
      p_nextState = GHandler::GetEntityState((GHandler *)v34, v35);
    }
    if ( p_nextState && p_nextState->eType == ET_SCRIPTMOVER && (p_nextState->lerp.u.anonymous.data[2] & 4) != 0 )
    {
      v38 = pm->weaponMap;
      if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      Weapon = BgWeaponMap::GetWeapon(v38, p_nextState->weaponHandle);
      if ( !Weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 213, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( weapon ))", (const char *)&queryFormat, "!BG_IsNullWeapon( weapon )") )
        __debugbreak();
      LODWORD(v40) = Weapon->weaponIdx;
      if ( (unsigned int)v40 > bg_lastParsedWeaponIndex )
      {
        LODWORD(passEntityNum) = bg_lastParsedWeaponIndex;
        LODWORD(bounds) = Weapon->weaponIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", bounds, passEntityNum) )
          __debugbreak();
      }
      v40 = (unsigned __int16)v40;
      if ( !bg_weaponDefs[(unsigned __int16)v40] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
        __debugbreak();
      _RBP = bg_weaponDefs[v40];
      if ( !_RBP )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 216, ASSERT_TYPE_ASSERT, "(weaponDef)", (const char *)&queryFormat, "weaponDef") )
          __debugbreak();
        goto LABEL_58;
      }
      otherEntityNum = p_nextState->otherEntityNum;
      if ( otherEntityNum != 2047 )
      {
        v43 = (CgHandler *)pm->m_bgHandler;
        v44 = otherEntityNum;
        if ( v43->IsClient(v43) )
          CgHandler::GetPlayerTeam(v43, v44, &v141);
        else
          GHandler::GetPlayerTeam((GHandler *)v43, v44, &v141);
        v45 = p_nextState->otherEntityNum;
        v46 = _RBX->clientNum;
        if ( v46 == v45 && !_RBP->impulseFieldAffectsSelf )
          goto LABEL_58;
        EntityState = BG_GetEntityState(pm->m_bgHandler, v45);
        if ( v46 != v45 && !_RBP->impulseFieldAffectsFriendlies && EntityState && outTeam && outTeam == v141 )
          goto LABEL_58;
        v35 = v135;
      }
      v48 = pm->m_bgHandler;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+11C8h]
        vmulss  xmm9, xmm0, xmm0
      }
      v48->IsClient((BgHandler *)v48);
      v48->GetEntityOrigin((BgHandler *)v48, v35, &start);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1C8h+start]
        vsubss  xmm6, xmm0, dword ptr [rbx+30h]
        vmovss  xmm1, dword ptr [rsp+1C8h+start+4]
        vmovss  xmm0, dword ptr [rsp+1C8h+start+8]
        vsubss  xmm7, xmm1, dword ptr [rbx+34h]
        vsubss  xmm8, xmm0, dword ptr [rbx+38h]
        vmulss  xmm1, xmm7, xmm7
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm8, xmm8
        vaddss  xmm2, xmm2, xmm1
        vcomiss xmm2, xmm9
      }
      if ( !(v60 | v61) )
        goto LABEL_57;
      BgTrace::LegacyTrace(pm->m_trace, pm, &results, &start, &outOrigin, &bounds_origin, _RBX->clientNum, pm->tracemask);
      __asm
      {
        vmovss  xmm0, [rsp+1C8h+results.fraction]
        vcomiss xmm0, xmm10
      }
      if ( v60 )
      {
LABEL_57:
        __asm { vmovss  xmm9, [rsp+1C8h+var_180] }
LABEL_58:
        v20 = v132;
        goto LABEL_59;
      }
      if ( _RBP->impulseFieldIsPush )
      {
        __asm
        {
          vxorps  xmm6, xmm6, xmm12
          vxorps  xmm7, xmm7, xmm12
          vxorps  xmm8, xmm8, xmm12
        }
      }
      __asm
      {
        vmulss  xmm1, xmm6, xmm6
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm8, xmm8
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm10, xmm0
        vdivss  xmm1, xmm10, xmm0
        vmulss  xmm6, xmm6, xmm1
        vmulss  xmm7, xmm7, xmm1
        vmulss  xmm8, xmm8, xmm1
      }
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0) || _RBP->impulseFieldAffectsProne )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+11CCh]
          vmaxss  xmm3, xmm0, dword ptr [rbx+4Ch]
          vmovss  dword ptr [rbx+4Ch], xmm3
        }
      }
      else
      {
        __asm { vmovss  xmm3, dword ptr [rbx+4Ch] }
        v133 = 1;
      }
      __asm
      {
        vmovss  xmm2, dword ptr [rbp+11D0h]
        vmovss  xmm1, dword ptr [rbp+11D8h]
        vmaxss  xmm0, xmm2, [rsp+1C8h+var_17C]
        vmovss  [rsp+1C8h+var_17C], xmm0
        vmovss  xmm0, dword ptr [rbp+11D4h]
        vmaxss  xmm15, xmm0, xmm15
        vmovss  xmm0, dword ptr [rbp+11E0h]
        vmaxss  xmm9, xmm0, [rsp+1C8h+var_180]
        vmovss  xmm0, dword ptr [rbp+11E4h]
        vminss  xmm3, xmm3, xmm2
        vmaxss  xmm11, xmm1, xmm11
        vmovss  xmm1, dword ptr [rbp+11DCh]
        vminss  xmm14, xmm0, xmm14
        vmulss  xmm0, xmm6, xmm3
        vminss  xmm13, xmm1, xmm13
        vaddss  xmm1, xmm0, dword ptr [r13+200h]
        vmovss  dword ptr [r13+200h], xmm1
        vmulss  xmm2, xmm7, xmm3
        vaddss  xmm0, xmm2, dword ptr [r13+204h]
        vmulss  xmm1, xmm8, xmm3
        vmovss  dword ptr [r13+204h], xmm0
        vaddss  xmm2, xmm1, dword ptr [r13+208h]
      }
      v20 = 1;
      __asm
      {
        vmovss  dword ptr [r13+208h], xmm2
        vmovss  [rsp+1C8h+var_180], xmm9
      }
      v132 = 1;
    }
LABEL_59:
    v29 = v142 + 1;
    v142 = v29;
  }
  while ( v29 < v143 );
  __asm
  {
    vmovaps xmm12, [rsp+1C8h+var_A8]
    vmovaps xmm8, [rsp+1C8h+var_68]
    vmovaps xmm7, [rsp+1C8h+var_58]
    vmovaps xmm6, [rsp+1C8h+var_48]
    vmovss  [rsp+1C8h+var_184], xmm11
    vxorps  xmm11, xmm11, xmm11
  }
  if ( !v20 )
    goto LABEL_81;
  if ( PM_IsInAir(pm) )
  {
    if ( !_RBX->impulseFieldAirborneStartTime )
      _RBX->impulseFieldAirborneStartTime = pm->cmd.serverTime;
  }
  else
  {
    _RBX->impulseFieldAirborneStartTime = 0;
  }
  if ( v133 )
  {
    __asm
    {
      vmulss  xmm1, xmm15, dword ptr [r13+24h]
      vmovss  xmm0, dword ptr [rbx+4Ch]
      vsubss  xmm2, xmm0, xmm1
      vmaxss  xmm3, xmm2, xmm11
    }
    goto LABEL_79;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x1Du) )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3a83126f
      vcomiss xmm14, xmm2
    }
    if ( pm->cmd.serverTime <= (unsigned int)_RBX->slideState.slideStartTime )
    {
      __asm
      {
        vmovaps xmm1, xmm10
        vsubss  xmm0, xmm9, xmm10
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vxorps  xmm1, xmm1, xmm1; min
        vcvtsi2ss xmm0, xmm0, r12d
        vmulss  xmm2, xmm0, xmm2
        vdivss  xmm0, xmm2, xmm14; val
        vmovaps xmm2, xmm10; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm1, xmm0
        vsubss  xmm0, xmm9, xmm10
      }
    }
    goto LABEL_77;
  }
  impulseFieldAirborneStartTime = _RBX->impulseFieldAirborneStartTime;
  if ( impulseFieldAirborneStartTime && pm->cmd.serverTime - impulseFieldAirborneStartTime > 0 )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3a83126f
      vcomiss xmm13, xmm1
    }
    if ( pm->cmd.serverTime == impulseFieldAirborneStartTime )
    {
      __asm { vmovaps xmm1, xmm10 }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm1
        vdivss  xmm0, xmm1, xmm13; val
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm2, xmm10; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm1, xmm0 }
    }
    __asm
    {
      vmovss  xmm0, [rsp+1C8h+var_184]
      vsubss  xmm0, xmm0, xmm10
    }
LABEL_77:
    __asm
    {
      vmulss  xmm1, xmm0, xmm1
      vaddss  xmm10, xmm1, xmm10
    }
  }
  __asm
  {
    vmulss  xmm0, xmm10, dword ptr [r13+200h]
    vmovss  dword ptr [r13+200h], xmm0
    vmulss  xmm1, xmm10, dword ptr [r13+204h]
    vmovss  dword ptr [r13+204h], xmm1
    vmulss  xmm0, xmm10, dword ptr [r13+208h]
    vmovss  dword ptr [r13+208h], xmm0
    vmulss  xmm0, xmm15, dword ptr [r13+24h]
    vaddss  xmm3, xmm0, dword ptr [rbx+4Ch]
  }
LABEL_79:
  __asm
  {
    vminss  xmm0, xmm3, [rsp+1C8h+var_17C]
    vmovss  dword ptr [rbx+4Ch], xmm3
    vmovss  dword ptr [rbx+4Ch], xmm0
  }
LABEL_80:
  __asm
  {
    vmovaps xmm10, [rsp+1C8h+var_88]
    vmovaps xmm13, [rsp+1C8h+var_B8]
    vmovaps xmm11, [rsp+1C8h+var_98]
    vmovaps xmm14, [rsp+1C8h+var_C8]
    vmovaps xmm9, [rsp+1C8h+var_78]
    vmovaps xmm15, [rsp+1C8h+var_D8]
  }
}

/*
==============
PM_VerifyPronePosition
==============
*/
__int64 PM_VerifyPronePosition(pmove_t *pm, const vec3_t *vFallbackOrg, const vec3_t *vFallbackVel)
{
  FeetDirection ProneFeetDirection; 
  const BgHandler *m_bgHandler; 
  Physics_WorldId v11; 
  const BgHandler *handler; 
  int isOnGround; 
  Physics_WorldId worldId; 
  __int64 result; 
  float fmt; 
  float fYaw; 
  float v42; 
  int entityNum; 
  int proneValidFlags; 
  FeetDirection feetDirection; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 41, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBP = pm->ps;
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 41, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+118h+var_38], xmm6
    vmovaps [rsp+118h+var_48], xmm7
  }
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBP->pm_flags, ACTIVE, 0) )
    goto LABEL_11;
  entityNum = 2047;
  proneValidFlags = 0;
  ProneFeetDirection = PM_GetProneFeetDirection(_RBP);
  m_bgHandler = pm->m_bgHandler;
  feetDirection = ProneFeetDirection;
  v11 = m_bgHandler->GetPhysicsWorldId((BgHandler *)m_bgHandler);
  handler = pm->m_bgHandler;
  __asm { vmovss  xmm7, dword ptr [rbp+26Ch] }
  isOnGround = _RBP->groundEntityNum != 2047;
  worldId = v11;
  *(double *)&_XMM0 = BG_Suit_GetBoundsHeight(_RBP, PM_EFF_STANCE_PRONE);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = BG_Suit_GetBoundsRadius(_RBP);
  __asm
  {
    vmovss  xmm1, cs:__real@42480000
    vmovss  [rsp+118h+var_A8], xmm1
    vmovss  [rsp+118h+fYaw], xmm7
    vmovaps xmm3, xmm0; fSize
    vmovss  dword ptr [rsp+118h+fmt], xmm6
  }
  if ( BG_CheckProne(_RBP, _RBP->clientNum, &_RBP->origin, *(const float *)&_XMM3, fmt, fYaw, &pm->fTorsoPitch, &pm->fWaistPitch, 1, isOnGround, 1, handler, worldId, PCT_CLIENT, v42, feetDirection, &entityNum, &proneValidFlags) || BGMovingPlatforms::IsMovingPlatform(entityNum) )
  {
LABEL_11:
    result = 1i64;
  }
  else
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rbp+40h]
      vmovss  xmm4, dword ptr [rbp+3Ch]
      vmovss  xmm5, dword ptr [rbp+44h]
      vmulss  xmm0, xmm6, xmm6
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
      vdivss  xmm1, xmm1, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm3, xmm0
      vmovaps [rsp+118h+var_58], xmm8
      vmulss  xmm7, xmm4, xmm1
      vmulss  xmm6, xmm6, xmm1
      vmulss  xmm8, xmm5, xmm1
      vmovaps xmm8, [rsp+118h+var_58]
    }
    result = 0i64;
  }
  __asm
  {
    vmovaps xmm7, [rsp+118h+var_48]
    vmovaps xmm6, [rsp+118h+var_38]
  }
  return result;
}

