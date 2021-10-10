/*
==============
Stream_Read_ResetStats
==============
*/

void Stream_Read_ResetStats(void)
{
  ?Stream_Read_ResetStats@@YAXXZ();
}

/*
==============
MultiReadBuilder::AddItem
==============
*/

bool __fastcall MultiReadBuilder::AddItem(MultiReadBuilder *this, StreamItemType type, unsigned int itemPartIndex)
{
  return ?AddItem@MultiReadBuilder@@QEAA_NW4StreamItemType@@I@Z(this, type, itemPartIndex);
}

/*
==============
Stream_WaitFileBlockUpdate
==============
*/

void Stream_WaitFileBlockUpdate(void)
{
  ?Stream_WaitFileBlockUpdate@@YAXXZ();
}

/*
==============
ItemPickInfo::GetData
==============
*/

unsigned __int8 *__fastcall ItemPickInfo::GetData(ItemPickInfo *this)
{
  return ?GetData@ItemPickInfo@@QEBAPEAEXZ(this);
}

/*
==============
MultiReadBuilder::ShouldAddItem
==============
*/

bool __fastcall MultiReadBuilder::ShouldAddItem(MultiReadBuilder *this, StreamItemType type, unsigned int itemPartIndex)
{
  return ?ShouldAddItem@MultiReadBuilder@@QEBA_NW4StreamItemType@@I@Z(this, type, itemPartIndex);
}

/*
==============
Stream_Read_UpdateClientFrame
==============
*/

void Stream_Read_UpdateClientFrame(void)
{
  ?Stream_Read_UpdateClientFrame@@YAXXZ();
}

/*
==============
Stream_Read_Init
==============
*/

void Stream_Read_Init(void)
{
  ?Stream_Read_Init@@YAXXZ();
}

/*
==============
Stream_FileBlockUpdateInProgress
==============
*/

bool __fastcall Stream_FileBlockUpdateInProgress()
{
  return ?Stream_FileBlockUpdateInProgress@@YA_NXZ();
}

/*
==============
Stream_Read_GetStats
==============
*/

StreamReadStats *__fastcall Stream_Read_GetStats(StreamReadStats *result)
{
  return ?Stream_Read_GetStats@@YA?AUStreamReadStats@@XZ(result);
}

/*
==============
ItemPickInfo::GetName
==============
*/

const char *__fastcall ItemPickInfo::GetName(ItemPickInfo *this)
{
  return ?GetName@ItemPickInfo@@QEBAPEBDXZ(this);
}

/*
==============
Stream_Read_CancelAllInFlightLoads
==============
*/

void Stream_Read_CancelAllInFlightLoads(void)
{
  ?Stream_Read_CancelAllInFlightLoads@@YAXXZ();
}

/*
==============
ItemPickInfo::GetXPakEntryInfo
==============
*/

const XPakEntryInfo *__fastcall ItemPickInfo::GetXPakEntryInfo(ItemPickInfo *this)
{
  return ?GetXPakEntryInfo@ItemPickInfo@@QEBAPEBUXPakEntryInfo@@XZ(this);
}

/*
==============
ItemPickInfo::GetHandle
==============
*/

streamer_handle_t __fastcall ItemPickInfo::GetHandle(ItemPickInfo *this)
{
  return ?GetHandle@ItemPickInfo@@QEBA?AUstreamer_handle_t@@XZ(this);
}

/*
==============
ItemPickInfo::GetSizeInBytes
==============
*/

unsigned int __fastcall ItemPickInfo::GetSizeInBytes(ItemPickInfo *this)
{
  return ?GetSizeInBytes@ItemPickInfo@@QEBAIXZ(this);
}

/*
==============
Stream_Read_Shutdown
==============
*/

void Stream_Read_Shutdown(void)
{
  ?Stream_Read_Shutdown@@YAXXZ();
}

/*
==============
Stream_QueueFileBlockUpdate
==============
*/

void Stream_QueueFileBlockUpdate(void)
{
  ?Stream_QueueFileBlockUpdate@@YAXXZ();
}

/*
==============
ItemReadInfo::LockDst
==============
*/

unsigned __int8 *__fastcall ItemReadInfo::LockDst(ItemReadInfo *this)
{
  return ?LockDst@ItemReadInfo@@QEAAPEAEXZ(this);
}

/*
==============
Stream_Read_GetCommitSize
==============
*/

unsigned __int64 __fastcall Stream_Read_GetCommitSize()
{
  return ?Stream_Read_GetCommitSize@@YA_KXZ();
}

/*
==============
Stream_Read_GetProfileDebugText
==============
*/

const char *__fastcall Stream_Read_GetProfileDebugText()
{
  return ?Stream_Read_GetProfileDebugText@@YAPEBDXZ();
}

/*
==============
Stream_UpdateFileBlocksCmd
==============
*/

void __fastcall Stream_UpdateFileBlocksCmd(const void *const data)
{
  ?Stream_UpdateFileBlocksCmd@@YAXQEBX@Z(data);
}

/*
==============
ItemReadInfo::UnlockDst
==============
*/

void __fastcall ItemReadInfo::UnlockDst(ItemReadInfo *this)
{
  ?UnlockDst@ItemReadInfo@@QEAAXXZ(this);
}

/*
==============
MultiReadBuilder::AddItem
==============
*/
bool MultiReadBuilder::AddItem(MultiReadBuilder *this, StreamItemType type, unsigned int itemPartIndex)
{
  StreamableBits *StremableBitsForType; 
  XPakEntryInfo *EntryInfo; 
  __int64 offset; 
  unsigned int v9; 
  ItemReadInfo *v11; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 

  if ( !MultiReadBuilder::ShouldAddItem(this, type, itemPartIndex) )
    return 1;
  StremableBitsForType = Stream_GetStremableBitsForType(type);
  if ( !StreamableBits::SetLoadingConditional(StremableBitsForType, itemPartIndex) )
    return 1;
  EntryInfo = XPak_GetEntryInfo(type, itemPartIndex);
  if ( !EntryInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 851, ASSERT_TYPE_ASSERT, "(entry)", (const char *)&queryFormat, "entry") )
    __debugbreak();
  if ( (*((_DWORD *)EntryInfo + 6) & 0x200i64) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 852, ASSERT_TYPE_ASSERT, "(entry->valid)", (const char *)&queryFormat, "entry->valid") )
    __debugbreak();
  if ( *((_BYTE *)EntryInfo + 24) != (unsigned __int8)*((_QWORD *)XPak_GetEntryInfo(this->mItemReadInfoArray->pickedItem.type, this->mItemReadInfoArray->pickedItem.itemPartIndex) + 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 855, ASSERT_TYPE_ASSERT, "(entry->xpakIndex == XPak_GetEntryInfo( primaryItem.type, primaryItem.itemPartIndex )->xpakIndex)", (const char *)&queryFormat, "entry->xpakIndex == XPak_GetEntryInfo( primaryItem.type, primaryItem.itemPartIndex )->xpakIndex") )
    __debugbreak();
  offset = EntryInfo->offset;
  v9 = truncate_cast<unsigned int,unsigned __int64>(EntryInfo->size);
  if ( offset < this->mMinOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 859, ASSERT_TYPE_ASSERT, "( offset ) >= ( mMinOffset )", "%s >= %s\n\t%lli, %lli", "offset", "mMinOffset", offset, this->mMinOffset) )
    __debugbreak();
  if ( offset >= this->mMinOffset + 0x200000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 860, ASSERT_TYPE_ASSERT, "( offset ) < ( mMinOffset + 2 * STREAM_FILEBUF_BLOCK_SIZE )", "%s < %s\n\t%lli, %lli", "offset", "mMinOffset + 2 * STREAM_FILEBUF_BLOCK_SIZE", offset, this->mMinOffset + 0x200000) )
    __debugbreak();
  if ( v9 > 0x100000 )
    return 0;
  if ( this->mNumItemsToRead >= 0x40u )
  {
    LODWORD(v14) = 64;
    LODWORD(v13) = this->mNumItemsToRead;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 867, ASSERT_TYPE_ASSERT, "(unsigned)( mNumItemsToRead ) < (unsigned)( STREAM_MAX_ITEMS_PER_READ )", "mNumItemsToRead doesn't index STREAM_MAX_ITEMS_PER_READ\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  v11 = &this->mItemReadInfoArray[this->mNumItemsToRead];
  Stream_InitItemReadInfo(this->mSortList, type, itemPartIndex, v11);
  v12 = truncate_cast<unsigned int,__int64>(offset - this->mMinOffset);
  v11->decompress.srcOffset = v12;
  if ( v12 >= 0x200000 )
  {
    LODWORD(v14) = 0x200000;
    LODWORD(v13) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 872, ASSERT_TYPE_ASSERT, "(unsigned)( itemReadInfo->decompress.srcOffset ) < (unsigned)( STREAM_FILEBUF_BLOCK_SIZE * 2 )", "itemReadInfo->decompress.srcOffset doesn't index STREAM_FILEBUF_BLOCK_SIZE * 2\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  v11->decompress.srcBytes = v9;
  return ++this->mNumItemsToRead < 64;
}

/*
==============
ItemPickInfo::GetData
==============
*/
unsigned __int8 *ItemPickInfo::GetData(ItemPickInfo *this)
{
  StreamItemType type; 
  unsigned __int8 *v3; 
  streamer_handle_t v5; 
  unsigned __int8 *v6; 
  __int64 v7; 

  if ( !this->item && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 128, ASSERT_TYPE_ASSERT, "(item)", (const char *)&queryFormat, "item") )
    __debugbreak();
  type = this->type;
  if ( (unsigned __int8)type >= STREAM_ITEM_COUNT )
  {
    LODWORD(v7) = (unsigned __int8)type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 129, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( STREAM_ITEM_COUNT )", "type doesn't index STREAM_ITEM_COUNT\n\t%i not in [0, %i)", v7, 3) )
      __debugbreak();
  }
  if ( this->type )
  {
    v5.data = ItemPickInfo::GetHandle(this).data;
    v6 = Stream_AddressSpace_ResolveFrontendAddr(*(streamer_handle_t *)v5.data);
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 140, ASSERT_TYPE_ASSERT, "(address)", (const char *)&queryFormat, "address") )
      __debugbreak();
    return v6;
  }
  else
  {
    v3 = Stream_AddressSpace_ResolveFrontendAddr(*(streamer_handle_t *)((char *)this->item + 224));
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 134, ASSERT_TYPE_ASSERT, "(baseAddress)", (const char *)&queryFormat, "baseAddress") )
      __debugbreak();
    return &v3[Image_PartOffset(this->image, this->itemPartIndex & 3)];
  }
}

/*
==============
ItemPickInfo::GetHandle
==============
*/
streamer_handle_t ItemPickInfo::GetHandle(ItemPickInfo *this, _QWORD *a2)
{
  StreamItemType type; 
  streamer_handle_t result; 
  __int64 v6; 
  __int64 v7; 

  if ( !this->item && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 87, ASSERT_TYPE_ASSERT, "(item)", (const char *)&queryFormat, "item") )
    __debugbreak();
  type = this->type;
  if ( (unsigned __int8)type >= STREAM_ITEM_COUNT )
  {
    LODWORD(v7) = (unsigned __int8)type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 88, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( STREAM_ITEM_COUNT )", "type doesn't index STREAM_ITEM_COUNT\n\t%i not in [0, %i)", v7, 3) )
      __debugbreak();
  }
  switch ( this->type )
  {
    case STREAM_ITEM_IMAGE:
      v6 = *((_QWORD *)this->item + 28);
LABEL_19:
      result.data = (unsigned __int64)a2;
      *a2 = v6;
      return result;
    case STREAM_ITEM_MESH:
      *a2 = **((_QWORD **)this->item + 6);
      return (streamer_handle_t)a2;
    case STREAM_ITEM_GENERIC:
      if ( (*((_BYTE *)this->item + 61) & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 97, ASSERT_TYPE_ASSERT, "(!streamKey->Resident())", (const char *)&queryFormat, "!streamKey->Resident()") )
        __debugbreak();
      v6 = *((_QWORD *)this->item + 5);
      goto LABEL_19;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 100, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
    __debugbreak();
  *a2 = 0i64;
  return (streamer_handle_t)a2;
}

/*
==============
ItemPickInfo::GetName
==============
*/
const char *ItemPickInfo::GetName(ItemPickInfo *this)
{
  if ( !this->item && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 179, ASSERT_TYPE_ASSERT, "(item)", (const char *)&queryFormat, "item") )
    __debugbreak();
  if ( this->type == STREAM_ITEM_IMAGE || this->type == STREAM_ITEM_MESH || this->type == STREAM_ITEM_GENERIC )
    return *(const char **)this->item;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 190, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
    __debugbreak();
  return (char *)&queryFormat.fmt + 3;
}

/*
==============
ItemPickInfo::GetSizeInBytes
==============
*/
__int64 ItemPickInfo::GetSizeInBytes(ItemPickInfo *this)
{
  unsigned int itemPartIndex; 
  const GfxImage *item; 
  __int64 v5; 
  GfxImageStreamLevelCountAndSize *p_levelCountAndSize; 
  __int64 v7; 
  unsigned int StreamedPartCount; 

  if ( !this->item && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 147, ASSERT_TYPE_ASSERT, "(item)", (const char *)&queryFormat, "item") )
    __debugbreak();
  if ( this->type )
  {
    if ( this->type == STREAM_ITEM_MESH )
    {
      return *(unsigned int *)(*((_QWORD *)this->item + 6) + 8i64);
    }
    else if ( this->type == STREAM_ITEM_GENERIC )
    {
      return *((unsigned int *)this->item + 14);
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 158, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
        __debugbreak();
      return 0i64;
    }
  }
  else
  {
    itemPartIndex = this->itemPartIndex;
    item = (const GfxImage *)this->item;
    v5 = itemPartIndex & 3;
    if ( !item && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 200, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
      __debugbreak();
    if ( (item->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
      __debugbreak();
    if ( (unsigned int)v5 >= Image_GetStreamedPartCount(item) )
    {
      StreamedPartCount = Image_GetStreamedPartCount(item);
      LODWORD(v7) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v7, StreamedPartCount) )
        __debugbreak();
    }
    p_levelCountAndSize = &item->streams[v5].levelCountAndSize;
    if ( (_DWORD)v5 )
      return ((unsigned int)*p_levelCountAndSize >> 4) - ((unsigned int)item->streams[(unsigned int)(v5 - 1)].levelCountAndSize >> 4);
    else
      return (unsigned int)*p_levelCountAndSize >> 4;
  }
}

/*
==============
ItemPickInfo::GetXPakEntryInfo
==============
*/
const XPakEntryInfo *ItemPickInfo::GetXPakEntryInfo(ItemPickInfo *this)
{
  StreamItemType type; 
  __int64 v4; 

  if ( !this->item && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 107, ASSERT_TYPE_ASSERT, "(item)", (const char *)&queryFormat, "item") )
    __debugbreak();
  type = this->type;
  if ( (unsigned __int8)type >= STREAM_ITEM_COUNT )
  {
    LODWORD(v4) = (unsigned __int8)type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 108, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( STREAM_ITEM_COUNT )", "type doesn't index STREAM_ITEM_COUNT\n\t%i not in [0, %i)", v4, 3) )
      __debugbreak();
  }
  switch ( this->type )
  {
    case STREAM_ITEM_IMAGE:
      return (const XPakEntryInfo *)((char *)this->item + 40 * (this->itemPartIndex & 3) + 56);
    case STREAM_ITEM_MESH:
      return (const XPakEntryInfo *)((char *)this->item + 16);
    case STREAM_ITEM_GENERIC:
      if ( (*((_BYTE *)this->item + 61) & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 117, ASSERT_TYPE_ASSERT, "(!streamKey->Resident())", (const char *)&queryFormat, "!streamKey->Resident()") )
        __debugbreak();
      return (const XPakEntryInfo *)((char *)this->item + 8);
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 120, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
        __debugbreak();
      return 0i64;
  }
}

/*
==============
ItemReadInfo::LockDst
==============
*/
unsigned __int8 *ItemReadInfo::LockDst(ItemReadInfo *this)
{
  StreamItemType type; 
  bool v3; 
  unsigned __int8 *v4; 
  streamer_handle_t v6; 
  unsigned __int8 *v7; 
  __int64 v8; 

  if ( !this->pickedItem.item && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 210, ASSERT_TYPE_ASSERT, "(pickedItem.item)", (const char *)&queryFormat, "pickedItem.item") )
    __debugbreak();
  type = this->pickedItem.type;
  if ( (unsigned __int8)type >= STREAM_ITEM_COUNT )
  {
    LODWORD(v8) = (unsigned __int8)type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 211, ASSERT_TYPE_ASSERT, "(unsigned)( pickedItem.type ) < (unsigned)( STREAM_ITEM_COUNT )", "pickedItem.type doesn't index STREAM_ITEM_COUNT\n\t%i not in [0, %i)", v8, 3) )
      __debugbreak();
  }
  if ( this->isWriteAddressLocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 212, ASSERT_TYPE_ASSERT, "(!isWriteAddressLocked)", (const char *)&queryFormat, "!isWriteAddressLocked") )
    __debugbreak();
  v3 = this->pickedItem.type == STREAM_ITEM_IMAGE;
  this->isWriteAddressLocked = 1;
  if ( v3 )
  {
    v4 = Stream_AddressSpace_LockFrontendAddr(*(streamer_handle_t *)((char *)this->pickedItem.item + 224), this->pickedItem.itemPartIndex & 3);
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 219, ASSERT_TYPE_ASSERT, "(baseAddress)", (const char *)&queryFormat, "baseAddress") )
      __debugbreak();
    return &v4[Image_PartOffset(this->pickedItem.image, this->pickedItem.itemPartIndex & 3)];
  }
  else
  {
    v6.data = ItemPickInfo::GetHandle(&this->pickedItem).data;
    v7 = Stream_AddressSpace_LockFrontendAddr(*(streamer_handle_t *)v6.data, 0);
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 225, ASSERT_TYPE_ASSERT, "(address)", (const char *)&queryFormat, "address") )
      __debugbreak();
    return v7;
  }
}

/*
==============
MultiReadBuilder::ShouldAddItem
==============
*/
char MultiReadBuilder::ShouldAddItem(MultiReadBuilder *this, StreamItemType type, unsigned int itemPartIndex)
{
  ItemReadInfo *mItemReadInfoArray; 
  __int64 v5; 
  unsigned int *v7; 
  unsigned int v8; 
  bool MeshNow; 
  unsigned int *bitsStable; 
  unsigned int v11; 
  const StreamSortListFrame *mSortList; 

  mItemReadInfoArray = this->mItemReadInfoArray;
  v5 = (int)itemPartIndex;
  if ( itemPartIndex == mItemReadInfoArray->pickedItem.itemPartIndex && type == mItemReadInfoArray->pickedItem.type )
    return 0;
  if ( type )
  {
    if ( type == STREAM_ITEM_MESH )
    {
      bitsStable = streamFrontendGlob->meshRequest.bitsStable;
      if ( !bitsStable && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v11 = bitsStable[v5 >> 5];
      if ( !_bittest((const int *)&v11, v5 & 0x1F) || !StreamSortList<45056>::InList(&this->mSortList->meshSortList, v5) )
        return 0;
      MeshNow = Stream_ShouldReadMeshNow(this->mSortList, v5);
    }
    else
    {
      if ( type != STREAM_ITEM_GENERIC )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 832, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
        {
          __debugbreak();
          return 1;
        }
        return 1;
      }
      v7 = streamFrontendGlob->genericRequest.bitsStable;
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v8 = v7[v5 >> 5];
      if ( !_bittest((const int *)&v8, v5 & 0x1F) || !StreamSortList<37888>::InList(&this->mSortList->genericSortList, v5) )
        return 0;
      MeshNow = Stream_ShouldReadGenericNow(this->mSortList, v5);
    }
    if ( !MeshNow )
      return 0;
  }
  else
  {
    mSortList = this->mSortList;
    if ( itemPartIndex >= 0x50000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", itemPartIndex, 327680) )
      __debugbreak();
    if ( mSortList->imagePartDistance.mDistances[v5].mValue > this->mMaxDistance.mValue || !StreamSortList<327680>::InList(&this->mSortList->imageSortList, v5) || !Stream_ShouldReadImagePartNow(this->mSortList, v5) )
      return 0;
  }
  return 1;
}

/*
==============
Stream_ApplyFreeInertiaToImageDistance
==============
*/
float Stream_ApplyFreeInertiaToImageDistance(StreamDistance distance)
{
  const dvar_t *v1; 
  float value; 
  float v4; 
  float Px; 

  v1 = DCONST_DVARFLT_stream_distanceImageInertia;
  if ( !DCONST_DVARFLT_stream_distanceImageInertia && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceImageInertia") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  value = v1->current.value;
  if ( value < 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 747, ASSERT_TYPE_ASSERT, "( inertia ) >= ( 1.0f )", "%s >= %s\n\t%g, %g", "inertia", "1.0f", value, DOUBLE_1_0) )
    __debugbreak();
  if ( distance.mValue == -1 )
    v4 = FLOAT_3_4027977e38;
  else
    LODWORD(v4) = (StreamDistance)(distance.mValue << 7);
  Px = v4 * value;
  if ( _fdtest(&Px) == 1 && (float)(v4 * value) > 0.0 )
    return FLOAT_3_4027977e38;
  else
    return v4 * value;
}

/*
==============
Stream_ClearFileBlockItemsLoading
==============
*/
void Stream_ClearFileBlockItemsLoading(StreamBufferBlockInfo *blockInfo)
{
  __int64 i; 
  __int64 itemPartIndex; 
  StreamableBits *StremableBitsForType; 
  unsigned int *mLoading; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 

  for ( i = 0i64; (unsigned int)i < blockInfo->readInfo.numItems; i = (unsigned int)(i + 1) )
  {
    itemPartIndex = (int)blockInfo->readInfo.itemReadInfo[i].pickedItem.itemPartIndex;
    StremableBitsForType = Stream_GetStremableBitsForType(blockInfo->readInfo.itemReadInfo[i].pickedItem.type);
    if ( (unsigned int)itemPartIndex >= StremableBitsForType->mBitCount )
    {
      LODWORD(v8) = StremableBitsForType->mBitCount;
      LODWORD(v7) = itemPartIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 288, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    mLoading = StremableBitsForType->mLoading;
    if ( !mLoading && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    v6 = mLoading[itemPartIndex >> 5];
    if ( !_bittest((const int *)&v6, itemPartIndex & 0x1F) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 597, ASSERT_TYPE_ASSERT, "(bits.CheckLoading( itemPartIndex ))", (const char *)&queryFormat, "bits.CheckLoading( itemPartIndex )") )
      __debugbreak();
    StreamableBits::ClearLoading(StremableBitsForType, itemPartIndex);
  }
}

/*
==============
Stream_ClearItemLoading
==============
*/
void Stream_ClearItemLoading(const ItemReadInfo *readInfo)
{
  __int64 itemPartIndex; 
  StreamableBits *StremableBitsForType; 
  unsigned int *mLoading; 
  unsigned int v4; 

  itemPartIndex = (int)readInfo->pickedItem.itemPartIndex;
  StremableBitsForType = Stream_GetStremableBitsForType(readInfo->pickedItem.type);
  if ( (unsigned int)itemPartIndex >= StremableBitsForType->mBitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 288, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", itemPartIndex, StremableBitsForType->mBitCount) )
    __debugbreak();
  mLoading = StremableBitsForType->mLoading;
  if ( !mLoading && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v4 = mLoading[itemPartIndex >> 5];
  if ( !_bittest((const int *)&v4, itemPartIndex & 0x1F) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 597, ASSERT_TYPE_ASSERT, "(bits.CheckLoading( itemPartIndex ))", (const char *)&queryFormat, "bits.CheckLoading( itemPartIndex )") )
    __debugbreak();
  StreamableBits::ClearLoading(StremableBitsForType, itemPartIndex);
}

/*
==============
Stream_ComputeMultipleItemReadAheadDistance
==============
*/
StreamDistance *Stream_ComputeMultipleItemReadAheadDistance(StreamDistance *result, const StreamSortListFrame *sortList, StreamDistance maxDistance, const ItemPickInfo *primaryItem)
{
  __int128 v4; 
  __int64 v7; 
  float v8; 
  const dvar_t *v9; 
  int ImagePartToFree; 
  __int64 v11; 
  const dvar_t *v12; 
  __int128 unsignedInt; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  __int128 v19; 
  __int64 v22; 
  __int64 v23; 
  __int128 v24; 
  ItemPickInfo resulta; 
  __int128 v26; 
  int sortedImageIndex; 
  unsigned int v28; 

  if ( primaryItem->type )
  {
    sortedImageIndex = sortList->imageSortList.mCount - 1;
    v24 = *(_OWORD *)&Stream_UpdateFileBlock_GetBestImage(&resulta, sortList, &sortedImageIndex, maxDistance)->item;
    if ( (_QWORD)v24 )
      v7 = HIDWORD(*((_QWORD *)&v24 + 1));
    else
      LODWORD(v7) = 458762;
  }
  else
  {
    LODWORD(v7) = primaryItem->distance.mValue;
  }
  result->mValue = v7;
  if ( (_DWORD)v7 == -1 )
  {
    v8 = FLOAT_3_4027977e38;
  }
  else
  {
    sortedImageIndex = (_DWORD)v7 << 7;
    LODWORD(v8) = (_DWORD)v7 << 7;
  }
  v9 = DVARFLT_stream_distanceImageNeeded;
  if ( !DVARFLT_stream_distanceImageNeeded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_distanceImageNeeded") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v8 < (float)((float)(v9->current.value * v9->current.value) * 9.0) )
  {
    ImagePartToFree = Stream_Alloc_GetImagePartToFree(sortList, (StreamDistance)v7);
    v11 = ImagePartToFree;
    if ( ImagePartToFree >= 0 )
    {
      v26 = v4;
      if ( (unsigned int)ImagePartToFree >= 0x50000 )
      {
        LODWORD(v23) = 327680;
        LODWORD(v22) = ImagePartToFree;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v22, v23) )
          __debugbreak();
      }
      Stream_ApplyFreeInertiaToImageDistance(sortList->imagePartDistance.mDistances[v11]);
      if ( streamFrontendGlob->loadSync.startTimeMs > 0 || streamFrontendGlob->loadSync.isActiveInFrontend )
      {
        v15 = DCONST_DVARFLT_stream_syncSP_imageQuality;
        if ( !DCONST_DVARFLT_stream_syncSP_imageQuality && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_syncSP_imageQuality") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v15);
        v16 = DCONST_DVARFLT_stream_syncMP_imageQuality;
        if ( !DCONST_DVARFLT_stream_syncMP_imageQuality && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_syncMP_imageQuality") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v16);
        _XMM0 = v16->current.unsignedInt;
        __asm { vminss  xmm1, xmm0, xmm7 }
        v19 = _XMM1;
        *(float *)&v19 = *(float *)&_XMM1 * *(float *)&_XMM1;
        _XMM2 = v19;
      }
      else
      {
        v12 = DVARFLT_stream_readAheadMaxDistanceRange;
        if ( !DVARFLT_stream_readAheadMaxDistanceRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_readAheadMaxDistanceRange") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v12);
        unsignedInt = v12->current.unsignedInt;
        *(float *)&unsignedInt = (float)(*(float *)&unsignedInt * *(float *)&unsignedInt) + v8;
        _XMM2 = unsignedInt;
      }
      __asm { vminss  xmm3, xmm2, xmm6 }
      sortedImageIndex = _XMM3;
      v28 = _XMM3;
      if ( (_XMM3 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
        __debugbreak();
      result->mValue = v28 >> 7;
    }
  }
  return result;
}

/*
==============
Stream_DLogAnalytics
==============
*/
void Stream_DLogAnalytics(const StreamBufferBlockInfo *blockInfo)
{
  const dvar_t *v1; 
  unsigned int i; 
  ItemPickInfo *p_pickedItem; 
  StreamItemType type; 
  unsigned __int64 *v6; 
  int v7; 
  int ControllerFromClient; 
  unsigned __int64 UserId; 
  __int64 v10; 
  __int64 v11; 

  v1 = DVARBOOL_stream_dlog_analytics_enabled;
  if ( !DVARBOOL_stream_dlog_analytics_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_dlog_analytics_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    for ( i = 0; i < blockInfo->readInfo.numItems; ++i )
    {
      p_pickedItem = &blockInfo->readInfo.itemReadInfo[i].pickedItem;
      if ( !p_pickedItem->item && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 107, ASSERT_TYPE_ASSERT, "(item)", (const char *)&queryFormat, "item") )
        __debugbreak();
      type = blockInfo->readInfo.itemReadInfo[i].pickedItem.type;
      if ( (unsigned __int8)type >= STREAM_ITEM_COUNT )
      {
        LODWORD(v11) = 3;
        LODWORD(v10) = (unsigned __int8)type;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 108, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( STREAM_ITEM_COUNT )", "type doesn't index STREAM_ITEM_COUNT\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( blockInfo->readInfo.itemReadInfo[i].pickedItem.type )
      {
        if ( blockInfo->readInfo.itemReadInfo[i].pickedItem.type == STREAM_ITEM_MESH )
        {
          v6 = (unsigned __int64 *)((char *)p_pickedItem->item + 16);
        }
        else if ( blockInfo->readInfo.itemReadInfo[i].pickedItem.type == STREAM_ITEM_GENERIC )
        {
          if ( (*((_BYTE *)p_pickedItem->item + 61) & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 117, ASSERT_TYPE_ASSERT, "(!streamKey->Resident())", (const char *)&queryFormat, "!streamKey->Resident()") )
            __debugbreak();
          v6 = (unsigned __int64 *)((char *)p_pickedItem->item + 8);
        }
        else
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 120, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
            __debugbreak();
          v6 = NULL;
        }
      }
      else
      {
        v6 = (unsigned __int64 *)((char *)blockInfo->readInfo.itemReadInfo[i].pickedItem.item + 40 * (blockInfo->readInfo.itemReadInfo[i].pickedItem.itemPartIndex & 3) + 56);
      }
      if ( (unsigned int)s_XPakKeyLoggingCurrentIndex >= 0x700 )
      {
        LODWORD(v11) = 1792;
        LODWORD(v10) = s_XPakKeyLoggingCurrentIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1418, ASSERT_TYPE_ASSERT, "(unsigned)( s_XPakKeyLoggingCurrentIndex ) < (unsigned)( XPAK_KEY_LOGGING_BUFFER_NUM_ENTRIES )", "s_XPakKeyLoggingCurrentIndex doesn't index XPAK_KEY_LOGGING_BUFFER_NUM_ENTRIES\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      s_XPakKeyLoggingBuffer[s_XPakKeyLoggingCurrentIndex++] = *v6;
      if ( s_XPakKeyLoggingCurrentIndex >= 1792 )
      {
        if ( CL_Mgr_IsClientActive(LOCAL_CLIENT_0) )
        {
          v7 = 8 * s_XPakKeyLoggingCurrentIndex;
          ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
          UserId = DLog_GetUserId(ControllerFromClient);
          DLog_RecordEvent<16384,char const *,unsigned char *,int>(UserId, "dlog_event_xpak_analytics", "xpak_keys", (unsigned __int8 *)s_XPakKeyLoggingBuffer, v7);
        }
        s_XPakKeyLoggingCurrentIndex = 0;
      }
    }
  }
}

/*
==============
Stream_FileBlockUpdateInProgress
==============
*/
bool Stream_FileBlockUpdateInProgress()
{
  return Sys_ExistsWorkerCmdsOfType(WRKCMD_STREAM_UPDATE_FILE_BLOCKS);
}

/*
==============
Stream_FileStreamReadCallback
==============
*/
void Stream_FileStreamReadCallback(int requestID, int result, __int64 numBytesRead, void *user)
{
  signed __int32 v7; 
  const dvar_t *v8; 
  int integer; 
  const char *Name; 
  int v11; 
  int v12; 
  int *v13; 
  int v14; 
  int v15; 
  int *v16; 
  int v17; 
  char *fmt; 
  __int64 v19; 
  ScopedCriticalSection v20; 
  int data; 

  if ( *((_DWORD *)user + 4) != requestID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 3118, ASSERT_TYPE_ASSERT, "( blockInfo->schedulerId == requestID )", "AssetLoaded schedulerId %d doesn't match requestID %d", *((_DWORD *)user + 4), requestID) )
    __debugbreak();
  if ( ((unsigned __int8)&s_streamReadGlob.readCallbackCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_streamReadGlob.readCallbackCount) )
    __debugbreak();
  v7 = _InterlockedExchangeAdd(&s_streamReadGlob.readCallbackCount, 1u);
  v8 = DCONST_DVARINT_stream_xpakSimulateReadFailures;
  if ( !DCONST_DVARINT_stream_xpakSimulateReadFailures && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_xpakSimulateReadFailures") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  integer = v8->current.integer;
  if ( integer > 0 && !((v7 + 1) % integer) )
    result = ((_BYTE)v7 + 1) & 1 | 6;
  if ( result != 8 )
  {
    *((_BYTE *)user + 22) = 1;
    if ( result != 4 )
    {
      *((_BYTE *)user + 23) = 1;
      Name = ItemPickInfo::GetName((ItemPickInfo *)((char *)user + 56));
      LODWORD(fmt) = result;
      Com_PrintWarning(35, "Could not read streamed item part %d for '%s'.  Error %d\n", *((_DWORD *)user + 16) >> 2, Name, fmt);
    }
  }
  if ( *((_DWORD *)user + 3) != 2 )
  {
    LODWORD(v19) = requestID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 3140, ASSERT_TYPE_ASSERT, "( blockInfo->status == StreamReadBlockStatus::READINPROGRESS )", "AssetLoaded called more than once for stream ID %d\n", v19) )
      __debugbreak();
  }
  Stream_ReadVerbosePrint((const StreamBufferBlockInfo *)user, (const ItemReadInfo *)((char *)user + 40), "completed");
  if ( Sys_InCriticalSection(CRITSECT_IO_SCHEDULER) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 3147, ASSERT_TYPE_ASSERT, "(!Sys_InCriticalSection( CRITSECT_IO_SCHEDULER ))", (const char *)&queryFormat, "!Sys_InCriticalSection( CRITSECT_IO_SCHEDULER )") )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v20, CRITSECT_STREAM_CANCEL, SCOPED_CRITSECT_NORMAL);
  if ( result != 8 )
  {
    if ( (unsigned int)(result - 4) > 4 )
      goto LABEL_38;
    if ( !*((_BYTE *)user + 22) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 3157, ASSERT_TYPE_ASSERT, "(blockInfo->cancelled)", (const char *)&queryFormat, "blockInfo->cancelled") )
      __debugbreak();
    goto LABEL_34;
  }
  if ( *((_BYTE *)user + 22) )
  {
LABEL_34:
    v11 = Sys_Milliseconds();
    v15 = *((_DWORD *)user + 2);
    v17 = 0;
    if ( v15 )
      v17 = v11 - v15;
    v16 = &s_streamReadGlob.cumulativeMsReadStatus[*((int *)user + 3)];
    *v16 += v17;
    *((_DWORD *)user + 3) = 5;
    goto LABEL_37;
  }
  if ( *((_DWORD *)user + 3) != 2 )
  {
    LODWORD(v19) = *((_DWORD *)user + 3);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 3152, ASSERT_TYPE_ASSERT, "( ( blockInfo->status == StreamReadBlockStatus::READINPROGRESS ) )", "( blockInfo->status ) = %i", v19) )
      __debugbreak();
  }
  v11 = Sys_Milliseconds();
  v12 = *((_DWORD *)user + 2);
  v14 = 0;
  if ( v12 )
    v14 = v11 - v12;
  v13 = &s_streamReadGlob.cumulativeMsReadStatus[*((int *)user + 3)];
  *v13 += v14;
  *((_DWORD *)user + 3) = 3;
LABEL_37:
  *((_DWORD *)user + 2) = v11;
LABEL_38:
  ScopedCriticalSection::~ScopedCriticalSection(&v20);
  if ( !Sys_ExistsWorkerCmdsOfType(WRKCMD_STREAM_UPDATE_FILE_BLOCKS) )
  {
    data = 0;
    Sys_AddWorkerCmd(WRKCMD_STREAM_UPDATE_FILE_BLOCKS, &data);
  }
}

/*
==============
Stream_FinishInitialLoadOnBlockReadFailure
==============
*/
void Stream_FinishInitialLoadOnBlockReadFailure(const StreamBufferBlockInfo *blockInfo, const ItemReadInfo *itemReadInfo)
{
  unsigned int itemPartIndex; 
  const char *Name; 
  unsigned int v4; 
  const char *v5; 

  if ( streamFrontendGlob->levelInit.state == (LOADING_SAVEGAME|LOADING_LEVEL) )
  {
    if ( blockInfo->readError )
    {
      itemPartIndex = itemReadInfo->pickedItem.itemPartIndex;
      Name = ItemPickInfo::GetName(&itemReadInfo->pickedItem);
      Com_PrintWarning(35, "initial load cancelled due to read error at %s part %u\n", Name, itemPartIndex);
    }
    else if ( itemReadInfo->allocResult == TASK_LOGIC_FAIL )
    {
      v4 = itemReadInfo->pickedItem.itemPartIndex;
      v5 = ItemPickInfo::GetName(&itemReadInfo->pickedItem);
      Com_PrintWarning(35, "initial load cancelled due to streamer being OOM at %s part %u\n", v5, v4);
    }
    Stream_LevelInit_RequestInitialLoadFinishDueToError();
  }
}

/*
==============
Stream_FinishItemPartRead
==============
*/
void Stream_FinishItemPartRead(const StreamSortListFrame *sortList, StreamBufferBlockInfo *blockInfo, ItemReadInfo *readInfo)
{
  StreamItemType type; 
  __int64 itemPartIndex; 
  unsigned int v8; 
  StreamableBits *StremableBitsForType; 
  unsigned int *mLoading; 
  unsigned int v11; 
  const dvar_t *v12; 
  const char *Name; 
  bool v14; 
  __int64 v15; 
  __int64 v16; 

  if ( *(_DWORD *)blockInfo->status != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1929, ASSERT_TYPE_ASSERT, "(blockInfo->status == StreamReadBlockStatus::FINISHED)", (const char *)&queryFormat, "blockInfo->status == StreamReadBlockStatus::FINISHED") )
    __debugbreak();
  if ( blockInfo->cancelled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1930, ASSERT_TYPE_ASSERT, "(!blockInfo->cancelled)", (const char *)&queryFormat, "!blockInfo->cancelled") )
    __debugbreak();
  if ( !readInfo->pickedItem.item && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1931, ASSERT_TYPE_ASSERT, "(readInfo->pickedItem.item != nullptr)", (const char *)&queryFormat, "readInfo->pickedItem.item != nullptr") )
    __debugbreak();
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1932, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  type = readInfo->pickedItem.type;
  itemPartIndex = (int)readInfo->pickedItem.itemPartIndex;
  v8 = readInfo->pickedItem.itemPartIndex & 3;
  if ( type )
    v8 = 0;
  StremableBitsForType = Stream_GetStremableBitsForType(type);
  if ( (unsigned int)itemPartIndex >= StremableBitsForType->mBitCount )
  {
    LODWORD(v15) = itemPartIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 288, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v15, StremableBitsForType->mBitCount) )
      __debugbreak();
  }
  mLoading = StremableBitsForType->mLoading;
  if ( !mLoading && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v11 = mLoading[itemPartIndex >> 5];
  if ( !_bittest((const int *)&v11, itemPartIndex & 0x1F) && blockInfo->multiBlockReadInfo.numBlocks <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1939, ASSERT_TYPE_ASSERT, "(Stream_GetStremableBitsForType( type ).CheckLoading( itemPartIndex ) || ( blockInfo->multiBlockReadInfo.numBlocks > 1 ))", (const char *)&queryFormat, "Stream_GetStremableBitsForType( type ).CheckLoading( itemPartIndex ) || ( blockInfo->multiBlockReadInfo.numBlocks > 1 )") )
    __debugbreak();
  if ( readInfo->allocResult == TASK_CREATE_FAIL )
  {
    v12 = DCONST_DVARBOOL_stream_concurrentImagePartLoading;
    if ( !DCONST_DVARBOOL_stream_concurrentImagePartLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_concurrentImagePartLoading") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( !v12->current.enabled && v8 && !blockInfo->cancelled && Stream_IsEnabled() )
    {
      if ( type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1957, ASSERT_TYPE_ASSERT, "(type == STREAM_ITEM_IMAGE)", (const char *)&queryFormat, "type == STREAM_ITEM_IMAGE") )
        __debugbreak();
      if ( !StreamableBits::CheckInUse(&streamFrontendGlob->imageBits, itemPartIndex - 1) )
      {
        Name = ItemPickInfo::GetName(&readInfo->pickedItem);
        LODWORD(v16) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1958, ASSERT_TYPE_ASSERT, "( streamFrontendGlob->imageBits.CheckInUse( itemPartIndex - 1 ) )", "Stream_FinishItemPartRead OOO %s - %d", Name, v16) )
          __debugbreak();
      }
    }
    ItemReadInfo::UnlockDst(readInfo);
    if ( type )
    {
      if ( type == STREAM_ITEM_MESH )
      {
        v14 = StreamSortList<45056>::InList(&sortList->meshSortList, itemPartIndex);
      }
      else
      {
        if ( type != STREAM_ITEM_GENERIC )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1979, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
            __debugbreak();
LABEL_45:
          if ( type )
          {
            if ( type == STREAM_ITEM_MESH )
            {
              Stream_Alloc_LoadedMesh(readInfo->pickedItem.mesh);
            }
            else if ( type == STREAM_ITEM_GENERIC )
            {
              Stream_Alloc_LoadedGeneric(readInfo->pickedItem.streamKey);
            }
            else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2032, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
            {
              __debugbreak();
            }
          }
          else
          {
            Stream_Alloc_LoadedImage(readInfo->pickedItem.image, v8);
          }
          goto LABEL_58;
        }
        v14 = StreamSortList<37888>::InList(&sortList->genericSortList, itemPartIndex);
      }
    }
    else
    {
      v14 = StreamSortList<327680>::InList(&sortList->imageSortList, itemPartIndex);
    }
    if ( !v14 )
    {
      Stream_ReadVerbosePrint(blockInfo, readInfo, "STALE");
      Stream_ClearItemLoading(readInfo);
      Stream_Alloc_Deallocate(type, itemPartIndex);
      return;
    }
    goto LABEL_45;
  }
  Stream_FinishInitialLoadOnBlockReadFailure(blockInfo, readInfo);
  Stream_ReadVerbosePrint(blockInfo, readInfo, "ALLOC FAILED");
LABEL_58:
  Stream_ClearItemLoading(readInfo);
}

/*
==============
Stream_FreeAndResetFileBlock
==============
*/
void Stream_FreeAndResetFileBlock(StreamBufferBlockInfo *blockInfo)
{
  unsigned int i; 
  int v3; 
  int modifyTimeMs; 
  __int64 v5; 
  int *v6; 
  int v7; 
  unsigned __int8 *readBuffer; 
  ItemReadInfo *v9; 
  __int64 v10; 
  __int64 Src[2]; 
  int v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  char v16[4]; 
  ItemReadInfo v17; 
  __int64 v18; 
  char v19; 

  for ( i = 0; i < blockInfo->readInfo.numItems; ++i )
    Stream_Alloc_Deallocate(blockInfo->readInfo.itemReadInfo[i].pickedItem.type, blockInfo->readInfo.itemReadInfo[i].pickedItem.itemPartIndex);
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1279, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  if ( *(_DWORD *)blockInfo->status == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1280, ASSERT_TYPE_ASSERT, "(blockInfo->status != StreamReadBlockStatus::READINPROGRESS)", (const char *)&queryFormat, "blockInfo->status != StreamReadBlockStatus::READINPROGRESS") )
    __debugbreak();
  if ( *(_DWORD *)blockInfo->status == 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1281, ASSERT_TYPE_ASSERT, "(blockInfo->status != StreamReadBlockStatus::DECOMPRESSING)", (const char *)&queryFormat, "blockInfo->status != StreamReadBlockStatus::DECOMPRESSING") )
    __debugbreak();
  v3 = Sys_Milliseconds();
  modifyTimeMs = blockInfo->modifyTimeMs;
  v5 = *(int *)blockInfo->status;
  Src[0] = 0i64;
  Src[1] = 0i64;
  v12 = -1;
  v6 = &s_streamReadGlob.cumulativeMsReadStatus[v5];
  v13 = 0;
  v14 = 0i64;
  v15 = 0;
  v7 = 0;
  if ( modifyTimeMs )
    v7 = v3 - modifyTimeMs;
  *v6 += v7;
  readBuffer = blockInfo->readBuffer;
  blockInfo->modifyTimeMs = v3;
  memset_0(v16, 0, 0xC04ui64);
  v9 = &v17;
  v10 = 64i64;
  do
  {
    ItemReadInfo::ItemReadInfo(v9++);
    --v10;
  }
  while ( v10 );
  v18 = 0i64;
  v19 = 0;
  memcpy_0(blockInfo, Src, sizeof(StreamBufferBlockInfo));
  blockInfo->modifyTimeMs = Sys_Milliseconds();
  blockInfo->readBuffer = readBuffer;
}

/*
==============
Stream_GetLastBlockBeingRead
==============
*/
__int64 Stream_GetLastBlockBeingRead(const StreamBufferBlockInfo *block)
{
  StreamItemType type; 
  unsigned int itemPartIndex; 
  unsigned int numBlocks; 
  unsigned int *p_itemPartIndex; 
  __int64 v6; 
  signed int v7; 
  __int64 v9; 
  __int64 v10; 
  int v11; 

  if ( block->readInfo.numItems != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2042, ASSERT_TYPE_ASSERT, "(block.readInfo.numItems == 1)", (const char *)&queryFormat, "block.readInfo.numItems == 1") )
    __debugbreak();
  v11 = -1;
  if ( block->multiBlockReadInfo.numBlocks <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1715, ASSERT_TYPE_ASSERT, "(block.multiBlockReadInfo.numBlocks > 1)", (const char *)&queryFormat, "block.multiBlockReadInfo.numBlocks > 1") )
    __debugbreak();
  if ( block->readInfo.numItems != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1716, ASSERT_TYPE_ASSERT, "(block.readInfo.numItems == 1)", (const char *)&queryFormat, "block.readInfo.numItems == 1") )
    __debugbreak();
  type = block->readInfo.itemReadInfo[0].pickedItem.type;
  itemPartIndex = block->readInfo.itemReadInfo[0].pickedItem.itemPartIndex;
  numBlocks = block->multiBlockReadInfo.numBlocks;
  p_itemPartIndex = &s_streamReadGlob.blocks[0].readInfo.itemReadInfo[0].pickedItem.itemPartIndex;
  v6 = 32i64;
  do
  {
    if ( *((_BYTE *)p_itemPartIndex + 8) == type && *p_itemPartIndex == itemPartIndex )
    {
      if ( *(p_itemPartIndex - 7) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1728, ASSERT_TYPE_ASSERT, "(iterBlock.readInfo.numItems == 1)", (const char *)&queryFormat, "iterBlock.readInfo.numItems == 1") )
        __debugbreak();
      if ( numBlocks != p_itemPartIndex[763] )
      {
        LODWORD(v10) = p_itemPartIndex[763];
        LODWORD(v9) = numBlocks;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1729, ASSERT_TYPE_ASSERT, "( numBlocks ) == ( iterBlock.multiBlockReadInfo.numBlocks )", "%s == %s\n\t%u, %u", "numBlocks", "iterBlock.multiBlockReadInfo.numBlocks", v9, v10) )
          __debugbreak();
      }
      if ( *(p_itemPartIndex - 13) )
      {
        v7 = p_itemPartIndex[762];
        if ( v11 > v7 )
          v7 = v11;
        v11 = v7;
      }
    }
    p_itemPartIndex += 782;
    --v6;
  }
  while ( v6 );
  return (unsigned int)v11;
}

/*
==============
Stream_GetStremableBitsForType
==============
*/
StreamableBits *Stream_GetStremableBitsForType(StreamItemType type)
{
  StreamableBits *p_imageBits; 

  p_imageBits = NULL;
  switch ( type )
  {
    case STREAM_ITEM_IMAGE:
      p_imageBits = &streamFrontendGlob->imageBits;
LABEL_9:
      if ( p_imageBits )
        return p_imageBits;
      goto LABEL_10;
    case STREAM_ITEM_MESH:
      p_imageBits = &streamFrontendGlob->meshBits;
      goto LABEL_9;
    case STREAM_ITEM_GENERIC:
      p_imageBits = &streamFrontendGlob->genericBits;
      goto LABEL_9;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 583, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
    __debugbreak();
LABEL_10:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 585, ASSERT_TYPE_ASSERT, "(bits)", (const char *)&queryFormat, "bits") )
    __debugbreak();
  return p_imageBits;
}

/*
==============
Stream_InitItemReadInfo
==============
*/
void Stream_InitItemReadInfo(const StreamSortListFrame *sortList, StreamItemType type, unsigned int itemPartIndex, ItemReadInfo *itemReadInfo)
{
  __int64 v4; 

  v4 = (int)itemPartIndex;
  itemReadInfo->pickedItem.itemPartIndex = itemPartIndex;
  itemReadInfo->allocResult = SUCCESS;
  itemReadInfo->pickedItem.type = type;
  if ( type )
  {
    if ( type == STREAM_ITEM_MESH )
    {
      itemReadInfo->pickedItem.item = DB_GetXModelSurfsAtIndex(itemPartIndex);
      itemReadInfo->pickedItem.distance.mValue = 0x10000;
    }
    else if ( type == STREAM_ITEM_GENERIC )
    {
      itemReadInfo->pickedItem.item = DB_GetStreamKeyAtIndex(itemPartIndex);
      itemReadInfo->pickedItem.distance.mValue = 0x10000;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 631, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid stream item type") )
    {
      __debugbreak();
    }
  }
  else
  {
    itemReadInfo->pickedItem.item = DB_GetGfxImageAtIndex(itemPartIndex >> 2);
    if ( (unsigned int)v4 >= 0x50000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v4, 327680) )
      __debugbreak();
    itemReadInfo->pickedItem.distance.mValue = sortList->imagePartDistance.mDistances[v4].mValue;
  }
}

/*
==============
Stream_IsStreamingPart
==============
*/
bool Stream_IsStreamingPart(StreamItemType type, unsigned int itemPartIndex)
{
  unsigned int v3; 
  int v4; 
  GfxImage *GfxImageAtIndex; 
  GfxImageFlags flags; 
  unsigned __int8 streamedPartCount; 
  const char *v8; 
  int fmt; 

  if ( type )
  {
    if ( type == STREAM_ITEM_MESH )
    {
      return DB_GetXModelSurfsAtIndex(itemPartIndex)->shared->flags & 1;
    }
    else if ( type == STREAM_ITEM_GENERIC )
    {
      return (DB_GetStreamKeyAtIndex(itemPartIndex)->flags & 2) == 0;
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 561, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0") )
        __debugbreak();
      return 0;
    }
  }
  else
  {
    v3 = itemPartIndex & 3;
    v4 = 0;
    GfxImageAtIndex = DB_GetGfxImageAtIndex(itemPartIndex >> 2);
    flags = GfxImageAtIndex->flags;
    streamedPartCount = GfxImageAtIndex->streamedPartCount;
    if ( ((flags & 0x40) == 0) != (streamedPartCount == 0) )
    {
      fmt = streamedPartCount;
      v8 = "not streamed";
      if ( (flags & 0x40) != 0 )
        v8 = "streamed";
      Com_PrintWarning(35, "Invalid streaming part count on %s image %s and %hhu parts", v8, GfxImageAtIndex->name, fmt);
      flags = GfxImageAtIndex->flags;
      streamedPartCount = GfxImageAtIndex->streamedPartCount;
    }
    LOBYTE(v4) = streamedPartCount == 0;
    if ( ((flags & 0x40) == 0) != v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 547, ASSERT_TYPE_ASSERT, "(!R_IsStreamedImage( image ) == ( image->streamedPartCount == 0 ))", (const char *)&queryFormat, "!R_IsStreamedImage( image ) == ( image->streamedPartCount == 0 )") )
      __debugbreak();
    return v3 < GfxImageAtIndex->streamedPartCount;
  }
}

/*
==============
Stream_IssueBlockAllocs
==============
*/
__int64 Stream_IssueBlockAllocs(StreamBufferBlockInfo *blockInfo)
{
  unsigned __int8 v1; 
  char v2; 
  __int64 v3; 
  unsigned int mValue; 
  StreamAllocResult v6; 
  __int64 result; 
  float v8; 
  StreamUpdateId updateId; 

  v1 = 0;
  v2 = 0;
  v3 = 0i64;
  if ( !blockInfo->readInfo.numItems )
    return v1;
  do
  {
    if ( blockInfo->readInfo.itemReadInfo[v3].pickedItem.type == STREAM_ITEM_IMAGE && Stream_Primer_IsPrimingImagePart(blockInfo->readInfo.itemReadInfo[v3].pickedItem.image, blockInfo->readInfo.itemReadInfo[v3].pickedItem.itemPartIndex & 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1343, ASSERT_TYPE_ASSERT, "(itemReadInfo->pickedItem.type != STREAM_ITEM_IMAGE || !Stream_Primer_IsPrimingImagePart( itemReadInfo->pickedItem.image, itemReadInfo->pickedItem.itemPartIndex % IMAGE_STREAM_COUNT ))", (const char *)&queryFormat, "itemReadInfo->pickedItem.type != STREAM_ITEM_IMAGE || !Stream_Primer_IsPrimingImagePart( itemReadInfo->pickedItem.image, itemReadInfo->pickedItem.itemPartIndex % IMAGE_STREAM_COUNT )") )
      __debugbreak();
    if ( blockInfo->readInfo.itemReadInfo[v3].pickedItem.type == STREAM_ITEM_MESH && Stream_Primer_IsPrimingMesh(blockInfo->readInfo.itemReadInfo[v3].pickedItem.mesh) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1344, ASSERT_TYPE_ASSERT, "(itemReadInfo->pickedItem.type != STREAM_ITEM_MESH || !Stream_Primer_IsPrimingMesh( itemReadInfo->pickedItem.mesh ))", (const char *)&queryFormat, "itemReadInfo->pickedItem.type != STREAM_ITEM_MESH || !Stream_Primer_IsPrimingMesh( itemReadInfo->pickedItem.mesh )") )
      __debugbreak();
    if ( blockInfo->readInfo.itemReadInfo[v3].pickedItem.type == STREAM_ITEM_GENERIC && Stream_Primer_IsPrimingGeneric(blockInfo->readInfo.itemReadInfo[v3].pickedItem.streamKey) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1345, ASSERT_TYPE_ASSERT, "(itemReadInfo->pickedItem.type != STREAM_ITEM_GENERIC || !Stream_Primer_IsPrimingGeneric( itemReadInfo->pickedItem.streamKey ))", (const char *)&queryFormat, "itemReadInfo->pickedItem.type != STREAM_ITEM_GENERIC || !Stream_Primer_IsPrimingGeneric( itemReadInfo->pickedItem.streamKey )") )
      __debugbreak();
    if ( blockInfo->readInfo.itemReadInfo[v3].allocResult == TASK_CREATE_FAIL )
    {
      v1 = 1;
    }
    else
    {
      mValue = blockInfo->readInfo.itemReadInfo[v3].pickedItem.distance.mValue;
      if ( blockInfo->readInfo.itemReadInfo[v3].pickedItem.type )
      {
        if ( mValue != 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1361, ASSERT_TYPE_ASSERT, "(distance == StreamDistance::Min())", (const char *)&queryFormat, "distance == StreamDistance::Min()") )
          __debugbreak();
      }
      else
      {
        v8 = Stream_ApplyFreeInertiaToImageDistance((StreamDistance)mValue);
        if ( (LODWORD(v8) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
          __debugbreak();
        mValue = LODWORD(v8) >> 7;
      }
      v6 = Stream_Alloc_Allocate(blockInfo->readInfo.itemReadInfo[v3].pickedItem.type, blockInfo->readInfo.itemReadInfo[v3].pickedItem.itemPartIndex, (StreamDistance)mValue, NULL, &updateId);
      if ( v6 == TASK_CREATE_FAIL )
      {
        blockInfo->readInfo.itemReadInfo[v3].allocResult = TASK_CREATE_FAIL;
        v1 = 1;
        blockInfo->readInfo.itemReadInfo[v3].updateId = updateId;
      }
      else
      {
        blockInfo->readInfo.itemReadInfo[v3].allocResult = v6;
        if ( v6 == TASK_LOGIC_FAIL )
          v2 = 1;
      }
    }
    v3 = (unsigned int)(v3 + 1);
  }
  while ( (unsigned int)v3 < blockInfo->readInfo.numItems );
  if ( v1 )
    return v1;
  result = 0i64;
  if ( v2 )
    streamFrontendGlob->canStreamMoreForWrite = 0;
  return result;
}

/*
==============
Stream_LockBlockWriteAddress
==============
*/
void Stream_LockBlockWriteAddress(StreamBufferBlockInfo *blockInfo)
{
  unsigned int numItems; 
  __int64 v3; 
  char *v4; 
  unsigned __int8 v5; 
  bool v6; 
  unsigned __int8 *v7; 
  unsigned __int8 *v8; 
  streamer_handle_t v9; 
  StreamItemType type; 
  unsigned int *p_itemPartIndex; 
  unsigned int itemPartIndex; 
  unsigned int numBlocks; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 

  numItems = blockInfo->readInfo.numItems;
  if ( blockInfo->multiBlockReadInfo.numBlocks == 1 )
  {
    v3 = 0i64;
    if ( numItems )
    {
      do
      {
        v4 = (char *)blockInfo + 48 * v3;
        if ( v4[80] == 2 )
        {
          if ( !*((_QWORD *)v4 + 7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 210, ASSERT_TYPE_ASSERT, "(pickedItem.item)", (const char *)&queryFormat, "pickedItem.item") )
            __debugbreak();
          v5 = v4[72];
          if ( v5 >= 3u )
          {
            LODWORD(v16) = 3;
            LODWORD(v15) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 211, ASSERT_TYPE_ASSERT, "(unsigned)( pickedItem.type ) < (unsigned)( STREAM_ITEM_COUNT )", "pickedItem.type doesn't index STREAM_ITEM_COUNT\n\t%i not in [0, %i)", v15, v16) )
              __debugbreak();
          }
          if ( v4[81] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 212, ASSERT_TYPE_ASSERT, "(!isWriteAddressLocked)", (const char *)&queryFormat, "!isWriteAddressLocked") )
            __debugbreak();
          v6 = v4[72] == 0;
          v4[81] = 1;
          if ( v6 )
          {
            v7 = Stream_AddressSpace_LockFrontendAddr(*(streamer_handle_t *)(*((_QWORD *)v4 + 7) + 224i64), *((_DWORD *)v4 + 16) & 3);
            if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 219, ASSERT_TYPE_ASSERT, "(baseAddress)", (const char *)&queryFormat, "baseAddress") )
              __debugbreak();
            v8 = &v7[Image_PartOffset(*((const GfxImage **)v4 + 7), *((_DWORD *)v4 + 16) & 3)];
          }
          else
          {
            v9.data = ItemPickInfo::GetHandle((ItemPickInfo *)(v4 + 56)).data;
            v8 = Stream_AddressSpace_LockFrontendAddr(*(streamer_handle_t *)v9.data, 0);
            if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 225, ASSERT_TYPE_ASSERT, "(address)", (const char *)&queryFormat, "address") )
              __debugbreak();
          }
          if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1750, ASSERT_TYPE_ASSERT, "(dst)", (const char *)&queryFormat, "dst") )
            __debugbreak();
        }
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < blockInfo->readInfo.numItems );
    }
  }
  else
  {
    if ( numItems != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1757, ASSERT_TYPE_ASSERT, "(blockInfo->readInfo.numItems == 1)", (const char *)&queryFormat, "blockInfo->readInfo.numItems == 1") )
      __debugbreak();
    if ( blockInfo->readInfo.itemReadInfo[0].allocResult == TASK_CREATE_FAIL )
    {
      if ( blockInfo->multiBlockReadInfo.isWriteAddressLocked )
      {
        blockInfo->readInfo.itemReadInfo[0].isWriteAddressLocked = 1;
      }
      else
      {
        if ( !ItemReadInfo::LockDst(blockInfo->readInfo.itemReadInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1768, ASSERT_TYPE_ASSERT, "(dst)", (const char *)&queryFormat, "dst") )
          __debugbreak();
        if ( blockInfo->multiBlockReadInfo.numBlocks <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1715, ASSERT_TYPE_ASSERT, "(block.multiBlockReadInfo.numBlocks > 1)", (const char *)&queryFormat, "block.multiBlockReadInfo.numBlocks > 1") )
          __debugbreak();
        if ( blockInfo->readInfo.numItems != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1716, ASSERT_TYPE_ASSERT, "(block.readInfo.numItems == 1)", (const char *)&queryFormat, "block.readInfo.numItems == 1") )
          __debugbreak();
        type = blockInfo->readInfo.itemReadInfo[0].pickedItem.type;
        p_itemPartIndex = &s_streamReadGlob.blocks[0].readInfo.itemReadInfo[0].pickedItem.itemPartIndex;
        itemPartIndex = blockInfo->readInfo.itemReadInfo[0].pickedItem.itemPartIndex;
        numBlocks = blockInfo->multiBlockReadInfo.numBlocks;
        v14 = 32i64;
        do
        {
          if ( *((_BYTE *)p_itemPartIndex + 8) == type && *p_itemPartIndex == itemPartIndex )
          {
            if ( *(p_itemPartIndex - 7) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1728, ASSERT_TYPE_ASSERT, "(iterBlock.readInfo.numItems == 1)", (const char *)&queryFormat, "iterBlock.readInfo.numItems == 1") )
              __debugbreak();
            if ( numBlocks != p_itemPartIndex[763] )
            {
              LODWORD(v18) = p_itemPartIndex[763];
              LODWORD(v17) = numBlocks;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1729, ASSERT_TYPE_ASSERT, "( numBlocks ) == ( iterBlock.multiBlockReadInfo.numBlocks )", "%s == %s\n\t%u, %u", "numBlocks", "iterBlock.multiBlockReadInfo.numBlocks", v17, v18) )
                __debugbreak();
            }
            if ( *(p_itemPartIndex - 7) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1773, ASSERT_TYPE_ASSERT, "(block.readInfo.numItems == 1)", (const char *)&queryFormat, "block.readInfo.numItems == 1") )
              __debugbreak();
            *((_BYTE *)p_itemPartIndex + 3056) = 1;
            *((_BYTE *)p_itemPartIndex + 17) = 1;
          }
          p_itemPartIndex += 782;
          --v14;
        }
        while ( v14 );
      }
    }
  }
}

/*
==============
Stream_LogRead
==============
*/
void Stream_LogRead(const StreamBufferBlockInfo *blockInfo)
{
  const dvar_t *v1; 
  unsigned __int64 v3; 
  unsigned int v4; 
  fileHandle_t *v5; 
  const char *v6; 
  fileHandle_t *v7; 
  fileHandle_t v8; 
  const XPakEntryInfo *XPakEntryInfo; 
  unsigned __int64 v10; 
  unsigned int blockIndex; 
  unsigned __int8 v12; 
  unsigned __int64 v13; 
  unsigned __int8 v14; 
  unsigned __int64 v15; 
  __int64 v16; 
  unsigned __int64 v17; 
  char *v18; 
  unsigned __int8 v19; 
  double *v20; 
  unsigned __int64 v21; 
  __int64 v22; 
  __int64 v23; 

  v1 = DVARBOOL_stream_readLog;
  if ( !DVARBOOL_stream_readLog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_readLog") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    v3 = s_logBufferPos;
    if ( s_logBufferPos > 0x8000 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1465, ASSERT_TYPE_ASSERT, "( s_logBufferPos ) <= ( sizeof( s_logBuffer ) )", "%s <= %s\n\t%zu, %zu", "s_logBufferPos", "sizeof( s_logBuffer )", s_logBufferPos, 0x8000ui64) )
        __debugbreak();
      v3 = s_logBufferPos;
    }
    if ( 0x8000 - v3 < 13 * blockInfo->readInfo.numItems + 15 )
    {
      v4 = _time64(NULL);
      v5 = (fileHandle_t *)j_va("StreamReadLog-%d.bin", v4);
      v7 = FS_FOpenFileWrite(v5, v6);
      v8.handle.handle = (__int64)v7;
      if ( v7 == (fileHandle_t *)-1i64 )
      {
        Com_PrintWarning(35, "WARNING: Couldn't flush streamer read log. Couldn't open %s for write!\n", (const char *)v5);
      }
      else
      {
        FS_Write(s_logBuffer, s_logBufferPos, (fileHandle_t)v7);
        FS_FCloseFile(v8);
      }
      s_logBufferPos = 0i64;
    }
    XPakEntryInfo = ItemPickInfo::GetXPakEntryInfo(&blockInfo->readInfo.itemReadInfo[0].pickedItem);
    v10 = s_logBufferPos + 8;
    *(double *)&s_logBuffer[s_logBufferPos] = *(double *)&blockInfo->readInfo.readOffset;
    *(_DWORD *)&s_logBuffer[v10] = blockInfo->readInfo.readBytes;
    s_logBuffer[v10 + 4] = *((_BYTE *)XPakEntryInfo + 24);
    blockIndex = blockInfo->multiBlockReadInfo.blockIndex;
    s_logBufferPos = v10 + 5;
    v12 = truncate_cast<unsigned char,unsigned int>(blockIndex);
    v13 = s_logBufferPos;
    s_logBuffer[s_logBufferPos] = v12;
    s_logBufferPos = v13 + 1;
    v14 = truncate_cast<unsigned char,unsigned int>(blockInfo->readInfo.numItems);
    v15 = s_logBufferPos;
    v16 = 0i64;
    s_logBuffer[s_logBufferPos] = v14;
    v17 = v15 + 1;
    for ( s_logBufferPos = v17; (unsigned int)v16 < blockInfo->readInfo.numItems; s_logBufferPos = v17 )
    {
      v18 = (char *)blockInfo + 48 * v16;
      if ( !*((_QWORD *)v18 + 7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 107, ASSERT_TYPE_ASSERT, "(item)", (const char *)&queryFormat, "item") )
        __debugbreak();
      v19 = v18[72];
      if ( v19 >= 3u )
      {
        LODWORD(v23) = 3;
        LODWORD(v22) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 108, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( STREAM_ITEM_COUNT )", "type doesn't index STREAM_ITEM_COUNT\n\t%i not in [0, %i)", v22, v23) )
          __debugbreak();
      }
      if ( v18[72] )
      {
        if ( v18[72] == 1 )
        {
          v20 = (double *)(*((_QWORD *)v18 + 7) + 16i64);
        }
        else if ( v18[72] == 2 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)v18 + 7) + 61i64) & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 117, ASSERT_TYPE_ASSERT, "(!streamKey->Resident())", (const char *)&queryFormat, "!streamKey->Resident()") )
            __debugbreak();
          v20 = (double *)(*((_QWORD *)v18 + 7) + 8i64);
        }
        else
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 120, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
            __debugbreak();
          v20 = NULL;
        }
      }
      else
      {
        v20 = (double *)(*((_QWORD *)v18 + 7) + 40i64 * (*((_DWORD *)v18 + 16) & 3) + 56);
      }
      v21 = s_logBufferPos;
      v16 = (unsigned int)(v16 + 1);
      s_logBuffer[s_logBufferPos] = v18[72];
      *(_DWORD *)&s_logBuffer[v21 + 1] = *((_DWORD *)v18 + 16);
      *(double *)&s_logBuffer[v21 + 5] = *v20;
      v17 = v21 + 13;
    }
    if ( v17 > 0x8000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1500, ASSERT_TYPE_ASSERT, "( s_logBufferPos ) <= ( sizeof( s_logBuffer ) )", "%s <= %s\n\t%zu, %zu", "s_logBufferPos", "sizeof( s_logBuffer )", s_logBufferPos, 0x8000ui64) )
      __debugbreak();
  }
}

/*
==============
Stream_ProcessCancel
==============
*/
void Stream_ProcessCancel(const StreamBufferBlockInfo *blockInfo)
{
  if ( !blockInfo->cancelled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2063, ASSERT_TYPE_ASSERT, "(blockInfo->cancelled)", (const char *)&queryFormat, "blockInfo->cancelled") )
    __debugbreak();
  Stream_FinishInitialLoadOnBlockReadFailure(blockInfo, blockInfo->readInfo.itemReadInfo);
  if ( blockInfo->issuedRead )
    Stream_ReadVerbosePrint(blockInfo, blockInfo->readInfo.itemReadInfo, "CANCELLED");
}

/*
==============
Stream_ProcessFinishedBlock
==============
*/
void Stream_ProcessFinishedBlock(const StreamSortListFrame *sortList, StreamBufferBlockInfo *blockInfo)
{
  unsigned int numItems; 
  __int64 i; 
  unsigned int numBlocks; 
  unsigned int blockIndex; 
  StreamItemType type; 
  unsigned int itemPartIndex; 
  unsigned int v10; 
  unsigned int *p_itemPartIndex; 
  int v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  char v17; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_ProcessFinishedBlock");
  if ( *(_DWORD *)blockInfo->status != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2185, ASSERT_TYPE_ASSERT, "(blockInfo->status == StreamReadBlockStatus::FINISHED)", (const char *)&queryFormat, "blockInfo->status == StreamReadBlockStatus::FINISHED") )
    __debugbreak();
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2186, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  if ( blockInfo->cancelled )
  {
    Stream_ProcessFinishedButCancelledBlock(blockInfo);
    goto LABEL_16;
  }
  s_streamReadGlob.readSucceededStats.sizeRead += blockInfo->readInfo.readBytes;
  ++s_streamReadGlob.readSucceededStats.numReads;
  numItems = blockInfo->readInfo.numItems;
  if ( blockInfo->multiBlockReadInfo.numBlocks == 1 )
  {
    for ( i = 0i64; (unsigned int)i < numItems; numItems = blockInfo->readInfo.numItems )
    {
      Stream_FinishItemPartRead(sortList, blockInfo, &blockInfo->readInfo.itemReadInfo[i]);
      i = (unsigned int)(i + 1);
    }
    s_streamReadGlob.readSucceededStats.numItemsRead += numItems;
    goto LABEL_13;
  }
  if ( numItems != 1 )
  {
    LODWORD(v14) = blockInfo->readInfo.numItems;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2213, ASSERT_TYPE_ASSERT, "( ( blockInfo->readInfo.numItems == 1 ) )", "( blockInfo->readInfo.numItems ) = %i", v14) )
      __debugbreak();
  }
  numBlocks = blockInfo->multiBlockReadInfo.numBlocks;
  blockIndex = blockInfo->multiBlockReadInfo.blockIndex;
  if ( blockIndex == numBlocks - 1 )
  {
    v17 = 1;
    if ( numBlocks <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1715, ASSERT_TYPE_ASSERT, "(block.multiBlockReadInfo.numBlocks > 1)", (const char *)&queryFormat, "block.multiBlockReadInfo.numBlocks > 1") )
      __debugbreak();
    if ( blockInfo->readInfo.numItems != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1716, ASSERT_TYPE_ASSERT, "(block.readInfo.numItems == 1)", (const char *)&queryFormat, "block.readInfo.numItems == 1") )
      __debugbreak();
    type = blockInfo->readInfo.itemReadInfo[0].pickedItem.type;
    itemPartIndex = blockInfo->readInfo.itemReadInfo[0].pickedItem.itemPartIndex;
    v10 = blockInfo->multiBlockReadInfo.numBlocks;
    p_itemPartIndex = &s_streamReadGlob.blocks[0].readInfo.itemReadInfo[0].pickedItem.itemPartIndex;
    while ( 1 )
    {
      if ( *((_BYTE *)p_itemPartIndex + 8) == type && *p_itemPartIndex == itemPartIndex )
      {
        if ( *(p_itemPartIndex - 7) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1728, ASSERT_TYPE_ASSERT, "(iterBlock.readInfo.numItems == 1)", (const char *)&queryFormat, "iterBlock.readInfo.numItems == 1") )
          __debugbreak();
        if ( v10 != p_itemPartIndex[763] )
        {
          LODWORD(v16) = p_itemPartIndex[763];
          LODWORD(v15) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1729, ASSERT_TYPE_ASSERT, "( numBlocks ) == ( iterBlock.multiBlockReadInfo.numBlocks )", "%s == %s\n\t%u, %u", "numBlocks", "iterBlock.multiBlockReadInfo.numBlocks", v15, v16) )
            __debugbreak();
        }
        if ( p_itemPartIndex - 16 != (unsigned int *)blockInfo && *(p_itemPartIndex - 13) )
          break;
      }
      p_itemPartIndex += 782;
      if ( p_itemPartIndex - 16 == (unsigned int *)&s_streamReadGlob.decompressor )
        goto LABEL_41;
    }
    v17 = 0;
LABEL_41:
    if ( v17 )
    {
      Stream_FinishItemPartRead(sortList, blockInfo, blockInfo->readInfo.itemReadInfo);
      ++s_streamReadGlob.readSucceededStats.numItemsRead;
LABEL_13:
      Stream_ResetFileBlock(blockInfo);
      if ( *(_DWORD *)blockInfo->status && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2267, ASSERT_TYPE_ASSERT, "(blockInfo->status == StreamReadBlockStatus::INVALID)", (const char *)&queryFormat, "blockInfo->status == StreamReadBlockStatus::INVALID") )
        __debugbreak();
    }
  }
  else
  {
    if ( blockIndex + 1 >= numBlocks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2244, ASSERT_TYPE_ASSERT, "(blockInfo->multiBlockReadInfo.blockIndex + 1 < blockInfo->multiBlockReadInfo.numBlocks)", (const char *)&queryFormat, "blockInfo->multiBlockReadInfo.blockIndex + 1 < blockInfo->multiBlockReadInfo.numBlocks") )
      __debugbreak();
    if ( blockInfo->readInfo.numItems != 1 )
    {
      LODWORD(v14) = blockInfo->readInfo.numItems;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2245, ASSERT_TYPE_ASSERT, "( ( blockInfo->readInfo.numItems == 1 ) )", "( blockInfo->readInfo.numItems ) = %i", v14) )
        __debugbreak();
    }
    v12 = Stream_GetLastBlockBeingRead(blockInfo);
    v13 = v12 + 1;
    if ( v12 + 1 <= 0 )
    {
      LODWORD(v14) = v12 + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2248, ASSERT_TYPE_ASSERT, "( ( blockToRead > 0 ) )", "( blockToRead ) = %i", v14) )
        __debugbreak();
    }
    if ( v13 >= blockInfo->multiBlockReadInfo.numBlocks )
      goto LABEL_13;
    if ( !ItemPickInfo::GetData(&blockInfo->readInfo.itemReadInfo[0].pickedItem) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2254, ASSERT_TYPE_ASSERT, "(itemReadInfo.pickedItem.GetData())", (const char *)&queryFormat, "itemReadInfo.pickedItem.GetData()") )
      __debugbreak();
    if ( !blockInfo->readInfo.itemReadInfo[0].isWriteAddressLocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2255, ASSERT_TYPE_ASSERT, "(itemReadInfo.isWriteAddressLocked)", (const char *)&queryFormat, "itemReadInfo.isWriteAddressLocked") )
      __debugbreak();
    if ( !blockInfo->multiBlockReadInfo.isWriteAddressLocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2256, ASSERT_TYPE_ASSERT, "(blockInfo->multiBlockReadInfo.isWriteAddressLocked)", (const char *)&queryFormat, "blockInfo->multiBlockReadInfo.isWriteAddressLocked") )
      __debugbreak();
    Stream_UpdateFileBlock_SetupNextMultiBlockRead(blockInfo, blockInfo->readInfo.itemReadInfo, &blockInfo->multiBlockReadInfo, v13);
  }
LABEL_16:
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_ProcessFinishedButCancelledBlock
==============
*/
void Stream_ProcessFinishedButCancelledBlock(StreamBufferBlockInfo *blockInfo)
{
  __int64 i; 
  StreamItemType type; 
  unsigned int *p_itemPartIndex; 
  unsigned int itemPartIndex; 
  unsigned int numBlocks; 
  unsigned int *v7; 
  StreamItemType v8; 
  unsigned int v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  if ( !blockInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2075, ASSERT_TYPE_ASSERT, "(blockInfo)", (const char *)&queryFormat, "blockInfo") )
    __debugbreak();
  if ( !blockInfo->cancelled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2076, ASSERT_TYPE_ASSERT, "(blockInfo->cancelled)", (const char *)&queryFormat, "blockInfo->cancelled") )
    __debugbreak();
  if ( *(_DWORD *)blockInfo->status != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2077, ASSERT_TYPE_ASSERT, "(blockInfo->status == StreamReadBlockStatus::FINISHED)", (const char *)&queryFormat, "blockInfo->status == StreamReadBlockStatus::FINISHED") )
    __debugbreak();
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2079, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  if ( blockInfo->multiBlockReadInfo.numBlocks == 1 )
  {
    if ( blockInfo->decompressStarted )
    {
      for ( i = 0i64; (unsigned int)i < blockInfo->readInfo.numItems; i = (unsigned int)(i + 1) )
      {
        if ( blockInfo->readInfo.itemReadInfo[i].allocResult == TASK_CREATE_FAIL )
          ItemReadInfo::UnlockDst(&blockInfo->readInfo.itemReadInfo[i]);
      }
    }
    Stream_ProcessCancel(blockInfo);
    Stream_ClearFileBlockItemsLoading(blockInfo);
    Stream_FreeAndResetFileBlock(blockInfo);
  }
  else
  {
    if ( blockInfo->readInfo.numItems != 1 )
    {
      LODWORD(v11) = blockInfo->readInfo.numItems;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2100, ASSERT_TYPE_ASSERT, "( ( blockInfo->readInfo.numItems == 1 ) )", "( blockInfo->readInfo.numItems ) = %i", v11) )
        __debugbreak();
    }
    if ( blockInfo->multiBlockReadInfo.numBlocks <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1715, ASSERT_TYPE_ASSERT, "(block.multiBlockReadInfo.numBlocks > 1)", (const char *)&queryFormat, "block.multiBlockReadInfo.numBlocks > 1") )
      __debugbreak();
    if ( blockInfo->readInfo.numItems != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1716, ASSERT_TYPE_ASSERT, "(block.readInfo.numItems == 1)", (const char *)&queryFormat, "block.readInfo.numItems == 1") )
      __debugbreak();
    type = blockInfo->readInfo.itemReadInfo[0].pickedItem.type;
    p_itemPartIndex = &s_streamReadGlob.blocks[0].readInfo.itemReadInfo[0].pickedItem.itemPartIndex;
    itemPartIndex = blockInfo->readInfo.itemReadInfo[0].pickedItem.itemPartIndex;
    numBlocks = blockInfo->multiBlockReadInfo.numBlocks;
    v7 = &s_streamReadGlob.blocks[0].readInfo.itemReadInfo[0].pickedItem.itemPartIndex;
    while ( 1 )
    {
      if ( *((_BYTE *)v7 + 8) == type && *v7 == itemPartIndex )
      {
        if ( *(v7 - 7) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1728, ASSERT_TYPE_ASSERT, "(iterBlock.readInfo.numItems == 1)", (const char *)&queryFormat, "iterBlock.readInfo.numItems == 1") )
          __debugbreak();
        if ( numBlocks != v7[763] )
        {
          LODWORD(v13) = v7[763];
          LODWORD(v12) = numBlocks;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1729, ASSERT_TYPE_ASSERT, "( numBlocks ) == ( iterBlock.multiBlockReadInfo.numBlocks )", "%s == %s\n\t%u, %u", "numBlocks", "iterBlock.multiBlockReadInfo.numBlocks", v12, v13) )
            __debugbreak();
        }
        if ( *(v7 - 13) != 5 )
          break;
      }
      v7 += 782;
      if ( v7 - 16 == (unsigned int *)&s_streamReadGlob.decompressor )
      {
        if ( blockInfo->multiBlockReadInfo.isWriteAddressLocked )
        {
          if ( blockInfo->readInfo.itemReadInfo[0].allocResult != TASK_CREATE_FAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2121, ASSERT_TYPE_ASSERT, "(blockInfo->readInfo.itemReadInfo[0].allocResult == StreamAllocResult::SUCCESS)", (const char *)&queryFormat, "blockInfo->readInfo.itemReadInfo[0].allocResult == StreamAllocResult::SUCCESS") )
            __debugbreak();
          ItemReadInfo::UnlockDst(blockInfo->readInfo.itemReadInfo);
        }
        Stream_ClearFileBlockItemsLoading(blockInfo);
        if ( blockInfo->multiBlockReadInfo.numBlocks <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1715, ASSERT_TYPE_ASSERT, "(block.multiBlockReadInfo.numBlocks > 1)", (const char *)&queryFormat, "block.multiBlockReadInfo.numBlocks > 1") )
          __debugbreak();
        if ( blockInfo->readInfo.numItems != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1716, ASSERT_TYPE_ASSERT, "(block.readInfo.numItems == 1)", (const char *)&queryFormat, "block.readInfo.numItems == 1") )
          __debugbreak();
        v8 = blockInfo->readInfo.itemReadInfo[0].pickedItem.type;
        v9 = blockInfo->readInfo.itemReadInfo[0].pickedItem.itemPartIndex;
        v10 = blockInfo->multiBlockReadInfo.numBlocks;
        do
        {
          if ( *((_BYTE *)p_itemPartIndex + 8) == v8 && *p_itemPartIndex == v9 )
          {
            if ( *(p_itemPartIndex - 7) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1728, ASSERT_TYPE_ASSERT, "(iterBlock.readInfo.numItems == 1)", (const char *)&queryFormat, "iterBlock.readInfo.numItems == 1") )
              __debugbreak();
            if ( v10 != p_itemPartIndex[763] )
            {
              LODWORD(v13) = p_itemPartIndex[763];
              LODWORD(v12) = v10;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1729, ASSERT_TYPE_ASSERT, "( numBlocks ) == ( iterBlock.multiBlockReadInfo.numBlocks )", "%s == %s\n\t%u, %u", "numBlocks", "iterBlock.multiBlockReadInfo.numBlocks", v12, v13) )
                __debugbreak();
            }
            if ( *((_BYTE *)p_itemPartIndex - 42) )
              Stream_ProcessCancel((const StreamBufferBlockInfo *)(p_itemPartIndex - 16));
            Stream_FreeAndResetFileBlock((StreamBufferBlockInfo *)(p_itemPartIndex - 16));
            if ( *(p_itemPartIndex - 13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2135, ASSERT_TYPE_ASSERT, "(iterBlock.status == StreamReadBlockStatus::INVALID)", (const char *)&queryFormat, "iterBlock.status == StreamReadBlockStatus::INVALID") )
              __debugbreak();
          }
          p_itemPartIndex += 782;
        }
        while ( p_itemPartIndex - 16 != (unsigned int *)&s_streamReadGlob.decompressor );
        if ( *(_DWORD *)blockInfo->status && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2140, ASSERT_TYPE_ASSERT, "(blockInfo->status == StreamReadBlockStatus::INVALID)", (const char *)&queryFormat, "blockInfo->status == StreamReadBlockStatus::INVALID") )
          __debugbreak();
        return;
      }
    }
  }
}

/*
==============
Stream_QueueDecompressCommand
==============
*/
void Stream_QueueDecompressCommand(int decompressIndex)
{
  StreamBufferBlockInfo *v2; 
  int v3; 
  int modifyTimeMs; 
  int *v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned int StreamedPartCount; 
  StreamDecompressCmd cmd; 

  v2 = &s_streamReadGlob.blocks[decompressIndex];
  cmd.decompressItemCallback.m_InvokeFctPtr = stdext::inplace_function<bool (int,StreamDecompressItem *),32,16>::DefaultFunction;
  cmd.decompressItemCallback.m_ManagerFctPtr = NULL;
  cmd.decompressItemCompleteCallback.m_InvokeFctPtr = stdext::inplace_function<void (int,StreamDecompressItem const *),32,16>::DefaultFunction;
  cmd.decompressItemCompleteCallback.m_ManagerFctPtr = NULL;
  cmd.decompressFinishedCallback.m_InvokeFctPtr = stdext::inplace_function<void (bool),32,16>::DefaultFunction;
  cmd.decompressFinishedCallback.m_ManagerFctPtr = NULL;
  cmd.debugDumpXpakInfo.m_InvokeFctPtr = stdext::inplace_function<char const * (int),32,16>::DefaultFunction;
  cmd.debugDumpXpakInfo.m_ManagerFctPtr = NULL;
  cmd.debugValidateWriteAccess.m_InvokeFctPtr = stdext::inplace_function<void (int),32,16>::DefaultFunction;
  cmd.debugValidateWriteAccess.m_ManagerFctPtr = NULL;
  if ( *(_DWORD *)v2->status != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1794, ASSERT_TYPE_ASSERT, "(blockInfo->status == StreamReadBlockStatus::WAITFORMEMMAPPED)", (const char *)&queryFormat, "blockInfo->status == StreamReadBlockStatus::WAITFORMEMMAPPED") )
    __debugbreak();
  v3 = Sys_Milliseconds();
  modifyTimeMs = v2->modifyTimeMs;
  v6 = 0;
  if ( modifyTimeMs )
    v6 = v3 - modifyTimeMs;
  v5 = &s_streamReadGlob.cumulativeMsReadStatus[*(int *)v2->status];
  *v5 += v6;
  v2->modifyTimeMs = v3;
  *(_DWORD *)v2->status = 4;
  if ( v2->decompressStarted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1796, ASSERT_TYPE_ASSERT, "(!blockInfo->decompressStarted)", (const char *)&queryFormat, "!blockInfo->decompressStarted") )
    __debugbreak();
  v2->decompressStarted = 1;
  Stream_LockBlockWriteAddress(v2);
  cmd.srcBufferStart = v2->readBuffer;
  cmd.cancelled = &v2->cancelled;
  cmd.numItems = v2->readInfo.numItems;
  cmd.decompressItemCallback.m_InvokeFctPtr = stdext::inplace_function<bool (int,StreamDecompressItem *),32,16>::DefaultFunction;
  if ( cmd.decompressItemCallback.m_ManagerFctPtr )
    cmd.decompressItemCallback.m_ManagerFctPtr(&cmd.decompressItemCallback.m_Data, NULL, Destroy);
  *(_QWORD *)cmd.decompressItemCallback.m_Data._Space = v2;
  cmd.decompressItemCallback.m_ManagerFctPtr = stdext::inplace_function<bool (int,StreamDecompressItem *),32,16>::manage<_lambda_e3e9b9d2139572c601a0054bef0cac2e_>;
  cmd.decompressItemCallback.m_InvokeFctPtr = stdext::inplace_function<bool (int,StreamDecompressItem *),32,16>::invoke<_lambda_e3e9b9d2139572c601a0054bef0cac2e_>;
  cmd.decompressItemCompleteCallback.m_InvokeFctPtr = stdext::inplace_function<void (int,StreamDecompressItem const *),32,16>::DefaultFunction;
  if ( cmd.decompressItemCompleteCallback.m_ManagerFctPtr )
    cmd.decompressItemCompleteCallback.m_ManagerFctPtr(&cmd.decompressItemCompleteCallback.m_Data, NULL, Destroy);
  *(_QWORD *)cmd.decompressItemCompleteCallback.m_Data._Space = v2;
  cmd.decompressItemCompleteCallback.m_ManagerFctPtr = stdext::inplace_function<void (int,StreamDecompressItem const *),32,16>::manage<_lambda_328b2e944ae36d6c22a5f0090e8f9622_>;
  cmd.decompressItemCompleteCallback.m_InvokeFctPtr = stdext::inplace_function<void (int,StreamDecompressItem const *),32,16>::invoke<_lambda_328b2e944ae36d6c22a5f0090e8f9622_>;
  cmd.decompressFinishedCallback.m_InvokeFctPtr = stdext::inplace_function<void (bool),32,16>::DefaultFunction;
  if ( cmd.decompressFinishedCallback.m_ManagerFctPtr )
    cmd.decompressFinishedCallback.m_ManagerFctPtr(&cmd.decompressFinishedCallback.m_Data, NULL, Destroy);
  *(_QWORD *)cmd.decompressFinishedCallback.m_Data._Space = v2;
  cmd.decompressFinishedCallback.m_ManagerFctPtr = stdext::inplace_function<void (bool),32,16>::manage<_lambda_14ca51c890ceb8b5227620a3705cf1c4_>;
  cmd.decompressFinishedCallback.m_InvokeFctPtr = stdext::inplace_function<void (bool),32,16>::invoke<_lambda_14ca51c890ceb8b5227620a3705cf1c4_>;
  cmd.multiJob = streamFrontendGlob->levelInit.state == 4;
  cmd.debugDumpXpakInfo.m_InvokeFctPtr = stdext::inplace_function<char const * (int),32,16>::DefaultFunction;
  if ( cmd.debugDumpXpakInfo.m_ManagerFctPtr )
    cmd.debugDumpXpakInfo.m_ManagerFctPtr(&cmd.debugDumpXpakInfo.m_Data, NULL, Destroy);
  *(_QWORD *)cmd.debugDumpXpakInfo.m_Data._Space = v2;
  cmd.debugDumpXpakInfo.m_ManagerFctPtr = stdext::inplace_function<char const * (int),32,16>::manage<_lambda_f2ba40f5fbf0cba90dc6efb7604ea8f4_>;
  cmd.debugDumpXpakInfo.m_InvokeFctPtr = stdext::inplace_function<char const * (int),32,16>::invoke<_lambda_f2ba40f5fbf0cba90dc6efb7604ea8f4_>;
  cmd.debugValidateWriteAccess.m_InvokeFctPtr = stdext::inplace_function<void (int),32,16>::DefaultFunction;
  if ( cmd.debugValidateWriteAccess.m_ManagerFctPtr )
    cmd.debugValidateWriteAccess.m_ManagerFctPtr(&cmd.debugValidateWriteAccess.m_Data, NULL, Destroy);
  *(_QWORD *)cmd.debugValidateWriteAccess.m_Data._Space = v2;
  cmd.debugValidateWriteAccess.m_ManagerFctPtr = stdext::inplace_function<void (int),32,16>::manage<_lambda_7b07db8156081b523269319337ea7a5b_>;
  cmd.debugValidateWriteAccess.m_InvokeFctPtr = stdext::inplace_function<void (int),32,16>::invoke<_lambda_7b07db8156081b523269319337ea7a5b_>;
  v7 = (__int64)&v2->status[48 * cmd.numItems - 4];
  if ( !*(_QWORD *)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 147, ASSERT_TYPE_ASSERT, "(item)", (const char *)&queryFormat, "item") )
    __debugbreak();
  switch ( *(_BYTE *)(v7 + 16) )
  {
    case 0:
      v9 = *(_DWORD *)(v7 + 8) & 3;
      v10 = *(_QWORD *)v7;
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 200, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
        __debugbreak();
      if ( (*(_DWORD *)(v10 + 24) & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
        __debugbreak();
      if ( (unsigned int)v9 >= Image_GetStreamedPartCount((const GfxImage *)v10) )
      {
        StreamedPartCount = Image_GetStreamedPartCount((const GfxImage *)v10);
        LODWORD(v11) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v11, StreamedPartCount) )
          __debugbreak();
      }
      if ( (_DWORD)v9 )
        v8 = (*(_DWORD *)(v10 + 40 * v9 + 88) >> 4) - (*(_DWORD *)(v10 + 40i64 * (unsigned int)(v9 - 1) + 88) >> 4);
      else
        v8 = *(_DWORD *)(v10 + 88) >> 4;
LABEL_41:
      if ( v8 )
        goto LABEL_44;
      goto LABEL_42;
    case 1:
      v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 48i64) + 8i64);
      goto LABEL_41;
    case 2:
      v8 = *(_DWORD *)(*(_QWORD *)v7 + 56i64);
      goto LABEL_41;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 158, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
    __debugbreak();
LABEL_42:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1896, ASSERT_TYPE_ASSERT, "(blockInfo->readInfo.itemReadInfo[copyCmd.numItems - 1].pickedItem.GetSizeInBytes() > 0)", (const char *)&queryFormat, "blockInfo->readInfo.itemReadInfo[copyCmd.numItems - 1].pickedItem.GetSizeInBytes() > 0") )
    __debugbreak();
LABEL_44:
  if ( *((_DWORD *)&v2->readBuffer + 12 * cmd.numItems) >= 0x100000u )
  {
    LODWORD(v12) = 0x100000;
    LODWORD(v11) = *((_DWORD *)&v2->readBuffer + 12 * cmd.numItems);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1897, ASSERT_TYPE_ASSERT, "(unsigned)( blockInfo->readInfo.itemReadInfo[copyCmd.numItems - 1].decompress.srcOffset ) < (unsigned)( STREAM_FILEBUF_BLOCK_SIZE )", "blockInfo->readInfo.itemReadInfo[copyCmd.numItems - 1].decompress.srcOffset doesn't index STREAM_FILEBUF_BLOCK_SIZE\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  StreamDecompressor::QueueJob(s_streamReadGlob.decompressor, decompressIndex, &cmd);
  cmd.debugValidateWriteAccess.m_InvokeFctPtr = stdext::inplace_function<void (int),32,16>::DefaultFunction;
  if ( cmd.debugValidateWriteAccess.m_ManagerFctPtr )
    cmd.debugValidateWriteAccess.m_ManagerFctPtr(&cmd.debugValidateWriteAccess.m_Data, NULL, Destroy);
  cmd.debugValidateWriteAccess.m_ManagerFctPtr = NULL;
  cmd.debugDumpXpakInfo.m_InvokeFctPtr = stdext::inplace_function<char const * (int),32,16>::DefaultFunction;
  if ( cmd.debugDumpXpakInfo.m_ManagerFctPtr )
    cmd.debugDumpXpakInfo.m_ManagerFctPtr(&cmd.debugDumpXpakInfo.m_Data, NULL, Destroy);
  cmd.debugDumpXpakInfo.m_ManagerFctPtr = NULL;
  cmd.decompressFinishedCallback.m_InvokeFctPtr = stdext::inplace_function<void (bool),32,16>::DefaultFunction;
  if ( cmd.decompressFinishedCallback.m_ManagerFctPtr )
    cmd.decompressFinishedCallback.m_ManagerFctPtr(&cmd.decompressFinishedCallback.m_Data, NULL, Destroy);
  cmd.decompressFinishedCallback.m_ManagerFctPtr = NULL;
  cmd.decompressItemCompleteCallback.m_InvokeFctPtr = stdext::inplace_function<void (int,StreamDecompressItem const *),32,16>::DefaultFunction;
  if ( cmd.decompressItemCompleteCallback.m_ManagerFctPtr )
    cmd.decompressItemCompleteCallback.m_ManagerFctPtr(&cmd.decompressItemCompleteCallback.m_Data, NULL, Destroy);
  cmd.decompressItemCompleteCallback.m_ManagerFctPtr = NULL;
  cmd.decompressItemCallback.m_InvokeFctPtr = stdext::inplace_function<bool (int,StreamDecompressItem *),32,16>::DefaultFunction;
  if ( cmd.decompressItemCallback.m_ManagerFctPtr )
    cmd.decompressItemCallback.m_ManagerFctPtr(&cmd.decompressItemCallback.m_Data, NULL, Destroy);
}

/*
==============
Stream_QueueFileBlockUpdate
==============
*/
void Stream_QueueFileBlockUpdate(void)
{
  int data; 

  if ( !Sys_ExistsWorkerCmdsOfType(WRKCMD_STREAM_UPDATE_FILE_BLOCKS) )
  {
    data = 0;
    Sys_AddWorkerCmd(WRKCMD_STREAM_UPDATE_FILE_BLOCKS, &data);
  }
}

/*
==============
Stream_ReadVerbosePrint
==============
*/
void Stream_ReadVerbosePrint(const StreamBufferBlockInfo *blockInfo, const ItemReadInfo *itemInfo, const char *status)
{
  const dvar_t *v5; 
  unsigned int v6; 
  unsigned int mValue; 
  float v8; 
  const char *Name; 
  int v10; 
  unsigned int numItems; 
  unsigned int v12; 
  unsigned int numBlocks; 
  unsigned int readBytes; 
  __int64 readOffset; 
  __int64 v16; 
  const char *v17; 
  double v18; 
  const char *v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned int v22; 
  const XPakEntryInfo *XPakEntryInfo; 
  char v26; 

  if ( streamFrontendGlob->loadSync.startTimeMs > 0 || streamFrontendGlob->loadSync.isActiveInFrontend )
  {
    v26 = 1;
LABEL_9:
    XPakEntryInfo = ItemPickInfo::GetXPakEntryInfo(&itemInfo->pickedItem);
    v6 = truncate_cast<unsigned int,__int64>(((char *)itemInfo - (char *)blockInfo - 40) / 48);
    v22 = v6;
    if ( v6 >= 0x40 )
    {
      LODWORD(v21) = 64;
      LODWORD(v20) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1514, ASSERT_TYPE_ASSERT, "(unsigned)( itemInfoIndex ) < (unsigned)( ( sizeof( *array_counter( blockInfo->readInfo.itemReadInfo ) ) + 0 ) )", "itemInfoIndex doesn't index ARRAY_COUNT( blockInfo->readInfo.itemReadInfo )\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    mValue = itemInfo->pickedItem.distance.mValue;
    if ( mValue == -1 )
      v8 = FLOAT_3_4027977e38;
    else
      LODWORD(v8) = mValue << 7;
    Name = ItemPickInfo::GetName(&itemInfo->pickedItem);
    v10 = Sys_Milliseconds();
    numItems = blockInfo->readInfo.numItems;
    v12 = blockInfo->multiBlockReadInfo.blockIndex + 1;
    numBlocks = blockInfo->multiBlockReadInfo.numBlocks;
    readBytes = blockInfo->readInfo.readBytes;
    readOffset = blockInfo->readInfo.readOffset;
    v16 = *((_QWORD *)XPakEntryInfo + 3);
    v17 = XPak_IndexToName((unsigned __int8)v16);
    v18 = fsqrt(v8);
    v19 = "Streamer";
    if ( v26 )
      v19 = "Stream load sync";
    Streamer_StatusPrint("%s - read block %zd %s ( xpakIndex: %s(%u), offset: %zd, size: %u, multi-block: %d/%d, items: %u, timestamp: %d ms, item[%u]: %s, distance: %.2f )\n", v19, blockInfo - s_streamReadGlob.blocks, status, v17, (unsigned __int8)v16, readOffset, readBytes, v12, numBlocks, numItems, v10, v22, Name, v18);
    return;
  }
  v5 = DCONST_DVARBOOL_stream_readVerboseLog;
  v26 = 0;
  if ( !DCONST_DVARBOOL_stream_readVerboseLog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_readVerboseLog") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
    goto LABEL_9;
}

/*
==============
Stream_Read_CancelAllInFlightLoads
==============
*/
void Stream_Read_CancelAllInFlightLoads(void)
{
  char v0; 
  _BYTE *status; 
  _BYTE *v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  int v6; 
  int v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  StreamBufferBlockInfo *blocks; 
  int v11; 
  ScopedCriticalSection v12; 
  ScopedCriticalSection v13; 

  if ( Stream_IsEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 3004, ASSERT_TYPE_ASSERT, "(!Stream_IsEnabled())", (const char *)&queryFormat, "!Stream_IsEnabled()", -2i64) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF00FFFF, "StreamAlloc_Lock");
  ScopedCriticalSection::ScopedCriticalSection(&v13, CRITSECT_STREAM_ALLOC, SCOPED_CRITSECT_NORMAL);
  Sys_ProfEndNamedEvent();
  v0 = 0;
  status = s_streamReadGlob.blocks[0].status;
  v2 = s_streamReadGlob.blocks[0].status;
  v3 = 32i64;
  v4 = 32i64;
  do
  {
    if ( *(_DWORD *)v2 )
    {
      ScopedCriticalSection::ScopedCriticalSection(&v12, CRITSECT_STREAM_CANCEL, SCOPED_CRITSECT_NORMAL);
      v2[10] = 1;
      ScopedCriticalSection::~ScopedCriticalSection(&v12);
      v0 = 1;
    }
    if ( ((*(_DWORD *)v2 - 1) & 0xFFFFFFFD) != 0 )
    {
      if ( *(_DWORD *)v2 == 2 )
        FileStream_FreeRequest((FileStreamRequestID)*((_DWORD *)v2 + 1), 1);
    }
    else
    {
      v5 = Sys_Milliseconds();
      v6 = *((_DWORD *)v2 - 1);
      v7 = 0;
      if ( v6 )
        v7 = v5 - v6;
      s_streamReadGlob.cumulativeMsReadStatus[*(int *)v2] += v7;
      *((_DWORD *)v2 - 1) = v5;
      *(_DWORD *)v2 = 5;
    }
    v2 += 3128;
    --v4;
  }
  while ( v4 );
  if ( v0 )
  {
    v8 = Sys_Microseconds();
    while ( FileStream_IsCancelledReadInProgress() )
      Sys_Sleep(0);
    v9 = Sys_Microseconds() - v8;
    if ( v9 > 0x64 )
      Com_PrintWarning(35, "WARNING: Streamer spent %llu us waiting on cancelled reads!  This may block the Main thread!\n", v9);
    do
    {
      if ( *(_DWORD *)status )
      {
        while ( ((*(_DWORD *)status - 2) & 0xFFFFFFFD) == 0 )
        {
          if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_STREAM_DECOMPRESS) )
          {
            Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_STREAM_DECOMPRESS);
          }
          else if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_STREAM_DECOMPRESS_CHECK_ASYNC) )
          {
            Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_STREAM_DECOMPRESS_CHECK_ASYNC);
          }
          else
          {
            Sys_Sleep(0);
          }
        }
      }
      status += 3128;
      --v3;
    }
    while ( v3 );
    blocks = s_streamReadGlob.blocks;
    do
    {
      v11 = *(_DWORD *)blocks->status;
      if ( v11 == 5 )
      {
        Stream_ProcessFinishedButCancelledBlock(blocks);
        v11 = *(_DWORD *)blocks->status;
      }
      if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 3092, ASSERT_TYPE_ASSERT, "(blockInfo.status == StreamReadBlockStatus::INVALID)", (const char *)&queryFormat, "blockInfo.status == StreamReadBlockStatus::INVALID") )
        __debugbreak();
      ++blocks;
    }
    while ( blocks != (StreamBufferBlockInfo *)&s_streamReadGlob.decompressor );
  }
  *(_QWORD *)&s_streamReadGlob.lastSortListBuildIndex = 0i64;
  s_streamReadGlob.lastPickTypeByDistance = STREAM_ITEM_IMAGE;
  s_streamReadGlob.lastIssuedXPakOffset = 0i64;
  ScopedCriticalSection::~ScopedCriticalSection(&v13);
}

/*
==============
Stream_Read_GetCommitSize
==============
*/
unsigned __int64 Stream_Read_GetCommitSize()
{
  return s_streamReadGlob.commitSize;
}

/*
==============
Stream_Read_GetProfileDebugText
==============
*/
char *Stream_Read_GetProfileDebugText()
{
  int v0; 
  int v2; 
  int v3; 

  v0 = 1;
  if ( s_streamReadGlob.cumulativeMsReadStatus[0] + s_streamReadGlob.cumulativeMsReadStatus[2] + s_streamReadGlob.cumulativeMsReadStatus[3] + s_streamReadGlob.cumulativeMsReadStatus[4] + s_streamReadGlob.cumulativeMsReadStatus[5] + s_streamReadGlob.cumulativeMsReadStatus[1] > 1 )
    v0 = s_streamReadGlob.cumulativeMsReadStatus[0] + s_streamReadGlob.cumulativeMsReadStatus[2] + s_streamReadGlob.cumulativeMsReadStatus[3] + s_streamReadGlob.cumulativeMsReadStatus[4] + s_streamReadGlob.cumulativeMsReadStatus[5] + s_streamReadGlob.cumulativeMsReadStatus[1];
  v3 = 100 * s_streamReadGlob.cumulativeMsReadStatus[5] / v0;
  v2 = 100 * s_streamReadGlob.cumulativeMsReadStatus[4] / v0;
  return j_va("%di %dr %da %dd %df", (unsigned int)(100 * s_streamReadGlob.cumulativeMsReadStatus[0] / v0), (unsigned int)(100 * s_streamReadGlob.cumulativeMsReadStatus[2] / v0), (unsigned int)(100 * s_streamReadGlob.cumulativeMsReadStatus[3] / v0), v2, v3);
}

/*
==============
Stream_Read_GetStats
==============
*/
StreamReadStats *Stream_Read_GetStats(StreamReadStats *result)
{
  unsigned int numReads; 
  float v3; 
  float v4; 
  float numItemsRead; 
  float v6; 
  unsigned int v7; 
  float v8; 
  float v9; 
  signed __int64 totalProcessedCount; 
  float v11; 
  float v12; 
  float totalAddedCount; 
  float v14; 

  numReads = s_streamReadGlob.readIssuedStats.numReads;
  v3 = 0.0;
  v4 = 0.0;
  if ( s_streamReadGlob.readIssuedStats.numReads )
  {
    result->averageSizePerRead = s_streamReadGlob.readSucceededStats.sizeRead / s_streamReadGlob.readIssuedStats.numReads;
    numItemsRead = (float)s_streamReadGlob.readIssuedStats.numItemsRead;
    v6 = (float)numReads;
    v4 = numItemsRead / v6;
  }
  else
  {
    result->averageSizePerRead = s_streamReadGlob.readIssuedStats.numReads;
  }
  v7 = s_streamReadGlob.readSucceededStats.numReads;
  result->packedReadIssuedRatio = v4;
  if ( v7 )
  {
    v8 = (float)s_streamReadGlob.readSucceededStats.numItemsRead;
    v9 = (float)v7;
    v3 = v8 / v9;
  }
  totalProcessedCount = s_streamReadGlob.seekOrderItemQueue.totalProcessedCount;
  result->packedReadSucceededRatio = v3;
  v11 = (float)totalProcessedCount;
  if ( totalProcessedCount < 0 )
  {
    v12 = (float)totalProcessedCount;
    v11 = v12 + 1.8446744e19;
  }
  totalAddedCount = (float)(__int64)s_streamReadGlob.seekOrderItemQueue.totalAddedCount;
  if ( (s_streamReadGlob.seekOrderItemQueue.totalAddedCount & 0x8000000000000000ui64) != 0i64 )
  {
    v14 = (float)(__int64)s_streamReadGlob.seekOrderItemQueue.totalAddedCount;
    totalAddedCount = v14 + 1.8446744e19;
  }
  result->seekOrderItemQueueIssuePercent = (float)(v11 * 100.0) / totalAddedCount;
  return result;
}

/*
==============
Stream_Read_Init
==============
*/
void Stream_Read_Init(void)
{
  unsigned __int64 v0; 
  unsigned __int64 v1; 
  const dvar_t *v2; 
  unsigned __int64 vaReserveBlockBuffers; 
  unsigned __int8 *v4; 
  unsigned int i; 
  __int64 v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 vaReserveDecompressor; 
  unsigned __int8 *v10; 
  StreamDecompressor *v11; 
  unsigned __int64 allocBase; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 391, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_streamReadGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 393, ASSERT_TYPE_ASSERT, "(!s_streamReadGlob.isInitialized)", (const char *)&queryFormat, "!s_streamReadGlob.isInitialized") )
    __debugbreak();
  s_streamReadGlob.isInitialized = 1;
  if ( !s_streamReadGlob.vaReserveBlockBuffers )
  {
    v0 = StreamDecompressor::SizeNeeded(0x20u);
    v1 = Mem_Paged_ReserveVirtualAddressRange(MEM_POOL_MAIN, ((v0 + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64) + 33619968, "StreamRead");
    if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 402, ASSERT_TYPE_ASSERT, "(vaReserve)", (const char *)&queryFormat, "vaReserve") )
      __debugbreak();
    s_streamReadGlob.vaReserveBlockBuffers = v1;
    s_streamReadGlob.vaReserveDecompressor = v1 + 33619968;
  }
  v2 = DVARINT_stream_readMaxInFlight;
  if ( !DVARINT_stream_readMaxInFlight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_readMaxInFlight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  vaReserveBlockBuffers = s_streamReadGlob.vaReserveBlockBuffers;
  s_streamReadGlob.blockCount = v2->current.unsignedInt;
  v4 = (unsigned __int8 *)(s_streamReadGlob.vaReserveBlockBuffers + (s_streamReadGlob.blockCount << 20));
  if ( !Mem_Paged_CommitMemoryPartial((unsigned __int8 *)s_streamReadGlob.vaReserveBlockBuffers, v4, (unsigned __int8 *)s_streamReadGlob.vaReserveBlockBuffers, NULL, &s_streamReadGlob.memPageRangeBlockBuffers, "StreamReadBuffers") && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 355, ASSERT_TYPE_ASSERT, "(Mem_Paged_CommitMemory( blockBuffersStart, blockBuffersEnd, nullptr, &s_streamReadGlob.memPageRangeBlockBuffers , \"StreamReadBuffers\" ))", (const char *)&queryFormat, "Mem_Paged_CommitMemory( blockBuffersStart, blockBuffersEnd, nullptr, &s_streamReadGlob.memPageRangeBlockBuffers MEM_TRACK_ARGS( \"StreamReadBuffers\" ) )") )
    __debugbreak();
  for ( i = 0; i < s_streamReadGlob.blockCount; *(_DWORD *)s_streamReadGlob.blocks[v6].schedulerId = -1 )
  {
    v6 = i;
    v7 = i++ << 20;
    s_streamReadGlob.blocks[v6].readBuffer = (unsigned __int8 *)(vaReserveBlockBuffers + v7);
    *(_DWORD *)s_streamReadGlob.blocks[v6].status = 0;
  }
  s_streamReadGlob.commitSize += (unsigned __int64)&v4[-vaReserveBlockBuffers];
  if ( !s_streamReadGlob.blockCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 372, ASSERT_TYPE_ASSERT, "(s_streamReadGlob.blockCount > 0)", (const char *)&queryFormat, "s_streamReadGlob.blockCount > 0") )
    __debugbreak();
  if ( !s_streamReadGlob.vaReserveDecompressor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 373, ASSERT_TYPE_ASSERT, "(s_streamReadGlob.vaReserveDecompressor)", (const char *)&queryFormat, "s_streamReadGlob.vaReserveDecompressor") )
    __debugbreak();
  v8 = StreamDecompressor::SizeNeeded(s_streamReadGlob.blockCount);
  vaReserveDecompressor = s_streamReadGlob.vaReserveDecompressor;
  v10 = (unsigned __int8 *)((v8 + s_streamReadGlob.vaReserveDecompressor + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64);
  if ( !Mem_Paged_CommitMemoryPartial((unsigned __int8 *)s_streamReadGlob.vaReserveDecompressor, v10, (unsigned __int8 *)s_streamReadGlob.vaReserveDecompressor, NULL, &s_streamReadGlob.memPageRangeDecompressor, "StreamReadDecompressor") && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 378, ASSERT_TYPE_ASSERT, "(Mem_Paged_CommitMemory( decompressorBytesStart, decompressorBytesEnd, nullptr, &s_streamReadGlob.memPageRangeDecompressor , \"StreamReadDecompressor\" ))", (const char *)&queryFormat, "Mem_Paged_CommitMemory( decompressorBytesStart, decompressorBytesEnd, nullptr, &s_streamReadGlob.memPageRangeDecompressor MEM_TRACK_ARGS( \"StreamReadDecompressor\" ) )") )
    __debugbreak();
  allocBase = vaReserveDecompressor;
  v11 = StreamDecompressor::CreateInPlace(s_streamReadGlob.blockCount, &allocBase);
  s_streamReadGlob.commitSize += (unsigned __int64)&v10[-vaReserveDecompressor];
  s_streamReadGlob.decompressor = v11;
}

/*
==============
Stream_Read_ResetStats
==============
*/
void Stream_Read_ResetStats(void)
{
  s_streamReadGlob.readIssuedStats = 0ui64;
  s_streamReadGlob.readSucceededStats = 0ui64;
  *(_QWORD *)s_streamReadGlob.cumulativeMsReadStatus = 0i64;
  *(_QWORD *)&s_streamReadGlob.cumulativeMsReadStatus[2] = 0i64;
  *(_QWORD *)&s_streamReadGlob.cumulativeMsReadStatus[4] = 0i64;
  s_streamReadGlob.seekOrderItemQueue.totalAddedCount = 0i64;
  s_streamReadGlob.seekOrderItemQueue.totalProcessedCount = 0i64;
}

/*
==============
Stream_Read_Shutdown
==============
*/
void Stream_Read_Shutdown(void)
{
  unsigned __int64 v0; 
  StreamReadGlob *blocks; 
  ItemReadInfo *v2; 
  __int64 v3; 
  Mem_PageRange inoutPageRange; 
  __int64 Src[2]; 
  int v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  char v10[4]; 
  ItemReadInfo v11; 
  __int64 v12; 
  char v13; 
  StreamerMemLoan result; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 419, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !s_streamReadGlob.isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 421, ASSERT_TYPE_ASSERT, "(s_streamReadGlob.isInitialized)", (const char *)&queryFormat, "s_streamReadGlob.isInitialized") )
    __debugbreak();
  s_streamReadGlob.isInitialized = 0;
  Stream_Read_CancelAllInFlightLoads();
  if ( !s_streamReadGlob.decompressor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 430, ASSERT_TYPE_ASSERT, "(s_streamReadGlob.decompressor)", (const char *)&queryFormat, "s_streamReadGlob.decompressor") )
    __debugbreak();
  s_streamReadGlob.decompressor = NULL;
  v0 = StreamDecompressor::SizeNeeded(s_streamReadGlob.blockCount);
  inoutPageRange = s_streamReadGlob.memPageRangeDecompressor;
  Mem_Paged_DecommitMemoryPartial(&result, (unsigned __int8 *)s_streamReadGlob.vaReserveDecompressor, (unsigned __int8 *)((s_streamReadGlob.vaReserveDecompressor + v0 + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64), (unsigned __int8 *)s_streamReadGlob.vaReserveDecompressor, &inoutPageRange);
  StreamerMemLoan::~StreamerMemLoan(&result);
  s_streamReadGlob.memPageRangeDecompressor = MEM_PAGE_RANGE_INVALID_5;
  if ( !s_streamReadGlob.blockCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 440, ASSERT_TYPE_ASSERT, "(s_streamReadGlob.blockCount > 0)", (const char *)&queryFormat, "s_streamReadGlob.blockCount > 0") )
    __debugbreak();
  blocks = (StreamReadGlob *)s_streamReadGlob.blocks;
  do
  {
    Src[0] = 0i64;
    Src[1] = 0i64;
    v6 = -1;
    v7 = 0;
    v8 = 0i64;
    v9 = 0;
    memset_0(v10, 0, 0xC04ui64);
    v2 = &v11;
    v3 = 64i64;
    do
    {
      ItemReadInfo::ItemReadInfo(v2++);
      --v3;
    }
    while ( v3 );
    v12 = 0i64;
    v13 = 0;
    memcpy_0(blocks, Src, 0xC38ui64);
    blocks = (StreamReadGlob *)((char *)blocks + 3128);
  }
  while ( blocks != (StreamReadGlob *)&s_streamReadGlob.decompressor );
  inoutPageRange = s_streamReadGlob.memPageRangeBlockBuffers;
  Mem_Paged_DecommitMemoryPartial(&result, (unsigned __int8 *)s_streamReadGlob.vaReserveBlockBuffers, (unsigned __int8 *)(s_streamReadGlob.vaReserveBlockBuffers + (s_streamReadGlob.blockCount << 20)), (unsigned __int8 *)s_streamReadGlob.vaReserveBlockBuffers, &inoutPageRange);
  StreamerMemLoan::~StreamerMemLoan(&result);
  s_streamReadGlob.memPageRangeBlockBuffers = MEM_PAGE_RANGE_INVALID_5;
  s_streamReadGlob.blockCount = 0;
  s_streamReadGlob.commitSize = 0i64;
}

/*
==============
Stream_Read_UpdateClientFrame
==============
*/
void Stream_Read_UpdateClientFrame(void)
{
  const dvar_t *v0; 

  if ( s_streamReadGlob.isInitialized )
  {
    v0 = DVARINT_stream_readMaxInFlight;
    if ( !DVARINT_stream_readMaxInFlight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_readMaxInFlight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    if ( s_streamReadGlob.blockCount != v0->current.integer )
    {
      Stream_PushSyncDisable();
      Stream_Read_Shutdown();
      Stream_Read_Init();
      Stream_PopSyncDisable();
    }
  }
}

/*
==============
Stream_ResetFileBlock
==============
*/
void Stream_ResetFileBlock(StreamBufferBlockInfo *blockInfo)
{
  int v2; 
  int modifyTimeMs; 
  __int64 v4; 
  int *v5; 
  int v6; 
  unsigned __int8 *readBuffer; 
  ItemReadInfo *v8; 
  __int64 v9; 
  __int64 Src[2]; 
  int v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  char v15[4]; 
  ItemReadInfo v16; 
  __int64 v17; 
  char v18; 

  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1279, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  if ( *(_DWORD *)blockInfo->status == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1280, ASSERT_TYPE_ASSERT, "(blockInfo->status != StreamReadBlockStatus::READINPROGRESS)", (const char *)&queryFormat, "blockInfo->status != StreamReadBlockStatus::READINPROGRESS") )
    __debugbreak();
  if ( *(_DWORD *)blockInfo->status == 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1281, ASSERT_TYPE_ASSERT, "(blockInfo->status != StreamReadBlockStatus::DECOMPRESSING)", (const char *)&queryFormat, "blockInfo->status != StreamReadBlockStatus::DECOMPRESSING") )
    __debugbreak();
  v2 = Sys_Milliseconds();
  modifyTimeMs = blockInfo->modifyTimeMs;
  v4 = *(int *)blockInfo->status;
  Src[0] = 0i64;
  Src[1] = 0i64;
  v11 = -1;
  v5 = &s_streamReadGlob.cumulativeMsReadStatus[v4];
  v12 = 0;
  v13 = 0i64;
  v14 = 0;
  v6 = 0;
  if ( modifyTimeMs )
    v6 = v2 - modifyTimeMs;
  *v5 += v6;
  readBuffer = blockInfo->readBuffer;
  blockInfo->modifyTimeMs = v2;
  memset_0(v15, 0, 0xC04ui64);
  v8 = &v16;
  v9 = 64i64;
  do
  {
    ItemReadInfo::ItemReadInfo(v8++);
    --v9;
  }
  while ( v9 );
  v17 = 0i64;
  v18 = 0;
  memcpy_0(blockInfo, Src, sizeof(StreamBufferBlockInfo));
  blockInfo->modifyTimeMs = Sys_Milliseconds();
  blockInfo->readBuffer = readBuffer;
}

/*
==============
Stream_SetStatus
==============
*/
void Stream_SetStatus(StreamBufferBlockInfo *blockInfo, int newStatus)
{
  int v4; 
  int modifyTimeMs; 
  int *v6; 
  int v7; 

  v4 = Sys_Milliseconds();
  modifyTimeMs = blockInfo->modifyTimeMs;
  v7 = 0;
  if ( modifyTimeMs )
    v7 = v4 - modifyTimeMs;
  v6 = &s_streamReadGlob.cumulativeMsReadStatus[*(int *)blockInfo->status];
  *v6 += v7;
  blockInfo->modifyTimeMs = v4;
  *(_DWORD *)blockInfo->status = newStatus;
}

/*
==============
Stream_ShouldReadGenericNow
==============
*/
char Stream_ShouldReadGenericNow(const StreamSortListFrame *sortList, unsigned int genericIndex)
{
  StreamSortList<37888> *p_genericSortList; 
  StreamFrontendGlob *v4; 
  FastCriticalSectionScopeRead v6; 

  p_genericSortList = &sortList->genericSortList;
  FastCriticalSectionScopeRead::FastCriticalSectionScopeRead(&v6, &sortList->genericSortList.mCS);
  LOBYTE(p_genericSortList) = Com_BitCheckAssert(p_genericSortList->mActive, genericIndex, 4736);
  FastCriticalSectionScopeRead::~FastCriticalSectionScopeRead(&v6);
  if ( !(_BYTE)p_genericSortList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 722, ASSERT_TYPE_ASSERT, "(sortList->genericSortList.InList( genericIndex ))", (const char *)&queryFormat, "sortList->genericSortList.InList( genericIndex )", -2i64) )
    __debugbreak();
  v4 = streamFrontendGlob;
  if ( StreamableBits::CheckInUse(&streamFrontendGlob->genericBits, genericIndex) || StreamableBits::CheckLoading(&v4->genericBits, genericIndex) || RequestBits::CheckDanger(&streamFrontendGlob->genericRequest, genericIndex) )
    return 0;
  if ( Stream_Primer_IsPrimingGeneric(genericIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 736, ASSERT_TYPE_ASSERT, "(!Stream_Primer_IsPrimingGeneric( genericIndex ))", (const char *)&queryFormat, "!Stream_Primer_IsPrimingGeneric( genericIndex )") )
    __debugbreak();
  return 1;
}

/*
==============
Stream_ShouldReadImagePartNow
==============
*/
char Stream_ShouldReadImagePartNow(const StreamSortListFrame *sortList, unsigned int imagePartIndex)
{
  __int64 v2; 
  StreamSortList<327680> *p_imageSortList; 
  StreamFrontendGlob *v4; 
  StreamFrontendGlob *v5; 
  unsigned int *mPriming; 
  unsigned int v7; 
  const dvar_t *v8; 
  int v9; 
  StreamableBits *p_imageBits; 
  __int64 v13; 
  FastCriticalSectionScopeRead v14; 

  v2 = (int)imagePartIndex;
  p_imageSortList = &sortList->imageSortList;
  FastCriticalSectionScopeRead::FastCriticalSectionScopeRead(&v14, &sortList->imageSortList.mCS);
  LOBYTE(p_imageSortList) = Com_BitCheckAssert(p_imageSortList->mActive, v2, 40960);
  FastCriticalSectionScopeRead::~FastCriticalSectionScopeRead(&v14);
  if ( !(_BYTE)p_imageSortList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 639, ASSERT_TYPE_ASSERT, "(sortList->imageSortList.InList( imagePartIndex ))", (const char *)&queryFormat, "sortList->imageSortList.InList( imagePartIndex )") )
    __debugbreak();
  v4 = streamFrontendGlob;
  if ( StreamableBits::CheckInUse(&streamFrontendGlob->imageBits, v2) || StreamableBits::CheckLoading(&v4->imageBits, v2) || Stream_Primer_IsPrimingImageIndex((unsigned int)v2 >> 2) )
    return 0;
  v5 = streamFrontendGlob;
  if ( (unsigned int)v2 >= streamFrontendGlob->imageBits.mBitCount )
  {
    LODWORD(v13) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 554, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v13, streamFrontendGlob->imageBits.mBitCount) )
      __debugbreak();
  }
  mPriming = v5->imageBits.mPriming;
  if ( !mPriming && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v7 = mPriming[v2 >> 5];
  if ( _bittest((const int *)&v7, v2 & 0x1F) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 657, ASSERT_TYPE_ASSERT, "(!streamFrontendGlob->imageBits.CheckPriming( imagePartIndex ))", (const char *)&queryFormat, "!streamFrontendGlob->imageBits.CheckPriming( imagePartIndex )") )
    __debugbreak();
  if ( (v2 & 3) == 0 )
    return 1;
  v8 = DCONST_DVARBOOL_stream_concurrentImagePartLoading;
  if ( !DCONST_DVARBOOL_stream_concurrentImagePartLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_concurrentImagePartLoading") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v2 - 1;
  p_imageBits = &streamFrontendGlob->imageBits;
  if ( !(v8->current.enabled ? StreamableBits::CheckInUseOrLoading(p_imageBits, v9) : StreamableBits::CheckInUse(p_imageBits, v9)) )
    return 0;
  else
    return 1;
}

/*
==============
Stream_ShouldReadMeshNow
==============
*/
char Stream_ShouldReadMeshNow(const StreamSortListFrame *sortList, unsigned int meshIndex)
{
  StreamSortList<45056> *p_meshSortList; 
  StreamFrontendGlob *v4; 
  FastCriticalSectionScopeRead v6; 

  p_meshSortList = &sortList->meshSortList;
  FastCriticalSectionScopeRead::FastCriticalSectionScopeRead(&v6, &sortList->meshSortList.mCS);
  LOBYTE(p_meshSortList) = Com_BitCheckAssert(p_meshSortList->mActive, meshIndex, 5632);
  FastCriticalSectionScopeRead::~FastCriticalSectionScopeRead(&v6);
  if ( !(_BYTE)p_meshSortList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 699, ASSERT_TYPE_ASSERT, "(sortList->meshSortList.InList( meshIndex ))", (const char *)&queryFormat, "sortList->meshSortList.InList( meshIndex )", -2i64) )
    __debugbreak();
  v4 = streamFrontendGlob;
  if ( StreamableBits::CheckInUse(&streamFrontendGlob->meshBits, meshIndex) || StreamableBits::CheckLoading(&v4->meshBits, meshIndex) || RequestBits::CheckDanger(&streamFrontendGlob->meshRequest, meshIndex) )
    return 0;
  if ( Stream_Primer_IsPrimingMesh(meshIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 713, ASSERT_TYPE_ASSERT, "(!Stream_Primer_IsPrimingMesh( meshIndex ))", (const char *)&queryFormat, "!Stream_Primer_IsPrimingMesh( meshIndex )") )
    __debugbreak();
  return 1;
}

/*
==============
Stream_UpdateFileBlock_GetBestGeneric
==============
*/
ItemPickInfo *Stream_UpdateFileBlock_GetBestGeneric(ItemPickInfo *result, const StreamSortListFrame *sortList, int *sortedIndex, StreamDistance maxDistance)
{
  StreamSortListFrame *v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 mSortedRight; 
  unsigned __int64 *v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  StreamKey *StreamKeyAtIndex; 
  const char **p_name; 
  __int128 v15; 
  double v16; 
  FastCriticalSectionScopeRead v17; 
  StreamSortListFrame *sortLista; 
  int *v19; 

  v19 = sortedIndex;
  sortLista = (StreamSortListFrame *)sortList;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateFileBlock_GetBestGeneric");
  *(_QWORD *)&v15 = 0i64;
  *((_QWORD *)&v15 + 1) = 0xFFFFFFFF00000000ui64;
  LOBYTE(v16) = 3;
  v5 = sortLista;
  v6 = *v19;
  FastCriticalSectionScopeRead::FastCriticalSectionScopeRead(&v17, &sortLista->genericSortList.mCS);
  v7 = v6;
  mSortedRight = v5->genericSortList.mSortedRight;
  if ( v6 >= mSortedRight )
  {
    v9 = (unsigned __int64 *)&v5->genericSortList.mSorted[v6];
    while ( 1 )
    {
      v10 = v7;
      --*v19;
      v11 = *v9 >> 45;
      StreamKeyAtIndex = DB_GetStreamKeyAtIndex(v11);
      p_name = &StreamKeyAtIndex->name;
      if ( (StreamKeyAtIndex->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2518, ASSERT_TYPE_ASSERT, "( ( !streamKey->Resident() ) )", "( streamKey->name ) = %s", StreamKeyAtIndex->name) )
        __debugbreak();
      if ( !*((_BYTE *)p_name + 60) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2519, ASSERT_TYPE_ASSERT, "( ( streamKey->behaviorIndex != SKBI_NONE ) )", "( streamKey->name ) = %s", *p_name) )
        __debugbreak();
      if ( *((_BYTE *)p_name + 60) == 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2520, ASSERT_TYPE_ASSERT, "( ( streamKey->behaviorIndex != SKBI_COUNT ) )", "( streamKey->name ) = %s", *p_name) )
        __debugbreak();
      if ( Stream_ShouldReadGenericNow(sortLista, v11) )
        break;
      --v7;
      --v9;
      if ( v10 <= mSortedRight )
        goto LABEL_16;
    }
    *(_QWORD *)&v15 = p_name;
    *((_QWORD *)&v15 + 1) = (unsigned int)v11 | 0x1000000000000i64;
    LOBYTE(v16) = 2;
  }
LABEL_16:
  FastCriticalSectionScopeRead::~FastCriticalSectionScopeRead(&v17);
  *(_OWORD *)&result->item = v15;
  *(double *)&result->type = v16;
  Sys_ProfEndNamedEvent();
  return result;
}

/*
==============
Stream_UpdateFileBlock_GetBestImage
==============
*/
ItemPickInfo *Stream_UpdateFileBlock_GetBestImage(ItemPickInfo *result, const StreamSortListFrame *sortList, int *sortedImageIndex, StreamDistance maxDistance)
{
  ItemPickInfo *v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 mSortedRight; 
  StreamSortKeyPacked *v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  GfxImage *GfxImageAtIndex; 
  GfxImage *v12; 
  unsigned int v13; 
  float v14; 
  float v15; 
  double v16; 
  __int64 v18; 
  __int64 v19; 
  unsigned int mValue; 
  int v21; 
  FastCriticalSectionScopeRead v22; 
  __int64 v23; 
  __int128 v24; 
  double v25; 

  v23 = -2i64;
  v4 = result;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateFileBlock_GetBestImage");
  mValue = maxDistance.mValue;
  if ( maxDistance.mValue < 0xFEFFFF )
    mValue = maxDistance.mValue + 1;
  v21 = -1;
  *(_QWORD *)&v24 = 0i64;
  *((_QWORD *)&v24 + 1) = 0xFFFFFFFF00000000ui64;
  LOBYTE(v25) = 3;
  v5 = *sortedImageIndex;
  FastCriticalSectionScopeRead::FastCriticalSectionScopeRead(&v22, &sortList->imageSortList.mCS);
  v6 = v5;
  mSortedRight = sortList->imageSortList.mSortedRight;
  if ( v5 >= mSortedRight )
  {
    v8 = &sortList->imageSortList.mSorted[v5];
    while ( 1 )
    {
      v9 = v6;
      --*sortedImageIndex;
      v10 = v8->bits >> 45;
      GfxImageAtIndex = DB_GetGfxImageAtIndex((unsigned int)v10 >> 2);
      v12 = GfxImageAtIndex;
      if ( (GfxImageAtIndex->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2427, ASSERT_TYPE_ASSERT, "( ( R_IsStreamedImage( image ) ) )", "( image->name ) = %s", GfxImageAtIndex->name) )
        __debugbreak();
      if ( (unsigned int)v10 >= 0x50000 )
      {
        LODWORD(v19) = 327680;
        LODWORD(v18) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      v13 = sortList->imagePartDistance.mDistances[(unsigned int)v10].mValue;
      v21 = v13;
      if ( maxDistance.mValue != v13 )
      {
        if ( mValue < v13 )
          goto LABEL_17;
        if ( Stream_ShouldReadImagePartNow(sortList, v10) )
          break;
      }
      --v6;
      --v8;
      if ( v9 <= mSortedRight )
        goto LABEL_17;
    }
    *(_QWORD *)&v24 = v12;
    *((_QWORD *)&v24 + 1) = __PAIR64__(v13, v10);
    LOBYTE(v25) = 0;
LABEL_17:
    v4 = result;
  }
  FastCriticalSectionScopeRead::~FastCriticalSectionScopeRead(&v22);
  if ( v21 == -1 )
    v14 = FLOAT_3_4027977e38;
  else
    LODWORD(v14) = v21 << 7;
  v15 = (float)(v14 * 0.050000001) + (float)(streamFrontendGlob->smoothedImageCurrentReadDistanceSq * 0.94999999);
  streamFrontendGlob->smoothedImageCurrentReadDistanceSq = v15;
  v16 = I_fclamp(v15, 0.0099999998, 100.0);
  streamFrontendGlob->smoothedImageCurrentReadDistanceSq = *(float *)&v16;
  *(_OWORD *)&v4->item = v24;
  *(double *)&v4->type = v25;
  Sys_ProfEndNamedEvent();
  return v4;
}

/*
==============
Stream_UpdateFileBlock_GetBestMesh
==============
*/
ItemPickInfo *Stream_UpdateFileBlock_GetBestMesh(ItemPickInfo *result, const StreamSortListFrame *sortList, int *sortedMeshIndex, StreamDistance maxDistance)
{
  StreamSortListFrame *v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 mSortedRight; 
  unsigned __int64 *v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  XModelSurfs *XModelSurfsAtIndex; 
  XModelSurfs *v13; 
  __int64 v15; 
  __int128 v16; 
  double v17; 
  FastCriticalSectionScopeRead v18; 
  StreamSortListFrame *sortLista; 
  int *v20; 

  v20 = sortedMeshIndex;
  sortLista = (StreamSortListFrame *)sortList;
  v15 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateFileBlock_GetBestMesh");
  *(_QWORD *)&v16 = 0i64;
  *((_QWORD *)&v16 + 1) = 0xFFFFFFFF00000000ui64;
  LOBYTE(v17) = 3;
  v5 = sortLista;
  v6 = *v20;
  FastCriticalSectionScopeRead::FastCriticalSectionScopeRead(&v18, &sortLista->meshSortList.mCS);
  v7 = v6;
  mSortedRight = v5->meshSortList.mSortedRight;
  if ( v6 >= mSortedRight )
  {
    v9 = (unsigned __int64 *)&v5->meshSortList.mSorted[v6];
    while ( 1 )
    {
      v10 = v7;
      --*v20;
      v11 = *v9 >> 45;
      XModelSurfsAtIndex = DB_GetXModelSurfsAtIndex(v11);
      v13 = XModelSurfsAtIndex;
      if ( !XModelSurfsAtIndex->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2481, ASSERT_TYPE_ASSERT, "( ( mesh->shared != nullptr ) )", "( mesh->name ) = %s", XModelSurfsAtIndex->name) )
        __debugbreak();
      if ( !v13->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 747, ASSERT_TYPE_ASSERT, "(modelSurfs->shared)", (const char *)&queryFormat, "modelSurfs->shared", v15) )
        __debugbreak();
      if ( (v13->shared->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2482, ASSERT_TYPE_ASSERT, "( ( XModelSurfs_IsStreamed( mesh ) ) )", "( mesh->name ) = %s", v13->name) )
        __debugbreak();
      if ( Stream_ShouldReadMeshNow(sortLista, v11) )
        break;
      --v7;
      --v9;
      if ( v10 <= mSortedRight )
        goto LABEL_16;
    }
    *(_QWORD *)&v16 = v13;
    *((_QWORD *)&v16 + 1) = (unsigned int)v11 | 0x1000000000000i64;
    LOBYTE(v17) = 1;
  }
LABEL_16:
  FastCriticalSectionScopeRead::~FastCriticalSectionScopeRead(&v18);
  *(_OWORD *)&result->item = v16;
  *(double *)&result->type = v17;
  Sys_ProfEndNamedEvent();
  return result;
}

/*
==============
Stream_UpdateFileBlock_IsAllocDone
==============
*/
char Stream_UpdateFileBlock_IsAllocDone(StreamBufferBlockInfo *blockInfo)
{
  __int64 v1; 
  StreamItemType type; 
  unsigned __int8 *v4; 
  unsigned __int8 *v5; 
  streamer_handle_t v6; 
  __int64 v8; 
  __int64 v9; 

  v1 = 0i64;
  if ( !blockInfo->readInfo.numItems )
    return 1;
  while ( blockInfo->readInfo.itemReadInfo[v1].allocResult != TASK_CREATE_FAIL )
  {
LABEL_21:
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= blockInfo->readInfo.numItems )
      return 1;
  }
  if ( Stream_BackendQueue_IsComplete(blockInfo->readInfo.itemReadInfo[v1].updateId) )
  {
    if ( !blockInfo->readInfo.itemReadInfo[v1].pickedItem.item && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 128, ASSERT_TYPE_ASSERT, "(item)", (const char *)&queryFormat, "item") )
      __debugbreak();
    type = blockInfo->readInfo.itemReadInfo[v1].pickedItem.type;
    if ( (unsigned __int8)type >= STREAM_ITEM_COUNT )
    {
      LODWORD(v9) = 3;
      LODWORD(v8) = (unsigned __int8)type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 129, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( STREAM_ITEM_COUNT )", "type doesn't index STREAM_ITEM_COUNT\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    if ( blockInfo->readInfo.itemReadInfo[v1].pickedItem.type )
    {
      v6.data = ItemPickInfo::GetHandle(&blockInfo->readInfo.itemReadInfo[v1].pickedItem).data;
      v5 = Stream_AddressSpace_ResolveFrontendAddr(*(streamer_handle_t *)v6.data);
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 140, ASSERT_TYPE_ASSERT, "(address)", (const char *)&queryFormat, "address") )
        __debugbreak();
    }
    else
    {
      v4 = Stream_AddressSpace_ResolveFrontendAddr(*(streamer_handle_t *)((char *)blockInfo->readInfo.itemReadInfo[v1].pickedItem.item + 224));
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 134, ASSERT_TYPE_ASSERT, "(baseAddress)", (const char *)&queryFormat, "baseAddress") )
        __debugbreak();
      v5 = &v4[Image_PartOffset(blockInfo->readInfo.itemReadInfo[v1].pickedItem.image, blockInfo->readInfo.itemReadInfo[v1].pickedItem.itemPartIndex & 3)];
    }
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1325, ASSERT_TYPE_ASSERT, "(itemReadInfo.pickedItem.GetData())", (const char *)&queryFormat, "itemReadInfo.pickedItem.GetData()") )
      __debugbreak();
    goto LABEL_21;
  }
  return 0;
}

/*
==============
Stream_UpdateFileBlock_PickNextItemsToReadInSeekOrder
==============
*/
void Stream_UpdateFileBlock_PickNextItemsToReadInSeekOrder(const StreamSortListFrame *sortList, StreamDistance maxDistance)
{
  const StreamSortListFrame *v3; 
  const dvar_t *v4; 
  unsigned int v5; 
  const dvar_t *v6; 
  int v7; 
  const dvar_t *v8; 
  float v11; 
  float v12; 
  unsigned int v13; 
  unsigned int v14; 
  const StreamItemType *v15; 
  __int64 v16; 
  ItemPickInfo *v17; 
  __int128 v18; 
  StreamBufferReadInfo *v19; 
  unsigned int updated; 
  StreamItemType type; 
  StreamableBits *StremableBitsForType; 
  __int64 itemPartIndex; 
  unsigned int *mLoading; 
  unsigned int v25; 
  StreamableBits *v26; 
  unsigned int *v27; 
  bool v28; 
  int v29; 
  __int64 v30; 
  unsigned int v31; 
  ItemPickInfo *p_pickedItem; 
  StreamItemType v33; 
  __int64 v34; 
  unsigned __int64 v35; 
  unsigned int nextIndex; 
  unsigned int v37; 
  bool v38; 
  unsigned int v39; 
  unsigned int *p_numItems; 
  StreamSortListFrame *v41; 
  unsigned int v42; 
  StreamableBits *v43; 
  __int64 v44; 
  unsigned int *v45; 
  unsigned int v46; 
  StreamableBits *v47; 
  __int64 v48; 
  unsigned int *v49; 
  __int64 v50; 
  __int64 v51; 
  Stream_UpdateFileBlock_PickNextItemsToReadInSeekOrder::__l35::<lambda_38e76eb61c9a4ebc832041ac28d5065a> v52; 
  unsigned int v53; 
  StreamSortListFrame *sortListb; 
  ItemPickInfo pickedItem; 
  __int64 v57; 
  ItemPickInfo result; 
  unsigned int v59; 
  int v60; 
  int v61; 
  __int64 v62; 
  int v63; 
  int sortedIndex[6]; 

  v57 = -2i64;
  v3 = sortList;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateFileBlock_PickNextItemsToReadInSeekOrder");
  v4 = DVARINT_stream_readSeekOrderMaxSizeKB_Image;
  if ( !DVARINT_stream_readSeekOrderMaxSizeKB_Image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_readSeekOrderMaxSizeKB_Image") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = v4->current.integer << 10;
  v59 = v5;
  v6 = DVARINT_stream_readSeekOrderMaxSizeKB_Mesh;
  if ( !DVARINT_stream_readSeekOrderMaxSizeKB_Mesh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_readSeekOrderMaxSizeKB_Mesh") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = v6->current.integer << 10;
  v60 = v7;
  v8 = DVARINT_stream_readSeekOrderMaxSizeKB_Generic;
  if ( !DVARINT_stream_readSeekOrderMaxSizeKB_Generic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_readSeekOrderMaxSizeKB_Generic") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v61 = v8->current.integer << 10;
  _XMM0 = LODWORD(streamFrontendGlob->meshBoost);
  __asm { vminss  xmm2, xmm0, cs:__real@3f800000 }
  if ( *(float *)&_XMM2 > 0.0 )
  {
    v11 = (float)(v5 >> 1);
    v12 = v11 * *(float *)&_XMM2;
    v59 = v5 - (int)v12;
    v60 = (int)v12 + v7;
  }
  v62 = 0i64;
  v63 = 0;
  sortedIndex[0] = v3->imageSortList.mCount - 1;
  sortedIndex[1] = v3->meshSortList.mCount - 1;
  sortedIndex[2] = v3->genericSortList.mCount - 1;
  s_streamReadGlob.seekOrderItemQueue.totalAddedCount += s_streamReadGlob.seekOrderItemQueue.count;
  s_streamReadGlob.seekOrderItemQueue.totalProcessedCount += s_streamReadGlob.seekOrderItemQueue.processedCount;
  *(_QWORD *)&s_streamReadGlob.seekOrderItemQueue.count = 0i64;
  s_streamReadGlob.seekOrderItemQueue.processedCount = 0;
  v13 = 0;
  v53 = 0;
  do
  {
    v14 = 0;
    v15 = pickOrder;
    while ( 1 )
    {
      v16 = *(unsigned __int8 *)v15;
      if ( *((_DWORD *)&v62 + v16) < *(&v59 + v16) )
      {
        v17 = pickFns[*(unsigned __int8 *)v15](&result, v3, &sortedIndex[*(unsigned __int8 *)v15], maxDistance);
        v18 = *(_OWORD *)&v17->item;
        *(_OWORD *)&pickedItem.item = v18;
        *(_QWORD *)&pickedItem.type = *(_QWORD *)&v17->type;
        if ( (_QWORD)v18 )
          break;
      }
      ++v14;
      ++v15;
      if ( v14 >= 3 )
        goto LABEL_56;
    }
    v19 = &s_streamReadGlob.seekOrderItemQueue.reads[v13];
    updated = Stream_UpdateFileBlock_SetupItemRead(&pickedItem, v3, v19);
    type = pickedItem.type;
    StremableBitsForType = Stream_GetStremableBitsForType(pickedItem.type);
    itemPartIndex = (int)pickedItem.itemPartIndex;
    if ( pickedItem.itemPartIndex >= StremableBitsForType->mBitCount )
    {
      LODWORD(v51) = StremableBitsForType->mBitCount;
      LODWORD(v50) = pickedItem.itemPartIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 288, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v50, v51) )
        __debugbreak();
    }
    mLoading = StremableBitsForType->mLoading;
    if ( !mLoading && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    v25 = mLoading[itemPartIndex >> 5];
    if ( _bittest((const int *)&v25, itemPartIndex & 0x1F) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2632, ASSERT_TYPE_ASSERT, "(!Stream_GetStremableBitsForType( pickedItem.type ).CheckLoading( pickedItem.itemPartIndex ))", (const char *)&queryFormat, "!Stream_GetStremableBitsForType( pickedItem.type ).CheckLoading( pickedItem.itemPartIndex )") )
      __debugbreak();
    v26 = Stream_GetStremableBitsForType(type);
    if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 267, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
      __debugbreak();
    if ( (unsigned int)itemPartIndex >= v26->mBitCount )
    {
      LODWORD(v51) = v26->mBitCount;
      LODWORD(v50) = itemPartIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 268, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v50, v51) )
        __debugbreak();
    }
    v27 = v26->mLoading;
    if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    v27[itemPartIndex >> 5] |= 1 << (itemPartIndex & 0x1F);
    v28 = updated < 0x100000;
    v3 = sortList;
    if ( v28 )
      Stream_UpdateFileBlock_SetupMultiItemRead(sortList, maxDistance, v19);
    if ( type )
    {
      if ( type == STREAM_ITEM_MESH )
      {
        v29 = *(_DWORD *)(*(_QWORD *)(v18 + 48) + 8i64);
      }
      else if ( type == STREAM_ITEM_GENERIC )
      {
        v29 = *(_DWORD *)(v18 + 56);
      }
      else
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 158, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
          __debugbreak();
        v29 = 0;
      }
    }
    else
    {
      v30 = itemPartIndex & 3;
      if ( (*(_DWORD *)(v18 + 24) & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
        __debugbreak();
      if ( (unsigned int)v30 >= Image_GetStreamedPartCount((const GfxImage *)v18) )
      {
        LODWORD(v51) = Image_GetStreamedPartCount((const GfxImage *)v18);
        LODWORD(v50) = v30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v50, v51) )
          __debugbreak();
      }
      if ( (_DWORD)v30 )
        v29 = (*(_DWORD *)(v18 + 40 * v30 + 88) >> 4) - (*(_DWORD *)(v18 + 40i64 * (unsigned int)(v30 - 1) + 88) >> 4);
      else
        v29 = *(_DWORD *)(v18 + 88) >> 4;
    }
    *((_DWORD *)&v62 + (unsigned __int8)v16) += v29;
    v13 = v53 + 1;
    v53 = v13;
  }
  while ( v13 < 0x40 );
LABEL_56:
  if ( v13 > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2654, ASSERT_TYPE_ASSERT, "(pickedItemCount <= ( sizeof( *array_counter( queue.reads ) ) + 0 ))", (const char *)&queryFormat, "pickedItemCount <= ARRAY_COUNT( queue.reads )") )
    __debugbreak();
  s_streamReadGlob.seekOrderItemQueue.count = v13;
  if ( v13 > 1 )
  {
    std::_Sort_unchecked_StreamBufferReadInfo____lambda_38e76eb61c9a4ebc832041ac28d5065a___(s_streamReadGlob.seekOrderItemQueue.reads, &s_streamReadGlob.seekOrderItemQueue.reads[v13], 3088i64 * v13 / 3088, v52);
    v31 = 0;
    p_pickedItem = &s_streamReadGlob.seekOrderItemQueue.reads[0].itemReadInfo[0].pickedItem;
    do
    {
      if ( !p_pickedItem->item && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 107, ASSERT_TYPE_ASSERT, "(item)", (const char *)&queryFormat, "item") )
        __debugbreak();
      v33 = p_pickedItem->type;
      if ( (unsigned __int8)v33 >= STREAM_ITEM_COUNT )
      {
        LODWORD(v51) = 3;
        LODWORD(v50) = (unsigned __int8)v33;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 108, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( STREAM_ITEM_COUNT )", "type doesn't index STREAM_ITEM_COUNT\n\t%i not in [0, %i)", v50, v51) )
          __debugbreak();
      }
      if ( p_pickedItem->type )
      {
        if ( p_pickedItem->type == STREAM_ITEM_MESH )
        {
          v34 = (__int64)p_pickedItem->item + 40;
        }
        else if ( p_pickedItem->type == STREAM_ITEM_GENERIC )
        {
          if ( (*((_BYTE *)p_pickedItem->item + 61) & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 117, ASSERT_TYPE_ASSERT, "(!streamKey->Resident())", (const char *)&queryFormat, "!streamKey->Resident()") )
            __debugbreak();
          v34 = (__int64)p_pickedItem->item + 32;
        }
        else
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 120, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
            __debugbreak();
          v34 = 24i64;
        }
      }
      else
      {
        v34 = (__int64)p_pickedItem->item + 40 * (p_pickedItem->itemPartIndex & 3) + 80;
      }
      v35 = (unsigned __int8)*(_QWORD *)v34;
      if ( v35 >= s_streamReadGlob.lastIssuedXPakIndex && (v35 != s_streamReadGlob.lastIssuedXPakIndex || *(_QWORD *)&p_pickedItem[-2].type >= s_streamReadGlob.lastIssuedXPakOffset) )
        break;
      ++s_streamReadGlob.seekOrderItemQueue.nextIndex;
      ++v31;
      p_pickedItem = (ItemPickInfo *)((char *)p_pickedItem + 3088);
    }
    while ( v31 < v13 );
    nextIndex = s_streamReadGlob.seekOrderItemQueue.nextIndex;
    v37 = s_streamReadGlob.seekOrderItemQueue.nextIndex;
    v38 = s_streamReadGlob.seekOrderItemQueue.nextIndex == s_streamReadGlob.seekOrderItemQueue.count;
    if ( s_streamReadGlob.seekOrderItemQueue.nextIndex == s_streamReadGlob.seekOrderItemQueue.count )
      v37 = 0;
    s_streamReadGlob.seekOrderItemQueue.nextIndex = v37;
    v39 = 0;
    if ( !v38 )
      v39 = nextIndex;
    if ( v39 >= s_streamReadGlob.seekOrderItemQueue.count )
    {
      LODWORD(v51) = s_streamReadGlob.seekOrderItemQueue.count;
      LODWORD(v50) = v39;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2704, ASSERT_TYPE_ASSERT, "(unsigned)( queue.nextIndex ) < (unsigned)( queue.count )", "queue.nextIndex doesn't index queue.count\n\t%i not in [0, %i)", v50, v51) )
        __debugbreak();
    }
  }
  if ( v13 )
  {
    p_numItems = &s_streamReadGlob.seekOrderItemQueue.reads[0].numItems;
    v41 = (StreamSortListFrame *)v13;
    sortListb = (StreamSortListFrame *)v13;
    do
    {
      v42 = 0;
      if ( *p_numItems )
      {
        do
        {
          v43 = Stream_GetStremableBitsForType((StreamItemType)LOBYTE(p_numItems[12 * v42 + 9]));
          v44 = (int)p_numItems[12 * v42 + 7];
          if ( (unsigned int)v44 >= v43->mBitCount )
          {
            LODWORD(v51) = v43->mBitCount;
            LODWORD(v50) = p_numItems[12 * v42 + 7];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 288, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v50, v51) )
              __debugbreak();
          }
          v45 = v43->mLoading;
          if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          v46 = v45[v44 >> 5];
          if ( !_bittest((const int *)&v46, v44 & 0x1F) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2715, ASSERT_TYPE_ASSERT, "(Stream_GetStremableBitsForType( pickedItem.type ).CheckLoading( pickedItem.itemPartIndex ))", (const char *)&queryFormat, "Stream_GetStremableBitsForType( pickedItem.type ).CheckLoading( pickedItem.itemPartIndex )") )
            __debugbreak();
          v47 = Stream_GetStremableBitsForType((StreamItemType)LOBYTE(p_numItems[12 * v42 + 9]));
          v48 = (int)p_numItems[12 * v42 + 7];
          if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 259, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
            __debugbreak();
          if ( (unsigned int)v48 >= v47->mBitCount )
          {
            LODWORD(v51) = v47->mBitCount;
            LODWORD(v50) = v48;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 260, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v50, v51) )
              __debugbreak();
          }
          v49 = v47->mLoading;
          if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          v49[v48 >> 5] &= ~(1 << (v48 & 0x1F));
          ++v42;
        }
        while ( v42 < *p_numItems );
        v41 = sortListb;
      }
      p_numItems += 772;
      v41 = (StreamSortListFrame *)((char *)v41 - 1);
      sortListb = v41;
    }
    while ( v41 );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_UpdateFileBlock_PrepareNextMultiBlockRead
==============
*/
__int64 Stream_UpdateFileBlock_PrepareNextMultiBlockRead(StreamBufferBlockInfo *blockInfo)
{
  unsigned int v2; 
  unsigned int blockCount; 
  StreamBufferBlockInfo *v4; 
  int v5; 
  unsigned int v6; 
  unsigned __int8 v7; 
  __int64 v9; 
  int v10; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateFileBlock_PrepareNextMultiBlockRead");
  if ( blockInfo->readInfo.itemReadInfo[0].pickedItem.item && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2275, ASSERT_TYPE_ASSERT, "(blockInfo->readInfo.itemReadInfo[0].pickedItem.item == nullptr)", (const char *)&queryFormat, "blockInfo->readInfo.itemReadInfo[0].pickedItem.item == nullptr") )
    __debugbreak();
  v2 = 0;
  if ( *(_DWORD *)blockInfo->status )
  {
    v10 = *(_DWORD *)blockInfo->status;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2276, ASSERT_TYPE_ASSERT, "( blockInfo->status ) == ( StreamReadBlockStatus::INVALID )", "%s == %s\n\t%i, %i", "blockInfo->status", "StreamReadBlockStatus::INVALID", v10, 0i64) )
      __debugbreak();
  }
  blockCount = s_streamReadGlob.blockCount;
  if ( s_streamReadGlob.blockCount )
  {
    do
    {
      v4 = &s_streamReadGlob.blocks[v2];
      if ( blockInfo != v4 && *(_DWORD *)v4->status && !v4->cancelled && v4->multiBlockReadInfo.numBlocks > 1 )
      {
        if ( v4->readInfo.numItems != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2288, ASSERT_TYPE_ASSERT, "(otherBlockInfo->readInfo.numItems == 1)", (const char *)&queryFormat, "otherBlockInfo->readInfo.numItems == 1") )
          __debugbreak();
        v5 = Stream_GetLastBlockBeingRead(&s_streamReadGlob.blocks[v2]);
        v6 = v5 + 1;
        if ( v5 + 1 <= 0 )
        {
          LODWORD(v9) = v5 + 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2291, ASSERT_TYPE_ASSERT, "( ( blockToRead > 0 ) )", "( blockToRead ) = %i", v9) )
            __debugbreak();
        }
        if ( v6 < v4->multiBlockReadInfo.numBlocks )
        {
          Stream_UpdateFileBlock_SetupNextMultiBlockRead(blockInfo, v4->readInfo.itemReadInfo, &v4->multiBlockReadInfo, v6);
          v7 = 1;
          goto LABEL_22;
        }
        blockCount = s_streamReadGlob.blockCount;
      }
      ++v2;
    }
    while ( v2 < blockCount );
  }
  v7 = 0;
LABEL_22:
  Sys_ProfEndNamedEvent();
  return v7;
}

/*
==============
Stream_UpdateFileBlock_RequestItemRead
==============
*/
char Stream_UpdateFileBlock_RequestItemRead(const StreamSortListFrame *sortList, StreamDistance maxDistance, bool favorSeekOrder, StreamBufferBlockInfo *blockInfo)
{
  bool v5; 
  int v7; 
  int modifyTimeMs; 
  __int64 v9; 
  int *v10; 
  int v11; 
  bool v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  int integer; 
  const dvar_t *v16; 
  int priority; 
  const XPakEntryInfo *XPakEntryInfo; 
  __int64 readBytes; 
  const XPakEntryInfo *v20; 
  __int64 readOffset; 
  __int64 v22; 
  const char *v23; 
  const char *Name; 
  unsigned __int8 *readBuffer; 
  FileStreamFileID v26; 
  __int64 v27; 
  unsigned int v28; 
  __int64 v29; 
  const char *v30; 
  const char *v31; 
  const XPakEntryInfo *v32; 
  void (__fastcall *callback)(FileStreamRequestID, FileStreamStatus, __int64, void *); 
  int msUntilRequired; 

  if ( *(_DWORD *)blockInfo->status != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1603, ASSERT_TYPE_ASSERT, "( ( blockInfo->status == StreamReadBlockStatus::READYFORREAD ) )", "( blockInfo->status ) = %i", *(_DWORD *)blockInfo->status) )
    __debugbreak();
  if ( *(_DWORD *)blockInfo->schedulerId != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1604, ASSERT_TYPE_ASSERT, "(blockInfo->schedulerId == FileStreamRequestID::INVALID)", (const char *)&queryFormat, "blockInfo->schedulerId == FileStreamRequestID::INVALID") )
    __debugbreak();
  if ( !blockInfo->readBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1605, ASSERT_TYPE_ASSERT, "(blockInfo->readBuffer != nullptr)", (const char *)&queryFormat, "blockInfo->readBuffer != nullptr") )
    __debugbreak();
  if ( blockInfo->cancelled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1606, ASSERT_TYPE_ASSERT, "(!blockInfo->cancelled)", (const char *)&queryFormat, "!blockInfo->cancelled") )
    __debugbreak();
  if ( !Stream_ValidateItemReadXPakEntries(blockInfo) )
    return 0;
  if ( !(unsigned __int8)Stream_IssueBlockAllocs(blockInfo) )
  {
    if ( blockInfo->multiBlockReadInfo.numBlocks == 1 || !blockInfo->multiBlockReadInfo.blockIndex )
      return 0;
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1616, ASSERT_TYPE_ASSERT, "(blockInfo->multiBlockReadInfo.numBlocks == 1 || blockInfo->multiBlockReadInfo.blockIndex == 0)", (const char *)&queryFormat, "blockInfo->multiBlockReadInfo.numBlocks == 1 || blockInfo->multiBlockReadInfo.blockIndex == 0");
    goto LABEL_18;
  }
  v7 = Sys_Milliseconds();
  modifyTimeMs = blockInfo->modifyTimeMs;
  v9 = 0i64;
  v11 = 0;
  if ( modifyTimeMs )
    v11 = v7 - modifyTimeMs;
  v10 = &s_streamReadGlob.cumulativeMsReadStatus[*(int *)blockInfo->status];
  *v10 += v11;
  v12 = (blockInfo->readInfo.readOffset & 0xFFF) == 0;
  blockInfo->modifyTimeMs = v7;
  *(_DWORD *)blockInfo->status = 2;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1623, ASSERT_TYPE_ASSERT, "(IsAligned( blockInfo->readInfo.readOffset, 4096 ))", (const char *)&queryFormat, "IsAligned( blockInfo->readInfo.readOffset, FILE_READ_ALIGNMENT )") )
    __debugbreak();
  if ( (blockInfo->readInfo.readBytes & 0xFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1624, ASSERT_TYPE_ASSERT, "(IsAligned( blockInfo->readInfo.readBytes, 4096 ))", (const char *)&queryFormat, "IsAligned( blockInfo->readInfo.readBytes, FILE_READ_ALIGNMENT )") )
    __debugbreak();
  if ( ((__int64)blockInfo->readBuffer & 0xFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1625, ASSERT_TYPE_ASSERT, "(IsAligned( blockInfo->readBuffer, 4096 ))", (const char *)&queryFormat, "IsAligned( blockInfo->readBuffer, FILE_READ_ALIGNMENT )") )
    __debugbreak();
  v13 = DCONST_DVARBOOL_stream_readWipeBuffersBeforeRead;
  if ( !DCONST_DVARBOOL_stream_readWipeBuffersBeforeRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_readWipeBuffersBeforeRead") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
    memset_0(blockInfo->readBuffer, 205, 0x100000ui64);
  v14 = DCONST_DVARINT_fileStream_readDeadlineMS_XPak;
  if ( !DCONST_DVARINT_fileStream_readDeadlineMS_XPak && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_readDeadlineMS_XPak") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  integer = v14->current.integer;
  v16 = DCONST_DVARINT_fileStream_readPriority_XPak;
  msUntilRequired = integer;
  if ( !DCONST_DVARINT_fileStream_readPriority_XPak && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_readPriority_XPak") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  priority = v16->current.integer;
  XPakEntryInfo = ItemPickInfo::GetXPakEntryInfo(&blockInfo->readInfo.itemReadInfo[0].pickedItem);
  readBytes = blockInfo->readInfo.readBytes;
  v20 = XPakEntryInfo;
  readOffset = blockInfo->readInfo.readOffset;
  if ( !(_DWORD)readBytes )
  {
    v22 = *((_QWORD *)XPakEntryInfo + 3);
    v23 = XPak_IndexToName((unsigned __int8)v22);
    Name = ItemPickInfo::GetName(&blockInfo->readInfo.itemReadInfo[0].pickedItem);
    Com_PrintError(35, "FileStream_AddRequest failed for item %s xpak %s(%d): offset=%zd. Bytes passed was zero!\n", Name, v23, (unsigned __int8)v22, readOffset);
    Stream_ReadVerbosePrint(blockInfo, blockInfo->readInfo.itemReadInfo, "ISSUE FAILED");
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1649, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Zero byte read in Stream_UpdateFileBlock_RequestItemRead, see TTY for more details");
LABEL_18:
    if ( v5 )
      __debugbreak();
    return 0;
  }
  readBuffer = blockInfo->readBuffer;
  v26 = XPak_IndexToFileID(*((unsigned __int8 *)XPakEntryInfo + 24));
  if ( !FileStream_AddRequest(v26, readOffset, readBytes, readBuffer, msUntilRequired, (FileStreamPriority)priority, (void (__fastcall *)(FileStreamRequestID, FileStreamStatus, __int64, void *))Stream_FileStreamReadCallback, blockInfo, (FileStreamRequestID *)blockInfo->schedulerId, FILE_STREAM_TRACK_STREAM) )
  {
    v27 = *((_QWORD *)v20 + 3);
    v28 = blockInfo->readInfo.readBytes;
    v29 = blockInfo->readInfo.readOffset;
    v30 = XPak_IndexToName((unsigned __int8)v27);
    v31 = ItemPickInfo::GetName(&blockInfo->readInfo.itemReadInfo[0].pickedItem);
    LODWORD(callback) = v28;
    Com_PrintError(35, "FileStream_AddRequest failed for item %s xpak %s(%d): offset=%zd, bytes=%u\n", v31, v30, (unsigned __int8)v27, v29, callback);
    Stream_ReadVerbosePrint(blockInfo, blockInfo->readInfo.itemReadInfo, "ISSUE FAILED");
    return 0;
  }
  if ( blockInfo->issuedRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1675, ASSERT_TYPE_ASSERT, "(!blockInfo->issuedRead)", (const char *)&queryFormat, "!blockInfo->issuedRead") )
    __debugbreak();
  blockInfo->issuedRead = 1;
  s_streamReadGlob.lastIssuedXPakIndex = *((unsigned __int8 *)v20 + 24);
  s_streamReadGlob.lastIssuedXPakOffset = blockInfo->readInfo.readOffset;
  Stream_LogRead(blockInfo);
  Stream_DLogAnalytics(blockInfo);
  Stream_ReadVerbosePrint(blockInfo, blockInfo->readInfo.itemReadInfo, "issued");
  s_streamReadGlob.readIssuedStats.sizeRead += blockInfo->readInfo.readBytes;
  ++s_streamReadGlob.readIssuedStats.numReads;
  if ( !blockInfo->multiBlockReadInfo.blockIndex )
    s_streamReadGlob.readIssuedStats.numItemsRead += blockInfo->readInfo.numItems;
  if ( blockInfo->readInfo.numItems )
  {
    do
    {
      v32 = ItemPickInfo::GetXPakEntryInfo(&blockInfo->readInfo.itemReadInfo[v9].pickedItem);
      Stream_Debug_AddToHeatMap(*((unsigned __int8 *)v32 + 24), blockInfo->readInfo.readOffset, blockInfo->readInfo.readBytes, FILE_STREAM_TRACK_STREAM);
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < blockInfo->readInfo.numItems );
  }
  return 1;
}

/*
==============
Stream_UpdateFileBlock_SetupItemRead
==============
*/
__int64 Stream_UpdateFileBlock_SetupItemRead(const ItemPickInfo *pickedItem, const StreamSortListFrame *sortList, StreamBufferReadInfo *readInfo)
{
  const XPakEntryInfo *XPakEntryInfo; 
  __int64 offset; 
  __int64 v8; 
  unsigned int v9; 
  double v10; 
  unsigned int v11; 
  const XPakEntryInfo *v12; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  __int64 v18; 
  __int64 v19; 

  XPakEntryInfo = ItemPickInfo::GetXPakEntryInfo((ItemPickInfo *)pickedItem);
  offset = XPakEntryInfo->offset;
  v8 = offset & 0xFFFFFFFFFFFF8000ui64;
  v9 = truncate_cast<unsigned int,__int64>(((offset + XPakEntryInfo->size + 0x7FFF) & 0xFFFFFFFFFFFF8000ui64) - (offset & 0xFFFFFFFFFFFF8000ui64));
  if ( (v9 & 0x7FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 170, ASSERT_TYPE_ASSERT, "(IsAligned( totalAlignedReadBytes, STREAM_DISK_READ_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( totalAlignedReadBytes, STREAM_DISK_READ_ALIGNMENT )") )
    __debugbreak();
  *(_OWORD *)&readInfo->itemReadInfo[0].pickedItem.item = *(_OWORD *)&pickedItem->item;
  v10 = *(double *)&pickedItem->type;
  readInfo->readOffset = v8;
  v11 = v9;
  readInfo->numItems = 1;
  *(double *)&readInfo->itemReadInfo[0].pickedItem.type = v10;
  if ( v9 > 0x100000 )
    v11 = 0x100000;
  readInfo->readBytes = v11;
  v12 = ItemPickInfo::GetXPakEntryInfo((ItemPickInfo *)pickedItem);
  v13 = v12->offset;
  if ( v13 < readInfo->readOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1550, ASSERT_TYPE_ASSERT, "( xpakEntry->offset ) >= ( readInfo.readOffset )", "%s >= %s\n\t%u, %u", "xpakEntry->offset", "readInfo.readOffset", v13, readInfo->readOffset) )
    __debugbreak();
  Stream_InitItemReadInfo(sortList, pickedItem->type, pickedItem->itemPartIndex, readInfo->itemReadInfo);
  v14 = truncate_cast<unsigned int,__int64>(v12->offset - readInfo->readOffset);
  readInfo->itemReadInfo[0].decompress.srcOffset = v14;
  if ( v14 >= 0x100000 )
  {
    LODWORD(v19) = 0x100000;
    LODWORD(v18) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1556, ASSERT_TYPE_ASSERT, "(unsigned)( itemReadInfo.decompress.srcOffset ) < (unsigned)( STREAM_FILEBUF_BLOCK_SIZE )", "itemReadInfo.decompress.srcOffset doesn't index STREAM_FILEBUF_BLOCK_SIZE\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  v15 = 0x100000 - readInfo->itemReadInfo[0].decompress.srcOffset;
  v16 = truncate_cast<unsigned int,unsigned __int64>(v12->size);
  if ( v15 > v16 )
    v15 = v16;
  readInfo->itemReadInfo[0].decompress.srcBytes = v15;
  return v9;
}

/*
==============
Stream_UpdateFileBlock_SetupMultiItemRead
==============
*/
void Stream_UpdateFileBlock_SetupMultiItemRead(const StreamSortListFrame *sortList, StreamDistance maxDistance, StreamBufferReadInfo *readInfo)
{
  const dvar_t *v7; 
  int integer; 
  const XPakEntryInfo *XPakEntryInfo; 
  signed __int64 v10; 
  signed __int64 v11; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned int mValue; 
  __int64 v16; 
  __int64 v17; 
  unsigned int v18; 
  _DWORD *v19; 
  unsigned int v20; 
  int v21; 
  unsigned int v22; 
  char *v23; 
  unsigned int *v24; 
  int v25; 
  __int64 v26; 
  unsigned int v27; 
  unsigned int *v28; 
  __int64 v29; 
  __int64 v30; 
  const dvar_t *v31; 
  int v32; 
  signed int v33; 
  unsigned int v34; 
  __int64 v35; 
  StreamBufferReadInfo *v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int v41; 
  __int64 v42; 
  __int64 v43; 
  StreamDecompressSrc *p_decompress; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  __int64 v48; 
  unsigned int v49; 
  unsigned int v50; 
  unsigned int v51; 
  unsigned int v52; 
  unsigned int v53; 
  unsigned int v54; 
  __int64 v55; 
  __int64 v56; 
  unsigned int v57; 
  __int64 v58; 
  __int64 v59; 
  unsigned int v60; 
  __int64 v61; 
  __int64 v62; 
  int v63; 
  __int16 v64; 
  __int64 v65; 
  __int64 v66; 
  __int64 v67; 
  __int64 v68; 
  unsigned int v69; 
  unsigned int v70; 
  unsigned int v71; 
  unsigned int v72; 
  StreamDistance result[2]; 
  StreamBufferReadInfo *v74; 
  unsigned int v75; 
  unsigned int v76; 
  int v77; 
  _DWORD *v78; 
  __int64 minOffset; 
  __int64 v80; 
  Stream_UpdateFileBlock_SetupMultiItemRead::__l2::<lambda_df66829bed3e02a437b8219c01dfee38> iterator; 
  ItemReadInfo *itemReadInfo; 
  __int64 v83; 
  int v84; 
  unsigned int v85; 
  __m256i v86; 
  __int128 v87; 
  __int64 v88; 
  unsigned int v89; 
  char v90[1028]; 

  v88 = -2i64;
  v74 = readInfo;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateFileBlock_SetupMultiItemRead");
  if ( readInfo->numItems != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1029, ASSERT_TYPE_ASSERT, "(readInfo->numItems == 1)", (const char *)&queryFormat, "readInfo->numItems == 1") )
    __debugbreak();
  v7 = DCONST_DVARINT_stream_readPacked;
  if ( !DCONST_DVARINT_stream_readPacked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_readPacked") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  integer = v7->current.integer;
  if ( integer )
  {
    if ( readInfo->itemReadInfo[0].pickedItem.type == STREAM_ITEM_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1039, ASSERT_TYPE_ASSERT, "(primaryItem.pickedItem.type != STREAM_ITEM_INVALID)", (const char *)&queryFormat, "primaryItem.pickedItem.type != STREAM_ITEM_INVALID") )
      __debugbreak();
    XPakEntryInfo = ItemPickInfo::GetXPakEntryInfo(&readInfo->itemReadInfo[0].pickedItem);
    v10 = XPakEntryInfo->offset & 0xFFFFFFFFFFFF8000ui64;
    v11 = (XPakEntryInfo->offset + XPakEntryInfo->size + 0x7FFF) & 0xFFFFFFFFFFFF8000ui64;
    if ( v11 - v10 < 0x100000 )
    {
      v12 = v11 - 0x100000;
      v13 = 0;
      if ( v11 <= 0x100000 )
        v12 = 0i64;
      minOffset = v12;
      if ( integer == 1 )
      {
        v14 = v11;
      }
      else
      {
        if ( integer == 2 )
          v12 = v10;
        minOffset = v12;
        v14 = v10 + 0x100000;
      }
      Stream_ComputeMultipleItemReadAheadDistance(result, sortList, maxDistance, &readInfo->itemReadInfo[0].pickedItem);
      mValue = result[0].mValue;
      if ( !sortList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 759, ASSERT_TYPE_ASSERT, "(sortList)", (const char *)&queryFormat, "sortList") )
        __debugbreak();
      if ( readInfo == (StreamBufferReadInfo *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 760, ASSERT_TYPE_ASSERT, "(multipleItemReadInfo)", (const char *)&queryFormat, "multipleItemReadInfo") )
        __debugbreak();
      iterator.readBuilder = (MultiReadBuilder *)sortList;
      itemReadInfo = readInfo->itemReadInfo;
      v16 = minOffset;
      v83 = minOffset;
      v85 = mValue;
      v84 = 1;
      v17 = (__int64)v74;
      Stream_IterateAdjacentItemParts__lambda_df66829bed3e02a437b8219c01dfee38_(v74->itemReadInfo[0].pickedItem.type, v74->itemReadInfo[0].pickedItem.itemPartIndex, minOffset, v14, (Stream_UpdateFileBlock_SetupMultiItemRead::__l2::<lambda_df66829bed3e02a437b8219c01dfee38>)&iterator);
      LODWORD(sortList) = v84;
      v77 = v84;
      if ( v84 != 1 )
      {
        if ( v10 < v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1080, ASSERT_TYPE_ASSERT, "( startOffsetDiskAligned ) >= ( minOffsetDiskAligned )", "%s >= %s\n\t%lli, %lli", "startOffsetDiskAligned", "minOffsetDiskAligned", v10, v16) )
          __debugbreak();
        v18 = truncate_cast<unsigned int,__int64>(v10 - v16);
        v19 = (_DWORD *)(v17 + 24);
        v78 = (_DWORD *)(v17 + 24);
        v20 = v18 + *(_DWORD *)(v17 + 24);
        v75 = v20;
        *(_DWORD *)(v17 + 24) = v20;
        v76 = v20 + *(_DWORD *)(v17 + 28);
        v21 = 0;
        v22 = 1;
        if ( (unsigned int)sortList > 1 )
        {
          v23 = v90;
          v24 = (unsigned int *)(v17 + 72);
          do
          {
            *(_DWORD *)v23 = ++v22;
            v25 = v21 + 1;
            if ( *v24 >= v20 )
              v25 = v21;
            v21 = v25;
            v23 += 4;
            v24 += 12;
          }
          while ( v22 < (unsigned int)sortList );
        }
        *(_DWORD *)&v90[4 * v21 - 4] = 0;
        v26 = (unsigned int)(v21 + 1);
        v89 = v21 + 1;
        v27 = 0;
        if ( (_DWORD)sortList != 1 )
        {
          v28 = &v89;
          v29 = v17;
          do
          {
            v30 = *v28;
            if ( (_DWORD)v30 != (_DWORD)sortList )
            {
              if ( v27 == (_DWORD)v30 )
              {
                LODWORD(v68) = *v28;
                LODWORD(v67) = v27;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1110, ASSERT_TYPE_ASSERT, "( i ) != ( nextIndex )", "%s != %s\n\t%u, %u", "i", "nextIndex", v67, v68) )
                  __debugbreak();
              }
              if ( (unsigned int)v30 >= (unsigned int)sortList )
              {
                LODWORD(v66) = (_DWORD)sortList;
                LODWORD(v65) = v30;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1111, ASSERT_TYPE_ASSERT, "(unsigned)( nextIndex ) < (unsigned)( numItemsToRead )", "nextIndex doesn't index numItemsToRead\n\t%i not in [0, %i)", v65, v66) )
                  __debugbreak();
              }
              if ( *v19 > *(_DWORD *)(v29 + 48 * v30 + 24) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1115, ASSERT_TYPE_ASSERT, "(curItem->decompress.srcOffset <= nextItem->decompress.srcOffset)", (const char *)&queryFormat, "curItem->decompress.srcOffset <= nextItem->decompress.srcOffset") )
                __debugbreak();
            }
            ++v27;
            ++v28;
            v19 += 12;
          }
          while ( v27 < (int)sortList - 1 );
          v13 = 0;
          v19 = v78;
          v26 = v89;
        }
        v31 = DVARINT_stream_readPackedMaxGapKB;
        if ( !DVARINT_stream_readPackedMaxGapKB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_readPackedMaxGapKB") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v31);
        v32 = v31->current.integer;
        if ( v32 )
        {
          v33 = ((v32 << 10) + 0x7FFF) & 0xFFFF8000;
          v34 = 1015808;
          if ( v33 < 1015808 )
            v34 = v33;
          v69 = v34;
          if ( v34 >= 0x100000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1127, ASSERT_TYPE_ASSERT, "(maxGapBetweenItems < STREAM_FILEBUF_BLOCK_SIZE)", (const char *)&queryFormat, "maxGapBetweenItems < STREAM_FILEBUF_BLOCK_SIZE") )
            __debugbreak();
        }
        else
        {
          v69 = 0;
        }
        if ( (_DWORD)v26 )
        {
          v35 = 0i64;
          *(_QWORD *)&result[0].mValue = 0i64;
          v80 = v26;
          v36 = v74;
          do
          {
            v37 = *v19 & 0xFFFF8000;
            v38 = v37 + 0x100000;
            v71 = v37 + 0x100000;
            v39 = *v19 + v19[1];
            *(_DWORD *)&v90[v35 + 764] = v37;
            v40 = (v39 + 0x7FFF) & 0xFFFF8000;
            *(_DWORD *)&v90[v35 + 252] = v40;
            *(_DWORD *)&v90[v35 + 508] = 1;
            v41 = *(_DWORD *)&v90[v35 - 4];
            if ( v41 < (unsigned int)sortList )
            {
              do
              {
                v42 = v41;
                v43 = v41;
                p_decompress = &v36->itemReadInfo[v43].decompress;
                v45 = p_decompress->srcOffset + v36->itemReadInfo[v43].decompress.srcBytes;
                if ( v39 != v45 )
                {
                  if ( v38 < v45 )
                    break;
                  if ( v39 > p_decompress->srcOffset )
                  {
                    LODWORD(v68) = p_decompress->srcOffset;
                    LODWORD(v67) = v39;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1157, ASSERT_TYPE_ASSERT, "( endOffset ) <= ( nextItem.srcOffset )", "%s <= %s\n\t%u, %u", "endOffset", "nextItem.srcOffset", v67, v68) )
                    {
                      __debugbreak();
                      v35 = *(_QWORD *)&result[0].mValue;
                      v40 = *(_DWORD *)&v90[*(_QWORD *)&result[0].mValue + 252];
                    }
                    else
                    {
                      v35 = *(_QWORD *)&result[0].mValue;
                    }
                    v38 = v71;
                  }
                  if ( v69 + ((v39 + 0x7FFF) & 0xFFFF8000) < (p_decompress->srcOffset & 0xFFFF8000) )
                    break;
                }
                v39 = v45;
                v40 = (v45 + 0x7FFF) & 0xFFFF8000;
                *(_DWORD *)&v90[v35 + 252] = v40;
                ++*(_DWORD *)&v90[v35 + 508];
                v41 = *(_DWORD *)&v90[4 * v42 - 4];
              }
              while ( v41 < (unsigned int)sortList );
              v26 = v80;
              v19 = v78;
            }
            if ( v40 < *(_DWORD *)&v90[v35 + 764] )
            {
              LODWORD(v68) = *(_DWORD *)&v90[v35 + 764];
              LODWORD(v67) = v40;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1172, ASSERT_TYPE_ASSERT, "( endOffsets[startIndex] ) >= ( beginOffsets[startIndex] )", "%s >= %s\n\t%u, %u", "endOffsets[startIndex]", "beginOffsets[startIndex]", v67, v68) )
                __debugbreak();
              v35 = *(_QWORD *)&result[0].mValue;
            }
            v19 += 12;
            v78 = v19;
            v35 += 4i64;
            *(_QWORD *)&result[0].mValue = v35;
            v80 = --v26;
          }
          while ( v26 );
          v13 = 0;
        }
        v46 = 0;
        v70 = 0;
        v72 = 0;
        result[0].mValue = 0;
        v47 = 0;
        if ( v89 )
        {
          v48 = 0i64;
          v49 = v75;
          v50 = v76;
          while ( 1 )
          {
            v51 = *(_DWORD *)&v90[v48 + 764];
            v52 = *(_DWORD *)&v90[v48 + 252];
            v53 = *(_DWORD *)&v90[v48 + 508];
            if ( v52 < v51 )
            {
              LODWORD(v68) = *(_DWORD *)&v90[v48 + 764];
              LODWORD(v67) = *(_DWORD *)&v90[v48 + 252];
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1185, ASSERT_TYPE_ASSERT, "( endOffset ) >= ( beginOffset )", "%s >= %s\n\t%u, %u", "endOffset", "beginOffset", v67, v68) )
                __debugbreak();
            }
            if ( v51 > v49 )
            {
              LODWORD(v68) = v49;
              LODWORD(v67) = v51;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1188, ASSERT_TYPE_ASSERT, "( beginOffset ) <= ( primaryItemBeginOffset )", "%s <= %s\n\t%u, %u", "beginOffset", "primaryItemBeginOffset", v67, v68) )
                __debugbreak();
            }
            if ( v50 > v52 )
              break;
            v54 = v52 - v51;
            if ( v53 <= result[0].mValue )
            {
              if ( v53 != result[0].mValue || v54 <= v72 )
                break;
              v46 = v47;
              v70 = v47;
              v72 = v54;
            }
            else
            {
              v46 = v47;
              v70 = v47;
              result[0].mValue = v53;
              v72 = v54;
            }
LABEL_92:
            ++v47;
            v48 += 4i64;
            if ( v47 >= v89 )
            {
              LODWORD(sortList) = v77;
              v13 = 0;
              goto LABEL_94;
            }
          }
          v46 = v70;
          goto LABEL_92;
        }
LABEL_94:
        if ( v46 >= (unsigned int)sortList )
        {
          LODWORD(v66) = (_DWORD)sortList;
          LODWORD(v65) = v46;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1214, ASSERT_TYPE_ASSERT, "(unsigned)( bestStartIndex ) < (unsigned)( numItemsToRead )", "bestStartIndex doesn't index numItemsToRead\n\t%i not in [0, %i)", v65, v66) )
            __debugbreak();
        }
        v55 = v46;
        v56 = *(unsigned int *)&v90[4 * v46 + 764];
        v57 = *(_DWORD *)&v90[4 * v55 + 252];
        if ( v57 < (unsigned int)v56 )
        {
          LODWORD(v68) = v56;
          LODWORD(v67) = *(_DWORD *)&v90[4 * v55 + 252];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1217, ASSERT_TYPE_ASSERT, "( bestEndOffset ) >= ( bestStartOffset )", "%s >= %s\n\t%u, %u", "bestEndOffset", "bestStartOffset", v67, v68) )
            __debugbreak();
        }
        v58 = (__int64)v74;
        if ( (_DWORD)sortList )
        {
          do
          {
            v59 = v58 + 48i64 * v13;
            v60 = *(_DWORD *)(v59 + 24);
            if ( v60 < (unsigned int)v56 || v60 + *(_DWORD *)(v59 + 28) > v57 )
            {
              if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1230, ASSERT_TYPE_ASSERT, "( i != 0 )", "Pruning the requested item in order to pack reads") )
                __debugbreak();
              Stream_ClearItemLoading((const ItemReadInfo *)(v59 + 16));
              v61 = v13 + 1;
              if ( (unsigned int)v61 < (unsigned int)sortList )
                memmove_0((void *)(v59 + 16), (const void *)(v58 + 48 * v61 + 16), 48i64 * ((unsigned int)sortList - v13 - 1));
              sortList = (const StreamSortListFrame *)(unsigned int)((_DWORD)sortList - 1);
              *(_OWORD *)v86.m256i_i8 = 0ui64;
              __asm { vpxor   xmm0, xmm0, xmm0 }
              *(_OWORD *)&v86.m256i_u64[2] = _XMM0;
              v86.m256i_i32[7] = -1;
              LOBYTE(v87) = 3;
              WORD4(v87) = 0;
              v62 = 6i64 * (_QWORD)sortList;
              *(__m256i *)(v58 + 8 * v62 + 16) = v86;
              *(_OWORD *)(v58 + 8 * v62 + 48) = v87;
              --v13;
            }
            else
            {
              *(_DWORD *)(v59 + 24) = v60 - v56;
            }
            ++v13;
          }
          while ( v13 < (unsigned int)sortList );
        }
        *(_DWORD *)(v58 + 12) = (_DWORD)sortList;
        if ( !(_DWORD)sortList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1249, ASSERT_TYPE_ASSERT, "(numItemsToRead > 0)", (const char *)&queryFormat, "numItemsToRead > 0") )
          __debugbreak();
        v63 = v57 - v56;
        *(_DWORD *)(v58 + 8) = v63;
        if ( (v63 & 0x7FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1252, ASSERT_TYPE_ASSERT, "(IsAligned( readInfo->readBytes, STREAM_DISK_READ_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( readInfo->readBytes, STREAM_DISK_READ_ALIGNMENT )") )
          __debugbreak();
        if ( *(_DWORD *)(v58 + 8) > 0x100000u )
        {
          LODWORD(v68) = 0x100000;
          LODWORD(v67) = *(_DWORD *)(v58 + 8);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1253, ASSERT_TYPE_ASSERT, "( readInfo->readBytes ) <= ( STREAM_FILEBUF_BLOCK_SIZE )", "%s <= %s\n\t%u, %u", "readInfo->readBytes", "STREAM_FILEBUF_BLOCK_SIZE", v67, v68) )
            __debugbreak();
        }
        v64 = v56 + minOffset;
        *(_QWORD *)v58 = v56 + minOffset;
        if ( (v64 & 0x7FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1256, ASSERT_TYPE_ASSERT, "(IsAligned( readInfo->readOffset, STREAM_DISK_READ_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( readInfo->readOffset, STREAM_DISK_READ_ALIGNMENT )") )
          __debugbreak();
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_UpdateFileBlock_SetupNextMultiBlockRead
==============
*/
void Stream_UpdateFileBlock_SetupNextMultiBlockRead(StreamBufferBlockInfo *blockInfo, const ItemReadInfo *itemReadInfo, const StreamBufferBlockInfo::MultiBlockReadInfo *multiBlockReadInfo, unsigned int blockToRead)
{
  const XPakEntryInfo *XPakEntryInfo; 
  const XPakEntryInfo *v7; 
  unsigned __int64 v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  int v14; 
  int v15; 
  int modifyTimeMs; 
  int *v17; 

  blockInfo->readInfo.itemReadInfo[0] = *itemReadInfo;
  blockInfo->readInfo.numItems = 1;
  blockInfo->multiBlockReadInfo.blockIndex = blockToRead;
  blockInfo->multiBlockReadInfo.numBlocks = multiBlockReadInfo->numBlocks;
  blockInfo->multiBlockReadInfo.isWriteAddressLocked = multiBlockReadInfo->isWriteAddressLocked;
  XPakEntryInfo = ItemPickInfo::GetXPakEntryInfo(&blockInfo->readInfo.itemReadInfo[0].pickedItem);
  v7 = ItemPickInfo::GetXPakEntryInfo(&blockInfo->readInfo.itemReadInfo[0].pickedItem);
  v8 = v7->offset & 0xFFFFFFFFFFFF8000ui64;
  v9 = truncate_cast<unsigned int,__int64>(((v7->offset + v7->size + 0x7FFF) & 0xFFFFFFFFFFFF8000ui64) - v8);
  if ( (v9 & 0x7FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 170, ASSERT_TYPE_ASSERT, "(IsAligned( totalAlignedReadBytes, STREAM_DISK_READ_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( totalAlignedReadBytes, STREAM_DISK_READ_ALIGNMENT )") )
    __debugbreak();
  v10 = blockToRead << 20;
  v11 = v9 - v10;
  v12 = v8 + v10;
  blockInfo->readInfo.readOffset = v12;
  if ( v11 > 0x100000 )
    v11 = 0x100000;
  blockInfo->readInfo.readBytes = v11;
  v13 = truncate_cast<unsigned int,unsigned __int64>(XPakEntryInfo->offset + XPakEntryInfo->size - v12);
  if ( v13 > 0x100000 )
    v13 = 0x100000;
  v14 = 0;
  blockInfo->readInfo.itemReadInfo[0].decompress.srcOffset = 0;
  blockInfo->readInfo.itemReadInfo[0].decompress.srcBytes = v13;
  *(_DWORD *)blockInfo->schedulerId = -1;
  *(_WORD *)&blockInfo->issuedRead = 0;
  v15 = Sys_Milliseconds();
  modifyTimeMs = blockInfo->modifyTimeMs;
  if ( modifyTimeMs )
    v14 = v15 - modifyTimeMs;
  v17 = &s_streamReadGlob.cumulativeMsReadStatus[*(int *)blockInfo->status];
  *v17 += v14;
  blockInfo->modifyTimeMs = v15;
  *(_DWORD *)blockInfo->status = 1;
}

/*
==============
Stream_UpdateFileBlock_SetupNextReadBySeekOrder
==============
*/
char Stream_UpdateFileBlock_SetupNextReadBySeekOrder(StreamBufferBlockInfo *blockInfo, const StreamSortListFrame *sortList, StreamDistance maxDistance)
{
  unsigned int count; 
  unsigned int nextIndex; 
  StreamBufferReadInfo *v7; 
  char ImagePartNow; 
  StreamableBits *StremableBitsForType; 
  __int64 itemPartIndex; 
  StreamableBits *v12; 
  unsigned int *mLoading; 
  int v14; 
  __int64 v15; 
  unsigned int *v16; 
  const XPakEntryInfo *XPakEntryInfo; 
  unsigned int v18; 
  __int64 v19; 
  unsigned int v20; 
  char *v21; 
  char MeshNow; 
  StreamableBits *v23; 
  __int64 v24; 
  StreamableBits *v25; 
  unsigned int *v26; 
  int v27; 
  bool v28; 
  __int64 v29; 
  unsigned int *v30; 
  __int64 numItems; 
  __int64 v32; 
  __int64 v33; 
  int v34; 

  count = s_streamReadGlob.seekOrderItemQueue.count;
  if ( !s_streamReadGlob.seekOrderItemQueue.count )
    return 0;
  while ( 1 )
  {
    if ( count == s_streamReadGlob.seekOrderItemQueue.processedCount )
    {
      Stream_UpdateFileBlock_PickNextItemsToReadInSeekOrder(sortList, maxDistance);
      count = s_streamReadGlob.seekOrderItemQueue.count;
      if ( !s_streamReadGlob.seekOrderItemQueue.count )
        return 0;
    }
    if ( !count )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2776, ASSERT_TYPE_ASSERT, "(queue.count > 0)", (const char *)&queryFormat, "queue.count > 0") )
        __debugbreak();
      count = s_streamReadGlob.seekOrderItemQueue.count;
    }
    if ( s_streamReadGlob.seekOrderItemQueue.processedCount < count )
      break;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2777, ASSERT_TYPE_ASSERT, "(queue.processedCount < queue.count)", (const char *)&queryFormat, "queue.processedCount < queue.count") )
      __debugbreak();
    count = s_streamReadGlob.seekOrderItemQueue.count;
    if ( s_streamReadGlob.seekOrderItemQueue.processedCount != s_streamReadGlob.seekOrderItemQueue.count )
      break;
LABEL_24:
    if ( !count )
      return 0;
  }
  while ( 1 )
  {
    ++s_streamReadGlob.seekOrderItemQueue.processedCount;
    nextIndex = s_streamReadGlob.seekOrderItemQueue.nextIndex;
    if ( s_streamReadGlob.seekOrderItemQueue.nextIndex >= count )
    {
      LODWORD(v33) = count;
      LODWORD(v32) = s_streamReadGlob.seekOrderItemQueue.nextIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2783, ASSERT_TYPE_ASSERT, "(unsigned)( queue.nextIndex ) < (unsigned)( queue.count )", "queue.nextIndex doesn't index queue.count\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
      count = s_streamReadGlob.seekOrderItemQueue.count;
      nextIndex = s_streamReadGlob.seekOrderItemQueue.nextIndex;
    }
    v7 = &s_streamReadGlob.seekOrderItemQueue.reads[nextIndex];
    s_streamReadGlob.seekOrderItemQueue.nextIndex = (nextIndex + 1) % count;
    if ( v7->itemReadInfo[0].pickedItem.type == STREAM_ITEM_IMAGE )
    {
      ImagePartNow = Stream_ShouldReadImagePartNow(sortList, v7->itemReadInfo[0].pickedItem.itemPartIndex);
      goto LABEL_22;
    }
    if ( v7->itemReadInfo[0].pickedItem.type == STREAM_ITEM_MESH )
    {
      ImagePartNow = Stream_ShouldReadMeshNow(sortList, v7->itemReadInfo[0].pickedItem.itemPartIndex);
      goto LABEL_22;
    }
    if ( v7->itemReadInfo[0].pickedItem.type != STREAM_ITEM_GENERIC )
      break;
    ImagePartNow = Stream_ShouldReadGenericNow(sortList, v7->itemReadInfo[0].pickedItem.itemPartIndex);
LABEL_22:
    if ( ImagePartNow )
      goto LABEL_28;
    count = s_streamReadGlob.seekOrderItemQueue.count;
    if ( s_streamReadGlob.seekOrderItemQueue.processedCount == s_streamReadGlob.seekOrderItemQueue.count )
      goto LABEL_24;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2753, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
    __debugbreak();
LABEL_28:
  StremableBitsForType = Stream_GetStremableBitsForType(v7->itemReadInfo[0].pickedItem.type);
  itemPartIndex = (int)v7->itemReadInfo[0].pickedItem.itemPartIndex;
  v12 = StremableBitsForType;
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 275, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
    __debugbreak();
  if ( (unsigned int)itemPartIndex >= v12->mBitCount )
  {
    LODWORD(v33) = v12->mBitCount;
    LODWORD(v32) = itemPartIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 276, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v32, v33) )
      __debugbreak();
  }
  mLoading = v12->mLoading;
  if ( !mLoading && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v14 = 1 << (itemPartIndex & 0x1F);
  v15 = itemPartIndex >> 5;
  if ( (v14 & mLoading[v15]) != 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2790, ASSERT_TYPE_ASSERT, "(Stream_GetStremableBitsForType( primaryPickedItem.type ).SetLoadingConditional( primaryPickedItem.itemPartIndex ))", (const char *)&queryFormat, "Stream_GetStremableBitsForType( primaryPickedItem.type ).SetLoadingConditional( primaryPickedItem.itemPartIndex )") )
      __debugbreak();
  }
  else
  {
    v16 = v12->mLoading;
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    v16[v15] |= v14;
  }
  XPakEntryInfo = ItemPickInfo::GetXPakEntryInfo(&v7->itemReadInfo[0].pickedItem);
  v18 = truncate_cast<unsigned int,__int64>(((XPakEntryInfo->offset + XPakEntryInfo->size + 0x7FFF) & 0xFFFFFFFFFFFF8000ui64) - (XPakEntryInfo->offset & 0xFFFFFFFFFFFF8000ui64));
  v19 = v18;
  if ( (v18 & 0x7FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 170, ASSERT_TYPE_ASSERT, "(IsAligned( totalAlignedReadBytes, STREAM_DISK_READ_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( totalAlignedReadBytes, STREAM_DISK_READ_ALIGNMENT )") )
    __debugbreak();
  v20 = 1;
  LOBYTE(v34) = 0;
  *(double *)&blockInfo->multiBlockReadInfo.blockIndex = 0i64;
  *(_DWORD *)&blockInfo->multiBlockReadInfo.isWriteAddressLocked = v34;
  blockInfo->multiBlockReadInfo.numBlocks = (unsigned __int64)(v19 + 0xFFFFF) >> 20;
  blockInfo->readInfo.readOffset = v7->readOffset;
  blockInfo->readInfo.readBytes = v7->readBytes;
  *(__m256i *)&blockInfo->readInfo.itemReadInfo[0].updateId = *(__m256i *)&v7->itemReadInfo[0].updateId;
  *(_OWORD *)&blockInfo->readInfo.itemReadInfo[0].pickedItem.type = *(_OWORD *)&v7->itemReadInfo[0].pickedItem.type;
  blockInfo->readInfo.numItems = 1;
  if ( v7->numItems > 1 )
  {
    while ( 2 )
    {
      v21 = (char *)v7 + 48 * v20;
      if ( v21[48] )
      {
        if ( v21[48] == 1 )
        {
          MeshNow = Stream_ShouldReadMeshNow(sortList, *((_DWORD *)v21 + 10));
        }
        else
        {
          if ( v21[48] != 2 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2753, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
              __debugbreak();
LABEL_57:
            v23 = Stream_GetStremableBitsForType((StreamItemType)v21[48]);
            v24 = *((int *)v21 + 10);
            v25 = v23;
            if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 275, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
              __debugbreak();
            if ( (unsigned int)v24 >= v25->mBitCount )
            {
              LODWORD(v33) = v25->mBitCount;
              LODWORD(v32) = v24;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 276, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v32, v33) )
                __debugbreak();
            }
            v26 = v25->mLoading;
            if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
              __debugbreak();
            v27 = 1 << (v24 & 0x1F);
            v28 = (v27 & v26[v24 >> 5]) == 0;
            v29 = v24 >> 5;
            if ( v28 )
            {
              v30 = v25->mLoading;
              if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
                __debugbreak();
              v30[v29] |= v27;
            }
            else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2811, ASSERT_TYPE_ASSERT, "(Stream_GetStremableBitsForType( pickedItem.type ).SetLoadingConditional( pickedItem.itemPartIndex ))", (const char *)&queryFormat, "Stream_GetStremableBitsForType( pickedItem.type ).SetLoadingConditional( pickedItem.itemPartIndex )") )
            {
              __debugbreak();
            }
            numItems = blockInfo->readInfo.numItems;
            *(__m256i *)&blockInfo->readInfo.itemReadInfo[numItems].updateId = *(__m256i *)(v21 + 16);
            *(_OWORD *)&blockInfo->readInfo.itemReadInfo[numItems].pickedItem.type = *((_OWORD *)v21 + 3);
            ++blockInfo->readInfo.numItems;
LABEL_74:
            if ( ++v20 >= v7->numItems )
              return 1;
            continue;
          }
          MeshNow = Stream_ShouldReadGenericNow(sortList, *((_DWORD *)v21 + 10));
        }
      }
      else
      {
        MeshNow = Stream_ShouldReadImagePartNow(sortList, *((_DWORD *)v21 + 10));
      }
      break;
    }
    if ( MeshNow )
      goto LABEL_57;
    goto LABEL_74;
  }
  return 1;
}

/*
==============
Stream_UpdateFileBlock_SetupNextReadByStreamDistance
==============
*/
__int64 Stream_UpdateFileBlock_SetupNextReadByStreamDistance(StreamBufferBlockInfo *blockInfo, const StreamSortListFrame *sortList, StreamDistance maxDistance, int (*streamablePickIndices)[3])
{
  int (*v4)[3]; 
  float meshBoost; 
  unsigned __int8 v9; 
  StreamItemType lastPickTypeByDistance; 
  int v11; 
  StreamItemType v12; 
  StreamableBits *StremableBitsForType; 
  unsigned int *mLoading; 
  int v15; 
  __int64 v16; 
  unsigned __int8 v17; 
  unsigned int *v19; 
  unsigned int updated; 
  unsigned __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  ItemPickInfo pickedItem; 
  ItemPickInfo result; 

  v4 = streamablePickIndices;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateFileBlock_SetupNextReadByStreamDistance");
  meshBoost = streamFrontendGlob->meshBoost;
  if ( meshBoost > 0.0 )
  {
    v9 = rand();
    lastPickTypeByDistance = s_streamReadGlob.lastPickTypeByDistance;
    if ( v9 < (int)(float)(meshBoost * 255.0) )
      lastPickTypeByDistance = STREAM_ITEM_MESH;
    s_streamReadGlob.lastPickTypeByDistance = lastPickTypeByDistance;
  }
  v11 = 0;
  while ( 1 )
  {
    v12 = s_streamReadGlob.lastPickTypeByDistance;
    pickedItem = *pickFns_0[(unsigned __int8)s_streamReadGlob.lastPickTypeByDistance](&result, sortList, &(*v4)[(unsigned __int8)s_streamReadGlob.lastPickTypeByDistance], maxDistance);
    s_streamReadGlob.lastPickTypeByDistance = ((unsigned int)(unsigned __int8)s_streamReadGlob.lastPickTypeByDistance + 1) % 3;
    if ( pickedItem.item )
      break;
LABEL_21:
    if ( (unsigned int)++v11 >= 3 )
    {
      v17 = 0;
      goto LABEL_23;
    }
  }
  if ( v12 != pickedItem.type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2857, ASSERT_TYPE_ASSERT, "(pickType == pickedItem.type)", (const char *)&queryFormat, "pickType == pickedItem.type") )
    __debugbreak();
  StremableBitsForType = Stream_GetStremableBitsForType(pickedItem.type);
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 275, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
    __debugbreak();
  if ( pickedItem.itemPartIndex >= StremableBitsForType->mBitCount )
  {
    LODWORD(v23) = StremableBitsForType->mBitCount;
    LODWORD(v22) = pickedItem.itemPartIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 276, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v22, v23) )
      __debugbreak();
  }
  mLoading = StremableBitsForType->mLoading;
  if ( !mLoading && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v15 = 1 << (pickedItem.itemPartIndex & 0x1F);
  v16 = (__int64)(int)pickedItem.itemPartIndex >> 5;
  if ( (v15 & mLoading[v16]) != 0 )
  {
    v4 = streamablePickIndices;
    goto LABEL_21;
  }
  v19 = StremableBitsForType->mLoading;
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v19[v16] |= v15;
  updated = Stream_UpdateFileBlock_SetupItemRead(&pickedItem, sortList, &blockInfo->readInfo);
  pickedItem.item = NULL;
  LOBYTE(pickedItem.itemPartIndex) = 0;
  *(double *)&blockInfo->multiBlockReadInfo.blockIndex = 0i64;
  *(_DWORD *)&blockInfo->multiBlockReadInfo.isWriteAddressLocked = pickedItem.itemPartIndex;
  v21 = ((unsigned __int64)updated + 0xFFFFF) >> 20;
  blockInfo->multiBlockReadInfo.numBlocks = v21;
  if ( updated < 0x100000 )
  {
    if ( (_DWORD)v21 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2869, ASSERT_TYPE_ASSERT, "(blockInfo->multiBlockReadInfo.numBlocks == 1)", (const char *)&queryFormat, "blockInfo->multiBlockReadInfo.numBlocks == 1") )
      __debugbreak();
    Stream_UpdateFileBlock_SetupMultiItemRead(sortList, maxDistance, &blockInfo->readInfo);
  }
  v17 = 1;
LABEL_23:
  Sys_ProfEndNamedEvent();
  return v17;
}

/*
==============
Stream_UpdateFileBlocks
==============
*/
void Stream_UpdateFileBlocks(const StreamSortListFrame *sortList)
{
  const dvar_t *v2; 
  bool enabled; 
  const dvar_t *v4; 
  float value; 
  StreamDistance v6; 
  unsigned int v7; 
  __int64 v8; 
  StreamBufferBlockInfo *v9; 
  int v10; 
  int v11; 
  char v12; 
  char v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  int modifyTimeMs; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  __int64 v27; 
  int streamablePickIndices[3]; 

  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2917, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  v2 = DVARBOOL_stream_readFavorSeekOrder;
  if ( !DVARBOOL_stream_readFavorSeekOrder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_readFavorSeekOrder") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  enabled = v2->current.enabled;
  v4 = DCONST_DVARFLT_stream_readMaxDistance;
  if ( !DCONST_DVARFLT_stream_readMaxDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_readMaxDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  value = v4->current.value;
  if ( value <= 0.0 )
  {
    v6.mValue = 16711679;
  }
  else
  {
    if ( (LODWORD(value) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_distance.h", 188, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
      __debugbreak();
    v6.mValue = LODWORD(value) >> 7;
  }
  if ( enabled && Stream_IsEnabled() )
  {
    if ( sortList->sortListBuildIndex != s_streamReadGlob.lastSortListBuildIndex )
    {
      Stream_UpdateFileBlock_PickNextItemsToReadInSeekOrder(sortList, v6);
      s_streamReadGlob.lastSortListBuildIndex = sortList->sortListBuildIndex;
    }
  }
  else
  {
    s_streamReadGlob.seekOrderItemQueue.totalAddedCount += s_streamReadGlob.seekOrderItemQueue.count;
    s_streamReadGlob.seekOrderItemQueue.totalProcessedCount += s_streamReadGlob.seekOrderItemQueue.processedCount;
    *(_QWORD *)&s_streamReadGlob.seekOrderItemQueue.count = 0i64;
    s_streamReadGlob.seekOrderItemQueue.processedCount = 0;
    s_streamReadGlob.lastSortListBuildIndex = 0;
  }
  v7 = 0;
  streamablePickIndices[0] = sortList->imageSortList.mCount - 1;
  streamablePickIndices[1] = sortList->meshSortList.mCount - 1;
  for ( streamablePickIndices[2] = sortList->genericSortList.mCount - 1; v7 < s_streamReadGlob.blockCount; ++v7 )
  {
    v8 = v7;
    v9 = &s_streamReadGlob.blocks[v8];
    if ( !s_streamReadGlob.blocks[v8].readBuffer && (*(_DWORD *)s_streamReadGlob.blocks[v8].status || Stream_IsEnabled()) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2942, ASSERT_TYPE_ASSERT, "(thisBlock->readBuffer || ( thisBlock->status == StreamReadBlockStatus::INVALID && !Stream_IsEnabled() ))", (const char *)&queryFormat, "thisBlock->readBuffer || ( thisBlock->status == StreamReadBlockStatus::INVALID && !Stream_IsEnabled() )") )
      __debugbreak();
    v10 = *(_DWORD *)v9->status;
    v11 = v10;
    if ( v10 == 5 )
    {
      Stream_ProcessFinishedBlock(sortList, v9);
      v10 = *(_DWORD *)v9->status;
      v11 = v10;
    }
    switch ( v10 )
    {
      case 0:
        if ( (unsigned __int8)Stream_UpdateFileBlock_PrepareNextMultiBlockRead(v9) )
        {
          v12 = 1;
        }
        else if ( Stream_IsEnabled() )
        {
          Stream_UpdateStreamingQuality_Image(sortList);
          if ( Stream_IsYielding() )
          {
            v12 = 0;
          }
          else
          {
            if ( enabled )
              v13 = Stream_UpdateFileBlock_SetupNextReadBySeekOrder(v9, sortList, v6);
            else
              v13 = Stream_UpdateFileBlock_SetupNextReadByStreamDistance(v9, sortList, v6, (int (*)[3])streamablePickIndices);
            v12 = v13;
          }
        }
        else
        {
          v12 = 0;
        }
        v14 = Sys_Milliseconds();
        v15 = *(int *)v9->status;
        v16 = v14;
        modifyTimeMs = v9->modifyTimeMs;
        v18 = s_streamReadGlob.cumulativeMsReadStatus[v15];
        if ( v12 )
        {
          v22 = v14 - modifyTimeMs;
          v23 = 0;
          if ( modifyTimeMs )
            v23 = v22;
          s_streamReadGlob.cumulativeMsReadStatus[v15] = v18 + v23;
          v9->modifyTimeMs = v16;
          *(_DWORD *)v9->status = 1;
          goto $LN28_49;
        }
        v19 = v14;
        v20 = 0;
        v21 = v19 - modifyTimeMs;
        if ( modifyTimeMs )
          v20 = v21;
        s_streamReadGlob.cumulativeMsReadStatus[v15] = v18 + v20;
        v9->modifyTimeMs = v16;
        *(_DWORD *)v9->status = 0;
        break;
      case 1:
$LN28_49:
        if ( v9->cancelled )
        {
          v24 = Sys_Milliseconds();
          v25 = v9->modifyTimeMs;
          v26 = 0;
          if ( v25 )
            v26 = v24 - v25;
          s_streamReadGlob.cumulativeMsReadStatus[*(int *)v9->status] += v26;
          v9->modifyTimeMs = v24;
          *(_DWORD *)v9->status = 5;
        }
        else if ( !Stream_UpdateFileBlock_RequestItemRead(sortList, v6, enabled, v9) )
        {
          v9->cancelled = 1;
          Stream_SetStatus(v9, 5);
        }
        break;
      case 2:
      case 4:
      case 5:
        continue;
      case 3:
        if ( Stream_UpdateFileBlock_IsAllocDone(v9) )
          Stream_QueueDecompressCommand(v7);
        break;
      default:
        LODWORD(v27) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2995, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unexpected imageBufferBlock status: %d\n", v27) )
          __debugbreak();
        break;
    }
  }
}

/*
==============
Stream_UpdateFileBlocksCmd
==============
*/
void Stream_UpdateFileBlocksCmd(const void *const data)
{
  bool v2; 
  __int64 sortListRead; 
  __int64 v4; 
  volatile int *v5; 
  volatile int *p_isEndingUpdateFrame; 
  volatile signed __int32 *v7; 
  volatile signed __int32 *v8; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_UpdateFileBlocksCmd");
  Sys_ProfBeginNamedEvent(0xFF00FFFF, "StreamAlloc_Lock");
  v2 = Sys_TryEnterCriticalSection(CRITSECT_STREAM_ALLOC);
  Sys_ProfEndNamedEvent();
  if ( !v2 )
  {
LABEL_22:
    Sys_AddWorkerCmd(WRKCMD_STREAM_UPDATE_FILE_BLOCKS, data);
    goto LABEL_30;
  }
  sortListRead = streamFrontendGlob->sortListRead;
  if ( (unsigned int)sortListRead >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 3262, ASSERT_TYPE_ASSERT, "(unsigned)( sortListRead ) < (unsigned)( ( sizeof( *array_counter( streamFrontendGlob->sortLists ) ) + 0 ) )", "sortListRead doesn't index ARRAY_COUNT( streamFrontendGlob->sortLists )\n\t%i not in [0, %i)", streamFrontendGlob->sortListRead, 2) )
    __debugbreak();
  v4 = sortListRead;
  v5 = &streamFrontendGlob->sortListReadLock[sortListRead];
  if ( ((unsigned __int8)v5 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v5) )
    __debugbreak();
  if ( _InterlockedIncrement(v5) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 3263, ASSERT_TYPE_ASSERT, "((Sys_InterlockedIncrement( &streamFrontendGlob->sortListReadLock[sortListRead] )) == (1))", (const char *)&queryFormat, "Sys_InterlockedIncrement( &streamFrontendGlob->sortListReadLock[sortListRead] ) == 1") )
    __debugbreak();
  p_isEndingUpdateFrame = &streamFrontendGlob->isEndingUpdateFrame;
  if ( (((_BYTE)streamFrontendGlob + 60) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &streamFrontendGlob->isEndingUpdateFrame) )
    __debugbreak();
  if ( *(int *)p_isEndingUpdateFrame >= 1 )
  {
    v7 = &streamFrontendGlob->sortListReadLock[v4];
    if ( ((unsigned __int8)v7 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &streamFrontendGlob->sortListReadLock[v4]) )
      __debugbreak();
    if ( _InterlockedExchangeAdd(v7, 0xFFFFFFFF) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 3269, ASSERT_TYPE_ASSERT, "((Sys_InterlockedDecrement( &streamFrontendGlob->sortListReadLock[sortListRead] )) == (0))", (const char *)&queryFormat, "Sys_InterlockedDecrement( &streamFrontendGlob->sortListReadLock[sortListRead] ) == 0") )
      __debugbreak();
    Sys_LeaveCriticalSection(CRITSECT_STREAM_ALLOC);
    goto LABEL_22;
  }
  Stream_UpdateFileBlocks(&streamFrontendGlob->sortLists[v4]);
  v8 = &streamFrontendGlob->sortListReadLock[v4];
  if ( ((unsigned __int8)v8 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &streamFrontendGlob->sortListReadLock[v4]) )
    __debugbreak();
  if ( _InterlockedExchangeAdd(v8, 0xFFFFFFFF) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 3280, ASSERT_TYPE_ASSERT, "((Sys_InterlockedDecrement( &streamFrontendGlob->sortListReadLock[sortListRead] )) == (0))", (const char *)&queryFormat, "Sys_InterlockedDecrement( &streamFrontendGlob->sortListReadLock[sortListRead] ) == 0") )
    __debugbreak();
  Sys_LeaveCriticalSection(CRITSECT_STREAM_ALLOC);
LABEL_30:
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_UpdateStreamingQuality_Image
==============
*/
void Stream_UpdateStreamingQuality_Image(const StreamSortListFrame *sortList)
{
  __int64 mCount; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  const StreamSortListFrame *v5; 
  unsigned int mValue; 
  __int128 v7; 
  __int128 v9; 
  StreamFrontendGlob *v11; 
  unsigned int v12; 
  double v13; 
  const dvar_t *v14; 
  float value; 
  const dvar_t *v16; 
  float v17; 
  const StreamSortListFrame *v18; 
  const StreamSortListFrame **v19; 
  FastCriticalSectionScopeRead v20; 

  v18 = sortList;
  if ( !sortList->imageSortList.mCount )
  {
    if ( streamFrontendGlob->sortListValid )
    {
      streamFrontendGlob->imageStreamingQuality = 1.8446674e19;
      streamFrontendGlob->imageStreamingQualitySmoothed = 1.8446674e19;
    }
    return;
  }
  v19 = &v18;
  FastCriticalSectionScopeRead::FastCriticalSectionScopeRead(&v20, &sortList->imageSortList.mCS);
  mCount = sortList->imageSortList.mCount;
  if ( mCount > sortList->imageSortList.mSortedRight )
  {
    v3 = *(_QWORD *)&sortList->imageSortList.mActive[2 * mCount + 10238];
    v4 = v3 >> 45;
    if ( (v3 & 0x80000000000i64) != 0 )
    {
      streamFrontendGlob->imageStreamingQuality = 1.8446674e19;
    }
    else
    {
      v5 = v18;
      if ( (unsigned int)v4 >= 0x50000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v4, 327680) )
        __debugbreak();
      mValue = v5->imagePartDistance.mDistances[(unsigned int)v4].mValue;
      LODWORD(v19) = mValue;
      if ( mValue == -1 )
      {
        v7 = LODWORD(FLOAT_3_4027977e38);
      }
      else
      {
        LODWORD(v19) = mValue << 7;
        v7 = mValue << 7;
      }
      v9 = v7;
      *(float *)&v9 = fsqrt(*(float *)&v7);
      _XMM0 = v9;
      __asm { vmaxss  xmm1, xmm0, cs:__real@20000000 }
      streamFrontendGlob->imageStreamingQuality = *(float *)&_XMM1;
    }
  }
  FastCriticalSectionScopeRead::~FastCriticalSectionScopeRead(&v20);
  if ( !CL_TransientsWorldMP_UseLowAlwaysloadedFlagging() && !CL_TransientsWorldMP_IsBRMode() )
  {
    v11 = streamFrontendGlob;
LABEL_17:
    v11->imageStreamingQualitySmoothed = v11->imageStreamingQuality;
    return;
  }
  v11 = streamFrontendGlob;
  if ( !streamFrontendGlob )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 2307, ASSERT_TYPE_ASSERT, "(streamFrontendGlob)", (const char *)&queryFormat, "streamFrontendGlob") )
      __debugbreak();
    v11 = streamFrontendGlob;
  }
  if ( v11->imageStreamingQualitySmoothed <= v11->imageStreamingQuality )
    goto LABEL_17;
  v12 = StreamUpdateScheduler::FrameIndex(&v11->globalScheduler);
  v11 = streamFrontendGlob;
  if ( streamFrontendGlob->resetQualitySmoothingFrame >= v12 )
    goto LABEL_17;
  v13 = CL_StreamViews_MaxParametricVelocity();
  v14 = DVARFLT_stream_smoothingFactorMovingFullSpeed;
  if ( !DVARFLT_stream_smoothingFactorMovingFullSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_smoothingFactorMovingFullSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  value = v14->current.value;
  v16 = DVARFLT_stream_smoothingFactorNotMoving;
  if ( !DVARFLT_stream_smoothingFactorNotMoving && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_smoothingFactorNotMoving") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  v17 = 1.0 / (float)((float)((float)(1.0 - *(float *)&v13) * v16->current.value) + (float)(value * *(float *)&v13));
  streamFrontendGlob->imageStreamingQualitySmoothed = (float)(v17 * streamFrontendGlob->imageStreamingQuality) + (float)((float)(1.0 - v17) * streamFrontendGlob->imageStreamingQualitySmoothed);
}

/*
==============
Stream_ValidateItemReadXPakEntries
==============
*/
char Stream_ValidateItemReadXPakEntries(const StreamBufferBlockInfo *blockInfo)
{
  StreamBufferReadInfo *p_readInfo; 
  unsigned int v3; 
  const XPakEntryInfo *XPakEntryInfo; 
  unsigned int v5; 
  char *v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int8 v10; 
  __int64 v11; 
  __int64 v12; 
  const char *Name; 
  const char *v15; 
  __int64 v16; 
  __int64 v17; 

  p_readInfo = &blockInfo->readInfo;
  if ( !blockInfo->readInfo.numItems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1566, ASSERT_TYPE_ASSERT, "(readInfo.numItems > 0)", (const char *)&queryFormat, "readInfo.numItems > 0") )
    __debugbreak();
  if ( (p_readInfo->readBytes & 0x7FFF) != 0 )
  {
    LODWORD(v16) = p_readInfo->readBytes;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1567, ASSERT_TYPE_ASSERT, "( ( IsAligned( readInfo.readBytes, STREAM_DISK_READ_ALIGNMENT ) ) )", "( readInfo.readBytes ) = %u", v16) )
      __debugbreak();
  }
  if ( p_readInfo->readBytes - 1 > 0xFFFFF )
  {
    LODWORD(v16) = p_readInfo->readBytes;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1568, ASSERT_TYPE_ASSERT, "( ( readInfo.readBytes <= STREAM_FILEBUF_BLOCK_SIZE && readInfo.readBytes > 0 ) )", "( readInfo.readBytes ) = %u", v16) )
      __debugbreak();
  }
  if ( blockInfo->multiBlockReadInfo.blockIndex >= blockInfo->multiBlockReadInfo.numBlocks )
  {
    LODWORD(v16) = blockInfo->multiBlockReadInfo.blockIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1569, ASSERT_TYPE_ASSERT, "(unsigned)( blockInfo->multiBlockReadInfo.blockIndex ) < (unsigned)( blockInfo->multiBlockReadInfo.numBlocks )", "blockInfo->multiBlockReadInfo.blockIndex doesn't index blockInfo->multiBlockReadInfo.numBlocks\n\t%i not in [0, %i)", v16, blockInfo->multiBlockReadInfo.numBlocks) )
      __debugbreak();
  }
  v3 = 0;
  XPakEntryInfo = ItemPickInfo::GetXPakEntryInfo(&p_readInfo->itemReadInfo[0].pickedItem);
  v5 = 0;
  if ( !p_readInfo->numItems )
    return 1;
  while ( 1 )
  {
    v6 = (char *)p_readInfo + 48 * v5;
    if ( !*((_QWORD *)v6 + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 147, ASSERT_TYPE_ASSERT, "(item)", (const char *)&queryFormat, "item") )
      __debugbreak();
    switch ( v6[48] )
    {
      case 0:
        v8 = *((_QWORD *)v6 + 4);
        v9 = *((_DWORD *)v6 + 10) & 3;
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 200, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
          __debugbreak();
        if ( (*(_DWORD *)(v8 + 24) & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
          __debugbreak();
        if ( (unsigned int)v9 >= Image_GetStreamedPartCount((const GfxImage *)v8) )
        {
          LODWORD(v17) = Image_GetStreamedPartCount((const GfxImage *)v8);
          LODWORD(v16) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        v7 = *(_DWORD *)(v8 + 40 * v9 + 88) >> 4;
        if ( (_DWORD)v9 )
          v7 -= *(_DWORD *)(v8 + 40i64 * (unsigned int)(v9 - 1) + 88) >> 4;
LABEL_35:
        if ( v7 )
          goto LABEL_38;
        goto LABEL_36;
      case 1:
        v7 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 4) + 48i64) + 8i64);
        goto LABEL_35;
      case 2:
        v7 = *(_DWORD *)(*((_QWORD *)v6 + 4) + 56i64);
        goto LABEL_35;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 158, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
      __debugbreak();
LABEL_36:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1576, ASSERT_TYPE_ASSERT, "(itemReadInfo.pickedItem.GetSizeInBytes() > 0)", (const char *)&queryFormat, "itemReadInfo.pickedItem.GetSizeInBytes() > 0") )
      __debugbreak();
LABEL_38:
    if ( !*((_QWORD *)v6 + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 107, ASSERT_TYPE_ASSERT, "(item)", (const char *)&queryFormat, "item") )
      __debugbreak();
    v10 = v6[48];
    if ( v10 >= 3u )
    {
      LODWORD(v17) = 3;
      LODWORD(v16) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 108, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( STREAM_ITEM_COUNT )", "type doesn't index STREAM_ITEM_COUNT\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    if ( v6[48] )
    {
      if ( v6[48] == 1 )
      {
        v11 = *((_QWORD *)v6 + 4) + 40i64;
      }
      else if ( v6[48] == 2 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)v6 + 4) + 61i64) & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 117, ASSERT_TYPE_ASSERT, "(!streamKey->Resident())", (const char *)&queryFormat, "!streamKey->Resident()") )
          __debugbreak();
        v11 = *((_QWORD *)v6 + 4) + 32i64;
      }
      else
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 120, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
          __debugbreak();
        v11 = 24i64;
      }
    }
    else
    {
      v11 = *((_QWORD *)v6 + 4) + 8 * (5i64 * (*((_DWORD *)v6 + 10) & 3) + 10);
    }
    v12 = (unsigned __int8)*((_QWORD *)XPakEntryInfo + 3);
    if ( v12 != (unsigned __int8)*(_QWORD *)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1579, ASSERT_TYPE_ASSERT, "( primaryXPakEntry->xpakIndex ) == ( itemXPakEntry->xpakIndex )", "%s == %s\n\t%llu, %llu", "primaryXPakEntry->xpakIndex", "itemXPakEntry->xpakIndex", v12, (unsigned __int8)*(_QWORD *)v11) )
      __debugbreak();
    if ( (*(_DWORD *)v11 & 0x200i64) == 0 )
      break;
    if ( ++v5 >= p_readInfo->numItems )
      return 1;
  }
  if ( !v6[48] )
    v3 = *((_DWORD *)v6 + 10) & 3;
  Name = ItemPickInfo::GetName((ItemPickInfo *)(v6 + 32));
  Com_PrintWarning(35, "XPAK ISSUE: Could not find xpak data for '%s' part %u in any loaded xpak. Check for xpak-related warnings when linking fastfiles.\n", Name, v3);
  if ( !*((_QWORD *)v6 + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 179, ASSERT_TYPE_ASSERT, "(item)", (const char *)&queryFormat, "item") )
    __debugbreak();
  if ( !v6[48] || v6[48] == 1 || v6[48] == 2 )
  {
    v15 = (const char *)**((_QWORD **)v6 + 4);
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 190, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
      __debugbreak();
    v15 = (char *)&queryFormat.fmt + 3;
  }
  LODWORD(v17) = v3;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 1590, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "XPAK ISSUE: Could not find xpak data for '%s' part %u in any loaded xpak\n", v15, v17) )
    __debugbreak();
  return 0;
}

/*
==============
Stream_WaitFileBlockUpdate
==============
*/
void Stream_WaitFileBlockUpdate(void)
{
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_STREAM_UPDATE_FILE_BLOCKS);
}

/*
==============
ItemReadInfo::UnlockDst
==============
*/
void ItemReadInfo::UnlockDst(ItemReadInfo *this)
{
  ItemPickInfo *p_pickedItem; 
  StreamItemType type; 
  bool v4; 
  unsigned int v5; 
  streamer_handle_t v6; 
  __int64 v7; 
  int v8; 

  p_pickedItem = &this->pickedItem;
  if ( !this->pickedItem.item && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 232, ASSERT_TYPE_ASSERT, "(pickedItem.item)", (const char *)&queryFormat, "pickedItem.item") )
    __debugbreak();
  type = this->pickedItem.type;
  if ( (unsigned __int8)type >= STREAM_ITEM_COUNT )
  {
    v8 = 3;
    LODWORD(v7) = (unsigned __int8)type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 233, ASSERT_TYPE_ASSERT, "(unsigned)( pickedItem.type ) < (unsigned)( STREAM_ITEM_COUNT )", "pickedItem.type doesn't index STREAM_ITEM_COUNT\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( !this->isWriteAddressLocked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_read.cpp", 234, ASSERT_TYPE_ASSERT, "(isWriteAddressLocked)", (const char *)&queryFormat, "isWriteAddressLocked") )
    __debugbreak();
  v4 = this->pickedItem.type == STREAM_ITEM_IMAGE;
  this->isWriteAddressLocked = 0;
  if ( v4 )
    v5 = this->pickedItem.itemPartIndex & 3;
  else
    v5 = 0;
  v6.data = ItemPickInfo::GetHandle(p_pickedItem).data;
  Stream_AddressSpace_UnlockFrontendAddr(*(streamer_handle_t *)v6.data, v5);
}

