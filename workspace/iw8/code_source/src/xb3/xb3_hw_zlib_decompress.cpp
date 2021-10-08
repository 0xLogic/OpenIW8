/*
==============
XB3_HwZlib_Init
==============
*/

void XB3_HwZlib_Init(void)
{
  ?XB3_HwZlib_Init@@YAXXZ();
}

/*
==============
XB3_HwZlib_IsDecompressAsyncDone
==============
*/

bool __fastcall XB3_HwZlib_IsDecompressAsyncDone(XB3_HwZlib_Context *context)
{
  return ?XB3_HwZlib_IsDecompressAsyncDone@@YA_NAEAUXB3_HwZlib_Context@@@Z(context);
}

/*
==============
XB3_HwZlib_DecompressAsync
==============
*/

void __fastcall XB3_HwZlib_DecompressAsync(XB3_HwZlib_Context *context, const void *in, unsigned __int64 inSize, void *out)
{
  ?XB3_HwZlib_DecompressAsync@@YAXAEAUXB3_HwZlib_Context@@PEBX_KPEAX@Z(context, in, inSize, out);
}

/*
==============
XB3_HwZlib_Decompress
==============
*/

unsigned int __fastcall XB3_HwZlib_Decompress(const void *in, unsigned __int64 inSize, void *out)
{
  return ?XB3_HwZlib_Decompress@@YAIPEBX_KPEAX@Z(in, inSize, out);
}

/*
==============
XB3_HwZlib_Suspend
==============
*/

void XB3_HwZlib_Suspend(void)
{
  ?XB3_HwZlib_Suspend@@YAXXZ();
}

/*
==============
XB3_HwZlib_WaitAndFinishDecompressAsync
==============
*/

unsigned int __fastcall XB3_HwZlib_WaitAndFinishDecompressAsync(XB3_HwZlib_Context *context)
{
  return ?XB3_HwZlib_WaitAndFinishDecompressAsync@@YAIAEAUXB3_HwZlib_Context@@@Z(context);
}

/*
==============
XB3_HwZlib_GetStatus
==============
*/

void __fastcall XB3_HwZlib_GetStatus(bool *outBusy, bool *outTitleSuspended)
{
  ?XB3_HwZlib_GetStatus@@YAXPEA_N0@Z(outBusy, outTitleSuspended);
}

/*
==============
XB3_HwZlib_Resume
==============
*/

void XB3_HwZlib_Resume(void)
{
  ?XB3_HwZlib_Resume@@YAXXZ();
}

/*
==============
XB3_HwZlib_Decompress
==============
*/
__int64 XB3_HwZlib_Decompress(const void *in, unsigned __int64 inSize, void *out)
{
  __int64 dmaErrorCodeIndex; 
  __int64 v5; 
  __int64 v6; 
  volatile int dma2DecompressCount; 
  XB3_HwZlib_Context context; 

  XB3_HwZlib_DecompressAsync(&context, in, inSize, out);
  if ( s_xb3HwZlibGlob.dma2DecompressCount <= 0 )
  {
    dma2DecompressCount = s_xb3HwZlibGlob.dma2DecompressCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_hw_zlib_decompress.cpp", 90, ASSERT_TYPE_ASSERT, "( s_xb3HwZlibGlob.dma2DecompressCount ) > ( 0 )", "%s > %s\n\t%i, %i", "s_xb3HwZlibGlob.dma2DecompressCount", "0", dma2DecompressCount, 0i64) )
      __debugbreak();
  }
  if ( R_CopyCommandListFencePending(&context.fence) )
  {
    ProfLoad_DB_Begin("LZDecompressMemory Wait");
    R_WaitCopyCommandListFence(context.fence);
    ProfLoad_DB_End();
  }
  if ( ((unsigned __int8)&s_xb3HwZlibGlob.dma2DecompressCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_xb3HwZlibGlob.dma2DecompressCount) )
    __debugbreak();
  _InterlockedDecrement(&s_xb3HwZlibGlob.dma2DecompressCount);
  if ( context.dmaErrorCodeIndex < 0x4000 )
  {
    dmaErrorCodeIndex = context.dmaErrorCodeIndex;
  }
  else
  {
    LODWORD(v6) = 0x4000;
    LODWORD(v5) = context.dmaErrorCodeIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_hw_zlib_decompress.cpp", 101, ASSERT_TYPE_ASSERT, "(unsigned)( context.dmaErrorCodeIndex ) < (unsigned)( XB3_HWZLIB_DMA_ERROR_CODE_COUNT )", "context.dmaErrorCodeIndex doesn't index XB3_HWZLIB_DMA_ERROR_CODE_COUNT\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
    dmaErrorCodeIndex = context.dmaErrorCodeIndex;
  }
  return s_xb3HwZlibGlob.dmaErrorCodes[dmaErrorCodeIndex];
}

/*
==============
XB3_HwZlib_DecompressAsync
==============
*/
void XB3_HwZlib_DecompressAsync(XB3_HwZlib_Context *context, const void *in, unsigned __int64 inSize, void *out)
{
  const char *v8; 
  const char *v9; 
  int v10; 
  unsigned __int32 v11; 
  unsigned int dmaErrorCodeNextIndex; 
  HRESULT v14; 
  const char *v15; 
  __int128 v16; 

  _R14 = context;
  if ( !in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_hw_zlib_decompress.cpp", 39, ASSERT_TYPE_ASSERT, "(in)", (const char *)&queryFormat, "in") )
    __debugbreak();
  if ( !out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_hw_zlib_decompress.cpp", 40, ASSERT_TYPE_ASSERT, "(out)", (const char *)&queryFormat, "out") )
    __debugbreak();
  if ( ((unsigned __int8)in & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_hw_zlib_decompress.cpp", 41, ASSERT_TYPE_ASSERT, "(IsAligned( in, 4 ))", (const char *)&queryFormat, "IsAligned( in, 4 )") )
    __debugbreak();
  if ( ((unsigned __int8)out & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_hw_zlib_decompress.cpp", 42, ASSERT_TYPE_ASSERT, "(IsAligned( out, 4 ))", (const char *)&queryFormat, "IsAligned( out, 4 )") )
    __debugbreak();
  if ( inSize )
  {
    if ( inSize <= 0x400000 )
      goto LABEL_19;
    v8 = "inSize <= 4 * MB";
    v10 = 44;
    v9 = "(inSize <= 4 * MB)";
  }
  else
  {
    v8 = "inSize";
    v9 = "(inSize)";
    v10 = 43;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_hw_zlib_decompress.cpp", v10, ASSERT_TYPE_ASSERT, v9, (const char *)&queryFormat, v8) )
    __debugbreak();
LABEL_19:
  while ( s_xb3HwZlibGlob.titleSuspended )
    _mm_pause();
  if ( ((unsigned __int8)&s_xb3HwZlibGlob.dma2DecompressCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_xb3HwZlibGlob.dma2DecompressCount) )
    __debugbreak();
  v11 = _InterlockedIncrement(&s_xb3HwZlibGlob.dma2DecompressCount);
  if ( v11 > 0x4000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_hw_zlib_decompress.cpp", 52, ASSERT_TYPE_ASSERT, "( newDecompressCount ) <= ( XB3_HWZLIB_DMA_ERROR_CODE_COUNT )", "%s <= %s\n\t%i, %i", "newDecompressCount", "XB3_HWZLIB_DMA_ERROR_CODE_COUNT", v11, 0x4000) )
    __debugbreak();
  ProfLoad_DB_Begin("LZDecompressMemory");
  Sys_EnterCriticalSection(CRITSECT_GFX_COPY_QUEUE);
  v16 = 0ui64;
  __asm
  {
    vmovups xmm0, [rsp+68h+var_18]
    vmovups xmmword ptr [r14], xmm0
  }
  dmaErrorCodeNextIndex = s_xb3HwZlibGlob.dmaErrorCodeNextIndex;
  _R14->dmaErrorCodeIndex = s_xb3HwZlibGlob.dmaErrorCodeNextIndex;
  s_xb3HwZlibGlob.dmaErrorCodes[dmaErrorCodeNextIndex] = 205;
  s_xb3HwZlibGlob.dmaErrorCodeNextIndex = (LOWORD(s_xb3HwZlibGlob.dmaErrorCodeNextIndex) + 1) & 0x3FFF;
  if ( !g_dx.copyCommandList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_hw_zlib_decompress.cpp", 65, ASSERT_TYPE_ASSERT, "(g_dx.copyCommandList)", (const char *)&queryFormat, "g_dx.copyCommandList") )
    __debugbreak();
  v14 = ((__int64 (__fastcall *)(ID3D12XboxDmaCommandList *, void *, const void *, unsigned __int64))g_dx.copyCommandList->m_pFunction[9].QueryInterface)(g_dx.copyCommandList, out, in, inSize);
  if ( v14 < 0 )
  {
    v15 = R_ErrorDescription(v14);
    Sys_Error((const ObfuscateErrorText)&stru_1441E4220, 70i64, v15);
  }
  ((void (__fastcall *)(ID3D12XboxDmaCommandList *, unsigned int *))g_dx.copyCommandList->m_pFunction[8].Release)(g_dx.copyCommandList, &s_xb3HwZlibGlob.dmaErrorCodes[_R14->dmaErrorCodeIndex]);
  _R14->fence = R_FlushCopyCommandList();
  Sys_LeaveCriticalSection(CRITSECT_GFX_COPY_QUEUE);
  ProfLoad_DB_End();
}

/*
==============
XB3_HwZlib_GetStatus
==============
*/
void XB3_HwZlib_GetStatus(bool *outBusy, bool *outTitleSuspended)
{
  if ( !outBusy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_hw_zlib_decompress.cpp", 117, ASSERT_TYPE_ASSERT, "(outBusy)", (const char *)&queryFormat, "outBusy") )
    __debugbreak();
  if ( !outTitleSuspended && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_hw_zlib_decompress.cpp", 118, ASSERT_TYPE_ASSERT, "(outTitleSuspended)", (const char *)&queryFormat, "outTitleSuspended") )
    __debugbreak();
  *outBusy = s_xb3HwZlibGlob.dma2DecompressCount > 0;
  *outTitleSuspended = s_xb3HwZlibGlob.titleSuspended;
}

/*
==============
XB3_HwZlib_Init
==============
*/
void XB3_HwZlib_Init(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_hw_zlib_decompress.cpp", 25, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_xb3HwZlibGlob.dmaErrorCodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_hw_zlib_decompress.cpp", 26, ASSERT_TYPE_ASSERT, "(s_xb3HwZlibGlob.dmaErrorCodes == nullptr)", (const char *)&queryFormat, "s_xb3HwZlibGlob.dmaErrorCodes == nullptr") )
    __debugbreak();
  s_xb3HwZlibGlob.dmaErrorCodes = (unsigned int *)VirtualAlloc(NULL, 0x10000ui64, 0x30003000u, 0x10004u);
  if ( !s_xb3HwZlibGlob.dmaErrorCodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_hw_zlib_decompress.cpp", 30, ASSERT_TYPE_ASSERT, "(s_xb3HwZlibGlob.dmaErrorCodes)", (const char *)&queryFormat, "s_xb3HwZlibGlob.dmaErrorCodes") )
    __debugbreak();
  if ( s_xb3HwZlibGlob.dmaErrorCodes >= (unsigned int *)0x10000000000i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_hw_zlib_decompress.cpp", 31, ASSERT_TYPE_ASSERT, "( reinterpret_cast<uintptr_t>( s_xb3HwZlibGlob.dmaErrorCodes ) < ( 1ull << 40 ) )", "DMA error codes need to be in GPU-addressable virtual address space!") )
    __debugbreak();
  memset_0(s_xb3HwZlibGlob.dmaErrorCodes, 205, 0x10000ui64);
}

/*
==============
XB3_HwZlib_IsDecompressAsyncDone
==============
*/
bool XB3_HwZlib_IsDecompressAsyncDone(XB3_HwZlib_Context *context)
{
  return R_CopyCommandListFencePending(&context->fence) == 0;
}

/*
==============
XB3_HwZlib_Resume
==============
*/
void XB3_HwZlib_Resume(void)
{
  XB3_HwZlib_WaitDMA2ForSuspend();
  s_xb3HwZlibGlob.titleSuspended = 0;
}

/*
==============
XB3_HwZlib_Suspend
==============
*/
void XB3_HwZlib_Suspend(void)
{
  s_xb3HwZlibGlob.titleSuspended = 1;
  XB3_HwZlib_WaitDMA2ForSuspend();
}

/*
==============
XB3_HwZlib_WaitAndFinishDecompressAsync
==============
*/
__int64 XB3_HwZlib_WaitAndFinishDecompressAsync(XB3_HwZlib_Context *context)
{
  __int64 v3; 
  __int64 v4; 
  volatile int dma2DecompressCount; 

  if ( s_xb3HwZlibGlob.dma2DecompressCount <= 0 )
  {
    dma2DecompressCount = s_xb3HwZlibGlob.dma2DecompressCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_hw_zlib_decompress.cpp", 90, ASSERT_TYPE_ASSERT, "( s_xb3HwZlibGlob.dma2DecompressCount ) > ( 0 )", "%s > %s\n\t%i, %i", "s_xb3HwZlibGlob.dma2DecompressCount", "0", dma2DecompressCount, 0i64) )
      __debugbreak();
  }
  if ( R_CopyCommandListFencePending(&context->fence) )
  {
    ProfLoad_DB_Begin("LZDecompressMemory Wait");
    R_WaitCopyCommandListFence(context->fence);
    ProfLoad_DB_End();
  }
  if ( ((unsigned __int8)&s_xb3HwZlibGlob.dma2DecompressCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_xb3HwZlibGlob.dma2DecompressCount) )
    __debugbreak();
  _InterlockedDecrement(&s_xb3HwZlibGlob.dma2DecompressCount);
  if ( context->dmaErrorCodeIndex >= 0x4000 )
  {
    LODWORD(v4) = 0x4000;
    LODWORD(v3) = context->dmaErrorCodeIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_hw_zlib_decompress.cpp", 101, ASSERT_TYPE_ASSERT, "(unsigned)( context.dmaErrorCodeIndex ) < (unsigned)( XB3_HWZLIB_DMA_ERROR_CODE_COUNT )", "context.dmaErrorCodeIndex doesn't index XB3_HWZLIB_DMA_ERROR_CODE_COUNT\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return s_xb3HwZlibGlob.dmaErrorCodes[context->dmaErrorCodeIndex];
}

/*
==============
XB3_HwZlib_WaitDMA2ForSuspend
==============
*/
__int64 XB3_HwZlib_WaitDMA2ForSuspend()
{
  __int64 result; 

  while ( 1 )
  {
    if ( ((unsigned __int64)&s_xb3HwZlibGlob.dma2DecompressCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &s_xb3HwZlibGlob.dma2DecompressCount) )
      __debugbreak();
    result = (unsigned int)s_xb3HwZlibGlob.dma2DecompressCount;
    if ( s_xb3HwZlibGlob.dma2DecompressCount <= 0 )
      break;
    Sys_Sleep(1);
  }
  return result;
}

