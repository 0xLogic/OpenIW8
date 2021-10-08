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
  volatile unsigned int state; 

  if ( (unsigned int)s_cgTraceGroundEventWorkersCount >= 4 )
  {
    Com_PrintWarning(1, "CG_TraceGroundWorkers_AddEvent dropped an event because we hit the limit of MAX_TRACE_GROUND_WORKERS.\n");
    return 0;
  }
  else
  {
    __asm { vmovups ymm0, ymmword ptr [rcx] }
    _RDX = &s_cgTraceGroundEventWorkers[(__int64)s_cgTraceGroundEventWorkersCount];
    __asm
    {
      vmovups ymmword ptr [rdx], ymm0
      vmovups ymm1, ymmword ptr [rcx+20h]
      vmovups ymmword ptr [rdx+20h], ymm1
      vmovups xmm0, xmmword ptr [rcx+40h]
      vmovups xmmword ptr [rdx+40h], xmm0
      vmovsd  xmm1, qword ptr [rcx+50h]
      vmovsd  qword ptr [rdx+50h], xmm1
    }
    state = event->results.state;
    ++s_cgTraceGroundEventWorkersCount;
    _RDX->results.state = state;
    __asm
    {
      vmovsd  xmm0, qword ptr [rcx+5Ch]
      vmovsd  qword ptr [rdx+5Ch], xmm0
    }
    _RDX->results.start.v[2] = event->results.start.v[2];
    __asm
    {
      vmovsd  xmm0, qword ptr [rcx+68h]
      vmovsd  qword ptr [rdx+68h], xmm0
    }
    _RDX->results.end.v[2] = event->results.end.v[2];
    _RDX->source[0] = event->source[0];
    _RDX->entNum = event->entNum;
    _RDX->isLeft = event->isLeft;
    _RDX->footstepFlags = event->footstepFlags;
    __asm
    {
      vmovsd  xmm0, qword ptr [rcx+8Ch]
      vmovsd  qword ptr [rdx+8Ch], xmm0
    }
    _RDX->start.v[2] = event->start.v[2];
    __asm
    {
      vmovsd  xmm0, qword ptr [rcx+98h]
      vmovsd  qword ptr [rdx+98h], xmm0
    }
    _RDX->end.v[2] = event->end.v[2];
    _RDX->footstepVFX = event->footstepVFX;
    _RDX->startTime = event->startTime;
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
  _RBX = DCONST_DVARFLT_playerCollisionStickExtention;
  if ( !DCONST_DVARFLT_playerCollisionStickExtention && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCollisionStickExtention") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  return *(float *)&_XMM0;
}

/*
==============
CG_TraceGroundWorkers_ProcessOutput
==============
*/
void CG_TraceGroundWorkers_ProcessOutput(const LocalClientNum_t localClientNum)
{
  __int64 v3; 
  unsigned int v4; 
  __int64 v8; 
  char v9; 
  CgEntitySystem *v10; 
  char v11; 
  __int64 v12; 
  __int128 v13; 
  int v15; 
  int v18; 
  FootstepVFX *footstepVFX; 
  unsigned __int8 surfaceType; 
  int v24; 
  __int64 isPlayerView; 
  __int64 isThirdPerson; 
  cg_t *LocalClientGlobals; 
  vec3_t origin; 

  v3 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF008080, "CG_TraceGroundWorkers_ProcessOutput");
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trace_ground_workers.cpp", 66, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v4 = 0;
  if ( s_cgTraceGroundEventWorkersCount > 0 )
  {
    _RBX = &s_cgTraceGroundEventWorkers[0].results.trace.position.v[1];
    __asm
    {
      vmovaps [rsp+0A8h+var_38], xmm6
      vmovss  xmm6, cs:__real@3f800000
      vmovaps [rsp+0A8h+var_48], xmm7
      vmovss  xmm7, cs:__real@40000000
    }
    while ( 1 )
    {
      if ( v4 >= 4 )
      {
        LODWORD(isThirdPerson) = 4;
        LODWORD(isPlayerView) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trace_ground_workers.cpp", 70, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_cgTraceGroundEventWorkers ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_cgTraceGroundEventWorkers )\n\t%i not in [0, %i)", isPlayerView, isThirdPerson) )
          __debugbreak();
      }
      if ( *((_DWORD *)_RBX + 20) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trace_ground_workers.cpp", 73, ASSERT_TYPE_ASSERT, "(traceGround.results.state == WORKER_TRACE_FINISHED)", (const char *)&queryFormat, "traceGround.results.state == WORKER_TRACE_FINISHED") )
        __debugbreak();
      if ( !*((_BYTE *)_RBX + 120) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trace_ground_workers.cpp", 74, ASSERT_TYPE_ASSERT, "(traceGround.source != TraceGroundSource::NONE)", (const char *)&queryFormat, "traceGround.source != TraceGroundSource::NONE") )
        __debugbreak();
      v8 = *((int *)_RBX + 31);
      v9 = (_BYTE)_RBX[30] & 1;
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(isThirdPerson) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", isThirdPerson) )
          __debugbreak();
      }
      if ( (unsigned int)v3 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(isThirdPerson) = CgEntitySystem::ms_allocatedCount;
        LODWORD(isPlayerView) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isPlayerView, isThirdPerson) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v3] )
      {
        LODWORD(isThirdPerson) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", isThirdPerson) )
          __debugbreak();
      }
      v10 = CgEntitySystem::ms_entitySystemArray[v3];
      if ( (unsigned int)v8 >= 0x800 )
      {
        LODWORD(isThirdPerson) = 2048;
        LODWORD(isPlayerView) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", isPlayerView, isThirdPerson) )
          __debugbreak();
      }
      v13 = 760 * (__int128)v8;
      v12 = v8;
      __asm { vcomiss xmm6, dword ptr [rbx-8] }
      if ( !((*((_QWORD *)&v13 + 1) != 0i64) | v11) )
      {
        __asm { vmulss  xmm1, xmm7, dword ptr [rbx+8] }
        v15 = *((_DWORD *)_RBX + 42);
        __asm
        {
          vaddss  xmm2, xmm1, dword ptr [r15]
          vmulss  xmm1, xmm7, dword ptr [rbx+0Ch]
        }
        v18 = *((_DWORD *)_RBX + 31);
        __asm
        {
          vmovss  dword ptr [rsp+0A8h+origin], xmm2
          vaddss  xmm2, xmm1, dword ptr [rbx]
          vmulss  xmm1, xmm7, dword ptr [rbx+10h]
          vmovss  dword ptr [rsp+0A8h+origin+4], xmm2
          vaddss  xmm2, xmm1, dword ptr [rbx+4]
          vmovss  dword ptr [rsp+0A8h+origin+8], xmm2
        }
        CG_FootstepTracker_SetOrigin((LocalClientNum_t)v3, v18, v15, &origin);
        CG_FootstepTracker_SetStatus((LocalClientNum_t)v3, *((_DWORD *)_RBX + 31), *((_DWORD *)_RBX + 42), BYTE_VALUE);
        if ( ((_BYTE)_RBX[30] & 2) != 0 )
          LocalClientGlobals->lastGroundSurfaceType = (*((int *)_RBX + 5) >> 19) & 0x3F;
        v10->m_entities[v12].surfaceType = (*((int *)_RBX + 5) >> 19) & 0x3F;
        if ( !v9 )
          goto LABEL_38;
        footstepVFX = NULL;
        if ( *((char *)_RBX + 129) < 0 )
          footstepVFX = (FootstepVFX *)*((_QWORD *)_RBX + 20);
        CG_Event_PlayFootstepFX((LocalClientNum_t)v3, *((_DWORD *)_RBX + 31), *((_BYTE *)_RBX + 128), (*((int *)_RBX + 5) >> 19) & 0x3F, (const vec3_t *)(_RBX - 1), 0, 1, footstepVFX);
      }
      if ( v9 )
      {
        surfaceType = v10->m_entities[v12].surfaceType;
        v24 = *((_DWORD *)_RBX + 31);
        if ( surfaceType )
          CG_Event_PlayFootstepSound((LocalClientNum_t)v3, v24, *((_BYTE *)_RBX + 128), surfaceType, *((ScriptableFootstepFlag *)_RBX + 129));
        else
          CG_FootstepTracker_SetStatus((LocalClientNum_t)v3, v24, *((_DWORD *)_RBX + 42), STRUCT_POINTER|BYTE_VALUE);
      }
LABEL_38:
      ++v4;
      _RBX += 64;
      if ( (int)v4 >= s_cgTraceGroundEventWorkersCount )
      {
        __asm
        {
          vmovaps xmm7, [rsp+0A8h+var_48]
          vmovaps xmm6, [rsp+0A8h+var_38]
        }
        break;
      }
    }
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
  __int64 ignoreEntCount; 
  __int64 contentMask; 
  vec3_t end; 
  vec3_t start; 

  v2 = 0;
  if ( s_cgTraceGroundEventWorkersCount > 0 )
  {
    _RDI = &s_cgTraceGroundEventWorkers[0].end;
    do
    {
      if ( v2 >= 4 )
      {
        LODWORD(contentMask) = 4;
        LODWORD(ignoreEntCount) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_trace_ground_workers.cpp", 40, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_cgTraceGroundEventWorkers ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_cgTraceGroundEventWorkers )\n\t%i not in [0, %i)", ignoreEntCount, contentMask) )
          __debugbreak();
      }
      __asm { vmovsd  xmm0, qword ptr [rdi-0Ch] }
      start.v[2] = _RDI[-1].v[2];
      end.v[2] = _RDI->v[2];
      __asm
      {
        vmovsd  qword ptr [rsp+0A8h+start], xmm0
        vmovsd  xmm0, qword ptr [rdi]
        vmovsd  qword ptr [rsp+0A8h+end], xmm0
      }
      CG_StartWorkerGroundTrace(localClientNum, (workerTrace_t *)&_RDI[-13].y, &start, &end, (const int *const)&_RDI[-2].v[1], 1, 65553, 1, 1, All, NULL);
      ++v2;
      _RDI = (vec3_t *)((char *)_RDI + 256);
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

