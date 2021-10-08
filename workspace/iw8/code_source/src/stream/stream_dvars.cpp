/*
==============
Stream_RegisterDvars
==============
*/

void Stream_RegisterDvars(void)
{
  ?Stream_RegisterDvars@@YAXXZ();
}

/*
==============
Stream_RegisterDvars
==============
*/

void __fastcall Stream_RegisterDvars(__int64 a1, double _XMM1_8, double _XMM2_8)
{
  const dvar_t *v23; 
  const dvar_t *v27; 
  const dvar_t *v32; 
  const dvar_t *v36; 
  const dvar_t *v47; 
  const dvar_t *v60; 
  const dvar_t *v65; 
  const dvar_t *v69; 
  const dvar_t *v77; 
  const dvar_t *v84; 
  const dvar_t *v95; 
  const dvar_t *v100; 
  const dvar_t *v104; 
  const dvar_t *v108; 
  const dvar_t *v112; 
  const dvar_t *v116; 
  const dvar_t *v120; 
  const dvar_t *v127; 
  const dvar_t *v131; 
  const dvar_t *v135; 
  const dvar_t *v150; 
  const dvar_t *v160; 
  const dvar_t *v164; 
  const dvar_t *v168; 
  const dvar_t *v172; 
  const dvar_t *v185; 
  const dvar_t *v189; 
  const dvar_t *v193; 
  float flags; 
  float flagsa; 
  float description; 
  float descriptiona; 
  float max; 
  char v224; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0E8h+var_88], xmm13
    vmovaps [rsp+0E8h+var_98], xmm14
  }
  Dvar_BeginPermanentRegistration();
  DVARBOOL_stream_freezeState = Dvar_RegisterBool("OLSOMPQQQM", 0, 0x40u, "Freeze the state of all streaming memory - don't allow streaming or un-streaming of any streamed data. This essentially fully disables the stream update.");
  DCONST_DVARBOOL_stream_spawnFrozen = Dvar_RegisterBool("stream_spawnFrozen", 0, 0x40004u, "Start with the streamer frozen. See stream_freezeState.");
  DCONST_DVARBOOL_stream_forceFullUpdateEveryFrame = Dvar_RegisterBool("stream_forceFullUpdateEveryFrame", 0, 0x40004u, "Forces the streamer to do a full update (i.e. tabulation+combine+sort) every frame instead of spreading it out over multiple frames");
  DCONST_DVARBOOL_stream_updateSModelCollectionsViaSharedBounds = Dvar_RegisterBool("stream_updateSModelCollectionsViaSharedBounds", 1, 0x40004u, "When true the stream update distance metric for smodel collections is computed based on the shared collection bounds. When false individual smodel instances are iterated and their bounds used instead. This setting has no effect when the material stream tree is used.");
  DCONST_DVARBOOL_stream_concurrentImagePartLoading = Dvar_RegisterBool("stream_concurrentImagePartLoading", 1, 0x40004u, "Allow multiple image parts to load at the same time");
  DCONST_DVARBOOL_stream_readVerboseLog = Dvar_RegisterBool("stream_readVerboseLog", 0, 0x40004u, "Slightly more verbose log prints from the stream read code");
  __asm { vmovss  xmm10, cs:__real@42c80000 }
  DCONST_DVARBOOL_stream_readWipeBuffersBeforeRead = Dvar_RegisterBool("stream_readWipeBuffersBeforeRead", 0, 0x40004u, "Causes the file read buffers to be wiped with bit pattern 0xcd before a read is issued. Helpful for debugging at times.");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_stream_readMaxDistance = Dvar_RegisterFloat("stream_readMaxDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Never read streamed mip levels with stream distance greater than than this value. Disabled when set to 0.0.");
  DVARINT_stream_readMaxInFlight = Dvar_RegisterInt("LNLPNPRRNL", 12, 1, 32, 0, "Maximum number of file block buffers the regular stream read code path uses. This determines the maximum number of inflight reads at any point in time by the streamer.");
  DVARBOOL_stream_readFavorSeekOrder = Dvar_RegisterBool("LSLPSLONNS", 1, 0, "Instead of always picking the top item off the sort lists, when this is enabled a whole bunch of high priority items are picked off the sort lists, then sorted by seek order, and reads are issued in that order.");
  DVARINT_stream_readSeekOrderMaxSizeKB_Image = Dvar_RegisterInt("LMTKNTTTK", 6144, 0, 0x200000, 0, "Combined max size in KBs of how many image parts are picked off the sort lists for the seek order queue. Only relevant when stream_readFavorsSeekOrder is enabled.");
  DVARINT_stream_readSeekOrderMaxSizeKB_Mesh = Dvar_RegisterInt("LLRSOSNMOQ", 2048, 0, 0x200000, 0, "Combined max size in KBs of how many meshes are picked off the sort lists for the seek order queue. Only relevant when stream_readFavorsSeekOrder is enabled.");
  DVARINT_stream_readSeekOrderMaxSizeKB_Generic = Dvar_RegisterInt("OKKQPOOTTQ", 1024, 0, 0x200000, 0, "Combined max size in KBs of how many generics are picked off the sort lists for the seek order queue. Only relevant when stream_readFavorsSeekOrder is enabled.");
  DCONST_DVARINT_stream_readPacked = Dvar_RegisterEnum("stream_readPacked", stream_readPackedNames, 3, 0x40004u, "Pack reads based on adjacency info");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  DVARINT_stream_readPackedMaxGapKB = Dvar_RegisterInt("MKTKRLRMN", 480, 0, 1024, 0, "Maximum gap in KB between items in a packed multi-item read. Will be rounded to disk read alignment block size. This is effectively the maximum allowed waste in between items that we end up reading from disk but we don't use.");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_stream_readAheadMaxDistanceRange = Dvar_RegisterFloat("MKPPQQPPKL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Max read-ahead stream distance offset from the current item being requested for read. Used by the greedy multi-item packed read to read ahead. Only used when stream_readPacked is enabled.");
  DCONST_DVARINT_stream_yieldFrameCount = Dvar_RegisterInt("stream_yieldFrameCount", 1, 1, 1024, 0x40004u, "How many frames should the streamer pause more after it is unpaused.");
  DVARBOOL_stream_yieldDuringTransientFastfileRead = Dvar_RegisterBool("OMOSQOSMK", 0, 0, "Streamer yield to transient fastfiles loading");
  DCONST_DVARINT_stream_alwaysLoadedTimeoutSeconds = Dvar_RegisterInt("stream_alwaysLoadedTimeoutSeconds", 3, 0, 300, 0x40004u, "Seconds to wait with no loading progress during the loading of always loaded assets");
  DCONST_DVARINT_stream_alwaysLoadedPrintMaxMissingAssets = Dvar_RegisterInt("stream_alwaysLoadedPrintMaxMissingAssets", 50, 0, 1000, 0x40004u, "Maximum number of assets to report in the log when always loaded asset loading timed out");
  DCONST_DVARINT_stream_printVerbosity = Dvar_RegisterInt("stream_printVerbosity", 1, 0, 1, 0x40004u, "Controls the amount of streamer status prints.  0=disable, 1=enable");
  DCONST_DVARINT_stream_alwaysLoadedSimulateStuck = Dvar_RegisterInt("stream_alwaysLoadedSimulateStuck", 0, 0, 0x10000, 0x40004u, "Simulates loading of always loaded assets getting stuck at the specified asset count");
  DCONST_DVARBOOL_stream_alwaysLoadedSimulateTimeout = Dvar_RegisterBool("stream_alwaysLoadedSimulateTimeout", 0, 0x40004u, "Simulates a timeout during loading of always loaded assets");
  DVARINT_stream_primerMaxInFlight = Dvar_RegisterInt("ORSROPSOK", 12, 1, 16, 0, "Number of inflight primer reads");
  DVARINT_stream_primerMaxInFlightForTransients = Dvar_RegisterInt("MPKTSNSOMK", 12, 1, 16, 0, "Number of inflight primer reads when loading transients");
  DCONST_DVARBOOL_stream_primerReadPacked = Dvar_RegisterBool("stream_primerReadPacked", 1, 0x40004u, "Pack primer reads");
  DCONST_DVARBOOL_stream_primerEnable = Dvar_RegisterBool("stream_primerEnable", 1, 0x40004u, "Enable/Disable stream Primer at runtime");
  DCONST_DVARBOOL_stream_primerPrintAssetNameOnLoad = Dvar_RegisterBool("stream_primerPrintAssetNameOnLoad", 0, 0x40004u, "Print the asset names when primer successfully loaded an asset.");
  DVARBOOL_stream_primerRequestStreamerToYield = Dvar_RegisterBool("MQMPTRRSRL", 0, 0, "Streamer yield to always loaded assets (aka, stream primer)");
  DVARINT_stream_primerReleaseHeapDelayMS = Dvar_RegisterInt("NNPSNLKQTN", 4000, 0, 10000, 0, "Amount of time to wait (in ms) before release heap pages back to streamer. To minimize having to wait when loading lots of FF.");
  DCONST_DVARSTR_stream_primerLogTransientLoads = Dvar_RegisterString("stream_primerLogTransientLoads", (const char *)&queryFormat.fmt + 3, 0x40004u, "Use to tell the linker in which order we are the most likely to see transients");
  DCONST_DVARINT_stream_primerSimulateOutOfMemory = Dvar_RegisterInt("stream_primerSimulateOutOfMemory", 0, 0, 0x7FFFFFFF, 0x40004u, "Simulate the case where memory is not allocated for assets. The value means once per XXX items. (0 means disabled.)");
  DCONST_DVARBOOL_stream_enableHinting = Dvar_RegisterBool("stream_enableHinting", 1, 0x40004u, "Enable streamer hinting");
  DCONST_DVARBOOL_stream_hintTerrain = Dvar_RegisterBool("stream_hintTerrain", 1, 0x40004u, "Hint super terrain masks");
  DCONST_DVARBOOL_stream_hintClutter = Dvar_RegisterBool("stream_hintClutter", 1, 0x40004u, "Hint clutter images/meshes");
  DCONST_DVARBOOL_stream_hintDobjs = Dvar_RegisterBool("stream_hintDobjs", 1, 0x40004u, "Hint dobjs");
  DCONST_DVARBOOL_stream_hintSModels = Dvar_RegisterBool("stream_hintSModels", 1, 0x40004u, "Hint static models");
  DCONST_DVARBOOL_stream_hintSceneBrushes = Dvar_RegisterBool("stream_hintSceneBrushes", 1, 0x40004u, "Hint scene brush models");
  DCONST_DVARBOOL_stream_hintSceneModels = Dvar_RegisterBool("stream_hintSceneModels", 1, 0x40004u, "Hint scene xmodels");
  DCONST_DVARBOOL_stream_hintWorldSurfaces = Dvar_RegisterBool("stream_hintWorldSurfaces", 1, 0x40004u, "Hint world surfaces");
  DCONST_DVARBOOL_stream_hintAudio = Dvar_RegisterBool("stream_hintAudio", 1, 0x40004u, "Hint audio");
  DCONST_DVARBOOL_stream_hintDynEnts = Dvar_RegisterBool("stream_hintDynEnts", 1, 0x40004u, "Hint dynent brushes and models");
  DCONST_DVARBOOL_stream_hintScriptables = Dvar_RegisterBool("stream_hintScriptables", 1, 0x40004u, "Hint models used by the scriptables");
  __asm
  {
    vmovss  xmm3, cs:__real@4cbebc20; max
    vmovss  xmm1, cs:__real@4a095440; value
  }
  DVARBOOL_stream_hintDynamicXModelsMeshes = Dvar_RegisterBool("LSLMOMTOSP", 1, 0, "Ensure that streamer request the mesh lods during stream update, and not just at render time");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v23 = Dvar_RegisterFloat("stream_scriptableMaxDistanceSq", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Culling distance for hinting scriptables");
  __asm
  {
    vmovss  xmm3, cs:__real@45000000; max
    vmovss  xmm1, cs:__real@43800000; value
  }
  DCONST_DVARFLT_stream_scriptableMaxDistanceSq = v23;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v27 = Dvar_RegisterFloat("stream_scriptableDistanceOffset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Offset applied to distance for hinting scriptables.");
  __asm
  {
    vmovss  xmm7, cs:__real@5f7fffff
    vmovss  xmm1, cs:__real@3e800000; value
  }
  DCONST_DVARFLT_stream_scriptableDistanceOffset = v27;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v32 = Dvar_RegisterFloat("stream_syncSP_imageQuality", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Image quality metric value considered to be of high enough image quality for SP streaming sync");
  __asm { vmovss  xmm1, cs:__real@3e800000; value }
  DCONST_DVARFLT_stream_syncSP_imageQuality = v32;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v36 = Dvar_RegisterFloat("stream_syncMP_imageQuality", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Image quality metric value considered to be of high enough image quality for MP streaming sync");
  __asm { vmovss  xmm1, cs:__real@3e000000; value }
  DCONST_DVARFLT_stream_syncMP_imageQuality = v36;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_stream_syncFrontend_imageQuality = Dvar_RegisterFloat("OOPQTRRKQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Image quality metric value considered to be of high enough image quality for Frontend streaming sync");
  DCONST_DVARINT_stream_syncSP_timeoutSeconds = Dvar_RegisterInt("stream_syncSP_timeoutSeconds", 10, 0, 300, 0x40004u, "Seconds to wait with no loading progress during the SP streaming sync before aborting");
  DCONST_DVARINT_stream_syncMP_timeoutSeconds = Dvar_RegisterInt("stream_syncMP_timeoutSeconds", 4, 0, 300, 0x40004u, "Seconds to wait with no loading progress during the MP streaming sync before aborting");
  DCONST_DVARINT_stream_syncSP_maxTimeSeconds = Dvar_RegisterInt("stream_syncSP_maxTimeSeconds", 45, 0, 300, 0x40004u, "Maximum time in seconds to wait for the SP streaming sync to finish before allowing spawning into the map");
  DVARINT_stream_syncMP_maxTimeSeconds = Dvar_RegisterInt("MSMMOTPNQT", 8, 0, 300, 0, "Maximum time in seconds to wait for the MP streaming sync to finish before allowing spawning into the map");
  DVARINT_stream_syncMPTRWorld_maxTimeSeconds = Dvar_RegisterInt("MQLPTTQQMP", 8, 0, 300, 0, "Maximum time in seconds to wait for the MP streaming sync to finish before allowing spawning into the map. TR World Maps");
  __asm
  {
    vmovss  xmm13, cs:__real@3f800000
    vmovss  xmm2, cs:__real@bf800000; min
  }
  DVARINT_stream_syncMPTRWorld_trPortion_maxTimeSeconds = Dvar_RegisterInt("MSORPPOLNN", 3, 0, 300, 0, "Maximum time in seconds to wait for just the transient stall into game, for TR World Maps");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_stream_meshFixedPrioPercentage = Dvar_RegisterFloat("stream_meshFixedPrioPercentage", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Raise the priority percentage of meshes");
  DCONST_DVARINT_stream_meshAutoPrioStepUpStart = Dvar_RegisterInt("stream_meshAutoPrioStepUpStart", 2, 0, 0x4000, 0x40004u, "Mesh auto priority start");
  DCONST_DVARINT_stream_meshAutoPrioStepUpEnd = Dvar_RegisterInt("stream_meshAutoPrioStepUpEnd", 500, 0, 0x4000, 0x40004u, "Mesh auto priority end");
  DCONST_DVARINT_stream_meshAutoPrioStepRatio = Dvar_RegisterInt("stream_meshAutoPrioStepRatio", 4, 1, 0x4000, 0x40004u, "Mesh auto priority ratio");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v47 = Dvar_RegisterFloat("stream_meshAutoPrioPercentageMin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Mesh auto percentage start");
  __asm { vmovss  xmm1, cs:__real@3f400000; value }
  DCONST_DVARFLT_stream_meshAutoPrioPercentageMin = v47;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm14, cs:__real@41200000
  }
  DCONST_DVARFLT_stream_meshAutoPrioPercentageMax = Dvar_RegisterFloat("stream_meshAutoPrioPercentageMax", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Mesh auto percentage end");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovss  xmm12, cs:__real@40000000
    vmovaps xmm1, xmm12; value
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm8, cs:__real@3fc00000
  }
  DCONST_DVARFLT_stream_zoomFovScaler = Dvar_RegisterFloat("stream_zoomFovScaler", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Controls how quickly distance scaling decays for object removed from view direction");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm13; min
    vmovaps xmm1, xmm8; value
  }
  v60 = Dvar_RegisterFloat("stream_minZoomFactorForViewDirectionRelativeCalculations", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Controls when expensive math calculations are used when computing streaming distance");
  __asm
  {
    vmovss  xmm6, cs:__real@461c4000
    vmovss  xmm1, cs:__real@44480000; value
  }
  DCONST_DVARFLT_stream_minZoomFactorForViewDirectionRelativeCalculations = v60;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm13; min
  }
  v65 = Dvar_RegisterFloat("MMTLSTTNSL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Maximum expected velocity (units/seconds) of the camera when in a vehicle");
  __asm { vmovss  xmm1, cs:__real@43fa0000; value }
  DVARFLT_stream_maxAnticipatedVelocity = v65;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm13; min
  }
  v69 = Dvar_RegisterFloat("MQPSTPTTQT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Velocity above which we assume a camera cut must have caused it");
  __asm { vmovss  xmm1, cs:__real@40800000; value }
  DVARFLT_stream_cameraCutDetectionDeltaPosThreshold = v69;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm11, cs:__real@447a0000
  }
  DCONST_DVARFLT_stream_maxVelocityZoomFactor = Dvar_RegisterFloat("stream_maxVelocityZoomFactor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "How much to artificially scale down distances along velocity vector when moving quickly");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm13; min
    vmovaps xmm1, xmm14; value
  }
  v77 = Dvar_RegisterFloat("QTTQRLRMS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Used to prevent sudden changes in reported streaming quality when view isn't moving");
  __asm { vmovss  xmm1, cs:__real@42200000; value }
  DVARFLT_stream_smoothingFactorNotMoving = v77;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm13; min
  }
  DVARFLT_stream_smoothingFactorMovingFullSpeed = Dvar_RegisterFloat("NPOOKKQRLR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Used to prevent sudden changes in reported streaming quality when view is moving quickly");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm13; min
    vmovaps xmm1, xmm11; value
  }
  v84 = Dvar_RegisterFloat("NSSNTQKNTS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Duration of the window of time used to compute camera velocity (in milliseconds)");
  __asm { vmovss  xmm3, cs:__real@43480000; max }
  DVARFLT_stream_cameraVelocityWindowDuration = v84;
  __asm
  {
    vmovaps xmm2, xmm13; min
    vmovaps xmm1, xmm10; value
  }
  DVARFLT_stream_cameraVelocityGaussianSigma = Dvar_RegisterFloat("PMSPNMTMS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Sigma value to be used for the low-pass gaussian filter (https:
  __asm
  {
    vmovss  xmm9, cs:__real@7f7fffff
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm13; min
    vmovaps xmm1, xmm8; value
  }
  DVARFLT_stream_combinedMapDistanceSqThresholdScaler = Dvar_RegisterFloat("LMMRKLMLTL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scale the threshold distance that used to skip hinting ST layers because they will be rendered using combined maps");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
  }
  v95 = Dvar_RegisterFloat("stream_distanceSemanticBias2D", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The higher the value the lower the streaming priority of images of this type");
  __asm
  {
    vmovss  xmm6, cs:__real@3c23d70a
    vmovaps xmm2, xmm6; min
    vmovaps xmm3, xmm10; max
    vmovaps xmm1, xmm12; value
  }
  DCONST_DVARFLT_stream_distanceSemanticBias2D = v95;
  v100 = Dvar_RegisterFloat("stream_distanceSemanticBiasFunction", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The higher the value the lower the streaming priority of images of this type");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm13; value
  }
  DCONST_DVARFLT_stream_distanceSemanticBiasFunction = v100;
  v104 = Dvar_RegisterFloat("stream_distanceSemanticBiasColor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The higher the value the lower the streaming priority of images of this type");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm12; value
  }
  DCONST_DVARFLT_stream_distanceSemanticBiasColor = v104;
  v108 = Dvar_RegisterFloat("stream_distanceSemanticBiasGray", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The higher the value the lower the streaming priority of images of this type");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm13; value
  }
  DCONST_DVARFLT_stream_distanceSemanticBiasGray = v108;
  v112 = Dvar_RegisterFloat("stream_distanceSemanticBiasSignedVelocity", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The higher the value the lower the streaming priority of images of this type");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm12; value
  }
  DCONST_DVARFLT_stream_distanceSemanticBiasSignedVelocity = v112;
  v116 = Dvar_RegisterFloat("stream_distanceSemanticBiasNormal", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The higher the value the lower the streaming priority of images of this type");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm13; value
  }
  DCONST_DVARFLT_stream_distanceSemanticBiasNormal = v116;
  v120 = Dvar_RegisterFloat("stream_distanceSemanticBiasMetalness", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The higher the value the lower the streaming priority of images of this type");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm12; value
  }
  DCONST_DVARFLT_stream_distanceSemanticBiasMetalness = v120;
  DCONST_DVARFLT_stream_distanceSemanticBiasNormalOcclusionGloss = Dvar_RegisterFloat("stream_distanceSemanticBiasNormalOcclusionGloss", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The higher the value the lower the streaming priority of images of this type");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm13; value
  }
  v127 = Dvar_RegisterFloat("stream_distanceSemanticBiasSignedDistanceField", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The higher the value the lower the streaming priority of images of this type");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm12; value
  }
  DCONST_DVARFLT_stream_distanceSemanticBiasSignedDistanceField = v127;
  v131 = Dvar_RegisterFloat("stream_distanceSemanticBiasCardImposterNormal", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The higher the value the lower the streaming priority of images of this type");
  __asm
  {
    vmovss  xmm1, cs:__real@3e000000; value
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm6; min
  }
  DCONST_DVARFLT_stream_distanceSemanticBiasCardImposterNormal = v131;
  v135 = Dvar_RegisterFloat("NRMRMTKQTL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The higher the value the lower the streaming priority of images of this type");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovss  xmm10, cs:__real@41000000
    vmovaps xmm1, xmm10; value
    vmovaps xmm2, xmm6; min
  }
  DVARFLT_stream_distanceBiasNormalMapFoliageCardImposter = v135;
  DVARFLT_stream_distanceBiasOtherFoliageCardImposter = Dvar_RegisterFloat("LNTQPKQQSO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The higher the value the lower the streaming priority of images of this type");
  DVARINT_stream_decompressErrorMode = Dvar_RegisterEnum("OMOQNNMQRS", stream_decompressErrorModeNames, 2, 0, "Determines how the game responds when decompression of xpak data fails for whatever reason.");
  DCONST_DVARBOOL_stream_hardwareDecompression = Dvar_RegisterBool("stream_hardwareDecompression", 1, 0x40004u, "Use hardware decompression (LZ77 DMA move engine) for xpak reads, where possible.");
  DCONST_DVARBOOL_stream_hardwareDecompressionValidate = Dvar_RegisterBool("stream_hardwareDecompressionValidate", 0, 0x40004u, "Use both hardware decompression (LZ77 DMA move engine) and software decompression for xpak reads. Validate that results are identical. Makes HW decompression run synchronously.");
  DCONST_DVARBOOL_stream_hardwareDecompressionAsync = Dvar_RegisterBool("stream_hardwareDecompressionAsync", 1, 0x40004u, "When using hardware decompression don't immediately wait on the CPU for it to finish, but run everything asynchronously.");
  DCONST_DVARINT64_stream_hardwareDecompressionAsyncCheckInterval = Dvar_RegisterInt64("stream_hardwareDecompressionAsyncCheckInterval", 750i64, 0i64, 1000000i64, 0x40004u, "Interval in microseconds used to check if an async hardware decompression job has finished.");
  DVARBOOL_stream_readLog = Dvar_RegisterBool("LMSLNRROMS", 0, 4u, "When enabled writes binary, timestamped log files to the home directory for every xpak read called StreamReadLog-<timestamp>");
  DVARBOOL_stream_dlog_analytics_enabled = Dvar_RegisterBool("PRQSKSQT", 0, 0, "When enabled, allow collecting and sending DLog events for xpak_key access - regular stream and primer");
  DCONST_DVARBOOL_stream_loadXPakSort = Dvar_RegisterBool("stream_loadXPakSort", 1, 0x40004u, "Sort load based on xpak ordering");
  DCONST_DVARINT_stream_readPresort = Dvar_RegisterInt("stream_readPresort", 128, 1, 0x7FFFFFFF, 0x40004u, "The amount of images, meshes and generics to presort for reading, this effectively limits the amount of assets considered for reading each stream frame.");
  DCONST_DVARINT_stream_imageFreePresort = Dvar_RegisterInt("stream_imageFreePresort", 512, 1, 0x7FFFFFFF, 0x40004u, "The amount of images to presort for deallocation, higher numbers will make the stream sort more expensive, lower numbers will make the free more expensive.");
  DCONST_DVARINT_stream_meshFreePresort = Dvar_RegisterInt("stream_meshFreePresort", 512, 1, 0x7FFFFFFF, 0x40004u, "The amount of meshes to presort for deallocation, higher numbers will make the stream sort more expensive, lower numbers will make the free more expensive.");
  DCONST_DVARINT_stream_genericFreePresort = Dvar_RegisterInt("stream_genericFreePresort", 512, 1, 0x7FFFFFFF, 0x40004u, "The amount of generics to presort for deallocation, higher numbers will make the stream sort more expensive, lower numbers will make the free more expensive.");
  DCONST_DVARBOOL_stream_forceRuntimeFullSort = Dvar_RegisterBool("stream_forceRuntimeFullSort", 0, 0x40004u, "Forces the use of the full sort of the sort lists at runtime as opposed to doing only partial sorts");
  DCONST_DVARBOOL_stream_treeEnable = Dvar_RegisterBool("stream_treeEnable", 1, 0x40004u, "Use stream tree to accelerate stream hinting");
  DCONST_DVARBOOL_stream_treeEnableMaterialGridWorkers = Dvar_RegisterBool("stream_treeEnableMaterialGridWorkers", 1, 0x40004u, "Enables worker commands to split material streamtreegrid traversal work");
  DCONST_DVARBOOL_stream_xmodelTreeEnable = Dvar_RegisterBool("stream_xmodelTreeEnable", 1, 0x40004u, "Use xmodel stream tree to accelerate stream hinting");
  DVARINT_stream_missingXModelLodBoost = Dvar_RegisterInt("MTOQTLSTL", 4, 0, 0x7FFFFFFF, 0, "Amount to boost missing xmodel lods by");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
  }
  DVARFLT_stream_treeDistanceFactor = Dvar_RegisterFloat("LQKMKMLKSM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Factor to expand stream tree traversal compared to current read distance");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  DVARFLT_stream_treeDistanceMinClamp = Dvar_RegisterFloat("NPMPORMQRK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Minimum clamp for stream tree traversal distance");
  DVARINT_stream_treeSpanBoost = Dvar_RegisterInt("MLQQQQNTMT", 16, 0, 0x7FFFFFFF, 0, "Amount to boost unstreamed spans by");
  DCONST_DVARINT_stream_treeDraw = Dvar_RegisterInt("stream_treeDraw", 0, 0, 0x7FFFFFFF, 0x40004u, "Draw stream tree visualization for debugging. 0= off, 1= nodes, assetIndex= instance volumes");
  DCONST_DVARINT_stream_xmodelTreeDraw = Dvar_RegisterInt("stream_xmodelTreeDraw", 0, 0, 2, 0x40004u, "Draw xmodel stream tree visualization for debugging. 0= off, 1= nodes, 2= nodes + volumes");
  DCONST_DVARINT_stream_treeDrawMaxDepth = Dvar_RegisterInt("stream_treeDrawMaxDepth", 10, 0, 1000, 0x40004u, "Max tree depth when drawing stream tree visualization");
  DCONST_DVARBOOL_stream_workerTouchDObj = Dvar_RegisterBool("stream_workerTouchDObj", 1, 0x40004u, "Use worker commands for touching DObj");
  DCONST_DVARBOOL_stream_deferTouchXModel = Dvar_RegisterBool("stream_deferTouchXModel", 1, 0x40004u, "Defer the XModel touching from Main thread to Stream Update worker.");
  DCONST_DVARBOOL_stream_defragEnable = Dvar_RegisterBool("stream_defragEnable", 1, 0x40004u, "Enables streamer VA defragging");
  DCONST_DVARBOOL_stream_defragAsyncMapping = Dvar_RegisterBool("stream_defragAsyncMapping", 1, 0x40004u, "Enables async VA map/unmap");
  DCONST_DVARBOOL_stream_defragAsyncCPUMemCpy = Dvar_RegisterBool("stream_defragAsyncCPUMemCpy", 1, 0x40004u, "Enables async defrag copies for CPU data memory copies");
  DCONST_DVARBOOL_stream_defragAssetLocking = Dvar_RegisterBool("stream_defragAssetLocking", 0, 0x40004u, "Allow assets to be locked to prevent defragging. Disabling this will implicitly disable any optimizations that rely on it (currently the optimal page count calculations for allocating and freeing assets).");
  DCONST_DVARINT_stream_defragFrameDepth = Dvar_RegisterInt("stream_defragFrameDepth", 3, 2, 16, 0x40004u, "Frame latency for defrag unmaps. Can only be set on command line. When changed at runtime has no effect.");
  __asm
  {
    vmovss  xmm3, cs:__real@4d7a0000; z
    vmovss  xmm2, cs:__real@4c480000; y
    vmovss  xmm1, cs:__real@47800000; x
  }
  DCONST_DVARINT_stream_defragGPUFaultProtectionMS = Dvar_RegisterInt("stream_defragGPUFaultProtectionMS", 100, 0, 500, 0x40004u, "Maximum wait time in milliseconds the defrag waits for GPU copies to finish in case of a forced streamer backend queue flush to prevent GPU page faults.");
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vmovss  dword ptr [rsp+0E8h+description], xmm9
    vmovss  [rsp+0E8h+flags], xmm8
  }
  v150 = Dvar_RegisterVec3("stream_defragStepUpBytes", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flags, description, 0x40004u, "VA waste in bytes at which we step up defragging.");
  __asm
  {
    vmovss  xmm0, cs:__real@44000000
    vmovss  xmm3, cs:__real@41800000; z
  }
  DCONST_DVARVEC3_stream_defragStepUpBytes = v150;
  __asm
  {
    vmovss  [rsp+0E8h+max], xmm0
    vmovss  xmm0, cs:__real@42800000
    vmovss  dword ptr [rsp+0E8h+description], xmm8
    vmovaps xmm2, xmm10; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+0E8h+flags], xmm0
  }
  DCONST_DVARVEC4_stream_defragStepUpCmdCount = Dvar_RegisterVec4("stream_defragStepUpCmdCount", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsa, descriptiona, max, 0x40004u, "Maximum defrag commands to issue per defrag region before reaching the next step up.");
  DVARINT_stream_defragCopyMode = Dvar_RegisterEnum("LPPLMNSMQR", stream_defragCopyModes, 5, 0, "Determines the mode of how defrag copy operations are executed");
  DCONST_DVARBOOL_stream_defragAlwaysVAResizeImages = Dvar_RegisterBool("stream_defragAlwaysVAResizeImages", 0, 0x40004u, "Debug toggle that always causes a VA resize via defrag move for streamed images, even when they wouldn't need it. Only for debugging.");
  DCONST_DVARINT_stream_defragValidationMode = Dvar_RegisterEnum("stream_defragValidationMode", stream_defragValidationModes, 0, 0x40004u, "Enables paranoid validation of data hashes of the source and target data of a defrag copy. Very slow. Only for debugging.");
  DCONST_DVARBOOL_stream_defragValidateRegions = Dvar_RegisterBool("stream_defragValidateRegions", 0, 0x40004u, "Enables paranoid validation of the moveable defrag regions. Very slow. Only for debugging.");
  DCONST_DVARBOOL_stream_defragValidateRegionEmptyVAReserve = Dvar_RegisterBool("stream_defragValidateRegionEmptyVAReserve", 0, 0x40004u, "Enables paranoid validation of the empty/unallocated/unused space of the VA reserve in the defrag regions to ensure there are no physical pages mapped. Very slow. Only for debugging.");
  __asm
  {
    vmovss  xmm6, cs:__real@44800000
    vmovss  xmm1, cs:__real@3fa00000; value
  }
  DCONST_DVARINT_stream_printIntervalStreamingQuality = Dvar_RegisterInt("stream_printIntervalStreamingQuality", 0, 0, 3600, 0x40004u, "Image streaming quality print time interval in seconds.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm13; min
  }
  v160 = Dvar_RegisterFloat("NRLNOQNMML", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance metric at which images are considered 'needed' by the graphics card.");
  __asm { vmovss  xmm1, cs:__real@3d000000; value }
  DVARFLT_stream_distanceImageNeeded = v160;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v164 = Dvar_RegisterFloat("OPPQONOSK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Minimum streaming distance we must have before making a transient zone visible");
  __asm { vmovss  xmm1, cs:__real@3fa66666; value }
  DVARFLT_stream_distanceImageNeededForTransientZone = v164;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm13; min
  }
  v168 = Dvar_RegisterFloat("stream_distanceImageInertia", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "If the least desirable loaded image is only stream_distanceImageInertia times the most desirable not-loaded image, don't read anything.");
  __asm { vmovss  xmm1, cs:__real@3f19999a; value }
  DCONST_DVARFLT_stream_distanceImageInertia = v168;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v172 = Dvar_RegisterFloat("RSOOSRLMK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance metric at which the bias for culled images kicks in. Images that have a distance metric further away than this (i.e. higher) and are culled by the CPU will have their metric value biased higher making them more likely to be unloaded.");
  __asm { vmovss  xmm1, cs:__real@3e4ccccd; value }
  DVARFLT_stream_distanceCulledImagesDeprioBegin = v172;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_stream_distanceCulledImagesDeprioBeginBR = Dvar_RegisterFloat("MMRMSTQNRQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Same as stream_distanceCulledImageDeprioBegin but applied only in battle royale maps.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm12; value
  }
  DVARFLT_stream_distanceCulledImagesDeprioBias = Dvar_RegisterFloat("RMMTRKTMQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance metric bias applied to the distance metric of fully culled (via CPU frustum or occlusion culling) images. The higher this bias the more likely culled images are to be unloaded. Set this to 0 to disable the feature.");
  __asm { vmovss  xmm1, cs:__real@42100000; value }
  DVARINT_stream_distanceCulledImagesDeprioBiasRampFrames = Dvar_RegisterInt("MPLNTKOKKM", 50, 0, 10000000, 0, "Number of stream update frames the deprioritization bias gets ramped up for culled images. If a culled image will be deprioritized it'll take this many stream update frames to reach the max bias value set by stream_distanceCulledImagesDeprioBias.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm13; min
  }
  DVARFLT_stream_zNearDistanceInMP = Dvar_RegisterFloat("NROMONSMSL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Minimum z Near distance (in inches) in MP & CP");
  DVARBOOL_stream_freqDomainMetricBiasEnable = Dvar_RegisterBool("NMLSLKOOTO", 1, 0, "Determines if the frequency domain stream distance metric bias the linker precomputes per image is applied during the streamer's update.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm13; min
    vmovaps xmm1, xmm10; value
  }
  v185 = Dvar_RegisterFloat("stream_freqDomainMetricLowDistScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Maximum stream distance scale factor applied as part of the frequency domain metric bias for images with low frequencies. The higher this number the more the low frequency images get pushed away from the camera and thus stream in later. Set to 1.0 to disable.");
  __asm { vmovss  xmm1, cs:__real@3ecccccd; value }
  DCONST_DVARFLT_stream_freqDomainMetricLowDistScale = v185;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v189 = Dvar_RegisterFloat("stream_freqDomainMetricHighDistScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Minimum stream distance scale factor applied as part of the frequency domain metric bias for images considered to have a lot of high frequencies. The lower this value the closer to the camera the image will be and thus stream in sooner. Set to 1.0 to disable.");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  DCONST_DVARFLT_stream_freqDomainMetricHighDistScale = v189;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v193 = Dvar_RegisterFloat("PONQPTKNK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Artificially reduce height difference between camera & ST. Use to help the streamer during sky dive & slam zoom");
  __asm { vmovss  xmm1, cs:__real@3d000000; value }
  DVARFLT_stream_superTerrainHeightScaling = v193;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_stream_farAwayHeightmapsStreamingDistance = Dvar_RegisterFloat("MKNRTSSKTS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Streaming distance to use for these heightmaps on terrain that are far away");
  DCONST_DVARBOOL_stream_resetSmoothingEnabled = Dvar_RegisterBool("stream_resetSmoothingEnabled", 1, 0x40004u, "Whether Stream_ResetImageQualitySmoothing is enabled - that is, we reset the smoothing on view transition");
  DCONST_DVARINT_stream_xpakSimulateMissingAssets = Dvar_RegisterInt("stream_xpakSimulateMissingAssets", 0, 0, 0x7FFFFFFF, 0x40004u, "Simulate the case where assets are not found in xpaks. The value means once per XXX items. (0 means disabled.)");
  DCONST_DVARINT_stream_xpakSimulateReadFailures = Dvar_RegisterInt("stream_xpakSimulateReadFailures", 0, 0, 0x7FFFFFFF, 0x40004u, "Simulate a read failure when reading streamed assets from xpaks. The value means once per XXX items. (0 means disabled.)");
  DCONST_DVARINT_stream_xpakSimulateDecompressFailures = Dvar_RegisterInt("stream_xpakSimulateDecompressFailures", 0, 0, 0x7FFFFFFF, 0x40004u, "Simulate a failure of decompressing an xpak block when reading streamed assets from xpaks. The value means once per XXX items. (0 means disabled.)");
  DCONST_DVARINT_stream_stealCpuMB = Dvar_RegisterInt("stream_stealCpuMB", 0, -1, 0x8000, 0x40004u, "Steal CPU memory (MB) from the streamer. -1 tries to take as much as possible.");
  DCONST_DVARINT_stream_stealGpuMB = Dvar_RegisterInt("stream_stealGpuMB", 0, -1, 0x8000, 0x40004u, "Steal GPU memory (MB) from the streamer. -1 tries to take as much as possible.");
  DCONST_DVARBOOL_stream_memThrashTest = Dvar_RegisterBool("stream_memThrashTest", 0, 0x40004u, "Randomly steals memory from the streamer and forces backend flushing.");
  DVARBOOL_stream_useImageFallback = Dvar_RegisterBool("LTNPSKKOQ", 1, 0, "When true the always loaded image fallback data is used when an image is fully unloaded by the streamer. When false the default texture (either black in ship or a red-white checkerboard in dev) is used");
  DVARBOOL_stream_drawMetrics = Dvar_RegisterBool("LMOPTMRTN", 0, 0, "Displays streamed image metrics for the closest visible surface along the view ray");
  DVARBOOL_stream_drawMetricsLockHits = Dvar_RegisterBool("NOSNPRTRMK", 0, 0, "Locks the current hits, i.e. whatever stream_drawMetrics is currently displaying, even if the view ray no longer hits that surface.");
  __asm
  {
    vmovss  xmm7, cs:__real@3a83126f
    vmovss  xmm1, cs:__real@3e3851ec; value
  }
  DVARBOOL_stream_drawMetricsLockView = Dvar_RegisterBool("LPTKORQONL", 0, 0, "Locks the current view position as the start of the trace ray used for stream_drawMetrics.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm7; min
  }
  DVARFLT_stream_drawMetricsFontSize = Dvar_RegisterFloat("RTMQORMNP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Sets the font sized used to draw the stream_drawMetrics display.");
  DVARINT_stream_drawMetricsLayerScroll = Dvar_RegisterInt("LOMOQKLNTT", 0, 0, 32, 0, "Scroll stream_drawMetrics layer display such that the given layer is the first one shown.");
  DVARINT_stream_dumpDestination = Dvar_RegisterInt("OQTROSPLS", 0, 0, 1, 0, "Applies to the various stream_dumpXXX commands: 0-dump to console, 1-write to file stream_dump_usage_<mapname>.csv");
  DVARBOOL_stream_showGenericUsage = Dvar_RegisterBool("LRPRKNPNLR", 0, 0, "Show memory usage of generic streaming objects as part of upper-right CG debug draw");
  DVARBOOL_stream_showReadStats = Dvar_RegisterBool("PQTKPTSTK", 0, 0, "Show various read stats, such as the average read size or the ratio of items to blocks read as part of upper-right CG debug draw");
  DVARBOOL_stream_showReadProfile = Dvar_RegisterBool("ROQSPLSKS", 0, 0, "Show the time the stream read file block code spends in each of its possibles statuses as part of upper-right CG debug draw");
  DVARBOOL_stream_drawTopSortedImages = Dvar_RegisterBool("NTTRNPSSSM", 0, 0, "Show streamer top sorted images on the screen.");
  DVARBOOL_stream_drawTopSortedImagesNoPart0 = Dvar_RegisterBool("TTKRLSNQO", 1, 0, "Exclude low mips in the top streamer images");
  DVARBOOL_stream_drawTopSortedImagesNoForced = Dvar_RegisterBool("MNQSPPMNLS", 1, 0, "Exclude forced images in the top streamer images");
  DVARINT_stream_drawTopSortedImagesSortKey = Dvar_RegisterEnum("NQOQNQRKNT", stream_drawTopSortedImagesSortKeyNames, 0, 0, "Sort order for top images");
  __asm { vmovss  xmm1, cs:__real@3e3851ec; value }
  DVARINT_stream_drawTopSortedImagesThresholdKB = Dvar_RegisterInt("MPNPMPKKMS", 100, 0, 1024, 0, "Minimum size to include in the top streamer images (size of the selected sort order).");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm7; min
  }
  DVARFLT_stream_drawTopSortedImagesFontSize = Dvar_RegisterFloat("RKPTRLKSS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Sets the font size used to draw the stream_drawTopSortedImages display.");
  DVARINT_stream_drawSortLists = Dvar_RegisterEnum("PRORQNSRR", stream_drawSortListsNames, 0, 0, "Displays the top entries in the sort lists on the screen.");
  __asm { vmovss  xmm1, cs:__real@3e19999a; value }
  DVARINT_stream_drawSortListsMaxCount = Dvar_RegisterInt("NKTMPOTKLS", 5, 1, 100, 0, "Maximum number of sort list entries to display per section in the stream_drawSortLists display.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm7; min
  }
  DVARFLT_stream_drawSortListsFontSize = Dvar_RegisterFloat("TMKRNPTON", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Sets the font size used to draw the stream_drawSortLists display.");
  DVARBOOL_stream_drawSortListsFull = Dvar_RegisterBool("MQNPLPTNTS", 0, 0, "When true the stream_drawSortLists display doesn't apply a filter to the sort list entries shown. Off by default to only include not in-use/forced entries for the right/to-be-loaded and only in-use/freeable entries for the left/to-be-unloaded side of the sort lists. When enabled you can observe how the streamer picks items off the right side of the sort lists and loads them.");
  DVARSTR_stream_drawSortListsFilter = Dvar_RegisterString("RMNORNTRR", (const char *)&queryFormat.fmt + 3, 0, "Sort list name filter. Comma separated list of names");
  DCONST_DVARBOOL_stream_drawTouchedImages = Dvar_RegisterBool("stream_drawTouchedImages", 0, 0x40004u, "Draws list of touched images.");
  DCONST_DVARBOOL_stream_drawXPakHeatMap = Dvar_RegisterBool("stream_drawXPakHeatMap", 0, 0x40004u, "Visualize XPak read pattern");
  DCONST_DVARINT_stream_drawXPakHeatMapTimeLimit = Dvar_RegisterInt("stream_drawXPakHeatMapTimeLimit", 10000, 0, 0x7FFFFFFF, 0x40004u, "XPak heat map will ignore read activity older than the time limit set.");
  DCONST_DVARINT_stream_drawXPakHeatMapMaxBlockCountOnWidth = Dvar_RegisterInt("stream_drawXPakHeatMapMaxBlockCountOnWidth", 128, 64, 512, 0x40004u, "Max block count on width for XPak heat map; 4K resolution can show more blocks on width.");
  DCONST_DVARBOOL_stream_drawCameraVelocity = Dvar_RegisterBool("stream_drawCameraVelocity", 0, 0x40004u, "Visualize camera velocity using a horizontal at the bottom of the screen");
  DVARBOOL_stream_drawDefrag = Dvar_RegisterBool("NSRLKQRQL", 0, 0, "Displays metrics and statistics for the various defrag regions.");
  DVARINT_stream_modelLodLimit = Dvar_RegisterInt("LPNQOKLRQR", 0, 0, 5, 0, "Hard limit to reject higher lod from being picked");
  DCONST_DVARBOOL_stream_devDisableManualView0 = Dvar_RegisterBool("stream_devDisableManualView0", 0, 0x40004u, "Disables manual view 0 (StreamManualViewType::CLIENT_CAMERA).");
  DCONST_DVARBOOL_stream_devDisableManualView1 = Dvar_RegisterBool("stream_devDisableManualView1", 0, 0x40004u, "Disables manual view 1 (StreamManualViewType::CLIENT_BODY).");
  DCONST_DVARBOOL_stream_devDisableManualView2 = Dvar_RegisterBool("stream_devDisableManualView2", 0, 0x40004u, "Disables manual view 2 (StreamManualViewType::SERVER_CODE).");
  DCONST_DVARBOOL_stream_devDisableManualView3 = Dvar_RegisterBool("stream_devDisableManualView3", 0, 0x40004u, "Disables manual view 3 (StreamManualViewType::SCRIPT0).");
  DCONST_DVARBOOL_stream_devDisableManualView4 = Dvar_RegisterBool("stream_devDisableManualView4", 0, 0x40004u, "Disables manual view 3 (StreamManualViewType::SCRIPT1).");
  DVARBOOL_stream_imagePriorityReporting = Dvar_RegisterBool("LRTLKQPMNN", 0, 0, "Enable image priority reporting");
  DVARBOOL_stream_imagePriorityTracking = Dvar_RegisterBool("MOOOTTKTPQ", 1, 0, "Kill switch for tracking image priorities. We track the priorities even when reporting is off, to catch errors. Once disabled, it can't be turned back on.");
  DVARBOOL_stream_imagePriorityUseBlackbox = Dvar_RegisterBool("RTQNROMKQ", 0, 0, "Enable black box reporting of image priorities");
  DVARINT_stream_imagePriorityReportDelay = Dvar_RegisterInt("MNMQTPLSKO", 300, 0, 0x7FFFFFFF, 0, "Delay between automatic image reports (in seconds). 0 to disable.");
  DVARBOOL_stream_imagePriorityResetOnGenerate = Dvar_RegisterBool("NTSOQNMKNM", 1, 0, "Resets the highest priority on report generation, so each commit has fresh data");
  DCONST_DVARBOOL_stream_pedanticAddImageChecks = Dvar_RegisterBool("stream_pedanticAddImageChecks", 1, 0x40004u, "Enables pedantic checks on Stream_AddImageXXX APIs to ensure we only add streamed images to the streamer sort list.");
  __asm { vmovaps xmm14, [rsp+0E8h+var_98] }
  _R11 = &v224;
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
  }
  Dvar_EndPermanentRegistration();
}

