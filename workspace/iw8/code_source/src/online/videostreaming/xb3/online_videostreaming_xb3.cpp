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
  __int64 v5; 
  void *v9; 
  MftAllocationInfo *v10; 
  unsigned __int64 count; 
  __int64 v12; 
  __int64 allocated; 
  const dvar_t *m_vidStreamLogEnabled; 
  const char *v18; 
  __int64 v19; 
  const dvar_t *v20; 
  char *fmt; 
  ScopedCriticalSection v28; 

  v5 = type;
  ScopedCriticalSection::ScopedCriticalSection(&v28, CRITSECT_ONLINE_STREAMING_ALLOCATOR, SCOPED_CRITSECT_NORMAL);
  if ( this->m_allocatorReady )
  {
    v9 = ntl::nxheap::allocate(&this->s_decodeAllocator.m_heap, size, alignment, 1);
    if ( v9 )
    {
      v10 = &sMftAlloc.typeAllocs[v5];
      count = v10->count;
      if ( count >= 0x400 )
      {
        ++v10->untrackedCount;
      }
      else
      {
        v12 = count;
        v10->count = count + 1;
        v10->allocs[v12].ptr = v9;
        v10->allocs[v12].size = size;
      }
      v10->allocated += size;
      allocated = (unsigned int)v10->allocated;
      if ( (int)allocated > v10->peakAllocated )
      {
        v10->peakAllocated = allocated;
        m_vidStreamLogEnabled = this->m_vidStreamLogEnabled;
        if ( m_vidStreamLogEnabled )
        {
          if ( m_vidStreamLogEnabled->current.integer > 1 )
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, r9d
              vmulss  xmm1, xmm0, cs:__real@35800000
              vcvtss2sd xmm2, xmm1, xmm1
            }
            if ( (_DWORD)v5 )
            {
              if ( (_DWORD)v5 == 1 )
                v18 = "AUDIO";
              else
                v18 = "N/A";
            }
            else
            {
              v18 = "VIDEO";
            }
            __asm { vmovsd  [rsp+68h+fmt], xmm2 }
            Com_Printf(25, "[OnlineVidStreaming] New {%s} mspace peak {%llu - %f MB}\n", v18, allocated, *(double *)&fmt);
          }
        }
      }
      v19 = (unsigned int)(size + sMftAlloc.totalAllocated);
      sMftAlloc.totalAllocated = v19;
      ++sMftAlloc.totalCount;
      if ( (int)v19 > sMftAlloc.totalPeakAllocated )
      {
        sMftAlloc.totalPeakAllocated = v19;
        v20 = this->m_vidStreamLogEnabled;
        if ( v20 )
        {
          if ( v20->current.integer > 1 )
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, r8d
              vmulss  xmm1, xmm0, cs:__real@35800000
              vcvtss2sd xmm3, xmm1, xmm1
              vmovq   r9, xmm3
            }
            Com_Printf(25, "[OnlineVidStreaming] New mspace peak {%llu - %f MB}\n", v19, *(double *)&_XMM3);
          }
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
    v9 = NULL;
  }
  ScopedCriticalSection::~ScopedCriticalSection(&v28);
  return v9;
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
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  Online_VideoStreaming *v14; 
  void **v15; 
  __int64 v16; 
  ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> > *p_m_listHead; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_node_base *v19; 
  ntl::internal::list_node_base *v20; 
  ntl::internal::list_node_base *v21; 
  ntl::internal::list_node_base *v22; 
  ntl::internal::list_node_base *v23; 
  ntl::internal::list_node_base *v24; 
  ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *v25; 
  tWAVEFORMATEX *m_pAudioReaderOutputWFX; 
  IMFSample *m_pOutputAudioSample; 
  IMFAudioMediaType *m_pAudioMediaType; 
  IMFSourceReader *m_pReader; 
  HRESULT v30; 
  int v31; 
  int *p_peakAllocated; 
  const char *v37; 
  Online_VideoStreaming::SourceReaderCallback *v43; 
  Online_VideoStreaming::SourceReaderCallback *v44; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v45; 
  ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> > *v46; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v47; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v48; 
  ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> > *v49; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v50; 
  char *m_buffer; 
  char *v52; 
  unsigned __int8 *m_workMemory; 
  __int64 v54; 
  char *fmt; 
  char *fmta; 
  double v59; 
  __int64 v60; 
  __int64 v61; 
  Mem_PageRange inoutPageRange; 
  __int64 v63; 
  ScopedCriticalSection v64; 
  StreamerMemLoan result; 
  char v66; 
  void *retaddr; 

  _RAX = &retaddr;
  v63 = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  inoutPageRange = (Mem_PageRange)this;
  ScopedCriticalSection::ScopedCriticalSection(&v64, CRITSECT_ONLINE_STREAMING_UPDATE, SCOPED_CRITSECT_NORMAL);
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
  v7 = 2i64;
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
    v8 = (__int64)*(p_lumaTextureData - 5);
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
      *(p_lumaTextureData - 5) = NULL;
    }
    v9 = (__int64)*(p_lumaTextureData - 4);
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
      *(p_lumaTextureData - 4) = NULL;
    }
    v10 = (__int64)*(p_lumaTextureData - 2);
    if ( v10 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
      *(p_lumaTextureData - 2) = NULL;
    }
    v11 = (__int64)*(p_lumaTextureData - 3);
    if ( v11 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
      *(p_lumaTextureData - 3) = NULL;
    }
    v12 = (__int64)*(p_lumaTextureData - 1);
    if ( v12 )
    {
      *(p_lumaTextureData - 1) = NULL;
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
      if ( !R_IsAnalysisToolPresent() && !R_IsIncompatibleOverlayPresent() )
      {
        if ( v13 )
        {
          LODWORD(v61) = v13;
          LODWORD(v60) = 812;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", "c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", v60, "frame->sampleNV12Image", v61) )
            __debugbreak();
        }
      }
    }
    p_lumaTextureData += 67;
    --v7;
  }
  while ( v7 );
  v14 = (Online_VideoStreaming *)inoutPageRange;
  v15 = (void **)(*(_QWORD *)&inoutPageRange + 3528i64);
  v16 = 6i64;
  do
  {
    if ( *(_DWORD *)v15 )
    {
      Online_VideoStreaming::FreeInternally(v14, *(v15 - 1), MAT_Audio);
      *(v15 - 1) = NULL;
      *(_DWORD *)v15 = 0;
    }
    v15 += 3;
    --v16;
  }
  while ( v16 );
  p_m_listHead = &v14->m_decodedBuffers.m_listHead;
  while ( 1 )
  {
    mp_next = v14->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
    if ( mp_next == (ntl::internal::list_node_base *)p_m_listHead )
      break;
    v19 = v14->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 356, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    if ( v19[1].mp_prev )
    {
      v20 = v14->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
      if ( v20 == (ntl::internal::list_node_base *)p_m_listHead )
      {
        if ( v20 != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
          __debugbreak();
      }
      v21 = v14->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 356, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
        __debugbreak();
      ((void (__fastcall *)(ntl::internal::list_node_base *))v21[1].mp_prev->mp_prev[1].mp_prev)(v21[1].mp_prev);
      v22 = v14->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
      if ( v22 == (ntl::internal::list_node_base *)p_m_listHead )
      {
        if ( v22 != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
          __debugbreak();
      }
      v23 = v14->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
      if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 356, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
        __debugbreak();
      v23[1].mp_prev = NULL;
    }
    v24 = v14->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
    if ( v24 == (ntl::internal::list_node_base *)&v14->m_decodedBuffers.m_listHead )
    {
      if ( v24 != v14->m_decodedBuffers.m_listHead.m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
    }
    v25 = (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)v14->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
    if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 319, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData>>::remove(&v14->m_decodedBuffers.m_listHead, v25);
    if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
      __debugbreak();
    v25->mp_prev = (ntl::internal::list_node_base *)v14->m_decodedBuffers.m_freelist.m_head.mp_next;
    v14->m_decodedBuffers.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v25;
  }
  if ( mp_next != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
    __debugbreak();
  m_pAudioReaderOutputWFX = v14->m_pAudioReaderOutputWFX;
  if ( m_pAudioReaderOutputWFX )
  {
    CoTaskMemFree(m_pAudioReaderOutputWFX);
    v14->m_pAudioReaderOutputWFX = NULL;
  }
  m_pOutputAudioSample = v14->m_pOutputAudioSample;
  if ( m_pOutputAudioSample )
  {
    m_pOutputAudioSample->Release(m_pOutputAudioSample);
    v14->m_pOutputAudioSample = NULL;
  }
  m_pAudioMediaType = v14->m_pAudioMediaType;
  if ( m_pAudioMediaType )
  {
    m_pAudioMediaType->Release(m_pAudioMediaType);
    v14->m_pAudioMediaType = NULL;
  }
  v14->m_pReader->Flush(v14->m_pReader, 4294967294u);
  m_pReader = v14->m_pReader;
  if ( m_pReader )
  {
    m_pReader->Release(m_pReader);
    v14->m_pReader = NULL;
  }
  if ( v14->m_MFStarted )
  {
    v30 = MFShutdown_0();
    if ( v30 < 0 )
      Com_PrintError(25, "[OnlineVidStreaming] Cleanup: MFShutdown failed with HRESULT %x.\n", (unsigned int)v30);
  }
  v14->m_MFStarted = 0;
  Sys_EnterCriticalSection(CRITSECT_ONLINE_STREAMING_ALLOCATOR);
  Com_Printf(25, " -- Peak allocations: -- \n");
  v31 = 0;
  p_peakAllocated = &sMftAlloc.typeAllocs[0].peakAllocated;
  __asm { vmovss  xmm6, cs:__real@35800000 }
  do
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r9d
      vmulss  xmm1, xmm0, xmm6
      vcvtss2sd xmm2, xmm1, xmm1
    }
    if ( v31 )
    {
      if ( v31 == 1 )
        v37 = "AUDIO";
      else
        v37 = "N/A";
    }
    else
    {
      v37 = "VIDEO";
    }
    __asm { vmovsd  [rsp+0C8h+fmt], xmm2 }
    Com_Printf(25, "\t%s: %u bytes {%.2fMB}\n", v37, (unsigned int)*p_peakAllocated, *(double *)&fmt);
    ++v31;
    p_peakAllocated += 4102;
  }
  while ( v31 < 2 );
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r8d
    vmulss  xmm1, xmm0, xmm6
    vcvtss2sd xmm3, xmm1, xmm1
    vmovsd  xmm2, cs:__real@4060000000000000
    vmovsd  [rsp+0C8h+var_A0], xmm2
    vmovsd  [rsp+0C8h+fmt], xmm3
  }
  Com_Printf(25, "Total peak %u / %u {%.2f MB / %.2f MB } \n", (unsigned int)sMftAlloc.totalPeakAllocated, 0x8000000i64, *(double *)&fmta, v59);
  Com_Printf(25, " -- END -- \n");
  v43 = v14->m_callback;
  if ( !v43->m_eventHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\online_videostreaming.h", 443, ASSERT_TYPE_ASSERT, "(m_eventHandle)", (const char *)&queryFormat, "m_eventHandle") )
    __debugbreak();
  CloseHandle(v43->m_eventHandle);
  v43->m_eventHandle = NULL;
  DeleteCriticalSection(&v43->m_critSec);
  v44 = v14->m_callback;
  if ( v44 )
  {
    v44->Release(v44);
    v14->m_callback = NULL;
  }
  Mem_HunkUser_DumpStats();
  v14->m_allocatorReady = 0;
  Mem_HunkUser_Reset(v14->m_textureDataHunk);
  v45 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v14->m_availableBuffers.m_listHead.m_sentinel.mp_next;
  v46 = &v14->m_availableBuffers.m_listHead;
  if ( v45 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)&v14->m_availableBuffers.m_listHead )
  {
    do
    {
      v47 = v45[1].mp_next;
      v45->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v14->m_availableBuffers.m_freelist.m_head;
      v14->m_availableBuffers.m_freelist.m_head.mp_next = v45;
      v45 = v47;
    }
    while ( v47 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v46 );
  }
  v46->m_sentinel.mp_prev = &v46->m_sentinel;
  v14->m_availableBuffers.m_listHead.m_sentinel.mp_next = &v14->m_availableBuffers.m_listHead.m_sentinel;
  v48 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v14->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
  v49 = &v14->m_decodedBuffers.m_listHead;
  if ( v48 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)&v14->m_decodedBuffers.m_listHead )
  {
    do
    {
      v50 = v48[1].mp_next;
      v48->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v14->m_decodedBuffers.m_freelist.m_head;
      v14->m_decodedBuffers.m_freelist.m_head.mp_next = v48;
      v48 = v50;
    }
    while ( v50 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v49 );
  }
  v49->m_sentinel.mp_prev = &v49->m_sentinel;
  v14->m_decodedBuffers.m_listHead.m_sentinel.mp_next = &v14->m_decodedBuffers.m_listHead.m_sentinel;
  ntl::nxheap::shutdown(&v14->s_decodeAllocator.m_heap);
  ntl::nxheap_region::shutdown(&v14->s_decodeAllocator.m_region);
  m_buffer = v14->s_decodeAllocator.m_data.m_buffer;
  if ( m_buffer )
  {
    v52 = v14->s_decodeAllocator.m_allocator.m_data.m_buffer;
    if ( m_buffer != v52 && v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
      __debugbreak();
    v14->s_decodeAllocator.m_data.m_buffer = NULL;
    v14->s_decodeAllocator.m_data.m_size = 0i64;
  }
  if ( v14->m_needToFreeResources )
  {
    v14->m_needToFreeResources = 0;
    if ( v14->m_workMemoryCommitted )
    {
      if ( v14->m_allocatorReady )
      {
        v14->m_needToFreeResources = 1;
      }
      else
      {
        Mem_HunkUser_Destroy(v14->m_textureDataHunk);
        m_workMemory = (unsigned __int8 *)v14->m_workMemory;
        inoutPageRange = v14->m_workMemoryRange;
        Mem_Paged_DecommitMemoryPartial(&result, m_workMemory, m_workMemory + 0x8000000, m_workMemory, &inoutPageRange);
        StreamerMemLoan::~StreamerMemLoan(&result);
        v14->m_workMemoryRange = MEM_PAGE_RANGE_INVALID_8;
        v14->m_workMemoryCommitted = 0;
        Mem_Paged_AllocatePhysicalPages(&result, 0x800u);
        StreamerMemLoan::~StreamerMemLoan(&result);
        v14->m_needToFreeResources = 0;
      }
    }
  }
  Sys_LeaveCriticalSection(CRITSECT_ONLINE_STREAMING_ALLOCATOR);
  Online_VideoStreaming::Reset(v14);
  ScopedCriticalSection::~ScopedCriticalSection(&v64);
  v54 = 0i64;
  _R11 = &v66;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return v54;
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
  int v11; 
  __int64 v12; 
  IMFMediaType *ppMFType; 
  __int64 v14; 
  __int64 v15; 
  __int128 v16; 

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
    __asm { vmovups xmm0, xmmword ptr cs:MFVideoFormat_NV12.Data1 }
  }
  else
  {
    if ( v14 != *(_QWORD *)&MFMediaType_Audio.Data1 || v15 != *(_QWORD *)MFMediaType_Audio.Data4 )
      goto LABEL_18;
    __asm { vmovups xmm0, xmmword ptr cs:MFAudioFormat_Float.Data1 }
  }
  __asm { vmovups [rsp+68h+var_28], xmm0 }
  v9 = ppMFType->SetGUID(ppMFType, &MF_MT_SUBTYPE, (const _GUID *)&v16);
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
  int v8; 
  __int64 v9; 
  void **p_ptr; 
  unsigned __int8 v11; 
  unsigned __int64 v12; 
  int size; 
  bool v15; 
  unsigned __int64 count; 
  ScopedCriticalSection v20; 

  v3 = type;
  ScopedCriticalSection::ScopedCriticalSection(&v20, CRITSECT_ONLINE_STREAMING_ALLOCATOR, SCOPED_CRITSECT_NORMAL);
  if ( this->m_allocatorReady && (m_workMemory = this->m_workMemory, (unsigned __int64)ptr >= m_workMemory) && (unsigned __int64)ptr <= m_workMemory + 0x8000000 )
  {
    ntl::nxheap::free(&this->s_decodeAllocator.m_heap, ptr);
    _RBX = &sMftAlloc.typeAllocs[v3];
    v8 = LODWORD(_RBX->count) - 1;
    v9 = v8;
    if ( v8 < 0 )
    {
LABEL_8:
      --_RBX->untrackedCount;
      --sMftAlloc.totalCount;
      v11 = 1;
    }
    else
    {
      p_ptr = &_RBX->allocs[v8].ptr;
      while ( *p_ptr != ptr )
      {
        --v8;
        p_ptr -= 2;
        if ( --v9 < 0 )
          goto LABEL_8;
      }
      v12 = v8;
      _RBP = 2i64 * v8;
      size = _RBX->allocs[v8].size;
      v15 = _RBX->allocated - size < 0;
      _RBX->allocated -= size;
      if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 368, ASSERT_TYPE_ASSERT, "(allocInfo.allocated >= 0)", (const char *)&queryFormat, "allocInfo.allocated >= 0", -2i64) )
        __debugbreak();
      count = _RBX->count;
      if ( v12 < count - 1 )
      {
        _RCX = 2 * count;
        __asm
        {
          vmovups xmm0, xmmword ptr [rbx+rcx*8-10h]
          vmovups xmmword ptr [rbx+rbp*8], xmm0
        }
        count = _RBX->count;
      }
      _RBX->count = count - 1;
      sMftAlloc.totalAllocated -= size;
      --sMftAlloc.totalCount;
      v11 = 1;
    }
  }
  else
  {
    v11 = 0;
  }
  ScopedCriticalSection::~ScopedCriticalSection(&v20);
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
  StreamUpdateId v5; 
  char *m_buffer; 
  char *v8; 
  char *v10; 
  char *v11; 
  Online_VideoStreaming::SourceReaderCallback *v13; 
  GfxImage *p_imagechroma; 
  __int64 v15; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> > *p_m_listHead; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v18; 
  ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> **p_m_freelist; 
  __int64 v20; 
  ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *v21; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v22; 
  ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> > *v23; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v24; 
  unsigned int rawMediaSize; 
  unsigned int v26; 
  __int64 v27; 
  StreamerMemLoan result; 

  v27 = -2i64;
  _RBX = this;
  if ( !this->m_canAllocateResources )
    return 0;
  if ( !this->m_workMemoryCommitted )
  {
    Mem_Paged_ReleasePhysicalPages(0x800u);
    _RBX->m_textureDataHunk = Mem_HunkUser_Create(0x1400000ui64, "streamingvidtexture", TRACK_MISC, MEM_ALLOC_FLAG_NONE);
    m_workMemory = (unsigned __int8 *)_RBX->m_workMemory;
    DB_GrowStreamerMemLoanAndWait(&result, MEM_POOL_MAIN, 0x8000000ui64);
    Mem_Paged_CommitMemoryPartial(m_workMemory, m_workMemory + 0x8000000, m_workMemory, &result, &_RBX->m_workMemoryRange, "Video Streaming - Work");
    _RBX->m_workMemoryCommitted = 1;
    StreamerMemLoan::~StreamerMemLoan(&result);
  }
  if ( _RBX->s_decodeAllocator.m_heap.m_used_mem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 686, ASSERT_TYPE_ASSERT, "(s_decodeAllocator.heap().used_bytes() == 0)", (const char *)&queryFormat, "s_decodeAllocator.heap().used_bytes() == 0") )
    __debugbreak();
  v5 = _RBX->m_workMemory;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+0A8h+result.mUpdateID], xmm0
  }
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start") )
    __debugbreak();
  result.mUpdateID = v5;
  result.mPages = (StreamerMemPageCounts)0x8000000i64;
  ntl::nxheap::shutdown(&_RBX->s_decodeAllocator.m_heap);
  ntl::nxheap_region::shutdown(&_RBX->s_decodeAllocator.m_region);
  m_buffer = _RBX->s_decodeAllocator.m_data.m_buffer;
  if ( m_buffer )
  {
    v8 = _RBX->s_decodeAllocator.m_allocator.m_data.m_buffer;
    if ( m_buffer != v8 && v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
      __debugbreak();
    _RBX->s_decodeAllocator.m_data.m_buffer = NULL;
    _RBX->s_decodeAllocator.m_data.m_size = 0i64;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+0A8h+result.mUpdateID]
    vmovups xmmword ptr [rbx+0DB0h], xmm0
  }
  ntl::nxheap::shutdown(&_RBX->s_decodeAllocator.m_heap);
  ntl::nxheap_region::shutdown(&_RBX->s_decodeAllocator.m_region);
  v10 = _RBX->s_decodeAllocator.m_data.m_buffer;
  if ( v10 )
  {
    v11 = _RBX->s_decodeAllocator.m_allocator.m_data.m_buffer;
    if ( v10 != v11 && v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
      __debugbreak();
    _RBX->s_decodeAllocator.m_data.m_buffer = NULL;
    _RBX->s_decodeAllocator.m_data.m_size = 0i64;
  }
  if ( _RBX->s_decodeAllocator.m_allocator.m_data.m_size < 0x8000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 56, ASSERT_TYPE_ASSERT, "( size_bytes <= m_data.size_in_bytes() )", (const char *)&queryFormat, "size_bytes <= m_data.size_in_bytes()") )
    __debugbreak();
  result.mUpdateID = (StreamUpdateId)_RBX->s_decodeAllocator.m_allocator.m_data.m_buffer;
  result.mPages = (StreamerMemPageCounts)0x8000000i64;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+0A8h+result.mUpdateID]
    vmovups xmmword ptr [rbx+0D80h], xmm0
  }
  if ( _RBX->s_decodeAllocator.m_region.mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 206, ASSERT_TYPE_ASSERT, "( !m_region.is_inited() )", (const char *)&queryFormat, "!m_region.is_inited()") )
    __debugbreak();
  ntl::nxheap_region::init(&_RBX->s_decodeAllocator.m_region, _RBX->s_decodeAllocator.m_data.m_buffer, _RBX->s_decodeAllocator.m_data.m_size);
  if ( _RBX->s_decodeAllocator.m_heap.mp_parent_region && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 209, ASSERT_TYPE_ASSERT, "( !heap().is_inited() )", (const char *)&queryFormat, "!heap().is_inited()") )
    __debugbreak();
  ntl::nxheap::init(&_RBX->s_decodeAllocator.m_heap, &_RBX->s_decodeAllocator.m_region, DIR_BOTTOM_UP);
  v13 = (Online_VideoStreaming::SourceReaderCallback *)Mem_HunkUser_AllocInternal(_RBX->m_textureDataHunk, 0x60ui64, 4ui64, "Online_VideoStreaming::InitMemory");
  v13->__vftable = (Online_VideoStreaming::SourceReaderCallback_vtbl *)&Online_VideoStreaming::SourceReaderCallback::`vftable';
  v13->m_refCount = 1;
  v13->m_result = 0;
  v13->m_sample = NULL;
  v13->m_eventHandle = CreateEventW(NULL, 0, 0, NULL);
  InitializeCriticalSection(&v13->m_critSec);
  _RBX->m_callback = v13;
  rawMediaSize = 2134000;
  v26 = 1067000;
  p_imagechroma = &_RBX->m_frameBuffers[0].imagechroma;
  v15 = 2i64;
  do
  {
    memset_0(&p_imagechroma[-1], 0, sizeof(GfxImage));
    memset_0(p_imagechroma, 0, sizeof(GfxImage));
    Online_VideoStreaming::SetupVideoTexture(_RBX, p_imagechroma - 1, (void **)&p_imagechroma[1].depth, GFX_PF_R8, 0x794u, 0x44Cu, &rawMediaSize, (unsigned int *)p_imagechroma[1].streams, "LUMA1");
    if ( !*(_QWORD *)&p_imagechroma[1].depth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 712, ASSERT_TYPE_ASSERT, "(frame->lumaTextureData)", (const char *)&queryFormat, "frame->lumaTextureData") )
      __debugbreak();
    Online_VideoStreaming::SetupVideoTexture(_RBX, p_imagechroma, (void **)&p_imagechroma[1].levelCount, GFX_PF_R8G8, 0x3CAu, 0x226u, &v26, (unsigned int *)&p_imagechroma[1].streams[0].xpakEntry.key + 1, "CHROMA1");
    if ( !*(_QWORD *)&p_imagechroma[1].levelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 714, ASSERT_TYPE_ASSERT, "(frame->chromaTextureData)", (const char *)&queryFormat, "frame->chromaTextureData") )
      __debugbreak();
    LODWORD(p_imagechroma[1].streams[0].xpakEntry.offset) = rawMediaSize;
    HIDWORD(p_imagechroma[1].streams[0].xpakEntry.offset) = v26;
    p_imagechroma = (GfxImage *)((char *)p_imagechroma + 536);
    --v15;
  }
  while ( v15 );
  Mem_HunkUser_DumpStats();
  sMftAlloc.totalCount = 0i64;
  *(_QWORD *)&sMftAlloc.totalAllocated = 0i64;
  *(_QWORD *)&sMftAlloc.typeAllocs[0].allocated = 0i64;
  sMftAlloc.typeAllocs[0].untrackedCount = 0;
  sMftAlloc.typeAllocs[0].count = 0i64;
  *(_QWORD *)&sMftAlloc.typeAllocs[1].allocated = 0i64;
  sMftAlloc.typeAllocs[1].untrackedCount = 0;
  sMftAlloc.typeAllocs[1].count = 0i64;
  mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)_RBX->m_availableBuffers.m_listHead.m_sentinel.mp_next;
  p_m_listHead = &_RBX->m_availableBuffers.m_listHead;
  if ( mp_next != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)&_RBX->m_availableBuffers.m_listHead )
  {
    do
    {
      v18 = mp_next[1].mp_next;
      mp_next->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)_RBX->m_availableBuffers.m_freelist.m_head;
      _RBX->m_availableBuffers.m_freelist.m_head.mp_next = mp_next;
      mp_next = v18;
    }
    while ( v18 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_listHead );
  }
  p_m_listHead->m_sentinel.mp_prev = &p_m_listHead->m_sentinel;
  _RBX->m_availableBuffers.m_listHead.m_sentinel.mp_next = &_RBX->m_availableBuffers.m_listHead.m_sentinel;
  p_m_freelist = (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> **)&_RBX->m_availableBuffers.m_freelist;
  v20 = 6i64;
  do
  {
    if ( !*p_m_freelist )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      if ( !*p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
    }
    if ( *p_m_freelist == (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x28ui64, 6ui64) )
      __debugbreak();
    v21 = *p_m_freelist;
    *p_m_freelist = (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)(*p_m_freelist)->mp_prev;
    v21->mp_prev = NULL;
    v21->mp_next = NULL;
    ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData>>::insert_before(&_RBX->m_availableBuffers.m_listHead, (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)&_RBX->m_availableBuffers.m_listHead, v21);
    --v20;
  }
  while ( v20 );
  v22 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)_RBX->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
  v23 = &_RBX->m_decodedBuffers.m_listHead;
  if ( v22 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)&_RBX->m_decodedBuffers.m_listHead )
  {
    do
    {
      v24 = v22[1].mp_next;
      v22->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)_RBX->m_decodedBuffers.m_freelist.m_head;
      _RBX->m_decodedBuffers.m_freelist.m_head.mp_next = v22;
      v22 = v24;
    }
    while ( v24 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v23 );
  }
  v23->m_sentinel.mp_prev = &v23->m_sentinel;
  _RBX->m_decodedBuffers.m_listHead.m_sentinel.mp_next = &_RBX->m_decodedBuffers.m_listHead.m_sentinel;
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
IMFSample *Online_VideoStreaming::PopFrameSample(Online_VideoStreaming *this)
{
  LONGLONG v2; 
  LONGLONG v3; 
  ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> > *p_m_listHead; 
  ntl::internal::list_node_base *mp_next; 
  ntl::internal::list_node_base *v10; 
  ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *v11; 
  ntl::internal::pool_allocator_freelist<40> *p_m_freelist; 
  ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *v13; 
  __int64 v14; 
  ntl::internal::list_node_base *v15; 
  ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *v16; 
  ntl::internal::pool_allocator_freelist<40> *v17; 
  ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *v18; 
  ScopedCriticalSection v20; 
  __int128 v21; 
  __int64 v22; 
  LARGE_INTEGER PerformanceCount; 
  LARGE_INTEGER v24; 

  ScopedCriticalSection::ScopedCriticalSection(&v20, CRITSECT_ONLINE_STREAMING_UPDATE, SCOPED_CRITSECT_NORMAL);
  QueryPerformanceCounter(&PerformanceCount);
  v2 = MFllMulDiv_0(PerformanceCount.QuadPart, 10000000i64, this->m_liFrequency.QuadPart, 0i64);
  if ( v2 < this->m_llCorrelatedStartTime )
    this->m_llCorrelatedStartTime = v2;
  QueryPerformanceCounter(&v24);
  v3 = MFllMulDiv_0(v24.QuadPart, 10000000i64, this->m_liFrequency.QuadPart, 0i64) + this->m_llStartTimeStamp - this->m_llCorrelatedStartTime;
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
    _RBX = this->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 356, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    __asm
    {
      vmovups xmm1, xmmword ptr [rbx+10h]
      vmovups [rsp+0A8h+var_50], xmm1
      vmovsd  xmm0, qword ptr [rbx+20h]
      vmovsd  [rsp+0A8h+var_40], xmm0
      vpextrd rax, xmm1, 2
    }
    if ( (_DWORD)_RAX == this->m_videoWidth )
      break;
    if ( (_QWORD)v21 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 16i64))(v21);
    v10 = this->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
    if ( v10 == (ntl::internal::list_node_base *)p_m_listHead )
    {
      if ( v10 != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
        __debugbreak();
    }
    v11 = (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)this->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 319, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData>>::remove(&this->m_decodedBuffers.m_listHead, v11);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
      __debugbreak();
    v11->mp_prev = (ntl::internal::list_node_base *)this->m_decodedBuffers.m_freelist.m_head.mp_next;
    this->m_decodedBuffers.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v11;
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
    v13 = (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)p_m_freelist->m_head.mp_next;
    p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
    v13->mp_prev = NULL;
    v13->mp_next = NULL;
    ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData>>::insert_before(&this->m_availableBuffers.m_listHead, (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)this->m_availableBuffers.m_listHead.m_sentinel.mp_next, v13);
  }
  if ( v22 > v3 )
  {
LABEL_59:
    v14 = 0i64;
    goto LABEL_60;
  }
  this->m_llTimeVideo = v22;
  v14 = v21;
  v15 = this->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
  if ( v15 == (ntl::internal::list_node_base *)p_m_listHead )
  {
    if ( v15 != p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
      __debugbreak();
  }
  v16 = (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)this->m_decodedBuffers.m_listHead.m_sentinel.mp_next;
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 319, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
    __debugbreak();
  ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData>>::remove(&this->m_decodedBuffers.m_listHead, v16);
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
    __debugbreak();
  v16->mp_prev = (ntl::internal::list_node_base *)this->m_decodedBuffers.m_freelist.m_head.mp_next;
  this->m_decodedBuffers.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v16;
  v17 = &this->m_availableBuffers.m_freelist;
  if ( !this->m_availableBuffers.m_freelist.m_head.mp_next )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    if ( !v17->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
  }
  if ( (ntl::internal::pool_allocator_freelist<40> *)v17->m_head.mp_next == v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x28ui64, 6ui64) )
    __debugbreak();
  v18 = (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)v17->m_head.mp_next;
  v17->m_head.mp_next = v17->m_head.mp_next->mp_next;
  v18->mp_prev = NULL;
  v18->mp_next = NULL;
  ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData>>::insert_before(&this->m_availableBuffers.m_listHead, (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)this->m_availableBuffers.m_listHead.m_sentinel.mp_next, v18);
LABEL_60:
  ScopedCriticalSection::~ScopedCriticalSection(&v20);
  return (IMFSample *)v14;
}

/*
==============
Online_VideoStreaming::ProcessAudio
==============
*/
void Online_VideoStreaming::ProcessAudio(Online_VideoStreaming *this)
{
  IMFSample *m_pOutputAudioSample; 
  int v6; 
  Online_VideoStreaming::SourceReaderCallback *m_callback; 
  __int64 v10; 
  int m_result; 
  unsigned int m_streamFlags; 
  __int64 m_sampleTimestamp; 
  IMFSample *m_sample; 
  __int64 m_streamIndex; 
  unsigned __int64 m_llTimeVideo; 
  bool v17; 
  __int64 v18; 
  IMFSourceReader *m_pReader; 
  int v21; 
  int v22; 
  HRESULT v23; 
  UINT32 pcbSize; 
  __int64 v29; 

  m_pOutputAudioSample = this->m_pOutputAudioSample;
  v6 = 1;
  if ( m_pOutputAudioSample )
  {
    if ( !Online_VideoStreaming::RenderAudioFrame(this, m_pOutputAudioSample, 0i64) )
      return;
    this->m_pOutputAudioSample = NULL;
  }
  if ( !this->m_audioDone )
  {
    __asm
    {
      vmovaps [rsp+98h+var_48], xmm6
      vmovss  xmm6, cs:__real@5f800000
      vmovaps [rsp+98h+var_58], xmm7
      vmovss  xmm7, cs:__real@48927c00
    }
    while ( v6 )
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
        v6 = 0;
        if ( m_result == -1072873852 )
          this->m_audioDone = 1;
      }
      else
      {
        if ( m_sampleTimestamp < 0 )
          goto LABEL_9;
        this->m_llTimeAudio = m_sampleTimestamp;
        if ( (m_streamFlags & 2) != 0 )
          this->m_audioDone = 1;
        m_llTimeVideo = this->m_llTimeVideo;
        if ( m_llTimeVideo <= m_sampleTimestamp )
          goto LABEL_17;
        v17 = m_llTimeVideo < m_sampleTimestamp;
        v18 = m_llTimeVideo - m_sampleTimestamp;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
        }
        if ( v18 < 0 )
          __asm { vaddss  xmm0, xmm0, xmm6 }
        __asm { vcomiss xmm0, xmm7 }
        if ( v17 || v18 == 0 )
        {
LABEL_17:
          if ( (m_streamFlags & 0x10) != 0 )
          {
            Online_VideoStreaming::ConfigureSourceReaderOutput(this, this->m_pReader, m_streamIndex);
            m_pReader = this->m_pReader;
            v29 = 0i64;
            v21 = m_pReader->GetCurrentMediaType(m_pReader, 4294967293u, (IMFMediaType **)&v29);
            if ( v21 < 0 )
            {
              Com_PrintError(25, "[OnlineVidStreaming] ProcessAudio: GetCurrentMediaType failed with HRESULT %x.\n", (unsigned int)v21);
              break;
            }
            v22 = (**(__int64 (__fastcall ***)(__int64, GUID *, IMFAudioMediaType **))v29)(v29, &GUID_26a0adc3_ce26_4672_9304_69552edd3faf, &this->m_pAudioMediaType);
            if ( v22 < 0 )
            {
              Com_PrintError(25, "[OnlineVidStreaming] ProcessAudio: QueryInterface failed with HRESULT %x.\n", (unsigned int)v22);
              break;
            }
            if ( !this->m_pAudioReaderOutputWFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1207, ASSERT_TYPE_ASSERT, "(m_pAudioReaderOutputWFX)", (const char *)&queryFormat, "m_pAudioReaderOutputWFX") )
              __debugbreak();
            CoTaskMemFree(this->m_pAudioReaderOutputWFX);
            v23 = MFCreateWaveFormatExFromMFMediaType_0(this->m_pAudioMediaType, &this->m_pAudioReaderOutputWFX, &pcbSize, 0);
            if ( v23 < 0 )
            {
              Com_PrintError(25, "[OnlineVidStreaming] ProcessAudio: MFCreateWaveFormatExFromMFMediaType failed with HRESULT %x.\n", (unsigned int)v23);
              break;
            }
            if ( v29 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16i64))(v29);
              v29 = 0i64;
            }
          }
          if ( m_sample )
          {
            v6 = Online_VideoStreaming::RenderAudioFrame(this, m_sample, m_sampleTimestamp);
            if ( v6 )
              ++this->m_numberOfFramesDecoded;
            else
              this->m_pOutputAudioSample = m_sample;
          }
        }
        else
        {
LABEL_9:
          if ( m_sample )
            ((void (__fastcall *)(IMFSample *, __int64, __int64))m_sample->Release)(m_sample, v10, m_streamIndex);
        }
      }
      if ( this->m_audioDone )
        break;
    }
    __asm
    {
      vmovaps xmm6, [rsp+98h+var_48]
      vmovaps xmm7, [rsp+98h+var_58]
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
  int v7; 
  Online_VideoStreaming::SourceReaderCallback *m_callback; 
  unsigned int m_streamFlags; 
  unsigned __int64 m_sampleTimestamp; 
  IMFSample *m_sample; 
  unsigned int m_streamIndex; 
  int m_result; 
  IMFSourceReader *m_pReader; 
  HRESULT v17; 
  unsigned int m_videoHeight; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  const char *v21; 
  __int64 v22; 
  int v23; 
  unsigned int v24; 
  unsigned __int64 m_llTimeAudio; 
  bool v26; 
  __int64 v27; 
  ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> > *v29; 
  unsigned int m_videoWidth; 
  ntl::internal::pool_allocator_freelist<40> *p_m_freelist; 
  ntl::internal::list_node_base *v37; 
  ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *v38; 
  const char *v39; 
  __int64 v42; 
  __int128 v43; 
  unsigned __int64 v44; 
  unsigned __int64 v45; 
  __int64 v46; 
  __int64 v47; 

  p_m_listHead = &this->m_availableBuffers.m_listHead;
  mp_next = this->m_availableBuffers.m_listHead.m_sentinel.mp_next;
  v7 = 1;
  if ( mp_next != (ntl::internal::list_node_base *)&this->m_availableBuffers.m_listHead )
  {
    if ( this->m_videoDone )
      return;
    __asm
    {
      vmovaps [rsp+0C8h+var_38], xmm6
      vmovss  xmm6, cs:__real@5f800000
      vmovaps [rsp+0C8h+var_48], xmm7
      vmovss  xmm7, cs:__real@48927c00
    }
    while ( 1 )
    {
      if ( !v7 )
      {
LABEL_86:
        __asm
        {
          vmovaps xmm6, [rsp+0C8h+var_38]
          vmovaps xmm7, [rsp+0C8h+var_48]
        }
        return;
      }
      v7 = 0;
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
            v42 = 0i64;
            if ( m_pReader->GetCurrentMediaType(m_pReader, 4294967292u, (IMFMediaType **)&v42) >= 0 )
            {
              v17 = (*(__int64 (__fastcall **)(__int64, _GUID *, unsigned __int64 *))(*(_QWORD *)v42 + 64i64))(v42, &MF_MT_FRAME_SIZE, &v45);
              if ( v17 < 0 )
              {
                v21 = R_ErrorDescription(v17);
                Sys_Error((const ObfuscateErrorText)&stru_1444B85D0, 1059i64, v21);
                m_videoHeight = this->m_videoHeight;
                LODWORD(v20) = this->m_videoWidth;
              }
              else
              {
                m_videoHeight = v45;
                v19 = v45;
                this->m_videoHeight = v45;
                v20 = HIDWORD(v19);
                this->m_videoWidth = v20;
              }
              this->m_videoDataHeight = m_videoHeight;
              v22 = v42;
              this->m_videoDataWidth = v20;
              v46 = 0i64;
              v47 = 0i64;
              if ( (*(int (__fastcall **)(__int64, _GUID *, __int64 *, __int64, _QWORD))(*(_QWORD *)v22 + 120i64))(v22, &MF_MT_MINIMUM_DISPLAY_APERTURE, &v46, 16i64, 0i64) >= 0 )
              {
                v23 = v47;
                v24 = HIDWORD(v47);
                this->m_videoWidth = v47;
                this->m_videoHeight = v24;
                if ( v23 > 1920 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1070, ASSERT_TYPE_ASSERT, "(videoArea.Area.cx <= 1920)", (const char *)&queryFormat, "videoArea.Area.cx <= MAX_WIDTH") )
                  __debugbreak();
                if ( SHIDWORD(v47) > 1080 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1071, ASSERT_TYPE_ASSERT, "(videoArea.Area.cy <= 1080)", (const char *)&queryFormat, "videoArea.Area.cy <= MAX_HEIGHT") )
                  __debugbreak();
              }
              if ( v42 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16i64))(v42);
                v42 = 0i64;
              }
            }
          }
          m_llTimeAudio = this->m_llTimeAudio;
          if ( m_llTimeAudio <= m_sampleTimestamp )
            goto LABEL_35;
          v26 = m_llTimeAudio < m_sampleTimestamp;
          v27 = m_llTimeAudio - m_sampleTimestamp;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
          }
          if ( v27 < 0 )
            __asm { vaddss  xmm0, xmm0, xmm6 }
          __asm { vcomiss xmm0, xmm7 }
          if ( v26 || v27 == 0 )
          {
LABEL_35:
            this->m_currentTime = m_sampleTimestamp;
            Sys_EnterCriticalSection(CRITSECT_ONLINE_STREAMING_UPDATE);
            v29 = (ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> > *)p_m_listHead->m_sentinel.mp_next;
            if ( v29 == p_m_listHead )
            {
              if ( v29 != (ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> > *)p_m_listHead->m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
                __debugbreak();
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
                __debugbreak();
            }
            _RBX = p_m_listHead->m_sentinel.mp_next;
            if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 356, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
              __debugbreak();
            __asm { vmovups xmm0, xmmword ptr [rbx+10h] }
            m_videoWidth = this->m_videoWidth;
            p_m_freelist = &this->m_decodedBuffers.m_freelist;
            __asm { vmovups [rsp+0C8h+var_80], xmm0 }
            v44 = m_sampleTimestamp;
            *(_QWORD *)&v43 = m_sample;
            *((_QWORD *)&v43 + 1) = __PAIR64__(HIDWORD(_RT0), m_videoWidth);
            if ( !this->m_decodedBuffers.m_freelist.m_head.mp_next )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
                __debugbreak();
              if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
                __debugbreak();
            }
            if ( (ntl::internal::pool_allocator_freelist<40> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x28ui64, 6ui64) )
              __debugbreak();
            _R8 = (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)p_m_freelist->m_head.mp_next;
            __asm
            {
              vmovups xmm0, [rsp+0C8h+var_80]
              vmovsd  xmm1, [rsp+0C8h+var_70]
            }
            p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
            __asm
            {
              vmovups xmmword ptr [r8+10h], xmm0
              vmovsd  qword ptr [r8+20h], xmm1
            }
            _R8->mp_prev = NULL;
            _R8->mp_next = NULL;
            ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData>>::insert_before(&this->m_decodedBuffers.m_listHead, (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)&this->m_decodedBuffers.m_listHead, _R8);
            v37 = this->m_availableBuffers.m_listHead.m_sentinel.mp_next;
            if ( v37 == (ntl::internal::list_node_base *)&this->m_availableBuffers.m_listHead )
            {
              if ( v37 != this->m_availableBuffers.m_listHead.m_sentinel.mp_prev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 95, ASSERT_TYPE_ASSERT, "( m_sentinel.mp_next == m_sentinel.mp_prev )", (const char *)&queryFormat, "m_sentinel.mp_next == m_sentinel.mp_prev") )
                __debugbreak();
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list_base.h", 137, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
                __debugbreak();
            }
            v38 = (ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData> *)this->m_availableBuffers.m_listHead.m_sentinel.mp_next;
            if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\list\\list.h", 319, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
              __debugbreak();
            ntl::internal::list_head_base<ntl::internal::list_node<Online_VideoStreaming::VideoDecodeData>>::remove(&this->m_availableBuffers.m_listHead, v38);
            if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 313, ASSERT_TYPE_ASSERT, "( p_ptr )", (const char *)&queryFormat, "p_ptr") )
              __debugbreak();
            v38->mp_prev = (ntl::internal::list_node_base *)this->m_availableBuffers.m_freelist.m_head.mp_next;
            this->m_availableBuffers.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v38;
            Sys_LeaveCriticalSection(CRITSECT_ONLINE_STREAMING_UPDATE);
            ++this->m_numberOfFramesDecoded;
          }
          else
          {
            m_sample->Release(m_sample);
            v7 = 1;
          }
        }
        goto LABEL_83;
      }
      if ( m_result != -2147467260 )
        break;
LABEL_83:
      if ( this->m_videoDone )
        goto LABEL_86;
    }
    if ( m_result > -1072875853 )
    {
      if ( m_result == -1072875852 )
      {
        v39 = "MF_E_INVALIDMEDIATYPE - The data specified for the media type is invalid, inconsistent, or not supported by this object";
        goto LABEL_81;
      }
      if ( m_result == -1072875851 )
      {
        v39 = "MF_E_NOTACCEPTING - A flush operation is pending";
        goto LABEL_81;
      }
    }
    else
    {
      switch ( m_result )
      {
        case -1072875853:
          v39 = "MF_E_INVALIDSTREAMNUMBER - The dwStreamIndex parameter is invalid.";
          goto LABEL_81;
        case -2147024882:
          v39 = "Out of memory or system resources...";
          goto LABEL_81;
        case -2147024809:
          v39 = "MF_E_INVALIDREQUEST - Invalid argument";
          goto LABEL_81;
        case -1072875854:
          v39 = "MF_E_INVALIDREQUEST - INVALID REQUEST";
LABEL_81:
          Com_PrintError(25, "[OnlineVidStreaming] ProcessVideo: ReadSample returned error: 0x%08x {%s}\n", (unsigned int)m_result, v39);
          if ( m_result == -2147024882 )
          {
            Mem_Error_CannotAlloc_Dev((Mem_AllocatorType)17, "Online_VideoStreaming::ProcessVideo", "c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1109, "MediaFoundation failed to allocate memory. Make sure there is enough free system memory for Legacy allocations.");
            goto LABEL_86;
          }
          this->m_videoDone = 1;
          this->m_audioDone = 1;
          Online_VideoStreaming::StopVideo(this, 0, 0);
          goto LABEL_83;
      }
    }
    v39 = "UNKNOWN";
    goto LABEL_81;
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
  volatile VideoStreamingStopSeq m_requestStopSeq; 
  IMFSample *v7; 
  unsigned __int64 m_qwAudioFrameRendered; 
  volatile int *p_frameCount; 
  tWAVEFORMATEX *m_pAudioReaderOutputWFX; 
  unsigned __int16 nChannels; 
  int v14; 
  int v15; 
  bool v16; 
  __int64 v21; 
  int destCount; 
  int v26; 
  __int64 audioWriteFrame; 
  __int64 v28; 
  int bufferSize; 
  int v30; 
  float *buffer; 
  tWAVEFORMATEX *v32; 
  unsigned __int16 v33; 
  int v34; 
  float *v35; 
  __int64 v36; 
  int v37; 
  float *v38; 
  __int64 v39; 
  float *v40; 
  int v41; 
  float *v42; 
  float *v43; 
  unsigned __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  int v53; 
  signed __int32 v55[8]; 
  __int64 v56; 
  void *Src; 
  SndResamplerState state; 
  char v59[4]; 
  LARGE_INTEGER PerformanceCount; 
  __int64 v61; 
  __int64 v62; 
  __int64 v63; 
  size_t Size; 
  IMFSample *v66; 
  int v67; 

  v66 = pSample;
  m_requestStopSeq = this->m_requestStopSeq;
  v7 = pSample;
  v56 = 0i64;
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
    v14 = ((__int64 (__fastcall *)(IMFSample *, __int64 *, __int64))v7->ConvertToContiguousBuffer)(v7, &v56, timestamp);
    if ( v14 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, void **, char *, size_t *))(*(_QWORD *)v56 + 24i64))(v56, &Src, v59, &Size);
      if ( v15 >= 0 )
      {
        v16 = this->m_pAudioReaderOutputWFX->wFormatTag == 3;
        __asm { vmovaps [rsp+0D8h+var_48], xmm6 }
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1772, ASSERT_TYPE_ASSERT, "(m_pAudioReaderOutputWFX->wFormatTag == 0x0003)", (const char *)&queryFormat, "m_pAudioReaderOutputWFX->wFormatTag == WAVE_FORMAT_IEEE_FLOAT") )
          __debugbreak();
        if ( this->m_pAudioReaderOutputWFX->wBitsPerSample != 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1773, ASSERT_TYPE_ASSERT, "(m_pAudioReaderOutputWFX->wBitsPerSample == 32)", (const char *)&queryFormat, "m_pAudioReaderOutputWFX->wBitsPerSample == 32") )
          __debugbreak();
        if ( (unsigned __int16)(this->m_pAudioReaderOutputWFX->nChannels - 1) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1774, ASSERT_TYPE_ASSERT, "(m_pAudioReaderOutputWFX->nChannels == 1 || m_pAudioReaderOutputWFX->nChannels == 2)", (const char *)&queryFormat, "m_pAudioReaderOutputWFX->nChannels == 1 || m_pAudioReaderOutputWFX->nChannels == 2") )
          __debugbreak();
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm0, xmm0, rcx
          vmulss  xmm6, xmm0, cs:__real@37aec33e
        }
        v21 = (int)((unsigned int)Size / (this->m_pAudioReaderOutputWFX->nChannels * (this->m_pAudioReaderOutputWFX->wBitsPerSample >> 3)));
        __asm
        {
          vcvtsi2ss xmm1, xmm1, rcx
          vdivss  xmm0, xmm1, xmm6
          vaddss  xmm2, xmm0, cs:__real@3f000000
          vcvttss2si r12d, xmm2
        }
        v67 = destCount;
        v26 = AlignUp<int>(destCount, 4ui64);
        audioWriteFrame = this->m_audioData.audioWriteFrame;
        v28 = audioWriteFrame;
        bufferSize = this->m_audioData.decodedAudioData[audioWriteFrame].bufferSize;
        v30 = 4 * this->m_pAudioReaderOutputWFX->nChannels * v26;
        if ( v30 > bufferSize )
        {
          buffer = this->m_audioData.decodedAudioData[audioWriteFrame].buffer;
          if ( buffer )
            Online_VideoStreaming::FreeInternally(this, buffer, MAT_Audio);
          this->m_audioData.decodedAudioData[v28].buffer = (float *)Online_VideoStreaming::AllocateInternally(this, v30, 0x10ui64, MAT_Audio);
          bufferSize = v30;
          this->m_audioData.decodedAudioData[v28].bufferSize = v30;
        }
        v32 = this->m_pAudioReaderOutputWFX;
        v33 = v32->nChannels;
        if ( v32->nSamplesPerSec == 48000 )
        {
          if ( v33 == 1 )
          {
            v34 = Size;
            if ( (unsigned int)Size > 0x7FFFFFFF )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned long>(unsigned long)", "signed", (int)Size, "unsigned", (unsigned int)Size) )
                __debugbreak();
              bufferSize = this->m_audioData.decodedAudioData[v28].bufferSize;
            }
            if ( v34 > bufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1798, ASSERT_TYPE_ASSERT, "(truncate_cast<int>( dwBufferLen ) <= currentFrame->bufferSize)", (const char *)&queryFormat, "truncate_cast<int>( dwBufferLen ) <= currentFrame->bufferSize") )
              __debugbreak();
            memcpy_0(this->m_audioData.decodedAudioData[v28].buffer, Src, (unsigned int)Size);
          }
          else
          {
            v35 = (float *)Src;
            v36 = AlignUp<int>(destCount, 4ui64);
            v37 = 0;
            v38 = this->m_audioData.decodedAudioData[v28].buffer;
            v39 = 0i64;
            v63 = v21;
            v40 = &v38[v36];
            if ( v21 >= 4 )
            {
              v41 = 6;
              v61 = 4i64 - (_QWORD)v40;
              v42 = v40 + 2;
              v43 = v35 + 3;
              v44 = ((unsigned __int64)(v21 - 4) >> 2) + 1;
              v62 = 4 * v44;
              do
              {
                v45 = 2 * v37;
                v46 = (__int64)v42 - 8 - (_QWORD)v40;
                v37 += 4;
                v42 += 4;
                v43 += 8;
                *(float *)((char *)this->m_audioData.decodedAudioData[v28].buffer + v46) = v35[v45];
                *(v42 - 6) = *(v43 - 10);
                v47 = v41;
                *(float *)((char *)this->m_audioData.decodedAudioData[v28].buffer + v46 + 4) = v35[v41 - 4];
                *(v42 - 5) = *(v43 - 8);
                v48 = v41;
                v41 += 8;
                *(float *)((char *)v42 + (char *)this->m_audioData.decodedAudioData[v28].buffer - (char *)v40 - 16) = v35[v48 - 2];
                *(v42 - 4) = *(v43 - 6);
                *(float *)((char *)this->m_audioData.decodedAudioData[v28].buffer + 4i64 - (_QWORD)v40 + (unsigned __int64)v42 - 16) = v35[v47];
                *(v42 - 3) = *(v43 - 4);
                --v44;
              }
              while ( v44 );
              v39 = v62;
              p_frameCount = &this->m_audioData.frameCount;
              v21 = v63;
              destCount = v67;
            }
            if ( v39 < v21 )
            {
              v49 = (__int64)&v35[2 * v39 + 1];
              do
              {
                v50 = 2 * v37++;
                v49 += 8i64;
                this->m_audioData.decodedAudioData[v28].buffer[v39] = v35[v50];
                v40[v39++] = *(float *)(v49 - 8);
              }
              while ( v39 < v21 );
            }
            v7 = v66;
          }
        }
        else if ( v33 == 1 )
        {
          __asm { vmovaps xmm1, xmm6; pitchRatio }
          Resampler_Resample_DrainSrc(&state, *(const float *)&_XMM1, (const float *)Src, v21, this->m_audioData.decodedAudioData[v28].buffer, destCount);
        }
        else
        {
          v53 = AlignUp<int>(destCount, 4ui64);
          __asm { vmovaps xmm1, xmm6; pitchRatio }
          Resampler_Resample_DrainSrc_Stereo(&state, *(const float *)&_XMM1, (const float *)Src, v21, this->m_audioData.decodedAudioData[v28].buffer, &this->m_audioData.decodedAudioData[v28].buffer[v53], destCount);
        }
        this->m_audioData.decodedAudioData[v28].sampleCount = destCount;
        this->m_audioData.decodedAudioData[v28].numChannels = this->m_pAudioReaderOutputWFX->nChannels;
        this->m_audioData.decodedAudioData[v28].consumed = 0;
        this->m_audioData.audioWriteFrame = (this->m_audioData.audioWriteFrame + 1) % 6;
        _InterlockedOr(v55, 0);
        Sys_InterlockedIncrement(p_frameCount);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 32i64))(v56);
        __asm { vmovaps xmm6, [rsp+0D8h+var_48] }
        if ( v56 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16i64))(v56);
          v56 = 0i64;
        }
        v7->Release(v7);
        return 1i64;
      }
      else
      {
        Com_PrintError(25, "[OnlineVidStreaming] RenderAudioFrame: Lock failed with HRESULT %x.\n", (unsigned int)v15);
        return 0i64;
      }
    }
    else
    {
      Com_PrintError(25, "[OnlineVidStreaming] RenderAudioFrame: ConvertToContiguousBuffer failed with HRESULT %x.\n", (unsigned int)v14);
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
  Online_VideoStreaming *v18; 
  void *v19; 
  const dvar_t *m_vidStreamLogEnabled; 
  char *fmt; 
  __int64 v28; 
  double v29; 
  __m256i v31; 
  __m256i v32; 
  Image_SetupParams params; 
  XG_RESOURCE_LAYOUT layout; 

  if ( !image && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1681, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
    __debugbreak();
  if ( !imageTextureData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1682, ASSERT_TYPE_ASSERT, "(imageTextureData)", (const char *)&queryFormat, "imageTextureData") )
    __debugbreak();
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+1760h+var_17E0+8], xmm0
  }
  v31.m256i_i32[2] = 1;
  v32.m256i_i64[0] = 0i64;
  *(__int64 *)((char *)&v31.m256i_i64[1] + 4) = 1i64;
  v32.m256i_i32[6] = -1;
  __asm { vmovups ymm1, [rbp+1760h+var_17E0] }
  v31.m256i_i64[0] = __PAIR64__(height, width);
  v31.m256i_i32[5] = 1027;
  v31.m256i_i32[6] = format;
  __asm
  {
    vmovups ymm0, [rsp+1860h+var_1800]
    vmovups ymmword ptr [rbp+1760h+params.width], ymm0
    vmovups ymmword ptr [rbp+1760h+params.customAllocFunc], ymm1
  }
  Image_GetTextureLayout_XB3(&params, &layout);
  SizeBytes = layout.SizeBytes;
  if ( layout.BaseAlignmentBytes != 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1691, ASSERT_TYPE_ASSERT, "( layout.BaseAlignmentBytes ) == ( R_IMAGE_ALIGNMENT )", "%s == %s\n\t%llu, %llu", "layout.BaseAlignmentBytes", "R_IMAGE_ALIGNMENT", layout.BaseAlignmentBytes, 256i64) )
    __debugbreak();
  *out_pitch = layout.Plane[0].MipLayout[0].PitchBytes;
  if ( *imageTextureData )
  {
    v18 = this;
  }
  else
  {
    if ( SizeBytes < *rawMediaSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1696, ASSERT_TYPE_ASSERT, "(size >= rawMediaSize)", (const char *)&queryFormat, "size >= rawMediaSize") )
      __debugbreak();
    if ( SizeBytes < height * *out_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1697, ASSERT_TYPE_ASSERT, "(size >= out_pitch * height)", (const char *)&queryFormat, "size >= out_pitch * height") )
      __debugbreak();
    v18 = this;
    *rawMediaSize = truncate_cast<unsigned int,unsigned __int64>(SizeBytes);
    v19 = Mem_HunkUser_AllocInternal(this->m_textureDataHunk, SizeBytes, 0x100ui64, "Online_VideoStreaming::SetupVideoTexture");
    *imageTextureData = v19;
    memset_0(v19, 0, SizeBytes);
  }
  Image_AllocInPlace(image, "$online_video_texture", IMG_CATEGORY_TEMP, TS_COLOR_MAP);
  params.customAllocFunc = lambda_bd9a318162064e89d47e8e5af4f673f1_::_lambda_invoker_cdecl_;
  params.customAllocUserData = *imageTextureData;
  params.customLayout = &layout;
  Image_Setup(image, &params);
  m_vidStreamLogEnabled = v18->m_vidStreamLogEnabled;
  if ( m_vidStreamLogEnabled )
  {
    if ( m_vidStreamLogEnabled->current.integer > 1 )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rcx
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vdivss  xmm1, xmm1, xmm0
        vcvtss2sd xmm2, xmm1, xmm1
        vmovsd  [rsp+1860h+var_1830], xmm2
      }
      LODWORD(v28) = *rawMediaSize;
      LODWORD(fmt) = height;
      Com_Printf(25, "[OnlineVidStreaming] SetupVideoTexture %s {%u x %u} - %u bytes {bpp = %f}\n", name, width, fmt, v28, v29);
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
  ID3D12Resource *v30; 
  HRESULT v31; 
  const char *v32; 
  GfxTextureId v33; 
  const GfxTexture *Resident; 
  const GfxTexture *v35; 
  GfxDevice *device; 
  ID3D12Resource *v37; 
  unsigned int v38; 
  GfxDevice *v39; 
  const GfxTexture *v40; 
  const GfxTexture *v41; 
  __int64 v42; 
  unsigned int v43; 
  __int64 v44; 
  ID3D11Resource *v45; 
  int v46; 
  ID3D12DeviceChild *resource; 
  unsigned int rawMediaSize; 
  __m256i v49; 
  _QWORD v50[3]; 
  __int64 v51; 
  __int64 v52; 
  int v53; 
  unsigned int v54; 
  ID3D12Resource *basemap; 
  int v56; 
  int v57; 
  int v58[2]; 
  unsigned int val; 
  unsigned int v60; 
  __int64 v61; 
  int v62; 
  __int64 v63; 
  int v64; 
  unsigned int v65; 
  unsigned int m_videoHeight; 
  int v67; 
  __m256i v68; 

  v2 = this->m_renderFrameIndex + 1;
  v46 = 0;
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
  v10->GetBufferCount(v10, (unsigned int *)&v46);
  if ( v46 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1380, ASSERT_TYPE_ASSERT, "(bufferCount == 1)", (const char *)&queryFormat, "bufferCount == 1") )
    __debugbreak();
  v12 = v11->GetBufferByIndex(v11, 0, (IMFMediaBuffer **)&v42);
  if ( v12 < 0 )
  {
    Com_PrintError(8, "[OnlineVidStreaming] UpdateVideoStreamingTexture_Copy_GPU: GetBufferByIndex failed with HRESULT %x.\n", (unsigned int)v12);
    v11->Release(v11);
    return 0i64;
  }
  v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v42)(v42, &GUID_e7174cfa_1c9e_48b1_8866_626226bfc258, &v44);
  if ( v14 < 0 )
  {
    Com_PrintError(8, "[OnlineVidStreaming] UpdateVideoStreamingTexture_Copy_GPU: QueryInterface failed with HRESULT %x.\n", (unsigned int)v14);
LABEL_18:
    if ( v42 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16i64))(v42);
      v42 = 0i64;
    }
    v11->Release(v11);
    return 0i64;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, GUID *, ID3D11Resource **))(*(_QWORD *)v44 + 24i64))(v44, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v45);
  if ( v15 < 0 )
  {
    Com_PrintError(8, "[OnlineVidStreaming] UpdateVideoStreamingTexture_Copy_GPU: GetResource failed with HRESULT %x.\n", (unsigned int)v15);
    if ( v44 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16i64))(v44);
      v44 = 0i64;
    }
    goto LABEL_18;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v44 + 32i64))(v44, &v43);
  if ( v16 < 0 )
  {
    Com_PrintError(8, "[OnlineVidStreaming] UpdateVideoStreamingTexture_Copy_GPU: GetSubresourceIndex failed with HRESULT %x.\n", (unsigned int)v16);
    if ( v44 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16i64))(v44);
      v44 = 0i64;
    }
    if ( v45 )
    {
      v45->m_pFunction->Release(v45);
      v45 = NULL;
    }
    goto LABEL_18;
  }
  ((void (__fastcall *)(ID3D11Resource *, int *))v45->m_pFunction[4].AddRef)(v45, v58);
  if ( (_DWORD)v61 != 103 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1421, ASSERT_TYPE_ASSERT, "(textureDesc.Format == DXGI_FORMAT_NV12)", (const char *)&queryFormat, "textureDesc.Format == DXGI_FORMAT_NV12") )
    __debugbreak();
  g_dx.d3d11LimitedDeviceContext->m_Function.Map(g_dx.d3d11LimitedDeviceContext, v45, 0, D3D11_MAP_READ, 0x200000u, (D3D11_MAPPED_SUBRESOURCE *)&v51);
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
  v49.m256i_i16[14] = truncate_cast<unsigned short,unsigned int>(v60);
  v49.m256i_i64[2] = (unsigned int)v58[0];
  v50[0] = v61;
  v49.m256i_i32[6] = v58[1];
  *(_QWORD *)((char *)&v50[1] + 4) = 0i64;
  v49.m256i_i32[0] = 3;
  v49.m256i_i64[1] = 0i64;
  v49.m256i_i16[15] = v26;
  __asm
  {
    vmovups ymm0, [rbp+0F0h+var_168]
    vmovups [rbp+0F0h+var_70], ymm0
    vmovsd  xmm0, qword ptr [rbp+0F0h+var_148+10h]
  }
  LODWORD(v50[1]) = v62;
  __asm
  {
    vmovups xmm1, xmmword ptr [rbp+0F0h+var_148]
    vmovsd  [rbp+0F0h+var_40], xmm0
    vmovups [rbp+0F0h+var_50], xmm1
  }
  v30 = (ID3D12Resource *)*((_QWORD *)v18 + 337);
  if ( v30 )
  {
    *((_QWORD *)v18 + 337) = 0i64;
    R_ReleaseAndSetNULL<ID3D12Resource>(v30, "dstFrame->sampleNV12Image", "c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 1459);
  }
  v31 = ((__int64 (__fastcall *)(ID3D12Device *, __int64, __m256i *, __int64, _QWORD, GUID *, ID3D12DeviceChild **))g_dx.d3d12device->m_pFunction[14].Release)(g_dx.d3d12device, v51, &v68, 2048i64, 0i64, &GUID_696442be_a72e_4059_bc79_5b5c98040fad, &resource);
  if ( v31 < 0 )
  {
    v32 = R_ErrorDescription(v31);
    Sys_Error((const ObfuscateErrorText)&stru_14436DF60, 307i64, v32);
  }
  PIXSetDebugName(resource, "MF_NV12_Sample");
  v33 = *((_DWORD *)v18 + 554);
  *((_QWORD *)v18 + 337) = resource;
  Resident = R_Texture_GetResident(v33);
  R_HW_AddResourceTransition(cmdBufState, Resident, 0, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v35 = R_Texture_GetResident((GfxTextureId)*((_DWORD *)v18 + 612));
  R_HW_AddResourceTransition(cmdBufState, v35, 0, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(cmdBufState);
  basemap = R_Texture_GetResident((GfxTextureId)*((_DWORD *)v18 + 554))->basemap;
  device = cmdBufState->device;
  v56 = 0;
  v57 = 0;
  v52 = *((_QWORD *)v18 + 337);
  v53 = 0;
  v63 = 0i64;
  v64 = 0;
  v54 = v43 * val;
  m_videoHeight = this->m_videoHeight;
  v65 = this->m_videoWidth;
  v67 = 1;
  ((void (__fastcall *)(GfxDevice *, ID3D12Resource **, _QWORD, _QWORD, _DWORD, __int64 *, __int64 *, _DWORD))device->m_pFunction[27].Release)(device, &basemap, 0i64, 0i64, 0, &v52, &v63, 0);
  v54 = val * (v43 + v60);
  v37 = R_Texture_GetResident((GfxTextureId)*((_DWORD *)v18 + 612))->basemap;
  m_videoHeight = this->m_videoHeight >> 1;
  v38 = this->m_videoWidth >> 1;
  basemap = v37;
  v39 = cmdBufState->device;
  v65 = v38;
  ((void (__fastcall *)(GfxDevice *, ID3D12Resource **, _QWORD, _QWORD, _DWORD, __int64 *, __int64 *, _DWORD))v39->m_pFunction[27].Release)(v39, &basemap, 0i64, 0i64, 0, &v52, &v63, 0);
  v40 = R_Texture_GetResident((GfxTextureId)*((_DWORD *)v18 + 554));
  R_HW_AddResourceTransition(cmdBufState, v40, 0, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v41 = R_Texture_GetResident((GfxTextureId)*((_DWORD *)v18 + 612));
  R_HW_AddResourceTransition(cmdBufState, v41, 0, D3D12_RESOURCE_STATE_COPY_DEST, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(cmdBufState);
  g_dx.d3d11LimitedDeviceContext->m_Function.Unmap(g_dx.d3d11LimitedDeviceContext, v45, v43);
  result = (Online_VideoStreaming::RenderFrameData *)(v18 + 2200);
  *((_QWORD *)v18 + 336) = v44;
  *((_QWORD *)v18 + 333) = v42;
  *((_QWORD *)v18 + 334) = v11;
  *((_QWORD *)v18 + 335) = v45;
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
  void **v7; 
  unsigned __int8 v8; 
  __int64 v9; 
  unsigned int v13; 
  Online_VideoStreaming *Instance; 
  volatile int *p_frameCount; 
  __int64 audioReadFrame; 
  __int64 v18; 
  int numChannels; 
  unsigned int v24; 
  __int64 result; 
  _BYTE v30[128]; 
  char v31; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups ymm1, ymmword ptr [rcx+20h]
    vmovups [rsp+0E8h+var_B8], ymm0
    vmovups ymm0, ymmword ptr [rcx+40h]
    vmovups [rsp+0E8h+var_98], ymm1
    vmovups ymm1, ymmword ptr [rcx+60h]
    vmovups ymmword ptr [rax-78h], ymm0
    vmovups ymmword ptr [rax-58h], ymm1
    vmovaps xmmword ptr [rax-38h], xmm6
  }
  v7 = (void **)v30;
  v8 = 0;
  v9 = 16i64;
  do
  {
    memset_0(*v7++, 0, 0x400ui64);
    --v9;
  }
  while ( v9 );
  _R12 = *(_QWORD *)v30;
  _R13 = *(_QWORD *)&v30[8];
  __asm { vmovss  xmm6, cs:__real@3f004dce }
  v13 = 0;
  Instance = Online_VideoStreaming::GetInstance();
  p_frameCount = &Instance->m_audioData.frameCount;
  _R14 = 0i64;
  do
  {
    if ( !*p_frameCount )
      break;
    audioReadFrame = Instance->m_audioData.audioReadFrame;
    v18 = audioReadFrame;
    numChannels = Instance->m_audioData.decodedAudioData[audioReadFrame].numChannels;
    if ( numChannels == 1 )
    {
      _RCX = Instance->m_audioData.decodedAudioData[audioReadFrame].consumed;
      _RAX = Instance->m_audioData.decodedAudioData[audioReadFrame].buffer;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+rcx*4]
        vmulss  xmm1, xmm0, xmm6
        vmovss  dword ptr [r14+r12], xmm1
      }
    }
    else
    {
      v24 = (Instance->m_audioData.decodedAudioData[audioReadFrame].sampleCount + 3) & 0xFFFFFFFC;
      if ( 4i64 * (int)(v24 * numChannels) > (unsigned __int64)Instance->m_audioData.decodedAudioData[audioReadFrame].bufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\videostreaming\\xb3\\online_videostreaming_xb3.cpp", 427, ASSERT_TYPE_ASSERT, "(rightOffset * currentDecodeFrame->numChannels * sizeof( float ) <= currentDecodeFrame->bufferSize)", (const char *)&queryFormat, "rightOffset * currentDecodeFrame->numChannels * sizeof( float ) <= currentDecodeFrame->bufferSize") )
        __debugbreak();
      *(float *)(_R14 + _R12) = Instance->m_audioData.decodedAudioData[v18].buffer[Instance->m_audioData.decodedAudioData[v18].consumed];
      _RAX = Instance->m_audioData.decodedAudioData[v18].buffer;
      _RDX = (int)(v24 + Instance->m_audioData.decodedAudioData[v18].consumed);
      __asm { vmovss  xmm1, dword ptr [rax+rdx*4] }
    }
    __asm { vmovss  dword ptr [r14+r13], xmm1 }
    if ( ++Instance->m_audioData.decodedAudioData[v18].consumed >= Instance->m_audioData.decodedAudioData[v18].sampleCount )
    {
      Instance->m_audioData.audioReadFrame = (Instance->m_audioData.audioReadFrame + 1) % 6;
      if ( ((unsigned __int8)p_frameCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_frameCount) )
        __debugbreak();
      _InterlockedDecrement(p_frameCount);
    }
    ++v13;
    _R14 += 4i64;
    v8 = 1;
  }
  while ( v13 < 0x100 );
  _R11 = &v31;
  result = v8;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return result;
}

