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
void PM_AdjustSlideUp(pmove_t *pm, pml_t *pml, vec3_t *inOutVector, float value)
{
  if ( BGMovingPlatforms::IsOnMovingPlatform(pm->ps) )
  {
    inOutVector->v[0] = (float)(value * pml->platformUp.v[0]) + inOutVector->v[0];
    inOutVector->v[1] = (float)(value * pml->platformUp.v[1]) + inOutVector->v[1];
    inOutVector->v[2] = (float)(value * pml->platformUp.v[2]) + inOutVector->v[2];
  }
  else
  {
    WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, value, inOutVector);
  }
}

/*
==============
PM_CalcEndPosStoreContact
==============
*/
void PM_CalcEndPosStoreContact(const trace_t *trace, pmove_t *pm, pml_t *pml, const vec3_t *start, const vec3_t *end, vec3_t *result)
{
  float fraction; 
  int hitId; 

  fraction = trace->fraction;
  result->v[0] = (float)((float)(end->v[0] - start->v[0]) * trace->fraction) + start->v[0];
  result->v[1] = (float)((float)(end->v[1] - start->v[1]) * fraction) + start->v[1];
  result->v[2] = (float)((float)(end->v[2] - start->v[2]) * fraction) + start->v[2];
  if ( pm )
  {
    if ( trace->hitType == TRACE_HITTYPE_ENTITY )
    {
      hitId = trace->hitId;
      if ( hitId != 2046 )
        pm->movingPlatforms->m_contactEnt = hitId;
    }
  }
  if ( trace->fraction < 1.0 && !pml->hadSlideContact )
  {
    pml->hadSlideContact = 1;
    pml->slideFirstContactPos = *result;
    pml->slideFirstContactNormal = trace->normal;
  }
}

/*
==============
PM_ClipVelocity_Internal
==============
*/
void PM_ClipVelocity_Internal(const pmove_t *pm, const vec3_t *in, const vec3_t *normal, const vec3_t *walkableRefUp, const float overclip, vec3_t *out)
{
  const dvar_t *v6; 

  v6 = DCONST_DVARBOOL_playerCharacterCollisionStickyMovementFix;
  if ( !DCONST_DVARBOOL_playerCharacterCollisionStickyMovementFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionStickyMovementFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
    PM_ClipVelocityOverClip(pm, in, normal, walkableRefUp, overclip, out);
  else
    PM_ClipVelocity(in, normal, out);
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
  __int64 v9; 
  float *v10; 
  __int64 v11; 
  float v12; 
  __int64 v13; 
  float v15[8]; 

  v4 = planeCount;
  if ( (unsigned int)(planeCount - 1) > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 104, ASSERT_TYPE_ASSERT, "( ( planeCount > 0 && planeCount <= 8 ) )", "( planeCount ) = %i", planeCount) )
    __debugbreak();
  if ( !planes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 105, ASSERT_TYPE_ASSERT, "(planes)", (const char *)&queryFormat, "planes") )
    __debugbreak();
  if ( !permutation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 106, ASSERT_TYPE_ASSERT, "(permutation)", (const char *)&queryFormat, "permutation") )
    __debugbreak();
  v8 = 0;
  if ( (int)v4 > 0 )
  {
    v9 = 0i64;
    v10 = &planes->v[2];
    do
    {
      v11 = v9;
      v12 = (float)((float)(*(v10 - 2) * velocity->v[0]) + (float)(*(v10 - 1) * velocity->v[1])) + (float)(velocity->v[2] * *v10);
      for ( v15[v9] = v12; v11; permutation[v11--] = v13 )
      {
        v13 = permutation[v11 - 1];
        if ( v12 > v15[v13] )
          break;
      }
      permutation[v11] = v8;
      ++v9;
      ++v8;
      v10 += 3;
    }
    while ( v9 < v4 );
  }
  return v15[*permutation];
}

/*
==============
PM_PlayerSwimSlideMove
==============
*/
void PM_PlayerSwimSlideMove(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const char *v5; 
  int v6; 
  const char *v7; 
  const char *v8; 
  playerState_s *v9; 
  vec3_t *p_origin; 
  float frametime; 
  float *v; 
  BOOL groundPlane; 
  float v14; 
  float v15; 
  float v16; 
  int v17; 
  const dvar_t *v18; 
  int v19; 
  bool enabled; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  BOOL v27; 
  BgGroundState *ground; 
  int tracemask; 
  BgTrace *m_trace; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  signed int m_characterCount; 
  BOOL v38; 
  float v39; 
  float v40; 
  float v41; 
  vec3_t start; 
  vec3_t end; 
  vec3_t v44; 
  trace_t outResults; 

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
    v5 = "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING )";
    v6 = 2559;
    v7 = "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_SWIMMING ))";
    v8 = "c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h";
  }
  else
  {
    v5 = "BG_IsPlayerSwimming( pm->ps )";
    v6 = 1198;
    v7 = "(BG_IsPlayerSwimming( pm->ps ))";
    v8 = "c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp";
  }
  if ( CoreAssert_Handler(v8, v6, ASSERT_TYPE_ASSERT, v7, (const char *)&queryFormat, v5) )
    __debugbreak();
LABEL_19:
  v9 = pm->ps;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 1200, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  p_origin = &v9->origin;
  frametime = pml->frametime;
  v = v9->velocity.v;
  groundPlane = pm->ground->groundPlane;
  start = v9->origin;
  v14 = v9->velocity.v[0];
  v15 = v9->velocity.v[1];
  v38 = groundPlane;
  v40 = v9->velocity.v[2];
  v16 = 0.0;
  v17 = PM_SlideMove(pm, pml, 0, frametime, NULL, NULL, &v9->origin, &v9->velocity, &pml->impactSpeed, pm);
  v18 = DCONST_DVARMPBOOL_player_spaceEnabled;
  v19 = v17;
  if ( !DCONST_DVARMPBOOL_player_spaceEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_spaceEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  enabled = v18->current.enabled;
  v21 = p_origin->v[0];
  v22 = v9->origin.v[1];
  v23 = v9->origin.v[2];
  v24 = *v;
  v25 = v9->velocity.v[1];
  v26 = v9->velocity.v[2];
  v27 = 0;
  if ( !enabled )
    v27 = v38;
  if ( enabled )
    v19 = 0;
  v39 = v21 - start.v[0];
  v41 = v22 - start.v[1];
  if ( v19 || (ground = pm->ground, ground->groundPlane) && ground->trace.normal.v[2] < 0.89999998 )
  {
    if ( !enabled )
    {
      tracemask = pm->tracemask;
      m_trace = pm->m_trace;
      end.v[1] = start.v[1];
      end.v[2] = start.v[2] + 19.0;
      end.v[0] = start.v[0];
      BgTrace::LegacyPlayerTrace(m_trace, pm, &outResults, &start, &end, pm->bounds, v9->clientNum, tracemask, 0);
      PM_AddTraceTouchEnt(&outResults, pm);
      v31 = (float)(19.0 * outResults.fraction) - 1.0;
      v16 = v31;
      if ( v31 >= 1.0 )
      {
        v32 = v31 + start.v[2];
        v33 = end.v[1];
        p_origin->v[0] = end.v[0];
        v9->origin.v[1] = v33;
        v9->origin.v[2] = v32;
        v9->velocity.v[2] = v40;
        *v = v14;
        v9->velocity.v[1] = v15;
        PM_SlideMove(pm, pml, 0, pml->frametime, NULL, NULL, &v9->origin, &v9->velocity, &pml->impactSpeed, pm);
      }
      else
      {
        v16 = 0.0;
      }
    }
  }
  if ( !v27 && v16 == 0.0 )
  {
LABEL_52:
    if ( (float)((float)((float)(v9->origin.v[1] - start.v[1]) * v15) + (float)((float)(p_origin->v[0] - start.v[0]) * v14)) > (float)((float)((float)(v14 * v39) + (float)(v15 * v41)) + 0.001) )
      return;
    goto LABEL_53;
  }
  v44.v[0] = p_origin->v[0];
  v44.v[1] = v9->origin.v[1];
  v34 = v9->origin.v[2] - v16;
  v44.v[2] = v34;
  if ( v27 )
    v44.v[2] = v34 - 9.0;
  BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, p_origin, &v44, pm->bounds, v9->clientNum, pm->tracemask, 0);
  PM_AddTraceTouchEnt(&outResults, pm);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
  if ( Trace_GetEntityHitId(&outResults) < m_characterCount )
    goto LABEL_53;
  if ( outResults.fraction >= 1.0 )
  {
    if ( v16 != 0.0 )
      v9->origin.v[2] = v9->origin.v[2] - v16;
    goto LABEL_52;
  }
  if ( outResults.walkable || outResults.normal.v[2] >= 0.30000001 )
  {
    PM_CalcEndPosStoreContact(&outResults, pm, pml, p_origin, &v44, p_origin);
    if ( v16 == 0.0 )
      goto LABEL_49;
    _XMM0 = LODWORD(start.v[2]);
    __asm { vmaxss  xmm2, xmm0, xmm7 }
    if ( (float)(v9->origin.v[2] - *(float *)&_XMM2) <= (float)(outResults.normal.v[2] * 36.0) )
    {
LABEL_49:
      PM_ProjectVelocity(pm, &v9->velocity, &outResults.normal, &v9->velocity);
      goto LABEL_52;
    }
  }
LABEL_53:
  p_origin->v[0] = v21;
  v9->origin.v[1] = v22;
  v9->origin.v[2] = v23;
  v9->velocity.v[2] = v26;
  v9->velocity.v[1] = v25;
  *v = v24;
}

/*
==============
PM_SlideMove
==============
*/

_BOOL8 __fastcall PM_SlideMove(const pmove_t *pm, pml_t *pml, int gravity, double frameTime, const vec3_t *groundNormal, const vec3_t *walkableRefUp, vec3_t *inOutOrigin, vec3_t *inOutVelocity, float *inOutMaxImpactSpeed, pmove_t *inOutPm)
{
  float v10; 
  vec3_t *v12; 
  pmove_t *v13; 
  playerState_s *v14; 
  unsigned int v15; 
  bool v18; 
  double UpContribution; 
  float v20; 
  double v21; 
  double v22; 
  WorldUpReferenceFramePM *p_refFrame; 
  double v24; 
  float v25; 
  double v26; 
  vec3_t *v27; 
  __int128 v28; 
  vec3_t *v29; 
  __int128 v30; 
  float v31; 
  float v32; 
  __int128 v33; 
  __int64 v37; 
  __int64 v38; 
  int v39; 
  double v40; 
  float v41; 
  const dvar_t *v42; 
  const char *v43; 
  __int16 groundRefEnt; 
  float v45; 
  float v46; 
  __int128 v48; 
  float fraction; 
  pml_t *v51; 
  const dvar_t *v52; 
  Physics_WorldId v53; 
  float v54; 
  unsigned __int16 EntityHitId; 
  __int128 v56; 
  int v57; 
  __int64 v58; 
  float v59; 
  float v60; 
  float v61; 
  float *v62; 
  const dvar_t *v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  __int64 v68; 
  int v69; 
  int v70; 
  __int64 v71; 
  float v72; 
  float v73; 
  float v74; 
  float *v75; 
  float v76; 
  __int64 i; 
  __int64 v78; 
  float v79; 
  float v80; 
  __int64 v81; 
  vec3_t *v82; 
  vec3_t *v83; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  float v88; 
  __int128 v89; 
  float v90; 
  float v91; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  float v99; 
  BOOL v100; 
  __int64 v101; 
  signed int v102; 
  Bounds *bounds; 
  char v105; 
  int v106; 
  unsigned int inOutNumPhysicsBodies[2]; 
  playerState_s *ps; 
  int v109; 
  vec3_t *normal; 
  float v111; 
  vec3_t *v112; 
  pml_t *pmla; 
  float *v114; 
  pmove_t *v115; 
  vec3_t *v116; 
  __int64 v117; 
  vec3_t out; 
  vec3_t vec; 
  vec3_t v120; 
  vec3_t end; 
  vec3_t in; 
  vec3_t v123; 
  trace_t outResults; 
  vec3_t outCustomGravityDir; 
  char v126[16]; 
  WorldUpReferenceFrame v127; 
  trace_t results; 
  int v130[8]; 
  unsigned int inOutPhysicsBodies[8]; 
  vec3_t v132; 
  char v133; 

  v117 = -2i64;
  v10 = *(float *)&frameTime;
  v111 = *(float *)&frameTime;
  v109 = gravity;
  pmla = pml;
  normal = (vec3_t *)groundNormal;
  v112 = (vec3_t *)walkableRefUp;
  v12 = inOutOrigin;
  v116 = inOutOrigin;
  v114 = inOutMaxImpactSpeed;
  v13 = inOutPm;
  v115 = inOutPm;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_SlideMove");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 444, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( inOutPm && inOutPm != pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 445, ASSERT_TYPE_ASSERT, "((inOutPm == 0) || (inOutPm == pm))", "%s\n\tPM_SlideMove: if specified, inOutPm must reference the same object as pm.", "(inOutPm == NULL) || (inOutPm == pm)") )
    __debugbreak();
  v14 = pm->ps;
  ps = v14;
  inOutNumPhysicsBodies[0] = 0;
  PM_DebugMispredict(pm, 7, NULL);
  v15 = 1;
  if ( (pm->m_flags & 0x202) == 0 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v14->pm_flags, ACTIVE, 0x13u) )
  {
    v105 = 0;
    *(float *)&_XMM2 = inOutVelocity->v[2];
  }
  else
  {
    v105 = 1;
    _XMM0 = LODWORD(inOutVelocity->v[2]);
    __asm { vminss  xmm2, xmm0, xmm10 }
    inOutVelocity->v[2] = *(float *)&_XMM2;
  }
  *(_QWORD *)v123.v = *(_QWORD *)inOutVelocity->v;
  v123.v[2] = *(float *)&_XMM2;
  vec.v[0] = v123.v[0];
  vec.v[1] = v123.v[1];
  vec.v[2] = *(float *)&_XMM2;
  v18 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v14->pm_flags, ACTIVE, 0x10u);
  if ( v109 && !v18 )
  {
    if ( WorldUpReferenceFramePM::GetCustomSlideMoveGravityDir(&pm->refFrame, pm, &outCustomGravityDir) )
    {
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v127);
      WorldUpReferenceFrame::InitFromNormal(&v127, &outCustomGravityDir);
      WorldUpReferenceFrame::AddUpContribution(&v127, (float)-v14->gravity * *(float *)&frameTime, &vec);
      UpContribution = WorldUpReferenceFrame::GetUpContribution(&v127, inOutVelocity);
      v20 = *(float *)&UpContribution * 0.5;
      v21 = WorldUpReferenceFrame::GetUpContribution(&v127, &vec);
      WorldUpReferenceFrame::SetUpContribution(&v127, (float)(*(float *)&v21 * 0.5) + v20, inOutVelocity);
      v22 = WorldUpReferenceFrame::GetUpContribution(&v127, &vec);
      p_refFrame = (WorldUpReferenceFramePM *)&v127;
    }
    else
    {
      WorldUpReferenceFrame::AddUpContribution(&pm->refFrame, (float)-v14->gravity * *(float *)&frameTime, &vec);
      v24 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &vec);
      v25 = *(float *)&v24 * 0.5;
      v26 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, inOutVelocity);
      WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, (float)(*(float *)&v26 * 0.5) + v25, inOutVelocity);
      v22 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &vec);
      p_refFrame = &pm->refFrame;
    }
    WorldUpReferenceFrame::SetUpContribution(p_refFrame, *(float *)&v22, &v123);
    v27 = normal;
    if ( !normal )
      goto LABEL_24;
    PM_ClipVelocity(inOutVelocity, normal, inOutVelocity);
  }
  v27 = normal;
LABEL_24:
  v28 = *(_OWORD *)&frameTime;
  if ( v27 )
  {
    v132 = *v27;
    v15 = 2;
    v29 = (vec3_t *)&v133;
  }
  else
  {
    v29 = &v132;
  }
  v106 = v15;
  v30 = LODWORD(inOutVelocity->v[1]);
  v31 = inOutVelocity->v[0];
  v32 = inOutVelocity->v[2];
  v33 = v30;
  *(float *)&v33 = fsqrt((float)((float)(*(float *)&v30 * *(float *)&v30) + (float)(v31 * v31)) + (float)(v32 * v32));
  _XMM3 = v33;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm12, xmm0
  }
  inOutNumPhysicsBodies[1] = _XMM1;
  v29->v[0] = v31 * (float)(1.0 / *(float *)&_XMM1);
  v29->v[1] = *(float *)&v30 * (float)(1.0 / *(float *)&_XMM1);
  v29->v[2] = v32 * (float)(1.0 / *(float *)&_XMM1);
  if ( (pm->m_flags & 2) != 0 )
  {
    v37 = 3i64 * v15;
    *(_QWORD *)&v132.v[v37] = 0i64;
    v132.v[v37 + 2] = -1.0;
    v106 = ++v15;
  }
  PM_Door_GetIgnoreBodies(pm, pmla, inOutPhysicsBodies, inOutNumPhysicsBodies);
  inOutNumPhysicsBodies[1] = 0;
  v38 = v15;
  v39 = v130[0];
  while ( 1 )
  {
    v40 = DOUBLE_0_000001;
    end.v[0] = (float)(*(float *)&v28 * inOutVelocity->v[0]) + v12->v[0];
    end.v[1] = (float)(*(float *)&v28 * inOutVelocity->v[1]) + v12->v[1];
    end.v[2] = (float)(*(float *)&v28 * inOutVelocity->v[2]) + v12->v[2];
    BgTrace::LegacyPlayerTraceIgnoreBodies(pm->m_trace, pm, &outResults, v12, &end, pm->bounds, v14->clientNum, inOutPhysicsBodies, inOutNumPhysicsBodies[0], pm->tracemask, 0);
    PM_AddTraceTouchEnt(&outResults, v13);
    if ( v13 && v14->pm_type != 5 && BG_Glass_CanBreakGlass(&outResults) )
    {
      LODWORD(v41) = COERCE_UNSIGNED_INT((float)((float)(outResults.normal.v[1] * v14->velocity.v[1]) + (float)(outResults.normal.v[0] * v14->velocity.v[0])) + (float)(outResults.normal.v[2] * v14->velocity.v[2])) ^ _xmm;
      if ( outResults.walkable )
      {
        v42 = DCONST_DVARFLT_player_glassBreakWalkableSpeed;
        if ( !DCONST_DVARFLT_player_glassBreakWalkableSpeed )
        {
          v43 = "player_glassBreakWalkableSpeed";
          goto LABEL_38;
        }
      }
      else
      {
        v42 = DCONST_DVARFLT_player_glassBreakSpeed;
        if ( !DCONST_DVARFLT_player_glassBreakSpeed )
        {
          v43 = "player_glassBreakSpeed";
LABEL_38:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v43) )
            __debugbreak();
        }
      }
      Dvar_CheckFrontendServerThread(v42);
      if ( v41 <= v42->current.value )
      {
        v14 = ps;
      }
      else
      {
        BG_AddPredictableEventToPlayerstate(EV_BREAK_GLASS, 0, pm->cmd.serverTime, pm->weaponMap, v13->ps);
        v14 = ps;
        BgTrace::LegacyPlayerTraceIgnoreBodies(pm->m_trace, pm, &outResults, v12, &end, pm->bounds, ps->clientNum, inOutPhysicsBodies, inOutNumPhysicsBodies[0], pm->tracemask & 0xFFFFFFEF, 0);
        PM_AddTraceTouchEnt(&outResults, v13);
      }
      v40 = DOUBLE_0_000001;
    }
    if ( outResults.allsolid )
    {
      if ( v13 && BG_Glass_CanBreakGlass(&outResults) )
      {
        BG_AddPredictableEventToPlayerstate(EV_BREAK_GLASS, 0, pm->cmd.serverTime, pm->weaponMap, v13->ps);
        BgTrace::LegacyPlayerTraceIgnoreBodies(pm->m_trace, pm, &outResults, v12, &end, pm->bounds, v14->clientNum, inOutPhysicsBodies, inOutNumPhysicsBodies[0], pm->tracemask & 0xFFFFFFEF, 0);
        PM_AddTraceTouchEnt(&outResults, v13);
      }
      if ( outResults.allsolid )
      {
        if ( !BGMovingPlatformClient::CorrectPlatformPenetration(pm->movingPlatforms, pm, &outResults, v12, 0) )
        {
          WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, inOutVelocity);
          v100 = 1;
          goto LABEL_145;
        }
        if ( BGMovingPlatformPS::UseRockingMoverWallFix2() )
          end = *v12;
        PM_AddTraceTouchEnt(&outResults, v13);
      }
    }
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v14->pm_flags, ACTIVE, 0x2Au) && ((groundRefEnt = v14->groundRefEnt, groundRefEnt == 2047) || !groundRefEnt) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2575, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )") )
        __debugbreak();
    }
    else if ( outResults.fraction < v40 && !normal )
    {
      WorldUpReferenceFrame::GetUpVector(&pm->refFrame, &outCustomGravityDir);
      if ( (float)((float)((float)(outCustomGravityDir.v[0] * outResults.normal.v[0]) + (float)(outCustomGravityDir.v[1] * outResults.normal.v[1])) + (float)(outCustomGravityDir.v[2] * outResults.normal.v[2])) > 0.99900001 )
      {
        v120 = *inOutVelocity;
        WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &v120);
        v45 = v120.v[1];
        if ( (float)((float)((float)(v120.v[0] * v120.v[0]) + (float)(v45 * v45)) + (float)(v120.v[2] * v120.v[2])) > v40 )
        {
          LODWORD(v120.v[0]) ^= _xmm;
          LODWORD(v120.v[1]) ^= _xmm;
          LODWORD(v120.v[2]) ^= _xmm;
          v46 = (float)((float)(COERCE_FLOAT(LODWORD(v45) ^ _xmm) * COERCE_FLOAT(LODWORD(v45) ^ _xmm)) + (float)(v120.v[0] * v120.v[0])) + (float)(v120.v[2] * v120.v[2]);
          if ( v46 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
            __debugbreak();
          v48 = 0i64;
          *(float *)&v48 = v46;
          _XMM4 = v48;
          __asm { vrsqrtss xmm4, xmm4, xmm4 }
          outResults.normal.v[0] = *(float *)&_XMM4 * v120.v[0];
          outResults.normal.v[1] = *(float *)&_XMM4 * v120.v[1];
          outResults.normal.v[2] = *(float *)&_XMM4 * v120.v[2];
        }
      }
    }
    fraction = outResults.fraction;
    if ( outResults.fraction > 0.0 )
    {
      v12->v[0] = (float)((float)(end.v[0] - v12->v[0]) * outResults.fraction) + v12->v[0];
      v12->v[1] = (float)((float)(end.v[1] - v12->v[1]) * fraction) + v12->v[1];
      v12->v[2] = (float)((float)(end.v[2] - v12->v[2]) * fraction) + v12->v[2];
      if ( v13 && outResults.hitType == TRACE_HITTYPE_ENTITY && outResults.hitId != 2046 )
        v13->movingPlatforms->m_contactEnt = outResults.hitId;
      if ( outResults.fraction < 1.0 )
      {
        v51 = pmla;
        if ( !pmla->hadSlideContact )
        {
          pmla->hadSlideContact = 1;
          v51->slideFirstContactPos.v[0] = v12->v[0];
          v51->slideFirstContactPos.v[1] = v12->v[1];
          v51->slideFirstContactPos.v[2] = v12->v[2];
          v51->slideFirstContactNormal = outResults.normal;
        }
      }
    }
    v52 = DVARBOOL_bg_checkPlayerOutsideSolid;
    if ( !DVARBOOL_bg_checkPlayerOutsideSolid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_checkPlayerOutsideSolid") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v52);
    if ( v52->current.enabled )
    {
      v53 = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
      BgTrace::LegacyTraceHandler(pm->m_trace, v53, &results, v12, v12, pm->bounds, ps->clientNum, pm->tracemask, ps);
      if ( results.startsolid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 616, ASSERT_TYPE_ASSERT, "(!checkTrace.startsolid)", (const char *)&queryFormat, "!checkTrace.startsolid") )
        __debugbreak();
    }
    v54 = outResults.fraction;
    if ( outResults.fraction == 1.0 )
    {
      v102 = inOutNumPhysicsBodies[1];
LABEL_140:
      if ( v109 )
        *inOutVelocity = vec;
      if ( ps->pm_time )
        *inOutVelocity = v123;
      v100 = v102 != 0;
      goto LABEL_145;
    }
    if ( v13 )
    {
      EntityHitId = Trace_GetEntityHitId(&outResults);
      PM_AddTouchEnt(v13, EntityHitId, PMTF_TOUCHER_PLAYER);
      v54 = outResults.fraction;
    }
    v56 = v28;
    *(float *)&v56 = *(float *)&v28 - (float)(v54 * *(float *)&v28);
    v28 = v56;
    if ( v106 >= 8 )
    {
      *(_QWORD *)inOutVelocity->v = 0i64;
      inOutVelocity->v[2] = 0.0;
      v100 = 1;
      goto LABEL_145;
    }
    v57 = 0;
    v58 = 0i64;
    v59 = outResults.normal.v[2];
    v60 = outResults.normal.v[1];
    v61 = outResults.normal.v[0];
    if ( v38 > 0 )
    {
      v62 = &v132.v[2];
      while ( (float)((float)((float)(outResults.normal.v[0] * *(v62 - 2)) + (float)(outResults.normal.v[1] * *(v62 - 1))) + (float)(outResults.normal.v[2] * *v62)) <= 0.99900001 )
      {
        ++v57;
        ++v58;
        v62 += 3;
        if ( v58 >= v38 )
          goto LABEL_101;
      }
      v63 = DCONST_DVARBOOL_playerCharacterCollisionStickyMovementFix;
      if ( !DCONST_DVARBOOL_playerCharacterCollisionStickyMovementFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionStickyMovementFix") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v63);
      if ( v63->current.enabled )
        PM_ClipVelocityOverClip(pm, inOutVelocity, &outResults.normal, v112, 0.001, inOutVelocity);
      else
        PM_ClipVelocity(inOutVelocity, &outResults.normal, inOutVelocity);
      v61 = outResults.normal.v[0];
      v60 = outResults.normal.v[1];
      v59 = outResults.normal.v[2];
      if ( v10 <= 0.0 )
      {
        inOutVelocity->v[0] = outResults.normal.v[0] + inOutVelocity->v[0];
        v66 = v60 + inOutVelocity->v[1];
        v67 = v59 + inOutVelocity->v[2];
      }
      else
      {
        v64 = outResults.normal.v[1] * (float)(0.016666668 / v10);
        v65 = outResults.normal.v[2] * (float)(0.016666668 / v10);
        inOutVelocity->v[0] = (float)(outResults.normal.v[0] * (float)(0.016666668 / v10)) + inOutVelocity->v[0];
        v66 = v64 + inOutVelocity->v[1];
        v67 = v65 + inOutVelocity->v[2];
      }
      inOutVelocity->v[2] = v67;
      inOutVelocity->v[1] = v66;
    }
LABEL_101:
    if ( v57 >= v106 )
    {
      v68 = 3 * v38;
      v132.v[v68] = v61;
      v132.v[v68 + 1] = v60;
      v132.v[v68 + 2] = v59;
      v69 = v106 + 1;
      v106 = v69;
      ++v38;
      if ( (unsigned int)(v69 - 1) > 7 )
      {
        LODWORD(bounds) = v69;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 104, ASSERT_TYPE_ASSERT, "( ( planeCount > 0 && planeCount <= 8 ) )", "( planeCount ) = %i", bounds) )
          __debugbreak();
      }
      v70 = 0;
      v71 = 0i64;
      if ( v38 > 0 )
      {
        v72 = inOutVelocity->v[1];
        v73 = inOutVelocity->v[0];
        v74 = inOutVelocity->v[2];
        v75 = &v132.v[2];
        do
        {
          v76 = (float)((float)(v73 * *(v75 - 2)) + (float)(v72 * *(v75 - 1))) + (float)(v74 * *v75);
          *((float *)&v127.m_axisAdjusted + v71) = v76;
          for ( i = v71; i; v130[i--] = v78 )
          {
            v78 = v130[i - 1];
            if ( v76 > *((float *)&v127.m_axisAdjusted + v78) )
              break;
          }
          v130[i] = v70++;
          ++v71;
          v75 += 3;
        }
        while ( v71 < v38 );
        v39 = v130[0];
      }
      v79 = *((float *)&v127.m_axisAdjusted + v39);
      if ( v79 < 0.1 )
        break;
    }
LABEL_134:
    v102 = inOutNumPhysicsBodies[1] + 1;
    inOutNumPhysicsBodies[1] = v102;
    if ( v102 >= 4 )
      goto LABEL_140;
    v12 = v116;
    v14 = ps;
  }
  if ( v114 )
  {
    LODWORD(v80) = LODWORD(v79) ^ _xmm;
    if ( v80 > *v114 )
      *v114 = v80;
  }
  PM_ClipVelocityOverClip(pm, inOutVelocity, &v132 + v39, v112, 0.001, &out);
  PM_ClipVelocityOverClip(pm, &vec, &v132 + v39, v112, 0.001, &in);
  v81 = 1i64;
  if ( v38 <= 1 )
  {
LABEL_133:
    *inOutVelocity = out;
    vec = in;
    goto LABEL_134;
  }
  while ( 1 )
  {
    v82 = &v132 + v130[v81];
    if ( (float)((float)((float)(out.v[1] * v82->v[1]) + (float)(out.v[0] * v82->v[0])) + (float)(out.v[2] * v82->v[2])) < 0.1 )
    {
      PM_ClipVelocityOverClip(pm, &out, v82, v112, 0.001, &out);
      PM_ClipVelocityOverClip(pm, &in, v82, v112, 0.001, &in);
      v83 = &v132 + v39;
      if ( (float)((float)((float)(out.v[1] * v83->v[1]) + (float)(out.v[0] * v83->v[0])) + (float)(out.v[2] * v83->v[2])) < 0.0 )
        break;
    }
LABEL_131:
    if ( ++v81 >= v38 )
    {
      v10 = v111;
      v13 = v115;
      goto LABEL_133;
    }
  }
  if ( v83 == (vec3_t *)v126 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  if ( v82 == (vec3_t *)v126 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
    __debugbreak();
  v84 = v83->v[1];
  v85 = v82->v[2];
  v86 = v83->v[2];
  v87 = v82->v[1];
  v88 = (float)(v84 * v85) - (float)(v86 * v87);
  v89 = LODWORD(v86);
  v90 = (float)(v86 * v82->v[0]) - (float)(v85 * v83->v[0]);
  v91 = (float)(v87 * v83->v[0]) - (float)(v84 * v82->v[0]);
  *(float *)&v89 = fsqrt((float)((float)(v90 * v90) + (float)(v88 * v88)) + (float)(v91 * v91));
  _XMM3 = v89;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm12, xmm0
  }
  v95 = v88 * (float)(1.0 / *(float *)&_XMM1);
  v96 = v90 * (float)(1.0 / *(float *)&_XMM1);
  v97 = v91 * (float)(1.0 / *(float *)&_XMM1);
  if ( !v105 )
  {
    v98 = (float)((float)(v95 * inOutVelocity->v[0]) + (float)(v96 * inOutVelocity->v[1])) + (float)(v97 * inOutVelocity->v[2]);
    out.v[0] = v98 * v95;
    out.v[1] = v98 * v96;
    out.v[2] = v98 * v97;
    v99 = (float)((float)(v96 * vec.v[1]) + (float)(v95 * vec.v[0])) + (float)(v97 * vec.v[2]);
    in.v[0] = v99 * v95;
    in.v[1] = v99 * v96;
    in.v[2] = v99 * v97;
  }
  v100 = 1;
  v101 = 1i64;
  while ( v101 == v81 || (float)((float)((float)(out.v[1] * v132.v[3 * v130[v101] + 1]) + (float)(out.v[0] * v132.v[3 * v130[v101]])) + (float)(out.v[2] * v132.v[3 * v130[v101] + 2])) >= 0.1 )
  {
    if ( ++v101 >= v38 )
      goto LABEL_131;
  }
  *(_QWORD *)inOutVelocity->v = 0i64;
  inOutVelocity->v[2] = 0.0;
LABEL_145:
  Sys_ProfEndNamedEvent();
  return v100;
}

/*
==============
PM_StepSlideMove
==============
*/
void PM_StepSlideMove(pmove_t *pm, pml_t *pml, int gravity, int bCheckFootsteps, int ignoreImpulseFields)
{
  float v7; 
  playerState_s *ps; 
  float *v; 
  float *v10; 
  const dvar_t *v11; 
  BgGroundState *ground; 
  const vec3_t *p_normal; 
  vec3_t *p_platformUp; 
  int v15; 
  int v20; 
  float v21; 
  float v22; 
  float v23; 
  int v24; 
  float v25; 
  BgGroundState *v26; 
  double UpContribution; 
  float v28; 
  int EntityHitId; 
  __int128 fraction_low; 
  double v31; 
  double v33; 
  float v35; 
  double v36; 
  const BgHandler *m_bgHandler; 
  void (__fastcall *BotStuckCheck)(BgHandler *, const vec3_t *, const vec3_t *, const playerState_s *, float, bool); 
  bool v39; 
  int v40; 
  float v41; 
  bool v42; 
  bool IsPlayerZeroG; 
  const vec3_t *p_velocity; 
  double v45; 
  float v46; 
  double v47; 
  double v48; 
  float v49; 
  double v50; 
  float v51; 
  float v52; 
  float v53; 
  const BgHandler *v54; 
  void (__fastcall *v55)(BgHandler *, const vec3_t *, const vec3_t *, const playerState_s *, float, bool); 
  bool v56; 
  int walkableRefUp; 
  vec3_t *walkableRefUpa; 
  int v59; 
  BOOL v60; 
  int gravitya; 
  const dvar_t *v63; 
  float v64; 
  vec3_t *v66; 
  vec3_t vFallbackOrg; 
  vec3_t origin; 
  vec3_t vFallbackVel; 
  vec3_t vec; 
  vec3_t end; 
  vec3_t v72; 
  vec3_t inOutVector; 
  vec3_t groundNormal; 
  vec3_t result; 
  trace_t outResults; 

  v7 = 0.0;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_StepSlideMove");
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 845, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 845, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v60 = 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 6u) )
  {
    v59 = 0;
LABEL_13:
    Jump_ClearState(pm);
    goto LABEL_14;
  }
  if ( pm->ground->groundPlane )
  {
    v59 = 1;
    goto LABEL_14;
  }
  v59 = 0;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) && ps->pm_time )
    goto LABEL_13;
LABEL_14:
  PM_ApplyCollisionAvoid(pm, pml);
  if ( ignoreImpulseFields )
  {
    *(_QWORD *)pml->impulseFieldVelocity.v = 0i64;
    pml->impulseFieldVelocity.v[2] = 0.0;
  }
  v = ps->velocity.v;
  ps->velocity.v[0] = pml->impulseFieldVelocity.v[0] + ps->velocity.v[0];
  ps->velocity.v[1] = ps->velocity.v[1] + pml->impulseFieldVelocity.v[1];
  ps->velocity.v[2] = ps->velocity.v[2] + pml->impulseFieldVelocity.v[2];
  v10 = ps->origin.v;
  vFallbackOrg = ps->origin;
  vFallbackVel = ps->velocity;
  v11 = DCONST_DVARMPBOOL_pmove_moveWalkableOnly;
  v63 = DCONST_DVARMPBOOL_pmove_moveWalkableOnly;
  if ( !DCONST_DVARMPBOOL_pmove_moveWalkableOnly )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pmove_moveWalkableOnly") )
      __debugbreak();
    v11 = v63;
  }
  Dvar_CheckFrontendServerThread(v11);
  ground = pm->ground;
  p_normal = &ground->trace.normal;
  if ( !ground->groundPlane )
    p_normal = NULL;
  *(_QWORD *)groundNormal.v = p_normal;
  p_platformUp = &pml->platformUp;
  if ( !v63->current.enabled )
    p_platformUp = NULL;
  v66 = p_platformUp;
  v15 = PM_SlideMove(pm, pml, gravity, pml->frametime, p_normal, p_platformUp, &ps->origin, &ps->velocity, &pml->impactSpeed, pm);
  gravitya = v15;
  if ( !pml->initialSlideMoveBumped )
    pml->initialSlideMoveBumped = v15;
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
        if ( v59 )
          PM_VerifyPronePosition(pm, &vFallbackOrg, &vFallbackVel);
        goto LABEL_100;
      }
      _XMM0 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0);
      __asm { vpcmpeqd xmm3, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_10_0);
      __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
      v64 = *(float *)&_XMM0;
      if ( ps->groundEntityNum == 2047 )
      {
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u) && ps->pm_time )
          Jump_ClearState(pm);
        v20 = gravitya;
        if ( gravitya )
          v60 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x13u);
      }
      else
      {
        v20 = gravitya;
      }
      origin.v[0] = *v10;
      *(_QWORD *)&origin.y = *(_QWORD *)&ps->origin.y;
      v21 = *v;
      v22 = ps->velocity.v[1];
      v23 = ps->velocity.v[2];
      v24 = BGMovingPlatforms::IsOnMovingPlatform(pm->ps);
      vec.v[0] = origin.v[0] - vFallbackOrg.v[0];
      vec.v[1] = origin.v[1] - vFallbackOrg.v[1];
      vec.v[2] = origin.v[2] - vFallbackOrg.v[2];
      if ( !v24 )
        WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &vec);
      v25 = *(float *)&_XMM0;
      if ( v20 || (v26 = pm->ground, v26->groundPlane) && (UpContribution = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &v26->trace.normal), *(float *)&UpContribution < 0.89999998) )
      {
        Sys_ProfBeginNamedEvent(0xFF008008, "PM_StepSlideMove - Step Up");
        inOutVector = vFallbackOrg;
        v28 = v64 + 1.0;
        PM_AdjustSlideUp(pm, pml, &inOutVector, v64 + 1.0);
        BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &vFallbackOrg, &inOutVector, pm->bounds, ps->clientNum, pm->tracemask, 0);
        PM_AddTraceTouchEnt(&outResults, pm);
        v7 = (float)((float)(v64 + 1.0) * outResults.fraction) - 1.0;
        if ( BGMovingPlatforms::IsOnMovingPlatform(pm->ps) && outResults.fraction < 0.001 )
        {
          inOutVector.v[0] = (float)(0.1 * outResults.normal.v[0]) + vFallbackOrg.v[0];
          inOutVector.v[1] = (float)(0.1 * outResults.normal.v[1]) + vFallbackOrg.v[1];
          inOutVector.v[2] = (float)(0.1 * outResults.normal.v[2]) + vFallbackOrg.v[2];
          PM_AdjustSlideUp(pm, pml, &inOutVector, v28);
          BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &vFallbackOrg, &inOutVector, pm->bounds, ps->clientNum, pm->tracemask, 0);
          PM_AddTraceTouchEnt(&outResults, pm);
          v7 = (float)(v28 * outResults.fraction) - 1.0;
        }
        Sys_ProfEndNamedEvent();
        if ( v7 >= 1.0 )
        {
          *v10 = vFallbackOrg.v[0];
          ps->origin.v[1] = vFallbackOrg.v[1];
          ps->origin.v[2] = vFallbackOrg.v[2];
          PM_AdjustSlideUp(pm, pml, &ps->origin, v7);
          *v = vFallbackVel.v[0];
          ps->velocity.v[1] = vFallbackVel.v[1];
          ps->velocity.v[2] = vFallbackVel.v[2];
          PM_SlideMove(pm, pml, gravity, pml->frametime, *(const vec3_t **)groundNormal.v, v66, &ps->origin, &ps->velocity, &pml->impactSpeed, pm);
        }
        else
        {
          v7 = 0.0;
        }
      }
      if ( v59 || v7 != 0.0 )
      {
        Sys_ProfBeginNamedEvent(0xFF808080, "PM_StepSlideMove - Step Down");
        end.v[0] = *v10;
        *(_QWORD *)&end.y = *(_QWORD *)&ps->origin.y;
        PM_AdjustSlideUp(pm, pml, &end, COERCE_FLOAT(LODWORD(v7) ^ _xmm));
        if ( v59 )
          PM_AdjustSlideUp(pm, pml, &end, -9.0);
        BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &ps->origin, &end, pm->bounds, ps->clientNum, pm->tracemask, 0);
        PM_AddTraceTouchEnt(&outResults, pm);
        EntityHitId = Trace_GetEntityHitId(&outResults);
        if ( EntityHitId < ComCharacterLimits::GetCharacterMaxCount() )
          goto LABEL_67;
        fraction_low = LODWORD(outResults.fraction);
        if ( outResults.fraction >= 1.0 )
        {
          if ( v7 != 0.0 )
            PM_AdjustSlideUp(pm, pml, &ps->origin, COERCE_FLOAT(LODWORD(v7) ^ _xmm));
        }
        else
        {
          if ( !outResults.walkable )
          {
            if ( v60 )
              goto LABEL_67;
            v31 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &outResults.normal);
            if ( *(float *)&v31 < 0.30000001 )
              goto LABEL_67;
          }
          PM_CalcEndPosStoreContact(&outResults, pm, pml, &ps->origin, &end, &ps->origin);
          if ( v7 != 0.0 )
          {
            *(double *)&fraction_low = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &vFallbackOrg);
            _XMM7 = fraction_low;
            WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &origin);
            v33 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &ps->origin);
            __asm { vmaxss  xmm1, xmm7, xmm6 }
            v35 = *(float *)&v33 - *(float *)&_XMM1;
            v36 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &outResults.normal);
            if ( v35 > (float)(*(float *)&v36 * (float)(v25 * 2.0)) )
            {
LABEL_67:
              *v10 = origin.v[0];
              ps->origin.v[1] = origin.v[1];
              ps->origin.v[2] = origin.v[2];
              *v = v21;
              ps->velocity.v[1] = v22;
              ps->velocity.v[2] = v23;
              m_bgHandler = pm->m_bgHandler;
              BotStuckCheck = m_bgHandler->BotStuckCheck;
              v39 = pm->numtouch && pm->touchents[0] < ComCharacterLimits::GetCharacterMaxCount();
              LOBYTE(walkableRefUp) = v39;
              ((void (__fastcall *)(const BgHandler *, vec3_t *, vec3_t *, playerState_s *, _DWORD, int))BotStuckCheck)(m_bgHandler, &vFallbackVel, &vFallbackOrg, ps, LODWORD(pml->frametime), walkableRefUp);
              PM_StepSlideMoveNullifyImpulseFieldAffectsForNextFrame(pm, pml);
              Sys_ProfEndNamedEvent();
              goto LABEL_100;
            }
          }
          PM_ProjectVelocity(pm, &ps->velocity, &outResults.normal, &ps->velocity);
        }
        Sys_ProfEndNamedEvent();
      }
      v40 = BGMovingPlatforms::IsOnMovingPlatform(pm->ps);
      v41 = *v10;
      v72.v[0] = *v10 - vFallbackOrg.v[0];
      v72.v[1] = ps->origin.v[1] - vFallbackOrg.v[1];
      v72.v[2] = ps->origin.v[2] - vFallbackOrg.v[2];
      if ( v40 )
      {
        v42 = (float)((float)((float)(vFallbackVel.v[1] * vec.v[1]) + (float)(vFallbackVel.v[0] * vec.v[0])) + (float)(vFallbackVel.v[2] * vec.v[2])) < (float)((float)((float)(v72.v[1] * vFallbackVel.v[1]) + (float)((float)(v41 - vFallbackOrg.v[0]) * vFallbackVel.v[0])) + (float)(v72.v[2] * vFallbackVel.v[2]));
      }
      else
      {
        WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &v72);
        groundNormal = vFallbackVel;
        WorldUpReferenceFrame::SetUpContribution(&pm->refFrame, 0.0, &groundNormal);
        v42 = (float)((float)((float)((float)(groundNormal.v[1] * vec.v[1]) + (float)(groundNormal.v[0] * vec.v[0])) + (float)(groundNormal.v[2] * vec.v[2])) + 0.001) < (float)((float)((float)(groundNormal.v[1] * v72.v[1]) + (float)(groundNormal.v[0] * v72.v[0])) + (float)(groundNormal.v[2] * v72.v[2]));
      }
      if ( !v42 )
      {
        *v10 = origin.v[0];
        ps->origin.v[1] = origin.v[1];
        ps->origin.v[2] = origin.v[2];
        *v = v21;
        ps->velocity.v[1] = v22;
        ps->velocity.v[2] = v23;
        if ( v59 )
        {
          Sys_ProfBeginNamedEvent(0xFF808080, "PM_StepSlideMove - Step Down Moved Less");
          end.v[0] = *v10;
          *(_QWORD *)&end.y = *(_QWORD *)&ps->origin.y;
          PM_AdjustSlideUp(pm, pml, &end, -9.0);
          BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &ps->origin, &end, pm->bounds, ps->clientNum, pm->tracemask, 0);
          PM_AddTraceTouchEnt(&outResults, pm);
          if ( outResults.fraction < 1.0 )
          {
            PM_CalcEndPosStoreContact(&outResults, pm, pml, &ps->origin, &end, &result);
            WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &result);
            WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &ps->origin);
            *v10 = result.v[0];
            ps->origin.v[1] = result.v[1];
            ps->origin.v[2] = result.v[2];
            IsPlayerZeroG = BG_IsPlayerZeroG(ps);
            walkableRefUpa = &ps->velocity;
            p_velocity = &ps->velocity;
            if ( IsPlayerZeroG )
              PM_ClipVelocityOverClip(pm, p_velocity, &outResults.normal, NULL, 0.0, walkableRefUpa);
            else
              PM_ClipVelocity_Internal(pm, p_velocity, &outResults.normal, v66, 0.001, walkableRefUpa);
          }
          Sys_ProfEndNamedEvent();
        }
      }
      if ( v60 )
        Jump_ClampVelocity(pm, ps, &origin);
      if ( PM_VerifyPronePosition(pm, &vFallbackOrg, &vFallbackVel) )
      {
        v45 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &ps->origin);
        v46 = *(float *)&v45;
        v47 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &origin);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v46 - *(float *)&v47) & _xmm) > 0.5 )
        {
          pm->m_flags |= 0x100u;
          if ( bCheckFootsteps )
          {
            if ( (v59 || v60) && ps->pm_type < 7 )
            {
              v48 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &ps->origin);
              v49 = *(float *)&v48;
              v50 = WorldUpReferenceFrame::GetUpContribution(&pm->refFrame, &vFallbackOrg);
              v51 = (float)((float)(1.0 - (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v49 - *(float *)&v50) & _xmm) / v25)) * 0.80000001) + 0.19999999;
              v52 = v51 * *v;
              *v = v52;
              *(float *)&v50 = v51 * ps->velocity.v[1];
              ps->velocity.v[1] = *(float *)&v50;
              v53 = v51 * ps->velocity.v[2];
              ps->velocity.v[2] = v53;
              pm->speed = fsqrt((float)((float)(*(float *)&v50 * *(float *)&v50) + (float)(v52 * v52)) + (float)(v53 * v53));
            }
          }
        }
      }
      v54 = pm->m_bgHandler;
      v55 = v54->BotStuckCheck;
      v56 = pm->numtouch && pm->touchents[0] < ComCharacterLimits::GetCharacterMaxCount();
      LOBYTE(walkableRefUp) = v56;
      ((void (__fastcall *)(const BgHandler *, vec3_t *, vec3_t *, playerState_s *, _DWORD, int))v55)(v54, &vFallbackVel, &vFallbackOrg, ps, LODWORD(pml->frametime), walkableRefUp);
      PM_StepSlideMoveNullifyImpulseFieldAffectsForNextFrame(pm, pml);
    }
  }
LABEL_100:
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_StepSlideMoveNullifyImpulseFieldAffectsForNextFrame
==============
*/
void PM_StepSlideMoveNullifyImpulseFieldAffectsForNextFrame(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 811, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 812, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 814, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 814, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ps->velocity.v[0] = ps->velocity.v[0] - pml->impulseFieldVelocity.v[0];
  ps->velocity.v[1] = ps->velocity.v[1] - pml->impulseFieldVelocity.v[1];
  ps->velocity.v[2] = ps->velocity.v[2] - pml->impulseFieldVelocity.v[2];
}

/*
==============
PM_UpdateImpulseFields
==============
*/
void PM_UpdateImpulseFields(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  int v5; 
  int clientNum; 
  CgHandler *m_bgHandler; 
  char v8; 
  int v13; 
  int v14; 
  float v15; 
  int v17; 
  BgHandler *v18; 
  unsigned int v19; 
  centity_t *Entity; 
  const entityState_t *p_nextState; 
  BgWeaponMap *weaponMap; 
  const Weapon *Weapon; 
  __int64 v24; 
  WeaponDef *v25; 
  __int16 otherEntityNum; 
  CgHandler *v27; 
  int v28; 
  int v29; 
  int v30; 
  const entityState_t *EntityState; 
  const BgHandler *v32; 
  float v33; 
  __int128 v34; 
  __int128 v35; 
  float v36; 
  float v37; 
  float v38; 
  __int128 v39; 
  float v43; 
  float v44; 
  float v45; 
  __int128 impulseFieldSpeed_low; 
  double v59; 
  float v60; 
  float v61; 
  int impulseFieldAirborneStartTime; 
  double v63; 
  __int128 v64; 
  Bounds *bounds; 
  __int64 passEntityNum; 
  char v68; 
  char v69; 
  int v70; 
  float v71; 
  team_t outTeam; 
  team_t v73; 
  int v74; 
  int v75; 
  vec3_t start; 
  vec3_t outOrigin; 
  trace_t results; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 151, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 151, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v75 = pm->m_bgHandler->GetImpulseFieldCount((BgHandler *)pm->m_bgHandler, pm->localClientNum);
  v5 = v75;
  if ( v75 <= 0 )
  {
    *(_QWORD *)&ps->impulseFieldSpeed = 0i64;
    *(_QWORD *)pml->impulseFieldVelocity.v = 0i64;
    pml->impulseFieldVelocity.v[2] = 0.0;
    return;
  }
  clientNum = ps->clientNum;
  m_bgHandler = (CgHandler *)pm->m_bgHandler;
  v8 = 0;
  *(float *)&_XMM13 = FLOAT_3_4028235e38;
  v69 = 0;
  LODWORD(_XMM9) = 0;
  v71 = 0.0;
  v68 = 0;
  _XMM15 = 0i64;
  *(float *)&_XMM14 = FLOAT_3_4028235e38;
  if ( m_bgHandler->IsClient(m_bgHandler) )
    CgHandler::GetPlayerTeam(m_bgHandler, clientNum, &outTeam);
  else
    GHandler::GetPlayerTeam((GHandler *)m_bgHandler, clientNum, &outTeam);
  BG_GetPlayerEyePosition(pm->weaponMap, ps, &outOrigin, pm->m_bgHandler);
  v13 = 0;
  v14 = 0;
  v74 = 0;
  if ( v5 <= 0 )
  {
LABEL_83:
    *(_QWORD *)pml->impulseFieldVelocity.v = 0i64;
    pml->impulseFieldVelocity.v[2] = 0.0;
    ps->impulseFieldSpeed = 0.0;
    return;
  }
  v15 = FLOAT_1_0;
  LODWORD(_XMM11) = 0;
  do
  {
    v17 = pm->m_bgHandler->GetEntIndexByImpulseFieldIndex((BgHandler *)pm->m_bgHandler, pm->localClientNum, v14);
    v18 = (BgHandler *)pm->m_bgHandler;
    v19 = v17;
    v70 = v17;
    if ( v18->IsClient(v18) )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)LODWORD(v18[1].__vftable), v19);
      if ( Entity )
        p_nextState = &Entity->nextState;
      else
        p_nextState = NULL;
    }
    else
    {
      p_nextState = GHandler::GetEntityState((GHandler *)v18, v19);
    }
    if ( p_nextState && p_nextState->eType == ET_SCRIPTMOVER && (p_nextState->lerp.u.anonymous.data[2] & 4) != 0 )
    {
      weaponMap = pm->weaponMap;
      if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      Weapon = BgWeaponMap::GetWeapon(weaponMap, p_nextState->weaponHandle);
      if ( !Weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 213, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( weapon ))", (const char *)&queryFormat, "!BG_IsNullWeapon( weapon )") )
        __debugbreak();
      LODWORD(v24) = Weapon->weaponIdx;
      if ( (unsigned int)v24 > bg_lastParsedWeaponIndex )
      {
        LODWORD(passEntityNum) = bg_lastParsedWeaponIndex;
        LODWORD(bounds) = Weapon->weaponIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", bounds, passEntityNum) )
          __debugbreak();
      }
      v24 = (unsigned __int16)v24;
      if ( !bg_weaponDefs[(unsigned __int16)v24] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
        __debugbreak();
      v25 = bg_weaponDefs[v24];
      if ( !v25 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 216, ASSERT_TYPE_ASSERT, "(weaponDef)", (const char *)&queryFormat, "weaponDef") )
          __debugbreak();
        goto LABEL_58;
      }
      otherEntityNum = p_nextState->otherEntityNum;
      if ( otherEntityNum != 2047 )
      {
        v27 = (CgHandler *)pm->m_bgHandler;
        v28 = otherEntityNum;
        if ( v27->IsClient(v27) )
          CgHandler::GetPlayerTeam(v27, v28, &v73);
        else
          GHandler::GetPlayerTeam((GHandler *)v27, v28, &v73);
        v29 = p_nextState->otherEntityNum;
        v30 = ps->clientNum;
        if ( v30 == v29 && !v25->impulseFieldAffectsSelf )
          goto LABEL_58;
        EntityState = BG_GetEntityState(pm->m_bgHandler, v29);
        if ( v30 != v29 && !v25->impulseFieldAffectsFriendlies && EntityState && outTeam && outTeam == v73 )
          goto LABEL_58;
        v19 = v70;
      }
      v32 = pm->m_bgHandler;
      v33 = v25->impulseFieldRadius * v25->impulseFieldRadius;
      v32->IsClient((BgHandler *)v32);
      v32->GetEntityOrigin((BgHandler *)v32, v19, &start);
      v35 = LODWORD(start.v[0]);
      *(float *)&v35 = start.v[0] - ps->origin.v[0];
      v34 = v35;
      v36 = start.v[1] - ps->origin.v[1];
      v38 = start.v[2] - ps->origin.v[2];
      v37 = v38;
      if ( (float)((float)((float)(v36 * v36) + (float)(*(float *)&v34 * *(float *)&v34)) + (float)(v37 * v37)) > v33 || (BgTrace::LegacyTrace(pm->m_trace, pm, &results, &start, &outOrigin, &bounds_origin, ps->clientNum, pm->tracemask), results.fraction < 1.0) )
      {
        *(float *)&_XMM9 = v71;
LABEL_58:
        v8 = v68;
        goto LABEL_59;
      }
      if ( v25->impulseFieldIsPush )
      {
        v34 ^= (unsigned int)_xmm;
        LODWORD(v36) ^= _xmm;
        LODWORD(v37) = LODWORD(v38) ^ _xmm;
      }
      v39 = v34;
      *(float *)&v39 = fsqrt((float)((float)(*(float *)&v34 * *(float *)&v34) + (float)(v36 * v36)) + (float)(v37 * v37));
      _XMM3 = v39;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm10, xmm0
      }
      v43 = *(float *)&v34 * (float)(1.0 / *(float *)&_XMM0);
      v44 = v36 * (float)(1.0 / *(float *)&_XMM0);
      v45 = v37 * (float)(1.0 / *(float *)&_XMM0);
      if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) || v25->impulseFieldAffectsProne )
      {
        _XMM0 = LODWORD(v25->impulseFieldInitialSpeed);
        __asm { vmaxss  xmm3, xmm0, dword ptr [rbx+4Ch] }
        ps->impulseFieldSpeed = *(float *)&_XMM3;
      }
      else
      {
        _XMM3 = LODWORD(ps->impulseFieldSpeed);
        v69 = 1;
      }
      _XMM2 = LODWORD(v25->impulseFieldMaxSpeed);
      _XMM1 = LODWORD(v25->impulseFieldInAirImpulseMultiplier);
      __asm { vmaxss  xmm0, xmm2, [rsp+1C8h+var_17C] }
      _XMM0 = LODWORD(v25->impulseFieldAcceleration);
      __asm { vmaxss  xmm15, xmm0, xmm15 }
      _XMM0 = LODWORD(v25->impulseFieldSlideMultiplier);
      __asm { vmaxss  xmm9, xmm0, [rsp+1C8h+var_180] }
      _XMM0 = LODWORD(v25->impulseFieldSlideMultiplierInterpTime);
      __asm
      {
        vminss  xmm3, xmm3, xmm2
        vmaxss  xmm11, xmm1, xmm11
      }
      _XMM1 = LODWORD(v25->impulseFieldInAirImpulseMultiplierInterpTime);
      __asm
      {
        vminss  xmm14, xmm0, xmm14
        vminss  xmm13, xmm1, xmm13
      }
      pml->impulseFieldVelocity.v[0] = (float)(v43 * *(float *)&_XMM3) + pml->impulseFieldVelocity.v[0];
      pml->impulseFieldVelocity.v[1] = (float)(v44 * *(float *)&_XMM3) + pml->impulseFieldVelocity.v[1];
      v8 = 1;
      pml->impulseFieldVelocity.v[2] = (float)(v45 * *(float *)&_XMM3) + pml->impulseFieldVelocity.v[2];
      v71 = *(float *)&_XMM9;
      v68 = 1;
    }
LABEL_59:
    v14 = v74 + 1;
    v74 = v14;
  }
  while ( v14 < v75 );
  if ( !v8 )
    goto LABEL_83;
  if ( PM_IsInAir(pm) )
  {
    if ( !ps->impulseFieldAirborneStartTime )
      ps->impulseFieldAirborneStartTime = pm->cmd.serverTime;
  }
  else
  {
    ps->impulseFieldAirborneStartTime = 0;
  }
  if ( v69 )
  {
    impulseFieldSpeed_low = LODWORD(ps->impulseFieldSpeed);
    *(float *)&impulseFieldSpeed_low = ps->impulseFieldSpeed - (float)(*(float *)&_XMM15 * pml->frametime);
    _XMM2 = impulseFieldSpeed_low;
    __asm { vmaxss  xmm3, xmm2, xmm11 }
    goto LABEL_81;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
  {
    if ( *(float *)&_XMM14 <= 0.001 )
    {
      v60 = FLOAT_1_0;
      v61 = *(float *)&_XMM9 - 1.0;
    }
    else
    {
      if ( pm->cmd.serverTime - ps->slideState.slideStartTime > 0 )
        v13 = pm->cmd.serverTime - ps->slideState.slideStartTime;
      v59 = I_fclamp((float)((float)v13 * 0.001) / *(float *)&_XMM14, 0.0, 1.0);
      v60 = *(float *)&v59;
      v61 = *(float *)&_XMM9 - 1.0;
    }
    goto LABEL_79;
  }
  impulseFieldAirborneStartTime = ps->impulseFieldAirborneStartTime;
  if ( impulseFieldAirborneStartTime && pm->cmd.serverTime - impulseFieldAirborneStartTime > 0 )
  {
    if ( *(float *)&_XMM13 <= 0.001 )
    {
      v60 = FLOAT_1_0;
    }
    else
    {
      v63 = I_fclamp((float)((float)(pm->cmd.serverTime - impulseFieldAirborneStartTime) * 0.001) / *(float *)&_XMM13, 0.0, 1.0);
      v60 = *(float *)&v63;
    }
    v61 = *(float *)&_XMM11 - 1.0;
LABEL_79:
    v15 = (float)(v61 * v60) + 1.0;
  }
  pml->impulseFieldVelocity.v[0] = v15 * pml->impulseFieldVelocity.v[0];
  pml->impulseFieldVelocity.v[1] = v15 * pml->impulseFieldVelocity.v[1];
  pml->impulseFieldVelocity.v[2] = v15 * pml->impulseFieldVelocity.v[2];
  v64 = _XMM15;
  *(float *)&v64 = (float)(*(float *)&_XMM15 * pml->frametime) + ps->impulseFieldSpeed;
  _XMM3 = v64;
LABEL_81:
  __asm { vminss  xmm0, xmm3, [rsp+1C8h+var_17C] }
  ps->impulseFieldSpeed = *(float *)&_XMM3;
  ps->impulseFieldSpeed = *(float *)&_XMM0;
}

/*
==============
PM_VerifyPronePosition
==============
*/
__int64 PM_VerifyPronePosition(pmove_t *pm, const vec3_t *vFallbackOrg, const vec3_t *vFallbackVel)
{
  playerState_s *ps; 
  FeetDirection ProneFeetDirection; 
  const BgHandler *m_bgHandler; 
  Physics_WorldId v9; 
  const BgHandler *handler; 
  float fYaw; 
  int isOnGround; 
  Physics_WorldId worldId; 
  double BoundsHeight; 
  float v15; 
  double BoundsRadius; 
  float *pfWaistPitch; 
  float *pfTorsoPitch; 
  FeetDirection v19; 
  float v20; 
  __int128 v21; 
  float v22; 
  __int128 v23; 
  float v27; 
  float v28; 
  float v29; 
  float proneDirection; 
  __int64 result; 
  int entityNum; 
  int proneValidFlags; 
  FeetDirection feetDirection; 
  vec3_t forward; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 41, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_slidemove.cpp", 41, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0) )
    return 1i64;
  entityNum = 2047;
  proneValidFlags = 0;
  ProneFeetDirection = PM_GetProneFeetDirection(ps);
  m_bgHandler = pm->m_bgHandler;
  feetDirection = ProneFeetDirection;
  v9 = m_bgHandler->GetPhysicsWorldId((BgHandler *)m_bgHandler);
  handler = pm->m_bgHandler;
  fYaw = ps->proneDirection;
  isOnGround = ps->groundEntityNum != 2047;
  worldId = v9;
  BoundsHeight = BG_Suit_GetBoundsHeight(ps, PM_EFF_STANCE_PRONE);
  v15 = *(float *)&BoundsHeight;
  BoundsRadius = BG_Suit_GetBoundsRadius(ps);
  pfWaistPitch = &pm->fWaistPitch;
  pfTorsoPitch = &pm->fTorsoPitch;
  v19 = feetDirection;
  if ( BG_CheckProne(ps, ps->clientNum, &ps->origin, *(const float *)&BoundsRadius, v15, fYaw, pfTorsoPitch, pfWaistPitch, 1, isOnGround, 1, handler, worldId, PCT_CLIENT, 50.0, feetDirection, &entityNum, &proneValidFlags) || BGMovingPlatforms::IsMovingPlatform(entityNum) )
    return 1i64;
  v20 = ps->velocity.v[1];
  v21 = LODWORD(ps->velocity.v[0]);
  v22 = ps->velocity.v[2];
  v23 = v21;
  *(float *)&v23 = fsqrt((float)((float)(*(float *)&v21 * *(float *)&v21) + (float)(v20 * v20)) + (float)(v22 * v22));
  _XMM3 = v23;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  v27 = *(float *)&v21 * (float)(1.0 / *(float *)&_XMM0);
  v28 = v20 * (float)(1.0 / *(float *)&_XMM0);
  v29 = v22 * (float)(1.0 / *(float *)&_XMM0);
  if ( *(float *)&v23 > 0.0 )
  {
    proneDirection = ps->proneDirection;
    if ( v19 == FEETDIR_BACK )
      proneDirection = proneDirection + -180.0;
    YawVectors(proneDirection, &forward, NULL);
    if ( (float)((float)((float)(v27 * forward.v[0]) + (float)(v28 * forward.v[1])) + (float)(v29 * forward.v[2])) > -0.5 )
    {
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_playerCharacterCollisionProneStuckFallFix, "playerCharacterCollisionProneStuckFallFix") && (proneValidFlags & 3) != 0 )
      {
        result = 0i64;
        *(_QWORD *)ps->velocity.v = 0i64;
        ps->velocity.v[2] = 0.0;
        return result;
      }
      ps->origin.v[0] = vFallbackOrg->v[0];
      ps->origin.v[1] = vFallbackOrg->v[1];
      ps->origin.v[2] = vFallbackOrg->v[2];
      ps->velocity.v[0] = vFallbackVel->v[0];
      ps->velocity.v[1] = vFallbackVel->v[1];
      ps->velocity.v[2] = vFallbackVel->v[2];
    }
  }
  return 0i64;
}

