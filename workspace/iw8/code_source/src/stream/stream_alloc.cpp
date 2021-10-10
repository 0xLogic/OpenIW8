/*
==============
Stream_Alloc_FreeImagePart
==============
*/

unsigned int __fastcall Stream_Alloc_FreeImagePart(const GfxImage *image, unsigned int imagePart, StreamUpdateId updateId)
{
  return ?Stream_Alloc_FreeImagePart@@YAIPEBUGfxImage@@IW4StreamUpdateId@@@Z(image, imagePart, updateId);
}

/*
==============
Stream_Alloc_GetTotalBytesAllocated
==============
*/

unsigned __int64 __fastcall Stream_Alloc_GetTotalBytesAllocated()
{
  return ?Stream_Alloc_GetTotalBytesAllocated@@YA_KXZ();
}

/*
==============
StreamAllocTracker::RemovePagesFromPool
==============
*/

bool __fastcall StreamAllocTracker::RemovePagesFromPool(StreamAllocTracker *this, StreamMemPool pool, unsigned int *pageCount, StreamerMemPageCounts *outRemovedPages)
{
  return ?RemovePagesFromPool@StreamAllocTracker@@AEAA_NW4StreamMemPool@@AEAIAEAUStreamerMemPageCounts@@@Z(this, pool, pageCount, outRemovedPages);
}

/*
==============
StreamAllocTracker::AssertPageCountsCorrect
==============
*/

void __fastcall StreamAllocTracker::AssertPageCountsCorrect(StreamAllocTracker *this)
{
  ?AssertPageCountsCorrect@StreamAllocTracker@@QEBAXXZ(this);
}

/*
==============
Stream_GenericIsLoaded
==============
*/

bool __fastcall Stream_GenericIsLoaded(const StreamKey *streamKey)
{
  return ?Stream_GenericIsLoaded@@YA_NPEBUStreamKey@@@Z(streamKey);
}

/*
==============
Stream_Alloc_DetermineOptimalMaxPages
==============
*/

unsigned int __fastcall Stream_Alloc_DetermineOptimalMaxPages(const void *assetAddress, unsigned int assetSize)
{
  return ?Stream_Alloc_DetermineOptimalMaxPages@@YAIPEBXI@Z(assetAddress, assetSize);
}

/*
==============
Stream_Alloc_GetFreeBytesForPool
==============
*/

unsigned __int64 __fastcall Stream_Alloc_GetFreeBytesForPool(StreamMemPool pool)
{
  return ?Stream_Alloc_GetFreeBytesForPool@@YA_KW4StreamMemPool@@@Z(pool);
}

/*
==============
Stream_Alloc_Deallocate
==============
*/

unsigned int __fastcall Stream_Alloc_Deallocate(StreamItemType itemType, int itemPartIndex)
{
  return ?Stream_Alloc_Deallocate@@YAIW4StreamItemType@@H@Z(itemType, itemPartIndex);
}

/*
==============
Stream_Alloc_FreeMesh
==============
*/

unsigned int __fastcall Stream_Alloc_FreeMesh(XModelSurfs *mesh)
{
  return ?Stream_Alloc_FreeMesh@@YAIPEAUXModelSurfs@@@Z(mesh);
}

/*
==============
Stream_Alloc_DetermineMaxPages
==============
*/

unsigned int __fastcall Stream_Alloc_DetermineMaxPages(unsigned int assetSize)
{
  return ?Stream_Alloc_DetermineMaxPages@@YAII@Z(assetSize);
}

/*
==============
Stream_Alloc_Allocate
==============
*/

StreamAllocResult __fastcall Stream_Alloc_Allocate(StreamItemType itemType, int itemPartIndex, StreamDistance distance, StreamerMemLoan *optionalLoan, StreamUpdateId *updateId)
{
  return ?Stream_Alloc_Allocate@@YA?AW4StreamAllocResult@@W4StreamItemType@@HUStreamDistance@@PEAUStreamerMemLoan@@PEAW4StreamUpdateId@@@Z(itemType, itemPartIndex, distance, optionalLoan, updateId);
}

/*
==============
Stream_Alloc_FreeGeneric
==============
*/

unsigned int __fastcall Stream_Alloc_FreeGeneric(StreamKey *streamKey)
{
  return ?Stream_Alloc_FreeGeneric@@YAIPEAUStreamKey@@@Z(streamKey);
}

/*
==============
Stream_GenericIsSafeToUse
==============
*/

bool __fastcall Stream_GenericIsSafeToUse(const StreamKey *streamKey)
{
  return ?Stream_GenericIsSafeToUse@@YA_NPEBUStreamKey@@@Z(streamKey);
}

/*
==============
RuntimeEvictor::GetLowestPriorityGPUType
==============
*/

StreamItemType __fastcall RuntimeEvictor::GetLowestPriorityGPUType(RuntimeEvictor *this, bool backendFlushPossible)
{
  return ?GetLowestPriorityGPUType@RuntimeEvictor@@AEAA?AW4StreamItemType@@_N@Z(this, backendFlushPossible);
}

/*
==============
Stream_MeshIsSafeToUse
==============
*/

bool __fastcall Stream_MeshIsSafeToUse(const XModelSurfs *mesh)
{
  return ?Stream_MeshIsSafeToUse@@YA_NPEBUXModelSurfs@@@Z(mesh);
}

/*
==============
StreamAllocTracker::TakeFreePagesFromPool
==============
*/

bool __fastcall StreamAllocTracker::TakeFreePagesFromPool(StreamAllocTracker *this, StreamMemPool pool, unsigned int *pageCount, StreamerMemPageCounts *outTakenPages)
{
  return ?TakeFreePagesFromPool@StreamAllocTracker@@AEAA_NW4StreamMemPool@@AEAIAEAUStreamerMemPageCounts@@@Z(this, pool, pageCount, outTakenPages);
}

/*
==============
Stream_Alloc_GetMemPoolFromStreamMemPool
==============
*/

Mem_Pool __fastcall Stream_Alloc_GetMemPoolFromStreamMemPool(StreamMemPool pool)
{
  return ?Stream_Alloc_GetMemPoolFromStreamMemPool@@YA?AW4Mem_Pool@@W4StreamMemPool@@@Z(pool);
}

/*
==============
Stream_Alloc_GetTotalBytes
==============
*/

unsigned __int64 __fastcall Stream_Alloc_GetTotalBytes()
{
  return ?Stream_Alloc_GetTotalBytes@@YA_KXZ();
}

/*
==============
Stream_Alloc_ReturnPagesFromMemPaged
==============
*/

void __fastcall Stream_Alloc_ReturnPagesFromMemPaged(const StreamerMemPageCounts *pages, StreamUpdateId updateID)
{
  ?Stream_Alloc_ReturnPagesFromMemPaged@@YAXAEBUStreamerMemPageCounts@@W4StreamUpdateId@@@Z(pages, updateID);
}

/*
==============
Stream_Alloc_GetFreeBytes
==============
*/

unsigned __int64 __fastcall Stream_Alloc_GetFreeBytes()
{
  return ?Stream_Alloc_GetFreeBytes@@YA_KXZ();
}

/*
==============
Stream_Alloc_DetermineOptimalMinPages
==============
*/

unsigned int __fastcall Stream_Alloc_DetermineOptimalMinPages(const void *assetAddress, unsigned int assetSize)
{
  return ?Stream_Alloc_DetermineOptimalMinPages@@YAIPEBXI@Z(assetAddress, assetSize);
}

/*
==============
Stream_Alloc_DetermineMinPages
==============
*/

unsigned int __fastcall Stream_Alloc_DetermineMinPages(unsigned int assetSize)
{
  return ?Stream_Alloc_DetermineMinPages@@YAII@Z(assetSize);
}

/*
==============
Stream_Alloc_LoadedGeneric
==============
*/

void __fastcall Stream_Alloc_LoadedGeneric(const StreamKey *streamKey)
{
  ?Stream_Alloc_LoadedGeneric@@YAXPEBUStreamKey@@@Z(streamKey);
}

/*
==============
Stream_Alloc_GetImagePartToFree
==============
*/

int __fastcall Stream_Alloc_GetImagePartToFree(const StreamSortListFrame *sortList, StreamDistance distSkip, unsigned __int64 wantedInclusiveSize)
{
  return ?Stream_Alloc_GetImagePartToFree@@YAHPEBUStreamSortListFrame@@UStreamDistance@@_K@Z(sortList, distSkip, wantedInclusiveSize);
}

/*
==============
StreamAllocTracker::GiveBackendPages
==============
*/

void __fastcall StreamAllocTracker::GiveBackendPages(StreamAllocTracker *this)
{
  ?GiveBackendPages@StreamAllocTracker@@QEAAXXZ(this);
}

/*
==============
Stream_Alloc_RequestPagesForMemPaged
==============
*/

void __fastcall Stream_Alloc_RequestPagesForMemPaged(StreamMemPool pool, unsigned int pageCount, bool backendFlushPossible, StreamUpdateId *updateId, StreamerMemPageCounts *pagesFreed)
{
  ?Stream_Alloc_RequestPagesForMemPaged@@YAXW4StreamMemPool@@I_NPEAW4StreamUpdateId@@AEAUStreamerMemPageCounts@@@Z(pool, pageCount, backendFlushPossible, updateId, pagesFreed);
}

/*
==============
Stream_Alloc_LoadedMesh
==============
*/

void __fastcall Stream_Alloc_LoadedMesh(const XModelSurfs *mesh)
{
  ?Stream_Alloc_LoadedMesh@@YAXPEBUXModelSurfs@@@Z(mesh);
}

/*
==============
StreamAllocTracker::RemovePages
==============
*/

void __fastcall StreamAllocTracker::RemovePages(StreamAllocTracker *this, StreamMemPool poolPreference, unsigned int pageCount, StreamerMemPageCounts *outRemovedPages)
{
  ?RemovePages@StreamAllocTracker@@QEAAXW4StreamMemPool@@IAEAUStreamerMemPageCounts@@@Z(this, poolPreference, pageCount, outRemovedPages);
}

/*
==============
Stream_Alloc_GetImageLoadedBytes
==============
*/

unsigned __int64 __fastcall Stream_Alloc_GetImageLoadedBytes(const GfxImage *image)
{
  return ?Stream_Alloc_GetImageLoadedBytes@@YA_KPEBUGfxImage@@@Z(image);
}

/*
==============
Stream_MeshIsLoaded
==============
*/

bool __fastcall Stream_MeshIsLoaded(const XModelSurfs *mesh)
{
  return ?Stream_MeshIsLoaded@@YA_NPEBUXModelSurfs@@@Z(mesh);
}

/*
==============
Stream_Alloc_GetImageLoadedPartCount
==============
*/

unsigned int __fastcall Stream_Alloc_GetImageLoadedPartCount(const GfxImage *image)
{
  return ?Stream_Alloc_GetImageLoadedPartCount@@YAIPEBUGfxImage@@@Z(image);
}

/*
==============
Stream_Alloc_GetItemMemPool
==============
*/

StreamMemPool __fastcall Stream_Alloc_GetItemMemPool(StreamItemType itemType, int assetIndex)
{
  return ?Stream_Alloc_GetItemMemPool@@YA?AW4StreamMemPool@@W4StreamItemType@@H@Z(itemType, assetIndex);
}

/*
==============
Stream_Alloc_GetTotalBytesForPool
==============
*/

unsigned __int64 __fastcall Stream_Alloc_GetTotalBytesForPool(StreamMemPool pool)
{
  return ?Stream_Alloc_GetTotalBytesForPool@@YA_KW4StreamMemPool@@@Z(pool);
}

/*
==============
Stream_Alloc_GetBytesAllocated
==============
*/

unsigned __int64 __fastcall Stream_Alloc_GetBytesAllocated(StreamItemType type)
{
  return ?Stream_Alloc_GetBytesAllocated@@YA_KW4StreamItemType@@@Z(type);
}

/*
==============
StreamAllocTracker::AddPages
==============
*/

void __fastcall StreamAllocTracker::AddPages(StreamAllocTracker *this, const StreamerMemPageCounts *pages, StreamUpdateId updateID)
{
  ?AddPages@StreamAllocTracker@@QEAAXAEBUStreamerMemPageCounts@@W4StreamUpdateId@@@Z(this, pages, updateID);
}

/*
==============
StreamAllocTracker::TakeFreePages
==============
*/

void __fastcall StreamAllocTracker::TakeFreePages(StreamAllocTracker *this, StreamMemPool poolPreference, unsigned int pageCount, StreamerMemPageCounts *outTakenPages)
{
  ?TakeFreePages@StreamAllocTracker@@QEAAXW4StreamMemPool@@IAEAUStreamerMemPageCounts@@@Z(this, poolPreference, pageCount, outTakenPages);
}

/*
==============
Stream_Alloc_Dump
==============
*/

void Stream_Alloc_Dump(void)
{
  ?Stream_Alloc_Dump@@YAXXZ();
}

/*
==============
Stream_Alloc_LoadedImage
==============
*/

void __fastcall Stream_Alloc_LoadedImage(const GfxImage *image, unsigned int imagePart)
{
  ?Stream_Alloc_LoadedImage@@YAXPEBUGfxImage@@I@Z(image, imagePart);
}

/*
==============
Stream_Alloc_GetItemPartMemPool
==============
*/

StreamMemPool __fastcall Stream_Alloc_GetItemPartMemPool(StreamItemType itemType, int itemPartIndex)
{
  return ?Stream_Alloc_GetItemPartMemPool@@YA?AW4StreamMemPool@@W4StreamItemType@@H@Z(itemType, itemPartIndex);
}

/*
==============
Stream_Alloc_FreeImage
==============
*/

unsigned int __fastcall Stream_Alloc_FreeImage(const GfxImage *image, unsigned int imagePart)
{
  return ?Stream_Alloc_FreeImage@@YAIPEBUGfxImage@@I@Z(image, imagePart);
}

/*
==============
Stream_Alloc_GetMemInfo
==============
*/

void __fastcall Stream_Alloc_GetMemInfo(StreamMemInfo *memInfo)
{
  ?Stream_Alloc_GetMemInfo@@YAXPEAUStreamMemInfo@@@Z(memInfo);
}

/*
==============
RuntimeEvictor::GetItemOfType
==============
*/

bool __fastcall RuntimeEvictor::GetItemOfType(RuntimeEvictor *this, StreamMemPool poolPreference, unsigned __int64 sizeToFree, StreamItemType typeToFree, int *itemIndex)
{
  return ?GetItemOfType@RuntimeEvictor@@QEAA_NW4StreamMemPool@@_KW4StreamItemType@@AEAH@Z(this, poolPreference, sizeToFree, typeToFree, itemIndex);
}

/*
==============
Stream_Alloc_GetStreamMemPoolFromMemPool
==============
*/

StreamMemPool __fastcall Stream_Alloc_GetStreamMemPoolFromMemPool(Mem_Pool pool)
{
  return ?Stream_Alloc_GetStreamMemPoolFromMemPool@@YA?AW4StreamMemPool@@W4Mem_Pool@@@Z(pool);
}

/*
==============
Stream_Alloc_InitialHandoffFromMemPaged
==============
*/

void __fastcall Stream_Alloc_InitialHandoffFromMemPaged(const StreamerMemPageCounts *pageCounts)
{
  ?Stream_Alloc_InitialHandoffFromMemPaged@@YAXAEBUStreamerMemPageCounts@@@Z(pageCounts);
}

/*
==============
AggressiveLevelInitEvictor::GetNextImageToFree
==============
*/

int __fastcall AggressiveLevelInitEvictor::GetNextImageToFree(AggressiveLevelInitEvictor *this)
{
  return ?GetNextImageToFree@AggressiveLevelInitEvictor@@AEAAHXZ(this);
}

/*
==============
Stream_Alloc_GetImagePartToFree
==============
*/

int __fastcall Stream_Alloc_GetImagePartToFree(const StreamSortListFrame *sortList, StreamDistance distSkip)
{
  return ?Stream_Alloc_GetImagePartToFree@@YAHPEBUStreamSortListFrame@@UStreamDistance@@@Z(sortList, distSkip);
}

/*
==============
StreamAllocTracker::AddPages
==============
*/
void StreamAllocTracker::AddPages(StreamAllocTracker *this, const StreamerMemPageCounts *pages, StreamUpdateId updateID)
{
  const StreamerMemPageCounts *v4; 
  int v6; 
  int v7; 
  const StreamerMemPageCounts *v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  FastCriticalSectionScopeWrite v12; 

  v4 = pages;
  v6 = 0;
  v7 = 0;
  v8 = pages;
  v9 = 0i64;
  v10 = 2i64;
  if ( v8 > &v8[1] )
    v10 = 0i64;
  if ( v8 <= &v8[1] )
  {
    do
    {
      v7 += v8->pages[0];
      v8 = (const StreamerMemPageCounts *)((char *)v8 + 4);
      ++v9;
    }
    while ( v9 != v10 );
    if ( v7 )
    {
      v12.cs = &this->mCS;
      if ( !this && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 228, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs", -2i64) )
        __debugbreak();
      Sys_LockWrite(&this->mCS);
      this->mFreePages.pages[0] += v4->pages[0];
      this->mFreePages.pages[1] += v4->pages[1];
      v11 = 0i64;
      do
      {
        v6 += v4->pages[0];
        v4 = (const StreamerMemPageCounts *)((char *)v4 + 4);
        ++v11;
      }
      while ( v11 != v10 );
      this->mTotalPages += v6;
      StreamAllocTracker::AssertPageCountsCorrect(this);
      if ( this->mFreePagesUpdateID > (unsigned __int64)updateID )
        updateID = this->mFreePagesUpdateID;
      this->mFreePagesUpdateID = updateID;
      FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v12);
    }
  }
}

/*
==============
StreamAllocTracker::AssertPageCountsCorrect
==============
*/
void StreamAllocTracker::AssertPageCountsCorrect(StreamAllocTracker *this)
{
  int v1; 
  StreamerMemPageCounts *p_mFreePages; 
  unsigned int *p_mTotalPages; 
  __int64 v4; 
  unsigned int v5; 
  StreamerMemPageCounts *v6; 
  __int64 v7; 
  unsigned int mTotalPages; 
  __int64 v9; 
  int v10; 
  unsigned int v11; 

  v1 = 0;
  p_mFreePages = &this->mFreePages;
  p_mTotalPages = &this->mTotalPages;
  v4 = 2i64;
  v5 = 0;
  v6 = &this->mFreePages;
  v7 = 0i64;
  if ( &this->mFreePages > (StreamerMemPageCounts *)&this->mTotalPages )
    v4 = 0i64;
  if ( &this->mFreePages <= (StreamerMemPageCounts *)&this->mTotalPages )
  {
    do
    {
      v5 += v6->pages[0];
      v6 = (StreamerMemPageCounts *)((char *)v6 + 4);
      ++v7;
    }
    while ( v7 != v4 );
  }
  mTotalPages = this->mTotalPages;
  if ( v5 > mTotalPages )
  {
    v9 = 0i64;
    if ( p_mFreePages <= (StreamerMemPageCounts *)p_mTotalPages )
    {
      do
      {
        v1 += p_mFreePages->pages[0];
        p_mFreePages = (StreamerMemPageCounts *)((char *)p_mFreePages + 4);
        ++v9;
      }
      while ( v9 != v4 );
    }
    v11 = mTotalPages;
    v10 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 75, ASSERT_TYPE_ASSERT, "( mFreePages.TotalPages() ) <= ( mTotalPages )", "%s <= %s\n\t%u, %u", "mFreePages.TotalPages()", "mTotalPages", v10, v11) )
      __debugbreak();
  }
}

/*
==============
RuntimeEvictor::GetItemOfType
==============
*/
_BOOL8 RuntimeEvictor::GetItemOfType(RuntimeEvictor *this, StreamMemPool poolPreference, unsigned __int64 sizeToFree, StreamItemType typeToFree, int *itemIndex)
{
  int *v9; 
  int v10; 
  const StreamSortListFrame *v11; 
  StreamSortList<37888> *p_genericSortList; 
  int v13; 
  const StreamSortListFrame *mSortList; 
  StreamSortList<45056> *p_meshSortList; 
  int v16; 
  bool v17; 
  int v18; 
  StreamSortList<37888> *v19; 
  FastCriticalSection *p_mCS; 
  StreamSortList<45056> *v21; 
  FastCriticalSection *v22; 
  StreamSortList<327680> *p_imageSortList; 
  FastCriticalSection *v24; 
  ScopedCriticalSection v26; 
  int v27; 

  if ( typeToFree == STREAM_ITEM_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 1020, ASSERT_TYPE_ASSERT, "(typeToFree != STREAM_ITEM_INVALID)", (const char *)&queryFormat, "typeToFree != STREAM_ITEM_INVALID", -2i64) )
    __debugbreak();
  v9 = itemIndex;
  *itemIndex = -1;
  v10 = (unsigned __int8)typeToFree;
  if ( typeToFree )
  {
    if ( typeToFree == STREAM_ITEM_MESH )
    {
      mSortList = this->mSortList;
      v27 = -1;
      ScopedCriticalSection::ScopedCriticalSection(&v26, CRITSECT_STREAM_MESH_FREEABLE, SCOPED_CRITSECT_NORMAL);
      p_meshSortList = &mSortList->meshSortList;
      itemIndex = &v27;
      if ( p_meshSortList == (StreamSortList<45056> *)-366096i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 252, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
        __debugbreak();
      Sys_LockRead(&p_meshSortList->mCS);
      StreamSortList_45056_::IterateRange__lambda_f5e9dd81017b4f7a0f229b14c93ff5c5___((int)p_meshSortList, 0, (const Stream_Alloc_GetMeshToFree::__l2::<lambda_f5e9dd81017b4f7a0f229b14c93ff5c5> *)(unsigned int)(p_meshSortList->mSortedLeft - 1));
      Sys_UnlockRead(&p_meshSortList->mCS);
      v16 = v27;
      ScopedCriticalSection::~ScopedCriticalSection(&v26);
      *v9 = v16;
    }
    else if ( typeToFree == STREAM_ITEM_GENERIC )
    {
      LODWORD(itemIndex) = poolPreference;
      v11 = this->mSortList;
      v27 = -1;
      ScopedCriticalSection::ScopedCriticalSection(&v26, CRITSECT_STREAM_GENERIC_FREEABLE, SCOPED_CRITSECT_NORMAL);
      p_genericSortList = &v11->genericSortList;
      if ( p_genericSortList == (StreamSortList<37888> *)-307856i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 252, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
        __debugbreak();
      Sys_LockRead(&p_genericSortList->mCS);
      StreamSortList_37888_::IterateRange__lambda_c5d929f1b80e7d92767221fd115eb702___((int)p_genericSortList, 0, (const Stream_Alloc_GetGenericToFree::__l2::<lambda_c5d929f1b80e7d92767221fd115eb702> *)(unsigned int)(p_genericSortList->mSortedLeft - 1));
      Sys_UnlockRead(&p_genericSortList->mCS);
      v13 = v27;
      ScopedCriticalSection::~ScopedCriticalSection(&v26);
      *v9 = v13;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 1036, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable") )
    {
      __debugbreak();
    }
  }
  else
  {
    *v9 = Stream_Alloc_GetImagePartToFree(this->mSortList, (StreamDistance)this->mDistance.mValue, sizeToFree);
  }
  v17 = 0;
  if ( *v9 == -1 )
  {
    if ( v10 )
    {
      v18 = v10 - 1;
      if ( v18 )
      {
        if ( v18 == 1 )
        {
          v19 = &this->mSortList->genericSortList;
          Sys_ProfBeginNamedEvent(0xFF808080, "StreamSortList<37888>::PartialSortLeft");
          p_mCS = &v19->mCS;
          itemIndex = (int *)&v19->mCS.readCount;
          if ( v19 == (StreamSortList<37888> *)-307856i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 252, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
            __debugbreak();
          Sys_LockRead(&v19->mCS);
          v17 = StreamSortList<37888>::PartialSort(v19, v19->mSortedLeft);
          Sys_UnlockRead(p_mCS);
          Sys_ProfEndNamedEvent();
        }
      }
      else
      {
        v21 = &this->mSortList->meshSortList;
        Sys_ProfBeginNamedEvent(0xFF808080, "StreamSortList<45056>::PartialSortLeft");
        v22 = &v21->mCS;
        itemIndex = (int *)&v21->mCS.readCount;
        if ( v21 == (StreamSortList<45056> *)-366096i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 252, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
          __debugbreak();
        Sys_LockRead(&v21->mCS);
        v17 = StreamSortList<45056>::PartialSort(v21, v21->mSortedLeft);
        Sys_UnlockRead(v22);
        Sys_ProfEndNamedEvent();
      }
    }
    else
    {
      p_imageSortList = &this->mSortList->imageSortList;
      Sys_ProfBeginNamedEvent(0xFF808080, "StreamSortList<327680>::PartialSortLeft");
      v24 = &p_imageSortList->mCS;
      itemIndex = (int *)&p_imageSortList->mCS.readCount;
      if ( p_imageSortList == (StreamSortList<327680> *)-2662416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 252, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
        __debugbreak();
      Sys_LockRead(&p_imageSortList->mCS);
      v17 = StreamSortList<327680>::PartialSort(p_imageSortList, p_imageSortList->mSortedLeft);
      Sys_UnlockRead(v24);
      Sys_ProfEndNamedEvent();
    }
  }
  return !v17;
}

/*
==============
RuntimeEvictor::GetLowestPriorityGPUType
==============
*/
char RuntimeEvictor::GetLowestPriorityGPUType(RuntimeEvictor *this, bool backendFlushPossible)
{
  unsigned __int64 v4; 
  int v5; 
  unsigned int mFailedToFree; 
  __int16 v7; 
  char v8; 

  if ( backendFlushPossible )
  {
    if ( (this->mFailedToFree & 1) != 0 )
      return 3;
    else
      return 0;
  }
  else
  {
    LODWORD(v4) = `RuntimeEvictor::GetLowestPriorityGPUType'::`10'::lastType;
    v5 = 0;
    v7 = 256;
    v8 = 2;
    while ( 1 )
    {
      v4 = ((int)v4 + 1) % 3ui64;
      `RuntimeEvictor::GetLowestPriorityGPUType'::`10'::lastType = v4;
      mFailedToFree = this->mFailedToFree;
      if ( !_bittest((const int *)&mFailedToFree, *((unsigned __int8 *)&v7 + (int)v4)) )
        break;
      if ( (unsigned int)++v5 >= 3 )
        return 3;
    }
    return *((_BYTE *)&v7 + (int)v4);
  }
}

/*
==============
AggressiveLevelInitEvictor::GetNextImageToFree
==============
*/
int AggressiveLevelInitEvictor::GetNextImageToFree(AggressiveLevelInitEvictor *this)
{
  unsigned int mImageIndex; 
  unsigned int v3; 
  StreamFrontendGlob *v4; 
  unsigned int v5; 
  unsigned int *mStaticForced; 
  int v7; 
  __int64 v8; 
  int v9; 
  StreamFrontendGlob *v10; 
  unsigned int *mUse; 
  StreamFrontendGlob *v12; 
  unsigned int *mAlloc; 
  StreamFrontendGlob *v14; 
  unsigned int *mLoading; 
  StreamFrontendGlob *v16; 
  unsigned int *mPriming; 
  const dvar_t *v18; 
  unsigned int flags; 
  bool v20; 
  const GfxImage *GfxImageAtIndex; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  __int64 v26; 
  __int64 v27; 

  if ( this->mImagePart < 0 )
    return -1;
  mImageIndex = this->mImageIndex;
  v3 = 0;
  while ( mImageIndex >= 0x14000 )
  {
LABEL_58:
    v20 = --this->mImagePart < 0;
    mImageIndex = 0;
    this->mImageIndex = 0;
    if ( v20 )
      return -1;
  }
  while ( 1 )
  {
    v4 = streamFrontendGlob;
    v5 = this->mImagePart + 4 * mImageIndex;
    if ( v5 >= streamFrontendGlob->imageBits.mBitCount )
    {
      LODWORD(v27) = streamFrontendGlob->imageBits.mBitCount;
      LODWORD(v26) = this->mImagePart + 4 * mImageIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 589, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    mStaticForced = v4->imageBits.mStaticForced;
    if ( !mStaticForced && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    v7 = 1 << (v5 & 0x1F);
    v8 = (__int64)(int)v5 >> 5;
    v9 = v7 & mStaticForced[v8];
    if ( this->mAllowForced || !v9 )
    {
      v10 = streamFrontendGlob;
      if ( v5 >= streamFrontendGlob->imageBits.mBitCount )
      {
        LODWORD(v27) = streamFrontendGlob->imageBits.mBitCount;
        LODWORD(v26) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 371, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
      mUse = v10->imageBits.mUse;
      if ( !mUse && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      if ( (v7 & mUse[v8]) != 0 )
      {
        v12 = streamFrontendGlob;
        if ( v5 >= streamFrontendGlob->imageBits.mBitCount )
        {
          LODWORD(v27) = streamFrontendGlob->imageBits.mBitCount;
          LODWORD(v26) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v26, v27) )
            __debugbreak();
        }
        mAlloc = v12->imageBits.mAlloc;
        if ( !mAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        if ( (v7 & mAlloc[v8]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 1243, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->imageBits.CheckAlloc( imagePartIndex ))", (const char *)&queryFormat, "streamFrontendGlob->imageBits.CheckAlloc( imagePartIndex )") )
          __debugbreak();
        v14 = streamFrontendGlob;
        if ( v5 >= streamFrontendGlob->imageBits.mBitCount )
        {
          LODWORD(v27) = streamFrontendGlob->imageBits.mBitCount;
          LODWORD(v26) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 288, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v26, v27) )
            __debugbreak();
        }
        mLoading = v14->imageBits.mLoading;
        if ( !mLoading && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        if ( (v7 & mLoading[v8]) == 0 )
        {
          v16 = streamFrontendGlob;
          if ( v5 >= streamFrontendGlob->imageBits.mBitCount )
          {
            LODWORD(v27) = streamFrontendGlob->imageBits.mBitCount;
            LODWORD(v26) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 554, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v26, v27) )
              __debugbreak();
          }
          mPriming = v16->imageBits.mPriming;
          if ( !mPriming && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          if ( (v7 & mPriming[v8]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 1249, ASSERT_TYPE_ASSERT, "(!streamFrontendGlob->imageBits.CheckPriming( imagePartIndex ))", (const char *)&queryFormat, "!streamFrontendGlob->imageBits.CheckPriming( imagePartIndex )") )
            __debugbreak();
          if ( this->mImagePart >= 3 )
            break;
          v18 = DCONST_DVARBOOL_stream_concurrentImagePartLoading;
          if ( !DCONST_DVARBOOL_stream_concurrentImagePartLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_concurrentImagePartLoading") )
            __debugbreak();
          if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
          {
            flags = v18->flags;
            if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v18->name) )
              __debugbreak();
          }
          if ( v18->current.enabled || !StreamableBits::CheckAlloc(&streamFrontendGlob->imageBits, v5 + 1) && !StreamableBits::CheckLoading(&streamFrontendGlob->imageBits, v5 + 1) )
            break;
        }
      }
    }
    mImageIndex = this->mImageIndex + 1;
    this->mImageIndex = mImageIndex;
    if ( mImageIndex >= 0x14000 )
      goto LABEL_58;
  }
  GfxImageAtIndex = DB_GetGfxImageAtIndex(this->mImageIndex);
  v23 = Image_ExclusivePartSize(GfxImageAtIndex, this->mImagePart);
  v24 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)(v23 + 0xFFFF) >> 16) + 1;
  if ( v23 >= 0x10000 )
  {
    v25 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)(v23 + 0xFFFF) >> 16);
    if ( v25 > 2 )
    {
      v3 = v25 - 2;
      if ( v24 < v25 - 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 1269, ASSERT_TYPE_ASSERT, "( maxPages ) >= ( minPages )", "%s >= %s\n\t%u, %u", "maxPages", "minPages", v24, v25 - 2) )
        __debugbreak();
    }
  }
  this->mMaxPotentialBackendPages += v24 - v3;
  if ( v9 )
    streamFrontendGlob->forcedState = EvictedForMemPaged;
  ++this->mImageIndex;
  return truncate_cast<int,unsigned int>(v5);
}

/*
==============
StreamAllocTracker::GiveBackendPages
==============
*/
void StreamAllocTracker::GiveBackendPages(StreamAllocTracker *this)
{
  int v2; 
  unsigned __int64 v3; 
  __int64 v4; 
  _DWORD *v5; 
  FastCriticalSectionScopeWrite v6; 
  __int64 v7; 
  _QWORD v8[2]; 

  v7 = -2i64;
  v8[0] = 0i64;
  v2 = 0;
  v3 = 0i64;
  v4 = 2i64;
  do
  {
    *((_DWORD *)v8 + (unsigned int)v3) += Stream_BackendQueue_GetPageAdjustment((StreamMemPool)v3);
    ++v3;
  }
  while ( v3 < 2 );
  v5 = v8;
  do
  {
    v2 += *v5++;
    --v4;
  }
  while ( v4 );
  if ( v2 )
  {
    v6.cs = &this->mCS;
    if ( !this && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 228, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
      __debugbreak();
    Sys_LockWrite(&this->mCS);
    this->mFreePages.pages[0] += LODWORD(v8[0]);
    this->mFreePages.pages[1] += HIDWORD(v8[0]);
    StreamAllocTracker::AssertPageCountsCorrect(this);
    FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v6);
  }
}

/*
==============
StreamAllocTracker::RemovePages
==============
*/
void StreamAllocTracker::RemovePages(StreamAllocTracker *this, StreamMemPool poolPreference, unsigned int pageCount, StreamerMemPageCounts *outRemovedPages)
{
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  unsigned int v11; 
  FastCriticalSectionScopeWrite v12; 
  unsigned int pageCounta; 

  pageCounta = pageCount;
  v5 = (unsigned int)poolPreference;
  *outRemovedPages = 0i64;
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 174, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  v12.cs = &this->mCS;
  if ( !this && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 228, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
    __debugbreak();
  Sys_LockWrite(&this->mCS);
  if ( !StreamAllocTracker::RemovePagesFromPool(this, (StreamMemPool)v5, &pageCounta, outRemovedPages) )
  {
    v7 = 0i64;
    v8 = v5;
    v9 = pageCounta;
    while ( 1 )
    {
      if ( v7 != v8 )
      {
        StreamAllocTracker::AssertPageCountsCorrect(this);
        v10 = (unsigned int)v7;
        v11 = this->mFreePages.pages[v10];
        if ( v9 <= v11 )
          v11 = v9;
        v9 -= v11;
        this->mTotalPages -= v11;
        StreamerMemPageCounts::RemovePages(&this->mFreePages, (StreamMemPool)v7, v11);
        outRemovedPages->pages[v10] += v11;
        StreamAllocTracker::AssertPageCountsCorrect(this);
        if ( !v9 )
          break;
      }
      if ( (unsigned __int64)++v7 >= 2 )
      {
        if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 192, ASSERT_TYPE_ASSERT, "( pageCount ) == ( 0 )", "%s == %s\n\t%u, %u", "pageCount", "0", v9, 0i64) )
          __debugbreak();
        break;
      }
    }
  }
  FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v12);
}

/*
==============
StreamAllocTracker::RemovePagesFromPool
==============
*/
bool StreamAllocTracker::RemovePagesFromPool(StreamAllocTracker *this, StreamMemPool pool, unsigned int *pageCount, StreamerMemPageCounts *outRemovedPages)
{
  __int64 v5; 
  unsigned int v8; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  int v13; 

  v5 = (unsigned int)pool;
  StreamAllocTracker::AssertPageCountsCorrect(this);
  if ( (unsigned int)v5 >= 2 )
  {
    v13 = 2;
    v11 = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 32, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  v8 = *pageCount;
  if ( *pageCount > this->mFreePages.pages[v5] )
    v8 = this->mFreePages.pages[v5];
  *pageCount -= v8;
  this->mTotalPages -= v8;
  StreamerMemPageCounts::RemovePages(&this->mFreePages, (StreamMemPool)v5, v8);
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v12) = 2;
    LODWORD(v10) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 48, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  outRemovedPages->pages[v5] += v8;
  StreamAllocTracker::AssertPageCountsCorrect(this);
  return *pageCount == 0;
}

/*
==============
Stream_Alloc_Allocate
==============
*/
StreamAllocResult Stream_Alloc_Allocate(StreamItemType itemType, int itemPartIndex, StreamDistance distance, StreamerMemLoan *optionalLoan, StreamUpdateId *updateId)
{
  StreamKey *StreamKeyAtIndex; 
  streamer_handle_t v10; 
  XModelSurfs *XModelSurfsAtIndex; 
  streamer_handle_t v12; 
  unsigned int v13; 
  GfxImage *GfxImageAtIndex; 
  int v15; 
  StreamFrontendGlob *v16; 
  signed int v17; 
  unsigned int *mAlloc; 
  unsigned int v19; 
  unsigned __int64 data; 
  unsigned int v21; 
  unsigned int v22; 
  StreamerMemLoan *optionalLoana; 

  *updateId = 0i64;
  if ( itemType )
  {
    if ( itemType == STREAM_ITEM_MESH )
    {
      XModelSurfsAtIndex = DB_GetXModelSurfsAtIndex(itemPartIndex);
      v12.data = Stream_AddressSpace_MeshHandle(XModelSurfsAtIndex).data;
      return Stream_Alloc_AllocateInternal(STREAM_ITEM_MESH, itemPartIndex, v12, XModelSurfsAtIndex->shared->dataSize, 0, distance, optionalLoan, &streamFrontendGlob->meshBits, updateId);
    }
    else if ( itemType == STREAM_ITEM_GENERIC )
    {
      StreamKeyAtIndex = DB_GetStreamKeyAtIndex(itemPartIndex);
      v10.data = Stream_AddressSpace_GenericHandle(StreamKeyAtIndex).data;
      return Stream_Alloc_AllocateInternal(STREAM_ITEM_GENERIC, itemPartIndex, v10, StreamKeyAtIndex->dataSize, 0, distance, optionalLoan, &streamFrontendGlob->genericBits, updateId);
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 1721, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0") )
        __debugbreak();
      return 1;
    }
  }
  else
  {
    v13 = truncate_cast<unsigned int,int>(itemPartIndex);
    GfxImageAtIndex = DB_GetGfxImageAtIndex(v13 >> 2);
    v15 = v13 & 3;
    if ( (v13 & 3) != 0 && !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_stream_concurrentImagePartLoading, "stream_concurrentImagePartLoading") )
    {
      v16 = streamFrontendGlob;
      v17 = v13 - 1;
      if ( v13 - 1 >= streamFrontendGlob->imageBits.mBitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v13 - 1, streamFrontendGlob->imageBits.mBitCount) )
        __debugbreak();
      mAlloc = v16->imageBits.mAlloc;
      if ( !mAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v19 = mAlloc[(__int64)v17 >> 5];
      if ( !_bittest((const int *)&v19, v17 & 0x1F) )
      {
        LODWORD(optionalLoana) = v15 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 1674, ASSERT_TYPE_ASSERT, "( streamFrontendGlob->imageBits.CheckAlloc( imagePartIndex - 1 ) )", "%s part %u not allocated", GfxImageAtIndex->name, optionalLoana) )
          __debugbreak();
      }
    }
    data = Stream_AddressSpace_ImageHandle(GfxImageAtIndex).data;
    v21 = Image_ExclusivePartSize(GfxImageAtIndex, v15);
    v22 = Image_PartOffset(GfxImageAtIndex, v15);
    return Stream_Alloc_AllocateInternal(STREAM_ITEM_IMAGE, v13, (streamer_handle_t)data, v21, v22, distance, optionalLoan, &streamFrontendGlob->imageBits, updateId);
  }
}

/*
==============
Stream_Alloc_AllocateInternal
==============
*/
char Stream_Alloc_AllocateInternal(StreamItemType itemType, unsigned int itemPartIndex, streamer_handle_t assetHandle, unsigned int dataSize, unsigned int dataOffset, StreamDistance distance, StreamerMemLoan *optionalLoan, StreamableBits *bits, StreamUpdateId *updateId)
{
  __int64 v10; 
  __int64 v11; 
  unsigned int *mAlloc; 
  int v13; 
  bool v14; 
  unsigned __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int *v20; 
  unsigned int v21; 
  StreamUpdateId *v22; 
  StreamUpdateId *outUpdateId; 
  __int64 v25; 
  StreamMemPool pool; 
  streamer_handle_t handle; 
  unsigned int v28; 
  StreamUpdateId *v29; 
  StreamerMemLoan *v30; 
  unsigned __int64 v31; 
  StreamMapCmdData map; 

  v30 = optionalLoan;
  v29 = updateId;
  v10 = dataSize;
  v11 = (int)itemPartIndex;
  handle.data = assetHandle.data;
  v28 = dataOffset;
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 1576, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  pool = Stream_Alloc_GetItemPartMemPool(itemType, v11);
  if ( (unsigned int)v11 >= bits->mBitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v11, bits->mBitCount) )
    __debugbreak();
  mAlloc = bits->mAlloc;
  if ( !bits->mAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v13 = 1 << (v11 & 0x1F);
  v31 = 4 * (v11 >> 5);
  if ( (v13 & mAlloc[v31 / 4]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 1580, ASSERT_TYPE_ASSERT, "(!bits.CheckAlloc( itemPartIndex ))", (const char *)&queryFormat, "!bits.CheckAlloc( itemPartIndex )") )
    __debugbreak();
  v14 = Stream_Defrag_LockHandle(handle);
  if ( v14 )
  {
    v15 = (unsigned __int64)&Stream_AddressSpace_ResolveHandle(&handle)[dataOffset];
    v16 = truncate_cast<unsigned int,unsigned __int64>(((v15 + (int)v10 + 0xFFFFi64) & 0xFFFFFFFFFFFF0000ui64) - (v15 & 0xFFFFFFFFFFFF0000ui64)) >> 16;
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 1590, ASSERT_TYPE_ASSERT, "( maxPageCount ) >= ( 1 )", "%s >= %s\n\t%u, %u", "maxPageCount", "1", 0, 1) )
      __debugbreak();
    v17 = Stream_Alloc_DetermineOptimalMinPages((const void *)v15, v10);
  }
  else
  {
    v18 = Stream_Alloc_DetermineMaxPagesForAllocate(itemType, v11, v10, bits);
    v16 = v18;
    if ( v18 < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 1597, ASSERT_TYPE_ASSERT, "( maxPageCount ) >= ( 2 )", "%s >= %s\n\t%u, %u", "maxPageCount", "2", v18, 2) )
      __debugbreak();
    if ( (unsigned int)v10 < 0x10000 || (v19 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)(unsigned int)(v10 + 0xFFFF) >> 16), v19 <= 2) )
      v17 = 0;
    else
      v17 = v19 - 2;
  }
  map.pagesReserved = 0i64;
  if ( Stream_Alloc_TakePagesForAllocate(pool, v16, distance, v30, &map.pagesReserved, v29) )
  {
    if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 315, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
      __debugbreak();
    if ( (unsigned int)v11 >= bits->mBitCount )
    {
      LODWORD(v25) = bits->mBitCount;
      LODWORD(outUpdateId) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 316, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", outUpdateId, v25) )
        __debugbreak();
    }
    v20 = bits->mAlloc;
    if ( !bits->mAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    v20[v31 / 4] |= v13;
    v21 = v28;
    map.baseAddrHandle = handle;
    if ( (v28 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 1626, ASSERT_TYPE_ASSERT, "(dataOffset % MEM_SUB_PAGE_SIZE == 0)", (const char *)&queryFormat, "dataOffset % MEM_SUB_PAGE_SIZE == 0") )
      __debugbreak();
    if ( (v10 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 1627, ASSERT_TYPE_ASSERT, "(dataSize % MEM_SUB_PAGE_SIZE == 0)", (const char *)&queryFormat, "dataSize % MEM_SUB_PAGE_SIZE == 0") )
      __debugbreak();
    map.mapOffset = v21;
    map.mapSize = v10;
    map.minPageCount = v17;
    if ( itemType )
      map.partIndex = 0;
    else
      map.partIndex = v11 & 3;
    v22 = v29;
    map.defragLocked = v14;
    map.pool = pool;
    *v22 = Stream_BackendQueue_QueueMapCmdAfter(*v29, &map);
    if ( (unsigned __int8)itemType >= STREAM_ITEM_COUNT )
    {
      LODWORD(v25) = 3;
      LODWORD(outUpdateId) = (unsigned __int8)itemType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 197, ASSERT_TYPE_ASSERT, "(unsigned)( itemType ) < (unsigned)( ( sizeof( *array_counter( allocatedBytes ) ) + 0 ) )", "itemType doesn't index ARRAY_COUNT( allocatedBytes )\n\t%i not in [0, %i)", outUpdateId, v25) )
        __debugbreak();
    }
    s_allocTracker.allocatedBytes[(unsigned __int8)itemType] += v10;
    return 2;
  }
  else
  {
    if ( v14 )
      Stream_Defrag_UnlockHandle(handle);
    return 1;
  }
}

/*
==============
Stream_Alloc_Deallocate
==============
*/
unsigned int Stream_Alloc_Deallocate(StreamItemType itemType, int itemPartIndex)
{
  int v4; 
  StreamKey *StreamKeyAtIndex; 
  unsigned int StreamKeyIndex; 
  StreamUpdateId updateId; 
  XModelSurfs *XModelSurfsAtIndex; 
  unsigned int XModelSurfsIndex; 
  StreamUpdateId v11; 
  int v12; 
  unsigned int v13; 
  GfxImage *GfxImageAtIndex; 
  unsigned int GfxImageIndex; 
  StreamUpdateId v16; 
  StreamableBits *bits; 

  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 905, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  v4 = 0;
  switch ( itemType )
  {
    case STREAM_ITEM_IMAGE:
      v12 = itemPartIndex / 4;
      v13 = itemPartIndex % 4;
      GfxImageAtIndex = DB_GetGfxImageAtIndex(v12);
      if ( !GfxImageAtIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 415, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
        __debugbreak();
      if ( v13 >= 4 )
      {
        LODWORD(bits) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 416, ASSERT_TYPE_ASSERT, "(unsigned)( imagePart ) < (unsigned)( IMAGE_STREAM_COUNT )", "imagePart doesn't index IMAGE_STREAM_COUNT\n\t%i not in [0, %i)", bits, 4) )
          __debugbreak();
      }
      if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 417, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
        __debugbreak();
      GfxImageIndex = DB_GetGfxImageIndex(GfxImageAtIndex);
      if ( StreamableBits::CheckInUse(&streamFrontendGlob->imageBits, v13 + 4 * GfxImageIndex) )
        v16 = Stream_BackendQueue_QueueUnloadImageCmd(GfxImageAtIndex, v13);
      else
        v16 = 0i64;
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_stream_concurrentImagePartLoading, "stream_concurrentImagePartLoading") )
        return Stream_Alloc_FreeImagePart(GfxImageAtIndex, v13, v16);
      for ( ; v13 < GfxImageAtIndex->streamedPartCount; ++v13 )
        v4 += Stream_Alloc_FreeImagePart(GfxImageAtIndex, v13, v16);
      return v4;
    case STREAM_ITEM_MESH:
      XModelSurfsAtIndex = DB_GetXModelSurfsAtIndex(itemPartIndex);
      if ( !XModelSurfsAtIndex )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 557, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 745, ASSERT_TYPE_ASSERT, "(modelSurfs)", (const char *)&queryFormat, "modelSurfs") )
          __debugbreak();
      }
      if ( !XModelSurfsAtIndex->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 747, ASSERT_TYPE_ASSERT, "(modelSurfs->shared)", (const char *)&queryFormat, "modelSurfs->shared") )
        __debugbreak();
      if ( (XModelSurfsAtIndex->shared->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 558, ASSERT_TYPE_ASSERT, "(XModelSurfs_IsStreamed( mesh ))", (const char *)&queryFormat, "XModelSurfs_IsStreamed( mesh )") )
        __debugbreak();
      XModelSurfsIndex = DB_GetXModelSurfsIndex(XModelSurfsAtIndex);
      if ( StreamableBits::CheckInUse(&streamFrontendGlob->meshBits, XModelSurfsIndex) )
        v11 = Stream_BackendQueue_QueueUnloadMeshCmd(XModelSurfsAtIndex);
      else
        v11 = 0i64;
      return Stream_Alloc_FreeInternal(STREAM_ITEM_MESH, XModelSurfsIndex, XModelSurfsAtIndex->shared->data.streamedDataHandle, XModelSurfsAtIndex->shared->dataSize, 0, &streamFrontendGlob->meshBits, v11);
    case STREAM_ITEM_GENERIC:
      StreamKeyAtIndex = DB_GetStreamKeyAtIndex(itemPartIndex);
      if ( !StreamKeyAtIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 581, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey") )
        __debugbreak();
      if ( (StreamKeyAtIndex->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 582, ASSERT_TYPE_ASSERT, "(!streamKey->Resident())", (const char *)&queryFormat, "!streamKey->Resident()") )
        __debugbreak();
      if ( !StreamKeyAtIndex->dataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 583, ASSERT_TYPE_ASSERT, "(streamKey->dataSize > 0)", (const char *)&queryFormat, "streamKey->dataSize > 0") )
        __debugbreak();
      StreamKeyIndex = DB_GetStreamKeyIndex(StreamKeyAtIndex);
      if ( StreamableBits::CheckInUse(&streamFrontendGlob->genericBits, StreamKeyIndex) )
      {
        StreamKey_UserUnloadedFrontend(StreamKeyAtIndex);
        updateId = Stream_BackendQueue_QueueUnloadGenericCmd(StreamKeyAtIndex);
      }
      else
      {
        updateId = 0i64;
      }
      return Stream_Alloc_FreeInternal(STREAM_ITEM_GENERIC, StreamKeyIndex, StreamKeyAtIndex->data.dataHandle, StreamKeyAtIndex->dataSize, 0, &streamFrontendGlob->genericBits, updateId);
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 934, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0") )
        __debugbreak();
      return v4;
  }
}

/*
==============
Stream_Alloc_DetermineMaxPages
==============
*/
__int64 Stream_Alloc_DetermineMaxPages(unsigned int assetSize)
{
  return truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)(assetSize + 0xFFFF) >> 16) + 1;
}

/*
==============
Stream_Alloc_DetermineMaxPagesForAllocate
==============
*/
__int64 Stream_Alloc_DetermineMaxPagesForAllocate(StreamItemType itemType, unsigned int itemPartIndex, unsigned int dataSize, const StreamableBits *bits)
{
  __int64 v6; 
  unsigned int v7; 
  GfxImage *GfxImageAtIndex; 
  GfxImageStreamLevelCountAndSize *p_levelCountAndSize; 
  int v10; 
  int v11; 
  unsigned int v12; 
  unsigned int i; 
  GfxImageStreamLevelCountAndSize *v14; 
  int v15; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  int v20; 
  unsigned int v21; 
  unsigned int *mAlloc; 
  int v23; 
  __int64 v24; 
  unsigned int *mUse; 
  int v26; 
  unsigned int v27; 
  unsigned int v28; 
  int v29; 
  unsigned int *v30; 
  int v31; 
  __int64 v32; 
  unsigned int *v33; 
  __int64 v34; 
  __int64 v35; 
  unsigned int StreamedPartCount; 
  __int64 v37; 
  int v38; 
  unsigned int v39; 
  GfxImageStreamLevelCountAndSize *v40; 
  unsigned int v41; 

  if ( itemType )
    return truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)(dataSize + 0xFFFF) >> 16) + 1;
  v6 = itemPartIndex & 3;
  v7 = itemPartIndex >> 2;
  v39 = itemPartIndex >> 2;
  GfxImageAtIndex = DB_GetGfxImageAtIndex(itemPartIndex >> 2);
  if ( !GfxImageAtIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 200, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (GfxImageAtIndex->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  if ( (unsigned int)v6 >= Image_GetStreamedPartCount(GfxImageAtIndex) )
  {
    StreamedPartCount = Image_GetStreamedPartCount(GfxImageAtIndex);
    LODWORD(v34) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v34, StreamedPartCount) )
      __debugbreak();
  }
  p_levelCountAndSize = &GfxImageAtIndex->streams[v6].levelCountAndSize;
  if ( (_DWORD)v6 )
    v10 = ((unsigned int)*p_levelCountAndSize >> 4) - ((unsigned int)GfxImageAtIndex->streams[(unsigned int)(v6 - 1)].levelCountAndSize >> 4);
  else
    v10 = (unsigned int)*p_levelCountAndSize >> 4;
  if ( dataSize != v10 )
  {
    if ( (GfxImageAtIndex->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
      __debugbreak();
    if ( (unsigned int)v6 >= Image_GetStreamedPartCount(GfxImageAtIndex) )
    {
      LODWORD(v35) = Image_GetStreamedPartCount(GfxImageAtIndex);
      LODWORD(v34) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v34, v35) )
        __debugbreak();
    }
    if ( (_DWORD)v6 )
      v11 = ((unsigned int)*p_levelCountAndSize >> 4) - ((unsigned int)GfxImageAtIndex->streams[(unsigned int)(v6 - 1)].levelCountAndSize >> 4);
    else
      v11 = (unsigned int)*p_levelCountAndSize >> 4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 1434, ASSERT_TYPE_ASSERT, "( dataSize ) == ( Image_ExclusivePartSize( image, imagePart ) )", "%s == %s\n\t%u, %u", "dataSize", "Image_ExclusivePartSize( image, imagePart )", dataSize, v11) )
      __debugbreak();
  }
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_stream_concurrentImagePartLoading, "stream_concurrentImagePartLoading") )
  {
    v12 = 0;
    for ( i = 0; i < GfxImageAtIndex->streamedPartCount; v12 += truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)(unsigned int)(v15 + 0xFFFF) >> 16) + 1 )
    {
      if ( (GfxImageAtIndex->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
        __debugbreak();
      if ( i >= Image_GetStreamedPartCount(GfxImageAtIndex) )
      {
        LODWORD(v35) = Image_GetStreamedPartCount(GfxImageAtIndex);
        LODWORD(v34) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v34, v35) )
          __debugbreak();
      }
      v14 = &GfxImageAtIndex->streams[i].levelCountAndSize;
      if ( i )
        v15 = ((unsigned int)*v14 >> 4) - (*((_DWORD *)&GfxImageAtIndex->levelCount + 10 * i) >> 4);
      else
        v15 = (unsigned int)*v14 >> 4;
      ++i;
    }
    return v12;
  }
  else
  {
    v17 = Image_ExclusivePartSize(GfxImageAtIndex, v6);
    v18 = 0;
    v19 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)(v17 + 0xFFFF) >> 16) + 1;
    v41 = v19;
    if ( (_DWORD)v6 )
    {
      v20 = 4 * v7;
      v38 = 4 * v7;
      v40 = &GfxImageAtIndex->streams[0].levelCountAndSize;
      do
      {
        v21 = v20 + v18;
        if ( v20 + v18 >= bits->mBitCount )
        {
          LODWORD(v35) = bits->mBitCount;
          LODWORD(v34) = v20 + v18;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        mAlloc = bits->mAlloc;
        if ( !bits->mAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v23 = 1 << (v21 & 0x1F);
        v24 = (__int64)(int)v21 >> 5;
        if ( (v23 & mAlloc[v24]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 1453, ASSERT_TYPE_ASSERT, "(bits.CheckAlloc( imagePartIndex ))", (const char *)&queryFormat, "bits.CheckAlloc( imagePartIndex )") )
          __debugbreak();
        if ( v21 >= bits->mBitCount )
        {
          LODWORD(v35) = bits->mBitCount;
          LODWORD(v34) = v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 371, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        mUse = bits->mUse;
        if ( !mUse && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        if ( (v23 & mUse[v24]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 1454, ASSERT_TYPE_ASSERT, "(bits.CheckInUse( imagePartIndex ))", (const char *)&queryFormat, "bits.CheckInUse( imagePartIndex )") )
          __debugbreak();
        if ( (GfxImageAtIndex->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
          __debugbreak();
        if ( v18 >= Image_GetStreamedPartCount(GfxImageAtIndex) )
        {
          LODWORD(v35) = Image_GetStreamedPartCount(GfxImageAtIndex);
          LODWORD(v34) = v18;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        if ( v18 )
          v26 = ((unsigned int)*v40 >> 4) - (*((_DWORD *)&GfxImageAtIndex->levelCount + 10 * v18) >> 4);
        else
          v26 = (unsigned int)*v40 >> 4;
        v27 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)(unsigned int)(v26 + 0xFFFF) >> 16);
        v40 += 10;
        ++v18;
        v20 = v38;
        v19 = v41 + v27 + 1;
        v41 = v19;
      }
      while ( v18 < (unsigned int)v6 );
      v7 = v39;
    }
    if ( (unsigned int)v6 >= GfxImageAtIndex->streamedPartCount )
    {
      return v19;
    }
    else
    {
      v28 = v6 + 4 * v7;
      v29 = -4 * v7;
      do
      {
        if ( v28 >= bits->mBitCount )
        {
          LODWORD(v35) = bits->mBitCount;
          LODWORD(v34) = v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        v30 = bits->mAlloc;
        if ( !bits->mAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v31 = 1 << (v28 & 0x1F);
        v32 = (__int64)(int)v28 >> 5;
        if ( (v31 & v30[v32]) != 0 )
        {
          LODWORD(v37) = v6;
          LODWORD(v35) = v29 + v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 1462, ASSERT_TYPE_ASSERT, "( !bits.CheckAlloc( imagePartIndex ) )", "%s part %u already allocated while trying to allocate part %u", GfxImageAtIndex->name, v35, v37) )
            __debugbreak();
        }
        if ( v28 >= bits->mBitCount )
        {
          LODWORD(v35) = bits->mBitCount;
          LODWORD(v34) = v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 371, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v34, v35) )
            __debugbreak();
        }
        v33 = bits->mUse;
        if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        if ( (v31 & v33[v32]) != 0 )
        {
          LODWORD(v37) = v6;
          LODWORD(v35) = v29 + v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 1463, ASSERT_TYPE_ASSERT, "( !bits.CheckInUse( imagePartIndex ) )", "%s part %u already in use while trying to allocate part %u", GfxImageAtIndex->name, v35, v37) )
            __debugbreak();
        }
        ++v28;
      }
      while ( v29 + v28 < GfxImageAtIndex->streamedPartCount );
      return v41;
    }
  }
}

/*
==============
Stream_Alloc_DetermineMinPages
==============
*/
__int64 Stream_Alloc_DetermineMinPages(unsigned int assetSize)
{
  unsigned int v1; 

  if ( assetSize < 0x10000 )
    return 0i64;
  v1 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)(assetSize + 0xFFFF) >> 16);
  if ( v1 <= 2 )
    return 0i64;
  else
    return v1 - 2;
}

/*
==============
Stream_Alloc_DetermineOptimalMaxPages
==============
*/
__int64 Stream_Alloc_DetermineOptimalMaxPages(const void *assetAddress, unsigned int assetSize)
{
  return truncate_cast<unsigned int,unsigned __int64>((((unsigned __int64)assetAddress + (int)assetSize + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64) - ((unsigned __int64)assetAddress & 0xFFFFFFFFFFFF0000ui64)) >> 16;
}

/*
==============
Stream_Alloc_DetermineOptimalMinPages
==============
*/
__int64 Stream_Alloc_DetermineOptimalMinPages(const void *assetAddress, unsigned int assetSize)
{
  char *v2; 
  unsigned __int64 v4; 
  __int64 result; 

  v2 = (char *)assetAddress + (int)assetSize;
  v4 = (unsigned __int64)assetAddress & 0xFFFFFFFFFFFF0000ui64;
  result = truncate_cast<unsigned int,unsigned __int64>(((unsigned __int64)(v2 + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64) - ((unsigned __int64)assetAddress & 0xFFFFFFFFFFFF0000ui64)) >> 16;
  if ( v4 < (unsigned __int64)assetAddress && (_DWORD)result )
    result = (unsigned int)(result - 1);
  if ( ((unsigned __int64)(v2 + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64) > (unsigned __int64)v2 )
  {
    if ( (_DWORD)result )
      return (unsigned int)(result - 1);
  }
  return result;
}

/*
==============
Stream_Alloc_Dump
==============
*/
void Stream_Alloc_Dump(void)
{
  unsigned int v0; 
  unsigned __int64 v1; 
  __int64 v2; 
  unsigned int v3; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  unsigned int v6; 
  StreamerMemPageCounts *p_mFreePages; 
  __int64 v8; 
  unsigned __int64 FreePhysicalSize; 
  unsigned __int64 v10; 
  StreamerMemPageCounts *p_result; 
  __int64 v12; 
  unsigned int mTotalPages; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  unsigned __int64 meshBytesOut; 
  unsigned __int64 v17; 
  unsigned __int64 imageBytesOut[2]; 
  StreamerMemPageCounts result; 
  StreamerMemPageCounts v20; 
  __int64 v21[5]; 

  imageBytesOut[1] = -2i64;
  v0 = 0;
  v1 = 0i64;
  v2 = 2i64;
  do
  {
    Sys_LockRead(&s_allocTracker.mCS);
    v3 = s_allocTracker.mFreePages.pages[(unsigned int)v1];
    Sys_UnlockRead(&s_allocTracker.mCS);
    v21[v1++] = (unsigned __int64)v3 << 16;
  }
  while ( v1 < 2 );
  v4 = s_allocTracker.allocatedBytes[0];
  v5 = s_allocTracker.allocatedBytes[1];
  v14 = s_allocTracker.allocatedBytes[2];
  Sys_LockRead(&s_allocTracker.mCS);
  mTotalPages = s_allocTracker.mTotalPages;
  Sys_UnlockRead(&s_allocTracker.mCS);
  Sys_LockRead(&s_allocTracker.mCS);
  v6 = 0;
  p_mFreePages = &s_allocTracker.mFreePages;
  v8 = 2i64;
  do
  {
    v6 += p_mFreePages->pages[0];
    p_mFreePages = (StreamerMemPageCounts *)((char *)p_mFreePages + 4);
    --v8;
  }
  while ( v8 );
  Sys_UnlockRead(&s_allocTracker.mCS);
  StreamerMemLoan::GetTotalPagesForAllLoans(&result);
  FreePhysicalSize = Mem_Paged_GetFreePhysicalSize();
  v10 = Mem_Paged_GetTotalPhysicalSize() - FreePhysicalSize;
  Stream_CalculateForced(imageBytesOut, &meshBytesOut);
  Stream_CalculateScriptForced(&v17, &v15);
  Com_MemDumpPrintf("Stream Allocation Dump\n");
  Com_MemDumpPrintf("  Streamer total pages from mem_paged %u (%zuM) - total free pages %u (%zuM)\n", mTotalPages, (unsigned __int64)mTotalPages << 16 >> 20, v6, (unsigned __int64)v6 << 16 >> 20);
  Com_MemDumpPrintf("  Streamer usage: Total:%zuM Tex:%zuM Mesh:%zuM Generic:%zuM\n", (v14 + v4 + v5) >> 20, v4 >> 20, v5 >> 20, v14 >> 20);
  Com_MemDumpPrintf("  Streamer freeCPU:%zuM, Streamer freeGPU:%zuM\n", (unsigned __int64)v21[0] >> 20, (unsigned __int64)v21[1] >> 20);
  p_result = &result;
  v12 = 0i64;
  if ( &result > &v20 )
    v2 = 0i64;
  if ( &result <= &v20 )
  {
    do
    {
      v0 += p_result->pages[0];
      p_result = (StreamerMemPageCounts *)((char *)p_result + 4);
      ++v12;
    }
    while ( v12 != v2 );
  }
  Com_MemDumpPrintf("  Streamer loans: Total:%zuM CPU:%zuM GPU:%zuM\n", (unsigned __int64)v0 << 16 >> 20, (unsigned __int64)result.pages[0] << 16 >> 20, (unsigned __int64)result.pages[1] << 16 >> 20);
  Com_MemDumpPrintf("  Forced/script: Total:%zuM Tex:%zuM/%zuM Mesh:%zuM/%zuM\n", (meshBytesOut + imageBytesOut[0] + v17 + v15) >> 20, imageBytesOut[0] >> 20, v17 >> 20, meshBytesOut >> 20, v15 >> 20);
  Stream_BackendQueue_Dump();
  Com_MemDumpPrintf("  MemPaged used:%zuM MemPaged free:%zuM\n\n", v10 >> 20, FreePhysicalSize >> 20);
}

/*
==============
Stream_Alloc_FreeGeneric
==============
*/
unsigned int Stream_Alloc_FreeGeneric(StreamKey *streamKey)
{
  unsigned int StreamKeyIndex; 
  StreamUpdateId updateId; 

  if ( !streamKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 581, ASSERT_TYPE_ASSERT, "(streamKey)", (const char *)&queryFormat, "streamKey") )
    __debugbreak();
  if ( (streamKey->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 582, ASSERT_TYPE_ASSERT, "(!streamKey->Resident())", (const char *)&queryFormat, "!streamKey->Resident()") )
    __debugbreak();
  if ( !streamKey->dataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 583, ASSERT_TYPE_ASSERT, "(streamKey->dataSize > 0)", (const char *)&queryFormat, "streamKey->dataSize > 0") )
    __debugbreak();
  StreamKeyIndex = DB_GetStreamKeyIndex(streamKey);
  if ( StreamableBits::CheckInUse(&streamFrontendGlob->genericBits, StreamKeyIndex) )
  {
    StreamKey_UserUnloadedFrontend(streamKey);
    updateId = Stream_BackendQueue_QueueUnloadGenericCmd(streamKey);
  }
  else
  {
    updateId = 0i64;
  }
  return Stream_Alloc_FreeInternal(STREAM_ITEM_GENERIC, StreamKeyIndex, streamKey->data.dataHandle, streamKey->dataSize, 0, &streamFrontendGlob->genericBits, updateId);
}

/*
==============
Stream_Alloc_FreeImage
==============
*/
unsigned int Stream_Alloc_FreeImage(const GfxImage *image, unsigned int imagePart)
{
  unsigned int GfxImageIndex; 
  int v5; 
  StreamUpdateId v6; 
  __int64 v8; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 415, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( imagePart >= 4 )
  {
    LODWORD(v8) = imagePart;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 416, ASSERT_TYPE_ASSERT, "(unsigned)( imagePart ) < (unsigned)( IMAGE_STREAM_COUNT )", "imagePart doesn't index IMAGE_STREAM_COUNT\n\t%i not in [0, %i)", v8, 4) )
      __debugbreak();
  }
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 417, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  GfxImageIndex = DB_GetGfxImageIndex(image);
  v5 = 0;
  if ( StreamableBits::CheckInUse(&streamFrontendGlob->imageBits, imagePart + 4 * GfxImageIndex) )
    v6 = Stream_BackendQueue_QueueUnloadImageCmd(image, imagePart);
  else
    v6 = 0i64;
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_stream_concurrentImagePartLoading, "stream_concurrentImagePartLoading") )
    return Stream_Alloc_FreeImagePart(image, imagePart, v6);
  for ( ; imagePart < image->streamedPartCount; ++imagePart )
    v5 += Stream_Alloc_FreeImagePart(image, imagePart, v6);
  return v5;
}

/*
==============
Stream_Alloc_FreeImagePart
==============
*/
unsigned int Stream_Alloc_FreeImagePart(const GfxImage *image, unsigned int imagePart, StreamUpdateId updateId)
{
  unsigned int GfxImageIndex; 
  unsigned __int64 data; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 541, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 542, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  GfxImageIndex = DB_GetGfxImageIndex(image);
  data = image->pixels.streamedDataHandle.data;
  v8 = imagePart + 4 * GfxImageIndex;
  v9 = Image_ExclusivePartSize(image, imagePart);
  v10 = Image_PartOffset(image, imagePart);
  return Stream_Alloc_FreeInternal(STREAM_ITEM_IMAGE, v8, (streamer_handle_t)data, v9, v10, &streamFrontendGlob->imageBits, updateId);
}

/*
==============
Stream_Alloc_FreeInternal
==============
*/
__int64 Stream_Alloc_FreeInternal(StreamItemType itemType, unsigned int itemPartIndex, streamer_handle_t assetHandle, unsigned int dataSize, unsigned int dataOffset, StreamableBits *bits, StreamUpdateId updateId)
{
  unsigned __int64 v7; 
  __int64 v8; 
  unsigned int *mLoading; 
  int v11; 
  __int64 v12; 
  unsigned int v13; 
  unsigned __int64 *v14; 
  StreamMemPool ItemPartMemPool; 
  bool v16; 
  unsigned __int8 *v17; 
  unsigned int v18; 
  StreamUpdateId mFreePagesUpdateID; 
  StreamMemPool pool; 
  unsigned int *mAlloc; 
  unsigned int *mUse; 
  __int64 v24; 
  __int64 v25; 
  FastCriticalSectionScopeWrite v26; 
  streamer_handle_t handle; 
  __int64 v28; 
  __int64 v29; 
  StreamUnmapCmdData unmap; 

  v29 = -2i64;
  v7 = dataSize;
  v8 = (int)itemPartIndex;
  handle.data = assetHandle.data;
  LODWORD(v26.cs) = dataOffset;
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 452, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  if ( (unsigned int)v8 >= bits->mBitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 288, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v8, bits->mBitCount) )
    __debugbreak();
  mLoading = bits->mLoading;
  if ( !mLoading && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v11 = 1 << (v8 & 0x1F);
  v12 = 4 * (v8 >> 5);
  v28 = v12;
  if ( (v11 & *(unsigned int *)((char *)mLoading + v12)) != 0 )
  {
    LODWORD(v25) = v8;
    LODWORD(v24) = (unsigned __int8)itemType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 454, ASSERT_TYPE_ASSERT, "( !bits.CheckLoading( itemPartIndex ) )", "Attempting to deallocate item type %u index %u that's marked as still loading", v24, v25) )
      __debugbreak();
  }
  v13 = 0;
  if ( StreamableBits::CheckAlloc(bits, v8) )
  {
    if ( !handle.data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 459, ASSERT_TYPE_ASSERT, "(assetHandle.data != 0)", (const char *)&queryFormat, "assetHandle.data != 0") )
      __debugbreak();
    if ( (unsigned __int8)itemType >= STREAM_ITEM_COUNT )
    {
      LODWORD(v25) = 3;
      LODWORD(v24) = (unsigned __int8)itemType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 203, ASSERT_TYPE_ASSERT, "(unsigned)( itemType ) < (unsigned)( ( sizeof( *array_counter( allocatedBytes ) ) + 0 ) )", "itemType doesn't index ARRAY_COUNT( allocatedBytes )\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    v14 = &s_allocTracker.allocatedBytes[(unsigned __int8)itemType];
    if ( *v14 < v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 204, ASSERT_TYPE_ASSERT, "(allocatedBytes[itemType] >= sizeInBytes)", (const char *)&queryFormat, "allocatedBytes[itemType] >= sizeInBytes") )
      __debugbreak();
    *v14 -= v7;
    ItemPartMemPool = Stream_Alloc_GetItemPartMemPool(itemType, v8);
    v16 = Stream_Defrag_LockHandle(handle);
    if ( v16 )
    {
      v17 = Stream_AddressSpace_ResolveHandle(&handle);
      v13 = Stream_Alloc_DetermineOptimalMinPages(&v17[LODWORD(v26.cs)], v7);
    }
    else if ( (unsigned int)v7 >= 0x10000 )
    {
      v18 = truncate_cast<unsigned int,unsigned __int64>((unsigned __int64)(unsigned int)(v7 + 0xFFFF) >> 16);
      if ( v18 > 2 )
        v13 = v18 - 2;
    }
    unmap.baseAddrHandle = handle;
    if ( ((__int64)v26.cs & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 490, ASSERT_TYPE_ASSERT, "(dataOffset % MEM_SUB_PAGE_SIZE == 0)", (const char *)&queryFormat, "dataOffset % MEM_SUB_PAGE_SIZE == 0") )
      __debugbreak();
    if ( (v7 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 491, ASSERT_TYPE_ASSERT, "(dataSize % MEM_SUB_PAGE_SIZE == 0)", (const char *)&queryFormat, "dataSize % MEM_SUB_PAGE_SIZE == 0") )
      __debugbreak();
    unmap.mapOffset = (unsigned int)v26.cs;
    unmap.mapSize = v7;
    unmap.minPageCount = v13;
    unmap.pool = ItemPartMemPool;
    if ( itemType )
      unmap.partIndex = 0;
    else
      unmap.partIndex = v8 & 3;
    unmap.defragLocked = v16;
    mFreePagesUpdateID = Stream_BackendQueue_QueueUnmapCmdNextFrame(updateId, &unmap);
    pool = unmap.pool;
    if ( v13 )
    {
      v26.cs = (FastCriticalSection *)&s_allocTracker;
      Sys_LockWrite(&s_allocTracker.mCS);
      StreamerMemPageCounts::AddPages(&s_allocTracker.mFreePages, pool, v13);
      if ( s_allocTracker.mFreePagesUpdateID > (unsigned __int64)mFreePagesUpdateID )
        mFreePagesUpdateID = s_allocTracker.mFreePagesUpdateID;
      s_allocTracker.mFreePagesUpdateID = mFreePagesUpdateID;
      StreamAllocTracker::AssertPageCountsCorrect(&s_allocTracker);
      FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v26);
    }
    if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 307, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
      __debugbreak();
    if ( (unsigned int)v8 >= bits->mBitCount )
    {
      LODWORD(v25) = bits->mBitCount;
      LODWORD(v24) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 308, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    mAlloc = bits->mAlloc;
    if ( !bits->mAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    mAlloc[v8 >> 5] &= ~v11;
    v12 = v28;
  }
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 355, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
    __debugbreak();
  if ( (unsigned int)v8 >= bits->mBitCount )
  {
    LODWORD(v25) = bits->mBitCount;
    LODWORD(v24) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 356, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v24, v25) )
      __debugbreak();
  }
  mUse = bits->mUse;
  if ( !mUse && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  *(unsigned int *)((char *)mUse + v12) &= ~v11;
  return v13;
}

/*
==============
Stream_Alloc_FreeMesh
==============
*/
__int64 Stream_Alloc_FreeMesh(XModelSurfs *mesh)
{
  unsigned int XModelSurfsIndex; 
  StreamUpdateId updateId; 

  if ( !mesh )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 557, ASSERT_TYPE_ASSERT, "(mesh)", (const char *)&queryFormat, "mesh") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 745, ASSERT_TYPE_ASSERT, "(modelSurfs)", (const char *)&queryFormat, "modelSurfs") )
      __debugbreak();
  }
  if ( !mesh->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 747, ASSERT_TYPE_ASSERT, "(modelSurfs->shared)", (const char *)&queryFormat, "modelSurfs->shared") )
    __debugbreak();
  if ( (mesh->shared->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 558, ASSERT_TYPE_ASSERT, "(XModelSurfs_IsStreamed( mesh ))", (const char *)&queryFormat, "XModelSurfs_IsStreamed( mesh )") )
    __debugbreak();
  XModelSurfsIndex = DB_GetXModelSurfsIndex(mesh);
  if ( StreamableBits::CheckInUse(&streamFrontendGlob->meshBits, XModelSurfsIndex) )
    updateId = Stream_BackendQueue_QueueUnloadMeshCmd(mesh);
  else
    updateId = 0i64;
  return Stream_Alloc_FreeInternal(STREAM_ITEM_MESH, XModelSurfsIndex, mesh->shared->data.streamedDataHandle, mesh->shared->dataSize, 0, &streamFrontendGlob->meshBits, updateId);
}

/*
==============
Stream_Alloc_FreePagesForMemPaged
==============
*/
StreamAllocResult Stream_Alloc_FreePagesForMemPaged(StreamMemPool pool, unsigned int pageCount, bool backendFlushPossible, StreamUpdateId *outUpdateId, bool *outFlushedBackend)
{
  __int64 sortListRead; 
  AggressiveLevelInitEvictor evictor; 
  AggressiveLevelInitEvictor v13; 
  RuntimeEvictor v14; 

  if ( streamFrontendGlob->levelInit.useLevelInitEvictor <= 0 )
  {
    sortListRead = streamFrontendGlob->sortListRead;
    *(_QWORD *)&v14.mDistance.mValue = 0x10000i64;
    v14.mSortList = &streamFrontendGlob->sortLists[sortListRead];
    if ( Stream_Alloc_FreePages_RuntimeEvictor_(&v14, backendFlushPossible, pool, pageCount, outUpdateId, outFlushedBackend) == TASK_CREATE_FAIL )
    {
      return 2;
    }
    else
    {
      v13.mAllowForced = 0;
      *(_QWORD *)&v13.mImagePart = 3i64;
      v13.mMaxPotentialBackendPages = 0;
      return Stream_Alloc_FreePages_AggressiveLevelInitEvictor_(&v13, backendFlushPossible, pool, pageCount, outUpdateId, outFlushedBackend);
    }
  }
  else
  {
    evictor.mAllowForced = 0;
    *(_QWORD *)&evictor.mImagePart = 3i64;
    evictor.mMaxPotentialBackendPages = 0;
    return Stream_Alloc_FreePages_AggressiveLevelInitEvictor_(&evictor, 1, pool, pageCount, outUpdateId, outFlushedBackend);
  }
}

/*
==============
Stream_Alloc_GetBytesAllocated
==============
*/
unsigned __int64 Stream_Alloc_GetBytesAllocated(StreamItemType type)
{
  int v3; 
  int v4; 

  if ( (unsigned __int8)type >= STREAM_ITEM_COUNT )
  {
    v4 = 3;
    v3 = (unsigned __int8)type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 210, ASSERT_TYPE_ASSERT, "(unsigned)( itemType ) < (unsigned)( ( sizeof( *array_counter( allocatedBytes ) ) + 0 ) )", "itemType doesn't index ARRAY_COUNT( allocatedBytes )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return s_allocTracker.allocatedBytes[(unsigned __int8)type];
}

/*
==============
Stream_Alloc_GetFreeBytes
==============
*/
unsigned __int64 Stream_Alloc_GetFreeBytes()
{
  unsigned int v0; 
  StreamerMemPageCounts *p_mFreePages; 
  __int64 v2; 

  Sys_LockRead(&s_allocTracker.mCS);
  v0 = 0;
  p_mFreePages = &s_allocTracker.mFreePages;
  v2 = 2i64;
  do
  {
    v0 += p_mFreePages->pages[0];
    p_mFreePages = (StreamerMemPageCounts *)((char *)p_mFreePages + 4);
    --v2;
  }
  while ( v2 );
  Sys_UnlockRead(&s_allocTracker.mCS);
  return (unsigned __int64)v0 << 16;
}

/*
==============
Stream_Alloc_GetFreeBytesForPool
==============
*/
unsigned __int64 Stream_Alloc_GetFreeBytesForPool(StreamMemPool pool)
{
  __int64 v1; 
  unsigned int v2; 
  int v4; 
  int v5; 

  v1 = (unsigned int)pool;
  Sys_LockRead(&s_allocTracker.mCS);
  if ( (unsigned int)v1 >= 2 )
  {
    v5 = 2;
    v4 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 32, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = s_allocTracker.mFreePages.pages[v1];
  Sys_UnlockRead(&s_allocTracker.mCS);
  return (unsigned __int64)v2 << 16;
}

/*
==============
Stream_Alloc_GetImageLoadedBytes
==============
*/
__int64 Stream_Alloc_GetImageLoadedBytes(const GfxImage *image)
{
  __int64 v3; 
  unsigned int v4; 
  unsigned int i; 
  StreamFrontendGlob *v6; 
  unsigned int v7; 
  unsigned int *mUse; 
  unsigned int v9; 
  GfxImageStreamLevelCountAndSize *p_levelCountAndSize; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 

  if ( (image->flags & 0x40) == 0 )
    return image->totalSize;
  v3 = 0i64;
  v4 = 0;
  for ( i = DB_GetGfxImageIndex(image); v4 < image->streamedPartCount; ++v4 )
  {
    v6 = streamFrontendGlob;
    v7 = v4 + 4 * i;
    if ( v7 >= streamFrontendGlob->imageBits.mBitCount )
    {
      LODWORD(v13) = streamFrontendGlob->imageBits.mBitCount;
      LODWORD(v12) = v4 + 4 * i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 371, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    mUse = v6->imageBits.mUse;
    if ( !mUse && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    v9 = mUse[(__int64)(int)v7 >> 5];
    if ( _bittest((const int *)&v9, v7 & 0x1F) )
    {
      if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
        __debugbreak();
      if ( v4 >= Image_GetStreamedPartCount(image) )
      {
        LODWORD(v13) = Image_GetStreamedPartCount(image);
        LODWORD(v12) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      p_levelCountAndSize = &image->streams[v4].levelCountAndSize;
      if ( v4 )
        v11 = ((unsigned int)*p_levelCountAndSize >> 4) - (*((_DWORD *)&image->levelCount + 10 * v4) >> 4);
      else
        v11 = (unsigned int)*p_levelCountAndSize >> 4;
      v3 += v11;
    }
  }
  return v3;
}

/*
==============
Stream_Alloc_GetImageLoadedPartCount
==============
*/
__int64 Stream_Alloc_GetImageLoadedPartCount(const GfxImage *image)
{
  unsigned int GfxImageIndex; 
  unsigned int v3; 
  __int64 result; 
  unsigned int v5; 
  StreamFrontendGlob *v6; 
  unsigned int *mUse; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 1868, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (image->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 1869, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
    __debugbreak();
  GfxImageIndex = DB_GetGfxImageIndex(image);
  v3 = 0;
  LOBYTE(result) = image->streamedPartCount;
  v5 = 4 * GfxImageIndex;
  if ( !(_BYTE)result )
    return (unsigned __int8)result;
  while ( 1 )
  {
    v6 = streamFrontendGlob;
    if ( v5 >= streamFrontendGlob->imageBits.mBitCount )
    {
      LODWORD(v10) = streamFrontendGlob->imageBits.mBitCount;
      LODWORD(v9) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 371, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    mUse = v6->imageBits.mUse;
    if ( !mUse && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    v8 = mUse[(__int64)(int)v5 >> 5];
    if ( !_bittest((const int *)&v8, v5 & 0x1F) )
      break;
    LODWORD(result) = image->streamedPartCount;
    ++v3;
    ++v5;
    if ( v3 >= (unsigned int)result )
      return (unsigned __int8)result;
  }
  return v3;
}

/*
==============
Stream_Alloc_GetImagePartToFree
==============
*/
int Stream_Alloc_GetImagePartToFree(const StreamSortListFrame *sortList, StreamDistance distSkip)
{
  return Stream_Alloc_GetImagePartToFree(sortList, distSkip, 0i64);
}

/*
==============
Stream_Alloc_GetImagePartToFree
==============
*/
__int64 Stream_Alloc_GetImagePartToFree(const StreamSortListFrame *sortList, StreamDistance distSkip, unsigned __int64 wantedInclusiveSize)
{
  volatile int *v3; 
  __int64 v4; 
  FastCriticalSection *p_mCS; 
  __int64 v6; 
  const StreamSortListFrame *v7; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int *v13; 
  volatile int *v14; 
  const StreamSortListFrame **v15; 
  unsigned int *p_mValue; 
  unsigned int *v17; 
  char *v18; 
  unsigned int *v19; 
  __int64 v20; 
  FastCriticalSection *v21; 
  const StreamSortListFrame *v22; 
  unsigned int mValue; 
  char v24; 

  mValue = distSkip.mValue;
  v22 = sortList;
  v20 = -2i64;
  v3 = streamFrontendGlob->imageTouchBits[streamFrontendGlob->touchBufferIndex];
  v10 = mValue;
  if ( mValue > 0x10000 )
    v10 = mValue - 1;
  v12 = -1;
  v24 = 0;
  v11 = -1;
  v4 = (__int64)v22;
  v13 = &v12;
  v14 = v3;
  v15 = &v22;
  p_mValue = &mValue;
  v17 = &v10;
  v18 = &v24;
  v19 = &v11;
  p_mCS = &v22->imageSortList.mCS;
  v21 = &v22->imageSortList.mCS;
  if ( v22 == (const StreamSortListFrame *)-4014096i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 252, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
    __debugbreak();
  Sys_LockRead(p_mCS);
  StreamSortList_327680_::IterateRange__lambda_9eb1fbbfb74bb5511210e4dd8eced05b___(v4 + 1351680, 0, (const Stream_Alloc_GetImagePartToFree::__l2::<lambda_9eb1fbbfb74bb5511210e4dd8eced05b> *)(unsigned int)(*(_DWORD *)(v4 + 4014084) - 1));
  Sys_UnlockRead(p_mCS);
  if ( v11 != -1 )
    return v11;
  if ( v24 )
    return 4294967294i64;
  v6 = (int)v12;
  if ( v12 == -1 )
    return v11;
  v7 = v22;
  if ( v12 >= 0x50000 )
  {
    LODWORD(v9) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_sortlist.h", 354, ASSERT_TYPE_ASSERT, "(unsigned)( assetIndex ) < (unsigned)( ( sizeof( *array_counter( mDistances ) ) + 0 ) )", "assetIndex doesn't index ARRAY_COUNT( mDistances )\n\t%i not in [0, %i)", v9, 327680) )
      __debugbreak();
  }
  if ( v10 > v7->imagePartDistance.mDistances[v6].mValue || v24 )
    return 4294967294i64;
  else
    return v11;
}

/*
==============
Stream_Alloc_GetItemMemPool
==============
*/
StreamMemPool Stream_Alloc_GetItemMemPool(StreamItemType itemType, int assetIndex)
{
  int v3; 

  v3 = 4 * assetIndex;
  if ( itemType )
    v3 = assetIndex;
  return Stream_Alloc_GetItemPartMemPool(itemType, v3);
}

/*
==============
Stream_Alloc_GetItemPartMemPool
==============
*/
_BOOL8 Stream_Alloc_GetItemPartMemPool(StreamItemType itemType, int itemPartIndex)
{
  unsigned int v4; 

  v4 = MAX_STREAM_ITEM_PART_COUNTS[(unsigned __int8)itemType];
  if ( itemPartIndex >= v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 979, ASSERT_TYPE_ASSERT, "(unsigned)( itemPartIndex ) < (unsigned)( MAX_STREAM_ITEM_PART_COUNTS[itemType] )", "itemPartIndex doesn't index MAX_STREAM_ITEM_PART_COUNTS[itemType]\n\t%i not in [0, %i)", itemPartIndex, v4) )
    __debugbreak();
  if ( itemType == STREAM_ITEM_IMAGE )
    return 1i64;
  if ( itemType == STREAM_ITEM_MESH )
    return 0i64;
  if ( itemType != STREAM_ITEM_GENERIC )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 993, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0") )
      __debugbreak();
    return 0i64;
  }
  return (DB_GetStreamKeyAtIndex(itemPartIndex)->flags & 1) == 0;
}

/*
==============
Stream_Alloc_GetMemInfo
==============
*/
void Stream_Alloc_GetMemInfo(StreamMemInfo *memInfo)
{
  unsigned __int64 i; 
  unsigned int v3; 

  for ( i = 0i64; i < 2; ++i )
  {
    Sys_LockRead(&s_allocTracker.mCS);
    v3 = s_allocTracker.mFreePages.pages[(unsigned int)i];
    Sys_UnlockRead(&s_allocTracker.mCS);
    memInfo->unused[i] = (unsigned __int64)v3 << 16;
  }
  memInfo->images = s_allocTracker.allocatedBytes[0];
  memInfo->meshes = s_allocTracker.allocatedBytes[1];
  memInfo->generics = s_allocTracker.allocatedBytes[2];
}

/*
==============
Stream_Alloc_GetMemPoolFromStreamMemPool
==============
*/
__int64 Stream_Alloc_GetMemPoolFromStreamMemPool(StreamMemPool pool)
{
  if ( pool == MOVEMENT )
    return 0i64;
  if ( pool != DODGE )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 951, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
      __debugbreak();
    return 0i64;
  }
  return 1i64;
}

/*
==============
Stream_Alloc_GetStreamMemPoolFromMemPool
==============
*/
__int64 Stream_Alloc_GetStreamMemPoolFromMemPool(Mem_Pool pool)
{
  __int32 v1; 

  if ( pool == MEM_POOL_MAIN )
    return 0i64;
  v1 = pool - 1;
  if ( v1 && v1 != 1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 972, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
      __debugbreak();
    return 0i64;
  }
  return 1i64;
}

/*
==============
Stream_Alloc_GetTotalBytes
==============
*/
unsigned __int64 Stream_Alloc_GetTotalBytes()
{
  unsigned int mTotalPages; 

  Sys_LockRead(&s_allocTracker.mCS);
  mTotalPages = s_allocTracker.mTotalPages;
  Sys_UnlockRead(&s_allocTracker.mCS);
  return (unsigned __int64)mTotalPages << 16;
}

/*
==============
Stream_Alloc_GetTotalBytesAllocated
==============
*/
__int64 Stream_Alloc_GetTotalBytesAllocated()
{
  __int64 v0; 
  int i; 
  __int64 v2; 
  __int64 v4; 
  __int64 v5; 

  v0 = 0i64;
  for ( i = 0; i < 3; ++i )
  {
    if ( (unsigned __int8)i >= 3u )
    {
      LODWORD(v5) = 3;
      LODWORD(v4) = (unsigned __int8)i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 210, ASSERT_TYPE_ASSERT, "(unsigned)( itemType ) < (unsigned)( ( sizeof( *array_counter( allocatedBytes ) ) + 0 ) )", "itemType doesn't index ARRAY_COUNT( allocatedBytes )\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    v2 = (unsigned __int8)i;
    v0 += s_allocTracker.allocatedBytes[v2];
  }
  return v0;
}

/*
==============
Stream_Alloc_GetTotalBytesForPool
==============
*/
unsigned __int64 Stream_Alloc_GetTotalBytesForPool(StreamMemPool pool)
{
  unsigned int mTotalPages; 

  Sys_LockRead(&s_allocTracker.mCS);
  mTotalPages = s_allocTracker.mTotalPages;
  Sys_UnlockRead(&s_allocTracker.mCS);
  return (unsigned __int64)mTotalPages << 16;
}

/*
==============
Stream_Alloc_InitialHandoffFromMemPaged
==============
*/
void Stream_Alloc_InitialHandoffFromMemPaged(const StreamerMemPageCounts *pageCounts)
{
  int v1; 
  const StreamerMemPageCounts *v2; 
  __int64 v3; 
  __int64 v4; 
  const StreamerMemPageCounts *v5; 
  unsigned int v6; 
  __int64 v7; 
  const StreamerMemPageCounts *v8; 
  float v9; 
  __int64 v10; 
  const StreamerMemPageCounts *v11; 
  __int64 v12; 
  unsigned __int64 i; 
  float v14; 
  int v15; 
  __int64 v16; 
  StreamerMemPageCounts *p_mFreePages; 
  unsigned int v18; 
  unsigned int v19; 
  StreamerMemPageCounts *v20; 
  __int64 j; 

  v1 = 0;
  v2 = pageCounts;
  v3 = 2i64;
  v4 = 2i64;
  v5 = pageCounts;
  v6 = 0;
  v7 = 0i64;
  v8 = v2 + 1;
  if ( v2 > &v2[1] )
    v4 = 0i64;
  if ( v2 <= &v2[1] )
  {
    do
    {
      v6 += v2->pages[0];
      v2 = (const StreamerMemPageCounts *)((char *)v2 + 4);
      ++v7;
    }
    while ( v7 != v4 );
  }
  v10 = 0i64;
  v11 = v5;
  v12 = 0i64;
  if ( v5 <= v8 )
  {
    do
    {
      v10 = (unsigned int)(v11->pages[0] + v10);
      v11 = (const StreamerMemPageCounts *)((char *)v11 + 4);
      ++v12;
    }
    while ( v12 != v4 );
  }
  v9 = (float)((unsigned __int64)v6 << 16);
  Com_Printf(35, "Stream_Alloc_InitialHandoffFromMemPaged: Received %u pages (%.2f MB) total from mem_paged:\n", v10, (float)(v9 * 0.00000095367432));
  for ( i = 0i64; i < 2; ++i )
  {
    v14 = (float)((unsigned __int64)v5->pages[(unsigned int)i] << 16);
    Com_Printf(35, "Stream_Alloc_InitialHandoffFromMemPaged:    Pool %zu: %u pages (%.2f MB)\n", i, v5->pages[(unsigned int)i], (float)(v14 * 0.00000095367432));
  }
  v15 = 0;
  s_allocTracker.mFreePages.pages[0] += v5->pages[0];
  s_allocTracker.mFreePages.pages[1] += v5->pages[1];
  v16 = 0i64;
  if ( v5 <= v8 )
  {
    do
    {
      v15 += v5->pages[0];
      v5 = (const StreamerMemPageCounts *)((char *)v5 + 4);
      ++v16;
    }
    while ( v16 != v4 );
  }
  p_mFreePages = &s_allocTracker.mFreePages;
  v18 = v15 + s_allocTracker.mTotalPages;
  v19 = 0;
  s_allocTracker.mTotalPages += v15;
  v20 = &s_allocTracker.mFreePages;
  do
  {
    v19 += v20->pages[0];
    v20 = (StreamerMemPageCounts *)((char *)v20 + 4);
    --v3;
  }
  while ( v3 );
  if ( v19 > v18 )
  {
    for ( j = 0i64; j != 2; ++j )
    {
      v1 += p_mFreePages->pages[0];
      p_mFreePages = (StreamerMemPageCounts *)((char *)p_mFreePages + 4);
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 75, ASSERT_TYPE_ASSERT, "( mFreePages.TotalPages() ) <= ( mTotalPages )", "%s <= %s\n\t%u, %u", "mFreePages.TotalPages()", "mTotalPages", v1, v18) )
      __debugbreak();
  }
}

/*
==============
Stream_Alloc_LoadedGeneric
==============
*/
void Stream_Alloc_LoadedGeneric(const StreamKey *streamKey)
{
  unsigned int StreamKeyIndex; 
  StreamFrontendGlob *v3; 
  __int64 v4; 
  unsigned int *mAlloc; 
  unsigned int v6; 

  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 389, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  StreamKeyIndex = DB_GetStreamKeyIndex(streamKey);
  v3 = streamFrontendGlob;
  v4 = (int)StreamKeyIndex;
  if ( StreamKeyIndex >= streamFrontendGlob->genericBits.mBitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", StreamKeyIndex, streamFrontendGlob->genericBits.mBitCount) )
    __debugbreak();
  mAlloc = v3->genericBits.mAlloc;
  if ( !mAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v6 = mAlloc[v4 >> 5];
  if ( !_bittest((const int *)&v6, v4 & 0x1F) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 392, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->genericBits.CheckAlloc( keyIndex ))", (const char *)&queryFormat, "streamFrontendGlob->genericBits.CheckAlloc( keyIndex )") )
    __debugbreak();
  StreamableBits::SetInUse(&streamFrontendGlob->genericBits, v4);
  StreamKey_UserLoadedFrontend(streamKey);
  Stream_BackendQueue_QueueLoadGenericCmd(streamKey);
}

/*
==============
Stream_Alloc_LoadedImage
==============
*/
void Stream_Alloc_LoadedImage(const GfxImage *image, unsigned int imagePart)
{
  __int64 v3; 
  unsigned int v4; 
  unsigned int v5; 
  __int64 v6; 
  StreamFrontendGlob *v7; 
  unsigned int *mAlloc; 
  int v9; 
  __int64 v10; 
  StreamFrontendGlob *v11; 
  unsigned int *mUse; 
  StreamFrontendGlob *v13; 
  int v14; 
  unsigned int *v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 

  v3 = imagePart;
  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 344, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( (unsigned int)v3 >= 4 )
  {
    LODWORD(v17) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 345, ASSERT_TYPE_ASSERT, "(unsigned)( imagePart ) < (unsigned)( IMAGE_STREAM_COUNT )", "imagePart doesn't index IMAGE_STREAM_COUNT\n\t%i not in [0, %i)", v17, 4) )
      __debugbreak();
  }
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 346, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  Stream_BackendQueue_QueueLoadImageCmd(image, v3);
  v4 = 4 * DB_GetGfxImageIndex(image);
  if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_stream_concurrentImagePartLoading, "stream_concurrentImagePartLoading") && (_DWORD)v3 )
  {
    v5 = v4;
    v6 = v3;
    do
    {
      v7 = streamFrontendGlob;
      if ( v5 >= streamFrontendGlob->imageBits.mBitCount )
      {
        LODWORD(v18) = streamFrontendGlob->imageBits.mBitCount;
        LODWORD(v17) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      mAlloc = v7->imageBits.mAlloc;
      if ( !mAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v9 = 1 << (v5 & 0x1F);
      v10 = (__int64)(int)v5 >> 5;
      if ( (v9 & mAlloc[v10]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 364, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->imageBits.CheckAlloc( imagePartIndex ))", (const char *)&queryFormat, "streamFrontendGlob->imageBits.CheckAlloc( imagePartIndex )") )
        __debugbreak();
      v11 = streamFrontendGlob;
      if ( v5 >= streamFrontendGlob->imageBits.mBitCount )
      {
        LODWORD(v18) = streamFrontendGlob->imageBits.mBitCount;
        LODWORD(v17) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 371, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      mUse = v11->imageBits.mUse;
      if ( !mUse && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      if ( (v9 & mUse[v10]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 365, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->imageBits.CheckInUse( imagePartIndex ))", (const char *)&queryFormat, "streamFrontendGlob->imageBits.CheckInUse( imagePartIndex )") )
        __debugbreak();
      ++v5;
      --v6;
    }
    while ( v6 );
    LODWORD(v3) = imagePart;
  }
  v13 = streamFrontendGlob;
  v14 = v4 + v3;
  if ( v4 + (unsigned int)v3 >= streamFrontendGlob->imageBits.mBitCount )
  {
    LODWORD(v18) = streamFrontendGlob->imageBits.mBitCount;
    LODWORD(v17) = v4 + v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  v15 = v13->imageBits.mAlloc;
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v16 = v15[(__int64)v14 >> 5];
  if ( !_bittest((const int *)&v16, v14 & 0x1F) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 371, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->imageBits.CheckAlloc( imagePartIndex ))", (const char *)&queryFormat, "streamFrontendGlob->imageBits.CheckAlloc( imagePartIndex )") )
    __debugbreak();
  StreamableBits::SetInUse(&streamFrontendGlob->imageBits, v14);
}

/*
==============
Stream_Alloc_LoadedMesh
==============
*/
void Stream_Alloc_LoadedMesh(const XModelSurfs *mesh)
{
  unsigned int XModelSurfsIndex; 
  StreamFrontendGlob *v3; 
  __int64 v4; 
  unsigned int *mAlloc; 
  unsigned int v6; 

  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 378, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  XModelSurfsIndex = DB_GetXModelSurfsIndex(mesh);
  v3 = streamFrontendGlob;
  v4 = (int)XModelSurfsIndex;
  if ( XModelSurfsIndex >= streamFrontendGlob->meshBits.mBitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", XModelSurfsIndex, streamFrontendGlob->meshBits.mBitCount) )
    __debugbreak();
  mAlloc = v3->meshBits.mAlloc;
  if ( !mAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v6 = mAlloc[v4 >> 5];
  if ( !_bittest((const int *)&v6, v4 & 0x1F) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 381, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->meshBits.CheckAlloc( meshIndex ))", (const char *)&queryFormat, "streamFrontendGlob->meshBits.CheckAlloc( meshIndex )") )
    __debugbreak();
  StreamableBits::SetInUse(&streamFrontendGlob->meshBits, v4);
  Stream_BackendQueue_QueueLoadMeshCmd(mesh);
}

/*
==============
Stream_Alloc_RequestPagesForMemPaged
==============
*/
void Stream_Alloc_RequestPagesForMemPaged(StreamMemPool pool, unsigned int pageCount, bool backendFlushPossible, StreamUpdateId *updateId, StreamerMemPageCounts *pagesFreed)
{
  __int64 v7; 
  StreamerMemPageCounts *v9; 
  int v10; 
  unsigned int v11; 
  StreamerMemPageCounts *v12; 
  StreamerMemPageCounts *v13; 
  __int64 v14; 
  __int64 i; 
  unsigned int mTotalPages; 
  StreamAllocResult v17; 
  StreamAllocResult v18; 
  unsigned int v19; 
  StreamerMemPageCounts *p_mFreePages; 
  __int64 v21; 
  unsigned int v22; 
  const char *CurrentThreadContextName; 
  ScopedCriticalSection v24; 

  v7 = pageCount;
  v9 = pagesFreed;
  *pagesFreed = 0i64;
  Sys_ProfBeginNamedEvent(0xFF00FFFF, "StreamAlloc_Lock");
  ScopedCriticalSection::ScopedCriticalSection(&v24, CRITSECT_STREAM_ALLOC, SCOPED_CRITSECT_NORMAL);
  Sys_ProfEndNamedEvent();
  if ( streamFrontendGlob )
  {
    LOBYTE(pagesFreed) = 0;
    v17 = Stream_Alloc_FreePagesForMemPaged(pool, v7, backendFlushPossible, updateId, (bool *)&pagesFreed);
    v18 = v17;
    if ( !(_BYTE)pagesFreed && v17 != TASK_CREATE_FAIL )
    {
      Stream_BackendQueue_ForcedFlush();
      v18 = Stream_Alloc_FreePagesForMemPaged(pool, v7, backendFlushPossible, updateId, (bool *)&pagesFreed);
    }
    Sys_LockRead(&s_allocTracker.mCS);
    v19 = 0;
    p_mFreePages = &s_allocTracker.mFreePages;
    v21 = 2i64;
    do
    {
      v19 += p_mFreePages->pages[0];
      p_mFreePages = (StreamerMemPageCounts *)((char *)p_mFreePages + 4);
      --v21;
    }
    while ( v21 );
    Sys_UnlockRead(&s_allocTracker.mCS);
    v22 = v7;
    if ( (unsigned int)v7 > v19 )
      v22 = v19;
    StreamAllocTracker::RemovePages(&s_allocTracker, pool, v22, v9);
    if ( v18 != TASK_CREATE_FAIL && backendFlushPossible )
    {
      CurrentThreadContextName = Sys_GetCurrentThreadContextName();
      Com_PrintWarning(35, "Stream_Alloc_RequestPagesForMemPaged: %s thread failed to take %u pages (%zu kb) from the streamer with error result %d. Was able to still take %u pages. Streamer has %u pages free.\n", CurrentThreadContextName, (unsigned int)v7, (v7 << 6) & 0x3FFFFFFFFFFFFFi64, (unsigned __int8)v18, v22, v19 - v22);
      Stream_Alloc_Dump();
    }
  }
  else
  {
    Sys_LockRead(&s_allocTracker.mCS);
    v10 = 0;
    v11 = 0;
    v12 = &s_allocTracker.mFreePages;
    v13 = &s_allocTracker.mFreePages;
    v14 = 2i64;
    do
    {
      v11 += v13->pages[0];
      v13 = (StreamerMemPageCounts *)((char *)v13 + 4);
      --v14;
    }
    while ( v14 );
    Sys_UnlockRead(&s_allocTracker.mCS);
    if ( (unsigned int)v7 <= v11 )
    {
      Sys_LockRead(&s_allocTracker.mCS);
      for ( i = 0i64; i != 2; ++i )
      {
        v10 += v12->pages[0];
        v12 = (StreamerMemPageCounts *)((char *)v12 + 4);
      }
      Sys_UnlockRead(&s_allocTracker.mCS);
      Sys_LockRead(&s_allocTracker.mCS);
      mTotalPages = s_allocTracker.mTotalPages;
      Sys_UnlockRead(&s_allocTracker.mCS);
      if ( v10 != mTotalPages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 1791, ASSERT_TYPE_ASSERT, "(s_allocTracker.FreePageCount() == s_allocTracker.TotalPageCount())", (const char *)&queryFormat, "s_allocTracker.FreePageCount() == s_allocTracker.TotalPageCount()") )
        __debugbreak();
      StreamAllocTracker::RemovePages(&s_allocTracker, pool, v7, v9);
    }
  }
  ScopedCriticalSection::~ScopedCriticalSection(&v24);
}

/*
==============
Stream_Alloc_ReturnPagesFromMemPaged
==============
*/
void Stream_Alloc_ReturnPagesFromMemPaged(const StreamerMemPageCounts *pages, StreamUpdateId updateID)
{
  StreamAllocTracker::AddPages(&s_allocTracker, pages, updateID);
}

/*
==============
Stream_Alloc_TakePagesForAllocate
==============
*/
char Stream_Alloc_TakePagesForAllocate(StreamMemPool pool, unsigned int pageCount, StreamDistance distance, StreamerMemLoan *optionalLoan, StreamerMemPageCounts *pagesReserved, StreamUpdateId *outUpdateId)
{
  int v10; 
  RuntimeEvictor *p_pagesTaken; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  RuntimeEvictor *v15; 
  __int64 v16; 
  unsigned int v17; 
  StreamerMemPageCounts *p_mFreePages; 
  StreamerMemPageCounts *v19; 
  __int64 v20; 
  int v21; 
  StreamUpdateId mFreePagesUpdateID; 
  bool outFlushedBackend; 
  FastCriticalSectionScopeWrite v25; 
  __int64 v26; 
  RuntimeEvictor pagesTaken; 

  v26 = -2i64;
  if ( optionalLoan )
  {
    if ( !StreamerMemLoan::Ready(optionalLoan) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 1485, ASSERT_TYPE_ASSERT, "(loan->Ready())", (const char *)&queryFormat, "loan->Ready()") )
      __debugbreak();
    pagesTaken.mSortList = NULL;
    if ( StreamerMemLoan::TotalPages(optionalLoan) < pageCount )
      StreamerMemLoan::TakeAllPages(optionalLoan, (StreamerMemPageCounts *)&pagesTaken);
    else
      StreamerMemLoan::TakePages(optionalLoan, pool, pageCount, (StreamerMemPageCounts *)&pagesTaken);
    v10 = 0;
    p_pagesTaken = &pagesTaken;
    v12 = 2i64;
    v13 = 2i64;
    do
    {
      v10 += LODWORD(p_pagesTaken->mSortList);
      p_pagesTaken = (RuntimeEvictor *)((char *)p_pagesTaken + 4);
      --v13;
    }
    while ( v13 );
    if ( v10 )
    {
      v25.cs = (FastCriticalSection *)&s_allocTracker;
      Sys_LockWrite(&s_allocTracker.mCS);
      s_allocTracker.mFreePages.pages[0] += LODWORD(pagesTaken.mSortList);
      s_allocTracker.mFreePages.pages[1] += HIDWORD(pagesTaken.mSortList);
      v14 = 0;
      v15 = &pagesTaken;
      v16 = 2i64;
      do
      {
        v14 += LODWORD(v15->mSortList);
        v15 = (RuntimeEvictor *)((char *)v15 + 4);
        --v16;
      }
      while ( v16 );
      v17 = v14 + s_allocTracker.mTotalPages;
      s_allocTracker.mTotalPages += v14;
      p_mFreePages = &s_allocTracker.mFreePages;
      v19 = &s_allocTracker.mFreePages;
      v20 = 2i64;
      do
      {
        LODWORD(v16) = v19->pages[0] + v16;
        v19 = (StreamerMemPageCounts *)((char *)v19 + 4);
        --v20;
      }
      while ( v20 );
      if ( (unsigned int)v16 > v17 )
      {
        v21 = 0;
        do
        {
          v21 += p_mFreePages->pages[0];
          p_mFreePages = (StreamerMemPageCounts *)((char *)p_mFreePages + 4);
          --v12;
        }
        while ( v12 );
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 75, ASSERT_TYPE_ASSERT, "( mFreePages.TotalPages() ) <= ( mTotalPages )", "%s <= %s\n\t%u, %u", "mFreePages.TotalPages()", "mTotalPages", v21, v17) )
          __debugbreak();
      }
      mFreePagesUpdateID = 0i64;
      if ( s_allocTracker.mFreePagesUpdateID )
        mFreePagesUpdateID = s_allocTracker.mFreePagesUpdateID;
      s_allocTracker.mFreePagesUpdateID = mFreePagesUpdateID;
      FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v25);
    }
  }
  pagesTaken.mDistance.mValue = distance.mValue;
  pagesTaken.mFailedToFree = 0;
  pagesTaken.mSortList = &streamFrontendGlob->sortLists[streamFrontendGlob->sortListRead];
  outFlushedBackend = 0;
  if ( Stream_Alloc_FreePages_RuntimeEvictor_(&pagesTaken, 0, pool, pageCount, outUpdateId, &outFlushedBackend) != TASK_CREATE_FAIL )
    return 0;
  StreamAllocTracker::TakeFreePages(&s_allocTracker, pool, pageCount, pagesReserved);
  return 1;
}

/*
==============
Stream_GenericIsLoaded
==============
*/
bool Stream_GenericIsLoaded(const StreamKey *streamKey)
{
  int StreamKeyIndex; 

  if ( !streamKey->dataSize || (streamKey->flags & 2) != 0 )
    return 1;
  StreamKeyIndex = DB_GetStreamKeyIndex(streamKey);
  return StreamableBits::CheckLoaded(&streamFrontendGlob->genericBits, StreamKeyIndex);
}

/*
==============
Stream_GenericIsSafeToUse
==============
*/
char Stream_GenericIsSafeToUse(const StreamKey *streamKey)
{
  int StreamKeyIndex; 
  StreamKeyData *p_data; 
  char v4; 
  unsigned __int8 *data; 

  if ( !streamKey->dataSize || (streamKey->flags & 2) != 0 )
    return 1;
  StreamKeyIndex = DB_GetStreamKeyIndex(streamKey);
  if ( !StreamableBits::CheckLoaded(&streamFrontendGlob->genericBits, StreamKeyIndex) || RequestBits::CheckDanger(&streamFrontendGlob->genericRequest, StreamKeyIndex) || RequestBits::CheckFreeable(&streamFrontendGlob->genericRequest, StreamKeyIndex) )
    return 0;
  p_data = &streamKey->data;
  v4 = 1;
  if ( (streamKey->flags & 2) != 0 )
    data = (unsigned __int8 *)p_data->dataHandle.data;
  else
    data = Stream_AddressSpace_ResolveHandle(&p_data->dataHandle);
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 807, ASSERT_TYPE_ASSERT, "(!isSafeToUse || streamKey->Data())", (const char *)&queryFormat, "!isSafeToUse || streamKey->Data()") )
  {
    __debugbreak();
    return 1;
  }
  return v4;
}

/*
==============
Stream_MeshIsLoaded
==============
*/
bool Stream_MeshIsLoaded(const XModelSurfs *mesh)
{
  int XModelSurfsIndex; 

  if ( !XModelSurfs_IsStreamed(mesh) )
    return 1;
  XModelSurfsIndex = DB_GetXModelSurfsIndex(mesh);
  return StreamableBits::CheckLoaded(&streamFrontendGlob->meshBits, XModelSurfsIndex);
}

/*
==============
Stream_MeshIsSafeToUse
==============
*/
char Stream_MeshIsSafeToUse(const XModelSurfs *mesh)
{
  int XModelSurfsIndex; 
  XSurfaceShared *shared; 
  char v5; 
  unsigned __int8 *data; 

  if ( !XModelSurfs_IsStreamed(mesh) )
    return 1;
  XModelSurfsIndex = DB_GetXModelSurfsIndex(mesh);
  if ( !StreamableBits::CheckLoaded(&streamFrontendGlob->meshBits, XModelSurfsIndex) || RequestBits::CheckDanger(&streamFrontendGlob->meshRequest, XModelSurfsIndex) || RequestBits::CheckFreeable(&streamFrontendGlob->meshRequest, XModelSurfsIndex) )
    return 0;
  shared = mesh->shared;
  v5 = 1;
  if ( (shared->flags & 1) != 0 )
    data = Stream_AddressSpace_ResolveHandle(&mesh->shared->data.streamedDataHandle);
  else
    data = (unsigned __int8 *)shared->data.streamedDataHandle.data;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 779, ASSERT_TYPE_ASSERT, "(!isSafeToUse || mesh->shared->Data())", (const char *)&queryFormat, "!isSafeToUse || mesh->shared->Data()") )
  {
    __debugbreak();
    return 1;
  }
  return v5;
}

/*
==============
StreamAllocTracker::TakeFreePages
==============
*/
void StreamAllocTracker::TakeFreePages(StreamAllocTracker *this, StreamMemPool poolPreference, unsigned int pageCount, StreamerMemPageCounts *outTakenPages)
{
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  unsigned int v11; 
  FastCriticalSectionScopeWrite v12; 
  unsigned int pageCounta; 

  pageCounta = pageCount;
  v5 = (unsigned int)poolPreference;
  *outTakenPages = 0i64;
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 121, ASSERT_TYPE_ASSERT, "( Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ) )", "CRITSECT_STREAM_ALLOC not locked") )
    __debugbreak();
  v12.cs = &this->mCS;
  if ( !this && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 228, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
    __debugbreak();
  Sys_LockWrite(&this->mCS);
  if ( !StreamAllocTracker::TakeFreePagesFromPool(this, (StreamMemPool)v5, &pageCounta, outTakenPages) )
  {
    v7 = 0i64;
    v8 = v5;
    v9 = pageCounta;
    while ( 1 )
    {
      if ( v7 != v8 )
      {
        StreamAllocTracker::AssertPageCountsCorrect(this);
        v10 = (unsigned int)v7;
        v11 = this->mFreePages.pages[v10];
        if ( v9 <= v11 )
          v11 = v9;
        v9 -= v11;
        StreamerMemPageCounts::RemovePages(&this->mFreePages, (StreamMemPool)v7, v11);
        outTakenPages->pages[v10] += v11;
        StreamAllocTracker::AssertPageCountsCorrect(this);
        if ( !v9 )
          break;
      }
      if ( (unsigned __int64)++v7 >= 2 )
      {
        if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_alloc.cpp", 139, ASSERT_TYPE_ASSERT, "( pageCount ) == ( 0 )", "%s == %s\n\t%u, %u", "pageCount", "0", v9, 0i64) )
          __debugbreak();
        break;
      }
    }
  }
  FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v12);
}

/*
==============
StreamAllocTracker::TakeFreePagesFromPool
==============
*/
bool StreamAllocTracker::TakeFreePagesFromPool(StreamAllocTracker *this, StreamMemPool pool, unsigned int *pageCount, StreamerMemPageCounts *outTakenPages)
{
  __int64 v5; 
  unsigned int v8; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  int v13; 

  v5 = (unsigned int)pool;
  StreamAllocTracker::AssertPageCountsCorrect(this);
  if ( (unsigned int)v5 >= 2 )
  {
    v13 = 2;
    v11 = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 32, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  v8 = *pageCount;
  if ( *pageCount > this->mFreePages.pages[v5] )
    v8 = this->mFreePages.pages[v5];
  *pageCount -= v8;
  StreamerMemPageCounts::RemovePages(&this->mFreePages, (StreamMemPool)v5, v8);
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v12) = 2;
    LODWORD(v10) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 48, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  outTakenPages->pages[v5] += v8;
  StreamAllocTracker::AssertPageCountsCorrect(this);
  return *pageCount == 0;
}

