/*
==============
FakeBandwidth_Init
==============
*/

void FakeBandwidth_Init(void)
{
  ?FakeBandwidth_Init@@YAXXZ();
}

/*
==============
FakeBandwidth_SetLimits
==============
*/

void __fastcall FakeBandwidth_SetLimits(int sendUpperLimitKiloBitsPerSecond, int recvUpperLimitKiloBitsPerSecond)
{
  ?FakeBandwidth_SetLimits@@YAXHH@Z(sendUpperLimitKiloBitsPerSecond, recvUpperLimitKiloBitsPerSecond);
}

/*
==============
FakeBandwidth_Frame
==============
*/

void FakeBandwidth_Frame(void)
{
  ?FakeBandwidth_Frame@@YAXXZ();
}

/*
==============
FakeBandwidth_Frame
==============
*/
void FakeBandwidth_Frame(void)
{
  char v0; 

  v0 = 0;
  if ( byte_14B95D524 != fakebandwidthup_limit->current.enabled )
  {
    v0 = 1;
    byte_14B95D524 = fakebandwidthup_limit->current.enabled;
  }
  if ( byte_14B95D525 == fakebandwidthdown_limit->current.enabled )
  {
    if ( !v0 )
      return;
  }
  else
  {
    byte_14B95D525 = fakebandwidthdown_limit->current.enabled;
  }
  Com_Printf(25, "=========== Setting bandwidth limits is not supported on this platform ===========\n");
}

/*
==============
FakeBandwidth_Init
==============
*/
void FakeBandwidth_Init(void)
{
  if ( !s_fakeBandwidthInitialized )
  {
    Dvar_BeginPermanentRegistration();
    fakebandwidthup_limit = Dvar_RegisterEnum("NNTLOPTQSK", s_fakeBandwidthValueList, 0, 0x20u, "Target value for upload bandwidth debugging in kilobits per second, set via devgui.");
    fakebandwidthdown_limit = Dvar_RegisterEnum("NOQPMNOSTP", s_fakeBandwidthValueList, 0, 0x20u, "Target value for download bandwidth debugging in kilobits per second, set via devgui.");
    Dvar_EndPermanentRegistration();
    s_fakeBandwidthInitialized = 1;
  }
}

/*
==============
FakeBandwidth_SetLimits
==============
*/
void FakeBandwidth_SetLimits(int sendUpperLimitKiloBitsPerSecond, int recvUpperLimitKiloBitsPerSecond)
{
  Com_Printf(25, "=========== Setting bandwidth limits is not supported on this platform ===========\n");
}

