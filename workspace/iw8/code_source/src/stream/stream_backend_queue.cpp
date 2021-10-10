/*
==============
Stream_BackendQueue_QueueLoadMeshCmd
==============
*/

StreamUpdateId __fastcall Stream_BackendQueue_QueueLoadMeshCmd(const XModelSurfs *mesh)
{
  return ?Stream_BackendQueue_QueueLoadMeshCmd@@YA?AW4StreamUpdateId@@PEBUXModelSurfs@@@Z(mesh);
}

/*
==============
Stream_BackendQueue_QueueUnmapCmdNextFrame
==============
*/

StreamUpdateId __fastcall Stream_BackendQueue_QueueUnmapCmdNextFrame(StreamUpdateId current, const StreamUnmapCmdData *unmap)
{
  return ?Stream_BackendQueue_QueueUnmapCmdNextFrame@@YA?AW4StreamUpdateId@@W41@AEBUStreamUnmapCmdData@@@Z(current, unmap);
}

/*
==============
Stream_BackendQueue_PostLevelUnload
==============
*/

void Stream_BackendQueue_PostLevelUnload(void)
{
  ?Stream_BackendQueue_PostLevelUnload@@YAXXZ();
}

/*
==============
Stream_BackendQueue_QueueLoadGenericCmd
==============
*/

StreamUpdateId __fastcall Stream_BackendQueue_QueueLoadGenericCmd(const StreamKey *streamKey)
{
  return ?Stream_BackendQueue_QueueLoadGenericCmd@@YA?AW4StreamUpdateId@@PEBUStreamKey@@@Z(streamKey);
}

/*
==============
Stream_BackendQueue_QueueCopyTextureDesc
==============
*/

void __fastcall Stream_BackendQueue_QueueCopyTextureDesc(const GfxBackEndData *data, const GfxImage *image)
{
  ?Stream_BackendQueue_QueueCopyTextureDesc@@YAXPEBUGfxBackEndData@@PEBUGfxImage@@@Z(data, image);
}

/*
==============
Stream_BackendQueue_Dump
==============
*/

void Stream_BackendQueue_Dump(void)
{
  ?Stream_BackendQueue_Dump@@YAXXZ();
}

/*
==============
Stream_BackendQueue_IsComplete
==============
*/

bool __fastcall Stream_BackendQueue_IsComplete(StreamUpdateId updateID)
{
  return ?Stream_BackendQueue_IsComplete@@YA_NW4StreamUpdateId@@@Z(updateID);
}

/*
==============
Stream_BackendQueue_QueueUnloadMeshCmd
==============
*/

StreamUpdateId __fastcall Stream_BackendQueue_QueueUnloadMeshCmd(const XModelSurfs *mesh)
{
  return ?Stream_BackendQueue_QueueUnloadMeshCmd@@YA?AW4StreamUpdateId@@PEBUXModelSurfs@@@Z(mesh);
}

/*
==============
Stream_BackendQueue_Init
==============
*/

void Stream_BackendQueue_Init(void)
{
  ?Stream_BackendQueue_Init@@YAXXZ();
}

/*
==============
BackendCommand::BackendCommand
==============
*/

void __fastcall BackendCommand::BackendCommand(BackendCommand *this)
{
  ??0BackendCommand@@QEAA@XZ(this);
}

/*
==============
Stream_BackendQueue_UpdateSettings
==============
*/

void Stream_BackendQueue_UpdateSettings(void)
{
  ?Stream_BackendQueue_UpdateSettings@@YAXXZ();
}

/*
==============
Stream_BackendQueue_QueueMapCmdAfter
==============
*/

StreamUpdateId __fastcall Stream_BackendQueue_QueueMapCmdAfter(StreamUpdateId current, const StreamMapCmdData *map)
{
  return ?Stream_BackendQueue_QueueMapCmdAfter@@YA?AW4StreamUpdateId@@W41@AEBUStreamMapCmdData@@@Z(current, map);
}

/*
==============
Stream_BackendQueue_ForcedFlush
==============
*/

void Stream_BackendQueue_ForcedFlush(void)
{
  ?Stream_BackendQueue_ForcedFlush@@YAXXZ();
}

/*
==============
Stream_BackendQueue_QueueUnmapCmdAfter
==============
*/

StreamUpdateId __fastcall Stream_BackendQueue_QueueUnmapCmdAfter(StreamUpdateId current, const StreamUnmapCmdData *unmap)
{
  return ?Stream_BackendQueue_QueueUnmapCmdAfter@@YA?AW4StreamUpdateId@@W41@AEBUStreamUnmapCmdData@@@Z(current, unmap);
}

/*
==============
Stream_BackendQueue_Shutdown
==============
*/

void Stream_BackendQueue_Shutdown(void)
{
  ?Stream_BackendQueue_Shutdown@@YAXXZ();
}

/*
==============
RB_Stream_BackendFrameBegin
==============
*/

void __fastcall RB_Stream_BackendFrameBegin(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  ?RB_Stream_BackendFrameBegin@@YAXUGfxCmdBufContext@@PEBUGfxBackEndData@@@Z(gfxContext, data);
}

/*
==============
Stream_BackendQueue_IsInForcedFlush
==============
*/

bool __fastcall Stream_BackendQueue_IsInForcedFlush()
{
  return ?Stream_BackendQueue_IsInForcedFlush@@YA_NXZ();
}

/*
==============
Stream_BackendQueue_QueueUnloadImageCmd
==============
*/

StreamUpdateId __fastcall Stream_BackendQueue_QueueUnloadImageCmd(const GfxImage *image, unsigned int part)
{
  return ?Stream_BackendQueue_QueueUnloadImageCmd@@YA?AW4StreamUpdateId@@PEBUGfxImage@@I@Z(image, part);
}

/*
==============
Stream_BackendQueue_QueueUnloadGenericCmd
==============
*/

StreamUpdateId __fastcall Stream_BackendQueue_QueueUnloadGenericCmd(const StreamKey *streamKey)
{
  return ?Stream_BackendQueue_QueueUnloadGenericCmd@@YA?AW4StreamUpdateId@@PEBUStreamKey@@@Z(streamKey);
}

/*
==============
Stream_BackendQueue_GetPageAdjustment
==============
*/

int __fastcall Stream_BackendQueue_GetPageAdjustment(StreamMemPool pool)
{
  return ?Stream_BackendQueue_GetPageAdjustment@@YAHW4StreamMemPool@@@Z(pool);
}

/*
==============
RB_Stream_BackendFrameEnd
==============
*/

void __fastcall RB_Stream_BackendFrameEnd(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  ?RB_Stream_BackendFrameEnd@@YAXUGfxCmdBufContext@@PEBUGfxBackEndData@@@Z(gfxContext, data);
}

/*
==============
Stream_BackendQueue_GetCopyTextureDescQueueSize
==============
*/

unsigned int __fastcall Stream_BackendQueue_GetCopyTextureDescQueueSize()
{
  return ?Stream_BackendQueue_GetCopyTextureDescQueueSize@@YAIXZ();
}

/*
==============
Stream_BackendQueue_QueueLoadImageCmd
==============
*/

StreamUpdateId __fastcall Stream_BackendQueue_QueueLoadImageCmd(const GfxImage *image, unsigned int part)
{
  return ?Stream_BackendQueue_QueueLoadImageCmd@@YA?AW4StreamUpdateId@@PEBUGfxImage@@I@Z(image, part);
}

/*
==============
Stream_BackendQueue_GetCurrentUpdateIdAndBackendDataIndex
==============
*/

void __fastcall Stream_BackendQueue_GetCurrentUpdateIdAndBackendDataIndex(StreamUpdateId *outUpdateId, unsigned int *outBackendDataIndex)
{
  ?Stream_BackendQueue_GetCurrentUpdateIdAndBackendDataIndex@@YAXAEAW4StreamUpdateId@@AEAI@Z(outUpdateId, outBackendDataIndex);
}

/*
==============
Stream_BackendQueue_GetAllMapsAndUnmapsCompleteUpdateId
==============
*/

StreamUpdateId __fastcall Stream_BackendQueue_GetAllMapsAndUnmapsCompleteUpdateId()
{
  return ?Stream_BackendQueue_GetAllMapsAndUnmapsCompleteUpdateId@@YA?AW4StreamUpdateId@@XZ();
}

/*
==============
Stream_BackendQueue_DBPreReleaseImage
==============
*/

void __fastcall Stream_BackendQueue_DBPreReleaseImage(GfxImage *image)
{
  ?Stream_BackendQueue_DBPreReleaseImage@@YAXPEAUGfxImage@@@Z(image);
}

/*
==============
BackendCommand::BackendCommand
==============
*/
void BackendCommand::BackendCommand(BackendCommand *this)
{
  *(_QWORD *)this = -1i64;
  this->mapCmd.baseAddrHandle.data = -1i64;
  *((_QWORD *)&this->genericCmd + 1) = -1i64;
  *((_QWORD *)&this->genericCmd + 2) = -1i64;
  *((_QWORD *)&this->genericCmd + 3) = -1i64;
  *((_QWORD *)&this->genericCmd + 4) = -1i64;
}

/*
==============
GetCommand
==============
*/
BackendCommand *GetCommand()
{
  StreamBackendGlob *v0; 
  BackendCommand *mHead; 
  BackendCommand *v2; 
  BackendCommand *result; 

  v0 = s_streamBackendGlob;
  mHead = s_streamBackendGlob->commands.mHead;
  if ( s_streamBackendGlob->commands.mHead )
    goto LABEL_13;
  Stream_Logger_Dump(NULL);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 281, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Streamer backend queue ran out of backend commands. All %zu commands currently used.  Forcing a flush.", 0xC000ui64) )
    __debugbreak();
  Stream_BackendQueue_ForcedFlushInternal(0);
  v0 = s_streamBackendGlob;
  mHead = s_streamBackendGlob->commands.mHead;
  if ( s_streamBackendGlob->commands.mHead )
  {
LABEL_13:
    if ( *(_DWORD *)mHead << 8 )
      v2 = &mHead[(__int64)(int)(*(_DWORD *)mHead << 8) >> 8];
    else
      v2 = NULL;
    v0->commands.mHead = v2;
    *(_DWORD *)mHead &= 0xFF000000;
  }
  else
  {
    mHead = NULL;
    Mem_Error_CannotAlloc_Dev(COUNT|DODGE|0x10, "GetCommand", "c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 288, "Streamer backend queue ran out of backend commands. All %zu commands currently used.", 0xC000ui64);
  }
  *(_QWORD *)mHead = -1i64;
  result = mHead;
  mHead->mapCmd.baseAddrHandle.data = -1i64;
  *((_QWORD *)&mHead->genericCmd + 1) = -1i64;
  *((_QWORD *)&mHead->genericCmd + 2) = -1i64;
  *((_QWORD *)&mHead->genericCmd + 3) = -1i64;
  *((_QWORD *)&mHead->genericCmd + 4) = -1i64;
  *(_DWORD *)mHead &= 0xFF000000;
  return result;
}

/*
==============
GetCommandQueue
==============
*/
BackendCommandQueue *GetCommandQueue(StreamUpdateId id)
{
  if ( (unsigned __int64)id < s_streamBackendGlob->currentUpdateId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 268, ASSERT_TYPE_ASSERT, "( integralId ) >= ( UpdateIdType( s_streamBackendGlob->currentUpdateId ) )", "%s >= %s\n\t%llu, %llu", "integralId", "UpdateIdType( s_streamBackendGlob->currentUpdateId )", id, s_streamBackendGlob->currentUpdateId) )
    __debugbreak();
  if ( id >= (unsigned __int64)(s_streamBackendGlob->currentUpdateId + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 269, ASSERT_TYPE_ASSERT, "( integralId ) < ( UpdateIdType( s_streamBackendGlob->currentUpdateId ) + QUEUE_COUNT )", "%s < %s\n\t%llu, %llu", "integralId", "UpdateIdType( s_streamBackendGlob->currentUpdateId ) + QUEUE_COUNT", id, s_streamBackendGlob->currentUpdateId + 8) )
    __debugbreak();
  return &s_streamBackendGlob->commandQueue[(unsigned __int64)(id & 7)];
}

/*
==============
GetImageClampedPartIndex
==============
*/
__int64 GetImageClampedPartIndex(const GfxImage *image, unsigned int imagePartsInUse)
{
  unsigned int v4; 
  __int64 result; 
  int v6; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1185, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  v4 = 0;
  result = 4i64;
  if ( image->streamedPartCount )
  {
    v6 = 1;
    do
    {
      if ( (v6 & imagePartsInUse) == 0 )
        break;
      result = v4;
      v6 = __ROL4__(v6, 1);
      ++v4;
    }
    while ( v4 < image->streamedPartCount );
  }
  return result;
}

/*
==============
QueueImageCmd
==============
*/
StreamUpdateId QueueImageCmd(StreamBackendQueueCommandType type, const GfxImage *image, unsigned int part)
{
  unsigned int v3; 
  StreamBackendQueueCommandType v5; 
  unsigned int v6; 
  unsigned int GfxImageIndex; 
  unsigned int v8; 
  int v9; 
  StreamFrontendGlob *v10; 
  unsigned int *mUse; 
  unsigned int v12; 
  BackendCommand *Command; 
  StreamUpdateId v14; 
  __int64 v16; 
  __int64 v17; 
  Stream_Logger_Item item; 
  ScopedCriticalSection v19; 

  v3 = part;
  v5 = type;
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 665, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  if ( (unsigned __int8)(v5 - 2) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 666, ASSERT_TYPE_ASSERT, "(type == StreamBackendQueueCommandType::LOAD_IMAGE || type == StreamBackendQueueCommandType::UNLOAD_IMAGE)", (const char *)&queryFormat, "type == StreamBackendQueueCommandType::LOAD_IMAGE || type == StreamBackendQueueCommandType::UNLOAD_IMAGE") )
    __debugbreak();
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 667, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( v3 >= image->streamedPartCount )
  {
    LODWORD(v16) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 668, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( image->streamedPartCount )", "part doesn't index image->streamedPartCount\n\t%i not in [0, %i)", v16, image->streamedPartCount) )
      __debugbreak();
  }
  v6 = 0;
  GfxImageIndex = DB_GetGfxImageIndex(image);
  if ( image->streamedPartCount )
  {
    v8 = 4 * GfxImageIndex;
    v9 = -4 * GfxImageIndex;
    do
    {
      v10 = streamFrontendGlob;
      if ( v8 >= streamFrontendGlob->imageBits.mBitCount )
      {
        LODWORD(v17) = streamFrontendGlob->imageBits.mBitCount;
        LODWORD(v16) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 371, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      mUse = v10->imageBits.mUse;
      if ( !mUse && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v12 = mUse[(__int64)(int)v8 >> 5];
      if ( _bittest((const int *)&v12, v8 & 0x1F) )
        v6 |= 1 << (v9 + v8);
      ++v8;
    }
    while ( v9 + v8 < image->streamedPartCount );
    v3 = part;
    v5 = type;
  }
  item.m_image = image;
  if ( v3 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v3, "unsigned", v3) )
    __debugbreak();
  *(_WORD *)&item.m_type = v3;
  if ( v6 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v6, "unsigned", v6) )
    __debugbreak();
  *((_WORD *)&item.m_type + 1) = v6;
  ScopedCriticalSection::ScopedCriticalSection(&v19, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  Command = GetCommand();
  *((_BYTE *)Command + 3) = v5;
  *(Stream_Logger_Item *)&Command->mapCmd.baseAddrHandle.data = item;
  item.m_type = STREAM_ITEM_IMAGE;
  item.m_image = image;
  Stream_Logger_OnQueueCommand("QueueImageCmd", NULL, &item, v5, Command->imageCmd.part);
  v14 = QueueCommand_0_((StreamUpdateId)0i64, Command);
  ScopedCriticalSection::~ScopedCriticalSection(&v19);
  return v14;
}

/*
==============
RB_Stream_BackendFrameBegin
==============
*/
void RB_Stream_BackendFrameBegin(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  GfxCmdBufContext v4; 
  ScopedCriticalSection v5; 

  Sys_ProfBeginNamedEvent(0xFF808080, "RB_Stream_BackendFrameBegin");
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1641, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()", -2i64) )
    __debugbreak();
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v5, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  v4 = *gfxContext;
  Stream_Defrag_FrameBegin(&v4, data);
  ScopedCriticalSection::~ScopedCriticalSection(&v5);
  Sys_ProfEndNamedEvent();
}

/*
==============
RB_Stream_BackendFrameEnd
==============
*/
void RB_Stream_BackendFrameEnd(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  const dvar_t *v4; 
  bool v5; 
  StreamUpdateId currentUpdateId; 
  StreamBackendGlob *v7; 
  StreamUpdateId currentAllMapsAndUnmapsCompleteId; 
  GfxCmdBufContext v9; 
  GfxCmdBufContext v10; 
  GfxCmdBufContext v11; 
  ScopedCriticalSection v12; 

  Sys_ProfBeginNamedEvent(0xFF808080, "RB_Stream_BackendFrameEnd");
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1664, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( data != backEndData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1665, ASSERT_TYPE_ASSERT, "(data == backEndData)", (const char *)&queryFormat, "data == backEndData") )
    __debugbreak();
  if ( frontEndDataOut && frontEndDataOut == backEndData && !frontEndDataOut->finishReady && !frontEndDataOut->abortReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1674, ASSERT_TYPE_ASSERT, "(feData != backEndData || feData->finishReady || feData->abortReady)", (const char *)&queryFormat, "feData != backEndData || feData->finishReady || feData->abortReady") )
    __debugbreak();
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v12, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  RB_Texture_BeginAllowStreamedTextureUpdate(data);
  v4 = r_debugShaderTexture;
  if ( !r_debugShaderTexture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = v4->current.integer == 10 && !r_deviceDebug->current.enabled;
  Stream_Debug_UpdateTexturesForDebugShader(data, v5);
  Stream_BackendQueue_ExecTextureDescCopies(data);
  v9 = *gfxContext;
  Stream_Defrag_FrameEnd(&v9, data);
  currentUpdateId = s_streamBackendGlob->currentUpdateId;
  v10 = *gfxContext;
  Stream_BackendQueue_Update(&v10, data, currentUpdateId);
  if ( GetCommandQueue(currentUpdateId)->commands.mTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1721, ASSERT_TYPE_ASSERT, "(GetCommandQueue( id )->commands.Empty())", (const char *)&queryFormat, "GetCommandQueue( id )->commands.Empty()") )
    __debugbreak();
  v11 = *gfxContext;
  Stream_Defrag_IssueCopies(&v11);
  v7 = s_streamBackendGlob;
  if ( currentUpdateId != s_streamBackendGlob->currentUpdateId )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1727, ASSERT_TYPE_ASSERT, "( id ) == ( s_streamBackendGlob->currentUpdateId )", "%s == %s\n\t%llu, %llu", (const char *)&valueOut, "s_streamBackendGlob->currentUpdateId", currentUpdateId, s_streamBackendGlob->currentUpdateId) )
      __debugbreak();
    v7 = s_streamBackendGlob;
  }
  currentAllMapsAndUnmapsCompleteId = ++v7->currentUpdateId;
  if ( v7->currentAllMapsAndUnmapsCompleteId > (unsigned __int64)currentAllMapsAndUnmapsCompleteId )
    currentAllMapsAndUnmapsCompleteId = v7->currentAllMapsAndUnmapsCompleteId;
  v7->currentAllMapsAndUnmapsCompleteId = currentAllMapsAndUnmapsCompleteId;
  s_streamBackendGlob->currentUpdateBackendDataIndex = ((unsigned __int8)R_GetBackEndDataIndex(data) - 1) & 1;
  RB_Texture_EndAllowStreamedTextureUpdate(data);
  ScopedCriticalSection::~ScopedCriticalSection(&v12);
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_BackendQueue_AllocCopyTextureDescCommand
==============
*/
CopyTextureDescCommand *Stream_BackendQueue_AllocCopyTextureDescCommand(const GfxBackEndData *data)
{
  unsigned int currentUpdateBackendDataIndex; 
  StreamBackendGlob *v3; 
  __int64 copyTextureDescCommandQueueCount; 
  unsigned int BackEndDataIndex; 
  unsigned int v7; 

  if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1087, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  currentUpdateBackendDataIndex = s_streamBackendGlob->currentUpdateBackendDataIndex;
  if ( R_GetBackEndDataIndex(data) != currentUpdateBackendDataIndex )
  {
    v7 = currentUpdateBackendDataIndex;
    BackEndDataIndex = R_GetBackEndDataIndex(data);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1093, ASSERT_TYPE_ASSERT, "( R_GetBackEndDataIndex( data ) ) == ( s_streamBackendGlob->currentUpdateBackendDataIndex )", "%s == %s\n\t%u, %u", "R_GetBackEndDataIndex( data )", "s_streamBackendGlob->currentUpdateBackendDataIndex", BackEndDataIndex, v7) )
      __debugbreak();
  }
  v3 = s_streamBackendGlob;
  if ( s_streamBackendGlob->copyTextureDescCommandQueueCount >= 0x4000 )
  {
    Mem_Error_CannotAlloc_Dev(COUNT|DODGE|0x10, "Stream_BackendQueue_AllocCopyTextureDescCommand", "c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1100, "Exhausted %zu copy-texture-descriptor commands in a single frame. Please ensure the backend gets pumped frequently, or if necessary bump the limit.", 0x4000ui64);
    v3 = s_streamBackendGlob;
  }
  copyTextureDescCommandQueueCount = v3->copyTextureDescCommandQueueCount;
  v3->copyTextureDescCommandQueueCount = copyTextureDescCommandQueueCount + 1;
  return &v3->copyTextureDescCommandQueue[copyTextureDescCommandQueueCount];
}

/*
==============
Stream_BackendQueue_DBPreReleaseImage
==============
*/
void Stream_BackendQueue_DBPreReleaseImage(GfxImage *image)
{
  unsigned int GfxImageIndex; 
  __int64 v3; 
  StreamBackendGlob *i; 
  ScopedCriticalSection v5; 

  if ( !Sys_IsMainThread() && !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 229, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsDatabaseThread()", -2i64) )
    __debugbreak();
  if ( !s_streamBackendGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 230, ASSERT_TYPE_ASSERT, "(s_streamBackendGlob)", (const char *)&queryFormat, "s_streamBackendGlob") )
    __debugbreak();
  if ( Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 231, ASSERT_TYPE_ASSERT, "(!Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "!Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 232, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
    __debugbreak();
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 233, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 234, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v5, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  GfxImageIndex = DB_GetGfxImageIndex(image);
  v3 = 0i64;
  for ( i = s_streamBackendGlob; (unsigned int)v3 < i->copyTextureDescCommandQueueCount; v3 = (unsigned int)(v3 + 1) )
  {
    if ( (*(_DWORD *)&i->copyTextureDescCommandQueue[v3] & 0x1FFFF) == GfxImageIndex )
      *(_DWORD *)&i->copyTextureDescCommandQueue[v3] &= ~0x40000u;
  }
  ScopedCriticalSection::~ScopedCriticalSection(&v5);
}

/*
==============
Stream_BackendQueue_Dump
==============
*/
void Stream_BackendQueue_Dump(void)
{
  StreamBackendGlob *v0; 
  int v1; 
  StreamUpdateId v2; 
  BackendCommandQueue *CommandQueue; 
  __int64 v4; 
  unsigned __int64 unmapMinPageCount; 
  __int64 mapReservedPageCount; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned int v9; 
  __int64 *v10; 
  __int64 *v11; 
  int v12; 
  unsigned __int64 v13; 
  __int64 i; 
  __int64 *v15; 
  __int64 v16; 
  unsigned int v17; 
  __int64 *v18; 
  unsigned __int64 v19; 
  __int64 j; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  int v26; 
  __int64 v27[2]; 
  __int64 v28[2]; 

  v0 = s_streamBackendGlob;
  if ( s_streamBackendGlob )
  {
    v1 = 0;
    while ( 1 )
    {
      v2 = v0->currentUpdateId + v1;
      CommandQueue = GetCommandQueue(v2);
      v4 = 2i64;
      unmapMinPageCount = (unsigned __int64)CommandQueue->unmapMinPageCount;
      mapReservedPageCount = (__int64)CommandQueue->mapReservedPageCount;
      LODWORD(CommandQueue) = unmapMinPageCount;
      v28[0] = unmapMinPageCount;
      v7 = HIDWORD(unmapMinPageCount);
      v8 = (unsigned __int64)(unsigned int)CommandQueue << 16 >> 20;
      v26 = (int)CommandQueue;
      v9 = 0;
      v27[0] = mapReservedPageCount;
      v10 = v28;
      do
      {
        v9 += *(_DWORD *)v10;
        v10 = (__int64 *)((char *)v10 + 4);
        --v4;
      }
      while ( v4 );
      v11 = v28;
      v12 = 0;
      v13 = (unsigned __int64)v9 << 16 >> 20;
      for ( i = 0i64; i != 2; ++i )
      {
        v12 += *(_DWORD *)v11;
        v11 = (__int64 *)((char *)v11 + 4);
      }
      v15 = v27;
      v16 = 2i64;
      v17 = 0;
      do
      {
        v17 += *(_DWORD *)v15;
        v15 = (__int64 *)((char *)v15 + 4);
        --v16;
      }
      while ( v16 );
      v18 = v27;
      v19 = (unsigned __int64)v17 << 16 >> 20;
      for ( j = 0i64; j != 2; ++j )
      {
        v16 = (unsigned int)(*(_DWORD *)v18 + v16);
        v18 = (__int64 *)((char *)v18 + 4);
      }
      LODWORD(v25) = v7;
      LODWORD(v24) = v26;
      LODWORD(v23) = v12;
      LODWORD(v22) = HIDWORD(v27[0]);
      LODWORD(v21) = mapReservedPageCount;
      Com_MemDumpPrintf("  Streamer backend queue %zu: total reserved pages to map %u (%zuM) - CPU: %u (%zuM), GPU: %u (%zuM);  total min pages to unmap %u (%zuM) - CPU: %u (%zuM), GPU: %u (%zuM)\n", v2, v16, v19, v21, (unsigned __int64)(unsigned int)mapReservedPageCount << 16 >> 20, v22, (unsigned __int64)HIDWORD(v27[0]) << 16 >> 20, v23, v13, v24, v8, v25, v7 << 16 >> 20);
      if ( (unsigned int)++v1 >= 8 )
        break;
      v0 = s_streamBackendGlob;
    }
  }
}

/*
==============
Stream_BackendQueue_ExecLoadImageCmd
==============
*/
void Stream_BackendQueue_ExecLoadImageCmd(const GfxBackEndData *data, ImageCmdData *imageCmd)
{
  const GfxImage *image; 
  unsigned int part; 
  unsigned int imagePartsInUseBefore; 
  __int64 ImageClampedPartIndex; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  CopyTextureDescCommand *Frame; 
  __int64 v13; 
  __int64 v14; 
  Stream_Logger_Item item; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1225, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !imageCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1226, ASSERT_TYPE_ASSERT, "(imageCmd)", (const char *)&queryFormat, "imageCmd") )
    __debugbreak();
  image = imageCmd->image;
  part = imageCmd->part;
  imagePartsInUseBefore = imageCmd->imagePartsInUseBefore;
  if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1232, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  if ( part >= image->streamedPartCount )
  {
    LODWORD(v13) = part;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1233, ASSERT_TYPE_ASSERT, "(unsigned)( unclampedPart ) < (unsigned)( image->streamedPartCount )", "unclampedPart doesn't index image->streamedPartCount\n\t%i not in [0, %i)", v13, image->streamedPartCount) )
      __debugbreak();
  }
  item.m_type = STREAM_ITEM_IMAGE;
  item.m_image = image;
  Stream_Logger_OnLoad("Stream_BackendQueue_ExecLoadImageCmd", data, &item, part);
  ImageClampedPartIndex = (unsigned int)GetImageClampedPartIndex(image, imagePartsInUseBefore);
  v8 = GetImageClampedPartIndex(image, imagePartsInUseBefore | (1 << part));
  v9 = v8;
  if ( v8 != 4 )
  {
    if ( v8 >= image->streamedPartCount )
    {
      LODWORD(v14) = image->streamedPartCount;
      LODWORD(v13) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1247, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( image->streamedPartCount )", "part doesn't index image->streamedPartCount\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    if ( (_DWORD)ImageClampedPartIndex == 4 )
      v10 = 0;
    else
      v10 = image->streams[ImageClampedPartIndex].levelCountAndSize & 0xF;
    v11 = image->streams[v9].levelCountAndSize & 0xF;
    if ( v11 < v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1251, ASSERT_TYPE_ASSERT, "( newLevelCount ) >= ( oldLevelCount )", "%s >= %s\n\t%u, %u", "newLevelCount", "oldLevelCount", image->streams[v9].levelCountAndSize & 0xF, v10) )
      __debugbreak();
    if ( v10 > image->levelCount )
    {
      LODWORD(v14) = image->levelCount;
      LODWORD(v13) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1252, ASSERT_TYPE_ASSERT, "( oldLevelCount ) <= ( image->levelCount )", "oldLevelCount not in [0, image->levelCount]\n\t%u not in [0, %u]", v13, v14) )
        __debugbreak();
    }
    if ( v11 > image->levelCount )
    {
      LODWORD(v14) = image->levelCount;
      LODWORD(v13) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1253, ASSERT_TYPE_ASSERT, "( newLevelCount ) <= ( image->levelCount )", "newLevelCount not in [0, image->levelCount]\n\t%u not in [0, %u]", v13, v14) )
        __debugbreak();
    }
    if ( v11 > v10 )
    {
      if ( RB_Texture_HasStreamedFallbackAssigned(data, image->textureId) )
      {
        RB_Texture_FixupStreamedPixelsPtr(data, image, 0);
        item.m_type = STREAM_ITEM_IMAGE;
        item.m_image = image;
        Stream_Logger_OnPatchDescriptor("Stream_BackendQueue_ExecLoadImageCmd", data, &item, 0, 0);
      }
      Stream_BackendQueue_UpdateMostDetailedMip(data, image, v11);
      if ( (unsigned int)v9 >= 4 )
      {
        LODWORD(v14) = 4;
        LODWORD(v13) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1136, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( IMAGE_STREAM_COUNT )", "part doesn't index IMAGE_STREAM_COUNT\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      Frame = Stream_BackendQueue_QueueCopyTextureDescNextFrame(data, image, 1u);
      if ( Frame )
        *Frame = (CopyTextureDescCommand)(*(_DWORD *)Frame ^ (*(_DWORD *)Frame ^ ((_DWORD)v9 << 21)) & 0x600000 | 0x80000);
      else
        Stream_BackendQueue_MarkUpToImagePartLoaded(image, v9);
    }
  }
}

/*
==============
Stream_BackendQueue_ExecMapCmd
==============
*/
__int64 Stream_BackendQueue_ExecMapCmd(const GfxBackEndData *data, StreamMapCmdData *map, StreamerMemPageCounts *pageAdjust)
{
  int v5; 
  unsigned int v6; 
  StreamerMemPageCounts *p_pagesReserved; 
  StreamerMemPageCounts *v8; 
  __int64 v9; 
  StreamMemPool *p_pool; 
  __int64 v11; 
  __int64 v12; 
  unsigned __int8 *v13; 
  unsigned int v14; 
  StreamerMemPageCounts *v15; 
  __int64 v16; 
  int v17; 
  StreamerMemPageCounts *v18; 
  __int64 v19; 
  unsigned __int8 *v20; 
  unsigned __int8 *end; 
  unsigned int v22; 
  unsigned int v23; 
  StreamerMemPageCounts *v24; 
  __int64 v25; 
  int v26; 
  StreamerMemPageCounts *v27; 
  __int64 v28; 
  unsigned int v29; 
  unsigned int v30; 
  streamer_handle_t *v31; 
  unsigned int v32; 
  StreamerMemPageCounts *v33; 
  __int64 v34; 
  int v35; 
  StreamerMemPageCounts *v36; 
  __int64 v37; 
  int v38; 
  __int64 v39; 
  int v40; 
  int v41; 
  StreamerMemPageCounts *p_pagesTaken; 
  __int64 v43; 
  StreamerMemPageCounts *v44; 
  StreamerMemPageCounts *v45; 
  unsigned int v46; 
  __int64 v48; 
  __int64 v49; 
  unsigned int outPageDeficitOrCommitCount; 
  streamer_handle_t *handle; 
  GfxBackEndData *dataa; 
  StreamerMemPageCounts *v53; 
  __int64 v54; 
  Stream_Logger_Item item; 
  Stream_Logger_Item result; 
  StreamerMemLoan optionalLoan; 
  StreamerMemPageCounts pagesTaken; 

  v54 = -2i64;
  v53 = pageAdjust;
  handle = &map->baseAddrHandle;
  dataa = (GfxBackEndData *)data;
  v5 = 0;
  v6 = 0;
  p_pagesReserved = &map->pagesReserved;
  v8 = p_pagesReserved;
  v9 = 0i64;
  p_pool = &map->pool;
  v11 = 2i64;
  v12 = 2i64;
  if ( p_pagesReserved > (StreamerMemPageCounts *)p_pool )
    v12 = 0i64;
  if ( p_pagesReserved <= (StreamerMemPageCounts *)p_pool )
  {
    do
    {
      v6 += v8->pages[0];
      v8 = (StreamerMemPageCounts *)((char *)v8 + 4);
      ++v9;
    }
    while ( v9 != v12 );
  }
  v13 = Stream_AddressSpace_ResolveAddrMap(data, map);
  v14 = 0;
  v15 = p_pagesReserved;
  v16 = 0i64;
  if ( p_pagesReserved <= &p_pagesReserved[1] )
  {
    do
    {
      v14 += v15->pages[0];
      v15 = (StreamerMemPageCounts *)((char *)v15 + 4);
      ++v16;
    }
    while ( v16 != v12 );
    if ( v14 > v6 )
    {
      v17 = 0;
      v18 = p_pagesReserved;
      v19 = 0i64;
      do
      {
        v17 += v18->pages[0];
        v18 = (StreamerMemPageCounts *)((char *)v18 + 4);
        ++v19;
      }
      while ( v19 != v12 );
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 847, ASSERT_TYPE_ASSERT, "( map.pagesReserved.TotalPages() ) <= ( originalReservedPageCount )", "%s <= %s\n\t%u, %u", "map.pagesReserved.TotalPages()", "originalReservedPageCount", v17, v6) )
        __debugbreak();
    }
  }
  v20 = &v13[map->mapOffset];
  end = &v20[map->mapSize];
  v22 = truncate_cast<unsigned int,unsigned __int64>((((unsigned __int64)(end + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64) - ((unsigned __int64)v20 & 0xFFFFFFFFFFFF0000ui64)) >> 16);
  v23 = 0;
  v24 = p_pagesReserved;
  v25 = 0i64;
  if ( p_pagesReserved <= &p_pagesReserved[1] )
  {
    do
    {
      v23 += v24->pages[0];
      v24 = (StreamerMemPageCounts *)((char *)v24 + 4);
      ++v25;
    }
    while ( v25 != v12 );
  }
  if ( v22 > v23 )
  {
    v26 = 0;
    v27 = p_pagesReserved;
    v28 = 0i64;
    if ( p_pagesReserved <= &p_pagesReserved[1] )
    {
      do
      {
        v26 += v27->pages[0];
        v27 = (StreamerMemPageCounts *)((char *)v27 + 4);
        ++v28;
      }
      while ( v28 != v12 );
    }
    LODWORD(v49) = v26;
    LODWORD(v48) = v22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 853, ASSERT_TYPE_ASSERT, "( pageCount ) <= ( map.pagesReserved.TotalPages() )", "%s <= %s\n\t%u, %u", "pageCount", "map.pagesReserved.TotalPages()", v48, v49) )
      __debugbreak();
  }
  if ( v22 < LODWORD(handle[2].data) )
  {
    LODWORD(v49) = handle[2].data;
    LODWORD(v48) = v22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 854, ASSERT_TYPE_ASSERT, "( pageCount ) >= ( map.minPageCount )", "%s >= %s\n\t%u, %u", "pageCount", "map.minPageCount", v48, v49) )
      __debugbreak();
  }
  optionalLoan.mUpdateID = 0i64;
  optionalLoan.mPages = 0i64;
  optionalLoan.mCookie = -1061110033;
  StreamerMemLoan::GivePages(&optionalLoan, p_pagesReserved);
  if ( !StreamerMemLoan::Ready(&optionalLoan) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 859, ASSERT_TYPE_ASSERT, "(pagesReservedLoan.Ready())", (const char *)&queryFormat, "pagesReservedLoan.Ready()") )
    __debugbreak();
  outPageDeficitOrCommitCount = 0;
  if ( !Mem_Paged_BatchCommitSubPageMemory(v20, end, &optionalLoan, &outPageDeficitOrCommitCount, "Streamer") )
  {
    Stream_Logger_Dump(v20);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 869, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "map failed for virtual address range [%p - %p)", v20, end) )
      __debugbreak();
  }
  item = *Stream_Logger_MakeItem(&result, handle);
  Stream_Logger_OnMemoryMapped("Stream_BackendQueue_ExecMapCmd", dataa, &item, handle[4].data, v20, end);
  v29 = handle[2].data;
  v30 = outPageDeficitOrCommitCount;
  if ( outPageDeficitOrCommitCount >= v29 )
  {
    v31 = handle;
  }
  else
  {
    Stream_Logger_Dump(v20);
    LODWORD(v49) = handle[2].data;
    LODWORD(v48) = outPageDeficitOrCommitCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 877, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "map for virtual address range [%p - %p) didn't commit min number of pages. Committed %u, need to commit at least %u pages", v20, end, v48, v49) )
      __debugbreak();
    v31 = handle;
    v29 = handle[2].data;
    v30 = outPageDeficitOrCommitCount;
  }
  if ( v30 < v29 )
  {
    LODWORD(v49) = v29;
    LODWORD(v48) = v30;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 880, ASSERT_TYPE_ASSERT, "( commitPageCount ) >= ( map.minPageCount )", "%s >= %s\n\t%u, %u", "commitPageCount", "map.minPageCount", v48, v49) )
      __debugbreak();
    v30 = outPageDeficitOrCommitCount;
  }
  v32 = 0;
  v33 = p_pagesReserved;
  v34 = 0i64;
  if ( p_pagesReserved <= &p_pagesReserved[1] )
  {
    do
    {
      v32 += v33->pages[0];
      v33 = (StreamerMemPageCounts *)((char *)v33 + 4);
      ++v34;
    }
    while ( v34 != v12 );
  }
  if ( v30 > v32 )
  {
    v35 = 0;
    v36 = p_pagesReserved;
    v37 = 0i64;
    if ( p_pagesReserved <= &p_pagesReserved[1] )
    {
      do
      {
        v35 += v36->pages[0];
        v36 = (StreamerMemPageCounts *)((char *)v36 + 4);
        ++v37;
      }
      while ( v37 != v12 );
    }
    LODWORD(v49) = v35;
    LODWORD(v48) = v30;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 881, ASSERT_TYPE_ASSERT, "( commitPageCount ) <= ( map.pagesReserved.TotalPages() )", "%s <= %s\n\t%u, %u", "commitPageCount", "map.pagesReserved.TotalPages()", v48, v49) )
      __debugbreak();
    v30 = outPageDeficitOrCommitCount;
  }
  if ( v22 < v30 )
  {
    LODWORD(v49) = v30;
    LODWORD(v48) = v22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 882, ASSERT_TYPE_ASSERT, "( pageCount ) >= ( commitPageCount )", "%s >= %s\n\t%u, %u", "pageCount", "commitPageCount", v48, v49) )
      __debugbreak();
    v30 = outPageDeficitOrCommitCount;
  }
  v38 = 0;
  v39 = 0i64;
  if ( p_pagesReserved <= &p_pagesReserved[1] )
  {
    do
    {
      v38 += p_pagesReserved->pages[0];
      p_pagesReserved = (StreamerMemPageCounts *)((char *)p_pagesReserved + 4);
      ++v39;
    }
    while ( v39 != v12 );
  }
  v40 = v38 - v30;
  if ( v40 != StreamerMemLoan::TotalPages(&optionalLoan) )
  {
    LODWORD(v49) = StreamerMemLoan::TotalPages(&optionalLoan);
    LODWORD(v48) = v40;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 884, ASSERT_TYPE_ASSERT, "( unusedPageCount ) == ( pagesReservedLoan.TotalPages() )", "%s == %s\n\t%u, %u", "unusedPageCount", "pagesReservedLoan.TotalPages()", v48, v49) )
      __debugbreak();
  }
  pagesTaken = 0i64;
  StreamerMemLoan::TakeAllPages(&optionalLoan, &pagesTaken);
  v41 = 0;
  p_pagesTaken = &pagesTaken;
  v43 = 2i64;
  do
  {
    v41 += p_pagesTaken->pages[0];
    p_pagesTaken = (StreamerMemPageCounts *)((char *)p_pagesTaken + 4);
    --v43;
  }
  while ( v43 );
  if ( v41 != v40 )
  {
    v44 = &pagesTaken;
    do
    {
      v5 += v44->pages[0];
      v44 = (StreamerMemPageCounts *)((char *)v44 + 4);
      --v11;
    }
    while ( v11 );
    LODWORD(v49) = v40;
    LODWORD(v48) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 888, ASSERT_TYPE_ASSERT, "( unusedPages.TotalPages() ) == ( unusedPageCount )", "%s == %s\n\t%u, %u", "unusedPages.TotalPages()", "unusedPageCount", v48, v49) )
      __debugbreak();
  }
  v45 = v53;
  v53->pages[0] += pagesTaken.pages[0];
  v45->pages[1] += pagesTaken.pages[1];
  if ( BYTE4(v31[4].data) )
    Stream_Defrag_UnlockHandle((streamer_handle_t)v31->data);
  v46 = outPageDeficitOrCommitCount;
  StreamerMemLoan::~StreamerMemLoan(&optionalLoan);
  return v46;
}

/*
==============
Stream_BackendQueue_ExecTextureDescCopies
==============
*/
void Stream_BackendQueue_ExecTextureDescCopies(const GfxBackEndData *data)
{
  unsigned int currentUpdateBackendDataIndex; 
  __int64 copyTextureDescCommandQueueCount; 
  __int64 v4; 
  StreamBackendGlob *v5; 
  int v6; 
  const GfxImage *GfxImageAtIndex; 
  unsigned int v8; 
  unsigned int BackEndDataIndex; 
  Stream_Logger_Item v10; 
  Stream_Logger_Item item; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1418, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !Sys_IsBackendOwnerThread() )
  {
    if ( !s_streamBackendGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1863, ASSERT_TYPE_ASSERT, "(s_streamBackendGlob)", (const char *)&queryFormat, "s_streamBackendGlob") )
      __debugbreak();
    if ( !s_streamBackendGlob->isInForcedFlush && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1419, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread() || Stream_BackendQueue_IsInForcedFlush()") )
      __debugbreak();
  }
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1420, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  currentUpdateBackendDataIndex = s_streamBackendGlob->currentUpdateBackendDataIndex;
  if ( R_GetBackEndDataIndex(data) != currentUpdateBackendDataIndex )
  {
    BackEndDataIndex = R_GetBackEndDataIndex(data);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1423, ASSERT_TYPE_ASSERT, "( R_GetBackEndDataIndex( data ) ) == ( s_streamBackendGlob->currentUpdateBackendDataIndex )", "%s == %s\n\t%u, %u", "R_GetBackEndDataIndex( data )", "s_streamBackendGlob->currentUpdateBackendDataIndex", BackEndDataIndex, currentUpdateBackendDataIndex) )
      __debugbreak();
  }
  copyTextureDescCommandQueueCount = s_streamBackendGlob->copyTextureDescCommandQueueCount;
  s_streamBackendGlob->copyTextureDescCommandQueueCount = 0;
  if ( copyTextureDescCommandQueueCount )
  {
    v4 = 2359816i64;
    do
    {
      v5 = s_streamBackendGlob;
      v6 = *(_DWORD *)((char *)&s_streamBackendGlob->commands.mHead + v4);
      if ( (v6 & 0x40000) != 0 )
      {
        GfxImageAtIndex = DB_GetGfxImageAtIndex(v6 & 0x1FFFF);
        RB_Texture_CopyStreamedFromPrevBackendFrame(data, GfxImageAtIndex);
        v10.m_type = STREAM_ITEM_IMAGE;
        v10.m_image = GfxImageAtIndex;
        item = v10;
        Stream_Logger_OnPatchDescriptor("Stream_BackendQueue_ExecTextureDescCopies", data, &item, 1, -1);
        v8 = *(_DWORD *)((char *)&v5->commands.mHead + v4);
        if ( (v8 & 0x80000) != 0 )
        {
          Stream_BackendQueue_MarkUpToImagePartLoaded(GfxImageAtIndex, (v8 >> 21) & 3);
        }
        else if ( (v8 & 0x100000) != 0 )
        {
          Stream_BackendQueue_MarkUpToImagePartUnloaded(GfxImageAtIndex, (v8 >> 21) & 3);
        }
      }
      v4 += 4i64;
      --copyTextureDescCommandQueueCount;
    }
    while ( copyTextureDescCommandQueueCount );
  }
}

/*
==============
Stream_BackendQueue_ExecUnloadImageCmd
==============
*/
void Stream_BackendQueue_ExecUnloadImageCmd(const GfxBackEndData *data, ImageCmdData *imageCmd)
{
  const GfxImage *image; 
  unsigned int part; 
  unsigned int imagePartsInUseBefore; 
  unsigned int v7; 
  __int64 ImageClampedPartIndex; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  Stream_Logger_Item item; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1328, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !imageCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1329, ASSERT_TYPE_ASSERT, "(imageCmd)", (const char *)&queryFormat, "imageCmd") )
    __debugbreak();
  image = imageCmd->image;
  part = imageCmd->part;
  imagePartsInUseBefore = imageCmd->imagePartsInUseBefore;
  if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1335, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  if ( part >= image->streamedPartCount )
  {
    LODWORD(v12) = part;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1336, ASSERT_TYPE_ASSERT, "(unsigned)( unclampedPart ) < (unsigned)( image->streamedPartCount )", "unclampedPart doesn't index image->streamedPartCount\n\t%i not in [0, %i)", v12, image->streamedPartCount) )
      __debugbreak();
  }
  item.m_type = STREAM_ITEM_IMAGE;
  item.m_image = image;
  Stream_Logger_OnUnload("Stream_BackendQueue_ExecUnloadImageCmd", data, &item, part);
  if ( !part )
  {
    if ( (imagePartsInUseBefore & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1346, ASSERT_TYPE_ASSERT, "(imagePartsInUseBefore & ( 1 << IMAGE_STREAM_BASE ))", (const char *)&queryFormat, "imagePartsInUseBefore & ( 1 << IMAGE_STREAM_BASE )") )
      __debugbreak();
    RB_Texture_AssignStreamedFallback(data, image->textureId);
    v7 = 0;
    goto LABEL_39;
  }
  if ( !RB_Texture_HasStreamedFallbackAssigned(data, image->textureId) )
  {
    ImageClampedPartIndex = (unsigned int)GetImageClampedPartIndex(image, imagePartsInUseBefore);
    if ( (unsigned int)ImageClampedPartIndex >= image->streamedPartCount )
    {
      LODWORD(v13) = image->streamedPartCount;
      LODWORD(v12) = ImageClampedPartIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1354, ASSERT_TYPE_ASSERT, "(unsigned)( oldHighestLoadedPart ) < (unsigned)( image->streamedPartCount )", "oldHighestLoadedPart doesn't index image->streamedPartCount\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    v9 = (unsigned int)GetImageClampedPartIndex(image, imagePartsInUseBefore & ~(1 << part));
    if ( (unsigned int)v9 >= image->streamedPartCount )
    {
      LODWORD(v13) = image->streamedPartCount;
      LODWORD(v12) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1358, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( image->streamedPartCount )", "part doesn't index image->streamedPartCount\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    v10 = image->streams[ImageClampedPartIndex].levelCountAndSize & 0xF;
    v11 = image->streams[v9].levelCountAndSize & 0xF;
    if ( v11 > v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1362, ASSERT_TYPE_ASSERT, "( newLevelCount ) <= ( oldLevelCount )", "%s <= %s\n\t%u, %u", "newLevelCount", "oldLevelCount", v11, image->streams[ImageClampedPartIndex].levelCountAndSize & 0xF) )
      __debugbreak();
    if ( v10 > image->levelCount )
    {
      LODWORD(v13) = image->levelCount;
      LODWORD(v12) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1363, ASSERT_TYPE_ASSERT, "( oldLevelCount ) <= ( image->levelCount )", "oldLevelCount not in [0, image->levelCount]\n\t%u not in [0, %u]", v12, v13) )
        __debugbreak();
    }
    if ( v11 > image->levelCount )
    {
      LODWORD(v13) = image->levelCount;
      LODWORD(v12) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1364, ASSERT_TYPE_ASSERT, "( newLevelCount ) <= ( image->levelCount )", "newLevelCount not in [0, image->levelCount]\n\t%u not in [0, %u]", v12, v13) )
        __debugbreak();
    }
    if ( v11 < v10 )
    {
      if ( v11 )
        Stream_BackendQueue_UpdateMostDetailedMip(data, image, v11);
      else
        RB_Texture_AssignStreamedFallback(data, image->textureId);
      v7 = ImageClampedPartIndex;
LABEL_39:
      Stream_BackendQueue_QueueCopyTextureDescAndMarkUnloaded(data, image, v7);
    }
  }
}

/*
==============
Stream_BackendQueue_ExecUnmapCmd
==============
*/
__int64 Stream_BackendQueue_ExecUnmapCmd(const GfxBackEndData *data, const StreamUnmapCmdData *unmap, StreamerMemPageCounts *pageAdjust)
{
  unsigned __int8 *start; 
  unsigned __int8 *v7; 
  unsigned int v8; 
  StreamerMemLoan *v9; 
  unsigned int v10; 
  unsigned int v11; 
  int v12; 
  int v13; 
  StreamerMemPageCounts *p_pagesTaken; 
  __int64 v15; 
  StreamerMemPageCounts *v16; 
  __int64 v17; 
  __int64 pool; 
  __int64 v19; 
  unsigned int minPageCount; 
  unsigned __int8 *end; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  Stream_Logger_Item item; 
  StreamerMemPageCounts pagesTaken; 
  StreamerMemLoan v30; 
  StreamerMemLoan result; 

  start = &Stream_AddressSpace_ResolveAddrUnmap(unmap)[unmap->mapOffset];
  v7 = &start[unmap->mapSize];
  v8 = truncate_cast<unsigned int,unsigned __int64>((((unsigned __int64)(v7 + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64) - ((unsigned __int64)start & 0xFFFFFFFFFFFF0000ui64)) >> 16);
  item = *Stream_Logger_MakeItem((Stream_Logger_Item *)&result, &unmap->baseAddrHandle);
  Stream_Logger_OnMemoryUnmapped("Stream_BackendQueue_ExecUnmapCmd", data, &item, unmap->partIndex, start, v7);
  v9 = Mem_Paged_BatchDecommitSubPageMemory(&result, start, v7);
  StreamerMemLoan::StreamerMemLoan(&v30, v9);
  StreamerMemLoan::~StreamerMemLoan(&result);
  if ( !StreamerMemLoan::Ready(&v30) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 913, ASSERT_TYPE_ASSERT, "(loan.Ready())", (const char *)&queryFormat, "loan.Ready()") )
    __debugbreak();
  v10 = StreamerMemLoan::TotalPages(&v30);
  v11 = v10;
  if ( v10 > v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 916, ASSERT_TYPE_ASSERT, "( decommitPageCount ) <= ( pageCount )", "%s <= %s\n\t%u, %u", "decommitPageCount", "pageCount", v10, v8) )
    __debugbreak();
  pagesTaken = 0i64;
  StreamerMemLoan::TakeAllPages(&v30, &pagesTaken);
  v12 = 0;
  v13 = 0;
  p_pagesTaken = &pagesTaken;
  v15 = 2i64;
  do
  {
    v13 += p_pagesTaken->pages[0];
    p_pagesTaken = (StreamerMemPageCounts *)((char *)p_pagesTaken + 4);
    --v15;
  }
  while ( v15 );
  if ( v13 != v11 )
  {
    v16 = &pagesTaken;
    v17 = 2i64;
    do
    {
      v12 += v16->pages[0];
      v16 = (StreamerMemPageCounts *)((char *)v16 + 4);
      --v17;
    }
    while ( v17 );
    LODWORD(v26) = v11;
    LODWORD(v24) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 920, ASSERT_TYPE_ASSERT, "( decommittedPages.TotalPages() ) == ( decommitPageCount )", "%s == %s\n\t%u, %u", "decommittedPages.TotalPages()", "decommitPageCount", v24, v26) )
      __debugbreak();
  }
  pool = (unsigned int)unmap->pool;
  if ( (unsigned int)pool >= 2 )
  {
    LODWORD(v23) = 2;
    LODWORD(end) = unmap->pool;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 32, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", end, v23) )
      __debugbreak();
  }
  if ( pagesTaken.pages[pool] != v11 )
  {
    v19 = (unsigned int)unmap->pool;
    if ( (unsigned int)v19 >= 2 )
    {
      LODWORD(v23) = 2;
      LODWORD(end) = unmap->pool;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 32, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", end, v23) )
        __debugbreak();
    }
    LODWORD(v26) = v11;
    LODWORD(v24) = pagesTaken.pages[v19];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 921, ASSERT_TYPE_ASSERT, "( decommittedPages.PagesForPool( unmap.pool ) ) == ( decommitPageCount )", "%s == %s\n\t%u, %u", "decommittedPages.PagesForPool( unmap.pool )", "decommitPageCount", v24, v26) )
      __debugbreak();
  }
  if ( v11 < unmap->minPageCount )
  {
    Stream_Logger_Dump(start);
    LODWORD(v26) = unmap->minPageCount - v11;
    LODWORD(v24) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 927, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unmap failed for virtual address range [%p - %p). Freed %u, need to free %d more pages", start, v7, v24, v26) )
      __debugbreak();
    if ( v11 < unmap->minPageCount )
    {
      LODWORD(v27) = unmap->minPageCount;
      LODWORD(v25) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 930, ASSERT_TYPE_ASSERT, "( decommitPageCount ) >= ( unmap.minPageCount )", "%s >= %s\n\t%u, %u", "decommitPageCount", "unmap.minPageCount", v25, v27) )
        __debugbreak();
    }
  }
  minPageCount = unmap->minPageCount;
  if ( v11 > minPageCount )
    StreamerMemPageCounts::AddPages(pageAdjust, unmap->pool, v11 - minPageCount);
  if ( unmap->defragLocked )
    Stream_Defrag_UnlockHandle(unmap->baseAddrHandle);
  StreamerMemLoan::~StreamerMemLoan(&v30);
  return v11;
}

/*
==============
Stream_BackendQueue_ForcedFlush
==============
*/
void Stream_BackendQueue_ForcedFlush(void)
{
  Stream_BackendQueue_ForcedFlushInternal(0);
}

/*
==============
Stream_BackendQueue_ForcedFlushInternal
==============
*/
void Stream_BackendQueue_ForcedFlushInternal(bool postLevelUnload)
{
  const char *v2; 
  const char *CurrentThreadContextName; 
  int v4; 
  StreamUpdateId v5; 
  GfxCmdBufContext v6; 
  unsigned int currentUpdateBackendDataIndex; 
  int v8; 
  const GfxBackEndData *BackEndData; 
  StreamBackendGlob *v10; 
  StreamUpdateId currentUpdateId; 
  unsigned int v12; 
  const char *v13; 
  GfxCmdBufContext v14; 
  GfxCmdBufContext result; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_BackendQueue_ForcedFlushInternal");
  v2 = (char *)&queryFormat.fmt + 3;
  if ( postLevelUnload )
    v2 = " for post-level-unload";
  CurrentThreadContextName = Sys_GetCurrentThreadContextName();
  Streamer_StatusPrint("Streamer forced flush starting on %s thread%s.\n", CurrentThreadContextName, v2);
  v4 = Sys_Milliseconds();
  v5 = 0i64;
  s_streamBackendGlob->isInForcedFlush = 1;
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_DRAW_LIT_OPAQUE);
  Sys_EnterCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE);
  if ( s_streamBackendGlob->isInForcedFlush )
  {
    v6 = *RB_GetBackendCmdBufContext(&result);
    currentUpdateBackendDataIndex = s_streamBackendGlob->currentUpdateBackendDataIndex;
    v8 = currentUpdateBackendDataIndex;
    do
    {
      BackEndData = R_GetBackEndData(v8);
      RB_Texture_BeginAllowStreamedTextureUpdate(BackEndData);
      Stream_BackendQueue_ExecTextureDescCopies(BackEndData);
      v14 = v6;
      Stream_Defrag_FrameFlush(&v14, BackEndData);
      v14 = v6;
      Stream_BackendQueue_Update(&v14, BackEndData, s_streamBackendGlob->currentUpdateId);
      if ( postLevelUnload && (_DWORD)v5 == 7 )
        Stream_Defrag_PostLevelUnload(BackEndData);
      RB_Texture_EndAllowStreamedTextureUpdate(BackEndData);
      v8 = ((_BYTE)v8 - 1) & 1;
      v10 = s_streamBackendGlob;
      ++s_streamBackendGlob->currentUpdateId;
      currentUpdateId = v10->currentUpdateId;
      if ( v10->currentAllMapsAndUnmapsCompleteId > (unsigned __int64)currentUpdateId )
        currentUpdateId = v10->currentAllMapsAndUnmapsCompleteId;
      v10->currentAllMapsAndUnmapsCompleteId = currentUpdateId;
      v10->currentUpdateBackendDataIndex = v8;
      LODWORD(v5) = v5 + 1;
    }
    while ( (unsigned int)v5 < 8 );
    if ( currentUpdateBackendDataIndex != v8 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1829, ASSERT_TYPE_ASSERT, "( oldDataIndex ) == ( s_streamBackendGlob->currentUpdateBackendDataIndex )", "%s == %s\n\t%u, %u", "oldDataIndex", "s_streamBackendGlob->currentUpdateBackendDataIndex", currentUpdateBackendDataIndex, v8) )
        __debugbreak();
      v10 = s_streamBackendGlob;
    }
    v10->isInForcedFlush = 0;
    v5 = v10->currentUpdateId;
  }
  Sys_LeaveCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE);
  if ( postLevelUnload )
    Stream_Defrag_Validate();
  v12 = Sys_Milliseconds() - v4;
  v13 = Sys_GetCurrentThreadContextName();
  Streamer_StatusPrint("Streamer forced flush on %s thread took %d ms. Finished with backend queue update ID %zu.\n", v13, v12, v5);
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_BackendQueue_GetAllMapsAndUnmapsCompleteUpdateId
==============
*/
StreamUpdateId Stream_BackendQueue_GetAllMapsAndUnmapsCompleteUpdateId()
{
  StreamUpdateId currentAllMapsAndUnmapsCompleteId; 
  ScopedCriticalSection v2; 

  if ( !s_streamBackendGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1878, ASSERT_TYPE_ASSERT, "(s_streamBackendGlob)", (const char *)&queryFormat, "s_streamBackendGlob") )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v2, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  currentAllMapsAndUnmapsCompleteId = s_streamBackendGlob->currentAllMapsAndUnmapsCompleteId;
  ScopedCriticalSection::~ScopedCriticalSection(&v2);
  return currentAllMapsAndUnmapsCompleteId;
}

/*
==============
Stream_BackendQueue_GetCopyTextureDescQueueSize
==============
*/
__int64 Stream_BackendQueue_GetCopyTextureDescQueueSize()
{
  unsigned int copyTextureDescCommandQueueCount; 
  ScopedCriticalSection v2; 

  ScopedCriticalSection::ScopedCriticalSection(&v2, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  copyTextureDescCommandQueueCount = s_streamBackendGlob->copyTextureDescCommandQueueCount;
  ScopedCriticalSection::~ScopedCriticalSection(&v2);
  return copyTextureDescCommandQueueCount;
}

/*
==============
Stream_BackendQueue_GetCurrentUpdateIdAndBackendDataIndex
==============
*/
void Stream_BackendQueue_GetCurrentUpdateIdAndBackendDataIndex(StreamUpdateId *outUpdateId, unsigned int *outBackendDataIndex)
{
  StreamBackendGlob *v2; 

  v2 = s_streamBackendGlob;
  *outUpdateId = s_streamBackendGlob->currentUpdateId;
  *outBackendDataIndex = v2->currentUpdateBackendDataIndex;
}

/*
==============
Stream_BackendQueue_GetPageAdjustment
==============
*/
__int64 Stream_BackendQueue_GetPageAdjustment(StreamMemPool pool)
{
  __int64 v1; 
  volatile int *v2; 
  int v5; 

  v1 = (unsigned int)pool;
  if ( (unsigned int)pool >= COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 819, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( s_streamBackendGlob->pageAdjustment ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( s_streamBackendGlob->pageAdjustment )\n\t%i not in [0, %i)", pool, v5) )
      __debugbreak();
  }
  v2 = &s_streamBackendGlob->pageAdjustment[v1];
  if ( ((unsigned __int8)v2 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)v2) )
    __debugbreak();
  return (unsigned int)_InterlockedExchange(v2, 0);
}

/*
==============
Stream_BackendQueue_Init
==============
*/
void Stream_BackendQueue_Init(void)
{
  __int64 v0; 
  StreamBackendGlob *v1; 
  BackendCommand *mNodePool; 
  __int64 v3; 
  _DWORD *v4; 
  __int64 v5; 
  BackendCommandQueue *commandQueue; 

  Stream_AddressSpace_Init();
  if ( s_streamBackendGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 200, ASSERT_TYPE_ASSERT, "(s_streamBackendGlob == nullptr)", (const char *)&queryFormat, "s_streamBackendGlob == nullptr") )
    __debugbreak();
  v0 = 8i64;
  v1 = (StreamBackendGlob *)PMem_Alloc(0x250238ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Streamer - StreamBackendGlob");
  memset_0(v1->commands.mNodePool, 0, 0x250230ui64);
  v1->commands.mHead = NULL;
  mNodePool = v1->commands.mNodePool;
  v3 = 49152i64;
  do
  {
    BackendCommand::BackendCommand(mNodePool++);
    --v3;
  }
  while ( v3 );
  v1->commands.mHead = v1->commands.mNodePool;
  v4 = (_DWORD *)v1->commands.mNodePool;
  v5 = 49151i64;
  do
  {
    *v4 &= 0xFF000001;
    *v4 |= 1u;
    v4 += 12;
    --v5;
  }
  while ( v5 );
  *(_DWORD *)&v1->commands.mNodePool[49151] &= 0xFF000000;
  commandQueue = v1->commandQueue;
  do
  {
    BackendCommandQueue::BackendCommandQueue(commandQueue++);
    --v0;
  }
  while ( v0 );
  v1->copyTextureDescCommandQueueCount = 0;
  v1->disablePrtApertureAtUpdateId = 0i64;
  v1->isInForcedFlush = 0;
  v1->currentUpdateId = 1i64;
  v1->currentAllMapsAndUnmapsCompleteId = 1i64;
  v1->currentUpdateBackendDataIndex = 1;
  s_streamBackendGlob = v1;
}

/*
==============
Stream_BackendQueue_IsComplete
==============
*/
bool Stream_BackendQueue_IsComplete(StreamUpdateId updateID)
{
  if ( !s_streamBackendGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1870, ASSERT_TYPE_ASSERT, "(s_streamBackendGlob)", (const char *)&queryFormat, "s_streamBackendGlob") )
    __debugbreak();
  return (unsigned __int64)updateID < s_streamBackendGlob->currentUpdateId;
}

/*
==============
Stream_BackendQueue_IsInForcedFlush
==============
*/
_BOOL8 Stream_BackendQueue_IsInForcedFlush()
{
  StreamBackendGlob *v0; 

  v0 = s_streamBackendGlob;
  if ( !s_streamBackendGlob )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1863, ASSERT_TYPE_ASSERT, "(s_streamBackendGlob)", (const char *)&queryFormat, "s_streamBackendGlob") )
      __debugbreak();
    v0 = s_streamBackendGlob;
  }
  return v0->isInForcedFlush;
}

/*
==============
Stream_BackendQueue_MarkUpToImagePartLoaded
==============
*/
void Stream_BackendQueue_MarkUpToImagePartLoaded(const GfxImage *image, unsigned int part)
{
  unsigned int v4; 
  signed int v5; 
  unsigned int *mLoaded; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1055, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( part >= image->streamedPartCount )
  {
    LODWORD(v9) = part;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1056, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( image->streamedPartCount )", "part doesn't index image->streamedPartCount\n\t%i not in [0, %i)", v9, image->streamedPartCount) )
      __debugbreak();
  }
  v4 = 4 * DB_GetGfxImageIndex(image);
  v5 = v4 + part;
  mLoaded = streamFrontendGlob->imageBits.mLoaded;
  if ( !mLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v7 = mLoaded[(__int64)v5 >> 5];
  if ( _bittest((const int *)&v7, v5 & 0x1F) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1059, ASSERT_TYPE_ASSERT, "(!streamFrontendGlob->imageBits.CheckLoaded( imageIndex * IMAGE_STREAM_COUNT + part ))", (const char *)&queryFormat, "!streamFrontendGlob->imageBits.CheckLoaded( imageIndex * IMAGE_STREAM_COUNT + part )") )
    __debugbreak();
  v8 = 0;
  do
    StreamableBitArray_InterlockedSetArray(streamFrontendGlob->imageBits.mLoaded, v4 + v8++);
  while ( v8 <= part );
}

/*
==============
Stream_BackendQueue_MarkUpToImagePartUnloaded
==============
*/
void Stream_BackendQueue_MarkUpToImagePartUnloaded(const GfxImage *image, unsigned int part)
{
  __int64 v2; 
  unsigned int v4; 
  int v5; 
  unsigned int *mLoaded; 
  unsigned int v7; 
  int i; 
  __int64 v9; 

  v2 = (int)part;
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1071, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (unsigned int)v2 >= image->streamedPartCount )
  {
    LODWORD(v9) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1072, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( image->streamedPartCount )", "part doesn't index image->streamedPartCount\n\t%i not in [0, %i)", v9, image->streamedPartCount) )
      __debugbreak();
  }
  v4 = 4 * DB_GetGfxImageIndex(image);
  v5 = v4 + v2;
  mLoaded = streamFrontendGlob->imageBits.mLoaded;
  if ( !mLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v7 = mLoaded[(__int64)v5 >> 5];
  if ( !_bittest((const int *)&v7, v5 & 0x1F) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1075, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->imageBits.CheckLoaded( imageIndex * IMAGE_STREAM_COUNT + part ))", (const char *)&queryFormat, "streamFrontendGlob->imageBits.CheckLoaded( imageIndex * IMAGE_STREAM_COUNT + part )") )
    __debugbreak();
  for ( i = image->streamedPartCount; ; StreamableBitArray_InterlockedClearArray(streamFrontendGlob->imageBits.mLoaded, v4 + i) )
  {
    --i;
    if ( (unsigned int)v2 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", v2, "unsigned", (unsigned int)v2) )
      __debugbreak();
    if ( i < (int)v2 )
      break;
  }
}

/*
==============
Stream_BackendQueue_PostLevelUnload
==============
*/
void Stream_BackendQueue_PostLevelUnload(void)
{
  if ( !Sys_IsDatabaseThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 254, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseThread())", (const char *)&queryFormat, "Sys_IsDatabaseThread()") )
    __debugbreak();
  if ( !s_streamBackendGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 255, ASSERT_TYPE_ASSERT, "(s_streamBackendGlob)", (const char *)&queryFormat, "s_streamBackendGlob") )
    __debugbreak();
  if ( Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 256, ASSERT_TYPE_ASSERT, "(!Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "!Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 257, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()") )
    __debugbreak();
  Stream_BackendQueue_ForcedFlushInternal(1);
}

/*
==============
Stream_BackendQueue_QueueCopyTextureDesc
==============
*/
void Stream_BackendQueue_QueueCopyTextureDesc(const GfxBackEndData *data, const GfxImage *image)
{
  Stream_BackendQueue_QueueCopyTextureDescNextFrame(data, image, 1u);
}

/*
==============
Stream_BackendQueue_QueueCopyTextureDescAndMarkUnloaded
==============
*/
void Stream_BackendQueue_QueueCopyTextureDescAndMarkUnloaded(const GfxBackEndData *data, const GfxImage *image, unsigned int part)
{
  CopyTextureDescCommand *Frame; 
  int v8; 

  if ( part >= 4 )
  {
    v8 = 4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1153, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( IMAGE_STREAM_COUNT )", "part doesn't index IMAGE_STREAM_COUNT\n\t%i not in [0, %i)", part, v8) )
      __debugbreak();
  }
  Frame = Stream_BackendQueue_QueueCopyTextureDescNextFrame(data, image, 1u);
  if ( Frame )
    *Frame = (CopyTextureDescCommand)(*(_DWORD *)Frame ^ (*(_DWORD *)Frame ^ (part << 21)) & 0x600000 | 0x100000);
  else
    Stream_BackendQueue_MarkUpToImagePartUnloaded(image, part);
}

/*
==============
Stream_BackendQueue_QueueCopyTextureDescNextFrame
==============
*/
CopyTextureDescCommand *Stream_BackendQueue_QueueCopyTextureDescNextFrame(const GfxBackEndData *data, const GfxImage *image, unsigned int counter)
{
  CopyTextureDescCommand *result; 
  CopyTextureDescCommand *v7; 
  unsigned int GfxImageIndex; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1113, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( counter >= 2 )
  {
    LODWORD(v10) = counter;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1114, ASSERT_TYPE_ASSERT, "(unsigned)( counter ) < (unsigned)( 2 )", "counter doesn't index BACKEND_DATA_COUNT\n\t%i not in [0, %i)", v10, 2) )
      __debugbreak();
  }
  result = Stream_BackendQueue_AllocCopyTextureDescCommand(data);
  v7 = result;
  if ( result )
  {
    GfxImageIndex = DB_GetGfxImageIndex(image);
    v9 = GfxImageIndex;
    if ( GfxImageIndex >= 0x20000 )
    {
      LODWORD(v11) = 0x20000;
      LODWORD(v10) = GfxImageIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1120, ASSERT_TYPE_ASSERT, "(unsigned)( imageIndex ) < (unsigned)( ( 1u << CopyTextureDescCommand::IMAGE_INDEX_BITS ) )", "imageIndex doesn't index ( 1u << CopyTextureDescCommand::IMAGE_INDEX_BITS )\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    result = v7;
    *v7 = (CopyTextureDescCommand)(v9 & 0x1FFFF | *(_DWORD *)v7 & 0xFF840000 | ((counter & 1 | 2) << 17));
  }
  return result;
}

/*
==============
Stream_BackendQueue_QueueLoadGenericCmd
==============
*/
StreamUpdateId Stream_BackendQueue_QueueLoadGenericCmd(const StreamKey *streamKey)
{
  BackendCommand *Command; 
  int StreamKeyIndex; 
  StreamUpdateId v4; 
  Stream_Logger_Item item; 
  ScopedCriticalSection v7; 

  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 740, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  if ( !streamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 742, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey", -2i64) )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v7, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  Command = GetCommand();
  *((_BYTE *)Command + 3) = 6;
  Command->mapCmd.baseAddrHandle.data = (unsigned __int64)streamKey;
  StreamKeyIndex = DB_GetStreamKeyIndex(streamKey);
  StreamableBitArray_InterlockedSetArray(streamFrontendGlob->genericRequest.mDanger, StreamKeyIndex);
  item.m_type = STREAM_ITEM_GENERIC;
  item.m_image = (const GfxImage *)streamKey;
  Stream_Logger_OnQueueCommand("QueueGenericCmd", NULL, &item, LOAD_GENERIC, 0);
  v4 = QueueCommand_0_((StreamUpdateId)0i64, Command);
  ScopedCriticalSection::~ScopedCriticalSection(&v7);
  return v4;
}

/*
==============
Stream_BackendQueue_QueueLoadImageCmd
==============
*/
StreamUpdateId Stream_BackendQueue_QueueLoadImageCmd(const GfxImage *image, unsigned int part)
{
  return QueueImageCmd(LOAD_IMAGE, image, part);
}

/*
==============
Stream_BackendQueue_QueueLoadMeshCmd
==============
*/
StreamUpdateId Stream_BackendQueue_QueueLoadMeshCmd(const XModelSurfs *mesh)
{
  BackendCommand *Command; 
  int XModelSurfsIndex; 
  StreamUpdateId v4; 
  Stream_Logger_Item item; 
  ScopedCriticalSection v7; 

  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 718, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  if ( !mesh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 720, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh", -2i64) )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v7, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  Command = GetCommand();
  *((_BYTE *)Command + 3) = 4;
  Command->mapCmd.baseAddrHandle.data = (unsigned __int64)mesh;
  XModelSurfsIndex = DB_GetXModelSurfsIndex(mesh);
  StreamableBitArray_InterlockedSetArray(streamFrontendGlob->meshRequest.mDanger, XModelSurfsIndex);
  item.m_type = STREAM_ITEM_MESH;
  item.m_image = (const GfxImage *)mesh;
  Stream_Logger_OnQueueCommand("QueueMeshCmd", NULL, &item, LOAD_MESH, 0);
  v4 = QueueCommand_0_((StreamUpdateId)0i64, Command);
  ScopedCriticalSection::~ScopedCriticalSection(&v7);
  return v4;
}

/*
==============
Stream_BackendQueue_QueueMapCmdAfter
==============
*/
StreamUpdateId Stream_BackendQueue_QueueMapCmdAfter(StreamUpdateId current, const StreamMapCmdData *map)
{
  BackendCommand *Command; 
  StreamUpdateId v5; 
  BackendCommandQueue *CommandQueue; 
  Stream_Logger_Item item; 
  ScopedCriticalSection v9; 
  Stream_Logger_Item result; 

  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 405, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v9, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  Command = GetCommand();
  *((_BYTE *)Command + 3) = 0;
  Command->8 = ($E67DDDA2984F4C1519F6E303EB4C3FCA)*map;
  item = *Stream_Logger_MakeItem(&result, &map->baseAddrHandle);
  Stream_Logger_OnQueueCommand("QueueMap", NULL, &item, MAP, map->partIndex);
  v5 = QueueCommand_0_(current, Command);
  CommandQueue = GetCommandQueue(v5);
  CommandQueue->mapReservedPageCount.pages[0] += map->pagesReserved.pages[0];
  CommandQueue->mapReservedPageCount.pages[1] += map->pagesReserved.pages[1];
  CommandQueue->mapSizeInBytes += map->mapSize;
  ScopedCriticalSection::~ScopedCriticalSection(&v9);
  return v5;
}

/*
==============
Stream_BackendQueue_QueueUnloadGenericCmd
==============
*/
StreamUpdateId Stream_BackendQueue_QueueUnloadGenericCmd(const StreamKey *streamKey)
{
  BackendCommand *Command; 
  int StreamKeyIndex; 
  StreamUpdateId v4; 
  Stream_Logger_Item item; 
  ScopedCriticalSection v7; 

  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 740, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  if ( !streamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 742, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey", -2i64) )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v7, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  Command = GetCommand();
  *((_BYTE *)Command + 3) = 7;
  Command->mapCmd.baseAddrHandle.data = (unsigned __int64)streamKey;
  StreamKeyIndex = DB_GetStreamKeyIndex(streamKey);
  StreamableBitArray_InterlockedSetArray(streamFrontendGlob->genericRequest.mDanger, StreamKeyIndex);
  item.m_type = STREAM_ITEM_GENERIC;
  item.m_image = (const GfxImage *)streamKey;
  Stream_Logger_OnQueueCommand("QueueGenericCmd", NULL, &item, UNLOAD_GENERIC, 0);
  v4 = QueueCommand_1_((StreamUpdateId)0i64, Command);
  ScopedCriticalSection::~ScopedCriticalSection(&v7);
  return v4;
}

/*
==============
Stream_BackendQueue_QueueUnloadImageCmd
==============
*/
StreamUpdateId Stream_BackendQueue_QueueUnloadImageCmd(const GfxImage *image, unsigned int part)
{
  return QueueImageCmd(UNLOAD_IMAGE, image, part);
}

/*
==============
Stream_BackendQueue_QueueUnloadMeshCmd
==============
*/
StreamUpdateId Stream_BackendQueue_QueueUnloadMeshCmd(const XModelSurfs *mesh)
{
  BackendCommand *Command; 
  int XModelSurfsIndex; 
  StreamUpdateId v4; 
  Stream_Logger_Item item; 
  ScopedCriticalSection v7; 

  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 718, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  if ( !mesh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 720, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh", -2i64) )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v7, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  Command = GetCommand();
  *((_BYTE *)Command + 3) = 5;
  Command->mapCmd.baseAddrHandle.data = (unsigned __int64)mesh;
  XModelSurfsIndex = DB_GetXModelSurfsIndex(mesh);
  StreamableBitArray_InterlockedSetArray(streamFrontendGlob->meshRequest.mDanger, XModelSurfsIndex);
  item.m_type = STREAM_ITEM_MESH;
  item.m_image = (const GfxImage *)mesh;
  Stream_Logger_OnQueueCommand("QueueMeshCmd", NULL, &item, UNLOAD_MESH, 0);
  v4 = QueueCommand_1_((StreamUpdateId)0i64, Command);
  ScopedCriticalSection::~ScopedCriticalSection(&v7);
  return v4;
}

/*
==============
Stream_BackendQueue_QueueUnmapCmdAfter
==============
*/
StreamUpdateId Stream_BackendQueue_QueueUnmapCmdAfter(StreamUpdateId current, const StreamUnmapCmdData *unmap)
{
  BackendCommand *Command; 
  StreamUpdateId v5; 
  BackendCommandQueue *CommandQueue; 
  unsigned int minPageCount; 
  __int64 pool; 
  Stream_Logger_Item item; 
  ScopedCriticalSection v11; 
  Stream_Logger_Item result; 

  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 430, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v11, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  Command = GetCommand();
  *((_BYTE *)Command + 3) = 1;
  *(__m256i *)&Command->mapCmd.baseAddrHandle.data = *(__m256i *)unmap;
  item = *Stream_Logger_MakeItem(&result, &unmap->baseAddrHandle);
  Stream_Logger_OnQueueCommand("QueueUnmap", NULL, &item, UNMAP, unmap->partIndex);
  v5 = QueueCommand_0_(current, Command);
  CommandQueue = GetCommandQueue(v5);
  minPageCount = unmap->minPageCount;
  pool = (unsigned int)unmap->pool;
  if ( (unsigned int)pool >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 48, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", unmap->pool, 2) )
    __debugbreak();
  CommandQueue->unmapMinPageCount.pages[pool] += minPageCount;
  CommandQueue->unmapSizeInBytes += unmap->mapSize;
  ScopedCriticalSection::~ScopedCriticalSection(&v11);
  return v5;
}

/*
==============
Stream_BackendQueue_QueueUnmapCmdNextFrame
==============
*/
StreamUpdateId Stream_BackendQueue_QueueUnmapCmdNextFrame(StreamUpdateId current, const StreamUnmapCmdData *unmap)
{
  BackendCommand *Command; 
  StreamUpdateId v5; 
  BackendCommandQueue *CommandQueue; 
  unsigned int minPageCount; 
  __int64 pool; 
  Stream_Logger_Item item; 
  ScopedCriticalSection v11; 
  Stream_Logger_Item result; 

  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 430, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v11, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  Command = GetCommand();
  *((_BYTE *)Command + 3) = 1;
  *(__m256i *)&Command->mapCmd.baseAddrHandle.data = *(__m256i *)unmap;
  item = *Stream_Logger_MakeItem(&result, &unmap->baseAddrHandle);
  Stream_Logger_OnQueueCommand("QueueUnmap", NULL, &item, UNMAP, unmap->partIndex);
  v5 = QueueCommand_1_(current, Command);
  CommandQueue = GetCommandQueue(v5);
  minPageCount = unmap->minPageCount;
  pool = (unsigned int)unmap->pool;
  if ( (unsigned int)pool >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 48, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", unmap->pool, 2) )
    __debugbreak();
  CommandQueue->unmapMinPageCount.pages[pool] += minPageCount;
  CommandQueue->unmapSizeInBytes += unmap->mapSize;
  ScopedCriticalSection::~ScopedCriticalSection(&v11);
  return v5;
}

/*
==============
Stream_BackendQueue_Shutdown
==============
*/
void Stream_BackendQueue_Shutdown(void)
{
  ScopedCriticalSection v0; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 215, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", -2i64) )
    __debugbreak();
  if ( !s_streamBackendGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 216, ASSERT_TYPE_ASSERT, "(s_streamBackendGlob != nullptr)", (const char *)&queryFormat, "s_streamBackendGlob != nullptr") )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v0, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  Stream_AddressSpace_Shutdown();
  s_streamBackendGlob = NULL;
  ScopedCriticalSection::~ScopedCriticalSection(&v0);
}

/*
==============
Stream_BackendQueue_Update
==============
*/
void Stream_BackendQueue_Update(GfxCmdBufContext *gfxContext, const GfxBackEndData *data, StreamUpdateId updateId)
{
  const GfxBackEndData *v4; 
  bool isInForcedFlush; 
  BackendCommandQueue *CommandQueue; 
  __int64 v7; 
  int v8; 
  StreamerMemPageCounts *p_mapPageCount; 
  StreamerMemPageCounts *v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  unsigned __int64 *p_unmapPageCount; 
  StreamerMemPageCounts *v17; 
  __int64 v18; 
  __int64 v19; 
  int v20; 
  StreamerMemPageCounts *v21; 
  __int64 v22; 
  StreamerMemPageCounts v23; 
  unsigned int v24; 
  unsigned int v25; 
  BackendCommand *mHead; 
  BackendCommand *mTail; 
  unsigned int v28; 
  unsigned int v29; 
  StreamerMemPageCounts *v30; 
  __int64 v31; 
  __int64 v32; 
  unsigned int v33; 
  StreamerMemPageCounts *v34; 
  StreamerMemPageCounts *v35; 
  __int64 v36; 
  __int64 v37; 
  int v38; 
  __int64 v39; 
  int v40; 
  StreamerMemPageCounts *v41; 
  __int64 v42; 
  unsigned int v43; 
  unsigned int GfxImageIndex; 
  unsigned int v45; 
  const XModelSurfs *mesh; 
  streamer_handle_t v47; 
  unsigned int XModelSurfsIndex; 
  const XModelSurfs *v49; 
  int v50; 
  const XModelSurfs *v51; 
  streamer_handle_t v52; 
  unsigned int v53; 
  const XModelSurfs *v54; 
  const StreamKey *streamKey; 
  streamer_handle_t v56; 
  unsigned int StreamKeyIndex; 
  const StreamKey *v58; 
  int v59; 
  const StreamKey *v60; 
  streamer_handle_t v61; 
  unsigned int v62; 
  const StreamKey *v63; 
  int v64; 
  StreamBackendGlob *v65; 
  __int64 v66; 
  int v67; 
  unsigned int v68; 
  StreamerMemPageCounts *v69; 
  __int64 v70; 
  unsigned int v71; 
  StreamerMemPageCounts *p_mapReservedPageCount; 
  __int64 v73; 
  __int64 v74; 
  int v75; 
  StreamerMemPageCounts *v76; 
  __int64 v77; 
  int v78; 
  StreamerMemPageCounts *v79; 
  __int64 v80; 
  unsigned int v81; 
  StreamerMemPageCounts *v82; 
  __int64 v83; 
  __int64 v84; 
  unsigned int v85; 
  StreamerMemPageCounts *p_unmapMinPageCount; 
  StreamerMemPageCounts *v87; 
  __int64 v88; 
  __int64 v89; 
  StreamerMemPageCounts *v90; 
  int v91; 
  StreamerMemPageCounts *v92; 
  __int64 v93; 
  int v94; 
  StreamerMemPageCounts *v95; 
  __int64 v96; 
  int v97; 
  StreamerMemPageCounts *v98; 
  __int64 v99; 
  int v100; 
  StreamerMemPageCounts *p_pageAdjust; 
  __int64 v102; 
  unsigned int v103; 
  StreamerMemPageCounts *v104; 
  __int64 v105; 
  __int64 v106; 
  int v107; 
  StreamerMemPageCounts *v108; 
  __int64 v109; 
  int v110; 
  StreamerMemPageCounts *v111; 
  __int64 v112; 
  int v113; 
  StreamerMemPageCounts *v114; 
  __int64 v115; 
  int v116; 
  StreamerMemPageCounts *v117; 
  __int64 v118; 
  __int64 v119; 
  int v120; 
  StreamerMemPageCounts *v121; 
  __int64 v122; 
  int v123; 
  StreamerMemPageCounts *v124; 
  __int64 v125; 
  __int64 v126; 
  int v127; 
  StreamerMemPageCounts *v128; 
  __int64 v129; 
  int v130; 
  StreamerMemPageCounts *v131; 
  __int64 v132; 
  int v133; 
  StreamerMemPageCounts *v134; 
  __int64 v135; 
  __int64 v136; 
  volatile signed __int32 *v137; 
  __int64 v138; 
  __int64 v139; 
  __int64 v140; 
  __int64 v141; 
  bool v142; 
  __int64 v143; 
  Stream_Logger_Item v144; 
  Stream_Logger_Item v145; 
  Stream_Logger_Item v146; 
  Stream_Logger_Item v147; 
  Stream_Logger_Item item; 
  Stream_Logger_Item v149; 
  Stream_Logger_Item v150; 
  Stream_Logger_Item v151; 
  GfxBackEndData *dataa; 
  StreamerMemPageCounts v153; 
  StreamerMemPageCounts pageAdjust; 
  StreamerMemPageCounts v155; 

  v4 = data;
  dataa = (GfxBackEndData *)data;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_BackendQueue_Update");
  if ( !s_streamBackendGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1863, ASSERT_TYPE_ASSERT, "(s_streamBackendGlob)", (const char *)&queryFormat, "s_streamBackendGlob") )
    __debugbreak();
  isInForcedFlush = s_streamBackendGlob->isInForcedFlush;
  v142 = isInForcedFlush;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1471, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !Sys_IsBackendOwnerThread() && !isInForcedFlush && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1472, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread() || isInForcedFlush)", (const char *)&queryFormat, "Sys_IsBackendOwnerThread() || isInForcedFlush") )
    __debugbreak();
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1473, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  Stream_Defrag_OnBackendQueueUpdate();
  CommandQueue = GetCommandQueue(updateId);
  v7 = 0i64;
  v8 = 0;
  p_mapPageCount = &CommandQueue->mapPageCount;
  v10 = &CommandQueue->mapPageCount;
  v11 = 0i64;
  v12 = 2i64;
  if ( &CommandQueue->mapPageCount > (StreamerMemPageCounts *)&CommandQueue->mapSizeInBytes )
    v12 = 0i64;
  if ( &CommandQueue->mapPageCount <= (StreamerMemPageCounts *)&CommandQueue->mapSizeInBytes )
  {
    do
    {
      v8 += v10->pages[0];
      v10 = (StreamerMemPageCounts *)((char *)v10 + 4);
      ++v11;
    }
    while ( v11 != v12 );
    if ( v8 )
    {
      v13 = 0;
      v14 = 0i64;
      do
      {
        v13 += p_mapPageCount->pages[0];
        p_mapPageCount = (StreamerMemPageCounts *)((char *)p_mapPageCount + 4);
        ++v14;
      }
      while ( v14 != v12 );
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1482, ASSERT_TYPE_ASSERT, "( queue->mapPageCount.TotalPages() ) == ( 0 )", "%s == %s\n\t%u, %u", "queue->mapPageCount.TotalPages()", "0", v13, 0i64) )
        __debugbreak();
    }
  }
  v15 = 0;
  p_unmapPageCount = (unsigned __int64 *)&CommandQueue->unmapPageCount;
  v17 = &CommandQueue->unmapPageCount;
  v18 = 0i64;
  v19 = 2i64;
  if ( &CommandQueue->unmapPageCount > (StreamerMemPageCounts *)&CommandQueue->unmapSizeInBytes )
    v19 = 0i64;
  if ( &CommandQueue->unmapPageCount <= (StreamerMemPageCounts *)&CommandQueue->unmapSizeInBytes )
  {
    do
    {
      v15 += v17->pages[0];
      v17 = (StreamerMemPageCounts *)((char *)v17 + 4);
      ++v18;
    }
    while ( v18 != v19 );
    if ( v15 )
    {
      v20 = 0;
      v21 = &CommandQueue->unmapPageCount;
      v22 = 0i64;
      do
      {
        v20 += v21->pages[0];
        v21 = (StreamerMemPageCounts *)((char *)v21 + 4);
        ++v22;
      }
      while ( v22 != v19 );
      LODWORD(v140) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1483, ASSERT_TYPE_ASSERT, "( queue->unmapPageCount.TotalPages() ) == ( 0 )", "%s == %s\n\t%u, %u", "queue->unmapPageCount.TotalPages()", "0", v140, 0i64) )
        __debugbreak();
    }
  }
  v143 = 0i64;
  v23 = 0i64;
  v153 = 0i64;
  v24 = 0;
  pageAdjust = 0i64;
  v25 = 0;
  v155 = 0i64;
  if ( CommandQueue->commands.mTail )
  {
    while ( 1 )
    {
      mHead = CommandQueue->commands.mHead;
      if ( !CommandQueue->commands.mHead )
      {
        if ( CommandQueue->commands.mTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 97, ASSERT_TYPE_ASSERT, "(mTail == nullptr)", (const char *)&queryFormat, "mTail == nullptr") )
          __debugbreak();
        v68 = 0;
        v69 = &CommandQueue->mapPageCount;
        v70 = 0i64;
        if ( &CommandQueue->mapPageCount <= (StreamerMemPageCounts *)&CommandQueue->mapSizeInBytes )
        {
          do
          {
            v68 += v69->pages[0];
            v69 = (StreamerMemPageCounts *)((char *)v69 + 4);
            ++v70;
          }
          while ( v70 != v12 );
        }
        v71 = 0;
        p_mapReservedPageCount = &CommandQueue->mapReservedPageCount;
        v73 = 0i64;
        v74 = 2i64;
        if ( &CommandQueue->mapReservedPageCount > &CommandQueue->mapPageCount )
          v74 = 0i64;
        if ( &CommandQueue->mapReservedPageCount <= &CommandQueue->mapPageCount )
        {
          do
          {
            v71 += p_mapReservedPageCount->pages[0];
            p_mapReservedPageCount = (StreamerMemPageCounts *)((char *)p_mapReservedPageCount + 4);
            ++v73;
          }
          while ( v73 != v74 );
        }
        if ( v68 > v71 )
        {
          v75 = 0;
          v76 = &CommandQueue->mapReservedPageCount;
          v77 = 0i64;
          if ( &CommandQueue->mapReservedPageCount <= &CommandQueue->mapPageCount )
          {
            do
            {
              v75 += v76->pages[0];
              v76 = (StreamerMemPageCounts *)((char *)v76 + 4);
              ++v77;
            }
            while ( v77 != v74 );
          }
          v78 = 0;
          v79 = &CommandQueue->mapPageCount;
          v80 = 0i64;
          if ( &CommandQueue->mapPageCount <= (StreamerMemPageCounts *)&CommandQueue->mapSizeInBytes )
          {
            do
            {
              v78 += v79->pages[0];
              v79 = (StreamerMemPageCounts *)((char *)v79 + 4);
              ++v80;
            }
            while ( v80 != v12 );
          }
          LODWORD(v141) = v75;
          LODWORD(v140) = v78;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1600, ASSERT_TYPE_ASSERT, "( queue->mapPageCount.TotalPages() ) <= ( queue->mapReservedPageCount.TotalPages() )", "%s <= %s\n\t%u, %u", "queue->mapPageCount.TotalPages()", "queue->mapReservedPageCount.TotalPages()", v140, v141) )
            __debugbreak();
        }
        v81 = 0;
        v82 = &CommandQueue->unmapPageCount;
        v83 = 0i64;
        v84 = 2i64;
        if ( &CommandQueue->unmapPageCount > (StreamerMemPageCounts *)&CommandQueue->unmapSizeInBytes )
          v84 = 0i64;
        if ( &CommandQueue->unmapPageCount <= (StreamerMemPageCounts *)&CommandQueue->unmapSizeInBytes )
        {
          do
          {
            v81 += v82->pages[0];
            v82 = (StreamerMemPageCounts *)((char *)v82 + 4);
            ++v83;
          }
          while ( v83 != v84 );
        }
        v85 = 0;
        p_unmapMinPageCount = &CommandQueue->unmapMinPageCount;
        v87 = &CommandQueue->unmapMinPageCount;
        v88 = 0i64;
        v89 = 2i64;
        if ( &CommandQueue->unmapMinPageCount > &CommandQueue->unmapPageCount )
          v89 = 0i64;
        v90 = &CommandQueue->mapReservedPageCount;
        if ( &CommandQueue->unmapMinPageCount <= &CommandQueue->unmapPageCount )
        {
          do
          {
            v85 += v87->pages[0];
            v87 = (StreamerMemPageCounts *)((char *)v87 + 4);
            ++v88;
          }
          while ( v88 != v89 );
          if ( v81 < v85 )
          {
            v91 = 0;
            v92 = &CommandQueue->unmapMinPageCount;
            v93 = 0i64;
            do
            {
              v91 += v92->pages[0];
              v92 = (StreamerMemPageCounts *)((char *)v92 + 4);
              ++v93;
            }
            while ( v93 != v89 );
            v94 = 0;
            v95 = &CommandQueue->unmapPageCount;
            v96 = 0i64;
            if ( p_unmapPageCount <= &CommandQueue->unmapSizeInBytes )
            {
              do
              {
                v94 += v95->pages[0];
                v95 = (StreamerMemPageCounts *)((char *)v95 + 4);
                ++v96;
              }
              while ( v96 != v84 );
            }
            LODWORD(v141) = v91;
            LODWORD(v140) = v94;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1601, ASSERT_TYPE_ASSERT, "( queue->unmapPageCount.TotalPages() ) >= ( queue->unmapMinPageCount.TotalPages() )", "%s >= %s\n\t%u, %u", "queue->unmapPageCount.TotalPages()", "queue->unmapMinPageCount.TotalPages()", v140, v141) )
              __debugbreak();
          }
        }
        v97 = 0;
        v98 = &CommandQueue->mapPageCount;
        v99 = 0i64;
        if ( &CommandQueue->mapPageCount <= (StreamerMemPageCounts *)&CommandQueue->mapSizeInBytes )
        {
          do
          {
            v97 += v98->pages[0];
            v98 = (StreamerMemPageCounts *)((char *)v98 + 4);
            ++v99;
          }
          while ( v99 != v12 );
        }
        v100 = 0;
        p_pageAdjust = &pageAdjust;
        v102 = 2i64;
        do
        {
          v100 += p_pageAdjust->pages[0];
          p_pageAdjust = (StreamerMemPageCounts *)((char *)p_pageAdjust + 4);
          --v102;
        }
        while ( v102 );
        v103 = 0;
        v104 = &CommandQueue->mapReservedPageCount;
        v105 = 0i64;
        v106 = 2i64;
        if ( &CommandQueue->mapReservedPageCount > &CommandQueue->mapPageCount )
          v106 = 0i64;
        if ( &CommandQueue->mapReservedPageCount <= &CommandQueue->mapPageCount )
        {
          do
          {
            v103 += v104->pages[0];
            v104 = (StreamerMemPageCounts *)((char *)v104 + 4);
            ++v105;
          }
          while ( v105 != v106 );
        }
        if ( v100 + v97 > v103 )
        {
          v107 = 0;
          v108 = &CommandQueue->mapReservedPageCount;
          v109 = 0i64;
          if ( v90 <= &CommandQueue->mapPageCount )
          {
            do
            {
              v107 += v108->pages[0];
              v108 = (StreamerMemPageCounts *)((char *)v108 + 4);
              ++v109;
            }
            while ( v109 != v106 );
          }
          v110 = 0;
          v111 = &CommandQueue->mapPageCount;
          v112 = 0i64;
          if ( &CommandQueue->mapPageCount <= (StreamerMemPageCounts *)&CommandQueue->mapSizeInBytes )
          {
            do
            {
              v110 += v111->pages[0];
              v111 = (StreamerMemPageCounts *)((char *)v111 + 4);
              ++v112;
            }
            while ( v112 != v12 );
          }
          v113 = 0;
          v114 = &pageAdjust;
          v115 = 2i64;
          do
          {
            v113 += v114->pages[0];
            v114 = (StreamerMemPageCounts *)((char *)v114 + 4);
            --v115;
          }
          while ( v115 );
          LODWORD(v141) = v107;
          LODWORD(v140) = v113 + v110;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1603, ASSERT_TYPE_ASSERT, "( queue->mapPageCount.TotalPages() + pageAdjustMap.TotalPages() ) <= ( queue->mapReservedPageCount.TotalPages() )", "%s <= %s\n\t%u, %u", "queue->mapPageCount.TotalPages() + pageAdjustMap.TotalPages()", "queue->mapReservedPageCount.TotalPages()", v140, v141) )
            __debugbreak();
        }
        v116 = 0;
        v117 = &CommandQueue->unmapPageCount;
        v118 = 0i64;
        v119 = 2i64;
        if ( &CommandQueue->unmapPageCount > (StreamerMemPageCounts *)&CommandQueue->unmapSizeInBytes )
          v119 = 0i64;
        if ( &CommandQueue->unmapPageCount <= (StreamerMemPageCounts *)&CommandQueue->unmapSizeInBytes )
        {
          do
          {
            v116 += v117->pages[0];
            v117 = (StreamerMemPageCounts *)((char *)v117 + 4);
            ++v118;
          }
          while ( v118 != v119 );
        }
        v120 = 0;
        v121 = &v155;
        v122 = 2i64;
        do
        {
          v120 += v121->pages[0];
          v121 = (StreamerMemPageCounts *)((char *)v121 + 4);
          --v122;
        }
        while ( v122 );
        v123 = 0;
        v124 = &CommandQueue->unmapMinPageCount;
        v125 = 0i64;
        v126 = 2i64;
        if ( &CommandQueue->unmapMinPageCount > &CommandQueue->unmapPageCount )
          v126 = 0i64;
        if ( &CommandQueue->unmapMinPageCount <= &CommandQueue->unmapPageCount )
        {
          do
          {
            v123 += v124->pages[0];
            v124 = (StreamerMemPageCounts *)((char *)v124 + 4);
            ++v125;
          }
          while ( v125 != v126 );
        }
        if ( v116 - v120 != v123 )
        {
          v127 = 0;
          v128 = &CommandQueue->unmapMinPageCount;
          v129 = 0i64;
          if ( p_unmapMinPageCount <= &CommandQueue->unmapPageCount )
          {
            do
            {
              v127 += v128->pages[0];
              v128 = (StreamerMemPageCounts *)((char *)v128 + 4);
              ++v129;
            }
            while ( v129 != v126 );
          }
          v130 = 0;
          v131 = &CommandQueue->unmapPageCount;
          v132 = 0i64;
          if ( p_unmapPageCount <= &CommandQueue->unmapSizeInBytes )
          {
            do
            {
              v130 += v131->pages[0];
              v131 = (StreamerMemPageCounts *)((char *)v131 + 4);
              ++v132;
            }
            while ( v132 != v119 );
          }
          v133 = 0;
          v134 = &v155;
          v135 = 2i64;
          do
          {
            v133 += v134->pages[0];
            v134 = (StreamerMemPageCounts *)((char *)v134 + 4);
            --v135;
          }
          while ( v135 );
          LODWORD(v141) = v127;
          LODWORD(v140) = v130 - v133;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1607, ASSERT_TYPE_ASSERT, "( queue->unmapPageCount.TotalPages() - pageAdjustUnmap.TotalPages() ) == ( queue->unmapMinPageCount.TotalPages() )", "%s == %s\n\t%u, %u", "queue->unmapPageCount.TotalPages() - pageAdjustUnmap.TotalPages()", "queue->unmapMinPageCount.TotalPages()", v140, v141) )
            __debugbreak();
        }
        if ( CommandQueue->mapSizeInBytes != v143 )
        {
          LODWORD(v141) = v143;
          LODWORD(v140) = CommandQueue->mapSizeInBytes;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1609, ASSERT_TYPE_ASSERT, "( queue->mapSizeInBytes ) == ( mapSizeInBytes )", "%s == %s\n\t%u, %u", "queue->mapSizeInBytes", "mapSizeInBytes", v140, v141) )
            __debugbreak();
        }
        if ( CommandQueue->unmapSizeInBytes != v153 )
        {
          LODWORD(v141) = v153.pages[0];
          LODWORD(v140) = CommandQueue->unmapSizeInBytes;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1610, ASSERT_TYPE_ASSERT, "( queue->unmapSizeInBytes ) == ( unmapSizeInBytes )", "%s == %s\n\t%u, %u", "queue->unmapSizeInBytes", "unmapSizeInBytes", v140, v141) )
            __debugbreak();
        }
        CommandQueue->mapPageCount = 0i64;
        *v90 = 0i64;
        CommandQueue->mapSizeInBytes = 0i64;
        *p_unmapPageCount = 0i64;
        *p_unmapMinPageCount = 0i64;
        CommandQueue->unmapSizeInBytes = 0i64;
        Mem_Paged_BatchFlush();
        v24 = pageAdjust.pages[0];
        v25 = v155.pages[0];
        goto LABEL_204;
      }
      if ( *(_DWORD *)mHead << 8 )
      {
        CommandQueue->commands.mHead = &mHead[(__int64)(int)(*(_DWORD *)mHead << 8) >> 8];
        *(_DWORD *)mHead &= 0xFF000000;
        mTail = CommandQueue->commands.mTail;
        if ( mTail && (*(_DWORD *)mTail & 0xFFFFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 113, ASSERT_TYPE_ASSERT, "(mTail == nullptr || mTail->next == 0)", (const char *)&queryFormat, "mTail == nullptr || mTail->next == 0") )
          __debugbreak();
      }
      else
      {
        if ( CommandQueue->commands.mTail != mHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 103, ASSERT_TYPE_ASSERT, "(mTail == mHead)", (const char *)&queryFormat, "mTail == mHead") )
          __debugbreak();
        CommandQueue->commands.mHead = NULL;
        CommandQueue->commands.mTail = NULL;
      }
      switch ( *((_BYTE *)mHead + 3) )
      {
        case 0:
          v28 = Stream_BackendQueue_ExecMapCmd(v4, &mHead->mapCmd, &pageAdjust);
          StreamerMemPageCounts::AddPages(&CommandQueue->mapPageCount, mHead->mapCmd.pool, v28);
          v29 = 0;
          v30 = &CommandQueue->mapPageCount;
          v31 = 0i64;
          v32 = 2i64;
          if ( &CommandQueue->mapPageCount > (StreamerMemPageCounts *)&CommandQueue->mapSizeInBytes )
            v32 = 0i64;
          if ( &CommandQueue->mapPageCount <= (StreamerMemPageCounts *)&CommandQueue->mapSizeInBytes )
          {
            do
            {
              v29 += v30->pages[0];
              v30 = (StreamerMemPageCounts *)((char *)v30 + 4);
              ++v31;
            }
            while ( v31 != v32 );
          }
          v33 = 0;
          v34 = &CommandQueue->mapReservedPageCount;
          v35 = &CommandQueue->mapReservedPageCount;
          v36 = 0i64;
          v37 = 2i64;
          if ( &CommandQueue->mapReservedPageCount > &CommandQueue->mapPageCount )
            v37 = 0i64;
          if ( &CommandQueue->mapReservedPageCount <= &CommandQueue->mapPageCount )
          {
            do
            {
              v33 += v35->pages[0];
              v35 = (StreamerMemPageCounts *)((char *)v35 + 4);
              ++v36;
            }
            while ( v36 != v37 );
          }
          if ( v29 > v33 )
          {
            v38 = 0;
            v39 = 0i64;
            if ( v34 <= &CommandQueue->mapPageCount )
            {
              do
              {
                v38 += v34->pages[0];
                v34 = (StreamerMemPageCounts *)((char *)v34 + 4);
                ++v39;
              }
              while ( v39 != v37 );
            }
            v40 = 0;
            v41 = &CommandQueue->mapPageCount;
            v42 = 0i64;
            if ( &CommandQueue->mapPageCount <= (StreamerMemPageCounts *)&CommandQueue->mapSizeInBytes )
            {
              do
              {
                v40 += v41->pages[0];
                v41 = (StreamerMemPageCounts *)((char *)v41 + 4);
                ++v42;
              }
              while ( v42 != v32 );
            }
            LODWORD(v141) = v38;
            LODWORD(v140) = v40;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1508, ASSERT_TYPE_ASSERT, "( queue->mapPageCount.TotalPages() ) <= ( queue->mapReservedPageCount.TotalPages() )", "%s <= %s\n\t%u, %u", "queue->mapPageCount.TotalPages()", "queue->mapReservedPageCount.TotalPages()", v140, v141) )
              __debugbreak();
          }
          v143 += mHead->mapCmd.mapSize;
          v4 = dataa;
          break;
        case 1:
          v43 = Stream_BackendQueue_ExecUnmapCmd(v4, (const StreamUnmapCmdData *)&mHead->8, &v155);
          StreamerMemPageCounts::AddPages(&CommandQueue->unmapPageCount, mHead->unmapCmd.pool, v43);
          v153 = (StreamerMemPageCounts)(mHead->mapCmd.mapSize + *(_QWORD *)&v23);
          break;
        case 2:
          GfxImageIndex = DB_GetGfxImageIndex(mHead->imageCmd.image);
          Stream_Defrag_OnLoadItem(STREAM_ITEM_IMAGE, 4 * GfxImageIndex + mHead->imageCmd.part, *(streamer_handle_t *)(mHead->mapCmd.baseAddrHandle.data + 224));
          if ( v142 )
            R_LockGfxImmediateContext();
          Stream_BackendQueue_ExecLoadImageCmd(v4, (ImageCmdData *)&mHead->8);
          if ( v142 )
            goto LABEL_67;
          break;
        case 3:
          v45 = DB_GetGfxImageIndex(mHead->imageCmd.image);
          Stream_Defrag_OnUnloadItem(STREAM_ITEM_IMAGE, 4 * v45 + mHead->imageCmd.part, *(streamer_handle_t *)(mHead->mapCmd.baseAddrHandle.data + 224));
          if ( v142 )
            R_LockGfxImmediateContext();
          Stream_BackendQueue_ExecUnloadImageCmd(v4, (ImageCmdData *)&mHead->8);
          if ( v142 )
LABEL_67:
            R_UnlockGfxImmediateContext();
          break;
        case 4:
          mesh = mHead->meshCmd.mesh;
          v47.data = mesh->shared->data.streamedDataHandle.data;
          XModelSurfsIndex = DB_GetXModelSurfsIndex(mesh);
          Stream_Defrag_OnLoadItem(STREAM_ITEM_MESH, XModelSurfsIndex, v47);
          v49 = mHead->meshCmd.mesh;
          if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 972, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh") )
            __debugbreak();
          if ( !v49->shared )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 973, ASSERT_TYPE_ASSERT, "(mesh->shared)", (const char *)&queryFormat, "mesh->shared") )
              __debugbreak();
            if ( !v49->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 747, ASSERT_TYPE_ASSERT, "(modelSurfs->shared)", (const char *)&queryFormat, "modelSurfs->shared") )
              __debugbreak();
          }
          if ( (v49->shared->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 974, ASSERT_TYPE_ASSERT, "(XModelSurfs_IsStreamed( mesh ))", (const char *)&queryFormat, "XModelSurfs_IsStreamed( mesh )") )
            __debugbreak();
          if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 975, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
            __debugbreak();
          v145.m_type = STREAM_ITEM_MESH;
          v145.m_image = (const GfxImage *)v49;
          item = v145;
          Stream_Logger_OnLoad("Stream_BackendQueue_ExecLoadMeshCmd", v4, &item, 0);
          v50 = DB_GetXModelSurfsIndex(v49);
          StreamableBitArray_InterlockedSetArray(streamFrontendGlob->meshBits.mLoaded, v50);
          goto LABEL_88;
        case 5:
          v51 = mHead->meshCmd.mesh;
          v52.data = v51->shared->data.streamedDataHandle.data;
          v53 = DB_GetXModelSurfsIndex(v51);
          Stream_Defrag_OnUnloadItem(STREAM_ITEM_MESH, v53, v52);
          v54 = mHead->meshCmd.mesh;
          if ( !v54 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 988, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh") )
            __debugbreak();
          if ( !v54->shared )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 989, ASSERT_TYPE_ASSERT, "(mesh->shared)", (const char *)&queryFormat, "mesh->shared") )
              __debugbreak();
            if ( !v54->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 747, ASSERT_TYPE_ASSERT, "(modelSurfs->shared)", (const char *)&queryFormat, "modelSurfs->shared") )
              __debugbreak();
          }
          if ( (v54->shared->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 990, ASSERT_TYPE_ASSERT, "(XModelSurfs_IsStreamed( mesh ))", (const char *)&queryFormat, "XModelSurfs_IsStreamed( mesh )") )
            __debugbreak();
          if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 991, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
            __debugbreak();
          v144.m_type = STREAM_ITEM_MESH;
          v144.m_image = (const GfxImage *)v54;
          v149 = v144;
          Stream_Logger_OnUnload("Stream_BackendQueue_ExecUnloadMeshCmd", v4, &v149, 0);
          v50 = DB_GetXModelSurfsIndex(v54);
          StreamableBitArray_InterlockedClearArray(streamFrontendGlob->meshBits.mLoaded, v50);
LABEL_88:
          StreamableBitArray_InterlockedClearArray(streamFrontendGlob->meshRequest.mFreeable, v50);
          StreamableBitArray_InterlockedClearArray(streamFrontendGlob->meshRequest.mDanger, v50);
          break;
        case 6:
          streamKey = mHead->genericCmd.streamKey;
          v56.data = streamKey->data.dataHandle.data;
          StreamKeyIndex = DB_GetStreamKeyIndex(streamKey);
          Stream_Defrag_OnLoadItem(STREAM_ITEM_GENERIC, StreamKeyIndex, v56);
          v58 = mHead->genericCmd.streamKey;
          if ( !v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1004, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey") )
            __debugbreak();
          if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1005, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
            __debugbreak();
          v146.m_type = STREAM_ITEM_GENERIC;
          v146.m_image = (const GfxImage *)v58;
          v150 = v146;
          Stream_Logger_OnLoad("Stream_BackendQueue_ExecLoadGenericCmd", dataa, &v150, 0);
          v59 = DB_GetStreamKeyIndex(v58);
          StreamableBitArray_InterlockedSetArray(streamFrontendGlob->genericBits.mLoaded, v59);
          StreamableBitArray_InterlockedClearArray(streamFrontendGlob->genericRequest.mFreeable, v59);
          StreamableBitArray_InterlockedClearArray(streamFrontendGlob->genericRequest.mDanger, v59);
          StreamKey_UserLoadedBackend(v58);
          v4 = dataa;
          break;
        case 7:
          v60 = mHead->genericCmd.streamKey;
          v61.data = v60->data.dataHandle.data;
          v62 = DB_GetStreamKeyIndex(v60);
          Stream_Defrag_OnUnloadItem(STREAM_ITEM_GENERIC, v62, v61);
          v63 = mHead->genericCmd.streamKey;
          if ( !v63 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1027, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey") )
            __debugbreak();
          if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1028, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
            __debugbreak();
          v147.m_type = STREAM_ITEM_GENERIC;
          v147.m_image = (const GfxImage *)v63;
          v151 = v147;
          Stream_Logger_OnUnload("Stream_BackendQueue_ExecUnloadGenericCmd", v4, &v151, 0);
          StreamKey_UserUnloadedBackend(v63);
          v64 = DB_GetStreamKeyIndex(v63);
          StreamableBitArray_InterlockedClearArray(streamFrontendGlob->genericBits.mLoaded, v64);
          StreamableBitArray_InterlockedClearArray(streamFrontendGlob->genericRequest.mFreeable, v64);
          StreamableBitArray_InterlockedClearArray(streamFrontendGlob->genericRequest.mDanger, v64);
          break;
        default:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1592, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
            __debugbreak();
          break;
      }
      v65 = s_streamBackendGlob;
      if ( (*(_DWORD *)mHead & 0xFFFFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 652, ASSERT_TYPE_ASSERT, "(node->next == 0)", (const char *)&queryFormat, "node->next == 0") )
        __debugbreak();
      if ( !v65->commands.mHead )
        break;
      v66 = v65->commands.mHead - mHead;
      *(_DWORD *)mHead ^= (*(_DWORD *)mHead ^ v66) & 0xFFFFFF;
      v67 = *(_DWORD *)mHead << 8;
      if ( (__int64)v67 >> 8 == v66 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 659, ASSERT_TYPE_ASSERT, "( node->next ) == ( curHead - node )", "%s == %s\n\t%lli, %lli", "node->next", "curHead - node", (__int64)v67 >> 8, v66) )
      {
LABEL_129:
        v65->commands.mHead = mHead;
        v23 = v153;
      }
      else
      {
        __debugbreak();
        v65->commands.mHead = mHead;
        v23 = v153;
      }
    }
    *(_DWORD *)mHead &= 0xFF000000;
    goto LABEL_129;
  }
LABEL_204:
  LODWORD(dataa) = v25 + v24;
  HIDWORD(dataa) = v155.pages[1] + pageAdjust.pages[1];
  v153 = (StreamerMemPageCounts)dataa;
  Stream_Defrag_GivePages(&v153);
  do
  {
    if ( (unsigned int)v7 >= 2 )
    {
      LODWORD(v139) = 2;
      LODWORD(v138) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 32, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", v138, v139) )
        __debugbreak();
    }
    v136 = (int)v153.pages[(unsigned int)v7];
    if ( (_DWORD)v136 )
    {
      if ( (unsigned int)v136 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", v136, "unsigned", (unsigned int)v136) )
        __debugbreak();
      v137 = &s_streamBackendGlob->pageAdjustment[v7];
      if ( ((unsigned __int8)v137 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_streamBackendGlob->pageAdjustment[v7]) )
        __debugbreak();
      _InterlockedExchangeAdd(v137, v136);
    }
    ++v7;
  }
  while ( (unsigned __int64)(4 * v7 + 2425356) < 0x250214 );
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_BackendQueue_UpdateMostDetailedMip
==============
*/
void Stream_BackendQueue_UpdateMostDetailedMip(const GfxBackEndData *data, const GfxImage *image, unsigned int clampedLevelCount)
{
  unsigned int v6; 

  if ( clampedLevelCount > image->levelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1044, ASSERT_TYPE_ASSERT, "( clampedLevelCount ) <= ( image->levelCount )", "%s <= %s\n\t%u, %u", "clampedLevelCount", "image->levelCount", clampedLevelCount, image->levelCount) )
    __debugbreak();
  v6 = image->levelCount - clampedLevelCount;
  RB_Texture_SetStreamedMostDetailedMip(data, image, v6);
  Stream_Logger_OnUpdateImageClamp("Stream_BackendQueue_UpdateMostDetailedMip", data, image, v6);
}

/*
==============
Stream_BackendQueue_UpdateSettings
==============
*/
void Stream_BackendQueue_UpdateSettings(void)
{
  ;
}

