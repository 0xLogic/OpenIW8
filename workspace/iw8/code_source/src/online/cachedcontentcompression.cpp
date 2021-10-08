/*
==============
CachedContentCompressor::GetInstance
==============
*/

CachedContentCompressor *__fastcall CachedContentCompressor::GetInstance()
{
  return ?GetInstance@CachedContentCompressor@@SAAEAV1@XZ();
}

/*
==============
CachedContentCompressor::GetInstancePtr
==============
*/

CachedContentCompressor *__fastcall CachedContentCompressor::GetInstancePtr()
{
  return ?GetInstancePtr@CachedContentCompressor@@SAPEAV1@XZ();
}

/*
==============
CachedContentCompressor::InflateStream
==============
*/

bool __fastcall CachedContentCompressor::InflateStream(CachedContentCompressor *this, CachedContentIOStreamBase *fromStream, CachedContentIOStreamBase *toStream)
{
  return ?InflateStream@CachedContentCompressor@@QEAA_NPEAVCachedContentIOStreamBase@@0@Z(this, fromStream, toStream);
}

/*
==============
CachedContentCompressor::Init
==============
*/

void __fastcall CachedContentCompressor::Init(CachedContentCompressor *this)
{
  ?Init@CachedContentCompressor@@QEAAXXZ(this);
}

/*
==============
CachedContentCompressor::InflateBuffer
==============
*/

bool __fastcall CachedContentCompressor::InflateBuffer(CachedContentCompressor *this, unsigned __int8 *inData, unsigned int *inSize, unsigned __int8 *outData, unsigned int *outSize, bool *endStream)
{
  return ?InflateBuffer@CachedContentCompressor@@QEAA_NPEAEPEAI01PEA_N@Z(this, inData, inSize, outData, outSize, endStream);
}

/*
==============
CachedContentCompressor::CachedContentCompressor
==============
*/

void __fastcall CachedContentCompressor::CachedContentCompressor(CachedContentCompressor *this)
{
  ??0CachedContentCompressor@@AEAA@XZ(this);
}

/*
==============
CachedContentCompressor::InflateEnd
==============
*/

bool __fastcall CachedContentCompressor::InflateEnd(CachedContentCompressor *this)
{
  return ?InflateEnd@CachedContentCompressor@@QEAA_NXZ(this);
}

/*
==============
CachedContentCompressor::InflateInit
==============
*/

bool __fastcall CachedContentCompressor::InflateInit(CachedContentCompressor *this)
{
  return ?InflateInit@CachedContentCompressor@@QEAA_NXZ(this);
}

/*
==============
CachedContentCompressor::CachedContentCompressor
==============
*/
void CachedContentCompressor::CachedContentCompressor(CachedContentCompressor *this)
{
  this->m_initialize = 0;
  this->__vftable = (CachedContentCompressor_vtbl *)&CachedContentCompressor::`vftable';
}

/*
==============
CachedContentCompressor::GetInstance
==============
*/
CachedContentCompressor *CachedContentCompressor::GetInstance()
{
  CachedContentCompressor *result; 

  result = &CachedContentCompressor::s_instance;
  if ( !CachedContentCompressor::s_instance.m_initialize )
    *(_WORD *)&CachedContentCompressor::s_instance.m_initialize = 1;
  return result;
}

/*
==============
CachedContentCompressor::GetInstancePtr
==============
*/
CachedContentCompressor *CachedContentCompressor::GetInstancePtr()
{
  CachedContentCompressor *result; 

  result = &CachedContentCompressor::s_instance;
  if ( !CachedContentCompressor::s_instance.m_initialize )
    *(_WORD *)&CachedContentCompressor::s_instance.m_initialize = 1;
  return result;
}

/*
==============
CachedContentCompressor::InflateBuffer
==============
*/
char CachedContentCompressor::InflateBuffer(CachedContentCompressor *this, unsigned __int8 *inData, unsigned int *inSize, unsigned __int8 *outData, unsigned int *outSize, bool *endStream)
{
  Online_CachedContentStreamer *Instance; 
  const char *v11; 
  Online_CachedContentStreamer *v12; 
  const char *v13; 
  Online_ErrorReporting *InstancePtr; 
  const char *v15; 
  Online_ErrorReporting *v16; 
  unsigned int v17; 
  unsigned int v18; 
  Online_CachedContentStreamer *v19; 
  const char *v20; 
  Online_CachedContentStreamer *v22; 
  const char *v23; 
  Online_ErrorReporting *v24; 
  char *fmt; 

  Instance = Online_CachedContentStreamer::GetInstance();
  v11 = j_va("CachedContentCompressor::Inflate: START: inAvail:%d, outSize:%d, endStream:%d \n", *inSize, *outSize, *endStream);
  if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || Instance->ShowLogOutput(Instance) )
    Com_Printf(25, "%s: %s", Instance->m_name, v11);
  if ( !this->m_inUseInflate )
  {
    v12 = Online_CachedContentStreamer::GetInstance();
    v13 = j_va("CachedContentCompressor::Inflate: Error not initialized.\n");
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || v12->ShowLogOutput(v12) )
      Com_Printf(25, "%s: %s", v12->m_name, v13);
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    v15 = NULL;
    v16 = InstancePtr;
LABEL_21:
    Online_ErrorReporting::ReportError(v16, MOVEMENT, v15);
    return 0;
  }
  v17 = *inSize;
  this->m_StateInflate.next_in = inData;
  this->m_StateInflate.avail_in = v17;
  this->m_StateInflate.avail_out = *outSize;
  this->m_StateInflate.next_out = outData;
  v18 = j_inflate_0(&this->m_StateInflate, 0);
  if ( v18 == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentcompression.cpp", 303, ASSERT_TYPE_ASSERT, "( ret ) != ( (-2) )", "%s != %s\n\t%i, %i", "ret", "Z_STREAM_ERROR", -2, -2) )
    __debugbreak();
  if ( v18 > 1 )
  {
    v22 = Online_CachedContentStreamer::GetInstance();
    v23 = j_va("CachedContentCompressor::Inflate: Error %d encountered.\n", v18);
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || v22->ShowLogOutput(v22) )
      Com_Printf(25, "%s: %s", v22->m_name, v23);
    v24 = Online_ErrorReporting::GetInstancePtr();
    v15 = j_va("%d", v18);
    v16 = v24;
    goto LABEL_21;
  }
  *inSize = this->m_StateInflate.avail_in;
  *outSize -= this->m_StateInflate.avail_out;
  *endStream = v18 == 1;
  v19 = Online_CachedContentStreamer::GetInstance();
  LODWORD(fmt) = v18;
  v20 = j_va("CachedContentCompressor::Inflate: END: inSize:%d, outSize:%d, endStream:%d, retVal:%d \n", *inSize, *outSize, *endStream, fmt);
  if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || v19->ShowLogOutput(v19) )
    Com_Printf(25, "%s: %s", v19->m_name, v20);
  return 1;
}

/*
==============
CachedContentCompressor::InflateEnd
==============
*/
bool CachedContentCompressor::InflateEnd(CachedContentCompressor *this)
{
  Online_CachedContentStreamer *Instance; 
  const char *v3; 
  bool result; 

  Instance = Online_CachedContentStreamer::GetInstance();
  v3 = j_va("CachedContentCompressor::InflateEnd: ended inflate.\n");
  if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || Instance->ShowLogOutput(Instance) )
    Com_Printf(25, "%s: %s", Instance->m_name, v3);
  j_inflateEnd_0(&this->m_StateInflate);
  j_Zip_ShutdownThreadMemory(&this->m_StateInflate);
  memset_0(&this->m_StateInflate, 0, sizeof(this->m_StateInflate));
  result = 1;
  this->m_inUseInflate = 0;
  return result;
}

/*
==============
CachedContentCompressor::InflateInit
==============
*/
char CachedContentCompressor::InflateInit(CachedContentCompressor *this)
{
  Online_CachedContentStreamer *Instance; 
  const char *v3; 
  Online_ErrorReporting *InstancePtr; 

  Instance = Online_CachedContentStreamer::GetInstance();
  v3 = j_va("CachedContentCompressor::InflateInit: Initialized inflate.\n");
  if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || Instance->ShowLogOutput(Instance) )
    Com_Printf(25, "%s: %s", Instance->m_name, v3);
  this->m_StateInflate.zalloc = NULL;
  this->m_StateInflate.zfree = NULL;
  this->m_StateInflate.opaque = NULL;
  this->m_StateInflate.avail_in = 0;
  this->m_StateInflate.next_in = NULL;
  j_Zip_InitThreadMemory(&this->m_StateInflate, g_zipMemoryCachedContent, 393216);
  if ( j_inflateInit_(&this->m_StateInflate, "1.2.8", 88) )
  {
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, NULL);
    return 0;
  }
  else
  {
    this->m_inUseInflate = 1;
    return 1;
  }
}

/*
==============
CachedContentCompressor::InflateStream
==============
*/
__int64 CachedContentCompressor::InflateStream(CachedContentCompressor *this, CachedContentIOStreamBase *fromStream, CachedContentIOStreamBase *toStream)
{
  char *m_ptr; 
  Online_CachedContentStreamer *Instance; 
  const char *v8; 
  Online_ErrorReporting *InstancePtr; 
  Online_CachedContentStreamer *v10; 
  const char *v11; 
  Online_CachedContentStreamer *v12; 
  const char *v13; 
  Online_CachedContentStreamer *v14; 
  const char *v15; 
  unsigned int v16; 
  Online_ErrorReporting *v17; 
  unsigned int v18; 
  unsigned __int8 *v19; 
  unsigned int v20; 
  Online_CachedContentStreamer *v21; 
  const char *v22; 
  unsigned __int8 v23; 
  Online_CachedContentStreamer *v24; 
  const char *v25; 
  Online_CachedContentStreamer *v26; 
  const char *v27; 
  __int64 v29; 
  __int64 v30; 
  unsigned int outSize; 
  char v32[4]; 
  unsigned __int8 *outData; 
  __int64 v34; 
  Mem_LargeLocal v35; 
  Mem_LargeLocal inData[3]; 
  bool endStream; 
  unsigned int inSize; 

  v34 = -2i64;
  Mem_LargeLocal::Mem_LargeLocal(inData, 0x20000ui64, "compressionBlock_t compressorInputBuffer");
  m_ptr = (char *)inData[0].m_ptr;
  Mem_LargeLocal::Mem_LargeLocal(&v35, 0x20000ui64, "compressionBlock_t compressorOutputBuffer");
  outData = (unsigned __int8 *)v35.m_ptr;
  if ( !fromStream )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentcompression.cpp", 355, ASSERT_TYPE_ASSERT, "(fromStream)", (const char *)&queryFormat, "fromStream") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentcompression.cpp", 356, ASSERT_TYPE_ASSERT, "(fromStream)", (const char *)&queryFormat, "fromStream") )
      __debugbreak();
  }
  if ( !fromStream->IsValid(fromStream, CCIOSModeRead) )
  {
    Instance = Online_CachedContentStreamer::GetInstance();
    v8 = j_va("CachedContentCompressor::InflateStream: invalid input stream.\n");
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || Instance->ShowLogOutput(Instance) )
      Com_Printf(25, "%s: %s", Instance->m_name, v8);
LABEL_10:
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
LABEL_50:
    Online_ErrorReporting::ReportError(InstancePtr, MOVEMENT, NULL);
    v23 = 0;
    goto LABEL_51;
  }
  if ( !toStream->IsValid(toStream, CCIOSModeWrite) )
  {
    v10 = Online_CachedContentStreamer::GetInstance();
    v11 = j_va("CachedContentCompressor::InflateStream: invalid output stream.\n");
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || v10->ShowLogOutput(v10) )
      Com_Printf(25, "%s: %s", v10->m_name, v11);
    goto LABEL_10;
  }
  if ( !fromStream->Size(fromStream, (unsigned int *)v32) )
  {
    v12 = Online_CachedContentStreamer::GetInstance();
    v13 = j_va("CachedContentCompressor::InflateStream: failed to get input stream size \n");
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || v12->ShowLogOutput(v12) )
      Com_Printf(25, "%s: %s", v12->m_name, v13);
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    goto LABEL_50;
  }
  v14 = Online_CachedContentStreamer::GetInstance();
  v15 = j_va("CachedContentCompressor::InflateInit: Initialized inflate.\n");
  if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || v14->ShowLogOutput(v14) )
    Com_Printf(25, "%s: %s", v14->m_name, v15);
  v16 = 0;
  this->m_StateInflate.zalloc = NULL;
  this->m_StateInflate.zfree = NULL;
  this->m_StateInflate.opaque = NULL;
  this->m_StateInflate.avail_in = 0;
  this->m_StateInflate.next_in = NULL;
  j_Zip_InitThreadMemory(&this->m_StateInflate, g_zipMemoryCachedContent, 393216);
  if ( j_inflateInit_(&this->m_StateInflate, "1.2.8", 88) )
  {
    v17 = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(v17, MOVEMENT, NULL);
  }
  else
  {
    this->m_inUseInflate = 1;
  }
  endStream = 0;
  v18 = 0;
  while ( 1 )
  {
    if ( v16 )
    {
      if ( v18 < v16 )
      {
        LODWORD(v30) = v16;
        LODWORD(v29) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\cachedcontentcompression.cpp", 396, ASSERT_TYPE_ASSERT, "( prevInputAvail ) >= ( inputAvail )", "%s >= %s\n\t%i, %i", "prevInputAvail", "inputAvail", v29, v30) )
          __debugbreak();
      }
      memcpy_0(m_ptr, &m_ptr[v18 - v16], v16);
      inSize = fromStream->Read(fromStream, (unsigned __int8 *)&m_ptr[v16], 0x20000 - v16) + v16;
      v18 = inSize;
    }
    else
    {
      v18 = fromStream->Read(fromStream, (unsigned __int8 *)m_ptr, 0x20000i64);
      inSize = v18;
    }
    outSize = 0x20000;
    v19 = outData;
    if ( !CachedContentCompressor::InflateBuffer(this, (unsigned __int8 *)m_ptr, &inSize, outData, &outSize, &endStream) )
    {
      v26 = Online_CachedContentStreamer::GetInstance();
      v27 = j_va("CachedContentCompressor::InflateStream:  error while inflating. \n");
      if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || v26->ShowLogOutput(v26) )
        Com_Printf(25, "%s: %s", v26->m_name, v27);
      goto LABEL_49;
    }
    v20 = toStream->Write(toStream, v19, outSize);
    if ( v20 != outSize )
    {
      v24 = Online_CachedContentStreamer::GetInstance();
      v25 = j_va("CachedContentCompressor::InflateStream: failed to write all of output. \n");
      if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || v24->ShowLogOutput(v24) )
        Com_Printf(25, "%s: %s", v24->m_name, v25);
LABEL_49:
      InstancePtr = Online_ErrorReporting::GetInstancePtr();
      goto LABEL_50;
    }
    if ( endStream )
      break;
    v16 = inSize;
  }
  v21 = Online_CachedContentStreamer::GetInstance();
  v22 = j_va("CachedContentCompressor::InflateEnd: ended inflate.\n");
  if ( Dvar_GetInt_Internal_DebugName(DVARINT_onlineSystemDebugAll, "onlineSystemDebugAll") || v21->ShowLogOutput(v21) )
    Com_Printf(25, "%s: %s", v21->m_name, v22);
  j_inflateEnd_0(&this->m_StateInflate);
  j_Zip_ShutdownThreadMemory(&this->m_StateInflate);
  memset_0(&this->m_StateInflate, 0, sizeof(this->m_StateInflate));
  this->m_inUseInflate = 0;
  v23 = 1;
LABEL_51:
  Mem_LargeLocal::~Mem_LargeLocal(&v35);
  Mem_LargeLocal::~Mem_LargeLocal(inData);
  return v23;
}

/*
==============
CachedContentCompressor::Init
==============
*/
void CachedContentCompressor::Init(CachedContentCompressor *this)
{
  *(_WORD *)&this->m_initialize = 1;
}

