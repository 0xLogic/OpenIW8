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
void MemBudget_ContentMemWrite_BootTime(void)
{
  const MemBudget_PollArray *BootPoll; 
  unsigned __int8 CurrentHardwareType; 
  const char *HardwareTypeName; 
  unsigned int i; 
  float v4; 
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
    BootPoll = MemBudget_Poll_GetBootPoll();
    CurrentHardwareType = MemBudget_GetCurrentHardwareType();
    HardwareTypeName = MemBudget_GetHardwareTypeName((MemBudget_HardwareType)CurrentHardwareType);
    Sys_Printf("Hardware,%s\n", HardwareTypeName);
    for ( i = 0; i < 0x26; ++i )
    {
      v4 = (float)BootPoll->pollValues[0];
      PollTypeName = MemBudget_GetPollTypeName((MemBudget_PollType)(unsigned __int8)i);
      Sys_Printf("%s,%.3fmb\n", PollTypeName, (float)(v4 * 0.00000095367432));
      BootPoll = (const MemBudget_PollArray *)((char *)BootPoll + 8);
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

