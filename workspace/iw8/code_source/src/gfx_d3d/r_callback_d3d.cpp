/*
==============
R_HW_InitCallbacks
==============
*/

void R_HW_InitCallbacks(void)
{
  ?R_HW_InitCallbacks@@YAXXZ();
}

/*
==============
R_GPUCallbackThread
==============
*/
void __noreturn R_GPUCallbackThread(unsigned int __formal)
{
  DWORD v1; 
  DWORD v2; 
  bool v3; 
  __int64 v4; 

  while ( 1 )
  {
    while ( 1 )
    {
      v1 = WaitForSingleObject(g_dx.flipQueuedEvent, 0xFFFFFFFF);
      if ( !v1 )
        break;
      LODWORD(v4) = v1;
      v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_callback_d3d.cpp", 52, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed waiting for g_dx.flipQueuedEvent.  Error=0x%x", v4);
LABEL_6:
      if ( v3 )
        __debugbreak();
      SwitchToThread();
    }
    v2 = WaitForSingleObject(g_dx.flipCompletedEvent, 0xFFFFFFFF);
    if ( v2 )
    {
      LODWORD(v4) = v2;
      v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_callback_d3d.cpp", 47, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed waiting for g_dx.flipCompletedEvent.  Error=0x%x", v4);
      goto LABEL_6;
    }
    DXGIXGetFrameStatistics_0(4i64, s_frameStatistics);
    R_SwapCallback();
    R_SyncGPURecordFrameStatistics(g_dx.flipQueuedFrame, 4u, s_frameStatistics);
    R_GPU_RecordLatencyStatistics(4u, s_frameStatistics);
    SwitchToThread();
  }
}

/*
==============
R_HW_InitCallbacks
==============
*/
void R_HW_InitCallbacks(void)
{
  HRESULT v0; 
  const char *v1; 

  g_dx.flipQueuedEvent = CreateEventW(NULL, 0, 0, NULL);
  g_dx.flipHandledEvent = CreateEventW(NULL, 0, 1, NULL);
  g_dx.flipCompletedEvent = CreateEventW(NULL, 0, 0, NULL);
  v0 = DXGIXSetFrameNotification_0(2i64, g_dx.flipCompletedEvent);
  if ( v0 < 0 )
  {
    v1 = R_ErrorDescription(v0);
    Sys_Error((const ObfuscateErrorText)&stru_144365210, 70i64, v1);
  }
  if ( !Sys_SpawnGPUInterruptThread((void (__fastcall *)(unsigned int))R_GPUCallbackThread) )
    Sys_Error((const ObfuscateErrorText)&stru_1443652D0);
}

