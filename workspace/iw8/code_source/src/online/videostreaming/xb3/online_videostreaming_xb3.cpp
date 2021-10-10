/*
==============
Online_VideoStreaming::XB3XMemAlloc_TryMFTVideoFree
==============
*/

bool __fastcall Online_VideoStreaming::XB3XMemAlloc_TryMFTVideoFree(Online_VideoStreaming *this, void *ptr, unsigned __int64 attributes)
{
  return ?XB3XMemAlloc_TryMFTVideoFree@Online_VideoStreaming@@QEAA_NPEAX_K@Z(this, ptr, attributes);
}

/*
==============
Online_VideoStreaming::UpdateVideoStreamingTextures
==============
*/

void __fastcall Online_VideoStreaming::UpdateVideoStreamingTextures(Online_VideoStreaming *this, GfxCmdBufState *cmdBufState)
{
  ?UpdateVideoStreamingTextures@Online_VideoStreaming@@QEAAXPEAUGfxCmdBufState@@@Z(this, cmdBufState);
}

/*
==============
Online_VideoStreaming::ProcessAudio
==============
*/

void __fastcall Online_VideoStreaming::ProcessAudio(Online_VideoStreaming *this)
{
  ?ProcessAudio@Online_VideoStreaming@@AEAAXXZ(this);
}

/*
==============
Online_VideoStreaming::ProcessVideo
==============
*/

void __fastcall Online_VideoStreaming::ProcessVideo(Online_VideoStreaming *this)
{
  ?ProcessVideo@Online_VideoStreaming@@AEAAXXZ(this);
}

/*
==============
Online_VideoStreaming::UpdateVideoStreamingTexture_GPU
==============
*/

Online_VideoStreaming::RenderFrameData *__fastcall Online_VideoStreaming::UpdateVideoStreamingTexture_GPU(Online_VideoStreaming *this, GfxCmdBufState *cmdBufState)
{
  return ?UpdateVideoStreamingTexture_GPU@Online_VideoStreaming@@AEAAPEAURenderFrameData@1@PEAUGfxCmdBufState@@@Z(this, cmdBufState);
}

/*
==============
Online_VideoStreaming::InitMemory
==============
*/

bool __fastcall Online_VideoStreaming::InitMemory(Online_VideoStreaming *this)
{
  return ?InitMemory@Online_VideoStreaming@@AEAA_NXZ(this);
}

/*
==============
Online_VideoStreaming::FreeInternally
==============
*/

bool __fastcall Online_VideoStreaming::FreeInternally(Online_VideoStreaming *this, void *ptr, Online_VideoStreaming::MftAllocType type)
{
  return ?FreeInternally@Online_VideoStreaming@@AEAA_NPEAXW4MftAllocType@1@@Z(this, ptr, type);
}

/*
==============
Online_VideoStreaming::InitializeResources
==============
*/

void __fastcall Online_VideoStreaming::InitializeResources(Online_VideoStreaming *this)
{
  ?InitializeResources@Online_VideoStreaming@@QEAAXXZ(this);
}

/*
==============
Online_VideoStreaming::GetCurrentTimeInHNS
==============
*/

__int64 __fastcall Online_VideoStreaming::GetCurrentTimeInHNS(Online_VideoStreaming *this)
{
  return ?GetCurrentTimeInHNS@Online_VideoStreaming@@AEAA_JXZ(this);
}

/*
==============
Online_VideoStreaming::PopFrameSample
==============
*/

IMFSample *__fastcall Online_VideoStreaming::PopFrameSample(Online_VideoStreaming *this)
{
  return ?PopFrameSample@Online_VideoStreaming@@AEAAPEAUIMFSample@@XZ(this);
}

/*
==============
Online_VideoStreaming::ConfigureSourceReaderOutput
==============
*/

void __fastcall Online_VideoStreaming::ConfigureSourceReaderOutput(Online_VideoStreaming *this, IMFSourceReader *pReader, unsigned int dwStreamIndex)
{
  ?ConfigureSourceReaderOutput@Online_VideoStreaming@@AEAAXPEAUIMFSourceReader@@K@Z(this, pReader, dwStreamIndex);
}

/*
==============
MftAllocationInfo::MftAllocationInfo
==============
*/

void __fastcall MftAllocationInfo::MftAllocationInfo(MftAllocationInfo *this)
{
  ??0MftAllocationInfo@@QEAA@XZ(this);
}

/*
==============
Online_VideoStreaming::Finalize
==============
*/

int __fastcall Online_VideoStreaming::Finalize(Online_VideoStreaming *this)
{
  return ?Finalize@Online_VideoStreaming@@AEAAHXZ(this);
}

/*
==============
Online_VideoStreaming::AllocateInternally
==============
*/

void *__fastcall Online_VideoStreaming::AllocateInternally(Online_VideoStreaming *this, unsigned __int64 size, unsigned __int64 alignment, Online_VideoStreaming::MftAllocType type)
{
  return ?AllocateInternally@Online_VideoStreaming@@AEAAPEAX_K0W4MftAllocType@1@@Z(this, size, alignment, type);
}

/*
==============
Online_VideoStreaming::Initialize
==============
*/

int __fastcall Online_VideoStreaming::Initialize(Online_VideoStreaming *this, const char *filePath)
{
  return ?Initialize@Online_VideoStreaming@@AEAAHPEBD@Z(this, filePath);
}

/*
==============
Online_VideoStreaming::SetPauseStatus
==============
*/

bool __fastcall Online_VideoStreaming::SetPauseStatus(Online_VideoStreaming *this, bool pauseAll)
{
  return ?SetPauseStatus@Online_VideoStreaming@@QEAA_N_N@Z(this, pauseAll);
}

/*
==============
Online_VideoStreaming::Cleanup
==============
*/

int __fastcall Online_VideoStreaming::Cleanup(Online_VideoStreaming *this)
{
  return ?Cleanup@Online_VideoStreaming@@AEAAHXZ(this);
}

/*
==============
Online_VideoStreaming::SetDisplayStatus
==============
*/

bool __fastcall Online_VideoStreaming::SetDisplayStatus(Online_VideoStreaming *this, bool showVideo)
{
  return ?SetDisplayStatus@Online_VideoStreaming@@QEAA_N_N@Z(this, showVideo);
}

/*
==============
Online_VideoStreaming::InitializeFromThread
==============
*/

int __fastcall Online_VideoStreaming::InitializeFromThread(Online_VideoStreaming *this)
{
  return ?InitializeFromThread@Online_VideoStreaming@@AEAAHXZ(this);
}

/*
==============
InitializeThread
==============
*/

void __fastcall InitializeThread(unsigned int lpParam)
{
  ?InitializeThread@@YAXI@Z(lpParam);
}

/*
==============
Online_VideoStreaming::GetCurrentRenderTime
==============
*/

__int64 __fastcall Online_VideoStreaming::GetCurrentRenderTime(Online_VideoStreaming *this)
{
  return ?GetCurrentRenderTime@Online_VideoStreaming@@AEAA_JXZ(this);
}

/*
==============
Online_VideoStreaming::FrameInternal
==============
*/

void __fastcall Online_VideoStreaming::FrameInternal(Online_VideoStreaming *this)
{
  ?FrameInternal@Online_VideoStreaming@@AEAAXXZ(this);
}

/*
==============
Online_VideoStreaming::HandleThreadInitialize
==============
*/

void __fastcall Online_VideoStreaming::HandleThreadInitialize(Online_VideoStreaming *this)
{
  ?HandleThreadInitialize@Online_VideoStreaming@@QEAAXXZ(this);
}

/*
==============
Online_VideoStreaming::FreeResources
==============
*/

void __fastcall Online_VideoStreaming::FreeResources(Online_VideoStreaming *this)
{
  ?FreeResources@Online_VideoStreaming@@QEAAXXZ(this);
}

/*
==============
Online_VideoStreaming::CanStop
==============
*/

bool __fastcall Online_VideoStreaming::CanStop(Online_VideoStreaming *this)
{
  return ?CanStop@Online_VideoStreaming@@AEBA_NXZ(this);
}

/*
==============
Online_VideoStreaming::InitSpecific
==============
*/

void __fastcall Online_VideoStreaming::InitSpecific(Online_VideoStreaming *this)
{
  ?InitSpecific@Online_VideoStreaming@@QEAAXXZ(this);
}

/*
==============
Online_VideoStreaming::XB3XMemAlloc_TryMFTVideoAlloc
==============
*/

void *__fastcall Online_VideoStreaming::XB3XMemAlloc_TryMFTVideoAlloc(Online_VideoStreaming *this, unsigned __int64 size, unsigned __int64 allocAttributes)
{
  return ?XB3XMemAlloc_TryMFTVideoAlloc@Online_VideoStreaming@@QEAAPEAX_K0@Z(this, size, allocAttributes);
}

/*
==============
Online_VideoStreaming::IsPlayerActive
==============
*/

bool __fastcall Online_VideoStreaming::IsPlayerActive(Online_VideoStreaming *this)
{
  return ?IsPlayerActive@Online_VideoStreaming@@QEAA_NXZ(this);
}

/*
==============
Online_VideoStreaming::SetMuteStatus
==============
*/

bool __fastcall Online_VideoStreaming::SetMuteStatus(Online_VideoStreaming *this, bool soundMute)
{
  return ?SetMuteStatus@Online_VideoStreaming@@QEAA_N_N@Z(this, soundMute);
}

/*
==============
Online_VideoStreaming::RenderAudioFrame
==============
*/

int __fastcall Online_VideoStreaming::RenderAudioFrame(Online_VideoStreaming *this, IMFSample *pSample, __int64 timestamp)
{
  return ?RenderAudioFrame@Online_VideoStreaming@@AEAAHPEAUIMFSample@@_J@Z(this, pSample, timestamp);
}

/*
==============
Online_VideoStreaming::ResetSpecific
==============
*/

void __fastcall Online_VideoStreaming::ResetSpecific(Online_VideoStreaming *this)
{
  ?ResetSpecific@Online_VideoStreaming@@AEAAXXZ(this);
}

/*
==============
Online_VideoStreaming::SetupVideoTexture
==============
*/

void __fastcall Online_VideoStreaming::SetupVideoTexture(Online_VideoStreaming *this, GfxImage *image, void **imageTextureData, GfxPixelFormat format, unsigned int width, unsigned int height, unsigned int *rawMediaSize, unsigned int *out_pitch, const char *name)
{
  ?SetupVideoTexture@Online_VideoStreaming@@AEAAXPEAUGfxImage@@PEAPEAXW4GfxPixelFormat@@IIAEAI3PEBD@Z(this, image, imageTextureData, format, width, height, rawMediaSize, out_pitch, name);
}

/*
==============
MftAllocationInfo::MftAllocationInfo
==============
*/
void MftAllocationInfo::MftAllocationInfo(MftAllocationInfo *this)
{
  this->count = 0i64;
  *(_QWORD *)&this->allocated = 0i64;
  this->untrackedCount = 0;
}

/*
==============
Online_VideoStreaming::AllocateInternally
==============
*/
void *Online_VideoStreaming::AllocateInternally(Online_VideoStreaming *this, unsigned __int64 size, unsigned __int64 alignment, Online_VideoStreaming::MftAllocType type)
{
  __int64 v4; 
  void *v8; 
  MftAllocationInfo *v9; 
  unsigned __int64 count; 
  __int64 v11; 
  __int64 allocated; 
  const dvar_t *m_vidStreamLogEnabled; 
  const char *v14; 
  __int64 v15; 
  const dvar_t *v16; 
  ScopedCriticalSection v18; 

  v4 = type;
  ScopedCriticalSection::ScopedCriticalSection(&v18, CRITSECT_ONLINE_STREAMING_ALLOCATOR, SCOPED_CRITSECT_NORMAL);
  if ( this->m_allocatorReady )
  {
    v8 = ntl::nxheap::allocate(&this->s_decodeAllocator.m_heap, size, alignment, 1);
    if ( v8 )
    {
      v9 = &sMftAlloc.typeAllocs[v4];
      count = v9->count;
      if ( count >= 0x400 )
      {
        ++v9->untrackedCount;
      }
      else
      {
        v11 = count;
        v9->count = count + 1;
        v9->allocs[v11].ptr = v8;
        v9->allocs[v11].size = size;
      }
      v9->allocated += size;
      allocated = (unsigned int)v9->allocated;
      if ( (int)allocated > v9->peakAllocated )
      {
        v9->peakAllocated = allocated;
        m_vidStreamLogEnabled = this->m_vidStreamLogEnabled;
        if ( m_vidStreamLogEnabled )
        {
          if ( m_vidStreamLogEnabled->current.integer > 1 )
          {
            if ( (_DWORD)v4 )
            {
              if ( (_DWORD)v4 == 1 )
                v14 = "AUDIO";
              else
                v14 = "N/A";
            }
            else
            {
              v14 = "VIDEO";
            }
            Com_Printf(25, "[OnlineVidStreaming] New {%s} mspace peak {%llu - %f MB}\n", v14, allocated, (float)((float)(int)allocated * 0.00000095367432));
          }
        }
      }
      v15 = (unsigned int)(size + sMftAlloc.totalAllocated);
      sMftAlloc.totalAllocated = v15;
      ++sMftAlloc.totalCount;
      if ( (int)v15 > sMftAlloc.totalPeakAllocated )
      {
        sMftAlloc.totalPeakAllocated = v15;
        v16 = this->m_vidStreamLogEnabled;
        if ( v16 )
        {
          if ( v16->current.integer > 1 )
            Com_Printf(25, "[OnlineVidStreaming] New mspace peak {%llu - %f MB}\n", v15, (float)((float)(int)v15 * 0.00000095367432));
        }
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 297, ASSERT_TYPE_ASSERT, "(memBuffer)", "%s\n\tOnline_VideoStreaming::TryAllocateInternaly - Failed to allocate %llu bytes", "memBuffer", size) )
    {
      __debugbreak();
    }
  }
  else
  {
    v8 = NULL;
  }
  ScopedCriticalSection::~ScopedCriticalSection(&v18);
  return v8;
}

/*
==============
Online_VideoStreaming::CanStop
==============
*/
_BOOL8 Online_VideoStreaming::CanStop(Online_VideoStreaming *this)
{
  return this->m_resourcesAllocated;
}

/*
==============
Online_VideoStreaming::Cleanup
==============
*/
__int64 Online_VideoStreaming::Cleanup(Online_VideoStreaming *this)
{
  Online_VideoStreaming::SourceReaderCallback *m_callback; 
  void **p_lumaTextureData; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  Online_VideoStreaming *v11; 
  void **v12; 
  __int64 v13; 
  ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> > *p_m_listHead; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_node_base *v16; 
  ntl::internal::list_node_base *v17; 
  ntl::internal::list_node_base *v18; 
  ntl::internal::list_node_base *v19; 
  ntl::internal::list_node_base *v20; 
  ntl::internal::list_node_base *v21; 
  ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *v22; 
  tWAVEFORMATEX *m_pAudioReaderOutputWFX; 
  IMFSample *m_pOutputAudioSample; 
  IMFAudioMediaType *m_pAudioMediaType; 
  IMFSourceReader *m_pReader; 
  HRESULT v27; 
  int v28; 
  int *p_peakAllocated; 
  const char *v30; 
  Online_VideoStreaming::SourceReaderCallback *v31; 
  Online_VideoStreaming::SourceReaderCallback *v32; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v33; 
  ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> > *v34; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v35; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v36; 
  ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> > *v37; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v38; 
  char *m_buffer; 
  char *v40; 
  unsigned __int8 *m_workMemory; 
  __int64 v43; 
  __int64 v44; 
  Mem_PageRange inoutPageRange; 
  __int64 v46; 
  ScopedCriticalSection v47; 
  StreamerMemLoan result; 

  v46 = -2i64;
  inoutPageRange = (Mem_PageRange)this;
  ScopedCriticalSection::ScopedCriticalSection(&v47, CRITSECT_ONLINE_STREAMING_UPDATE, SCOPED_CRITSECT_NORMAL);
  SD_SetAuxCallback(NULL);
  this->m_videoDone = 1;
  this->m_audioDone = 1;
  m_callback = this->m_callback;
  EnterCriticalSection(&m_callback->m_critSec);
  Com_PrintError(25, "SourceReaderCallback::OnSample failes with error 0x%08x\n", 2147500036i64);
  m_callback->m_result = -2147467260;
  LeaveCriticalSection(&m_callback->m_critSec);
  SetEvent(m_callback->m_eventHandle);
  while ( !this->m_resourcesAllocated )
    Sys_Sleep(100);
  if ( Sys_ThreadExists(THREAD_CONTEXT_TRACE_COUNT) )
    Sys_ShutdownThread(THREAD_CONTEXT_TRACE_COUNT);
  p_lumaTextureData = &this->m_frameBuffers[0].lumaTextureData;
  v4 = 2i64;
  do
  {
    if ( *p_lumaTextureData )
    {
      Image_Release((GfxImage *)(p_lumaTextureData - 63));
      *p_lumaTextureData = NULL;
    }
    if ( p_lumaTextureData[1] )
    {
      Image_Release((GfxImage *)(p_lumaTextureData - 34));
      p_lumaTextureData[1] = NULL;
    }
    v5 = (__int64)*(p_lumaTextureData - 5);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
      *(p_lumaTextureData - 5) = NULL;
    }
    v6 = (__int64)*(p_lumaTextureData - 4);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
      *(p_lumaTextureData - 4) = NULL;
    }
    v7 = (__int64)*(p_lumaTextureData - 2);
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
      *(p_lumaTextureData - 2) = NULL;
    }
    v8 = (__int64)*(p_lumaTextureData - 3);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
      *(p_lumaTextureData - 3) = NULL;
    }
    v9 = (__int64)*(p_lumaTextureData - 1);
    if ( v9 )
    {
      *(p_lumaTextureData - 1) = NULL;
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
      if ( !R_IsAnalysisToolPresent() && !R_IsIncompatibleOverlayPresent() )
      {
        if ( v10 )
        {
          LODWORD(v44) = v10;
          LODWORD(v43) = 812;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", "c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", v43, "frame->sampleNV12Image", v44) )
            __debugbreak();
        }
      }
    }
    p_lumaTextureData += 67;
    --v4;
  }
  while ( v4 );
  v11 = (Online_VideoStreaming *)inoutPageRange;
  v12 = (void **)(*(_QWORD *)&inoutPageRange + 3528i64);
  v13 = 6i64;
  do
  {
    if ( *(_DWORD *)v12 )
    {
      Online_VideoStreaming::FreeInternally(v11, *(v12 - 1), MAT_Audio);
      *(v12 - 1) = NULL;
      *(_DWORD *)v12 = 0;
    }
    v12 += 3;
    --v13;
  }
  while ( v13 );
  p_m_listHead = &v11->m_decodedBuffers.m_listHead;
  while ( 1 )
  {
    mp_next = v11->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
    if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
      break;
    v16 = v11->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 356, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    if ( v16[1].mp_prev )
    {
      v17 = v11->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
      if ( v17 == (ntl::internal::list_node_base *)p_m_listHead )
      {
        if ( v17 != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
          __debugbreak();
      }
      v18 = v11->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 356, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
        __debugbreak();
      ((void (__fastcall *)(ntl::internal::list_node_base *))v18[1].mp_prev->mp_prev[1].mp_prev)(v18[1].mp_prev);
      v19 = v11->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
      if ( v19 == (ntl::internal::list_node_base *)p_m_listHead )
      {
        if ( v19 != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
          __debugbreak();
      }
      v20 = v11->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
      if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 356, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
        __debugbreak();
      v20[1].mp_prev = NULL;
    }
    v21 = v11->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
    if ( v21 == (ntl::internal::list_node_base *)&v11->m_decodedBuffers.m_listHead )
    {
      if ( v21 != v11->m_decodedBuffers.m_listHead.m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
    }
    v22 = (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)v11->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 319, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData>>::remove(&v11->m_decodedBuffers.m_listHead, v22);
    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
      __debugbreak();
    v22->mp_prev = (ntl::internal::list_node_base *)v11->m_decodedBuffers.m_freelist.m_head.mp_next;
    v11->m_decodedBuffers.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v22;
  }
  if ( mp_next != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
    __debugbreak();
  m_pAudioReaderOutputWFX = v11->m_pAudioReaderOutputWFX;
  if ( m_pAudioReaderOutputWFX )
  {
    CoTaskMemFree(m_pAudioReaderOutputWFX);
    v11->m_pAudioReaderOutputWFX = NULL;
  }
  m_pOutputAudioSample = v11->m_pOutputAudioSample;
  if ( m_pOutputAudioSample )
  {
    m_pOutputAudioSample->Release(m_pOutputAudioSample);
    v11->m_pOutputAudioSample = NULL;
  }
  m_pAudioMediaType = v11->m_pAudioMediaType;
  if ( m_pAudioMediaType )
  {
    m_pAudioMediaType->Release(m_pAudioMediaType);
    v11->m_pAudioMediaType = NULL;
  }
  v11->m_pReader->Flush(v11->m_pReader, 4294967294u);
  m_pReader = v11->m_pReader;
  if ( m_pReader )
  {
    m_pReader->Release(m_pReader);
    v11->m_pReader = NULL;
  }
  if ( v11->m_MFStarted )
  {
    v27 = MFShutdown_0();
    if ( v27 < 0 )
      Com_PrintError(25, "[OnlineVidStreaming] Cleanup: MFShutdown failed with HRESULT %x.\n", (unsigned int)v27);
  }
  v11->m_MFStarted = 0;
  Sys_EnterCriticalSection(CRITSECT_ONLINE_STREAMING_ALLOCATOR);
  Com_Printf(25, " -- Peak allocations: -- \n");
  v28 = 0;
  p_peakAllocated = &sMftAlloc.typeAllocs[0].peakAllocated;
  do
  {
    if ( v28 )
    {
      if ( v28 == 1 )
        v30 = "AUDIO";
      else
        v30 = "N/A";
    }
    else
    {
      v30 = "VIDEO";
    }
    Com_Printf(25, "\t%s: %u bytes {%.2fMB}\n", v30, (unsigned int)*p_peakAllocated, (float)((float)*p_peakAllocated * 0.00000095367432));
    ++v28;
    p_peakAllocated += 4102;
  }
  while ( v28 < 2 );
  Com_Printf(25, "Total peak %u / %u {%.2f MB / %.2f MB } \n", (unsigned int)sMftAlloc.totalPeakAllocated, 0x8000000i64, (float)((float)sMftAlloc.totalPeakAllocated * 0.00000095367432), DOUBLE_128_0);
  Com_Printf(25, " -- END -- \n");
  v31 = v11->m_callback;
  if ( !v31->m_eventHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\online_videostreaming.h", 443, ASSERT_TYPE_ASSERT, "(m_eventHandle)", (const char *)&queryFormat, "m_eventHandle") )
    __debugbreak();
  CloseHandle(v31->m_eventHandle);
  v31->m_eventHandle = NULL;
  DeleteCriticalSection(&v31->m_critSec);
  v32 = v11->m_callback;
  if ( v32 )
  {
    v32->Release(v32);
    v11->m_callback = NULL;
  }
  Mem_HunkUser_DumpStats();
  v11->m_allocatorReady = 0;
  Mem_HunkUser_Reset(v11->m_textureDataHunk);
  v33 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v11->m_availableBuffers.m_listHead.m_sentinel.mp_next;
  v34 = &v11->m_availableBuffers.m_listHead;
  if ( v33 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)&v11->m_availableBuffers.m_listHead )
  {
    do
    {
      v35 = v33[1].mp_next;
      v33->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v11->m_availableBuffers.m_freelist.m_head;
      v11->m_availableBuffers.m_freelist.m_head.mp_next = v33;
      v33 = v35;
    }
    while ( v35 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v34 );
  }
  v34->m_sentinel.mp_prev = &v34->m_sentinel;
  v11->m_availableBuffers.m_listHead.m_sentinel.mp_next = &v11->m_availableBuffers.m_listHead.m_sentinel;
  v36 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v11->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
  v37 = &v11->m_decodedBuffers.m_listHead;
  if ( v36 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)&v11->m_decodedBuffers.m_listHead )
  {
    do
    {
      v38 = v36[1].mp_next;
      v36->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v11->m_decodedBuffers.m_freelist.m_head;
      v11->m_decodedBuffers.m_freelist.m_head.mp_next = v36;
      v36 = v38;
    }
    while ( v38 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v37 );
  }
  v37->m_sentinel.mp_prev = &v37->m_sentinel;
  v11->m_decodedBuffers.m_listHead.m_sentinel.mp_next = &v11->m_decodedBuffers.m_listHead.m_sentinel;
  ntl::nxheap::shutdown(&v11->s_decodeAllocator.m_heap);
  ntl::nxheap_region::shutdown(&v11->s_decodeAllocator.m_region);
  m_buffer = v11->s_decodeAllocator.m_data.m_buffer;
  if ( m_buffer )
  {
    v40 = v11->s_decodeAllocator.m_allocator.m_data.m_buffer;
    if ( m_buffer != v40 && v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
      __debugbreak();
    v11->s_decodeAllocator.m_data.m_buffer = NULL;
    v11->s_decodeAllocator.m_data.m_size = 0i64;
  }
  if ( v11->m_needToFreeResources )
  {
    v11->m_needToFreeResources = 0;
    if ( v11->m_workMemoryCommitted )
    {
      if ( v11->m_allocatorReady )
      {
        v11->m_needToFreeResources = 1;
      }
      else
      {
        Mem_HunkUser_Destroy(v11->m_textureDataHunk);
        m_workMemory = (unsigned __int8 *)v11->m_workMemory;
        inoutPageRange = v11->m_workMemoryRange;
        Mem_Paged_DecommitMemoryPartial(&result, m_workMemory, m_workMemory + 0x8000000, m_workMemory, &inoutPageRange);
        StreamerMemLoan::~StreamerMemLoan(&result);
        v11->m_workMemoryRange = MEM_PAGE_RANGE_INVALID_8;
        v11->m_workMemoryCommitted = 0;
        Mem_Paged_AllocatePhysicalPages(&result, 0x800u);
        StreamerMemLoan::~StreamerMemLoan(&result);
        v11->m_needToFreeResources = 0;
      }
    }
  }
  Sys_LeaveCriticalSection(CRITSECT_ONLINE_STREAMING_ALLOCATOR);
  Online_VideoStreaming::Reset(v11);
  ScopedCriticalSection::~ScopedCriticalSection(&v47);
  return 0i64;
}

/*
==============
Online_VideoStreaming::ConfigureSourceReaderOutput
==============
*/
void Online_VideoStreaming::ConfigureSourceReaderOutput(Online_VideoStreaming *this, IMFSourceReader *pReader, unsigned int dwStreamIndex)
{
  IMFSourceReader_vtbl *v3; 
  int v6; 
  int v7; 
  HRESULT v8; 
  int v9; 
  _GUID v10; 
  int v11; 
  __int64 v12; 
  IMFMediaType *ppMFType; 
  __int64 v14; 
  __int64 v15; 
  _GUID v16; 

  v3 = pReader->__vftable;
  v12 = 0i64;
  ppMFType = NULL;
  v6 = v3->GetNativeMediaType(pReader, dwStreamIndex, 0, (IMFMediaType **)&v12);
  if ( v6 < 0 )
  {
    Com_PrintError(25, "[OnlineVidStreaming] ConfigureSourceReaderOutput: GetNativeMediaType failed with HRESULT %x.\n", (unsigned int)v6);
    return;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _GUID *, __int64 *))(*(_QWORD *)v12 + 80i64))(v12, &MF_MT_MAJOR_TYPE, &v14);
  if ( v7 < 0 )
  {
    Com_PrintError(25, "[OnlineVidStreaming] ConfigureSourceReaderOutput: GetGUID failed with HRESULT %x.\n", (unsigned int)v7);
    return;
  }
  v8 = MFCreateMediaType_0(&ppMFType);
  if ( v8 < 0 )
  {
    Com_PrintError(25, "[OnlineVidStreaming] ConfigureSourceReaderOutput: MFCreateMediaType failed with HRESULT %x.\n", (unsigned int)v8);
    return;
  }
  v9 = ppMFType->SetGUID(ppMFType, &MF_MT_MAJOR_TYPE, (const _GUID *)&v14);
  if ( v9 < 0 )
    goto LABEL_8;
  if ( v14 == *(_QWORD *)&MFMediaType_Video.Data1 && v15 == *(_QWORD *)MFMediaType_Video.Data4 )
  {
    v10 = MFVideoFormat_NV12;
  }
  else
  {
    if ( v14 != *(_QWORD *)&MFMediaType_Audio.Data1 || v15 != *(_QWORD *)MFMediaType_Audio.Data4 )
      goto LABEL_18;
    v10 = MFAudioFormat_Float;
  }
  v16 = v10;
  v9 = ppMFType->SetGUID(ppMFType, &MF_MT_SUBTYPE, &v16);
  if ( v9 < 0 )
  {
LABEL_8:
    Com_PrintError(25, "[OnlineVidStreaming] ConfigureSourceReaderOutput: SetGUID failed with HRESULT %x.\n", (unsigned int)v9);
    return;
  }
  v11 = pReader->SetCurrentMediaType(pReader, dwStreamIndex, NULL, ppMFType);
  if ( v11 < 0 )
  {
    Com_PrintError(25, "[OnlineVidStreaming] ConfigureSourceReaderOutput: SetCurrentMediaType failed with HRESULT %x.\n", (unsigned int)v11);
    return;
  }
LABEL_18:
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
    v12 = 0i64;
  }
  if ( ppMFType )
    ppMFType->Release(ppMFType);
}

/*
==============
Online_VideoStreaming::Finalize
==============
*/
int Online_VideoStreaming::Finalize(Online_VideoStreaming *this)
{
  const dvar_t *m_vidStreamLogEnabled; 
  int result; 

  m_vidStreamLogEnabled = this->m_vidStreamLogEnabled;
  if ( m_vidStreamLogEnabled && m_vidStreamLogEnabled->current.integer > 1 )
    Com_Printf(25, "[OnlineVidStreaming] Finalize Started.\n");
  if ( this->m_resourcesAllocated )
    return Online_VideoStreaming::Cleanup(this);
  result = Sys_ThreadExists(THREAD_CONTEXT_TRACE_COUNT);
  if ( result )
    return Online_VideoStreaming::Cleanup(this);
  return result;
}

/*
==============
Online_VideoStreaming::FrameInternal
==============
*/
void Online_VideoStreaming::FrameInternal(Online_VideoStreaming *this)
{
  int v2; 
  void (*OnComplete)(void); 

  if ( this->m_forceCleanup )
  {
    if ( this->m_requestStopSeq != VS_STOP_READY )
      return;
LABEL_3:
    v2 = Online_VideoStreaming::Finalize(this);
    this->m_requestStopSeq = VS_STOP_NONE;
    if ( v2 < 0 )
      Com_PrintError(25, "[OnlineVidStreaming] FrameInternal: Finalize: failed with error %d \n", (unsigned int)v2);
    return;
  }
  if ( !this->m_pReader )
    return;
  if ( this->m_requestStopSeq == VS_STOP_READY )
    goto LABEL_3;
  if ( this->m_videoDone || this->m_audioDone )
  {
    this->m_currentTime = this->m_durationTime;
    OnComplete = this->OnComplete;
    this->m_stopCause = eSC_EndOfStream;
    this->m_videoDone = 1;
    this->m_audioDone = 1;
    this->m_requestStopSeq = VS_STOP_REQUESTED;
    if ( OnComplete )
      OnComplete();
  }
}

/*
==============
Online_VideoStreaming::FreeInternally
==============
*/
__int64 Online_VideoStreaming::FreeInternally(Online_VideoStreaming *this, void *ptr, Online_VideoStreaming::MftAllocType type)
{
  __int64 v3; 
  unsigned __int64 m_workMemory; 
  MftAllocationInfo *v7; 
  int v8; 
  __int64 v9; 
  void **p_ptr; 
  unsigned __int8 v11; 
  unsigned __int64 v12; 
  __int64 v13; 
  int size; 
  bool v15; 
  unsigned __int64 count; 
  ScopedCriticalSection v18; 

  v3 = type;
  ScopedCriticalSection::ScopedCriticalSection(&v18, CRITSECT_ONLINE_STREAMING_ALLOCATOR, SCOPED_CRITSECT_NORMAL);
  if ( this->m_allocatorReady && (m_workMemory = this->m_workMemory, (unsigned __int64)ptr >= m_workMemory) && (unsigned __int64)ptr <= m_workMemory + 0x8000000 )
  {
    ntl::nxheap::free(&this->s_decodeAllocator.m_heap, ptr);
    v7 = &sMftAlloc.typeAllocs[v3];
    v8 = LODWORD(v7->count) - 1;
    v9 = v8;
    if ( v8 < 0 )
    {
LABEL_8:
      --v7->untrackedCount;
      --sMftAlloc.totalCount;
      v11 = 1;
    }
    else
    {
      p_ptr = &v7->allocs[v8].ptr;
      while ( *p_ptr != ptr )
      {
        --v8;
        p_ptr -= 2;
        if ( --v9 < 0 )
          goto LABEL_8;
      }
      v12 = v8;
      v13 = v8;
      size = v7->allocs[v8].size;
      v15 = v7->allocated - size < 0;
      v7->allocated -= size;
      if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 368, ASSERT_TYPE_ASSERT, "(allocInfo.allocated >= 0)", (const char *)&queryFormat, "allocInfo.allocated >= 0", -2i64) )
        __debugbreak();
      count = v7->count;
      if ( v12 < count - 1 )
      {
        v7->allocs[v13] = v7->allocs[count - 1];
        count = v7->count;
      }
      v7->count = count - 1;
      sMftAlloc.totalAllocated -= size;
      --sMftAlloc.totalCount;
      v11 = 1;
    }
  }
  else
  {
    v11 = 0;
  }
  ScopedCriticalSection::~ScopedCriticalSection(&v18);
  return v11;
}

/*
==============
Online_VideoStreaming::FreeResources
==============
*/
void Online_VideoStreaming::FreeResources(Online_VideoStreaming *this)
{
  unsigned __int8 *m_workMemory; 
  Mem_PageRange inoutPageRange; 
  StreamerMemLoan result; 

  if ( this->m_workMemoryCommitted )
  {
    if ( this->m_allocatorReady )
    {
      this->m_needToFreeResources = 1;
    }
    else
    {
      Mem_HunkUser_Destroy(this->m_textureDataHunk);
      m_workMemory = (unsigned __int8 *)this->m_workMemory;
      inoutPageRange = this->m_workMemoryRange;
      Mem_Paged_DecommitMemoryPartial(&result, m_workMemory, m_workMemory + 0x8000000, m_workMemory, &inoutPageRange);
      StreamerMemLoan::~StreamerMemLoan(&result);
      this->m_workMemoryRange = MEM_PAGE_RANGE_INVALID_8;
      this->m_workMemoryCommitted = 0;
      Mem_Paged_AllocatePhysicalPages(&result, 0x800u);
      StreamerMemLoan::~StreamerMemLoan(&result);
      this->m_needToFreeResources = 0;
    }
  }
}

/*
==============
Online_VideoStreaming::GetCurrentRenderTime
==============
*/
LONGLONG Online_VideoStreaming::GetCurrentRenderTime(Online_VideoStreaming *this)
{
  LONGLONG v2; 
  LARGE_INTEGER PerformanceCount; 

  QueryPerformanceCounter(&PerformanceCount);
  v2 = MFllMulDiv_0(PerformanceCount.QuadPart, 10000000i64, this->m_liFrequency.QuadPart, 0i64);
  if ( v2 < this->m_llCorrelatedStartTime )
    this->m_llCorrelatedStartTime = v2;
  QueryPerformanceCounter(&PerformanceCount);
  return MFllMulDiv_0(PerformanceCount.QuadPart, 10000000i64, this->m_liFrequency.QuadPart, 0i64) + this->m_llStartTimeStamp - this->m_llCorrelatedStartTime;
}

/*
==============
Online_VideoStreaming::GetCurrentTimeInHNS
==============
*/
LONGLONG Online_VideoStreaming::GetCurrentTimeInHNS(Online_VideoStreaming *this)
{
  LARGE_INTEGER PerformanceCount; 

  QueryPerformanceCounter(&PerformanceCount);
  return MFllMulDiv_0(PerformanceCount.QuadPart, 10000000i64, this->m_liFrequency.QuadPart, 0i64);
}

/*
==============
Online_VideoStreaming::HandleThreadInitialize
==============
*/
void Online_VideoStreaming::HandleThreadInitialize(Online_VideoStreaming *this)
{
  unsigned int v2; 

  v2 = Online_VideoStreaming::InitializeFromThread(this);
  if ( v2 )
  {
    Com_PrintError(25, "InitializeFromThread: Failed to start video %s {0x%08x}\n", this->m_currentVideo, v2);
    this->m_currentVideo[0] = 0;
    this->m_audioDone = 1;
    this->m_videoDone = 1;
    this->m_resourcesAllocated = 1;
    this->m_requestStopSeq = VS_STOP_REQUESTED;
    *(_WORD *)&this->m_StreamError = 257;
  }
  else
  {
    while ( !this->m_videoDone )
    {
      if ( this->m_audioDone )
        break;
      if ( this->m_requestStopSeq )
        break;
      Online_VideoStreaming::ProcessAudio(this);
      Online_VideoStreaming::ProcessVideo(this);
      Sys_Sleep(1);
    }
  }
}

/*
==============
Online_VideoStreaming::InitMemory
==============
*/
char Online_VideoStreaming::InitMemory(Online_VideoStreaming *this)
{
  unsigned __int8 *m_workMemory; 
  unsigned __int64 v5; 
  char *m_buffer; 
  char *v8; 
  char *v9; 
  char *v10; 
  Online_VideoStreaming::SourceReaderCallback *v11; 
  GfxImage *p_imagechroma; 
  __int64 v13; 
  Online_VideoStreaming *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> > *p_m_listHead; 
  Online_VideoStreaming *m_nextSystem; 
  ntl::internal::pool_allocator_freelist<40> *p_m_freelist; 
  __int64 v18; 
  ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *v19; 
  Online_VideoStreaming *v20; 
  ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> > *v21; 
  Online_VideoStreaming *v22; 
  unsigned int rawMediaSize; 
  unsigned int v24; 
  __int64 v25; 
  StreamerMemLoan result; 

  v25 = -2i64;
  if ( !this->m_canAllocateResources )
    return 0;
  if ( !this->m_workMemoryCommitted )
  {
    Mem_Paged_ReleasePhysicalPages(0x800u);
    this->m_textureDataHunk = Mem_HunkUser_Create(0x1400000ui64, "streamingvidtexture", TRACK_MISC, MEM_ALLOC_FLAG_NONE);
    m_workMemory = (unsigned __int8 *)this->m_workMemory;
    DB_GrowStreamerMemLoanAndWait(&result, MEM_POOL_MAIN, 0x8000000ui64);
    Mem_Paged_CommitMemoryPartial(m_workMemory, m_workMemory + 0x8000000, m_workMemory, &result, &this->m_workMemoryRange, "Video Streaming - Work");
    this->m_workMemoryCommitted = 1;
    StreamerMemLoan::~StreamerMemLoan(&result);
  }
  if ( this->s_decodeAllocator.m_heap.m_used_mem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 686, ASSERT_TYPE_ASSERT, "(s_decodeAllocator.heap().used_bytes() == 0)", (const char *)&queryFormat, "s_decodeAllocator.heap().used_bytes() == 0") )
    __debugbreak();
  v5 = this->m_workMemory;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&result.mUpdateID = _XMM0;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start") )
    __debugbreak();
  result.mUpdateID = v5;
  result.mPages = (StreamerMemPageCounts)0x8000000i64;
  ntl::nxheap::shutdown(&this->s_decodeAllocator.m_heap);
  ntl::nxheap_region::shutdown(&this->s_decodeAllocator.m_region);
  m_buffer = this->s_decodeAllocator.m_data.m_buffer;
  if ( m_buffer )
  {
    v8 = this->s_decodeAllocator.m_allocator.m_data.m_buffer;
    if ( m_buffer != v8 && v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
      __debugbreak();
    this->s_decodeAllocator.m_data.m_buffer = NULL;
    this->s_decodeAllocator.m_data.m_size = 0i64;
  }
  this->s_decodeAllocator.m_allocator = *(ntl::solitary_buffer_allocator *)&result.mUpdateID;
  ntl::nxheap::shutdown(&this->s_decodeAllocator.m_heap);
  ntl::nxheap_region::shutdown(&this->s_decodeAllocator.m_region);
  v9 = this->s_decodeAllocator.m_data.m_buffer;
  if ( v9 )
  {
    v10 = this->s_decodeAllocator.m_allocator.m_data.m_buffer;
    if ( v9 != v10 && v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
      __debugbreak();
    this->s_decodeAllocator.m_data.m_buffer = NULL;
    this->s_decodeAllocator.m_data.m_size = 0i64;
  }
  if ( this->s_decodeAllocator.m_allocator.m_data.m_size < 0x8000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 56, ASSERT_TYPE_ASSERT, "( size_bytes <= m_data.size_in_bytes() )", (const char *)&queryFormat, "size_bytes <= m_data.size_in_bytes()") )
    __debugbreak();
  result.mUpdateID = (StreamUpdateId)this->s_decodeAllocator.m_allocator.m_data.m_buffer;
  result.mPages = (StreamerMemPageCounts)0x8000000i64;
  this->s_decodeAllocator.m_data = *(ntl::internal::buffer_memory_block<char> *)&result.mUpdateID;
  if ( this->s_decodeAllocator.m_region.mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 206, ASSERT_TYPE_ASSERT, "( !m_region.is_inited() )", (const char *)&queryFormat, "!m_region.is_inited()") )
    __debugbreak();
  ntl::nxheap_region::init(&this->s_decodeAllocator.m_region, this->s_decodeAllocator.m_data.m_buffer, this->s_decodeAllocator.m_data.m_size);
  if ( this->s_decodeAllocator.m_heap.mp_parent_region && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 209, ASSERT_TYPE_ASSERT, "( !heap().is_inited() )", (const char *)&queryFormat, "!heap().is_inited()") )
    __debugbreak();
  ntl::nxheap::init(&this->s_decodeAllocator.m_heap, &this->s_decodeAllocator.m_region, DIR_BOTTOM_UP);
  v11 = (Online_VideoStreaming::SourceReaderCallback *)Mem_HunkUser_AllocInternal(this->m_textureDataHunk, 0x60ui64, 4ui64, "Online_VideoStreaming::InitMemory");
  v11->__vftable = (Online_VideoStreaming::SourceReaderCallback_vtbl *)&Online_VideoStreaming::SourceReaderCallback::`vftable';
  v11->m_refCount = 1;
  v11->m_result = 0;
  v11->m_sample = NULL;
  v11->m_eventHandle = CreateEventW(NULL, 0, 0, NULL);
  InitializeCriticalSection(&v11->m_critSec);
  this->m_callback = v11;
  rawMediaSize = 2134000;
  v24 = 1067000;
  p_imagechroma = &this->m_frameBuffers[0].imagechroma;
  v13 = 2i64;
  do
  {
    memset_0(&p_imagechroma[-1], 0, sizeof(GfxImage));
    memset_0(p_imagechroma, 0, sizeof(GfxImage));
    Online_VideoStreaming::SetupVideoTexture(this, p_imagechroma - 1, (void **)&p_imagechroma[1].depth, GFX_PF_R8, 0x794u, 0x44Cu, &rawMediaSize, (unsigned int *)p_imagechroma[1].streams, "LUMA1");
    if ( !*(_QWORD *)&p_imagechroma[1].depth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 712, ASSERT_TYPE_ASSERT, "(frame->lumaTextureData)", (const char *)&queryFormat, "frame->lumaTextureData") )
      __debugbreak();
    Online_VideoStreaming::SetupVideoTexture(this, p_imagechroma, (void **)&p_imagechroma[1].levelCount, GFX_PF_R8G8, 0x3CAu, 0x226u, &v24, (unsigned int *)&p_imagechroma[1].streams[0].xpakEntry.key + 1, "CHROMA1");
    if ( !*(_QWORD *)&p_imagechroma[1].levelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 714, ASSERT_TYPE_ASSERT, "(frame->chromaTextureData)", (const char *)&queryFormat, "frame->chromaTextureData") )
      __debugbreak();
    LODWORD(p_imagechroma[1].streams[0].xpakEntry.offset) = rawMediaSize;
    HIDWORD(p_imagechroma[1].streams[0].xpakEntry.offset) = v24;
    p_imagechroma = (GfxImage *)((char *)p_imagechroma + 536);
    --v13;
  }
  while ( v13 );
  Mem_HunkUser_DumpStats();
  sMftAlloc.totalCount = 0i64;
  *(_QWORD *)&sMftAlloc.totalAllocated = 0i64;
  *(_QWORD *)&sMftAlloc.typeAllocs[0].allocated = 0i64;
  sMftAlloc.typeAllocs[0].untrackedCount = 0;
  sMftAlloc.typeAllocs[0].count = 0i64;
  *(_QWORD *)&sMftAlloc.typeAllocs[1].allocated = 0i64;
  sMftAlloc.typeAllocs[1].untrackedCount = 0;
  sMftAlloc.typeAllocs[1].count = 0i64;
  mp_next = (Online_VideoStreaming *)this->m_availableBuffers.m_listHead.m_sentinel.mp_next;
  p_m_listHead = &this->m_availableBuffers.m_listHead;
  if ( mp_next != (Online_VideoStreaming *)&this->m_availableBuffers.m_listHead )
  {
    do
    {
      m_nextSystem = (Online_VideoStreaming *)mp_next->m_nextSystem;
      mp_next->__vftable = (Online_VideoStreaming_vtbl *)this->m_availableBuffers.m_freelist.m_head.mp_next;
      this->m_availableBuffers.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_next;
      mp_next = m_nextSystem;
    }
    while ( m_nextSystem != (Online_VideoStreaming *)p_m_listHead );
  }
  p_m_listHead->m_sentinel.mp_prev = &p_m_listHead->m_sentinel;
  this->m_availableBuffers.m_listHead.m_sentinel.mp_next = &this->m_availableBuffers.m_listHead.m_sentinel;
  p_m_freelist = &this->m_availableBuffers.m_freelist;
  v18 = 6i64;
  do
  {
    if ( !p_m_freelist->m_head.mp_next )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
    }
    if ( (ntl::internal::pool_allocator_freelist<40> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x28ui64, 6ui64) )
      __debugbreak();
    v19 = (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)p_m_freelist->m_head.mp_next;
    p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
    v19->mp_prev = NULL;
    v19->mp_next = NULL;
    ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData>>::insert_before(&this->m_availableBuffers.m_listHead, (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)&this->m_availableBuffers.m_listHead, v19);
    --v18;
  }
  while ( v18 );
  v20 = (Online_VideoStreaming *)this->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
  v21 = &this->m_decodedBuffers.m_listHead;
  if ( v20 != (Online_VideoStreaming *)&this->m_decodedBuffers.m_listHead )
  {
    do
    {
      v22 = (Online_VideoStreaming *)v20->m_nextSystem;
      v20->__vftable = (Online_VideoStreaming_vtbl *)this->m_decodedBuffers.m_freelist.m_head.mp_next;
      this->m_decodedBuffers.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v20;
      v20 = v22;
    }
    while ( v22 != (Online_VideoStreaming *)v21 );
  }
  v21->m_sentinel.mp_prev = &v21->m_sentinel;
  this->m_decodedBuffers.m_listHead.m_sentinel.mp_next = &this->m_decodedBuffers.m_listHead.m_sentinel;
  return 1;
}

/*
==============
Online_VideoStreaming::InitSpecific
==============
*/
void Online_VideoStreaming::InitSpecific(Online_VideoStreaming *this)
{
  Dvar_BeginPermanentRegistration();
  this->m_vidStreamLogEnabled = Dvar_RegisterInt("TTOMQQNTR", 1, 0, 2, 0, "DEV ONLY: Logging: 0=None, 1=ErrorsOnly, 2=All");
  Dvar_EndPermanentRegistration();
  this->m_textureDataHunk = NULL;
  this->m_workMemory = Mem_Paged_ReserveVirtualAddressRange(MEM_POOL_MAIN, 0x8000000ui64, "Video Streaming Work Memory");
  this->m_workMemoryRange = MEM_PAGE_RANGE_INVALID_8;
  this->m_workMemoryCommitted = 0;
}

/*
==============
Online_VideoStreaming::Initialize
==============
*/
__int64 Online_VideoStreaming::Initialize(Online_VideoStreaming *this, const char *filePath)
{
  if ( this->m_resourcesAllocated )
    return 0i64;
  if ( Sys_ThreadExists(THREAD_CONTEXT_TRACE_COUNT) )
    return 0i64;
  Core_strcpy(this->m_currentVideo, 0x400ui64, filePath);
  if ( Online_VideoStreaming::InitMemory(this) && Sys_SpawnVideoStreamingThread(InitializeThread) )
    return 0i64;
  else
    return 0xFFFFFFFFi64;
}

/*
==============
Online_VideoStreaming::InitializeFromThread
==============
*/
__int64 Online_VideoStreaming::InitializeFromThread(Online_VideoStreaming *this)
{
  ID3D11Device *d3d11LimitedDevice; 
  const dvar_t *m_vidStreamLogEnabled; 
  HRESULT v5; 
  HRESULT v6; 
  int v7; 
  HRESULT v8; 
  int v9; 
  int v10; 
  int v11; 
  unsigned __int64 v12; 
  HRESULT v13; 
  IMFSourceReader *m_pReader; 
  int v15; 
  HRESULT v16; 
  IMFAttributes *ppMFAttributes; 
  UINT resetToken; 
  IMFDXGIDeviceManager *ppDeviceManager; 
  IUnknown *v20; 
  __int64 v21; 
  UINT32 pcbSize; 
  PROPVARIANT pvar; 
  wchar_t pDestBuffer[1024]; 

  d3d11LimitedDevice = g_dx.d3d11LimitedDevice;
  ppDeviceManager = NULL;
  resetToken = 0;
  v20 = NULL;
  v21 = 0i64;
  if ( this->m_resourcesAllocated )
    return 0i64;
  if ( !this->m_currentVideo[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 502, ASSERT_TYPE_ASSERT, "(m_currentVideo[0] != 0)", (const char *)&queryFormat, "m_currentVideo[0] != 0") )
    __debugbreak();
  m_vidStreamLogEnabled = this->m_vidStreamLogEnabled;
  if ( m_vidStreamLogEnabled && m_vidStreamLogEnabled->current.integer > 1 )
    Com_Printf(25, "[OnlineVidStreaming] Initialize Started. %s \n", this->m_currentVideo);
  this->m_allocatorReady = 1;
  memset_0(&this->m_audioData, 0, sizeof(this->m_audioData));
  if ( this->m_MFStarted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 509, ASSERT_TYPE_ASSERT, "(!m_MFStarted)", (const char *)&queryFormat, "!m_MFStarted") )
    __debugbreak();
  v5 = MFStartup_0(0x20070u, 0);
  if ( v5 < 0 )
  {
    Com_PrintError(25, "[OnlineVidStreaming] InitializeFromThread: MFStartup failed with HRESULT %x.\n", (unsigned int)v5);
    return 0xFFFFFFFFi64;
  }
  this->m_MFStarted = 1;
  ppMFAttributes = NULL;
  v6 = MFCreateAttributes_0(&ppMFAttributes, 4u);
  if ( v6 < 0 )
  {
    Com_PrintError(25, "[OnlineVidStreaming] InitializeFromThread: MFCreateAttributes failed with HRESULT %x.\n", (unsigned int)v6);
    return 0xFFFFFFFFi64;
  }
  if ( !this->m_callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 542, ASSERT_TYPE_ASSERT, "(m_callback)", (const char *)&queryFormat, "m_callback") )
    __debugbreak();
  v7 = ppMFAttributes->SetUnknown(ppMFAttributes, &MF_SOURCE_READER_ASYNC_CALLBACK, this->m_callback);
  if ( v7 < 0 )
    goto LABEL_26;
  v8 = MFCreateDXGIDeviceManager_0(&resetToken, &ppDeviceManager);
  if ( v8 < 0 )
  {
    Com_PrintError(25, "[OnlineVidStreaming] InitializeFromThread: MFCreateDXGIDeviceManager failed with HRESULT %x.\n", (unsigned int)v8);
    return 0xFFFFFFFFi64;
  }
  v9 = MFResetDXGIDeviceManagerX_0(ppDeviceManager, d3d11LimitedDevice, resetToken);
  if ( v9 < 0 )
  {
    Com_PrintError(25, "[OnlineVidStreaming] InitializeFromThread: MFResetDXGIDeviceManagerX failed with HRESULT %x.\n", (unsigned int)v9);
    return 0xFFFFFFFFi64;
  }
  v10 = ppDeviceManager->QueryInterface(ppDeviceManager, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v20);
  if ( v10 < 0 )
    goto LABEL_42;
  v7 = ppMFAttributes->SetUnknown(ppMFAttributes, &MF_SOURCE_READER_D3D_MANAGER, v20);
  if ( v7 < 0 )
  {
LABEL_26:
    Com_PrintError(25, "[OnlineVidStreaming] InitializeFromThread: SetUnknown failed with HRESULT %x.\n", (unsigned int)v7);
    return 0xFFFFFFFFi64;
  }
  v11 = ppMFAttributes->SetUINT32(ppMFAttributes, &MF_READWRITE_ENABLE_HARDWARE_TRANSFORMS, 1u);
  if ( v11 < 0 || (v11 = ppMFAttributes->SetUINT32(ppMFAttributes, &MF_SOURCE_READER_DISABLE_DXVA, 0), v11 < 0) )
  {
    Com_PrintError(25, "[OnlineVidStreaming] InitializeFromThread: SetUINT32 failed with HRESULT %x.\n", (unsigned int)v11);
    return 0xFFFFFFFFi64;
  }
  v12 = -1i64;
  do
    ++v12;
  while ( this->m_currentVideo[v12] );
  if ( v12 > 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 596, ASSERT_TYPE_ASSERT, "(strlen( m_currentVideo ) <= 1024)", (const char *)&queryFormat, "strlen( m_currentVideo ) <= 1024") )
    __debugbreak();
  ConvertCharArrayToWideCharArray(this->m_currentVideo, pDestBuffer, 0x400ui64);
  v13 = MFCreateSourceReaderFromURL_0(pDestBuffer, ppMFAttributes, &this->m_pReader);
  if ( v13 < 0 )
  {
    Com_PrintError(25, "[OnlineVidStreaming] InitializeFromThread: MFCreateSourceReaderFromURL failed with HRESULT %x.\n", (unsigned int)v13);
    return 0xFFFFFFFFi64;
  }
  Online_VideoStreaming::ConfigureSourceReaderOutput(this, this->m_pReader, 0xFFFFFFFC);
  m_pReader = this->m_pReader;
  this->m_startTime = 0i64;
  this->m_durationTime = 0i64;
  if ( m_pReader->GetPresentationAttribute(m_pReader, 0xFFFFFFFF, &MF_PD_DURATION, &pvar) >= 0 )
  {
    this->m_durationTime = pvar.decVal.Lo64;
    PropVariantClear(&pvar);
  }
  Online_VideoStreaming::ConfigureSourceReaderOutput(this, this->m_pReader, 0xFFFFFFFD);
  v15 = this->m_pReader->GetCurrentMediaType(this->m_pReader, 4294967293u, (IMFMediaType **)&v21);
  if ( v15 < 0 )
  {
    Com_PrintError(25, "[OnlineVidStreaming] InitializeFromThread: GetCurrentMediaType failed with HRESULT %x.\n", (unsigned int)v15);
    return 0xFFFFFFFFi64;
  }
  v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, IMFAudioMediaType **))v21)(v21, &GUID_26a0adc3_ce26_4672_9304_69552edd3faf, &this->m_pAudioMediaType);
  if ( v10 >= 0 )
  {
    v16 = MFCreateWaveFormatExFromMFMediaType_0(this->m_pAudioMediaType, &this->m_pAudioReaderOutputWFX, &pcbSize, 0);
    if ( v16 >= 0 )
    {
      SD_SetAuxCallback(audioAuxCallback);
      if ( !QueryPerformanceFrequency(&this->m_liFrequency) )
        Com_PrintError(25, "[OnlineVidStreaming] InitializeFromThread: QueryPerformanceFrequency failed!\n");
      if ( ppMFAttributes )
      {
        ppMFAttributes->Release(ppMFAttributes);
        ppMFAttributes = NULL;
      }
      if ( v20 )
      {
        v20->Release(v20);
        v20 = NULL;
      }
      if ( ppDeviceManager )
      {
        ppDeviceManager->Release(ppDeviceManager);
        ppDeviceManager = NULL;
      }
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16i64))(v21);
      this->m_resourcesAllocated = 1;
      return 0i64;
    }
    else
    {
      Com_PrintError(25, "[OnlineVidStreaming] InitializeFromThread: MFCreateWaveFormatExFromMFMediaType failed with HRESULT %x.\n", (unsigned int)v16);
      return 0xFFFFFFFFi64;
    }
  }
  else
  {
LABEL_42:
    Com_PrintError(25, "[OnlineVidStreaming] InitializeFromThread: QueryInterface failed with HRESULT %x.\n", (unsigned int)v10);
    return 0xFFFFFFFFi64;
  }
}

/*
==============
Online_VideoStreaming::InitializeResources
==============
*/
void Online_VideoStreaming::InitializeResources(Online_VideoStreaming *this)
{
  unsigned __int8 *m_workMemory; 
  StreamerMemLoan result; 

  if ( !this->m_canAllocateResources && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 913, ASSERT_TYPE_ASSERT, "(m_canAllocateResources)", (const char *)&queryFormat, "m_canAllocateResources", -2i64) )
    __debugbreak();
  if ( !this->m_workMemoryCommitted )
  {
    Mem_Paged_ReleasePhysicalPages(0x800u);
    this->m_textureDataHunk = Mem_HunkUser_Create(0x1400000ui64, "streamingvidtexture", TRACK_MISC, MEM_ALLOC_FLAG_NONE);
    m_workMemory = (unsigned __int8 *)this->m_workMemory;
    DB_GrowStreamerMemLoanAndWait(&result, MEM_POOL_MAIN, 0x8000000ui64);
    Mem_Paged_CommitMemoryPartial(m_workMemory, m_workMemory + 0x8000000, m_workMemory, &result, &this->m_workMemoryRange, "Video Streaming - Work");
    this->m_workMemoryCommitted = 1;
    StreamerMemLoan::~StreamerMemLoan(&result);
  }
}

/*
==============
InitializeThread
==============
*/
void InitializeThread(unsigned int lpParam)
{
  Online_VideoStreaming *Instance; 
  unsigned int v2; 

  Instance = Online_VideoStreaming::GetInstance();
  v2 = Online_VideoStreaming::InitializeFromThread(Instance);
  if ( v2 )
  {
    Com_PrintError(25, "InitializeFromThread: Failed to start video %s {0x%08x}\n", Instance->m_currentVideo, v2);
    Instance->m_currentVideo[0] = 0;
    Instance->m_audioDone = 1;
    Instance->m_videoDone = 1;
    Instance->m_resourcesAllocated = 1;
    Instance->m_requestStopSeq = VS_STOP_REQUESTED;
    *(_WORD *)&Instance->m_StreamError = 257;
  }
  else
  {
    while ( !Instance->m_videoDone )
    {
      if ( Instance->m_audioDone )
        break;
      if ( Instance->m_requestStopSeq )
        break;
      Online_VideoStreaming::ProcessAudio(Instance);
      Online_VideoStreaming::ProcessVideo(Instance);
      Sys_Sleep(1);
    }
  }
}

/*
==============
Online_VideoStreaming::IsPlayerActive
==============
*/
bool Online_VideoStreaming::IsPlayerActive(Online_VideoStreaming *this)
{
  int v1; 

  if ( this->m_pReader || (v1 = Sys_ThreadExists(THREAD_CONTEXT_TRACE_COUNT)) != 0 )
    LOBYTE(v1) = 1;
  return v1;
}

/*
==============
Online_VideoStreaming::PopFrameSample
==============
*/
ntl::internal::list_node_base *Online_VideoStreaming::PopFrameSample(Online_VideoStreaming *this)
{
  LONGLONG v2; 
  LONGLONG v3; 
  ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> > *p_m_listHead; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_node_base *v6; 
  ntl::internal::list_node_base *v8; 
  ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *v9; 
  ntl::internal::pool_allocator_freelist<40> *p_m_freelist; 
  ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *v11; 
  ntl::internal::list_node_base *v12; 
  ntl::internal::list_node_base *v13; 
  ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *v14; 
  ntl::internal::pool_allocator_freelist<40> *v15; 
  ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *v16; 
  ScopedCriticalSection v18; 
  ntl::internal::list_node_base v19; 
  ntl::internal::list_node_base *mp_prev; 
  LARGE_INTEGER PerformanceCount; 
  LARGE_INTEGER v22; 

  ScopedCriticalSection::ScopedCriticalSection(&v18, CRITSECT_ONLINE_STREAMING_UPDATE, SCOPED_CRITSECT_NORMAL);
  QueryPerformanceCounter(&PerformanceCount);
  v2 = MFllMulDiv_0(PerformanceCount.QuadPart, 10000000i64, this->m_liFrequency.QuadPart, 0i64);
  if ( v2 < this->m_llCorrelatedStartTime )
    this->m_llCorrelatedStartTime = v2;
  QueryPerformanceCounter(&v22);
  v3 = MFllMulDiv_0(v22.QuadPart, 10000000i64, this->m_liFrequency.QuadPart, 0i64) + this->m_llStartTimeStamp - this->m_llCorrelatedStartTime;
  p_m_listHead = &this->m_decodedBuffers.m_listHead;
  while ( 1 )
  {
    mp_next = this->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
    if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
    {
      if ( mp_next != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
        __debugbreak();
      goto LABEL_59;
    }
    v6 = this->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 356, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    v19 = v6[1];
    mp_prev = v6[2].mp_prev;
    __asm { vpextrd rax, xmm1, 2 }
    if ( (_DWORD)_RAX == this->m_videoWidth )
      break;
    if ( v19.mp_prev )
      ((void (__fastcall *)(ntl::internal::list_node_base *))v19.mp_prev->mp_prev[1].mp_prev)(v19.mp_prev);
    v8 = this->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
    if ( v8 == (ntl::internal::list_node_base *)p_m_listHead )
    {
      if ( v8 != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
    }
    v9 = (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)this->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 319, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData>>::remove(&this->m_decodedBuffers.m_listHead, v9);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
      __debugbreak();
    v9->mp_prev = (ntl::internal::list_node_base *)this->m_decodedBuffers.m_freelist.m_head.mp_next;
    this->m_decodedBuffers.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v9;
    p_m_freelist = &this->m_availableBuffers.m_freelist;
    if ( !this->m_availableBuffers.m_freelist.m_head.mp_next )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
    }
    if ( (ntl::internal::pool_allocator_freelist<40> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x28ui64, 6ui64) )
      __debugbreak();
    v11 = (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)p_m_freelist->m_head.mp_next;
    p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
    v11->mp_prev = NULL;
    v11->mp_next = NULL;
    ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData>>::insert_before(&this->m_availableBuffers.m_listHead, (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)this->m_availableBuffers.m_listHead.m_sentinel.mp_next, v11);
  }
  if ( (__int64)mp_prev > v3 )
  {
LABEL_59:
    v12 = NULL;
    goto LABEL_60;
  }
  this->m_llTimeVideo = (unsigned __int64)mp_prev;
  v12 = v19.mp_prev;
  v13 = this->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
  if ( v13 == (ntl::internal::list_node_base *)p_m_listHead )
  {
    if ( v13 != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
      __debugbreak();
  }
  v14 = (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)this->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 319, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
    __debugbreak();
  ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData>>::remove(&this->m_decodedBuffers.m_listHead, v14);
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
    __debugbreak();
  v14->mp_prev = (ntl::internal::list_node_base *)this->m_decodedBuffers.m_freelist.m_head.mp_next;
  this->m_decodedBuffers.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v14;
  v15 = &this->m_availableBuffers.m_freelist;
  if ( !this->m_availableBuffers.m_freelist.m_head.mp_next )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    if ( !v15->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
  }
  if ( (ntl::internal::pool_allocator_freelist<40> *)v15->m_head.mp_next == v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x28ui64, 6ui64) )
    __debugbreak();
  v16 = (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)v15->m_head.mp_next;
  v15->m_head.mp_next = v15->m_head.mp_next->mp_next;
  v16->mp_prev = NULL;
  v16->mp_next = NULL;
  ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData>>::insert_before(&this->m_availableBuffers.m_listHead, (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)this->m_availableBuffers.m_listHead.m_sentinel.mp_next, v16);
LABEL_60:
  ScopedCriticalSection::~ScopedCriticalSection(&v18);
  return v12;
}

/*
==============
Online_VideoStreaming::ProcessAudio
==============
*/
void Online_VideoStreaming::ProcessAudio(Online_VideoStreaming *this)
{
  IMFSample *m_pOutputAudioSample; 
  int v3; 
  Online_VideoStreaming::SourceReaderCallback *m_callback; 
  __int64 v5; 
  int m_result; 
  unsigned int m_streamFlags; 
  __int64 m_sampleTimestamp; 
  IMFSample *m_sample; 
  __int64 m_streamIndex; 
  unsigned __int64 m_llTimeVideo; 
  __int64 v12; 
  float v13; 
  float v14; 
  IMFSourceReader *m_pReader; 
  int v16; 
  int v17; 
  HRESULT v18; 
  UINT32 pcbSize; 
  __int64 v20; 

  m_pOutputAudioSample = this->m_pOutputAudioSample;
  v3 = 1;
  if ( m_pOutputAudioSample )
  {
    if ( !Online_VideoStreaming::RenderAudioFrame(this, m_pOutputAudioSample, 0i64) )
      return;
    this->m_pOutputAudioSample = NULL;
  }
  if ( !this->m_audioDone )
  {
    while ( v3 )
    {
      this->m_pReader->ReadSample(this->m_pReader, 4294967293u, 0, NULL, NULL, NULL, NULL);
      m_callback = this->m_callback;
      WaitForSingleObject(m_callback->m_eventHandle, 0xFFFFFFFF);
      m_result = m_callback->m_result;
      m_streamFlags = m_callback->m_streamFlags;
      m_sampleTimestamp = m_callback->m_sampleTimestamp;
      m_sample = m_callback->m_sample;
      m_streamIndex = m_callback->m_streamIndex;
      m_callback->m_sample = NULL;
      m_callback->m_sampleTimestamp = 0i64;
      m_callback->m_streamFlags = 0;
      if ( m_result < 0 )
      {
        v3 = 0;
        if ( m_result == -1072873852 )
          this->m_audioDone = 1;
      }
      else
      {
        if ( m_sampleTimestamp < 0 )
          goto LABEL_8;
        this->m_llTimeAudio = m_sampleTimestamp;
        if ( (m_streamFlags & 2) != 0 )
          this->m_audioDone = 1;
        m_llTimeVideo = this->m_llTimeVideo;
        if ( m_llTimeVideo <= m_sampleTimestamp )
          goto LABEL_16;
        v12 = m_llTimeVideo - m_sampleTimestamp;
        v13 = (float)v12;
        if ( v12 < 0 )
        {
          v14 = (float)v12;
          v13 = v14 + 1.8446744e19;
        }
        if ( v13 > 300000.0 )
        {
LABEL_8:
          if ( m_sample )
            ((void (__fastcall *)(IMFSample *, __int64, __int64))m_sample->Release)(m_sample, v5, m_streamIndex);
        }
        else
        {
LABEL_16:
          if ( (m_streamFlags & 0x10) != 0 )
          {
            Online_VideoStreaming::ConfigureSourceReaderOutput(this, this->m_pReader, m_streamIndex);
            m_pReader = this->m_pReader;
            v20 = 0i64;
            v16 = m_pReader->GetCurrentMediaType(m_pReader, 4294967293u, (IMFMediaType **)&v20);
            if ( v16 < 0 )
            {
              Com_PrintError(25, "[OnlineVidStreaming] ProcessAudio: GetCurrentMediaType failed with HRESULT %x.\n", (unsigned int)v16);
              return;
            }
            v17 = (**(__int64 (__fastcall ***)(__int64, GUID *, IMFAudioMediaType **))v20)(v20, &GUID_26a0adc3_ce26_4672_9304_69552edd3faf, &this->m_pAudioMediaType);
            if ( v17 < 0 )
            {
              Com_PrintError(25, "[OnlineVidStreaming] ProcessAudio: QueryInterface failed with HRESULT %x.\n", (unsigned int)v17);
              return;
            }
            if ( !this->m_pAudioReaderOutputWFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1207, ASSERT_TYPE_ASSERT, "(m_pAudioReaderOutputWFX)", (const char *)&queryFormat, "m_pAudioReaderOutputWFX") )
              __debugbreak();
            CoTaskMemFree(this->m_pAudioReaderOutputWFX);
            v18 = MFCreateWaveFormatExFromMFMediaType_0(this->m_pAudioMediaType, &this->m_pAudioReaderOutputWFX, &pcbSize, 0);
            if ( v18 < 0 )
            {
              Com_PrintError(25, "[OnlineVidStreaming] ProcessAudio: MFCreateWaveFormatExFromMFMediaType failed with HRESULT %x.\n", (unsigned int)v18);
              return;
            }
            if ( v20 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16i64))(v20);
              v20 = 0i64;
            }
          }
          if ( m_sample )
          {
            v3 = Online_VideoStreaming::RenderAudioFrame(this, m_sample, m_sampleTimestamp);
            if ( v3 )
              ++this->m_numberOfFramesDecoded;
            else
              this->m_pOutputAudioSample = m_sample;
          }
        }
      }
      if ( this->m_audioDone )
        return;
    }
  }
}

/*
==============
Online_VideoStreaming::ProcessVideo
==============
*/
void Online_VideoStreaming::ProcessVideo(Online_VideoStreaming *this)
{
  ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> > *p_m_listHead; 
  ntl::internal::list_node_base *mp_next; 
  int v4; 
  Online_VideoStreaming::SourceReaderCallback *m_callback; 
  unsigned int m_streamFlags; 
  unsigned __int64 m_sampleTimestamp; 
  IMFSample *m_sample; 
  unsigned int m_streamIndex; 
  int m_result; 
  IMFSourceReader *m_pReader; 
  HRESULT v12; 
  unsigned int m_videoHeight; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  const char *v16; 
  __int64 v17; 
  int v18; 
  unsigned int v19; 
  unsigned __int64 m_llTimeAudio; 
  __int64 v21; 
  float v22; 
  float v23; 
  ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> > *v24; 
  ntl::internal::list_node_base *v25; 
  ntl::internal::list_node_base v26; 
  unsigned int m_videoWidth; 
  ntl::internal::pool_allocator_freelist<40> *p_m_freelist; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v29; 
  __int128 v30; 
  double v31; 
  ntl::internal::list_node_base *v32; 
  ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *v33; 
  const char *v34; 
  __int64 v35; 
  __int128 v36; 
  double v37; 
  unsigned __int64 v38; 
  __int64 v39; 
  __int64 v40; 

  p_m_listHead = &this->m_availableBuffers.m_listHead;
  mp_next = this->m_availableBuffers.m_listHead.m_sentinel.mp_next;
  v4 = 1;
  if ( mp_next != (ntl::internal::list_node_base *)&this->m_availableBuffers.m_listHead )
  {
    if ( this->m_videoDone )
      return;
    while ( 1 )
    {
      if ( !v4 )
        return;
      v4 = 0;
      this->m_pReader->ReadSample(this->m_pReader, 4294967292u, 0, NULL, NULL, NULL, NULL);
      m_callback = this->m_callback;
      WaitForSingleObject(m_callback->m_eventHandle, 0xFFFFFFFF);
      m_streamFlags = m_callback->m_streamFlags;
      m_sampleTimestamp = m_callback->m_sampleTimestamp;
      m_sample = m_callback->m_sample;
      m_streamIndex = m_callback->m_streamIndex;
      m_callback->m_sample = NULL;
      m_callback->m_sampleTimestamp = 0i64;
      m_callback->m_streamFlags = 0;
      m_result = m_callback->m_result;
      if ( m_result >= 0 )
      {
        if ( (m_streamFlags & 2) != 0 )
          this->m_videoDone = 1;
        if ( (m_streamFlags & 0x10) != 0 )
          Online_VideoStreaming::ConfigureSourceReaderOutput(this, this->m_pReader, m_streamIndex);
        if ( m_sample )
        {
          if ( !this->m_videoWidth || !this->m_videoHeight || (m_streamFlags & 0x30) != 0 )
          {
            m_pReader = this->m_pReader;
            v35 = 0i64;
            if ( m_pReader->GetCurrentMediaType(m_pReader, 4294967292u, (IMFMediaType **)&v35) >= 0 )
            {
              v12 = (*(__int64 (__fastcall **)(__int64, _GUID *, unsigned __int64 *))(*(_QWORD *)v35 + 64i64))(v35, &MF_MT_FRAME_SIZE, &v38);
              if ( v12 < 0 )
              {
                v16 = R_ErrorDescription(v12);
                Sys_Error((const ObfuscateErrorText)&stru_1444B85D0, 1059i64, v16);
                m_videoHeight = this->m_videoHeight;
                LODWORD(v15) = this->m_videoWidth;
              }
              else
              {
                m_videoHeight = v38;
                v14 = v38;
                this->m_videoHeight = v38;
                v15 = HIDWORD(v14);
                this->m_videoWidth = v15;
              }
              this->m_videoDataHeight = m_videoHeight;
              v17 = v35;
              this->m_videoDataWidth = v15;
              v39 = 0i64;
              v40 = 0i64;
              if ( (*(int (__fastcall **)(__int64, _GUID *, __int64 *, __int64, _QWORD))(*(_QWORD *)v17 + 120i64))(v17, &MF_MT_MINIMUM_DISPLAY_APERTURE, &v39, 16i64, 0i64) >= 0 )
              {
                v18 = v40;
                v19 = HIDWORD(v40);
                this->m_videoWidth = v40;
                this->m_videoHeight = v19;
                if ( v18 > 1920 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1070, ASSERT_TYPE_ASSERT, "(videoArea.Area.cx <= 1920)", (const char *)&queryFormat, "videoArea.Area.cx <= MAX_WIDTH") )
                  __debugbreak();
                if ( SHIDWORD(v40) > 1080 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1071, ASSERT_TYPE_ASSERT, "(videoArea.Area.cy <= 1080)", (const char *)&queryFormat, "videoArea.Area.cy <= MAX_HEIGHT") )
                  __debugbreak();
              }
              if ( v35 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16i64))(v35);
                v35 = 0i64;
              }
            }
          }
          m_llTimeAudio = this->m_llTimeAudio;
          if ( m_llTimeAudio <= m_sampleTimestamp )
            goto LABEL_34;
          v21 = m_llTimeAudio - m_sampleTimestamp;
          v22 = (float)v21;
          if ( v21 < 0 )
          {
            v23 = (float)v21;
            v22 = v23 + 1.8446744e19;
          }
          if ( v22 <= 300000.0 )
          {
LABEL_34:
            this->m_currentTime = m_sampleTimestamp;
            Sys_EnterCriticalSection(CRITSECT_ONLINE_STREAMING_UPDATE);
            v24 = (ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> > *)p_m_listHead->m_sentinel.mp_next;
            if ( v24 == p_m_listHead )
            {
              if ( v24 != (ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> > *)p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
                __debugbreak();
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
                __debugbreak();
            }
            v25 = p_m_listHead->m_sentinel.mp_next;
            if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 356, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
              __debugbreak();
            v26 = v25[1];
            m_videoWidth = this->m_videoWidth;
            p_m_freelist = &this->m_decodedBuffers.m_freelist;
            v37 = *(double *)&m_sampleTimestamp;
            *(_QWORD *)&v36 = m_sample;
            *((_QWORD *)&v36 + 1) = __PAIR64__(HIDWORD(v26.mp_next), m_videoWidth);
            if ( !this->m_decodedBuffers.m_freelist.m_head.mp_next )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
                __debugbreak();
              if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
                __debugbreak();
            }
            if ( (ntl::internal::pool_allocator_freelist<40> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x28ui64, 6ui64) )
              __debugbreak();
            v29 = p_m_freelist->m_head.mp_next;
            v30 = v36;
            v31 = v37;
            p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
            *(_OWORD *)&v29[2].mp_next = v30;
            *(double *)&v29[4].mp_next = v31;
            v29->mp_next = NULL;
            v29[1].mp_next = NULL;
            ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData>>::insert_before(&this->m_decodedBuffers.m_listHead, (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)&this->m_decodedBuffers.m_listHead, (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)v29);
            v32 = this->m_availableBuffers.m_listHead.m_sentinel.mp_next;
            if ( v32 == (ntl::internal::list_node_base *)&this->m_availableBuffers.m_listHead )
            {
              if ( v32 != this->m_availableBuffers.m_listHead.m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
                __debugbreak();
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
                __debugbreak();
            }
            v33 = (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)this->m_availableBuffers.m_listHead.m_sentinel.mp_next;
            if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 319, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
              __debugbreak();
            ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData>>::remove(&this->m_availableBuffers.m_listHead, v33);
            if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
              __debugbreak();
            v33->mp_prev = (ntl::internal::list_node_base *)this->m_availableBuffers.m_freelist.m_head.mp_next;
            this->m_availableBuffers.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v33;
            Sys_LeaveCriticalSection(CRITSECT_ONLINE_STREAMING_UPDATE);
            ++this->m_numberOfFramesDecoded;
          }
          else
          {
            m_sample->Release(m_sample);
            v4 = 1;
          }
        }
        goto LABEL_82;
      }
      if ( m_result != -2147467260 )
        break;
LABEL_82:
      if ( this->m_videoDone )
        return;
    }
    if ( m_result > -1072875853 )
    {
      if ( m_result == -1072875852 )
      {
        v34 = "MF_E_INVALIDMEDIATYPE - The data specified for the media type is invalid, inconsistent, or not supported by this object";
        goto LABEL_80;
      }
      if ( m_result == -1072875851 )
      {
        v34 = "MF_E_NOTACCEPTING - A flush operation is pending";
        goto LABEL_80;
      }
    }
    else
    {
      switch ( m_result )
      {
        case -1072875853:
          v34 = "MF_E_INVALIDSTREAMNUMBER - The dwStreamIndex parameter is invalid.";
          goto LABEL_80;
        case -2147024882:
          v34 = "Out of memory or system resources...";
          goto LABEL_80;
        case -2147024809:
          v34 = "MF_E_INVALIDREQUEST - Invalid argument";
          goto LABEL_80;
        case -1072875854:
          v34 = "MF_E_INVALIDREQUEST - INVALID REQUEST";
LABEL_80:
          Com_PrintError(25, "[OnlineVidStreaming] ProcessVideo: ReadSample returned error: 0x%08x {%s}\n", (unsigned int)m_result, v34);
          if ( m_result == -2147024882 )
          {
            Mem_Error_CannotAlloc_Dev((Mem_AllocatorType)17, "Online_VideoStreaming::ProcessVideo", "c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1109, "MediaFoundation failed to allocate memory. Make sure there is enough free system memory for Legacy allocations.");
            return;
          }
          this->m_videoDone = 1;
          this->m_audioDone = 1;
          Online_VideoStreaming::StopVideo(this, 0, 0);
          goto LABEL_82;
      }
    }
    v34 = "UNKNOWN";
    goto LABEL_80;
  }
  if ( mp_next != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
    __debugbreak();
}

/*
==============
Online_VideoStreaming::RenderAudioFrame
==============
*/
__int64 Online_VideoStreaming::RenderAudioFrame(Online_VideoStreaming *this, IMFSample *pSample, __int64 timestamp)
{
  __int128 v3; 
  volatile VideoStreamingStopSeq m_requestStopSeq; 
  IMFSample *v5; 
  unsigned __int64 m_qwAudioFrameRendered; 
  volatile int *p_frameCount; 
  tWAVEFORMATEX *m_pAudioReaderOutputWFX; 
  unsigned __int16 nChannels; 
  int v12; 
  int v13; 
  bool v14; 
  tWAVEFORMATEX *v15; 
  float nSamplesPerSec; 
  float v17; 
  __int64 v18; 
  float v19; 
  float v20; 
  int v21; 
  int v22; 
  __int64 audioWriteFrame; 
  __int64 v24; 
  int bufferSize; 
  int v26; 
  float *buffer; 
  tWAVEFORMATEX *v28; 
  unsigned __int16 v29; 
  int v30; 
  float *v31; 
  __int64 v32; 
  int v33; 
  float *v34; 
  __int64 v35; 
  float *v36; 
  int v37; 
  float *v38; 
  float *v39; 
  unsigned __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  int v47; 
  signed __int32 v48[8]; 
  __int64 v49; 
  void *Src; 
  SndResamplerState state; 
  char v52[4]; 
  LARGE_INTEGER PerformanceCount; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  __int128 v57; 
  size_t Size; 
  IMFSample *v59; 
  int v60; 

  v59 = pSample;
  m_requestStopSeq = this->m_requestStopSeq;
  v5 = pSample;
  v49 = 0i64;
  if ( m_requestStopSeq )
    return 0i64;
  m_qwAudioFrameRendered = this->m_qwAudioFrameRendered;
  if ( !m_qwAudioFrameRendered )
    this->m_llStartTimeStamp = timestamp;
  if ( this->m_llCorrelatedStartTime == -1 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    this->m_llCorrelatedStartTime = MFllMulDiv_0(PerformanceCount.QuadPart, 10000000i64, this->m_liFrequency.QuadPart, 0i64);
    m_qwAudioFrameRendered = this->m_qwAudioFrameRendered;
  }
  p_frameCount = &this->m_audioData.frameCount;
  this->m_qwAudioFrameRendered = m_qwAudioFrameRendered + 1;
  if ( this->m_audioData.frameCount >= 6 )
    return 0i64;
  m_pAudioReaderOutputWFX = this->m_pAudioReaderOutputWFX;
  if ( m_pAudioReaderOutputWFX->wFormatTag != 3 || m_pAudioReaderOutputWFX->wBitsPerSample != 32 )
  {
    Com_PrintError(25, "[OnlineVidStreaming] RenderAudioFrame: Invalid audio format %x, bit per sample %d.\n", m_pAudioReaderOutputWFX->wFormatTag, m_pAudioReaderOutputWFX->wBitsPerSample);
    return 0i64;
  }
  nChannels = m_pAudioReaderOutputWFX->nChannels;
  if ( (unsigned __int16)(nChannels - 1) <= 1u )
  {
    v12 = ((__int64 (__fastcall *)(IMFSample *, __int64 *, __int64))v5->ConvertToContiguousBuffer)(v5, &v49, timestamp);
    if ( v12 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, void **, char *, size_t *))(*(_QWORD *)v49 + 24i64))(v49, &Src, v52, &Size);
      if ( v13 >= 0 )
      {
        v14 = this->m_pAudioReaderOutputWFX->wFormatTag == 3;
        v57 = v3;
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1772, ASSERT_TYPE_ASSERT, "(m_pAudioReaderOutputWFX->wFormatTag == 0x0003)", (const char *)&queryFormat, "m_pAudioReaderOutputWFX->wFormatTag == WAVE_FORMAT_IEEE_FLOAT") )
          __debugbreak();
        if ( this->m_pAudioReaderOutputWFX->wBitsPerSample != 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1773, ASSERT_TYPE_ASSERT, "(m_pAudioReaderOutputWFX->wBitsPerSample == 32)", (const char *)&queryFormat, "m_pAudioReaderOutputWFX->wBitsPerSample == 32") )
          __debugbreak();
        if ( (unsigned __int16)(this->m_pAudioReaderOutputWFX->nChannels - 1) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1774, ASSERT_TYPE_ASSERT, "(m_pAudioReaderOutputWFX->nChannels == 1 || m_pAudioReaderOutputWFX->nChannels == 2)", (const char *)&queryFormat, "m_pAudioReaderOutputWFX->nChannels == 1 || m_pAudioReaderOutputWFX->nChannels == 2") )
          __debugbreak();
        v15 = this->m_pAudioReaderOutputWFX;
        nSamplesPerSec = (float)v15->nSamplesPerSec;
        v17 = nSamplesPerSec * 0.000020833333;
        v18 = (int)((unsigned int)Size / (v15->nChannels * (v15->wBitsPerSample >> 3)));
        v19 = (float)((unsigned int)Size / (v15->nChannels * (v15->wBitsPerSample >> 3)));
        v20 = (float)(v19 / v17) + 0.5;
        v21 = (int)v20;
        v60 = (int)v20;
        v22 = AlignUp<int>((int)v20, 4ui64);
        audioWriteFrame = this->m_audioData.audioWriteFrame;
        v24 = audioWriteFrame;
        bufferSize = this->m_audioData.decodedAudioData[audioWriteFrame].bufferSize;
        v26 = 4 * this->m_pAudioReaderOutputWFX->nChannels * v22;
        if ( v26 > bufferSize )
        {
          buffer = this->m_audioData.decodedAudioData[audioWriteFrame].buffer;
          if ( buffer )
            Online_VideoStreaming::FreeInternally(this, buffer, MAT_Audio);
          this->m_audioData.decodedAudioData[v24].buffer = (float *)Online_VideoStreaming::AllocateInternally(this, v26, 0x10ui64, MAT_Audio);
          bufferSize = v26;
          this->m_audioData.decodedAudioData[v24].bufferSize = v26;
        }
        v28 = this->m_pAudioReaderOutputWFX;
        v29 = v28->nChannels;
        if ( v28->nSamplesPerSec == 48000 )
        {
          if ( v29 == 1 )
          {
            v30 = Size;
            if ( (unsigned int)Size > 0x7FFFFFFF )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned long>(unsigned long)", "signed", (int)Size, "unsigned", (unsigned int)Size) )
                __debugbreak();
              bufferSize = this->m_audioData.decodedAudioData[v24].bufferSize;
            }
            if ( v30 > bufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1798, ASSERT_TYPE_ASSERT, "(truncate_cast<int>( dwBufferLen ) <= currentFrame->bufferSize)", (const char *)&queryFormat, "truncate_cast<int>( dwBufferLen ) <= currentFrame->bufferSize") )
              __debugbreak();
            memcpy_0(this->m_audioData.decodedAudioData[v24].buffer, Src, (unsigned int)Size);
          }
          else
          {
            v31 = (float *)Src;
            v32 = AlignUp<int>(v21, 4ui64);
            v33 = 0;
            v34 = this->m_audioData.decodedAudioData[v24].buffer;
            v35 = 0i64;
            v56 = v18;
            v36 = &v34[v32];
            if ( v18 >= 4 )
            {
              v37 = 6;
              v54 = 4i64 - (_QWORD)v36;
              v38 = v36 + 2;
              v39 = v31 + 3;
              v40 = ((unsigned __int64)(v18 - 4) >> 2) + 1;
              v55 = 4 * v40;
              do
              {
                v41 = 2 * v33;
                v42 = (__int64)v38 - 8 - (_QWORD)v36;
                v33 += 4;
                v38 += 4;
                v39 += 8;
                *(float *)((char *)this->m_audioData.decodedAudioData[v24].buffer + v42) = v31[v41];
                *(v38 - 6) = *(v39 - 10);
                v43 = v37;
                *(float *)((char *)this->m_audioData.decodedAudioData[v24].buffer + v42 + 4) = v31[v37 - 4];
                *(v38 - 5) = *(v39 - 8);
                v44 = v37;
                v37 += 8;
                *(float *)((char *)v38 + (char *)this->m_audioData.decodedAudioData[v24].buffer - (char *)v36 - 16) = v31[v44 - 2];
                *(v38 - 4) = *(v39 - 6);
                *(float *)((char *)this->m_audioData.decodedAudioData[v24].buffer + 4i64 - (_QWORD)v36 + (unsigned __int64)v38 - 16) = v31[v43];
                *(v38 - 3) = *(v39 - 4);
                --v40;
              }
              while ( v40 );
              v35 = v55;
              p_frameCount = &this->m_audioData.frameCount;
              v18 = v56;
              v21 = v60;
            }
            if ( v35 < v18 )
            {
              v45 = (__int64)&v31[2 * v35 + 1];
              do
              {
                v46 = 2 * v33++;
                v45 += 8i64;
                this->m_audioData.decodedAudioData[v24].buffer[v35] = v31[v46];
                v36[v35++] = *(float *)(v45 - 8);
              }
              while ( v35 < v18 );
            }
            v5 = v59;
          }
        }
        else if ( v29 == 1 )
        {
          Resampler_Resample_DrainSrc(&state, v17, (const float *)Src, v18, this->m_audioData.decodedAudioData[v24].buffer, (int)v20);
        }
        else
        {
          v47 = AlignUp<int>(v21, 4ui64);
          Resampler_Resample_DrainSrc_Stereo(&state, v17, (const float *)Src, v18, this->m_audioData.decodedAudioData[v24].buffer, &this->m_audioData.decodedAudioData[v24].buffer[v47], (int)v20);
        }
        this->m_audioData.decodedAudioData[v24].sampleCount = v21;
        this->m_audioData.decodedAudioData[v24].numChannels = this->m_pAudioReaderOutputWFX->nChannels;
        this->m_audioData.decodedAudioData[v24].consumed = 0;
        this->m_audioData.audioWriteFrame = (this->m_audioData.audioWriteFrame + 1) % 6;
        _InterlockedOr(v48, 0);
        Sys_InterlockedIncrement(p_frameCount);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 32i64))(v49);
        if ( v49 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16i64))(v49);
          v49 = 0i64;
        }
        v5->Release(v5);
        return 1i64;
      }
      else
      {
        Com_PrintError(25, "[OnlineVidStreaming] RenderAudioFrame: Lock failed with HRESULT %x.\n", (unsigned int)v13);
        return 0i64;
      }
    }
    else
    {
      Com_PrintError(25, "[OnlineVidStreaming] RenderAudioFrame: ConvertToContiguousBuffer failed with HRESULT %x.\n", (unsigned int)v12);
      return 0i64;
    }
  }
  else
  {
    Com_PrintError(25, "[OnlineVidStreaming] RenderAudioFrame: Invalid audio channel count %d.\n", nChannels);
    return 0i64;
  }
}

/*
==============
Online_VideoStreaming::ResetSpecific
==============
*/
void Online_VideoStreaming::ResetSpecific(Online_VideoStreaming *this)
{
  this->m_llCorrelatedStartTime = -1i64;
  this->m_videoDone = 0;
  this->m_audioDone = 0;
  this->m_numberOfFramesDecoded = 0;
  *(_QWORD *)&this->m_videoHeight = 0i64;
  this->m_llStartTimeStamp = 0i64;
  this->m_qwAudioFrameRendered = 0i64;
  this->m_pOutputAudioSample = NULL;
  this->m_pReader = NULL;
  this->m_MFStarted = 0;
  this->m_llTimeVideo = 0i64;
  this->m_llTimeAudio = 0i64;
  memset_0(&this->m_audioData, 0, sizeof(this->m_audioData));
  this->m_pAudioReaderOutputWFX = NULL;
  this->m_pAudioMediaType = NULL;
  this->m_videoDisplayState = 1;
  this->m_audioMuteState = 0;
  this->m_pausePlayer = 0;
  this->m_requestStopSeq = VS_STOP_NONE;
  this->m_callback = NULL;
  memset_0(this->m_frameBuffers, 0, sizeof(this->m_frameBuffers));
  this->m_resourcesAllocated = 0;
  this->m_renderFrameIndex = 0;
  this->m_allocatorReady = 0;
}

/*
==============
Online_VideoStreaming::SetDisplayStatus
==============
*/
bool Online_VideoStreaming::SetDisplayStatus(Online_VideoStreaming *this, bool showVideo)
{
  const dvar_t *m_vidStreamLogEnabled; 
  bool result; 

  m_vidStreamLogEnabled = this->m_vidStreamLogEnabled;
  if ( m_vidStreamLogEnabled && m_vidStreamLogEnabled->current.integer > 1 )
  {
    Com_Printf(25, "[OnlineVidStreaming] SetDisplayStatus: %u \n", showVideo);
    result = 1;
    this->m_videoDisplayState = showVideo;
  }
  else
  {
    this->m_videoDisplayState = showVideo;
    return 1;
  }
  return result;
}

/*
==============
Online_VideoStreaming::SetMuteStatus
==============
*/
bool Online_VideoStreaming::SetMuteStatus(Online_VideoStreaming *this, bool soundMute)
{
  const dvar_t *m_vidStreamLogEnabled; 
  bool result; 

  m_vidStreamLogEnabled = this->m_vidStreamLogEnabled;
  if ( m_vidStreamLogEnabled && m_vidStreamLogEnabled->current.integer > 1 )
  {
    Com_Printf(25, "[OnlineVidStreaming] SetMuteStatus: %u \n", soundMute);
    result = 1;
    this->m_audioMuteState = soundMute;
  }
  else
  {
    this->m_audioMuteState = soundMute;
    return 1;
  }
  return result;
}

/*
==============
Online_VideoStreaming::SetPauseStatus
==============
*/
bool Online_VideoStreaming::SetPauseStatus(Online_VideoStreaming *this, bool pauseAll)
{
  const dvar_t *m_vidStreamLogEnabled; 
  bool result; 

  m_vidStreamLogEnabled = this->m_vidStreamLogEnabled;
  if ( m_vidStreamLogEnabled && m_vidStreamLogEnabled->current.integer > 1 )
  {
    Com_Printf(25, "[OnlineVidStreaming] SetPauseStatus: %u \n", pauseAll);
    result = 1;
    this->m_pausePlayer = pauseAll;
  }
  else
  {
    this->m_pausePlayer = pauseAll;
    return 1;
  }
  return result;
}

/*
==============
Online_VideoStreaming::SetupVideoTexture
==============
*/
void Online_VideoStreaming::SetupVideoTexture(Online_VideoStreaming *this, GfxImage *image, void **imageTextureData, GfxPixelFormat format, unsigned int width, unsigned int height, unsigned int *rawMediaSize, unsigned int *out_pitch, const char *name)
{
  unsigned __int64 SizeBytes; 
  Online_VideoStreaming *v15; 
  void *v16; 
  const dvar_t *m_vidStreamLogEnabled; 
  float v18; 
  float v19; 
  char *fmt; 
  __int64 v21; 
  __m256i v23; 
  __m256i v24; 
  Image_SetupParams params; 
  XG_RESOURCE_LAYOUT layout; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1681, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( !imageTextureData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1682, ASSERT_TYPE_ASSERT, "(imageTextureData)", (const char *)&queryFormat, "imageTextureData") )
    __debugbreak();
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v24.m256i_u64[1] = _XMM0;
  v23.m256i_i32[2] = 1;
  v24.m256i_i64[0] = 0i64;
  *(__int64 *)((char *)&v23.m256i_i64[1] + 4) = 1i64;
  v24.m256i_i32[6] = -1;
  v23.m256i_i64[0] = __PAIR64__(height, width);
  v23.m256i_i32[5] = 1027;
  v23.m256i_i32[6] = format;
  *(__m256i *)&params.width = v23;
  *(__m256i *)&params.customAllocFunc = v24;
  Image_GetTextureLayout_XB3(&params, &layout);
  SizeBytes = layout.SizeBytes;
  if ( layout.BaseAlignmentBytes != 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1691, ASSERT_TYPE_ASSERT, "( layout.BaseAlignmentBytes ) == ( R_IMAGE_ALIGNMENT )", "%s == %s\n\t%llu, %llu", "layout.BaseAlignmentBytes", "R_IMAGE_ALIGNMENT", layout.BaseAlignmentBytes, 256i64) )
    __debugbreak();
  *out_pitch = layout.Plane[0].MipLayout[0].PitchBytes;
  if ( *imageTextureData )
  {
    v15 = this;
  }
  else
  {
    if ( SizeBytes < *rawMediaSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1696, ASSERT_TYPE_ASSERT, "(size >= rawMediaSize)", (const char *)&queryFormat, "size >= rawMediaSize") )
      __debugbreak();
    if ( SizeBytes < height * *out_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1697, ASSERT_TYPE_ASSERT, "(size >= out_pitch * height)", (const char *)&queryFormat, "size >= out_pitch * height") )
      __debugbreak();
    v15 = this;
    *rawMediaSize = truncate_cast<unsigned int,unsigned __int64>(SizeBytes);
    v16 = Mem_HunkUser_AllocInternal(this->m_textureDataHunk, SizeBytes, 0x100ui64, "Online_VideoStreaming::SetupVideoTexture");
    *imageTextureData = v16;
    memset_0(v16, 0, SizeBytes);
  }
  Image_AllocInPlace(image, "$online_video_texture", IMG_CATEGORY_TEMP, TS_COLOR_MAP);
  params.customAllocFunc = lambda_bd9a318162064e89d47e8e5af4f673f1_::_lambda_invoker_cdecl_;
  params.customAllocUserData = *imageTextureData;
  params.customLayout = &layout;
  Image_Setup(image, &params);
  m_vidStreamLogEnabled = v15->m_vidStreamLogEnabled;
  if ( m_vidStreamLogEnabled )
  {
    if ( m_vidStreamLogEnabled->current.integer > 1 )
    {
      v18 = (float)*rawMediaSize;
      v19 = (float)(width * height);
      LODWORD(v21) = *rawMediaSize;
      LODWORD(fmt) = height;
      Com_Printf(25, "[OnlineVidStreaming] SetupVideoTexture %s {%u x %u} - %u bytes {bpp = %f}\n", name, width, fmt, v21, (float)(v18 / v19));
    }
  }
}

/*
==============
Online_VideoStreaming::UpdateVideoStreamingTexture_GPU
==============
*/
Online_VideoStreaming::RenderFrameData *Online_VideoStreaming::UpdateVideoStreamingTexture_GPU(Online_VideoStreaming *this, GfxCmdBufState *cmdBufState)
{
  int v2; 
  Online_VideoStreaming_vtbl **v5; 
  Online_VideoStreaming_vtbl *v6; 
  Online_VideoStreaming_vtbl *v7; 
  Online_VideoStreaming_vtbl *v8; 
  Online_VideoStreaming_vtbl *v9; 
  IMFSample *v10; 
  IMFSample *v11; 
  int v12; 
  Online_VideoStreaming::RenderFrameData *result; 
  int v14; 
  int v15; 
  int v16; 
  __int64 m_renderFrameIndex; 
  char *v18; 
  unsigned int m_videoWidth; 
  unsigned int m_videoDataHeight; 
  unsigned int v21; 
  unsigned int v22; 
  int v23; 
  const dvar_t *m_vidStreamLogEnabled; 
  const dvar_t *v25; 
  unsigned __int16 v26; 
  ID3D12Resource *v27; 
  HRESULT v28; 
  const char *v29; 
  GfxTextureId v30; 
  const GfxTexture *Resident; 
  const GfxTexture *v32; 
  GfxDevice *device; 
  ID3D12Resource *v34; 
  unsigned int v35; 
  GfxDevice *v36; 
  const GfxTexture *v37; 
  const GfxTexture *v38; 
  __int64 v39; 
  unsigned int v40; 
  __int64 v41; 
  ID3D11Resource *v42; 
  int v43; 
  ID3D12DeviceChild *resource; 
  unsigned int rawMediaSize; 
  __m256i v46; 
  char v47[24]; 
  __int64 v48; 
  __int64 v49; 
  int v50; 
  unsigned int v51; 
  ID3D12Resource *basemap; 
  int v53; 
  int v54; 
  int v55[2]; 
  unsigned int val; 
  unsigned int v57; 
  __int64 v58; 
  int v59; 
  __int64 v60; 
  int v61; 
  unsigned int v62; 
  unsigned int m_videoHeight; 
  int v64; 
  __m256i v65; 
  __int128 v66; 
  __int64 v67; 

  v2 = this->m_renderFrameIndex + 1;
  v43 = 0;
  v5 = (Online_VideoStreaming_vtbl **)((char *)this + 536 * (v2 % 2));
  v6 = v5[336];
  if ( v6 )
  {
    (*((void (__fastcall **)(Online_VideoStreaming_vtbl *))v6->OnRegistered + 2))(v6);
    v5[336] = NULL;
  }
  v7 = v5[335];
  if ( v7 )
  {
    (*((void (__fastcall **)(Online_VideoStreaming_vtbl *))v7->OnRegistered + 2))(v7);
    v5[335] = NULL;
  }
  v8 = v5[333];
  if ( v8 )
  {
    (*((void (__fastcall **)(Online_VideoStreaming_vtbl *))v8->OnRegistered + 2))(v8);
    v5[333] = NULL;
  }
  v9 = v5[334];
  if ( v9 )
  {
    (*((void (__fastcall **)(Online_VideoStreaming_vtbl *))v9->OnRegistered + 2))(v9);
    v5[334] = NULL;
  }
  v10 = Online_VideoStreaming::PopFrameSample(this);
  v11 = v10;
  if ( !v10 )
    return 0i64;
  v10->GetBufferCount(v10, (unsigned int *)&v43);
  if ( v43 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1380, ASSERT_TYPE_ASSERT, "(bufferCount == 1)", (const char *)&queryFormat, "bufferCount == 1") )
    __debugbreak();
  v12 = v11->GetBufferByIndex(v11, 0, (IMFMediaBuffer **)&v39);
  if ( v12 < 0 )
  {
    Com_PrintError(8, "[OnlineVidStreaming] UpdateVideoStreamingTexture_Copy_GPU: GetBufferByIndex failed with HRESULT %x.\n", (unsigned int)v12);
    v11->Release(v11);
    return 0i64;
  }
  v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v39)(v39, &GUID_e7174cfa_1c9e_48b1_8866_626226bfc258, &v41);
  if ( v14 < 0 )
  {
    Com_PrintError(8, "[OnlineVidStreaming] UpdateVideoStreamingTexture_Copy_GPU: QueryInterface failed with HRESULT %x.\n", (unsigned int)v14);
LABEL_18:
    if ( v39 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16i64))(v39);
      v39 = 0i64;
    }
    v11->Release(v11);
    return 0i64;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, GUID *, ID3D11Resource **))(*(_QWORD *)v41 + 24i64))(v41, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v42);
  if ( v15 < 0 )
  {
    Com_PrintError(8, "[OnlineVidStreaming] UpdateVideoStreamingTexture_Copy_GPU: GetResource failed with HRESULT %x.\n", (unsigned int)v15);
    if ( v41 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16i64))(v41);
      v41 = 0i64;
    }
    goto LABEL_18;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v41 + 32i64))(v41, &v40);
  if ( v16 < 0 )
  {
    Com_PrintError(8, "[OnlineVidStreaming] UpdateVideoStreamingTexture_Copy_GPU: GetSubresourceIndex failed with HRESULT %x.\n", (unsigned int)v16);
    if ( v41 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16i64))(v41);
      v41 = 0i64;
    }
    if ( v42 )
    {
      v42->m_pFunction->Release(v42);
      v42 = NULL;
    }
    goto LABEL_18;
  }
  ((void (__fastcall *)(ID3D11Resource *, int *))v42->m_pFunction[4].AddRef)(v42, v55);
  if ( (_DWORD)v58 != 103 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1421, ASSERT_TYPE_ASSERT, "(textureDesc.Format == DXGI_FORMAT_NV12)", (const char *)&queryFormat, "textureDesc.Format == DXGI_FORMAT_NV12") )
    __debugbreak();
  g_dx.d3d11LimitedDeviceContext->m_Function.Map(g_dx.d3d11LimitedDeviceContext, v42, 0, D3D11_MAP_READ, 0x200000u, (D3D11_MAPPED_SUBRESOURCE *)&v48);
  m_renderFrameIndex = this->m_renderFrameIndex;
  this->m_videoStarted = 1;
  v18 = (char *)this + 536 * m_renderFrameIndex;
  m_videoWidth = this->m_videoWidth;
  m_videoDataHeight = this->m_videoDataHeight;
  v21 = m_videoDataHeight * m_videoWidth;
  v22 = (m_videoDataHeight >> 1) * (m_videoWidth >> 1);
  this->m_renderFrameIndex = ((int)m_renderFrameIndex + 1) % 2;
  v23 = *((unsigned __int16 *)v18 + 1118);
  rawMediaSize = v21;
  LODWORD(resource) = v22;
  if ( v23 != m_videoWidth || *((unsigned __int16 *)v18 + 1119) != this->m_videoHeight )
  {
    m_vidStreamLogEnabled = this->m_vidStreamLogEnabled;
    if ( m_vidStreamLogEnabled && m_vidStreamLogEnabled->current.integer > 1 )
      Com_Printf(25, "[OnlineVidStreaming] Image resize detected!\n");
    Image_Release((GfxImage *)(v18 + 2200));
    if ( *((_DWORD *)v18 + 682) < v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1437, ASSERT_TYPE_ASSERT, "(static_cast< UINT32 >( dstFrame->lumaDataSize ) >= lumaSize)", (const char *)&queryFormat, "static_cast< UINT32 >( dstFrame->lumaDataSize ) >= lumaSize") )
      __debugbreak();
    Online_VideoStreaming::SetupVideoTexture(this, (GfxImage *)(v18 + 2200), (void **)v18 + 338, GFX_PF_R8, this->m_videoWidth, this->m_videoHeight, &rawMediaSize, (unsigned int *)v18 + 680, "LUMA1");
  }
  if ( *((unsigned __int16 *)v18 + 1234) != this->m_videoWidth >> 1 || *((unsigned __int16 *)v18 + 1235) != this->m_videoHeight >> 1 )
  {
    v25 = this->m_vidStreamLogEnabled;
    if ( v25 && v25->current.integer > 1 )
      Com_Printf(25, "[OnlineVidStreaming] Image resize detected!\n");
    Image_Release((GfxImage *)(v18 + 2432));
    if ( *((_DWORD *)v18 + 683) < v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1445, ASSERT_TYPE_ASSERT, "(static_cast< UINT32 >( dstFrame->chromaDataSize ) >= chromaSize)", (const char *)&queryFormat, "static_cast< UINT32 >( dstFrame->chromaDataSize ) >= chromaSize") )
      __debugbreak();
    Online_VideoStreaming::SetupVideoTexture(this, (GfxImage *)(v18 + 2432), (void **)v18 + 339, GFX_PF_R8G8, this->m_videoWidth >> 1, this->m_videoHeight >> 1, (unsigned int *)&resource, (unsigned int *)v18 + 681, "CHROMA");
  }
  v26 = truncate_cast<unsigned short,unsigned int>(val);
  v46.m256i_i16[14] = truncate_cast<unsigned short,unsigned int>(v57);
  v46.m256i_i64[2] = (unsigned int)v55[0];
  *(_QWORD *)v47 = v58;
  v46.m256i_i32[6] = v55[1];
  *(_QWORD *)&v47[12] = 0i64;
  v46.m256i_i32[0] = 3;
  v46.m256i_i64[1] = 0i64;
  v46.m256i_i16[15] = v26;
  v65 = v46;
  *(_DWORD *)&v47[8] = v59;
  v67 = *(__int64 *)&v47[16];
  v66 = *(_OWORD *)v47;
  v27 = (ID3D12Resource *)*((_QWORD *)v18 + 337);
  if ( v27 )
  {
    *((_QWORD *)v18 + 337) = 0i64;
    R_ReleaseAndSetNULL<ID3D12Resource>(v27, "dstFrame->sampleNV12Image", "c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1459);
  }
  v28 = ((__int64 (__fastcall *)(ID3D12Device *, __int64, __m256i *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, v48, &v65, 2048i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
  if ( v28 < 0 )
  {
    v29 = R_ErrorDescription(v28);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v29);
  }
  PIXSetDebugName(resource, "MF_NV12_Sample");
  v30 = *((_DWORD *)v18 + 554);
  *((_QWORD *)v18 + 337) = resource;
  Resident = R_Texture_GetResident(v30);
  R_HW_AddResourceTransition(cmdBufState, Resident, 0, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v32 = R_Texture_GetResident((GfxTextureId)*((_DWORD *)v18 + 612));
  R_HW_AddResourceTransition(cmdBufState, v32, 0, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(cmdBufState);
  basemap = R_Texture_GetResident((GfxTextureId)*((_DWORD *)v18 + 554))->basemap;
  device = cmdBufState->device;
  v53 = 0;
  v54 = 0;
  v49 = *((_QWORD *)v18 + 337);
  v50 = 0;
  v60 = 0i64;
  v61 = 0;
  v51 = v40 * val;
  m_videoHeight = this->m_videoHeight;
  v62 = this->m_videoWidth;
  v64 = 1;
  ((void (__fastcall *)(GfxDevice *, ID3D12Resource **, _QWORD, _QWORD, _DWORD, __int64 *, __int64 *, _DWORD))device->m_pFunction[27].Release)(device, &basemap, 0i64, 0i64, 0, &v49, &v60, 0);
  v51 = val * (v40 + v57);
  v34 = R_Texture_GetResident((GfxTextureId)*((_DWORD *)v18 + 612))->basemap;
  m_videoHeight = this->m_videoHeight >> 1;
  v35 = this->m_videoWidth >> 1;
  basemap = v34;
  v36 = cmdBufState->device;
  v62 = v35;
  ((void (__fastcall *)(GfxDevice *, ID3D12Resource **, _QWORD, _QWORD, _DWORD, __int64 *, __int64 *, _DWORD))v36->m_pFunction[27].Release)(v36, &basemap, 0i64, 0i64, 0, &v49, &v60, 0);
  v37 = R_Texture_GetResident((GfxTextureId)*((_DWORD *)v18 + 554));
  R_HW_AddResourceTransition(cmdBufState, v37, 0, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v38 = R_Texture_GetResident((GfxTextureId)*((_DWORD *)v18 + 612));
  R_HW_AddResourceTransition(cmdBufState, v38, 0, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(cmdBufState);
  g_dx.d3d11LimitedDeviceContext->m_Function.Unmap(g_dx.d3d11LimitedDeviceContext, v42, v40);
  result = (Online_VideoStreaming::RenderFrameData *)(v18 + 2200);
  *((_QWORD *)v18 + 336) = v41;
  *((_QWORD *)v18 + 333) = v39;
  *((_QWORD *)v18 + 334) = v11;
  *((_QWORD *)v18 + 335) = v42;
  return result;
}

/*
==============
Online_VideoStreaming::UpdateVideoStreamingTextures
==============
*/
void Online_VideoStreaming::UpdateVideoStreamingTextures(Online_VideoStreaming *this, GfxCmdBufState *cmdBufState)
{
  Online_VideoStreaming::RenderTextures *p_m_curVideoframe; 
  ntl::internal::list_node_base *mp_next; 
  GfxImage *whiteImage; 
  Online_VideoStreaming::RenderFrameData *updated; 

  p_m_curVideoframe = &this->m_curVideoframe;
  Sys_ProfBeginNamedEvent(0xFFBA55D3, "UpdateVideoStreamingTexture");
  if ( !p_m_curVideoframe && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1620, ASSERT_TYPE_ASSERT, "(frameTextures)", (const char *)&queryFormat, "frameTextures") )
    __debugbreak();
  if ( this->m_requestStopSeq == VS_STOP_NONE )
  {
    if ( (this->m_pReader || Sys_ThreadExists(THREAD_CONTEXT_TRACE_COUNT)) && this->m_resourcesAllocated )
    {
      mp_next = this->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
      if ( mp_next != (ntl::internal::list_node_base *)&this->m_decodedBuffers.m_listHead )
      {
        updated = Online_VideoStreaming::UpdateVideoStreamingTexture_GPU(this, cmdBufState);
        if ( !updated )
          goto LABEL_16;
        if ( this->m_videoDisplayState )
        {
          p_m_curVideoframe->lumaImage = &updated->imageluma;
          p_m_curVideoframe->chromaImage = &updated->imagechroma;
          whiteImage = rgp.whiteImage;
        }
        else
        {
          p_m_curVideoframe->lumaImage = NULL;
          p_m_curVideoframe->chromaImage = NULL;
          whiteImage = rgp.blackImage;
        }
        goto LABEL_15;
      }
      if ( mp_next != this->m_decodedBuffers.m_listHead.m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
        __debugbreak();
    }
    whiteImage = NULL;
    p_m_curVideoframe->lumaImage = NULL;
    p_m_curVideoframe->chromaImage = NULL;
    p_m_curVideoframe->alphaImage = NULL;
    if ( this->m_clearCinematicTarget )
      whiteImage = rgp.blackImage;
LABEL_15:
    p_m_curVideoframe->alphaImage = whiteImage;
    goto LABEL_16;
  }
  p_m_curVideoframe->lumaImage = rgp.blackImage;
  p_m_curVideoframe->chromaImage = rgp.blackImage;
  p_m_curVideoframe->alphaImage = rgp.blackImage;
  this->m_requestStopSeq = VS_STOP_READY;
LABEL_16:
  Sys_ProfEndNamedEvent();
}

/*
==============
Online_VideoStreaming::XB3XMemAlloc_TryMFTVideoAlloc
==============
*/
void *Online_VideoStreaming::XB3XMemAlloc_TryMFTVideoAlloc(Online_VideoStreaming *this, unsigned __int64 size, unsigned __int64 allocAttributes)
{
  unsigned __int64 v3; 

  if ( this->m_allocatorReady && (allocAttributes & 0x1E0000000i64) == 0 && (allocAttributes & 0xFF0000) == 8519680 && size >= 0x1000 && (v3 = (allocAttributes >> 24) & 0x1F, ((v3 - 1) & v3) == 0) && v3 )
    return Online_VideoStreaming::AllocateInternally(this, size, v3, MAT_Video);
  else
    return 0i64;
}

/*
==============
Online_VideoStreaming::XB3XMemAlloc_TryMFTVideoFree
==============
*/
bool Online_VideoStreaming::XB3XMemAlloc_TryMFTVideoFree(Online_VideoStreaming *this, void *ptr, unsigned __int64 attributes)
{
  return this->m_allocatorReady && Online_VideoStreaming::FreeInternally(this, ptr, MAT_Video);
}

/*
==============
audioAuxCallback
==============
*/
__int64 audioAuxCallback(SD_DSP::SequentialBufferRefType<SD_DSP::AtmosFrame,256> *dest)
{
  __m256i v1; 
  __m256i v2; 
  __m256i v3; 
  void **v4; 
  unsigned __int8 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned int v9; 
  Online_VideoStreaming *Instance; 
  volatile int *p_frameCount; 
  __int64 v12; 
  __int64 audioReadFrame; 
  __int64 v14; 
  int numChannels; 
  float v16; 
  unsigned int v17; 
  _BYTE v19[128]; 

  v1 = *(__m256i *)&dest->data._Elems[4];
  *(__m256i *)v19 = *(__m256i *)dest->data._Elems;
  v2 = *(__m256i *)&dest->data._Elems[8];
  *(__m256i *)&v19[32] = v1;
  v3 = *(__m256i *)&dest->data._Elems[12];
  *(__m256i *)&v19[64] = v2;
  *(__m256i *)&v19[96] = v3;
  v4 = (void **)v19;
  v5 = 0;
  v6 = 16i64;
  do
  {
    memset_0(*v4++, 0, 0x400ui64);
    --v6;
  }
  while ( v6 );
  v7 = *(_QWORD *)v19;
  v8 = *(_QWORD *)&v19[8];
  v9 = 0;
  Instance = Online_VideoStreaming::GetInstance();
  p_frameCount = &Instance->m_audioData.frameCount;
  v12 = 0i64;
  do
  {
    if ( !*p_frameCount )
      break;
    audioReadFrame = Instance->m_audioData.audioReadFrame;
    v14 = audioReadFrame;
    numChannels = Instance->m_audioData.decodedAudioData[audioReadFrame].numChannels;
    if ( numChannels == 1 )
    {
      v16 = Instance->m_audioData.decodedAudioData[audioReadFrame].buffer[Instance->m_audioData.decodedAudioData[audioReadFrame].consumed] * 0.50118721;
      *(float *)(v12 + v7) = v16;
    }
    else
    {
      v17 = (Instance->m_audioData.decodedAudioData[audioReadFrame].sampleCount + 3) & 0xFFFFFFFC;
      if ( 4i64 * (int)(v17 * numChannels) > (unsigned __int64)Instance->m_audioData.decodedAudioData[audioReadFrame].bufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 427, ASSERT_TYPE_ASSERT, "(rightOffset * currentDecodeFrame->numChannels * sizeof( float ) <= currentDecodeFrame->bufferSize)", (const char *)&queryFormat, "rightOffset * currentDecodeFrame->numChannels * sizeof( float ) <= currentDecodeFrame->bufferSize") )
        __debugbreak();
      *(float *)(v12 + v7) = Instance->m_audioData.decodedAudioData[v14].buffer[Instance->m_audioData.decodedAudioData[v14].consumed];
      v16 = Instance->m_audioData.decodedAudioData[v14].buffer[v17 + Instance->m_audioData.decodedAudioData[v14].consumed];
    }
    *(float *)(v12 + v8) = v16;
    if ( ++Instance->m_audioData.decodedAudioData[v14].consumed >= Instance->m_audioData.decodedAudioData[v14].sampleCount )
    {
      Instance->m_audioData.audioReadFrame = (Instance->m_audioData.audioReadFrame + 1) % 6;
      if ( ((unsigned __int8)p_frameCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_frameCount) )
        __debugbreak();
      _InterlockedDecrement(p_frameCount);
    }
    ++v9;
    v12 += 4i64;
    v5 = 1;
  }
  while ( v9 < 0x100 );
  return v5;
}

