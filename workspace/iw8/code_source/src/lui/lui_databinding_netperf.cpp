/*
==============
LUI_DataBinding_NetPerf_FrameUpdate
==============
*/

void __fastcall LUI_DataBinding_NetPerf_FrameUpdate(LocalClientNum_t localClientNum)
{
  ?LUI_DataBinding_NetPerf_FrameUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_DataBinding_NetPerf_FrameUpdate
==============
*/
void LUI_DataBinding_NetPerf_FrameUpdate(LocalClientNum_t localClientNum)
{
  Sys_ProfBeginNamedEvent(0xFF808080, "LUI_DataBinding_NetPerf_FrameUpdate");
  LUIBinding::PushBool(&s_LUI_DataBinding_NetPerfIsEnabled);
  LUIBinding::PushInt(&s_LUI_DataBinding_Ping, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_MaxExtrapolation, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_MaxInterpolation, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_MaxCmdReceived, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_MaxCmdQueued, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_MaxCmdDropped, localClientNum);
  Sys_ProfEndNamedEvent();
}

/*
==============
s_LUI_DataBinding_Get_MaxCmdDropped
==============
*/
__int64 s_LUI_DataBinding_Get_MaxCmdDropped(LocalClientNum_t localClientNum)
{
  playerState_s *PredictedPlayerState; 

  PredictedPlayerState = CG_GetPredictedPlayerState(localClientNum);
  if ( PredictedPlayerState )
    return (unsigned int)PredictedPlayerState->netPerf.maxUserCmdDroppedCount;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_databinding_netperf.cpp", 65, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return MEMORY[0x52DC];
}

/*
==============
s_LUI_DataBinding_Get_MaxCmdQueued
==============
*/
__int64 s_LUI_DataBinding_Get_MaxCmdQueued(LocalClientNum_t localClientNum)
{
  playerState_s *PredictedPlayerState; 

  PredictedPlayerState = CG_GetPredictedPlayerState(localClientNum);
  if ( PredictedPlayerState )
    return (unsigned int)PredictedPlayerState->netPerf.maxUserCmdQueuedTime;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_databinding_netperf.cpp", 57, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return MEMORY[0x52D8];
}

/*
==============
s_LUI_DataBinding_Get_MaxCmdReceived
==============
*/
__int64 s_LUI_DataBinding_Get_MaxCmdReceived(LocalClientNum_t localClientNum)
{
  playerState_s *PredictedPlayerState; 

  PredictedPlayerState = CG_GetPredictedPlayerState(localClientNum);
  if ( PredictedPlayerState )
    return (unsigned int)PredictedPlayerState->netPerf.maxUserCmdReceivedTime;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_databinding_netperf.cpp", 49, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return MEMORY[0x52D4];
}

/*
==============
s_LUI_DataBinding_Get_MaxExtrapolation
==============
*/
int s_LUI_DataBinding_Get_MaxExtrapolation(LocalClientNum_t localClientNum)
{
  int result; 

  if ( !CG_GetPredictedPlayerState(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_databinding_netperf.cpp", 31, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+52D0h]
    vmulss  xmm1, xmm0, cs:__real@407afafb
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
s_LUI_DataBinding_Get_MaxInterpolation
==============
*/
int s_LUI_DataBinding_Get_MaxInterpolation(LocalClientNum_t localClientNum)
{
  int result; 

  if ( !CG_GetPredictedPlayerState(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_databinding_netperf.cpp", 40, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+52CCh]
    vmulss  xmm1, xmm0, cs:__real@407afafb
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
s_LUI_DataBinding_Get_NetPerfIsEnabled
==============
*/

bool __fastcall s_LUI_DataBinding_Get_NetPerfIsEnabled()
{
  return CG_ClientNetPerf_IsSystemEnabled();
}

/*
==============
s_LUI_DataBinding_Get_Ping
==============
*/
int s_LUI_DataBinding_Get_Ping(LocalClientNum_t localClientNum)
{
  int result; 

  if ( !CG_GetPredictedPlayerState(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_databinding_netperf.cpp", 23, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+52C8h]
    vmulss  xmm1, xmm0, cs:__real@407afafb
    vcvttss2si eax, xmm1
  }
  return result;
}

