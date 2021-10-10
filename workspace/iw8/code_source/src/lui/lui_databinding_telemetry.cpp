/*
==============
LUI_DataBinding_Telemetry_FrameUpdate
==============
*/

void __fastcall LUI_DataBinding_Telemetry_FrameUpdate(LocalClientNum_t localClientNum)
{
  ?LUI_DataBinding_Telemetry_FrameUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_DataBinding_Telemetry_FrameUpdate
==============
*/
void LUI_DataBinding_Telemetry_FrameUpdate(LocalClientNum_t localClientNum)
{
  unsigned __int64 v2; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 

  v2 = Sys_Microseconds();
  Sys_ProfBeginNamedEvent(0xFF808080, "LUI_DataBinding_Telemetry_FrameUpdate");
  v3 = DVARINT_lui_refreshRate_Telemetry_FPS;
  if ( !DVARINT_lui_refreshRate_Telemetry_FPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_refreshRate_Telemetry_FPS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( bindingTelemetry.lastTimeFPS + v3->current.integer <= v2 )
  {
    bindingTelemetry.lastTimeFPS = v2;
    LUIBinding::PushInt(&s_LUI_DataBinding_FPS);
  }
  v4 = DVARINT_lui_refreshRate_Telemetry_Latency;
  if ( !DVARINT_lui_refreshRate_Telemetry_Latency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_refreshRate_Telemetry_Latency") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( bindingTelemetry.lastTimeLatency + v4->current.integer <= v2 )
  {
    bindingTelemetry.lastTimeLatency = v2;
    LUIBinding::PushInt(&s_LUI_DataBinding_Latency, localClientNum);
  }
  v5 = DVARINT_lui_refreshRate_Telemetry_GPUTime;
  if ( !DVARINT_lui_refreshRate_Telemetry_GPUTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_refreshRate_Telemetry_GPUTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( bindingTelemetry.lastTimeGPUTime + v5->current.integer <= v2 )
  {
    bindingTelemetry.lastTimeGPUTime = v2;
    LUIBinding::PushFloat(&s_LUI_DataBinding_GPU_Time);
  }
  v6 = DVARINT_lui_refreshRate_Telemetry_CPUTime;
  if ( !DVARINT_lui_refreshRate_Telemetry_CPUTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_refreshRate_Telemetry_CPUTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( bindingTelemetry.lastTimeCPUTime + v6->current.integer <= v2 )
  {
    bindingTelemetry.lastTimeCPUTime = v2;
    LUIBinding::PushFloat(&s_LUI_DataBinding_CPU_Time);
  }
  LUIBinding::PushBool(&s_LUI_DataBinding_volume_mute);
  LUIBinding::PushBool(&s_LUI_DataBinding_voice_mute);
  Sys_ProfEndNamedEvent();
}

/*
==============
s_LUI_DataBinding_Get_CPU_Time
==============
*/
float s_LUI_DataBinding_Get_CPU_Time()
{
  float pTotalMSec; 
  int fps; 

  CG_Draw_GetFrontendFPS(&fps, &pTotalMSec);
  return pTotalMSec;
}

/*
==============
s_LUI_DataBinding_Get_FPS
==============
*/
__int64 s_LUI_DataBinding_Get_FPS()
{
  int fps; 

  CG_Draw_GetFullFrontendFPS(&fps, NULL);
  return (unsigned int)fps;
}

/*
==============
s_LUI_DataBinding_Get_GPU_Time
==============
*/
float s_LUI_DataBinding_Get_GPU_Time()
{
  float pTotalMSec; 
  int fps; 

  CG_Draw_GetFPS(&fps, &pTotalMSec, 1);
  return pTotalMSec;
}

/*
==============
s_LUI_DataBinding_Get_Latency
==============
*/
__int64 s_LUI_DataBinding_Get_Latency(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  playerState_s *p_predictedPlayerState; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
      __debugbreak();
    LODWORD(v7) = 2;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  if ( clientUIActives[v1].frontEndSceneState[0] )
    return 0xFFFFFFFFi64;
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v6) = 2;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  if ( clientUIActives[v1].connectionState != CA_ACTIVE )
    return 0xFFFFFFFFi64;
  if ( (unsigned int)v1 >= cg_t::ms_allocatedCount )
  {
    LODWORD(v6) = cg_t::ms_allocatedCount;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v1] )
  {
    LODWORD(v6) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v6) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v6) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v6) )
      __debugbreak();
  }
  p_predictedPlayerState = &cg_t::ms_cgArray[v1]->predictedPlayerState;
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_databinding_telemetry.cpp", 30, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return (unsigned int)(int)(float)((float)p_predictedPlayerState->netPerf.pingMs * 3.9215686);
}

/*
==============
s_LUI_DataBinding_Get_voice_mute
==============
*/
__int64 s_LUI_DataBinding_Get_voice_mute()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_cl_voice_mute;
  if ( !DVARBOOL_cl_voice_mute && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_voice_mute") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
s_LUI_DataBinding_Get_volume_mute
==============
*/
bool s_LUI_DataBinding_Get_volume_mute()
{
  const dvar_t *v0; 
  bool result; 

  v0 = DVARBOOL_snd_volume_mute;
  result = 0;
  if ( DVARBOOL_snd_volume_mute )
  {
    Dvar_CheckFrontendServerThread(DVARBOOL_snd_volume_mute);
    if ( v0->current.enabled )
      return 1;
  }
  return result;
}

