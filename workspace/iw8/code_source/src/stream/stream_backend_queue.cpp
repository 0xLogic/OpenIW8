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
  StreamUpdateId v16; 
  __int64 v18; 
  __int64 v19; 
  Stream_Logger_Item item; 
  ScopedCriticalSection v21; 

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
    LODWORD(v18) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 668, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( image->streamedPartCount )", "part doesn't index image->streamedPartCount\n\t%i not in [0, %i)", v18, image->streamedPartCount) )
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
        LODWORD(v19) = streamFrontendGlob->imageBits.mBitCount;
        LODWORD(v18) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 371, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v18, v19) )
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
  ScopedCriticalSection::ScopedCriticalSection(&v21, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  _RBX = GetCommand();
  *((_BYTE *)_RBX + 3) = v5;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+0B8h+item.___u0]
    vmovups xmmword ptr [rax+8], xmm0
  }
  item.m_type = STREAM_ITEM_IMAGE;
  item.m_image = image;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+0B8h+item.___u0]
    vmovdqa xmmword ptr [rsp+0B8h+item.___u0], xmm0
  }
  Stream_Logger_OnQueueCommand("QueueImageCmd", NULL, &item, v5, _RBX->imageCmd.part);
  v16 = QueueCommand_0_((StreamUpdateId)0i64, _RBX);
  ScopedCriticalSection::~ScopedCriticalSection(&v21);
  return v16;
}

/*
==============
RB_Stream_BackendFrameBegin
==============
*/
void RB_Stream_BackendFrameBegin(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  GfxCmdBufContext v5; 
  ScopedCriticalSection v6; 

  _RDI = gfxContext;
  Sys_ProfBeginNamedEvent(0xFF808080, "RB_Stream_BackendFrameBegin");
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1641, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()", -2i64) )
    __debugbreak();
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v6, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rsp+78h+var_38], xmm0
  }
  Stream_Defrag_FrameBegin(&v5, data);
  ScopedCriticalSection::~ScopedCriticalSection(&v6);
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
  StreamBackendGlob *v10; 
  StreamUpdateId currentAllMapsAndUnmapsCompleteId; 
  GfxCmdBufContext v12; 
  GfxCmdBufContext v13; 
  GfxCmdBufContext v14; 
  ScopedCriticalSection v15; 

  _RSI = gfxContext;
  Sys_ProfBeginNamedEvent(0xFF808080, "RB_Stream_BackendFrameEnd");
  if ( !Sys_IsBackendOwnerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1664, ASSERT_TYPE_ASSERT, "(Sys_IsBackendOwnerThread())", (const char *)&queryFormat, "Sys_IsBackendOwnerThread()") )
    __debugbreak();
  if ( data != backEndData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1665, ASSERT_TYPE_ASSERT, "(data == backEndData)", (const char *)&queryFormat, "data == backEndData") )
    __debugbreak();
  if ( frontEndDataOut && frontEndDataOut == backEndData && !frontEndDataOut->finishReady && !frontEndDataOut->abortReady && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1674, ASSERT_TYPE_ASSERT, "(feData != backEndData || feData->finishReady || feData->abortReady)", (const char *)&queryFormat, "feData != backEndData || feData->finishReady || feData->abortReady") )
    __debugbreak();
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v15, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  RB_Texture_BeginAllowStreamedTextureUpdate(data);
  v4 = r_debugShaderTexture;
  if ( !r_debugShaderTexture && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 627, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = v4->current.integer == 10 && !r_deviceDebug->current.enabled;
  Stream_Debug_UpdateTexturesForDebugShader(data, v5);
  Stream_BackendQueue_ExecTextureDescCopies(data);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rsp+0B8h+var_58], xmm0
  }
  Stream_Defrag_FrameEnd(&v12, data);
  currentUpdateId = s_streamBackendGlob->currentUpdateId;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rsp+0B8h+var_48], xmm0
  }
  Stream_BackendQueue_Update(&v13, data, currentUpdateId);
  if ( GetCommandQueue(currentUpdateId)->commands.mTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1721, ASSERT_TYPE_ASSERT, "(GetCommandQueue( id )->commands.Empty())", (const char *)&queryFormat, "GetCommandQueue( id )->commands.Empty()") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rsp+0B8h+var_38], xmm0
  }
  Stream_Defrag_IssueCopies(&v14);
  v10 = s_streamBackendGlob;
  if ( currentUpdateId != s_streamBackendGlob->currentUpdateId )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1727, ASSERT_TYPE_ASSERT, "( id ) == ( s_streamBackendGlob->currentUpdateId )", "%s == %s\n\t%llu, %llu", (const char *)&valueOut, "s_streamBackendGlob->currentUpdateId", currentUpdateId, s_streamBackendGlob->currentUpdateId) )
      __debugbreak();
    v10 = s_streamBackendGlob;
  }
  currentAllMapsAndUnmapsCompleteId = ++v10->currentUpdateId;
  if ( v10->currentAllMapsAndUnmapsCompleteId > (unsigned __int64)currentAllMapsAndUnmapsCompleteId )
    currentAllMapsAndUnmapsCompleteId = v10->currentAllMapsAndUnmapsCompleteId;
  v10->currentAllMapsAndUnmapsCompleteId = currentAllMapsAndUnmapsCompleteId;
  s_streamBackendGlob->currentUpdateBackendDataIndex = ((unsigned __int8)R_GetBackEndDataIndex(data) - 1) & 1;
  RB_Texture_EndAllowStreamedTextureUpdate(data);
  ScopedCriticalSection::~ScopedCriticalSection(&v15);
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
  unsigned int v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  CopyTextureDescCommand *Frame; 
  __int64 v15; 
  __int64 v16; 
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
    LODWORD(v15) = part;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1233, ASSERT_TYPE_ASSERT, "(unsigned)( unclampedPart ) < (unsigned)( image->streamedPartCount )", "unclampedPart doesn't index image->streamedPartCount\n\t%i not in [0, %i)", v15, image->streamedPartCount) )
      __debugbreak();
  }
  item.m_type = STREAM_ITEM_IMAGE;
  item.m_image = image;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+68h+item.___u0]
    vmovdqa xmmword ptr [rsp+68h+item.___u0], xmm0
  }
  Stream_Logger_OnLoad("Stream_BackendQueue_ExecLoadImageCmd", data, &item, part);
  ImageClampedPartIndex = (unsigned int)GetImageClampedPartIndex(image, imagePartsInUseBefore);
  v9 = GetImageClampedPartIndex(image, imagePartsInUseBefore | (1 << part));
  v10 = v9;
  if ( v9 != 4 )
  {
    if ( v9 >= image->streamedPartCount )
    {
      LODWORD(v16) = image->streamedPartCount;
      LODWORD(v15) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1247, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( image->streamedPartCount )", "part doesn't index image->streamedPartCount\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    if ( (_DWORD)ImageClampedPartIndex == 4 )
      v11 = 0;
    else
      v11 = image->streams[ImageClampedPartIndex].levelCountAndSize & 0xF;
    v12 = image->streams[v10].levelCountAndSize & 0xF;
    if ( v12 < v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1251, ASSERT_TYPE_ASSERT, "( newLevelCount ) >= ( oldLevelCount )", "%s >= %s\n\t%u, %u", "newLevelCount", "oldLevelCount", image->streams[v10].levelCountAndSize & 0xF, v11) )
      __debugbreak();
    if ( v11 > image->levelCount )
    {
      LODWORD(v16) = image->levelCount;
      LODWORD(v15) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1252, ASSERT_TYPE_ASSERT, "( oldLevelCount ) <= ( image->levelCount )", "oldLevelCount not in [0, image->levelCount]\n\t%u not in [0, %u]", v15, v16) )
        __debugbreak();
    }
    if ( v12 > image->levelCount )
    {
      LODWORD(v16) = image->levelCount;
      LODWORD(v15) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1253, ASSERT_TYPE_ASSERT, "( newLevelCount ) <= ( image->levelCount )", "newLevelCount not in [0, image->levelCount]\n\t%u not in [0, %u]", v15, v16) )
        __debugbreak();
    }
    if ( v12 > v11 )
    {
      if ( RB_Texture_HasStreamedFallbackAssigned(data, image->textureId) )
      {
        RB_Texture_FixupStreamedPixelsPtr(data, image, 0);
        item.m_type = STREAM_ITEM_IMAGE;
        item.m_image = image;
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+68h+item.___u0]
          vmovdqa xmmword ptr [rsp+68h+item.___u0], xmm0
        }
        Stream_Logger_OnPatchDescriptor("Stream_BackendQueue_ExecLoadImageCmd", data, &item, 0, 0);
      }
      Stream_BackendQueue_UpdateMostDetailedMip(data, image, v12);
      if ( (unsigned int)v10 >= 4 )
      {
        LODWORD(v16) = 4;
        LODWORD(v15) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1136, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( IMAGE_STREAM_COUNT )", "part doesn't index IMAGE_STREAM_COUNT\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      Frame = Stream_BackendQueue_QueueCopyTextureDescNextFrame(data, image, 1u);
      if ( Frame )
        *Frame = (CopyTextureDescCommand)(*(_DWORD *)Frame ^ (*(_DWORD *)Frame ^ ((_DWORD)v10 << 21)) & 0x600000 | 0x80000);
      else
        Stream_BackendQueue_MarkUpToImagePartLoaded(image, v10);
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
  unsigned int v31; 
  unsigned int v32; 
  streamer_handle_t *v33; 
  unsigned int v34; 
  StreamerMemPageCounts *v35; 
  __int64 v36; 
  int v37; 
  StreamerMemPageCounts *v38; 
  __int64 v39; 
  int v40; 
  __int64 v41; 
  int v42; 
  int v43; 
  StreamerMemPageCounts *p_pagesTaken; 
  __int64 v45; 
  StreamerMemPageCounts *v46; 
  StreamerMemPageCounts *v47; 
  unsigned int v48; 
  __int64 v50; 
  __int64 v51; 
  unsigned int outPageDeficitOrCommitCount; 
  streamer_handle_t *handle; 
  GfxBackEndData *dataa; 
  StreamerMemPageCounts *v55; 
  __int64 v56; 
  Stream_Logger_Item item; 
  Stream_Logger_Item result; 
  StreamerMemLoan optionalLoan; 
  StreamerMemPageCounts pagesTaken; 

  v56 = -2i64;
  v55 = pageAdjust;
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
    LODWORD(v51) = v26;
    LODWORD(v50) = v22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 853, ASSERT_TYPE_ASSERT, "( pageCount ) <= ( map.pagesReserved.TotalPages() )", "%s <= %s\n\t%u, %u", "pageCount", "map.pagesReserved.TotalPages()", v50, v51) )
      __debugbreak();
  }
  if ( v22 < LODWORD(handle[2].data) )
  {
    LODWORD(v51) = handle[2].data;
    LODWORD(v50) = v22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 854, ASSERT_TYPE_ASSERT, "( pageCount ) >= ( map.minPageCount )", "%s >= %s\n\t%u, %u", "pageCount", "map.minPageCount", v50, v51) )
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
  _RAX = Stream_Logger_MakeItem(&result, handle);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rbp+57h+item.___u0], xmm0
  }
  Stream_Logger_OnMemoryMapped("Stream_BackendQueue_ExecMapCmd", dataa, &item, handle[4].data, v20, end);
  v31 = handle[2].data;
  v32 = outPageDeficitOrCommitCount;
  if ( outPageDeficitOrCommitCount >= v31 )
  {
    v33 = handle;
  }
  else
  {
    Stream_Logger_Dump(v20);
    LODWORD(v51) = handle[2].data;
    LODWORD(v50) = outPageDeficitOrCommitCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 877, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "map for virtual address range [%p - %p) didn't commit min number of pages. Committed %u, need to commit at least %u pages", v20, end, v50, v51) )
      __debugbreak();
    v33 = handle;
    v31 = handle[2].data;
    v32 = outPageDeficitOrCommitCount;
  }
  if ( v32 < v31 )
  {
    LODWORD(v51) = v31;
    LODWORD(v50) = v32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 880, ASSERT_TYPE_ASSERT, "( commitPageCount ) >= ( map.minPageCount )", "%s >= %s\n\t%u, %u", "commitPageCount", "map.minPageCount", v50, v51) )
      __debugbreak();
    v32 = outPageDeficitOrCommitCount;
  }
  v34 = 0;
  v35 = p_pagesReserved;
  v36 = 0i64;
  if ( p_pagesReserved <= &p_pagesReserved[1] )
  {
    do
    {
      v34 += v35->pages[0];
      v35 = (StreamerMemPageCounts *)((char *)v35 + 4);
      ++v36;
    }
    while ( v36 != v12 );
  }
  if ( v32 > v34 )
  {
    v37 = 0;
    v38 = p_pagesReserved;
    v39 = 0i64;
    if ( p_pagesReserved <= &p_pagesReserved[1] )
    {
      do
      {
        v37 += v38->pages[0];
        v38 = (StreamerMemPageCounts *)((char *)v38 + 4);
        ++v39;
      }
      while ( v39 != v12 );
    }
    LODWORD(v51) = v37;
    LODWORD(v50) = v32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 881, ASSERT_TYPE_ASSERT, "( commitPageCount ) <= ( map.pagesReserved.TotalPages() )", "%s <= %s\n\t%u, %u", "commitPageCount", "map.pagesReserved.TotalPages()", v50, v51) )
      __debugbreak();
    v32 = outPageDeficitOrCommitCount;
  }
  if ( v22 < v32 )
  {
    LODWORD(v51) = v32;
    LODWORD(v50) = v22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 882, ASSERT_TYPE_ASSERT, "( pageCount ) >= ( commitPageCount )", "%s >= %s\n\t%u, %u", "pageCount", "commitPageCount", v50, v51) )
      __debugbreak();
    v32 = outPageDeficitOrCommitCount;
  }
  v40 = 0;
  v41 = 0i64;
  if ( p_pagesReserved <= &p_pagesReserved[1] )
  {
    do
    {
      v40 += p_pagesReserved->pages[0];
      p_pagesReserved = (StreamerMemPageCounts *)((char *)p_pagesReserved + 4);
      ++v41;
    }
    while ( v41 != v12 );
  }
  v42 = v40 - v32;
  if ( v42 != StreamerMemLoan::TotalPages(&optionalLoan) )
  {
    LODWORD(v51) = StreamerMemLoan::TotalPages(&optionalLoan);
    LODWORD(v50) = v42;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 884, ASSERT_TYPE_ASSERT, "( unusedPageCount ) == ( pagesReservedLoan.TotalPages() )", "%s == %s\n\t%u, %u", "unusedPageCount", "pagesReservedLoan.TotalPages()", v50, v51) )
      __debugbreak();
  }
  pagesTaken = 0i64;
  StreamerMemLoan::TakeAllPages(&optionalLoan, &pagesTaken);
  v43 = 0;
  p_pagesTaken = &pagesTaken;
  v45 = 2i64;
  do
  {
    v43 += p_pagesTaken->pages[0];
    p_pagesTaken = (StreamerMemPageCounts *)((char *)p_pagesTaken + 4);
    --v45;
  }
  while ( v45 );
  if ( v43 != v42 )
  {
    v46 = &pagesTaken;
    do
    {
      v5 += v46->pages[0];
      v46 = (StreamerMemPageCounts *)((char *)v46 + 4);
      --v11;
    }
    while ( v11 );
    LODWORD(v51) = v42;
    LODWORD(v50) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 888, ASSERT_TYPE_ASSERT, "( unusedPages.TotalPages() ) == ( unusedPageCount )", "%s == %s\n\t%u, %u", "unusedPages.TotalPages()", "unusedPageCount", v50, v51) )
      __debugbreak();
  }
  v47 = v55;
  v55->pages[0] += pagesTaken.pages[0];
  v47->pages[1] += pagesTaken.pages[1];
  if ( BYTE4(v33[4].data) )
    Stream_Defrag_UnlockHandle((streamer_handle_t)v33->data);
  v48 = outPageDeficitOrCommitCount;
  StreamerMemLoan::~StreamerMemLoan(&optionalLoan);
  return v48;
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
  unsigned int v9; 
  unsigned int BackEndDataIndex; 
  __int128 v11; 
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
        BYTE8(v11) = 0;
        *(_QWORD *)&v11 = GfxImageAtIndex;
        __asm
        {
          vmovups xmm0, [rsp+78h+var_28]
          vmovdqa xmmword ptr [rsp+78h+item.___u0], xmm0
        }
        Stream_Logger_OnPatchDescriptor("Stream_BackendQueue_ExecTextureDescCopies", data, &item, 1, -1);
        v9 = *(_DWORD *)((char *)&v5->commands.mHead + v4);
        if ( (v9 & 0x80000) != 0 )
        {
          Stream_BackendQueue_MarkUpToImagePartLoaded(GfxImageAtIndex, (v9 >> 21) & 3);
        }
        else if ( (v9 & 0x100000) != 0 )
        {
          Stream_BackendQueue_MarkUpToImagePartUnloaded(GfxImageAtIndex, (v9 >> 21) & 3);
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
  unsigned int v8; 
  __int64 ImageClampedPartIndex; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
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
    LODWORD(v13) = part;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1336, ASSERT_TYPE_ASSERT, "(unsigned)( unclampedPart ) < (unsigned)( image->streamedPartCount )", "unclampedPart doesn't index image->streamedPartCount\n\t%i not in [0, %i)", v13, image->streamedPartCount) )
      __debugbreak();
  }
  item.m_type = STREAM_ITEM_IMAGE;
  item.m_image = image;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+68h+item.___u0]
    vmovdqa xmmword ptr [rsp+68h+item.___u0], xmm0
  }
  Stream_Logger_OnUnload("Stream_BackendQueue_ExecUnloadImageCmd", data, &item, part);
  if ( !part )
  {
    if ( (imagePartsInUseBefore & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1346, ASSERT_TYPE_ASSERT, "(imagePartsInUseBefore & ( 1 << IMAGE_STREAM_BASE ))", (const char *)&queryFormat, "imagePartsInUseBefore & ( 1 << IMAGE_STREAM_BASE )") )
      __debugbreak();
    RB_Texture_AssignStreamedFallback(data, image->textureId);
    v8 = 0;
    goto LABEL_39;
  }
  if ( !RB_Texture_HasStreamedFallbackAssigned(data, image->textureId) )
  {
    ImageClampedPartIndex = (unsigned int)GetImageClampedPartIndex(image, imagePartsInUseBefore);
    if ( (unsigned int)ImageClampedPartIndex >= image->streamedPartCount )
    {
      LODWORD(v14) = image->streamedPartCount;
      LODWORD(v13) = ImageClampedPartIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1354, ASSERT_TYPE_ASSERT, "(unsigned)( oldHighestLoadedPart ) < (unsigned)( image->streamedPartCount )", "oldHighestLoadedPart doesn't index image->streamedPartCount\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    v10 = (unsigned int)GetImageClampedPartIndex(image, imagePartsInUseBefore & ~(1 << part));
    if ( (unsigned int)v10 >= image->streamedPartCount )
    {
      LODWORD(v14) = image->streamedPartCount;
      LODWORD(v13) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1358, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( image->streamedPartCount )", "part doesn't index image->streamedPartCount\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    v11 = image->streams[ImageClampedPartIndex].levelCountAndSize & 0xF;
    v12 = image->streams[v10].levelCountAndSize & 0xF;
    if ( v12 > v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1362, ASSERT_TYPE_ASSERT, "( newLevelCount ) <= ( oldLevelCount )", "%s <= %s\n\t%u, %u", "newLevelCount", "oldLevelCount", v12, image->streams[ImageClampedPartIndex].levelCountAndSize & 0xF) )
      __debugbreak();
    if ( v11 > image->levelCount )
    {
      LODWORD(v14) = image->levelCount;
      LODWORD(v13) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1363, ASSERT_TYPE_ASSERT, "( oldLevelCount ) <= ( image->levelCount )", "oldLevelCount not in [0, image->levelCount]\n\t%u not in [0, %u]", v13, v14) )
        __debugbreak();
    }
    if ( v12 > image->levelCount )
    {
      LODWORD(v14) = image->levelCount;
      LODWORD(v13) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1364, ASSERT_TYPE_ASSERT, "( newLevelCount ) <= ( image->levelCount )", "newLevelCount not in [0, image->levelCount]\n\t%u not in [0, %u]", v13, v14) )
        __debugbreak();
    }
    if ( v12 < v11 )
    {
      if ( v12 )
        Stream_BackendQueue_UpdateMostDetailedMip(data, image, v12);
      else
        RB_Texture_AssignStreamedFallback(data, image->textureId);
      v8 = ImageClampedPartIndex;
LABEL_39:
      Stream_BackendQueue_QueueCopyTextureDescAndMarkUnloaded(data, image, v8);
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
  StreamerMemLoan *v11; 
  unsigned int v12; 
  unsigned int v13; 
  int v14; 
  int v15; 
  StreamerMemPageCounts *p_pagesTaken; 
  __int64 v17; 
  StreamerMemPageCounts *v18; 
  __int64 v19; 
  __int64 pool; 
  __int64 v21; 
  unsigned int minPageCount; 
  unsigned __int8 *end; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  Stream_Logger_Item item; 
  StreamerMemPageCounts pagesTaken; 
  StreamerMemLoan v32; 
  StreamerMemLoan result; 

  start = &Stream_AddressSpace_ResolveAddrUnmap(unmap)[unmap->mapOffset];
  v7 = &start[unmap->mapSize];
  v8 = truncate_cast<unsigned int,unsigned __int64>((((unsigned __int64)(v7 + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64) - ((unsigned __int64)start & 0xFFFFFFFFFFFF0000ui64)) >> 16);
  _RAX = Stream_Logger_MakeItem((Stream_Logger_Item *)&result, &unmap->baseAddrHandle);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rsp+0E8h+item.___u0], xmm0
  }
  Stream_Logger_OnMemoryUnmapped("Stream_BackendQueue_ExecUnmapCmd", data, &item, unmap->partIndex, start, v7);
  v11 = Mem_Paged_BatchDecommitSubPageMemory(&result, start, v7);
  StreamerMemLoan::StreamerMemLoan(&v32, v11);
  StreamerMemLoan::~StreamerMemLoan(&result);
  if ( !StreamerMemLoan::Ready(&v32) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 913, ASSERT_TYPE_ASSERT, "(loan.Ready())", (const char *)&queryFormat, "loan.Ready()") )
    __debugbreak();
  v12 = StreamerMemLoan::TotalPages(&v32);
  v13 = v12;
  if ( v12 > v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 916, ASSERT_TYPE_ASSERT, "( decommitPageCount ) <= ( pageCount )", "%s <= %s\n\t%u, %u", "decommitPageCount", "pageCount", v12, v8) )
    __debugbreak();
  pagesTaken = 0i64;
  StreamerMemLoan::TakeAllPages(&v32, &pagesTaken);
  v14 = 0;
  v15 = 0;
  p_pagesTaken = &pagesTaken;
  v17 = 2i64;
  do
  {
    v15 += p_pagesTaken->pages[0];
    p_pagesTaken = (StreamerMemPageCounts *)((char *)p_pagesTaken + 4);
    --v17;
  }
  while ( v17 );
  if ( v15 != v13 )
  {
    v18 = &pagesTaken;
    v19 = 2i64;
    do
    {
      v14 += v18->pages[0];
      v18 = (StreamerMemPageCounts *)((char *)v18 + 4);
      --v19;
    }
    while ( v19 );
    LODWORD(v28) = v13;
    LODWORD(v26) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 920, ASSERT_TYPE_ASSERT, "( decommittedPages.TotalPages() ) == ( decommitPageCount )", "%s == %s\n\t%u, %u", "decommittedPages.TotalPages()", "decommitPageCount", v26, v28) )
      __debugbreak();
  }
  pool = (unsigned int)unmap->pool;
  if ( (unsigned int)pool >= 2 )
  {
    LODWORD(v25) = 2;
    LODWORD(end) = unmap->pool;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 32, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", end, v25) )
      __debugbreak();
  }
  if ( pagesTaken.pages[pool] != v13 )
  {
    v21 = (unsigned int)unmap->pool;
    if ( (unsigned int)v21 >= 2 )
    {
      LODWORD(v25) = 2;
      LODWORD(end) = unmap->pool;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 32, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", end, v25) )
        __debugbreak();
    }
    LODWORD(v28) = v13;
    LODWORD(v26) = pagesTaken.pages[v21];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 921, ASSERT_TYPE_ASSERT, "( decommittedPages.PagesForPool( unmap.pool ) ) == ( decommitPageCount )", "%s == %s\n\t%u, %u", "decommittedPages.PagesForPool( unmap.pool )", "decommitPageCount", v26, v28) )
      __debugbreak();
  }
  if ( v13 < unmap->minPageCount )
  {
    Stream_Logger_Dump(start);
    LODWORD(v28) = unmap->minPageCount - v13;
    LODWORD(v26) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 927, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unmap failed for virtual address range [%p - %p). Freed %u, need to free %d more pages", start, v7, v26, v28) )
      __debugbreak();
    if ( v13 < unmap->minPageCount )
    {
      LODWORD(v29) = unmap->minPageCount;
      LODWORD(v27) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 930, ASSERT_TYPE_ASSERT, "( decommitPageCount ) >= ( unmap.minPageCount )", "%s >= %s\n\t%u, %u", "decommitPageCount", "unmap.minPageCount", v27, v29) )
        __debugbreak();
    }
  }
  minPageCount = unmap->minPageCount;
  if ( v13 > minPageCount )
    StreamerMemPageCounts::AddPages(pageAdjust, unmap->pool, v13 - minPageCount);
  if ( unmap->defragLocked )
    Stream_Defrag_UnlockHandle(unmap->baseAddrHandle);
  StreamerMemLoan::~StreamerMemLoan(&v32);
  return v13;
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
  const char *v4; 
  const char *CurrentThreadContextName; 
  int v6; 
  StreamUpdateId v7; 
  unsigned int currentUpdateBackendDataIndex; 
  int v11; 
  const GfxBackEndData *BackEndData; 
  StreamBackendGlob *v13; 
  StreamUpdateId currentUpdateId; 
  unsigned int v15; 
  const char *v16; 
  GfxCmdBufContext v19; 
  GfxCmdBufContext result; 
  char v21; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_BackendQueue_ForcedFlushInternal");
  v4 = (char *)&queryFormat.fmt + 3;
  if ( postLevelUnload )
    v4 = " for post-level-unload";
  CurrentThreadContextName = Sys_GetCurrentThreadContextName();
  Streamer_StatusPrint("Streamer forced flush starting on %s thread%s.\n", CurrentThreadContextName, v4);
  v6 = Sys_Milliseconds();
  v7 = 0i64;
  s_streamBackendGlob->isInForcedFlush = 1;
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_DRAW_LIT_OPAQUE);
  Sys_EnterCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE);
  if ( s_streamBackendGlob->isInForcedFlush )
  {
    _RAX = RB_GetBackendCmdBufContext(&result);
    __asm { vmovups xmm6, xmmword ptr [rax] }
    currentUpdateBackendDataIndex = s_streamBackendGlob->currentUpdateBackendDataIndex;
    v11 = currentUpdateBackendDataIndex;
    do
    {
      BackEndData = R_GetBackEndData(v11);
      RB_Texture_BeginAllowStreamedTextureUpdate(BackEndData);
      Stream_BackendQueue_ExecTextureDescCopies(BackEndData);
      __asm { vmovdqa [rsp+0B8h+var_58], xmm6 }
      Stream_Defrag_FrameFlush(&v19, BackEndData);
      __asm { vmovdqa [rsp+0B8h+var_58], xmm6 }
      Stream_BackendQueue_Update(&v19, BackEndData, s_streamBackendGlob->currentUpdateId);
      if ( postLevelUnload && (_DWORD)v7 == 7 )
        Stream_Defrag_PostLevelUnload(BackEndData);
      RB_Texture_EndAllowStreamedTextureUpdate(BackEndData);
      v11 = ((_BYTE)v11 - 1) & 1;
      v13 = s_streamBackendGlob;
      ++s_streamBackendGlob->currentUpdateId;
      currentUpdateId = v13->currentUpdateId;
      if ( v13->currentAllMapsAndUnmapsCompleteId > (unsigned __int64)currentUpdateId )
        currentUpdateId = v13->currentAllMapsAndUnmapsCompleteId;
      v13->currentAllMapsAndUnmapsCompleteId = currentUpdateId;
      v13->currentUpdateBackendDataIndex = v11;
      LODWORD(v7) = v7 + 1;
    }
    while ( (unsigned int)v7 < 8 );
    if ( currentUpdateBackendDataIndex != v11 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1829, ASSERT_TYPE_ASSERT, "( oldDataIndex ) == ( s_streamBackendGlob->currentUpdateBackendDataIndex )", "%s == %s\n\t%u, %u", "oldDataIndex", "s_streamBackendGlob->currentUpdateBackendDataIndex", currentUpdateBackendDataIndex, v11) )
        __debugbreak();
      v13 = s_streamBackendGlob;
    }
    v13->isInForcedFlush = 0;
    v7 = v13->currentUpdateId;
  }
  Sys_LeaveCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE);
  if ( postLevelUnload )
    Stream_Defrag_Validate();
  v15 = Sys_Milliseconds() - v6;
  v16 = Sys_GetCurrentThreadContextName();
  Streamer_StatusPrint("Streamer forced flush on %s thread took %d ms. Finished with backend queue update ID %zu.\n", v16, v15, v7);
  Sys_ProfEndNamedEvent();
  _R11 = &v21;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
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
  StreamUpdateId v5; 
  Stream_Logger_Item item; 
  ScopedCriticalSection v8; 

  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 740, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  if ( !streamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 742, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey", -2i64) )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v8, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  Command = GetCommand();
  *((_BYTE *)Command + 3) = 6;
  Command->mapCmd.baseAddrHandle.data = (unsigned __int64)streamKey;
  StreamKeyIndex = DB_GetStreamKeyIndex(streamKey);
  StreamableBitArray_InterlockedSetArray(streamFrontendGlob->genericRequest.mDanger, StreamKeyIndex);
  item.m_type = STREAM_ITEM_GENERIC;
  item.m_image = (const GfxImage *)streamKey;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+68h+item.___u0]
    vmovdqa xmmword ptr [rsp+68h+item.___u0], xmm0
  }
  Stream_Logger_OnQueueCommand("QueueGenericCmd", NULL, &item, LOAD_GENERIC, 0);
  v5 = QueueCommand_0_((StreamUpdateId)0i64, Command);
  ScopedCriticalSection::~ScopedCriticalSection(&v8);
  return v5;
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
  StreamUpdateId v5; 
  Stream_Logger_Item item; 
  ScopedCriticalSection v8; 

  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 718, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  if ( !mesh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 720, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh", -2i64) )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v8, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  Command = GetCommand();
  *((_BYTE *)Command + 3) = 4;
  Command->mapCmd.baseAddrHandle.data = (unsigned __int64)mesh;
  XModelSurfsIndex = DB_GetXModelSurfsIndex(mesh);
  StreamableBitArray_InterlockedSetArray(streamFrontendGlob->meshRequest.mDanger, XModelSurfsIndex);
  item.m_type = STREAM_ITEM_MESH;
  item.m_image = (const GfxImage *)mesh;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+68h+item.___u0]
    vmovdqa xmmword ptr [rsp+68h+item.___u0], xmm0
  }
  Stream_Logger_OnQueueCommand("QueueMeshCmd", NULL, &item, LOAD_MESH, 0);
  v5 = QueueCommand_0_((StreamUpdateId)0i64, Command);
  ScopedCriticalSection::~ScopedCriticalSection(&v8);
  return v5;
}

/*
==============
Stream_BackendQueue_QueueMapCmdAfter
==============
*/
StreamUpdateId Stream_BackendQueue_QueueMapCmdAfter(StreamUpdateId current, const StreamMapCmdData *map)
{
  StreamUpdateId v9; 
  BackendCommandQueue *CommandQueue; 
  Stream_Logger_Item item; 
  ScopedCriticalSection v13; 
  Stream_Logger_Item result; 

  _RDI = map;
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 405, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v13, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  _RBX = GetCommand();
  *((_BYTE *)_RBX + 3) = 0;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rax+8], ymm0
    vmovsd  xmm1, qword ptr [rdi+20h]
    vmovsd  qword ptr [rax+28h], xmm1
  }
  _RAX = Stream_Logger_MakeItem(&result, &_RDI->baseAddrHandle);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rsp+78h+item.___u0], xmm0
  }
  Stream_Logger_OnQueueCommand("QueueMap", NULL, &item, MAP, _RDI->partIndex);
  v9 = QueueCommand_0_(current, _RBX);
  CommandQueue = GetCommandQueue(v9);
  CommandQueue->mapReservedPageCount.pages[0] += _RDI->pagesReserved.pages[0];
  CommandQueue->mapReservedPageCount.pages[1] += _RDI->pagesReserved.pages[1];
  CommandQueue->mapSizeInBytes += _RDI->mapSize;
  ScopedCriticalSection::~ScopedCriticalSection(&v13);
  return v9;
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
  StreamUpdateId v5; 
  Stream_Logger_Item item; 
  ScopedCriticalSection v8; 

  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 740, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  if ( !streamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 742, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey", -2i64) )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v8, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  Command = GetCommand();
  *((_BYTE *)Command + 3) = 7;
  Command->mapCmd.baseAddrHandle.data = (unsigned __int64)streamKey;
  StreamKeyIndex = DB_GetStreamKeyIndex(streamKey);
  StreamableBitArray_InterlockedSetArray(streamFrontendGlob->genericRequest.mDanger, StreamKeyIndex);
  item.m_type = STREAM_ITEM_GENERIC;
  item.m_image = (const GfxImage *)streamKey;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+68h+item.___u0]
    vmovdqa xmmword ptr [rsp+68h+item.___u0], xmm0
  }
  Stream_Logger_OnQueueCommand("QueueGenericCmd", NULL, &item, UNLOAD_GENERIC, 0);
  v5 = QueueCommand_1_((StreamUpdateId)0i64, Command);
  ScopedCriticalSection::~ScopedCriticalSection(&v8);
  return v5;
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
  StreamUpdateId v5; 
  Stream_Logger_Item item; 
  ScopedCriticalSection v8; 

  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 718, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  if ( !mesh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 720, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh", -2i64) )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v8, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  Command = GetCommand();
  *((_BYTE *)Command + 3) = 5;
  Command->mapCmd.baseAddrHandle.data = (unsigned __int64)mesh;
  XModelSurfsIndex = DB_GetXModelSurfsIndex(mesh);
  StreamableBitArray_InterlockedSetArray(streamFrontendGlob->meshRequest.mDanger, XModelSurfsIndex);
  item.m_type = STREAM_ITEM_MESH;
  item.m_image = (const GfxImage *)mesh;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+68h+item.___u0]
    vmovdqa xmmword ptr [rsp+68h+item.___u0], xmm0
  }
  Stream_Logger_OnQueueCommand("QueueMeshCmd", NULL, &item, UNLOAD_MESH, 0);
  v5 = QueueCommand_1_((StreamUpdateId)0i64, Command);
  ScopedCriticalSection::~ScopedCriticalSection(&v8);
  return v5;
}

/*
==============
Stream_BackendQueue_QueueUnmapCmdAfter
==============
*/
StreamUpdateId Stream_BackendQueue_QueueUnmapCmdAfter(StreamUpdateId current, const StreamUnmapCmdData *unmap)
{
  StreamUpdateId v8; 
  BackendCommandQueue *CommandQueue; 
  unsigned int minPageCount; 
  __int64 pool; 
  Stream_Logger_Item item; 
  ScopedCriticalSection v14; 
  Stream_Logger_Item result; 

  _RDI = unmap;
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 430, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v14, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  _RBX = GetCommand();
  *((_BYTE *)_RBX + 3) = 1;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rax+8], ymm0
  }
  _RAX = Stream_Logger_MakeItem(&result, &_RDI->baseAddrHandle);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rsp+88h+item.___u0], xmm0
  }
  Stream_Logger_OnQueueCommand("QueueUnmap", NULL, &item, UNMAP, _RDI->partIndex);
  v8 = QueueCommand_0_(current, _RBX);
  CommandQueue = GetCommandQueue(v8);
  minPageCount = _RDI->minPageCount;
  pool = (unsigned int)_RDI->pool;
  if ( (unsigned int)pool >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 48, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", _RDI->pool, 2) )
    __debugbreak();
  CommandQueue->unmapMinPageCount.pages[pool] += minPageCount;
  CommandQueue->unmapSizeInBytes += _RDI->mapSize;
  ScopedCriticalSection::~ScopedCriticalSection(&v14);
  return v8;
}

/*
==============
Stream_BackendQueue_QueueUnmapCmdNextFrame
==============
*/
StreamUpdateId Stream_BackendQueue_QueueUnmapCmdNextFrame(StreamUpdateId current, const StreamUnmapCmdData *unmap)
{
  StreamUpdateId v8; 
  BackendCommandQueue *CommandQueue; 
  unsigned int minPageCount; 
  __int64 pool; 
  Stream_Logger_Item item; 
  ScopedCriticalSection v14; 
  Stream_Logger_Item result; 

  _RDI = unmap;
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 430, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v14, CRITSECT_STREAM_BACKEND_UPDATE, SCOPED_CRITSECT_NORMAL);
  _RBX = GetCommand();
  *((_BYTE *)_RBX + 3) = 1;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rax+8], ymm0
  }
  _RAX = Stream_Logger_MakeItem(&result, &_RDI->baseAddrHandle);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rsp+88h+item.___u0], xmm0
  }
  Stream_Logger_OnQueueCommand("QueueUnmap", NULL, &item, UNMAP, _RDI->partIndex);
  v8 = QueueCommand_1_(current, _RBX);
  CommandQueue = GetCommandQueue(v8);
  minPageCount = _RDI->minPageCount;
  pool = (unsigned int)_RDI->pool;
  if ( (unsigned int)pool >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 48, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", _RDI->pool, 2) )
    __debugbreak();
  CommandQueue->unmapMinPageCount.pages[pool] += minPageCount;
  CommandQueue->unmapSizeInBytes += _RDI->mapSize;
  ScopedCriticalSection::~ScopedCriticalSection(&v14);
  return v8;
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
  int v51; 
  const XModelSurfs *v52; 
  streamer_handle_t v53; 
  unsigned int v54; 
  const XModelSurfs *v55; 
  const StreamKey *streamKey; 
  streamer_handle_t v58; 
  unsigned int StreamKeyIndex; 
  const StreamKey *v60; 
  int v62; 
  const StreamKey *v63; 
  streamer_handle_t v64; 
  unsigned int v65; 
  const StreamKey *v66; 
  int v68; 
  StreamBackendGlob *v69; 
  __int64 v70; 
  int v71; 
  unsigned int v72; 
  StreamerMemPageCounts *v73; 
  __int64 v74; 
  unsigned int v75; 
  StreamerMemPageCounts *p_mapReservedPageCount; 
  __int64 v77; 
  __int64 v78; 
  int v79; 
  StreamerMemPageCounts *v80; 
  __int64 v81; 
  int v82; 
  StreamerMemPageCounts *v83; 
  __int64 v84; 
  unsigned int v85; 
  StreamerMemPageCounts *v86; 
  __int64 v87; 
  __int64 v88; 
  unsigned int v89; 
  StreamerMemPageCounts *p_unmapMinPageCount; 
  StreamerMemPageCounts *v91; 
  __int64 v92; 
  __int64 v93; 
  StreamerMemPageCounts *v94; 
  int v95; 
  StreamerMemPageCounts *v96; 
  __int64 v97; 
  int v98; 
  StreamerMemPageCounts *v99; 
  __int64 v100; 
  int v101; 
  StreamerMemPageCounts *v102; 
  __int64 v103; 
  int v104; 
  StreamerMemPageCounts *p_pageAdjust; 
  __int64 v106; 
  unsigned int v107; 
  StreamerMemPageCounts *v108; 
  __int64 v109; 
  __int64 v110; 
  int v111; 
  StreamerMemPageCounts *v112; 
  __int64 v113; 
  int v114; 
  StreamerMemPageCounts *v115; 
  __int64 v116; 
  int v117; 
  StreamerMemPageCounts *v118; 
  __int64 v119; 
  int v120; 
  StreamerMemPageCounts *v121; 
  __int64 v122; 
  __int64 v123; 
  int v124; 
  StreamerMemPageCounts *v125; 
  __int64 v126; 
  int v127; 
  StreamerMemPageCounts *v128; 
  __int64 v129; 
  __int64 v130; 
  int v131; 
  StreamerMemPageCounts *v132; 
  __int64 v133; 
  int v134; 
  StreamerMemPageCounts *v135; 
  __int64 v136; 
  int v137; 
  StreamerMemPageCounts *v138; 
  __int64 v139; 
  __int64 v140; 
  volatile signed __int32 *v141; 
  __int64 v142; 
  __int64 v143; 
  __int64 v144; 
  __int64 v145; 
  bool v146; 
  __int64 v147; 
  __int128 v148; 
  __int128 v149; 
  __int128 v150; 
  __int128 v151; 
  Stream_Logger_Item item; 
  Stream_Logger_Item v153; 
  Stream_Logger_Item v154; 
  Stream_Logger_Item v155; 
  GfxBackEndData *dataa; 
  StreamerMemPageCounts v157; 
  StreamerMemPageCounts pageAdjust; 
  StreamerMemPageCounts v159; 

  v4 = data;
  dataa = (GfxBackEndData *)data;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_BackendQueue_Update");
  if ( !s_streamBackendGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1863, ASSERT_TYPE_ASSERT, "(s_streamBackendGlob)", (const char *)&queryFormat, "s_streamBackendGlob") )
    __debugbreak();
  isInForcedFlush = s_streamBackendGlob->isInForcedFlush;
  v146 = isInForcedFlush;
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
      LODWORD(v144) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1483, ASSERT_TYPE_ASSERT, "( queue->unmapPageCount.TotalPages() ) == ( 0 )", "%s == %s\n\t%u, %u", "queue->unmapPageCount.TotalPages()", "0", v144, 0i64) )
        __debugbreak();
    }
  }
  v147 = 0i64;
  v23 = 0i64;
  v157 = 0i64;
  v24 = 0;
  pageAdjust = 0i64;
  v25 = 0;
  v159 = 0i64;
  if ( CommandQueue->commands.mTail )
  {
    while ( 1 )
    {
      mHead = CommandQueue->commands.mHead;
      if ( !CommandQueue->commands.mHead )
      {
        if ( CommandQueue->commands.mTail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 97, ASSERT_TYPE_ASSERT, "(mTail == nullptr)", (const char *)&queryFormat, "mTail == nullptr") )
          __debugbreak();
        v72 = 0;
        v73 = &CommandQueue->mapPageCount;
        v74 = 0i64;
        if ( &CommandQueue->mapPageCount <= (StreamerMemPageCounts *)&CommandQueue->mapSizeInBytes )
        {
          do
          {
            v72 += v73->pages[0];
            v73 = (StreamerMemPageCounts *)((char *)v73 + 4);
            ++v74;
          }
          while ( v74 != v12 );
        }
        v75 = 0;
        p_mapReservedPageCount = &CommandQueue->mapReservedPageCount;
        v77 = 0i64;
        v78 = 2i64;
        if ( &CommandQueue->mapReservedPageCount > &CommandQueue->mapPageCount )
          v78 = 0i64;
        if ( &CommandQueue->mapReservedPageCount <= &CommandQueue->mapPageCount )
        {
          do
          {
            v75 += p_mapReservedPageCount->pages[0];
            p_mapReservedPageCount = (StreamerMemPageCounts *)((char *)p_mapReservedPageCount + 4);
            ++v77;
          }
          while ( v77 != v78 );
        }
        if ( v72 > v75 )
        {
          v79 = 0;
          v80 = &CommandQueue->mapReservedPageCount;
          v81 = 0i64;
          if ( &CommandQueue->mapReservedPageCount <= &CommandQueue->mapPageCount )
          {
            do
            {
              v79 += v80->pages[0];
              v80 = (StreamerMemPageCounts *)((char *)v80 + 4);
              ++v81;
            }
            while ( v81 != v78 );
          }
          v82 = 0;
          v83 = &CommandQueue->mapPageCount;
          v84 = 0i64;
          if ( &CommandQueue->mapPageCount <= (StreamerMemPageCounts *)&CommandQueue->mapSizeInBytes )
          {
            do
            {
              v82 += v83->pages[0];
              v83 = (StreamerMemPageCounts *)((char *)v83 + 4);
              ++v84;
            }
            while ( v84 != v12 );
          }
          LODWORD(v145) = v79;
          LODWORD(v144) = v82;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1600, ASSERT_TYPE_ASSERT, "( queue->mapPageCount.TotalPages() ) <= ( queue->mapReservedPageCount.TotalPages() )", "%s <= %s\n\t%u, %u", "queue->mapPageCount.TotalPages()", "queue->mapReservedPageCount.TotalPages()", v144, v145) )
            __debugbreak();
        }
        v85 = 0;
        v86 = &CommandQueue->unmapPageCount;
        v87 = 0i64;
        v88 = 2i64;
        if ( &CommandQueue->unmapPageCount > (StreamerMemPageCounts *)&CommandQueue->unmapSizeInBytes )
          v88 = 0i64;
        if ( &CommandQueue->unmapPageCount <= (StreamerMemPageCounts *)&CommandQueue->unmapSizeInBytes )
        {
          do
          {
            v85 += v86->pages[0];
            v86 = (StreamerMemPageCounts *)((char *)v86 + 4);
            ++v87;
          }
          while ( v87 != v88 );
        }
        v89 = 0;
        p_unmapMinPageCount = &CommandQueue->unmapMinPageCount;
        v91 = &CommandQueue->unmapMinPageCount;
        v92 = 0i64;
        v93 = 2i64;
        if ( &CommandQueue->unmapMinPageCount > &CommandQueue->unmapPageCount )
          v93 = 0i64;
        v94 = &CommandQueue->mapReservedPageCount;
        if ( &CommandQueue->unmapMinPageCount <= &CommandQueue->unmapPageCount )
        {
          do
          {
            v89 += v91->pages[0];
            v91 = (StreamerMemPageCounts *)((char *)v91 + 4);
            ++v92;
          }
          while ( v92 != v93 );
          if ( v85 < v89 )
          {
            v95 = 0;
            v96 = &CommandQueue->unmapMinPageCount;
            v97 = 0i64;
            do
            {
              v95 += v96->pages[0];
              v96 = (StreamerMemPageCounts *)((char *)v96 + 4);
              ++v97;
            }
            while ( v97 != v93 );
            v98 = 0;
            v99 = &CommandQueue->unmapPageCount;
            v100 = 0i64;
            if ( p_unmapPageCount <= &CommandQueue->unmapSizeInBytes )
            {
              do
              {
                v98 += v99->pages[0];
                v99 = (StreamerMemPageCounts *)((char *)v99 + 4);
                ++v100;
              }
              while ( v100 != v88 );
            }
            LODWORD(v145) = v95;
            LODWORD(v144) = v98;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1601, ASSERT_TYPE_ASSERT, "( queue->unmapPageCount.TotalPages() ) >= ( queue->unmapMinPageCount.TotalPages() )", "%s >= %s\n\t%u, %u", "queue->unmapPageCount.TotalPages()", "queue->unmapMinPageCount.TotalPages()", v144, v145) )
              __debugbreak();
          }
        }
        v101 = 0;
        v102 = &CommandQueue->mapPageCount;
        v103 = 0i64;
        if ( &CommandQueue->mapPageCount <= (StreamerMemPageCounts *)&CommandQueue->mapSizeInBytes )
        {
          do
          {
            v101 += v102->pages[0];
            v102 = (StreamerMemPageCounts *)((char *)v102 + 4);
            ++v103;
          }
          while ( v103 != v12 );
        }
        v104 = 0;
        p_pageAdjust = &pageAdjust;
        v106 = 2i64;
        do
        {
          v104 += p_pageAdjust->pages[0];
          p_pageAdjust = (StreamerMemPageCounts *)((char *)p_pageAdjust + 4);
          --v106;
        }
        while ( v106 );
        v107 = 0;
        v108 = &CommandQueue->mapReservedPageCount;
        v109 = 0i64;
        v110 = 2i64;
        if ( &CommandQueue->mapReservedPageCount > &CommandQueue->mapPageCount )
          v110 = 0i64;
        if ( &CommandQueue->mapReservedPageCount <= &CommandQueue->mapPageCount )
        {
          do
          {
            v107 += v108->pages[0];
            v108 = (StreamerMemPageCounts *)((char *)v108 + 4);
            ++v109;
          }
          while ( v109 != v110 );
        }
        if ( v104 + v101 > v107 )
        {
          v111 = 0;
          v112 = &CommandQueue->mapReservedPageCount;
          v113 = 0i64;
          if ( v94 <= &CommandQueue->mapPageCount )
          {
            do
            {
              v111 += v112->pages[0];
              v112 = (StreamerMemPageCounts *)((char *)v112 + 4);
              ++v113;
            }
            while ( v113 != v110 );
          }
          v114 = 0;
          v115 = &CommandQueue->mapPageCount;
          v116 = 0i64;
          if ( &CommandQueue->mapPageCount <= (StreamerMemPageCounts *)&CommandQueue->mapSizeInBytes )
          {
            do
            {
              v114 += v115->pages[0];
              v115 = (StreamerMemPageCounts *)((char *)v115 + 4);
              ++v116;
            }
            while ( v116 != v12 );
          }
          v117 = 0;
          v118 = &pageAdjust;
          v119 = 2i64;
          do
          {
            v117 += v118->pages[0];
            v118 = (StreamerMemPageCounts *)((char *)v118 + 4);
            --v119;
          }
          while ( v119 );
          LODWORD(v145) = v111;
          LODWORD(v144) = v117 + v114;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1603, ASSERT_TYPE_ASSERT, "( queue->mapPageCount.TotalPages() + pageAdjustMap.TotalPages() ) <= ( queue->mapReservedPageCount.TotalPages() )", "%s <= %s\n\t%u, %u", "queue->mapPageCount.TotalPages() + pageAdjustMap.TotalPages()", "queue->mapReservedPageCount.TotalPages()", v144, v145) )
            __debugbreak();
        }
        v120 = 0;
        v121 = &CommandQueue->unmapPageCount;
        v122 = 0i64;
        v123 = 2i64;
        if ( &CommandQueue->unmapPageCount > (StreamerMemPageCounts *)&CommandQueue->unmapSizeInBytes )
          v123 = 0i64;
        if ( &CommandQueue->unmapPageCount <= (StreamerMemPageCounts *)&CommandQueue->unmapSizeInBytes )
        {
          do
          {
            v120 += v121->pages[0];
            v121 = (StreamerMemPageCounts *)((char *)v121 + 4);
            ++v122;
          }
          while ( v122 != v123 );
        }
        v124 = 0;
        v125 = &v159;
        v126 = 2i64;
        do
        {
          v124 += v125->pages[0];
          v125 = (StreamerMemPageCounts *)((char *)v125 + 4);
          --v126;
        }
        while ( v126 );
        v127 = 0;
        v128 = &CommandQueue->unmapMinPageCount;
        v129 = 0i64;
        v130 = 2i64;
        if ( &CommandQueue->unmapMinPageCount > &CommandQueue->unmapPageCount )
          v130 = 0i64;
        if ( &CommandQueue->unmapMinPageCount <= &CommandQueue->unmapPageCount )
        {
          do
          {
            v127 += v128->pages[0];
            v128 = (StreamerMemPageCounts *)((char *)v128 + 4);
            ++v129;
          }
          while ( v129 != v130 );
        }
        if ( v120 - v124 != v127 )
        {
          v131 = 0;
          v132 = &CommandQueue->unmapMinPageCount;
          v133 = 0i64;
          if ( p_unmapMinPageCount <= &CommandQueue->unmapPageCount )
          {
            do
            {
              v131 += v132->pages[0];
              v132 = (StreamerMemPageCounts *)((char *)v132 + 4);
              ++v133;
            }
            while ( v133 != v130 );
          }
          v134 = 0;
          v135 = &CommandQueue->unmapPageCount;
          v136 = 0i64;
          if ( p_unmapPageCount <= &CommandQueue->unmapSizeInBytes )
          {
            do
            {
              v134 += v135->pages[0];
              v135 = (StreamerMemPageCounts *)((char *)v135 + 4);
              ++v136;
            }
            while ( v136 != v123 );
          }
          v137 = 0;
          v138 = &v159;
          v139 = 2i64;
          do
          {
            v137 += v138->pages[0];
            v138 = (StreamerMemPageCounts *)((char *)v138 + 4);
            --v139;
          }
          while ( v139 );
          LODWORD(v145) = v131;
          LODWORD(v144) = v134 - v137;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1607, ASSERT_TYPE_ASSERT, "( queue->unmapPageCount.TotalPages() - pageAdjustUnmap.TotalPages() ) == ( queue->unmapMinPageCount.TotalPages() )", "%s == %s\n\t%u, %u", "queue->unmapPageCount.TotalPages() - pageAdjustUnmap.TotalPages()", "queue->unmapMinPageCount.TotalPages()", v144, v145) )
            __debugbreak();
        }
        if ( CommandQueue->mapSizeInBytes != v147 )
        {
          LODWORD(v145) = v147;
          LODWORD(v144) = CommandQueue->mapSizeInBytes;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1609, ASSERT_TYPE_ASSERT, "( queue->mapSizeInBytes ) == ( mapSizeInBytes )", "%s == %s\n\t%u, %u", "queue->mapSizeInBytes", "mapSizeInBytes", v144, v145) )
            __debugbreak();
        }
        if ( CommandQueue->unmapSizeInBytes != v157 )
        {
          LODWORD(v145) = v157.pages[0];
          LODWORD(v144) = CommandQueue->unmapSizeInBytes;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1610, ASSERT_TYPE_ASSERT, "( queue->unmapSizeInBytes ) == ( unmapSizeInBytes )", "%s == %s\n\t%u, %u", "queue->unmapSizeInBytes", "unmapSizeInBytes", v144, v145) )
            __debugbreak();
        }
        CommandQueue->mapPageCount = 0i64;
        *v94 = 0i64;
        CommandQueue->mapSizeInBytes = 0i64;
        *p_unmapPageCount = 0i64;
        *p_unmapMinPageCount = 0i64;
        CommandQueue->unmapSizeInBytes = 0i64;
        Mem_Paged_BatchFlush();
        v24 = pageAdjust.pages[0];
        v25 = v159.pages[0];
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
            LODWORD(v145) = v38;
            LODWORD(v144) = v40;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1508, ASSERT_TYPE_ASSERT, "( queue->mapPageCount.TotalPages() ) <= ( queue->mapReservedPageCount.TotalPages() )", "%s <= %s\n\t%u, %u", "queue->mapPageCount.TotalPages()", "queue->mapReservedPageCount.TotalPages()", v144, v145) )
              __debugbreak();
          }
          v147 += mHead->mapCmd.mapSize;
          v4 = dataa;
          break;
        case 1:
          v43 = Stream_BackendQueue_ExecUnmapCmd(v4, (const StreamUnmapCmdData *)&mHead->8, &v159);
          StreamerMemPageCounts::AddPages(&CommandQueue->unmapPageCount, mHead->unmapCmd.pool, v43);
          v157 = (StreamerMemPageCounts)(mHead->mapCmd.mapSize + *(_QWORD *)&v23);
          break;
        case 2:
          GfxImageIndex = DB_GetGfxImageIndex(mHead->imageCmd.image);
          Stream_Defrag_OnLoadItem(STREAM_ITEM_IMAGE, 4 * GfxImageIndex + mHead->imageCmd.part, *(streamer_handle_t *)(mHead->mapCmd.baseAddrHandle.data + 224));
          if ( v146 )
            R_LockGfxImmediateContext();
          Stream_BackendQueue_ExecLoadImageCmd(v4, (ImageCmdData *)&mHead->8);
          if ( v146 )
            goto LABEL_67;
          break;
        case 3:
          v45 = DB_GetGfxImageIndex(mHead->imageCmd.image);
          Stream_Defrag_OnUnloadItem(STREAM_ITEM_IMAGE, 4 * v45 + mHead->imageCmd.part, *(streamer_handle_t *)(mHead->mapCmd.baseAddrHandle.data + 224));
          if ( v146 )
            R_LockGfxImmediateContext();
          Stream_BackendQueue_ExecUnloadImageCmd(v4, (ImageCmdData *)&mHead->8);
          if ( v146 )
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
          BYTE8(v149) = 1;
          *(_QWORD *)&v149 = v49;
          __asm
          {
            vmovups xmm0, [rbp+70h+var_F0]
            vmovdqa xmmword ptr [rbp+70h+item.___u0], xmm0
          }
          Stream_Logger_OnLoad("Stream_BackendQueue_ExecLoadMeshCmd", v4, &item, 0);
          v51 = DB_GetXModelSurfsIndex(v49);
          StreamableBitArray_InterlockedSetArray(streamFrontendGlob->meshBits.mLoaded, v51);
          goto LABEL_88;
        case 5:
          v52 = mHead->meshCmd.mesh;
          v53.data = v52->shared->data.streamedDataHandle.data;
          v54 = DB_GetXModelSurfsIndex(v52);
          Stream_Defrag_OnUnloadItem(STREAM_ITEM_MESH, v54, v53);
          v55 = mHead->meshCmd.mesh;
          if ( !v55 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 988, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh") )
            __debugbreak();
          if ( !v55->shared )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 989, ASSERT_TYPE_ASSERT, "(mesh->shared)", (const char *)&queryFormat, "mesh->shared") )
              __debugbreak();
            if ( !v55->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 747, ASSERT_TYPE_ASSERT, "(modelSurfs->shared)", (const char *)&queryFormat, "modelSurfs->shared") )
              __debugbreak();
          }
          if ( (v55->shared->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 990, ASSERT_TYPE_ASSERT, "(XModelSurfs_IsStreamed( mesh ))", (const char *)&queryFormat, "XModelSurfs_IsStreamed( mesh )") )
            __debugbreak();
          if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 991, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
            __debugbreak();
          BYTE8(v148) = 1;
          *(_QWORD *)&v148 = v55;
          __asm
          {
            vmovups xmm0, [rsp+170h+var_100]
            vmovdqa xmmword ptr [rbp+70h+var_A0.___u0], xmm0
          }
          Stream_Logger_OnUnload("Stream_BackendQueue_ExecUnloadMeshCmd", v4, &v153, 0);
          v51 = DB_GetXModelSurfsIndex(v55);
          StreamableBitArray_InterlockedClearArray(streamFrontendGlob->meshBits.mLoaded, v51);
LABEL_88:
          StreamableBitArray_InterlockedClearArray(streamFrontendGlob->meshRequest.mFreeable, v51);
          StreamableBitArray_InterlockedClearArray(streamFrontendGlob->meshRequest.mDanger, v51);
          break;
        case 6:
          streamKey = mHead->genericCmd.streamKey;
          v58.data = streamKey->data.dataHandle.data;
          StreamKeyIndex = DB_GetStreamKeyIndex(streamKey);
          Stream_Defrag_OnLoadItem(STREAM_ITEM_GENERIC, StreamKeyIndex, v58);
          v60 = mHead->genericCmd.streamKey;
          if ( !v60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1004, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey") )
            __debugbreak();
          if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1005, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
            __debugbreak();
          BYTE8(v150) = 2;
          *(_QWORD *)&v150 = v60;
          __asm
          {
            vmovups xmm0, [rbp+70h+var_E0]
            vmovdqa xmmword ptr [rbp+70h+var_90.___u0], xmm0
          }
          Stream_Logger_OnLoad("Stream_BackendQueue_ExecLoadGenericCmd", dataa, &v154, 0);
          v62 = DB_GetStreamKeyIndex(v60);
          StreamableBitArray_InterlockedSetArray(streamFrontendGlob->genericBits.mLoaded, v62);
          StreamableBitArray_InterlockedClearArray(streamFrontendGlob->genericRequest.mFreeable, v62);
          StreamableBitArray_InterlockedClearArray(streamFrontendGlob->genericRequest.mDanger, v62);
          StreamKey_UserLoadedBackend(v60);
          v4 = dataa;
          break;
        case 7:
          v63 = mHead->genericCmd.streamKey;
          v64.data = v63->data.dataHandle.data;
          v65 = DB_GetStreamKeyIndex(v63);
          Stream_Defrag_OnUnloadItem(STREAM_ITEM_GENERIC, v65, v64);
          v66 = mHead->genericCmd.streamKey;
          if ( !v66 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1027, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey") )
            __debugbreak();
          if ( !Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1028, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
            __debugbreak();
          BYTE8(v151) = 2;
          *(_QWORD *)&v151 = v66;
          __asm
          {
            vmovups xmm0, [rbp+70h+var_D0]
            vmovdqa xmmword ptr [rbp+70h+var_80.___u0], xmm0
          }
          Stream_Logger_OnUnload("Stream_BackendQueue_ExecUnloadGenericCmd", v4, &v155, 0);
          StreamKey_UserUnloadedBackend(v66);
          v68 = DB_GetStreamKeyIndex(v66);
          StreamableBitArray_InterlockedClearArray(streamFrontendGlob->genericBits.mLoaded, v68);
          StreamableBitArray_InterlockedClearArray(streamFrontendGlob->genericRequest.mFreeable, v68);
          StreamableBitArray_InterlockedClearArray(streamFrontendGlob->genericRequest.mDanger, v68);
          break;
        default:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_backend_queue.cpp", 1592, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
            __debugbreak();
          break;
      }
      v69 = s_streamBackendGlob;
      if ( (*(_DWORD *)mHead & 0xFFFFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 652, ASSERT_TYPE_ASSERT, "(node->next == 0)", (const char *)&queryFormat, "node->next == 0") )
        __debugbreak();
      if ( !v69->commands.mHead )
        break;
      v70 = v69->commands.mHead - mHead;
      *(_DWORD *)mHead ^= (*(_DWORD *)mHead ^ v70) & 0xFFFFFF;
      v71 = *(_DWORD *)mHead << 8;
      if ( (__int64)v71 >> 8 == v70 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_rslist.h", 659, ASSERT_TYPE_ASSERT, "( node->next ) == ( curHead - node )", "%s == %s\n\t%lli, %lli", "node->next", "curHead - node", (__int64)v71 >> 8, v70) )
      {
LABEL_129:
        v69->commands.mHead = mHead;
        v23 = v157;
      }
      else
      {
        __debugbreak();
        v69->commands.mHead = mHead;
        v23 = v157;
      }
    }
    *(_DWORD *)mHead &= 0xFF000000;
    goto LABEL_129;
  }
LABEL_204:
  LODWORD(dataa) = v25 + v24;
  HIDWORD(dataa) = v159.pages[1] + pageAdjust.pages[1];
  v157 = (StreamerMemPageCounts)dataa;
  Stream_Defrag_GivePages(&v157);
  do
  {
    if ( (unsigned int)v7 >= 2 )
    {
      LODWORD(v143) = 2;
      LODWORD(v142) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 32, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", v142, v143) )
        __debugbreak();
    }
    v140 = (int)v157.pages[(unsigned int)v7];
    if ( (_DWORD)v140 )
    {
      if ( (unsigned int)v140 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned int>(unsigned int)", "signed", v140, "unsigned", (unsigned int)v140) )
        __debugbreak();
      v141 = &s_streamBackendGlob->pageAdjustment[v7];
      if ( ((unsigned __int8)v141 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_streamBackendGlob->pageAdjustment[v7]) )
        __debugbreak();
      _InterlockedExchangeAdd(v141, v140);
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

