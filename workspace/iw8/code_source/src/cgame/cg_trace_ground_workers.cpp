/*
==============
CG_TraceGroundWorkers_WaitForWorkers
==============
*/

void CG_TraceGroundWorkers_WaitForWorkers(void)
{
  ?CG_TraceGroundWorkers_WaitForWorkers@@YAXXZ();
}

/*
==============
CG_TraceGroundWorkers_StartWorkers
==============
*/

void __fastcall CG_TraceGroundWorkers_StartWorkers(const LocalClientNum_t localClientNum)
{
  ?CG_TraceGroundWorkers_StartWorkers@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_TraceGroundWorkers_AddEvent
==============
*/

bool __fastcall CG_TraceGroundWorkers_AddEvent(const CgTraceGroundWorkerEvent *event)
{
  return ?CG_TraceGroundWorkers_AddEvent@@YA_NAEBUCgTraceGroundWorkerEvent@@@Z(event);
}

/*
==============
CG_TraceGroundWorkers_GetTraceOffset
==============
*/

double __fastcall CG_TraceGroundWorkers_GetTraceOffset()
{
  double result; 

  *(float *)&result = ?CG_TraceGroundWorkers_GetTraceOffset@@YAMXZ();
  return result;
}

/*
==============
CG_TraceGroundWorkers_ProcessOutput
==============
*/

void __fastcall CG_TraceGroundWorkers_ProcessOutput(const LocalClientNum_t localClientNum)
{
  ?CG_TraceGroundWorkers_ProcessOutput@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_TraceGroundWorkers_AddEvent
==============
*/
char CG_TraceGroundWorkers_AddEvent(const CgTraceGroundWorkerEvent *event)
{
  CgTraceGroundWorkerEvent *v1; 
  volatile unsigned int state; 

  if ( (unsigned int)s_cgTraceGroundEventWorkersCount >= 4 )
  {
    Com_PrintWarning(1, "CG_TraceGroundWorkers_AddEvent dropped an event because we hit the limit of MAX_TRACE_GROUND_WORKERS.\n");
    return 0;
  }
  else
  {
    v1 = &s_cgTraceGroundEventWorkers[(__int64)s_cgTraceGroundEventWorkersCount];
    *(__m256i *)&v1->results.trace.fraction = *(__m256i *)&event->results.trace.fraction;
    *(__m256i *)&v1->results.trace.contents = *(__m256i *)&event->results.trace.contents;
    *(_OWORD *)&v1->results.trace.allsolid = *(_OWORD *)&event->results.trace.allsolid;
    v1->results.trace.debugHitName = event->results.trace.debugHitName;
    state = event->results.state;
    ++s_cgTraceGroundEventWorkersCount;
    v1->results.state = state;
    v1->results.start = event->results.start;
    v1->results.end = event->results.end;
    v1->source[0] = event->source[0];
    v1->entNum = event->entNum;
    v1->isLeft = event->isLeft;
    v1->footstepFlags = event->footstepFlags;
    v1->start = event->start;
    v1->end = event->end;
    v1->footstepVFX = event->footstepVFX;
    v1->startTime = event->startTime;
    return 1;
  }
}

/*
==============
CG_TraceGroundWorkers_GetTraceOffset
==============
*/
float CG_TraceGroundWorkers_GetTraceOffset()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARFLT_playerCollisionStickExtention;
  if ( !DCONST_DVARFLT_playerCollisionStickExtention && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCollisionStickExtention") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.value;
}

/*
==============
CG_TraceGroundWorkers_ProcessOutput
==============
*/
void CG_TraceGroundWorkers_ProcessOutput(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned int v2; 
  float *v3; 
  __int64 v4; 
  char v5; 
  CgEntitySystem *v6; 
  __int64 v7; 
  int v8; 
  float v9; 
  int v10; 
  float v11; 
  FootstepVFX *footstepVFX; 
  unsigned __int8 surfaceType; 
  int v14; 
  __int64 isPlayerView; 
  __int64 isThirdPerson; 
  cg_t *LocalClientGlobals; 
  vec3_t origin; 

  v1 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF008080, "CG_TraceGroundWorkers_ProcessOutput");
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trace_ground_workers.cpp", 66, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v2 = 0;
  if ( s_cgTraceGroundEventWorkersCount > 0 )
  {
    v3 = &s_cgTraceGroundEventWorkers[0].results.trace.position.v[1];
    do
    {
      if ( v2 >= 4 )
      {
        LODWORD(isThirdPerson) = 4;
        LODWORD(isPlayerView) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trace_ground_workers.cpp", 70, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_cgTraceGroundEventWorkers ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_cgTraceGroundEventWorkers )\n\t%i not in [0, %i)", isPlayerView, isThirdPerson) )
          __debugbreak();
      }
      if ( *((_DWORD *)v3 + 20) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trace_ground_workers.cpp", 73, ASSERT_TYPE_ASSERT, "(traceGround.results.state == WORKER_TRACE_FINISHED)", (const char *)&queryFormat, "traceGround.results.state == WORKER_TRACE_FINISHED") )
        __debugbreak();
      if ( !*((_BYTE *)v3 + 120) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trace_ground_workers.cpp", 74, ASSERT_TYPE_ASSERT, "(traceGround.source != TraceGroundSource::NONE)", (const char *)&queryFormat, "traceGround.source != TraceGroundSource::NONE") )
        __debugbreak();
      v4 = *((int *)v3 + 31);
      v5 = (_BYTE)v3[30] & 1;
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(isThirdPerson) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", isThirdPerson) )
          __debugbreak();
      }
      if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(isThirdPerson) = CgEntitySystem::ms_allocatedCount;
        LODWORD(isPlayerView) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isPlayerView, isThirdPerson) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v1] )
      {
        LODWORD(isThirdPerson) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", isThirdPerson) )
          __debugbreak();
      }
      v6 = CgEntitySystem::ms_entitySystemArray[v1];
      if ( (unsigned int)v4 >= 0x800 )
      {
        LODWORD(isThirdPerson) = 2048;
        LODWORD(isPlayerView) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", isPlayerView, isThirdPerson) )
          __debugbreak();
      }
      v7 = v4;
      if ( *(v3 - 2) < 1.0 )
      {
        v8 = *((_DWORD *)v3 + 42);
        v9 = 2.0 * v3[3];
        v10 = *((_DWORD *)v3 + 31);
        origin.v[0] = (float)(2.0 * v3[2]) + *(v3 - 1);
        v11 = 2.0 * v3[4];
        origin.v[1] = v9 + *v3;
        origin.v[2] = v11 + v3[1];
        CG_FootstepTracker_SetOrigin((LocalClientNum_t)v1, v10, v8, &origin);
        CG_FootstepTracker_SetStatus((LocalClientNum_t)v1, *((_DWORD *)v3 + 31), *((_DWORD *)v3 + 42), BYTE_VALUE);
        if ( ((_BYTE)v3[30] & 2) != 0 )
          LocalClientGlobals->lastGroundSurfaceType = (*((int *)v3 + 5) >> 19) & 0x3F;
        v6->m_entities[v7].surfaceType = (*((int *)v3 + 5) >> 19) & 0x3F;
        if ( !v5 )
          goto LABEL_38;
        footstepVFX = NULL;
        if ( *((char *)v3 + 129) < 0 )
          footstepVFX = (FootstepVFX *)*((_QWORD *)v3 + 20);
        CG_Event_PlayFootstepFX((LocalClientNum_t)v1, *((_DWORD *)v3 + 31), *((_BYTE *)v3 + 128), (*((int *)v3 + 5) >> 19) & 0x3F, (const vec3_t *)(v3 - 1), 0, 1, footstepVFX);
      }
      if ( v5 )
      {
        surfaceType = v6->m_entities[v7].surfaceType;
        v14 = *((_DWORD *)v3 + 31);
        if ( surfaceType )
          CG_Event_PlayFootstepSound((LocalClientNum_t)v1, v14, *((_BYTE *)v3 + 128), surfaceType, *((ScriptableFootstepFlag *)v3 + 129));
        else
          CG_FootstepTracker_SetStatus((LocalClientNum_t)v1, v14, *((_DWORD *)v3 + 42), STRUCT_POINTER|BYTE_VALUE);
      }
LABEL_38:
      ++v2;
      v3 += 64;
    }
    while ( (int)v2 < s_cgTraceGroundEventWorkersCount );
  }
  s_cgTraceGroundEventWorkersCount = 0;
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_TraceGroundWorkers_StartWorkers
==============
*/
void CG_TraceGroundWorkers_StartWorkers(const LocalClientNum_t localClientNum)
{
  unsigned int v2; 
  vec3_t *p_end; 
  double v4; 
  __int64 ignoreEntCount; 
  __int64 contentMask; 
  vec3_t end; 
  vec3_t start; 

  v2 = 0;
  if ( s_cgTraceGroundEventWorkersCount > 0 )
  {
    p_end = &s_cgTraceGroundEventWorkers[0].end;
    do
    {
      if ( v2 >= 4 )
      {
        LODWORD(contentMask) = 4;
        LODWORD(ignoreEntCount) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trace_ground_workers.cpp", 40, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_cgTraceGroundEventWorkers ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_cgTraceGroundEventWorkers )\n\t%i not in [0, %i)", ignoreEntCount, contentMask) )
          __debugbreak();
      }
      v4 = *(double *)p_end[-1].v;
      start.v[2] = p_end[-1].v[2];
      end.v[2] = p_end->v[2];
      *(double *)start.v = v4;
      *(_QWORD *)end.v = *(_QWORD *)p_end->v;
      CG_StartWorkerGroundTrace(localClientNum, (workerTrace_t *)&p_end[-13].y, &start, &end, (const int *const)&p_end[-2].v[1], 1, 65553, 1, 1, All, NULL);
      ++v2;
      p_end = (vec3_t *)((char *)p_end + 256);
    }
    while ( (int)v2 < s_cgTraceGroundEventWorkersCount );
  }
}

/*
==============
CG_TraceGroundWorkers_WaitForWorkers
==============
*/
void CG_TraceGroundWorkers_WaitForWorkers(void)
{
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_TRACE_GROUND);
}

