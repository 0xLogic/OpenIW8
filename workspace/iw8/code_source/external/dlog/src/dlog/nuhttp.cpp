/*
==============
Http_Shutdown
==============
*/

bool __fastcall Http_Shutdown()
{
  return ?Http_Shutdown@@YA_NXZ();
}

/*
==============
Http_DebugGetTotalBytesSent
==============
*/

unsigned int __fastcall Http_DebugGetTotalBytesSent()
{
  return ?Http_DebugGetTotalBytesSent@@YAIXZ();
}

/*
==============
SequentialStream::Read
==============
*/

HRESULT __fastcall SequentialStream::Read(SequentialStream *this, void *outBuffer, unsigned int outBufferSize, unsigned int *numBytesRead)
{
  return ?Read@SequentialStream@@UEAAJPEAXKPEAK@Z(this, outBuffer, outBufferSize, numBytesRead);
}

/*
==============
Http_SetVerbose
==============
*/

void __fastcall Http_SetVerbose(bool verbose)
{
  ?Http_SetVerbose@@YAX_N@Z(verbose);
}

/*
==============
XMLHTTPRequest2Callback::OnDataAvailable
==============
*/

HRESULT __fastcall XMLHTTPRequest2Callback::OnDataAvailable(XMLHTTPRequest2Callback *this, IXMLHTTPRequest2 *__formal, ISequentialStream *a3)
{
  return ?OnDataAvailable@XMLHTTPRequest2Callback@@UEAAJPEAUIXMLHTTPRequest2@@PEAUISequentialStream@@@Z(this, __formal, a3);
}

/*
==============
Http_Request
==============
*/

int __fastcall Http_Request(const char *method, const char *url, const char *headers, const void *body, unsigned __int64 bodySize, void *responseData, unsigned __int64 responseSize, int *retryAfter)
{
  return ?Http_Request@@YAHPEBD00PEBX_KPEAX2PEAH@Z(method, url, headers, body, bodySize, responseData, responseSize, retryAfter);
}

/*
==============
XMLHTTPRequest2Callback::OnError
==============
*/

HRESULT __fastcall XMLHTTPRequest2Callback::OnError(XMLHTTPRequest2Callback *this, IXMLHTTPRequest2 *__formal, HRESULT error)
{
  return ?OnError@XMLHTTPRequest2Callback@@UEAAJPEAUIXMLHTTPRequest2@@J@Z(this, __formal, error);
}

/*
==============
XMLHTTPRequest2Callback::~XMLHTTPRequest2Callback
==============
*/

void __fastcall XMLHTTPRequest2Callback::~XMLHTTPRequest2Callback(XMLHTTPRequest2Callback *this)
{
  ??1XMLHTTPRequest2Callback@@UEAA@XZ(this);
}

/*
==============
Http_Frame
==============
*/

void Http_Frame(void)
{
  ?Http_Frame@@YAXXZ();
}

/*
==============
Http_RequestAsync
==============
*/

void __fastcall Http_RequestAsync(const char *method, const char *url, const char *headers, const void *body, unsigned __int64 bodySize, void *response, unsigned __int64 responseSize, void (__fastcall *callback)(int, void *), void *userdata)
{
  ?Http_RequestAsync@@YAXPEBD00PEBX_KPEAX2P6AXH3@Z3@Z(method, url, headers, body, bodySize, response, responseSize, callback, userdata);
}

/*
==============
XMLHTTPRequest2Callback::OnResponseReceived
==============
*/

HRESULT __fastcall XMLHTTPRequest2Callback::OnResponseReceived(XMLHTTPRequest2Callback *this, IXMLHTTPRequest2 *__formal, ISequentialStream *responseStream)
{
  return ?OnResponseReceived@XMLHTTPRequest2Callback@@UEAAJPEAUIXMLHTTPRequest2@@PEAUISequentialStream@@@Z(this, __formal, responseStream);
}

/*
==============
Http_Init
==============
*/

bool __fastcall Http_Init()
{
  return ?Http_Init@@YA_NXZ();
}

/*
==============
Http_SetPrintFunction
==============
*/

void __fastcall Http_SetPrintFunction(void (__fastcall *printCallback)(const char *, char *))
{
  ?Http_SetPrintFunction@@YAXP6AXPEBDPEAD@Z@Z(printCallback);
}

/*
==============
Http_GetRequestCount
==============
*/

int __fastcall Http_GetRequestCount()
{
  return ?Http_GetRequestCount@@YAHXZ();
}

/*
==============
XMLHTTPRequest2Callback::OnHeadersAvailable
==============
*/

HRESULT __fastcall XMLHTTPRequest2Callback::OnHeadersAvailable(XMLHTTPRequest2Callback *this, IXMLHTTPRequest2 *__formal, unsigned int httpStatus, const wchar_t *a4)
{
  return ?OnHeadersAvailable@XMLHTTPRequest2Callback@@UEAAJPEAUIXMLHTTPRequest2@@KPEB_W@Z(this, __formal, httpStatus, a4);
}

/*
==============
Http_IsInitialized
==============
*/

bool __fastcall Http_IsInitialized()
{
  return ?Http_IsInitialized@@YA_NXZ();
}

/*
==============
Http_DebugResetTotalBytesSent
==============
*/

void Http_DebugResetTotalBytesSent(void)
{
  ?Http_DebugResetTotalBytesSent@@YAXXZ();
}

/*
==============
SequentialStream::Write
==============
*/

HRESULT __fastcall SequentialStream::Write(SequentialStream *this, const void *__formal, unsigned int a3, unsigned int *a4)
{
  return ?Write@SequentialStream@@UEAAJPEBXKPEAK@Z(this, __formal, a3, a4);
}

/*
==============
XMLHTTPRequest2Callback::OnRedirect
==============
*/

HRESULT __fastcall XMLHTTPRequest2Callback::OnRedirect(XMLHTTPRequest2Callback *this, IXMLHTTPRequest2 *__formal, const wchar_t *a3)
{
  return ?OnRedirect@XMLHTTPRequest2Callback@@UEAAJPEAUIXMLHTTPRequest2@@PEB_W@Z(this, __formal, a3);
}

/*
==============
Http_Print
==============
*/
void Http_Print(const char *fmt, char *vargs)
{
  DLog_Print(DLOG_PRINT_TYPE_INFO, fmt, vargs);
}

/*
==============
XMLHTTPRequest2Callback::~XMLHTTPRequest2Callback
==============
*/
void XMLHTTPRequest2Callback::~XMLHTTPRequest2Callback(XMLHTTPRequest2Callback *this)
{
  this->__vftable = (XMLHTTPRequest2Callback_vtbl *)&XMLHTTPRequest2Callback::`vftable';
  if ( !CloseHandle(this->requestCompleteSemaphore) )
    Http_Print_0("virtual ~XMLHTTPRequest2Callback() failed!\n");
  this->refcount_ = -1073741823;
}

/*
==============
Http_DebugGetTotalBytesSent
==============
*/
__int64 Http_DebugGetTotalBytesSent()
{
  return s_totalBytesSent;
}

/*
==============
Http_DebugResetTotalBytesSent
==============
*/
void Http_DebugResetTotalBytesSent(void)
{
  s_totalBytesSent = 0;
}

/*
==============
Http_Frame
==============
*/
void Http_Frame(void)
{
  __int64 perf_frequency_0; 
  __int64 perf_counter_0; 
  __int64 v2; 
  __int64 v3; 
  __int64 *p_retryTime; 
  __int64 v5; 
  unsigned int i; 
  __int64 v7; 

  EnterCriticalSection(&s_criticalSection_0);
  perf_frequency_0 = Query_perf_frequency_0();
  perf_counter_0 = Query_perf_counter_0();
  v2 = perf_counter_0 / perf_frequency_0;
  v3 = 1000000000 * (perf_counter_0 % perf_frequency_0) / perf_frequency_0;
  p_retryTime = &s_httpRequests[0].retryTime;
  v5 = v3 + 1000000000 * v2;
  for ( i = 0; i < 0x60; ++i )
  {
    if ( *((_BYTE *)p_retryTime + 8) && *p_retryTime > 0 && v5 >= *p_retryTime )
    {
      v7 = s_httpRequestQueueCount;
      *p_retryTime = 0i64;
      s_httpRequestQueue[v7] = i;
      s_httpRequestQueueCount = v7 + 1;
      WakeConditionVariable(&s_condition);
    }
    p_retryTime += 567;
  }
  LeaveCriticalSection(&s_criticalSection_0);
}

/*
==============
Http_GetRequestCount
==============
*/
__int64 Http_GetRequestCount()
{
  unsigned int v0; 
  bool *p_inUse; 
  unsigned int i; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  bool v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int v41; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned int v49; 
  unsigned int v50; 

  v0 = 0;
  p_inUse = &s_httpRequests[2].inUse;
  for ( i = 0; i < 0x60; i += 48 )
  {
    v3 = v0 + 1;
    if ( !*(p_inUse - 9072) )
      v3 = v0;
    v4 = v3 + 1;
    if ( !*(p_inUse - 4536) )
      v4 = v3;
    v5 = v4 + 1;
    if ( !*p_inUse )
      v5 = v4;
    v6 = v5 + 1;
    if ( !p_inUse[4536] )
      v6 = v5;
    v7 = v6 + 1;
    if ( !p_inUse[9072] )
      v7 = v6;
    v8 = v7 + 1;
    if ( !p_inUse[13608] )
      v8 = v7;
    v9 = v8 + 1;
    if ( !p_inUse[18144] )
      v9 = v8;
    v10 = v9 + 1;
    if ( !p_inUse[22680] )
      v10 = v9;
    v11 = v10 + 1;
    if ( !p_inUse[27216] )
      v11 = v10;
    v12 = v11 + 1;
    if ( !p_inUse[31752] )
      v12 = v11;
    v13 = v12 + 1;
    if ( !p_inUse[36288] )
      v13 = v12;
    v14 = v13 + 1;
    if ( !p_inUse[40824] )
      v14 = v13;
    v15 = v14 + 1;
    if ( !p_inUse[45360] )
      v15 = v14;
    v16 = v15 + 1;
    if ( !p_inUse[49896] )
      v16 = v15;
    v17 = v16 + 1;
    if ( !p_inUse[54432] )
      v17 = v16;
    v18 = v17 + 1;
    if ( !p_inUse[58968] )
      v18 = v17;
    v19 = v18 + 1;
    if ( !p_inUse[63504] )
      v19 = v18;
    v20 = v19 + 1;
    if ( !p_inUse[68040] )
      v20 = v19;
    v21 = v20 + 1;
    if ( !p_inUse[72576] )
      v21 = v20;
    v22 = v21 + 1;
    if ( !p_inUse[77112] )
      v22 = v21;
    v23 = v22 + 1;
    if ( !p_inUse[81648] )
      v23 = v22;
    v24 = v23 + 1;
    if ( !p_inUse[86184] )
      v24 = v23;
    v25 = v24 + 1;
    if ( !p_inUse[90720] )
      v25 = v24;
    v26 = v25 + 1;
    if ( !p_inUse[95256] )
      v26 = v25;
    v27 = v26 + 1;
    if ( !p_inUse[99792] )
      v27 = v26;
    v28 = v27 + 1;
    if ( !p_inUse[104328] )
      v28 = v27;
    v29 = v28 + 1;
    if ( !p_inUse[108864] )
      v29 = v28;
    v30 = p_inUse[113400];
    v31 = v29 + 1;
    p_inUse += 217728;
    if ( !v30 )
      v31 = v29;
    v32 = v31 + 1;
    if ( !*(p_inUse - 99792) )
      v32 = v31;
    v33 = v32 + 1;
    if ( !*(p_inUse - 95256) )
      v33 = v32;
    v34 = v33 + 1;
    if ( !*(p_inUse - 90720) )
      v34 = v33;
    v35 = v34 + 1;
    if ( !*(p_inUse - 86184) )
      v35 = v34;
    v36 = v35 + 1;
    if ( !*(p_inUse - 81648) )
      v36 = v35;
    v37 = v36 + 1;
    if ( !*(p_inUse - 77112) )
      v37 = v36;
    v38 = v37 + 1;
    if ( !*(p_inUse - 72576) )
      v38 = v37;
    v39 = v38 + 1;
    if ( !*(p_inUse - 68040) )
      v39 = v38;
    v40 = v39 + 1;
    if ( !*(p_inUse - 63504) )
      v40 = v39;
    v41 = v40 + 1;
    if ( !*(p_inUse - 58968) )
      v41 = v40;
    v42 = v41 + 1;
    if ( !*(p_inUse - 54432) )
      v42 = v41;
    v43 = v42 + 1;
    if ( !*(p_inUse - 49896) )
      v43 = v42;
    v44 = v43 + 1;
    if ( !*(p_inUse - 45360) )
      v44 = v43;
    v45 = v44 + 1;
    if ( !*(p_inUse - 40824) )
      v45 = v44;
    v46 = v45 + 1;
    if ( !*(p_inUse - 36288) )
      v46 = v45;
    v47 = v46 + 1;
    if ( !*(p_inUse - 31752) )
      v47 = v46;
    v48 = v47 + 1;
    if ( !*(p_inUse - 27216) )
      v48 = v47;
    v49 = v48 + 1;
    if ( !*(p_inUse - 22680) )
      v49 = v48;
    v50 = v49 + 1;
    if ( !*(p_inUse - 18144) )
      v50 = v49;
    v0 = v50 + 1;
    if ( !*(p_inUse - 13608) )
      v0 = v50;
  }
  return v0;
}

/*
==============
Http_Init
==============
*/
bool Http_Init()
{
  bool result; 

  InitializeConditionVariable(&s_condition);
  InitializeCriticalSection(&s_criticalSection_0);
  s_thread[0] = CreateThread(NULL, 0x4000ui64, (LPTHREAD_START_ROUTINE)Http_Thread, NULL, 0, NULL);
  result = 1;
  s_httpInitialized = 1;
  return result;
}

/*
==============
Http_IsInitialized
==============
*/
_BOOL8 Http_IsInitialized()
{
  return s_httpInitialized;
}

/*
==============
Http_Request
==============
*/
__int64 Http_Request(const char *method, const char *url, const char *headers, const void *body, unsigned __int64 bodySize, void *responseData, unsigned __int64 responseSize, int *retryAfter)
{
  unsigned int v10; 
  LPVOID v11; 
  _QWORD *v13; 
  _QWORD *v14; 
  __int64 v15; 
  LPVOID v16; 
  __int64 v17; 
  unsigned int v18; 
  __int64 v19; 
  __int64 v20; 
  LPVOID v21; 
  unsigned int v22; 
  __int64 v23; 
  __int64 v24; 
  LPVOID v25; 
  int v26; 
  const char *v27; 
  int v28; 
  const char *v29; 
  char *v30; 
  char *v31; 
  char *v32; 
  char *v33; 
  char *i; 
  char *j; 
  unsigned int v36; 
  __int64 v37; 
  __int64 v38; 
  LPVOID v39; 
  _QWORD *v40; 
  _QWORD *v41; 
  char *v42; 
  unsigned int v43; 
  __int64 v44; 
  __int64 v45; 
  LPVOID v46; 
  int *v47; 
  unsigned int v48; 
  __int64 v49; 
  __int64 v50; 
  LPVOID v51; 
  LPVOID ppv; 
  _QWORD *v53; 
  __int64 v54; 
  LPCWCH v55; 
  const char *v56; 
  _QWORD *v57; 
  LPCCH lpMultiByteStr; 
  char *v59; 
  int *v60; 
  __int64 v61; 
  LPVOID *p_ppv; 
  __int64 *v63; 
  wchar_t WideCharStr[16]; 
  char MultiByteStr[32]; 
  wchar_t v66[256]; 
  wchar_t lpWideCharStr[256]; 
  wchar_t v68[4200]; 

  v61 = -2i64;
  v59 = (char *)body;
  v60 = retryAfter;
  MultiByteToWideChar(0xFDE9u, 0, method, -1, WideCharStr, 16);
  MultiByteToWideChar(0xFDE9u, 0, url, -1, lpWideCharStr, 256);
  ppv = NULL;
  p_ppv = &ppv;
  v10 = CoCreateInstance(&GUID_88d96a09_f192_11d4_a65f_0040963251e5, NULL, 0x15u, &GUID_e5d37dc0_552a_4d52_9cc0_a14d546fbd04, &ppv);
  if ( v10 )
  {
    Http_Print_0("Http_Request CoCreateInstance failed 0x%08x\n", v10);
    v11 = ppv;
    if ( ppv )
    {
      ppv = NULL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16i64))(v11);
    }
    return 0i64;
  }
  else
  {
    v63 = (__int64 *)&v53;
    v53 = NULL;
    v13 = operator new(0x30ui64, &std::nothrow);
    v14 = v13;
    if ( v13 )
    {
      *((_DWORD *)v13 + 3) = 1;
      *v13 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IXMLHTTPRequest2Callback,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        Microsoft::WRL::Details::ModuleBase::module_->IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
      *v14 = &XMLHTTPRequest2Callback::`vftable';
      v14[5] = CreateSemaphoreExW(NULL, 0, 1, NULL, 0, 0x1F0003u);
      (*(void (__fastcall **)(_QWORD *))(*v14 + 8i64))(v14);
      v53 = v14;
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16i64))(v14);
      v17 = (__int64)v53;
      *((_DWORD *)v53 + 4) = 0;
      *(_QWORD *)(v17 + 24) = responseData;
      *(_QWORD *)(v17 + 32) = responseSize;
      v54 = 0i64;
      lpMultiByteStr = (LPCCH)&v54;
      v18 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*v53)(v53, &GUID_a44a9299_e321_40de_8866_341b41669162, &v54);
      if ( v18 )
      {
        Http_Print_0("Http_Request callback.As( &xhrCallback ) failed 0x%08x\n", v18);
        v19 = v54;
        if ( v54 )
        {
          v54 = 0i64;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16i64))(v19);
        }
        v20 = (__int64)v53;
        if ( v53 )
        {
          v53 = NULL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16i64))(v20);
        }
        v21 = ppv;
        if ( ppv )
        {
          ppv = NULL;
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v21 + 16i64))(v21);
        }
        return 0i64;
      }
      else
      {
        v22 = (*(__int64 (__fastcall **)(LPVOID, wchar_t *, wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppv + 24i64))(ppv, WideCharStr, lpWideCharStr, v54, 0i64, 0i64, 0i64, 0i64);
        if ( v22 )
        {
          Http_Print_0("Http_Request request->Open failed 0x%08x\n", v22);
          v23 = v54;
          if ( v54 )
          {
            v54 = 0i64;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16i64))(v23);
          }
          v24 = (__int64)v53;
          if ( v53 )
          {
            v53 = NULL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16i64))(v24);
          }
          v25 = ppv;
          if ( ppv )
          {
            ppv = NULL;
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v25 + 16i64))(v25);
          }
          return 0i64;
        }
        else
        {
          v26 = (int)ppv;
          v27 = lpMultiByteStr;
          v28 = (int)ppv;
          v29 = lpMultiByteStr;
          while ( 1 )
          {
            if ( *headers )
            {
              v30 = strchr_0(headers, 58);
              v31 = v30;
              if ( v30 )
              {
                v27 = v30 + 1;
                v32 = strchr_0(v30 + 1, 10);
                v33 = v32;
                if ( v32 )
                {
                  v56 = v32 + 1;
                }
                else
                {
                  v33 = strchr_0(v27, 0);
                  v56 = v33;
                }
                for ( ; isspace(*headers); ++headers )
                  ;
                for ( i = v31 - 1; isspace(*i); --i )
                  LODWORD(v31) = (_DWORD)i;
                for ( ; isspace(*v27); ++v27 )
                  ;
                for ( j = v33 - 1; isspace(*j); --j )
                  LODWORD(v33) = (_DWORD)j;
                v29 = headers;
                v28 = (_DWORD)v31 - (_DWORD)headers;
                v26 = (_DWORD)v33 - (_DWORD)v27;
                headers = v56;
              }
              else
              {
                headers = NULL;
              }
            }
            else
            {
              headers = NULL;
            }
            if ( !headers )
              break;
            memset_0(v66, 0, sizeof(v66));
            memset_0(v68, 0, 0x20C8ui64);
            MultiByteToWideChar(0xFDE9u, 0, v29, v28, v66, 256);
            MultiByteToWideChar(0xFDE9u, 0, v27, v26, v68, 4196);
            v36 = (*(__int64 (__fastcall **)(LPVOID, wchar_t *, wchar_t *))(*(_QWORD *)ppv + 72i64))(ppv, v66, v68);
            if ( v36 )
            {
              Http_Print_0("Http_Request request->SetRequestHeader failed 0x%08x\n", v36);
              v37 = v54;
              if ( v54 )
              {
                v54 = 0i64;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16i64))(v37);
              }
              v38 = (__int64)v53;
              if ( v53 )
              {
                v53 = NULL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16i64))(v38);
              }
              v39 = ppv;
              if ( ppv )
              {
                ppv = NULL;
                (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v39 + 16i64))(v39);
              }
              return 0i64;
            }
          }
          v56 = NULL;
          v40 = operator new(0x28ui64, &std::nothrow);
          v41 = v40;
          if ( v40 )
          {
            *((_DWORD *)v40 + 3) = 1;
            *v40 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISequentialStream,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              Microsoft::WRL::Details::ModuleBase::module_->IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
            *v41 = &SequentialStream::`vftable';
            v57 = v41;
          }
          else
          {
            v41 = NULL;
            v57 = NULL;
          }
          v42 = v59;
          v41[2] = v59;
          v41[4] = v42;
          v41[3] = &v42[bodySize];
          v43 = (*(__int64 (__fastcall **)(LPVOID, _QWORD *))(*(_QWORD *)ppv + 32i64))(ppv, v41);
          if ( v43 )
          {
            Http_Print_0("Http_Request request->Send failed 0x%08x\n", v43);
            (*(void (__fastcall **)(_QWORD *))(*v41 + 16i64))(v41);
            v44 = v54;
            if ( v54 )
            {
              v54 = 0i64;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16i64))(v44);
            }
            v45 = (__int64)v53;
            if ( v53 )
            {
              v53 = NULL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16i64))(v45);
            }
            v46 = ppv;
            if ( ppv )
            {
              ppv = NULL;
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v46 + 16i64))(v46);
            }
            return 0i64;
          }
          else
          {
            WaitForSingleObject((HANDLE)v53[5], 0xFFFFFFFF);
            v47 = v60;
            if ( v60 )
            {
              v55 = NULL;
              if ( !(*(unsigned int (__fastcall **)(LPVOID, const wchar_t *, LPCWCH *))(*(_QWORD *)ppv + 96i64))(ppv, L"Retry-After", &v55) )
              {
                WideCharToMultiByte(0xFDE9u, 0, v55, -1, MultiByteStr, 32, NULL, NULL);
                *v47 = atoi(MultiByteStr);
                if ( v55 )
                {
                  CoTaskMemFree((LPVOID)v55);
                  v55 = NULL;
                }
              }
            }
            v48 = *((_DWORD *)v53 + 4);
            (*(void (__fastcall **)(_QWORD *))(*v41 + 16i64))(v41);
            v49 = v54;
            if ( v54 )
            {
              v54 = 0i64;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16i64))(v49);
            }
            v50 = (__int64)v53;
            if ( v53 )
            {
              v53 = NULL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16i64))(v50);
            }
            v51 = ppv;
            if ( ppv )
            {
              ppv = NULL;
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v51 + 16i64))(v51);
            }
            return v48;
          }
        }
      }
    }
    else
    {
      Http_Print_0("Http_Request MakeAndInitialize<XMLHTTPRequest2Callback> failed 0x%08x\n", 2147942414i64);
      v15 = (__int64)v53;
      if ( v53 )
      {
        v53 = NULL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16i64))(v15);
      }
      v16 = ppv;
      if ( ppv )
      {
        ppv = NULL;
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v16 + 16i64))(v16);
      }
      return 0i64;
    }
  }
}

/*
==============
Http_RequestAsync
==============
*/
void Http_RequestAsync(const char *method, const char *url, const char *headers, const void *body, unsigned __int64 bodySize, void *response, unsigned __int64 responseSize, void (*callback)(int, void *), void *userdata)
{
  unsigned int v13; 
  bool *p_inUse; 
  HttpRequest *v15; 
  int v16; 
  __int64 v17; 

  EnterCriticalSection(&s_criticalSection_0);
  v13 = 0;
  p_inUse = &s_httpRequests[0].inUse;
  while ( *p_inUse )
  {
    ++v13;
    p_inUse += 4536;
    if ( v13 >= 0x60 )
      goto LABEL_4;
  }
  if ( s_httpRequestQueueCount + 1 >= 96 )
  {
LABEL_4:
    Http_Print_0("Http_RequestAsync insufficient request slots\n");
    goto LABEL_5;
  }
  v15 = &s_httpRequests[v13];
  memset_0(v15->method, 0, 0x11B4ui64);
  v16 = s_httpRequestId;
  v15->id = s_httpRequestId;
  s_httpRequestId = v16 + 1;
  strncpy(v15->method, method, 7ui64);
  strncpy(v15->url, url, 0xFFui64);
  strncpy(v15->headers, headers, 0x1063ui64);
  v17 = s_httpRequestQueueCount;
  v15->bodySize = bodySize;
  v15->response = response;
  v15->responseSize = responseSize;
  s_httpRequestQueue[v17] = v13;
  v15->callback = callback;
  s_httpRequestQueueCount = v17 + 1;
  v15->userdata = userdata;
  v15->body = body;
  v15->inUse = 1;
  WakeConditionVariable(&s_condition);
LABEL_5:
  LeaveCriticalSection(&s_criticalSection_0);
}

/*
==============
Http_SetPrintFunction
==============
*/
void Http_SetPrintFunction(void (*printCallback)(const char *, char *))
{
  s_httpPrintFunction = printCallback;
}

/*
==============
Http_SetVerbose
==============
*/
void Http_SetVerbose(bool verbose)
{
  ;
}

/*
==============
Http_Shutdown
==============
*/
bool Http_Shutdown()
{
  bool result; 

  CloseHandle(s_thread[0]);
  WakeAllConditionVariable(&s_condition);
  DeleteCriticalSection(&s_criticalSection_0);
  result = 1;
  s_httpInitialized = 0;
  return result;
}

/*
==============
Http_Thread
==============
*/
void __noreturn Http_Thread(void *__formal)
{
  int v1; 
  HttpRequest *v2; 
  int v3; 
  __int64 perf_frequency_0; 
  __int64 perf_counter_0; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int128 v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  void (__fastcall *callback)(int, void *); 
  unsigned __int64 bodySize; 
  void *responseData; 
  unsigned __int64 responseSize; 
  int *retryAfter; 
  int v21; 

  while ( 1 )
  {
    EnterCriticalSection(&s_criticalSection_0);
    v1 = s_httpRequestQueueCount;
    if ( !s_httpRequestQueueCount )
    {
      SleepConditionVariableCS(&s_condition, &s_criticalSection_0, 0xFFFFFFFF);
      v1 = s_httpRequestQueueCount;
    }
    v2 = &s_httpRequests[s_httpRequestQueue[0]];
    v3 = v1 - 1;
    memmove_0(s_httpRequestQueue, &s_httpRequestQueue[1], 4i64 * v3);
    s_httpRequestQueueCount = v3;
    LeaveCriticalSection(&s_criticalSection_0);
    v21 = 1;
    perf_frequency_0 = Query_perf_frequency_0();
    perf_counter_0 = Query_perf_counter_0();
    v6 = Http_Request(v2->method, v2->url, v2->headers, v2->body, v2->bodySize, v2->response, v2->responseSize, &v21);
    v7 = Query_perf_frequency_0();
    v8 = Query_perf_counter_0();
    v9 = v8 / v7;
    LODWORD(retryAfter) = v6;
    v10 = 1000000000 * (v8 % v7);
    v11 = perf_counter_0;
    v12 = v21;
    LODWORD(responseSize) = v21;
    LODWORD(responseData) = 5;
    LODWORD(bodySize) = v2->retryCount + 1;
    Http_Print_0("http: requestId=%d bytes=%zu duration=%zums retry=%d/%d retryAfter=%d status=%d %s %s\n", (unsigned int)v2->id, v2->bodySize, (__int64)(v10 / v7 + 1000000000 * v9 + -1000000000 * (v11 / perf_frequency_0) - 1000000000 * (v11 % perf_frequency_0) / perf_frequency_0) / 1000000, bodySize, responseData, responseSize, retryAfter, v2->method, v2->url);
    s_totalBytesSent += LODWORD(v2->bodySize);
    Http_Print_0("http: s_totalBytesSent: %u\n", s_totalBytesSent);
    if ( v6 != 200 && (v13 = v2->retryCount + 1, v13 < 5) && (v6 == 401 || v6 == 429 || v6 == 500 || v6 - 502 <= 1) )
    {
      v2->retryCount = v13;
      v14 = Query_perf_frequency_0();
      v15 = Query_perf_counter_0();
      v2->retryTime = 1000000000 * (v12 + v15 / v14) + 1000000000 * (v15 % v14) / v14;
    }
    else
    {
      callback = v2->callback;
      if ( callback )
        callback(v6, v2->userdata);
      v2->inUse = 0;
    }
  }
}

/*
==============
XMLHTTPRequest2Callback::OnDataAvailable
==============
*/
__int64 XMLHTTPRequest2Callback::OnDataAvailable(XMLHTTPRequest2Callback *this, IXMLHTTPRequest2 *__formal, ISequentialStream *a3)
{
  return 0i64;
}

/*
==============
XMLHTTPRequest2Callback::OnError
==============
*/
__int64 XMLHTTPRequest2Callback::OnError(XMLHTTPRequest2Callback *this, IXMLHTTPRequest2 *__formal, HRESULT error)
{
  if ( error == -2147024891 )
    this->statusCode = 401;
  if ( !ReleaseSemaphore(this->requestCompleteSemaphore, 1, NULL) )
    Http_Print_0("OnError() ReleaseSemaphore failed!\n");
  return 0i64;
}

/*
==============
XMLHTTPRequest2Callback::OnHeadersAvailable
==============
*/
__int64 XMLHTTPRequest2Callback::OnHeadersAvailable(XMLHTTPRequest2Callback *this, IXMLHTTPRequest2 *__formal, unsigned int httpStatus, const wchar_t *a4)
{
  this->statusCode = httpStatus;
  return 0i64;
}

/*
==============
XMLHTTPRequest2Callback::OnRedirect
==============
*/
__int64 XMLHTTPRequest2Callback::OnRedirect(XMLHTTPRequest2Callback *this, IXMLHTTPRequest2 *__formal, const wchar_t *a3)
{
  return 0i64;
}

/*
==============
XMLHTTPRequest2Callback::OnResponseReceived
==============
*/
__int64 XMLHTTPRequest2Callback::OnResponseReceived(XMLHTTPRequest2Callback *this, IXMLHTTPRequest2 *__formal, ISequentialStream *responseStream)
{
  void *responseData; 
  unsigned int v5; 

  responseData = this->responseData;
  if ( responseData )
  {
    v5 = responseStream->Read(responseStream, responseData, this->responseSize, (unsigned int *)&this->responseSize);
    if ( v5 )
      Http_Print_0("OnResponseReceived() Read failed! hr=0x%x\n", v5);
  }
  if ( !ReleaseSemaphore(this->requestCompleteSemaphore, 1, NULL) )
    Http_Print_0("OnResponseReceived() ReleaseSemaphore failed!\n");
  return 0i64;
}

/*
==============
SequentialStream::Read
==============
*/
_BOOL8 SequentialStream::Read(SequentialStream *this, void *outBuffer, unsigned int outBufferSize, unsigned int *numBytesRead)
{
  unsigned int v4; 

  v4 = outBufferSize;
  if ( LODWORD(this->m_end) - LODWORD(this->m_pos) < outBufferSize )
    v4 = LODWORD(this->m_end) - LODWORD(this->m_pos);
  memcpy_0(outBuffer, this->m_pos, v4);
  this->m_pos += v4;
  *numBytesRead = v4;
  return this->m_pos >= this->m_end;
}

/*
==============
SequentialStream::Write
==============
*/
__int64 SequentialStream::Write(SequentialStream *this, const void *__formal, unsigned int a3, unsigned int *a4)
{
  return 0i64;
}

