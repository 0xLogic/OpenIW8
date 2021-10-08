/*
==============
MemBudget_ContentMemWrite_BootTime
==============
*/

void MemBudget_ContentMemWrite_BootTime(void)
{
  ?MemBudget_ContentMemWrite_BootTime@@YAXXZ();
}

/*
==============
MemBudget_ContentMemWrite_BootTime
==============
*/

void __fastcall MemBudget_ContentMemWrite_BootTime(double _XMM0_8)
{
  const MemBudget_PollArray *BootPoll; 
  unsigned __int8 CurrentHardwareType; 
  const char *HardwareTypeName; 
  unsigned int i; 
  const char *PollTypeName; 

  Sys_Printf("\n****** CONTENTMEM BEGIN ******\n");
  if ( Mem_Paged_GetDevMemorySize() )
  {
    Sys_Printf("XB3 Debug Memory Enabled - No contentmem printed. We budget for base Durango.\n");
  }
  else if ( Sys_IsUsingOptionalDevFunctionality() )
  {
    Sys_Printf("Using optional dev functionality - No contentmem printed.\n");
  }
  else if ( Physics_GetDebugMemorySize() )
  {
    Sys_Printf("Physics Debug enabled - No contentmem printed.\n");
  }
  else
  {
    __asm
    {
      vmovaps [rsp+48h+var_18], xmm6
      vmovaps [rsp+48h+var_28], xmm7
    }
    BootPoll = MemBudget_Poll_GetBootPoll();
    CurrentHardwareType = MemBudget_GetCurrentHardwareType();
    HardwareTypeName = MemBudget_GetHardwareTypeName((MemBudget_HardwareType)CurrentHardwareType);
    Sys_Printf("Hardware,%s\n", HardwareTypeName);
    __asm { vmovss  xmm7, cs:__real@35800000 }
    for ( i = 0; i < 0x26; ++i )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, qword ptr [rdi]
        vmulss  xmm1, xmm0, xmm7
        vcvtss2sd xmm6, xmm1, xmm1
      }
      PollTypeName = MemBudget_GetPollTypeName((MemBudget_PollType)(unsigned __int8)i);
      __asm
      {
        vmovaps xmm2, xmm6
        vmovq   r8, xmm2
      }
      Sys_Printf("%s,%.3fmb\n", PollTypeName, *(double *)&_XMM2);
      BootPoll = (const MemBudget_PollArray *)((char *)BootPoll + 8);
    }
    __asm
    {
      vmovaps xmm7, [rsp+48h+var_28]
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
  Sys_Printf("****** CONTENTMEM END ******\n\n");
  if ( Com_IsContentMemRun() )
  {
    Sys_Sleep(3000);
    Sys_Quit();
  }
  PMem_DumpMemStats();
  XB3XMem_PrintAuxMemoryStatus();
  XB3XMem_DumpAuxHeap();
}

