/*
==============
Stream_Primer::CheckOnAbort
==============
*/

bool __fastcall Stream_Primer::CheckOnAbort(Stream_Primer *this, bool calledFromAbortAndWait)
{
  return ?CheckOnAbort@Stream_Primer@@AEAA_N_N@Z(this, calledFromAbortAndWait);
}

/*
==============
Stream_Primer_GetStatusText
==============
*/

const char *__fastcall Stream_Primer_GetStatusText()
{
  return ?Stream_Primer_GetStatusText@@YAPEBDXZ();
}

/*
==============
Stream_Primer::PrimerAssets::Empty
==============
*/

bool __fastcall Stream_Primer::PrimerAssets::Empty(Stream_Primer::PrimerAssets *this)
{
  return ?Empty@PrimerAssets@Stream_Primer@@QEBA_NXZ(this);
}

/*
==============
Stream_Primer_Init
==============
*/

void Stream_Primer_Init(void)
{
  ?Stream_Primer_Init@@YAXXZ();
}

/*
==============
Stream_Primer_IsRunning
==============
*/

bool __fastcall Stream_Primer_IsRunning()
{
  return ?Stream_Primer_IsRunning@@YA_NXZ();
}

/*
==============
Stream_Primer::OnStreamedItemDone
==============
*/

void __fastcall Stream_Primer::OnStreamedItemDone(Stream_Primer *this, StreamableBits *bits, StreamItemType itemType, unsigned int itemIndex)
{
  ?OnStreamedItemDone@Stream_Primer@@QEAAXPEAUStreamableBits@@W4StreamItemType@@I@Z(this, bits, itemType, itemIndex);
}

/*
==============
Stream_Primer_UpdateOnLoadFinished
==============
*/

void __fastcall Stream_Primer_UpdateOnLoadFinished(const void *const data)
{
  ?Stream_Primer_UpdateOnLoadFinished@@YAXQEBX@Z(data);
}

/*
==============
Stream_Primer::BuildAssetsToLoadList
==============
*/

void __fastcall Stream_Primer::BuildAssetsToLoadList(Stream_Primer *this)
{
  ?BuildAssetsToLoadList@Stream_Primer@@QEAAXXZ(this);
}

/*
==============
Stream_Primer::PrimerAssets::Clear
==============
*/

bool __fastcall Stream_Primer::PrimerAssets::Clear(Stream_Primer::PrimerAssets *this, Stream_Primer *primer)
{
  return ?Clear@PrimerAssets@Stream_Primer@@QEAA_NPEAU2@@Z(this, primer);
}

/*
==============
Stream_Primer_IsLoading
==============
*/

bool __fastcall Stream_Primer_IsLoading()
{
  return ?Stream_Primer_IsLoading@@YA_NXZ();
}

/*
==============
Stream_Primer_CancelAndWait
==============
*/

void Stream_Primer_CancelAndWait(void)
{
  ?Stream_Primer_CancelAndWait@@YAXXZ();
}

/*
==============
Stream_Primer_IsPrimingImagePart
==============
*/

bool __fastcall Stream_Primer_IsPrimingImagePart(const GfxImage *image, const unsigned int partIndex)
{
  return ?Stream_Primer_IsPrimingImagePart@@YA_NPEBUGfxImage@@I@Z(image, partIndex);
}

/*
==============
Stream_Primer::PrintReadUpdate
==============
*/

void __fastcall Stream_Primer::PrintReadUpdate(Stream_Primer *this, bool readComplete, Stream_Primer_AssetInfo *baseAsset, unsigned __int64 batchSize, unsigned int numItems)
{
  ?PrintReadUpdate@Stream_Primer@@AEAAX_NPEAUStream_Primer_AssetInfo@@_KI@Z(this, readComplete, baseAsset, batchSize, numItems);
}

/*
==============
Stream_Primer_IsPrimingMesh
==============
*/

bool __fastcall Stream_Primer_IsPrimingMesh(unsigned int meshIndex)
{
  return ?Stream_Primer_IsPrimingMesh@@YA_NI@Z(meshIndex);
}

/*
==============
Stream_Primer::UpdateReadyState
==============
*/

void __fastcall Stream_Primer::UpdateReadyState(Stream_Primer *this)
{
  ?UpdateReadyState@Stream_Primer@@QEAAXXZ(this);
}

/*
==============
Stream_Primer::ChangeStatus
==============
*/

void __fastcall Stream_Primer::ChangeStatus(Stream_Primer *this, Stream_Primer::Status newStatus)
{
  ?ChangeStatus@Stream_Primer@@AEAAXW4Status@1@@Z(this, newStatus);
}

/*
==============
Stream_Primer::ClearLoadFlags
==============
*/

void __fastcall Stream_Primer::ClearLoadFlags(Stream_Primer *this)
{
  ?ClearLoadFlags@Stream_Primer@@QEAAXXZ(this);
}

/*
==============
Stream_Primer::AllocateMemory
==============
*/

StreamAllocResult __fastcall Stream_Primer::AllocateMemory(Stream_Primer *this, Stream_Primer_AssetInfo *asset, StreamUpdateId *updateId)
{
  return ?AllocateMemory@Stream_Primer@@QEAA?AW4StreamAllocResult@@PEAUStream_Primer_AssetInfo@@PEAW4StreamUpdateId@@@Z(this, asset, updateId);
}

/*
==============
Stream_Primer_RequestCancel
==============
*/

void Stream_Primer_RequestCancel(void)
{
  ?Stream_Primer_RequestCancel@@YAXXZ();
}

/*
==============
Stream_Primer_IsPrimingImageIndexPart
==============
*/

bool __fastcall Stream_Primer_IsPrimingImageIndexPart(const unsigned int imageIndex, const unsigned int partIndex)
{
  return ?Stream_Primer_IsPrimingImageIndexPart@@YA_NII@Z(imageIndex, partIndex);
}

/*
==============
Stream_Primer_LogTransientFastfile
==============
*/

void __fastcall Stream_Primer_LogTransientFastfile(const char *name)
{
  ?Stream_Primer_LogTransientFastfile@@YAXPEBD@Z(name);
}

/*
==============
Stream_Primer::ClearAssetArray
==============
*/

void __fastcall Stream_Primer::ClearAssetArray(Stream_Primer *this)
{
  ?ClearAssetArray@Stream_Primer@@AEAAXXZ(this);
}

/*
==============
Stream_Primer_IsPrimingGeneric
==============
*/

bool __fastcall Stream_Primer_IsPrimingGeneric(const StreamKey *streamKey)
{
  return ?Stream_Primer_IsPrimingGeneric@@YA_NPEBUStreamKey@@@Z(streamKey);
}

/*
==============
Stream_Primer_IsPrimingImageIndex
==============
*/

bool __fastcall Stream_Primer_IsPrimingImageIndex(const unsigned int imageIndex)
{
  return ?Stream_Primer_IsPrimingImageIndex@@YA_NI@Z(imageIndex);
}

/*
==============
Stream_Primer_IsPrimingGeneric
==============
*/

bool __fastcall Stream_Primer_IsPrimingGeneric(unsigned int assetIndex)
{
  return ?Stream_Primer_IsPrimingGeneric@@YA_NI@Z(assetIndex);
}

/*
==============
Stream_Primer::UpdateLoadingState
==============
*/

void __fastcall Stream_Primer::UpdateLoadingState(Stream_Primer *this)
{
  ?UpdateLoadingState@Stream_Primer@@QEAAXXZ(this);
}

/*
==============
Stream_Primer_IsPrimingMesh
==============
*/

bool __fastcall Stream_Primer_IsPrimingMesh(const XModelSurfs *meshSurf)
{
  return ?Stream_Primer_IsPrimingMesh@@YA_NPEBUXModelSurfs@@@Z(meshSurf);
}

/*
==============
Stream_Primer::Abort
==============
*/

void __fastcall Stream_Primer::Abort(Stream_Primer *this, bool waitUntilDone)
{
  ?Abort@Stream_Primer@@QEAAX_N@Z(this, waitUntilDone);
}

/*
==============
Stream_Primer_IsPrimingImage
==============
*/

bool __fastcall Stream_Primer_IsPrimingImage(const GfxImage *image)
{
  return ?Stream_Primer_IsPrimingImage@@YA_NPEBUGfxImage@@@Z(image);
}

/*
==============
Stream_Primer::Shutdown
==============
*/

void __fastcall Stream_Primer::Shutdown(Stream_Primer *this)
{
  ?Shutdown@Stream_Primer@@QEAAXXZ(this);
}

/*
==============
Stream_Primer_GetProgress
==============
*/

void __fastcall Stream_Primer_GetProgress(unsigned __int64 (*bytesToLoad)[3], unsigned __int64 (*bytesLoaded)[3])
{
  ?Stream_Primer_GetProgress@@YAXAEAY02_K0@Z(bytesToLoad, bytesLoaded);
}

/*
==============
Stream_Primer::FreeLoader
==============
*/

void __fastcall Stream_Primer::FreeLoader(Stream_Primer *this)
{
  ?FreeLoader@Stream_Primer@@AEAAXXZ(this);
}

/*
==============
Stream_Primer_IsAborting
==============
*/

bool __fastcall Stream_Primer_IsAborting()
{
  return ?Stream_Primer_IsAborting@@YA_NXZ();
}

/*
==============
Stream_Primer_DoWork
==============
*/

bool __fastcall Stream_Primer_DoWork(bool waitUntilDone)
{
  return ?Stream_Primer_DoWork@@YA_N_N@Z(waitUntilDone);
}

/*
==============
Stream_Primer_Shutdown
==============
*/

void Stream_Primer_Shutdown(void)
{
  ?Stream_Primer_Shutdown@@YAXXZ();
}

/*
==============
Stream_Primer::IssueNext
==============
*/

bool __fastcall Stream_Primer::IssueNext(Stream_Primer *this, StreamLoadCmd *loadCmd)
{
  return ?IssueNext@Stream_Primer@@AEAA_NAEAUStreamLoadCmd@@@Z(this, loadCmd);
}

/*
==============
Stream_Primer_Start
==============
*/

void __fastcall Stream_Primer_Start(const unsigned int *imageBits, const unsigned int *meshBits, const unsigned int *genericBits)
{
  ?Stream_Primer_Start@@YAXPEBI00@Z(imageBits, meshBits, genericBits);
}

/*
==============
Stream_Primer::OnLoadFinished
==============
*/

void __fastcall Stream_Primer::OnLoadFinished(Stream_Primer *this, Stream_Primer_AssetInfo *baseAsset, unsigned int numItems, bool success)
{
  ?OnLoadFinished@Stream_Primer@@AEAAXPEAUStream_Primer_AssetInfo@@I_N@Z(this, baseAsset, numItems, success);
}

/*
==============
Stream_Primer::ComputeAssetsToPrimeList
==============
*/

void __fastcall Stream_Primer::ComputeAssetsToPrimeList(Stream_Primer *this)
{
  ?ComputeAssetsToPrimeList@Stream_Primer@@QEAAXXZ(this);
}

/*
==============
Stream_Primer::Abort
==============
*/
void Stream_Primer::Abort(Stream_Primer *this, bool waitUntilDone)
{
  int v4; 
  const char *v5; 
  bool v6; 
  Stream_Primer::Status m_status; 
  __int32 v8; 
  __int32 v9; 
  __int32 v10; 
  bool v11; 
  StreamLoader *m_loader; 
  int v13; 

  Stream_CheckFrontendUpdateLocks();
  if ( this->m_abortActive )
  {
    if ( !waitUntilDone )
    {
      Stream_Primer::ChangeStatus(this, Primer_Inactive);
      return;
    }
  }
  else if ( this->m_status == Primer_Inactive )
  {
    return;
  }
  v4 = Sys_Milliseconds();
  v5 = "continue";
  if ( waitUntilDone )
    v5 = "wait";
  Streamer_StatusPrint("Stream_Primer - !!!!!!!!!!!!!!!!! Abort and %s !!!!!!!!!!!!!!!!!!!!!!!!! (%d ms)\n", v5, (unsigned int)(v4 - this->m_startTime));
  v6 = waitUntilDone && this->m_abortActive;
  m_status = this->m_status;
  if ( m_status )
  {
    v8 = m_status - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( !v10 )
        {
          if ( !this->m_loader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 653, ASSERT_TYPE_SANITY, "( m_loader )", (const char *)&queryFormat, "m_loader") )
            __debugbreak();
          goto LABEL_19;
        }
        if ( v10 == 1 )
        {
          v6 = this->m_loader != NULL;
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 661, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
        {
          __debugbreak();
        }
      }
    }
  }
  if ( v6 )
  {
LABEL_19:
    v11 = this->m_loader == NULL;
    this->m_abortActive = 1;
    if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 668, ASSERT_TYPE_SANITY, "( m_loader )", (const char *)&queryFormat, "m_loader") )
      __debugbreak();
    StreamLoader::Stop(this->m_loader, waitUntilDone);
    if ( waitUntilDone )
    {
      Sys_WaitWorkerCmdsOfType(WRKCMD_STREAM_UPDATE_PRIMER);
      if ( !Stream_Primer::CheckOnAbort(this, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 674, ASSERT_TYPE_ASSERT, "(CheckOnAbort( true ))", (const char *)&queryFormat, "CheckOnAbort( true )") )
        __debugbreak();
      if ( this->m_abortActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 675, ASSERT_TYPE_SANITY, "( !m_abortActive )", (const char *)&queryFormat, "!m_abortActive") )
        __debugbreak();
      m_loader = this->m_loader;
      if ( m_loader )
      {
        StreamLoader::Stop(m_loader, 1);
        Stream_Primer::FreeLoader(this);
      }
    }
  }
  Stream_Primer::Shutdown(this);
  if ( waitUntilDone )
  {
    v13 = Sys_Milliseconds();
    Streamer_StatusPrint("Stream_Primer - Abort and wait completed (%d ms)\n", (unsigned int)(v13 - this->m_startTime));
  }
}

/*
==============
Stream_Primer::AllocateMemory
==============
*/
__int64 Stream_Primer::AllocateMemory(Stream_Primer *this, Stream_Primer_AssetInfo *asset, StreamUpdateId *updateId)
{
  StreamItemType StreamItemType; 
  Stream_Logger_Item item; 
  ScopedCriticalSection v8; 
  Stream_Logger_Item result; 
  streamer_handle_t handle; 

  Sys_ProfBeginNamedEvent(0xFF00FFFF, "StreamAlloc_Lock");
  ScopedCriticalSection::ScopedCriticalSection(&v8, CRITSECT_STREAM_ALLOC, SCOPED_CRITSECT_NORMAL);
  Sys_ProfEndNamedEvent();
  Stream_Primer_AssetInfo::GetHandle(asset);
  item = *Stream_Logger_MakeItem(&result, &handle);
  Stream_Logger_OnPrimerAllocate("Stream_Primer::AllocateMemory", NULL, &item, 0);
  StreamItemType = Stream_Primer_AssetInfo::GetStreamItemType(asset);
  LOBYTE(asset) = Stream_Alloc_Allocate(StreamItemType, asset->m_assetIndex, (StreamDistance)0x10000, NULL, updateId);
  ScopedCriticalSection::~ScopedCriticalSection(&v8);
  return (unsigned __int8)asset;
}

/*
==============
Stream_Primer::BuildAssetsToLoadList
==============
*/
void Stream_Primer::BuildAssetsToLoadList(Stream_Primer *this)
{
  Stream_Primer *v1; 
  const dvar_t *v2; 
  __int64 m_missingAssetsCount; 
  unsigned __int64 v4; 
  const dvar_t *v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  int *m_imagePartsToLoad; 
  int v11; 
  unsigned int v13; 
  StreamFrontendGlob *v14; 
  unsigned int *mLoading; 
  int v16; 
  __int64 v17; 
  GfxImage *GfxImageAtIndex; 
  StreamFrontendGlob *v19; 
  unsigned int *mUse; 
  unsigned int v21; 
  unsigned int v22; 
  __int64 v23; 
  StreamFrontendGlob *v24; 
  unsigned int *mPriming; 
  __int64 v26; 
  StreamFrontendGlob *v27; 
  unsigned int *v28; 
  unsigned int *v29; 
  unsigned int v30; 
  unsigned int *m_meshSurfsToLoad; 
  int v33; 
  unsigned int v35; 
  XModelSurfs *XModelSurfsAtIndex; 
  StreamFrontendGlob *v37; 
  unsigned int *v38; 
  int v39; 
  __int64 v40; 
  __int64 v41; 
  StreamFrontendGlob *v42; 
  unsigned int *v43; 
  StreamFrontendGlob *v44; 
  unsigned int *v45; 
  unsigned int *v46; 
  unsigned int v47; 
  unsigned int *m_genericsToLoad; 
  int v50; 
  unsigned int v52; 
  StreamKey *StreamKeyAtIndex; 
  StreamFrontendGlob *v54; 
  unsigned int *v55; 
  int v56; 
  __int64 v57; 
  __int64 v58; 
  StreamFrontendGlob *v59; 
  unsigned int *v60; 
  StreamFrontendGlob *v61; 
  unsigned int *v62; 
  unsigned int *v63; 
  unsigned int v64; 
  __int64 v65; 
  unsigned __int64 v66; 
  float v67; 
  float v68; 
  __int64 v69; 
  __int64 v70; 
  unsigned int v71; 
  unsigned int v72; 
  unsigned int v73; 
  unsigned int v74; 
  unsigned int v75; 
  bool enabled; 
  Stream_Primer::SortAssetsToLoadList::__l2::<lambda_6164c4c48f2e054ffb7da71ec7f12cdd> v77; 
  __int64 inData[3]; 
  Stream_Logger_Item v80; 
  int v81; 
  int v82; 
  int v83; 
  Stream_Logger_Item item; 
  __int64 v85; 
  ScopedCriticalSection v86; 
  int v87[1408]; 
  int v88[1410]; 

  v85 = -2i64;
  v1 = this;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_Primer::BuildAssetsToLoadList");
  Stream_CheckFrontendUpdateLocks();
  if ( v1->m_status != Primer_GrowingBookkeepingLoan && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 245, ASSERT_TYPE_SANITY, "( m_status == Primer_GrowingBookkeepingLoan )", (const char *)&queryFormat, "m_status == Primer_GrowingBookkeepingLoan") )
    __debugbreak();
  v2 = DVARINT_stream_modelLodLimit;
  if ( !DVARINT_stream_modelLodLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_modelLodLimit") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.integer )
  {
    inData[0] = (__int64)v87;
    inData[1] = (__int64)v88;
    DB_EnumXAssets(ASSET_TYPE_XMODEL, _lambda_60f9a2cd64c70920df1310a8b2491be9_::_lambda_invoker_cdecl_, inData, 1);
  }
  Sys_ProfBeginNamedEvent(0xFF00FFFF, "StreamAlloc_Lock");
  ScopedCriticalSection::ScopedCriticalSection(&v86, CRITSECT_STREAM_ALLOC, SCOPED_CRITSECT_NORMAL);
  Sys_ProfEndNamedEvent();
  m_missingAssetsCount = v1->m_missingAssetsCount;
  if ( !Stream_Primer::PrimerAssets::Empty(&v1->m_assetsToPrime) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1395, ASSERT_TYPE_SANITY, "( Empty() )", (const char *)&queryFormat, "Empty()") )
    __debugbreak();
  v4 = 16 * m_missingAssetsCount + 8;
  v1->m_assetsToPrime.m_assetsSize = v4;
  v1->m_assetsToPrime.m_assets = (Stream_Primer_AssetInfo *)Stream_StreamerLoanHeap::Allocate(&v1->m_bookkeepingHeap, v4, 8ui64);
  v1->m_assetsToPrime.m_count = m_missingAssetsCount;
  v1->m_assetsToPrime.m_skipped = 0;
  Stream_Defrag_LockDefragCount();
  v5 = DCONST_DVARBOOL_stream_concurrentImagePartLoading;
  if ( !DCONST_DVARBOOL_stream_concurrentImagePartLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_concurrentImagePartLoading") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  enabled = v5->current.enabled;
  v1->m_imagePrimerSize = 0i64;
  v6 = 0;
  v71 = 0;
  v7 = 0;
  v72 = 0;
  v8 = 0;
  v73 = 0;
  m_imagePartsToLoad = (int *)v1->m_imagePartsToLoad;
  inData[0] = (__int64)v1->m_imagePartsToLoad;
  do
  {
    _ECX = *m_imagePartsToLoad;
    if ( !_ECX )
      goto LABEL_78;
    v11 = 32 * v8;
    v83 = 32 * v8;
    do
    {
      __asm { tzcnt   eax, ecx }
      v82 = _ECX & ~(1 << _EAX);
      v13 = _EAX | v11;
      v14 = streamFrontendGlob;
      if ( StreamableBits::CheckInUse(&streamFrontendGlob->imageBits, _EAX | v11) )
        goto LABEL_74;
      if ( v13 >= v14->imageBits.mBitCount )
      {
        LODWORD(v70) = v14->imageBits.mBitCount;
        LODWORD(v69) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 288, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v69, v70) )
          __debugbreak();
      }
      mLoading = v14->imageBits.mLoading;
      if ( !mLoading && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v16 = 1 << (v13 & 0x1F);
      v81 = v16;
      if ( (v16 & mLoading[(__int64)(int)v13 >> 5]) != 0 )
        goto LABEL_74;
      v17 = v13 & 3;
      GfxImageAtIndex = DB_GetGfxImageAtIndex(v13 >> 2);
      if ( (GfxImageAtIndex->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 288, ASSERT_TYPE_SANITY, "( R_IsStreamedImage( image ) )", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
        __debugbreak();
      if ( (*((_DWORD *)&GfxImageAtIndex->streams[v17].xpakEntry + 6) & 0x200i64) == 0 )
      {
        v7 = v72;
        v1 = this;
LABEL_74:
        v72 = ++v7;
LABEL_75:
        v6 = v71;
        goto LABEL_76;
      }
      if ( (v13 & 3) != 0 && !enabled )
      {
        v19 = streamFrontendGlob;
        if ( v13 - 1 >= streamFrontendGlob->imageBits.mBitCount )
        {
          LODWORD(v70) = streamFrontendGlob->imageBits.mBitCount;
          LODWORD(v69) = v13 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 371, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v69, v70) )
            __debugbreak();
        }
        mUse = v19->imageBits.mUse;
        if ( !mUse && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v21 = mUse[((int)v13 - 1i64) >> 5];
        if ( !_bittest((const int *)&v21, ((_BYTE)v13 - 1) & 0x1F) )
        {
          v7 = ++v72;
          StreamableBits::SetStaticForced(&streamFrontendGlob->imageBits, v13);
          v1 = this;
          goto LABEL_75;
        }
        v16 = v81;
      }
      if ( (GfxImageAtIndex->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
        __debugbreak();
      if ( (unsigned int)v17 >= Image_GetStreamedPartCount(GfxImageAtIndex) )
      {
        LODWORD(v70) = Image_GetStreamedPartCount(GfxImageAtIndex);
        LODWORD(v69) = v13 & 3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v69, v70) )
          __debugbreak();
      }
      if ( (v13 & 3) != 0 )
        v22 = ((unsigned int)GfxImageAtIndex->streams[v17].levelCountAndSize >> 4) - ((unsigned int)GfxImageAtIndex->streams[(unsigned int)(v17 - 1)].levelCountAndSize >> 4);
      else
        v22 = (unsigned int)GfxImageAtIndex->streams[v17].levelCountAndSize >> 4;
      v1 = this;
      this->m_imagePrimerSize += v22;
      v23 = v71;
      this->m_assetsToPrime.m_assets[v23].m_leafType = 1 << v17;
      this->m_assetsToPrime.m_assets[v23].m_assetIndex = v13;
      this->m_assetsToPrime.m_assets[v23].m_loaded = 0;
      this->m_assetsToPrime.m_assets[v23].m_data = NULL;
      this->m_assetsToPrime.m_assets[v23].m_locked = 1;
      v24 = streamFrontendGlob;
      if ( v13 >= streamFrontendGlob->imageBits.mBitCount )
      {
        LODWORD(v70) = streamFrontendGlob->imageBits.mBitCount;
        LODWORD(v69) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 547, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v69, v70) )
          __debugbreak();
      }
      mPriming = v24->imageBits.mPriming;
      if ( !mPriming && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v26 = (__int64)(int)v13 >> 5;
      mPriming[v26] |= v16;
      v27 = streamFrontendGlob;
      if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 275, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
        __debugbreak();
      if ( v13 >= v27->imageBits.mBitCount )
      {
        LODWORD(v70) = v27->imageBits.mBitCount;
        LODWORD(v69) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 276, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v69, v70) )
          __debugbreak();
      }
      v28 = v27->imageBits.mLoading;
      if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      if ( (v16 & v28[v26]) != 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 333, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->imageBits.SetLoadingConditional( index ))", (const char *)&queryFormat, "streamFrontendGlob->imageBits.SetLoadingConditional( index )") )
          __debugbreak();
      }
      else
      {
        v29 = v27->imageBits.mLoading;
        if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v29[v26] |= v16;
      }
      v80.m_type = STREAM_ITEM_IMAGE;
      v80.m_image = GfxImageAtIndex;
      item = v80;
      Stream_Logger_OnPrimerLock("Stream_Primer::BuildAssetsToLoadList", NULL, &item);
      v6 = ++v71;
      v7 = v72;
LABEL_76:
      _ECX = v82;
      v11 = v83;
    }
    while ( v82 );
    v8 = v73;
LABEL_78:
    v73 = ++v8;
    m_imagePartsToLoad = (int *)(inData[0] + 4);
    inData[0] += 4i64;
  }
  while ( v8 < 0x2800 );
  v1->m_meshPrimerSize = 0i64;
  v30 = 0;
  v74 = 0;
  m_meshSurfsToLoad = v1->m_meshSurfsToLoad;
  inData[0] = (__int64)v1->m_meshSurfsToLoad;
  while ( 2 )
  {
    _ER12 = *m_meshSurfsToLoad;
    if ( !*m_meshSurfsToLoad )
      goto LABEL_136;
    v33 = 32 * v30;
    while ( 2 )
    {
      __asm { tzcnt   eax, r12d }
      _ER12 &= ~(1 << _EAX);
      v35 = _EAX | v33;
      if ( v6 >= v1->m_missingAssetsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 351, ASSERT_TYPE_SANITY, "( assetIndex < m_missingAssetsCount )", (const char *)&queryFormat, "assetIndex < m_missingAssetsCount") )
        __debugbreak();
      XModelSurfsAtIndex = DB_GetXModelSurfsAtIndex(v35);
      if ( (*((_DWORD *)&XModelSurfsAtIndex->xpakEntry + 6) & 0x200i64) == 0 )
        goto LABEL_133;
      v37 = streamFrontendGlob;
      if ( StreamableBits::CheckInUse(&streamFrontendGlob->meshBits, v35) )
      {
LABEL_132:
        v6 = v71;
LABEL_133:
        v72 = ++v7;
        goto LABEL_134;
      }
      if ( v35 >= v37->meshBits.mBitCount )
      {
        LODWORD(v70) = v37->meshBits.mBitCount;
        LODWORD(v69) = v35;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 288, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v69, v70) )
          __debugbreak();
      }
      v38 = v37->meshBits.mLoading;
      if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v39 = 1 << (v35 & 0x1F);
      v40 = (__int64)(int)v35 >> 5;
      if ( (v39 & v38[v40]) != 0 )
        goto LABEL_131;
      if ( v35 >= 0xB000 )
      {
        LODWORD(v70) = 45056;
        LODWORD(v69) = v35;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v69, v70) )
          __debugbreak();
      }
      if ( (v39 & v87[v40]) != 0 )
      {
        if ( v35 >= 0xB000 )
        {
          LODWORD(v70) = 45056;
          LODWORD(v69) = v35;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v69, v70) )
            __debugbreak();
        }
        if ( (v39 & v88[v40]) == 0 )
        {
LABEL_131:
          v7 = v72;
          goto LABEL_132;
        }
      }
      if ( !XModelSurfsAtIndex->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 747, ASSERT_TYPE_ASSERT, "(modelSurfs->shared)", (const char *)&queryFormat, "modelSurfs->shared") )
        __debugbreak();
      if ( (XModelSurfsAtIndex->shared->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 370, ASSERT_TYPE_SANITY, "( XModelSurfs_IsStreamed( mesh ) )", (const char *)&queryFormat, "XModelSurfs_IsStreamed( mesh )") )
        __debugbreak();
      this->m_meshPrimerSize += XModelSurfsAtIndex->shared->dataSize;
      v41 = v71;
      this->m_assetsToPrime.m_assets[v41].m_leafType = STREAM_LEAF_MESH;
      this->m_assetsToPrime.m_assets[v41].m_assetIndex = v35;
      this->m_assetsToPrime.m_assets[v41].m_loaded = 0;
      this->m_assetsToPrime.m_assets[v41].m_data = NULL;
      this->m_assetsToPrime.m_assets[v41].m_locked = 1;
      v42 = streamFrontendGlob;
      if ( v35 >= streamFrontendGlob->meshBits.mBitCount )
      {
        LODWORD(v70) = streamFrontendGlob->meshBits.mBitCount;
        LODWORD(v69) = v35;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 547, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v69, v70) )
          __debugbreak();
      }
      v43 = v42->meshBits.mPriming;
      if ( !v43 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v43[v40] |= v39;
      v44 = streamFrontendGlob;
      if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 275, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
        __debugbreak();
      if ( v35 >= v44->meshBits.mBitCount )
      {
        LODWORD(v70) = v44->meshBits.mBitCount;
        LODWORD(v69) = v35;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 276, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v69, v70) )
          __debugbreak();
      }
      v45 = v44->meshBits.mLoading;
      if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      if ( (v39 & v45[v40]) != 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 382, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->meshBits.SetLoadingConditional( index ))", (const char *)&queryFormat, "streamFrontendGlob->meshBits.SetLoadingConditional( index )") )
          __debugbreak();
      }
      else
      {
        v46 = v44->meshBits.mLoading;
        if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v46[v40] |= v39;
      }
      v80.m_type = STREAM_ITEM_MESH;
      v80.m_image = (const GfxImage *)XModelSurfsAtIndex;
      item = v80;
      Stream_Logger_OnPrimerLock("Stream_Primer::BuildAssetsToLoadList", NULL, &item);
      v6 = ++v71;
      v7 = v72;
LABEL_134:
      v1 = this;
      if ( _ER12 )
        continue;
      break;
    }
    v30 = v74;
    m_meshSurfsToLoad = (unsigned int *)inData[0];
LABEL_136:
    v74 = ++v30;
    inData[0] = (__int64)++m_meshSurfsToLoad;
    if ( v30 < 0x580 )
      continue;
    break;
  }
  v1->m_genericPrimerSize = 0i64;
  v47 = 0;
  v75 = 0;
  m_genericsToLoad = v1->m_genericsToLoad;
  inData[0] = (__int64)v1->m_genericsToLoad;
  while ( 2 )
  {
    _ER12 = *m_genericsToLoad;
    if ( !*m_genericsToLoad )
      goto LABEL_182;
    v50 = 32 * v47;
    while ( 2 )
    {
      __asm { tzcnt   eax, r12d }
      _ER12 &= ~(1 << _EAX);
      v52 = _EAX | v50;
      if ( v6 >= v1->m_missingAssetsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 400, ASSERT_TYPE_SANITY, "( assetIndex < m_missingAssetsCount )", (const char *)&queryFormat, "assetIndex < m_missingAssetsCount") )
        __debugbreak();
      StreamKeyAtIndex = DB_GetStreamKeyAtIndex(v52);
      v54 = streamFrontendGlob;
      if ( StreamableBits::CheckInUse(&streamFrontendGlob->genericBits, v52) )
      {
LABEL_179:
        v72 = ++v7;
        v6 = v71;
        goto LABEL_180;
      }
      if ( v52 >= v54->genericBits.mBitCount )
      {
        LODWORD(v70) = v54->genericBits.mBitCount;
        LODWORD(v69) = v52;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 288, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v69, v70) )
          __debugbreak();
      }
      v55 = v54->genericBits.mLoading;
      if ( !v55 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v56 = 1 << (v52 & 0x1F);
      v57 = (__int64)(int)v52 >> 5;
      if ( (v56 & v55[v57]) != 0 || (*((_DWORD *)&StreamKeyAtIndex->xpakInfo + 6) & 0x200i64) == 0 )
      {
        v7 = v72;
        goto LABEL_179;
      }
      if ( (StreamKeyAtIndex->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 414, ASSERT_TYPE_SANITY, "( !streamKey->Resident() )", (const char *)&queryFormat, "!streamKey->Resident()") )
        __debugbreak();
      this->m_genericPrimerSize += StreamKeyAtIndex->dataSize;
      v58 = v71;
      this->m_assetsToPrime.m_assets[v58].m_leafType = STREAM_LEAF_GENERIC;
      this->m_assetsToPrime.m_assets[v58].m_assetIndex = v52;
      this->m_assetsToPrime.m_assets[v58].m_loaded = 0;
      this->m_assetsToPrime.m_assets[v58].m_data = NULL;
      this->m_assetsToPrime.m_assets[v58].m_locked = 1;
      v59 = streamFrontendGlob;
      if ( v52 >= streamFrontendGlob->genericBits.mBitCount )
      {
        LODWORD(v70) = streamFrontendGlob->genericBits.mBitCount;
        LODWORD(v69) = v52;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 547, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v69, v70) )
          __debugbreak();
      }
      v60 = v59->genericBits.mPriming;
      if ( !v60 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v60[v57] |= v56;
      v61 = streamFrontendGlob;
      if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 275, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
        __debugbreak();
      if ( v52 >= v61->genericBits.mBitCount )
      {
        LODWORD(v70) = v61->genericBits.mBitCount;
        LODWORD(v69) = v52;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 276, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v69, v70) )
          __debugbreak();
      }
      v62 = v61->genericBits.mLoading;
      if ( !v62 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      if ( (v56 & v62[v57]) != 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 426, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->genericBits.SetLoadingConditional( index ))", (const char *)&queryFormat, "streamFrontendGlob->genericBits.SetLoadingConditional( index )") )
          __debugbreak();
      }
      else
      {
        v63 = v61->genericBits.mLoading;
        if ( !v63 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v63[v57] |= v56;
      }
      v80.m_type = STREAM_ITEM_GENERIC;
      v80.m_image = (const GfxImage *)StreamKeyAtIndex;
      item = v80;
      Stream_Logger_OnPrimerLock("Stream_Primer::BuildAssetsToLoadList", NULL, &item);
      v6 = ++v71;
      v7 = v72;
LABEL_180:
      v1 = this;
      if ( _ER12 )
        continue;
      break;
    }
    v47 = v75;
    m_genericsToLoad = (unsigned int *)inData[0];
LABEL_182:
    v75 = ++v47;
    inData[0] = (__int64)++m_genericsToLoad;
    if ( v47 < 0x4A0 )
      continue;
    break;
  }
  Stream_Defrag_UnlockDefragCount();
  if ( v7 + v6 != v1->m_missingAssetsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 438, ASSERT_TYPE_SANITY, "( assetIndex + skippedAssetCount == m_missingAssetsCount )", (const char *)&queryFormat, "assetIndex + skippedAssetCount == m_missingAssetsCount") )
    __debugbreak();
  v1->m_missingAssetsCount -= v7;
  v64 = v1->m_missingAssetsCount;
  v1->m_assetsToPrime.m_skipped = v7;
  v1->m_assetsToPrime.m_count -= v7;
  if ( v1->m_assetsToPrime.m_count != v64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 442, ASSERT_TYPE_SANITY, "( m_assetsToPrime.m_count == m_missingAssetsCount )", (const char *)&queryFormat, "m_assetsToPrime.m_count == m_missingAssetsCount") )
    __debugbreak();
  if ( v1->m_missingAssetsCount )
  {
    v65 = (unsigned int)(Sys_Milliseconds() - v1->m_startTime);
    v66 = v1->m_genericPrimerSize + v1->m_meshPrimerSize;
    v67 = (float)(__int64)(v1->m_imagePrimerSize + v66);
    if ( (__int64)(v1->m_imagePrimerSize + v66) < 0 )
    {
      v68 = (float)(__int64)(v1->m_imagePrimerSize + v66);
      v67 = v68 + 1.8446744e19;
    }
    Streamer_StatusPrint("Stream_Primer - Priming %.2f MB of memory for %u assets. (%d ms)\n", (float)(v67 * 0.00000095367432), v1->m_assetsToPrime.m_count, v65);
    std::_Sort_unchecked<Stream_Primer_AssetInfo *,_lambda_6164c4c48f2e054ffb7da71ec7f12cdd_>(v1->m_assetsToPrime.m_assets, &v1->m_assetsToPrime.m_assets[v1->m_assetsToPrime.m_count], v1->m_assetsToPrime.m_count, v77);
    v1->m_reportBytesToLoad[0] = v1->m_imagePrimerSize;
    v1->m_reportBytesToLoad[1] = v1->m_meshPrimerSize;
    v1->m_reportBytesToLoad[2] = v1->m_genericPrimerSize;
    if ( v1->m_status == Primer_Loading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1310, ASSERT_TYPE_ASSERT, "(newStatus != m_status || newStatus == Primer_Inactive)", (const char *)&queryFormat, "newStatus != m_status || newStatus == Primer_Inactive") )
      __debugbreak();
    if ( v1->m_requestStreamerToYield )
      Stream_PushRequestYield();
    v1->m_status = Primer_Loading;
  }
  else
  {
    Streamer_StatusPrint("Stream_Primer - BuildAssetsToLoadList found nothing to load. All assets potentially to be primed got skipped.\n");
    Stream_Primer::ChangeStatus(v1, Primer_DoneLoading);
  }
  ScopedCriticalSection::~ScopedCriticalSection(&v86);
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_Primer::ChangeStatus
==============
*/
void Stream_Primer::ChangeStatus(Stream_Primer *this, Stream_Primer::Status newStatus)
{
  if ( newStatus == this->m_status && newStatus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1310, ASSERT_TYPE_ASSERT, "(newStatus != m_status || newStatus == Primer_Inactive)", (const char *)&queryFormat, "newStatus != m_status || newStatus == Primer_Inactive") )
    __debugbreak();
  if ( this->m_requestStreamerToYield )
  {
    if ( newStatus == Primer_Loading )
    {
      Stream_PushRequestYield();
    }
    else if ( this->m_status == Primer_Loading )
    {
      if ( this->m_abortActive )
      {
        if ( this->m_delayedPopRequestYield && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1323, ASSERT_TYPE_ASSERT, "(!m_delayedPopRequestYield)", (const char *)&queryFormat, "!m_delayedPopRequestYield") )
          __debugbreak();
        this->m_delayedPopRequestYield = 1;
      }
      else
      {
        if ( !Stream_IsYieldingRequested() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1328, ASSERT_TYPE_ASSERT, "(Stream_IsYieldingRequested())", (const char *)&queryFormat, "Stream_IsYieldingRequested()") )
          __debugbreak();
        Stream_PopRequestYield();
      }
    }
  }
  this->m_status = newStatus;
}

/*
==============
Stream_Primer::CheckOnAbort
==============
*/
char Stream_Primer::CheckOnAbort(Stream_Primer *this, bool calledFromAbortAndWait)
{
  int v4; 
  int v6; 
  volatile unsigned __int64 *m_reportBytesLoadFailed; 
  __int64 v8; 
  int v9; 
  ScopedStreamFrontendUpdateLock v10; 

  Stream_CheckFrontendUpdateLocks();
  if ( this->m_abortActive )
  {
    if ( !this->m_loader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1210, ASSERT_TYPE_SANITY, "( m_loader )", (const char *)&queryFormat, "m_loader") )
      __debugbreak();
    if ( !StreamLoader::Stop(this->m_loader, 0) )
    {
      v4 = Sys_Milliseconds();
      Streamer_StatusPrint("Stream_Primer - CheckOnAbort: Waiting on loader to stop (jobs:%d) (%d ms)\n", (unsigned int)this->m_loader->m_runningJobCount, (unsigned int)(v4 - this->m_startTime));
      return 0;
    }
    if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_STREAM_UPDATE_PRIMER) )
    {
      v6 = Sys_Milliseconds();
      Streamer_StatusPrint("Stream_Primer - CheckOnAbort: Waiting on commands of type WRKCMD_STREAM_UPDATE_PRIMER (%d ms)\n", (unsigned int)(v6 - this->m_startTime));
      return 0;
    }
    Stream_Primer::ClearLoadFlags(this);
    ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v10);
    memcpy_0(streamFrontendGlob->imageBits.mStaticForced, this->m_requestedImageBits, 4i64 * streamFrontendGlob->imageBits.mWordCount);
    memcpy_0(streamFrontendGlob->meshBits.mStaticForced, this->m_requestedMeshBits, 4i64 * streamFrontendGlob->meshBits.mWordCount);
    memcpy_0(streamFrontendGlob->genericBits.mStaticForced, this->m_requestedGenericBits, 4i64 * streamFrontendGlob->genericBits.mWordCount);
    ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v10);
    Stream_Primer::FreeLoader(this);
    Stream_Primer::ClearAssetArray(this);
    m_reportBytesLoadFailed = this->m_reportBytesLoadFailed;
    v8 = 3i64;
    do
    {
      *((_QWORD *)m_reportBytesLoadFailed - 3) = 0i64;
      *m_reportBytesLoadFailed = 0i64;
      *((_QWORD *)m_reportBytesLoadFailed++ - 6) = 0i64;
      --v8;
    }
    while ( v8 );
    this->m_abortActive = 0;
    if ( this->m_requestStreamerToYield && this->m_delayedPopRequestYield )
    {
      if ( !Stream_IsYieldingRequested() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1237, ASSERT_TYPE_ASSERT, "(Stream_IsYieldingRequested())", (const char *)&queryFormat, "Stream_IsYieldingRequested()") )
        __debugbreak();
      Stream_PopRequestYield();
      this->m_delayedPopRequestYield = 0;
    }
    if ( !calledFromAbortAndWait )
    {
      v9 = Sys_Milliseconds();
      Streamer_StatusPrint("Stream_Primer - CheckOnAbort: Abort completed (%d ms)\n", (unsigned int)(v9 - this->m_startTime));
      this->m_startTime = Sys_Milliseconds();
    }
  }
  return 1;
}

/*
==============
Stream_Primer::PrimerAssets::Clear
==============
*/
bool Stream_Primer::PrimerAssets::Clear(Stream_Primer::PrimerAssets *this, Stream_Primer *primer)
{
  bool v2; 
  unsigned int m_count; 
  Stream_Primer *v5; 
  int v6; 
  StreamLeafType m_leafType; 
  int v8; 
  Stream_Primer_AssetInfo *m_assets; 
  int v10; 
  bool v11; 
  bool result; 

  v2 = this->m_assets == NULL;
  m_count = this->m_count;
  v5 = primer;
  if ( v2 && !m_count )
    return 0;
  if ( !(this->m_skipped + m_count) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1406, ASSERT_TYPE_SANITY, "( m_count + m_skipped > 0ul )", (const char *)&queryFormat, "m_count + m_skipped > 0ul") )
    __debugbreak();
  if ( !this->m_assets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1407, ASSERT_TYPE_SANITY, "( m_assets )", (const char *)&queryFormat, "m_assets") )
    __debugbreak();
  v6 = 0;
  if ( this->m_count )
  {
    while ( 1 )
    {
      if ( this->m_assets[v6].m_locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1411, ASSERT_TYPE_SANITY, "( !m_assets[index].m_locked )", (const char *)&queryFormat, "!m_assets[index].m_locked") )
        __debugbreak();
      m_leafType = this->m_assets[v6].m_leafType;
      if ( (m_leafType & 0xF) != 0 )
      {
        v8 = 0;
      }
      else if ( m_leafType == STREAM_LEAF_MESH )
      {
        v8 = 1;
      }
      else
      {
        if ( m_leafType != STREAM_LEAF_GENERIC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.h", 105, ASSERT_TYPE_SANITY, "( m_leafType == STREAM_LEAF_GENERIC )", (const char *)&queryFormat, "m_leafType == STREAM_LEAF_GENERIC") )
          __debugbreak();
        v8 = 2;
      }
      m_assets = this->m_assets;
      if ( v8 )
      {
        v10 = v8 - 1;
        if ( v10 )
        {
          if ( v10 != 1 )
          {
            v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1424, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code");
            goto LABEL_31;
          }
          if ( StreamableBits::CheckPriming(&streamFrontendGlob->genericBits, m_assets[v6].m_assetIndex) )
          {
            v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1421, ASSERT_TYPE_SANITY, "( !Stream_Primer_IsPrimingGeneric( m_assets[index].m_assetIndex ) )", (const char *)&queryFormat, "!Stream_Primer_IsPrimingGeneric( m_assets[index].m_assetIndex )");
            goto LABEL_31;
          }
        }
        else if ( StreamableBits::CheckPriming(&streamFrontendGlob->meshBits, m_assets[v6].m_assetIndex) )
        {
          v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1418, ASSERT_TYPE_SANITY, "( !Stream_Primer_IsPrimingMesh( m_assets[index].m_assetIndex ) )", (const char *)&queryFormat, "!Stream_Primer_IsPrimingMesh( m_assets[index].m_assetIndex )");
          goto LABEL_31;
        }
      }
      else if ( Stream_Primer_IsPrimingImageIndex(m_assets[v6].m_assetIndex >> 2) )
      {
        v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1415, ASSERT_TYPE_SANITY, "( !Stream_Primer_IsPrimingImageIndex( m_assets[index].m_assetIndex / IMAGE_STREAM_COUNT ) )", (const char *)&queryFormat, "!Stream_Primer_IsPrimingImageIndex( m_assets[index].m_assetIndex / IMAGE_STREAM_COUNT )");
LABEL_31:
        if ( v11 )
          __debugbreak();
      }
      if ( ++v6 >= this->m_count )
      {
        v5 = primer;
        break;
      }
    }
  }
  Stream_StreamerLoanHeap::Deallocate(&v5->m_bookkeepingHeap, (unsigned __int8 *)this->m_assets, this->m_assetsSize);
  result = 1;
  this->m_assets = NULL;
  this->m_assetsSize = 0i64;
  *(_QWORD *)&this->m_count = 0i64;
  return result;
}

/*
==============
Stream_Primer::ClearAssetArray
==============
*/
void Stream_Primer::ClearAssetArray(Stream_Primer *this)
{
  const dvar_t *v2; 
  int integer; 

  Stream_Primer::PrimerAssets::Clear(&this->m_assetsToPrime, this);
  Stream_StreamerLoanHeap::Clear(&this->m_bookkeepingHeap, 0);
  v2 = DVARINT_stream_primerReleaseHeapDelayMS;
  if ( !DVARINT_stream_primerReleaseHeapDelayMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_primerReleaseHeapDelayMS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  integer = v2->current.integer;
  this->m_heapReleaseTimeout = integer + Sys_Milliseconds();
}

/*
==============
Stream_Primer::ClearLoadFlags
==============
*/
void Stream_Primer::ClearLoadFlags(Stream_Primer *this)
{
  unsigned int i; 
  Stream_Primer_AssetInfo *v3; 
  StreamLeafType m_leafType; 
  XModelSurfs *GfxImageAtIndex; 
  GfxImage *v6; 
  StreamLeafType v7; 
  streamer_handle_t v8; 
  StreamLeafType v9; 
  StreamItemType v10; 
  unsigned int m_assetIndex; 
  int v12; 
  StreamLeafType v13; 
  XModelSurfs *XModelSurfsAtIndex; 
  GfxImage *v15; 
  StreamLeafType v16; 
  streamer_handle_t v17; 
  StreamableBits *p_meshBits; 
  __int64 v19; 
  __int64 v20; 
  Stream_Logger_Item item; 
  ScopedCriticalSection v22; 
  Stream_Logger_Item result; 
  streamer_handle_t handle; 

  v20 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF00FFFF, "StreamAlloc_Lock");
  ScopedCriticalSection::ScopedCriticalSection(&v22, CRITSECT_STREAM_ALLOC, SCOPED_CRITSECT_NORMAL);
  Sys_ProfEndNamedEvent();
  for ( i = 0; i < this->m_assetsToPrime.m_count; ++i )
  {
    v3 = &this->m_assetsToPrime.m_assets[i];
    if ( v3->m_locked )
    {
      v3->m_locked = 0;
      m_leafType = v3->m_leafType;
      if ( (m_leafType & 0xF) != 0 )
      {
        GfxImageAtIndex = (XModelSurfs *)DB_GetGfxImageAtIndex(v3->m_assetIndex >> 2);
      }
      else if ( m_leafType == STREAM_LEAF_MESH )
      {
        GfxImageAtIndex = DB_GetXModelSurfsAtIndex(v3->m_assetIndex);
      }
      else
      {
        if ( m_leafType != STREAM_LEAF_GENERIC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.h", 68, ASSERT_TYPE_SANITY, "( m_leafType == STREAM_LEAF_GENERIC )", (const char *)&queryFormat, "m_leafType == STREAM_LEAF_GENERIC", v20) )
          __debugbreak();
        GfxImageAtIndex = (XModelSurfs *)DB_GetStreamKeyAtIndex(v3->m_assetIndex);
      }
      v6 = (GfxImage *)GfxImageAtIndex;
      v7 = v3->m_leafType;
      if ( (v7 & 0xF) != 0 )
      {
        v8.data = Stream_AddressSpace_ImageHandle(v6).data;
      }
      else if ( v7 == STREAM_LEAF_MESH )
      {
        v8.data = Stream_AddressSpace_MeshHandle((XModelSurfs *)v6).data;
      }
      else
      {
        if ( v7 != STREAM_LEAF_GENERIC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.h", 88, ASSERT_TYPE_SANITY, "( m_leafType == STREAM_LEAF_GENERIC )", (const char *)&queryFormat, "m_leafType == STREAM_LEAF_GENERIC") )
          __debugbreak();
        v8.data = Stream_AddressSpace_GenericHandle((StreamKey *)v6).data;
      }
      handle.data = v8.data;
      item = *Stream_Logger_MakeItem(&result, &handle);
      Stream_Logger_OnAbortPrimer("Stream_Primer::ClearLoadFlags", NULL, &item);
      v9 = v3->m_leafType;
      if ( (v9 & 0xF) != 0 )
      {
        v10 = STREAM_ITEM_IMAGE;
      }
      else if ( v9 == STREAM_LEAF_MESH )
      {
        v10 = STREAM_ITEM_MESH;
      }
      else
      {
        if ( v9 != STREAM_LEAF_GENERIC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.h", 105, ASSERT_TYPE_SANITY, "( m_leafType == STREAM_LEAF_GENERIC )", (const char *)&queryFormat, "m_leafType == STREAM_LEAF_GENERIC") )
          __debugbreak();
        v10 = STREAM_ITEM_GENERIC;
      }
      m_assetIndex = v3->m_assetIndex;
      if ( v3->m_data )
      {
        v12 = v3->m_assetIndex & 3;
        if ( v10 )
          v12 = 0;
        v13 = v3->m_leafType;
        if ( (v13 & 0xF) != 0 )
        {
          XModelSurfsAtIndex = (XModelSurfs *)DB_GetGfxImageAtIndex(m_assetIndex >> 2);
        }
        else if ( v13 == STREAM_LEAF_MESH )
        {
          XModelSurfsAtIndex = DB_GetXModelSurfsAtIndex(m_assetIndex);
        }
        else
        {
          if ( v13 != STREAM_LEAF_GENERIC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.h", 68, ASSERT_TYPE_SANITY, "( m_leafType == STREAM_LEAF_GENERIC )", (const char *)&queryFormat, "m_leafType == STREAM_LEAF_GENERIC") )
            __debugbreak();
          XModelSurfsAtIndex = (XModelSurfs *)DB_GetStreamKeyAtIndex(v3->m_assetIndex);
        }
        v15 = (GfxImage *)XModelSurfsAtIndex;
        v16 = v3->m_leafType;
        if ( (v16 & 0xF) != 0 )
        {
          v17.data = Stream_AddressSpace_ImageHandle(v15).data;
        }
        else if ( v16 == STREAM_LEAF_MESH )
        {
          v17.data = Stream_AddressSpace_MeshHandle((XModelSurfs *)v15).data;
        }
        else
        {
          if ( v16 != STREAM_LEAF_GENERIC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.h", 88, ASSERT_TYPE_SANITY, "( m_leafType == STREAM_LEAF_GENERIC )", (const char *)&queryFormat, "m_leafType == STREAM_LEAF_GENERIC") )
            __debugbreak();
          v17.data = Stream_AddressSpace_GenericHandle((StreamKey *)v15).data;
        }
        Stream_AddressSpace_UnlockFrontendAddr(v17, v12);
      }
      p_meshBits = NULL;
      if ( v10 )
      {
        if ( v10 == STREAM_ITEM_MESH )
        {
          p_meshBits = &streamFrontendGlob->meshBits;
        }
        else if ( v10 == STREAM_ITEM_GENERIC )
        {
          p_meshBits = &streamFrontendGlob->genericBits;
        }
        else
        {
          LODWORD(v19) = (unsigned __int8)v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 745, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp(745): unhandled case %d in switch statement", v19) )
            __debugbreak();
        }
      }
      else
      {
        p_meshBits = &streamFrontendGlob->imageBits;
      }
      Stream_Primer::OnStreamedItemDone(this, p_meshBits, v10, m_assetIndex);
    }
  }
  ScopedCriticalSection::~ScopedCriticalSection(&v22);
}

/*
==============
Stream_Primer::ComputeAssetsToPrimeList
==============
*/
void Stream_Primer::ComputeAssetsToPrimeList(Stream_Primer *this)
{
  volatile unsigned __int64 *m_reportBytesLoadFailed; 
  __int64 v3; 
  const dvar_t *v4; 
  const char *v5; 
  __int64 m_missingAssetsCount; 
  unsigned int m_maxInFlightLoads; 
  int v8; 
  signed __int64 m_bookkeepingSize; 
  float v10; 
  float v11; 
  unsigned __int64 v12; 
  char *fmt; 
  ScopedCriticalSection v14; 
  Stream_Primer::ComputeAssetsToPrimeList::__l2::<lambda_2900ff50ed533b4c1e55aba7cf205065> v15; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_Primer::ComputeAssetsToPrimeList");
  Stream_CheckFrontendUpdateLocks();
  if ( this->m_abortActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 131, ASSERT_TYPE_SANITY, "( !m_abortActive )", (const char *)&queryFormat, "!m_abortActive") )
    __debugbreak();
  if ( (this->m_assetsToPrime.m_assets || this->m_assetsToPrime.m_count) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 132, ASSERT_TYPE_SANITY, "( m_assetsToPrime.Empty() )", (const char *)&queryFormat, "m_assetsToPrime.Empty()") )
    __debugbreak();
  if ( this->m_loader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 133, ASSERT_TYPE_SANITY, "( !m_loader )", (const char *)&queryFormat, "!m_loader") )
    __debugbreak();
  if ( this->m_status != Primer_ComputingAssetList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 134, ASSERT_TYPE_SANITY, "( m_status == Primer_ComputingAssetList )", (const char *)&queryFormat, "m_status == Primer_ComputingAssetList") )
    __debugbreak();
  this->m_missingAssetsCount = 0;
  *(_QWORD *)&this->m_assetsProcessed = 0i64;
  this->m_lastFakeOutOfMemoryIndex = -1;
  m_reportBytesLoadFailed = this->m_reportBytesLoadFailed;
  v3 = 3i64;
  do
  {
    *((_QWORD *)m_reportBytesLoadFailed - 3) = 0i64;
    *m_reportBytesLoadFailed = 0i64;
    *((_QWORD *)m_reportBytesLoadFailed++ - 6) = 0i64;
    --v3;
  }
  while ( v3 );
  if ( DB_IsDoingTransientOnlyWork() )
  {
    v4 = DVARINT_stream_primerMaxInFlightForTransients;
    if ( DVARINT_stream_primerMaxInFlightForTransients )
      goto LABEL_23;
    v5 = "stream_primerMaxInFlightForTransients";
  }
  else
  {
    v4 = DVARINT_stream_primerMaxInFlight;
    if ( DVARINT_stream_primerMaxInFlight )
      goto LABEL_23;
    v5 = "stream_primerMaxInFlight";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v5) )
    __debugbreak();
LABEL_23:
  Dvar_CheckFrontendServerThread(v4);
  this->m_maxInFlightLoads = v4->current.unsignedInt;
  Sys_ProfBeginNamedEvent(0xFF00FFFF, "StreamAlloc_Lock");
  ScopedCriticalSection::ScopedCriticalSection(&v14, CRITSECT_STREAM_ALLOC, SCOPED_CRITSECT_NORMAL);
  Sys_ProfEndNamedEvent();
  this->m_missingAssetsCount = _lambda_2900ff50ed533b4c1e55aba7cf205065_::operator()(&v15, this->m_requestedImageBits, 0x2800ui64, &streamFrontendGlob->imageBits, this->m_imagePartsToLoad);
  this->m_missingAssetsCount += _lambda_2900ff50ed533b4c1e55aba7cf205065_::operator()(&v15, this->m_requestedMeshBits, 0x580ui64, &streamFrontendGlob->meshBits, this->m_meshSurfsToLoad);
  this->m_missingAssetsCount += _lambda_2900ff50ed533b4c1e55aba7cf205065_::operator()(&v15, this->m_requestedGenericBits, 0x4A0ui64, &streamFrontendGlob->genericBits, this->m_genericsToLoad);
  ScopedCriticalSection::~ScopedCriticalSection(&v14);
  m_missingAssetsCount = this->m_missingAssetsCount;
  if ( (_DWORD)m_missingAssetsCount )
  {
    m_maxInFlightLoads = this->m_missingAssetsCount;
    if ( (unsigned int)m_missingAssetsCount > this->m_maxInFlightLoads )
      m_maxInFlightLoads = this->m_maxInFlightLoads;
    this->m_maxInFlightLoads = m_maxInFlightLoads;
    this->m_bookkeepingSize = (16 * m_missingAssetsCount + 65559) & 0xFFFFFFFFFFFF0000ui64;
    this->m_bookkeepingSize += (StreamLoader::SizeNeeded(m_maxInFlightLoads) + 65551) & 0xFFFFFFFFFFFF0000ui64;
    v8 = Sys_Milliseconds() - this->m_startTime;
    m_bookkeepingSize = this->m_bookkeepingSize;
    v10 = (float)m_bookkeepingSize;
    if ( m_bookkeepingSize < 0 )
    {
      v11 = (float)m_bookkeepingSize;
      v10 = v11 + 1.8446744e19;
    }
    if ( m_bookkeepingSize )
      v12 = (unsigned __int64)(m_bookkeepingSize + 0xFFFF) >> 16;
    else
      LODWORD(v12) = 0;
    LODWORD(fmt) = v8;
    Streamer_StatusPrint("Stream_Primer - Need to prime %u assets. Need a bookkeeping streamer loan of %u pages or %.2f MB (%d ms)\n", this->m_missingAssetsCount, (unsigned int)v12, (float)(v10 * 0.00000095367432), fmt);
    Stream_Primer::ChangeStatus(this, Primer_GrowingBookkeepingLoan);
    if ( StreamerMemLoan::Size(&this->m_bookkeepingHeap.m_loan) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 234, ASSERT_TYPE_ASSERT, "(m_bookkeepingHeap.UsedSize() == 0)", (const char *)&queryFormat, "m_bookkeepingHeap.UsedSize() == 0") )
      __debugbreak();
    this->m_bookkeepingHeapStartTime = Sys_Milliseconds();
    Stream_StreamerLoanHeap::Grow(&this->m_bookkeepingHeap, this->m_bookkeepingSize);
  }
  else
  {
    Streamer_StatusPrint("Stream_Primer - ComputeAssetsToPrimeList found nothing to load\n");
    Stream_Primer::ChangeStatus(this, Primer_DoneLoading);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_Primer::PrimerAssets::Empty
==============
*/
bool Stream_Primer::PrimerAssets::Empty(Stream_Primer::PrimerAssets *this)
{
  return !this->m_assets && this->m_count == 0;
}

/*
==============
Stream_Primer::FreeLoader
==============
*/
void Stream_Primer::FreeLoader(Stream_Primer *this)
{
  unsigned __int64 v2; 

  if ( !this->m_loader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1298, ASSERT_TYPE_SANITY, "( m_loader != nullptr )", (const char *)&queryFormat, "m_loader != nullptr") )
    __debugbreak();
  if ( !this->m_loaderBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1299, ASSERT_TYPE_SANITY, "( m_loaderBase != 0 )", (const char *)&queryFormat, "m_loaderBase != 0") )
    __debugbreak();
  if ( StreamLoader::IsRunning(this->m_loader) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1300, ASSERT_TYPE_SANITY, "( !m_loader->IsRunning() )", (const char *)&queryFormat, "!m_loader->IsRunning()") )
    __debugbreak();
  v2 = StreamLoader::SizeNeeded(this->m_maxInFlightLoads);
  Stream_StreamerLoanHeap::Deallocate(&this->m_bookkeepingHeap, this->m_loaderBase, v2);
  this->m_loader = NULL;
  this->m_loaderBase = NULL;
}

/*
==============
Stream_Primer::IssueNext
==============
*/
_BOOL8 Stream_Primer::IssueNext(Stream_Primer *this, StreamLoadCmd *loadCmd)
{
  StreamLoadCmd *v2; 
  FastCriticalSection *p_m_readSchedulerCrit; 
  Stream_Primer_AssetInfo *v5; 
  const dvar_t *v6; 
  unsigned int unsignedInt; 
  unsigned int m_assetsProcessed; 
  unsigned __int64 v9; 
  unsigned int v10; 
  const XPakEntryInfo *XPakEntry; 
  unsigned int v12; 
  __int64 v13; 
  const XPakEntryInfo *v14; 
  __int64 v15; 
  StreamUpdateId v16; 
  void (__fastcall *m_ManagerFctPtr)(void *, const void *, stdext::inplace_function_operation); 
  bool v18; 
  volatile signed __int32 *p_writeCount; 
  __int64 v21; 
  unsigned __int64 v22; 
  StreamUpdateId v23; 
  TempThreadPriority tempPriority[2]; 
  __int64 v25; 
  FastCriticalSection *v26; 
  Stream_Primer::IssueNext::__l2::<lambda_dfc2ea59c07a43739260b3ae08ff2607> v27; 
  StreamLoadCmd *v28; 
  const XPakEntryInfo *v29; 
  StreamUpdateId updateId; 

  v28 = loadCmd;
  v25 = -2i64;
  v2 = loadCmd;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_Primer::IssueNext");
  if ( !this->m_assetsToPrime.m_assets && !this->m_assetsToPrime.m_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 833, ASSERT_TYPE_ASSERT, "(!m_assetsToPrime.Empty())", (const char *)&queryFormat, "!m_assetsToPrime.Empty()") )
    __debugbreak();
  p_m_readSchedulerCrit = &this->m_readSchedulerCrit;
  v26 = &this->m_readSchedulerCrit;
  if ( this == (Stream_Primer *)-52384i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 228, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
    __debugbreak();
  Sys_LockWrite(&this->m_readSchedulerCrit);
  if ( this->m_status != Primer_Loading || this->m_assetsProcessed == this->m_assetsToPrime.m_count )
    goto LABEL_54;
  if ( this->m_requestStreamerToYield && !Stream_IsYieldingRequested() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 847, ASSERT_TYPE_ASSERT, "(!m_requestStreamerToYield || Stream_IsYieldingRequested())", (const char *)&queryFormat, "!m_requestStreamerToYield || Stream_IsYieldingRequested()") )
    __debugbreak();
  v27 = 0;
  updateId = 0i64;
  if ( this->m_assetsProcessed >= this->m_assetsToPrime.m_count )
  {
    LODWORD(v21) = this->m_assetsProcessed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 882, ASSERT_TYPE_ASSERT, "(unsigned)( m_assetsProcessed ) < (unsigned)( m_assetsToPrime.m_count )", "m_assetsProcessed doesn't index m_assetsToPrime.m_count\n\t%i not in [0, %i)", v21, this->m_assetsToPrime.m_count) )
      __debugbreak();
  }
  v5 = &this->m_assetsToPrime.m_assets[this->m_assetsProcessed];
  v6 = DCONST_DVARINT_stream_primerSimulateOutOfMemory;
  if ( !DCONST_DVARINT_stream_primerSimulateOutOfMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_primerSimulateOutOfMemory") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  unsignedInt = v6->current.unsignedInt;
  if ( unsignedInt )
  {
    m_assetsProcessed = this->m_assetsProcessed;
    if ( !(m_assetsProcessed % unsignedInt) && m_assetsProcessed != this->m_lastFakeOutOfMemoryIndex )
    {
      this->m_lastFakeOutOfMemoryIndex = m_assetsProcessed;
LABEL_53:
      Streamer_StatusPrint("Stream_Primer::IssueNext: Memory allocation failed at %u\n", m_assetsProcessed);
LABEL_54:
      v18 = 0;
      goto LABEL_55;
    }
  }
  if ( Stream_Primer::AllocateMemory(this, v5, &updateId) == TASK_LOGIC_FAIL )
  {
    m_assetsProcessed = this->m_assetsProcessed;
    goto LABEL_53;
  }
  ++this->m_assetsProcessed;
  tempPriority[0].threadHandle = &v2->m_items;
  v9 = _lambda_dfc2ea59c07a43739260b3ae08ff2607_::operator()(&v27, v2->m_items._Elems, v5, 0i64);
  v10 = 1;
  XPakEntry = Stream_Primer_AssetInfo::GetXPakEntry(v5);
  v29 = XPakEntry;
  v22 = (XPakEntry->offset & 0xFFFFFFFFFFFF8000ui64) - XPakEntry->offset + 0x100000;
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_stream_primerReadPacked, "stream_primerReadPacked") )
  {
    v12 = this->m_assetsProcessed;
    do
    {
      if ( v12 == this->m_assetsToPrime.m_count )
        break;
      v13 = v10;
      v14 = Stream_Primer_AssetInfo::GetXPakEntry(&v5[v13]);
      if ( *((_BYTE *)XPakEntry + 24) != *((_BYTE *)v14 + 24) )
        break;
      v15 = v14->offset - v29->offset - v9;
      if ( v15 < 0 || (unsigned __int64)v15 > 0x8000 || v14->offset - v29->offset + v14->size > v22 )
      {
        XPakEntry = v29;
        break;
      }
      if ( Stream_Primer::AllocateMemory(this, &v5[v13], &v23) == TASK_LOGIC_FAIL )
      {
        XPakEntry = v29;
        break;
      }
      v16 = v23;
      if ( updateId > (unsigned __int64)v23 )
        v16 = updateId;
      updateId = v16;
      v9 += _lambda_dfc2ea59c07a43739260b3ae08ff2607_::operator()(&v27, (StreamLoadItem *)((char *)tempPriority[0].threadHandle + v13 * 16), &v5[v13], (unsigned int)v15 + v9) + (unsigned __int64)(unsigned int)v15;
      ++v10;
      v12 = ++this->m_assetsProcessed;
      XPakEntry = v29;
    }
    while ( v10 < 0x20 );
    p_m_readSchedulerCrit = &this->m_readSchedulerCrit;
    v2 = v28;
  }
  tempPriority[0].threadHandle = this;
  *(_QWORD *)&tempPriority[0].oldPriority = v5;
  LODWORD(tempPriority[1].threadHandle) = v10;
  *(_QWORD *)&tempPriority[1].oldPriority = v9;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 982, ASSERT_TYPE_SANITY, "( batchSize > 0 )", (const char *)&queryFormat, "batchSize > 0") )
    __debugbreak();
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 983, ASSERT_TYPE_SANITY, "( numItems > 0 )", (const char *)&queryFormat, "numItems > 0") )
    __debugbreak();
  v2->m_loadCallback.m_InvokeFctPtr = stdext::inplace_function<void (bool),32,16>::DefaultFunction;
  m_ManagerFctPtr = v2->m_loadCallback.m_ManagerFctPtr;
  if ( m_ManagerFctPtr )
    m_ManagerFctPtr(&v2->m_loadCallback.m_Data, NULL, Destroy);
  v2->m_loadCallback.m_Data = *(std::_Aligned<32,16,double,0>::type *)&tempPriority[0].threadHandle;
  v2->m_loadCallback.m_ManagerFctPtr = stdext::inplace_function<void (bool),32,16>::manage<_lambda_f0b3c22242f961c688baf40bfd3d831f_>;
  v2->m_loadCallback.m_InvokeFctPtr = stdext::inplace_function<void (bool),32,16>::invoke<_lambda_f0b3c22242f961c688baf40bfd3d831f_>;
  v2->m_updateId = updateId;
  v2->m_xpakOffset = XPakEntry->offset;
  v2->m_xpakIndex = *((unsigned __int8 *)XPakEntry + 24);
  v2->m_xpakSize = truncate_cast<unsigned int,unsigned __int64>(v9);
  v2->m_numItems = v10;
  Stream_Primer::PrintReadUpdate(this, 0, v5, v9, v10);
  v18 = this->m_status == Primer_Loading && !this->m_abortActive;
LABEL_55:
  p_writeCount = &p_m_readSchedulerCrit->writeCount;
  if ( p_m_readSchedulerCrit->writeCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 184, ASSERT_TYPE_ASSERT, "( critSect->writeCount ) == ( 1 )", "%s == %s\n\t%i, %i", "critSect->writeCount", "1", *p_writeCount, 1) )
    __debugbreak();
  if ( p_m_readSchedulerCrit->writeThreadId != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 186, ASSERT_TYPE_ASSERT, "(critSect->writeThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "critSect->writeThreadId == Sys_GetCurrentThreadId()") )
    __debugbreak();
  p_m_readSchedulerCrit->writeThreadId = 0;
  tempPriority[0] = p_m_readSchedulerCrit->tempPriority;
  if ( ((unsigned __int8)p_writeCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &p_m_readSchedulerCrit->writeCount) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_writeCount, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 192, ASSERT_TYPE_ASSERT, "((Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 )) == (1))", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 ) == 1") )
    __debugbreak();
  Sys_TempThreadPriorityEnd(tempPriority);
  Sys_ProfEndNamedEvent();
  return v18;
}

/*
==============
Stream_Primer::OnLoadFinished
==============
*/
void Stream_Primer::OnLoadFinished(Stream_Primer *this, Stream_Primer_AssetInfo *baseAsset, unsigned int numItems, bool success)
{
  Stream_Primer_AssetInfo *v6; 
  Stream_Primer::Status m_status; 
  unsigned int v9; 
  __int64 v10; 
  Stream_Primer_AssetInfo *v11; 
  __int64 StreamItemSize; 
  StreamLeafType m_leafType; 
  int v14; 
  StreamLeafType v15; 
  int v16; 
  int v17; 
  XModelSurfs *GfxImageAtIndex; 
  const StreamKey *v19; 
  streamer_handle_t v20; 
  const dvar_t *v21; 
  StreamFrontendGlob *v22; 
  __int64 m_assetIndex; 
  unsigned int *mStaticForced; 
  Stream_Logger_Item *p_item; 
  XModelSurfs *XModelSurfsAtIndex; 
  const XModelSurfs *v27; 
  streamer_handle_t v28; 
  const dvar_t *v29; 
  StreamFrontendGlob *v30; 
  __int64 v31; 
  unsigned int *v32; 
  XModelSurfs *StreamKeyAtIndex; 
  const GfxImage *v34; 
  unsigned int v35; 
  streamer_handle_t v36; 
  const dvar_t *v37; 
  StreamFrontendGlob *v38; 
  __int64 v39; 
  unsigned int *v40; 
  unsigned int m_count; 
  volatile unsigned __int64 *m_reportBytesLoaded; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int128 v47; 
  __int128 v48; 
  Stream_Logger_Item v49; 
  __int128 v50; 
  __int128 v51; 
  Stream_Logger_Item item; 

  v6 = baseAsset;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_Primer::OnLoadFinished");
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1006, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
    __debugbreak();
  if ( Sys_InCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1007, ASSERT_TYPE_ASSERT, "(!Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE ))", (const char *)&queryFormat, "!Sys_InCriticalSection( CRITSECT_STREAM_BACKEND_UPDATE )") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE);
  m_status = this->m_status;
  if ( m_status != Primer_Loading && (!this->m_abortActive || (unsigned int)m_status > Primer_ComputingAssetList) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1012, ASSERT_TYPE_ASSERT, "(m_status == Primer_Loading || ( m_abortActive && ( m_status == Primer_Inactive || m_status == Primer_ComputingAssetList ) ))", (const char *)&queryFormat, "m_status == Primer_Loading || ( m_abortActive && ( m_status == Primer_Inactive || m_status == Primer_ComputingAssetList ) )") )
    __debugbreak();
  if ( numItems + this->m_assetsLoadFinished > this->m_assetsProcessed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1013, ASSERT_TYPE_ASSERT, "( m_assetsLoadFinished + numItems ) <= ( m_assetsProcessed )", "%s <= %s\n\t%u, %u", "m_assetsLoadFinished + numItems", "m_assetsProcessed", numItems + this->m_assetsLoadFinished, this->m_assetsProcessed) )
    __debugbreak();
  v9 = 0;
  if ( numItems )
  {
    v10 = 0i64;
    v46 = 0i64;
    do
    {
      v11 = &v6[v10];
      v11->m_loaded = success;
      StreamItemSize = Stream_Primer_AssetInfo::GetStreamItemSize(v11);
      m_leafType = v11->m_leafType;
      if ( (m_leafType & 0xF) != 0 )
      {
        v14 = 0;
      }
      else if ( m_leafType == STREAM_LEAF_MESH )
      {
        v14 = 1;
      }
      else
      {
        if ( m_leafType != STREAM_LEAF_GENERIC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.h", 105, ASSERT_TYPE_SANITY, "( m_leafType == STREAM_LEAF_GENERIC )", (const char *)&queryFormat, "m_leafType == STREAM_LEAF_GENERIC") )
          __debugbreak();
        v14 = 2;
      }
      v15 = v11->m_leafType;
      if ( v14 )
      {
        v16 = v14 - 1;
        if ( v16 )
        {
          if ( v16 != 1 )
          {
            if ( (v15 & 0xF) != 0 )
            {
              v17 = 0;
            }
            else if ( v15 == STREAM_LEAF_MESH )
            {
              v17 = 1;
            }
            else
            {
              if ( v15 != STREAM_LEAF_GENERIC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.h", 105, ASSERT_TYPE_SANITY, "( m_leafType == STREAM_LEAF_GENERIC )", (const char *)&queryFormat, "m_leafType == STREAM_LEAF_GENERIC") )
                __debugbreak();
              v17 = 2;
            }
            LODWORD(v44) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1138, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp(1138): unhandled case %d in switch statement", v44) )
              __debugbreak();
            goto LABEL_135;
          }
          if ( (v15 & 0xF) != 0 )
          {
            GfxImageAtIndex = (XModelSurfs *)DB_GetGfxImageAtIndex(v11->m_assetIndex >> 2);
          }
          else if ( v15 == STREAM_LEAF_MESH )
          {
            GfxImageAtIndex = DB_GetXModelSurfsAtIndex(v11->m_assetIndex);
          }
          else
          {
            if ( v15 != STREAM_LEAF_GENERIC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.h", 68, ASSERT_TYPE_SANITY, "( m_leafType == STREAM_LEAF_GENERIC )", (const char *)&queryFormat, "m_leafType == STREAM_LEAF_GENERIC") )
              __debugbreak();
            GfxImageAtIndex = (XModelSurfs *)DB_GetStreamKeyAtIndex(v11->m_assetIndex);
          }
          v19 = (const StreamKey *)GfxImageAtIndex;
          if ( v11->m_data )
          {
            v20.data = Stream_Primer_AssetInfo::GetHandle(v11).data;
            Stream_AddressSpace_UnlockFrontendAddr(*(streamer_handle_t *)v20.data, 0);
          }
          if ( success )
          {
            if ( !v11->m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1111, ASSERT_TYPE_ASSERT, "(asset->m_data)", (const char *)&queryFormat, "asset->m_data") )
              __debugbreak();
            Stream_Alloc_LoadedGeneric(v19);
            if ( !this->m_abortActive )
            {
              Sys_InterlockedExchangeAdd64((volatile __int64 *)&this->m_reportBytesLoaded[2], StreamItemSize);
              if ( this->m_reportBytesLoaded[2] > this->m_reportBytesToLoad[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1116, ASSERT_TYPE_SANITY, "( m_reportBytesLoaded[STREAM_ITEM_GENERIC] <= m_reportBytesToLoad[STREAM_ITEM_GENERIC] )", (const char *)&queryFormat, "m_reportBytesLoaded[STREAM_ITEM_GENERIC] <= m_reportBytesToLoad[STREAM_ITEM_GENERIC]") )
                __debugbreak();
              v21 = DCONST_DVARBOOL_stream_primerPrintAssetNameOnLoad;
              if ( !DCONST_DVARBOOL_stream_primerPrintAssetNameOnLoad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_primerPrintAssetNameOnLoad") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v21);
              if ( v21->current.enabled )
                Streamer_StatusPrint("Stream_Primer loaded: Generic: %s\n", v19->name);
            }
          }
          else if ( !this->m_abortActive )
          {
            Sys_InterlockedExchangeAdd64((volatile __int64 *)&this->m_reportBytesLoadFailed[2], StreamItemSize);
            Streamer_StatusPrint("Failed to load generic for %s\n", v19->name);
          }
          v22 = streamFrontendGlob;
          m_assetIndex = (int)v11->m_assetIndex;
          if ( (unsigned int)m_assetIndex >= streamFrontendGlob->genericBits.mBitCount )
          {
            LODWORD(v45) = streamFrontendGlob->genericBits.mBitCount;
            LODWORD(v44) = v11->m_assetIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 582, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v44, v45) )
              __debugbreak();
          }
          mStaticForced = v22->genericBits.mStaticForced;
          if ( !mStaticForced && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          mStaticForced[m_assetIndex >> 5] |= 1 << (m_assetIndex & 0x1F);
          Stream_Primer::OnStreamedItemDone(this, &streamFrontendGlob->genericBits, STREAM_ITEM_GENERIC, v11->m_assetIndex);
          BYTE8(v47) = 2;
          *(_QWORD *)&v47 = v19;
          v50 = v47;
          p_item = (Stream_Logger_Item *)&v50;
        }
        else
        {
          if ( (v15 & 0xF) != 0 )
          {
            XModelSurfsAtIndex = (XModelSurfs *)DB_GetGfxImageAtIndex(v11->m_assetIndex >> 2);
          }
          else if ( v15 == STREAM_LEAF_MESH )
          {
            XModelSurfsAtIndex = DB_GetXModelSurfsAtIndex(v11->m_assetIndex);
          }
          else
          {
            if ( v15 != STREAM_LEAF_GENERIC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.h", 68, ASSERT_TYPE_SANITY, "( m_leafType == STREAM_LEAF_GENERIC )", (const char *)&queryFormat, "m_leafType == STREAM_LEAF_GENERIC") )
              __debugbreak();
            XModelSurfsAtIndex = (XModelSurfs *)DB_GetStreamKeyAtIndex(v11->m_assetIndex);
          }
          v27 = XModelSurfsAtIndex;
          if ( v11->m_data )
          {
            v28.data = Stream_Primer_AssetInfo::GetHandle(v11).data;
            Stream_AddressSpace_UnlockFrontendAddr(*(streamer_handle_t *)v28.data, 0);
          }
          if ( success )
          {
            if ( !v11->m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1075, ASSERT_TYPE_ASSERT, "(asset->m_data)", (const char *)&queryFormat, "asset->m_data") )
              __debugbreak();
            Stream_Alloc_LoadedMesh(v27);
            if ( !this->m_abortActive )
            {
              Sys_InterlockedExchangeAdd64((volatile __int64 *)&this->m_reportBytesLoaded[1], StreamItemSize);
              if ( this->m_reportBytesLoaded[1] > this->m_reportBytesToLoad[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1080, ASSERT_TYPE_SANITY, "( m_reportBytesLoaded[STREAM_ITEM_MESH] <= m_reportBytesToLoad[STREAM_ITEM_MESH] )", (const char *)&queryFormat, "m_reportBytesLoaded[STREAM_ITEM_MESH] <= m_reportBytesToLoad[STREAM_ITEM_MESH]") )
                __debugbreak();
              v29 = DCONST_DVARBOOL_stream_primerPrintAssetNameOnLoad;
              if ( !DCONST_DVARBOOL_stream_primerPrintAssetNameOnLoad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_primerPrintAssetNameOnLoad") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v29);
              if ( v29->current.enabled )
                Streamer_StatusPrint("Stream_Primer loaded: Mesh: %s\n", v27->name);
            }
          }
          else if ( !this->m_abortActive )
          {
            Sys_InterlockedExchangeAdd64((volatile __int64 *)&this->m_reportBytesLoadFailed[1], StreamItemSize);
            Streamer_StatusPrint("Failed to load mesh surf for %s\n", v27->name);
          }
          v30 = streamFrontendGlob;
          v31 = (int)v11->m_assetIndex;
          if ( (unsigned int)v31 >= streamFrontendGlob->meshBits.mBitCount )
          {
            LODWORD(v45) = streamFrontendGlob->meshBits.mBitCount;
            LODWORD(v44) = v11->m_assetIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 582, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v44, v45) )
              __debugbreak();
          }
          v32 = v30->meshBits.mStaticForced;
          if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          v32[v31 >> 5] |= 1 << (v31 & 0x1F);
          Stream_Primer::OnStreamedItemDone(this, &streamFrontendGlob->meshBits, STREAM_ITEM_MESH, v11->m_assetIndex);
          BYTE8(v48) = 1;
          *(_QWORD *)&v48 = v27;
          v51 = v48;
          p_item = (Stream_Logger_Item *)&v51;
        }
      }
      else
      {
        if ( (v15 & 0xF) != 0 )
        {
          StreamKeyAtIndex = (XModelSurfs *)DB_GetGfxImageAtIndex(v11->m_assetIndex >> 2);
        }
        else if ( v15 == STREAM_LEAF_MESH )
        {
          StreamKeyAtIndex = DB_GetXModelSurfsAtIndex(v11->m_assetIndex);
        }
        else
        {
          if ( v15 != STREAM_LEAF_GENERIC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.h", 68, ASSERT_TYPE_SANITY, "( m_leafType == STREAM_LEAF_GENERIC )", (const char *)&queryFormat, "m_leafType == STREAM_LEAF_GENERIC") )
            __debugbreak();
          StreamKeyAtIndex = (XModelSurfs *)DB_GetStreamKeyAtIndex(v11->m_assetIndex);
        }
        v34 = (const GfxImage *)StreamKeyAtIndex;
        v35 = v11->m_assetIndex & 3;
        if ( v11->m_data )
        {
          v36.data = Stream_Primer_AssetInfo::GetHandle(v11).data;
          Stream_AddressSpace_UnlockFrontendAddr(*(streamer_handle_t *)v36.data, v35);
        }
        if ( success )
        {
          if ( !v11->m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1038, ASSERT_TYPE_ASSERT, "(asset->m_data)", (const char *)&queryFormat, "asset->m_data") )
            __debugbreak();
          Stream_Alloc_LoadedImage(v34, v35);
          if ( !this->m_abortActive )
          {
            Sys_InterlockedExchangeAdd64((volatile __int64 *)this->m_reportBytesLoaded, StreamItemSize);
            if ( this->m_reportBytesLoaded[0] > this->m_reportBytesToLoad[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1043, ASSERT_TYPE_SANITY, "( m_reportBytesLoaded[STREAM_ITEM_IMAGE] <= m_reportBytesToLoad[STREAM_ITEM_IMAGE] )", (const char *)&queryFormat, "m_reportBytesLoaded[STREAM_ITEM_IMAGE] <= m_reportBytesToLoad[STREAM_ITEM_IMAGE]") )
              __debugbreak();
            v37 = DCONST_DVARBOOL_stream_primerPrintAssetNameOnLoad;
            if ( !DCONST_DVARBOOL_stream_primerPrintAssetNameOnLoad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_primerPrintAssetNameOnLoad") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v37);
            if ( v37->current.enabled )
              Streamer_StatusPrint("Stream_Primer loaded: Image[part:%d]: %s\n", v35, v34->name);
          }
        }
        else if ( !this->m_abortActive )
        {
          Sys_InterlockedExchangeAdd64((volatile __int64 *)this->m_reportBytesLoadFailed, StreamItemSize);
          Streamer_StatusPrint("Failed to load image part for %s (partIndex: %d )\n", v34->name, v35);
        }
        v38 = streamFrontendGlob;
        v39 = (int)v11->m_assetIndex;
        if ( (unsigned int)v39 >= streamFrontendGlob->imageBits.mBitCount )
        {
          LODWORD(v45) = streamFrontendGlob->imageBits.mBitCount;
          LODWORD(v44) = v11->m_assetIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 582, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v44, v45) )
            __debugbreak();
        }
        v40 = v38->imageBits.mStaticForced;
        if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v40[v39 >> 5] |= 1 << (v39 & 0x1F);
        Stream_Primer::OnStreamedItemDone(this, &streamFrontendGlob->imageBits, STREAM_ITEM_IMAGE, v11->m_assetIndex);
        v49.m_type = STREAM_ITEM_IMAGE;
        v49.m_image = v34;
        item = v49;
        p_item = &item;
      }
      v11->m_locked = 0;
      Stream_Logger_OnPrimerUnlock("Stream_Primer::OnLoadFinished", NULL, p_item);
      v6 = baseAsset;
LABEL_135:
      ++this->m_assetsLoadFinished;
      ++v9;
      v10 = ++v46;
    }
    while ( v9 < numItems );
  }
  Sys_LeaveCriticalSection(CRITSECT_STREAM_BACKEND_UPDATE);
  if ( !this->m_abortActive )
  {
    if ( this->m_status != Primer_Loading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1150, ASSERT_TYPE_ASSERT, "(m_status == Primer_Loading)", (const char *)&queryFormat, "m_status == Primer_Loading") )
      __debugbreak();
    m_count = this->m_assetsToPrime.m_count;
    if ( this->m_assetsLoadFinished == m_count )
    {
      if ( this->m_assetsProcessed != m_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1154, ASSERT_TYPE_SANITY, "( m_assetsProcessed == m_assetsToPrime.m_count )", (const char *)&queryFormat, "m_assetsProcessed == m_assetsToPrime.m_count") )
        __debugbreak();
      m_reportBytesLoaded = this->m_reportBytesLoaded;
      v43 = 3i64;
      do
      {
        if ( *m_reportBytesLoaded + *((_QWORD *)m_reportBytesLoaded + 3) != *((_QWORD *)m_reportBytesLoaded - 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1157, ASSERT_TYPE_SANITY, "( m_reportBytesLoaded[streamItemType] + m_reportBytesLoadFailed[streamItemType] == m_reportBytesToLoad[streamItemType] )", (const char *)&queryFormat, "m_reportBytesLoaded[streamItemType] + m_reportBytesLoadFailed[streamItemType] == m_reportBytesToLoad[streamItemType]") )
          __debugbreak();
        ++m_reportBytesLoaded;
        --v43;
      }
      while ( v43 );
      Stream_Primer::ChangeStatus(this, Primer_DoneLoading);
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_Primer::OnStreamedItemDone
==============
*/
void Stream_Primer::OnStreamedItemDone(Stream_Primer *this, StreamableBits *bits, StreamItemType itemType, unsigned int itemIndex)
{
  __int64 v4; 
  unsigned int *mLoading; 
  __int64 v8; 
  int v9; 
  unsigned int *mPriming; 
  unsigned int *mAlloc; 
  __int64 v12; 
  __int64 v13; 

  v4 = (int)itemIndex;
  if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 259, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
    __debugbreak();
  if ( (unsigned int)v4 >= bits->mBitCount )
  {
    LODWORD(v12) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 260, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v12, bits->mBitCount) )
      __debugbreak();
  }
  mLoading = bits->mLoading;
  if ( !mLoading && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  v8 = v4 >> 5;
  v9 = 1 << (v4 & 0x1F);
  mLoading[v8] &= ~v9;
  if ( (unsigned int)v4 >= bits->mBitCount )
  {
    LODWORD(v13) = bits->mBitCount;
    LODWORD(v12) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 540, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  mPriming = bits->mPriming;
  if ( !mPriming && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 28, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
    __debugbreak();
  mPriming[v8] &= ~v9;
  if ( StreamableBits::CheckInUse(bits, v4) )
  {
    if ( (unsigned int)v4 >= bits->mBitCount )
    {
      LODWORD(v13) = bits->mBitCount;
      LODWORD(v12) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    mAlloc = bits->mAlloc;
    if ( !bits->mAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    if ( (v9 & mAlloc[v8]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 699, ASSERT_TYPE_ASSERT, "(bits->CheckAlloc( itemIndex ))", (const char *)&queryFormat, "bits->CheckAlloc( itemIndex )") )
      __debugbreak();
  }
  else
  {
    Stream_Alloc_Deallocate(itemType, v4);
  }
}

/*
==============
Stream_Primer::PrintReadUpdate
==============
*/
void Stream_Primer::PrintReadUpdate(Stream_Primer *this, bool readComplete, Stream_Primer_AssetInfo *baseAsset, unsigned __int64 batchSize, unsigned int numItems)
{
  const XPakEntryInfo *XPakEntry; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  const char *v13; 
  const char *v14; 

  XPakEntry = Stream_Primer_AssetInfo::GetXPakEntry(baseAsset);
  v9 = XPakEntry->offset & 0x7FFF;
  v10 = Sys_Milliseconds() - this->m_startTime;
  v11 = XPakEntry->offset - v9;
  v12 = *((_QWORD *)XPakEntry + 3);
  v13 = XPak_IndexToName((unsigned __int8)v12);
  v14 = "issued";
  if ( readComplete )
    v14 = "completed";
  Streamer_StatusPrint("Stream_Primer - read %s ( xpakIndex: %s(%u), offset: %zd, size: %zd, items: %u ) (%d ms)\n", v14, v13, (unsigned __int8)v12, v11, (v9 + batchSize + 0x7FFF) & 0xFFFFFFFFFFFF8000ui64, numItems, v10);
}

/*
==============
Stream_Primer::Shutdown
==============
*/
void Stream_Primer::Shutdown(Stream_Primer *this)
{
  StreamLoader *m_loader; 
  volatile unsigned __int64 *m_reportBytesLoadFailed; 
  __int64 v4; 

  if ( !this->m_abortActive )
  {
    m_loader = this->m_loader;
    if ( m_loader )
    {
      if ( StreamLoader::IsRunning(m_loader) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 767, ASSERT_TYPE_SANITY, "( m_abortActive || m_loader == nullptr || !m_loader->IsRunning() )", (const char *)&queryFormat, "m_abortActive || m_loader == nullptr || !m_loader->IsRunning()") )
        __debugbreak();
    }
  }
  Stream_Primer::ChangeStatus(this, Primer_Inactive);
  if ( !this->m_abortActive )
  {
    Stream_Primer::ClearAssetArray(this);
    m_reportBytesLoadFailed = this->m_reportBytesLoadFailed;
    v4 = 3i64;
    do
    {
      *((_QWORD *)m_reportBytesLoadFailed - 3) = 0i64;
      *m_reportBytesLoadFailed = 0i64;
      *((_QWORD *)m_reportBytesLoadFailed++ - 6) = 0i64;
      --v4;
    }
    while ( v4 );
  }
}

/*
==============
Stream_Primer_CancelAndWait
==============
*/
void Stream_Primer_CancelAndWait(void)
{
  ScopedStreamFrontendUpdateLock v0; 

  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v0);
  Streamer_StatusPrint("Stream_Primer - Cancel and wait\n");
  Stream_Primer::Abort(&s_streamPrimer, 1);
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v0);
}

/*
==============
Stream_Primer_DoWork
==============
*/
__int64 Stream_Primer_DoWork(bool waitUntilDone)
{
  Stream_Primer::Status m_status; 
  unsigned __int8 v3; 
  unsigned int m_count; 
  int v5; 

  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_Primer_DoWork");
  Stream_CheckFrontendUpdateLocks();
  ProfLoad_DB_Begin("Stream_Primer_DoWork");
  m_status = s_streamPrimer.m_status;
  if ( s_streamPrimer.m_status == Primer_Inactive )
  {
    if ( s_streamPrimer.m_abortActive )
    {
      Stream_Primer::CheckOnAbort(&s_streamPrimer, 0);
    }
    else if ( Sys_Milliseconds() > s_streamPrimer.m_heapReleaseTimeout )
    {
      Stream_StreamerLoanHeap::Clear(&s_streamPrimer.m_bookkeepingHeap, 1);
      s_streamPrimer.m_heapReleaseTimeout = 0x7FFFFFFF;
    }
    goto LABEL_35;
  }
  while ( (unsigned int)(m_status - 1) <= 1 )
  {
    Stream_Primer::UpdateReadyState(&s_streamPrimer);
    m_status = s_streamPrimer.m_status;
    if ( !waitUntilDone && (unsigned int)(s_streamPrimer.m_status - 1) <= 1 )
    {
LABEL_9:
      v3 = 0;
      goto LABEL_36;
    }
  }
  while ( m_status == Primer_Loading )
  {
    Stream_Primer::UpdateLoadingState(&s_streamPrimer);
    m_status = s_streamPrimer.m_status;
    if ( !waitUntilDone )
    {
      if ( s_streamPrimer.m_status == Primer_Loading )
        goto LABEL_9;
      break;
    }
  }
  if ( (m_status & 0xFFFFFFFB) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1694, ASSERT_TYPE_ASSERT, "(s_streamPrimer.IsDoneLoading())", (const char *)&queryFormat, "s_streamPrimer.IsDoneLoading()", -2i64) )
    __debugbreak();
  Stream_CheckFrontendUpdateLocks();
  if ( s_streamPrimer.m_status != Primer_DoneLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 599, ASSERT_TYPE_SANITY, "( m_status == Primer_DoneLoading )", (const char *)&queryFormat, "m_status == Primer_DoneLoading") )
    __debugbreak();
  if ( !s_streamPrimer.m_loader )
    goto LABEL_21;
  m_count = s_streamPrimer.m_assetsToPrime.m_count;
  if ( !s_streamPrimer.m_assetsToPrime.m_assets && !s_streamPrimer.m_assetsToPrime.m_count )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 600, ASSERT_TYPE_SANITY, "( m_loader == nullptr || !m_assetsToPrime.Empty() )", (const char *)&queryFormat, "m_loader == nullptr || !m_assetsToPrime.Empty()") )
      __debugbreak();
LABEL_21:
    m_count = s_streamPrimer.m_assetsToPrime.m_count;
  }
  if ( (s_streamPrimer.m_assetsProcessed != m_count || s_streamPrimer.m_assetsLoadFinished != m_count) && (s_streamPrimer.m_assetsToPrime.m_assets || m_count) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 601, ASSERT_TYPE_SANITY, "( m_assetsProcessed == m_assetsToPrime.m_count && m_assetsLoadFinished == m_assetsToPrime.m_count || m_assetsToPrime.Empty() )", (const char *)&queryFormat, "m_assetsProcessed == m_assetsToPrime.m_count && m_assetsLoadFinished == m_assetsToPrime.m_count || m_assetsToPrime.Empty()") )
    __debugbreak();
  v5 = Sys_Milliseconds();
  Streamer_StatusPrint("Stream_Primer - Finished (%d ms)\n", (unsigned int)(v5 - s_streamPrimer.m_startTime));
  if ( s_streamPrimer.m_loader )
  {
    StreamLoader::Stop(s_streamPrimer.m_loader, 1);
    Stream_Primer::FreeLoader(&s_streamPrimer);
  }
  Stream_Primer::Shutdown(&s_streamPrimer);
LABEL_35:
  v3 = 1;
LABEL_36:
  ProfLoad_DB_End();
  Sys_ProfEndNamedEvent();
  return v3;
}

/*
==============
Stream_Primer_GetProgress
==============
*/
void Stream_Primer_GetProgress(unsigned __int64 (*bytesToLoad)[3], unsigned __int64 (*bytesLoaded)[3])
{
  __int64 v2; 
  signed __int64 v3; 
  signed __int64 v4; 
  signed __int64 v5; 

  v2 = 3i64;
  v3 = (char *)s_streamPrimer.m_reportBytesToLoad - (char *)bytesToLoad;
  v4 = (char *)s_streamPrimer.m_reportBytesLoaded - (char *)bytesToLoad;
  v5 = (char *)bytesLoaded - (char *)bytesToLoad;
  do
  {
    (*bytesToLoad)[0] = *(unsigned __int64 *)((char *)*bytesToLoad + v3);
    *(unsigned __int64 *)((char *)*bytesToLoad + v5) = *(unsigned __int64 *)((char *)*bytesToLoad + v4);
    bytesToLoad = (unsigned __int64 (*)[3])((char *)bytesToLoad + 8);
    --v2;
  }
  while ( v2 );
}

/*
==============
Stream_Primer_GetStatusText
==============
*/
const char *Stream_Primer_GetStatusText()
{
  switch ( s_streamPrimer.m_status )
  {
    case Primer_Inactive:
      return "Inactive";
    case Primer_ComputingAssetList:
      return "Computing Asset List";
    case Primer_GrowingBookkeepingLoan:
      return "Growing Bookkeeping Loan";
    case Primer_Loading:
      return "Loading";
    case Primer_DoneLoading:
      return "Done Loading";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1638, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
    __debugbreak();
  return (char *)&queryFormat.fmt + 3;
}

/*
==============
Stream_Primer_Init
==============
*/
void Stream_Primer_Init(void)
{
  Stream_StreamerLoanHeap::OneTimeInit(&s_streamPrimer.m_bookkeepingHeap, 0x40000000ui64, "Stream Primer Loan");
}

/*
==============
Stream_Primer_IsAborting
==============
*/
_BOOL8 Stream_Primer_IsAborting()
{
  return s_streamPrimer.m_abortActive;
}

/*
==============
Stream_Primer_IsLoading
==============
*/
bool Stream_Primer_IsLoading()
{
  return s_streamPrimer.m_status == Primer_Loading;
}

/*
==============
Stream_Primer_IsPrimingGeneric
==============
*/
bool Stream_Primer_IsPrimingGeneric(unsigned int assetIndex)
{
  return StreamableBits::CheckPriming(&streamFrontendGlob->genericBits, assetIndex);
}

/*
==============
Stream_Primer_IsPrimingGeneric
==============
*/
bool Stream_Primer_IsPrimingGeneric(const StreamKey *streamKey)
{
  int StreamKeyIndex; 

  StreamKeyIndex = DB_GetStreamKeyIndex(streamKey);
  return StreamableBits::CheckPriming(&streamFrontendGlob->genericBits, StreamKeyIndex);
}

/*
==============
Stream_Primer_IsPrimingImage
==============
*/
bool Stream_Primer_IsPrimingImage(const GfxImage *image)
{
  unsigned int GfxImageIndex; 

  GfxImageIndex = DB_GetGfxImageIndex(image);
  return Stream_Primer_IsPrimingImageIndex(GfxImageIndex);
}

/*
==============
Stream_Primer_IsPrimingImageIndex
==============
*/
char Stream_Primer_IsPrimingImageIndex(const unsigned int imageIndex)
{
  unsigned int v1; 
  unsigned int v2; 
  StreamFrontendGlob *v3; 
  unsigned int *mPriming; 
  unsigned int v5; 
  __int64 v7; 
  __int64 v8; 

  v1 = 4 * imageIndex;
  v2 = -4 * imageIndex;
  while ( 1 )
  {
    v3 = streamFrontendGlob;
    if ( v1 >= streamFrontendGlob->imageBits.mBitCount )
    {
      LODWORD(v8) = streamFrontendGlob->imageBits.mBitCount;
      LODWORD(v7) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 554, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    mPriming = v3->imageBits.mPriming;
    if ( !mPriming && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
      __debugbreak();
    v5 = mPriming[(__int64)(int)v1 >> 5];
    if ( _bittest((const int *)&v5, v1 & 0x1F) )
      break;
    ++v1;
    if ( v2 + v1 >= 4 )
      return 0;
  }
  return 1;
}

/*
==============
Stream_Primer_IsPrimingImageIndexPart
==============
*/
bool Stream_Primer_IsPrimingImageIndexPart(const unsigned int imageIndex, const unsigned int partIndex)
{
  return StreamableBits::CheckPriming(&streamFrontendGlob->imageBits, partIndex + 4 * imageIndex);
}

/*
==============
Stream_Primer_IsPrimingImagePart
==============
*/
bool Stream_Primer_IsPrimingImagePart(const GfxImage *image, const unsigned int partIndex)
{
  unsigned int GfxImageIndex; 

  GfxImageIndex = DB_GetGfxImageIndex(image);
  return StreamableBits::CheckPriming(&streamFrontendGlob->imageBits, partIndex + 4 * GfxImageIndex);
}

/*
==============
Stream_Primer_IsPrimingMesh
==============
*/
bool Stream_Primer_IsPrimingMesh(unsigned int meshIndex)
{
  return StreamableBits::CheckPriming(&streamFrontendGlob->meshBits, meshIndex);
}

/*
==============
Stream_Primer_IsPrimingMesh
==============
*/
bool Stream_Primer_IsPrimingMesh(const XModelSurfs *meshSurf)
{
  int XModelSurfsIndex; 

  XModelSurfsIndex = DB_GetXModelSurfsIndex(meshSurf);
  return StreamableBits::CheckPriming(&streamFrontendGlob->meshBits, XModelSurfsIndex);
}

/*
==============
Stream_Primer_IsRunning
==============
*/
bool Stream_Primer_IsRunning()
{
  return s_streamPrimer.m_status != Primer_Inactive;
}

/*
==============
Stream_Primer_LogTransientFastfile
==============
*/
void Stream_Primer_LogTransientFastfile(const char *name)
{
  const dvar_t *v1; 
  const char *string; 
  fileHandle_t *v4; 
  const char *v5; 
  fileHandle_t *v6; 
  fileHandle_t *v7; 
  const char *v8; 
  fileHandle_t v9; 
  unsigned __int64 v10; 
  char v11; 
  unsigned __int64 v12; 
  const char *v13; 
  char dest[1024]; 

  v1 = DCONST_DVARSTR_stream_primerLogTransientLoads;
  if ( !DCONST_DVARSTR_stream_primerLogTransientLoads && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_primerLogTransientLoads") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  string = v1->current.string;
  if ( *string && strstr_0(name, string) )
  {
    if ( s_firstCall )
    {
      v4 = (fileHandle_t *)j_va("%s.hints", string);
      v6 = FS_FOpenTextFileWrite(v4, v5);
    }
    else
    {
      v7 = (fileHandle_t *)j_va("%s.hints", string);
      v6 = FS_FOpenFileAppend(v7, v8);
    }
    v9.handle.handle = (__int64)v6;
    if ( v6 != (fileHandle_t *)-1i64 )
    {
      if ( s_firstCall )
      {
        Com_Printf(0, " ****** Generating xpak hint file for %s. You will have to move this file to game/share/raw/xpak_hints/%s.hints ******\n", string, string);
        s_firstCall = 0;
      }
      v10 = -1i64;
      if ( Com_FrontEnd_IsInFrontEnd() || Com_GameStart_IsActive() )
      {
        v11 = 0;
      }
      else
      {
        v11 = 1;
        if ( (streamFrontendGlob->loadSync.startTimeMs > 0 || streamFrontendGlob->loadSync.isActiveInFrontend) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1739, ASSERT_TYPE_ASSERT, "(!inGamePlay || !streamFrontendGlob->loadSync.IsActive())", (const char *)&queryFormat, "!inGamePlay || !streamFrontendGlob->loadSync.IsActive()") )
          __debugbreak();
        if ( !s_wroteChecksum )
        {
          Com_sprintf<1024>((char (*)[1024])dest, "checksum,%ul\n", s_world.checksum);
          v12 = -1i64;
          do
            ++v12;
          while ( dest[v12] );
          FS_Write(dest, v12, v9);
          s_wroteChecksum = 1;
        }
      }
      v13 = "streamsync";
      if ( v11 )
        v13 = "gameplay";
      Com_sprintf<1024>((char (*)[1024])dest, "%s,%s\n", v13, name);
      do
        ++v10;
      while ( dest[v10] );
      FS_Write(dest, v10, v9);
      FS_FCloseFile(v9);
    }
  }
}

/*
==============
Stream_Primer_RequestCancel
==============
*/
void Stream_Primer_RequestCancel(void)
{
  int v0; 
  ScopedStreamFrontendUpdateLock v1; 

  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v1);
  if ( s_streamPrimer.m_status )
  {
    switch ( s_streamPrimer.m_status )
    {
      case Primer_ComputingAssetList:
        Streamer_StatusPrint("Stream_Primer - Request cancel when Primer is in state '%s'\n", "Computing Asset List");
        break;
      case Primer_GrowingBookkeepingLoan:
        Streamer_StatusPrint("Stream_Primer - Request cancel when Primer is in state '%s'\n", "Growing Bookkeeping Loan");
        break;
      case Primer_Loading:
        Streamer_StatusPrint("Stream_Primer - Request cancel when Primer is in state '%s'\n", "Loading");
        break;
      case Primer_DoneLoading:
        Streamer_StatusPrint("Stream_Primer - Request cancel when Primer is in state '%s'\n", "Done Loading");
        break;
      default:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1638, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
          __debugbreak();
        Streamer_StatusPrint("Stream_Primer - Request cancel when Primer is in state '%s'\n", (const char *)&queryFormat.fmt + 3);
        break;
    }
  }
  else
  {
    Streamer_StatusPrint("Stream_Primer - Request cancel when Primer is not running.\n");
  }
  Stream_CheckFrontendUpdateLocks();
  if ( !s_streamPrimer.m_abortActive )
  {
    if ( s_streamPrimer.m_status == Primer_Inactive )
      goto LABEL_40;
    v0 = Sys_Milliseconds();
    Streamer_StatusPrint("Stream_Primer - !!!!!!!!!!!!!!!!! Abort and %s !!!!!!!!!!!!!!!!!!!!!!!!! (%d ms)\n", "continue", (unsigned int)(v0 - s_streamPrimer.m_startTime));
    if ( s_streamPrimer.m_status && s_streamPrimer.m_status != Primer_ComputingAssetList && s_streamPrimer.m_status != Primer_GrowingBookkeepingLoan )
    {
      if ( s_streamPrimer.m_status == Primer_Loading )
      {
        if ( !s_streamPrimer.m_loader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 653, ASSERT_TYPE_SANITY, "( m_loader )", (const char *)&queryFormat, "m_loader", -2i64) )
          __debugbreak();
        goto LABEL_35;
      }
      if ( s_streamPrimer.m_status != Primer_DoneLoading )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 661, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
          __debugbreak();
        goto LABEL_39;
      }
      if ( s_streamPrimer.m_loader )
      {
LABEL_35:
        s_streamPrimer.m_abortActive = 1;
        if ( !s_streamPrimer.m_loader && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 668, ASSERT_TYPE_SANITY, "( m_loader )", (const char *)&queryFormat, "m_loader") )
          __debugbreak();
        StreamLoader::Stop(s_streamPrimer.m_loader, 0);
      }
    }
LABEL_39:
    Stream_Primer::Shutdown(&s_streamPrimer);
    goto LABEL_40;
  }
  if ( s_streamPrimer.m_requestStreamerToYield && s_streamPrimer.m_status == Primer_Loading )
  {
    if ( s_streamPrimer.m_delayedPopRequestYield && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1323, ASSERT_TYPE_ASSERT, "(!m_delayedPopRequestYield)", (const char *)&queryFormat, "!m_delayedPopRequestYield", -2i64) )
      __debugbreak();
    s_streamPrimer.m_delayedPopRequestYield = 1;
  }
  s_streamPrimer.m_status = Primer_Inactive;
LABEL_40:
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v1);
}

/*
==============
Stream_Primer_Shutdown
==============
*/
void Stream_Primer_Shutdown(void)
{
  ScopedStreamFrontendUpdateLock v0; 

  ScopedStreamFrontendUpdateLock::ScopedStreamFrontendUpdateLock(&v0);
  Streamer_StatusPrint("Stream_Primer - Cancel and wait\n");
  Stream_Primer::Abort(&s_streamPrimer, 1);
  ScopedStreamFrontendUpdateLock::~ScopedStreamFrontendUpdateLock(&v0);
}

/*
==============
Stream_Primer_Start
==============
*/
void Stream_Primer_Start(const unsigned int *imageBits, const unsigned int *meshBits, const unsigned int *genericBits)
{
  const dvar_t *v6; 

  Stream_CheckFrontendUpdateLocks();
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_Primer::Start");
  Stream_CheckFrontendUpdateLocks();
  if ( s_streamPrimer.m_status && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 94, ASSERT_TYPE_SANITY, "( m_status == Primer_Inactive )", (const char *)&queryFormat, "m_status == Primer_Inactive") )
    __debugbreak();
  v6 = DVARBOOL_stream_primerRequestStreamerToYield;
  if ( !DVARBOOL_stream_primerRequestStreamerToYield && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_primerRequestStreamerToYield") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  s_streamPrimer.m_requestStreamerToYield = v6->current.enabled;
  s_streamPrimer.m_requestedImageBits = imageBits;
  s_streamPrimer.m_requestedMeshBits = meshBits;
  s_streamPrimer.m_requestedGenericBits = genericBits;
  Stream_Primer::ChangeStatus(&s_streamPrimer, Primer_ComputingAssetList);
  if ( s_streamPrimer.m_abortActive )
  {
    Streamer_StatusPrint("Stream_Primer - Starting a new primer batch while abort from previous primer run is still active. Need to wait for abort...\n");
  }
  else
  {
    Streamer_StatusPrint("Stream_Primer - Starting a new primer batch...\n");
    s_streamPrimer.m_startTime = Sys_Milliseconds();
  }
  if ( Stream_Primer::CheckOnAbort(&s_streamPrimer, 0) )
    Stream_Primer::ComputeAssetsToPrimeList(&s_streamPrimer);
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_Primer_UpdateOnLoadFinished
==============
*/
void Stream_Primer_UpdateOnLoadFinished(const void *const data)
{
  ScopedCriticalSection v2; 

  Sys_ProfBeginNamedEvent(0xFF00FFFF, "StreamAlloc_Lock");
  ScopedCriticalSection::ScopedCriticalSection(&v2, CRITSECT_STREAM_ALLOC, SCOPED_CRITSECT_NORMAL);
  Sys_ProfEndNamedEvent();
  Stream_Primer::OnLoadFinished(&s_streamPrimer, *(Stream_Primer_AssetInfo **)data, *((_DWORD *)data + 2), *((_BYTE *)data + 16));
  ScopedCriticalSection::~ScopedCriticalSection(&v2);
}

/*
==============
Stream_Primer::UpdateLoadingState
==============
*/
void Stream_Primer::UpdateLoadingState(Stream_Primer *this)
{
  unsigned __int64 v2; 
  unsigned __int8 *v3; 
  StreamLoader *v4; 
  unsigned int m_assetsProcessed; 
  int v6; 
  int v7; 
  unsigned __int64 allocBase[2]; 
  stdext::inplace_function<bool __cdecl(StreamLoadCmd &),32,16> workCallback; 

  allocBase[1] = -2i64;
  if ( (unsigned int)(this->m_status - 3) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 553, ASSERT_TYPE_ASSERT, "(m_status == Primer_Loading || m_status == Primer_DoneLoading)", (const char *)&queryFormat, "m_status == Primer_Loading || m_status == Primer_DoneLoading") )
    __debugbreak();
  if ( !this->m_loader )
  {
    if ( this->m_loaderBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1273, ASSERT_TYPE_SANITY, "( m_loaderBase == 0 )", (const char *)&queryFormat, "m_loaderBase == 0") )
      __debugbreak();
    v2 = StreamLoader::SizeNeeded(this->m_maxInFlightLoads);
    if ( v2 > StreamerMemLoan::Size(&this->m_bookkeepingHeap.m_loan) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1277, ASSERT_TYPE_SANITY, "( loaderSize <= m_bookkeepingHeap.UsedSize() )", (const char *)&queryFormat, "loaderSize <= m_bookkeepingHeap.UsedSize()") )
      __debugbreak();
    if ( !Stream_StreamerLoanHeap::Ready(&this->m_bookkeepingHeap) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1278, ASSERT_TYPE_SANITY, "( m_bookkeepingHeap.Ready() )", (const char *)&queryFormat, "m_bookkeepingHeap.Ready()") )
      __debugbreak();
    v3 = Stream_StreamerLoanHeap::Allocate(&this->m_bookkeepingHeap, v2, 0x10ui64);
    this->m_loaderBase = v3;
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1282, ASSERT_TYPE_SANITY, "( m_loaderBase )", (const char *)&queryFormat, "m_loaderBase") )
      __debugbreak();
    allocBase[0] = (unsigned __int64)this->m_loaderBase;
    v4 = StreamLoader::CreateInPlace(this->m_maxInFlightLoads, allocBase);
    this->m_loader = v4;
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 560, ASSERT_TYPE_ASSERT, "(m_loader)", (const char *)&queryFormat, "m_loader") )
      __debugbreak();
  }
  if ( StreamLoader::IsRunning(this->m_loader) )
  {
    StreamLoader::Update(this->m_loader);
  }
  else
  {
    m_assetsProcessed = this->m_assetsProcessed;
    if ( m_assetsProcessed != this->m_assetsToPrime.m_count )
    {
      if ( m_assetsProcessed )
      {
        v7 = Sys_Milliseconds();
        Streamer_StatusPrint("Stream_Primer - Resuming load [%u,%u). (%d ms)\n", this->m_assetsProcessed, this->m_assetsToPrime.m_count, (unsigned int)(v7 - this->m_startTime));
      }
      else
      {
        v6 = Sys_Milliseconds();
        Streamer_StatusPrint("Stream_Primer - Starting load [%u,%u). (%d ms)\n", this->m_assetsProcessed, this->m_assetsToPrime.m_count, (unsigned int)(v6 - this->m_startTime));
      }
      *(_QWORD *)workCallback.m_Data._Space = this;
      workCallback.m_ManagerFctPtr = stdext::inplace_function<bool (StreamLoadCmd &),32,16>::manage<_lambda_d97d3b24f3bea2a7142c38c91b2d926e_>;
      workCallback.m_InvokeFctPtr = stdext::inplace_function<bool (StreamLoadCmd &),32,16>::invoke<_lambda_d97d3b24f3bea2a7142c38c91b2d926e_>;
      StreamLoader::Start(this->m_loader, &workCallback);
      workCallback.m_InvokeFctPtr = stdext::inplace_function<bool (StreamLoadCmd &),32,16>::DefaultFunction;
      if ( workCallback.m_ManagerFctPtr )
        workCallback.m_ManagerFctPtr(&workCallback.m_Data, NULL, Destroy);
    }
  }
}

/*
==============
Stream_Primer::UpdateReadyState
==============
*/
void Stream_Primer::UpdateReadyState(Stream_Primer *this)
{
  int v2; 
  unsigned __int64 v3; 
  __int64 v4; 
  bool v5; 

  Stream_CheckFrontendUpdateLocks();
  v2 = 1;
  if ( (unsigned int)(this->m_status - 1) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 535, ASSERT_TYPE_SANITY, "( m_status == Primer_ComputingAssetList || m_status == Primer_GrowingBookkeepingLoan )", (const char *)&queryFormat, "m_status == Primer_ComputingAssetList || m_status == Primer_GrowingBookkeepingLoan") )
    __debugbreak();
  if ( this->m_status == Primer_ComputingAssetList && Stream_Primer::CheckOnAbort(this, 0) )
    Stream_Primer::ComputeAssetsToPrimeList(this);
  if ( this->m_status == Primer_GrowingBookkeepingLoan )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "Stream_Primer::ReadyToBuildAssetsToLoadList");
    if ( this->m_status != Primer_GrowingBookkeepingLoan && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1169, ASSERT_TYPE_ASSERT, "(m_status == Primer_GrowingBookkeepingLoan)", (const char *)&queryFormat, "m_status == Primer_GrowingBookkeepingLoan") )
      __debugbreak();
    if ( Stream_Primer::CheckOnAbort(this, 0) )
    {
      v3 = this->m_bookkeepingSize / 0x500000;
      if ( (v3 > 0x7FFFFFFFFFFFFFFFi64 || v3 + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v3, "unsigned", this->m_bookkeepingSize / 0x500000) )
        __debugbreak();
      if ( (int)v3 > 1 )
        v2 = v3;
      v4 = (unsigned int)(Sys_Milliseconds() - this->m_bookkeepingHeapStartTime);
      if ( (int)v4 <= 264 * v2 )
      {
        v5 = Stream_StreamerLoanHeap::CheckIfReady(&this->m_bookkeepingHeap, 0);
      }
      else
      {
        Com_PrintWarning(35, "WARNING: Stream primer waited %d ms (threshold %d ms) for streamer to free %zu bytes for bookkeeping. Aborting wait and doing forced commit. This will likely cause the streamer to flush.\n", v4, (unsigned int)(264 * v2), this->m_bookkeepingSize);
        v5 = Stream_StreamerLoanHeap::CheckIfReady(&this->m_bookkeepingHeap, 1);
      }
      Sys_ProfEndNamedEvent();
      if ( v5 )
        Stream_Primer::BuildAssetsToLoadList(this);
    }
    else
    {
      Sys_ProfEndNamedEvent();
    }
  }
}

