/*
==============
R_Cinematic_PlayBinkFillerAfterFinish
==============
*/

void __fastcall R_Cinematic_PlayBinkFillerAfterFinish(const bool playFiller)
{
  ?R_Cinematic_PlayBinkFillerAfterFinish@@YAX_N@Z(playFiller);
}

/*
==============
R_Cinematic_GetOpenFlagsString
==============
*/

bool __fastcall R_Cinematic_GetOpenFlagsString(char *outFlagsString, unsigned __int64 outFlagsSize)
{
  return ?R_Cinematic_GetOpenFlagsString@@YA_NPEAD_K@Z(outFlagsString, outFlagsSize);
}

/*
==============
R_Cinematic_Load
==============
*/

void __fastcall R_Cinematic_Load(SaveGame *save, const int serverTime)
{
  ?R_Cinematic_Load@@YAXPEAUSaveGame@@H@Z(save, serverTime);
}

/*
==============
R_Cinematic_Save
==============
*/

void __fastcall R_Cinematic_Save(MemoryFile *memFile, const int serverTime)
{
  ?R_Cinematic_Save@@YAXPEAUMemoryFile@@H@Z(memFile, serverTime);
}

/*
==============
R_Cinematic_SetPaused
==============
*/

void __fastcall R_Cinematic_SetPaused(CinematicEnum paused, int pauseFlags)
{
  ?R_Cinematic_SetPaused@@YAXW4CinematicEnum@@H@Z(paused, pauseFlags);
}

/*
==============
R_Cinematic_GetMemoryUsed
==============
*/

unsigned __int64 __fastcall R_Cinematic_GetMemoryUsed()
{
  return ?R_Cinematic_GetMemoryUsed@@YA_KXZ();
}

/*
==============
R_Cinematic_GetPaused
==============
*/

bool __fastcall R_Cinematic_GetPaused()
{
  return ?R_Cinematic_GetPaused@@YA_NXZ();
}

/*
==============
R_Cinematic_ClearServerFlags
==============
*/

void __fastcall R_Cinematic_ClearServerFlags(const int flags)
{
  ?R_Cinematic_ClearServerFlags@@YAXH@Z(flags);
}

/*
==============
R_Cinematic_PendingSyncFrame
==============
*/

bool __fastcall R_Cinematic_PendingSyncFrame()
{
  return ?R_Cinematic_PendingSyncFrame@@YA_NXZ();
}

/*
==============
CinematicFileHandle::Read
==============
*/

unsigned __int64 __fastcall CinematicFileHandle::Read(CinematicFileHandle *this, void *const destBuffer, const unsigned __int64 size)
{
  return ?Read@CinematicFileHandle@@QEAA_KQEAX_K@Z(this, destBuffer, size);
}

/*
==============
CinematicFileHandle::AlignedRead
==============
*/

unsigned __int64 __fastcall CinematicFileHandle::AlignedRead(CinematicFileHandle *this, void *const destBuffer, const unsigned __int64 size, const unsigned __int64 seekPos)
{
  return ?AlignedRead@CinematicFileHandle@@AEAA_KQEAX_K1@Z(this, destBuffer, size, seekPos);
}

/*
==============
RB_Cinematic_UpdateFrame
==============
*/

void __fastcall RB_Cinematic_UpdateFrame(const GfxBackEndData *data)
{
  ?RB_Cinematic_UpdateFrame@@YAXPEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_Cinematic_IsStarted
==============
*/

bool __fastcall R_Cinematic_IsStarted()
{
  return ?R_Cinematic_IsStarted@@YA_NXZ();
}

/*
==============
R_Cinematic_IsLoadFiller
==============
*/

bool __fastcall R_Cinematic_IsLoadFiller()
{
  return ?R_Cinematic_IsLoadFiller@@YA_NXZ();
}

/*
==============
R_Cinematic_GetVideoStartTime
==============
*/

unsigned __int64 __fastcall R_Cinematic_GetVideoStartTime()
{
  return ?R_Cinematic_GetVideoStartTime@@YA_KXZ();
}

/*
==============
R_Cinematic_GetPlaybackStats
==============
*/

void __fastcall R_Cinematic_GetPlaybackStats(CinematicPlaybackStats *stats)
{
  ?R_Cinematic_GetPlaybackStats@@YAXPEAUCinematicPlaybackStats@@@Z(stats);
}

/*
==============
R_Cinematic_StartEncryptedPlayback
==============
*/

void __fastcall R_Cinematic_StartEncryptedPlayback(const char *name, unsigned int playbackFlags, unsigned int startOffsetMSec, const unsigned __int64 keyByte0, const unsigned __int64 keyByte8, const unsigned __int64 keyByte16)
{
  ?R_Cinematic_StartEncryptedPlayback@@YAXPEBDII_K11@Z(name, playbackFlags, startOffsetMSec, keyByte0, keyByte8, keyByte16);
}

/*
==============
R_Cinematic_SetUseAlternativeAsyncCore
==============
*/

void __fastcall R_Cinematic_SetUseAlternativeAsyncCore(const bool useAlternativeCores)
{
  ?R_Cinematic_SetUseAlternativeAsyncCore@@YAX_N@Z(useAlternativeCores);
}

/*
==============
R_Cinematic_IsLoaded
==============
*/

bool __fastcall R_Cinematic_IsLoaded()
{
  return ?R_Cinematic_IsLoaded@@YA_NXZ();
}

/*
==============
R_Cinematic_Init
==============
*/

void R_Cinematic_Init(void)
{
  ?R_Cinematic_Init@@YAXXZ();
}

/*
==============
CinematicHunk::Clear
==============
*/

void __fastcall CinematicHunk::Clear(CinematicHunk *this)
{
  ?Clear@CinematicHunk@@QEAAXXZ(this);
}

/*
==============
R_Cinematic_SetNextPlayback
==============
*/

void __fastcall R_Cinematic_SetNextPlayback(const char *name, unsigned int playbackFlags, const unsigned int startTimeInMsec, const CinematicEnum pauseState)
{
  ?R_Cinematic_SetNextPlayback@@YAXPEBDIIW4CinematicEnum@@@Z(name, playbackFlags, startTimeInMsec, pauseState);
}

/*
==============
R_Cinematic_GetBinkTotalFrames
==============
*/

unsigned int __fastcall R_Cinematic_GetBinkTotalFrames()
{
  return ?R_Cinematic_GetBinkTotalFrames@@YAIXZ();
}

/*
==============
R_Cinematic_GetFrame
==============
*/

int __fastcall R_Cinematic_GetFrame()
{
  return ?R_Cinematic_GetFrame@@YAHXZ();
}

/*
==============
R_Cinematic_PlayFromSave
==============
*/

bool __fastcall R_Cinematic_PlayFromSave()
{
  return ?R_Cinematic_PlayFromSave@@YA_NXZ();
}

/*
==============
R_Cinematic_DrawStretchPic_Letterboxed
==============
*/

void __fastcall R_Cinematic_DrawStretchPic_Letterboxed(bool drawFilledToScreen, float aspectRatio)
{
  ?R_Cinematic_DrawStretchPic_Letterboxed@@YAX_NM@Z(drawFilledToScreen, aspectRatio);
}

/*
==============
R_Cinematic_StopPlayback
==============
*/

void __fastcall R_Cinematic_StopPlayback(const bool muteAudio)
{
  ?R_Cinematic_StopPlayback@@YAX_N@Z(muteAudio);
}

/*
==============
R_Cinematic_SuspendPlayback
==============
*/

void R_Cinematic_SuspendPlayback(void)
{
  ?R_Cinematic_SuspendPlayback@@YAXXZ();
}

/*
==============
R_Cinematic_ClearSaveLoad
==============
*/

void R_Cinematic_ClearSaveLoad(void)
{
  ?R_Cinematic_ClearSaveLoad@@YAXXZ();
}

/*
==============
RB_Cinematic_UpdateSaveData
==============
*/

void RB_Cinematic_UpdateSaveData(void)
{
  ?RB_Cinematic_UpdateSaveData@@YAXXZ();
}

/*
==============
R_Cinematic_Preload
==============
*/

bool __fastcall R_Cinematic_Preload(const char *name)
{
  return ?R_Cinematic_Preload@@YA_NPEBD@Z(name);
}

/*
==============
R_Cinematic_GetBinkFrameNum
==============
*/

unsigned int __fastcall R_Cinematic_GetBinkFrameNum()
{
  return ?R_Cinematic_GetBinkFrameNum@@YAIXZ();
}

/*
==============
R_Cinematic_GetFilenameAndTimeInMsec
==============
*/

bool __fastcall R_Cinematic_GetFilenameAndTimeInMsec(char *outName, unsigned __int64 outNameSize, unsigned int *outTimeInMsec)
{
  return ?R_Cinematic_GetFilenameAndTimeInMsec@@YA_NPEAD_KPEAI@Z(outName, outNameSize, outTimeInMsec);
}

/*
==============
R_Cinematic_StartPlayback
==============
*/

void __fastcall R_Cinematic_StartPlayback(const char *name, unsigned int playbackFlags, unsigned int startOffsetMSec)
{
  ?R_Cinematic_StartPlayback@@YAXPEBDII@Z(name, playbackFlags, startOffsetMSec);
}

/*
==============
CinematicFileHandle::Close
==============
*/

void __fastcall CinematicFileHandle::Close(CinematicFileHandle *this)
{
  ?Close@CinematicFileHandle@@QEAAXXZ(this);
}

/*
==============
R_Cinematic_GetBinkFrameRate
==============
*/

unsigned int __fastcall R_Cinematic_GetBinkFrameRate()
{
  return ?R_Cinematic_GetBinkFrameRate@@YAIXZ();
}

/*
==============
R_Cinematic_SetRendererImagesToFrame
==============
*/

void __fastcall R_Cinematic_SetRendererImagesToFrame(GfxCmdBufInput *cmdBufInput)
{
  ?R_Cinematic_SetRendererImagesToFrame@@YAXPEAUGfxCmdBufInput@@@Z(cmdBufInput);
}

/*
==============
R_Cinematic_IsHeld
==============
*/

bool __fastcall R_Cinematic_IsHeld()
{
  return ?R_Cinematic_IsHeld@@YA_NXZ();
}

/*
==============
R_Cinematic_GetPlaybackFlagsString
==============
*/

bool __fastcall R_Cinematic_GetPlaybackFlagsString(char *outFlagsString, unsigned __int64 outFlagsSize)
{
  return ?R_Cinematic_GetPlaybackFlagsString@@YA_NPEAD_K@Z(outFlagsString, outFlagsSize);
}

/*
==============
R_Cinematic_DrawFullscreen_Letterboxed
==============
*/

void R_Cinematic_DrawFullscreen_Letterboxed(void)
{
  ?R_Cinematic_DrawFullscreen_Letterboxed@@YAXXZ();
}

/*
==============
R_Cinematic_IsLoadingScreen
==============
*/

bool __fastcall R_Cinematic_IsLoadingScreen()
{
  return ?R_Cinematic_IsLoadingScreen@@YA_NXZ();
}

/*
==============
R_Cinematic_Shutdown
==============
*/

void R_Cinematic_Shutdown(void)
{
  ?R_Cinematic_Shutdown@@YAXXZ();
}

/*
==============
R_Cinematic_IsStartedOrPendingStart
==============
*/

bool __fastcall R_Cinematic_IsStartedOrPendingStart()
{
  return ?R_Cinematic_IsStartedOrPendingStart@@YA_NXZ();
}

/*
==============
R_Cinematic_GetVideoInfo
==============
*/

bool __fastcall R_Cinematic_GetVideoInfo(unsigned int *width, unsigned int *height, float *framerate, bool *hdr)
{
  return ?R_Cinematic_GetVideoInfo@@YA_NPEAI0PEAMPEA_N@Z(width, height, framerate, hdr);
}

/*
==============
CinematicFileHandle::PerformPartialReadAtSeekPos
==============
*/

bool __fastcall CinematicFileHandle::PerformPartialReadAtSeekPos(CinematicFileHandle *this)
{
  return ?PerformPartialReadAtSeekPos@CinematicFileHandle@@AEAA_NXZ(this);
}

/*
==============
R_Cinematic_GetStateString
==============
*/

bool __fastcall R_Cinematic_GetStateString(char *outString, unsigned __int64 outSize)
{
  return ?R_Cinematic_GetStateString@@YA_NPEAD_K@Z(outString, outSize);
}

/*
==============
R_Cinematic_UnsetNextPlayback
==============
*/

void R_Cinematic_UnsetNextPlayback(void)
{
  ?R_Cinematic_UnsetNextPlayback@@YAXXZ();
}

/*
==============
CinematicFileHandle::Open
==============
*/

bool __fastcall CinematicFileHandle::Open(CinematicFileHandle *this, const char *path)
{
  return ?Open@CinematicFileHandle@@QEAA_NPEBD@Z(this, path);
}

/*
==============
RB_Cinematic_EndFrame
==============
*/

void __fastcall RB_Cinematic_EndFrame(const GfxBackEndData *data)
{
  ?RB_Cinematic_EndFrame@@YAXPEBUGfxBackEndData@@@Z(data);
}

/*
==============
R_Cinematic_GetNextFilename
==============
*/

bool __fastcall R_Cinematic_GetNextFilename(char *outName, unsigned __int64 outNameSize)
{
  return ?R_Cinematic_GetNextFilename@@YA_NPEAD_K@Z(outName, outNameSize);
}

/*
==============
R_Cinematic_GetTimeInMsec
==============
*/

unsigned int __fastcall R_Cinematic_GetTimeInMsec()
{
  return ?R_Cinematic_GetTimeInMsec@@YAIXZ();
}

/*
==============
R_Cinematic_IsPending
==============
*/

bool __fastcall R_Cinematic_IsPending()
{
  return ?R_Cinematic_IsPending@@YA_NXZ();
}

/*
==============
R_Cinematic_IsCinematicResource
==============
*/

bool __fastcall R_Cinematic_IsCinematicResource(const void *resourceAddress)
{
  return ?R_Cinematic_IsCinematicResource@@YA_NPEBX@Z(resourceAddress);
}

/*
==============
R_Cinematic_IsFinished
==============
*/

bool __fastcall R_Cinematic_IsFinished()
{
  return ?R_Cinematic_IsFinished@@YA_NXZ();
}

/*
==============
R_Cinematic_ClearPreloads
==============
*/

void R_Cinematic_ClearPreloads(void)
{
  ?R_Cinematic_ClearPreloads@@YAXXZ();
}

/*
==============
RB_Cinematic_DebugDrawFrames
==============
*/

void __fastcall RB_Cinematic_DebugDrawFrames(GfxCmdBufContext *gfxContext)
{
  ?RB_Cinematic_DebugDrawFrames@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
R_Cinematic_StartNextPlayback
==============
*/

bool __fastcall R_Cinematic_StartNextPlayback()
{
  return ?R_Cinematic_StartNextPlayback@@YA_NXZ();
}

/*
==============
R_Cinematic_DrawLetterbox_Only
==============
*/

void __fastcall R_Cinematic_DrawLetterbox_Only(float aspectRatio, float alpha, float lerp)
{
  ?R_Cinematic_DrawLetterbox_Only@@YAXMMM@Z(aspectRatio, alpha, lerp);
}

/*
==============
CinematicFileHandle::AlignedRead
==============
*/
__int64 CinematicFileHandle::AlignedRead(CinematicFileHandle *this, void *const destBuffer, const unsigned __int64 size, const unsigned __int64 seekPos)
{
  __int64 v4; 
  __int64 v8; 

  v4 = size;
  if ( size + seekPos < this->m_initialBufferSize )
  {
    memcpy_0(destBuffer, &this->m_initialBuffer[seekPos], size);
    return v4;
  }
  FileStream_Easy_SeekSet((FileStreamFileID)*(_DWORD *)this->m_fileID, seekPos);
  v8 = FileStream_Easy_Read((FileStreamFileID)*(_DWORD *)this->m_fileID, destBuffer, v4, NULL, FILE_STREAM_TRACK_BINK);
  v4 = v8;
  if ( v8 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned __int64 __cdecl truncate_cast_impl<unsigned __int64,__int64>(__int64)", "unsigned", v8, "signed", v8) )
    __debugbreak();
  if ( v4 )
    return v4;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 727, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "BINK: Read error in AlignedRead()\n") )
    __debugbreak();
  return 0i64;
}

/*
==============
CinematicHunk::Clear
==============
*/
void CinematicHunk::Clear(CinematicHunk *this)
{
  if ( !this->m_userHunk && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1040, ASSERT_TYPE_ASSERT, "(m_userHunk)", (const char *)&queryFormat, "m_userHunk") )
    __debugbreak();
  if ( cinematicGlob.bink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1041, ASSERT_TYPE_ASSERT, "(cinematicGlob.bink == nullptr)", (const char *)&queryFormat, "cinematicGlob.bink == nullptr") )
    __debugbreak();
  Mem_HunkUser_Reset(this->m_userHunk);
}

/*
==============
CinematicFileHandle::Close
==============
*/
void CinematicFileHandle::Close(CinematicFileHandle *this)
{
  int v2; 

  if ( *(_DWORD *)this->m_fileID == -16777217 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 486, ASSERT_TYPE_ASSERT, "(m_fileID != FileStreamFileID::INVALID)", (const char *)&queryFormat, "m_fileID != FileStreamFileID::INVALID") )
    __debugbreak();
  v2 = *(_DWORD *)this->m_fileID;
  if ( v2 != -16777217 )
  {
    FileStream_CloseFile((FileStreamFileID)v2);
    *(_DWORD *)this->m_fileID = -16777217;
    this->m_seekPosition = 0i64;
    this->m_partialReadBufValid = 0;
    this->m_partialReadBufSeek = 0i64;
    this->m_initialBufferSize = 0;
  }
}

/*
==============
FreeBinkResourceBuffers
==============
*/
__int64 FreeBinkResourceBuffers()
{
  __int64 i; 
  __int64 result; 

  for ( i = 0i64; (unsigned int)i < cinematicGlob.numBinkGfxBuffers; i = (unsigned int)(i + 1) )
    R_DestroyBuffer(&cinematicGlob.binkGfxBuffers[i]);
  result = 0i64;
  cinematicGlob.binkGfxBuffers[0] = NULL;
  cinematicGlob.binkGfxBuffers[1] = NULL;
  cinematicGlob.binkGfxBuffers[2] = NULL;
  cinematicGlob.binkGfxBuffers[3] = NULL;
  cinematicGlob.binkGfxBuffers[4] = NULL;
  cinematicGlob.binkGfxBuffers[5] = NULL;
  cinematicGlob.binkGfxBuffers[6] = NULL;
  cinematicGlob.binkGfxBuffers[7] = NULL;
  cinematicGlob.numBinkGfxBuffers = 0;
  return result;
}

/*
==============
MakeImageProgID
==============
*/
R_ImageProgID MakeImageProgID(R_ImageProgID base, unsigned int frameSet)
{
  if ( (unsigned __int8)(base - 40) > 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1202, ASSERT_TYPE_ASSERT, "(base >= IMAGE_PROG_CINEMATIC_Y_0 && base < IMAGE_PROG_CINEMATIC_Y_1)", (const char *)&queryFormat, "base >= IMAGE_PROG_CINEMATIC_Y_0 && base < IMAGE_PROG_CINEMATIC_Y_1") )
    __debugbreak();
  if ( frameSet >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1203, ASSERT_TYPE_ASSERT, "(frameSet < 3)", (const char *)&queryFormat, "frameSet < 3") )
    __debugbreak();
  return base + 5 * frameSet;
}

/*
==============
CinematicFileHandle::Open
==============
*/
bool CinematicFileHandle::Open(CinematicFileHandle *this, const char *path)
{
  int v4; 
  bool v5; 
  int v6; 
  char dest[256]; 

  if ( *(_DWORD *)this->m_fileID != -16777217 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 401, ASSERT_TYPE_ASSERT, "(m_fileID == FileStreamFileID::INVALID)", (const char *)&queryFormat, "m_fileID == FileStreamFileID::INVALID") )
    __debugbreak();
  if ( this->m_seekPosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 406, ASSERT_TYPE_ASSERT, "(m_seekPosition == 0)", (const char *)&queryFormat, "m_seekPosition == 0") )
    __debugbreak();
  if ( *(_BYTE *)com_cinematicForceName->current.integer64 )
    path = com_cinematicForceName->current.string;
  Com_sprintf(dest, 0x100ui64, "%s.bik", path);
  LOBYTE(v4) = FileStream_OpenFile(SF_VIDEO_LOC, dest, 9);
  *(_DWORD *)this->m_fileID = v4;
  v5 = v4 == -16777217;
  if ( v4 == -16777217 )
  {
    LOBYTE(v6) = FileStream_OpenFile(SF_VIDEO, dest, 9);
    *(_DWORD *)this->m_fileID = v6;
    v5 = v6 == -16777217;
  }
  return !v5;
}

/*
==============
CinematicFileHandle::PerformPartialReadAtSeekPos
==============
*/
char CinematicFileHandle::PerformPartialReadAtSeekPos(CinematicFileHandle *this)
{
  unsigned __int64 v2; 

  v2 = this->m_seekPosition & 0xFFFFFFFFFFFFF000ui64;
  if ( this->m_partialReadBufValid && this->m_partialReadBufSeek == v2 )
    return 1;
  if ( CinematicFileHandle::AlignedRead(this, this, 0x1000ui64, this->m_seekPosition & 0xFFFFFFFFFFFFF000ui64) )
  {
    this->m_partialReadBufValid = 1;
    this->m_partialReadBufSeek = v2;
    return 1;
  }
  this->m_partialReadBufValid = 0;
  return 0;
}

/*
==============
RB_Cinematic_Advance
==============
*/

__int64 __fastcall RB_Cinematic_Advance(int isBlocking, double _XMM1_8)
{
  int targetPaused; 
  int v14; 
  unsigned int FrameNum; 
  __int64 v18; 
  __int64 playbackFlags; 
  BINK *bink; 
  unsigned int KeyFrame; 
  char *Error; 
  __int64 v34; 
  BINK *v35; 
  unsigned __int8 v36; 
  unsigned __int64 v37; 
  unsigned __int64 ReadBufferSize; 
  unsigned __int64 v39; 
  unsigned __int64 v40; 
  char v41; 
  __int64 result; 
  __int64 v46; 
  __int64 v47; 
  unsigned int output_planeindex; 
  __int64 graphics_context[2]; 
  const _GUID *v50; 
  void **v51; 
  __int64 v52; 
  BINKREALTIME run; 
  char v54; 
  void *retaddr; 

  _RAX = &retaddr;
  v52 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  Profile_Begin(144);
  targetPaused = cinematicGlob.targetPaused;
  if ( cinematicGlob.targetPaused > (unsigned int)CINEMATIC_INGAME_PAUSED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2570, ASSERT_TYPE_ASSERT, "( ( targetPaused == CINEMATIC_INGAME_PAUSED || targetPaused == CINEMATIC_PAUSED || targetPaused == CINEMATIC_NOT_PAUSED ) )", "( targetPaused ) = %i", cinematicGlob.targetPaused) )
    __debugbreak();
  if ( cinematicGlob.currentPaused > (unsigned int)CINEMATIC_INGAME_PAUSED )
  {
    LODWORD(v46) = cinematicGlob.currentPaused;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2571, ASSERT_TYPE_ASSERT, "( ( cinematicGlob.currentPaused == CINEMATIC_INGAME_PAUSED || cinematicGlob.currentPaused == CINEMATIC_PAUSED || cinematicGlob.currentPaused == CINEMATIC_NOT_PAUSED ) )", "( cinematicGlob.currentPaused ) = %i", v46) )
      __debugbreak();
  }
  if ( !cinematicGlob.bink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2573, ASSERT_TYPE_ASSERT, "(cinematicGlob.bink)", (const char *)&queryFormat, "cinematicGlob.bink") )
    __debugbreak();
  _EBX = 0;
  if ( targetPaused != cinematicGlob.currentPaused && cinematicGlob.activeImageFrame != -1 )
  {
    if ( targetPaused < 1 || cinematicGlob.currentPaused < CINEMATIC_PAUSED )
    {
      j_BinkPause(cinematicGlob.bink, targetPaused >= 1);
      R_Cinematic_CheckBinkError();
    }
    cinematicGlob.currentPaused = targetPaused;
  }
  if ( cinematicGlob.currentMuted != cinematicGlob.targetMuted )
  {
    __asm { vmovd   xmm1, ebx }
    _EAX = cinematicGlob.targetMuted;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm2, cs:__real@3f800000
      vxorps  xmm1, xmm1, xmm1
      vblendvps xmm2, xmm1, xmm2, xmm3; volumeScale
    }
    R_Cinematic_InitBinkVolumes(cinematicGlob.bink, cinematicGlob.trackIDsToPlay, *(const float *)&_XMM2);
    cinematicGlob.currentMuted = cinematicGlob.targetMuted;
  }
  Profile_Begin(151);
  if ( targetPaused && cinematicGlob.activeImageFrame != -1 || (v14 = 1, j_BinkWait(cinematicGlob.bink)) )
    v14 = 0;
  Profile_EndInternal(NULL);
  if ( v14 || isBlocking )
  {
    __asm
    {
      vmovss  xmm6, cs:__real@3a83126f
      vmovss  xmm7, cs:__real@3f000000
    }
    while ( 1 )
    {
      ++cinematicGlob.playbackStatsFramesDecoded;
      if ( cinematicGlob.decodingFrame )
        RB_Cinematic_FinishDecode();
      if ( cinematicGlob.gpuDecoding )
      {
        R_LockGfxImmediateContext();
        v50 = NULL;
        v51 = NULL;
        graphics_context[0] = 0i64;
        graphics_context[1] = 0i64;
        j_Before_Draw_Bink_textures(cinematicGlob.binkTextures, cinematicGlob.binkShaders, graphics_context, &output_planeindex);
        if ( v50 )
          g_dx.immediateCommandQueue.commandQueue->m_pFunction[5].QueryInterface(g_dx.immediateCommandQueue.commandQueue, v50, v51);
        R_UnlockGfxImmediateContext();
        FrameNum = output_planeindex;
        if ( output_planeindex >= 3 )
        {
          LODWORD(v47) = 3;
          LODWORD(v46) = output_planeindex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2352, ASSERT_TYPE_ASSERT, "(unsigned)( currentPlaneIndex ) < (unsigned)( ( sizeof( *array_counter( cinematicGlob.images ) ) + 0 ) )", "currentPlaneIndex doesn't index ARRAY_COUNT( cinematicGlob.images )\n\t%i not in [0, %i)", v46, v47) )
            __debugbreak();
          FrameNum = output_planeindex;
        }
      }
      else
      {
        FrameNum = cinematicGlob.binkBuffers.FrameNum;
      }
      cinematicGlob.activeImageFrame = FrameNum;
      Profile_Begin(145);
      playbackFlags = cinematicGlob.target[2].playbackFlags;
      if ( (cinematicGlob.target[2].playbackFlags & 0x40) != 0 )
        break;
      if ( (cinematicGlob.target[2].playbackFlags & 0x200) == 0 )
      {
        if ( (cinematicGlob.target[2].playbackFlags & 2) == 0 && cinematicGlob.bink->FrameNum == cinematicGlob.bink->Frames )
        {
          Profile_EndInternal(NULL);
          goto LABEL_57;
        }
        LOBYTE(playbackFlags) = cinematicGlob.target[2].playbackFlags & 6;
        if ( (cinematicGlob.target[2].playbackFlags & 6) == 2 && cinematicGlob.bink->FrameNum == cinematicGlob.bink->Frames )
        {
          if ( !cinematicGlob.hasFileIO )
            R_Cinematic_SeizeIO(playbackFlags, cinematicGlob.bink);
          RB_Cinematic_BinkGoto(1u);
        }
        else
        {
          RB_Cinematic_BinkNextFrame(playbackFlags, cinematicGlob.bink);
        }
        goto LABEL_52;
      }
      if ( cinematicGlob.bink->FrameNum >= cinematicGlob.bink->Frames - 1 )
      {
        cinematicGlob.cinematicHeld = 1;
        Profile_EndInternal(NULL);
        goto LABEL_57;
      }
      RB_Cinematic_BinkNextFrame(cinematicGlob.bink, v18);
      Profile_EndInternal(NULL);
LABEL_53:
      RB_Cinematic_StartDecode();
      if ( !j_BinkShouldSkip(cinematicGlob.bink) )
        goto LABEL_57;
    }
    bink = cinematicGlob.bink;
    if ( cinematicGlob.bink->FrameNum == cinematicGlob.bink->Frames )
    {
      if ( !cinematicGlob.hasFileIO )
      {
        R_Cinematic_SeizeIO(cinematicGlob.bink, v18);
        bink = cinematicGlob.bink;
      }
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rax
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vdivss  xmm1, xmm1, xmm0
        vmulss  xmm2, xmm1, xmm6
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm2, xmm0
        vaddss  xmm3, xmm1, xmm7
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm1, xmm0, xmm3, 1
        vcvttss2si edx, xmm1; frame
      }
      KeyFrame = j_BinkGetKeyFrame(bink, _EDX, 2);
      RB_Cinematic_BinkGoto(KeyFrame);
    }
    else
    {
      RB_Cinematic_BinkNextFrame(cinematicGlob.bink, v18);
    }
LABEL_52:
    Profile_EndInternal(NULL);
    goto LABEL_53;
  }
LABEL_57:
  Error = j_BinkGetError();
  if ( Error && *Error && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1051, ASSERT_TYPE_ASSERT, "(!binkError || binkError[0] == '\\0')", "%s\n\tBinkGetError(): \"%s\"", "!binkError || binkError[0] == '\\0'", Error) )
    __debugbreak();
  v35 = cinematicGlob.bink;
  if ( (cinematicGlob.target[2].playbackFlags & 0x42) != 0 || cinematicGlob.bink->FrameNum != cinematicGlob.bink->Frames )
  {
    if ( !cinematicGlob.bink )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2647, ASSERT_TYPE_ASSERT, "(cinematicGlob.bink)", (const char *)&queryFormat, "cinematicGlob.bink") )
        __debugbreak();
      v35 = cinematicGlob.bink;
    }
    j_BinkGetRealtime(v35, &run, 0);
    if ( run.FrameNum >= 0x80000000ui64 || cinematicGlob.status.frameNum <= cinematicGlob.status.startFrame )
    {
      cinematicGlob.status.timeInMsec = 0;
    }
    else
    {
      v40 = 1000 * run.FrameNum * (unsigned __int64)run.FrameRateDiv;
      v39 = v40 / run.FrameRate;
      v37 = v40 % run.FrameRate;
      cinematicGlob.status.timeInMsec = v39;
      if ( (unsigned int)v39 != v39 )
      {
        LODWORD(v47) = HIDWORD(v39);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2216, ASSERT_TYPE_ASSERT, "(cinematicGlob.status.timeInMsec == timeInMsec)", "%s\n\t%08x:%08x, %08x:%08x, %08x:%08x, %08x:%08x", "cinematicGlob.status.timeInMsec == timeInMsec", v47, v39, 0, run.FrameNum, 0, run.FrameRate, 0, run.FrameRateDiv) )
          __debugbreak();
      }
    }
    v41 = cinematicGlob.target[2].playbackFlags;
    if ( (cinematicGlob.target[2].playbackFlags & 4) != 0 )
    {
      _EBX = 100;
    }
    else
    {
      ReadBufferSize = run.ReadBufferSize;
      if ( run.ReadBufferSize )
      {
        _EBX = truncate_cast<unsigned int,unsigned __int64>(100 * run.ReadBufferUsed / run.ReadBufferSize);
        v41 = cinematicGlob.target[2].playbackFlags;
      }
      else
      {
        _EBX = 100;
      }
    }
    if ( cinematicGlob.hasFileIO )
    {
      if ( _EBX > 0x5F )
        R_Cinematic_RelinquishIO(ReadBufferSize, v37);
    }
    else if ( _EBX < 0x32 )
    {
      if ( (v41 & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2663, ASSERT_TYPE_ASSERT, "(!(cinematicGlob.target[CIN_TARGET_UPDATE].playbackFlags & CINEMATIC_PLAYBACKFLAGS_MEMORY_RESIDENT))", (const char *)&queryFormat, "!(cinematicGlob.target[CIN_TARGET_UPDATE].playbackFlags & CINEMATIC_PLAYBACKFLAGS_MEMORY_RESIDENT)") )
        __debugbreak();
      R_Cinematic_SeizeIO(ReadBufferSize, v37);
    }
    v36 = 1;
  }
  else
  {
    if ( cinematicGlob.hasFileIO )
      R_Cinematic_RelinquishIO(cinematicGlob.bink, v34);
    v36 = 0;
  }
  cinematicGlob.playbackStatsIOPercent = _EBX;
  Profile_EndInternal(NULL);
  result = v36;
  _R11 = &v54;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
RB_Cinematic_BinkGoto
==============
*/
void RB_Cinematic_BinkGoto(unsigned int keyframeNum)
{
  char *Error; 

  Profile_Begin(150);
  j_BinkGoto(cinematicGlob.bink, keyframeNum, 1);
  Error = j_BinkGetError();
  if ( Error && *Error && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1051, ASSERT_TYPE_ASSERT, "(!binkError || binkError[0] == '\\0')", "%s\n\tBinkGetError(): \"%s\"", "!binkError || binkError[0] == '\\0'", Error) )
    __debugbreak();
  cinematicGlob.status.frameNum = cinematicGlob.bink->FrameNum;
  Profile_EndInternal(NULL);
}

/*
==============
RB_Cinematic_BinkNextFrame
==============
*/
int RB_Cinematic_BinkNextFrame()
{
  unsigned int FrameNum; 
  char *Error; 
  unsigned int v3; 
  unsigned int v4; 

  Profile_Begin(149);
  FrameNum = cinematicGlob.bink->FrameNum;
  j_BinkNextFrame(cinematicGlob.bink);
  Error = j_BinkGetError();
  if ( Error && *Error && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1051, ASSERT_TYPE_ASSERT, "(!binkError || binkError[0] == '\\0')", "%s\n\tBinkGetError(): \"%s\"", "!binkError || binkError[0] == '\\0'", Error) )
    __debugbreak();
  if ( FrameNum == cinematicGlob.bink->FrameNum )
  {
    v4 = cinematicGlob.bink->FrameNum;
    v3 = FrameNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2371, ASSERT_TYPE_ASSERT, "( prevFrameNum ) != ( cinematicGlob.bink->FrameNum )", "%s != %s\n\t%u, %u", "prevFrameNum", "cinematicGlob.bink->FrameNum", v3, v4) )
      __debugbreak();
  }
  cinematicGlob.status.frameNum = cinematicGlob.bink->FrameNum;
  return Profile_EndInternal(NULL);
}

/*
==============
RB_Cinematic_DebugDrawFrames
==============
*/
void RB_Cinematic_DebugDrawFrames(GfxCmdBufContext *gfxContext)
{
  GfxCmdBufSourceState *source; 
  unsigned int v12; 
  __int64 v13; 
  unsigned int v14; 
  GfxImage **p_imageY; 
  GfxImage *v23; 
  materialCommands_t *Tess; 
  materialCommands_t *v30; 
  GfxCmdBufSourceState *v32; 
  GfxCmdBufInput *p_input; 
  char v43; 
  char v48; 
  char v53; 
  char v57; 
  GfxCmdBufSourceState *v59; 
  GfxCmdBufInput *v60; 
  float fmt; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  unsigned int v76; 
  _QWORD v77[3]; 
  GfxImage *imageY; 
  GfxImage *imageCbCr; 
  GfxImage *imageCb; 

  _RDI = gfxContext;
  if ( cinematicGlob.bink )
  {
    Sys_ProfBeginNamedEvent(0xFF00FFFF, "RB_Cinematic_DebugDrawFrames");
    R_LockIfGfxImmediateContext(_RDI->state->device);
    source = _RDI->source;
    if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 4423, ASSERT_TYPE_ASSERT, "(gfxContext.source)", (const char *)&queryFormat, "gfxContext.source") )
      __debugbreak();
    R_Set2D(source);
    imageY = cinematicGlob.curCinematicImage.imageY;
    if ( cinematicGlob.gpuDecoding )
    {
      v12 = 2;
      imageCbCr = cinematicGlob.curCinematicImage.imageCbCr;
    }
    else
    {
      v12 = 3;
      imageCbCr = cinematicGlob.curCinematicImage.imageCr;
      imageCb = cinematicGlob.curCinematicImage.imageCb;
    }
    if ( cinematicGlob.curCinematicImage.hasAlpha )
    {
      v13 = v12++;
      *(&imageY + v13) = cinematicGlob.curCinematicImage.imageA;
    }
    if ( v12 > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 4451, ASSERT_TYPE_ASSERT, "(numImages <= MAX_IMAGES)", (const char *)&queryFormat, "numImages <= MAX_IMAGES") )
      __debugbreak();
    v14 = 0;
    if ( v12 )
    {
      p_imageY = &imageY;
      __asm
      {
        vmovaps [rsp+150h+var_38+8], xmm6
        vmovaps [rsp+150h+var_48+8], xmm7
        vmovss  xmm7, cs:__real@41200000
        vmovaps [rsp+150h+var_58+8], xmm8
        vmovss  xmm8, cs:__real@434d0000
        vmovaps [rsp+150h+var_68+8], xmm9
        vmovss  xmm9, cs:__real@437f0000
        vmovaps [rsp+150h+var_78+8], xmm10
        vmovss  xmm10, cs:__real@3f000000
        vmovaps [rsp+150h+var_88+8], xmm11
        vmovss  xmm11, cs:__real@3f800000
        vmovaps [rsp+150h+var_98+8], xmm12
        vmovaps [rsp+150h+var_A8+8], xmm13
        vmovss  xmm13, cs:__real@43480000
        vxorps  xmm12, xmm12, xmm12
      }
      do
      {
        v23 = *p_imageY;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm1, xmm0, xmm8
          vaddss  xmm6, xmm1, xmm7
        }
        if ( *p_imageY )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rdi]
            vmovups xmmword ptr [rsp+150h+var_E8+8], xmm0
          }
          Tess = R_GetTess((GfxCmdBufContext *)&v77[1]);
          v30 = Tess;
          if ( Tess->vertexCount )
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [rdi]
              vmovups xmmword ptr [rsp+150h+var_E8+8], xmm0
            }
            RB_EndTessSurfaceInternal((GfxCmdBufContext *)&v77[1], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
          }
          else
          {
            if ( Tess->indexCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
              __debugbreak();
            v30->viewStatsTarget = GFX_VIEW_STATS_INVALID;
            v30->primStatsTarget = GFX_PRIM_STATS_INVALID;
          }
          v32 = _RDI->source;
          __asm
          {
            vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000
            vmovups xmmword ptr [rsp+150h+var_E8+8], xmm0
          }
          if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
            __debugbreak();
          p_input = &v32->input;
          if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
            __debugbreak();
          __asm
          {
            vmulss  xmm1, xmm9, dword ptr [rsp+150h+var_E8+8]
            vmovups xmm0, xmmword ptr [rdi]
            vaddss  xmm3, xmm1, xmm10
            vxorps  xmm4, xmm4, xmm4
            vroundss xmm1, xmm4, xmm3, 1
            vcvttss2si ecx, xmm1
            vmulss  xmm1, xmm9, dword ptr [rsp+150h+var_E8+0Ch]
          }
          p_input->codeImages[4] = v23;
          __asm { vaddss  xmm3, xmm1, xmm10 }
          if ( _ECX > 255 )
            _ECX = 255;
          v43 = _ECX;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( _ECX < 0 )
            v43 = 0;
          __asm
          {
            vcvttss2si ecx, xmm1
            vmulss  xmm1, xmm9, dword ptr [rsp+150h+var_E8+10h]
          }
          LOBYTE(v76) = v43;
          __asm { vaddss  xmm3, xmm1, xmm10 }
          if ( _ECX > 255 )
            _ECX = 255;
          v48 = _ECX;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( _ECX < 0 )
            v48 = 0;
          __asm
          {
            vcvttss2si ecx, xmm1
            vmulss  xmm1, xmm9, dword ptr [rsp+150h+var_E8+14h]
          }
          BYTE1(v76) = v48;
          __asm { vaddss  xmm3, xmm1, xmm10 }
          if ( _ECX > 255 )
            _ECX = 255;
          v53 = _ECX;
          __asm { vroundss xmm1, xmm4, xmm3, 1 }
          if ( _ECX < 0 )
            v53 = 0;
          __asm { vcvttss2si ecx, xmm1 }
          BYTE2(v76) = v53;
          __asm { vmovaps xmm3, xmm6 }
          if ( _ECX > 255 )
            _ECX = 255;
          v57 = _ECX;
          __asm { vmovaps xmm2, xmm7 }
          if ( _ECX < 0 )
            v57 = 0;
          HIBYTE(v76) = v57;
          __asm
          {
            vmovss  [rsp+150h+var_108], xmm11
            vmovss  [rsp+150h+var_110], xmm11
            vmovss  [rsp+150h+var_118], xmm12
            vmovss  [rsp+150h+var_120], xmm12
            vmovss  [rsp+150h+var_128], xmm13
            vmovss  dword ptr [rsp+150h+fmt], xmm13
            vmovups xmmword ptr [rsp+150h+var_E8+8], xmm0
          }
          RB_DrawStretchPic((GfxCmdBufContext *)&v77[1], rgp.feedbackReplaceBackbufferMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v71, v72, v73, v74, v75, v76, GFX_PRIM_STATS_CODE);
          __asm
          {
            vmovups xmm0, xmmword ptr [rdi]
            vmovups xmmword ptr [rsp+150h+var_E8+8], xmm0
          }
          RB_EndTessSurfaceInternal((GfxCmdBufContext *)&v77[1], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp(4477)");
          v59 = _RDI->source;
          if ( !_RDI->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
            __debugbreak();
          v60 = &v59->input;
          if ( !v60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
            __debugbreak();
          v60->codeImages[4] = NULL;
        }
        ++v14;
        ++p_imageY;
      }
      while ( v14 < v12 );
      __asm
      {
        vmovaps xmm13, [rsp+150h+var_A8+8]
        vmovaps xmm12, [rsp+150h+var_98+8]
        vmovaps xmm11, [rsp+150h+var_88+8]
        vmovaps xmm10, [rsp+150h+var_78+8]
        vmovaps xmm9, [rsp+150h+var_68+8]
        vmovaps xmm8, [rsp+150h+var_58+8]
        vmovaps xmm7, [rsp+150h+var_48+8]
        vmovaps xmm6, [rsp+150h+var_38+8]
      }
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups xmmword ptr [rsp+150h+var_E8+8], xmm0
    }
    RB_EndSurfaceIfNeeded((GfxCmdBufContext *)&v77[1]);
    R_UnlockIfGfxImmediateContext(_RDI->state->device);
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
RB_Cinematic_EndFrame
==============
*/
void RB_Cinematic_EndFrame(const GfxBackEndData *data)
{
  Profile_Begin(143);
  if ( !cinematicGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 4495, ASSERT_TYPE_ASSERT, "(cinematicGlob.isInitialized)", (const char *)&queryFormat, "cinematicGlob.isInitialized") )
    __debugbreak();
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 4496, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( cinematicGlob.gpuDecoding )
  {
    R_LockGfxImmediateContext();
    j_After_Draw_Bink_textures(cinematicGlob.binkTextures, cinematicGlob.binkShaders, NULL);
    R_UnlockGfxImmediateContext();
  }
  Profile_EndInternal(NULL);
}

/*
==============
RB_Cinematic_FinishDecode
==============
*/
int RB_Cinematic_FinishDecode()
{
  __int64 v1; 
  int TotalFrames; 

  Profile_Begin(147);
  if ( !cinematicGlob.decodingFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2291, ASSERT_TYPE_ASSERT, "(cinematicGlob.decodingFrame)", (const char *)&queryFormat, "cinematicGlob.decodingFrame") )
    __debugbreak();
  if ( !j_BinkDoFrameAsyncWait(cinematicGlob.bink, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2295, ASSERT_TYPE_ASSERT, "( ret )", "BinkDoFrameAsyncWait failed") )
    __debugbreak();
  if ( cinematicGlob.gpuDecoding )
    ((void (*)(void))cinematicGlob.binkTextures->Finish_texture_update)();
  if ( cinematicGlob.binkBuffers.FrameNum >= cinematicGlob.binkBuffers.TotalFrames )
  {
    TotalFrames = cinematicGlob.binkBuffers.TotalFrames;
    LODWORD(v1) = cinematicGlob.binkBuffers.FrameNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2313, ASSERT_TYPE_ASSERT, "(unsigned)( cinematicGlob.binkBuffers.FrameNum ) < (unsigned)( cinematicGlob.binkBuffers.TotalFrames )", "cinematicGlob.binkBuffers.FrameNum doesn't index cinematicGlob.binkBuffers.TotalFrames\n\t%i not in [0, %i)", v1, TotalFrames) )
      __debugbreak();
  }
  cinematicGlob.decodingFrame = 0;
  return Profile_EndInternal(NULL);
}

/*
==============
RB_Cinematic_HunksClose
==============
*/
void RB_Cinematic_HunksClose()
{
  int *codeImageSwapFrame; 
  __int64 v1; 
  int i; 
  unsigned __int64 UsedSize; 

  Sys_ProfBeginNamedEvent(0xFF00FFFF, "RB_Cinematic_WaitForLastRenderedFrame");
  codeImageSwapFrame = cinematicGlob.codeImageSwapFrame;
  v1 = 3i64;
  do
  {
    for ( i = *codeImageSwapFrame; g_gpuSwapFrame - i < 0; ++s_cinematicUpdateLockCount )
    {
      R_Cinematic_UnlockUpdate();
      Sys_Sleep(1);
      Sys_EnterCriticalSection(CRITSECT_CINEMATIC_UPDATE);
      if ( !s_cinematicUpdateLockThread )
        s_cinematicUpdateLockThread = Sys_GetCurrentThreadId();
    }
    ++codeImageSwapFrame;
    --v1;
  }
  while ( v1 );
  Sys_ProfEndNamedEvent();
  if ( !cinematicGlob.masterHunk.m_userHunk && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 356, ASSERT_TYPE_ASSERT, "(m_userHunk)", (const char *)&queryFormat, "m_userHunk") )
    __debugbreak();
  if ( Mem_HunkUser_GetUsedSize(cinematicGlob.masterHunk.m_userHunk) )
  {
    if ( !cinematicGlob.masterHunk.m_userHunk && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 356, ASSERT_TYPE_ASSERT, "(m_userHunk)", (const char *)&queryFormat, "m_userHunk") )
      __debugbreak();
    UsedSize = Mem_HunkUser_GetUsedSize(cinematicGlob.masterHunk.m_userHunk);
    Com_Printf(16, "Cinematic Master Hunk peak usage = %zu kb\n", UsedSize >> 10);
  }
  if ( !cinematicGlob.masterHunk.m_userHunk && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1040, ASSERT_TYPE_ASSERT, "(m_userHunk)", (const char *)&queryFormat, "m_userHunk") )
    __debugbreak();
  if ( cinematicGlob.bink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1041, ASSERT_TYPE_ASSERT, "(cinematicGlob.bink == nullptr)", (const char *)&queryFormat, "cinematicGlob.bink == nullptr") )
    __debugbreak();
  Mem_HunkUser_Reset(cinematicGlob.masterHunk.m_userHunk);
}

/*
==============
RB_Cinematic_StartDecode
==============
*/
int RB_Cinematic_StartDecode()
{
  unsigned int v0; 
  __int64 v1; 
  int v2; 
  unsigned int *v3; 
  int v4; 
  char *Error; 
  __int64 v7; 

  Profile_Begin(146);
  if ( !cinematicGlob.bink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2235, ASSERT_TYPE_ASSERT, "(cinematicGlob.bink)", (const char *)&queryFormat, "cinematicGlob.bink") )
    __debugbreak();
  if ( cinematicGlob.decodingFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2236, ASSERT_TYPE_ASSERT, "(!cinematicGlob.decodingFrame)", (const char *)&queryFormat, "!cinematicGlob.decodingFrame") )
    __debugbreak();
  if ( cinematicGlob.gpuDecoding )
  {
    ((void (*)(void))cinematicGlob.binkTextures->Start_texture_update)();
  }
  else
  {
    v0 = (cinematicGlob.binkBuffers.FrameNum + 1) % cinematicGlob.binkBuffers.TotalFrames;
    v1 = v0;
    if ( v0 >= 3 )
    {
      LODWORD(v7) = (cinematicGlob.binkBuffers.FrameNum + 1) % cinematicGlob.binkBuffers.TotalFrames;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2248, ASSERT_TYPE_ASSERT, "(unsigned)( frameToCheck ) < (unsigned)( ( sizeof( *array_counter( cinematicGlob.codeImageSwapFrame ) ) + 0 ) )", "frameToCheck doesn't index ARRAY_COUNT( cinematicGlob.codeImageSwapFrame )\n\t%i not in [0, %i)", v7, 3) )
        __debugbreak();
    }
    v2 = cinematicGlob.codeImageSwapFrame[v1];
    Sys_ProfBeginNamedEvent(0xFFFF7F50, "Cinematic Wait For GPU");
    while ( g_gpuSwapFrame - v2 < 0 )
    {
      if ( s_forceCinematicUpdateForSuspend )
        break;
      Sys_Sleep(1);
    }
    Sys_ProfEndNamedEvent();
  }
  v3 = (unsigned int *)s_asyncCinematicCores;
  if ( cinematicGlob.useAlternativeAsyncCores )
    v3 = (unsigned int *)s_alternativeAsyncCinematicCores;
  v4 = j_BinkDoFrameAsyncMulti(cinematicGlob.bink, v3, 2);
  Error = j_BinkGetError();
  if ( Error && *Error && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1051, ASSERT_TYPE_ASSERT, "(!binkError || binkError[0] == '\\0')", "%s\n\tBinkGetError(): \"%s\"", "!binkError || binkError[0] == '\\0'", Error) )
    __debugbreak();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2277, ASSERT_TYPE_ASSERT, "( ret )", "BinkDoFrameAsyncMulti failed") )
    __debugbreak();
  cinematicGlob.decodingFrame = 1;
  return Profile_EndInternal(NULL);
}

/*
==============
RB_Cinematic_StartPlayback_Internal
==============
*/
void RB_Cinematic_StartPlayback_Internal(const char *name, unsigned int playbackFlags, unsigned int startOffsetMsec, bool fillerBink, const CinematicEnum pauseState)
{
  CinematicEnum v9; 

  cinematicGlob.cinematicFinished = 0;
  cinematicGlob.cinematicHeld = 0;
  cinematicGlob.targetMuted = (playbackFlags & 0x1000) != 0;
  cinematicGlob.cinematicPending = 1;
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_PAUSE);
  v9 = pauseState;
  if ( pauseState == CINEMATIC_INVALID )
    v9 = (playbackFlags >> 3) & 2;
  cinematicGlob.targetPaused = v9;
  Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_PAUSE);
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_TARGET_CHANGE_COMMAND);
  Core_strcpy(cinematicGlob.target[0].name, 0x100ui64, name);
  cinematicGlob.target[0].playbackFlags = playbackFlags;
  cinematicGlob.target[0].startOffsetMsec = startOffsetMsec;
  cinematicGlob.target[0].fillerBink = fillerBink;
  cinematicGlob.target[0].changed = 1;
  Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_TARGET_CHANGE_COMMAND);
}

/*
==============
RB_Cinematic_StartPlayback_Now
==============
*/
bool RB_Cinematic_StartPlayback_Now(const char *filename, unsigned int playbackFlags, unsigned int startOffsetMsec, int *pStartFrame, bool filler)
{
  unsigned int *v8; 
  unsigned int v11; 
  unsigned int *v12; 
  unsigned int v13; 
  int v14; 
  __int64 v15; 
  const char *v16; 
  const char *ColumnValueForRow; 
  signed __int64 v18; 
  int v19; 
  __int64 v20; 
  int v21; 
  int v22; 
  int v23; 
  binklanguage_t CurrentBinkLanguage; 
  unsigned int v25; 
  int v26; 
  char *Error; 
  char *v28; 
  char *v29; 
  char *v30; 
  unsigned int v31; 
  const char *v32; 
  const char *v33; 
  const char *v34; 
  const char *v35; 
  const char *v36; 
  bool result; 
  char *v38; 
  BINK *bink; 
  int *v47; 
  unsigned int unsignedInt; 
  bool enabled; 
  bool v50; 
  bool v51; 
  char *v53; 
  char *v54; 
  int v55; 
  BINK *v56; 
  unsigned int Frames; 
  BINKSHADERS *Bink_shaders; 
  const char *v70; 
  const char *v71; 
  int v72; 
  __int64 v88; 
  int v89; 
  char *v90; 
  char *fmt; 
  __int64 v94; 
  int RowCount; 
  StringTable *tablePtr; 
  void *outPtr; 
  char *name; 
  int *v101; 
  __int64 pcreate[3]; 
  char v103[680]; 
  char errText[128]; 

  v8 = &cinematicGlob.trackIDsToPlay[1];
  _ER14 = 0;
  v11 = 0;
  v101 = pStartFrame;
  v12 = &cinematicGlob.trackIDsToPlay[1];
  do
  {
    *(v12 - 1) = v11;
    *v12 = v11 + 1;
    v12 += 5;
    *(v12 - 4) = v11 + 2;
    *(v12 - 3) = v11 + 3;
    v13 = v11 + 4;
    v11 += 5;
    *(v12 - 2) = v13;
  }
  while ( v11 < 5 );
  if ( cinematicGlob.bink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 3113, ASSERT_TYPE_ASSERT, "(!cinematicGlob.bink)", (const char *)&queryFormat, "!cinematicGlob.bink") )
    __debugbreak();
  if ( cinematicGlob.hasFileIO && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 3114, ASSERT_TYPE_ASSERT, "(!cinematicGlob.hasFileIO)", (const char *)&queryFormat, "!cinematicGlob.hasFileIO") )
    __debugbreak();
  if ( cinematicGlob.activeImageFrame != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 3115, ASSERT_TYPE_ASSERT, "(cinematicGlob.activeImageFrame == CINEMATIC_INVALID_IMAGE_FRAME)", (const char *)&queryFormat, "cinematicGlob.activeImageFrame == CINEMATIC_INVALID_IMAGE_FRAME") )
    __debugbreak();
  cinematicGlob.codeImageSwapFrame[0] = g_gpuSwapFrame - 1;
  cinematicGlob.codeImageSwapFrame[1] = g_gpuSwapFrame - 1;
  cinematicGlob.codeImageSwapFrame[2] = g_gpuSwapFrame - 1;
  StringTable_GetAsset("video/bink_nonlocalized_audio.csv", (const StringTable **)&tablePtr);
  RowCount = StringTable_GetRowCount(tablePtr);
  v14 = 0;
  if ( RowCount <= 0 )
  {
LABEL_30:
    CurrentBinkLanguage = SEH_GetCurrentBinkLanguage();
    v25 = 0;
    if ( (unsigned int)CurrentBinkLanguage > BINK_LANGUAGE_SAFE_CHINESE )
      CurrentBinkLanguage = BINK_LANGUAGE_ENGLISH;
    v26 = 5 * CurrentBinkLanguage;
    do
    {
      *(v8 - 1) += v26;
      v25 += 5;
      *v8 += v26;
      v8[1] += v26;
      v8[2] += v26;
      v8[3] += v26;
      v8 += 5;
    }
    while ( v25 < 5 );
  }
  else
  {
LABEL_13:
    v15 = 0x7FFFFFFFi64;
    v16 = filename;
    ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v14, 0);
    if ( !ColumnValueForRow && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v18 = ColumnValueForRow - filename;
    do
    {
      v19 = (unsigned __int8)v16[v18];
      v20 = v15;
      v21 = *(unsigned __int8 *)v16++;
      --v15;
      if ( !v20 )
        break;
      if ( v19 != v21 )
      {
        v22 = v19 + 32;
        if ( (unsigned int)(v19 - 65) > 0x19 )
          v22 = v19;
        v19 = v22;
        v23 = v21 + 32;
        if ( (unsigned int)(v21 - 65) > 0x19 )
          v23 = v21;
        if ( v19 != v23 )
        {
          if ( ++v14 < RowCount )
            goto LABEL_13;
          goto LABEL_30;
        }
      }
    }
    while ( v19 );
  }
  if ( !cinematicGlob.masterHunk.m_userHunk && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 356, ASSERT_TYPE_ASSERT, "(m_userHunk)", (const char *)&queryFormat, "m_userHunk") )
    __debugbreak();
  if ( Mem_HunkUser_GetUsedSize(cinematicGlob.masterHunk.m_userHunk) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1089, ASSERT_TYPE_ASSERT, "(cinematicGlob.masterHunk.GetUsedSize() == 0)", (const char *)&queryFormat, "cinematicGlob.masterHunk.GetUsedSize() == 0") )
    __debugbreak();
  Error = j_BinkGetError();
  if ( Error && *Error && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1051, ASSERT_TYPE_ASSERT, "(!binkError || binkError[0] == '\\0')", "%s\n\tBinkGetError(): \"%s\"", "!binkError || binkError[0] == '\\0'", Error) )
    __debugbreak();
  j_BinkSetMemory(R_Cinematic_Bink_Alloc, R_Cinematic_Bink_Free);
  v28 = j_BinkGetError();
  if ( v28 && *v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1051, ASSERT_TYPE_ASSERT, "(!binkError || binkError[0] == '\\0')", "%s\n\tBinkGetError(): \"%s\"", "!binkError || binkError[0] == '\\0'", v28) )
    __debugbreak();
  j_BinkSetSoundSystem(BinkOpenSDSoundSystem, 0i64);
  v29 = j_BinkGetError();
  if ( v29 && *v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1051, ASSERT_TYPE_ASSERT, "(!binkError || binkError[0] == '\\0')", "%s\n\tBinkGetError(): \"%s\"", "!binkError || binkError[0] == '\\0'", v29) )
    __debugbreak();
  j_BinkSetSoundTrack(5u, cinematicGlob.trackIDsToPlay);
  v30 = j_BinkGetError();
  if ( v30 && *v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1051, ASSERT_TYPE_ASSERT, "(!binkError || binkError[0] == '\\0')", "%s\n\tBinkGetError(): \"%s\"", "!binkError || binkError[0] == '\\0'", v30) )
    __debugbreak();
  errText[0] = 0;
  v31 = playbackFlags >> 15;
  if ( (playbackFlags & 4) != 0 )
  {
    if ( !R_Cinematic_BinkOpenPath_MemoryResident(filename, playbackFlags, (const void **)&outPtr, errText, 128) )
      goto LABEL_63;
    cinematicGlob.decryptFile.encrypted = (playbackFlags & 0x8000) != 0;
    cinematicGlob.bink = j_BinkOpen((const char *)outPtr, 0x4104408u);
    if ( !cinematicGlob.bink )
    {
      v32 = j_BinkGetError();
      Com_sprintf(errText, 0x80ui64, "BinkOpen: %s", v32);
      v31 = playbackFlags >> 15;
    }
  }
  else
  {
    cinematicGlob.hasFileIO = 1;
    j_BinkSetIOSize(0x1000000ui64);
    Com_Printf(8, "BinkOpen: '%s'\n", filename);
    cinematicGlob.decryptFile.encrypted = (playbackFlags & 0x8000) != 0;
    cinematicGlob.bink = j_BinkOpen(filename, 0x1104408u);
    if ( !cinematicGlob.bink )
    {
      v33 = j_BinkGetError();
      Com_sprintf(errText, 0x80ui64, "BinkOpen: %s", v33);
      cinematicGlob.hasFileIO = 0;
    }
  }
  j_BinkSetError((const char *)&queryFormat.fmt + 3);
  if ( cinematicGlob.bink )
    goto LABEL_76;
LABEL_63:
  Com_PrintWarning(8, "R_Cinematic_BinkOpen '%s' failed: %s; trying default.\n", filename, errText);
  v34 = "default";
  errText[0] = 0;
  if ( filler )
    v34 = "filler_load";
  if ( (playbackFlags & 4) == 0 )
  {
    cinematicGlob.hasFileIO = 1;
    j_BinkSetIOSize(0x1000000ui64);
    Com_Printf(8, "BinkOpen: '%s'\n", v34);
    cinematicGlob.decryptFile.encrypted = v31 & 1;
    cinematicGlob.bink = j_BinkOpen(v34, 0x1104408u);
    if ( !cinematicGlob.bink )
    {
      v36 = j_BinkGetError();
      Com_sprintf(errText, 0x80ui64, "BinkOpen: %s", v36);
      cinematicGlob.hasFileIO = 0;
    }
LABEL_71:
    j_BinkSetError((const char *)&queryFormat.fmt + 3);
    if ( !cinematicGlob.bink )
      goto LABEL_72;
LABEL_76:
    __asm
    {
      vmovaps [rsp+418h+var_48], xmm6
      vmovaps [rsp+418h+var_58], xmm7
    }
    v38 = j_BinkGetError();
    if ( v38 && *v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1051, ASSERT_TYPE_ASSERT, "(!binkError || binkError[0] == '\\0')", "%s\n\tBinkGetError(): \"%s\"", "!binkError || binkError[0] == '\\0'", v38) )
      __debugbreak();
    bink = cinematicGlob.bink;
    if ( !cinematicGlob.bink )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 3175, ASSERT_TYPE_ASSERT, "(cinematicGlob.bink)", (const char *)&queryFormat, "cinematicGlob.bink") )
        __debugbreak();
      bink = cinematicGlob.bink;
    }
    __asm { vmovss  xmm6, cs:__real@3f800000 }
    cinematicGlob.status.frameNum = bink->FrameNum;
    cinematicGlob.status.width = bink->Width;
    cinematicGlob.status.height = bink->Height;
    _EAX = playbackFlags & 0x1000;
    __asm
    {
      vmovd   xmm0, eax
      vmovd   xmm1, r14d
      vpcmpeqd xmm2, xmm0, xmm1
      vxorps  xmm0, xmm0, xmm0
      vblendvps xmm2, xmm0, xmm6, xmm2; volumeScale
    }
    R_Cinematic_InitBinkVolumes(bink, cinematicGlob.trackIDsToPlay, *(const float *)&_XMM2);
    v47 = v101;
    unsignedInt = startOffsetMsec;
    enabled = com_cinematicGPUDecoding->current.enabled;
    v50 = (cinematicGlob.bink->OpenFlags & 0x10) != 0;
    v51 = !*v101 && !startOffsetMsec || (playbackFlags & 0x100) != 0;
    cinematicGlob.gpuDecoding = 0;
    __asm { vmovss  xmm7, cs:__real@3f000000 }
    if ( !enabled )
      goto LABEL_95;
    if ( v50 )
    {
      if ( v51 )
      {
        Com_Printf(8, "R_Cinematic_BinkOpen '%s': Using BinkGPU decoding\n", filename);
        cinematicGlob.gpuDecoding = 1;
        goto LABEL_117;
      }
      LODWORD(fmt) = *v101;
      Com_Printf(8, "R_Cinematic_BinkOpen '%s': Not using BinkGPU decoding due to initial start offset seek of %u, frame %u\n", filename, startOffsetMsec, fmt);
    }
    else
    {
      Com_Printf(8, "R_Cinematic_BinkOpen '%s': Not using BinkGPU decoding due to Bink1 format\n", filename);
    }
    if ( !cinematicGlob.gpuDecoding )
    {
LABEL_95:
      memset_0(&cinematicGlob.binkBuffers, 0, sizeof(cinematicGlob.binkBuffers));
      j_BinkGetFrameBuffersInfo(cinematicGlob.bink, &cinematicGlob.binkBuffers);
      v53 = j_BinkGetError();
      if ( v53 && *v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1051, ASSERT_TYPE_ASSERT, "(!binkError || binkError[0] == '\\0')", "%s\n\tBinkGetError(): \"%s\"", "!binkError || binkError[0] == '\\0'", v53) )
        __debugbreak();
      R_Cinematic_InitBinkTextures(cinematicGlob.bink->Width, cinematicGlob.bink->Height);
      j_BinkRegisterFrameBuffers(cinematicGlob.bink, &cinematicGlob.binkBuffers);
      v54 = j_BinkGetError();
      if ( v54 && *v54 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1051, ASSERT_TYPE_ASSERT, "(!binkError || binkError[0] == '\\0')", "%s\n\tBinkGetError(): \"%s\"", "!binkError || binkError[0] == '\\0'", v54) )
        __debugbreak();
LABEL_103:
      cinematicGlob.currentPaused = CINEMATIC_NOT_PAUSED;
      v55 = *v47;
      *v47 = 0;
      if ( com_cinematicForceStartOffsetMSec->current.integer != -1 )
        unsignedInt = com_cinematicForceStartOffsetMSec->current.unsignedInt;
      if ( unsignedInt )
      {
        v56 = cinematicGlob.bink;
        if ( !cinematicGlob.bink->FrameRateDiv )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 3285, ASSERT_TYPE_ASSERT, "(cinematicGlob.bink->FrameRateDiv)", (const char *)&queryFormat, "cinematicGlob.bink->FrameRateDiv") )
            __debugbreak();
          v56 = cinematicGlob.bink;
        }
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, rax
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vdivss  xmm1, xmm1, xmm0
          vmulss  xmm2, xmm1, cs:__real@3a83126f
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmulss  xmm1, xmm2, xmm0
          vaddss  xmm2, xmm1, xmm7
          vcvttss2si rbx, xmm2
        }
        Frames = _RBX + 1;
        if ( (playbackFlags & 2) != 0 )
        {
          if ( !v56->Frames )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 3289, ASSERT_TYPE_ASSERT, "(cinematicGlob.bink->Frames)", (const char *)&queryFormat, "cinematicGlob.bink->Frames") )
              __debugbreak();
            v56 = cinematicGlob.bink;
          }
          Frames %= v56->Frames;
        }
        else if ( Frames > v56->Frames )
        {
          Frames = v56->Frames;
        }
        if ( (playbackFlags & 0x100) != 0 )
        {
          Frames = j_BinkGetKeyFrame(v56, Frames, 0);
          LODWORD(v94) = cinematicGlob.bink->Frames;
          LODWORD(fmt) = Frames;
          Com_Printf(8, "R_Cinematic_BinkOpen '%s': Fast seeking to start offset %u ( keyframe %u / %u )\n", filename, unsignedInt, fmt, v94);
          v89 = 1;
        }
        else
        {
          if ( cinematicGlob.gpuDecoding )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 3313, ASSERT_TYPE_ASSERT, "(!cinematicGlob.gpuDecoding)", (const char *)&queryFormat, "!cinematicGlob.gpuDecoding") )
              __debugbreak();
            v56 = cinematicGlob.bink;
          }
          LODWORD(v94) = v56->Frames;
          LODWORD(fmt) = Frames;
          Com_Printf(8, "R_Cinematic_BinkOpen '%s': Seeking to start offset %u ( keyframe %u / %u )\n", filename, unsignedInt, fmt, v94);
          v89 = 0;
        }
        j_BinkGoto(cinematicGlob.bink, Frames, v89);
        v90 = j_BinkGetError();
        if ( v90 && *v90 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1051, ASSERT_TYPE_ASSERT, "(!binkError || binkError[0] == '\\0')", "%s\n\tBinkGetError(): \"%s\"", "!binkError || binkError[0] == '\\0'", v90) )
          __debugbreak();
        cinematicGlob.status.frameNum = cinematicGlob.bink->FrameNum;
      }
      else if ( v55 )
      {
        if ( cinematicGlob.gpuDecoding && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 3328, ASSERT_TYPE_ASSERT, "(!cinematicGlob.gpuDecoding)", (const char *)&queryFormat, "!cinematicGlob.gpuDecoding") )
          __debugbreak();
        *v47 = R_Cinematic_GotoFrame(v55);
      }
      cinematicGlob.videoStartTime = __rdtsc();
      RB_Cinematic_StartDecode();
      result = 1;
      goto LABEL_150;
    }
LABEL_117:
    R_Cinematic_ReleaseImages();
    memset_0(&cinematicGlob.binkBuffers, 0, sizeof(cinematicGlob.binkBuffers));
    PMem_BeginAlloc("Cinematic", PMEM_STACK_CINEMATIC);
    memset_0(v103, 0, 0x2A0ui64);
    pcreate[0] = (__int64)g_dx.d3d12device;
    pcreate[1] = (__int64)g_dx.immediateCommandQueue.commandQueue;
    pcreate[2] = 0i64;
    Bink_shaders = j_Create_Bink_shaders(pcreate);
    cinematicGlob.binkShaders = Bink_shaders;
    if ( Bink_shaders )
    {
      cinematicGlob.binkTextures = Bink_shaders->Create_textures(Bink_shaders, cinematicGlob.bink, NULL);
      if ( cinematicGlob.binkTextures )
      {
        if ( (cinematicGlob.bink->OpenFlags & 4) != 0 )
        {
          __asm { vmovaps xmm2, xmm6 }
          ((void (__fastcall *)(BINKTEXTURES *, __int64, BINKTEXTURES *, __int64))cinematicGlob.binkTextures->Set_hdr_settings)(cinematicGlob.binkTextures, 1i64, cinematicGlob.binkTextures, 10000i64);
        }
        v72 = 0;
        if ( cinematicGlob.binkBuffers.TotalFrames )
        {
          _R11 = (float *)&cinematicGlob.images[0].imageUVScaleY + 1;
          do
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vxorps  xmm2, xmm2, xmm2
              vcvtsi2ss xmm2, xmm2, dword ptr [rax]
              vcvtsi2ss xmm0, xmm0, rax
              vdivss  xmm1, xmm2, xmm0
              vmovss  dword ptr [r11-4], xmm1
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, rax
              vxorps  xmm3, xmm3, xmm3
              vcvtsi2ss xmm3, xmm3, ecx
              vdivss  xmm1, xmm3, xmm0
              vmovss  dword ptr [r11], xmm1
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, rax
              vdivss  xmm0, xmm7, xmm0
              vmulss  xmm1, xmm0, xmm2
              vmovss  dword ptr [r11+4], xmm1
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, rax
              vdivss  xmm0, xmm7, xmm0
              vmulss  xmm1, xmm0, xmm3
              vmovss  dword ptr [r11+8], xmm1
            }
            R_Cinematic_SetImageColorSpace((CinematicImage *)(_R11 - 14), cinematicGlob.bink);
            ++v72;
            _R11 = (float *)(v88 + 136);
          }
          while ( v72 != cinematicGlob.binkBuffers.TotalFrames );
        }
        PMem_EndAlloc("Cinematic", PMEM_STACK_CINEMATIC);
        goto LABEL_103;
      }
      v71 = j_BinkGetError();
      Com_PrintError(16, "Couldn't create binkgpu textures: %s\n", v71);
      cinematicGlob.binkShaders->Free_shaders(cinematicGlob.binkShaders);
      cinematicGlob.binkShaders = NULL;
      j_BinkClose(cinematicGlob.bink);
      cinematicGlob.bink = NULL;
      FreeBinkResourceBuffers();
    }
    else
    {
      v70 = j_BinkGetError();
      Com_PrintError(16, "Couldn't create binkgpu shaders: %s\n", v70);
      j_BinkClose(cinematicGlob.bink);
      cinematicGlob.bink = NULL;
      if ( cinematicGlob.numBinkGfxBuffers )
      {
        do
          R_DestroyBuffer(&cinematicGlob.binkGfxBuffers[_ER14++]);
        while ( _ER14 < cinematicGlob.numBinkGfxBuffers );
      }
      cinematicGlob.binkGfxBuffers[0] = NULL;
      cinematicGlob.binkGfxBuffers[1] = NULL;
      cinematicGlob.binkGfxBuffers[2] = NULL;
      cinematicGlob.binkGfxBuffers[3] = NULL;
      cinematicGlob.binkGfxBuffers[4] = NULL;
      cinematicGlob.binkGfxBuffers[5] = NULL;
      cinematicGlob.binkGfxBuffers[6] = NULL;
      cinematicGlob.binkGfxBuffers[7] = NULL;
      cinematicGlob.numBinkGfxBuffers = 0;
    }
    PMem_EndAlloc("Cinematic", PMEM_STACK_CINEMATIC);
    result = 0;
LABEL_150:
    __asm
    {
      vmovaps xmm6, [rsp+418h+var_48]
      vmovaps xmm7, [rsp+418h+var_58]
    }
    return result;
  }
  if ( R_Cinematic_BinkOpenPath_MemoryResident(v34, playbackFlags, (const void **)&name, errText, 128) )
  {
    cinematicGlob.decryptFile.encrypted = (playbackFlags & 0x8000) != 0;
    cinematicGlob.bink = j_BinkOpen(name, 0x4104408u);
    if ( !cinematicGlob.bink )
    {
      v35 = j_BinkGetError();
      Com_sprintf(errText, 0x80ui64, "BinkOpen: %s", v35);
    }
    goto LABEL_71;
  }
LABEL_72:
  Com_PrintWarning(8, "R_Cinematic_BinkOpen '%s' failed: %s; not playing movie.\n", "default", errText);
  if ( cinematicGlob.activeImageFrame != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 3162, ASSERT_TYPE_ASSERT, "(cinematicGlob.activeImageFrame == CINEMATIC_INVALID_IMAGE_FRAME)", (const char *)&queryFormat, "cinematicGlob.activeImageFrame == CINEMATIC_INVALID_IMAGE_FRAME") )
    __debugbreak();
  RB_Cinematic_HunksClose();
  cinematicGlob.finishedId = cinematicGlob.stopId;
  result = 0;
  cinematicGlob.cinematicFinished = 1;
  cinematicGlob.cinematicHeld = 0;
  return result;
}

/*
==============
RB_Cinematic_UpdateFrame
==============
*/
void RB_Cinematic_UpdateFrame(const GfxBackEndData *data)
{
  volatile int activeImageFrame; 
  GfxImage *grayImage; 
  GfxImage *imageCr; 
  GfxImage *imageCb; 
  GfxImage *imageA; 
  GfxImage *imageH; 

  Profile_Begin(142);
  if ( !cinematicGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 4383, ASSERT_TYPE_ASSERT, "(cinematicGlob.isInitialized)", (const char *)&queryFormat, "cinematicGlob.isInitialized") )
    __debugbreak();
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 4384, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 4385, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  RB_Cinematic_UpdateSaveData();
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_UPDATE);
  if ( !s_cinematicUpdateLockThread )
    s_cinematicUpdateLockThread = Sys_GetCurrentThreadId();
  ++s_cinematicUpdateLockCount;
  RB_Cinematic_UpdateFrame_Internal_NoLock();
  R_Cinematic_UnlockUpdate();
  RB_Cinematic_UpdateSaveData();
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_TARGET_CHANGE_BACKEND);
  if ( cinematicGlob.target[0].changed )
  {
    Sys_EnterCriticalSection(CRITSECT_CINEMATIC_TARGET_CHANGE_COMMAND);
    CinematicGlobTarget::operator=(&cinematicGlob.target[1], cinematicGlob.target);
    cinematicGlob.target[0].changed = 0;
    Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_TARGET_CHANGE_COMMAND);
  }
  activeImageFrame = cinematicGlob.activeImageFrame;
  if ( cinematicGlob.target[1].changed )
    activeImageFrame = -1;
  Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_TARGET_CHANGE_BACKEND);
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2111, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !cinematicGlob.status.name[0] || activeImageFrame == -1 || cinematicGlob.status.frameNum <= cinematicGlob.status.startFrame )
  {
    R_Cinematic_ResetFrameImage(&cinematicGlob.curCinematicImage);
  }
  else
  {
    cinematicGlob.codeImageSwapFrame[activeImageFrame] = data->endSwapFrame;
    grayImage = rgp.grayImage;
    _R8 = &cinematicGlob.images[activeImageFrame];
    imageCr = rgp.grayImage;
    cinematicGlob.curCinematicImage.hasAlpha = _R8->hasAlpha;
    cinematicGlob.curCinematicImage.imageY = _R8->imageY;
    if ( _R8->imageCr )
      imageCr = _R8->imageCr;
    cinematicGlob.curCinematicImage.imageCr = imageCr;
    imageCb = rgp.grayImage;
    if ( _R8->imageCb )
      imageCb = _R8->imageCb;
    cinematicGlob.curCinematicImage.imageCb = imageCb;
    if ( _R8->imageCbCr )
      grayImage = _R8->imageCbCr;
    cinematicGlob.curCinematicImage.imageCbCr = grayImage;
    if ( _R8->hasAlpha )
      imageA = _R8->imageA;
    else
      imageA = rgp.whiteImage;
    cinematicGlob.curCinematicImage.imageA = imageA;
    if ( _R8->hasHDR )
      imageH = _R8->imageH;
    else
      imageH = rgp.blackImage;
    cinematicGlob.curCinematicImage.imageH = imageH;
    __asm
    {
      vmovss  xmm0, dword ptr [r8+34h]
      vmovss  dword ptr cs:cinematicGlob.curCinematicImage.imageUVScaleY, xmm0
      vmovss  xmm1, dword ptr [r8+38h]
      vmovss  dword ptr cs:cinematicGlob.curCinematicImage.imageUVScaleY+4, xmm1
      vmovss  xmm0, dword ptr [r8+3Ch]
      vmovss  dword ptr cs:cinematicGlob.curCinematicImage.imageUVScaleC, xmm0
      vmovss  xmm1, dword ptr [r8+40h]
      vmovss  dword ptr cs:cinematicGlob.curCinematicImage.imageUVScaleC+4, xmm1
      vmovups xmm0, xmmword ptr [r8+44h]
      vmovups xmmword ptr cs:cinematicGlob.curCinematicImage.colorSpace.coeffR, xmm0
      vmovups xmm1, xmmword ptr [r8+54h]
      vmovups xmmword ptr cs:cinematicGlob.curCinematicImage.colorSpace.coeffG, xmm1
      vmovups xmm0, xmmword ptr [r8+64h]
      vmovups xmmword ptr cs:cinematicGlob.curCinematicImage.colorSpace.coeffB, xmm0
      vmovups xmm1, xmmword ptr [r8+74h]
      vmovups xmmword ptr cs:cinematicGlob.curCinematicImage.cinematicOptions, xmm1
    }
    if ( _R8->hasHDR )
    {
      _RAX = com_cinematicHDRIntensityScale;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+28h]
        vmovss  dword ptr cs:cinematicGlob.curCinematicImage.colorSpace.coeffR+4, xmm0
      }
      Profile_EndInternal(NULL);
      return;
    }
  }
  Profile_EndInternal(NULL);
}

/*
==============
RB_Cinematic_UpdateFrame_Internal_NoLock
==============
*/

void __fastcall RB_Cinematic_UpdateFrame_Internal_NoLock(double _XMM0_8, double a2)
{
  unsigned __int64 v2; 
  int v4; 
  char *v5; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  unsigned int playbackFlags; 
  unsigned int startOffsetMsec; 
  char v15; 
  bool v16; 
  unsigned __int64 v17; 
  __int64 v20; 
  int pStartFrame[4]; 
  char dest[256]; 
  char src[256]; 

  cinematicGlob.playbackStatsFramesDecoded = 0;
  v2 = __rdtsc();
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 3391, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( cinematicGlob.target[1].changed )
  {
    Sys_EnterCriticalSection(CRITSECT_CINEMATIC_TARGET_CHANGE_BACKEND);
    CinematicGlobTarget::operator=(&cinematicGlob.target[2], &cinematicGlob.target[1]);
    ++cinematicGlob.stopId;
    cinematicGlob.target[1].changed = 0;
    cinematicGlob.activeImageFrame = -1;
    Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_TARGET_CHANGE_BACKEND);
  }
  _R15 = &cinematicGlob;
  if ( !cinematicGlob.target[2].changed )
    goto LABEL_37;
  if ( cinematicGlob.activeImageFrame != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 3403, ASSERT_TYPE_ASSERT, "(cinematicGlob.activeImageFrame == CINEMATIC_INVALID_IMAGE_FRAME)", (const char *)&queryFormat, "cinematicGlob.activeImageFrame == CINEMATIC_INVALID_IMAGE_FRAME") )
    __debugbreak();
  v4 = 0;
  cinematicGlob.target[2].changed = 0;
  pStartFrame[0] = 0;
  Core_strcpy(dest, 0x100ui64, cinematicGlob.target[2].name);
  if ( dest[0] )
  {
    v5 = strchr_0(dest, 58);
    if ( v5 )
    {
      *v5 = 0;
      v4 = atoi(v5 + 1);
      pStartFrame[0] = v4;
    }
  }
  if ( cinematicGlob.bink && v4 )
  {
    v6 = 0x7FFFFFFFi64;
    v7 = 0i64;
    do
    {
      v8 = (unsigned __int8)dest[v7];
      v9 = v6;
      v10 = (unsigned __int8)cinematicGlob.status.name[v7++];
      --v6;
      if ( !v9 )
        break;
      if ( v8 != v10 )
      {
        v11 = v8 + 32;
        if ( (unsigned int)(v8 - 65) > 0x19 )
          v11 = v8;
        v8 = v11;
        v12 = v10 + 32;
        if ( (unsigned int)(v10 - 65) > 0x19 )
          v12 = v10;
        if ( v8 != v12 )
          goto LABEL_27;
      }
    }
    while ( v8 );
    pStartFrame[0] = R_Cinematic_GotoFrame(v4);
    if ( pStartFrame[0] )
    {
      Sys_EnterCriticalSection(CRITSECT_CINEMATIC_STATUS);
      cinematicGlob.status.timeInMsec = 0;
      cinematicGlob.status.startFrame = pStartFrame[0];
      Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_STATUS);
      return;
    }
    dest[0] = 0;
    cinematicGlob.finishedId = cinematicGlob.stopId;
    cinematicGlob.cinematicFinished = 1;
  }
LABEL_27:
  if ( R_Cinematic_StopPlayback_Now(0) )
    RB_Cinematic_HunksClose();
  playbackFlags = cinematicGlob.target[2].playbackFlags;
  startOffsetMsec = cinematicGlob.target[2].startOffsetMsec;
  v15 = dest[0];
  if ( (cinematicGlob.target[2].playbackFlags & 0x40) != 0 )
    startOffsetMsec = 0;
  if ( !dest[0] )
    goto LABEL_35;
  if ( (cinematicGlob.target[2].playbackFlags & 0x4000) != 0 )
  {
    if ( R_Cinematic_Preload(dest) )
    {
      Com_Printf(8, "Waiting for '%s' preloading before starting...\n", dest);
      cinematicGlob.target[2].changed = 1;
      goto LABEL_35;
    }
    v15 = dest[0];
  }
  if ( v15 && RB_Cinematic_StartPlayback_Now(dest, playbackFlags, startOffsetMsec, pStartFrame, cinematicGlob.target[2].fillerBink) )
  {
    Sys_EnterCriticalSection(CRITSECT_CINEMATIC_STATUS);
    Core_strcpy(cinematicGlob.status.name, 0x100ui64, dest);
    cinematicGlob.status.startFrame = pStartFrame[0];
    cinematicGlob.status.timeInMsec = 0;
    goto LABEL_36;
  }
LABEL_35:
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_STATUS);
  cinematicGlob.status.name[0] = 0;
  *(_QWORD *)&cinematicGlob.status.timeInMsec = 0i64;
LABEL_36:
  Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_STATUS);
LABEL_37:
  v16 = cinematicGlob.status.name[0] != 0;
  if ( !cinematicGlob.status.name[0] && cinematicGlob.activeImageFrame != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 3499, ASSERT_TYPE_ASSERT, "(cinematicGlob.activeImageFrame == CINEMATIC_INVALID_IMAGE_FRAME)", (const char *)&queryFormat, "cinematicGlob.activeImageFrame == CINEMATIC_INVALID_IMAGE_FRAME") )
    __debugbreak();
  if ( v16 )
  {
    if ( !cinematicGlob.bink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 3505, ASSERT_TYPE_ASSERT, "(cinematicGlob.bink)", (const char *)&queryFormat, "cinematicGlob.bink") )
      __debugbreak();
    if ( !(unsigned __int8)RB_Cinematic_Advance(cinematicGlob.status.timeInMsec == 0, a2) && cinematicGlob.finishedId != cinematicGlob.stopId )
    {
      cinematicGlob.finishedId = cinematicGlob.stopId;
      cinematicGlob.cinematicFinished = 1;
      if ( SLOBYTE(cinematicGlob.target[2].playbackFlags) < 0 )
      {
        Com_sprintf(src, 0x100ui64, "%s%s", cinematicGlob.target[2].name, "_filler");
        cinematicGlob.cinematicFinished = 0;
        cinematicGlob.cinematicHeld = 0;
        cinematicGlob.cinematicPending = 1;
        cinematicGlob.targetMuted = 0;
        Sys_EnterCriticalSection(CRITSECT_CINEMATIC_PAUSE);
        cinematicGlob.targetPaused = CINEMATIC_NOT_PAUSED;
        Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_PAUSE);
        Sys_EnterCriticalSection(CRITSECT_CINEMATIC_TARGET_CHANGE_COMMAND);
        Core_strcpy(cinematicGlob.target[0].name, 0x100ui64, src);
        *(_QWORD *)&cinematicGlob.target[0].playbackFlags = 2i64;
        cinematicGlob.target[0].fillerBink = 1;
        cinematicGlob.target[0].changed = 1;
        Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_TARGET_CHANGE_COMMAND);
      }
    }
  }
  v17 = __rdtsc();
  if ( cinematicGlob.status.name[0] )
  {
    __asm
    {
      vmovsd  xmm2, cs:__real@43f0000000000000
      vxorps  xmm0, xmm0, xmm0
    }
    v20 = cinematicGlob.playbackStats.frameCount % 0x3C;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    _RDX = 5 * v20;
    if ( (__int64)(v17 - v2) < 0 )
      __asm { vaddsd  xmm0, xmm0, xmm2 }
    __asm
    {
      vmovsd  xmm3, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vmulsd  xmm0, xmm0, xmm3
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovss  dword ptr [r15+rdx*4+0AA90h], xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( (__int64)(v17 - cinematicGlob.playbackStatsLastEndTime) < 0 )
      __asm { vaddsd  xmm0, xmm0, xmm2 }
    __asm
    {
      vmulsd  xmm0, xmm0, xmm3
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovss  dword ptr [r15+rdx*4+0AA8Ch], xmm1
    }
    cinematicGlob.playbackStats.frames[v20].framesDecoded = cinematicGlob.playbackStatsFramesDecoded;
    cinematicGlob.playbackStats.frames[v20].ioFullPercent = cinematicGlob.playbackStatsIOPercent;
    cinematicGlob.playbackStats.frames[v20].ioActive = cinematicGlob.hasFileIO;
    if ( cinematicGlob.playbackStatsFramesDecoded > 1 )
      ++cinematicGlob.playbackStats.totalFrameSkips;
    ++cinematicGlob.playbackStats.frameCount;
  }
  cinematicGlob.playbackStatsLastEndTime = v17;
}

/*
==============
RB_Cinematic_UpdateSaveData
==============
*/
void RB_Cinematic_UpdateSaveData(void)
{
  __int64 v0; 
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int timeInMsec; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 
  unsigned __int64 v15; 
  int v16; 
  __int64 v19; 
  char dest[256]; 
  unsigned int playbackFlags; 
  unsigned int startOffsetMsec; 
  CinematicEnum targetPaused; 

  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_SERVER);
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_PAUSE);
  targetPaused = cinematicGlob.targetPaused;
  Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_PAUSE);
  v0 = 0x7FFFFFFFi64;
  if ( cinematicGlob.server.name[0] )
  {
    Core_strcpy(dest, 0x100ui64, cinematicGlob.server.name);
    v1 = 0i64;
    playbackFlags = cinematicGlob.server.playbackFlags;
    startOffsetMsec = 0;
    Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_SERVER);
  }
  else
  {
    Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_SERVER);
    Sys_EnterCriticalSection(CRITSECT_CINEMATIC_TARGET_CHANGE_COMMAND);
    Core_strcpy(dest, 0x100ui64, cinematicGlob.target[0].name);
    playbackFlags = cinematicGlob.target[0].playbackFlags;
    startOffsetMsec = cinematicGlob.target[0].startOffsetMsec;
    Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_TARGET_CHANGE_COMMAND);
    Sys_EnterCriticalSection(CRITSECT_CINEMATIC_UPDATE);
    if ( !s_cinematicUpdateLockThread )
      s_cinematicUpdateLockThread = Sys_GetCurrentThreadId();
    ++s_cinematicUpdateLockCount;
    v3 = 0x7FFFFFFFi64;
    v1 = 0i64;
    v4 = 0i64;
    do
    {
      v5 = (unsigned __int8)dest[v4];
      v6 = v3;
      v7 = (unsigned __int8)cinematicGlob.status.name[v4++];
      --v3;
      if ( !v6 )
        break;
      if ( (_DWORD)v5 != (_DWORD)v7 )
      {
        v8 = v5 + 32;
        if ( (unsigned int)(v5 - 65) > 0x19 )
          v8 = v5;
        v5 = v8;
        v2 = (unsigned int)(v7 + 32);
        if ( (unsigned int)(v7 - 65) > 0x19 )
          v2 = (unsigned int)v7;
        if ( (_DWORD)v5 != (_DWORD)v2 )
          goto LABEL_17;
      }
    }
    while ( (_DWORD)v5 );
    timeInMsec = 0;
    if ( cinematicGlob.bink )
      timeInMsec = cinematicGlob.status.timeInMsec;
    startOffsetMsec = timeInMsec;
LABEL_17:
    R_Cinematic_UnlockUpdate(v2, v5, v7, v4);
  }
  if ( targetPaused == CINEMATIC_NOT_PAUSED )
    playbackFlags &= ~0x10u;
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_SAVE);
  if ( (playbackFlags & 0x80) == 0 || (playbackFlags & 0x800) != 0 )
  {
    do
    {
      v10 = (unsigned __int8)dest[v1];
      v11 = v0;
      v12 = (unsigned __int8)aFillerLoad[v1++];
      --v0;
      if ( !v11 )
        break;
      if ( v10 != v12 )
      {
        v13 = v10 + 32;
        if ( (unsigned int)(v10 - 65) > 0x19 )
          v13 = v10;
        v10 = v13;
        v14 = v12 + 32;
        if ( (unsigned int)(v12 - 65) > 0x19 )
          v14 = v12;
        if ( v10 != v14 )
        {
          v15 = -1i64;
          do
            ++v15;
          while ( dest[v15] );
          v16 = truncate_cast<int,unsigned __int64>(v15) - 7;
          if ( v16 <= 0 || I_stricmp(&dest[v16], "_filler") )
            goto LABEL_36;
          break;
        }
      }
    }
    while ( v10 );
  }
  dest[0] = 0;
LABEL_36:
  _RAX = &cinematicSaveUpdate;
  _RDX = dest;
  v19 = 2i64;
  do
  {
    _RAX = (CinematicGlobSave *)((char *)_RAX + 128);
    __asm
    {
      vmovups ymm0, ymmword ptr [rdx]
      vmovups xmm1, xmmword ptr [rdx+70h]
    }
    _RDX += 128;
    __asm
    {
      vmovups ymmword ptr [rax-80h], ymm0
      vmovups ymm0, ymmword ptr [rdx-60h]
      vmovups ymmword ptr [rax-60h], ymm0
      vmovups ymm0, ymmword ptr [rdx-40h]
      vmovups ymmword ptr [rax-40h], ymm0
      vmovups xmm0, xmmword ptr [rdx-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmmword ptr [rax-10h], xmm1
    }
    --v19;
  }
  while ( v19 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vmovups xmmword ptr [rax], xmm0
  }
  Sys_LeaveCriticalSection((CriticalSection)((unsigned __int8)v19 + 38));
}

/*
==============
R_Cinematic_BinkOpenPath_MemoryResident
==============
*/
char R_Cinematic_BinkOpenPath_MemoryResident(const char *filename, unsigned int playbackFlags, const void **outPtr, char *errText, int errTextSize)
{
  char result; 
  int v9; 
  __int64 v10; 
  void *v11; 
  unsigned __int64 v12; 
  CinematicFileHandle v13; 

  if ( !outPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2815, ASSERT_TYPE_ASSERT, "(outPtr)", (const char *)&queryFormat, "outPtr") )
    __debugbreak();
  *(_DWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFF000ui64) + 0x1010) = -16777217;
  *(_QWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFF000ui64) + 0x1018) = 0i64;
  *(_BYTE *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFF000ui64) + 0x1000) = 0;
  *(_QWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFF000ui64) + 0x1008) = 0i64;
  *(_DWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFF000ui64) + 0x1020) = 0;
  if ( CinematicFileHandle::Open((CinematicFileHandle *)((unsigned __int64)&v13 & 0xFFFFFFFFFFFFF000ui64), filename) )
  {
    v9 = *(_DWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFF000ui64) + 0x1010);
    if ( v9 == -16777217 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 654, ASSERT_TYPE_ASSERT, "(m_fileID != FileStreamFileID::INVALID)", (const char *)&queryFormat, "m_fileID != FileStreamFileID::INVALID") )
        __debugbreak();
      v9 = *(_DWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFF000ui64) + 0x1010);
      if ( v9 == -16777217 )
        goto LABEL_13;
    }
    v10 = FileStream_Easy_FileSize((FileStreamFileID)v9);
    if ( !v10 )
    {
LABEL_13:
      if ( errText )
        Com_sprintf(errText, errTextSize, "Zero file size");
      CinematicFileHandle::Close((CinematicFileHandle *)((unsigned __int64)&v13 & 0xFFFFFFFFFFFFF000ui64));
      result = 0;
      *outPtr = NULL;
    }
    else
    {
      if ( !cinematicGlob.masterHunk.m_userHunk && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 345, ASSERT_TYPE_ASSERT, "(m_userHunk)", (const char *)&queryFormat, "m_userHunk") )
        __debugbreak();
      v11 = Mem_HunkUser_AllocInternal(cinematicGlob.masterHunk.m_userHunk, v10, 0x1000ui64, "CinematicHunk::Alloc");
      *outPtr = v11;
      v12 = CinematicFileHandle::Read((CinematicFileHandle *)((unsigned __int64)&v13 & 0xFFFFFFFFFFFFF000ui64), v11, v10);
      CinematicFileHandle::Close((CinematicFileHandle *)((unsigned __int64)&v13 & 0xFFFFFFFFFFFFF000ui64));
      if ( v12 == v10 )
      {
        return 1;
      }
      else
      {
        if ( errText )
          Com_sprintf(errText, errTextSize, "Read was short (wanted %zu got %zu)", v10, v12);
        return 0;
      }
    }
  }
  else
  {
    if ( errText )
      Com_sprintf(errText, errTextSize, "OpenFile() failed");
    *outPtr = NULL;
    return 0;
  }
  return result;
}

/*
==============
R_Cinematic_Bink_Alloc
==============
*/
void *R_Cinematic_Bink_Alloc(unsigned __int64 bytes)
{
  if ( !cinematicGlob.masterHunk.m_userHunk && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 345, ASSERT_TYPE_ASSERT, "(m_userHunk)", (const char *)&queryFormat, "m_userHunk") )
    __debugbreak();
  return Mem_HunkUser_AllocInternal(cinematicGlob.masterHunk.m_userHunk, bytes, 0x20ui64, "CinematicHunk::Alloc");
}

/*
==============
R_Cinematic_Bink_Free
==============
*/
void R_Cinematic_Bink_Free(void *ptr)
{
  ;
}

/*
==============
R_Cinematic_CheckBinkError
==============
*/
char R_Cinematic_CheckBinkError()
{
  const char *Error; 

  Error = j_BinkGetError();
  if ( Error )
  {
    if ( *Error )
    {
      LOBYTE(Error) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1051, ASSERT_TYPE_ASSERT, "(!binkError || binkError[0] == '\\0')", "%s\n\tBinkGetError(): \"%s\"", "!binkError || binkError[0] == '\\0'", Error);
      if ( (_BYTE)Error )
        __debugbreak();
    }
  }
  return (char)Error;
}

/*
==============
R_Cinematic_ClearPreloads
==============
*/
void R_Cinematic_ClearPreloads(void)
{
  char *name; 
  char *v1; 
  __int64 v2; 
  int v3; 

  if ( cinematicGlob.isInitialized )
  {
    name = cinematicGlob.preloadedHandles[0].name;
    do
    {
      v1 = name - 16412;
      v2 = 2i64;
      do
      {
        v3 = *((_DWORD *)v1 - 3);
        if ( v3 != -16777217 )
        {
          if ( *v1 )
          {
            FileStream_FreeRequest((FileStreamRequestID)*((_DWORD *)v1 - 1), 1);
            v3 = *((_DWORD *)v1 - 3);
          }
          FileStream_CloseFile((FileStreamFileID)v3);
          *((_DWORD *)v1 - 3) = -16777217;
        }
        *v1 = 0;
        *((_DWORD *)v1 + 1) = 0;
        *((_DWORD *)v1 - 1) = -1;
        v1 += 8212;
        --v2;
      }
      while ( v2 );
      *name = 0;
      name += 16552;
    }
    while ( (__int64)name < (__int64)&unk_152552A00 );
  }
}

/*
==============
R_Cinematic_ClearSaveLoad
==============
*/
void R_Cinematic_ClearSaveLoad(void)
{
  cinematicSaveFromLoad.name[0] = 0;
  cinematicSaveFromLoad.serverTimeAtLoad = -1;
}

/*
==============
R_Cinematic_ClearServerFlags
==============
*/
void R_Cinematic_ClearServerFlags(const int flags)
{
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_SERVER);
  cinematicGlob.server.playbackFlags &= ~flags;
  Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_SERVER);
}

/*
==============
R_Cinematic_DrawFullscreen_Letterboxed
==============
*/

void __fastcall R_Cinematic_DrawFullscreen_Letterboxed(double _XMM0_8, double _XMM1_8)
{
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( cinematicGlob.bink )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm0, xmm1, xmm0; cinematicAspectRatio
    }
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; letterboxAlpha
    vmovaps xmm3, xmm2; letterboxLerp
  }
  R_Cinematic_DrawLetterbox_OptionalCinematic(*(float *)&_XMM0, 1, *(float *)&_XMM2, *(float *)&_XMM3);
}

/*
==============
R_Cinematic_DrawLetterbox_Only
==============
*/

void __fastcall R_Cinematic_DrawLetterbox_Only(float aspectRatio, double alpha, double lerp)
{
  __asm
  {
    vmovaps xmm3, xmm2; letterboxLerp
    vmovaps xmm2, xmm1; letterboxAlpha
  }
  R_Cinematic_DrawLetterbox_OptionalCinematic(aspectRatio, 0, *(float *)&_XMM2, *(float *)&_XMM3);
}

/*
==============
R_Cinematic_DrawLetterbox_OptionalCinematic
==============
*/

void __fastcall R_Cinematic_DrawLetterbox_OptionalCinematic(double cinematicAspectRatio, bool drawCinematic, double letterboxAlpha, double letterboxLerp)
{
  bool v15; 
  _BYTE v70[32]; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  vec4_t *color; 
  Material *material; 
  vec4_t v78; 
  char v85; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovaps xmmword ptr [r11-48h], xmm9
    vmovaps xmmword ptr [r11-58h], xmm10
  }
  v15 = (unsigned __int64)v70 == _security_cookie;
  __asm
  {
    vmovss  xmm5, cs:?vidConfig@@3UvidConfig_t@@A.aspectRatioDisplayPixel; vidConfig_t vidConfig
    vxorps  xmm9, xmm9, xmm9
    vcvtsi2ss xmm9, xmm9, rax
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm0, xmm8
    vxorps  xmm10, xmm10, xmm10
    vcvtsi2ss xmm10, xmm10, rax
    vmovss  [rsp+118h+var_C8], xmm2
    vmovaps xmm6, xmm2
    vmovaps xmm4, xmm0
  }
  if ( (unsigned __int64)v70 != _security_cookie )
  {
    __asm
    {
      vucomiss xmm6, xmm8
      vmovaps xmmword ptr [r11-68h], xmm11
      vmovss  xmm11, cs:__real@3f800000
      vmovaps xmmword ptr [r11-78h], xmm12
      vmovaps xmmword ptr [r11-88h], xmm13
      vmulss  xmm0, xmm5, xmm9
      vdivss  xmm1, xmm0, xmm4
      vmovaps xmmword ptr [r11-98h], xmm14
      vmulss  xmm2, xmm5, xmm10
      vmulss  xmm0, xmm2, xmm4
      vminss  xmm13, xmm0, xmm9
      vminss  xmm12, xmm1, xmm10
      vsubss  xmm0, xmm9, xmm13
      vmulss  xmm14, xmm0, cs:__real@3f000000
      vsubss  xmm1, xmm10, xmm12
      vmovaps [rsp+118h+var_A8], xmm15
      vmulss  xmm15, xmm1, cs:__real@3f000000
    }
    if ( !v15 )
    {
      __asm
      {
        vucomiss xmm3, xmm8
        vmovss  xmm0, [rsp+118h+var_C8]
      }
      material = rgp.whiteMaterial;
      color = &v78;
      __asm
      {
        vmovss  [rsp+118h+var_E0], xmm11
        vmovaps xmmword ptr [r11-28h], xmm7
        vmulss  xmm6, xmm15, xmm3
        vmovss  [rsp+118h+var_E8], xmm11
        vmovss  dword ptr [rsp+118h+var_C0+0Ch], xmm0
        vmulss  xmm7, xmm14, xmm3
        vmovss  [rsp+118h+var_F0], xmm8
        vmovaps xmm3, xmm6; h
        vmovaps xmm2, xmm9; w
        vxorps  xmm1, xmm1, xmm1; y
        vxorps  xmm0, xmm0, xmm0; x
        vmovss  [rsp+118h+var_F8], xmm8
        vmovss  dword ptr [rsp+118h+var_C0], xmm8
        vmovss  dword ptr [rsp+118h+var_C0+4], xmm8
        vmovss  dword ptr [rsp+118h+var_C0+8], xmm8
      }
      R_AddCmdDrawStretchPic(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v71, v72, v73, v74, color, material);
      __asm
      {
        vmovss  [rsp+118h+var_E0], xmm11
        vmovss  [rsp+118h+var_E8], xmm11
        vmovss  [rsp+118h+var_F0], xmm8
        vsubss  xmm1, xmm10, xmm6; y
        vmovaps xmm3, xmm6; h
        vmovaps xmm2, xmm9; w
        vxorps  xmm0, xmm0, xmm0; x
        vmovss  [rsp+118h+var_F8], xmm8
      }
      R_AddCmdDrawStretchPic(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v71, v72, v73, v74, &v78, rgp.whiteMaterial);
      __asm
      {
        vmovss  [rsp+118h+var_E0], xmm11
        vmovss  [rsp+118h+var_E8], xmm11
        vmovss  [rsp+118h+var_F0], xmm8
        vmovaps xmm3, xmm10; h
        vmovaps xmm2, xmm7; w
        vxorps  xmm1, xmm1, xmm1; y
        vxorps  xmm0, xmm0, xmm0; x
        vmovss  [rsp+118h+var_F8], xmm8
      }
      R_AddCmdDrawStretchPic(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v71, v72, v73, v74, &v78, rgp.whiteMaterial);
      __asm
      {
        vmovss  [rsp+118h+var_E0], xmm11
        vmovss  [rsp+118h+var_E8], xmm11
        vmovss  [rsp+118h+var_F0], xmm8
        vsubss  xmm0, xmm9, xmm7; x
        vmovaps xmm3, xmm10; h
        vmovaps xmm2, xmm7; w
        vxorps  xmm1, xmm1, xmm1; y
        vmovss  [rsp+118h+var_F8], xmm8
      }
      R_AddCmdDrawStretchPic(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v71, v72, v73, v74, &v78, rgp.whiteMaterial);
      __asm { vmovaps xmm7, [rsp+118h+var_28] }
    }
    if ( drawCinematic )
    {
      __asm
      {
        vmovss  [rsp+118h+var_E0], xmm11
        vmovss  [rsp+118h+var_E8], xmm11
        vmovss  [rsp+118h+var_F0], xmm8
        vmovaps xmm3, xmm12; h
        vmovaps xmm2, xmm13; w
        vmovaps xmm1, xmm15; y
        vmovaps xmm0, xmm14; x
        vmovss  [rsp+118h+var_F8], xmm8
      }
      R_AddCmdDrawStretchPic(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v71, v72, v73, v74, &colorWhite, rgp.cinematicMaterial);
    }
    __asm
    {
      vmovaps xmm14, [rsp+118h+var_98]
      vmovaps xmm13, [rsp+118h+var_88]
      vmovaps xmm12, [rsp+118h+var_78]
      vmovaps xmm11, [rsp+118h+var_68]
      vmovaps xmm15, [rsp+118h+var_A8]
    }
  }
  _R11 = &v85;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
R_Cinematic_DrawStretchPic_Letterboxed
==============
*/

void __fastcall R_Cinematic_DrawStretchPic_Letterboxed(bool drawFilledToScreen, double aspectRatio)
{
  __asm
  {
    vmovss  xmm2, cs:__real@3f800000
    vmovaps xmm3, xmm2
    vmovaps xmm0, xmm1
  }
  R_Cinematic_DrawLetterbox_OptionalCinematic(*(double *)&_XMM0, 1, *(double *)&_XMM2, *(double *)&_XMM3);
}

/*
==============
R_Cinematic_FindPreloadHandle
==============
*/
__int64 R_Cinematic_FindPreloadHandle(const char *name, unsigned int *initialBufferSize, char *initialBufferData)
{
  int v5; 
  __int64 v6; 
  PreloadedFileHandle *v7; 
  __int64 v8; 
  const char *v9; 
  char v10; 
  char v11; 
  int v13; 
  __int64 v14; 
  const char *v15; 
  unsigned int v16; 
  __int64 v18; 

  v18 = -2i64;
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_PRELOAD);
  v5 = 0;
  while ( 2 )
  {
    v6 = v5;
    v7 = &cinematicGlob.preloadedHandles[v6];
    v8 = 0x7FFFFFFFi64;
    v9 = name;
    if ( (CinematicGlob *)((char *)&cinematicGlob + v6 * 16552) == (CinematicGlob *)-61312i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, (AssertType)(v6 * 16552 + (unsigned int)&cinematicGlob + 61313), "( s0 )", (const char *)&queryFormat, "s0", v18) )
      __debugbreak();
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    while ( 1 )
    {
      v10 = v9[(char *)v7 - name + 16424];
      v11 = *v9++;
      if ( !v8-- )
      {
LABEL_11:
        v13 = -16777217;
        v14 = 2i64;
        do
        {
          if ( *(_DWORD *)v7->data[0].fileStream != -16777217 )
          {
            if ( !FileStream_FileIsOpen((FileStreamFileID)*(_DWORD *)v7->data[0].fileStream) || FileStream_FileIsError((FileStreamFileID)*(_DWORD *)v7->data[0].fileStream) )
            {
              if ( *(_DWORD *)v7->data[0].fileStream != -16777217 )
              {
                FileStream_CloseFile((FileStreamFileID)*(_DWORD *)v7->data[0].fileStream);
                *(_DWORD *)v7->data[0].fileStream = -16777217;
              }
            }
            else
            {
              if ( v13 != -16777217 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 4040, ASSERT_TYPE_ASSERT, "(openFileStream == FileStreamFileID::INVALID)", (const char *)&queryFormat, "openFileStream == FileStreamFileID::INVALID") )
                __debugbreak();
              v13 = *(_DWORD *)v7->data[0].fileStream;
              *(_DWORD *)v7->data[0].fileStream = -16777217;
              if ( (((_BYTE)v7 + 16) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &v7->data[0].initialRequestFinished) )
                __debugbreak();
              if ( v7->data[0].initialRequestFinished )
              {
                *initialBufferSize = v7->data[0].initialBufferRead;
                memcpy_0(initialBufferData, v7->data[0].initialBuffer, v7->data[0].initialBufferRead);
              }
            }
          }
          v7 = (PreloadedFileHandle *)((char *)v7 + 8212);
          --v14;
        }
        while ( v14 );
        cinematicGlob.preloadedHandles[v6].name[0] = 0;
        v15 = "invalid";
        if ( v13 != -16777217 )
          v15 = "valid";
        Com_Printf(8, "Found preloaded '%s' with %s file handle\n", name, v15);
        v16 = v13;
        goto LABEL_27;
      }
      if ( v10 != v11 )
        break;
      if ( !v10 )
        goto LABEL_11;
    }
    if ( ++v5 < 16 )
      continue;
    break;
  }
  v16 = -16777217;
LABEL_27:
  Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_PRELOAD);
  return v16;
}

/*
==============
R_Cinematic_GetBinkFrameNum
==============
*/
__int64 R_Cinematic_GetBinkFrameNum()
{
  __int64 v0; 
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  BINKREALTIME run; 

  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_UPDATE);
  if ( !s_cinematicUpdateLockThread )
    s_cinematicUpdateLockThread = Sys_GetCurrentThreadId();
  ++s_cinematicUpdateLockCount;
  j_BinkGetRealtime(cinematicGlob.bink, &run, 0);
  R_Cinematic_UnlockUpdate(v1, v0, v2, v3);
  return run.FrameNum;
}

/*
==============
R_Cinematic_GetBinkFrameRate
==============
*/
__int64 R_Cinematic_GetBinkFrameRate()
{
  __int64 v0; 
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  BINKREALTIME run; 

  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_UPDATE);
  if ( !s_cinematicUpdateLockThread )
    s_cinematicUpdateLockThread = Sys_GetCurrentThreadId();
  ++s_cinematicUpdateLockCount;
  j_BinkGetRealtime(cinematicGlob.bink, &run, 0);
  R_Cinematic_UnlockUpdate(v1, v0, v2, v3);
  return run.FrameRate;
}

/*
==============
R_Cinematic_GetBinkTextureLayout
==============
*/
void R_Cinematic_GetBinkTextureLayout(const Image_SetupParams *params, CachedResourceLayoutType type, XG_RESOURCE_LAYOUT *layout)
{
  __int64 v3; 
  __int64 width; 
  __int64 height; 
  XG_RESOURCE_LAYOUT *v8; 
  __int64 v9; 
  XG_RESOURCE_LAYOUT *v10; 
  __int64 v11; 

  v3 = (unsigned int)type;
  if ( !layout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1236, ASSERT_TYPE_ASSERT, "(layout)", (const char *)&queryFormat, "layout") )
    __debugbreak();
  if ( !vidConfig.displayWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1237, ASSERT_TYPE_ASSERT, "(vidConfig.displayWidth)", (const char *)&queryFormat, "vidConfig.displayWidth") )
    __debugbreak();
  if ( !vidConfig.displayHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1238, ASSERT_TYPE_ASSERT, "(vidConfig.displayHeight)", (const char *)&queryFormat, "vidConfig.displayHeight") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v11) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1239, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( CACHED_RESOURCE_LAYOUT_COUNT )", "type doesn't index CACHED_RESOURCE_LAYOUT_COUNT\n\t%i not in [0, %i)", v11, 2) )
      __debugbreak();
  }
  width = (unsigned int)params->width;
  if ( (_DWORD)width == ((vidConfig.displayWidth + 15) & 0xFFFFFFF0) && (height = (unsigned int)params->height, (_DWORD)height == ((vidConfig.displayHeight + 15) & 0xFFFFFFF0)) )
  {
    v8 = &cinematicGlob.fullscreenTextureLayout[v3];
    if ( !v8->SizeBytes )
    {
      Image_GetTextureLayout_XB3(params, v8);
      if ( !v8->SizeBytes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1255, ASSERT_TYPE_ASSERT, "(cinematicGlob.fullscreenTextureLayout[type].SizeBytes != 0)", (const char *)&queryFormat, "cinematicGlob.fullscreenTextureLayout[type].SizeBytes != 0") )
        __debugbreak();
      height = (unsigned int)params->height;
      width = (unsigned int)params->width;
    }
    Com_Printf(8, "R_Cinematic_GetCachedBinkTextureLayout: Using cached full-screen Bink layout (%d x %d)\n", width, height);
    memcpy_0(layout, v8, sizeof(XG_RESOURCE_LAYOUT));
  }
  else if ( (_DWORD)width == (((vidConfig.displayWidth >> 1) + 15) & 0xFFFFFFF0) && (v9 = (unsigned int)params->height, (_DWORD)v9 == (((vidConfig.displayHeight >> 1) + 15) & 0xFFFFFFF0)) )
  {
    v10 = &cinematicGlob.halfscreenTextureLayout[v3];
    if ( !v10->SizeBytes )
    {
      Image_GetTextureLayout_XB3(params, v10);
      if ( !v10->SizeBytes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1267, ASSERT_TYPE_ASSERT, "(cinematicGlob.halfscreenTextureLayout[type].SizeBytes != 0)", (const char *)&queryFormat, "cinematicGlob.halfscreenTextureLayout[type].SizeBytes != 0") )
        __debugbreak();
      v9 = (unsigned int)params->height;
      width = (unsigned int)params->width;
    }
    Com_Printf(8, "R_Cinematic_GetCachedBinkTextureLayout: Using cached half-screen Bink layout (%d x %d)\n", width, v9);
    memcpy_0(layout, v10, sizeof(XG_RESOURCE_LAYOUT));
  }
  else
  {
    Com_Printf(8, "R_Cinematic_GetCachedBinkTextureLayout: calculating non-standard Bink layout (%d x %d)\n", width, (unsigned int)params->height);
    Image_GetTextureLayout_XB3(params, layout);
  }
}

/*
==============
R_Cinematic_GetBinkTotalFrames
==============
*/
__int64 R_Cinematic_GetBinkTotalFrames()
{
  __int64 v0; 
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  BINKSUMMARY sum; 

  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_UPDATE);
  if ( !s_cinematicUpdateLockThread )
    s_cinematicUpdateLockThread = Sys_GetCurrentThreadId();
  ++s_cinematicUpdateLockCount;
  j_BinkGetSummary(cinematicGlob.bink, &sum);
  R_Cinematic_UnlockUpdate(v1, v0, v2, v3);
  return sum.TotalFrames;
}

/*
==============
R_Cinematic_GetFilenameAndTimeInMsec
==============
*/
char R_Cinematic_GetFilenameAndTimeInMsec(char *outName, unsigned __int64 outNameSize, unsigned int *outTimeInMsec)
{
  if ( !outTimeInMsec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 4689, ASSERT_TYPE_ASSERT, "(outTimeInMsec)", (const char *)&queryFormat, "outTimeInMsec") )
    __debugbreak();
  if ( !outName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 4690, ASSERT_TYPE_ASSERT, "(outName)", (const char *)&queryFormat, "outName") )
    __debugbreak();
  if ( cinematicGlob.cinematicFinished && cinematicGlob.lastFinishedId != cinematicGlob.finishedId || !cinematicGlob.status.name[0] )
    return 0;
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_STATUS);
  if ( !cinematicGlob.status.name[0] )
  {
    Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_STATUS);
    return 0;
  }
  *outTimeInMsec = cinematicGlob.status.timeInMsec;
  Core_strcpy(outName, outNameSize, cinematicGlob.status.name);
  Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_STATUS);
  return 1;
}

/*
==============
R_Cinematic_GetFrame
==============
*/
__int64 R_Cinematic_GetFrame()
{
  __int64 result; 

  result = 0i64;
  if ( cinematicGlob.bink )
    return (unsigned int)cinematicGlob.status.frameNum;
  return result;
}

/*
==============
R_Cinematic_GetMemoryUsed
==============
*/
unsigned __int64 R_Cinematic_GetMemoryUsed()
{
  unsigned __int64 v0; 
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 

  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_UPDATE);
  if ( !s_cinematicUpdateLockThread )
    s_cinematicUpdateLockThread = Sys_GetCurrentThreadId();
  ++s_cinematicUpdateLockCount;
  if ( !cinematicGlob.masterHunk.m_userHunk && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 356, ASSERT_TYPE_ASSERT, "(m_userHunk)", (const char *)&queryFormat, "m_userHunk") )
    __debugbreak();
  v0 = Mem_HunkUser_GetUsedSize(cinematicGlob.masterHunk.m_userHunk) + cinematicGlob.additionalMemoryUsed;
  R_Cinematic_UnlockUpdate(v2, v1, v3, v4);
  return v0;
}

/*
==============
R_Cinematic_GetNextFilename
==============
*/
char R_Cinematic_GetNextFilename(char *outName, unsigned __int64 outNameSize)
{
  if ( !outName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 4846, ASSERT_TYPE_ASSERT, "(outName)", (const char *)&queryFormat, "outName") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_TARGET_CHANGE_COMMAND);
  Core_strcpy(outName, outNameSize, cinematicGlob.target[0].name);
  Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_TARGET_CHANGE_COMMAND);
  return 1;
}

/*
==============
R_Cinematic_GetOpenFlagsString
==============
*/
char R_Cinematic_GetOpenFlagsString(char *outFlagsString, unsigned __int64 outFlagsSize)
{
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  if ( cinematicGlob.cinematicFinished && cinematicGlob.lastFinishedId != cinematicGlob.finishedId || !cinematicGlob.status.name[0] )
    return 0;
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_UPDATE);
  if ( !s_cinematicUpdateLockThread )
    s_cinematicUpdateLockThread = Sys_GetCurrentThreadId();
  ++s_cinematicUpdateLockCount;
  if ( !cinematicGlob.bink )
  {
    R_Cinematic_UnlockUpdate(v5, v4, v6, v7);
    return 0;
  }
  if ( !outFlagsSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 4769, ASSERT_TYPE_ASSERT, "(outFlagsSize > 0)", (const char *)&queryFormat, "outFlagsSize > 0") )
    __debugbreak();
  *outFlagsString = 0;
  if ( (cinematicGlob.bink->OpenFlags & 0x4000000) != 0 )
    I_strcat_truncate(outFlagsString, outFlagsSize, "MEMORY");
  if ( (cinematicGlob.bink->OpenFlags & 8) != 0 )
  {
    if ( *outFlagsString )
      I_strcat_truncate(outFlagsString, outFlagsSize, " ");
    I_strcat_truncate(outFlagsString, outFlagsSize, "TRIPLE");
  }
  if ( (cinematicGlob.bink->OpenFlags & 4) != 0 )
  {
    if ( *outFlagsString )
      I_strcat_truncate(outFlagsString, outFlagsSize, " ");
    I_strcat_truncate(outFlagsString, outFlagsSize, "HDR");
  }
  if ( cinematicGlob.images[0].hasAlpha )
  {
    if ( *outFlagsString )
      I_strcat_truncate(outFlagsString, outFlagsSize, " ");
    I_strcat_truncate(outFlagsString, outFlagsSize, "ALPHA");
  }
  if ( (cinematicGlob.bink->OpenFlags & 0x10) != 0 )
  {
    if ( *outFlagsString )
      I_strcat_truncate(outFlagsString, outFlagsSize, " ");
    I_strcat_truncate(outFlagsString, outFlagsSize, "BINK2");
  }
  if ( cinematicGlob.gpuDecoding )
  {
    if ( *outFlagsString )
      I_strcat_truncate(outFlagsString, outFlagsSize, " ");
    I_strcat_truncate(outFlagsString, outFlagsSize, "GPU");
  }
  R_Cinematic_UnlockUpdate(v5, v4, v6, v7);
  return 1;
}

/*
==============
R_Cinematic_GetPaused
==============
*/
bool R_Cinematic_GetPaused()
{
  return cinematicGlob.targetPaused != CINEMATIC_NOT_PAUSED;
}

/*
==============
R_Cinematic_GetPlaybackFlagsString
==============
*/
char R_Cinematic_GetPlaybackFlagsString(char *outFlagsString, unsigned __int64 outFlagsSize)
{
  const char **p_name; 
  unsigned int playbackFlags; 
  __int64 v7; 
  const char *v8; 

  if ( cinematicGlob.cinematicFinished && cinematicGlob.lastFinishedId != cinematicGlob.finishedId || !cinematicGlob.status.name[0] )
    return 0;
  if ( !outFlagsSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 4806, ASSERT_TYPE_ASSERT, "(outFlagsSize > 0)", (const char *)&queryFormat, "outFlagsSize > 0") )
    __debugbreak();
  *outFlagsString = 0;
  p_name = &CINEMATIC_PLAYBACKFLAGS_NAMES[0].name;
  playbackFlags = cinematicGlob.target[0].playbackFlags;
  v7 = 13i64;
  do
  {
    if ( (playbackFlags & *(_DWORD *)(p_name - 1)) != 0 )
    {
      v8 = *p_name;
      if ( *outFlagsString )
        I_strcat_truncate(outFlagsString, outFlagsSize, " ");
      I_strcat_truncate(outFlagsString, outFlagsSize, v8);
    }
    p_name += 2;
    --v7;
  }
  while ( v7 );
  return 1;
}

/*
==============
R_Cinematic_GetPlaybackStats
==============
*/
void R_Cinematic_GetPlaybackStats(CinematicPlaybackStats *stats)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v6; 

  _RBX = stats;
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_UPDATE);
  if ( !s_cinematicUpdateLockThread )
    s_cinematicUpdateLockThread = Sys_GetCurrentThreadId();
  ++s_cinematicUpdateLockCount;
  _RAX = &cinematicGlob.playbackStats;
  v6 = 9i64;
  do
  {
    _RBX = (CinematicPlaybackStats *)((char *)_RBX + 128);
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = (CinematicPlaybackStats *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmmword ptr [rbx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rbx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rbx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rbx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rbx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rbx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rbx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rbx-10h], xmm1
    }
    --v6;
  }
  while ( v6 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rbx], xmm0
    vmovups xmm1, xmmword ptr [rax+10h]
    vmovups xmmword ptr [rbx+10h], xmm1
    vmovups xmm0, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rbx+20h], xmm0
  }
  *(_QWORD *)&_RBX->frames[2].framesDecoded = *(_QWORD *)&_RAX->frames[2].framesDecoded;
  R_Cinematic_UnlockUpdate((unsigned __int8)v6, v2, v3, v4);
}

/*
==============
R_Cinematic_GetStateString
==============
*/
char R_Cinematic_GetStateString(char *outString, unsigned __int64 outSize)
{
  if ( cinematicGlob.cinematicFinished && cinematicGlob.lastFinishedId != cinematicGlob.finishedId || !cinematicGlob.status.name[0] )
    return 0;
  if ( !outSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 4825, ASSERT_TYPE_ASSERT, "(outSize > 0)", (const char *)&queryFormat, "outSize > 0") )
    __debugbreak();
  *outString = 0;
  if ( cinematicGlob.currentMuted )
    I_strcat_truncate(outString, outSize, "MUTED");
  if ( cinematicGlob.currentPaused )
  {
    if ( *outString )
      I_strcat_truncate(outString, outSize, " ");
    I_strcat_truncate(outString, outSize, "PAUSED");
  }
  if ( !*outString )
    I_strcat_truncate(outString, outSize, "PLAYING");
  return 1;
}

/*
==============
R_Cinematic_GetTimeInMsec
==============
*/
__int64 R_Cinematic_GetTimeInMsec()
{
  __int64 result; 

  result = 0i64;
  if ( cinematicGlob.bink )
    return cinematicGlob.status.timeInMsec;
  return result;
}

/*
==============
R_Cinematic_GetVideoInfo
==============
*/
char R_Cinematic_GetVideoInfo(unsigned int *width, unsigned int *height, float *framerate, bool *hdr)
{
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  BINK *bink; 

  _R14 = framerate;
  if ( cinematicGlob.cinematicFinished && cinematicGlob.lastFinishedId != cinematicGlob.finishedId || !cinematicGlob.status.name[0] )
    return 0;
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_UPDATE);
  if ( !s_cinematicUpdateLockThread )
    s_cinematicUpdateLockThread = Sys_GetCurrentThreadId();
  ++s_cinematicUpdateLockCount;
  bink = cinematicGlob.bink;
  if ( !cinematicGlob.bink )
  {
    R_Cinematic_UnlockUpdate(cinematicGlob.bink, v10, v11, v12);
    return 0;
  }
  if ( width )
  {
    *width = cinematicGlob.bink->Width;
    bink = cinematicGlob.bink;
  }
  if ( height )
  {
    *height = bink->Height;
    bink = cinematicGlob.bink;
  }
  if ( hdr )
  {
    *hdr = (bink->OpenFlags & 4) != 0;
    bink = cinematicGlob.bink;
  }
  if ( _R14 )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm1, xmm1, xmm0
      vmovss  dword ptr [r14], xmm1
    }
  }
  R_Cinematic_UnlockUpdate(bink, v10, v11, v12);
  return 1;
}

/*
==============
R_Cinematic_GetVideoStartTime
==============
*/
unsigned __int64 R_Cinematic_GetVideoStartTime()
{
  return cinematicGlob.videoStartTime;
}

/*
==============
R_Cinematic_GotoFrame
==============
*/
__int64 R_Cinematic_GotoFrame(int startFrame)
{
  unsigned int KeyFrame; 
  __int64 v3; 
  BINK *bink; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 result; 

  if ( !cinematicGlob.bink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2985, ASSERT_TYPE_ASSERT, "(cinematicGlob.bink)", (const char *)&queryFormat, "cinematicGlob.bink") )
    __debugbreak();
  if ( cinematicGlob.gpuDecoding )
    return 0i64;
  KeyFrame = j_BinkGetKeyFrame(cinematicGlob.bink, startFrame, 1);
  bink = cinematicGlob.bink;
  v5 = KeyFrame;
  if ( KeyFrame < cinematicGlob.bink->FrameNum )
    return 0i64;
  if ( !cinematicGlob.hasFileIO )
  {
    R_Cinematic_SeizeIO(cinematicGlob.bink, v3);
    bink = cinematicGlob.bink;
  }
  if ( !bink->FrameRateDiv )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 3000, ASSERT_TYPE_ASSERT, "(cinematicGlob.bink->FrameRateDiv)", (const char *)&queryFormat, "cinematicGlob.bink->FrameRateDiv") )
      __debugbreak();
    bink = cinematicGlob.bink;
  }
  v6 = 1;
  if ( (int)(v5 - 600 * bink->FrameRate / (1000 * bink->FrameRateDiv)) > 1 )
    v6 = v5 - 600 * bink->FrameRate / (1000 * bink->FrameRateDiv);
  if ( j_BinkWait(bink) )
  {
    do
      Sys_Sleep(1);
    while ( j_BinkWait(cinematicGlob.bink) );
  }
  if ( cinematicGlob.gpuDecoding && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 3006, ASSERT_TYPE_ASSERT, "(!cinematicGlob.gpuDecoding)", (const char *)&queryFormat, "!cinematicGlob.gpuDecoding") )
    __debugbreak();
  j_BinkGoto(cinematicGlob.bink, v6, 1);
  R_Cinematic_CheckBinkError();
  result = v5;
  cinematicGlob.status.frameNum = cinematicGlob.bink->FrameNum;
  return result;
}

/*
==============
R_Cinematic_Init
==============
*/
void R_Cinematic_Init(void)
{
  int *v0; 
  __int64 v1; 
  char *Error; 
  int *v3; 
  __int64 v4; 
  char *v5; 
  bool *p_initialRequestStarted; 
  bool *v7; 
  __int64 v8; 
  int v9[2]; 
  __int64 v10; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 3895, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( cinematicGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 3896, ASSERT_TYPE_ASSERT, "(!cinematicGlob.isInitialized)", (const char *)&queryFormat, "!cinematicGlob.isInitialized") )
    __debugbreak();
  j_BinkSetOSFileCallbacks(R_Cinematic_SysIO_BinkOpen, R_Cinematic_SysIO_BinkRead, R_Cinematic_SysIO_BinkSeek, R_Cinematic_SysIO_BinkClose);
  memset_0(&cinematicGlob, 0, sizeof(cinematicGlob));
  cinematicGlob.activeImageFrame = -1;
  cinematicGlob.lastFinishedId = 0;
  cinematicGlob.finishedId = 1;
  cinematicGlob.stopId = 1;
  cinematicSaveFromLoad.name[0] = 0;
  cinematicSaveFromLoad.serverTimeAtLoad = -1;
  if ( cinematicGlob.masterHunk.m_userHunk && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 327, ASSERT_TYPE_ASSERT, "(m_userHunk == nullptr)", (const char *)&queryFormat, "m_userHunk == nullptr") )
    __debugbreak();
  cinematicGlob.masterHunk.m_userHunk = Mem_HunkUser_Create(0x8000000ui64, "cinematicGlob.masterHunk", TRACK_MISC, MEM_ALLOC_FLAG_NO_MEM_CLEAR);
  if ( cinematicGlob.currentPaused && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 3919, ASSERT_TYPE_ASSERT, "(cinematicGlob.currentPaused == CINEMATIC_NOT_PAUSED)", (const char *)&queryFormat, "cinematicGlob.currentPaused == CINEMATIC_NOT_PAUSED") )
    __debugbreak();
  if ( cinematicGlob.targetPaused && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 3920, ASSERT_TYPE_ASSERT, "(cinematicGlob.targetPaused == CINEMATIC_NOT_PAUSED)", (const char *)&queryFormat, "cinematicGlob.targetPaused == CINEMATIC_NOT_PAUSED") )
    __debugbreak();
  R_Cinematic_ResetFrameImage(&cinematicGlob.curCinematicImage);
  v0 = (int *)s_asyncCinematicCores;
  v1 = 2i64;
  do
  {
    j_BinkStartAsyncThread(*v0, NULL);
    Error = j_BinkGetError();
    if ( Error && *Error && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1051, ASSERT_TYPE_ASSERT, "(!binkError || binkError[0] == '\\0')", "%s\n\tBinkGetError(): \"%s\"", "!binkError || binkError[0] == '\\0'", Error) )
      __debugbreak();
    ++v0;
    --v1;
  }
  while ( v1 );
  v3 = (int *)s_alternativeAsyncCinematicCores;
  v4 = 2i64;
  do
  {
    j_BinkStartAsyncThread(*v3, NULL);
    v5 = j_BinkGetError();
    if ( v5 && *v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1051, ASSERT_TYPE_ASSERT, "(!binkError || binkError[0] == '\\0')", "%s\n\tBinkGetError(): \"%s\"", "!binkError || binkError[0] == '\\0'", v5) )
      __debugbreak();
    ++v3;
    --v4;
  }
  while ( v4 );
  Cmd_AddCommandInternal("bink_play", R_Cinematic_PlayLocal_f, &R_Cinematic_PlayLocal_f_VAR);
  Cmd_AddCommandInternal("cinematic_play", R_Cinematic_PlayLocal_f, &R_Cinematic_PlayLocal_f_VAR_0);
  Cmd_AddCommandInternal("cinematic_play_encrypted", R_Cinematic_PlayLocal_Encrypted_f, &R_Cinematic_PlayLocal_Encrypted_f_VAR);
  Cmd_AddCommandInternal("cinematic_stop", R_Cinematic_StopLocal_f, &R_Cinematic_StopLocal_f_VAR);
  *(_DWORD *)cinematicGlob.streamingFileHandle.m_fileID = -16777217;
  cinematicGlob.streamingFileHandle.m_seekPosition = 0i64;
  cinematicGlob.streamingFileHandle.m_partialReadBufValid = 0;
  cinematicGlob.streamingFileHandle.m_partialReadBufSeek = 0i64;
  cinematicGlob.streamingFileHandle.m_initialBufferSize = 0;
  if ( cinematicGlob.descriptorHeap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1163, ASSERT_TYPE_ASSERT, "(cinematicGlob.descriptorHeap == nullptr)", (const char *)&queryFormat, "cinematicGlob.descriptorHeap == nullptr") )
    __debugbreak();
  v9[0] = 0;
  v9[1] = 96;
  v10 = 1i64;
  if ( ((unsigned int (__fastcall *)(ID3D12Device *, int *, GUID *, ID3D12DescriptorHeap **))g_dx.d3d12device->m_pFunction[4].Release)(g_dx.d3d12device, v9, &GUID_8efb471d_616c_4f49_90f7_127bb763fa51, &cinematicGlob.descriptorHeap) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1174, ASSERT_TYPE_ASSERT, "(hr == ((HRESULT)0L))", (const char *)&queryFormat, "hr == S_OK") )
    __debugbreak();
  cinematicGlob.descriptorBaseIndex = 0;
  p_initialRequestStarted = &cinematicGlob.preloadedHandles[0].data[0].initialRequestStarted;
  do
  {
    p_initialRequestStarted[16412] = 0;
    v7 = p_initialRequestStarted;
    v8 = 2i64;
    do
    {
      *((_DWORD *)v7 - 3) = -16777217;
      *((_DWORD *)v7 - 2) = 0;
      *v7 = 0;
      *((_DWORD *)v7 + 1) = 0;
      v7 += 8212;
      --v8;
    }
    while ( v8 );
    p_initialRequestStarted += 16552;
  }
  while ( (__int64)p_initialRequestStarted < (__int64)&cinematicGlob.preloadedHandles[16].data[0].initialRequestStarted );
  cinematicGlob.isInitialized = 1;
}

/*
==============
R_Cinematic_InitBinkTextures
==============
*/
void R_Cinematic_InitBinkTextures(int origSrcWidth, int origSrcHeight)
{
  unsigned int v14; 
  BINKPLANE *outPlane; 
  unsigned int YABufferHeight; 
  unsigned int YABufferWidth; 
  unsigned int cRcBBufferHeight; 
  unsigned int cRcBBufferWidth; 
  char v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  char v45; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  if ( cinematicGlob.binkBuffers.TotalFrames != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1681, ASSERT_TYPE_ASSERT, "( cinematicGlob.binkBuffers.TotalFrames ) == ( CINEMATIC_IMAGES_REQUIRED )", "%s == %s\n\t%i, %i", "cinematicGlob.binkBuffers.TotalFrames", "CINEMATIC_IMAGES_REQUIRED", cinematicGlob.binkBuffers.TotalFrames, 3) )
    __debugbreak();
  R_Cinematic_ReleaseImages();
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, esi
    vmulss  xmm8, xmm6, cs:__real@3f000000
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, ebx
    vmulss  xmm9, xmm7, cs:__real@3f000000
  }
  v14 = 0;
  _RBX = &cinematicGlob.images[0].hasAlpha;
  outPlane = &cinematicGlob.binkBuffers.Frames[0].cBPlane;
  do
  {
    *(_WORD *)_RBX = 0;
    YABufferHeight = cinematicGlob.binkBuffers.YABufferHeight;
    YABufferWidth = cinematicGlob.binkBuffers.YABufferWidth;
    if ( v14 >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1203, ASSERT_TYPE_ASSERT, "(frameSet < 3)", (const char *)&queryFormat, "frameSet < 3") )
      __debugbreak();
    R_Cinematic_MakeBinkTexture((R_ImageProgID)(5 * (v14 + 8)), YABufferWidth, YABufferHeight, GFX_PF_R8, (GfxImage **)_RBX - 6, outPlane - 2);
    cRcBBufferHeight = cinematicGlob.binkBuffers.cRcBBufferHeight;
    cRcBBufferWidth = cinematicGlob.binkBuffers.cRcBBufferWidth;
    if ( v14 >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1203, ASSERT_TYPE_ASSERT, "(frameSet < 3)", (const char *)&queryFormat, "frameSet < 3") )
      __debugbreak();
    v21 = 5 * v14;
    R_Cinematic_MakeBinkTexture((R_ImageProgID)(5 * v14 + 41), cRcBBufferWidth, cRcBBufferHeight, GFX_PF_R8, (GfxImage **)_RBX - 5, outPlane - 1);
    v22 = cinematicGlob.binkBuffers.cRcBBufferHeight;
    v23 = cinematicGlob.binkBuffers.cRcBBufferWidth;
    if ( v14 >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1203, ASSERT_TYPE_ASSERT, "(frameSet < 3)", (const char *)&queryFormat, "frameSet < 3") )
      __debugbreak();
    R_Cinematic_MakeBinkTexture((R_ImageProgID)(v21 + 42), v23, v22, GFX_PF_R8, (GfxImage **)_RBX - 4, outPlane);
    if ( outPlane[1].Allocate )
    {
      *_RBX = 1;
      v24 = cinematicGlob.binkBuffers.YABufferHeight;
      v25 = cinematicGlob.binkBuffers.YABufferWidth;
      if ( v14 >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1203, ASSERT_TYPE_ASSERT, "(frameSet < 3)", (const char *)&queryFormat, "frameSet < 3") )
        __debugbreak();
      R_Cinematic_MakeBinkTexture((R_ImageProgID)(v21 + 43), v25, v24, GFX_PF_R8, (GfxImage **)_RBX - 2, outPlane + 1);
    }
    if ( outPlane[2].Allocate )
    {
      _RBX[1] = 1;
      v26 = cinematicGlob.binkBuffers.YABufferHeight;
      v27 = cinematicGlob.binkBuffers.YABufferWidth;
      if ( v14 >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1203, ASSERT_TYPE_ASSERT, "(frameSet < 3)", (const char *)&queryFormat, "frameSet < 3") )
        __debugbreak();
      R_Cinematic_MakeBinkTexture((R_ImageProgID)(v21 + 44), v27, v26, GFX_PF_R8, (GfxImage **)_RBX - 1, outPlane + 2);
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm1, xmm6, xmm0
      vmovss  dword ptr [rbx+4], xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm1, xmm7, xmm0
      vmovss  dword ptr [rbx+8], xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm1, xmm8, xmm0
      vmovss  dword ptr [rbx+0Ch], xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm1, xmm9, xmm0
      vmovss  dword ptr [rbx+10h], xmm1
    }
    R_Cinematic_SetImageColorSpace((CinematicImage *)(_RBX - 48), cinematicGlob.bink);
    ++v14;
    _RBX += 136;
    outPlane += 5;
  }
  while ( v14 != 3 );
  __asm { vmovaps xmm7, [rsp+0B8h+var_48] }
  _R11 = &v45;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
R_Cinematic_InitBinkVolumes
==============
*/

void __fastcall R_Cinematic_InitBinkVolumes(BINK *bink, const unsigned int *TrackIDsToPlay, double volumeScale)
{
  unsigned int v8; 
  char *Error; 
  unsigned int v11; 
  char *v12; 
  unsigned int v13; 
  char *v14; 
  unsigned int v15; 
  char *v16; 
  unsigned int v17; 
  char *v18; 
  unsigned int spks; 
  int v22; 
  int volumes; 
  int v24; 

  __asm
  {
    vmovaps [rsp+68h+var_28], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !TrackIDsToPlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2525, ASSERT_TYPE_ASSERT, "(TrackIDsToPlay != 0)", (const char *)&queryFormat, "TrackIDsToPlay != NULL") )
    __debugbreak();
  __asm { vmulss  xmm0, xmm6, cs:__real@47000000 }
  v8 = *TrackIDsToPlay;
  v22 = 1;
  __asm { vcvttss2si rax, xmm0 }
  if ( (int)_RAX > 0x8000 )
    LODWORD(_RAX) = 0x8000;
  spks = 0;
  if ( (int)_RAX < 0 )
    LODWORD(_RAX) = 0;
  volumes = _RAX;
  v24 = _RAX;
  j_BinkSetSpeakerVolumes(bink, v8, &spks, &volumes, 2u);
  Error = j_BinkGetError();
  if ( Error && *Error && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1051, ASSERT_TYPE_ASSERT, "(!binkError || binkError[0] == '\\0')", "%s\n\tBinkGetError(): \"%s\"", "!binkError || binkError[0] == '\\0'", Error) )
    __debugbreak();
  v11 = TrackIDsToPlay[1];
  spks = 2;
  j_BinkSetSpeakerVolumes(bink, v11, &spks, &volumes, 1u);
  v12 = j_BinkGetError();
  if ( v12 && *v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1051, ASSERT_TYPE_ASSERT, "(!binkError || binkError[0] == '\\0')", "%s\n\tBinkGetError(): \"%s\"", "!binkError || binkError[0] == '\\0'", v12) )
    __debugbreak();
  v13 = TrackIDsToPlay[2];
  spks = 3;
  j_BinkSetSpeakerVolumes(bink, v13, &spks, &volumes, 1u);
  v14 = j_BinkGetError();
  if ( v14 && *v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1051, ASSERT_TYPE_ASSERT, "(!binkError || binkError[0] == '\\0')", "%s\n\tBinkGetError(): \"%s\"", "!binkError || binkError[0] == '\\0'", v14) )
    __debugbreak();
  v15 = TrackIDsToPlay[3];
  spks = 4;
  v22 = 5;
  j_BinkSetSpeakerVolumes(bink, v15, &spks, &volumes, 2u);
  v16 = j_BinkGetError();
  if ( v16 && *v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1051, ASSERT_TYPE_ASSERT, "(!binkError || binkError[0] == '\\0')", "%s\n\tBinkGetError(): \"%s\"", "!binkError || binkError[0] == '\\0'", v16) )
    __debugbreak();
  v17 = TrackIDsToPlay[4];
  spks = 6;
  v22 = 7;
  j_BinkSetSpeakerVolumes(bink, v17, &spks, &volumes, 2u);
  v18 = j_BinkGetError();
  if ( v18 && *v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1051, ASSERT_TYPE_ASSERT, "(!binkError || binkError[0] == '\\0')", "%s\n\tBinkGetError(): \"%s\"", "!binkError || binkError[0] == '\\0'", v18) )
    __debugbreak();
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
R_Cinematic_IsCinematicResource
==============
*/
char R_Cinematic_IsCinematicResource(const void *resourceAddress)
{
  int v1; 
  GfxImage **i; 
  __int64 v3; 
  __int64 v4; 
  GfxImage *v5; 
  GfxImage *v6; 
  GfxImage *v7; 

  v1 = 0;
  if ( !cinematicGlob.binkBuffers.TotalFrames )
    return 0;
  for ( i = &cinematicGlob.images[0].imageCb; ; i += 17 )
  {
    v3 = (__int64)*(i - 2);
    if ( v3 )
    {
      if ( *(const void **)(v3 + 224) == resourceAddress )
        break;
    }
    v4 = (__int64)*(i - 1);
    if ( v4 )
    {
      if ( *(const void **)(v4 + 224) == resourceAddress )
        break;
    }
    if ( *i && (*i)->pixels.residentData == resourceAddress )
      break;
    v5 = i[1];
    if ( v5 )
    {
      if ( v5->pixels.residentData == resourceAddress )
        break;
    }
    v6 = i[2];
    if ( v6 )
    {
      if ( v6->pixels.residentData == resourceAddress )
        break;
    }
    v7 = i[3];
    if ( v7 )
    {
      if ( v7->pixels.residentData == resourceAddress )
        break;
    }
    if ( ++v1 == cinematicGlob.binkBuffers.TotalFrames )
      return 0;
  }
  return 1;
}

/*
==============
R_Cinematic_IsFinished
==============
*/
bool R_Cinematic_IsFinished()
{
  bool result; 

  result = cinematicGlob.cinematicFinished;
  if ( cinematicGlob.cinematicFinished )
    return cinematicGlob.lastFinishedId != cinematicGlob.finishedId;
  return result;
}

/*
==============
R_Cinematic_IsHeld
==============
*/
_BOOL8 R_Cinematic_IsHeld()
{
  return cinematicGlob.cinematicHeld;
}

/*
==============
R_Cinematic_IsLoadFiller
==============
*/
__int64 R_Cinematic_IsLoadFiller()
{
  __int64 v0; 
  __int64 v1; 
  int v2; 
  __int64 v3; 
  int v4; 
  int v5; 
  int v6; 
  unsigned __int64 v8; 
  int v9; 
  bool v10; 

  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_STATUS);
  v0 = 0x7FFFFFFFi64;
  v1 = 0i64;
  while ( 1 )
  {
    v2 = (unsigned __int8)cinematicGlob.status.name[v1];
    v3 = v0;
    v4 = (unsigned __int8)aFillerLoad[v1++];
    --v0;
    if ( !v3 )
    {
LABEL_10:
      Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_STATUS);
      return 1i64;
    }
    if ( v2 != v4 )
    {
      v5 = v2 + 32;
      if ( (unsigned int)(v2 - 65) > 0x19 )
        v5 = v2;
      v2 = v5;
      v6 = v4 + 32;
      if ( (unsigned int)(v4 - 65) > 0x19 )
        v6 = v4;
      if ( v2 != v6 )
        break;
    }
    if ( !v2 )
      goto LABEL_10;
  }
  v8 = -1i64;
  do
    ++v8;
  while ( cinematicGlob.status.name[v8] );
  v9 = truncate_cast<int,unsigned __int64>(v8) - 7;
  if ( v9 > 0 )
  {
    v10 = I_stricmp(&cinematicGlob.status.name[v9], "_filler") == 0;
    Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_STATUS);
    return v10;
  }
  else
  {
    Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_STATUS);
    return 0i64;
  }
}

/*
==============
R_Cinematic_IsLoaded
==============
*/
bool R_Cinematic_IsLoaded()
{
  return cinematicGlob.bink != NULL;
}

/*
==============
R_Cinematic_IsLoadingScreen
==============
*/
bool R_Cinematic_IsLoadingScreen()
{
  return cinematicGlob.bink && strstr_0(cinematicGlob.target[0].name, "_load");
}

/*
==============
R_Cinematic_IsPending
==============
*/
_BOOL8 R_Cinematic_IsPending()
{
  return cinematicGlob.cinematicPending;
}

/*
==============
R_Cinematic_IsStarted
==============
*/
bool R_Cinematic_IsStarted()
{
  return (!cinematicGlob.cinematicFinished || cinematicGlob.lastFinishedId == cinematicGlob.finishedId) && cinematicGlob.status.name[0];
}

/*
==============
R_Cinematic_IsStartedOrPendingStart
==============
*/
bool R_Cinematic_IsStartedOrPendingStart()
{
  return (!cinematicGlob.cinematicFinished || cinematicGlob.lastFinishedId == cinematicGlob.finishedId) && cinematicGlob.status.name[0] || cinematicGlob.cinematicPending && (!cinematicGlob.cinematicFinished || cinematicGlob.lastFinishedId == cinematicGlob.finishedId) || cinematicGlob.server.name[0];
}

/*
==============
R_Cinematic_Load
==============
*/
void R_Cinematic_Load(SaveGame *save, const int serverTime)
{
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 5136, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  SaveMemory_LoadRead(&cinematicSaveFromLoad, 272, save);
  Com_Printf(8, "R_Cinematic_Load: Loading saved cinematic %s a %d server time\n", cinematicSaveFromLoad.name, (unsigned int)serverTime);
  if ( SLOBYTE(cinematicSaveFromLoad.playbackFlags) < 0 )
  {
    Com_Printf(8, "R_Cinematic_Load: Disabling filler and enabling fast seek\n");
    cinematicSaveFromLoad.playbackFlags = cinematicSaveFromLoad.playbackFlags & 0xFFFFF67F | 0x100;
  }
  cinematicSaveFromLoad.serverTimeAtLoad = serverTime;
}

/*
==============
R_Cinematic_MakeBinkTexture
==============
*/
void R_Cinematic_MakeBinkTexture(R_ImageProgID imageProgId, unsigned int width, unsigned int height, GfxPixelFormat format, GfxImage **outImage, BINKPLANE *outPlane)
{
  GfxImage *v11; 
  unsigned int PitchBytes; 
  __m256i v13; 
  __m256i v14; 
  Image_SetupParams params; 
  XG_RESOURCE_LAYOUT layout; 

  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+1808h+var_17B8+8], xmm0
  }
  v13.m256i_i64[0] = __PAIR64__(height, width);
  v14.m256i_i64[0] = 0i64;
  v13.m256i_i32[6] = format;
  v13.m256i_i32[2] = 1;
  *(__int64 *)((char *)&v13.m256i_i64[1] + 4) = 1i64;
  v14.m256i_i32[6] = -1;
  __asm { vmovups ymm1, [rsp+1808h+var_17B8] }
  v13.m256i_i32[5] = 1027;
  __asm
  {
    vmovups ymm0, [rsp+1808h+var_17D8]
    vmovups ymmword ptr [rsp+1808h+params.width], ymm0
    vmovups ymmword ptr [rsp+1808h+params.customAllocFunc], ymm1
  }
  R_Cinematic_GetBinkTextureLayout(&params, CACHED_RESOURCE_LAYOUT_NORMAL, &layout);
  if ( layout.Plane[0].MipLayout[0].TileMode != XG_TILE_MODE_LINEAR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1287, ASSERT_TYPE_ASSERT, "(layout.Plane[0].MipLayout[0].TileMode == XG_TILE_MODE_LINEAR)", (const char *)&queryFormat, "layout.Plane[0].MipLayout[0].TileMode == XG_TILE_MODE_LINEAR") )
    __debugbreak();
  v11 = Image_AllocProg(imageProgId, IMG_CATEGORY_TEMP, TS_COLOR_MAP);
  params.customAllocFunc = lambda_4847be146dca84e0303f37f25b15e766_::_lambda_invoker_cdecl_;
  params.customLayout = &layout;
  Image_Setup(v11, &params);
  *outImage = v11;
  PitchBytes = layout.Plane[0].MipLayout[0].PitchBytes;
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_db.h", 534, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (v11->flags & 0x40) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_db.h", 536, ASSERT_TYPE_ASSERT, "(!R_IsStreamedImage( image ))", (const char *)&queryFormat, "!R_IsStreamedImage( image )") )
    __debugbreak();
  outPlane->Buffer = v11->pixels.residentData;
  outPlane->BufferPitch = PitchBytes;
}

/*
==============
R_Cinematic_PendingSyncFrame
==============
*/
_BOOL8 R_Cinematic_PendingSyncFrame()
{
  return cinematicGlob.target[0].changed;
}

/*
==============
R_Cinematic_PlayBinkFillerAfterFinish
==============
*/
void R_Cinematic_PlayBinkFillerAfterFinish(const bool playFiller)
{
  if ( playFiller )
    cinematicGlob.target[2].playbackFlags |= 0x80u;
  else
    cinematicGlob.target[2].playbackFlags &= ~0x80u;
}

/*
==============
R_Cinematic_PlayFromSave
==============
*/
bool R_Cinematic_PlayFromSave()
{
  unsigned int playbackFlags; 
  CinematicEnum pauseState; 
  unsigned int timeInMsec; 
  bool result; 

  if ( !cinematicSaveFromLoad.name[0] )
    return 0;
  playbackFlags = cinematicSaveFromLoad.playbackFlags;
  pauseState = cinematicSaveFromLoad.pauseState;
  timeInMsec = cinematicSaveFromLoad.timeInMsec;
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_SERVER);
  Core_strcpy(cinematicGlob.server.name, 0x100ui64, cinematicSaveFromLoad.name);
  cinematicGlob.server.playbackFlags = playbackFlags;
  cinematicGlob.server.startTimeInMsec = timeInMsec;
  cinematicGlob.server.pauseState = pauseState;
  Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_SERVER);
  result = 1;
  cinematicSaveFromLoad.name[0] = 0;
  return result;
}

/*
==============
R_Cinematic_PlayLocal_Encrypted_f
==============
*/
void R_Cinematic_PlayLocal_Encrypted_f()
{
  unsigned int v0; 
  int v1; 
  int v2; 
  const char *v3; 
  const char *v4; 
  unsigned __int64 keyByte16; 
  unsigned __int64 keyByte8; 
  unsigned __int64 keyByte0; 

  v0 = 0;
  v1 = 0;
  keyByte0 = 0i64;
  keyByte8 = 0i64;
  keyByte16 = 0i64;
  v2 = Cmd_Argc();
  if ( v2 != 2 )
  {
    if ( v2 != 3 )
    {
      if ( v2 != 4 )
      {
        v3 = Cmd_Argv(0);
        Com_Printf(0, "USAGE: %s <movieName> [<flagsAsInteger> [<startOffsetInMilliseconds>]]\n", v3);
        return;
      }
      v0 = 1000 * Cmd_ArgInt(3);
    }
    v1 = Cmd_ArgInt(2);
  }
  v4 = Cmd_Argv(1);
  BinkKey_ExtractKeyBytes(v4, &keyByte0, &keyByte8, &keyByte16);
  R_Cinematic_StopPlayback(0);
  BinkCrypt_SetKeyBytes(keyByte0, keyByte8, keyByte16, &cinematicGlob.decryptFile);
  BinkCrypt_SetIVBytes(v4, &cinematicGlob.decryptFile);
  RB_Cinematic_StartPlayback_Internal(v4, v1 | 0x8000, v0, 0, CINEMATIC_INVALID);
}

/*
==============
R_Cinematic_PlayLocal_f
==============
*/
void R_Cinematic_PlayLocal_f()
{
  unsigned int v0; 
  unsigned int v1; 
  int v2; 
  const char *v3; 
  const char *v4; 

  v0 = 0;
  v1 = 0;
  v2 = Cmd_Argc();
  if ( v2 != 2 )
  {
    if ( v2 != 3 )
    {
      if ( v2 != 4 )
      {
        v3 = Cmd_Argv(0);
        Com_Printf(0, "USAGE: %s <movieName> [<flagsAsInteger> [<startOffsetInMilliseconds>]]\n", v3);
        return;
      }
      v1 = 1000 * Cmd_ArgInt(3);
    }
    v0 = Cmd_ArgInt(2);
  }
  v4 = Cmd_Argv(1);
  R_Cinematic_StopPlayback(0);
  RB_Cinematic_StartPlayback_Internal(v4, v0, v1, 0, CINEMATIC_INVALID);
}

/*
==============
R_Cinematic_Preload
==============
*/
__int64 R_Cinematic_Preload(const char *name)
{
  int v2; 
  int v3; 
  __int64 v4; 
  char *v5; 
  __int64 v6; 
  const char *v7; 
  __int64 v8; 
  char v9; 
  char v10; 
  unsigned __int8 v12; 
  volatile int *p_initialRequestFinished; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  Sys_Folder *v17; 
  __int64 v18; 
  volatile int *v19; 
  int v20; 
  __int64 v21; 
  bool *p_initialRequestStarted; 
  int v23; 
  char dest[264]; 

  if ( (!name || !*name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 4096, ASSERT_TYPE_ASSERT, "(name && name[0] != '\\0')", (const char *)&queryFormat, "name && name[0] != '\\0'") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_PRELOAD);
  v2 = 0;
  v3 = -1;
  v4 = 0i64;
  v5 = cinematicGlob.preloadedHandles[0].name;
  do
  {
    v6 = 0x7FFFFFFFi64;
    v7 = name;
    v8 = 16552i64 * v2;
    if ( (CinematicGlob *)((char *)&cinematicGlob + v8) == (CinematicGlob *)-61312i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    while ( 1 )
    {
      v9 = cinematicGlob.preloadedHandles[0].name[v8 - (_QWORD)name + (_QWORD)v7];
      v10 = *v7++;
      if ( !v6-- )
      {
LABEL_15:
        v12 = 0;
        p_initialRequestFinished = &cinematicGlob.preloadedHandles[v4].data[0].initialRequestFinished;
        v14 = 2i64;
        do
        {
          v15 = *((_DWORD *)p_initialRequestFinished - 4);
          if ( v15 != -16777217 )
          {
            if ( FileStream_FileIsOpen((FileStreamFileID)v15) )
            {
              if ( !FileStream_FileIsError((FileStreamFileID)*((_DWORD *)p_initialRequestFinished - 4)) )
              {
                if ( ((unsigned __int8)p_initialRequestFinished & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)p_initialRequestFinished) )
                  __debugbreak();
                if ( !*p_initialRequestFinished )
                  v12 = 1;
              }
            }
            else
            {
              v12 = 1;
            }
          }
          p_initialRequestFinished += 2053;
          --v14;
        }
        while ( v14 );
        goto LABEL_45;
      }
      if ( v9 != v10 )
        break;
      if ( !v9 )
        goto LABEL_15;
    }
    if ( !*v5 && v3 == -1 )
      v3 = v2;
    ++v2;
    ++v4;
    v5 += 16552;
  }
  while ( v2 < 16 );
  if ( v3 == -1 )
  {
    Com_PrintError(8, "Too many cinematic preloads at once, not preloading '%s'\n", name);
    v12 = 0;
  }
  else
  {
    Com_Printf(8, "Preloading '%s' file open\n", name);
    Com_sprintf(dest, 0x100ui64, "%s.bik", name);
    v16 = v3;
    v17 = PRELOADED_FILE_LOCATIONS;
    v18 = 2i64;
    v19 = &cinematicGlob.preloadedHandles[v16].data[0].initialRequestFinished;
    do
    {
      if ( *((_DWORD *)v19 - 4) != -16777217 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 4150, ASSERT_TYPE_ASSERT, "(data.fileStream == FileStreamFileID::INVALID)", (const char *)&queryFormat, "data.fileStream == FileStreamFileID::INVALID") )
        __debugbreak();
      LOBYTE(v20) = FileStream_OpenFile(*v17, dest, 8);
      *((_DWORD *)v19 - 4) = v20;
      *((_BYTE *)v19 - 4) = 0;
      *v19 = 0;
      *((_DWORD *)v19 - 2) = -1;
      v19 += 2053;
      ++v17;
      --v18;
    }
    while ( v18 );
    Core_strcpy(cinematicGlob.preloadedHandles[v16].name, 0x80ui64, name);
    v21 = 2i64;
    p_initialRequestStarted = &cinematicGlob.preloadedHandles[v16].data[0].initialRequestStarted;
    do
    {
      if ( !*p_initialRequestStarted )
      {
        v23 = *((_DWORD *)p_initialRequestStarted - 3);
        if ( v23 != -16777217 && !FileStream_FileIsError((FileStreamFileID)v23) && FileStream_AddRequest((FileStreamFileID)*((_DWORD *)p_initialRequestStarted - 3), 0i64, 0x2000i64, p_initialRequestStarted + 8, 0, (FileStreamPriority)2, R_Cinematic_PreloadFileCallback, p_initialRequestStarted - 12, (FileStreamRequestID *)p_initialRequestStarted - 4, FILE_STREAM_TRACK_BINK) )
          *p_initialRequestStarted = 1;
      }
      p_initialRequestStarted += 8212;
      --v21;
    }
    while ( v21 );
    v12 = 1;
  }
LABEL_45:
  Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_PRELOAD);
  return v12;
}

/*
==============
R_Cinematic_PreloadFileCallback
==============
*/
void R_Cinematic_PreloadFileCallback(int id, FileStreamStatus result, __int64 numBytesRead, void *user)
{
  if ( *((_DWORD *)user + 2) != id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 4070, ASSERT_TYPE_ASSERT, "(data->initialRequest == id)", (const char *)&queryFormat, "data->initialRequest == id") )
    __debugbreak();
  if ( numBytesRead > 0x2000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 4071, ASSERT_TYPE_ASSERT, "(numBytesRead <= MAX_PRELOAD_INITIAL_BUFFER)", (const char *)&queryFormat, "numBytesRead <= MAX_PRELOAD_INITIAL_BUFFER") )
    __debugbreak();
  if ( (numBytesRead < 0 || (unsigned __int64)numBytesRead > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)numBytesRead, "signed", numBytesRead) )
    __debugbreak();
  *((_DWORD *)user + 1) = numBytesRead;
  if ( (((_BYTE)user + 16) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 150, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (char *)user + 16) )
    __debugbreak();
  _InterlockedExchange((volatile __int32 *)user + 4, 1);
}

/*
==============
R_Cinematic_ReleaseImages
==============
*/
void R_Cinematic_ReleaseImages()
{
  GfxImage **p_imageCb; 
  __int64 v1; 
  GfxImage *v2; 
  GfxImage *v3; 
  GfxImage *v4; 
  GfxImage *v5; 
  GfxImage *v6; 

  p_imageCb = &cinematicGlob.images[0].imageCb;
  v1 = 3i64;
  do
  {
    v2 = *(p_imageCb - 2);
    if ( v2 )
    {
      Image_Release(v2);
      *(p_imageCb - 2) = NULL;
    }
    v3 = *(p_imageCb - 1);
    if ( v3 )
    {
      Image_Release(v3);
      *(p_imageCb - 1) = NULL;
    }
    if ( *p_imageCb )
    {
      Image_Release(*p_imageCb);
      *p_imageCb = NULL;
    }
    v4 = p_imageCb[1];
    if ( v4 )
    {
      Image_Release(v4);
      p_imageCb[1] = NULL;
    }
    v5 = p_imageCb[2];
    if ( v5 )
    {
      Image_Release(v5);
      p_imageCb[2] = NULL;
    }
    v6 = p_imageCb[3];
    if ( v6 )
    {
      Image_Release(v6);
      p_imageCb[3] = NULL;
    }
    *((_WORD *)p_imageCb + 16) = 0;
    p_imageCb += 17;
    --v1;
  }
  while ( v1 );
}

/*
==============
R_Cinematic_RelinquishIO
==============
*/
char R_Cinematic_RelinquishIO()
{
  const char *Error; 

  if ( !cinematicGlob.hasFileIO && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2186, ASSERT_TYPE_ASSERT, "(cinematicGlob.hasFileIO)", (const char *)&queryFormat, "cinematicGlob.hasFileIO") )
    __debugbreak();
  if ( !cinematicGlob.bink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2187, ASSERT_TYPE_ASSERT, "(cinematicGlob.bink)", (const char *)&queryFormat, "cinematicGlob.bink") )
    __debugbreak();
  j_BinkControlBackgroundIO(cinematicGlob.bink, 1u);
  Error = j_BinkGetError();
  if ( Error )
  {
    if ( *Error )
    {
      LOBYTE(Error) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1051, ASSERT_TYPE_ASSERT, "(!binkError || binkError[0] == '\\0')", "%s\n\tBinkGetError(): \"%s\"", "!binkError || binkError[0] == '\\0'", Error);
      if ( (_BYTE)Error )
        __debugbreak();
    }
  }
  cinematicGlob.hasFileIO = 0;
  return (char)Error;
}

/*
==============
R_Cinematic_ResetFrameImage
==============
*/
void R_Cinematic_ResetFrameImage(CinematicImage *frameImage)
{
  GfxImage *whiteImage; 

  if ( !frameImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2080, ASSERT_TYPE_ASSERT, "(frameImage)", (const char *)&queryFormat, "frameImage") )
    __debugbreak();
  if ( !com_cinematicEndInWhite && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2081, ASSERT_TYPE_ASSERT, "(com_cinematicEndInWhite)", (const char *)&queryFormat, "com_cinematicEndInWhite") )
    __debugbreak();
  if ( !rgp.whiteImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2082, ASSERT_TYPE_ASSERT, "(rgp.whiteImage)", (const char *)&queryFormat, "rgp.whiteImage") )
    __debugbreak();
  if ( !rgp.blackImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2083, ASSERT_TYPE_ASSERT, "(rgp.blackImage)", (const char *)&queryFormat, "rgp.blackImage") )
    __debugbreak();
  if ( !rgp.grayImage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2084, ASSERT_TYPE_ASSERT, "(rgp.grayImage)", (const char *)&queryFormat, "rgp.grayImage") )
    __debugbreak();
  if ( com_cinematicEndInWhite->current.enabled )
  {
    frameImage->imageY = rgp.whiteImage;
    whiteImage = rgp.whiteImage;
  }
  else
  {
    frameImage->imageY = rgp.blackImage;
    whiteImage = rgp.blackImage;
  }
  frameImage->imageA = whiteImage;
  frameImage->imageCbCr = rgp.grayImage;
  frameImage->imageCr = rgp.grayImage;
  frameImage->imageCb = rgp.grayImage;
  frameImage->imageH = rgp.blackImage;
  *(_WORD *)&frameImage->hasAlpha = 0;
  frameImage->imageUVScaleY.v[0] = 1.0;
  frameImage->imageUVScaleY.v[1] = 1.0;
  frameImage->imageUVScaleC.v[0] = 1.0;
  frameImage->imageUVScaleC.v[1] = 1.0;
}

/*
==============
R_Cinematic_Save
==============
*/
void R_Cinematic_Save(MemoryFile *memFile, const int serverTime)
{
  CinematicGlobSave *p_p; 
  char p; 
  __int64 v6; 
  int v7; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 5102, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( (cinematicSaveUpdate.playbackFlags & 0x2000) != 0 )
  {
    p = 0;
    v6 = 0i64;
    p_p = (CinematicGlobSave *)&p;
    v7 = -1;
LABEL_6:
    MemFile_WriteData(memFile, 0x110ui64, p_p);
    return;
  }
  if ( cinematicSaveFromLoad.serverTimeAtLoad == serverTime )
  {
    p_p = &cinematicSaveFromLoad;
    goto LABEL_6;
  }
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_SAVE);
  MemFile_WriteData(memFile, 0x110ui64, &cinematicSaveUpdate);
  Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_SAVE);
}

/*
==============
R_Cinematic_SeizeIO
==============
*/
char R_Cinematic_SeizeIO()
{
  const char *Error; 

  if ( cinematicGlob.hasFileIO && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2175, ASSERT_TYPE_ASSERT, "(!cinematicGlob.hasFileIO)", (const char *)&queryFormat, "!cinematicGlob.hasFileIO") )
    __debugbreak();
  if ( !cinematicGlob.bink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2176, ASSERT_TYPE_ASSERT, "(cinematicGlob.bink)", (const char *)&queryFormat, "cinematicGlob.bink") )
    __debugbreak();
  j_BinkControlBackgroundIO(cinematicGlob.bink, 2u);
  Error = j_BinkGetError();
  if ( Error )
  {
    if ( *Error )
    {
      LOBYTE(Error) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1051, ASSERT_TYPE_ASSERT, "(!binkError || binkError[0] == '\\0')", "%s\n\tBinkGetError(): \"%s\"", "!binkError || binkError[0] == '\\0'", Error);
      if ( (_BYTE)Error )
        __debugbreak();
    }
  }
  cinematicGlob.hasFileIO = 1;
  return (char)Error;
}

/*
==============
R_Cinematic_SetImageColorSpace
==============
*/

void __fastcall R_Cinematic_SetImageColorSpace(CinematicImage *bufferImage, BINK *bink, __int64 a3, double _XMM3_8)
{
  float v10; 
  float v18; 
  float v22; 

  _ER10 = 0;
  __asm { vxorps  xmm5, xmm5, xmm5 }
  if ( bufferImage->hasHDR )
  {
    bufferImage->colorSpace.coeffR.v[0] = bink->ColorSpace[0];
    *(_QWORD *)&bufferImage->colorSpace.coeffR.xyz.y = 1065353216i64;
    bufferImage->colorSpace.coeffR.v[3] = 0.0;
    __asm
    {
      vmovss  xmm2, dword ptr [rdx+70h]
      vmovss  xmm1, dword ptr [rdx+6Ch]
      vmovss  xmm0, dword ptr [rdx+68h]
    }
    v10 = bink->ColorSpace[1];
    __asm
    {
      vmovss  dword ptr [rcx+58h], xmm0
      vmovss  dword ptr [rcx+5Ch], xmm1
      vmovss  dword ptr [rcx+60h], xmm2
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm2, xmm2, xmm2
    }
    bufferImage->colorSpace.coeffG.v[0] = v10;
    __asm { vxorps  xmm3, xmm3, xmm3 }
  }
  else
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rdx+80h]
      vmovss  xmm1, dword ptr [rdx+70h]
      vmovss  xmm0, dword ptr [rdx+60h]
    }
    v18 = bink->ColorSpace[12];
    __asm
    {
      vmovss  dword ptr [rcx+48h], xmm0
      vmovss  dword ptr [rcx+4Ch], xmm1
      vmovss  dword ptr [rcx+50h], xmm2
    }
    bufferImage->colorSpace.coeffR.v[0] = v18;
    __asm
    {
      vmovss  xmm3, dword ptr [rdx+84h]
      vmovss  xmm1, dword ptr [rdx+74h]
      vmovss  xmm0, dword ptr [rdx+64h]
    }
    v22 = bink->ColorSpace[13];
    __asm
    {
      vmovss  dword ptr [rcx+58h], xmm0
      vmovss  dword ptr [rcx+5Ch], xmm1
      vmovss  dword ptr [rcx+60h], xmm3
    }
    bufferImage->colorSpace.coeffG.v[0] = v22;
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+88h]
      vmovss  xmm1, dword ptr [rdx+78h]
      vmovss  xmm2, dword ptr [rdx+68h]
      vmovss  xmm3, dword ptr [rdx+98h]
    }
  }
  _RAX = &bufferImage->colorSpace.coeffB;
  __asm
  {
    vmovss  dword ptr [rax], xmm3
    vmovss  dword ptr [rax+4], xmm2
    vmovss  dword ptr [rax+8], xmm1
    vmovss  dword ptr [rax+0Ch], xmm0
    vmovss  xmm3, cs:__real@3f800000
  }
  LODWORD(_RAX) = bufferImage->hasHDR;
  __asm { vmovd   xmm0, eax }
  LODWORD(_RAX) = cinematicGlob.gpuDecoding;
  __asm
  {
    vmovd   xmm1, r10d
    vpcmpeqd xmm2, xmm0, xmm1
    vmovd   xmm0, eax
    vblendvps xmm4, xmm3, xmm5, xmm2
    vmovd   xmm1, r10d
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm5, xmm2
    vmovss  dword ptr [rcx+74h], xmm0
    vmovss  dword ptr [rcx+78h], xmm4
  }
  *(_QWORD *)&bufferImage->cinematicOptions.xyz.z = 0i64;
}

/*
==============
R_Cinematic_SetNextPlayback
==============
*/
void R_Cinematic_SetNextPlayback(const char *name, unsigned int playbackFlags, const unsigned int startTimeInMsec, const CinematicEnum pauseState)
{
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_SERVER);
  Core_strcpy(cinematicGlob.server.name, 0x100ui64, name);
  cinematicGlob.server.playbackFlags = playbackFlags;
  cinematicGlob.server.startTimeInMsec = startTimeInMsec;
  cinematicGlob.server.pauseState = pauseState;
  Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_SERVER);
}

/*
==============
R_Cinematic_SetPaused
==============
*/
void R_Cinematic_SetPaused(CinematicEnum paused, int pauseFlags)
{
  char v2; 
  char v3; 
  bool v5; 

  v2 = pauseFlags;
  v3 = pauseFlags & 1;
  if ( (unsigned int)paused > CINEMATIC_INGAME_PAUSED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 4332, ASSERT_TYPE_ASSERT, "( ( paused == CINEMATIC_INGAME_PAUSED || paused == CINEMATIC_PAUSED || paused == CINEMATIC_NOT_PAUSED ) )", "( paused ) = %i", paused) )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_PAUSE);
  v5 = v3 || cinematicGlob.targetPaused != CINEMATIC_INGAME_PAUSED;
  if ( ((v2 & 2) == 0 || paused || (cinematicGlob.server.playbackFlags & 0x10) == 0) && v5 )
  {
    cinematicGlob.targetPaused = paused;
    if ( (cinematicGlob.target[0].playbackFlags & 0x1000) != 0 || (cinematicGlob.targetMuted = 0, (v2 & 8) != 0) )
      cinematicGlob.targetMuted = 1;
    if ( (v2 & 4) != 0 && paused == CINEMATIC_NOT_PAUSED )
      cinematicGlob.server.playbackFlags &= ~0x10u;
  }
  Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_PAUSE);
}

/*
==============
R_Cinematic_SetRendererImagesToFrame
==============
*/
void R_Cinematic_SetRendererImagesToFrame(GfxCmdBufInput *cmdBufInput)
{
  GfxImage *imageY; 

  _RBX = cmdBufInput;
  if ( !cmdBufInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2035, ASSERT_TYPE_ASSERT, "(cmdBufInput)", (const char *)&queryFormat, "cmdBufInput") )
    __debugbreak();
  if ( !cinematicGlob.curCinematicImage.imageY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2058, ASSERT_TYPE_ASSERT, "(frameImage->imageY)", (const char *)&queryFormat, "frameImage->imageY") )
    __debugbreak();
  if ( !cinematicGlob.curCinematicImage.imageCr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2059, ASSERT_TYPE_ASSERT, "(frameImage->imageCr)", (const char *)&queryFormat, "frameImage->imageCr") )
    __debugbreak();
  if ( !cinematicGlob.curCinematicImage.imageCb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2060, ASSERT_TYPE_ASSERT, "(frameImage->imageCb)", (const char *)&queryFormat, "frameImage->imageCb") )
    __debugbreak();
  if ( !cinematicGlob.curCinematicImage.imageCbCr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2061, ASSERT_TYPE_ASSERT, "(frameImage->imageCbCr)", (const char *)&queryFormat, "frameImage->imageCbCr") )
    __debugbreak();
  if ( !cinematicGlob.curCinematicImage.imageA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2062, ASSERT_TYPE_ASSERT, "(frameImage->imageA)", (const char *)&queryFormat, "frameImage->imageA") )
    __debugbreak();
  imageY = cinematicGlob.curCinematicImage.imageY;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  _RBX->codeImages[13] = imageY;
  _RBX->codeImages[14] = cinematicGlob.curCinematicImage.imageCr;
  _RBX->codeImages[15] = cinematicGlob.curCinematicImage.imageCb;
  _RBX->codeImages[18] = cinematicGlob.curCinematicImage.imageCbCr;
  _RBX->codeImages[16] = cinematicGlob.curCinematicImage.imageA;
  _RBX->codeImages[17] = cinematicGlob.curCinematicImage.imageH;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:cinematicGlob.curCinematicImage.imageUVScaleY
    vmovups xmmword ptr [rbx+4D0h], xmm0
    vmovups xmm0, xmmword ptr cs:cinematicGlob.curCinematicImage.colorSpace.coeffR
    vmovups xmmword ptr [rbx+4E0h], xmm0
    vmovups xmm1, xmmword ptr cs:cinematicGlob.curCinematicImage.colorSpace.coeffG
    vmovups xmmword ptr [rbx+4F0h], xmm1
    vmovups xmm0, xmmword ptr cs:cinematicGlob.curCinematicImage.colorSpace.coeffB
    vmovups xmmword ptr [rbx+500h], xmm0
    vmovups xmm1, xmmword ptr cs:cinematicGlob.curCinematicImage.cinematicOptions
    vmovups xmmword ptr [rbx+510h], xmm1
  }
}

/*
==============
R_Cinematic_SetUseAlternativeAsyncCore
==============
*/
void R_Cinematic_SetUseAlternativeAsyncCore(const bool useAlternativeCores)
{
  cinematicGlob.useAlternativeAsyncCores = useAlternativeCores;
}

/*
==============
R_Cinematic_Shutdown
==============
*/
void R_Cinematic_Shutdown(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 3983, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( cinematicGlob.isInitialized )
  {
    R_Cinematic_ReleaseImages();
    if ( cinematicGlob.descriptorHeap )
    {
      cinematicGlob.descriptorHeap->m_pFunction->Release(cinematicGlob.descriptorHeap);
      cinematicGlob.descriptorHeap = NULL;
    }
    if ( cinematicGlob.masterHunk.m_userHunk )
    {
      CinematicHunk::Clear(&cinematicGlob.masterHunk);
      Mem_HunkUser_Destroy(cinematicGlob.masterHunk.m_userHunk);
      cinematicGlob.masterHunk.m_userHunk = NULL;
    }
    cinematicGlob.isInitialized = 0;
  }
}

/*
==============
R_Cinematic_StartEncryptedPlayback
==============
*/
void R_Cinematic_StartEncryptedPlayback(const char *name, unsigned int playbackFlags, unsigned int startOffsetMSec, const unsigned __int64 keyByte0, const unsigned __int64 keyByte8, const unsigned __int64 keyByte16)
{
  BinkCrypt_SetKeyBytes(keyByte0, keyByte8, keyByte16, &cinematicGlob.decryptFile);
  BinkCrypt_SetIVBytes(name, &cinematicGlob.decryptFile);
  RB_Cinematic_StartPlayback_Internal(name, playbackFlags | 0x8000, startOffsetMSec, 0, CINEMATIC_INVALID);
}

/*
==============
R_Cinematic_StartNextPlayback
==============
*/
char R_Cinematic_StartNextPlayback()
{
  if ( !cinematicGlob.server.name[0] )
    return 0;
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_SERVER);
  RB_Cinematic_StartPlayback_Internal(cinematicGlob.server.name, cinematicGlob.server.playbackFlags, cinematicGlob.server.startTimeInMsec, 0, (const CinematicEnum)cinematicGlob.server.pauseState);
  cinematicGlob.server.name[0] = 0;
  Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_SERVER);
  return 1;
}

/*
==============
R_Cinematic_StartPlayback
==============
*/
void R_Cinematic_StartPlayback(const char *name, unsigned int playbackFlags, unsigned int startOffsetMSec)
{
  RB_Cinematic_StartPlayback_Internal(name, playbackFlags, startOffsetMSec, 0, CINEMATIC_INVALID);
}

/*
==============
R_Cinematic_StopLocal_f
==============
*/
void R_Cinematic_StopLocal_f()
{
  R_Cinematic_StopPlayback(0);
}

/*
==============
R_Cinematic_StopPlayback
==============
*/
void R_Cinematic_StopPlayback(const bool muteAudio)
{
  BOOL v1; 

  v1 = muteAudio;
  Com_Printf(14, "R_Cinematic_StopPlayback\n");
  DB_StopSPHotLoadBink();
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_PAUSE);
  cinematicGlob.targetPaused = CINEMATIC_NOT_PAUSED;
  if ( (cinematicGlob.target[0].playbackFlags & 0x1000) != 0 || (cinematicGlob.targetMuted = 0, v1) )
    cinematicGlob.targetMuted = 1;
  Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_PAUSE);
  cinematicGlob.lastFinishedId = cinematicGlob.finishedId;
  cinematicGlob.cinematicFinished = 0;
  cinematicGlob.cinematicPending = 0;
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_TARGET_CHANGE_COMMAND);
  cinematicGlob.target[0].name[0] = 0;
  *(_QWORD *)&cinematicGlob.target[0].playbackFlags = 0i64;
  cinematicGlob.target[0].changed = 1;
  Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_TARGET_CHANGE_COMMAND);
}

/*
==============
R_Cinematic_StopPlayback_Now
==============
*/
__int64 R_Cinematic_StopPlayback_Now(bool isShuttingDown)
{
  __int64 v2; 
  const dvar_t *v3; 
  unsigned int flags; 
  StreamerMemLoan result; 

  if ( cinematicGlob.activeImageFrame != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2711, ASSERT_TYPE_ASSERT, "(cinematicGlob.activeImageFrame == CINEMATIC_INVALID_IMAGE_FRAME)", (const char *)&queryFormat, "cinematicGlob.activeImageFrame == CINEMATIC_INVALID_IMAGE_FRAME") )
    __debugbreak();
  if ( !cinematicGlob.status.name[0] )
    return 0i64;
  if ( !cinematicGlob.bink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2716, ASSERT_TYPE_ASSERT, "(cinematicGlob.bink)", (const char *)&queryFormat, "cinematicGlob.bink") )
    __debugbreak();
  if ( cinematicGlob.decodingFrame )
  {
    RB_Cinematic_FinishDecode();
    if ( cinematicGlob.decodingFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 2721, ASSERT_TYPE_ASSERT, "(!cinematicGlob.decodingFrame)", (const char *)&queryFormat, "!cinematicGlob.decodingFrame") )
      __debugbreak();
  }
  if ( cinematicGlob.hasFileIO )
    R_Cinematic_RelinquishIO();
  if ( cinematicGlob.binkTextures )
  {
    cinematicGlob.binkTextures->Free_textures(cinematicGlob.binkTextures);
    cinematicGlob.binkTextures = NULL;
    R_Cinematic_ReleaseImages();
    if ( !isShuttingDown )
    {
      PMem_Free(&result, "Cinematic", PMEM_STACK_CINEMATIC);
      StreamerMemLoan::~StreamerMemLoan(&result);
    }
  }
  if ( cinematicGlob.binkShaders )
  {
    cinematicGlob.binkShaders->Free_shaders(cinematicGlob.binkShaders);
    cinematicGlob.binkShaders = NULL;
  }
  FreeBinkResourceBuffers();
  cinematicGlob.gpuDecoding = 0;
  j_BinkClose(cinematicGlob.bink);
  v3 = DVARBOOL_killswitch_reset_cinematic_status_size;
  cinematicGlob.bink = NULL;
  if ( !DVARBOOL_killswitch_reset_cinematic_status_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_reset_cinematic_status_size") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v3->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v3->name) )
      __debugbreak();
  }
  if ( v3->current.enabled )
  {
    cinematicGlob.status.width = 0;
    cinematicGlob.status.height = 1;
  }
  cinematicGlob.additionalMemoryUsed = 0i64;
  memset_0(&cinematicGlob.playbackStats, 0, sizeof(cinematicGlob.playbackStats));
  v2 = 1i64;
  *(_QWORD *)&cinematicGlob.playbackStatsFramesDecoded = 0i64;
  return v2;
}

/*
==============
R_Cinematic_SuspendPlayback
==============
*/
void R_Cinematic_SuspendPlayback(void)
{
  __int64 v0; 
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 

  DB_StopSPHotLoadBink();
  if ( s_forceCinematicUpdateForSuspend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 4311, ASSERT_TYPE_ASSERT, "(!s_forceCinematicUpdateForSuspend)", (const char *)&queryFormat, "!s_forceCinematicUpdateForSuspend") )
    __debugbreak();
  s_forceCinematicUpdateForSuspend = 1;
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_UPDATE);
  if ( !s_cinematicUpdateLockThread )
    s_cinematicUpdateLockThread = Sys_GetCurrentThreadId();
  ++s_cinematicUpdateLockCount;
  if ( cinematicGlob.bink )
  {
    cinematicGlob.activeImageFrame = -1;
    R_Cinematic_StopPlayback_Now(1);
    Sys_EnterCriticalSection(CRITSECT_CINEMATIC_STATUS);
    cinematicGlob.status.name[0] = 0;
    *(_QWORD *)&cinematicGlob.status.timeInMsec = 0i64;
    Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_STATUS);
  }
  R_Cinematic_UnlockUpdate(v1, v0, v2, v3);
  if ( !s_forceCinematicUpdateForSuspend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 4323, ASSERT_TYPE_ASSERT, "(s_forceCinematicUpdateForSuspend)", (const char *)&queryFormat, "s_forceCinematicUpdateForSuspend") )
    __debugbreak();
  s_forceCinematicUpdateForSuspend = 0;
}

/*
==============
R_Cinematic_UnlockUpdate
==============
*/
void R_Cinematic_UnlockUpdate()
{
  int v0; 
  bool v1; 
  int v2; 
  threadId_t v3; 
  int v4; 

  if ( s_cinematicUpdateLockThread != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1073, ASSERT_TYPE_ASSERT, "(s_cinematicUpdateLockThread == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "s_cinematicUpdateLockThread == Sys_GetCurrentThreadId()") )
    __debugbreak();
  v0 = s_cinematicUpdateLockCount;
  if ( s_cinematicUpdateLockCount <= 0 )
  {
    v4 = s_cinematicUpdateLockCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1074, ASSERT_TYPE_ASSERT, "( s_cinematicUpdateLockCount ) > ( 0 )", "%s > %s\n\t%i, %i", "s_cinematicUpdateLockCount", "0", v4, 0i64) )
      __debugbreak();
    v0 = s_cinematicUpdateLockCount;
  }
  v2 = v0 - 1;
  v1 = v2 == 0;
  s_cinematicUpdateLockCount = v2;
  v3 = s_cinematicUpdateLockThread;
  if ( v1 )
    v3 = 0;
  s_cinematicUpdateLockThread = v3;
  Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_UPDATE);
}

/*
==============
R_Cinematic_UnsetNextPlayback
==============
*/
void R_Cinematic_UnsetNextPlayback(void)
{
  Sys_EnterCriticalSection(CRITSECT_CINEMATIC_SERVER);
  Core_strcpy(cinematicGlob.server.name, 0x100ui64, (const char *)&queryFormat.fmt + 3);
  cinematicGlob.server.pauseState = CINEMATIC_INVALID;
  *(_QWORD *)&cinematicGlob.server.playbackFlags = 0i64;
  Sys_LeaveCriticalSection(CRITSECT_CINEMATIC_SERVER);
}

/*
==============
CinematicFileHandle::Read
==============
*/
unsigned __int64 CinematicFileHandle::Read(CinematicFileHandle *this, void *const destBuffer, const unsigned __int64 size)
{
  unsigned __int64 m_seekPosition; 
  size_t v7; 
  unsigned __int64 v8; 
  size_t v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 

  if ( *(_DWORD *)this->m_fileID == -16777217 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 536, ASSERT_TYPE_ASSERT, "(m_fileID != FileStreamFileID::INVALID)", (const char *)&queryFormat, "m_fileID != FileStreamFileID::INVALID") )
    __debugbreak();
  if ( !destBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 541, ASSERT_TYPE_ASSERT, "(destBuffer)", (const char *)&queryFormat, "destBuffer") )
    __debugbreak();
  if ( !size || *(_DWORD *)this->m_fileID == -16777217 )
    return 0i64;
  m_seekPosition = this->m_seekPosition;
  v7 = size;
  if ( (m_seekPosition & 0xFFF) != 0 )
  {
    if ( !CinematicFileHandle::PerformPartialReadAtSeekPos(this) )
      return 0i64;
    if ( this->m_partialReadBufSeek > this->m_seekPosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 567, ASSERT_TYPE_ASSERT, "(m_partialReadBufSeek <= m_seekPosition)", (const char *)&queryFormat, "m_partialReadBufSeek <= m_seekPosition") )
      __debugbreak();
    v8 = this->m_seekPosition - this->m_partialReadBufSeek;
    if ( v8 >= 0x1000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 569, ASSERT_TYPE_ASSERT, "(offsetInPartialRead < 4096)", (const char *)&queryFormat, "offsetInPartialRead < FILE_READ_ALIGNMENT") )
      __debugbreak();
    v9 = 4096 - v8;
    if ( 4096 - v8 > size )
      v9 = size;
    memcpy_0(destBuffer, &this->m_partialReadBuf[v8], v9);
    this->m_seekPosition += v9;
    destBuffer = (char *)destBuffer + v9;
    m_seekPosition = this->m_seekPosition;
    v7 = size - v9;
  }
  v10 = v7 & 0xFFFFFFFFFFFFF000ui64;
  if ( (v7 & 0xFFFFFFFFFFFFF000ui64) != 0 )
  {
    if ( (m_seekPosition & 0xFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 588, ASSERT_TYPE_ASSERT, "(IsAligned( m_seekPosition, 4096 ))", (const char *)&queryFormat, "IsAligned( m_seekPosition, FILE_READ_ALIGNMENT )") )
      __debugbreak();
    if ( ((unsigned __int16)destBuffer & 0xFFF) != 0 )
    {
      while ( CinematicFileHandle::PerformPartialReadAtSeekPos(this) )
      {
        if ( this->m_partialReadBufSeek != this->m_seekPosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 600, ASSERT_TYPE_ASSERT, "(m_partialReadBufSeek == m_seekPosition)", (const char *)&queryFormat, "m_partialReadBufSeek == m_seekPosition") )
          __debugbreak();
        memcpy_0(destBuffer, this, 0x1000ui64);
        this->m_seekPosition += 4096i64;
        destBuffer = (char *)destBuffer + 4096;
        v7 -= 4096i64;
        v10 -= 4096i64;
        if ( !v10 )
          goto LABEL_33;
      }
      return 0i64;
    }
    v11 = CinematicFileHandle::AlignedRead(this, destBuffer, v7 & 0xFFFFFFFFFFFFF000ui64, this->m_seekPosition);
    if ( v11 != v10 )
      return 0i64;
    this->m_seekPosition += v11;
    destBuffer = (char *)destBuffer + v11;
    v7 -= v11;
  }
LABEL_33:
  if ( !v7 )
    return size;
  if ( v7 >= 0x1000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 629, ASSERT_TYPE_ASSERT, "(sizeLeft < 4096)", (const char *)&queryFormat, "sizeLeft < FILE_READ_ALIGNMENT") )
    __debugbreak();
  if ( (this->m_seekPosition & 0xFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 630, ASSERT_TYPE_ASSERT, "(IsAligned( m_seekPosition, 4096 ))", (const char *)&queryFormat, "IsAligned( m_seekPosition, FILE_READ_ALIGNMENT )") )
    __debugbreak();
  if ( CinematicFileHandle::PerformPartialReadAtSeekPos(this) )
  {
    memcpy_0(destBuffer, this, v7);
    this->m_seekPosition += v7;
    return size;
  }
  return 0i64;
}

/*
==============
BinkGPU_AllocateBinkSRVDescriptors
==============
*/
__int64 BinkGPU_AllocateBinkSRVDescriptors(void *user_ptr, unsigned int count, ID3D12DescriptorHeap **pDescHeap)
{
  if ( count > 0x60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1183, ASSERT_TYPE_ASSERT, "(count <= 96)", (const char *)&queryFormat, "count <= BINKTEXTURESD3D12_MAX_SRVS_PER_BINK") )
    __debugbreak();
  if ( cinematicGlob.descriptorBaseIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1184, ASSERT_TYPE_ASSERT, "(cinematicGlob.descriptorBaseIndex == 0)", (const char *)&queryFormat, "cinematicGlob.descriptorBaseIndex == 0") )
    __debugbreak();
  cinematicGlob.descriptorBaseIndex = count;
  *pDescHeap = cinematicGlob.descriptorHeap;
  return 0i64;
}

/*
==============
BinkGPU_CreateBuffer
==============
*/
ID3D12Resource *BinkGPU_CreateBuffer(D3D12_RESOURCE_DESC *desc, D3D12_HEAP_TYPE heap, D3D12_RESOURCE_STATES resourceState)
{
  unsigned __int64 AllocSizeFromDesc; 
  unsigned int v7; 
  unsigned int numBinkGfxBuffers; 
  unsigned __int64 v9; 
  ID3D12Resource **v10; 
  const void *v11; 
  ID3D12Resource *v13; 
  GfxBufferCreationContext v15; 

  AllocSizeFromDesc = R_DX12_GetAllocSizeFromDesc(desc);
  v7 = truncate_cast<unsigned int,unsigned __int64>(AllocSizeFromDesc);
  numBinkGfxBuffers = cinematicGlob.numBinkGfxBuffers;
  v9 = v7;
  if ( cinematicGlob.numBinkGfxBuffers >= 8 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1394, ASSERT_TYPE_ASSERT, "(unsigned)( cinematicGlob.numBinkGfxBuffers ) < (unsigned)( CinematicGlob::MAX_BINK_GFX_BUFFERS )", "cinematicGlob.numBinkGfxBuffers doesn't index CinematicGlob::MAX_BINK_GFX_BUFFERS\n\t%i not in [0, %i)", cinematicGlob.numBinkGfxBuffers, 8) )
      __debugbreak();
    numBinkGfxBuffers = cinematicGlob.numBinkGfxBuffers;
  }
  v10 = &cinematicGlob.binkGfxBuffers[numBinkGfxBuffers];
  cinematicGlob.additionalMemoryUsed += v9;
  v11 = PMem_Alloc(v9, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_CINEMATIC, "BinkGPU buffer");
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1400, ASSERT_TYPE_ASSERT, "(bufferData)", (const char *)&queryFormat, "bufferData") )
    __debugbreak();
  if ( ((unsigned __int8)v11 & 0x3F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1401, ASSERT_TYPE_ASSERT, "(IsAligned( bufferData, 64 ))", (const char *)&queryFormat, "IsAligned( bufferData, 64 )") )
    __debugbreak();
  v15.objectName = "BinkGPU buffer";
  v15.zoneName = (char *)&queryFormat.fmt + 3;
  __asm
  {
    vmovups xmm0, [rsp+78h+var_38]
    vmovdqa [rsp+78h+var_38], xmm0
  }
  R_DX12_CreateBuffer(desc, heap, resourceState, NULL, v11, v9, v10, &v15);
  ++cinematicGlob.numBinkGfxBuffers;
  v13 = *v10;
  if ( !*v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1414, ASSERT_TYPE_ASSERT, "(d3dbuffer)", (const char *)&queryFormat, "d3dbuffer") )
    __debugbreak();
  v13->m_pFunction->AddRef(v13);
  return v13;
}

/*
==============
BinkGPU_CreateTexture
==============
*/
ID3D12Resource *BinkGPU_CreateTexture(ID3D12Device *dev, D3D12_HEAP_TYPE heap, unsigned int width, unsigned int height, unsigned __int16 nmips, DXGI_FORMAT format, D3D12_RESOURCE_FLAGS flags, D3D12_RESOURCE_STATES states, unsigned int frameSet, unsigned int frameType)
{
  int v13; 
  CinematicImage *v14; 
  R_ImageProgID ImageProgID; 
  R_ImageProgID v18; 
  GfxImage *v20; 
  const GfxTexture *Resident; 
  __int64 v23; 
  __m256i v24; 
  __m256i v25; 
  Image_SetupParams params; 
  XG_RESOURCE_LAYOUT layout; 

  if ( format != DXGI_FORMAT_R8_TYPELESS && format != DXGI_FORMAT_R8G8_TYPELESS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1421, ASSERT_TYPE_ASSERT, "(format == DXGI_FORMAT_R8_TYPELESS || format == DXGI_FORMAT_R8G8_TYPELESS)", (const char *)&queryFormat, "format == DXGI_FORMAT_R8_TYPELESS || format == DXGI_FORMAT_R8G8_TYPELESS") )
    __debugbreak();
  v13 = 4;
  if ( format == DXGI_FORMAT_R8_TYPELESS )
    v13 = 1;
  if ( !frameType )
    cinematicGlob.binkBuffers.TotalFrames = frameSet + 1;
  if ( frameSet >= 3 )
  {
    LODWORD(v23) = frameSet;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1429, ASSERT_TYPE_ASSERT, "(unsigned)( frameSet ) < (unsigned)( CINEMATIC_IMAGES_REQUIRED )", "frameSet doesn't index CINEMATIC_IMAGES_REQUIRED\n\t%i not in [0, %i)", v23, 3) )
      __debugbreak();
  }
  v14 = &cinematicGlob.images[frameSet];
  if ( frameType )
  {
    if ( frameType == 1 )
    {
      ImageProgID = MakeImageProgID(IMAGE_PROG_CINEMATIC_CR_0, frameSet);
      v14 = (CinematicImage *)((char *)v14 + 24);
      cinematicGlob.binkBuffers.cRcBBufferWidth = width;
      cinematicGlob.binkBuffers.cRcBBufferHeight = height;
    }
    else if ( frameType == 2 )
    {
      ImageProgID = MakeImageProgID(IMAGE_PROG_CINEMATIC_A_0, frameSet);
      v14->hasAlpha = 1;
      v14 = (CinematicImage *)((char *)v14 + 32);
    }
    else
    {
      ImageProgID = MakeImageProgID(IMAGE_PROG_CINEMATIC_H_0, frameSet);
      v14->hasHDR = 1;
      v14 = (CinematicImage *)((char *)v14 + 40);
    }
  }
  else
  {
    ImageProgID = MakeImageProgID(IMAGE_PROG_CINEMATIC_Y_0, frameSet);
    cinematicGlob.binkBuffers.YABufferWidth = width;
    cinematicGlob.binkBuffers.YABufferHeight = height;
  }
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+1838h+var_17D8+8], xmm0
  }
  v24.m256i_i32[2] = 1;
  v25.m256i_i64[0] = 0i64;
  *(__int64 *)((char *)&v24.m256i_i64[1] + 4) = 1i64;
  v25.m256i_i32[6] = -1;
  __asm { vmovups ymm1, [rsp+1838h+var_17D8] }
  v24.m256i_i64[0] = __PAIR64__(height, width);
  v18 = ImageProgID;
  v24.m256i_i32[5] = -2139094013;
  v24.m256i_i32[6] = v13;
  __asm
  {
    vmovups ymm0, [rsp+1838h+var_17F8]
    vmovups ymmword ptr [rsp+1838h+params.width], ymm0
    vmovups ymmword ptr [rsp+1838h+params.customAllocFunc], ymm1
  }
  R_Cinematic_GetBinkTextureLayout(&params, CACHED_RESOURCE_LAYOUT_GPU, &layout);
  params.textureLayoutOverride = D3D12_TEXTURE_LAYOUT_UNKNOWN;
  params.customAllocFunc = lambda_b28c30cbff69041ce6b060b88601c770_::_lambda_invoker_cdecl_;
  params.customLayout = &layout;
  v20 = Image_AllocProg(v18, IMG_CATEGORY_TEMP, TS_COLOR_MAP);
  Image_Setup(v20, &params);
  v14->imageY = v20;
  Resident = R_Texture_GetResident(v20->textureId);
  if ( !Resident && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1479, ASSERT_TYPE_ASSERT, "(texture)", (const char *)&queryFormat, "texture") )
    __debugbreak();
  Resident->basemap->m_pFunction->AddRef(Resident->basemap);
  return Resident->basemap;
}

/*
==============
BinkGPU_FreeBinkSRVDescriptors
==============
*/
void BinkGPU_FreeBinkSRVDescriptors(void *user_ptr, int offset, unsigned int count)
{
  if ( cinematicGlob.descriptorBaseIndex != count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1194, ASSERT_TYPE_ASSERT, "(cinematicGlob.descriptorBaseIndex == static_cast<int32_t>( count ))", (const char *)&queryFormat, "cinematicGlob.descriptorBaseIndex == static_cast<int32_t>( count )") )
    __debugbreak();
  cinematicGlob.descriptorBaseIndex = 0;
}

/*
==============
R_Cinematic_SysIO_BinkClose
==============
*/
void R_Cinematic_SysIO_BinkClose(unsigned __int64 *outUserData)
{
  FileStreamFileID v2; 

  if ( !cinematicGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1010, ASSERT_TYPE_ASSERT, "(cinematicGlob.isInitialized)", (const char *)&queryFormat, "cinematicGlob.isInitialized") )
    __debugbreak();
  if ( *(_DWORD *)cinematicGlob.streamingFileHandle.m_fileID == -16777217 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1011, ASSERT_TYPE_ASSERT, "(cinematicGlob.streamingFileHandle.IsValid())", (const char *)&queryFormat, "cinematicGlob.streamingFileHandle.IsValid()") )
    __debugbreak();
  if ( !outUserData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1012, ASSERT_TYPE_ASSERT, "(outUserData)", (const char *)&queryFormat, "outUserData") )
    __debugbreak();
  if ( *outUserData != 3735932941 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 1013, ASSERT_TYPE_ASSERT, "(*outUserData == BINK_VALID_USERDATA)", (const char *)&queryFormat, "*outUserData == BINK_VALID_USERDATA") )
    __debugbreak();
  Sys_TryInitBinkIOThread();
  v2 = cinematicGlob.streamingFileHandle.m_fileID[0];
  if ( *(_DWORD *)cinematicGlob.streamingFileHandle.m_fileID != -16777217 )
    goto LABEL_17;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 486, ASSERT_TYPE_ASSERT, "(m_fileID != FileStreamFileID::INVALID)", (const char *)&queryFormat, "m_fileID != FileStreamFileID::INVALID") )
    __debugbreak();
  v2 = cinematicGlob.streamingFileHandle.m_fileID[0];
  if ( *(_DWORD *)cinematicGlob.streamingFileHandle.m_fileID != -16777217 )
  {
LABEL_17:
    FileStream_CloseFile(v2);
    *(_DWORD *)cinematicGlob.streamingFileHandle.m_fileID = -16777217;
    cinematicGlob.streamingFileHandle.m_seekPosition = 0i64;
    cinematicGlob.streamingFileHandle.m_partialReadBufValid = 0;
    cinematicGlob.streamingFileHandle.m_partialReadBufSeek = 0i64;
    cinematicGlob.streamingFileHandle.m_initialBufferSize = 0;
  }
  if ( cinematicGlob.decryptFile.encrypted )
  {
    BinkCrypt_Close(&cinematicGlob.decryptFile);
    cinematicGlob.decryptFile.encrypted = 0;
  }
}

/*
==============
R_Cinematic_SysIO_BinkOpen
==============
*/
__int64 R_Cinematic_SysIO_BinkOpen(unsigned __int64 *outUserData, const char *name)
{
  int PreloadHandle; 

  if ( !cinematicGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 916, ASSERT_TYPE_ASSERT, "(cinematicGlob.isInitialized)", (const char *)&queryFormat, "cinematicGlob.isInitialized") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 917, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( *(_DWORD *)cinematicGlob.streamingFileHandle.m_fileID != -16777217 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 918, ASSERT_TYPE_ASSERT, "(!cinematicGlob.streamingFileHandle.IsValid())", (const char *)&queryFormat, "!cinematicGlob.streamingFileHandle.IsValid()") )
    __debugbreak();
  if ( !outUserData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 919, ASSERT_TYPE_ASSERT, "(outUserData)", (const char *)&queryFormat, "outUserData") )
    __debugbreak();
  Sys_TryInitBinkIOThread();
  PreloadHandle = R_Cinematic_FindPreloadHandle(name, &cinematicGlob.streamingFileHandle.m_initialBufferSize, cinematicGlob.streamingFileHandle.m_initialBuffer);
  if ( PreloadHandle == -16777217 )
  {
    if ( !CinematicFileHandle::Open(&cinematicGlob.streamingFileHandle, name) )
    {
      *outUserData = 4207849473i64;
      return 0i64;
    }
  }
  else
  {
    if ( *(_DWORD *)cinematicGlob.streamingFileHandle.m_fileID != -16777217 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 474, ASSERT_TYPE_ASSERT, "(m_fileID == FileStreamFileID::INVALID)", (const char *)&queryFormat, "m_fileID == FileStreamFileID::INVALID") )
      __debugbreak();
    if ( cinematicGlob.streamingFileHandle.m_seekPosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 475, ASSERT_TYPE_ASSERT, "(m_seekPosition == 0)", (const char *)&queryFormat, "m_seekPosition == 0") )
      __debugbreak();
    *(_DWORD *)cinematicGlob.streamingFileHandle.m_fileID = PreloadHandle;
  }
  *outUserData = 3735932941i64;
  if ( cinematicGlob.decryptFile.encrypted )
    BinkCrypt_Open(&cinematicGlob.decryptFile);
  return 1i64;
}

/*
==============
R_Cinematic_SysIO_BinkRead
==============
*/
unsigned __int64 R_Cinematic_SysIO_BinkRead(unsigned __int64 *outUserData, void *dest, unsigned __int64 bytes)
{
  unsigned __int64 result; 
  unsigned __int64 v7; 

  if ( !cinematicGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 968, ASSERT_TYPE_ASSERT, "(cinematicGlob.isInitialized)", (const char *)&queryFormat, "cinematicGlob.isInitialized") )
    __debugbreak();
  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 969, ASSERT_TYPE_ASSERT, "(dest)", (const char *)&queryFormat, "dest") )
    __debugbreak();
  if ( *(_DWORD *)cinematicGlob.streamingFileHandle.m_fileID == -16777217 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 970, ASSERT_TYPE_ASSERT, "(cinematicGlob.streamingFileHandle.IsValid())", (const char *)&queryFormat, "cinematicGlob.streamingFileHandle.IsValid()") )
    __debugbreak();
  if ( !outUserData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 971, ASSERT_TYPE_ASSERT, "(outUserData)", (const char *)&queryFormat, "outUserData") )
    __debugbreak();
  if ( *outUserData != 3735932941 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 972, ASSERT_TYPE_ASSERT, "(*outUserData == BINK_VALID_USERDATA)", (const char *)&queryFormat, "*outUserData == BINK_VALID_USERDATA") )
    __debugbreak();
  Sys_TryInitBinkIOThread();
  result = CinematicFileHandle::Read(&cinematicGlob.streamingFileHandle, dest, bytes);
  v7 = result;
  if ( cinematicGlob.decryptFile.encrypted )
  {
    BinkCrypt_DecryptRead((unsigned __int8 *)dest, result, &cinematicGlob.decryptFile);
    return v7;
  }
  return result;
}

/*
==============
R_Cinematic_SysIO_BinkSeek
==============
*/
void R_Cinematic_SysIO_BinkSeek(unsigned __int64 *outUserData, unsigned __int64 pos)
{
  if ( !cinematicGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 991, ASSERT_TYPE_ASSERT, "(cinematicGlob.isInitialized)", (const char *)&queryFormat, "cinematicGlob.isInitialized") )
    __debugbreak();
  if ( *(_DWORD *)cinematicGlob.streamingFileHandle.m_fileID == -16777217 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 992, ASSERT_TYPE_ASSERT, "(cinematicGlob.streamingFileHandle.IsValid())", (const char *)&queryFormat, "cinematicGlob.streamingFileHandle.IsValid()") )
    __debugbreak();
  if ( !outUserData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 993, ASSERT_TYPE_ASSERT, "(outUserData)", (const char *)&queryFormat, "outUserData") )
    __debugbreak();
  if ( *outUserData != 3735932941 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 994, ASSERT_TYPE_ASSERT, "(*outUserData == BINK_VALID_USERDATA)", (const char *)&queryFormat, "*outUserData == BINK_VALID_USERDATA") )
    __debugbreak();
  Sys_TryInitBinkIOThread();
  if ( *(_DWORD *)cinematicGlob.streamingFileHandle.m_fileID != -16777217 )
    goto LABEL_17;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_cinematic.cpp", 511, ASSERT_TYPE_ASSERT, "(m_fileID != FileStreamFileID::INVALID)", (const char *)&queryFormat, "m_fileID != FileStreamFileID::INVALID") )
    __debugbreak();
  if ( *(_DWORD *)cinematicGlob.streamingFileHandle.m_fileID != -16777217 )
  {
LABEL_17:
    Com_Printf(8, "BINK: Seeking to offset %zu\n", pos);
    FileStream_Easy_SeekSet((FileStreamFileID)cinematicGlob.streamingFileHandle.m_fileID[0], pos);
    cinematicGlob.streamingFileHandle.m_seekPosition = pos;
  }
  if ( cinematicGlob.decryptFile.encrypted )
    BinkCrypt_Seek(pos, &cinematicGlob.decryptFile);
}

/*
==============
Close
==============
*/
void Close(BINKSND *bs)
{
  SDBinkContext *SDBinkContext; 

  SDBinkContext = GetSDBinkContext(bs);
  SD_SetAuxCallback(NULL);
  s_binkVoices[SDBinkContext->voiceIndex].inUse = 0;
}

