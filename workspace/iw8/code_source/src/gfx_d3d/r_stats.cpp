/*
==============
R_Stats_DumpBspInfo
==============
*/

void __fastcall R_Stats_DumpBspInfo(const char *fileSuffix)
{
  ?R_Stats_DumpBspInfo@@YAXPEBD@Z(fileSuffix);
}

/*
==============
R_Stats_EndFrame
==============
*/

void R_Stats_EndFrame(void)
{
  ?R_Stats_EndFrame@@YAXXZ();
}

/*
==============
R_Stats_DumpBspInfo
==============
*/
void R_Stats_DumpBspInfo(const char *fileSuffix)
{
  g_frontEndStats.dumpBspSurfsFileSuffix = fileSuffix;
}

/*
==============
R_Stats_EndFrame
==============
*/
void R_Stats_EndFrame(void)
{
  g_frontEndStats.dumpBspSurfsFileSuffix = NULL;
}

