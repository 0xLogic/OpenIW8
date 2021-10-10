/*
==============
StreamLogger::DumpEvent
==============
*/

void __fastcall StreamLogger::DumpEvent(StreamLogger *this, fileHandle_t file, int eventIndex, const StreamLogger::ObjectOfInterest *objectOfInterest, bool onlyEventsOfInterest)
{
  ?DumpEvent@StreamLogger@@AEAAXUfileHandle_t@@HAEBUObjectOfInterest@1@_N@Z(this, file, eventIndex, objectOfInterest, onlyEventsOfInterest);
}

/*
==============
Stream_Logger_GetLastItemThatUsedAddress
==============
*/

const void *__fastcall Stream_Logger_GetLastItemThatUsedAddress(const unsigned __int8 *address)
{
  return ?Stream_Logger_GetLastItemThatUsedAddress@@YAPEBXPEBE@Z(address);
}

/*
==============
Stream_Logger_OnCopyFinishedFenceCheck
==============
*/

void __fastcall Stream_Logger_OnCopyFinishedFenceCheck(const char *caller, const GfxBackEndData *data, unsigned __int64 fenceDoneValue)
{
  ?Stream_Logger_OnCopyFinishedFenceCheck@@YAXPEBDPEBUGfxBackEndData@@_K@Z(caller, data, fenceDoneValue);
}

/*
==============
Stream_Logger_OnMemoryMapped
==============
*/

void __fastcall Stream_Logger_OnMemoryMapped(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, unsigned int partIndex, const unsigned __int8 *start, const unsigned __int8 *end)
{
  ?Stream_Logger_OnMemoryMapped@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@IPEBE3@Z(caller, data, item, partIndex, start, end);
}

/*
==============
Stream_Logger_Shutdown
==============
*/

void Stream_Logger_Shutdown(void)
{
  ?Stream_Logger_Shutdown@@YAXXZ();
}

/*
==============
Stream_Logger_OnDefragFrame
==============
*/

void __fastcall Stream_Logger_OnDefragFrame(const char *caller, const GfxBackEndData *data, bool frameOpen)
{
  ?Stream_Logger_OnDefragFrame@@YAXPEBDPEBUGfxBackEndData@@_N@Z(caller, data, frameOpen);
}

/*
==============
StreamLogger::Write
==============
*/

void __fastcall StreamLogger::Write(StreamLogger *this, const char *text, fileHandle_t file)
{
  ?Write@StreamLogger@@AEAAXPEBDUfileHandle_t@@@Z(this, text, file);
}

/*
==============
Stream_Logger_OnAddressAssigned
==============
*/

void __fastcall Stream_Logger_OnAddressAssigned(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, const unsigned __int8 *address, unsigned int size)
{
  ?Stream_Logger_OnAddressAssigned@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@PEBEI@Z(caller, data, item, address, size);
}

/*
==============
Stream_Logger_OnVAddrOffsetWriteLocked
==============
*/

void __fastcall Stream_Logger_OnVAddrOffsetWriteLocked(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, const unsigned __int8 *address, unsigned int partBits)
{
  ?Stream_Logger_OnVAddrOffsetWriteLocked@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@PEBEI@Z(caller, data, item, address, partBits);
}

/*
==============
Stream_Logger_OnInsertDefragCommand
==============
*/

void __fastcall Stream_Logger_OnInsertDefragCommand(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, StreamDefragStep defragStep, const unsigned __int8 *address, unsigned int size)
{
  ?Stream_Logger_OnInsertDefragCommand@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@W4StreamDefragStep@@PEBEI@Z(caller, data, item, defragStep, address, size);
}

/*
==============
Stream_Logger_OnDefragOp
==============
*/

void __fastcall Stream_Logger_OnDefragOp(const char *caller, const GfxBackEndData *data)
{
  ?Stream_Logger_OnDefragOp@@YAXPEBDPEBUGfxBackEndData@@@Z(caller, data);
}

/*
==============
Stream_Logger_OnPrimerIntoAddress
==============
*/

void __fastcall Stream_Logger_OnPrimerIntoAddress(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, const unsigned __int8 *address, unsigned int size)
{
  ?Stream_Logger_OnPrimerIntoAddress@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@PEBEI@Z(caller, data, item, address, size);
}

/*
==============
Stream_Logger_Dump
==============
*/

bool __fastcall Stream_Logger_Dump(const unsigned __int8 *addressOfInterest)
{
  return ?Stream_Logger_Dump@@YA_NPEBE@Z(addressOfInterest);
}

/*
==============
Stream_Logger_OnPrimerAllocate
==============
*/

void __fastcall Stream_Logger_OnPrimerAllocate(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, unsigned int part)
{
  ?Stream_Logger_OnPrimerAllocate@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@I@Z(caller, data, item, part);
}

/*
==============
Stream_Logger_OnVAddrOffsetWriteChanged
==============
*/

void __fastcall Stream_Logger_OnVAddrOffsetWriteChanged(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, const unsigned __int8 *oldAddress, const unsigned __int8 *newAddress)
{
  ?Stream_Logger_OnVAddrOffsetWriteChanged@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@PEBE3@Z(caller, data, item, oldAddress, newAddress);
}

/*
==============
Stream_Logger_OnDefragUnlock
==============
*/

void __fastcall Stream_Logger_OnDefragUnlock(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item)
{
  ?Stream_Logger_OnDefragUnlock@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@@Z(caller, data, item);
}

/*
==============
Stream_Logger_OnNewHandle
==============
*/

void __fastcall Stream_Logger_OnNewHandle(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item)
{
  ?Stream_Logger_OnNewHandle@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@@Z(caller, data, item);
}

/*
==============
Stream_Logger_OnPatchDescriptor
==============
*/

void __fastcall Stream_Logger_OnPatchDescriptor(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, bool copyFromPrevBackendFrame, int minLod)
{
  ?Stream_Logger_OnPatchDescriptor@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@_NH@Z(caller, data, item, copyFromPrevBackendFrame, minLod);
}

/*
==============
Stream_Logger_OnQueueCommand
==============
*/

void __fastcall Stream_Logger_OnQueueCommand(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, StreamBackendQueueCommandType commandType, unsigned int part)
{
  ?Stream_Logger_OnQueueCommand@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@W4StreamBackendQueueCommandType@@I@Z(caller, data, item, commandType, part);
}

/*
==============
Stream_Logger_OnAliasedImage
==============
*/

void __fastcall Stream_Logger_OnAliasedImage(const char *caller, const GfxBackEndData *data, const GfxImage *image, const unsigned int mipOffset)
{
  ?Stream_Logger_OnAliasedImage@@YAXPEBDPEBUGfxBackEndData@@PEBUGfxImage@@I@Z(caller, data, image, mipOffset);
}

/*
==============
StreamLogger::DefragCommandName
==============
*/

const char *__fastcall StreamLogger::DefragCommandName(StreamLogger *this, const StreamLoggerEvent *event)
{
  return ?DefragCommandName@StreamLogger@@AEAAPEBDAEBUStreamLoggerEvent@@@Z(this, event);
}

/*
==============
Stream_Logger_OnAbortPrimer
==============
*/

void __fastcall Stream_Logger_OnAbortPrimer(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item)
{
  ?Stream_Logger_OnAbortPrimer@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@@Z(caller, data, item);
}

/*
==============
Stream_Logger_OnInsertCopyFinishedFence
==============
*/

void __fastcall Stream_Logger_OnInsertCopyFinishedFence(const char *caller, const GfxBackEndData *data, unsigned __int64 fenceDoneValue)
{
  ?Stream_Logger_OnInsertCopyFinishedFence@@YAXPEBDPEBUGfxBackEndData@@_K@Z(caller, data, fenceDoneValue);
}

/*
==============
Stream_Logger_OnPrimerLock
==============
*/

void __fastcall Stream_Logger_OnPrimerLock(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item)
{
  ?Stream_Logger_OnPrimerLock@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@@Z(caller, data, item);
}

/*
==============
Stream_Logger_OnVAddrOffsetWriteUnlocked
==============
*/

void __fastcall Stream_Logger_OnVAddrOffsetWriteUnlocked(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, const unsigned __int8 *address, unsigned int partBits)
{
  ?Stream_Logger_OnVAddrOffsetWriteUnlocked@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@PEBEI@Z(caller, data, item, address, partBits);
}

/*
==============
Stream_Logger_OnMemoryUnmapped
==============
*/

void __fastcall Stream_Logger_OnMemoryUnmapped(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, unsigned int partIndex, const unsigned __int8 *start, const unsigned __int8 *end)
{
  ?Stream_Logger_OnMemoryUnmapped@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@IPEBE3@Z(caller, data, item, partIndex, start, end);
}

/*
==============
Stream_Logger_OnDecompressBegin
==============
*/

void __fastcall Stream_Logger_OnDecompressBegin(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, const unsigned __int8 *address, unsigned int size, const StreamDecompressSrc *decompressSrc)
{
  ?Stream_Logger_OnDecompressBegin@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@PEBEIAEBUStreamDecompressSrc@@@Z(caller, data, item, address, size, decompressSrc);
}

/*
==============
Stream_Logger_Init
==============
*/

void Stream_Logger_Init(void)
{
  ?Stream_Logger_Init@@YAXXZ();
}

/*
==============
StreamLogger::Dump
==============
*/

void __fastcall StreamLogger::Dump(StreamLogger *this, StreamLogger::ObjectOfInterest *objectOfInterest)
{
  ?Dump@StreamLogger@@QEAAXAEAUObjectOfInterest@1@@Z(this, objectOfInterest);
}

/*
==============
Stream_Logger_OnUnload
==============
*/

void __fastcall Stream_Logger_OnUnload(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, unsigned int part)
{
  ?Stream_Logger_OnUnload@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@I@Z(caller, data, item, part);
}

/*
==============
Stream_Logger_OnPrimerUnlock
==============
*/

void __fastcall Stream_Logger_OnPrimerUnlock(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item)
{
  ?Stream_Logger_OnPrimerUnlock@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@@Z(caller, data, item);
}

/*
==============
Stream_Logger_OnVirtualAddressReleased
==============
*/

void __fastcall Stream_Logger_OnVirtualAddressReleased(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item)
{
  ?Stream_Logger_OnVirtualAddressReleased@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@@Z(caller, data, item);
}

/*
==============
Stream_Logger_OnMemcpy
==============
*/

void __fastcall Stream_Logger_OnMemcpy(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, unsigned int partIndex, const unsigned __int8 *src, const unsigned __int8 *dst, unsigned int size)
{
  ?Stream_Logger_OnMemcpy@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@IPEBE3I@Z(caller, data, item, partIndex, src, dst, size);
}

/*
==============
Stream_Logger_OnDefragLock
==============
*/

void __fastcall Stream_Logger_OnDefragLock(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item)
{
  ?Stream_Logger_OnDefragLock@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@@Z(caller, data, item);
}

/*
==============
Stream_Logger_OnDecompressEnd
==============
*/

void __fastcall Stream_Logger_OnDecompressEnd(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, const unsigned __int8 *address, unsigned int size, const StreamDecompressSrc *decompressSrc)
{
  ?Stream_Logger_OnDecompressEnd@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@PEBEIAEBUStreamDecompressSrc@@@Z(caller, data, item, address, size, decompressSrc);
}

/*
==============
StreamLogger::DumpEvents
==============
*/

void __fastcall StreamLogger::DumpEvents(StreamLogger *this, fileHandle_t file, const StreamLogger::ObjectOfInterest *objectOfInterest, bool onlyEventsOfInterest)
{
  ?DumpEvents@StreamLogger@@AEAAXUfileHandle_t@@AEBUObjectOfInterest@1@_N@Z(this, file, objectOfInterest, onlyEventsOfInterest);
}

/*
==============
Stream_Logger_OnVirtualAddressReserved
==============
*/

void __fastcall Stream_Logger_OnVirtualAddressReserved(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, const unsigned __int8 *address, unsigned int size)
{
  ?Stream_Logger_OnVirtualAddressReserved@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@PEBEI@Z(caller, data, item, address, size);
}

/*
==============
Stream_Logger_Dump
==============
*/

bool __fastcall Stream_Logger_Dump(const Stream_Logger_Item *item)
{
  return ?Stream_Logger_Dump@@YA_NAEBUStream_Logger_Item@@@Z(item);
}

/*
==============
StreamLogger::ItemDetails
==============
*/

const char *__fastcall StreamLogger::ItemDetails(StreamLogger *this, const StreamLoggerEvent *event)
{
  return ?ItemDetails@StreamLogger@@AEAAPEBDAEBUStreamLoggerEvent@@@Z(this, event);
}

/*
==============
Stream_Logger_OnLoad
==============
*/

void __fastcall Stream_Logger_OnLoad(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, unsigned int part)
{
  ?Stream_Logger_OnLoad@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@I@Z(caller, data, item, part);
}

/*
==============
Stream_Logger_OnRemapFixedNode
==============
*/

void __fastcall Stream_Logger_OnRemapFixedNode(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, const unsigned __int8 *oldAddress, const unsigned __int8 *newAddress, unsigned int size)
{
  ?Stream_Logger_OnRemapFixedNode@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@PEBE3I@Z(caller, data, item, oldAddress, newAddress, size);
}

/*
==============
Stream_Logger_OnUpdateImageClamp
==============
*/

void __fastcall Stream_Logger_OnUpdateImageClamp(const char *caller, const GfxBackEndData *data, const GfxImage *image, unsigned int levelCount)
{
  ?Stream_Logger_OnUpdateImageClamp@@YAXPEBDPEBUGfxBackEndData@@PEBUGfxImage@@I@Z(caller, data, image, levelCount);
}

/*
==============
Stream_Logger_OnVAddrOffsetReadChanged
==============
*/

void __fastcall Stream_Logger_OnVAddrOffsetReadChanged(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, const unsigned __int8 *oldAddress, const unsigned __int8 *newAddress)
{
  ?Stream_Logger_OnVAddrOffsetReadChanged@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@PEBE3@Z(caller, data, item, oldAddress, newAddress);
}

/*
==============
Stream_Logger_OnStreamAssetLoaded
==============
*/

void __fastcall Stream_Logger_OnStreamAssetLoaded(const char *caller, const GfxBackEndData *data, const unsigned __int8 *address, int bytes, FileStreamStatus result)
{
  ?Stream_Logger_OnStreamAssetLoaded@@YAXPEBDPEBUGfxBackEndData@@PEBEHW4FileStreamStatus@@@Z(caller, data, address, bytes, result);
}

/*
==============
Stream_Logger_ReportCrash
==============
*/

void __fastcall Stream_Logger_ReportCrash(const unsigned __int8 *gpuPageFaultAddress)
{
  ?Stream_Logger_ReportCrash@@YAXPEBE@Z(gpuPageFaultAddress);
}

/*
==============
Stream_Logger_OnFreeHandle
==============
*/

void __fastcall Stream_Logger_OnFreeHandle(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item)
{
  ?Stream_Logger_OnFreeHandle@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@@Z(caller, data, item);
}

/*
==============
StreamLogger::GetLastItemThatUsedAddress
==============
*/

const void *__fastcall StreamLogger::GetLastItemThatUsedAddress(StreamLogger *this, const unsigned __int8 *address)
{
  return ?GetLastItemThatUsedAddress@StreamLogger@@QEAAPEBXPEBE@Z(this, address);
}

/*
==============
Stream_Logger_OnNodeHarvested
==============
*/

void __fastcall Stream_Logger_OnNodeHarvested(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item)
{
  ?Stream_Logger_OnNodeHarvested@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@@Z(caller, data, item);
}

/*
==============
Stream_Logger_OnFreeHandleRemoveDefragStep
==============
*/

void __fastcall Stream_Logger_OnFreeHandleRemoveDefragStep(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, StreamDefragStep defragStep, const unsigned __int8 *address, unsigned int size, unsigned int unmappedPageCount)
{
  ?Stream_Logger_OnFreeHandleRemoveDefragStep@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@W4StreamDefragStep@@PEBEII@Z(caller, data, item, defragStep, address, size, unmappedPageCount);
}

/*
==============
StreamLogger::AllocEvent
==============
*/

StreamLoggerEvent *__fastcall StreamLogger::AllocEvent(StreamLogger *this, StreamLoggerOperation operation, const GfxBackEndData *data, const Stream_Logger_Item *item, const char *caller)
{
  return ?AllocEvent@StreamLogger@@AEAAPEAUStreamLoggerEvent@@W4StreamLoggerOperation@@PEBUGfxBackEndData@@AEBUStream_Logger_Item@@PEBD@Z(this, operation, data, item, caller);
}

/*
==============
Stream_Logger_OnDefragUnmapAsync
==============
*/

void __fastcall Stream_Logger_OnDefragUnmapAsync(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, const unsigned __int8 *address)
{
  ?Stream_Logger_OnDefragUnmapAsync@@YAXPEBDPEBUGfxBackEndData@@AEBUStream_Logger_Item@@PEBE@Z(caller, data, item, address);
}

/*
==============
StreamLogger::AllocEvent
==============
*/
StreamLoggerEvent *StreamLogger::AllocEvent(StreamLogger *this, StreamLoggerOperation operation, const GfxBackEndData *data, const Stream_Logger_Item *item, const char *caller)
{
  StreamLoggerEvent *v9; 
  const char *v10; 
  StreamLoggerEvent *v11; 
  bool v12; 
  unsigned int v13; 
  const GfxImage *m_image; 
  GfxTextureId textureId; 
  int v16; 
  unsigned __int8 *residentData; 
  GfxTextureId v18; 
  const GfxTexture *Streamed; 
  __int64 v21; 
  int v22; 
  unsigned int outBackendDataIndex; 

  if ( ((unsigned __int8)this & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", this) )
    __debugbreak();
  v9 = gsl::span<StreamLoggerEvent,-1>::operator[](&this->m_events, _InterlockedIncrement(&this->m_writeCursor) % 0x25800u);
  v10 = caller;
  v11 = v9;
  v9->m_itemAddress = NULL;
  v9->m_imageBaseAddress = NULL;
  v9->m_updateId = 0i64;
  v9->m_address1 = NULL;
  v9->m_address2 = NULL;
  *(_QWORD *)&v9->m_size = 0i64;
  *((_QWORD *)v9 + 7) = 0i64;
  v9->m_details.m_fenceDoneValue = 0i64;
  *((_BYTE *)v9 + 56) = operation;
  v9->m_caller = v10;
  v12 = Stream_BackendQueue_IsInForcedFlush();
  *((_DWORD *)v11 + 14) &= ~0x20000u;
  *((_DWORD *)v11 + 14) |= v12 << 17;
  if ( !data )
  {
    data = backEndData;
    if ( !backEndData )
      data = frontEndDataOut;
  }
  Stream_BackendQueue_GetCurrentUpdateIdAndBackendDataIndex(&v11->m_updateId, &outBackendDataIndex);
  v13 = outBackendDataIndex;
  if ( outBackendDataIndex >= 2 )
  {
    v22 = 2;
    LODWORD(v21) = outBackendDataIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_logger.cpp", 707, ASSERT_TYPE_ASSERT, "(unsigned)( backendDataIndex ) < (unsigned)( 2 )", "backendDataIndex doesn't index BACKEND_DATA_COUNT\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
    v13 = outBackendDataIndex;
  }
  *((_DWORD *)v11 + 14) ^= (*((_DWORD *)v11 + 14) ^ (v13 << 16)) & 0x10000;
  *((_BYTE *)v11 + 57) = item->m_type;
  m_image = item->m_image;
  v11->m_itemAddress = item->m_image;
  if ( item->m_type == STREAM_ITEM_IMAGE && R_Texture_IsValidTextureId(m_image->textureId) )
  {
    textureId = m_image->textureId;
    v11->m_textureId = textureId;
    v16 = 0;
    if ( R_Texture_IsResidentId(textureId) )
    {
      residentData = m_image->pixels.residentData;
    }
    else if ( m_image->pixels.streamedDataHandle.data )
    {
      residentData = Stream_AddressSpace_ResolveFrontendAddr(m_image->pixels.streamedDataHandle);
    }
    else
    {
      residentData = NULL;
    }
    v11->m_imageBaseAddress = residentData;
    if ( data )
    {
      if ( (m_image->flags & 0x40) != 0 )
      {
        v18 = m_image->textureId;
        if ( v18 )
        {
          Streamed = R_Texture_GetStreamed(data, v18);
          if ( R_Texture_HasDefaultAssigned(Streamed) )
            v16 = 0x40000;
        }
      }
    }
    *((_DWORD *)v11 + 14) &= ~0x40000u;
    *((_DWORD *)v11 + 14) |= v16;
  }
  return v11;
}

/*
==============
StreamLogger::DefragCommandName
==============
*/
const char *StreamLogger::DefragCommandName(StreamLogger *this, const StreamLoggerEvent *event)
{
  StreamDefragStep m_defragStep; 
  __int32 v3; 

  m_defragStep = event->m_details.m_defragStep;
  if ( m_defragStep == MOVEMENT )
    return "<copy>";
  v3 = m_defragStep - 1;
  if ( !v3 )
    return "<ptr fixup>";
  if ( v3 == 1 )
    return "<unmap>";
  return "<invalid>";
}

/*
==============
StreamLogger::Dump
==============
*/
void StreamLogger::Dump(StreamLogger *this, StreamLogger::ObjectOfInterest *objectOfInterest)
{
  fileHandle_t *v4; 
  const char *v5; 
  unsigned int m_fileCacheUsed; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  double *v12; 
  unsigned int v13; 

  v4 = FS_FOpenFileWriteCurrentThread((fileHandle_t *)&stru_144146DB0, (const char *)objectOfInterest);
  if ( v4 == (fileHandle_t *)-1i64 )
    Com_PrintWarning(35, "WARNING: Couldn't dump stream logger output to disk. Couldn't open StreamLoggerOutput.txt for write. Dumping to console log only.\n");
  this->m_fileCacheUsed = 0;
  if ( objectOfInterest->m_address )
  {
    v5 = j_va("Stream logger dump for address of interest 0x%p:\n", objectOfInterest->m_address);
    StreamLogger::Write(this, v5, (fileHandle_t)v4);
    Com_PrintNoFormat(0, "\n");
    if ( v4 != (fileHandle_t *)-1i64 )
    {
      m_fileCacheUsed = this->m_fileCacheUsed;
      v7 = m_fileCacheUsed;
      if ( m_fileCacheUsed + 1 > 0x10000 && m_fileCacheUsed )
      {
        FS_Write(&this->m_fileCache, m_fileCacheUsed, (fileHandle_t)v4);
        v7 = 0;
        this->m_fileCacheUsed = 0;
      }
      this->m_fileCache._Elems[v7] = p[0];
      ++this->m_fileCacheUsed;
    }
  }
  if ( objectOfInterest->m_itemAddress )
  {
    StreamLogger::DumpEvents(this, (fileHandle_t)v4, objectOfInterest, 1);
    Com_PrintNoFormat(0, "\n");
    if ( v4 != (fileHandle_t *)-1i64 )
    {
      v8 = this->m_fileCacheUsed;
      v9 = v8;
      if ( v8 + 1 > 0x10000 && v8 )
      {
        FS_Write(&this->m_fileCache, v8, (fileHandle_t)v4);
        v9 = 0;
        this->m_fileCacheUsed = 0;
      }
      this->m_fileCache._Elems[v9] = p[0];
      ++this->m_fileCacheUsed;
    }
  }
  Com_PrintNoFormat(0, "Stream logger full dump:\n");
  if ( v4 != (fileHandle_t *)-1i64 )
  {
    v10 = this->m_fileCacheUsed;
    v11 = v10;
    if ( v10 + 25 > 0x10000 && v10 )
    {
      FS_Write(&this->m_fileCache, v10, (fileHandle_t)v4);
      v11 = 0;
      this->m_fileCacheUsed = 0;
    }
    v12 = (double *)&this->m_fileCache._Elems[v11];
    *(_OWORD *)v12 = *(_OWORD *)"Stream logger full dump:\n";
    v12[2] = *(double *)"ll dump:\n";
    *((_BYTE *)v12 + 24) = aStreamLoggerFu[24];
    this->m_fileCacheUsed += 25;
  }
  StreamLogger::DumpEvents(this, (fileHandle_t)v4, objectOfInterest, 0);
  if ( v4 != (fileHandle_t *)-1i64 )
  {
    v13 = this->m_fileCacheUsed;
    if ( v13 )
    {
      FS_Write(&this->m_fileCache, v13, (fileHandle_t)v4);
      this->m_fileCacheUsed = 0;
    }
    FS_FCloseFile((fileHandle_t)v4);
  }
}

/*
==============
StreamLogger::DumpEvent
==============
*/
void StreamLogger::DumpEvent(StreamLogger *this, fileHandle_t file, int eventIndex, const StreamLogger::ObjectOfInterest *objectOfInterest, bool onlyEventsOfInterest)
{
  StreamLoggerEvent *v8; 
  const void *m_itemAddress; 
  const char *v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int m_fileCacheUsed; 
  unsigned int v15; 
  const unsigned __int8 *m_address; 
  const unsigned __int8 *m_address1; 
  const unsigned __int8 *m_address2; 
  int v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  const char *v24; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  const char *v30; 
  const char *v31; 
  const char *v32; 
  const char *v33; 
  const char *v34; 
  const char *v35; 
  const char *v36; 
  const char *v37; 
  const char *v38; 
  const char *v39; 
  const char *v40; 
  const char *v41; 
  const char *v42; 
  const char *v43; 
  const char *v44; 
  const char *v45; 
  const char *v46; 
  const char *v47; 
  const char *v48; 
  const char *v49; 
  const char *v50; 
  const char *v51; 
  const char *v52; 
  const char *v53; 
  const char *v54; 
  const char *v55; 
  const char *v56; 
  const char *v57; 
  const char *v58; 
  const char *v59; 
  const char *v60; 
  unsigned int v61; 
  unsigned int v62; 
  __int64 v63; 
  __int64 v64; 
  unsigned int v65; 
  unsigned int v66; 
  unsigned int v67; 
  unsigned int v68; 
  unsigned int m_size; 
  char _Buffer[4096]; 

  v8 = gsl::span<StreamLoggerEvent,-1>::operator[](&this->m_events, eventIndex);
  m_itemAddress = objectOfInterest->m_itemAddress;
  if ( !m_itemAddress )
  {
    m_address = objectOfInterest->m_address;
    if ( !objectOfInterest->m_address )
      goto LABEL_3;
    if ( m_address != (const unsigned __int8 *)-1i64 || !v8->m_itemAddress )
    {
      m_address1 = v8->m_address1;
      if ( m_address < m_address1 || m_address >= &m_address1[v8->m_size] )
      {
        m_address2 = v8->m_address2;
        if ( m_address < m_address2 || m_address >= &m_address2[v8->m_size] )
          goto LABEL_3;
      }
    }
LABEL_22:
    v10 = "**";
    if ( onlyEventsOfInterest )
      v10 = (char *)&queryFormat.fmt + 3;
    goto LABEL_5;
  }
  if ( v8->m_itemAddress == m_itemAddress )
    goto LABEL_22;
LABEL_3:
  if ( onlyEventsOfInterest )
    return;
  v10 = "  ";
LABEL_5:
  v11 = 32i64;
  if ( (*((_DWORD *)v8 + 14) & 0x20000) != 0 )
    v11 = 43i64;
  j_sprintf(_Buffer, "%c%s id: %10zu(%u) - ", v11, v10, v8->m_updateId, HIWORD(*((_DWORD *)v8 + 14)) & 1);
  Com_PrintNoFormat(0, _Buffer);
  v12 = -1i64;
  if ( file.handle.handle != -1 )
  {
    v13 = -1i64;
    do
      ++v13;
    while ( _Buffer[v13] );
    m_fileCacheUsed = this->m_fileCacheUsed;
    v15 = m_fileCacheUsed;
    if ( m_fileCacheUsed + (unsigned int)v13 > 0x10000 && m_fileCacheUsed )
    {
      FS_Write(&this->m_fileCache, m_fileCacheUsed, file);
      v15 = 0;
      this->m_fileCacheUsed = 0;
    }
    if ( (unsigned int)v13 <= 0x10000 )
    {
      memcpy_0(&this->m_fileCache._Elems[v15], _Buffer, (unsigned int)v13);
      this->m_fileCacheUsed += v13;
    }
    else
    {
      FS_Write(_Buffer, (unsigned int)v13, file);
    }
  }
  v19 = *((_DWORD *)v8 + 14);
  switch ( (char)v19 )
  {
    case 0:
      v20 = StreamLogger::ItemDetails(this, v8);
      j_sprintf(_Buffer, "NewHandle: 0x%p %s\n", v8->m_itemAddress, v20);
      break;
    case 1:
      v21 = StreamLogger::ItemDetails(this, v8);
      m_size = v8->m_size;
      j_sprintf(_Buffer, "Memcpy: 0x%p (part: %u) (src: 0x%p .. 0x%p) (dst: 0x%p .. 0x%p) (size: %u) %s\n", v8->m_itemAddress, v8->m_details.m_partIndex, v8->m_address1, &v8->m_address1[m_size], v8->m_address2, &v8->m_address2[m_size], m_size, v21);
      break;
    case 2:
      v22 = StreamLogger::ItemDetails(this, v8);
      LODWORD(v64) = v8->m_size;
      j_sprintf(_Buffer, "AddressAssigned: 0x%p (range: 0x%p .. 0x%p) (size: %u) %s\n", v8->m_itemAddress, v8->m_address1, &v8->m_address1[(unsigned int)v64], v64, v22);
      break;
    case 3:
      v23 = StreamLogger::ItemDetails(this, v8);
      v65 = v8->m_size;
      j_sprintf(_Buffer, "MemoryMapped: 0x%p (part: %u) (range: 0x%p .. 0x%p) (size: %u) %s\n", v8->m_itemAddress, v8->m_details.m_partIndex, v8->m_address1, &v8->m_address1[v65], v65, v23);
      break;
    case 4:
      v24 = StreamLogger::ItemDetails(this, v8);
      v66 = v8->m_size;
      j_sprintf(_Buffer, "MemoryUnmapped: 0x%p (part: %u) (range: 0x%p .. 0x%p) (size: %u) %s\n", v8->m_itemAddress, v8->m_details.m_partIndex, v8->m_address1, &v8->m_address1[v66], v66, v24);
      break;
    case 5:
      j_sprintf(_Buffer, "CopyFinishedFenceCheck (fenceDoneValue: %zu)\n", v8->m_details.m_fenceDoneValue);
      break;
    case 6:
      j_sprintf(_Buffer, "InsertCopyFinishedFence (fenceDoneValue: %zu)\n", v8->m_details.m_fenceDoneValue);
      break;
    case 7:
      v25 = StreamLogger::ItemDetails(this, v8);
      LODWORD(v64) = v8->m_size;
      j_sprintf(_Buffer, "RemapFixedNode: 0x%p (old: 0x%p) (new: 0x%p) (size: %u) %s\n", v8->m_itemAddress, v8->m_address1, v8->m_address2, v64, v25);
      break;
    case 8:
      v26 = StreamLogger::ItemDetails(this, v8);
      j_sprintf(_Buffer, "DefragLock: 0x%p %s\n", v8->m_itemAddress, v26);
      break;
    case 9:
      v27 = StreamLogger::ItemDetails(this, v8);
      j_sprintf(_Buffer, "DefragUnlock: 0x%p %s\n", v8->m_itemAddress, v27);
      break;
    case 10:
      v28 = StreamLogger::ItemDetails(this, v8);
      j_sprintf(_Buffer, "DefragUnmapAsync: 0x%p address: 0x%p %s\n", v8->m_itemAddress, v8->m_address1, v28);
      break;
    case 11:
      v29 = StreamLogger::ItemDetails(this, v8);
      v30 = StreamLogger::DefragCommandName(this, v8);
      v67 = v8->m_size;
      j_sprintf(_Buffer, "InsertDefragCommand: 0x%p (Type: %s) (address: 0x%p .. 0x%p) (size: %u) %s\n", v8->m_itemAddress, v30, v8->m_address1, &v8->m_address1[v67], v67, v29);
      break;
    case 12:
      v31 = StreamLogger::ItemDetails(this, v8);
      j_sprintf(_Buffer, "DefragFrame: mFrameOpen: 0x%d %s\n", (unsigned __int8)v8->m_details.m_fileStreamStatus[0], v31);
      break;
    case 13:
      v32 = StreamLogger::ItemDetails(this, v8);
      j_sprintf(_Buffer, "DefragOp: %s\n", v32);
      break;
    case 14:
      v33 = StreamLogger::ItemDetails(this, v8);
      v34 = StreamLogger::DefragCommandName(this, v8);
      v68 = v8->m_size;
      j_sprintf(_Buffer, "FreeHandleRemoveDefragStep: 0x%p (Type: %s) (address: 0x%p .. 0x%p) (size: %u, unmappedPageCount: %u) %s\n", v8->m_itemAddress, v34, v8->m_address1, &v8->m_address1[v68], v68, v8->m_details.m_partIndex, v33);
      break;
    case 15:
      v35 = StreamLogger::ItemDetails(this, v8);
      j_sprintf(_Buffer, "NodeHarvested: 0x%p %s\n", v8->m_itemAddress, v35);
      break;
    case 16:
      v36 = StreamLogger::ItemDetails(this, v8);
      j_sprintf(_Buffer, "VAddrOffsetWriteChanged: 0x%p (old: 0x%p) (new: 0x%p) %s\n", v8->m_itemAddress, v8->m_address1, v8->m_address2, v36);
      break;
    case 17:
      v37 = StreamLogger::ItemDetails(this, v8);
      j_sprintf(_Buffer, "VAddrOffsetReadChanged: 0x%p (old: 0x%p) (new: 0x%p) %s\n", v8->m_itemAddress, v8->m_address1, v8->m_address2, v37);
      break;
    case 18:
      v38 = StreamLogger::ItemDetails(this, v8);
      LODWORD(v63) = v8->m_size;
      j_sprintf(_Buffer, "VAddrOffsetWriteLocked: 0x%p (write address: 0x%p, partBits: 0x%x) %s\n", v8->m_itemAddress, v8->m_address1, v63, v38);
      break;
    case 19:
      v39 = StreamLogger::ItemDetails(this, v8);
      LODWORD(v63) = v8->m_size;
      j_sprintf(_Buffer, "VAddrOffsetWriteUnlocked: 0x%p (write address: 0x%p, partBits: 0x%x) %s\n", v8->m_itemAddress, v8->m_address1, v63, v39);
      break;
    case 20:
      v40 = StreamLogger::ItemDetails(this, v8);
      j_sprintf(_Buffer, "VirtualAddressReleased: 0x%p %s\n", v8->m_itemAddress, v40);
      break;
    case 21:
      v41 = StreamLogger::ItemDetails(this, v8);
      LODWORD(v64) = v8->m_size;
      j_sprintf(_Buffer, "VirtualAddressReserved: 0x%p (range: 0x%p .. 0x%p) (size: %u) %s\n", v8->m_itemAddress, v8->m_address1, &v8->m_address1[(unsigned int)v64], v64, v41);
      break;
    case 22:
      v42 = StreamLogger::ItemDetails(this, v8);
      j_sprintf(_Buffer, "PrimerLock: 0x%p %s\n", v8->m_itemAddress, v42);
      break;
    case 23:
      v43 = StreamLogger::ItemDetails(this, v8);
      j_sprintf(_Buffer, "PrimerUnlock: 0x%p %s\n", v8->m_itemAddress, v43);
      break;
    case 24:
      v44 = StreamLogger::ItemDetails(this, v8);
      LODWORD(v64) = v8->m_size;
      j_sprintf(_Buffer, "StreamAssetLoaded: 0x%p (dst: 0x%p .. 0x%p) (size: %u) (stat: %d) %s\n", v8->m_itemAddress, v8->m_address1, &v8->m_address1[(unsigned int)v64], v64, v8->m_details.m_partIndex, v44);
      break;
    case 25:
      v45 = StreamLogger::ItemDetails(this, v8);
      LODWORD(v64) = v8->m_size;
      j_sprintf(_Buffer, "DecompressBegin: 0x%p (dst: 0x%p .. 0x%p) (size: %u) (src offset: %d, src bytes: %u) %s\n", v8->m_itemAddress, v8->m_address1, &v8->m_address1[(unsigned int)v64], v64, v8->m_details.m_partIndex, v8->m_details.m_decompressSrc.srcBytes, v45);
      break;
    case 26:
      v46 = StreamLogger::ItemDetails(this, v8);
      LODWORD(v64) = v8->m_size;
      j_sprintf(_Buffer, "DecompressEnd: 0x%p (dst: 0x%p .. 0x%p) (size: %u) (src offset: %d, src bytes: %u) %s\n", v8->m_itemAddress, v8->m_address1, &v8->m_address1[(unsigned int)v64], v64, v8->m_details.m_partIndex, v8->m_details.m_decompressSrc.srcBytes, v46);
      break;
    case 27:
      if ( BYTE1(v19) || v8->m_details.m_partIndex == -1 )
      {
        v49 = StreamLogger::ItemDetails(this, v8);
        v50 = "fixup";
        if ( (*((_DWORD *)v8 + 14) & 0x80000) != 0 )
          v50 = "copy prev backend frame";
        j_sprintf(_Buffer, "PatchDescriptor: 0x%p reason: %s %s\n", v8->m_itemAddress, v50, v49);
      }
      else
      {
        v47 = StreamLogger::ItemDetails(this, v8);
        v48 = "fixup";
        if ( (*((_DWORD *)v8 + 14) & 0x80000) != 0 )
          v48 = "copy prev backend frame";
        j_sprintf(_Buffer, "PatchDescriptor: 0x%p minLod: %d reason: %s %s\n", v8->m_itemAddress, v8->m_details.m_partIndex, v48, v47);
      }
      break;
    case 28:
      v51 = StreamLogger::ItemDetails(this, v8);
      j_sprintf(_Buffer, "UpdateImageClamp: 0x%p (lod: %d) %s\n", v8->m_itemAddress, v8->m_details.m_partIndex, v51);
      break;
    case 29:
      v52 = StreamLogger::ItemDetails(this, v8);
      j_sprintf(_Buffer, "AliasedImage: 0x%p (mipOffset: %d) %s\n", v8->m_itemAddress, v8->m_details.m_partIndex, v52);
      break;
    case 30:
      v53 = StreamLogger::ItemDetails(this, v8);
      j_sprintf(_Buffer, "Load: 0x%p (part: %u) %s\n", v8->m_itemAddress, v8->m_details.m_partIndex, v53);
      break;
    case 31:
      v54 = StreamLogger::ItemDetails(this, v8);
      j_sprintf(_Buffer, "Unload: 0x%p (part: %u) %s\n", v8->m_itemAddress, v8->m_details.m_partIndex, v54);
      break;
    case 32:
      v55 = StreamLogger::ItemDetails(this, v8);
      switch ( v8->m_details.m_commandType )
      {
        case MAP:
          v56 = "<map>";
          break;
        case UNMAP:
          v56 = "<unmap>";
          break;
        case LOAD_IMAGE:
          v56 = "<load image>";
          break;
        case UNLOAD_IMAGE:
          v56 = "<unload image>";
          break;
        case LOAD_MESH:
          v56 = "<load mesh>";
          break;
        case UNLOAD_MESH:
          v56 = "<unload mesh>";
          break;
        case LOAD_GENERIC:
          v56 = "<load generic>";
          break;
        case UNLOAD_GENERIC:
          v56 = "<unload generic>";
          break;
        default:
          v56 = "<invalid>";
          break;
      }
      LODWORD(v63) = v8->m_details.m_partIndex;
      j_sprintf(_Buffer, "QueueCommand: 0x%p (type: %s, part: %u) %s\n", v8->m_itemAddress, v56, v63, v55);
      break;
    case 33:
      v57 = StreamLogger::ItemDetails(this, v8);
      j_sprintf(_Buffer, "FreeHandle: 0x%p %s\n", v8->m_itemAddress, v57);
      break;
    case 34:
      v58 = StreamLogger::ItemDetails(this, v8);
      j_sprintf(_Buffer, "AbortPrimer: 0x%p %s\n", v8->m_itemAddress, v58);
      break;
    case 35:
      v59 = StreamLogger::ItemDetails(this, v8);
      LODWORD(v64) = v8->m_size;
      j_sprintf(_Buffer, "PrimerIntoAddress: 0x%p (dst: 0x%p .. 0x%p) (size: %u) %s\n", v8->m_itemAddress, v8->m_address1, &v8->m_address1[(unsigned int)v64], v64, v59);
      break;
    case 36:
      v60 = StreamLogger::ItemDetails(this, v8);
      j_sprintf(_Buffer, "PrimerAllocate: 0x%p (part: %u) %s\n", v8->m_itemAddress, v8->m_details.m_partIndex, v60);
      break;
    default:
      break;
  }
  Com_PrintNoFormat(0, _Buffer);
  if ( file.handle.handle != -1 )
  {
    do
      ++v12;
    while ( _Buffer[v12] );
    v61 = this->m_fileCacheUsed;
    v62 = v61;
    if ( v61 + (unsigned int)v12 > 0x10000 && v61 )
    {
      FS_Write(&this->m_fileCache, v61, file);
      v62 = 0;
      this->m_fileCacheUsed = 0;
    }
    if ( (unsigned int)v12 <= 0x10000 )
    {
      memcpy_0(&this->m_fileCache._Elems[v62], _Buffer, (unsigned int)v12);
      this->m_fileCacheUsed += v12;
    }
    else
    {
      FS_Write(_Buffer, (unsigned int)v12, file);
    }
  }
}

/*
==============
StreamLogger::DumpEvents
==============
*/
void StreamLogger::DumpEvents(StreamLogger *this, fileHandle_t file, const StreamLogger::ObjectOfInterest *objectOfInterest, bool onlyEventsOfInterest)
{
  signed int v8; 
  int i; 
  int j; 

  v8 = this->m_writeCursor % 0x25800u;
  for ( i = v8; i >= 0; --i )
    StreamLogger::DumpEvent(this, file, i, objectOfInterest, onlyEventsOfInterest);
  if ( this->m_writeCursor > 0x25800u )
  {
    for ( j = 153599; j > v8; --j )
      StreamLogger::DumpEvent(this, file, j, objectOfInterest, onlyEventsOfInterest);
  }
}

/*
==============
StreamLogger::GetLastItemThatUsedAddress
==============
*/
const void *StreamLogger::GetLastItemThatUsedAddress(StreamLogger *this, const unsigned __int8 *address)
{
  signed int v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  StreamLoggerEvent *v9; 
  const void *v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  __int64 v13; 
  __int64 i; 
  __int64 v15; 
  StreamLoggerEvent *v16; 
  const void *m_itemAddress; 
  unsigned __int64 m_address1; 
  unsigned __int64 m_address2; 

  v4 = this->m_writeCursor % 0x25800u;
  v5 = v4;
  v6 = v4;
  if ( v4 < 0 )
  {
LABEL_14:
    if ( this->m_writeCursor <= 0x25800u )
      return 0i64;
    v13 = 153599i64;
    if ( v5 > 153599 )
    {
      return 0i64;
    }
    else
    {
      for ( i = 153599i64; ; --i )
      {
        v15 = v13;
        if ( (v13 < 0 || v13 >= this->m_events.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 514, ASSERT_TYPE_SANITY, "( idx >= 0 && idx < storage_.size() )", (const char *)&queryFormat, "idx >= 0 && idx < storage_.size()") )
          __debugbreak();
        v16 = &this->m_events.storage_.data_[i];
        if ( address )
        {
          if ( address == (const unsigned __int8 *)-1i64 )
          {
            m_itemAddress = v16->m_itemAddress;
            if ( m_itemAddress )
              return m_itemAddress;
          }
          m_address1 = (unsigned __int64)v16->m_address1;
          if ( (unsigned __int64)address >= m_address1 && (unsigned __int64)address < m_address1 + v16->m_size )
            break;
          m_address2 = (unsigned __int64)v16->m_address2;
          if ( (unsigned __int64)address >= m_address2 && (unsigned __int64)address < m_address2 + v16->m_size )
            break;
        }
        --v13;
        if ( v15 <= v5 )
          return 0i64;
      }
      m_itemAddress = v16->m_itemAddress;
      if ( !m_itemAddress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_logger.cpp", 579, ASSERT_TYPE_SANITY, "( objectOfInterest.m_itemAddress )", (const char *)&queryFormat, "objectOfInterest.m_itemAddress") )
        __debugbreak();
      return m_itemAddress;
    }
  }
  else
  {
    v7 = v4;
    while ( 1 )
    {
      v8 = v6;
      if ( v6 >= this->m_events.storage_.size_ && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 514, ASSERT_TYPE_SANITY, "( idx >= 0 && idx < storage_.size() )", (const char *)&queryFormat, "idx >= 0 && idx < storage_.size()") )
        __debugbreak();
      v9 = &this->m_events.storage_.data_[v7];
      if ( address )
      {
        if ( address == (const unsigned __int8 *)-1i64 )
        {
          v10 = v9->m_itemAddress;
          if ( v10 )
            return v10;
        }
        v11 = (unsigned __int64)v9->m_address1;
        if ( (unsigned __int64)address >= v11 && (unsigned __int64)address < v11 + v9->m_size )
          break;
        v12 = (unsigned __int64)v9->m_address2;
        if ( (unsigned __int64)address >= v12 && (unsigned __int64)address < v12 + v9->m_size )
          break;
      }
      --v6;
      --v7;
      if ( v8 <= 0 )
        goto LABEL_14;
    }
    v10 = v9->m_itemAddress;
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_logger.cpp", 569, ASSERT_TYPE_SANITY, "( objectOfInterest.m_itemAddress )", (const char *)&queryFormat, "objectOfInterest.m_itemAddress") )
      __debugbreak();
    return v10;
  }
}

/*
==============
StreamLogger::ItemDetails
==============
*/
char *StreamLogger::ItemDetails(StreamLogger *this, const StreamLoggerEvent *event)
{
  const char *m_caller; 
  const char *v5; 
  const char *v6; 
  char v7; 
  int v8; 
  int v9; 
  const char *v10; 
  const char *v11; 
  char v12; 
  int v13; 
  int v14; 
  const char *v15; 
  const char *v16; 
  char v17; 
  int v18; 
  int v19; 
  const unsigned __int8 *m_imageBaseAddress; 
  bool IsValidTextureId; 
  const char *v22; 
  const char *v23; 

  m_caller = event->m_caller;
  if ( *((_BYTE *)event + 57) )
  {
    if ( *((_BYTE *)event + 57) == 1 )
    {
      v10 = *(const char **)event->m_itemAddress;
      v11 = v10;
      if ( v10 )
      {
        v12 = *v10;
        if ( *v10 )
        {
          v13 = 0;
          while ( 1 )
          {
            v14 = v13;
            if ( (unsigned __int8)(v12 - 32) > 0x5Eu )
              break;
            ++v13;
            if ( v14 >= 256 )
              break;
            v12 = *++v11;
            if ( !v12 )
              return j_va("(mesh: name: %s caller: %s)", v10, m_caller);
          }
        }
      }
      v10 = "<invalid/unloaded>";
      return j_va("(mesh: name: %s caller: %s)", v10, m_caller);
    }
    else if ( *((_BYTE *)event + 57) == 2 )
    {
      v5 = *(const char **)event->m_itemAddress;
      v6 = v5;
      if ( v5 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = 0;
          while ( 1 )
          {
            v9 = v8;
            if ( (unsigned __int8)(v7 - 32) > 0x5Eu )
              break;
            ++v8;
            if ( v9 >= 256 )
              break;
            v7 = *++v6;
            if ( !v7 )
              return j_va("(generic: name: %s caller: %s)", v5, m_caller);
          }
        }
      }
      v5 = "<invalid/unloaded>";
      return j_va("(generic: name: %s caller: %s)", v5, m_caller);
    }
    else
    {
      return j_va("(caller: %s)", event->m_caller);
    }
  }
  else
  {
    v15 = *(const char **)event->m_itemAddress;
    v16 = v15;
    if ( v15 )
    {
      v17 = *v15;
      if ( *v15 )
      {
        v18 = 0;
        while ( 1 )
        {
          v19 = v18;
          if ( (unsigned __int8)(v17 - 32) > 0x5Eu )
            break;
          ++v18;
          if ( v19 >= 256 )
            break;
          v17 = *++v16;
          if ( !v17 )
            goto LABEL_31;
        }
      }
    }
    v15 = "<invalid/unloaded>";
LABEL_31:
    m_imageBaseAddress = event->m_imageBaseAddress;
    IsValidTextureId = R_Texture_IsValidTextureId(event->m_textureId);
    v22 = (char *)&queryFormat.fmt + 3;
    v23 = "<invalid> ";
    if ( IsValidTextureId )
      v23 = (char *)&queryFormat.fmt + 3;
    if ( (*((_DWORD *)event + 14) & 0x40000) != 0 )
      v22 = "<default> ";
    return j_va("(image: texId: 0x%x %s%sbaseAddr: 0x%p name: %s caller: %s)", (unsigned int)event->m_textureId, v22, v23, m_imageBaseAddress, v15, m_caller);
  }
}

/*
==============
Stream_Logger_Dump
==============
*/
char Stream_Logger_Dump(const Stream_Logger_Item *item)
{
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( ((unsigned __int8)&s_StreamLoggerDumplock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_StreamLoggerDumplock) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_StreamLoggerDumplock, 1, 0) )
    return 0;
  objectOfInterest.m_itemAddress = item->m_image;
  objectOfInterest.m_address = NULL;
  StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
  if ( ((unsigned __int64)&s_StreamLoggerDumplock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 150, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)&s_StreamLoggerDumplock) )
    __debugbreak();
  _InterlockedExchange(&s_StreamLoggerDumplock, 0);
  return 1;
}

/*
==============
Stream_Logger_Dump
==============
*/
char Stream_Logger_Dump(const unsigned __int8 *addressOfInterest)
{
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( ((unsigned __int8)&s_StreamLoggerDumplock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_StreamLoggerDumplock) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_StreamLoggerDumplock, 1, 0) )
    return 0;
  objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, addressOfInterest);
  objectOfInterest.m_address = addressOfInterest;
  StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
  if ( ((unsigned __int64)&s_StreamLoggerDumplock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 150, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)&s_StreamLoggerDumplock) )
    __debugbreak();
  _InterlockedExchange(&s_StreamLoggerDumplock, 0);
  return 1;
}

/*
==============
Stream_Logger_GetLastItemThatUsedAddress
==============
*/
const void *Stream_Logger_GetLastItemThatUsedAddress(const unsigned __int8 *address)
{
  return StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, address);
}

/*
==============
Stream_Logger_Init
==============
*/
void Stream_Logger_Init(void)
{
  unsigned __int8 *m_entriesBufferAddress; 
  gsl::span<StreamLoggerEvent,-1> v1; 
  unsigned int outPageDeficitOrCommitCount; 

  if ( s_streamLogger.m_events.storage_.size_ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_logger.cpp", 144, ASSERT_TYPE_ASSERT, "(m_events.empty())", (const char *)&queryFormat, "m_events.empty()") )
    __debugbreak();
  m_entriesBufferAddress = s_streamLogger.m_entriesBufferAddress;
  if ( !s_streamLogger.m_entriesBufferAddress )
  {
    s_streamLogger.m_entriesBufferSize = 11075584i64;
    s_streamLogger.m_entriesBufferAddress = (unsigned __int8 *)Mem_Paged_ReserveVirtualAddressRange((Mem_Pool)s_streamLogger.m_entriesBufferAddress, 0xA90000ui64, "StreamLogger");
    m_entriesBufferAddress = s_streamLogger.m_entriesBufferAddress;
    if ( !s_streamLogger.m_entriesBufferAddress )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_logger.cpp", 150, ASSERT_TYPE_SANITY, "( m_entriesBufferAddress != nullptr )", (const char *)&queryFormat, "m_entriesBufferAddress != nullptr") )
        __debugbreak();
      m_entriesBufferAddress = s_streamLogger.m_entriesBufferAddress;
    }
  }
  outPageDeficitOrCommitCount = 0;
  if ( !Mem_Paged_CommitSubPageMemory(m_entriesBufferAddress, &m_entriesBufferAddress[s_streamLogger.m_entriesBufferSize], NULL, &outPageDeficitOrCommitCount, "StreamLogger") && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_logger.cpp", 154, ASSERT_TYPE_ASSERT, "(Mem_Paged_CommitSubPageMemory( m_entriesBufferAddress, m_entriesBufferAddress + m_entriesBufferSize, nullptr, &commitPageCount , \"StreamLogger\" ))", (const char *)&queryFormat, "Mem_Paged_CommitSubPageMemory( m_entriesBufferAddress, m_entriesBufferAddress + m_entriesBufferSize, nullptr, &commitPageCount MEM_TRACK_ARGS( \"StreamLogger\" ) )") )
    __debugbreak();
  v1.storage_.size_ = 153600i64;
  v1.storage_.data_ = (StreamLoggerEvent *)s_streamLogger.m_entriesBufferAddress;
  if ( !s_streamLogger.m_entriesBufferAddress && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 546, ASSERT_TYPE_SANITY, "( (!data && ExtentType::size() == 0) || (data && ExtentType::size() >= 0) )", (const char *)&queryFormat, "(!data && ExtentType::size() == 0) || (data && ExtentType::size() >= 0)") )
    __debugbreak();
  s_streamLogger.m_events = v1;
}

/*
==============
Stream_Logger_OnAbortPrimer
==============
*/
void Stream_Logger_OnAbortPrimer(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_AbortPrimer, data, item, caller);
  }
}

/*
==============
Stream_Logger_OnAddressAssigned
==============
*/
void Stream_Logger_OnAddressAssigned(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, const unsigned __int8 *address, unsigned int size)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLoggerEvent *v7; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    v7 = StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_AddressAssigned, data, item, caller);
    v7->m_address1 = address;
    v7->m_size = size;
  }
}

/*
==============
Stream_Logger_OnAliasedImage
==============
*/
void Stream_Logger_OnAliasedImage(const char *caller, const GfxBackEndData *data, const GfxImage *image, const unsigned int mipOffset)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLogger::ObjectOfInterest objectOfInterest; 
  Stream_Logger_Item item; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    objectOfInterest.m_address = (const unsigned __int8 *)image;
    LOBYTE(objectOfInterest.m_itemAddress) = 0;
    item = (Stream_Logger_Item)objectOfInterest;
    StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_AliasedImage, data, &item, caller)->m_details.m_partIndex = mipOffset;
  }
}

/*
==============
Stream_Logger_OnCopyFinishedFenceCheck
==============
*/
void Stream_Logger_OnCopyFinishedFenceCheck(const char *caller, const GfxBackEndData *data, unsigned __int64 fenceDoneValue)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLogger::ObjectOfInterest objectOfInterest; 
  Stream_Logger_Item item; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    LOBYTE(objectOfInterest.m_itemAddress) = 3;
    item = (Stream_Logger_Item)objectOfInterest;
    StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_CopyFinishedFenceCheck, data, &item, caller)->m_details.m_fenceDoneValue = fenceDoneValue;
  }
}

/*
==============
Stream_Logger_OnDecompressBegin
==============
*/
void Stream_Logger_OnDecompressBegin(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, const unsigned __int8 *address, unsigned int size, const StreamDecompressSrc *decompressSrc)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLoggerEvent *v8; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    v8 = StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_DecompressBegin, data, item, caller);
    v8->m_size = size;
    v8->m_address1 = address;
    v8->m_details.m_decompressSrc = *decompressSrc;
  }
}

/*
==============
Stream_Logger_OnDecompressEnd
==============
*/
void Stream_Logger_OnDecompressEnd(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, const unsigned __int8 *address, unsigned int size, const StreamDecompressSrc *decompressSrc)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLoggerEvent *v8; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    v8 = StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_DecompressEnd, data, item, caller);
    v8->m_size = size;
    v8->m_address1 = address;
    v8->m_details.m_decompressSrc = *decompressSrc;
  }
}

/*
==============
Stream_Logger_OnDefragFrame
==============
*/
void Stream_Logger_OnDefragFrame(const char *caller, const GfxBackEndData *data, bool frameOpen)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLogger::ObjectOfInterest objectOfInterest; 
  Stream_Logger_Item item; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    LOBYTE(objectOfInterest.m_itemAddress) = 3;
    item = (Stream_Logger_Item)objectOfInterest;
    StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_DefragFrame, data, &item, caller)->m_details.m_fileStreamStatus[0] = frameOpen;
  }
}

/*
==============
Stream_Logger_OnDefragLock
==============
*/
void Stream_Logger_OnDefragLock(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_DefragLock, data, item, caller);
  }
}

/*
==============
Stream_Logger_OnDefragOp
==============
*/
void Stream_Logger_OnDefragOp(const char *caller, const GfxBackEndData *data)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLogger::ObjectOfInterest objectOfInterest; 
  Stream_Logger_Item item; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    LOBYTE(objectOfInterest.m_itemAddress) = 3;
    item = (Stream_Logger_Item)objectOfInterest;
    StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_DefragOp, data, &item, caller);
  }
}

/*
==============
Stream_Logger_OnDefragUnlock
==============
*/
void Stream_Logger_OnDefragUnlock(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_DefragUnlock, data, item, caller);
  }
}

/*
==============
Stream_Logger_OnDefragUnmapAsync
==============
*/
void Stream_Logger_OnDefragUnmapAsync(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, const unsigned __int8 *address)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_DefragUnmapAsync, data, item, caller)->m_address1 = address;
  }
}

/*
==============
Stream_Logger_OnFreeHandle
==============
*/
void Stream_Logger_OnFreeHandle(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_FreeHandle, data, item, caller);
  }
}

/*
==============
Stream_Logger_OnFreeHandleRemoveDefragStep
==============
*/
void Stream_Logger_OnFreeHandleRemoveDefragStep(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, StreamDefragStep defragStep, const unsigned __int8 *address, unsigned int size, unsigned int unmappedPageCount)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLoggerEvent *v9; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    v9 = StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_FreeHandleRemoveDefragStep, data, item, caller);
    v9->m_address1 = address;
    v9->m_size = size;
    v9->m_details.m_partIndex = unmappedPageCount;
    v9->m_details.m_decompressSrc.srcBytes = defragStep;
  }
}

/*
==============
Stream_Logger_OnInsertCopyFinishedFence
==============
*/
void Stream_Logger_OnInsertCopyFinishedFence(const char *caller, const GfxBackEndData *data, unsigned __int64 fenceDoneValue)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLogger::ObjectOfInterest objectOfInterest; 
  Stream_Logger_Item item; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    LOBYTE(objectOfInterest.m_itemAddress) = 3;
    item = (Stream_Logger_Item)objectOfInterest;
    StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_InsertCopyFinishedFence, data, &item, caller)->m_details.m_fenceDoneValue = fenceDoneValue;
  }
}

/*
==============
Stream_Logger_OnInsertDefragCommand
==============
*/
void Stream_Logger_OnInsertDefragCommand(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, StreamDefragStep defragStep, const unsigned __int8 *address, unsigned int size)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLoggerEvent *v8; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    v8 = StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_InsertDefragCommand, data, item, caller);
    v8->m_address1 = address;
    v8->m_size = size;
    v8->m_details.m_decompressSrc.srcBytes = defragStep;
  }
}

/*
==============
Stream_Logger_OnLoad
==============
*/
void Stream_Logger_OnLoad(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, unsigned int part)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_Load, data, item, caller)->m_details.m_partIndex = part;
  }
}

/*
==============
Stream_Logger_OnMemcpy
==============
*/
void Stream_Logger_OnMemcpy(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, unsigned int partIndex, const unsigned __int8 *src, const unsigned __int8 *dst, unsigned int size)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLoggerEvent *v9; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    v9 = StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_Memcpy, data, item, caller);
    v9->m_address1 = src;
    v9->m_address2 = dst;
    v9->m_size = size;
    v9->m_details.m_partIndex = partIndex;
  }
}

/*
==============
Stream_Logger_OnMemoryMapped
==============
*/
void Stream_Logger_OnMemoryMapped(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, unsigned int partIndex, const unsigned __int8 *start, const unsigned __int8 *end)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLoggerEvent *v8; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    v8 = StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_MemoryMapped, data, item, caller);
    v8->m_details.m_partIndex = partIndex;
    v8->m_address1 = start;
    v8->m_size = truncate_cast<unsigned int,__int64>(end - start);
  }
}

/*
==============
Stream_Logger_OnMemoryUnmapped
==============
*/
void Stream_Logger_OnMemoryUnmapped(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, unsigned int partIndex, const unsigned __int8 *start, const unsigned __int8 *end)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLoggerEvent *v8; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    v8 = StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_MemoryUnmapped, data, item, caller);
    v8->m_details.m_partIndex = partIndex;
    v8->m_address1 = start;
    v8->m_size = truncate_cast<unsigned int,__int64>(end - start);
  }
}

/*
==============
Stream_Logger_OnNewHandle
==============
*/
void Stream_Logger_OnNewHandle(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_NewHandle, data, item, caller);
  }
}

/*
==============
Stream_Logger_OnNodeHarvested
==============
*/
void Stream_Logger_OnNodeHarvested(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_NodeHarvested, data, item, caller);
  }
}

/*
==============
Stream_Logger_OnPatchDescriptor
==============
*/
void Stream_Logger_OnPatchDescriptor(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, bool copyFromPrevBackendFrame, int minLod)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLoggerEvent *v7; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    v7 = StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_PatchDescriptor, data, item, caller);
    *((_DWORD *)v7 + 14) &= ~0x80000u;
    *((_DWORD *)v7 + 14) |= copyFromPrevBackendFrame << 19;
    v7->m_details.m_partIndex = minLod;
  }
}

/*
==============
Stream_Logger_OnPrimerAllocate
==============
*/
void Stream_Logger_OnPrimerAllocate(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, unsigned int part)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_PrimerAllocate, data, item, caller)->m_details.m_partIndex = part;
  }
}

/*
==============
Stream_Logger_OnPrimerIntoAddress
==============
*/
void Stream_Logger_OnPrimerIntoAddress(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, const unsigned __int8 *address, unsigned int size)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLoggerEvent *v7; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    v7 = StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_PrimerIntoAddress, data, item, caller);
    v7->m_address1 = address;
    v7->m_size = size;
  }
}

/*
==============
Stream_Logger_OnPrimerLock
==============
*/
void Stream_Logger_OnPrimerLock(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_PrimerLock, data, item, caller);
  }
}

/*
==============
Stream_Logger_OnPrimerUnlock
==============
*/
void Stream_Logger_OnPrimerUnlock(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_PrimerUnlock, data, item, caller);
  }
}

/*
==============
Stream_Logger_OnQueueCommand
==============
*/
void Stream_Logger_OnQueueCommand(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, StreamBackendQueueCommandType commandType, unsigned int part)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLoggerEvent *v7; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    v7 = StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_QueueCommand, data, item, caller);
    v7->m_details.m_commandType = commandType;
    v7->m_details.m_partIndex = part;
  }
}

/*
==============
Stream_Logger_OnRemapFixedNode
==============
*/
void Stream_Logger_OnRemapFixedNode(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, const unsigned __int8 *oldAddress, const unsigned __int8 *newAddress, unsigned int size)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLoggerEvent *v8; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    v8 = StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_RemapFixedNode, data, item, caller);
    v8->m_address2 = newAddress;
    v8->m_size = size;
    v8->m_address1 = oldAddress;
  }
}

/*
==============
Stream_Logger_OnStreamAssetLoaded
==============
*/
void Stream_Logger_OnStreamAssetLoaded(const char *caller, const GfxBackEndData *data, const unsigned __int8 *address, int bytes, unsigned int result)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLoggerEvent *v8; 
  StreamLogger::ObjectOfInterest objectOfInterest; 
  Stream_Logger_Item item; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    LOBYTE(objectOfInterest.m_itemAddress) = 3;
    item = (Stream_Logger_Item)objectOfInterest;
    v8 = StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_StreamAssetLoaded, data, &item, caller);
    v8->m_address1 = address;
    v8->m_size = bytes;
    v8->m_details.m_partIndex = result;
  }
}

/*
==============
Stream_Logger_OnUnload
==============
*/
void Stream_Logger_OnUnload(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, unsigned int part)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_Unload, data, item, caller)->m_details.m_partIndex = part;
  }
}

/*
==============
Stream_Logger_OnUpdateImageClamp
==============
*/
void Stream_Logger_OnUpdateImageClamp(const char *caller, const GfxBackEndData *data, const GfxImage *image, unsigned int levelCount)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLogger::ObjectOfInterest objectOfInterest; 
  Stream_Logger_Item item; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    objectOfInterest.m_address = (const unsigned __int8 *)image;
    LOBYTE(objectOfInterest.m_itemAddress) = 0;
    item = (Stream_Logger_Item)objectOfInterest;
    StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_UpdateImageClamp, data, &item, caller)->m_details.m_partIndex = levelCount;
  }
}

/*
==============
Stream_Logger_OnVAddrOffsetReadChanged
==============
*/
void Stream_Logger_OnVAddrOffsetReadChanged(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, const unsigned __int8 *oldAddress, const unsigned __int8 *newAddress)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLoggerEvent *v7; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    v7 = StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_VAddrOffsetReadChanged, data, item, caller);
    v7->m_address1 = oldAddress;
    v7->m_address2 = newAddress;
  }
}

/*
==============
Stream_Logger_OnVAddrOffsetWriteChanged
==============
*/
void Stream_Logger_OnVAddrOffsetWriteChanged(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, const unsigned __int8 *oldAddress, const unsigned __int8 *newAddress)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLoggerEvent *v7; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    v7 = StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_VAddrOffsetWriteChanged, data, item, caller);
    v7->m_address1 = oldAddress;
    v7->m_address2 = newAddress;
  }
}

/*
==============
Stream_Logger_OnVAddrOffsetWriteLocked
==============
*/
void Stream_Logger_OnVAddrOffsetWriteLocked(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, const unsigned __int8 *address, unsigned int partBits)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLoggerEvent *v7; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    v7 = StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_VAddrOffsetWriteLocked, data, item, caller);
    v7->m_address1 = address;
    v7->m_size = partBits;
  }
}

/*
==============
Stream_Logger_OnVAddrOffsetWriteUnlocked
==============
*/
void Stream_Logger_OnVAddrOffsetWriteUnlocked(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, const unsigned __int8 *address, unsigned int partBits)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLoggerEvent *v7; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    v7 = StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_VAddrOffsetWriteUnlocked, data, item, caller);
    v7->m_address1 = address;
    v7->m_size = partBits;
  }
}

/*
==============
Stream_Logger_OnVirtualAddressReleased
==============
*/
void Stream_Logger_OnVirtualAddressReleased(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_VirtualAddressReleased, data, item, caller);
  }
}

/*
==============
Stream_Logger_OnVirtualAddressReserved
==============
*/
void Stream_Logger_OnVirtualAddressReserved(const char *caller, const GfxBackEndData *data, const Stream_Logger_Item *item, const unsigned __int8 *address, unsigned int size)
{
  const unsigned __int8 *m_gpuPageFaultAddress; 
  StreamLoggerEvent *v7; 
  StreamLogger::ObjectOfInterest objectOfInterest; 

  if ( s_streamLogger.m_gpuPageFaultAddress )
  {
    if ( ((unsigned __int8)&s_streamLogger.m_crashReportGenerated & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_streamLogger.m_crashReportGenerated) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&s_streamLogger.m_crashReportGenerated, 1, 0) )
    {
      m_gpuPageFaultAddress = s_streamLogger.m_gpuPageFaultAddress;
      objectOfInterest.m_itemAddress = StreamLogger::GetLastItemThatUsedAddress(&s_streamLogger, s_streamLogger.m_gpuPageFaultAddress);
      objectOfInterest.m_address = m_gpuPageFaultAddress;
      StreamLogger::Dump(&s_streamLogger, &objectOfInterest);
    }
  }
  else
  {
    v7 = StreamLogger::AllocEvent(&s_streamLogger, StreamLogger_VirtualAddressReserved, data, item, caller);
    v7->m_address1 = address;
    v7->m_size = size;
  }
}

/*
==============
Stream_Logger_ReportCrash
==============
*/
void Stream_Logger_ReportCrash(const unsigned __int8 *gpuPageFaultAddress)
{
  s_streamLogger.m_gpuPageFaultAddress = gpuPageFaultAddress;
}

/*
==============
Stream_Logger_Shutdown
==============
*/

void __fastcall Stream_Logger_Shutdown(double _XMM0_8)
{
  StreamerMemLoan result; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  s_streamLogger.m_events = _XMM0;
  Mem_Paged_DecommitSubPageMemory(&result, s_streamLogger.m_entriesBufferAddress, &s_streamLogger.m_entriesBufferAddress[s_streamLogger.m_entriesBufferSize]);
  StreamerMemLoan::~StreamerMemLoan(&result);
  s_streamLogger.m_entriesBufferAddress = NULL;
}

/*
==============
StreamLogger::Write
==============
*/
void StreamLogger::Write(StreamLogger *this, const char *text, fileHandle_t file)
{
  __int64 v6; 
  unsigned int m_fileCacheUsed; 
  unsigned int v8; 

  Com_PrintNoFormat(0, text);
  if ( file.handle.handle != -1 )
  {
    v6 = -1i64;
    do
      ++v6;
    while ( text[v6] );
    m_fileCacheUsed = this->m_fileCacheUsed;
    v8 = m_fileCacheUsed;
    if ( m_fileCacheUsed + (unsigned int)v6 > 0x10000 && m_fileCacheUsed )
    {
      FS_Write(&this->m_fileCache, m_fileCacheUsed, file);
      v8 = 0;
      this->m_fileCacheUsed = 0;
    }
    if ( (unsigned int)v6 <= 0x10000 )
    {
      memcpy_0(&this->m_fileCache._Elems[v8], text, (unsigned int)v6);
      this->m_fileCacheUsed += v6;
    }
    else
    {
      FS_Write(text, (unsigned int)v6, file);
    }
  }
}

