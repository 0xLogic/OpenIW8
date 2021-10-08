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
bool DLogEvent_ClientPerfSample::WriteEvent(DLogEvent_ClientPerfSample *this, DLogContext *context)
{
  int locationId; 
  int sceneRes; 
  bool result; 
  bool v56; 
  char v102; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovss  xmm0, dword ptr [rcx+0A0h] }
  locationId = this->locationId;
  sceneRes = this->sceneRes;
  __asm
  {
    vmovss  [rsp+118h+var_C0], xmm0
    vmovss  xmm0, dword ptr [rcx+9Ch]
    vmovss  [rsp+118h+var_C4], xmm0
    vmovss  xmm0, dword ptr [rcx+98h]
    vmovss  [rsp+118h+var_C8], xmm0
    vmovss  xmm0, dword ptr [rcx+94h]
    vmovss  [rsp+118h+var_CC], xmm0
    vmovss  xmm0, dword ptr [rcx+90h]
    vmovss  [rsp+118h+var_D0], xmm0
    vmovss  xmm0, dword ptr [rcx+8Ch]
    vmovss  [rsp+118h+var_D4], xmm0
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps [rsp+118h+var_A8], xmm14
    vmovaps [rsp+118h+var_B8], xmm15
    vmovss  xmm0, dword ptr [rcx+88h]
    vmovss  xmm15, dword ptr [rcx+4Ch]
    vmovss  xmm14, dword ptr [rcx+48h]
    vmovss  xmm13, dword ptr [rcx+44h]
    vmovss  xmm12, dword ptr [rcx+40h]
    vmovss  xmm11, dword ptr [rcx+3Ch]
    vmovss  xmm10, dword ptr [rcx+38h]
    vmovss  xmm9, dword ptr [rcx+34h]
    vmovss  xmm8, dword ptr [rcx+30h]
    vmovss  xmm7, dword ptr [rcx+2Ch]
    vmovss  xmm6, dword ptr [rcx+28h]
    vmovss  [rsp+118h+var_D8], xmm0
    vmovss  xmm0, dword ptr [rcx+84h]
    vmovss  [rsp+118h+var_DC], xmm0
    vmovss  xmm0, dword ptr [rcx+80h]
    vmovss  [rsp+118h+var_E0], xmm0
    vmovss  xmm0, dword ptr [rcx+7Ch]
    vmovss  [rsp+118h+var_E4], xmm0
    vmovss  xmm0, dword ptr [rcx+78h]
    vmovss  [rsp+118h+var_E8], xmm0
    vmovss  xmm0, dword ptr [rcx+74h]
    vmovss  [rsp+118h+var_EC], xmm0
    vmovss  xmm0, dword ptr [rcx+70h]
    vmovss  [rsp+118h+var_F0], xmm0
    vmovss  xmm0, dword ptr [rcx+5Ch]
    vmovss  [rsp+118h+var_F4], xmm0
    vmovss  xmm0, dword ptr [rcx+60h]
    vmovss  [rsp+118h+var_F8], xmm0
    vmovss  xmm0, dword ptr [rcx+58h]
    vmovss  [rsp+118h+arg_18], xmm0
    vmovss  xmm0, dword ptr [rcx+54h]
    vmovss  [rsp+118h+arg_10], xmm0
    vmovss  xmm0, dword ptr [rcx+50h]
    vmovss  [rsp+118h+arg_0], xmm0
  }
  if ( DLog_IsActive() )
  {
    v56 = DLog_BeginEvent(context, "dlog_event_client_perf_sample");
    context->autoEndEvent = 1;
    if ( v56 )
    {
      __asm { vmovaps xmm2, xmm6; value }
      if ( DLog_Float32(context, "frame_ms", *(float *)&_XMM2) )
      {
        __asm { vmovaps xmm2, xmm7; value }
        if ( DLog_Float32(context, "avg_ms", *(float *)&_XMM2) )
        {
          __asm { vmovaps xmm2, xmm8; value }
          if ( DLog_Float32(context, "absdev_ms", *(float *)&_XMM2) )
          {
            __asm { vmovaps xmm2, xmm9; value }
            if ( DLog_Float32(context, "min_frame_ms", *(float *)&_XMM2) )
            {
              __asm { vmovaps xmm2, xmm10; value }
              if ( DLog_Float32(context, "max_frame_ms", *(float *)&_XMM2) )
              {
                __asm { vmovaps xmm2, xmm11; value }
                if ( DLog_Float32(context, "gpu_frame_ms", *(float *)&_XMM2) )
                {
                  __asm { vmovaps xmm2, xmm12; value }
                  if ( DLog_Float32(context, "gpu_avg_ms", *(float *)&_XMM2) )
                  {
                    __asm { vmovaps xmm2, xmm13; value }
                    if ( DLog_Float32(context, "gpu_absdev_ms", *(float *)&_XMM2) )
                    {
                      __asm { vmovaps xmm2, xmm14; value }
                      if ( DLog_Float32(context, "gpu_min_frame_ms", *(float *)&_XMM2) )
                      {
                        __asm { vmovaps xmm2, xmm15; value }
                        if ( DLog_Float32(context, "gpu_max_frame_ms", *(float *)&_XMM2) )
                        {
                          __asm { vmovss  xmm2, [rsp+118h+arg_0]; value }
                          if ( DLog_Float32(context, "x", *(float *)&_XMM2) )
                          {
                            __asm { vmovss  xmm2, [rsp+118h+arg_10]; value }
                            if ( DLog_Float32(context, "y", *(float *)&_XMM2) )
                            {
                              __asm { vmovss  xmm2, [rsp+118h+arg_18]; value }
                              if ( DLog_Float32(context, "z", *(float *)&_XMM2) )
                              {
                                __asm { vmovss  xmm2, [rsp+118h+var_F8]; value }
                                if ( DLog_Float32(context, "yaw", *(float *)&_XMM2) )
                                {
                                  __asm { vmovss  xmm2, [rsp+118h+var_F4]; value }
                                  if ( DLog_Float32(context, "pitch", *(float *)&_XMM2) && DLog_Int32(context, "sceneres", sceneRes) && DLog_Int32(context, "location_id", locationId) )
                                  {
                                    __asm { vmovss  xmm2, [rsp+118h+var_F0]; value }
                                    if ( DLog_Float32(context, "sunshadow", *(float *)&_XMM2) )
                                    {
                                      __asm { vmovss  xmm2, [rsp+118h+var_EC]; value }
                                      if ( DLog_Float32(context, "spotshadow", *(float *)&_XMM2) )
                                      {
                                        __asm { vmovss  xmm2, [rsp+118h+var_E8]; value }
                                        if ( DLog_Float32(context, "depthhack", *(float *)&_XMM2) )
                                        {
                                          __asm { vmovss  xmm2, [rsp+118h+var_E4]; value }
                                          if ( DLog_Float32(context, "opaque", *(float *)&_XMM2) )
                                          {
                                            __asm { vmovss  xmm2, [rsp+118h+var_E0]; value }
                                            if ( DLog_Float32(context, "trans", *(float *)&_XMM2) )
                                            {
                                              __asm { vmovss  xmm2, [rsp+118h+var_DC]; value }
                                              if ( DLog_Float32(context, "emissive", *(float *)&_XMM2) )
                                              {
                                                __asm { vmovss  xmm2, [rsp+118h+var_D8]; value }
                                                if ( DLog_Float32(context, "lighting", *(float *)&_XMM2) )
                                                {
                                                  __asm { vmovss  xmm2, [rsp+118h+var_D4]; value }
                                                  if ( DLog_Float32(context, "volumetrics", *(float *)&_XMM2) )
                                                  {
                                                    __asm { vmovss  xmm2, [rsp+118h+var_D0]; value }
                                                    if ( DLog_Float32(context, "dxr", *(float *)&_XMM2) )
                                                    {
                                                      __asm { vmovss  xmm2, [rsp+118h+var_CC]; value }
                                                      if ( DLog_Float32(context, "postfx", *(float *)&_XMM2) )
                                                      {
                                                        __asm { vmovss  xmm2, [rsp+118h+var_C8]; value }
                                                        if ( DLog_Float32(context, "antialias", *(float *)&_XMM2) )
                                                        {
                                                          __asm { vmovss  xmm2, [rsp+118h+var_C4]; value }
                                                          if ( DLog_Float32(context, "ui_total", *(float *)&_XMM2) )
                                                          {
                                                            __asm { vmovss  xmm2, [rsp+118h+var_C0]; value }
                                                            if ( DLog_Float32(context, "compute", *(float *)&_XMM2) )
                                                            {
                                                              result = 1;
                                                              goto LABEL_4;
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    context->error = DLOG_ERROR_NOT_ACTIVE;
  }
  result = 0;
LABEL_4:
  __asm { vmovaps xmm14, [rsp+118h+var_A8] }
  _R11 = &v102;
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
    vmovaps xmm15, [rsp+118h+var_B8]
  }
  return result;
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

void __fastcall DLogEvent_ClientPerfSample::Update(DLogEvent_ClientPerfSample *this, double _XMM1_8)
{
  int ControllerFromClient; 
  const dvar_t *v4; 
  int integer; 
  int v13; 
  cg_t *v36; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  const dvar_t *v40; 
  int v41; 
  const dvar_t *v42; 
  int v43; 
  int *fpsMax; 
  int *fps; 
  float v46; 
  float v47; 
  float v48; 
  float varianceMSec; 
  float minTimeMSec; 
  float maxTimeMSec; 

  _R13 = this;
  if ( !Dlog_ShouldRecordPerformance(LOCAL_CLIENT_0) )
  {
    _R13->needReset = 1;
    return;
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  if ( ControllerFromClient == DLogEvent_Base::GetControllerIndex(_R13) )
  {
    if ( !_R13->needReset )
      goto LABEL_7;
  }
  else
  {
    _R13->needReset = 1;
  }
  DLogEvent_Base::Reset(_R13);
  DLogEvent_Base::Init(_R13, ControllerFromClient);
  _R13->arrivedInGameTime = Sys_Milliseconds();
LABEL_7:
  v4 = DVARINT_dlog_perf_min_time_in_level;
  if ( !DVARINT_dlog_perf_min_time_in_level && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dlog_perf_min_time_in_level") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  if ( Sys_Milliseconds() - _R13->arrivedInGameTime >= integer )
  {
    CG_Draw_GetDetailedFullFrontendFPSTime(&minTimeMSec, &maxTimeMSec, &_R13->currentFrameMs, &varianceMSec, NULL, NULL, NULL);
    CG_Draw_GetDetailedFPSTime(&v47, &v48, &_R13->gpuCurrentFrameMs, &v46, NULL, NULL, NULL, 1);
    if ( R_GPU_IsProfileEnabled() )
      R_GPU_GetMainTotals(&_R13->sunshadowTotal, &_R13->spotshadowTotal, &_R13->depthhackTotal, &_R13->opaqueTotal, &_R13->transTotal, &_R13->emissiveTotal, &_R13->lightingTotal, &_R13->volumetricsTotal, &_R13->dxrTotal, &_R13->postfxTotal, &_R13->antialiasTotal, &_R13->uiTotal, &_R13->computeTotal);
    __asm
    {
      vmovss  xmm2, dword ptr [r13+28h]
      vmovss  xmm0, cs:__real@41800000
      vcomiss xmm2, xmm0
      vmovss  xmm0, cs:__real@3f800000
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm4, xmm4, xmm4
      vcvtsi2ss xmm4, xmm4, rax
    }
    v13 = _R13->framecountTotal + 1;
    __asm
    {
      vcvtsi2ss xmm1, xmm1, rax
      vdivss  xmm3, xmm0, xmm1
      vmulss  xmm1, xmm4, dword ptr [r13+2Ch]
      vaddss  xmm2, xmm1, xmm2
      vmulss  xmm1, xmm4, dword ptr [r13+30h]
      vmulss  xmm0, xmm2, xmm3
      vmovss  dword ptr [r13+2Ch], xmm0
      vaddss  xmm0, xmm1, [rsp+0B8h+varianceMSec]
      vmulss  xmm2, xmm0, xmm3
      vmovss  xmm0, [rsp+0B8h+minTimeMSec]
      vminss  xmm1, xmm0, dword ptr [r13+34h]
      vmovss  xmm0, dword ptr [r13+38h]
      vmovss  dword ptr [r13+34h], xmm1
      vmaxss  xmm1, xmm0, [rsp+0B8h+maxTimeMSec]
      vmulss  xmm0, xmm4, dword ptr [r13+40h]
      vmovss  dword ptr [r13+38h], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx]
      vmulss  xmm0, xmm4, dword ptr [r13+44h]
      vmovss  dword ptr [r13+30h], xmm2
      vmulss  xmm2, xmm1, xmm3
      vaddss  xmm1, xmm0, [rsp+0B8h+var_48]
      vmovss  xmm0, [rsp+0B8h+var_44]
      vmovss  dword ptr [r13+40h], xmm2
      vmulss  xmm2, xmm1, xmm3
      vminss  xmm1, xmm0, dword ptr [r13+48h]
      vmovss  xmm0, dword ptr [r13+4Ch]
      vmovss  dword ptr [r13+48h], xmm1
      vmaxss  xmm1, xmm0, [rsp+0B8h+var_40]
      vmovss  dword ptr [r13+4Ch], xmm1
      vmovss  dword ptr [r13+44h], xmm2
    }
    _R13->framecountTotal = v13;
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
    v36 = cg_t::ms_cgArray[0];
    p_view = &cg_t::ms_cgArray[0]->refdef.view;
    if ( cg_t::ms_cgArray[0] == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = p_view->refdefViewOrg_aab;
    v = (_DWORD *)p_view->org.org.v;
    if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    LODWORD(_R13->viewposition.v[0]) = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
    LODWORD(_R13->viewposition.v[1]) = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
    LODWORD(_R13->viewposition.v[2]) = v[2] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2));
    _R13->viewangle.v[0] = v36->refdefViewAngles.v[0];
    _R13->viewangle.v[1] = v36->refdefViewAngles.v[1];
    *(_QWORD *)&_R13->viewangle.z = LODWORD(v36->refdefViewAngles.v[2]);
    v40 = DVARINT_r_sceneRes;
    if ( !DVARINT_r_sceneRes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneRes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v40);
    _R13->sceneRes = v40->current.integer;
    v41 = Sys_Milliseconds();
    v42 = DVARINT_dlog_perf_frequency;
    v43 = v41;
    if ( !DVARINT_dlog_perf_frequency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dlog_perf_frequency") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v42);
    if ( v43 - _R13->lastUpdateMs > v42->current.integer )
      DLogEvent_Base::Send(_R13, 1);
  }
}

