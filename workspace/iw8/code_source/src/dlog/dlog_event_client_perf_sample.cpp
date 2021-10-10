/*
==============
DLogEvent_ClientPerfSample::ResetData
==============
*/

void __fastcall DLogEvent_ClientPerfSample::ResetData(DLogEvent_ClientPerfSample *this)
{
  ?ResetData@DLogEvent_ClientPerfSample@@MEAAXXZ(this);
}

/*
==============
DLogEvent_ClientPerfSample::Update
==============
*/

void __fastcall DLogEvent_ClientPerfSample::Update(DLogEvent_ClientPerfSample *this)
{
  ?Update@DLogEvent_ClientPerfSample@@QEAAXXZ(this);
}

/*
==============
DLogEvent_ClientPerfSample::Send
==============
*/

void __fastcall DLogEvent_ClientPerfSample::Send(DLogEvent_ClientPerfSample *this, const bool resetAfterSend, const int localId)
{
  ?Send@DLogEvent_ClientPerfSample@@QEAAX_NH@Z(this, resetAfterSend, localId);
}

/*
==============
DLog_RecordPerf_f
==============
*/

void __fastcall DLog_RecordPerf_f()
{
  ?DLog_RecordPerf_f@@YAXXZ();
}

/*
==============
DLogEvent_ClientPerfSample::WriteEvent
==============
*/

bool __fastcall DLogEvent_ClientPerfSample::WriteEvent(DLogEvent_ClientPerfSample *this, DLogContext *context)
{
  return ?WriteEvent@DLogEvent_ClientPerfSample@@MEAA_NPEAUDLogContext@@@Z(this, context);
}

/*
==============
DLogEvent_ClientPerfSample::WriteEvent
==============
*/
char DLogEvent_ClientPerfSample::WriteEvent(DLogEvent_ClientPerfSample *this, DLogContext *context)
{
  int locationId; 
  int sceneRes; 
  float gpuMaxFrameMs; 
  float gpuMinFrameMs; 
  float gpuAbsdevMs; 
  float gpuAvgMs; 
  float gpuCurrentFrameMs; 
  float maxFrameMs; 
  float minFrameMs; 
  float absdevMs; 
  float avgMs; 
  float currentFrameMs; 
  bool v16; 
  float v17; 
  float v18; 
  float sunshadowTotal; 
  float spotshadowTotal; 
  float depthhackTotal; 
  float opaqueTotal; 
  float transTotal; 
  float emissiveTotal; 
  float lightingTotal; 
  float volumetricsTotal; 
  float dxrTotal; 
  float postfxTotal; 
  float antialiasTotal; 
  float uiTotal; 
  float computeTotal; 
  float v32; 
  float v33; 
  float v34; 

  locationId = this->locationId;
  sceneRes = this->sceneRes;
  computeTotal = this->computeTotal;
  uiTotal = this->uiTotal;
  antialiasTotal = this->antialiasTotal;
  postfxTotal = this->postfxTotal;
  dxrTotal = this->dxrTotal;
  volumetricsTotal = this->volumetricsTotal;
  gpuMaxFrameMs = this->gpuMaxFrameMs;
  gpuMinFrameMs = this->gpuMinFrameMs;
  gpuAbsdevMs = this->gpuAbsdevMs;
  gpuAvgMs = this->gpuAvgMs;
  gpuCurrentFrameMs = this->gpuCurrentFrameMs;
  maxFrameMs = this->maxFrameMs;
  minFrameMs = this->minFrameMs;
  absdevMs = this->absdevMs;
  avgMs = this->avgMs;
  currentFrameMs = this->currentFrameMs;
  lightingTotal = this->lightingTotal;
  emissiveTotal = this->emissiveTotal;
  transTotal = this->transTotal;
  opaqueTotal = this->opaqueTotal;
  depthhackTotal = this->depthhackTotal;
  spotshadowTotal = this->spotshadowTotal;
  sunshadowTotal = this->sunshadowTotal;
  v18 = this->viewangle.v[0];
  v17 = this->viewangle.v[1];
  v34 = this->viewposition.v[2];
  v33 = this->viewposition.v[1];
  v32 = this->viewposition.v[0];
  if ( DLog_IsActive() )
  {
    v16 = DLog_BeginEvent(context, "dlog_event_client_perf_sample");
    context->autoEndEvent = 1;
    if ( v16 && DLog_Float32(context, "frame_ms", currentFrameMs) && DLog_Float32(context, "avg_ms", avgMs) && DLog_Float32(context, "absdev_ms", absdevMs) && DLog_Float32(context, "min_frame_ms", minFrameMs) && DLog_Float32(context, "max_frame_ms", maxFrameMs) && DLog_Float32(context, "gpu_frame_ms", gpuCurrentFrameMs) && DLog_Float32(context, "gpu_avg_ms", gpuAvgMs) && DLog_Float32(context, "gpu_absdev_ms", gpuAbsdevMs) && DLog_Float32(context, "gpu_min_frame_ms", gpuMinFrameMs) && DLog_Float32(context, "gpu_max_frame_ms", gpuMaxFrameMs) && DLog_Float32(context, "x", v32) && DLog_Float32(context, "y", v33) && DLog_Float32(context, "z", v34) && DLog_Float32(context, "yaw", v17) && DLog_Float32(context, "pitch", v18) && DLog_Int32(context, "sceneres", sceneRes) && DLog_Int32(context, "location_id", locationId) && DLog_Float32(context, "sunshadow", sunshadowTotal) && DLog_Float32(context, "spotshadow", spotshadowTotal) && DLog_Float32(context, "depthhack", depthhackTotal) && DLog_Float32(context, "opaque", opaqueTotal) && DLog_Float32(context, "trans", transTotal) && DLog_Float32(context, "emissive", emissiveTotal) && DLog_Float32(context, "lighting", lightingTotal) && DLog_Float32(context, "volumetrics", volumetricsTotal) && DLog_Float32(context, "dxr", dxrTotal) && DLog_Float32(context, "postfx", postfxTotal) && DLog_Float32(context, "antialias", antialiasTotal) && DLog_Float32(context, "ui_total", uiTotal) && DLog_Float32(context, "compute", computeTotal) )
      return 1;
  }
  else
  {
    context->error = DLOG_ERROR_NOT_ACTIVE;
  }
  return 0;
}

/*
==============
DLogEvent_ClientPerfSample::ResetData
==============
*/
void DLogEvent_ClientPerfSample::ResetData(DLogEvent_ClientPerfSample *this)
{
  this->lastUpdateMs = Sys_Milliseconds();
  *(_QWORD *)&this->framecountTotal = 0i64;
  *(_QWORD *)&this->avgMs = 0i64;
  *(_QWORD *)&this->gpuCurrentFrameMs = 0i64;
  this->gpuAbsdevMs = 0.0;
  *(_QWORD *)&this->minFrameMs = 2139095039i64;
  *(_QWORD *)&this->gpuMinFrameMs = 2139095039i64;
  *(_QWORD *)this->viewposition.v = 0i64;
  *(_QWORD *)&this->viewposition.z = 0i64;
  *(_QWORD *)&this->viewangle.y = 0i64;
  *(_QWORD *)&this->sceneRes = 0i64;
  *(_QWORD *)&this->sunshadowTotal = 0i64;
  *(_QWORD *)&this->depthhackTotal = 0i64;
  *(_QWORD *)&this->transTotal = 0i64;
  *(_QWORD *)&this->lightingTotal = 0i64;
  *(_QWORD *)&this->dxrTotal = 0i64;
  *(_QWORD *)&this->antialiasTotal = 0i64;
  this->computeTotal = 0.0;
  this->needReset = 0;
}

/*
==============
DLog_RecordPerf_f
==============
*/
void DLog_RecordPerf_f(void)
{
  int v0; 
  const char *v1; 

  v0 = 0;
  if ( Cmd_Argc() > 1 )
  {
    v1 = Cmd_Argv(1);
    v0 = atoi(v1);
  }
  s_clientPerfSampleEvent.locationId = v0;
  DLogEvent_Base::Send(&s_clientPerfSampleEvent, 1);
  s_clientPerfSampleEvent.locationId = 0;
}

/*
==============
DLogEvent_ClientPerfSample::Send
==============
*/
void DLogEvent_ClientPerfSample::Send(DLogEvent_ClientPerfSample *this, const bool resetAfterSend, const int localId)
{
  this->locationId = localId;
  DLogEvent_Base::Send(this, resetAfterSend);
  this->locationId = 0;
}

/*
==============
DLogEvent_ClientPerfSample::Update
==============
*/
void DLogEvent_ClientPerfSample::Update(DLogEvent_ClientPerfSample *this)
{
  int ControllerFromClient; 
  const dvar_t *v3; 
  int integer; 
  float *p_gpuCurrentFrameMs; 
  float currentFrameMs; 
  __int64 framecountTotal; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v17; 
  float v18; 
  cg_t *v23; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  const dvar_t *v27; 
  int v28; 
  const dvar_t *v29; 
  int v30; 
  int *fpsMax; 
  int *fps; 
  float v33; 
  float v34; 
  float v35; 
  float varianceMSec; 
  float minTimeMSec; 
  float maxTimeMSec; 

  if ( !Dlog_ShouldRecordPerformance(LOCAL_CLIENT_0) )
  {
    this->needReset = 1;
    return;
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  if ( ControllerFromClient == DLogEvent_Base::GetControllerIndex(this) )
  {
    if ( !this->needReset )
      goto LABEL_7;
  }
  else
  {
    this->needReset = 1;
  }
  DLogEvent_Base::Reset(this);
  DLogEvent_Base::Init(this, ControllerFromClient);
  this->arrivedInGameTime = Sys_Milliseconds();
LABEL_7:
  v3 = DVARINT_dlog_perf_min_time_in_level;
  if ( !DVARINT_dlog_perf_min_time_in_level && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dlog_perf_min_time_in_level") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  integer = v3->current.integer;
  if ( Sys_Milliseconds() - this->arrivedInGameTime >= integer )
  {
    CG_Draw_GetDetailedFullFrontendFPSTime(&minTimeMSec, &maxTimeMSec, &this->currentFrameMs, &varianceMSec, NULL, NULL, NULL);
    p_gpuCurrentFrameMs = &this->gpuCurrentFrameMs;
    CG_Draw_GetDetailedFPSTime(&v34, &v35, &this->gpuCurrentFrameMs, &v33, NULL, NULL, NULL, 1);
    if ( R_GPU_IsProfileEnabled() )
    {
      R_GPU_GetMainTotals(&this->sunshadowTotal, &this->spotshadowTotal, &this->depthhackTotal, &this->opaqueTotal, &this->transTotal, &this->emissiveTotal, &this->lightingTotal, &this->volumetricsTotal, &this->dxrTotal, &this->postfxTotal, &this->antialiasTotal, &this->uiTotal, &this->computeTotal);
      p_gpuCurrentFrameMs = &this->gpuCurrentFrameMs;
    }
    currentFrameMs = this->currentFrameMs;
    if ( currentFrameMs < 16.0 )
    {
      this->currentFrameMs = 16.0;
      currentFrameMs = FLOAT_16_0;
    }
    framecountTotal = this->framecountTotal;
    v8 = (float)framecountTotal;
    v9 = (float)(unsigned int)(framecountTotal + 1);
    v10 = 1.0 / v9;
    v11 = v8 * this->absdevMs;
    this->avgMs = (float)((float)(v8 * this->avgMs) + currentFrameMs) * v10;
    v12 = (float)(v11 + varianceMSec) * v10;
    _XMM0 = LODWORD(minTimeMSec);
    __asm { vminss  xmm1, xmm0, dword ptr [r13+34h] }
    _XMM0 = LODWORD(this->maxFrameMs);
    this->minFrameMs = *(float *)&_XMM1;
    __asm { vmaxss  xmm1, xmm0, [rsp+0B8h+maxTimeMSec] }
    *(float *)&_XMM0 = v8 * this->gpuAvgMs;
    this->maxFrameMs = *(float *)&_XMM1;
    *(float *)&_XMM1 = *(float *)&_XMM0 + *p_gpuCurrentFrameMs;
    v17 = v8 * this->gpuAbsdevMs;
    this->absdevMs = v12;
    v18 = v17 + v33;
    _XMM0 = LODWORD(v34);
    this->gpuAvgMs = *(float *)&_XMM1 * v10;
    __asm { vminss  xmm1, xmm0, dword ptr [r13+48h] }
    _XMM0 = LODWORD(this->gpuMaxFrameMs);
    this->gpuMinFrameMs = *(float *)&_XMM1;
    __asm { vmaxss  xmm1, xmm0, [rsp+0B8h+var_40] }
    this->gpuMaxFrameMs = *(float *)&_XMM1;
    this->gpuAbsdevMs = v18 * v10;
    this->framecountTotal = framecountTotal + 1;
    if ( !cg_t::ms_allocatedCount )
    {
      LODWORD(fps) = cg_t::ms_allocatedCount;
      LODWORD(fpsMax) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", fpsMax, fps) )
        __debugbreak();
    }
    if ( !cg_t::ms_cgArray[0] )
    {
      LODWORD(fps) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", fps) )
        __debugbreak();
    }
    if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
    {
      LODWORD(fps) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", fps) )
        __debugbreak();
    }
    v23 = cg_t::ms_cgArray[0];
    p_view = &cg_t::ms_cgArray[0]->refdef.view;
    if ( cg_t::ms_cgArray[0] == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = p_view->refdefViewOrg_aab;
    v = (_DWORD *)p_view->org.org.v;
    if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    LODWORD(this->viewposition.v[0]) = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
    LODWORD(this->viewposition.v[1]) = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
    LODWORD(this->viewposition.v[2]) = v[2] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2));
    this->viewangle.v[0] = v23->refdefViewAngles.v[0];
    this->viewangle.v[1] = v23->refdefViewAngles.v[1];
    *(_QWORD *)&this->viewangle.z = LODWORD(v23->refdefViewAngles.v[2]);
    v27 = DVARINT_r_sceneRes;
    if ( !DVARINT_r_sceneRes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneRes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    this->sceneRes = v27->current.integer;
    v28 = Sys_Milliseconds();
    v29 = DVARINT_dlog_perf_frequency;
    v30 = v28;
    if ( !DVARINT_dlog_perf_frequency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dlog_perf_frequency") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    if ( v30 - this->lastUpdateMs > v29->current.integer )
      DLogEvent_Base::Send(this, 1);
  }
}

