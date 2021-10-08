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
  ScopedCriticalSection v10; 
  Stream_Logger_Item result; 
  streamer_handle_t handle; 

  Sys_ProfBeginNamedEvent(0xFF00FFFF, "StreamAlloc_Lock");
  ScopedCriticalSection::ScopedCriticalSection(&v10, CRITSECT_STREAM_ALLOC, SCOPED_CRITSECT_NORMAL);
  Sys_ProfEndNamedEvent();
  Stream_Primer_AssetInfo::GetHandle(asset);
  _RAX = Stream_Logger_MakeItem(&result, &handle);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rsp+78h+item.___u0], xmm0
  }
  Stream_Logger_OnPrimerAllocate("Stream_Primer::AllocateMemory", NULL, &item, 0);
  StreamItemType = Stream_Primer_AssetInfo::GetStreamItemType(asset);
  LOBYTE(asset) = Stream_Alloc_Allocate(StreamItemType, asset->m_assetIndex, (StreamDistance)0x10000, NULL, updateId);
  ScopedCriticalSection::~ScopedCriticalSection(&v10);
  return (unsigned __int8)asset;
}

/*
==============
Stream_Primer::BuildAssetsToLoadList
==============
*/
void Stream_Primer::BuildAssetsToLoadList(Stream_Primer *this)
{
  Stream_Primer *v2; 
  const dvar_t *v3; 
  __int64 m_missingAssetsCount; 
  unsigned __int64 v5; 
  const dvar_t *v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  int *m_imagePartsToLoad; 
  int v12; 
  unsigned int v14; 
  StreamFrontendGlob *v15; 
  unsigned int *mLoading; 
  int v17; 
  __int64 v18; 
  GfxImage *GfxImageAtIndex; 
  StreamFrontendGlob *v20; 
  unsigned int *mUse; 
  unsigned int v22; 
  unsigned int v23; 
  __int64 v24; 
  StreamFrontendGlob *v25; 
  unsigned int *mPriming; 
  __int64 v27; 
  StreamFrontendGlob *v28; 
  unsigned int *v29; 
  unsigned int *v30; 
  unsigned int v31; 
  unsigned int *m_meshSurfsToLoad; 
  int v34; 
  unsigned int v36; 
  XModelSurfs *XModelSurfsAtIndex; 
  StreamFrontendGlob *v38; 
  unsigned int *v39; 
  int v40; 
  __int64 v41; 
  __int64 v42; 
  StreamFrontendGlob *v43; 
  unsigned int *v44; 
  StreamFrontendGlob *v45; 
  unsigned int *v46; 
  unsigned int *v47; 
  unsigned int v48; 
  unsigned int *m_genericsToLoad; 
  int v51; 
  unsigned int v53; 
  StreamKey *StreamKeyAtIndex; 
  StreamFrontendGlob *v55; 
  unsigned int *v56; 
  int v57; 
  __int64 v58; 
  __int64 v59; 
  StreamFrontendGlob *v60; 
  unsigned int *v61; 
  StreamFrontendGlob *v62; 
  unsigned int *v63; 
  unsigned int *v64; 
  unsigned int v65; 
  __int64 v66; 
  __int64 v72; 
  __int64 v73; 
  unsigned int v74; 
  unsigned int v75; 
  unsigned int v76; 
  unsigned int v77; 
  unsigned int v78; 
  bool enabled; 
  Stream_Primer::SortAssetsToLoadList::__l2::<lambda_6164c4c48f2e054ffb7da71ec7f12cdd> v80; 
  __int64 inData[3]; 
  __int128 v83; 
  int v84; 
  int v85; 
  int v86; 
  Stream_Logger_Item item; 
  __int64 v88; 
  ScopedCriticalSection v89; 
  int v90[1408]; 
  int v91[1410]; 

  v88 = -2i64;
  v2 = this;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_Primer::BuildAssetsToLoadList");
  Stream_CheckFrontendUpdateLocks();
  if ( v2->m_status != Primer_GrowingBookkeepingLoan && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 245, ASSERT_TYPE_SANITY, "( m_status == Primer_GrowingBookkeepingLoan )", (const char *)&queryFormat, "m_status == Primer_GrowingBookkeepingLoan") )
    __debugbreak();
  v3 = DVARINT_stream_modelLodLimit;
  if ( !DVARINT_stream_modelLodLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_modelLodLimit") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.integer )
  {
    inData[0] = (__int64)v90;
    inData[1] = (__int64)v91;
    DB_EnumXAssets(ASSET_TYPE_XMODEL, _lambda_60f9a2cd64c70920df1310a8b2491be9_::_lambda_invoker_cdecl_, inData, 1);
  }
  Sys_ProfBeginNamedEvent(0xFF00FFFF, "StreamAlloc_Lock");
  ScopedCriticalSection::ScopedCriticalSection(&v89, CRITSECT_STREAM_ALLOC, SCOPED_CRITSECT_NORMAL);
  Sys_ProfEndNamedEvent();
  m_missingAssetsCount = v2->m_missingAssetsCount;
  if ( !Stream_Primer::PrimerAssets::Empty(&v2->m_assetsToPrime) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1395, ASSERT_TYPE_SANITY, "( Empty() )", (const char *)&queryFormat, "Empty()") )
    __debugbreak();
  v5 = 16 * m_missingAssetsCount + 8;
  v2->m_assetsToPrime.m_assetsSize = v5;
  v2->m_assetsToPrime.m_assets = (Stream_Primer_AssetInfo *)Stream_StreamerLoanHeap::Allocate(&v2->m_bookkeepingHeap, v5, 8ui64);
  v2->m_assetsToPrime.m_count = m_missingAssetsCount;
  v2->m_assetsToPrime.m_skipped = 0;
  Stream_Defrag_LockDefragCount();
  v6 = DCONST_DVARBOOL_stream_concurrentImagePartLoading;
  if ( !DCONST_DVARBOOL_stream_concurrentImagePartLoading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_concurrentImagePartLoading") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  enabled = v6->current.enabled;
  v2->m_imagePrimerSize = 0i64;
  v7 = 0;
  v74 = 0;
  v8 = 0;
  v75 = 0;
  v9 = 0;
  v76 = 0;
  m_imagePartsToLoad = (int *)v2->m_imagePartsToLoad;
  inData[0] = (__int64)v2->m_imagePartsToLoad;
  do
  {
    _ECX = *m_imagePartsToLoad;
    if ( !_ECX )
      goto LABEL_78;
    v12 = 32 * v9;
    v86 = 32 * v9;
    do
    {
      __asm { tzcnt   eax, ecx }
      v85 = _ECX & ~(1 << _EAX);
      v14 = _EAX | v12;
      v15 = streamFrontendGlob;
      if ( StreamableBits::CheckInUse(&streamFrontendGlob->imageBits, _EAX | v12) )
        goto LABEL_74;
      if ( v14 >= v15->imageBits.mBitCount )
      {
        LODWORD(v73) = v15->imageBits.mBitCount;
        LODWORD(v72) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 288, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v72, v73) )
          __debugbreak();
      }
      mLoading = v15->imageBits.mLoading;
      if ( !mLoading && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v17 = 1 << (v14 & 0x1F);
      v84 = v17;
      if ( (v17 & mLoading[(__int64)(int)v14 >> 5]) != 0 )
        goto LABEL_74;
      v18 = v14 & 3;
      GfxImageAtIndex = DB_GetGfxImageAtIndex(v14 >> 2);
      if ( (GfxImageAtIndex->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 288, ASSERT_TYPE_SANITY, "( R_IsStreamedImage( image ) )", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
        __debugbreak();
      if ( (*((_DWORD *)&GfxImageAtIndex->streams[v18].xpakEntry + 6) & 0x200i64) == 0 )
      {
        v8 = v75;
        v2 = this;
LABEL_74:
        v75 = ++v8;
LABEL_75:
        v7 = v74;
        goto LABEL_76;
      }
      if ( (v14 & 3) != 0 && !enabled )
      {
        v20 = streamFrontendGlob;
        if ( v14 - 1 >= streamFrontendGlob->imageBits.mBitCount )
        {
          LODWORD(v73) = streamFrontendGlob->imageBits.mBitCount;
          LODWORD(v72) = v14 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 371, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v72, v73) )
            __debugbreak();
        }
        mUse = v20->imageBits.mUse;
        if ( !mUse && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v22 = mUse[((int)v14 - 1i64) >> 5];
        if ( !_bittest((const int *)&v22, ((_BYTE)v14 - 1) & 0x1F) )
        {
          v8 = ++v75;
          StreamableBits::SetStaticForced(&streamFrontendGlob->imageBits, v14);
          v2 = this;
          goto LABEL_75;
        }
        v17 = v84;
      }
      if ( (GfxImageAtIndex->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
        __debugbreak();
      if ( (unsigned int)v18 >= Image_GetStreamedPartCount(GfxImageAtIndex) )
      {
        LODWORD(v73) = Image_GetStreamedPartCount(GfxImageAtIndex);
        LODWORD(v72) = v14 & 3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v72, v73) )
          __debugbreak();
      }
      if ( (v14 & 3) != 0 )
        v23 = ((unsigned int)GfxImageAtIndex->streams[v18].levelCountAndSize >> 4) - ((unsigned int)GfxImageAtIndex->streams[(unsigned int)(v18 - 1)].levelCountAndSize >> 4);
      else
        v23 = (unsigned int)GfxImageAtIndex->streams[v18].levelCountAndSize >> 4;
      v2 = this;
      this->m_imagePrimerSize += v23;
      v24 = v74;
      this->m_assetsToPrime.m_assets[v24].m_leafType = 1 << v18;
      this->m_assetsToPrime.m_assets[v24].m_assetIndex = v14;
      this->m_assetsToPrime.m_assets[v24].m_loaded = 0;
      this->m_assetsToPrime.m_assets[v24].m_data = NULL;
      this->m_assetsToPrime.m_assets[v24].m_locked = 1;
      v25 = streamFrontendGlob;
      if ( v14 >= streamFrontendGlob->imageBits.mBitCount )
      {
        LODWORD(v73) = streamFrontendGlob->imageBits.mBitCount;
        LODWORD(v72) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 547, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v72, v73) )
          __debugbreak();
      }
      mPriming = v25->imageBits.mPriming;
      if ( !mPriming && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v27 = (__int64)(int)v14 >> 5;
      mPriming[v27] |= v17;
      v28 = streamFrontendGlob;
      if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 275, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
        __debugbreak();
      if ( v14 >= v28->imageBits.mBitCount )
      {
        LODWORD(v73) = v28->imageBits.mBitCount;
        LODWORD(v72) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 276, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v72, v73) )
          __debugbreak();
      }
      v29 = v28->imageBits.mLoading;
      if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      if ( (v17 & v29[v27]) != 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 333, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->imageBits.SetLoadingConditional( index ))", (const char *)&queryFormat, "streamFrontendGlob->imageBits.SetLoadingConditional( index )") )
          __debugbreak();
      }
      else
      {
        v30 = v28->imageBits.mLoading;
        if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v30[v27] |= v17;
      }
      BYTE8(v83) = 0;
      *(_QWORD *)&v83 = GfxImageAtIndex;
      __asm
      {
        vmovups xmm0, [rsp+2CF0h+var_2C80]
        vmovdqa xmmword ptr [rbp+2BF0h+item.___u0], xmm0
      }
      Stream_Logger_OnPrimerLock("Stream_Primer::BuildAssetsToLoadList", NULL, &item);
      v7 = ++v74;
      v8 = v75;
LABEL_76:
      _ECX = v85;
      v12 = v86;
    }
    while ( v85 );
    v9 = v76;
LABEL_78:
    v76 = ++v9;
    m_imagePartsToLoad = (int *)(inData[0] + 4);
    inData[0] += 4i64;
  }
  while ( v9 < 0x2800 );
  v2->m_meshPrimerSize = 0i64;
  v31 = 0;
  v77 = 0;
  m_meshSurfsToLoad = v2->m_meshSurfsToLoad;
  inData[0] = (__int64)v2->m_meshSurfsToLoad;
  while ( 2 )
  {
    _ER12 = *m_meshSurfsToLoad;
    if ( !*m_meshSurfsToLoad )
      goto LABEL_136;
    v34 = 32 * v31;
    while ( 2 )
    {
      __asm { tzcnt   eax, r12d }
      _ER12 &= ~(1 << _EAX);
      v36 = _EAX | v34;
      if ( v7 >= v2->m_missingAssetsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 351, ASSERT_TYPE_SANITY, "( assetIndex < m_missingAssetsCount )", (const char *)&queryFormat, "assetIndex < m_missingAssetsCount") )
        __debugbreak();
      XModelSurfsAtIndex = DB_GetXModelSurfsAtIndex(v36);
      if ( (*((_DWORD *)&XModelSurfsAtIndex->xpakEntry + 6) & 0x200i64) == 0 )
        goto LABEL_133;
      v38 = streamFrontendGlob;
      if ( StreamableBits::CheckInUse(&streamFrontendGlob->meshBits, v36) )
      {
LABEL_132:
        v7 = v74;
LABEL_133:
        v75 = ++v8;
        goto LABEL_134;
      }
      if ( v36 >= v38->meshBits.mBitCount )
      {
        LODWORD(v73) = v38->meshBits.mBitCount;
        LODWORD(v72) = v36;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 288, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v72, v73) )
          __debugbreak();
      }
      v39 = v38->meshBits.mLoading;
      if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v40 = 1 << (v36 & 0x1F);
      v41 = (__int64)(int)v36 >> 5;
      if ( (v40 & v39[v41]) != 0 )
        goto LABEL_131;
      if ( v36 >= 0xB000 )
      {
        LODWORD(v73) = 45056;
        LODWORD(v72) = v36;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v72, v73) )
          __debugbreak();
      }
      if ( (v40 & v90[v41]) != 0 )
      {
        if ( v36 >= 0xB000 )
        {
          LODWORD(v73) = 45056;
          LODWORD(v72) = v36;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 14, ASSERT_TYPE_ASSERT, "(unsigned)( bitNum ) < (unsigned)( size * 8 )", "bitNum doesn't index size * 8\n\t%i not in [0, %i)", v72, v73) )
            __debugbreak();
        }
        if ( (v40 & v91[v41]) == 0 )
        {
LABEL_131:
          v8 = v75;
          goto LABEL_132;
        }
      }
      if ( !XModelSurfsAtIndex->shared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_db.h", 747, ASSERT_TYPE_ASSERT, "(modelSurfs->shared)", (const char *)&queryFormat, "modelSurfs->shared") )
        __debugbreak();
      if ( (XModelSurfsAtIndex->shared->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 370, ASSERT_TYPE_SANITY, "( XModelSurfs_IsStreamed( mesh ) )", (const char *)&queryFormat, "XModelSurfs_IsStreamed( mesh )") )
        __debugbreak();
      this->m_meshPrimerSize += XModelSurfsAtIndex->shared->dataSize;
      v42 = v74;
      this->m_assetsToPrime.m_assets[v42].m_leafType = STREAM_LEAF_MESH;
      this->m_assetsToPrime.m_assets[v42].m_assetIndex = v36;
      this->m_assetsToPrime.m_assets[v42].m_loaded = 0;
      this->m_assetsToPrime.m_assets[v42].m_data = NULL;
      this->m_assetsToPrime.m_assets[v42].m_locked = 1;
      v43 = streamFrontendGlob;
      if ( v36 >= streamFrontendGlob->meshBits.mBitCount )
      {
        LODWORD(v73) = streamFrontendGlob->meshBits.mBitCount;
        LODWORD(v72) = v36;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 547, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v72, v73) )
          __debugbreak();
      }
      v44 = v43->meshBits.mPriming;
      if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v44[v41] |= v40;
      v45 = streamFrontendGlob;
      if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 275, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
        __debugbreak();
      if ( v36 >= v45->meshBits.mBitCount )
      {
        LODWORD(v73) = v45->meshBits.mBitCount;
        LODWORD(v72) = v36;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 276, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v72, v73) )
          __debugbreak();
      }
      v46 = v45->meshBits.mLoading;
      if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      if ( (v40 & v46[v41]) != 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 382, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->meshBits.SetLoadingConditional( index ))", (const char *)&queryFormat, "streamFrontendGlob->meshBits.SetLoadingConditional( index )") )
          __debugbreak();
      }
      else
      {
        v47 = v45->meshBits.mLoading;
        if ( !v47 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v47[v41] |= v40;
      }
      BYTE8(v83) = 1;
      *(_QWORD *)&v83 = XModelSurfsAtIndex;
      __asm
      {
        vmovups xmm0, [rsp+2CF0h+var_2C80]
        vmovdqa xmmword ptr [rbp+2BF0h+item.___u0], xmm0
      }
      Stream_Logger_OnPrimerLock("Stream_Primer::BuildAssetsToLoadList", NULL, &item);
      v7 = ++v74;
      v8 = v75;
LABEL_134:
      v2 = this;
      if ( _ER12 )
        continue;
      break;
    }
    v31 = v77;
    m_meshSurfsToLoad = (unsigned int *)inData[0];
LABEL_136:
    v77 = ++v31;
    inData[0] = (__int64)++m_meshSurfsToLoad;
    if ( v31 < 0x580 )
      continue;
    break;
  }
  v2->m_genericPrimerSize = 0i64;
  v48 = 0;
  v78 = 0;
  m_genericsToLoad = v2->m_genericsToLoad;
  inData[0] = (__int64)v2->m_genericsToLoad;
  while ( 2 )
  {
    _ER12 = *m_genericsToLoad;
    if ( !*m_genericsToLoad )
      goto LABEL_182;
    v51 = 32 * v48;
    while ( 2 )
    {
      __asm { tzcnt   eax, r12d }
      _ER12 &= ~(1 << _EAX);
      v53 = _EAX | v51;
      if ( v7 >= v2->m_missingAssetsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 400, ASSERT_TYPE_SANITY, "( assetIndex < m_missingAssetsCount )", (const char *)&queryFormat, "assetIndex < m_missingAssetsCount") )
        __debugbreak();
      StreamKeyAtIndex = DB_GetStreamKeyAtIndex(v53);
      v55 = streamFrontendGlob;
      if ( StreamableBits::CheckInUse(&streamFrontendGlob->genericBits, v53) )
      {
LABEL_179:
        v75 = ++v8;
        v7 = v74;
        goto LABEL_180;
      }
      if ( v53 >= v55->genericBits.mBitCount )
      {
        LODWORD(v73) = v55->genericBits.mBitCount;
        LODWORD(v72) = v53;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 288, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v72, v73) )
          __debugbreak();
      }
      v56 = v55->genericBits.mLoading;
      if ( !v56 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v57 = 1 << (v53 & 0x1F);
      v58 = (__int64)(int)v53 >> 5;
      if ( (v57 & v56[v58]) != 0 || (*((_DWORD *)&StreamKeyAtIndex->xpakInfo + 6) & 0x200i64) == 0 )
      {
        v8 = v75;
        goto LABEL_179;
      }
      if ( (StreamKeyAtIndex->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 414, ASSERT_TYPE_SANITY, "( !streamKey->Resident() )", (const char *)&queryFormat, "!streamKey->Resident()") )
        __debugbreak();
      this->m_genericPrimerSize += StreamKeyAtIndex->dataSize;
      v59 = v74;
      this->m_assetsToPrime.m_assets[v59].m_leafType = STREAM_LEAF_GENERIC;
      this->m_assetsToPrime.m_assets[v59].m_assetIndex = v53;
      this->m_assetsToPrime.m_assets[v59].m_loaded = 0;
      this->m_assetsToPrime.m_assets[v59].m_data = NULL;
      this->m_assetsToPrime.m_assets[v59].m_locked = 1;
      v60 = streamFrontendGlob;
      if ( v53 >= streamFrontendGlob->genericBits.mBitCount )
      {
        LODWORD(v73) = streamFrontendGlob->genericBits.mBitCount;
        LODWORD(v72) = v53;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 547, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v72, v73) )
          __debugbreak();
      }
      v61 = v60->genericBits.mPriming;
      if ( !v61 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      v61[v58] |= v57;
      v62 = streamFrontendGlob;
      if ( !Sys_InCriticalSection(CRITSECT_STREAM_ALLOC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 275, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_STREAM_ALLOC ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_STREAM_ALLOC )") )
        __debugbreak();
      if ( v53 >= v62->genericBits.mBitCount )
      {
        LODWORD(v73) = v62->genericBits.mBitCount;
        LODWORD(v72) = v53;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 276, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v72, v73) )
          __debugbreak();
      }
      v63 = v62->genericBits.mLoading;
      if ( !v63 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 12, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
        __debugbreak();
      if ( (v57 & v63[v58]) != 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 426, ASSERT_TYPE_ASSERT, "(streamFrontendGlob->genericBits.SetLoadingConditional( index ))", (const char *)&queryFormat, "streamFrontendGlob->genericBits.SetLoadingConditional( index )") )
          __debugbreak();
      }
      else
      {
        v64 = v62->genericBits.mLoading;
        if ( !v64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v64[v58] |= v57;
      }
      BYTE8(v83) = 2;
      *(_QWORD *)&v83 = StreamKeyAtIndex;
      __asm
      {
        vmovups xmm0, [rsp+2CF0h+var_2C80]
        vmovdqa xmmword ptr [rbp+2BF0h+item.___u0], xmm0
      }
      Stream_Logger_OnPrimerLock("Stream_Primer::BuildAssetsToLoadList", NULL, &item);
      v7 = ++v74;
      v8 = v75;
LABEL_180:
      v2 = this;
      if ( _ER12 )
        continue;
      break;
    }
    v48 = v78;
    m_genericsToLoad = (unsigned int *)inData[0];
LABEL_182:
    v78 = ++v48;
    inData[0] = (__int64)++m_genericsToLoad;
    if ( v48 < 0x4A0 )
      continue;
    break;
  }
  Stream_Defrag_UnlockDefragCount();
  if ( v8 + v7 != v2->m_missingAssetsCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 438, ASSERT_TYPE_SANITY, "( assetIndex + skippedAssetCount == m_missingAssetsCount )", (const char *)&queryFormat, "assetIndex + skippedAssetCount == m_missingAssetsCount") )
    __debugbreak();
  v2->m_missingAssetsCount -= v8;
  v65 = v2->m_missingAssetsCount;
  v2->m_assetsToPrime.m_skipped = v8;
  v2->m_assetsToPrime.m_count -= v8;
  if ( v2->m_assetsToPrime.m_count != v65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 442, ASSERT_TYPE_SANITY, "( m_assetsToPrime.m_count == m_missingAssetsCount )", (const char *)&queryFormat, "m_assetsToPrime.m_count == m_missingAssetsCount") )
    __debugbreak();
  if ( v2->m_missingAssetsCount )
  {
    v66 = (unsigned int)(Sys_Milliseconds() - v2->m_startTime);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
    }
    if ( (__int64)(v2->m_imagePrimerSize + v2->m_genericPrimerSize + v2->m_meshPrimerSize) < 0 )
      __asm { vaddss  xmm0, xmm0, cs:__real@5f800000 }
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@35800000
      vcvtss2sd xmm1, xmm0, xmm0
      vmovq   rdx, xmm1
    }
    Streamer_StatusPrint("Stream_Primer - Priming %.2f MB of memory for %u assets. (%d ms)\n", _RDX, v2->m_assetsToPrime.m_count, v66);
    std::_Sort_unchecked<Stream_Primer_AssetInfo *,_lambda_6164c4c48f2e054ffb7da71ec7f12cdd_>(v2->m_assetsToPrime.m_assets, &v2->m_assetsToPrime.m_assets[v2->m_assetsToPrime.m_count], v2->m_assetsToPrime.m_count, v80);
    v2->m_reportBytesToLoad[0] = v2->m_imagePrimerSize;
    v2->m_reportBytesToLoad[1] = v2->m_meshPrimerSize;
    v2->m_reportBytesToLoad[2] = v2->m_genericPrimerSize;
    if ( v2->m_status == Primer_Loading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1310, ASSERT_TYPE_ASSERT, "(newStatus != m_status || newStatus == Primer_Inactive)", (const char *)&queryFormat, "newStatus != m_status || newStatus == Primer_Inactive") )
      __debugbreak();
    if ( v2->m_requestStreamerToYield )
      Stream_PushRequestYield();
    v2->m_status = Primer_Loading;
  }
  else
  {
    Streamer_StatusPrint("Stream_Primer - BuildAssetsToLoadList found nothing to load. All assets potentially to be primed got skipped.\n");
    Stream_Primer::ChangeStatus(v2, Primer_DoneLoading);
  }
  ScopedCriticalSection::~ScopedCriticalSection(&v89);
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
  StreamLeafType v11; 
  StreamItemType v12; 
  unsigned int m_assetIndex; 
  int v14; 
  StreamLeafType v15; 
  XModelSurfs *XModelSurfsAtIndex; 
  GfxImage *v17; 
  StreamLeafType v18; 
  streamer_handle_t v19; 
  StreamableBits *p_meshBits; 
  __int64 v21; 
  __int64 v22; 
  Stream_Logger_Item item; 
  ScopedCriticalSection v24; 
  Stream_Logger_Item result; 
  streamer_handle_t handle; 

  v22 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF00FFFF, "StreamAlloc_Lock");
  ScopedCriticalSection::ScopedCriticalSection(&v24, CRITSECT_STREAM_ALLOC, SCOPED_CRITSECT_NORMAL);
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
        if ( m_leafType != STREAM_LEAF_GENERIC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.h", 68, ASSERT_TYPE_SANITY, "( m_leafType == STREAM_LEAF_GENERIC )", (const char *)&queryFormat, "m_leafType == STREAM_LEAF_GENERIC", v22) )
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
      _RAX = Stream_Logger_MakeItem(&result, &handle);
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [rsp+98h+item.___u0], xmm0
      }
      Stream_Logger_OnAbortPrimer("Stream_Primer::ClearLoadFlags", NULL, &item);
      v11 = v3->m_leafType;
      if ( (v11 & 0xF) != 0 )
      {
        v12 = STREAM_ITEM_IMAGE;
      }
      else if ( v11 == STREAM_LEAF_MESH )
      {
        v12 = STREAM_ITEM_MESH;
      }
      else
      {
        if ( v11 != STREAM_LEAF_GENERIC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.h", 105, ASSERT_TYPE_SANITY, "( m_leafType == STREAM_LEAF_GENERIC )", (const char *)&queryFormat, "m_leafType == STREAM_LEAF_GENERIC") )
          __debugbreak();
        v12 = STREAM_ITEM_GENERIC;
      }
      m_assetIndex = v3->m_assetIndex;
      if ( v3->m_data )
      {
        v14 = v3->m_assetIndex & 3;
        if ( v12 )
          v14 = 0;
        v15 = v3->m_leafType;
        if ( (v15 & 0xF) != 0 )
        {
          XModelSurfsAtIndex = (XModelSurfs *)DB_GetGfxImageAtIndex(m_assetIndex >> 2);
        }
        else if ( v15 == STREAM_LEAF_MESH )
        {
          XModelSurfsAtIndex = DB_GetXModelSurfsAtIndex(m_assetIndex);
        }
        else
        {
          if ( v15 != STREAM_LEAF_GENERIC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.h", 68, ASSERT_TYPE_SANITY, "( m_leafType == STREAM_LEAF_GENERIC )", (const char *)&queryFormat, "m_leafType == STREAM_LEAF_GENERIC") )
            __debugbreak();
          XModelSurfsAtIndex = (XModelSurfs *)DB_GetStreamKeyAtIndex(v3->m_assetIndex);
        }
        v17 = (GfxImage *)XModelSurfsAtIndex;
        v18 = v3->m_leafType;
        if ( (v18 & 0xF) != 0 )
        {
          v19.data = Stream_AddressSpace_ImageHandle(v17).data;
        }
        else if ( v18 == STREAM_LEAF_MESH )
        {
          v19.data = Stream_AddressSpace_MeshHandle((XModelSurfs *)v17).data;
        }
        else
        {
          if ( v18 != STREAM_LEAF_GENERIC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.h", 88, ASSERT_TYPE_SANITY, "( m_leafType == STREAM_LEAF_GENERIC )", (const char *)&queryFormat, "m_leafType == STREAM_LEAF_GENERIC") )
            __debugbreak();
          v19.data = Stream_AddressSpace_GenericHandle((StreamKey *)v17).data;
        }
        Stream_AddressSpace_UnlockFrontendAddr(v19, v14);
      }
      p_meshBits = NULL;
      if ( v12 )
      {
        if ( v12 == STREAM_ITEM_MESH )
        {
          p_meshBits = &streamFrontendGlob->meshBits;
        }
        else if ( v12 == STREAM_ITEM_GENERIC )
        {
          p_meshBits = &streamFrontendGlob->genericBits;
        }
        else
        {
          LODWORD(v21) = (unsigned __int8)v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 745, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp(745): unhandled case %d in switch statement", v21) )
            __debugbreak();
        }
      }
      else
      {
        p_meshBits = &streamFrontendGlob->imageBits;
      }
      Stream_Primer::OnStreamedItemDone(this, p_meshBits, v12, m_assetIndex);
    }
  }
  ScopedCriticalSection::~ScopedCriticalSection(&v24);
}

/*
==============
Stream_Primer::ComputeAssetsToPrimeList
==============
*/
void Stream_Primer::ComputeAssetsToPrimeList(Stream_Primer *this)
{
  volatile unsigned __int64 *m_reportBytesLoadFailed; 
  __int64 v4; 
  const dvar_t *v5; 
  const char *v6; 
  __int64 m_missingAssetsCount; 
  unsigned int m_maxInFlightLoads; 
  int v9; 
  signed __int64 m_bookkeepingSize; 
  unsigned __int64 v15; 
  char *fmt; 
  ScopedCriticalSection v18; 
  Stream_Primer::ComputeAssetsToPrimeList::__l2::<lambda_2900ff50ed533b4c1e55aba7cf205065> v19; 

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
  v4 = 3i64;
  do
  {
    *((_QWORD *)m_reportBytesLoadFailed - 3) = 0i64;
    *m_reportBytesLoadFailed = 0i64;
    *((_QWORD *)m_reportBytesLoadFailed++ - 6) = 0i64;
    --v4;
  }
  while ( v4 );
  if ( DB_IsDoingTransientOnlyWork() )
  {
    v5 = DVARINT_stream_primerMaxInFlightForTransients;
    if ( DVARINT_stream_primerMaxInFlightForTransients )
      goto LABEL_23;
    v6 = "stream_primerMaxInFlightForTransients";
  }
  else
  {
    v5 = DVARINT_stream_primerMaxInFlight;
    if ( DVARINT_stream_primerMaxInFlight )
      goto LABEL_23;
    v6 = "stream_primerMaxInFlight";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v6) )
    __debugbreak();
LABEL_23:
  Dvar_CheckFrontendServerThread(v5);
  this->m_maxInFlightLoads = v5->current.unsignedInt;
  Sys_ProfBeginNamedEvent(0xFF00FFFF, "StreamAlloc_Lock");
  ScopedCriticalSection::ScopedCriticalSection(&v18, CRITSECT_STREAM_ALLOC, SCOPED_CRITSECT_NORMAL);
  Sys_ProfEndNamedEvent();
  this->m_missingAssetsCount = _lambda_2900ff50ed533b4c1e55aba7cf205065_::operator()(&v19, this->m_requestedImageBits, 0x2800ui64, &streamFrontendGlob->imageBits, this->m_imagePartsToLoad);
  this->m_missingAssetsCount += _lambda_2900ff50ed533b4c1e55aba7cf205065_::operator()(&v19, this->m_requestedMeshBits, 0x580ui64, &streamFrontendGlob->meshBits, this->m_meshSurfsToLoad);
  this->m_missingAssetsCount += _lambda_2900ff50ed533b4c1e55aba7cf205065_::operator()(&v19, this->m_requestedGenericBits, 0x4A0ui64, &streamFrontendGlob->genericBits, this->m_genericsToLoad);
  ScopedCriticalSection::~ScopedCriticalSection(&v18);
  m_missingAssetsCount = this->m_missingAssetsCount;
  if ( (_DWORD)m_missingAssetsCount )
  {
    m_maxInFlightLoads = this->m_missingAssetsCount;
    if ( (unsigned int)m_missingAssetsCount > this->m_maxInFlightLoads )
      m_maxInFlightLoads = this->m_maxInFlightLoads;
    this->m_maxInFlightLoads = m_maxInFlightLoads;
    this->m_bookkeepingSize = (16 * m_missingAssetsCount + 65559) & 0xFFFFFFFFFFFF0000ui64;
    this->m_bookkeepingSize += (StreamLoader::SizeNeeded(m_maxInFlightLoads) + 65551) & 0xFFFFFFFFFFFF0000ui64;
    v9 = Sys_Milliseconds() - this->m_startTime;
    m_bookkeepingSize = this->m_bookkeepingSize;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
    }
    if ( m_bookkeepingSize < 0 )
      __asm { vaddss  xmm0, xmm0, cs:__real@5f800000 }
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@35800000
      vcvtss2sd xmm3, xmm0, xmm0
    }
    if ( m_bookkeepingSize )
      v15 = (unsigned __int64)(m_bookkeepingSize + 0xFFFF) >> 16;
    else
      LODWORD(v15) = 0;
    LODWORD(fmt) = v9;
    __asm { vmovq   r9, xmm3 }
    Streamer_StatusPrint("Stream_Primer - Need to prime %u assets. Need a bookkeeping streamer loan of %u pages or %.2f MB (%d ms)\n", this->m_missingAssetsCount, (unsigned int)v15, *(double *)&_XMM3, fmt);
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
  bool v19; 
  volatile signed __int32 *p_writeCount; 
  __int64 v23; 
  unsigned __int64 v24; 
  StreamUpdateId v25; 
  TempThreadPriority tempPriority[2]; 
  __int64 v27; 
  FastCriticalSection *p_m_readSchedulerCrit; 
  Stream_Primer::IssueNext::__l2::<lambda_dfc2ea59c07a43739260b3ae08ff2607> v29; 
  StreamLoadCmd *v30; 
  const XPakEntryInfo *v31; 
  StreamUpdateId updateId; 

  v30 = loadCmd;
  v27 = -2i64;
  _R15 = loadCmd;
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_Primer::IssueNext");
  if ( !this->m_assetsToPrime.m_assets && !this->m_assetsToPrime.m_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 833, ASSERT_TYPE_ASSERT, "(!m_assetsToPrime.Empty())", (const char *)&queryFormat, "!m_assetsToPrime.Empty()") )
    __debugbreak();
  _RBP = &this->m_readSchedulerCrit;
  p_m_readSchedulerCrit = &this->m_readSchedulerCrit;
  if ( this == (Stream_Primer *)-52384i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 228, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
    __debugbreak();
  Sys_LockWrite(&this->m_readSchedulerCrit);
  if ( this->m_status != Primer_Loading || this->m_assetsProcessed == this->m_assetsToPrime.m_count )
    goto LABEL_54;
  if ( this->m_requestStreamerToYield && !Stream_IsYieldingRequested() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 847, ASSERT_TYPE_ASSERT, "(!m_requestStreamerToYield || Stream_IsYieldingRequested())", (const char *)&queryFormat, "!m_requestStreamerToYield || Stream_IsYieldingRequested()") )
    __debugbreak();
  v29 = 0;
  updateId = 0i64;
  if ( this->m_assetsProcessed >= this->m_assetsToPrime.m_count )
  {
    LODWORD(v23) = this->m_assetsProcessed;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 882, ASSERT_TYPE_ASSERT, "(unsigned)( m_assetsProcessed ) < (unsigned)( m_assetsToPrime.m_count )", "m_assetsProcessed doesn't index m_assetsToPrime.m_count\n\t%i not in [0, %i)", v23, this->m_assetsToPrime.m_count) )
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
      v19 = 0;
      goto LABEL_55;
    }
  }
  if ( Stream_Primer::AllocateMemory(this, v5, &updateId) == TASK_LOGIC_FAIL )
  {
    m_assetsProcessed = this->m_assetsProcessed;
    goto LABEL_53;
  }
  ++this->m_assetsProcessed;
  tempPriority[0].threadHandle = &_R15->m_items;
  v9 = _lambda_dfc2ea59c07a43739260b3ae08ff2607_::operator()(&v29, _R15->m_items._Elems, v5, 0i64);
  v10 = 1;
  XPakEntry = Stream_Primer_AssetInfo::GetXPakEntry(v5);
  v31 = XPakEntry;
  v24 = (XPakEntry->offset & 0xFFFFFFFFFFFF8000ui64) - XPakEntry->offset + 0x100000;
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
      v15 = v14->offset - v31->offset - v9;
      if ( v15 < 0 || (unsigned __int64)v15 > 0x8000 || v14->offset - v31->offset + v14->size > v24 )
      {
        XPakEntry = v31;
        break;
      }
      if ( Stream_Primer::AllocateMemory(this, &v5[v13], &v25) == TASK_LOGIC_FAIL )
      {
        XPakEntry = v31;
        break;
      }
      v16 = v25;
      if ( updateId > (unsigned __int64)v25 )
        v16 = updateId;
      updateId = v16;
      v9 += _lambda_dfc2ea59c07a43739260b3ae08ff2607_::operator()(&v29, (StreamLoadItem *)((char *)tempPriority[0].threadHandle + v13 * 16), &v5[v13], (unsigned int)v15 + v9) + (unsigned __int64)(unsigned int)v15;
      ++v10;
      v12 = ++this->m_assetsProcessed;
      XPakEntry = v31;
    }
    while ( v10 < 0x20 );
    _RBP = &this->m_readSchedulerCrit;
    _R15 = v30;
  }
  tempPriority[0].threadHandle = this;
  *(_QWORD *)&tempPriority[0].oldPriority = v5;
  LODWORD(tempPriority[1].threadHandle) = v10;
  *(_QWORD *)&tempPriority[1].oldPriority = v9;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 982, ASSERT_TYPE_SANITY, "( batchSize > 0 )", (const char *)&queryFormat, "batchSize > 0") )
    __debugbreak();
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 983, ASSERT_TYPE_SANITY, "( numItems > 0 )", (const char *)&queryFormat, "numItems > 0") )
    __debugbreak();
  _R15->m_loadCallback.m_InvokeFctPtr = stdext::inplace_function<void (bool),32,16>::DefaultFunction;
  m_ManagerFctPtr = _R15->m_loadCallback.m_ManagerFctPtr;
  if ( m_ManagerFctPtr )
    m_ManagerFctPtr(&_R15->m_loadCallback.m_Data, NULL, Destroy);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+0E8h+tempPriority.threadHandle]
    vmovups ymmword ptr [r15+10h], ymm0
  }
  _R15->m_loadCallback.m_ManagerFctPtr = stdext::inplace_function<void (bool),32,16>::manage<_lambda_f0b3c22242f961c688baf40bfd3d831f_>;
  _R15->m_loadCallback.m_InvokeFctPtr = stdext::inplace_function<void (bool),32,16>::invoke<_lambda_f0b3c22242f961c688baf40bfd3d831f_>;
  _R15->m_updateId = updateId;
  _R15->m_xpakOffset = XPakEntry->offset;
  _R15->m_xpakIndex = *((unsigned __int8 *)XPakEntry + 24);
  _R15->m_xpakSize = truncate_cast<unsigned int,unsigned __int64>(v9);
  _R15->m_numItems = v10;
  Stream_Primer::PrintReadUpdate(this, 0, v5, v9, v10);
  v19 = this->m_status == Primer_Loading && !this->m_abortActive;
LABEL_55:
  p_writeCount = &_RBP->writeCount;
  if ( _RBP->writeCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 184, ASSERT_TYPE_ASSERT, "( critSect->writeCount ) == ( 1 )", "%s == %s\n\t%i, %i", "critSect->writeCount", "1", *p_writeCount, 1) )
    __debugbreak();
  if ( _RBP->writeThreadId != Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 186, ASSERT_TYPE_ASSERT, "(critSect->writeThreadId == Sys_GetCurrentThreadId())", (const char *)&queryFormat, "critSect->writeThreadId == Sys_GetCurrentThreadId()") )
    __debugbreak();
  _RBP->writeThreadId = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+8]
    vmovups xmmword ptr [rsp+0E8h+tempPriority.threadHandle], xmm0
  }
  if ( ((unsigned __int8)p_writeCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &_RBP->writeCount) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_writeCount, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 192, ASSERT_TYPE_ASSERT, "((Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 )) == (1))", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &critSect->writeCount, 0, 1 ) == 1") )
    __debugbreak();
  Sys_TempThreadPriorityEnd(tempPriority);
  Sys_ProfEndNamedEvent();
  return v19;
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
  const XModelSurfs *v28; 
  streamer_handle_t v29; 
  const dvar_t *v30; 
  StreamFrontendGlob *v31; 
  __int64 v32; 
  unsigned int *v33; 
  XModelSurfs *StreamKeyAtIndex; 
  const GfxImage *v36; 
  unsigned int v37; 
  streamer_handle_t v38; 
  const dvar_t *v39; 
  StreamFrontendGlob *v40; 
  __int64 v41; 
  unsigned int *v42; 
  unsigned int m_count; 
  volatile unsigned __int64 *m_reportBytesLoaded; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  __int128 v50; 
  __int128 v51; 
  __int128 v52; 
  __int128 v53; 
  __int128 v54; 
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
    v49 = 0i64;
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
            LODWORD(v47) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1138, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp(1138): unhandled case %d in switch statement", v47) )
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
            LODWORD(v48) = streamFrontendGlob->genericBits.mBitCount;
            LODWORD(v47) = v11->m_assetIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 582, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v47, v48) )
              __debugbreak();
          }
          mStaticForced = v22->genericBits.mStaticForced;
          if ( !mStaticForced && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          mStaticForced[m_assetIndex >> 5] |= 1 << (m_assetIndex & 0x1F);
          Stream_Primer::OnStreamedItemDone(this, &streamFrontendGlob->genericBits, STREAM_ITEM_GENERIC, v11->m_assetIndex);
          BYTE8(v50) = 2;
          *(_QWORD *)&v50 = v19;
          __asm
          {
            vmovups xmm0, [rsp+128h+var_C8]
            vmovdqa [rsp+128h+var_78], xmm0
          }
          p_item = (Stream_Logger_Item *)&v53;
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
          v28 = XModelSurfsAtIndex;
          if ( v11->m_data )
          {
            v29.data = Stream_Primer_AssetInfo::GetHandle(v11).data;
            Stream_AddressSpace_UnlockFrontendAddr(*(streamer_handle_t *)v29.data, 0);
          }
          if ( success )
          {
            if ( !v11->m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1075, ASSERT_TYPE_ASSERT, "(asset->m_data)", (const char *)&queryFormat, "asset->m_data") )
              __debugbreak();
            Stream_Alloc_LoadedMesh(v28);
            if ( !this->m_abortActive )
            {
              Sys_InterlockedExchangeAdd64((volatile __int64 *)&this->m_reportBytesLoaded[1], StreamItemSize);
              if ( this->m_reportBytesLoaded[1] > this->m_reportBytesToLoad[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1080, ASSERT_TYPE_SANITY, "( m_reportBytesLoaded[STREAM_ITEM_MESH] <= m_reportBytesToLoad[STREAM_ITEM_MESH] )", (const char *)&queryFormat, "m_reportBytesLoaded[STREAM_ITEM_MESH] <= m_reportBytesToLoad[STREAM_ITEM_MESH]") )
                __debugbreak();
              v30 = DCONST_DVARBOOL_stream_primerPrintAssetNameOnLoad;
              if ( !DCONST_DVARBOOL_stream_primerPrintAssetNameOnLoad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_primerPrintAssetNameOnLoad") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v30);
              if ( v30->current.enabled )
                Streamer_StatusPrint("Stream_Primer loaded: Mesh: %s\n", v28->name);
            }
          }
          else if ( !this->m_abortActive )
          {
            Sys_InterlockedExchangeAdd64((volatile __int64 *)&this->m_reportBytesLoadFailed[1], StreamItemSize);
            Streamer_StatusPrint("Failed to load mesh surf for %s\n", v28->name);
          }
          v31 = streamFrontendGlob;
          v32 = (int)v11->m_assetIndex;
          if ( (unsigned int)v32 >= streamFrontendGlob->meshBits.mBitCount )
          {
            LODWORD(v48) = streamFrontendGlob->meshBits.mBitCount;
            LODWORD(v47) = v11->m_assetIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 582, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v47, v48) )
              __debugbreak();
          }
          v33 = v31->meshBits.mStaticForced;
          if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          v33[v32 >> 5] |= 1 << (v32 & 0x1F);
          Stream_Primer::OnStreamedItemDone(this, &streamFrontendGlob->meshBits, STREAM_ITEM_MESH, v11->m_assetIndex);
          BYTE8(v51) = 1;
          *(_QWORD *)&v51 = v28;
          __asm
          {
            vmovups xmm0, [rsp+128h+var_B8]
            vmovdqa [rsp+128h+var_68], xmm0
          }
          p_item = (Stream_Logger_Item *)&v54;
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
        v36 = (const GfxImage *)StreamKeyAtIndex;
        v37 = v11->m_assetIndex & 3;
        if ( v11->m_data )
        {
          v38.data = Stream_Primer_AssetInfo::GetHandle(v11).data;
          Stream_AddressSpace_UnlockFrontendAddr(*(streamer_handle_t *)v38.data, v37);
        }
        if ( success )
        {
          if ( !v11->m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1038, ASSERT_TYPE_ASSERT, "(asset->m_data)", (const char *)&queryFormat, "asset->m_data") )
            __debugbreak();
          Stream_Alloc_LoadedImage(v36, v37);
          if ( !this->m_abortActive )
          {
            Sys_InterlockedExchangeAdd64((volatile __int64 *)this->m_reportBytesLoaded, StreamItemSize);
            if ( this->m_reportBytesLoaded[0] > this->m_reportBytesToLoad[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1043, ASSERT_TYPE_SANITY, "( m_reportBytesLoaded[STREAM_ITEM_IMAGE] <= m_reportBytesToLoad[STREAM_ITEM_IMAGE] )", (const char *)&queryFormat, "m_reportBytesLoaded[STREAM_ITEM_IMAGE] <= m_reportBytesToLoad[STREAM_ITEM_IMAGE]") )
              __debugbreak();
            v39 = DCONST_DVARBOOL_stream_primerPrintAssetNameOnLoad;
            if ( !DCONST_DVARBOOL_stream_primerPrintAssetNameOnLoad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_primerPrintAssetNameOnLoad") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v39);
            if ( v39->current.enabled )
              Streamer_StatusPrint("Stream_Primer loaded: Image[part:%d]: %s\n", v37, v36->name);
          }
        }
        else if ( !this->m_abortActive )
        {
          Sys_InterlockedExchangeAdd64((volatile __int64 *)this->m_reportBytesLoadFailed, StreamItemSize);
          Streamer_StatusPrint("Failed to load image part for %s (partIndex: %d )\n", v36->name, v37);
        }
        v40 = streamFrontendGlob;
        v41 = (int)v11->m_assetIndex;
        if ( (unsigned int)v41 >= streamFrontendGlob->imageBits.mBitCount )
        {
          LODWORD(v48) = streamFrontendGlob->imageBits.mBitCount;
          LODWORD(v47) = v11->m_assetIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_bits.h", 582, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( mBitCount )", "index doesn't index mBitCount\n\t%i not in [0, %i)", v47, v48) )
            __debugbreak();
        }
        v42 = v40->imageBits.mStaticForced;
        if ( !v42 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
          __debugbreak();
        v42[v41 >> 5] |= 1 << (v41 & 0x1F);
        Stream_Primer::OnStreamedItemDone(this, &streamFrontendGlob->imageBits, STREAM_ITEM_IMAGE, v11->m_assetIndex);
        BYTE8(v52) = 0;
        *(_QWORD *)&v52 = v36;
        __asm
        {
          vmovups xmm0, [rsp+128h+var_A8]
          vmovdqa xmmword ptr [rsp+128h+item.___u0], xmm0
        }
        p_item = &item;
      }
      v11->m_locked = 0;
      Stream_Logger_OnPrimerUnlock("Stream_Primer::OnLoadFinished", NULL, p_item);
      v6 = baseAsset;
LABEL_135:
      ++this->m_assetsLoadFinished;
      ++v9;
      v10 = ++v49;
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
      v46 = 3i64;
      do
      {
        if ( *m_reportBytesLoaded + *((_QWORD *)m_reportBytesLoaded + 3) != *((_QWORD *)m_reportBytesLoaded - 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_primer.cpp", 1157, ASSERT_TYPE_SANITY, "( m_reportBytesLoaded[streamItemType] + m_reportBytesLoadFailed[streamItemType] == m_reportBytesToLoad[streamItemType] )", (const char *)&queryFormat, "m_reportBytesLoaded[streamItemType] + m_reportBytesLoadFailed[streamItemType] == m_reportBytesToLoad[streamItemType]") )
          __debugbreak();
        ++m_reportBytesLoaded;
        --v46;
      }
      while ( v46 );
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

