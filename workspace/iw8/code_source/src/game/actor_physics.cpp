/*
==============
AIScriptedInterface::Physics_TestForLinkedGroundChange
==============
*/

void __fastcall AIScriptedInterface::Physics_TestForLinkedGroundChange(AIScriptedInterface *this)
{
  ?Physics_TestForLinkedGroundChange@AIScriptedInterface@@IEBAXXZ(this);
}

/*
==============
AIScriptedInterface::Physics_GroundTraceOnly
==============
*/

void __fastcall AIScriptedInterface::Physics_GroundTraceOnly(AIScriptedInterface *this)
{
  ?Physics_GroundTraceOnly@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIPhys_Init
==============
*/

void AIPhys_Init(void)
{
  ?AIPhys_Init@@YAXXZ();
}

/*
==============
AIPhys_Shutdown
==============
*/

void AIPhys_Shutdown(void)
{
  ?AIPhys_Shutdown@@YAXXZ();
}

/*
==============
AIScriptedInterface::Physics_UpdatePrevGround
==============
*/

void __fastcall AIScriptedInterface::Physics_UpdatePrevGround(actor_physics_t *pPhys)
{
  ?Physics_UpdatePrevGround@AIScriptedInterface@@SAXPEAUactor_physics_t@@@Z(pPhys);
}

/*
==============
AIPhys_DoGroundShapecast
==============
*/

void __fastcall AIPhys_DoGroundShapecast(trace_t *trace, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int entNum, int contentmask)
{
  ?AIPhys_DoGroundShapecast@@YAXPEAUtrace_t@@AEBTvec3_t@@1PEBUBounds@@HH@Z(trace, start, end, bounds, entNum, contentmask);
}

/*
==============
AIScriptedInterface::Physics_HandleMovingPlatformTeleport
==============
*/

void __fastcall AIScriptedInterface::Physics_HandleMovingPlatformTeleport(AIScriptedInterface *this)
{
  ?Physics_HandleMovingPlatformTeleport@AIScriptedInterface@@QEBAXXZ(this);
}

/*
==============
AIScriptedInterface::Physics_DoMovement
==============
*/

int __fastcall AIScriptedInterface::Physics_DoMovement(actor_physics_t *pPhys)
{
  return ?Physics_DoMovement@AIScriptedInterface@@SAHPEAUactor_physics_t@@@Z(pPhys);
}

/*
==============
AIScriptedInterface::Physics_Trace
==============
*/

void __fastcall AIScriptedInterface::Physics_Trace(AIScriptedInterface *this, const vec3_t *start, const vec3_t *end, trace_t *trace)
{
  ?Physics_Trace@AIScriptedInterface@@IEBAXAEBTvec3_t@@0PEAUtrace_t@@@Z(this, start, end, trace);
}

/*
==============
AIScriptedInterface::Physics_CharacterTrace
==============
*/

bool __fastcall AIScriptedInterface::Physics_CharacterTrace(AIScriptedInterface *this)
{
  return ?Physics_CharacterTrace@AIScriptedInterface@@IEBA_NXZ(this);
}

/*
==============
AIScriptedInterface::PostPhysics
==============
*/

void __fastcall AIScriptedInterface::PostPhysics(AIScriptedInterface *this)
{
  ?PostPhysics@AIScriptedInterface@@IEBAXXZ(this);
}

/*
==============
AIPhys_AddTouchEnt
==============
*/
void AIPhys_AddTouchEnt(int entityNum)
{
  __int64 v1; 
  actor_physics_t *v2; 
  gclient_s *client; 
  __int64 iNumTouch; 
  __int64 v5; 
  __int16 *iTouchEnts; 

  v1 = entityNum;
  if ( entityNum == 2047 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 96, ASSERT_TYPE_ASSERT, "(entityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "entityNum != ENTITYNUM_NONE") )
      __debugbreak();
  }
  else if ( entityNum == 2046 )
  {
    return;
  }
  v2 = g_pPhys;
  if ( g_pPhys->iNumTouch != 32 )
  {
    client = g_entities[v1].client;
    if ( client )
    {
      if ( BGMovingPlatforms::IsOnMovingPlatform(&client->ps) )
        return;
      v2 = g_pPhys;
    }
    iNumTouch = v2->iNumTouch;
    if ( iNumTouch <= 0 )
    {
LABEL_13:
      if ( (unsigned int)(v1 + 0x8000) > 0xFFFF )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v1, "signed", v1) )
          __debugbreak();
        v2 = g_pPhys;
      }
      v2->iTouchEnts[v2->iNumTouch++] = v1;
    }
    else
    {
      v5 = 0i64;
      iTouchEnts = v2->iTouchEnts;
      while ( *iTouchEnts != (_DWORD)v1 )
      {
        ++v5;
        ++iTouchEnts;
        if ( v5 >= iNumTouch )
          goto LABEL_13;
      }
    }
  }
}

/*
==============
AIPhys_CharacterTrace
==============
*/
void AIPhys_CharacterTrace(trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int contentmask)
{
  const vec3_t *v6; 
  int v8; 
  __int128 v10; 
  __int128 v14; 
  __m128 v18; 
  __m128 v25; 
  __m128 v26; 
  __m128 v28; 
  __int128 v32; 
  __m128 v36; 
  __m128 v44; 
  float v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  gentity_s *v49; 
  __int64 v50; 
  __int64 v51; 
  vec3_t *enda; 
  Bounds *boundsa; 
  __int128 v55; 
  __int128 v56; 
  __m128 v57; 
  __m128 v58; 
  __int128 v59; 
  __m128 v60; 
  float v61; 
  float v62; 
  __int64 v63; 
  __int64 v64; 

  v6 = start;
  boundsa = (Bounds *)bounds;
  enda = (vec3_t *)end;
  if ( (contentmask & 0xFDFFFFFF) == 0 )
  {
    v8 = 0;
    _mm_shuffle_ps(*(__m128 *)bounds_origin.midPoint.v, *(__m128 *)bounds_origin.midPoint.v, 170);
    HIDWORD(v55) = 0;
    v10 = v55;
    *(float *)&v10 = start->v[0];
    _XMM5 = v10;
    __asm
    {
      vinsertps xmm5, xmm5, dword ptr [rdx+4], 10h
      vinsertps xmm5, xmm5, dword ptr [rdx+8], 20h ; ' '
    }
    _mm_shuffle_ps(*(__m128 *)bounds_origin.midPoint.v, *(__m128 *)bounds_origin.midPoint.v, 85);
    v56 = _XMM5;
    HIDWORD(v56) = 0;
    v14 = v56;
    *(float *)&v14 = 0.0;
    _XMM2 = v14;
    __asm
    {
      vinsertps xmm2, xmm2, xmm0, 10h
      vinsertps xmm2, xmm2, xmm1, 20h ; ' '
    }
    v57 = _XMM2;
    _mm_shuffle_ps((__m128)*(unsigned __int64 *)&bounds_origin.halfSize.y, (__m128)*(unsigned __int64 *)&bounds_origin.halfSize.y, 85);
    v57.m128_i32[3] = 0;
    v18 = v57;
    v18.m128_f32[0] = _mm_shuffle_ps(*(__m128 *)bounds_origin.midPoint.v, *(__m128 *)bounds_origin.midPoint.v, 255).m128_f32[0];
    _XMM1 = v18;
    __asm
    {
      vinsertps xmm1, xmm1, xmm4, 10h
      vinsertps xmm1, xmm1, xmm0, 20h ; ' '
    }
    _XMM0 = _mm128_sub_ps(_XMM2, _XMM1);
    v58 = _XMM1;
    _XMM1 = _mm128_add_ps(_XMM2, _XMM1);
    __asm
    {
      vminps  xmm3, xmm0, xmm5
      vmaxps  xmm0, xmm1, xmm5
    }
    v25 = _mm128_mul_ps(_mm128_add_ps(_XMM3, _XMM0), g_oneHalf.v);
    v26 = _mm128_sub_ps(v25, _XMM3);
    v58.m128_i32[3] = 0;
    v28 = v58;
    v28.m128_f32[0] = end->v[0];
    _XMM8 = v28;
    __asm
    {
      vinsertps xmm8, xmm8, dword ptr [r8+4], 10h
      vinsertps xmm8, xmm8, dword ptr [r8+8], 20h ; ' '
    }
    v59 = _XMM8;
    HIDWORD(v59) = 0;
    v32 = v59;
    *(float *)&v32 = v25.m128_f32[0];
    _XMM2 = v32;
    _mm_shuffle_ps(v25, v25, 85);
    __asm { vinsertps xmm2, xmm2, xmm3, 10h }
    _mm_shuffle_ps(v25, v25, 170);
    __asm { vinsertps xmm2, xmm2, xmm4, 20h ; ' ' }
    v60 = _XMM2;
    _mm_shuffle_ps(v26, v26, 85);
    _mm_shuffle_ps(v26, v26, 170);
    v60.m128_i32[3] = 0;
    v36 = v60;
    v36.m128_f32[0] = v26.m128_f32[0];
    _XMM1 = v36;
    __asm
    {
      vinsertps xmm1, xmm1, xmm6, 10h
      vinsertps xmm1, xmm1, xmm7, 20h ; ' '
    }
    _XMM0 = _mm128_sub_ps(_XMM2, _XMM1);
    __asm { vminps  xmm3, xmm0, xmm8 }
    _XMM1 = _mm128_add_ps(_XMM2, _XMM1);
    __asm { vmaxps  xmm0, xmm1, xmm8 }
    _XMM2 = _mm128_mul_ps(_mm128_add_ps(_XMM3, _XMM0), g_oneHalf.v);
    v44 = _mm128_sub_ps(_XMM2, _XMM3);
    v45 = v44.m128_f32[0] + bounds->halfSize.v[0];
    *(float *)&v63 = _mm_shuffle_ps(v44, v44, 85).m128_f32[0] + bounds->halfSize.v[1];
    *((float *)&v63 + 1) = _mm_shuffle_ps(v44, v44, 170).m128_f32[0] + bounds->halfSize.v[2];
    __asm
    {
      vextractps dword ptr [rbp+47h+var_B0+4], xmm2, 1
      vextractps dword ptr [rbp+47h+var_B0+8], xmm2, 2
    }
    if ( level.maxclients <= 0 )
    {
LABEL_20:
      results->fraction = 1.0;
      return;
    }
    v46 = v63;
    v47 = 0i64;
    v48 = 0i64;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= 0x800 )
      {
        LODWORD(v51) = 2048;
        LODWORD(v50) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v50, v51) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v48].r.isInUse != g_entityIsInUse[v47] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v47] )
      {
        v49 = &g_entities[v48];
        if ( passEntityNum == 2047 || !G_EntIsLinkedToAncestor(&g_entities[v48], &g_entities[passEntityNum]) )
        {
          v64 = v46;
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v49->r.currentOrigin.v[0] - _XMM2.m128_f32[0]) & _xmm) < (float)(v45 + v49->r.box.halfSize.v[0]) && COERCE_FLOAT(COERCE_UNSIGNED_INT(v49->r.currentOrigin.v[1] - v61) & _xmm) < (float)(*(float *)&v46 + v49->r.box.halfSize.v[1]) && COERCE_FLOAT(COERCE_UNSIGNED_INT(v49->r.currentOrigin.v[2] - v62) & _xmm) < (float)(*((float *)&v64 + 1) + v49->r.box.halfSize.v[2]) )
            break;
        }
      }
      ++v8;
      ++v47;
      ++v48;
      if ( v8 >= level.maxclients )
        goto LABEL_20;
    }
    v6 = start;
    end = enda;
    bounds = boundsa;
  }
  AIPhys_Trace(results, v6, end, bounds, passEntityNum, contentmask);
}

/*
==============
AIPhys_ClearGroundState
==============
*/
void AIPhys_ClearGroundState(int movingGround)
{
  actor_physics_t *v1; 

  v1 = g_pPhys;
  *(_QWORD *)&g_apl.bIsWalking = 0i64;
  if ( !movingGround || g_pPhys->bSpace )
  {
    g_pPhys->groundEntNum = 2047;
    *(_QWORD *)v1->vPrevGroundOrigin.v = 0i64;
    *(_QWORD *)&v1->vPrevGroundOrigin.z = 0i64;
    *(_QWORD *)&v1->vPrevGroundAngles.y = 0i64;
  }
}

/*
==============
AIPhys_ClipAgainstCharacters
==============
*/
__int64 AIPhys_ClipAgainstCharacters(int gravity, int iNumPlanes, vec3_t *planes, bool *isWalkable, float fTimeLeft, vec3_t *vEndVelocity, vec3_t *pointOnNavmesh)
{
  __int64 v8; 
  bool v9; 
  actor_physics_t *v10; 
  __int64 v12; 
  unsigned int v13; 
  int v14; 
  __int128 v15; 
  float v16; 
  const dvar_t *v17; 
  const vec4_t *v18; 
  const char *v19; 
  char *Value; 
  int *v21; 
  _QWORD *v22; 
  char *v23; 
  __int64 v24; 
  unsigned __int64 v25; 
  __int32 v26; 
  actor_physics_t *v27; 
  unsigned __int16 v28; 
  actor_physics_t *v29; 
  float v30; 
  float v31; 
  float v32; 
  int v33; 
  int v34; 
  __int128 v35; 
  int v36; 
  __int64 v37; 
  float v38; 
  float v39; 
  float v40; 
  float *v41; 
  bool v42; 
  actor_physics_t *v43; 
  unsigned __int16 EntityHitId; 
  actor_physics_t *v45; 
  float v46; 
  __int64 contentmask; 
  __int64 v48; 
  int v49; 
  int v50; 
  float *v53; 
  vec3_t end; 
  trace_t results; 
  vec3_t vEndClipVelocity; 

  v8 = iNumPlanes;
  v50 = g_apl.iTraceMask & 0x2004000;
  v49 = iNumPlanes;
  v9 = AIPhys_ClipVelocityToAllPlanes(iNumPlanes, planes, isWalkable, vEndVelocity, &vEndClipVelocity);
  v10 = g_pPhys;
  if ( !v9 )
  {
    DropPointToGroundPlane(pointOnNavmesh, &g_pPhys->vOrigin, &g_pPhys->vOrigin);
    return 1i64;
  }
  v12 = v8;
  v13 = 0;
  v14 = 0;
  v15 = LODWORD(fTimeLeft);
  v53 = &planes[v8].v[2];
  while ( 1 )
  {
    v16 = v10->vVelocity.v[0];
    if ( fsqrt((float)((float)(v16 * v16) + (float)(v10->vVelocity.v[1] * v10->vVelocity.v[1])) + (float)(v10->vVelocity.v[2] * v10->vVelocity.v[2])) < 0.0099999998 )
    {
      DropPointToGroundPlane(pointOnNavmesh, &v10->vOrigin, &v10->vOrigin);
      return 0i64;
    }
    v17 = DCONST_DVARBOOL_ai_showNavPhysics;
    end.v[0] = (float)(v16 * *(float *)&v15) + pointOnNavmesh->v[0];
    end.v[1] = (float)(*(float *)&v15 * v10->vVelocity.v[1]) + pointOnNavmesh->v[1];
    end.v[2] = (float)(*(float *)&v15 * v10->vVelocity.v[2]) + pointOnNavmesh->v[2];
    if ( !DCONST_DVARBOOL_ai_showNavPhysics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavPhysics") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.enabled )
    {
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          v18 = &colorYellowHeat;
        }
        else
        {
          if ( v14 != 2 )
          {
LABEL_16:
            v19 = "distclip";
            if ( g_pPhys->navPhysicsState == NAVPHYS_NOCLIP )
              v19 = "noclip";
            G_Main_AddDebugString(pointOnNavmesh, &colorLtGreen, 0.30000001, v19);
            goto LABEL_19;
          }
          v18 = &colorRedHeat;
        }
      }
      else
      {
        v18 = &colorLtGreen;
      }
      G_DebugLineWithDuration(pointOnNavmesh, &end, v18, 0, 1);
      goto LABEL_16;
    }
LABEL_19:
    Value = (char *)Sys_GetValue(0);
    v21 = (int *)(Value + 12576);
    if ( (unsigned int)(*((_DWORD *)Value + 3144) + 1) >= 3 )
    {
      LODWORD(v48) = 3;
      LODWORD(contentmask) = *((_DWORD *)Value + 3144) + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", contentmask, v48) )
        __debugbreak();
    }
    if ( (unsigned int)++*v21 >= 3 )
    {
      LODWORD(v48) = 3;
      LODWORD(contentmask) = *v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", contentmask, v48) )
        __debugbreak();
    }
    v22 = Value + 2088;
    v23 = Value + 40;
    if ( *v22 < (unsigned __int64)v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
      __debugbreak();
    *v22 += 8i64;
    if ( *v22 >= (unsigned __int64)v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
      __debugbreak();
    *(_QWORD *)*v22 = v21;
    if ( *v22 <= (unsigned __int64)v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
      __debugbreak();
    v24 = *v21;
    v25 = __rdtsc();
    v21[v24 + 2] = v25;
    v26 = Sys_HasValidCurrentThreadContext() ? Sys_GetCurrentThreadContext() : 28;
    CPUTimelineProfiler::BeginSample(&g_cpuProfiler, (ThreadContext)v26, 262, NULL, 0);
    AIPhys_CharacterTrace(&results, pointOnNavmesh, &end, &g_pPhys->bounds, g_pPhys->iEntNum, v50);
    Profile_EndInternal(NULL);
    if ( results.fraction == 1.0 )
      break;
    if ( results.startsolid )
    {
      v43 = g_pPhys;
      g_pPhys->vVelocity.v[2] = 0.0;
      if ( !v14 && g_apl.groundTrace.startsolid )
        return 2i64;
      DropPointToGroundPlane(pointOnNavmesh, &v43->vOrigin, &v43->vOrigin);
      if ( g_pPhys->iHitEntnum == 2047 )
      {
        EntityHitId = Trace_GetEntityHitId(&results);
        v45 = g_pPhys;
        g_pPhys->iHitEntnum = EntityHitId;
        v45->vHitOrigin = v45->vOrigin;
        v45->bStuck = 1;
      }
      return 1i64;
    }
    v27 = g_pPhys;
    g_pPhys->bDeflected = 1;
    if ( !results.walkable && v27->iHitEntnum == 2047 && (results.normal.v[0] != 0.0 || results.normal.v[1] != 0.0) )
    {
      v28 = Trace_GetEntityHitId(&results);
      v29 = g_pPhys;
      g_pPhys->iHitEntnum = v28;
      v29->vHitOrigin = *pointOnNavmesh;
      v29->vHitNormal = results.normal;
      v29->bStuck = 0;
    }
    v30 = (float)((float)(end.v[0] - pointOnNavmesh->v[0]) * results.fraction) + pointOnNavmesh->v[0];
    v31 = (float)((float)(end.v[1] - pointOnNavmesh->v[1]) * results.fraction) + pointOnNavmesh->v[1];
    v32 = (float)((float)(end.v[2] - pointOnNavmesh->v[2]) * results.fraction) + pointOnNavmesh->v[2];
    pointOnNavmesh->v[2] = v32;
    pointOnNavmesh->v[0] = v30;
    pointOnNavmesh->v[1] = v31;
    if ( ((LODWORD(v30) & 0x7F800000) == 2139095040 || (LODWORD(v31) & 0x7F800000) == 2139095040 || (LODWORD(v32) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 618, ASSERT_TYPE_ASSERT, "(!IS_NAN( pointOnNavmesh[0] ) && !IS_NAN( pointOnNavmesh[1] ) && !IS_NAN( pointOnNavmesh[2] ))", "%s\n\tActor_Physics: traceEndPos of AIPhys_Trace is invalid", "!IS_NAN( pointOnNavmesh[0] ) && !IS_NAN( pointOnNavmesh[1] ) && !IS_NAN( pointOnNavmesh[2] )") )
      __debugbreak();
    v33 = Trace_GetEntityHitId(&results);
    if ( v33 != 2047 )
      AIPhys_AddTouchEnt(v33);
    v10 = g_pPhys;
    v34 = v49;
    v35 = v15;
    *(float *)&v35 = *(float *)&v15 - (float)(*(float *)&v15 * results.fraction);
    v15 = v35;
    g_pPhys->bDeflected = 1;
    if ( v49 >= 5 )
    {
      *(_QWORD *)v10->vVelocity.v = 0i64;
      v10->vVelocity.v[2] = 0.0;
LABEL_68:
      DropPointToGroundPlane(pointOnNavmesh, &v10->vOrigin, &v10->vOrigin);
      return 1i64;
    }
    v36 = 0;
    v37 = 0i64;
    v38 = results.normal.v[2];
    v39 = results.normal.v[1];
    v40 = results.normal.v[0];
    if ( v12 > 0 )
    {
      v41 = &planes->v[2];
      while ( (float)((float)((float)(results.normal.v[1] * *(v41 - 1)) + (float)(results.normal.v[0] * *(v41 - 2))) + (float)(results.normal.v[2] * *v41)) <= 0.99000001 )
      {
        ++v36;
        ++v37;
        v41 += 3;
        if ( v37 >= v12 )
          goto LABEL_63;
      }
      if ( results.fraction == 0.0 && v10->iHitEntnum == 2047 && (results.normal.v[0] != 0.0 || results.normal.v[1] != 0.0) )
      {
        v10->vHitOrigin = *pointOnNavmesh;
        v10->vHitNormal = results.normal;
        v10->bStuck = 0;
        v40 = results.normal.v[0];
      }
      v10->vVelocity.v[0] = v40 + v10->vVelocity.v[0];
      v10->vVelocity.v[1] = results.normal.v[1] + v10->vVelocity.v[1];
      v10->vVelocity.v[2] = results.normal.v[2] + v10->vVelocity.v[2];
      v38 = results.normal.v[2];
      v39 = results.normal.v[1];
      v40 = results.normal.v[0];
    }
LABEL_63:
    if ( v36 >= v49 )
    {
      *(v53 - 2) = v40;
      *(v53 - 1) = v39;
      *v53 = v38;
      isWalkable[v12] = 0;
      v53 += 3;
      ++v49;
      ++v12;
      v42 = AIPhys_ClipVelocityToAllPlanes(v34 + 1, planes, isWalkable, vEndVelocity, &vEndClipVelocity);
      v10 = g_pPhys;
      if ( !v42 )
        goto LABEL_68;
    }
    if ( ++v14 >= 4 )
      goto LABEL_76;
  }
  v46 = end.v[1];
  v10 = g_pPhys;
  pointOnNavmesh->v[0] = end.v[0];
  pointOnNavmesh->v[2] = end.v[2];
  pointOnNavmesh->v[1] = v46;
LABEL_76:
  if ( gravity )
    v10->vVelocity = *vEndVelocity;
  DropPointToGroundPlane(pointOnNavmesh, &v10->vOrigin, &v10->vOrigin);
  LOBYTE(v13) = v14 != 0;
  return v13;
}

/*
==============
AIPhys_ClipAgainstCharactersAndMesh
==============
*/
__int64 AIPhys_ClipAgainstCharactersAndMesh(int gravity, int iNumPlanes, vec3_t *planes, bool *isWalkable, float fTimeLeft, vec3_t *vEndVelocity, vec3_t *pointOnNavmesh)
{
  __int64 v9; 
  unsigned int v10; 
  AIScriptedInterface *m_pAI; 
  AINavigator *Navigator; 
  AINavigator2D *v13; 
  bfx::SpaceHandle *p_hSpace; 
  bool v15; 
  actor_physics_t *v16; 
  int v17; 
  int v18; 
  __int64 v19; 
  int v20; 
  const bfx::AreaHandle *hHintArea; 
  float v22; 
  float v23; 
  float v24; 
  const dvar_t *v25; 
  const vec4_t *v26; 
  const char *v27; 
  float fraction; 
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
  actor_physics_t *v42; 
  unsigned __int16 EntityHitId; 
  actor_physics_t *v44; 
  int v45; 
  float v46; 
  double v47; 
  actor_physics_t *v48; 
  float v49; 
  double v50; 
  float v51; 
  __int128 v52; 
  float v53; 
  float v54; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  __int128 v64; 
  float v68; 
  float v69; 
  int v70; 
  __int64 v71; 
  float *v72; 
  actor_physics_t *v73; 
  unsigned __int16 v74; 
  actor_physics_t *v75; 
  actor_physics_t *v76; 
  signed int layer_4; 
  nav_space_s *pSpace; 
  int contentmask; 
  float *v83; 
  AINavigator2D *v84; 
  bfx::AreaHandle pOutArea; 
  __int64 v87; 
  AIWrapper v88; 
  vec3_t end; 
  vec3_t cross; 
  vec3_t adjusted; 
  vec3_t outClosestPos; 
  vec3_t v93; 
  vec3_t start; 
  vec3_t endPos; 
  vec3_t v1; 
  nav_probe_results_s pOutResults; 
  bfx::PathSpec pPathSpec; 
  trace_t results; 
  vec3_t outUp; 
  vec3_t vEndClipVelocity; 

  v87 = -2i64;
  v9 = iNumPlanes;
  bfx::AreaHandle::AreaHandle(&pOutResults.m_hEndArea);
  v10 = 0;
  pPathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&pPathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&pPathSpec.m_areaPenaltyFlags = -1i64;
  pPathSpec.m_usePathSharingPenalty = 0;
  pPathSpec.m_pathSharingPenalty = 0.0;
  pPathSpec.m_maxPathSharingPenalty = 0.0;
  pPathSpec.m_maxSearchDist = 0.0;
  bfx::PenaltyTable::PenaltyTable(&pPathSpec.m_penaltyTable);
  pPathSpec.m_snapMode = SNAP_CLOSEST;
  AIWrapper::AIWrapper(&v88, &g_entities[g_pPhys->iEntNum]);
  m_pAI = v88.m_pAI;
  if ( !v88.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 708, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  Navigator = AICommonInterface::GetNavigator(m_pAI);
  if ( !Navigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 711, ASSERT_TYPE_ASSERT, "( pNavigator )", (const char *)&queryFormat, "pNavigator") )
    __debugbreak();
  layer_4 = Nav_GetLayer(Navigator);
  pSpace = Navigator->m_pSpace;
  if ( !pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 717, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  v13 = Navigator->Get2DNavigator(Navigator);
  v84 = v13;
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 721, ASSERT_TYPE_ASSERT, "( pNav2D )", (const char *)&queryFormat, "pNav2D") )
    __debugbreak();
  pPathSpec = *AINavigator2D::GetPathSpec(v13);
  bfx::AreaHandle::AreaHandle(&pOutArea);
  p_hSpace = &pSpace->hSpace;
  Nav_GetSpaceUp(pSpace, &outUp);
  contentmask = g_apl.iTraceMask & 0x2004000;
  v15 = AIPhys_ClipVelocityToAllPlanes(v9, planes, isWalkable, vEndVelocity, &vEndClipVelocity);
  v16 = g_pPhys;
  if ( !v15 )
  {
    DropPointToGroundPlane(pointOnNavmesh, &g_pPhys->vOrigin, &g_pPhys->vOrigin);
    v17 = 1;
LABEL_120:
    v10 = v17;
LABEL_121:
    v20 = v10;
    goto LABEL_122;
  }
  v18 = 0;
  v19 = v9;
  v83 = &planes[v9].v[2];
  v20 = 1;
  while ( 1 )
  {
    if ( fsqrt((float)((float)(v16->vVelocity.v[0] * v16->vVelocity.v[0]) + (float)(v16->vVelocity.v[1] * v16->vVelocity.v[1])) + (float)(v16->vVelocity.v[2] * v16->vVelocity.v[2])) < 0.0099999998 )
    {
      DropPointToGroundPlane(pointOnNavmesh, &v16->vOrigin, &v16->vOrigin);
      v17 = 0;
      goto LABEL_120;
    }
    hHintArea = AINavigator2D::GetCurArea(v84);
    if ( !Nav_GetClosestVerticalPosWithHint(pointOnNavmesh, &outUp, layer_4, p_hSpace, &pPathSpec, &outClosestPos, hHintArea, &pOutArea) )
    {
      v76 = g_pPhys;
      g_pPhys->vOrigin.v[0] = (float)(fTimeLeft * g_pPhys->vVelocity.v[0]) + g_pPhys->vOrigin.v[0];
      v76->vOrigin.v[1] = (float)(fTimeLeft * v76->vVelocity.v[1]) + v76->vOrigin.v[1];
      v76->vOrigin.v[2] = (float)(fTimeLeft * v76->vVelocity.v[2]) + v76->vOrigin.v[2];
      goto LABEL_121;
    }
    v22 = outClosestPos.v[0];
    if ( (LODWORD(outClosestPos.v[0]) & 0x7F800000) == 2139095040 || (v23 = outClosestPos.v[1], (LODWORD(outClosestPos.v[1]) & 0x7F800000) == 2139095040) || (v24 = outClosestPos.v[2], (LODWORD(outClosestPos.v[2]) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 759, ASSERT_TYPE_ASSERT, "(!IS_NAN( closestVerticalPos[0] ) && !IS_NAN( closestVerticalPos[1] ) && !IS_NAN( closestVerticalPos[2] ))", "%s\n\tActor_Physics: closestVerticalPos is NAN.", "!IS_NAN( closestVerticalPos[0] ) && !IS_NAN( closestVerticalPos[1] ) && !IS_NAN( closestVerticalPos[2] )") )
        __debugbreak();
      v22 = outClosestPos.v[0];
      v23 = outClosestPos.v[1];
      v24 = outClosestPos.v[2];
    }
    pointOnNavmesh->v[0] = v22;
    pointOnNavmesh->v[1] = v23;
    pointOnNavmesh->v[2] = v24;
    end.v[0] = (float)(fTimeLeft * g_pPhys->vVelocity.v[0]) + v22;
    end.v[1] = (float)(fTimeLeft * g_pPhys->vVelocity.v[1]) + v23;
    end.v[2] = (float)(fTimeLeft * g_pPhys->vVelocity.v[2]) + v24;
    v25 = DCONST_DVARBOOL_ai_showNavPhysics;
    if ( !DCONST_DVARBOOL_ai_showNavPhysics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavPhysics") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    if ( v25->current.enabled )
    {
      if ( v18 )
      {
        if ( v18 == 1 )
        {
          v26 = &colorYellowHeat;
        }
        else
        {
          if ( v18 != 2 )
          {
LABEL_35:
            v27 = "distclip";
            if ( g_pPhys->navPhysicsState == NAVPHYS_NOCLIP )
              v27 = "noclip";
            G_Main_AddDebugString(pointOnNavmesh, &colorLtGreen, 0.30000001, v27);
            goto LABEL_38;
          }
          v26 = &colorRedHeat;
        }
      }
      else
      {
        v26 = &colorLtGreen;
      }
      G_DebugLineWithDuration(pointOnNavmesh, &end, v26, 0, 1);
      goto LABEL_35;
    }
LABEL_38:
    Nav_Trace(pSpace, pointOnNavmesh, &end, (AINavLayer)layer_4, &pPathSpec, &pOutResults);
    Profile_Begin(262);
    AIPhys_CharacterTrace(&results, pointOnNavmesh, &end, &g_pPhys->bounds, g_pPhys->iEntNum, contentmask);
    Profile_EndInternal(NULL);
    fraction = results.fraction;
    if ( results.fraction == 1.0 && !pOutResults.m_bCollided )
    {
      *pointOnNavmesh = end;
      v16 = g_pPhys;
LABEL_108:
      if ( gravity )
        v16->vVelocity = *vEndVelocity;
      DropPointToGroundPlane(pointOnNavmesh, &v16->vOrigin, &v16->vOrigin);
      LOBYTE(v10) = v18 != 0;
      goto LABEL_123;
    }
    v29 = end.v[0];
    v30 = (float)((float)(end.v[0] - pointOnNavmesh->v[0]) * results.fraction) + pointOnNavmesh->v[0];
    v31 = pointOnNavmesh->v[1];
    v32 = end.v[1];
    v33 = (float)((float)(end.v[1] - v31) * results.fraction) + v31;
    v34 = pointOnNavmesh->v[2];
    v35 = end.v[2];
    v36 = (float)((float)(end.v[2] - v34) * results.fraction) + v34;
    v37 = (float)((float)((float)(v31 - v33) * (float)(v31 - v33)) + (float)((float)(pointOnNavmesh->v[0] - v30) * (float)(pointOnNavmesh->v[0] - v30))) + (float)((float)(v34 - v36) * (float)(v34 - v36));
    v38 = fsqrt((float)((float)((float)(v31 - end.v[1]) * (float)(v31 - end.v[1])) + (float)((float)(pointOnNavmesh->v[0] - end.v[0]) * (float)(pointOnNavmesh->v[0] - end.v[0]))) + (float)((float)(v34 - end.v[2]) * (float)(v34 - end.v[2])));
    if ( results.fraction < 1.0 && v37 < (float)(pOutResults.m_DistTraveled * pOutResults.m_DistTraveled) )
      break;
    if ( !pOutResults.m_bCollided )
      break;
    if ( v38 < 0.001 || pOutResults.m_DistTraveled < 0.001 )
    {
      fraction = 0.0;
      v46 = FLOAT_1_0;
    }
    else
    {
      v46 = FLOAT_1_0;
      v47 = I_fclamp(pOutResults.m_DistTraveled / v38, 0.0, 1.0);
      fraction = *(float *)&v47;
      if ( *(float *)&v47 >= 0.0099999998 )
        goto LABEL_78;
      v35 = end.v[2];
      v32 = end.v[1];
      v29 = end.v[0];
    }
    if ( fTimeLeft != g_apl.fFrameTime )
      goto LABEL_79;
    v48 = g_pPhys;
    v49 = g_pPhys->vPathDir.v[0];
    if ( v49 == 0.0 && g_pPhys->vPathDir.v[1] == 0.0 && g_pPhys->vPathDir.v[2] == 0.0 )
      goto LABEL_79;
    if ( ((LODWORD(v49) & 0x7F800000) == 2139095040 || (LODWORD(g_pPhys->vPathDir.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(g_pPhys->vPathDir.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 501, ASSERT_TYPE_ASSERT, "(!IS_NAN( nudgeDirection[0] ) && !IS_NAN( nudgeDirection[1] ) && !IS_NAN( nudgeDirection[2] ))", "%s\n\tAIPhys_NudgeOriginAlongEdge: nudgeDirection is NAN.", "!IS_NAN( nudgeDirection[0] ) && !IS_NAN( nudgeDirection[1] ) && !IS_NAN( nudgeDirection[2] )") )
      __debugbreak();
    if ( ((LODWORD(pointOnNavmesh->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(pointOnNavmesh->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(pointOnNavmesh->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 502, ASSERT_TYPE_ASSERT, "(!IS_NAN( navmeshPos[0] ) && !IS_NAN( navmeshPos[1] ) && !IS_NAN( navmeshPos[2] ))", "%s\n\tAIPhys_NudgeOriginAlongEdge: navmeshPos is NAN.", "!IS_NAN( navmeshPos[0] ) && !IS_NAN( navmeshPos[1] ) && !IS_NAN( navmeshPos[2] )") )
      __debugbreak();
    endPos.v[0] = (float)(1.5 * v48->vPathDir.v[0]) + pointOnNavmesh->v[0];
    endPos.v[1] = (float)(1.5 * v48->vPathDir.v[1]) + pointOnNavmesh->v[1];
    endPos.v[2] = (float)(1.5 * v48->vPathDir.v[2]) + pointOnNavmesh->v[2];
    if ( Nav_IsStraightLineReachable(pSpace, pointOnNavmesh, &endPos, (AINavLayer)layer_4, &pPathSpec) )
    {
      *pointOnNavmesh = endPos;
      v50 = I_fclamp((float)(1.5 / v38) + fraction, 0.0, v46);
      fTimeLeft = fTimeLeft - (float)(*(float *)&v50 * fTimeLeft);
LABEL_104:
      v16 = g_pPhys;
      goto LABEL_105;
    }
LABEL_78:
    v35 = end.v[2];
    v32 = end.v[1];
    v29 = end.v[0];
LABEL_79:
    pointOnNavmesh->v[0] = (float)((float)(v29 - pointOnNavmesh->v[0]) * fraction) + pointOnNavmesh->v[0];
    pointOnNavmesh->v[1] = (float)((float)(v32 - pointOnNavmesh->v[1]) * fraction) + pointOnNavmesh->v[1];
    pointOnNavmesh->v[2] = (float)((float)(v35 - pointOnNavmesh->v[2]) * fraction) + pointOnNavmesh->v[2];
    v52 = LODWORD(pOutResults.m_edgeEndPos.v[0]);
    v51 = pOutResults.m_edgeEndPos.v[0] - pOutResults.m_edgeStartPos.v[0];
    v53 = pOutResults.m_edgeEndPos.v[1] - pOutResults.m_edgeStartPos.v[1];
    v54 = pOutResults.m_edgeEndPos.v[2] - pOutResults.m_edgeStartPos.v[2];
    adjusted.v[0] = 0.0;
    adjusted.v[1] = 0.0;
    adjusted.v[2] = 0.0;
    AdjustUp(&adjusted, v46);
    *(float *)&v52 = fsqrt((float)((float)(v51 * v51) + (float)(v53 * v53)) + (float)(v54 * v54));
    _XMM3 = v52;
    __asm
    {
      vcmpless xmm0, xmm3, xmm11
      vblendvps xmm1, xmm3, xmm13, xmm0
    }
    v58 = v51 * (float)(v46 / *(float *)&_XMM1);
    v1.v[0] = v58;
    v59 = (float)(v46 / *(float *)&_XMM1) * v53;
    v1.v[1] = v59;
    v60 = (float)(v46 / *(float *)&_XMM1) * v54;
    v1.v[2] = v60;
    v61 = adjusted.v[1];
    v62 = adjusted.v[0];
    v63 = adjusted.v[2];
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v59 * adjusted.v[1]) + (float)(v58 * adjusted.v[0])) + (float)(v60 * adjusted.v[2])) & _xmm) > 0.99900001 )
    {
      v62 = pOutResults.m_areaNormal.v[0];
      adjusted = pOutResults.m_areaNormal;
      v61 = pOutResults.m_areaNormal.v[1];
      v63 = pOutResults.m_areaNormal.v[2];
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v59 * v61) + (float)(v58 * v62)) + (float)(v60 * v63)) & _xmm) >= 0.99900001 )
    {
      v40 = cross.v[1];
      v39 = cross.v[0];
      v41 = cross.v[2];
    }
    else
    {
      Vec3Cross(&adjusted, &v1, &cross);
      v64 = LODWORD(cross.v[1]);
      *(float *)&v64 = fsqrt((float)((float)(*(float *)&v64 * *(float *)&v64) + (float)(cross.v[0] * cross.v[0])) + (float)(cross.v[2] * cross.v[2]));
      _XMM3 = v64;
      __asm
      {
        vcmpless xmm0, xmm3, xmm11
        vblendvps xmm1, xmm3, xmm13, xmm0
      }
      cross.v[0] = cross.v[0] * (float)(v46 / *(float *)&_XMM1);
      v39 = cross.v[0];
      cross.v[1] = cross.v[1] * (float)(v46 / *(float *)&_XMM1);
      v40 = cross.v[1];
      cross.v[2] = cross.v[2] * (float)(v46 / *(float *)&_XMM1);
      v41 = cross.v[2];
      v68 = (float)(cross.v[0] * 0.050000001) + pointOnNavmesh->v[0];
      pointOnNavmesh->v[0] = v68;
      v69 = (float)(v40 * 0.050000001) + pointOnNavmesh->v[1];
      pointOnNavmesh->v[1] = v69;
      pointOnNavmesh->v[2] = (float)(v41 * 0.050000001) + pointOnNavmesh->v[2];
      if ( ((LODWORD(v68) & 0x7F800000) == 2139095040 || (LODWORD(v69) & 0x7F800000) == 2139095040 || (LODWORD(outClosestPos.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 918, ASSERT_TYPE_ASSERT, "(!IS_NAN( pointOnNavmesh[0] ) && !IS_NAN( pointOnNavmesh[1] ) && !IS_NAN( closestVerticalPos[2] ))", "%s\n\tActor_Physics: pointOnNavmesh is NAN after backing away from edge.", "!IS_NAN( pointOnNavmesh[0] ) && !IS_NAN( pointOnNavmesh[1] ) && !IS_NAN( closestVerticalPos[2] )") )
        __debugbreak();
    }
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_ai_showNavPhysics, "ai_showNavPhysics") )
    {
      start.v[0] = pOutResults.m_edgeStartPos.v[0];
      start.v[1] = pOutResults.m_edgeStartPos.v[1];
      start.v[2] = v46 + pOutResults.m_edgeStartPos.v[2];
      v93.v[0] = pOutResults.m_edgeEndPos.v[0];
      v93.v[1] = pOutResults.m_edgeEndPos.v[1];
      v93.v[2] = v46 + pOutResults.m_edgeEndPos.v[2];
      G_DebugLineWithDuration(&start, &v93, &colorBlue, 0, 1);
      start.v[0] = (float)((float)(v93.v[0] - start.v[0]) * 0.5) + start.v[0];
      start.v[1] = (float)((float)(v93.v[1] - start.v[1]) * 0.5) + start.v[1];
      start.v[2] = (float)((float)(v93.v[2] - start.v[2]) * 0.5) + start.v[2];
      v93.v[0] = (float)(v39 * 16.0) + start.v[0];
      v93.v[1] = (float)(v40 * 16.0) + start.v[1];
      v93.v[2] = (float)(v41 * 16.0) + start.v[2];
      G_DebugLineWithDuration(&start, &v93, &colorCyan, 0, 1);
    }
LABEL_90:
    fTimeLeft = fTimeLeft - (float)(fraction * fTimeLeft);
    v16 = g_pPhys;
    g_pPhys->bDeflected = 1;
    if ( (int)v9 >= 5 )
    {
      *(_QWORD *)v16->vVelocity.v = 0i64;
      v16->vVelocity.v[2] = 0.0;
      DropPointToGroundPlane(pointOnNavmesh, &v16->vOrigin, &v16->vOrigin);
      goto LABEL_122;
    }
    v70 = 0;
    v71 = 0i64;
    if ( v19 > 0 )
    {
      v72 = &planes->v[2];
      while ( (float)((float)((float)(v39 * *(v72 - 2)) + (float)(v40 * *(v72 - 1))) + (float)(v41 * *v72)) <= 0.99000001 )
      {
        ++v70;
        ++v71;
        v72 += 3;
        if ( v71 >= v19 )
          goto LABEL_102;
      }
      if ( fraction == 0.0 && v16->iHitEntnum == 2047 && (v39 != 0.0 || v40 != 0.0) )
      {
        v16->vHitOrigin = *pointOnNavmesh;
        v16->vHitNormal.v[0] = v39;
        v16->vHitNormal.v[1] = v40;
        v16->vHitNormal.v[2] = v41;
        v16->bStuck = 0;
      }
      v16->vVelocity.v[0] = v39 + v16->vVelocity.v[0];
      v16->vVelocity.v[1] = v40 + v16->vVelocity.v[1];
      v16->vVelocity.v[2] = v41 + v16->vVelocity.v[2];
    }
LABEL_102:
    if ( v70 >= (int)v9 )
    {
      *(v83 - 2) = v39;
      *(v83 - 1) = v40;
      *v83 = v41;
      isWalkable[v19] = 0;
      LODWORD(v9) = v9 + 1;
      ++v19;
      v83 += 3;
      if ( !AIPhys_ClipVelocityToAllPlanes(v9, planes, isWalkable, vEndVelocity, &vEndClipVelocity) )
      {
        DropPointToGroundPlane(pointOnNavmesh, &g_pPhys->vOrigin, &g_pPhys->vOrigin);
        goto LABEL_122;
      }
      goto LABEL_104;
    }
LABEL_105:
    if ( ++v18 >= 4 )
      goto LABEL_108;
    p_hSpace = &pSpace->hSpace;
  }
  pointOnNavmesh->v[0] = v30;
  pointOnNavmesh->v[1] = v33;
  pointOnNavmesh->v[2] = v36;
  if ( (LODWORD(v30) & 0x7F800000) == 2139095040 || (LODWORD(v33) & 0x7F800000) == 2139095040 || (LODWORD(v36) & 0x7F800000) == 2139095040 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 821, ASSERT_TYPE_ASSERT, "(!IS_NAN( pointOnNavmesh[0] ) && !IS_NAN( pointOnNavmesh[1] ) && !IS_NAN( pointOnNavmesh[2] ))", "%s\n\tActor_Physics: traceEndPos of AIPhys_Trace is invalid", "!IS_NAN( pointOnNavmesh[0] ) && !IS_NAN( pointOnNavmesh[1] ) && !IS_NAN( pointOnNavmesh[2] )") )
      __debugbreak();
    fraction = results.fraction;
  }
  v39 = results.normal.v[0];
  cross = results.normal;
  v40 = results.normal.v[1];
  v41 = results.normal.v[2];
  Trace_GetEntityHitId(&results);
  if ( !results.startsolid )
  {
    v42 = g_pPhys;
    g_pPhys->bDeflected = 1;
    if ( !results.walkable && v42->iHitEntnum == 2047 && (results.normal.v[0] != 0.0 || results.normal.v[1] != 0.0) )
    {
      EntityHitId = Trace_GetEntityHitId(&results);
      v44 = g_pPhys;
      g_pPhys->iHitEntnum = EntityHitId;
      v44->vHitOrigin = *pointOnNavmesh;
      v44->vHitNormal = results.normal;
      v44->bStuck = 0;
    }
    v45 = Trace_GetEntityHitId(&results);
    if ( v45 != 2047 )
      AIPhys_AddTouchEnt(v45);
    goto LABEL_90;
  }
  v73 = g_pPhys;
  g_pPhys->vVelocity.v[2] = 0.0;
  if ( !v18 && g_apl.groundTrace.startsolid )
  {
    v10 = 2;
    goto LABEL_121;
  }
  DropPointToGroundPlane(pointOnNavmesh, &v73->vOrigin, &v73->vOrigin);
  if ( g_pPhys->iHitEntnum == 2047 )
  {
    v74 = Trace_GetEntityHitId(&results);
    v75 = g_pPhys;
    g_pPhys->iHitEntnum = v74;
    v75->vHitOrigin = v75->vOrigin;
    v75->bStuck = 1;
  }
LABEL_122:
  v10 = v20;
LABEL_123:
  bfx::AreaHandle::~AreaHandle(&pOutArea);
  bfx::AreaHandle::~AreaHandle(&pOutResults.m_hEndArea);
  return v10;
}

/*
==============
AIPhys_ClipVelocity
==============
*/
void AIPhys_ClipVelocity(const vec3_t *in, const vec3_t *normal, bool isWalkable, vec3_t *out, float overbounce)
{
  const vec3_t *v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  int v10; 
  signed __int64 v11; 
  signed __int64 v12; 
  bool v13; 
  float v14; 
  float v15; 
  __int64 v16; 
  __int64 v17; 

  v5 = in;
  if ( isWalkable && (v6 = in->v[1], v7 = in->v[0], (float)((float)(v7 * v7) + (float)(v6 * v6)) >= (float)(in->v[2] * in->v[2])) )
  {
    out->v[2] = COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 * normal->v[0]) ^ _xmm) - (float)(v6 * normal->v[1]);
    out->v[0] = normal->v[2] * in->v[0];
    out->v[1] = normal->v[2] * in->v[1];
  }
  else
  {
    v8 = (float)((float)(in->v[1] * normal->v[1]) + (float)(in->v[0] * normal->v[0])) + (float)(in->v[2] * normal->v[2]);
    if ( v8 >= 0.0 )
      v9 = 1.0 / overbounce;
    else
      v9 = overbounce;
    v10 = 0;
    v11 = (char *)normal - (char *)in;
    v12 = (char *)out - (char *)in;
    v13 = 1;
    do
    {
      if ( !v13 )
      {
        LODWORD(v17) = 3;
        LODWORD(v16) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      v14 = (float)(v9 * v8) * *(float *)((char *)v5->v + v11);
      if ( (unsigned int)v10 >= 3 )
      {
        LODWORD(v17) = 3;
        LODWORD(v16) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      v15 = v5->v[0] - v14;
      if ( (unsigned int)v10 >= 3 )
      {
        LODWORD(v17) = 3;
        LODWORD(v16) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      *(float *)((char *)v5->v + v12) = v15;
      v5 = (const vec3_t *)((char *)v5 + 4);
      v13 = (unsigned int)++v10 < 3;
    }
    while ( v10 < 3 );
  }
}

/*
==============
AIPhys_ClipVelocityToAllPlanes
==============
*/
char AIPhys_ClipVelocityToAllPlanes(const int iNumPlanes, const vec3_t *planes, const bool *walkable, vec3_t *vEndVelocity, vec3_t *vEndClipVelocity)
{
  vec3_t *v5; 
  __int64 v6; 
  int v9; 
  float *v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v15; 
  float v18; 
  float v19; 
  float v20; 
  int v21; 
  __int64 v22; 
  const vec3_t *v23; 
  int v24; 
  float *v25; 
  char *v26; 
  const vec3_t *v27; 
  const vec3_t *v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  __int128 v33; 
  float v34; 
  float v35; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  __int128 v46; 
  float v47; 
  float v48; 
  __int64 v49; 
  float v50; 
  float v54; 
  float v55; 
  float v56; 
  float *v57; 
  actor_physics_t *v58; 
  float v59; 
  float v60; 
  float v61; 
  actor_physics_t *v62; 
  float *v66; 
  vec3_t out; 
  char v68[16]; 

  v5 = vEndVelocity;
  v6 = iNumPlanes;
  if ( iNumPlanes > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 409, ASSERT_TYPE_ASSERT, "(iNumPlanes <= 5)", (const char *)&queryFormat, "iNumPlanes <= MAX_CLIP_PLANES") )
    __debugbreak();
  v9 = 0;
  if ( (int)v6 <= 0 )
    return 1;
  v10 = &planes->v[2];
  v11 = v6;
  v66 = &planes->v[2];
  v12 = 0i64;
  while ( (float)((float)((float)(g_pPhys->vVelocity.v[1] * *(v10 - 1)) + (float)(g_pPhys->vVelocity.v[0] * *(v10 - 2))) + (float)(g_pPhys->vVelocity.v[2] * *v10)) >= 0.1 )
  {
    ++v9;
    ++v12;
    v10 += 3;
    if ( v12 >= v6 )
      return 1;
  }
  _XMM1 = LODWORD(g_apl.fImpactSpeed);
  v15 = v9;
  __asm
  {
    vcmpltss xmm0, xmm1, xmm2
    vblendvps xmm0, xmm1, xmm2, xmm0
  }
  g_apl.fImpactSpeed = *(float *)&_XMM0;
  AIPhys_ClipVelocity(&g_pPhys->vVelocity, &planes[v15], walkable[v15], &out, 1.001);
  AIPhys_ClipVelocity(v5, &planes[v15], walkable[v15], vEndClipVelocity, 1.001);
  v18 = out.v[2];
  v19 = out.v[1];
  v20 = out.v[0];
  v21 = 0;
  v22 = 0i64;
  v23 = planes;
  v24 = v6;
  v25 = &planes->v[1];
  while ( v22 == v12 )
  {
LABEL_34:
    ++v21;
    ++v22;
    v25 += 3;
    if ( v21 >= v24 )
    {
      v58 = g_pPhys;
      v59 = v20 - g_pPhys->vVelocity.v[0];
      v60 = v19 - g_pPhys->vVelocity.v[1];
      v61 = v18 - g_pPhys->vVelocity.v[2];
      g_pPhys->vHitOrigin = g_pPhys->vOrigin;
      v58->vHitNormal.v[0] = v59;
      v58->vHitNormal.v[1] = v60;
      v58->vHitNormal.v[2] = v61;
      v58->bStuck = 0;
      v58->vVelocity.v[0] = v20;
      v58->vVelocity.v[1] = v19;
      v58->vVelocity.v[2] = v18;
      *v5 = *vEndClipVelocity;
      return 1;
    }
  }
  v26 = (char *)(v25 - 1);
  if ( (float)((float)((float)(v20 * *(v25 - 1)) + (float)(v19 * *v25)) + (float)(v18 * v25[1])) >= 0.1 )
    goto LABEL_33;
  v27 = &v23[v21];
  AIPhys_ClipVelocity(&out, v27, walkable[v22], &out, 1.001);
  AIPhys_ClipVelocity(vEndClipVelocity, v27, walkable[v22], vEndClipVelocity, 1.001);
  v23 = planes;
  v19 = out.v[1];
  v20 = out.v[0];
  v18 = out.v[2];
  v28 = &planes[v12];
  if ( (float)((float)((float)(out.v[1] * v28->v[1]) + (float)(out.v[0] * v28->v[0])) + (float)(out.v[2] * v28->v[2])) >= 0.0 )
  {
    v24 = v11;
LABEL_33:
    v5 = vEndVelocity;
    goto LABEL_34;
  }
  if ( v28 == (const vec3_t *)v68 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  if ( v26 == v68 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
    __debugbreak();
  v29 = v25[1];
  v30 = v28->v[2];
  v31 = v28->v[1];
  v32 = (float)(v31 * v29) - (float)(*v25 * v30);
  v33 = LODWORD(v30);
  v34 = (float)(v30 * *(float *)v26) - (float)(v29 * v28->v[0]);
  v35 = (float)(*v25 * v28->v[0]) - (float)(v31 * *(float *)v26);
  *(float *)&v33 = fsqrt((float)((float)(v34 * v34) + (float)(v32 * v32)) + (float)(v35 * v35));
  _XMM3 = v33;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm14, xmm0
  }
  v39 = 1.0 / *(float *)&_XMM0;
  v40 = v32 * (float)(1.0 / *(float *)&_XMM0);
  v41 = v34 * (float)(1.0 / *(float *)&_XMM0);
  *(float *)&_XMM0 = (float)((float)(v41 * g_pPhys->vVelocity.v[1]) + (float)(v40 * g_pPhys->vVelocity.v[0])) + (float)((float)(v35 * (float)(1.0 / *(float *)&_XMM0)) * g_pPhys->vVelocity.v[2]);
  v20 = v40 * *(float *)&_XMM0;
  v19 = v41 * *(float *)&_XMM0;
  v18 = (float)(v35 * v39) * *(float *)&_XMM0;
  out.v[0] = v40 * *(float *)&_XMM0;
  out.v[1] = v41 * *(float *)&_XMM0;
  out.v[2] = v18;
  if ( v28 == (const vec3_t *)v68 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  if ( v26 == v68 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
    __debugbreak();
  v42 = v25[1];
  v43 = v28->v[2];
  v44 = v28->v[1];
  v45 = (float)(v42 * v44) - (float)(*v25 * v43);
  v46 = LODWORD(v43);
  v47 = (float)(v43 * *(float *)v26) - (float)(v42 * v28->v[0]);
  v48 = v44 * *(float *)v26;
  v5 = vEndVelocity;
  v49 = 0i64;
  v50 = (float)(*v25 * v28->v[0]) - v48;
  *(float *)&v46 = fsqrt((float)((float)(v47 * v47) + (float)(v45 * v45)) + (float)(v50 * v50));
  _XMM3 = v46;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm14, xmm0
  }
  v54 = v45 * (float)(1.0 / *(float *)&_XMM0);
  v55 = v50 * (float)(1.0 / *(float *)&_XMM0);
  v56 = v47 * (float)(1.0 / *(float *)&_XMM0);
  *(float *)&v46 = (float)((float)(v56 * vEndVelocity->v[1]) + (float)(v54 * vEndVelocity->v[0])) + (float)(v55 * vEndVelocity->v[2]);
  vEndClipVelocity->v[0] = *(float *)&v46 * v54;
  vEndClipVelocity->v[2] = v55 * *(float *)&v46;
  vEndClipVelocity->v[1] = v56 * *(float *)&v46;
  if ( v11 <= 0 )
  {
LABEL_31:
    v23 = planes;
    v24 = v11;
    goto LABEL_34;
  }
  v57 = v66;
  while ( v49 == v12 || v49 == v22 || (float)((float)((float)(v20 * *(v57 - 2)) + (float)(v19 * *(v57 - 1))) + (float)(v18 * *v57)) >= 0.1 )
  {
    ++v49;
    v57 += 3;
    if ( v49 >= v11 )
      goto LABEL_31;
  }
  v62 = g_pPhys;
  *(_QWORD *)g_pPhys->vVelocity.v = 0i64;
  v62->vVelocity.v[2] = 0.0;
  return 0;
}

/*
==============
AIPhys_DetermineStairsState
==============
*/
actor_physics_t *AIPhys_DetermineStairsState()
{
  actor_physics_t *result; 
  AIScriptedInterface *m_pAI; 
  bool v2; 
  __int64 v3; 
  bool v4; 
  actor_physics_t *v5; 
  AIWrapper v6; 

  result = g_pPhys;
  if ( !g_pPhys->bSpace )
  {
    AIWrapper::AIWrapper(&v6, &g_entities[g_pPhys->iEntNum]);
    m_pAI = v6.m_pAI;
    result = g_pPhys;
    if ( !v6.m_pAI )
      goto LABEL_10;
    if ( g_pPhys->bAllSlopesAreStairs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2584, ASSERT_TYPE_ASSERT, "( !g_pPhys->bAllSlopesAreStairs )", "Unimplemented feature since it's probably obsolete.") )
      __debugbreak();
    v2 = !Path_TraceHitStairs(&g_apl.groundTrace);
    result = g_pPhys;
    if ( v2 )
    {
LABEL_10:
      result->stairsState = AI_STAIRS_NONE;
    }
    else
    {
      v4 = g_pPhys->stairsState != AI_STAIRS_NONE;
      result = (actor_physics_t *)((__int64 (__fastcall *)(AIScriptedInterface *, __int64, bool))m_pAI->GetStairsStateWithinDist)(m_pAI, v3, v4);
      v5 = g_pPhys;
      g_pPhys->stairsState = (int)result;
      if ( !(_DWORD)result )
      {
        result = (actor_physics_t *)((__int64 (__fastcall *)(AIScriptedInterface *, actor_physics_t *, bool))m_pAI->GetStairsStateWithinDist)(m_pAI, v5, v4);
        g_pPhys->stairsState = (int)result;
      }
    }
  }
  return result;
}

/*
==============
AIPhys_DoGroundShapecast
==============
*/
void AIPhys_DoGroundShapecast(trace_t *trace, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int entNum, int contentmask)
{
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  hknpShape *ShapeCapsuleUpAxis; 
  hkMemoryAllocator *v14; 
  hkMemoryAllocator *v15; 
  HavokPhysics_IgnoreBodies v16; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v18; 
  char optionalInplaceBuffer[432]; 

  v18 = -2i64;
  ClosestResult = PhysicsQuery_GetClosestResult(PHYSICS_WORLD_ID_FIRST);
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  HavokPhysics_CollisionQueryResult::Reset(g_physicsQueryStartResult, 1);
  ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis(PHYSICS_WORLD_ID_FIRST, &bounds->midPoint, bounds->halfSize.v[2] - bounds->halfSize.v[0], bounds->halfSize.v[0], optionalInplaceBuffer, 432, Temporary);
  extendedData.startTolerance = 0.0;
  _XMM0 = LODWORD(FLOAT_0_016000001);
  extendedData.accuracy = FLOAT_0_016000001;
  extendedData.simplifyStart = 0;
  extendedData.collisionBuffer = 0.0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&extendedData.nonBrushShape = _XMM0;
  extendedData.phaseSelection = All;
  extendedData.permitOutwardTrace = 0;
  extendedData.contents = contentmask;
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v16, entNum != 2047, 0);
  if ( entNum != 2047 )
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v16, 0, entNum, 1, 1, 0, 1, 1);
  extendedData.ignoreBodies = &v16;
  Physics_Shapecast(PHYSICS_WORLD_ID_FIRST, ShapeCapsuleUpAxis, start, end, &quat_identity, &extendedData, ClosestResult, g_physicsQueryStartResult);
  Physics_ConvertShapeQueryResultToLegacyTrace(ClosestResult, g_physicsQueryStartResult, trace);
  v14 = hkMemHeapAllocator();
  v16.m_ignoreBodies.m_size = 0;
  if ( v16.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v14, v16.m_ignoreBodies.m_data, 4, v16.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v16.m_ignoreBodies.m_data = NULL;
  v16.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v15 = hkMemHeapAllocator();
  v16.m_ignoreEntities.m_size = 0;
  if ( v16.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v15, v16.m_ignoreEntities.m_data, 8, v16.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
AIPhys_DoGroundTrace
==============
*/
void AIPhys_DoGroundTrace(trace_t *trace, const vec3_t *start, const vec3_t *end)
{
  double v6; 
  int contentmask; 
  const dvar_t *v8; 
  int iEntNum; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  hkMemoryAllocator *v11; 
  hkMemoryAllocator *v12; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v14; 
  __int64 v15; 
  Bounds bounds; 

  v15 = -2i64;
  *(_OWORD *)bounds.midPoint.v = *(_OWORD *)g_pPhys->bounds.midPoint.v;
  v6 = *(double *)&g_pPhys->bounds.halfSize.y;
  bounds.halfSize.v[0] = _mm_shuffle_ps(*(__m128 *)bounds.midPoint.v, *(__m128 *)bounds.midPoint.v, 255).m128_f32[0] + -1.5;
  *(double *)&bounds.halfSize.y = v6;
  bounds.halfSize.v[1] = *(float *)&v6 + -1.5;
  if ( (float)(bounds.halfSize.v[2] - 5.0) > bounds.halfSize.v[0] )
  {
    bounds.midPoint.v[2] = bounds.midPoint.v[2] + -5.0;
    bounds.halfSize.v[2] = bounds.halfSize.v[2] - 5.0;
  }
  contentmask = g_apl.iTraceMask & 0xFDFFBFFF;
  v8 = DCONST_DVARBOOL_ai_useLegacyGroundTrace;
  if ( !DCONST_DVARBOOL_ai_useLegacyGroundTrace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_useLegacyGroundTrace") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "AIPhys_DoGroundTrace");
    AIPhys_Trace(trace, start, end, &bounds, g_pPhys->iEntNum, contentmask);
  }
  else
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "AIPhys_DoGroundTrace");
    AIPhys_DoGroundShapecast(trace, start, end, &bounds, g_pPhys->iEntNum, contentmask);
  }
  Sys_ProfEndNamedEvent();
  if ( !trace->walkable || trace->startsolid )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "AIPhys_DoGroundRaycast");
    iEntNum = g_pPhys->iEntNum;
    ClosestResult = PhysicsQuery_GetClosestResult(PHYSICS_WORLD_ID_FIRST);
    HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
    HavokPhysics_CollisionQueryResult::Reset(g_physicsQueryStartResult, 1);
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    extendedData.collisionBuffer = 0.0;
    extendedData.phaseSelection = All;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&extendedData.collectInsideHits = 256;
    extendedData.contents = contentmask;
    HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v14, iEntNum != 2047, 0);
    if ( iEntNum != 2047 )
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v14, 0, iEntNum, 1, 1, 0, 1, 1);
    extendedData.ignoreBodies = &v14;
    Physics_Raycast(PHYSICS_WORLD_ID_FIRST, start, end, &extendedData, ClosestResult);
    Physics_ConvertRayQueryResultToLegacyTrace(ClosestResult, NULL, NULL, trace);
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
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
AIPhys_DoTrace
==============
*/
void AIPhys_DoTrace(trace_t *trace, const vec3_t *start, const vec3_t *end)
{
  __m128 v6; 
  float v7; 
  Bounds bounds; 

  v6 = (__m128)*(unsigned __int64 *)&g_pPhys->bounds.halfSize.y;
  v7 = _mm_shuffle_ps(v6, v6, 85).m128_f32[0] - 5.0;
  *(_OWORD *)bounds.midPoint.v = *(_OWORD *)g_pPhys->bounds.midPoint.v;
  *(double *)&bounds.halfSize.y = *(double *)v6.m128_u64;
  if ( v7 > _mm_shuffle_ps(*(__m128 *)bounds.midPoint.v, *(__m128 *)bounds.midPoint.v, 255).m128_f32[0] )
  {
    bounds.midPoint.v[2] = bounds.midPoint.v[2] + -5.0;
    bounds.halfSize.v[2] = v7;
  }
  Profile_Begin(268);
  AIPhys_Trace(trace, start, end, &bounds, g_pPhys->iEntNum, g_apl.iTraceMask);
  Profile_EndInternal(NULL);
}

/*
==============
AIPhys_FoliageSounds
==============
*/
void AIPhys_FoliageSounds()
{
  __int128 v0; 
  const dvar_t *v1; 
  const dvar_t *v2; 
  const dvar_t *v3; 
  float value; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  float v7; 
  const dvar_t *v8; 
  float v9; 
  const dvar_t *v10; 
  const dvar_t *v13; 
  int integer; 
  const dvar_t *v15; 
  int v16; 
  const dvar_t *v17; 
  Bounds bounds; 
  trace_t results; 

  v0 = LODWORD(g_pPhys->vVelocity.v[1]);
  *(float *)&v0 = fsqrt((float)(g_pPhys->vVelocity.v[1] * g_pPhys->vVelocity.v[1]) + (float)(g_pPhys->vVelocity.v[0] * g_pPhys->vVelocity.v[0]));
  v1 = DCONST_DVARFLT_bg_foliagesnd_minspeed;
  if ( !DCONST_DVARFLT_bg_foliagesnd_minspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_minspeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( *(float *)&v0 >= v1->current.value )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "AIPhys_FoliageSounds");
    v3 = DCONST_DVARFLT_bg_foliagesnd_maxspeed;
    if ( !DCONST_DVARFLT_bg_foliagesnd_maxspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_maxspeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    value = v3->current.value;
    v5 = DCONST_DVARFLT_bg_foliagesnd_minspeed;
    if ( !DCONST_DVARFLT_bg_foliagesnd_minspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_minspeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( (float)(value - v5->current.value) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2540, ASSERT_TYPE_SANITY, "( Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_foliagesnd_maxspeed, \"bg_foliagesnd_maxspeed\" ) - Dvar_GetFloat_Internal_DebugName( DCONST_DVARFLT_bg_foliagesnd_minspeed, \"bg_foliagesnd_minspeed\" ) > 0 )", (const char *)&queryFormat, "Dconst_GetFloat( bg_foliagesnd_maxspeed ) - Dconst_GetFloat( bg_foliagesnd_minspeed ) > 0") )
      __debugbreak();
    v6 = DCONST_DVARFLT_bg_foliagesnd_minspeed;
    if ( !DCONST_DVARFLT_bg_foliagesnd_minspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_minspeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v7 = v6->current.value;
    v8 = DCONST_DVARFLT_bg_foliagesnd_maxspeed;
    if ( !DCONST_DVARFLT_bg_foliagesnd_maxspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_maxspeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v9 = v8->current.value;
    v10 = DCONST_DVARFLT_bg_foliagesnd_minspeed;
    if ( !DCONST_DVARFLT_bg_foliagesnd_minspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_minspeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    *(float *)&v0 = (float)(*(float *)&v0 - v7) / (float)(v9 - v10->current.value);
    _XMM1 = v0;
    __asm { vminss  xmm6, xmm1, cs:__real@3f800000 }
    v13 = DCONST_DVARINT_bg_foliagesnd_fastinterval;
    if ( !DCONST_DVARINT_bg_foliagesnd_fastinterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_fastinterval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    integer = v13->current.integer;
    v15 = DCONST_DVARINT_bg_foliagesnd_slowinterval;
    if ( !DCONST_DVARINT_bg_foliagesnd_slowinterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_slowinterval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v16 = v15->current.integer;
    v17 = DCONST_DVARINT_bg_foliagesnd_slowinterval;
    if ( !DCONST_DVARINT_bg_foliagesnd_slowinterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_slowinterval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( g_pPhys->foliageSoundTime + (int)(float)((float)((float)(integer - v16) * *(float *)&_XMM6) + (float)v17->current.integer) < level.time )
    {
      bounds.midPoint.v[0] = 0.75 * g_pPhys->bounds.midPoint.v[0];
      bounds.midPoint.v[1] = 0.75 * g_pPhys->bounds.midPoint.v[1];
      bounds.midPoint.v[2] = 0.75 * g_pPhys->bounds.midPoint.v[2];
      bounds.halfSize.v[0] = 0.75 * g_pPhys->bounds.halfSize.v[0];
      bounds.halfSize.v[1] = 0.75 * g_pPhys->bounds.halfSize.v[1];
      bounds.halfSize.v[2] = 0.75 * g_pPhys->bounds.halfSize.v[2];
      bounds.midPoint.v[2] = (float)((float)(g_pPhys->bounds.halfSize.v[2] + g_pPhys->bounds.midPoint.v[2]) * 0.075000003) + bounds.midPoint.v[2];
      bounds.halfSize.v[2] = (float)((float)(g_pPhys->bounds.halfSize.v[2] + g_pPhys->bounds.midPoint.v[2]) * 0.075000003) + bounds.halfSize.v[2];
      G_Main_TraceCapsule(&results, &g_pPhys->vOrigin, &g_pPhys->vOrigin, &bounds, g_pPhys->iEntNum, 2);
      if ( results.startsolid )
      {
        G_Utils_AddEvent(&g_entities[g_pPhys->iEntNum], 1u, 0);
        g_pPhys->foliageSoundTime = level.time;
      }
    }
    Sys_ProfEndNamedEvent();
  }
  else
  {
    v2 = DCONST_DVARINT_bg_foliagesnd_resetinterval;
    if ( !DCONST_DVARINT_bg_foliagesnd_resetinterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_resetinterval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( g_pPhys->foliageSoundTime + v2->current.integer < level.time )
      g_pPhys->foliageSoundTime = 0;
  }
}

/*
==============
AIPhys_Footsteps
==============
*/
void AIPhys_Footsteps()
{
  actor_physics_t *v0; 
  int iFootstepTimer; 
  aiphys_t ePhysicsType; 
  actor_physics_t *v3; 
  int v4; 
  __int64 iEntNum; 
  gentity_s *v6; 
  bool v7; 
  const bitarray<224> *AllCombatTeamFlags; 
  unsigned int v9; 
  AIWrapper v10; 
  bitarray<224> result; 

  v0 = g_pPhys;
  iFootstepTimer = g_pPhys->iFootstepTimer;
  g_pPhys->iFootstepTimer = 0;
  if ( v0->groundEntNum != 2047 )
  {
    ePhysicsType = v0->ePhysicsType;
    if ( (unsigned int)(ePhysicsType - 1) <= 1 || (unsigned int)(ePhysicsType - 6) <= 1 )
    {
      Sys_ProfBeginNamedEvent(0xFF808080, "AIPhys_Footsteps");
      v3 = g_pPhys;
      v4 = iFootstepTimer + g_pPhys->iMsec;
      g_pPhys->iFootstepTimer = v4;
      if ( v4 >= 500 )
      {
        iEntNum = v3->iEntNum;
        if ( (unsigned int)iEntNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", iEntNum, 2048) )
          __debugbreak();
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[iEntNum].r.isInUse != g_entityIsInUse[iEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[iEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2494, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( g_pPhys->iEntNum ))", (const char *)&queryFormat, "G_IsEntityInUse( g_pPhys->iEntNum )") )
          __debugbreak();
        v6 = &level.gentities[g_pPhys->iEntNum];
        AIWrapper::AIWrapper(&v10, v6);
        if ( !v10.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2498, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
          __debugbreak();
        if ( !v6->sentient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2499, ASSERT_TYPE_ASSERT, "(ent->sentient)", (const char *)&queryFormat, "ent->sentient") )
          __debugbreak();
        if ( level.teammode == TEAMMODE_FFA )
        {
          v7 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
            AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
          else
            AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
          *(_OWORD *)result.array = *(_OWORD *)AllCombatTeamFlags->array;
          *(_QWORD *)&result.array[4] = *(_QWORD *)&AllCombatTeamFlags->array[4];
          v9 = AllCombatTeamFlags->array[6] & 0xFFEFFFFF;
          if ( v7 )
            result.array[0] &= ~0x8000000u;
          result.array[6] = v9 & 0xFF9FFFFF;
        }
        else
        {
          Com_Teams_GetEnemyTeamFlags(&result, v6->sentient->eTeam);
        }
        Actor_BroadcastPointEvent(v6, AI_EV_FOOTSTEP, &result, &g_pPhys->vOrigin);
        g_pPhys->iFootstepTimer %= 500;
      }
      Sys_ProfEndNamedEvent();
    }
  }
}

/*
==============
AIPhys_GetGroundEntDeltas
==============
*/
bool AIPhys_GetGroundEntDeltas(const actor_physics_t *pPhys, vec3_t *dOrigin, vec3_t *dAngles)
{
  unsigned __int16 groundEntNum; 
  gentity_s *v7; 

  groundEntNum = pPhys->groundEntNum;
  if ( (unsigned __int16)(groundEntNum - 2046) > 1u && G_IsEntityInUse(groundEntNum) )
    v7 = &g_entities[pPhys->groundEntNum];
  else
    v7 = NULL;
  if ( v7 )
  {
    dOrigin->v[0] = v7->r.currentOrigin.v[0] - pPhys->vPrevGroundOrigin.v[0];
    dOrigin->v[1] = v7->r.currentOrigin.v[1] - pPhys->vPrevGroundOrigin.v[1];
    dOrigin->v[2] = v7->r.currentOrigin.v[2] - pPhys->vPrevGroundOrigin.v[2];
    dAngles->v[0] = v7->r.currentAngles.v[0] - pPhys->vPrevGroundAngles.v[0];
    dAngles->v[1] = v7->r.currentAngles.v[1] - pPhys->vPrevGroundAngles.v[1];
    dAngles->v[2] = v7->r.currentAngles.v[2] - pPhys->vPrevGroundAngles.v[2];
    LOBYTE(v7) = 1;
  }
  else
  {
    *(_QWORD *)dOrigin->v = 0i64;
    dOrigin->v[2] = 0.0;
    *(_QWORD *)dAngles->v = 0i64;
    dAngles->v[2] = 0.0;
  }
  return (char)v7;
}

/*
==============
AIPhys_GetGroundTraceInfo
==============
*/
void AIPhys_GetGroundTraceInfo(vec3_t *start, vec3_t *end, int movingGround)
{
  actor_physics_t *v3; 
  unsigned __int16 groundEntNum; 
  actor_physics_t *v7; 
  float v8; 
  float v9; 
  float v10; 
  bool v11; 
  float v12; 
  actor_physics_t *v13; 
  float v14; 

  v3 = g_pPhys;
  *start = g_pPhys->groundTraceOrigin;
  *end = v3->groundTraceOrigin;
  if ( movingGround && (groundEntNum = v3->groundEntNum, (unsigned __int16)(groundEntNum - 2046) > 1u) && G_IsEntityInUse(groundEntNum) && &g_entities[v3->groundEntNum] )
  {
    v7 = g_pPhys;
    start->v[0] = (float)(18.0 * g_pPhys->movingPlatformUp.v[0]) + start->v[0];
    start->v[1] = (float)(18.0 * v7->movingPlatformUp.v[1]) + start->v[1];
    start->v[2] = (float)(18.0 * v7->movingPlatformUp.v[2]) + start->v[2];
    v8 = end->v[1];
    end->v[0] = end->v[0] - (float)(18.0 * v7->movingPlatformUp.v[0]);
    v9 = v8 - (float)(18.0 * v7->movingPlatformUp.v[1]);
    v10 = end->v[2];
    end->v[1] = v9;
    end->v[2] = v10 - (float)(18.0 * v7->movingPlatformUp.v[2]);
  }
  else
  {
    v11 = AIPhys_UseNavmeshCollision();
    v12 = start->v[2];
    if ( v11 )
    {
      start->v[2] = v12 + 18.0;
      end->v[2] = end->v[2] - 18.0;
    }
    else
    {
      v13 = g_pPhys;
      start->v[2] = v12 + 10.0;
      if ( v13->vVelocity.v[2] > 0.0 || v13->groundEntNum == 2047 )
        v14 = end->v[2] - 0.25;
      else
        v14 = end->v[2] - 18.0;
      end->v[2] = v14;
    }
  }
}

/*
==============
AIPhys_GroundTrace
==============
*/
int AIPhys_GroundTrace()
{
  __int128 v0; 
  __int128 v1; 
  int groundEntNum; 
  int IsGroundMoving; 
  const dvar_t *v4; 
  bool v5; 
  bool walkable; 
  unsigned __int16 EntityHitId; 
  actor_physics_t *v12; 
  unsigned __int16 forcedGroundEntNum; 
  float fraction; 
  __m128 v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  bool v20; 
  actor_physics_t *v21; 
  unsigned __int16 v22; 
  actor_physics_t *v23; 
  __int64 contentmask; 
  vec3_t start; 
  vec3_t end; 
  Bounds v28; 
  trace_t trace; 
  _OWORD v30[3]; 

  Profile_Begin(269);
  groundEntNum = g_pPhys->groundEntNum;
  IsGroundMoving = AIPhys_IsGroundMoving();
  AIPhys_GetGroundTraceInfo(&start, &end, IsGroundMoving);
  AIPhys_DoGroundTrace(&trace, &start, &end);
  v4 = DCONST_DVARBOOL_ai_showNavPhysics;
  if ( !DCONST_DVARBOOL_ai_showNavPhysics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavPhysics") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    v28.midPoint.v[0] = (float)((float)(end.v[0] - start.v[0]) * trace.fraction) + start.v[0];
    v28.midPoint.v[1] = (float)((float)(end.v[1] - start.v[1]) * trace.fraction) + start.v[1];
    v28.midPoint.v[2] = (float)((float)(end.v[2] - start.v[2]) * trace.fraction) + start.v[2];
    G_DebugLineWithDuration(&start, &v28.midPoint, &colorLtGreen, 0, 1);
    if ( trace.fraction < 1.0 )
      G_DebugLineWithDuration(&v28.midPoint, &end, &colorRed, 0, 1);
  }
  v5 = Path_TraceHitStairs(&trace);
  walkable = trace.walkable;
  if ( v5 )
    walkable = 1;
  trace.walkable = walkable;
  _XMM2 = *(_OWORD *)&trace.allsolid;
  __asm { vpextrb rax, xmm2, 1 }
  g_apl.groundTrace = trace;
  if ( (_BYTE)_RAX )
  {
    start.v[0] = g_pPhys->vOrigin.v[0];
    *(_QWORD *)&start.y = *(_QWORD *)&g_pPhys->vOrigin.y;
    AIPhys_DoGroundTrace(&trace, &start, &end);
    _XMM2 = *(_OWORD *)&trace.allsolid;
    g_apl.groundTrace = trace;
    __asm { vpextrb rax, xmm2, 1 }
    if ( (_BYTE)_RAX )
    {
      if ( !IsGroundMoving || trace.fraction != 1.0 )
      {
        EntityHitId = Trace_GetEntityHitId(&trace);
        g_pPhys->groundEntNum = EntityHitId;
        if ( !EntityHitId || EntityHitId > 0x7FFu )
        {
          LODWORD(contentmask) = EntityHitId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2344, ASSERT_TYPE_ASSERT, "( ( g_pPhys->groundEntNum >= 1 && g_pPhys->groundEntNum <= ENTITYNUM_NONE ) )", "( g_pPhys->groundEntNum ) = %i", contentmask) )
            __debugbreak();
        }
        *(_QWORD *)&g_apl.bIsWalking = 1i64;
        return Profile_EndInternal(NULL);
      }
LABEL_31:
      AIPhys_ClearGroundState(IsGroundMoving);
      return Profile_EndInternal(NULL);
    }
  }
  v12 = g_pPhys;
  forcedGroundEntNum = g_pPhys->forcedGroundEntNum;
  if ( forcedGroundEntNum != 2047 )
  {
    g_pPhys->groundEntNum = forcedGroundEntNum;
    *(_QWORD *)&g_apl.bIsWalking = 0i64;
    return Profile_EndInternal(NULL);
  }
  fraction = trace.fraction;
  if ( trace.fraction == 1.0 )
  {
    if ( g_pPhys->groundEntNum >= 0x7FEu )
      goto LABEL_32;
    AIPhys_GetGroundTraceInfo(&start, &end, 1);
    v15 = (__m128)*(unsigned __int64 *)&g_pPhys->bounds.halfSize.y;
    v16 = _mm_shuffle_ps(v15, v15, 85).m128_f32[0] - 5.0;
    *(_OWORD *)v28.midPoint.v = *(_OWORD *)g_pPhys->bounds.midPoint.v;
    *(double *)&v28.halfSize.y = *(double *)v15.m128_u64;
    if ( v16 > _mm_shuffle_ps(*(__m128 *)v28.midPoint.v, *(__m128 *)v28.midPoint.v, 255).m128_f32[0] )
    {
      v28.midPoint.v[2] = v28.midPoint.v[2] + -5.0;
      v28.halfSize.v[2] = v16;
    }
    Profile_Begin(268);
    AIPhys_Trace(&trace, &start, &end, &v28, g_pPhys->iEntNum, g_apl.iTraceMask);
    Profile_EndInternal(NULL);
    fraction = trace.fraction;
    v12 = g_pPhys;
    if ( trace.fraction == 1.0 )
      goto LABEL_32;
    g_apl.groundTrace = trace;
  }
  if ( !v12->bSpace )
  {
    if ( v12->stairsState == AI_STAIRS_NONE && v12->vVelocity.v[2] > 0.0 && (float)((float)((float)(trace.normal.v[1] * v12->vVelocity.v[1]) + (float)(trace.normal.v[0] * v12->vVelocity.v[0])) + (float)(trace.normal.v[2] * v12->vVelocity.v[2])) > 10.0 )
    {
      if ( !AIPhys_UseNavmeshCollision() )
        goto LABEL_31;
      fraction = trace.fraction;
      v12 = g_pPhys;
    }
    v30[1] = v0;
    v17 = (float)((float)(end.v[0] - start.v[0]) * fraction) + start.v[0];
    v30[0] = v1;
    v18 = (float)((float)(end.v[1] - start.v[1]) * fraction) + start.v[1];
    v19 = (float)((float)(end.v[2] - start.v[2]) * fraction) + start.v[2];
    if ( v19 >= v12->vOrigin.v[2] && (unsigned int)(v12->ePhysicsType - 6) > 1 && (unsigned __int16)(v12->groundEntNum - 2046) <= 1u )
    {
      if ( !AIPhys_UseNavmeshCollision() )
      {
LABEL_43:
        g_apl.bGroundPlane = 1;
        g_apl.bIsWalking = 1;
        v22 = Trace_GetEntityHitId(&trace);
        v23 = g_pPhys;
        g_pPhys->groundEntNum = v22;
        if ( groundEntNum != v22 )
        {
          AIPhys_HandleMovingPlatformGroundChange();
          v23 = g_pPhys;
        }
        AIPhys_AddTouchEnt(v23->groundEntNum);
        return Profile_EndInternal(NULL);
      }
      v12 = g_pPhys;
    }
    v20 = BGMovingPlatforms::IsMovingPlatform(v12->groundEntNum) == 0;
    v21 = g_pPhys;
    g_pPhys->vOrigin.v[2] = v19;
    if ( !v20 )
    {
      v21->vOrigin.v[0] = v17;
      v21->vOrigin.v[1] = v18;
    }
    goto LABEL_43;
  }
LABEL_32:
  *(_QWORD *)&g_apl.bIsWalking = 0i64;
  if ( !IsGroundMoving || v12->bSpace )
  {
    v12->groundEntNum = 2047;
    *(_QWORD *)v12->vPrevGroundOrigin.v = 0i64;
    *(_QWORD *)&v12->vPrevGroundOrigin.z = 0i64;
    *(_QWORD *)&v12->vPrevGroundAngles.y = 0i64;
  }
  return Profile_EndInternal(NULL);
}

/*
==============
AIPhys_HandleMovingPlatformGroundChange
==============
*/
actor_physics_t *AIPhys_HandleMovingPlatformGroundChange()
{
  bool v0; 
  actor_physics_t *result; 
  __int64 groundEntNum; 
  gentity_s *v3; 
  double FrameDurationInSeconds; 
  actor_physics_t *v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 

  v0 = BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum) == 0;
  result = g_pPhys;
  if ( v0 )
  {
    *(_QWORD *)g_pPhys->vPrevGroundOrigin.v = 0i64;
    *(_QWORD *)&result->vPrevGroundOrigin.z = 0i64;
    *(_QWORD *)&result->vPrevGroundAngles.y = 0i64;
  }
  else
  {
    groundEntNum = g_pPhys->groundEntNum;
    v3 = &g_entities[groundEntNum];
    if ( (unsigned int)groundEntNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", g_pPhys->groundEntNum, 2048) )
      __debugbreak();
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[(int)groundEntNum].r.isInUse != g_entityIsInUse[(int)groundEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[(int)groundEntNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2245, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( g_pPhys->groundEntNum ))", (const char *)&queryFormat, "G_IsEntityInUse( g_pPhys->groundEntNum )") )
      __debugbreak();
    if ( v3->s.eType == ET_VEHICLE )
    {
      FrameDurationInSeconds = G_Level_GetFrameDurationInSeconds();
      if ( !v3->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2251, ASSERT_TYPE_ASSERT, "(parent->vehicle)", (const char *)&queryFormat, "parent->vehicle") )
        __debugbreak();
      result = (actor_physics_t *)v3->vehicle;
      v5 = g_pPhys;
      v6 = result[1].movingPlatformUp.v[0];
      v7 = result[1].vVelocity.v[1];
      v8 = result[1].vVelocity.v[2];
      v9 = result[1].vPrevGroundAngles.v[1];
      v10 = result[1].vPrevGroundAngles.v[2];
      g_pPhys->vPrevGroundOrigin.v[0] = v3->r.currentOrigin.v[0] - (float)(*(float *)&FrameDurationInSeconds * result[1].vVelocity.v[0]);
      v5->vPrevGroundOrigin.v[1] = v3->r.currentOrigin.v[1] - (float)(*(float *)&FrameDurationInSeconds * v7);
      v5->vPrevGroundOrigin.v[2] = v3->r.currentOrigin.v[2] - (float)(*(float *)&FrameDurationInSeconds * v8);
      v5->vPrevGroundAngles.v[0] = v3->r.currentAngles.v[0] - (float)(*(float *)&FrameDurationInSeconds * v9);
      v5->vPrevGroundAngles.v[1] = v3->r.currentAngles.v[1] - (float)(*(float *)&FrameDurationInSeconds * v10);
      v5->vPrevGroundAngles.v[2] = v3->r.currentAngles.v[2] - (float)(*(float *)&FrameDurationInSeconds * v6);
    }
    else
    {
      result = g_pPhys;
      g_pPhys->vPrevGroundOrigin.v[0] = v3->r.currentOrigin.v[0] - v3->moverInfo.m_deltaOrigin.v[0];
      result->vPrevGroundOrigin.v[1] = v3->r.currentOrigin.v[1] - v3->moverInfo.m_deltaOrigin.v[1];
      result->vPrevGroundOrigin.v[2] = v3->r.currentOrigin.v[2] - v3->moverInfo.m_deltaOrigin.v[2];
      result->vPrevGroundAngles.v[0] = v3->r.currentAngles.v[0] - v3->moverInfo.m_deltaAngles.v[0];
      result->vPrevGroundAngles.v[1] = v3->r.currentAngles.v[1] - v3->moverInfo.m_deltaAngles.v[1];
      result->vPrevGroundAngles.v[2] = v3->r.currentAngles.v[2] - v3->moverInfo.m_deltaAngles.v[2];
    }
  }
  return result;
}

/*
==============
AIPhys_Init
==============
*/
void AIPhys_Init(void)
{
  g_physicsQueryStartResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST);
}

/*
==============
AIPhys_IsGroundMoving
==============
*/
_BOOL8 AIPhys_IsGroundMoving()
{
  actor_physics_t *v0; 
  unsigned __int16 groundEntNum; 
  gentity_s *v2; 
  _BOOL8 result; 
  vec3_t dAngles; 
  vec3_t dOrigin; 

  AIPhys_GetGroundEntDeltas(g_pPhys, &dOrigin, &dAngles);
  result = 1;
  if ( VecNCompareCustomEpsilon(dAngles.v, ZERO_VEC_0.v, 0.001, 3) && VecNCompareCustomEpsilon(dOrigin.v, ZERO_VEC_0.v, 0.001, 3) )
  {
    v0 = g_pPhys;
    groundEntNum = g_pPhys->groundEntNum;
    if ( (unsigned __int16)(groundEntNum - 2046) <= 1u )
      return 0;
    if ( !G_IsEntityInUse(groundEntNum) )
      return 0;
    v2 = &g_entities[v0->groundEntNum];
    if ( !v2 || VecNCompareCustomEpsilon(v2->r.currentAngles.v, ZERO_VEC_0.v, 0.001, 3) )
      return 0;
  }
  return result;
}

/*
==============
AIPhys_Shutdown
==============
*/
void AIPhys_Shutdown(void)
{
  if ( g_physicsQueryStartResult )
  {
    Physics_FreeCollisionQueryResult(g_physicsQueryStartResult);
    g_physicsQueryStartResult = NULL;
  }
}

/*
==============
AIPhys_SlideMove
==============
*/
SlideMoveResult AIPhys_SlideMove(int gravity, int zonly)
{
  AINavigator *Navigator; 

  if ( !AIPhys_UseNavmeshCollision() )
    return AIPhys_SlideMoveWorld(gravity, zonly);
  Navigator = Nav_GetNavigator(&g_entities[g_pPhys->iEntNum]);
  if ( !Navigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1636, ASSERT_TYPE_ASSERT, "( pNav )", (const char *)&queryFormat, "pNav") )
    __debugbreak();
  if ( Navigator->Get2DNavigator(Navigator) )
    return AIPhys_SlideMoveNav2D(gravity, zonly);
  if ( !Navigator->Get3DNavigator(Navigator) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1643, ASSERT_TYPE_ASSERT, "( pNav->Get3DNavigator() )", (const char *)&queryFormat, "pNav->Get3DNavigator()") )
    __debugbreak();
  return AIPhys_SlideMoveNav3D(gravity, zonly);
}

/*
==============
AIPhys_SlideMoveNav2D
==============
*/
__int64 AIPhys_SlideMoveNav2D(int gravity, int zonly)
{
  unsigned int v4; 
  AIScriptedInterface *m_pAI; 
  AINavigator *Navigator; 
  unsigned int Layer; 
  float v8; 
  float v9; 
  float v10; 
  bool v11; 
  float v12; 
  float v13; 
  vec3_t *p_vVelocity; 
  float v15; 
  float v16; 
  float fFrameTime; 
  nav_space_s *m_pSpace; 
  AINavigator2D *v19; 
  const bfx::AreaHandle *hHintArea; 
  actor_physics_t *v21; 
  double v23; 
  bool v24; 
  actor_physics_t *v25; 
  __int128 v26; 
  __int128 v30; 
  __int128 v31; 
  float v32; 
  float v33; 
  float v34; 
  __int128 v35; 
  __int64 v39; 
  bfx::Vector3 *Normal; 
  float m_z; 
  float m_y; 
  __int64 v43; 
  float v44; 
  __int128 v45; 
  float v46; 
  __int128 v47; 
  bool v51; 
  unsigned int v52; 
  unsigned int v53; 
  bfx::AreaHandle hStartArea; 
  __int64 v55; 
  AIWrapper v56; 
  vec3_t pt2; 
  vec3_t vEndVelocity; 
  vec3_t v1; 
  vec3_t outUp; 
  bfx::PathSpec pPathSpec; 
  nav_probe_results_s pOutResults; 
  vec3_t cross[5]; 
  bool isWalkable[8]; 

  v55 = -2i64;
  v4 = 0;
  pPathSpec.m_obstacleMode = BLOCKED_IF_ANY_MATCH;
  *(_QWORD *)&pPathSpec.m_obstacleBlockageFlags = -1i64;
  *(_QWORD *)&pPathSpec.m_areaPenaltyFlags = -1i64;
  pPathSpec.m_usePathSharingPenalty = 0;
  pPathSpec.m_pathSharingPenalty = 0.0;
  pPathSpec.m_maxPathSharingPenalty = 0.0;
  pPathSpec.m_maxSearchDist = 0.0;
  bfx::PenaltyTable::PenaltyTable(&pPathSpec.m_penaltyTable);
  pPathSpec.m_snapMode = SNAP_CLOSEST;
  AIWrapper::AIWrapper(&v56, &g_entities[g_pPhys->iEntNum]);
  m_pAI = v56.m_pAI;
  if ( !v56.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1023, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  Navigator = AICommonInterface::GetNavigator(m_pAI);
  Layer = Nav_GetLayer(Navigator);
  v8 = g_pPhys->vVelocity.v[0];
  vEndVelocity.v[0] = v8;
  v9 = g_pPhys->vVelocity.v[1];
  vEndVelocity.v[1] = v9;
  v10 = g_pPhys->vVelocity.v[2];
  vEndVelocity.v[2] = v10;
  v11 = BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum) != 0;
  if ( gravity )
  {
    if ( v11 )
    {
      LODWORD(v12) = COERCE_UNSIGNED_INT(g_apl.fFrameTime * g_pPhys->fGravity) ^ _xmm;
      if ( BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum) )
      {
        v8 = (float)(v12 * g_pPhys->movingPlatformUp.v[0]) + v8;
        vEndVelocity.v[0] = v8;
        v9 = (float)(v12 * g_pPhys->movingPlatformUp.v[1]) + v9;
        vEndVelocity.v[1] = v9;
        v13 = (float)(v12 * g_pPhys->movingPlatformUp.v[2]) + v10;
      }
      else
      {
        v13 = v10 + v12;
      }
      vEndVelocity.v[2] = v13;
      p_vVelocity = &g_pPhys->vVelocity;
      v15 = v8 + g_pPhys->vVelocity.v[0];
      g_pPhys->vVelocity.v[0] = v15;
      p_vVelocity->v[1] = v9 + p_vVelocity->v[1];
      p_vVelocity->v[2] = v13 + p_vVelocity->v[2];
      p_vVelocity->v[0] = v15 * 0.5;
      p_vVelocity->v[1] = 0.5 * p_vVelocity->v[1];
      v16 = 0.5 * p_vVelocity->v[2];
    }
    else
    {
      vEndVelocity.v[2] = v10 - (float)(g_apl.fFrameTime * g_pPhys->fGravity);
      p_vVelocity = &g_pPhys->vVelocity;
      v16 = (float)(vEndVelocity.v[2] + g_pPhys->vVelocity.v[2]) * 0.5;
    }
    p_vVelocity->v[2] = v16;
    if ( g_apl.bGroundPlane )
    {
      if ( !zonly )
        AIPhys_ClipVelocity(p_vVelocity, &g_apl.groundTrace.normal, g_apl.groundTrace.walkable, p_vVelocity, 1.001);
    }
  }
  fFrameTime = g_apl.fFrameTime;
  if ( !Navigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1056, ASSERT_TYPE_ASSERT, "( pNavigator )", (const char *)&queryFormat, "pNavigator") )
    __debugbreak();
  m_pSpace = Navigator->m_pSpace;
  if ( !m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1058, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  v19 = Navigator->Get2DNavigator(Navigator);
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1061, ASSERT_TYPE_ASSERT, "( pNav2D )", (const char *)&queryFormat, "pNav2D") )
    __debugbreak();
  pPathSpec = *AINavigator2D::GetPathSpec(v19);
  bfx::AreaHandle::AreaHandle(&hStartArea);
  Nav_GetSpaceUp(m_pSpace, &outUp);
  if ( ((LODWORD(g_pPhys->vOrigin.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(g_pPhys->vOrigin.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(g_pPhys->vOrigin.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1070, ASSERT_TYPE_ASSERT, "(!IS_NAN( g_pPhys->vOrigin[0] ) && !IS_NAN( g_pPhys->vOrigin[1] ) && !IS_NAN( g_pPhys->vOrigin[2] ))", "%s\n\tActor_Physics: g_pPhys->vOrigin is NAN.", "!IS_NAN( g_pPhys->vOrigin[0] ) && !IS_NAN( g_pPhys->vOrigin[1] ) && !IS_NAN( g_pPhys->vOrigin[2] )") )
    __debugbreak();
  hHintArea = AINavigator2D::GetCurArea(v19);
  if ( !Nav_GetClosestVerticalPosWithHint(&g_pPhys->vOrigin, &outUp, Layer, &m_pSpace->hSpace, &pPathSpec, &pt2, hHintArea, &hStartArea) )
  {
    v21 = g_pPhys;
    g_pPhys->vOrigin.v[0] = (float)(fFrameTime * g_pPhys->vVelocity.v[0]) + g_pPhys->vOrigin.v[0];
    v21->vOrigin.v[1] = (float)(fFrameTime * v21->vVelocity.v[1]) + v21->vOrigin.v[1];
    v21->vOrigin.v[2] = (float)(fFrameTime * v21->vVelocity.v[2]) + v21->vOrigin.v[2];
    bfx::AreaHandle::~AreaHandle(&hStartArea);
    return 0i64;
  }
  v23 = Nav_Get2DDistanceSqWithUp(&g_pPhys->vOrigin, &pt2, &outUp);
  v24 = *(float *)&v23 < 0.1;
  v25 = g_pPhys;
  if ( *(float *)&v23 >= 0.1 && g_pPhys->navPhysicsState == NAVPHYS_DISTANCECLIP )
  {
    bfx::AreaHandle::AreaHandle(&pOutResults.m_hEndArea);
    if ( Nav_Trace(&pt2, &hStartArea, &g_pPhys->vOrigin, &pPathSpec, &pOutResults) )
    {
      v1.v[0] = pOutResults.m_edgeEndPos.v[0] - pOutResults.m_edgeStartPos.v[0];
      v1.v[1] = pOutResults.m_edgeEndPos.v[1] - pOutResults.m_edgeStartPos.v[1];
      v1.v[2] = pOutResults.m_edgeEndPos.v[2] - pOutResults.m_edgeStartPos.v[2];
      Vec3Cross(&outUp, &v1, cross);
      v26 = LODWORD(cross[0].v[0]);
      *(float *)&v26 = fsqrt((float)((float)(*(float *)&v26 * *(float *)&v26) + (float)(cross[0].v[1] * cross[0].v[1])) + (float)(cross[0].v[2] * cross[0].v[2]));
      _XMM3 = v26;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm1, xmm3, xmm8, xmm0
      }
      v31 = LODWORD(cross[0].v[0]);
      *(float *)&v31 = cross[0].v[0] * (float)(1.0 / *(float *)&_XMM1);
      v30 = v31;
      v32 = cross[0].v[1] * (float)(1.0 / *(float *)&_XMM1);
      v34 = cross[0].v[2] * (float)(1.0 / *(float *)&_XMM1);
      v33 = v34;
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_ai_showNavPhysics, "ai_showNavPhysics") )
      {
        v1.v[0] = (float)(*(float *)&v30 * 16.0) + pt2.v[0];
        v1.v[1] = (float)(v32 * 16.0) + pt2.v[1];
        v1.v[2] = (float)(v34 * 16.0) + pt2.v[2];
        G_DebugLine(&pt2, &v1, &colorYellow, 0);
      }
      isWalkable[0] = 0;
      v35 = v30;
      *(float *)&v35 = fsqrt((float)((float)(*(float *)&v30 * *(float *)&v30) + (float)(v32 * v32)) + (float)(v33 * v33));
      _XMM3 = v35;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm1, xmm3, xmm8, xmm0
      }
      cross[0].v[0] = *(float *)&v30 * (float)(1.0 / *(float *)&_XMM1);
      cross[0].v[1] = (float)(1.0 / *(float *)&_XMM1) * v32;
      cross[0].v[2] = (float)(1.0 / *(float *)&_XMM1) * v33;
      v4 = 1;
    }
    bfx::AreaHandle::~AreaHandle(&pOutResults.m_hEndArea);
    v25 = g_pPhys;
  }
  if ( g_apl.bGroundPlane )
  {
    v39 = v4;
    cross[v39].v[0] = g_apl.groundTrace.normal.v[0];
    cross[v39].v[1] = g_apl.groundTrace.normal.v[1];
    cross[v39].v[2] = g_apl.groundTrace.normal.v[2];
    isWalkable[v4] = 1;
  }
  else
  {
    if ( !v24 )
      goto LABEL_42;
    Normal = bfx::AreaHandle::GetNormal(&hStartArea, (bfx::Vector3 *)&v1);
    m_z = Normal->m_z;
    m_y = Normal->m_y;
    cross[v4].v[0] = Normal->m_x;
    cross[v4].v[1] = m_y;
    cross[v4].v[2] = m_z;
    isWalkable[v4] = 1;
    v25 = g_pPhys;
  }
  ++v4;
LABEL_42:
  v43 = v4;
  v44 = v25->vVelocity.v[1];
  v45 = LODWORD(v25->vVelocity.v[0]);
  v46 = v25->vVelocity.v[2];
  v47 = v45;
  *(float *)&v47 = fsqrt((float)((float)(*(float *)&v45 * *(float *)&v45) + (float)(v44 * v44)) + (float)(v46 * v46));
  _XMM3 = v47;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm8, xmm0
  }
  cross[v43].v[0] = *(float *)&v45 * (float)(1.0 / *(float *)&_XMM1);
  cross[v43].v[1] = v44 * (float)(1.0 / *(float *)&_XMM1);
  cross[v43].v[2] = v46 * (float)(1.0 / *(float *)&_XMM1);
  v51 = v46 > 0.69999999 || v25->stairsState;
  isWalkable[v4] = v51;
  if ( v24 && v25->navPhysicsState )
  {
    v52 = AIPhys_ClipAgainstCharactersAndMesh(gravity, v4 + 1, cross, isWalkable, fFrameTime, &vEndVelocity, &pt2);
  }
  else
  {
    pt2 = v25->vOrigin;
    v52 = AIPhys_ClipAgainstCharacters(gravity, v4 + 1, cross, isWalkable, fFrameTime, &vEndVelocity, &pt2);
  }
  v53 = v52;
  bfx::AreaHandle::~AreaHandle(&hStartArea);
  return v53;
}

/*
==============
AIPhys_SlideMoveNav3D
==============
*/
__int64 AIPhys_SlideMoveNav3D(int gravity, int zonly)
{
  AIScriptedInterface *m_pAI; 
  AINavigator *Navigator; 
  float v6; 
  float v7; 
  float v8; 
  bool v9; 
  float v10; 
  float v11; 
  vec3_t *p_vVelocity; 
  float v13; 
  float v14; 
  __int128 fFrameTime_low; 
  nav_space_s *m_pSpace; 
  __int64 v17; 
  bool v18; 
  actor_physics_t *v19; 
  bool IsPosInside; 
  const dvar_t *v21; 
  const char *v22; 
  navphys_t navPhysicsState; 
  float v24; 
  float v25; 
  __int128 v26; 
  float v27; 
  actor_physics_t *v31; 
  float v33; 
  actor_physics_t *v34; 
  unsigned int v35; 
  unsigned int v36; 
  __int64 v37; 
  float v38; 
  __int128 v39; 
  float v40; 
  __int128 v41; 
  float v44; 
  bool v46; 
  __int64 v47; 
  __int64 v48; 
  int v49; 
  float *v50; 
  bfx::VolumeHandle v51; 
  const vec4_t *v52; 
  bool v53; 
  float fraction; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  unsigned __int16 EntityHitId; 
  __int128 v68; 
  int v69; 
  __int64 v70; 
  float *v71; 
  actor_physics_t *v72; 
  bool enabled; 
  bfx::VolumeHandle pClosestVolume; 
  float v75; 
  __int64 v76; 
  bfx::Path3DSpec pPathSpec; 
  int contentmask; 
  bfx::Vector3 pos; 
  __int64 v80; 
  AIWrapper v81; 
  vec3_t origin; 
  vec3_t end; 
  vec3_t vEndVelocity; 
  vec3_t outClosestPos; 
  vec3_t vEndClipVelocity; 
  nav_probe_results_3D_s pOutResults; 
  trace_t results; 
  vec3_t planes[5]; 
  bool walkable[8]; 

  v80 = -2i64;
  LODWORD(v76) = gravity;
  *(_QWORD *)&pPathSpec.m_volumeUsageFlags = -1i64;
  pPathSpec.m_maxSearchDist = 0.0;
  AIWrapper::AIWrapper(&v81, &g_entities[g_pPhys->iEntNum]);
  m_pAI = v81.m_pAI;
  if ( !v81.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1189, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  Navigator = AICommonInterface::GetNavigator(m_pAI);
  v6 = g_pPhys->vVelocity.v[0];
  vEndVelocity.v[0] = v6;
  v7 = g_pPhys->vVelocity.v[1];
  vEndVelocity.v[1] = v7;
  v8 = g_pPhys->vVelocity.v[2];
  vEndVelocity.v[2] = v8;
  v9 = BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum) != 0;
  if ( gravity )
  {
    if ( v9 )
    {
      LODWORD(v10) = COERCE_UNSIGNED_INT(g_apl.fFrameTime * g_pPhys->fGravity) ^ _xmm;
      if ( BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum) )
      {
        v6 = (float)(v10 * g_pPhys->movingPlatformUp.v[0]) + v6;
        vEndVelocity.v[0] = v6;
        v7 = (float)(v10 * g_pPhys->movingPlatformUp.v[1]) + v7;
        vEndVelocity.v[1] = v7;
        v11 = (float)(v10 * g_pPhys->movingPlatformUp.v[2]) + v8;
      }
      else
      {
        v11 = v8 + v10;
      }
      vEndVelocity.v[2] = v11;
      p_vVelocity = &g_pPhys->vVelocity;
      v13 = v6 + g_pPhys->vVelocity.v[0];
      g_pPhys->vVelocity.v[0] = v13;
      p_vVelocity->v[1] = v7 + p_vVelocity->v[1];
      p_vVelocity->v[2] = v11 + p_vVelocity->v[2];
      p_vVelocity->v[0] = v13 * 0.5;
      p_vVelocity->v[1] = 0.5 * p_vVelocity->v[1];
      v14 = 0.5 * p_vVelocity->v[2];
    }
    else
    {
      vEndVelocity.v[2] = v8 - (float)(g_apl.fFrameTime * g_pPhys->fGravity);
      p_vVelocity = &g_pPhys->vVelocity;
      v14 = (float)(vEndVelocity.v[2] + g_pPhys->vVelocity.v[2]) * 0.5;
    }
    p_vVelocity->v[2] = v14;
    if ( g_apl.bGroundPlane )
    {
      if ( !zonly )
        AIPhys_ClipVelocity(p_vVelocity, &g_apl.groundTrace.normal, g_apl.groundTrace.walkable, p_vVelocity, 1.001);
    }
  }
  fFrameTime_low = LODWORD(g_apl.fFrameTime);
  if ( !Navigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1220, ASSERT_TYPE_ASSERT, "( pNavigator )", (const char *)&queryFormat, "pNavigator") )
    __debugbreak();
  m_pSpace = Navigator->m_pSpace;
  if ( !m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1222, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  v17 = (__int64)Navigator->Get3DNavigator(Navigator);
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1225, ASSERT_TYPE_ASSERT, "( pNav3D )", (const char *)&queryFormat, "pNav3D") )
    __debugbreak();
  pPathSpec = *(bfx::Path3DSpec *)(v17 + 220);
  bfx::VolumeHandle::VolumeHandle(&pClosestVolume);
  v18 = !Nav3D_GetClosestVolume(m_pSpace, &g_pPhys->vOrigin, &pPathSpec, &pClosestVolume);
  v19 = g_pPhys;
  if ( v18 )
    goto LABEL_39;
  pos.m_x = g_pPhys->vOrigin.v[0];
  pos.m_y = g_pPhys->vOrigin.v[1];
  pos.m_z = g_pPhys->vOrigin.v[2];
  IsPosInside = bfx::VolumeHandle::IsPosInside(&pClosestVolume, &pos);
  v21 = DCONST_DVARBOOL_ai_showNavPhysics;
  if ( !DCONST_DVARBOOL_ai_showNavPhysics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showNavPhysics") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  enabled = v21->current.enabled;
  if ( enabled )
  {
    v22 = "distclip";
    if ( g_pPhys->navPhysicsState == NAVPHYS_NOCLIP )
      v22 = "noclip";
    G_Main_AddDebugString(&g_pPhys->vOrigin, &colorLtGreen, 0.30000001, v22);
  }
  if ( IsPosInside )
  {
    v34 = g_pPhys;
    origin = g_pPhys->vOrigin;
    v35 = 0;
    v36 = 0;
    if ( g_apl.bGroundPlane )
    {
      planes[0] = g_apl.groundTrace.normal;
      walkable[0] = 1;
      v36 = 1;
    }
    v37 = v36;
    v38 = g_pPhys->vVelocity.v[1];
    v39 = LODWORD(g_pPhys->vVelocity.v[0]);
    v40 = g_pPhys->vVelocity.v[2];
    v41 = v39;
    *(float *)&v41 = fsqrt((float)((float)(*(float *)&v39 * *(float *)&v39) + (float)(v38 * v38)) + (float)(v40 * v40));
    _XMM3 = v41;
    __asm { vcmpless xmm0, xmm3, cs:__real@80000000 }
    v44 = FLOAT_1_0;
    __asm { vblendvps xmm1, xmm3, xmm7, xmm0 }
    v75 = *(float *)&_XMM1;
    planes[v37].v[0] = (float)(1.0 / *(float *)&_XMM1) * *(float *)&v39;
    planes[v37].v[1] = (float)(1.0 / *(float *)&_XMM1) * v38;
    planes[v37].v[2] = (float)(1.0 / *(float *)&_XMM1) * v40;
    v46 = v40 > 0.69999999 || v34->stairsState;
    walkable[v36] = v46;
    v47 = v36 + 1;
    v48 = (unsigned int)v47;
    contentmask = g_apl.iTraceMask & 0x2004000;
    v49 = 0;
    v50 = &planes[v47].v[2];
    while ( 1 )
    {
      if ( fsqrt((float)((float)(v34->vVelocity.v[0] * v34->vVelocity.v[0]) + (float)(v34->vVelocity.v[1] * v34->vVelocity.v[1])) + (float)(v34->vVelocity.v[2] * v34->vVelocity.v[2])) < 0.0099999998 )
        goto LABEL_41;
      bfx::VolumeHandle::VolumeHandle((bfx::VolumeHandle *)&outClosestPos, &pClosestVolume);
      v18 = !Nav3D_GetClosestReachablePos(v51, &origin, &pPathSpec, &origin);
      v19 = g_pPhys;
      v33 = *(float *)&fFrameTime_low * g_pPhys->vVelocity.v[0];
      if ( v18 )
        goto LABEL_40;
      end.v[0] = (float)(*(float *)&fFrameTime_low * g_pPhys->vVelocity.v[0]) + origin.v[0];
      end.v[1] = (float)(*(float *)&fFrameTime_low * g_pPhys->vVelocity.v[1]) + origin.v[1];
      end.v[2] = (float)(*(float *)&fFrameTime_low * g_pPhys->vVelocity.v[2]) + origin.v[2];
      if ( enabled )
      {
        if ( v49 )
        {
          if ( v49 == 1 )
          {
            v52 = &colorYellowHeat;
          }
          else
          {
            if ( v49 != 2 )
              goto LABEL_60;
            v52 = &colorRedHeat;
          }
        }
        else
        {
          v52 = &colorLtGreen;
        }
        G_DebugLineWithDuration(&origin, &end, v52, 0, 1);
      }
LABEL_60:
      v53 = Nav_Trace3DAllowEdgeHit(m_pSpace, &origin, &end, &pPathSpec, &pOutResults);
      Profile_Begin(262);
      AIPhys_Trace(&results, &origin, &end, &g_pPhys->bounds, g_pPhys->iEntNum, contentmask);
      Profile_EndInternal(NULL);
      v34 = g_pPhys;
      fraction = results.fraction;
      if ( results.fraction == v44 )
      {
        if ( g_pPhys->navPhysicsState == NAVPHYS_NOCLIP )
        {
          origin = end;
          goto LABEL_98;
        }
        if ( !v53 )
        {
          origin = pOutResults.m_EndPos;
LABEL_98:
          if ( (_DWORD)v76 )
            v34->vVelocity = vEndVelocity;
          v34->vOrigin = origin;
          LOBYTE(v35) = v49 != 0;
          bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
          return v35;
        }
      }
      v55 = end.v[0];
      v56 = origin.v[0];
      v57 = (float)((float)(end.v[0] - origin.v[0]) * results.fraction) + origin.v[0];
      v58 = end.v[1];
      v59 = origin.v[1];
      v60 = (float)((float)(end.v[1] - origin.v[1]) * results.fraction) + origin.v[1];
      v61 = origin.v[2];
      v62 = (float)((float)(end.v[2] - origin.v[2]) * results.fraction) + origin.v[2];
      v75 = (float)((float)((float)(origin.v[1] - v60) * (float)(origin.v[1] - v60)) + (float)((float)(origin.v[0] - v57) * (float)(origin.v[0] - v57))) + (float)((float)(origin.v[2] - v62) * (float)(origin.v[2] - v62));
      v63 = fsqrt((float)((float)((float)(origin.v[1] - end.v[1]) * (float)(origin.v[1] - end.v[1])) + (float)((float)(origin.v[0] - end.v[0]) * (float)(origin.v[0] - end.v[0]))) + (float)((float)(origin.v[2] - end.v[2]) * (float)(origin.v[2] - end.v[2])));
      if ( g_pPhys->navPhysicsState && v75 >= (float)(pOutResults.m_DistTraveled * pOutResults.m_DistTraveled) )
      {
        v64 = pOutResults.m_Normal.v[0];
        v65 = pOutResults.m_Normal.v[1];
        v66 = pOutResults.m_Normal.v[2];
        if ( v63 < 0.001 || pOutResults.m_DistTraveled < 0.001 )
        {
          fraction = 0.0;
        }
        else
        {
          LODWORD(fraction) = COERCE_UNSIGNED_INT64(I_fclamp(pOutResults.m_DistTraveled / v63, 0.0, 1.0));
          v61 = origin.v[2];
          v59 = origin.v[1];
          v56 = origin.v[0];
          v34 = g_pPhys;
          v58 = end.v[1];
          v55 = end.v[0];
        }
        origin.v[0] = v56 + (float)((float)(v55 - v56) * fraction);
        origin.v[1] = v59 + (float)((float)(v58 - v59) * fraction);
        origin.v[2] = v61 + (float)((float)(end.v[2] - v61) * fraction);
      }
      else
      {
        origin.v[0] = (float)((float)(end.v[0] - origin.v[0]) * results.fraction) + origin.v[0];
        origin.v[1] = (float)((float)(end.v[1] - origin.v[1]) * results.fraction) + origin.v[1];
        origin.v[2] = (float)((float)(end.v[2] - origin.v[2]) * results.fraction) + origin.v[2];
        v75 = v57;
        if ( (LODWORD(v57) & 0x7F800000) == 2139095040 || (v75 = v60, (LODWORD(v60) & 0x7F800000) == 2139095040) || (v75 = v62, (LODWORD(v62) & 0x7F800000) == 2139095040) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1380, ASSERT_TYPE_ASSERT, "(!IS_NAN( navPos[0] ) && !IS_NAN( navPos[1] ) && !IS_NAN( navPos[2] ))", "%s\n\tPhysics: Trying to fire Shapecast with invalid start", "!IS_NAN( navPos[0] ) && !IS_NAN( navPos[1] ) && !IS_NAN( navPos[2] )") )
            __debugbreak();
          fraction = results.fraction;
        }
        v64 = results.normal.v[0];
        v65 = results.normal.v[1];
        v66 = results.normal.v[2];
        if ( Trace_GetEntityHitId(&results) != 2047 )
        {
          EntityHitId = Trace_GetEntityHitId(&results);
          AIPhys_AddTouchEnt(EntityHitId);
        }
        v34 = g_pPhys;
      }
      v68 = fFrameTime_low;
      *(float *)&v68 = *(float *)&fFrameTime_low - (float)(fraction * *(float *)&fFrameTime_low);
      fFrameTime_low = v68;
      v34->bDeflected = 1;
      if ( (int)v47 >= 5 )
      {
        *(_QWORD *)v34->vVelocity.v = 0i64;
        v34->vVelocity.v[2] = 0.0;
        v34->vOrigin = origin;
        bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
        return 1i64;
      }
      v69 = 0;
      v70 = 0i64;
      if ( v48 > 0 )
      {
        v71 = &planes[0].v[2];
        while ( (float)((float)((float)(v64 * *(v71 - 2)) + (float)(v65 * *(v71 - 1))) + (float)(v66 * *v71)) <= 0.99000001 )
        {
          ++v69;
          ++v70;
          v71 += 3;
          if ( v70 >= v48 )
            goto LABEL_91;
        }
        if ( fraction == 0.0 && v34->iHitEntnum == 2047 && (v64 != 0.0 || v65 != 0.0) )
        {
          v34->vHitOrigin = origin;
          v34->vHitNormal.v[0] = v64;
          v34->vHitNormal.v[1] = v65;
          v34->vHitNormal.v[2] = v66;
          v34->bStuck = 0;
        }
        v34->vVelocity.v[0] = v64 + v34->vVelocity.v[0];
        v34->vVelocity.v[1] = v65 + v34->vVelocity.v[1];
        v34->vVelocity.v[2] = v66 + v34->vVelocity.v[2];
      }
LABEL_91:
      if ( v69 >= (int)v47 )
      {
        *(v50 - 2) = v64;
        *(v50 - 1) = v65;
        *v50 = v66;
        if ( (unsigned __int64)v48 >= 5 )
        {
          j___report_rangecheckfailure(v34);
          JUMPOUT(0x1411D56D8i64);
        }
        walkable[v48] = 0;
        LODWORD(v47) = v47 + 1;
        ++v48;
        v50 += 3;
        if ( !AIPhys_ClipVelocityToAllPlanes(v47, planes, walkable, &vEndVelocity, &vEndClipVelocity) )
        {
          v72 = g_pPhys;
          g_pPhys->vOrigin.v[0] = origin.v[0];
          v72->vOrigin.v[1] = origin.v[1];
          v72->vOrigin.v[2] = origin.v[2];
          bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
          return 1i64;
        }
        v34 = g_pPhys;
      }
      if ( ++v49 >= 4 )
        goto LABEL_98;
      v44 = FLOAT_1_0;
    }
  }
  v19 = g_pPhys;
  navPhysicsState = g_pPhys->navPhysicsState;
  if ( navPhysicsState == NAVPHYS_DISTANCECLIP )
  {
    Nav3D_GetClosestPointOnMesh(m_pSpace, &pPathSpec, &g_pPhys->vOrigin, &outClosestPos);
    v24 = outClosestPos.v[0] - g_pPhys->vOrigin.v[0];
    v26 = LODWORD(outClosestPos.v[1]);
    v25 = outClosestPos.v[1] - g_pPhys->vOrigin.v[1];
    v27 = outClosestPos.v[2] - g_pPhys->vOrigin.v[2];
    walkable[0] = 0;
    *(float *)&v26 = fsqrt((float)((float)(v25 * v25) + (float)(v24 * v24)) + (float)(v27 * v27));
    _XMM3 = v26;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm1, xmm3, xmm2, xmm0
    }
    planes[0].v[0] = v24 * (float)(1.0 / *(float *)&_XMM1);
    planes[0].v[1] = v25 * (float)(1.0 / *(float *)&_XMM1);
    planes[0].v[2] = v27 * (float)(1.0 / *(float *)&_XMM1);
    if ( !AIPhys_ClipVelocityToAllPlanes(1, planes, walkable, &vEndVelocity, &vEndClipVelocity) )
    {
      v31 = g_pPhys;
      g_pPhys->vOrigin.v[0] = (float)(*(float *)&fFrameTime_low * vEndClipVelocity.v[0]) + g_pPhys->vOrigin.v[0];
      v31->vOrigin.v[1] = (float)(*(float *)&fFrameTime_low * vEndClipVelocity.v[1]) + v31->vOrigin.v[1];
      v31->vOrigin.v[2] = (float)(*(float *)&fFrameTime_low * vEndClipVelocity.v[2]) + v31->vOrigin.v[2];
      bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
      return 1i64;
    }
    goto LABEL_38;
  }
  if ( navPhysicsState )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1284, ASSERT_TYPE_ASSERT, "(g_pPhys->navPhysicsState == NAVPHYS_NOCLIP)", (const char *)&queryFormat, "g_pPhys->navPhysicsState == NAVPHYS_NOCLIP") )
      __debugbreak();
LABEL_38:
    v19 = g_pPhys;
  }
LABEL_39:
  v33 = *(float *)&fFrameTime_low * v19->vVelocity.v[0];
LABEL_40:
  v19->vOrigin.v[0] = v33 + v19->vOrigin.v[0];
  v19->vOrigin.v[1] = (float)(*(float *)&fFrameTime_low * v19->vVelocity.v[1]) + v19->vOrigin.v[1];
  v19->vOrigin.v[2] = (float)(*(float *)&fFrameTime_low * v19->vVelocity.v[2]) + v19->vOrigin.v[2];
LABEL_41:
  bfx::VolumeHandle::~VolumeHandle(&pClosestVolume);
  return 0i64;
}

/*
==============
AIPhys_SlideMoveWorld
==============
*/
__int64 AIPhys_SlideMoveWorld(int gravity, int zonly)
{
  actor_physics_t *v2; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  int IsMovingPlatform; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  __int128 fFrameTime_low; 
  bool *p_walkable; 
  int v15; 
  vec3_t *p_planes; 
  float v17; 
  float v18; 
  __int128 v19; 
  __int128 v20; 
  bool v24; 
  __int64 v25; 
  unsigned int v26; 
  int v27; 
  char *Value; 
  int *v29; 
  _QWORD *v30; 
  char *v31; 
  __int64 v32; 
  unsigned __int64 v33; 
  ThreadContext CurrentThreadContext; 
  float fraction; 
  unsigned __int16 v36; 
  actor_physics_t *v37; 
  unsigned __int16 v38; 
  __int128 v39; 
  int v40; 
  __int64 v41; 
  float v42; 
  float v43; 
  float v44; 
  float *v45; 
  float v46; 
  unsigned __int16 v48; 
  actor_physics_t *v49; 
  actor_physics_t *v50; 
  unsigned __int16 EntityHitId; 
  actor_physics_t *v52; 
  __int64 contentmask; 
  __int64 v54; 
  float *v56; 
  vec3_t vEndVelocity; 
  vec3_t end; 
  trace_t results; 
  vec3_t vEndClipVelocity; 
  vec3_t planes; 
  char v62; 
  bool walkable; 
  char v64; 

  v2 = g_pPhys;
  v4 = g_pPhys->vVelocity.v[0];
  v5 = g_pPhys->vVelocity.v[1];
  v6 = g_pPhys->vVelocity.v[2];
  vEndVelocity.v[0] = v4;
  vEndVelocity.v[1] = v5;
  vEndVelocity.v[2] = v6;
  if ( gravity )
  {
    if ( BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum) )
    {
      LODWORD(v7) = COERCE_UNSIGNED_INT(g_apl.fFrameTime * g_pPhys->fGravity) ^ _xmm;
      IsMovingPlatform = BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum);
      v2 = g_pPhys;
      if ( IsMovingPlatform )
      {
        v4 = (float)(v7 * g_pPhys->movingPlatformUp.v[0]) + v4;
        v5 = (float)(v7 * g_pPhys->movingPlatformUp.v[1]) + v5;
        v9 = (float)(v7 * g_pPhys->movingPlatformUp.v[2]) + v6;
        vEndVelocity.v[0] = v4;
        vEndVelocity.v[1] = v5;
      }
      else
      {
        v9 = v6 + v7;
      }
      v10 = v4 + g_pPhys->vVelocity.v[0];
      g_pPhys->vVelocity.v[0] = v10;
      v2->vVelocity.v[1] = v5 + v2->vVelocity.v[1];
      vEndVelocity.v[2] = v9;
      v2->vVelocity.v[2] = v9 + v2->vVelocity.v[2];
      v2->vVelocity.v[0] = v10 * 0.5;
      v2->vVelocity.v[1] = 0.5 * v2->vVelocity.v[1];
      v11 = 0.5 * v2->vVelocity.v[2];
    }
    else
    {
      v2 = g_pPhys;
      v12 = (float)(v6 - (float)(g_apl.fFrameTime * g_pPhys->fGravity)) + g_pPhys->vVelocity.v[2];
      vEndVelocity.v[2] = v6 - (float)(g_apl.fFrameTime * g_pPhys->fGravity);
      v11 = v12 * 0.5;
    }
    v2->vVelocity.v[2] = v11;
    if ( g_apl.bGroundPlane )
    {
      if ( !zonly )
      {
        AIPhys_ClipVelocity(&v2->vVelocity, &g_apl.groundTrace.normal, g_apl.groundTrace.walkable, &v2->vVelocity, 1.001);
        v2 = g_pPhys;
      }
    }
  }
  fFrameTime_low = LODWORD(g_apl.fFrameTime);
  if ( g_apl.bGroundPlane )
  {
    p_walkable = (bool *)&v64;
    planes = g_apl.groundTrace.normal;
    walkable = g_apl.groundTrace.walkable;
    v15 = 2;
    p_planes = (vec3_t *)&v62;
  }
  else
  {
    v15 = 1;
    p_walkable = &walkable;
    p_planes = &planes;
  }
  v17 = v2->vVelocity.v[2];
  v18 = v2->vVelocity.v[1];
  v19 = LODWORD(v2->vVelocity.v[0]);
  v20 = v19;
  *(float *)&v20 = fsqrt((float)((float)(*(float *)&v19 * *(float *)&v19) + (float)(v18 * v18)) + (float)(v17 * v17));
  _XMM3 = v20;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm10, xmm0
  }
  p_planes->v[1] = (float)(1.0 / *(float *)&_XMM0) * v18;
  p_planes->v[0] = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v19;
  p_planes->v[2] = (float)(1.0 / *(float *)&_XMM0) * v17;
  v24 = v17 > 0.69999999 || v2->stairsState;
  *p_walkable = v24;
  v25 = (unsigned int)v15;
  v26 = 0;
  v27 = 0;
  v56 = &planes.v[3 * v15 + 2];
  do
  {
    end.v[0] = (float)(*(float *)&fFrameTime_low * v2->vVelocity.v[0]) + v2->vOrigin.v[0];
    end.v[1] = (float)(*(float *)&fFrameTime_low * v2->vVelocity.v[1]) + v2->vOrigin.v[1];
    end.v[2] = (float)(*(float *)&fFrameTime_low * v2->vVelocity.v[2]) + v2->vOrigin.v[2];
    Value = (char *)Sys_GetValue(0);
    v29 = (int *)(Value + 12816);
    if ( (unsigned int)(*((_DWORD *)Value + 3204) + 1) >= 3 )
    {
      LODWORD(v54) = 3;
      LODWORD(contentmask) = *((_DWORD *)Value + 3204) + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", contentmask, v54) )
        __debugbreak();
    }
    if ( (unsigned int)++*v29 >= 3 )
    {
      LODWORD(v54) = 3;
      LODWORD(contentmask) = *v29;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", contentmask, v54) )
        __debugbreak();
    }
    v30 = Value + 2088;
    v31 = Value + 40;
    if ( *v30 < (unsigned __int64)v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
      __debugbreak();
    *v30 += 8i64;
    if ( *v30 >= (unsigned __int64)v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
      __debugbreak();
    *(_QWORD *)*v30 = v29;
    if ( *v30 <= (unsigned __int64)v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
      __debugbreak();
    v32 = *v29;
    v33 = __rdtsc();
    v29[v32 + 2] = v33;
    if ( Sys_HasValidCurrentThreadContext() )
      CurrentThreadContext = Sys_GetCurrentThreadContext();
    else
      CurrentThreadContext = THREAD_CONTEXT_COUNT;
    CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 268, NULL, 0);
    AIPhys_Trace(&results, &g_pPhys->vOrigin, &end, &g_pPhys->bounds, g_pPhys->iEntNum, g_apl.iTraceMask);
    Profile_EndInternal(NULL);
    fraction = results.fraction;
    v2 = g_pPhys;
    if ( results.fraction <= 0.0 )
    {
      if ( results.startsolid )
      {
        v50 = g_pPhys;
        g_pPhys->vVelocity.v[2] = 0.0;
        if ( !v27 && g_apl.groundTrace.startsolid )
          return 2i64;
        if ( v50->iHitEntnum == 2047 )
        {
          EntityHitId = Trace_GetEntityHitId(&results);
          v52 = g_pPhys;
          g_pPhys->iHitEntnum = EntityHitId;
          v52->vHitOrigin = v52->vOrigin;
          v52->bStuck = 1;
        }
        return 1i64;
      }
    }
    else
    {
      g_pPhys->vOrigin.v[0] = (float)((float)(end.v[0] - g_pPhys->vOrigin.v[0]) * results.fraction) + g_pPhys->vOrigin.v[0];
      v2->vOrigin.v[1] = (float)((float)(end.v[1] - v2->vOrigin.v[1]) * fraction) + v2->vOrigin.v[1];
      v2->vOrigin.v[2] = (float)((float)(end.v[2] - v2->vOrigin.v[2]) * fraction) + v2->vOrigin.v[2];
      if ( results.fraction == 1.0 )
        break;
    }
    v2->bDeflected = 1;
    if ( !results.walkable && v2->iHitEntnum == 2047 && (results.normal.v[0] != 0.0 || results.normal.v[1] != 0.0) )
    {
      v36 = Trace_GetEntityHitId(&results);
      v37 = g_pPhys;
      g_pPhys->iHitEntnum = v36;
      v37->vHitOrigin = v37->vOrigin;
      v37->vHitNormal = results.normal;
      v37->bStuck = 0;
    }
    v38 = Trace_GetEntityHitId(&results);
    AIPhys_AddTouchEnt(v38);
    v39 = fFrameTime_low;
    *(float *)&v39 = *(float *)&fFrameTime_low - (float)(results.fraction * *(float *)&fFrameTime_low);
    fFrameTime_low = v39;
    if ( v15 >= 5 )
    {
      v49 = g_pPhys;
      *(_QWORD *)g_pPhys->vVelocity.v = 0i64;
      v49->vVelocity.v[2] = 0.0;
      return 1i64;
    }
    v40 = 0;
    v41 = 0i64;
    v42 = results.normal.v[2];
    v43 = results.normal.v[1];
    v44 = results.normal.v[0];
    if ( v25 <= 0 )
    {
LABEL_51:
      v2 = g_pPhys;
    }
    else
    {
      v45 = &planes.v[2];
      while ( (float)((float)((float)(results.normal.v[1] * *(v45 - 1)) + (float)(results.normal.v[0] * *(v45 - 2))) + (float)(results.normal.v[2] * *v45)) <= 0.99000001 )
      {
        ++v40;
        ++v41;
        v45 += 3;
        if ( v41 >= v25 )
          goto LABEL_51;
      }
      v2 = g_pPhys;
      if ( results.fraction == 0.0 && g_pPhys->iHitEntnum == 2047 && (results.normal.v[0] != 0.0 || results.normal.v[1] != 0.0) )
      {
        v48 = Trace_GetEntityHitId(&results);
        v2 = g_pPhys;
        g_pPhys->iHitEntnum = v48;
        v2->vHitOrigin = v2->vOrigin;
        v2->vHitNormal = results.normal;
        v2->bStuck = 0;
        v44 = results.normal.v[0];
      }
      v2->vVelocity.v[0] = v44 + v2->vVelocity.v[0];
      v2->vVelocity.v[1] = results.normal.v[1] + v2->vVelocity.v[1];
      v2->vVelocity.v[2] = results.normal.v[2] + v2->vVelocity.v[2];
      v42 = results.normal.v[2];
      v43 = results.normal.v[1];
      v44 = results.normal.v[0];
    }
    if ( v40 >= v15 )
    {
      *(&walkable + v25) = results.walkable;
      ++v15;
      *(v56 - 2) = v44;
      *(v56 - 1) = v43;
      *v56 = v42;
      v56 += 3;
      ++v25;
      if ( !AIPhys_ClipVelocityToAllPlanes(v15, &planes, &walkable, &vEndVelocity, &vEndClipVelocity) )
        return 1i64;
      v2 = g_pPhys;
    }
    ++v27;
  }
  while ( v27 < 4 );
  if ( gravity )
  {
    v46 = vEndVelocity.v[1];
    v2->vVelocity.v[0] = vEndVelocity.v[0];
    v2->vVelocity.v[2] = vEndVelocity.v[2];
    v2->vVelocity.v[1] = v46;
  }
  LOBYTE(v26) = v27 != 0;
  return v26;
}

/*
==============
AIPhys_StepSlideMove_Internal
==============
*/
__int64 AIPhys_StepSlideMove_Internal(int gravity, int zonly)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  SlideMoveResult v8; 
  unsigned int v9; 
  float v10; 
  float v11; 
  actor_physics_t *v12; 
  float fraction; 
  float stepheight; 
  actor_physics_t *v15; 
  float v16; 
  actor_physics_t *v17; 
  actor_physics_t *v18; 
  __m256i *v19; 
  __int64 v20; 
  actor_physics_t *v21; 
  __int64 v22; 
  __m256i v23; 
  __int128 v24; 
  __int64 v25; 
  __int128 v26; 
  __m256i v27; 
  float v28; 
  __int128 v29; 
  float v30; 
  bool v31; 
  actor_physics_t *v32; 
  char *v33; 
  __m256i v34; 
  __int128 v35; 
  __int64 v36; 
  __int128 v38; 
  bool v43; 
  bool walkable; 
  float v45; 
  __m256i v46; 
  __int128 v47; 
  __m256i contentmask_8; 
  __m256i v51; 
  __m256i v52; 
  __m256i v53; 
  vec3_t end; 
  vec3_t v55; 
  vec3_t start; 
  trace_t results; 
  char v58; 
  unsigned int v59; 

  v4 = g_pPhys->vOrigin.v[1];
  start.v[0] = g_pPhys->vOrigin.v[0];
  start.v[2] = g_pPhys->vOrigin.v[2];
  start.v[1] = v4;
  v5 = g_pPhys->vVelocity.v[0];
  v6 = g_pPhys->vVelocity.v[1];
  v7 = g_pPhys->vVelocity.v[2];
  v8 = AIPhys_SlideMove(gravity, zonly);
  v9 = 1;
  if ( v8 == SLIDEMOVE_COMPLETE )
  {
    if ( !g_pPhys->bSpace && (g_pPhys->vVelocity.v[2] > 0.0 || !g_apl.bIsWalking) )
    {
      end = g_pPhys->vOrigin;
      LODWORD(v10) = LODWORD(g_apl.stepheight) ^ _xmm;
      if ( BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum) )
      {
        end.v[0] = (float)(v10 * g_pPhys->movingPlatformUp.v[0]) + end.v[0];
        end.v[1] = (float)(v10 * g_pPhys->movingPlatformUp.v[1]) + end.v[1];
        v11 = (float)(v10 * g_pPhys->movingPlatformUp.v[2]) + end.v[2];
      }
      else
      {
        v11 = v10 + end.v[2];
      }
      end.v[2] = v11;
      Profile_Begin(268);
      AIPhys_Trace(&results, &g_pPhys->vOrigin, &end, &g_pPhys->bounds, g_pPhys->iEntNum, g_apl.iTraceMask);
      Profile_EndInternal(NULL);
      v12 = g_pPhys;
      if ( g_pPhys->vVelocity.v[2] > 0.0 )
      {
        fraction = results.fraction;
        g_pPhys->vOrigin.v[0] = (float)((float)(end.v[0] - g_pPhys->vOrigin.v[0]) * results.fraction) + g_pPhys->vOrigin.v[0];
        v12->vOrigin.v[1] = (float)((float)(end.v[1] - v12->vOrigin.v[1]) * fraction) + v12->vOrigin.v[1];
        v12->vOrigin.v[2] = (float)((float)(end.v[2] - v12->vOrigin.v[2]) * fraction) + v12->vOrigin.v[2];
      }
      if ( (float)(start.v[2] - v12->vOrigin.v[2]) > 1.0 && !g_apl.groundTrace.walkable && !results.walkable )
        g_pPhys->iHitEntnum = Trace_GetEntityHitId(&g_apl.groundTrace);
    }
    return v9;
  }
  if ( v8 == SLIDEMOVE_FAIL )
    return 0i64;
  if ( v8 != SLIDEMOVE_CLIPPED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1701, ASSERT_TYPE_ASSERT, "(moveResult == SLIDEMOVE_CLIPPED)", (const char *)&queryFormat, "moveResult == SLIDEMOVE_CLIPPED") )
    __debugbreak();
  stepheight = g_apl.stepheight;
  if ( AIPhys_UseNavmeshCollision() )
    return v9;
  v15 = g_pPhys;
  if ( g_pPhys->vVelocity.v[2] > 0.0 && !g_apl.bIsWalking )
  {
    end = start;
    AdjustUp(&end, COERCE_FLOAT(LODWORD(stepheight) ^ _xmm));
    Profile_Begin(268);
    AIPhys_Trace(&results, &start, &end, &g_pPhys->bounds, g_pPhys->iEntNum, g_apl.iTraceMask);
    Profile_EndInternal(NULL);
    if ( results.fraction == 1.0 || !results.walkable )
    {
      v17 = g_pPhys;
LABEL_54:
      v17->iHitEntnum = 2047;
      return v9;
    }
    v15 = g_pPhys;
  }
  v55 = start;
  if ( BGMovingPlatforms::IsMovingPlatform(v15->groundEntNum) )
  {
    v55.v[0] = (float)(stepheight * g_pPhys->movingPlatformUp.v[0]) + v55.v[0];
    v55.v[1] = (float)(stepheight * g_pPhys->movingPlatformUp.v[1]) + v55.v[1];
    v16 = (float)(stepheight * g_pPhys->movingPlatformUp.v[2]) + v55.v[2];
  }
  else
  {
    v16 = stepheight + v55.v[2];
  }
  v55.v[2] = v16;
  Profile_Begin(268);
  AIPhys_Trace(&results, &v55, &v55, &g_pPhys->bounds, g_pPhys->iEntNum, g_apl.iTraceMask);
  Profile_EndInternal(NULL);
  if ( results.allsolid )
  {
    if ( results.fraction == 0.0 )
      return 0;
    return v9;
  }
  v18 = g_pPhys;
  v19 = (__m256i *)&v58;
  v20 = 2i64;
  v21 = g_pPhys;
  v22 = 2i64;
  do
  {
    v19 += 4;
    v23 = *(__m256i *)v21->vOrigin.v;
    v24 = *(_OWORD *)&v21->vPathDir.z;
    v21 = (actor_physics_t *)((char *)v21 + 128);
    v19[-4] = v23;
    v19[-3] = *(__m256i *)&v21[-1].iTouchEnts[8];
    v19[-2] = *(__m256i *)&v21[-1].iTouchEnts[24];
    *(_OWORD *)v19[-1].m256i_i8 = *(_OWORD *)v21[-1].vHitNormal.v;
    *(_OWORD *)&v19[-1].m256i_u64[2] = v24;
    --v22;
  }
  while ( v22 );
  v25 = *(_QWORD *)&v21->bHasGroundPlane;
  v26 = *(_OWORD *)&g_apl.vPrevVelocity.z;
  *v19 = *(__m256i *)v21->vOrigin.v;
  contentmask_8 = *(__m256i *)&g_apl.fFrameTime;
  v51 = *(__m256i *)g_apl.groundTrace.normal.v;
  v52 = *(__m256i *)&g_apl.groundTrace.fractionForHitType;
  v27 = *(__m256i *)&g_apl.groundTrace.debugHitName;
  v19[1].m256i_i64[0] = v25;
  LODWORD(v25) = v21->iSurfaceType;
  v18->iHitEntnum = 2047;
  v28 = v55.v[0];
  v29 = LODWORD(v55.v[1]);
  v30 = v55.v[2];
  g_apl.bGroundPlane = 0;
  v18->vOrigin.v[0] = v55.v[0];
  v18->vOrigin.v[1] = *(float *)&v29;
  v18->vOrigin.v[2] = v30;
  v18->vVelocity.v[0] = v5;
  v18->vVelocity.v[1] = v6;
  v18->vVelocity.v[2] = v7;
  v53 = v27;
  v31 = results.fraction < 1.0;
  v19[1].m256i_i32[2] = v25;
  if ( v31 && v7 > 0.0 )
    v18->vVelocity.v[2] = 0.0;
  if ( AIPhys_SlideMove(gravity, zonly) == SLIDEMOVE_FAIL )
  {
    v32 = g_pPhys;
    v33 = &v58;
    do
    {
      v32 = (actor_physics_t *)((char *)v32 + 128);
      v34 = *(__m256i *)v33;
      v35 = *((_OWORD *)v33 + 7);
      v33 += 128;
      *(__m256i *)&v32[-1].bFollowingPath = v34;
      *(__m256i *)&v32[-1].iTouchEnts[8] = *((__m256i *)v33 - 3);
      *(__m256i *)&v32[-1].iTouchEnts[24] = *((__m256i *)v33 - 2);
      *(_OWORD *)v32[-1].vHitNormal.v = *((_OWORD *)v33 - 2);
      *(_OWORD *)&v32[-1].stairsState = v35;
      --v20;
    }
    while ( v20 );
LABEL_39:
    v36 = *((_QWORD *)v33 + 4);
    *(__m256i *)v32->vOrigin.v = *(__m256i *)v33;
    *(_QWORD *)&v32->bHasGroundPlane = v36;
    v32->iSurfaceType = *((_DWORD *)v33 + 10);
    *(__m256i *)&g_apl.fFrameTime = contentmask_8;
    *(__m256i *)g_apl.groundTrace.normal.v = v51;
    *(__m256i *)&g_apl.groundTrace.fractionForHitType = v52;
    *(__m256i *)&g_apl.groundTrace.debugHitName = v53;
    *(_OWORD *)&g_apl.vPrevVelocity.z = v26;
    return 0i64;
  }
  end = g_pPhys->vOrigin;
  if ( BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum) )
  {
    v38 = v29;
    *(float *)&v38 = fsqrt((float)((float)((float)(*(float *)&v29 - start.v[1]) * (float)(*(float *)&v29 - start.v[1])) + (float)((float)(v28 - start.v[0]) * (float)(v28 - start.v[0]))) + (float)((float)(v30 - start.v[2]) * (float)(v30 - start.v[2])));
    _XMM4 = v38;
    fsqrt((float)((float)((float)(g_pPhys->vOrigin.v[1] - start.v[1]) * (float)(g_pPhys->vOrigin.v[1] - start.v[1])) + (float)((float)(g_pPhys->vOrigin.v[0] - start.v[0]) * (float)(g_pPhys->vOrigin.v[0] - start.v[0]))) + (float)((float)(g_pPhys->vOrigin.v[2] - start.v[2]) * (float)(g_pPhys->vOrigin.v[2] - start.v[2])));
    __asm { vminss  xmm3, xmm4, xmm0 }
    AdjustUp(&end, COERCE_FLOAT(_XMM3 ^ _xmm));
  }
  else
  {
    _XMM0 = LODWORD(g_pPhys->vOrigin.v[2]);
    __asm { vmaxss  xmm2, xmm0, xmm6 }
    end.v[2] = (float)(start.v[2] - *(float *)&_XMM2) + end.v[2];
  }
  Profile_Begin(268);
  AIPhys_Trace(&results, &g_pPhys->vOrigin, &end, &g_pPhys->bounds, g_pPhys->iEntNum, g_apl.iTraceMask);
  Profile_EndInternal(NULL);
  v43 = Path_TraceHitStairs(&results);
  walkable = results.walkable;
  v32 = g_pPhys;
  if ( v43 )
    walkable = 1;
  results.walkable = walkable;
  if ( !results.startsolid )
  {
    v45 = results.fraction;
    g_pPhys->vOrigin.v[0] = (float)((float)(end.v[0] - g_pPhys->vOrigin.v[0]) * results.fraction) + g_pPhys->vOrigin.v[0];
    v32->vOrigin.v[1] = (float)((float)(end.v[1] - v32->vOrigin.v[1]) * v45) + v32->vOrigin.v[1];
    v32->vOrigin.v[2] = (float)((float)(end.v[2] - v32->vOrigin.v[2]) * v45) + v32->vOrigin.v[2];
    walkable = results.walkable;
  }
  if ( results.fraction >= 1.0 )
    return v9;
  if ( results.normal.v[2] < 0.30000001 )
  {
    v33 = &v58;
    do
    {
      v32 = (actor_physics_t *)((char *)v32 + 128);
      v46 = *(__m256i *)v33;
      v47 = *((_OWORD *)v33 + 7);
      v33 += 128;
      *(__m256i *)&v32[-1].bFollowingPath = v46;
      *(__m256i *)&v32[-1].iTouchEnts[8] = *((__m256i *)v33 - 3);
      *(__m256i *)&v32[-1].iTouchEnts[24] = *((__m256i *)v33 - 2);
      *(_OWORD *)v32[-1].vHitNormal.v = *((_OWORD *)v33 - 2);
      *(_OWORD *)&v32[-1].stairsState = v47;
      --v20;
    }
    while ( v20 );
    goto LABEL_39;
  }
  g_apl.bGroundPlane = 1;
  AIPhys_ClipVelocity(&v32->vVelocity, &results.normal, walkable, &v32->vVelocity, 1.001);
  _XMM0 = v59;
  v17 = g_pPhys;
  __asm { vmaxss  xmm1, xmm0, dword ptr [rbp+200h+start+8] }
  if ( (float)(*(float *)&_XMM1 + 0.1) < g_pPhys->vOrigin.v[2] )
    goto LABEL_54;
  return v9;
}

/*
==============
AIPhys_Trace
==============
*/
void AIPhys_Trace(trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int contentmask)
{
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  hknpShape *ShapeCapsuleUpAxis; 
  hkMemoryAllocator *v14; 
  hkMemoryAllocator *v15; 
  HavokPhysics_IgnoreBodies v16; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v18; 
  char optionalInplaceBuffer[432]; 

  v18 = -2i64;
  ClosestResult = PhysicsQuery_GetClosestResult(PHYSICS_WORLD_ID_FIRST);
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  HavokPhysics_CollisionQueryResult::Reset(g_physicsQueryStartResult, 1);
  ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis(PHYSICS_WORLD_ID_FIRST, &bounds->midPoint, bounds->halfSize.v[2] - bounds->halfSize.v[0], bounds->halfSize.v[0], optionalInplaceBuffer, 432, Temporary);
  extendedData.startTolerance = 0.0;
  _XMM0 = LODWORD(FLOAT_0_016000001);
  extendedData.accuracy = FLOAT_0_016000001;
  extendedData.simplifyStart = 0;
  extendedData.collisionBuffer = 0.0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&extendedData.nonBrushShape = _XMM0;
  extendedData.phaseSelection = All;
  extendedData.permitOutwardTrace = 0;
  extendedData.contents = contentmask;
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v16, passEntityNum != 2047, 0);
  if ( passEntityNum != 2047 )
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v16, 0, passEntityNum, 1, 1, 0, 1, 1);
  extendedData.ignoreBodies = &v16;
  Physics_Shapecast(PHYSICS_WORLD_ID_FIRST, ShapeCapsuleUpAxis, start, end, &quat_identity, &extendedData, ClosestResult, g_physicsQueryStartResult);
  Physics_ConvertShapeQueryResultToLegacyTrace(ClosestResult, g_physicsQueryStartResult, results);
  if ( BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum) && GMovingPlatforms::TraceHitMovingPlatform(results) )
    results->walkable = (float)((float)((float)(results->normal.v[1] * g_pPhys->movingPlatformUp.v[1]) + (float)(results->normal.v[0] * g_pPhys->movingPlatformUp.v[0])) + (float)(results->normal.v[2] * g_pPhys->movingPlatformUp.v[2])) > 0.69999999;
  v14 = hkMemHeapAllocator();
  v16.m_ignoreBodies.m_size = 0;
  if ( v16.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v14, v16.m_ignoreBodies.m_data, 4, v16.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v16.m_ignoreBodies.m_data = NULL;
  v16.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v15 = hkMemHeapAllocator();
  v16.m_ignoreEntities.m_size = 0;
  if ( v16.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v15, v16.m_ignoreEntities.m_data, 8, v16.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
AIPhys_UseNavmeshCollision
==============
*/
char AIPhys_UseNavmeshCollision()
{
  actor_physics_t *v0; 
  AIScriptedInterface *m_pAI; 
  int v2; 
  AIWrapper v4; 

  v0 = g_pPhys;
  if ( g_pPhys->bSpace )
  {
    if ( !Nav_AnyVolumesLoaded() )
      return 0;
    v0 = g_pPhys;
  }
  if ( (unsigned int)(v0->ePhysicsType - 4) > 1 || v0->bSpace )
  {
    AIWrapper::AIWrapper(&v4, &g_entities[v0->iEntNum]);
    m_pAI = v4.m_pAI;
    if ( !v4.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 221, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
      __debugbreak();
    v2 = *(_DWORD *)(m_pAI->GetAI(m_pAI) + 2420);
    if ( v2 != 11 && v2 != 5 && Nav_MeshLoaded() && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_ai_useNavActorPhysics, "ai_useNavActorPhysics") )
      return 1;
  }
  return 0;
}

/*
==============
AIPhys_WalkMove
==============
*/
__int64 AIPhys_WalkMove()
{
  actor_physics_t *v0; 
  float v1; 
  vec3_t *p_vVelocity; 
  float v3; 
  float v4; 
  float v5; 
  actor_physics_t *v6; 
  float v7; 
  float v8; 
  __int128 v9; 
  __int128 v15; 
  vec3_t dOrigin; 
  vec3_t dAngles; 

  v0 = g_pPhys;
  v1 = 1.0 / g_apl.fFrameTime;
  p_vVelocity = &g_pPhys->vVelocity;
  g_pPhys->vVelocity.v[0] = (float)(1.0 / g_apl.fFrameTime) * g_pPhys->vWishDelta.v[0];
  p_vVelocity->v[1] = v1 * v0->vWishDelta.v[1];
  v0->vVelocity.v[2] = 0.0;
  v3 = p_vVelocity->v[1];
  v4 = p_vVelocity->v[0];
  v5 = fsqrt((float)(v4 * v4) + (float)(v3 * v3));
  AIPhys_ClipVelocity(p_vVelocity, &g_apl.groundTrace.normal, g_apl.groundTrace.walkable, p_vVelocity, 1.001);
  v6 = g_pPhys;
  v7 = g_pPhys->vVelocity.v[1];
  v8 = g_pPhys->vVelocity.v[0];
  if ( (float)((float)(v8 * v4) + (float)(v7 * v3)) > 0.0 )
  {
    v9 = LODWORD(g_pPhys->vVelocity.v[0]);
    *(float *)&v9 = fsqrt((float)((float)(v8 * v8) + (float)(v7 * v7)) + (float)(g_pPhys->vVelocity.v[2] * g_pPhys->vVelocity.v[2]));
    _XMM4 = v9;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm8, xmm0
    }
    g_pPhys->vVelocity.v[0] = v8 * (float)(1.0 / *(float *)&_XMM0);
    v6->vVelocity.v[1] = (float)(1.0 / *(float *)&_XMM0) * v6->vVelocity.v[1];
    v6->vVelocity.v[2] = (float)(1.0 / *(float *)&_XMM0) * v6->vVelocity.v[2];
    v6->vVelocity.v[0] = v5 * v6->vVelocity.v[0];
    v6->vVelocity.v[1] = v5 * v6->vVelocity.v[1];
    v6->vVelocity.v[2] = v5 * v6->vVelocity.v[2];
  }
  if ( v6->vVelocity.v[0] == 0.0 && v6->vVelocity.v[1] == 0.0 )
  {
    if ( g_apl.bGroundPlane )
    {
      AIPhys_GetGroundEntDeltas(g_pPhys, &dOrigin, &dAngles);
      if ( dOrigin.v[0] == 0.0 && dOrigin.v[1] == 0.0 && dOrigin.v[2] == 0.0 )
        return 1i64;
    }
  }
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v15 = LODWORD(FLOAT_10000_0);
  *(float *)&v15 = 10000.0 / (float)level.frameDuration;
  _XMM1 = v15;
  __asm { vminss  xmm2, xmm1, dword ptr [rax+14h] }
  g_pPhys->vVelocity.v[2] = *(float *)&_XMM2;
  return AIPhys_StepSlideMove_Internal(0, 0);
}

/*
==============
AdjustUp
==============
*/
void AdjustUp(vec3_t *adjusted, float height)
{
  actor_physics_t *v3; 

  if ( BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum) )
  {
    v3 = g_pPhys;
    adjusted->v[0] = (float)(height * g_pPhys->movingPlatformUp.v[0]) + adjusted->v[0];
    adjusted->v[1] = (float)(height * v3->movingPlatformUp.v[1]) + adjusted->v[1];
    adjusted->v[2] = (float)(height * v3->movingPlatformUp.v[2]) + adjusted->v[2];
  }
  else
  {
    adjusted->v[2] = height + adjusted->v[2];
  }
}

/*
==============
DropPointToGroundPlane
==============
*/
char DropPointToGroundPlane(const vec3_t *point, const vec3_t *pointOnGroundTrace, vec3_t *outCollidePos)
{
  float v7; 
  actor_physics_t *v8; 
  unsigned __int16 groundEntNum; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 

  if ( g_apl.bGroundPlane )
  {
    v7 = FLOAT_1_0;
    if ( g_apl.groundTrace.fraction >= 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 339, ASSERT_TYPE_ASSERT, "(g_apl.groundTrace.fraction < 1.f)", (const char *)&queryFormat, "g_apl.groundTrace.fraction < 1.f") )
      __debugbreak();
    if ( BGMovingPlatforms::IsMovingPlatform(g_pPhys->groundEntNum) )
    {
      v8 = g_pPhys;
      groundEntNum = g_pPhys->groundEntNum;
      if ( (unsigned __int16)(groundEntNum - 2046) > 1u && G_IsEntityInUse(groundEntNum) && &g_entities[v8->groundEntNum] )
      {
        v10 = g_pPhys->movingPlatformUp.v[0];
        v11 = g_pPhys->movingPlatformUp.v[1];
        v7 = g_pPhys->movingPlatformUp.v[2];
      }
      else
      {
        v10 = v24;
        v11 = v24;
        v7 = v24;
      }
    }
    else
    {
      v10 = 0.0;
      v11 = 0.0;
    }
    v12 = pointOnGroundTrace->v[1];
    v13 = pointOnGroundTrace->v[2];
    v14 = pointOnGroundTrace->v[0];
    v15 = point->v[0];
    v16 = (float)((float)(v11 * g_apl.groundTrace.normal.v[1]) + (float)(v10 * g_apl.groundTrace.normal.v[0])) + (float)(v7 * g_apl.groundTrace.normal.v[2]);
    if ( COERCE_FLOAT(LODWORD(v16) & _xmm) <= 0.001 )
    {
      outCollidePos->v[0] = v15;
      outCollidePos->v[1] = point->v[1];
      v18 = point->v[2];
    }
    else
    {
      LODWORD(v17) = COERCE_UNSIGNED_INT((float)((float)((float)((float)(point->v[1] - v12) * g_apl.groundTrace.normal.v[1]) + (float)((float)(point->v[0] - pointOnGroundTrace->v[0]) * g_apl.groundTrace.normal.v[0])) + (float)((float)(point->v[2] - v13) * g_apl.groundTrace.normal.v[2])) / v16) ^ _xmm;
      outCollidePos->v[0] = (float)(v10 * v17) + v15;
      outCollidePos->v[1] = (float)(v11 * v17) + point->v[1];
      v18 = (float)(v7 * v17) + point->v[2];
    }
    outCollidePos->v[2] = v18;
    v19 = (float)((float)((float)(v12 - outCollidePos->v[1]) * v11) + (float)((float)(v14 - outCollidePos->v[0]) * v10)) + (float)((float)(v13 - outCollidePos->v[2]) * v7);
    v21 = g_apl.fFrameTime * g_pPhys->fGravity;
    v20 = v21;
    if ( v19 > v21 )
    {
      v22 = v21 - v19;
      v23 = (float)(v11 * (float)(v21 - v19)) + outCollidePos->v[1];
      outCollidePos->v[0] = (float)(v10 * (float)(v20 - v19)) + outCollidePos->v[0];
      outCollidePos->v[2] = (float)(v7 * v22) + outCollidePos->v[2];
      outCollidePos->v[1] = v23;
    }
    return 1;
  }
  else
  {
    *outCollidePos = *point;
    return 0;
  }
}

/*
==============
AIScriptedInterface::Physics_CharacterTrace
==============
*/
_BOOL8 AIScriptedInterface::Physics_CharacterTrace(AIScriptedInterface *this)
{
  actor_physics_t *v2; 
  int iTraceMask; 
  ai_scripted_t *m_pAI; 
  AIScriptedInterface *v5; 
  AINavigator *Navigator; 
  signed int Layer; 
  nav_space_s *m_pSpace; 
  AINavigator2D *v9; 
  const bfx::AreaHandle *hHintArea; 
  int v11; 
  bool v12; 
  bfx::AreaHandle pOutArea; 
  __int64 v15; 
  AIWrapper v16; 
  vec3_t point; 
  vec3_t endPos; 
  vec3_t outUp; 
  bfx::PathSpec pPathSpec; 
  nav_probe_results_s pOutResults; 
  trace_t results; 

  v15 = -2i64;
  bfx::AreaHandle::AreaHandle(&pOutArea);
  v2 = g_pPhys;
  iTraceMask = g_apl.iTraceMask;
  m_pAI = this->m_pAI;
  g_pPhys = &m_pAI->Physics;
  g_apl.iTraceMask = m_pAI->Physics.iTraceMask;
  AIWrapper::AIWrapper(&v16, &g_entities[m_pAI->Physics.iEntNum]);
  v5 = v16.m_pAI;
  if ( !v16.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2885, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
    __debugbreak();
  Navigator = AICommonInterface::GetNavigator(v5);
  Layer = Nav_GetLayer(Navigator);
  if ( !Navigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2889, ASSERT_TYPE_ASSERT, "( pNavigator )", (const char *)&queryFormat, "pNavigator") )
    __debugbreak();
  m_pSpace = Navigator->m_pSpace;
  if ( !m_pSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2891, ASSERT_TYPE_ASSERT, "( pSpace )", (const char *)&queryFormat, "pSpace") )
    __debugbreak();
  v9 = Navigator->Get2DNavigator(Navigator);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2894, ASSERT_TYPE_ASSERT, "( pNav2D )", (const char *)&queryFormat, "pNav2D") )
    __debugbreak();
  pPathSpec = *AINavigator2D::GetPathSpec(v9);
  results.fraction = 0.0;
  Nav_GetSpaceUp(m_pSpace, &outUp);
  point.v[0] = 0.0;
  point.v[1] = 0.0;
  point.v[2] = 0.0;
  hHintArea = AINavigator2D::GetCurArea(v9);
  if ( Nav_GetClosestVerticalPosWithHint(&g_pPhys->vOrigin, &outUp, Layer, &m_pSpace->hSpace, &pPathSpec, &point, hHintArea, &pOutArea) )
  {
    bfx::AreaHandle::AreaHandle(&pOutResults.m_hEndArea);
    v11 = g_apl.iTraceMask & 0x2004000;
    DropPointToGroundPlane(&point, &g_pPhys->vOrigin, &g_pPhys->vOrigin);
    endPos.v[0] = (float)(g_apl.fFrameTime * g_pPhys->vVelocity.v[0]) + point.v[0];
    endPos.v[1] = (float)(g_apl.fFrameTime * g_pPhys->vVelocity.v[1]) + point.v[1];
    endPos.v[2] = (float)(g_apl.fFrameTime * g_pPhys->vVelocity.v[2]) + point.v[2];
    Nav_Trace(m_pSpace, &point, &endPos, (AINavLayer)Layer, &pPathSpec, &pOutResults);
    Profile_Begin(262);
    AIPhys_CharacterTrace(&results, &point, &endPos, &g_pPhys->bounds, g_pPhys->iEntNum, v11);
    Profile_EndInternal(NULL);
    bfx::AreaHandle::~AreaHandle(&pOutResults.m_hEndArea);
  }
  g_apl.iTraceMask = iTraceMask;
  g_pPhys = v2;
  v12 = results.fraction == 1.0;
  bfx::AreaHandle::~AreaHandle(&pOutArea);
  return v12;
}

/*
==============
AIScriptedInterface::Physics_DoMovement
==============
*/
__int64 AIScriptedInterface::Physics_DoMovement(actor_physics_t *pPhys)
{
  unsigned int v2; 
  aiphys_t ePhysicsType; 
  float v8; 
  float v9; 
  SlideMoveResult v10; 
  actor_physics_t *v11; 
  __int64 iHitEntnum; 
  actor_physics_t *v13; 
  float v14; 
  unsigned int v15; 
  actor_physics_t *v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 

  Profile_Begin(261);
  SV_Profile_BeginEvent(SVPROF_AI_ACTOR_PHYSICS);
  g_pPhys = pPhys;
  pPhys->iHitEntnum = 2047;
  pPhys->iNumTouch = 0;
  pPhys->bDeflected = 0;
  v2 = 1;
  if ( pPhys->groundEntNum == 2046 && pPhys->bHasInited && 0.0 == pPhys->vWishDelta.v[0] && 0.0 == pPhys->vWishDelta.v[1] && 0.0 == pPhys->vWishDelta.v[2] )
  {
    *(_QWORD *)pPhys->vVelocity.v = 0i64;
    pPhys->vVelocity.v[2] = 0.0;
    Profile_EndInternal(NULL);
  }
  else
  {
    pPhys->bHasInited = 1;
    memset_0(&g_apl, 0, sizeof(g_apl));
    g_apl.iTraceMask = pPhys->iTraceMask;
    g_apl.vPrevOrigin = pPhys->vOrigin;
    g_apl.vPrevVelocity = pPhys->vVelocity;
    g_apl.fFrameTime = (float)pPhys->iMsec * 0.001;
    if ( pPhys->iMsec <= 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2658, ASSERT_TYPE_ASSERT, "(g_pPhys->iMsec > 0)", (const char *)&queryFormat, "g_pPhys->iMsec > 0") )
        __debugbreak();
      pPhys = g_pPhys;
    }
    pPhys->stepMove = 0;
    if ( pPhys->bIsAlive )
    {
      _XMM0 = (unsigned int)pPhys->stairsState;
      __asm { vpcmpeqd xmm3, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_18_0);
      __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
      g_apl.stepheight = *(float *)&_XMM0;
    }
    else
    {
      g_apl.stepheight = FLOAT_4_0;
    }
    *(_QWORD *)&pPhys->bHasGroundPlane = 0i64;
    ePhysicsType = pPhys->ePhysicsType;
    if ( ePhysicsType == AIPHYS_NOCLIP )
    {
      pPhys->vOrigin.v[0] = pPhys->vWishDelta.v[0] + pPhys->vOrigin.v[0];
      pPhys->vOrigin.v[1] = pPhys->vWishDelta.v[1] + pPhys->vOrigin.v[1];
      pPhys->vOrigin.v[2] = pPhys->vWishDelta.v[2] + pPhys->vOrigin.v[2];
      if ( g_apl.fFrameTime <= 0.0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 1987, ASSERT_TYPE_ASSERT, "( g_apl.fFrameTime > 0.f )", (const char *)&queryFormat, "g_apl.fFrameTime > 0.f") )
          __debugbreak();
        pPhys = g_pPhys;
      }
      v8 = 1.0 / g_apl.fFrameTime;
      pPhys->vVelocity.v[0] = (float)(1.0 / g_apl.fFrameTime) * pPhys->vWishDelta.v[0];
      pPhys->vVelocity.v[1] = v8 * pPhys->vWishDelta.v[1];
      pPhys->vVelocity.v[2] = v8 * pPhys->vWishDelta.v[2];
      AIScriptedInterface::Physics_UpdatePrevGround(pPhys);
      Profile_EndInternal(NULL);
    }
    else if ( (unsigned int)(ePhysicsType - 4) > 1 || pPhys->bSpace )
    {
      AIPhys_GroundTrace();
      AIPhys_DetermineStairsState();
      v13 = g_pPhys;
      if ( (unsigned int)(g_pPhys->ePhysicsType - 6) <= 1 )
      {
        v17 = 1.0 / g_apl.fFrameTime;
        g_pPhys->vVelocity.v[0] = (float)(1.0 / g_apl.fFrameTime) * g_pPhys->vWishDelta.v[0];
        v13->vVelocity.v[1] = v17 * v13->vWishDelta.v[1];
        v13->vVelocity.v[2] = 0.0;
        v15 = AIPhys_StepSlideMove_Internal(0, 0);
        if ( AIPhys_UseNavmeshCollision() )
        {
          v16 = g_pPhys;
        }
        else
        {
          v18 = g_pPhys->vVelocity.v[0];
          v19 = g_pPhys->vVelocity.v[1];
          v20 = g_pPhys->vVelocity.v[2];
          g_pPhys->vVelocity = vec3_origin;
          AIPhys_StepSlideMove_Internal(1, 1);
          v16 = g_pPhys;
          g_pPhys->vVelocity.v[0] = v18;
          v16->vVelocity.v[1] = v19;
          v16->vVelocity.v[2] = v20;
        }
      }
      else if ( g_pPhys->bSpace )
      {
        v14 = 1.0 / g_apl.fFrameTime;
        g_pPhys->vVelocity.v[0] = (float)(1.0 / g_apl.fFrameTime) * g_pPhys->vWishDelta.v[0];
        v13->vVelocity.v[1] = v14 * v13->vWishDelta.v[1];
        v13->vVelocity.v[2] = v14 * v13->vWishDelta.v[2];
        v15 = AIPhys_StepSlideMove_Internal(0, 0);
        v16 = g_pPhys;
      }
      else
      {
        if ( g_apl.bIsWalking )
          v15 = AIPhys_WalkMove();
        else
          v15 = AIPhys_StepSlideMove_Internal(1, 0);
        v16 = g_pPhys;
      }
      if ( g_apl.bGroundPlane && (g_apl.groundTrace.normal.v[2] >= 0.30000001 || v16->stairsState) )
      {
        v16->bHasGroundPlane = 1;
        v16->groundplaneSlope = g_apl.groundTrace.normal.v[2];
        v16->iSurfaceType = (g_apl.groundTrace.surfaceFlags >> 19) & 0x3F;
        _XMM0 = (unsigned __int16)(v16->groundEntNum - 2046) > 1u;
        __asm { vpcmpeqd xmm3, xmm0, xmm1 }
        _XMM1 = LODWORD(FLOAT_20_0);
        __asm { vblendvps xmm5, xmm1, xmm2, xmm3 }
        v16->stepMove = COERCE_FLOAT(COERCE_UNSIGNED_INT(g_apl.vPrevOrigin.v[2] - v16->vOrigin.v[2]) & _xmm) > *(float *)&_XMM5;
      }
      else
      {
        v16->iSurfaceType = 0;
      }
      AIScriptedInterface::Physics_UpdatePrevGround(v16);
      Profile_EndInternal(NULL);
      v2 = v15;
    }
    else
    {
      v9 = 1.0 / g_apl.fFrameTime;
      pPhys->vVelocity.v[0] = (float)(1.0 / g_apl.fFrameTime) * pPhys->vWishDelta.v[0];
      pPhys->vVelocity.v[1] = v9 * pPhys->vWishDelta.v[1];
      pPhys->vVelocity.v[2] = v9 * pPhys->vWishDelta.v[2];
      v10 = AIPhys_SlideMove(0, 1);
      v11 = g_pPhys;
      if ( v10 == SLIDEMOVE_CLIPPED )
      {
        if ( g_pPhys->bStuck )
        {
          iHitEntnum = g_pPhys->iHitEntnum;
          if ( (_DWORD)iHitEntnum != 2047 )
          {
            if ( g_entities[iHitEntnum].client )
            {
              g_pPhys->bStuck = 0;
              g_apl.iTraceMask &= ~0x2000000u;
              AIPhys_SlideMove(0, 1);
              v11 = g_pPhys;
            }
          }
        }
      }
      AIScriptedInterface::Physics_UpdatePrevGround(v11);
      Profile_EndInternal(NULL);
    }
  }
  SV_Profile_EndEvent(SVPROF_AI_ACTOR_PHYSICS);
  return v2;
}

/*
==============
AIScriptedInterface::Physics_GroundTraceOnly
==============
*/
void AIScriptedInterface::Physics_GroundTraceOnly(AIScriptedInterface *this)
{
  actor_physics_t *p_Physics; 
  aiphys_t ePhysicsType; 
  actor_physics_t *v8; 

  Profile_Begin(261);
  p_Physics = &this->m_pAI->Physics;
  g_pPhys = p_Physics;
  p_Physics->iHitEntnum = 2047;
  p_Physics->iNumTouch = 0;
  p_Physics->bDeflected = 0;
  p_Physics->bHasInited = 1;
  memset_0(&g_apl, 0, sizeof(g_apl));
  g_apl.iTraceMask = p_Physics->iTraceMask;
  g_apl.vPrevOrigin = p_Physics->vOrigin;
  g_apl.vPrevVelocity = p_Physics->vVelocity;
  g_apl.fFrameTime = (float)p_Physics->iMsec * 0.001;
  if ( p_Physics->iMsec <= 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\actor_physics.cpp", 2788, ASSERT_TYPE_ASSERT, "(g_pPhys->iMsec > 0)", (const char *)&queryFormat, "g_pPhys->iMsec > 0") )
      __debugbreak();
    p_Physics = g_pPhys;
  }
  p_Physics->stepMove = 0;
  if ( p_Physics->bIsAlive )
  {
    _XMM0 = (unsigned int)p_Physics->stairsState;
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_18_0);
    __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
    g_apl.stepheight = *(float *)&_XMM0;
  }
  else
  {
    g_apl.stepheight = FLOAT_4_0;
  }
  ePhysicsType = p_Physics->ePhysicsType;
  *(_QWORD *)&p_Physics->bHasGroundPlane = 0i64;
  if ( ePhysicsType == AIPHYS_NOCLIP || (unsigned int)(ePhysicsType - 4) <= 1 && !p_Physics->bSpace )
  {
    v8 = p_Physics;
  }
  else
  {
    AIPhys_GroundTrace();
    AIPhys_DetermineStairsState();
    v8 = g_pPhys;
    if ( g_apl.bGroundPlane && (g_apl.groundTrace.normal.v[2] >= 0.30000001 || g_pPhys->stairsState) )
    {
      g_pPhys->bHasGroundPlane = 1;
      v8->groundplaneSlope = g_apl.groundTrace.normal.v[2];
      v8->iSurfaceType = (g_apl.groundTrace.surfaceFlags >> 19) & 0x3F;
      _XMM0 = (unsigned __int16)(v8->groundEntNum - 2046) > 1u;
      __asm { vpcmpeqd xmm3, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_20_0);
      __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
      v8->stepMove = COERCE_FLOAT(COERCE_UNSIGNED_INT(g_apl.vPrevOrigin.v[2] - v8->vOrigin.v[2]) & _xmm) > *(float *)&_XMM0;
    }
    else
    {
      g_pPhys->iSurfaceType = 0;
    }
  }
  AIScriptedInterface::Physics_UpdatePrevGround(v8);
  Profile_EndInternal(NULL);
}

/*
==============
AIScriptedInterface::Physics_HandleMovingPlatformTeleport
==============
*/
void AIScriptedInterface::Physics_HandleMovingPlatformTeleport(AIScriptedInterface *this)
{
  actor_physics_t *p_Physics; 
  int iTraceMask; 
  int v3; 
  actor_physics_t *v4; 
  int IsGroundMoving; 
  actor_physics_t *v6; 
  unsigned __int16 v7; 
  actor_physics_t *v8; 
  vec3_t end; 
  vec3_t start; 
  trace_t trace; 

  p_Physics = &this->m_pAI->Physics;
  if ( this->m_pAI->Physics.bSpace && BGMovingPlatforms::IsMovingPlatform(this->m_pAI->Physics.groundEntNum) )
  {
    iTraceMask = p_Physics->iTraceMask;
    v3 = g_apl.iTraceMask;
    v4 = g_pPhys;
    g_pPhys = p_Physics;
    g_apl.iTraceMask = iTraceMask;
    IsGroundMoving = AIPhys_IsGroundMoving();
    AIPhys_GetGroundTraceInfo(&start, &end, IsGroundMoving);
    AIPhys_DoGroundTrace(&trace, &start, &end);
    if ( g_pPhys->groundEntNum != trace.hitId )
    {
      if ( GMovingPlatforms::TraceHitMovingPlatform(&trace) )
      {
        v7 = truncate_cast<unsigned short,unsigned int>(trace.hitId);
        v8 = g_pPhys;
        g_pPhys->groundEntNum = v7;
        AIScriptedInterface::Physics_UpdatePrevGround(v8);
      }
      else
      {
        v6 = g_pPhys;
        g_pPhys->groundEntNum = 2047;
        *(_QWORD *)v6->vPrevGroundOrigin.v = 0i64;
        *(_QWORD *)&v6->vPrevGroundOrigin.z = 0i64;
        *(_QWORD *)&v6->vPrevGroundAngles.y = 0i64;
      }
    }
    g_apl.iTraceMask = v3;
    g_pPhys = v4;
  }
}

/*
==============
AIScriptedInterface::Physics_TestForLinkedGroundChange
==============
*/
void AIScriptedInterface::Physics_TestForLinkedGroundChange(AIScriptedInterface *this)
{
  ai_scripted_t *m_pAI; 
  ai_scripted_t *v3; 
  int iTraceMask; 
  gentity_s *ent; 
  actor_physics_t *v6; 
  __m128 v7; 
  float v8; 
  vec3_t end; 
  vec3_t start; 
  Bounds bounds; 
  trace_t results; 

  if ( BGMovingPlatforms::IsMovingPlatform(this->m_pAI->Physics.groundEntNum) )
  {
    m_pAI = this->m_pAI;
    if ( !g_entities[m_pAI->Physics.groundEntNum].vehicle )
    {
      if ( G_EntIsLinked(m_pAI->ent) )
      {
        v3 = this->m_pAI;
        iTraceMask = g_apl.iTraceMask;
        ent = v3->ent;
        v6 = g_pPhys;
        g_pPhys = &v3->Physics;
        start = ent->r.currentOrigin;
        end.v[0] = start.v[0] - (float)(50.0 * v3->Physics.movingPlatformUp.v[0]);
        end.v[1] = start.v[1] - (float)(50.0 * v3->Physics.movingPlatformUp.v[1]);
        end.v[2] = start.v[2] - (float)(50.0 * v3->Physics.movingPlatformUp.v[2]);
        g_apl.iTraceMask = v3->Physics.iTraceMask;
        v7 = (__m128)*(unsigned __int64 *)&v3->Physics.bounds.halfSize.y;
        v8 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0] - 5.0;
        *(_OWORD *)bounds.midPoint.v = *(_OWORD *)v3->Physics.bounds.midPoint.v;
        *(double *)&bounds.halfSize.y = *(double *)v7.m128_u64;
        if ( v8 > _mm_shuffle_ps(*(__m128 *)bounds.midPoint.v, *(__m128 *)bounds.midPoint.v, 255).m128_f32[0] )
        {
          bounds.midPoint.v[2] = bounds.midPoint.v[2] + -5.0;
          bounds.halfSize.v[2] = v8;
        }
        Profile_Begin(268);
        AIPhys_Trace(&results, &start, &end, &bounds, g_pPhys->iEntNum, g_apl.iTraceMask);
        Profile_EndInternal(NULL);
        g_apl.iTraceMask = iTraceMask;
        g_pPhys = v6;
        if ( GMovingPlatforms::TraceHitMovingPlatform(&results) )
        {
          if ( results.hitId != v3->Physics.groundEntNum )
          {
            v3->Physics.groundEntNum = truncate_cast<unsigned short,unsigned int>(results.hitId);
            AIPhys_HandleMovingPlatformGroundChange();
          }
        }
      }
    }
  }
}

/*
==============
AIScriptedInterface::Physics_Trace
==============
*/
void AIScriptedInterface::Physics_Trace(AIScriptedInterface *this, const vec3_t *start, const vec3_t *end, trace_t *trace)
{
  ai_scripted_t *m_pAI; 
  actor_physics_t *v5; 
  int iTraceMask; 

  m_pAI = this->m_pAI;
  v5 = g_pPhys;
  iTraceMask = g_apl.iTraceMask;
  g_pPhys = &m_pAI->Physics;
  g_apl.iTraceMask = m_pAI->Physics.iTraceMask;
  AIPhys_DoTrace(trace, start, end);
  g_apl.iTraceMask = iTraceMask;
  g_pPhys = v5;
}

/*
==============
AIScriptedInterface::Physics_UpdatePrevGround
==============
*/
void AIScriptedInterface::Physics_UpdatePrevGround(actor_physics_t *pPhys)
{
  unsigned __int16 groundEntNum; 
  gentity_s *v3; 

  groundEntNum = pPhys->groundEntNum;
  if ( (unsigned __int16)(groundEntNum - 2046) > 1u && G_IsEntityInUse(groundEntNum) )
  {
    v3 = &g_entities[pPhys->groundEntNum];
    if ( v3 )
    {
      pPhys->vPrevGroundOrigin.v[0] = v3->r.currentOrigin.v[0];
      pPhys->vPrevGroundOrigin.v[1] = v3->r.currentOrigin.v[1];
      pPhys->vPrevGroundOrigin.v[2] = v3->r.currentOrigin.v[2];
      pPhys->vPrevGroundAngles.v[0] = v3->r.currentAngles.v[0];
      pPhys->vPrevGroundAngles.v[1] = v3->r.currentAngles.v[1];
      pPhys->vPrevGroundAngles.v[2] = v3->r.currentAngles.v[2];
    }
  }
}

/*
==============
AIScriptedInterface::PostPhysics
==============
*/
void AIScriptedInterface::PostPhysics(AIScriptedInterface *this)
{
  Profile_Begin(261);
  g_pPhys = &this->m_pAI->Physics;
  if ( g_pPhys->bIsAlive )
    AIPhys_Footsteps();
  AIPhys_FoliageSounds();
  Profile_EndInternal(NULL);
}

