/*
==============
FileStream_RegisterDvars
==============
*/

void FileStream_RegisterDvars(void)
{
  ?FileStream_RegisterDvars@@YAXXZ();
}

/*
==============
FileStream_RegisterDvars
==============
*/

void __fastcall FileStream_RegisterDvars(__int64 a1, double _XMM1_8, double _XMM2_8)
{
  Dvar_BeginPermanentRegistration();
  __asm
  {
    vmovss  xmm3, cs:__real@447a0000; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_fileStream_mbPerSec = Dvar_RegisterFloat("LONORMOKT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Throttle file reads to the specified megabytes per second. When set to 0 no throttling occurs.");
  DCONST_DVARBOOL_fileStream_allowBackSeeking = Dvar_RegisterBool("fileStream_allowBackSeeking", 1, 0x40004u, "When true allows the file read priority queue to enqueue a read request that would cause back seeking within the file currently being read from to be queued immediately after the current read is finished.");
  DCONST_DVARINT_fileStream_readDeadlineMS_DB = Dvar_RegisterInt("fileStream_readDeadlineMS_DB", 100, 0, 10000, 0x40004u, "Time deadline for async DB read in milliseconds.");
  DCONST_DVARINT_fileStream_readPriority_XPak = Dvar_RegisterEnum("fileStream_readPriority_XPak", fileStream_readPriorityNames, 0, 0x40004u, "Priority for async XPak reads issued via the regular streamer read code path");
  DCONST_DVARINT_fileStream_readDeadlineMS_XPak = Dvar_RegisterInt("fileStream_readDeadlineMS_XPak", 1500, 0, 10000, 0x40004u, "Time deadline for async XPak reads in milliseconds");
  DCONST_DVARINT_fileStream_readPriority_Primer = Dvar_RegisterEnum("fileStream_readPriority_Primer", fileStream_readPriorityNames, 1, 0x40004u, "Priority for async XPak reads for stream primer requests");
  DCONST_DVARINT_fileStream_readDeadlineMS_Primer = Dvar_RegisterInt("fileStream_readDeadlineMS_Primer", 500, 0, 60000, 0x40004u, "Time deadline for async XPak reads for stream primer requests in milliseconds");
  DVARBOOL_fileStream_enforceRequestPrioritization = Dvar_RegisterBool("NOQMOLSMRO", 1, 0, "Mostly for Xbox & PC since OS does not have a prioritization scheme, don't schedule lower priority reads when there are pending higher priority reads");
  DVARINT_fileStream_maxConcurrentReadRequests = Dvar_RegisterInt("NMOLQOSMKN", 32, 1, 256, 0, "Ensure we don't have more concurrent async read requests than this");
  DCONST_DVARBOOL_fileStream_printQueue = Dvar_RegisterBool("fileStream_printQueue", 0, 0x40004u, "When enabled prints to the log when read requests are added to or removed from the file stream queue.");
  DCONST_DVARBOOL_fileStream_showReadSpeeds = Dvar_RegisterBool("fileStream_showReadSpeeds", 0, 0x40004u, "Show file stream read bandwidth.");
  DCONST_DVARINT_fileStream_minPerfDataClearTimeMS = Dvar_RegisterInt("fileStream_minPerfDataClearTimeMS", 1000, 50, 0x7FFFFFFF, 0x40004u, "Minimum time in ms before performance data can be cleared.");
  __asm
  {
    vmovss  xmm3, cs:__real@41200000; max
    vmovss  xmm2, cs:__real@3a83126f; min
    vmovss  xmm1, cs:__real@3e3851ec; value
  }
  DCONST_DVARBOOL_fileStream_drawReadHistory = Dvar_RegisterBool("fileStream_drawReadHistory", 0, 0x40004u, "Draw the read history on the screen.");
  DCONST_DVARFLT_fileStream_drawReadHistoryFontSize = Dvar_RegisterFloat("fileStream_drawReadHistoryFontSize", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Sets the font size used to draw the file read history display.");
  DCONST_DVARINT_fileStream_drawReadHistoryFilterFileStreamTrack = Dvar_RegisterEnum("fileStream_drawReadHistoryFilterFileStreamTrack", fileStream_fileStreamTrackNames, 8, 0x40004u, "Filter the read history by this file stream track.");
  DCONST_DVARSTR_fileStream_drawReadHistoryFilterName = Dvar_RegisterString("fileStream_drawReadHistoryFilterName", (const char *)&queryFormat.fmt + 3, 0x40004u, "Filter the read history by this file name substring.");
  DCONST_DVARINT_fileStream_drawReadHistoryFilterTimeMs = Dvar_RegisterInt("fileStream_drawReadHistoryFilterTimeMs", 0, 0, 0x7FFFFFFF, 0x40004u, "Filter times less than this out of the read history (0 disables).");
  DCONST_DVARINT_fileStream_drawReadHistoryHighlightTimeMs = Dvar_RegisterInt("fileStream_drawReadHistoryHighlightTimeMs", 0, 0, 0x7FFFFFFF, 0x40004u, "Hightlight times greather than this in the read history.  When set to 0 (default) times are highlighted if they exceed the estimated time for the read.");
  Dvar_EndPermanentRegistration();
}

