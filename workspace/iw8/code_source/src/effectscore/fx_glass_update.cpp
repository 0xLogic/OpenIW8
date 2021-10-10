/*
==============
Glass_Update
==============
*/

void __fastcall Glass_Update(const void *const cmd)
{
  ?Glass_Update@@YAXQEBX@Z(cmd);
}

/*
==============
Glass_Fall_GetLastPassedTraceTime
==============
*/
__int64 Glass_Fall_GetLastPassedTraceTime(int time, int traceTimeOffset)
{
  int v3; 
  int v5; 

  v3 = time + glass_trace_interval->current.integer - traceTimeOffset;
  if ( v3 < 0 )
  {
    v5 = time + glass_trace_interval->current.integer - traceTimeOffset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_update.cpp", 49, ASSERT_TYPE_ASSERT, "( baseTime ) >= ( 0 )", "%s >= %s\n\t%i, %i", "baseTime", "0", v5, 0i64) )
      __debugbreak();
  }
  return (unsigned int)(traceTimeOffset + v3 - v3 % glass_trace_interval->current.integer - glass_trace_interval->current.integer);
}

/*
==============
Glass_Update
==============
*/
void Glass_Update(const void *const cmd)
{
  int v1; 
  FxSystem *System; 
  unsigned int v3; 
  unsigned int pieceWordCount; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 

  v1 = *(_DWORD *)cmd;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Glass_Update");
  Glass_InitPendingZones();
  System = FX_GetSystem(v1);
  v3 = 0;
  pieceWordCount = fxWorld.glassSys.pieceWordCount;
  fxWorld.glassSys.prevTime = fxWorld.glassSys.time;
  fxWorld.glassSys.time = System->msecNow;
  if ( fxWorld.glassSys.pieceWordCount )
  {
    v5 = 0i64;
    do
    {
      v6 = fxWorld.glassSys.isInUse[v5];
      while ( v6 )
      {
        v7 = __lzcnt(v6);
        if ( v7 >= 0x20 )
        {
          LODWORD(v9) = 32;
          LODWORD(v8) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v8, v9) )
            __debugbreak();
        }
        v6 &= ~(0x80000000 >> v7);
        Glass_UpdatePiece(&fxWorld.glassSys, 0, v7 | (32 * v3));
      }
      ++v3;
      ++v5;
    }
    while ( v3 < pieceWordCount );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Glass_UpdateFall
==============
*/
void Glass_UpdateFall(FxGlassSystem *glassSys, unsigned int pieceIndex)
{
  int time; 
  FxGlassPieceDynamics *pieceDynamics; 
  int v5; 
  int prevTime; 
  FxGlassPieceState *pieceStates; 
  __int64 v8; 
  unsigned __int64 v9; 
  FxGlassPiecePlace *v10; 
  __int64 v11; 
  int fallTime; 
  float v13; 
  float v14; 
  float v15; 
  int v16; 
  int LastPassedTraceTime; 
  int v18; 
  int v19; 
  int v20; 
  float v21; 
  int v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float fraction; 
  int v31; 
  float v32; 
  __int128 v33; 
  float v34; 
  __int128 v35; 
  int v39; 
  int v40; 
  int v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  __int64 v47; 
  FxGlassPieceState *v48; 
  float v49; 
  float v50; 
  float v51; 
  float v54; 
  __int64 contentMask; 
  __int64 locational; 
  unsigned int traceTimeOffset; 
  int traceTimeOffseta; 
  unsigned int pieceIndexa; 
  float s[2]; 
  __int64 v61; 
  FxGlassDef *v62; 
  int v63; 
  int v64; 
  int v65; 
  float c; 
  vec3_t start; 
  vec3_t normal; 
  vec3_t end; 
  vec3_t origin; 
  trace_t results; 

  time = glassSys->time;
  pieceDynamics = glassSys->pieceDynamics;
  v5 = glassSys->time;
  prevTime = glassSys->prevTime;
  pieceStates = glassSys->pieceStates;
  v8 = pieceIndex;
  v9 = pieceIndex;
  v10 = &glassSys->piecePlaces[v9];
  v61 = v9 * 32;
  v11 = v8;
  pieceIndexa = v8;
  fallTime = pieceDynamics[v8].fallTime;
  v62 = &fxWorld.glassGlob.defs[pieceStates[v9].defIndex];
  v13 = (float)(time - prevTime) * 0.001;
  v14 = (float)(v13 * pieceDynamics[v8].vel.v[0]) + v10->frame.origin.v[0];
  v15 = (float)(v13 * pieceDynamics[v8].vel.v[1]) + v10->frame.origin.v[1];
  s[0] = (float)((float)(pieceDynamics[v8].vel.v[2] - (float)((float)((float)((prevTime + time) / 2 - fallTime) * 0.001) * glass_fall_gravity->current.value)) * v13) + v10->frame.origin.v[2];
  traceTimeOffset = (unsigned int)(17 * v8) % glass_trace_interval->current.integer;
  if ( time < fallTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_update.cpp", 90, ASSERT_TYPE_ASSERT, "( glassSys->time ) >= ( pieceDynamics->fallTime )", "%s >= %s\n\t%i, %i", "glassSys->time", "pieceDynamics->fallTime", time, fallTime) )
  {
    __debugbreak();
    v5 = glassSys->time;
  }
  v16 = pieceDynamics[v11].fallTime;
  if ( prevTime >= v16 )
    v16 = prevTime;
  LastPassedTraceTime = Glass_Fall_GetLastPassedTraceTime(v16, traceTimeOffset);
  traceTimeOffseta = Glass_Fall_GetLastPassedTraceTime(v5, traceTimeOffset);
  v18 = traceTimeOffseta;
  if ( traceTimeOffseta <= LastPassedTraceTime )
    goto LABEL_17;
  v19 = pieceDynamics[v11].fallTime;
  if ( LastPassedTraceTime > v19 )
    v20 = LastPassedTraceTime + glass_trace_interval->current.integer / 2;
  else
    v20 = pieceDynamics[v11].fallTime;
  if ( traceTimeOffseta < v19 )
  {
    LODWORD(locational) = pieceDynamics[v11].fallTime;
    LODWORD(contentMask) = traceTimeOffseta;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_update.cpp", 110, ASSERT_TYPE_ASSERT, "( nextTraceTime ) >= ( pieceDynamics->fallTime )", "%s >= %s\n\t%i, %i", "nextTraceTime", "pieceDynamics->fallTime", contentMask, locational) )
    {
      __debugbreak();
      prevTime = glassSys->prevTime;
    }
    v18 = traceTimeOffseta;
  }
  v21 = pieceDynamics[v11].vel.v[2];
  v22 = glass_trace_interval->current.integer / 2 + v18;
  v23 = (float)(v20 - prevTime) * 0.001;
  v24 = (float)((float)((prevTime + v20) / 2 - pieceDynamics[v11].fallTime) * 0.001) * glass_fall_gravity->current.value;
  v25 = v23 * pieceDynamics[v11].vel.v[1];
  start.v[0] = (float)(v23 * pieceDynamics[v11].vel.v[0]) + v10->frame.origin.v[0];
  start.v[1] = v25 + v10->frame.origin.v[1];
  start.v[2] = (float)((float)(v21 - v24) * v23) + v10->frame.origin.v[2];
  v26 = (float)(v22 - prevTime) * 0.001;
  v27 = (float)(v26 * pieceDynamics[v11].vel.v[0]) + v10->frame.origin.v[0];
  v28 = v21 - (float)((float)((float)((prevTime + v22) / 2 - pieceDynamics[v11].fallTime) * 0.001) * glass_fall_gravity->current.value);
  v29 = (float)(v26 * pieceDynamics[v11].vel.v[1]) + v10->frame.origin.v[1];
  end.v[0] = v27;
  end.v[2] = (float)(v28 * (float)((float)(v22 - prevTime) * 0.001)) + v10->frame.origin.v[2];
  end.v[1] = v29;
  PhysicsQuery_LegacyTrace(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, &results, &start, &end, &bounds_origin, 2047, 0, 41968017, 0, NULL, All);
  fraction = results.fraction;
  if ( results.fraction >= 1.0 )
    goto LABEL_17;
  v31 = glassSys->time - pieceDynamics[v11].fallTime;
  if ( !results.allsolid )
  {
    if ( v31 > 200 )
    {
      v47 = v61;
      v48 = glassSys->pieceStates;
      goto LABEL_27;
    }
LABEL_24:
    v47 = v61;
    v48 = glassSys->pieceStates;
    if ( (*((_BYTE *)&v48->flags + v61) & 0x10) == 0 )
    {
LABEL_33:
      Glass_FreePiece(glassSys, pieceIndexa);
      return;
    }
LABEL_27:
    v49 = glass_fx_chance->current.value + glassSys->effectChanceAccum;
    glassSys->effectChanceAccum = v49;
    if ( v49 >= 1.0 || (*((_BYTE *)&v48->flags + v47) & 0x10) != 0 )
    {
      v50 = results.normal.v[0];
      v51 = results.normal.v[1];
      _XMM1 = 0i64;
      __asm { vroundss xmm1, xmm1, xmm2, 1 }
      v54 = v49 - *(float *)&_XMM1;
      *(float *)&_XMM1 = end.v[0];
      glassSys->effectChanceAccum = v54;
      origin.v[0] = (float)((float)(*(float *)&_XMM1 - start.v[0]) * fraction) + start.v[0];
      origin.v[1] = (float)((float)(end.v[1] - start.v[1]) * fraction) + start.v[1];
      origin.v[2] = (float)((float)(end.v[2] - start.v[2]) * fraction) + start.v[2];
      if ( (float)((float)((float)(v50 * v50) + (float)(v51 * v51)) + (float)(results.normal.v[2] * results.normal.v[2])) <= 0.0 )
      {
        normal.v[0] = 0.0;
        normal.v[1] = 0.0;
        normal.v[2] = FLOAT_1_0;
      }
      else
      {
        normal.v[0] = v50;
        normal.v[1] = v51;
        normal.v[2] = results.normal.v[2];
      }
      Glass_PlayEffect(&v62->pieceBreakEffect, &origin, &normal);
    }
    goto LABEL_33;
  }
  if ( v31 > 200 )
    goto LABEL_24;
LABEL_17:
  v10->frame.origin.v[2] = s[0];
  v10->frame.origin.v[0] = v14;
  v10->frame.origin.v[1] = v15;
  v32 = pieceDynamics[v11].avel.v[1];
  v33 = LODWORD(pieceDynamics[v11].avel.v[0]);
  v34 = pieceDynamics[v11].avel.v[2];
  v35 = v33;
  *(float *)&v35 = fsqrt((float)((float)(*(float *)&v33 * *(float *)&v33) + (float)(v32 * v32)) + (float)(v34 * v34));
  _XMM3 = v35;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm11, xmm0
  }
  FastSinCos((float)(*(float *)&v35 * v13) * 0.5, &s[1], &c);
  *(float *)&v39 = (float)(*(float *)&v33 * (float)(1.0 / *(float *)&_XMM0)) * s[1];
  *(float *)&v40 = (float)(v32 * (float)(1.0 / *(float *)&_XMM0)) * s[1];
  *(float *)&v41 = (float)(v34 * (float)(1.0 / *(float *)&_XMM0)) * s[1];
  v64 = v40;
  v63 = v39;
  v65 = v41;
  if ( v10 == (FxGlassPiecePlace *)&end )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 722, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
      __debugbreak();
    v39 = v63;
    v40 = v64;
    v41 = v65;
  }
  v42 = v10->frame.quat.v[0];
  v43 = v10->frame.quat.v[3];
  v44 = c;
  v45 = v10->frame.quat.v[2];
  v46 = v10->frame.quat.v[1];
  v10->frame.quat.v[0] = (float)((float)((float)(v43 * *(float *)&v39) + (float)(v10->frame.quat.v[0] * c)) + (float)(v45 * *(float *)&v40)) - (float)(v46 * *(float *)&v41);
  v10->frame.quat.v[1] = (float)((float)((float)(v46 * v44) - (float)(v45 * *(float *)&v39)) + (float)(v43 * *(float *)&v40)) + (float)(v42 * *(float *)&v41);
  v10->frame.quat.v[2] = (float)((float)((float)(v46 * *(float *)&v39) + (float)(v45 * v44)) - (float)(v42 * *(float *)&v40)) + (float)(v43 * *(float *)&v41);
  v10->frame.quat.v[3] = (float)((float)((float)(v43 * v44) - (float)(v42 * *(float *)&v39)) - (float)(v46 * *(float *)&v40)) - (float)(v45 * *(float *)&v41);
  Glass_LinkPiece_Dynamic(glassSys, pieceIndexa);
}

/*
==============
Glass_UpdatePhysics
==============
*/
void Glass_UpdatePhysics(FxGlassSystem *glassSys, unsigned int pieceIndex)
{
  FxGlassPieceDynamics *pieceDynamics; 
  __int64 v4; 
  FxGlassPiecePlace *v6; 
  FxGlassPieceDynamics *v7; 
  unsigned int physicsInstance; 
  unsigned int m_serialAndIndex; 
  unsigned int v10; 
  unsigned __int32 v11; 
  __int64 v12; 
  __int64 v13; 
  hknpBodyId result; 

  pieceDynamics = glassSys->pieceDynamics;
  v4 = pieceIndex;
  v6 = &glassSys->piecePlaces[v4];
  glassSys->pieceStates[v4].flags |= 8u;
  v7 = &pieceDynamics[pieceIndex];
  if ( v7->physicsInstance == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_update.cpp", 175, ASSERT_TYPE_ASSERT, "(pieceDynamics->physicsInstance != 0xFFFFFFFF)", (const char *)&queryFormat, "pieceDynamics->physicsInstance != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v7->physicsInstance) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_update.cpp", 176, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( authWorldId, pieceDynamics->physicsInstance ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( authWorldId, pieceDynamics->physicsInstance ) == 1") )
    __debugbreak();
  physicsInstance = v7->physicsInstance;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( physicsInstance == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", 3) )
    __debugbreak();
  if ( !g_physicsClientWorldsCreated )
  {
    LODWORD(v13) = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v13) )
      __debugbreak();
  }
  m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, physicsInstance, 0)->m_serialAndIndex;
  if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_update.cpp", 178, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, m_serialAndIndex, &v6->frame.origin, &v6->frame.quat);
  if ( glassSys->time >= v7->fallTime && Physics_GetNumConstraints(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v7->physicsInstance) )
  {
    v10 = v7->physicsInstance;
    if ( ((unsigned __int8)g_particleDeferredPhysicsGlassDestroyListCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)g_particleDeferredPhysicsGlassDestroyListCount) )
      __debugbreak();
    v11 = _InterlockedExchangeAdd(g_particleDeferredPhysicsGlassDestroyListCount, 1u);
    if ( v11 >= 0x800 )
    {
      LODWORD(v13) = 2048;
      LODWORD(v12) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_shared.h", 570, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_GLASS_LIST_MAX )", "index doesn't index PARTICLE_DEFERRED_PHYSICS_GLASS_LIST_MAX\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    g_particleDeferredPhysicsGlassDestroyList[0][v11].physicsInstance = v10;
    Glass_StartDelayedFall(glassSys, pieceIndex);
  }
  Glass_LinkPiece_Dynamic(glassSys, pieceIndex);
}

/*
==============
Glass_UpdatePiece
==============
*/
void Glass_UpdatePiece(FxGlassSystem *glassSys, unsigned int unused, unsigned int pieceIndex)
{
  FxGlassPieceDynamics *v5; 
  const dvar_t *v6; 

  v5 = &glassSys->pieceDynamics[pieceIndex];
  if ( v5->physicsInstance == -1 )
  {
    if ( v5->fallTime < glassSys->time )
    {
      v6 = DCONST_DVARMPINT_glass_simple_duration;
      if ( !DCONST_DVARMPINT_glass_simple_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "glass_simple_duration") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( v5->fallTime >= glassSys->time - v6->current.integer )
      {
        if ( v5->physicsInstance == -1 )
        {
          Glass_UpdateFall(glassSys, pieceIndex);
        }
        else
        {
          Glass_FreePiecePhysicsObject(v5);
          Glass_StartDelayedFall(glassSys, pieceIndex);
        }
      }
      else
      {
        Glass_FreePiece(glassSys, pieceIndex);
      }
    }
  }
  else
  {
    Glass_UpdatePhysics(glassSys, pieceIndex);
  }
}

