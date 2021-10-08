/*
==============
bdLoginTaskFetchXboxOneToken::abortTask
==============
*/

void __fastcall bdLoginTaskFetchXboxOneToken::abortTask(bdLoginTaskFetchXboxOneToken *this)
{
  ?abortTask@bdLoginTaskFetchXboxOneToken@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskFetchXboxOneToken::executeAsyncOp
==============
*/

void __fastcall bdLoginTaskFetchXboxOneToken::executeAsyncOp(bdLoginTaskFetchXboxOneToken *this)
{
  ?executeAsyncOp@bdLoginTaskFetchXboxOneToken@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskFetchXboxOneToken::updateXboxOneFetchTokenStatus
==============
*/

void __fastcall bdLoginTaskFetchXboxOneToken::updateXboxOneFetchTokenStatus(bdLoginTaskFetchXboxOneToken *this, const char *messageInfo, const bdLoginTaskFetchXboxOneToken::XboxOneFetchTokenStatusCode code)
{
  ?updateXboxOneFetchTokenStatus@bdLoginTaskFetchXboxOneToken@@IEAAXPEBDW4XboxOneFetchTokenStatusCode@1@@Z(this, messageInfo, code);
}

/*
==============
bdLoginTaskFetchXboxOneToken::getTaskCode
==============
*/

bdLoginTaskFetchXboxOneToken::XboxOneFetchTokenStatusCode __fastcall bdLoginTaskFetchXboxOneToken::getTaskCode(bdLoginTaskFetchXboxOneToken *this)
{
  return ?getTaskCode@bdLoginTaskFetchXboxOneToken@@QEBA?AW4XboxOneFetchTokenStatusCode@1@XZ(this);
}

/*
==============
bdLoginTaskFetchXboxOneToken::reset
==============
*/

void __fastcall bdLoginTaskFetchXboxOneToken::reset(bdLoginTaskFetchXboxOneToken *this)
{
  ?reset@bdLoginTaskFetchXboxOneToken@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskFetchXboxOneToken::bdLoginTaskFetchXboxOneToken
==============
*/

void __fastcall bdLoginTaskFetchXboxOneToken::bdLoginTaskFetchXboxOneToken(bdLoginTaskFetchXboxOneToken *this, const bdLoginConfig *loginConfig, bdLoginResult *loginResult)
{
  ??0bdLoginTaskFetchXboxOneToken@@QEAA@PEBVbdLoginConfig@@PEAVbdLoginResult@@@Z(this, loginConfig, loginResult);
}

/*
==============
bdLoginTaskFetchXboxOneToken::getTaskMessage
==============
*/

const char *__fastcall bdLoginTaskFetchXboxOneToken::getTaskMessage(bdLoginTaskFetchXboxOneToken *this)
{
  return ?getTaskMessage@bdLoginTaskFetchXboxOneToken@@UEBAPEBDXZ(this);
}

/*
==============
bdLoginTaskFetchXboxOneToken::discoverEnvironment
==============
*/

bdEnvironment __fastcall bdLoginTaskFetchXboxOneToken::discoverEnvironment(bdLoginTaskFetchXboxOneToken *this)
{
  return ?discoverEnvironment@bdLoginTaskFetchXboxOneToken@@IEBA?BW4bdEnvironment@@XZ(this);
}

/*
==============
bdLoginTaskFetchXboxOneToken::~bdLoginTaskFetchXboxOneToken
==============
*/

void __fastcall bdLoginTaskFetchXboxOneToken::~bdLoginTaskFetchXboxOneToken(bdLoginTaskFetchXboxOneToken *this)
{
  ??1bdLoginTaskFetchXboxOneToken@@UEAA@XZ(this);
}

/*
==============
getAsyncOp
==============
*/

Windows::Foundation::IAsyncOperation<Windows::Xbox::System::GetTokenAndSignatureResult _> *__fastcall getAsyncOp(bdReference<bdWinRTPtr> asyncOp)
{
  return ?getAsyncOp@@YAPE$AAU?$IAsyncOperation@PE$AAVGetTokenAndSignatureResult@System@Xbox@Windows@@@Foundation@Windows@@V?$bdReference@VbdWinRTPtr@@@@@Z(asyncOp);
}

/*
==============
getAsyncOpStatus
==============
*/

Windows::Foundation::AsyncStatus __fastcall getAsyncOpStatus(bdReference<bdWinRTPtr> asyncOp)
{
  return ?getAsyncOpStatus@@YA?AW4AsyncStatus@Foundation@Windows@@V?$bdReference@VbdWinRTPtr@@@@@Z(asyncOp);
}

/*
==============
bdLoginTaskFetchXboxOneToken::pump
==============
*/

void __fastcall bdLoginTaskFetchXboxOneToken::pump(bdLoginTaskFetchXboxOneToken *this)
{
  ?pump@bdLoginTaskFetchXboxOneToken@@UEAAXXZ(this);
}

/*
==============
bdLoginTaskFetchXboxOneToken::processAsyncOpResult
==============
*/

void __fastcall bdLoginTaskFetchXboxOneToken::processAsyncOpResult(bdLoginTaskFetchXboxOneToken *this)
{
  ?processAsyncOpResult@bdLoginTaskFetchXboxOneToken@@IEAAXXZ(this);
}

/*
==============
bdLoginTaskFetchXboxOneToken::bdLoginTaskFetchXboxOneToken
==============
*/
void bdLoginTaskFetchXboxOneToken::bdLoginTaskFetchXboxOneToken(bdLoginTaskFetchXboxOneToken *this, const bdLoginConfig *loginConfig, bdLoginResult *loginResult)
{
  this->__vftable = (bdLoginTaskFetchXboxOneToken_vtbl *)&bdLoginTask::`vftable';
  bdStopwatch::bdStopwatch(&this->m_taskTimer);
  this->m_loginConfig = loginConfig;
  this->__vftable = (bdLoginTaskFetchXboxOneToken_vtbl *)&bdLoginTaskFetchXboxOneToken::`vftable';
  this->m_loginResult = loginResult;
  this->m_fetchXboxOneTokenStatusCode = READY;
  this->m_firstPartyTokenStatusCode = FETCHING_FIRST_PARTY_TOKEN;
  this->m_asyncOp.m_ptr = NULL;
  this->m_user.m_ptr = NULL;
  memset_0(this->m_fetchXboxOneTokenStatusMessage, 0, 0x1E80ui64);
}

/*
==============
bdLoginTaskFetchXboxOneToken::~bdLoginTaskFetchXboxOneToken
==============
*/
void bdLoginTaskFetchXboxOneToken::~bdLoginTaskFetchXboxOneToken(bdLoginTaskFetchXboxOneToken *this)
{
  bdWinRTPtr *m_ptr; 
  bdWinRTPtr *v3; 
  bdWinRTPtr *v4; 
  bdWinRTPtr *v5; 

  this->__vftable = (bdLoginTaskFetchXboxOneToken_vtbl *)&bdLoginTaskFetchXboxOneToken::`vftable';
  m_ptr = this->m_user.m_ptr;
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v3 = this->m_user.m_ptr;
    if ( v3 )
      ((void (__fastcall *)(bdWinRTPtr *, __int64))v3->~bdReferencable)(v3, 1i64);
    this->m_user.m_ptr = NULL;
  }
  v4 = this->m_asyncOp.m_ptr;
  if ( v4 && _InterlockedExchangeAdd((volatile signed __int32 *)&v4->m_refCount, 0xFFFFFFFF) == 1 )
  {
    v5 = this->m_asyncOp.m_ptr;
    if ( v5 )
      ((void (__fastcall *)(bdWinRTPtr *, __int64))v5->~bdReferencable)(v5, 1i64);
    this->m_asyncOp.m_ptr = NULL;
  }
  this->__vftable = (bdLoginTaskFetchXboxOneToken_vtbl *)&bdLoginTask::`vftable';
}

/*
==============
bdLoginTaskFetchXboxOneToken::abortTask
==============
*/
void bdLoginTaskFetchXboxOneToken::abortTask(bdLoginTaskFetchXboxOneToken *this)
{
  bdWinRTPtr *m_ptr; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::System::GetTokenAndSignatureResult _> *v4; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::System::GetTokenAndSignatureResult _> *v5; 
  __int64 v6; 
  int v7; 
  int v8; 
  double v10; 
  bdReference<bdWinRTPtr> asyncOp; 
  __int64 v12; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::System::GetTokenAndSignatureResult _> *v13; 
  __int64 v14; 

  m_ptr = this->m_asyncOp.m_ptr;
  if ( m_ptr )
  {
    asyncOp.m_ptr = this->m_asyncOp.m_ptr;
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    v4 = getAsyncOp((bdReference<bdWinRTPtr>)&asyncOp);
    v5 = v4;
    v13 = v4;
    v6 = 0i64;
    v12 = 0i64;
    if ( v4 )
    {
      v7 = v4->__abi_QueryInterface(v4, (Platform::Guid *)&_uuidof__AUIAsyncInfo_Foundation_Windows__, (void **)&v12);
      if ( v7 < 0 )
        __abi_WinRTraiseException(v7);
      v6 = v12;
    }
    v14 = v6;
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 72i64))(v6);
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
    if ( v5 )
      v5->__abi_Release(v5);
  }
  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::updateXboxOneFetchTokenStatus", 0xCAu, "Must provide valid message to update auth task status!");
  this->m_fetchXboxOneTokenStatusCode = FIRST_PARTY_AUTHED;
  bdStrlcpy(this->m_fetchXboxOneTokenStatusMessage, "Xbox One platform token task aborted", 0x400ui64);
  *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
  __asm
  {
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+68h+var_30], xmm1
  }
  bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::updateXboxOneFetchTokenStatus", 0xD2u, "Task finished after %2.1f seconds", v10);
  this->m_firstPartyTokenStatusCode = FIRST_PARTY_AUTHED;
}

/*
==============
bdLoginTaskFetchXboxOneToken::discoverEnvironment
==============
*/
__int64 bdLoginTaskFetchXboxOneToken::discoverEnvironment(bdLoginTaskFetchXboxOneToken *this)
{
  unsigned int v1; 
  int ActivationFactoryByPCWSTR; 
  int v3; 
  HSTRING v4; 
  int v5; 
  HSTRING v6; 
  const wchar_t *StringRawBuffer_0; 
  const wchar_t *v8; 
  bool v9; 
  int v10; 
  HSTRING_HEADER pGuid; 
  HSTRING string; 
  void *ppActivationFactory; 
  HSTRING newString; 

  pGuid.Reserved.Reserved1 = (void *)0x4C676A8400193376i64;
  *(_QWORD *)&pGuid.Reserved.Reserved2[8] = 0x12A7AE8A8A3BA584i64;
  v1 = 0;
  ppActivationFactory = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.Services.XboxLiveConfiguration", (Platform::Guid *)&pGuid, &ppActivationFactory);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  string = NULL;
  v3 = (*(__int64 (__fastcall **)(void *, HSTRING *))(*(_QWORD *)ppActivationFactory + 64i64))(ppActivationFactory, &string);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  v4 = string;
  if ( string )
  {
    v5 = WindowsDuplicateString_0(string, &newString);
    if ( v5 < 0 )
      __abi_WinRTraiseException(v5);
    v6 = newString;
    v4 = string;
  }
  else
  {
    v6 = NULL;
  }
  WindowsDeleteString_0(v4);
  WindowsDeleteString_0(NULL);
  WindowsDeleteString_0(NULL);
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  newString = v6;
  string = NULL;
  WindowsDeleteString_0(NULL);
  StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v6, NULL);
  v9 = 1;
  if ( !wcsstr_0(StringRawBuffer_0, L"CERT") )
  {
    v8 = WindowsGetStringRawBuffer_0(v6, NULL);
    if ( !wcsstr_0(v8, L".99") )
      v9 = 0;
  }
  v10 = WindowsCreateStringReference_0(L"RETAIL", 6u, &pGuid, (HSTRING *)&ppActivationFactory);
  if ( v10 < 0 )
    __abi_WinRTraiseException(v10);
  LODWORD(string) = 0;
  WindowsCompareStringOrdinal_0(v6, (HSTRING)ppActivationFactory, (INT32 *)&string);
  if ( (_DWORD)string )
  {
    if ( v9 )
    {
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::discoverEnvironment", 0x35u, "Setting environment to Certification");
      v1 = 1;
    }
    else
    {
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::discoverEnvironment", 0x3Bu, "Setting environment to Development");
    }
  }
  else
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::discoverEnvironment", 0x30u, "Setting environment to Production");
    v1 = 2;
  }
  WindowsDeleteString_0(v6);
  return v1;
}

/*
==============
bdLoginTaskFetchXboxOneToken::executeAsyncOp
==============
*/
void bdLoginTaskFetchXboxOneToken::executeAsyncOp(bdLoginTaskFetchXboxOneToken *this)
{
  int v3; 
  int v4; 
  HSTRING v5; 
  bdWinRTPtr *v6; 
  int v7; 
  int v8; 
  HSTRING v9; 
  int v10; 
  int v11; 
  HSTRING v12; 
  bdWinRTPtr *m_ptr; 
  bdWinRTPtr *v14; 
  bdWinRTPtr *v15; 
  IUnknown *v16; 
  HSTRING v17; 
  int v18; 
  IUnknown *v19; 
  IUnknown *v20; 
  bdWinRTPtr *v21; 
  bdWinRTPtr *v22; 
  double v24; 
  HSTRING string; 
  HSTRING newString; 
  HSTRING v27; 
  HSTRING v28; 
  HSTRING v29; 
  HSTRING v30[6]; 
  HSTRING_HEADER hstringHeader; 
  HSTRING_HEADER v32; 
  HSTRING_HEADER v33; 
  IUnknown *ptr; 
  HSTRING v35; 
  HSTRING v36; 

  v30[2] = (HSTRING)-2i64;
  v3 = WindowsCreateStringReference_0(L"POST", 4u, &hstringHeader, &string);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  if ( string )
  {
    v4 = WindowsDuplicateString_0(string, &newString);
    if ( v4 < 0 )
      __abi_WinRTraiseException(v4);
    v5 = newString;
    v35 = newString;
    v6 = NULL;
  }
  else
  {
    v6 = NULL;
    v5 = NULL;
    v35 = NULL;
  }
  v7 = WindowsCreateStringReference_0(L"Content-Type: application/json", 0x1Eu, &v32, &v27);
  if ( v7 < 0 )
    __abi_WinRTraiseException(v7);
  if ( v27 )
  {
    v8 = WindowsDuplicateString_0(v27, &v28);
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    v9 = v28;
    v36 = v28;
  }
  else
  {
    v9 = NULL;
    v36 = NULL;
  }
  v10 = WindowsCreateStringReference_0(L"https:
  if ( v10 < 0 )
    __abi_WinRTraiseException(v10);
  if ( v29 )
  {
    v11 = WindowsDuplicateString_0(v29, v30);
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    v12 = v30[0];
  }
  else
  {
    v12 = NULL;
  }
  m_ptr = this->m_asyncOp.m_ptr;
  if ( m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v14 = this->m_asyncOp.m_ptr;
      if ( v14 )
        ((void (__fastcall *)(bdWinRTPtr *, __int64))v14->~bdReferencable)(v14, 1i64);
    }
  }
  this->m_asyncOp.m_ptr = NULL;
  v15 = this->m_user.m_ptr;
  if ( v15 && bdWinRTPtr::notNull(v15) )
  {
    v16 = bdWinRTPtr::get(this->m_user.m_ptr);
    v17 = (HSTRING)v16;
    v30[1] = (HSTRING)v16;
    if ( v16 )
      v16->AddRef(v16);
    v30[3] = v17;
    ptr = NULL;
    v18 = (*(__int64 (__fastcall **)(HSTRING, HSTRING, HSTRING, HSTRING, IUnknown **))(*(_QWORD *)v17 + 128i64))(v17, v5, v12, v9, &ptr);
    if ( v18 < 0 )
      __abi_WinRTraiseException(v18);
    v19 = ptr;
    v20 = ptr;
    if ( ptr )
    {
      ptr->AddRef(ptr);
      v19 = ptr;
    }
    if ( v19 )
      v19->Release(v19);
    v30[4] = (HSTRING)v20;
    if ( v20 )
    {
      v21 = (bdWinRTPtr *)bdMemory::allocate(0x18ui64);
      if ( v21 )
      {
        bdWinRTPtr::bdWinRTPtr(v21, v20);
        v6 = v22;
      }
      bdReference<bdWinRTPtr>::operator=(&this->m_asyncOp, v6);
      bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::executeAsyncOp", 0xA2u, "Setting state to FETCHING_FIRST_PARTY_TOKEN");
      bdLoginTaskFetchXboxOneToken::updateXboxOneFetchTokenStatus(this, "Attempting fetch Xbox One platform token.", FETCHING_FIRST_PARTY_TOKEN);
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::executeAsyncOp", 0x9Cu, "asyncOp returned from GetTokenAndSignatureAsync() is invalid.\n");
      bdLoginTaskFetchXboxOneToken::updateXboxOneFetchTokenStatus(this, "Failed to fetch Xbox One platform token.", FIRST_PARTY_AUTHED);
    }
    if ( v20 )
      v20->Release(v20);
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v17 + 16i64))(v17);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::executeAsyncOp", 0xAFu, "GetTokenAndSignatureAsync(): No valid user set, cannot fetch XHTTP Token");
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::updateXboxOneFetchTokenStatus", 0xCAu, "Must provide valid message to update auth task status!");
    this->m_fetchXboxOneTokenStatusCode = FIRST_PARTY_AUTHED;
    bdStrlcpy(this->m_fetchXboxOneTokenStatusMessage, "Failed to fetch Xbox One platform token.", 0x400ui64);
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+128h+var_F0], xmm1
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::updateXboxOneFetchTokenStatus", 0xD2u, "Task finished after %2.1f seconds", v24);
    this->m_firstPartyTokenStatusCode = FIRST_PARTY_AUTHED;
  }
  WindowsDeleteString_0(v12);
  WindowsDeleteString_0(v9);
  WindowsDeleteString_0(v5);
}

/*
==============
getAsyncOp
==============
*/
IUnknown *getAsyncOp(bdReference<bdWinRTPtr> asyncOp)
{
  bdWinRTPtr *v2; 
  bool v3; 
  IUnknown *v4; 
  IUnknown *v5; 

  v2 = (bdWinRTPtr *)asyncOp.m_ptr->__vftable;
  v3 = v2 && bdWinRTPtr::notNull(v2);
  bdHandleAssert(v3, "asyncOp != BD_NULL && asyncOp.notNull() && asyncOp->notNull()", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "getAsyncOp", 0x1Fu, "The asyncOp must not be null.", -2i64);
  v4 = bdWinRTPtr::get((bdWinRTPtr *)asyncOp.m_ptr->__vftable);
  v5 = v4;
  if ( v4 )
    v4->AddRef(v4);
  if ( asyncOp.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&asyncOp.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( asyncOp.m_ptr->__vftable )
      (*(void (__fastcall **)(bdWinRTPtr_vtbl *, __int64))asyncOp.m_ptr->~bdReferencable)(asyncOp.m_ptr->__vftable, 1i64);
    asyncOp.m_ptr->__vftable = NULL;
  }
  return v5;
}

/*
==============
getAsyncOpStatus
==============
*/
__int64 getAsyncOpStatus(bdReference<bdWinRTPtr> asyncOp)
{
  bdWinRTPtr *v2; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::System::GetTokenAndSignatureResult _> *v3; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::System::GetTokenAndSignatureResult _> *v4; 
  __int64 v5; 
  int v6; 
  int v7; 
  unsigned int v9; 
  bdReference<bdWinRTPtr> asyncOpa; 
  __int64 v11; 

  v2 = (bdWinRTPtr *)asyncOp.m_ptr->__vftable;
  asyncOpa.m_ptr = v2;
  if ( v2 )
    _InterlockedExchangeAdd((volatile signed __int32 *)&v2->m_refCount, 1u);
  v3 = getAsyncOp((bdReference<bdWinRTPtr>)&asyncOpa);
  v4 = v3;
  v5 = 0i64;
  v11 = 0i64;
  if ( v3 )
  {
    v6 = v3->__abi_QueryInterface(v3, (Platform::Guid *)&_uuidof__AUIAsyncInfo_Foundation_Windows__, (void **)&v11);
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    v5 = v11;
  }
  v9 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 56i64))(v5, &v9);
  if ( v7 < 0 )
    __abi_WinRTraiseException(v7);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
  if ( v4 )
    v4->__abi_Release(v4);
  if ( asyncOp.m_ptr->__vftable && _InterlockedExchangeAdd((volatile signed __int32 *)&asyncOp.m_ptr->__vftable[1], 0xFFFFFFFF) == 1 )
  {
    if ( asyncOp.m_ptr->__vftable )
      (*(void (__fastcall **)(bdWinRTPtr_vtbl *, __int64))asyncOp.m_ptr->~bdReferencable)(asyncOp.m_ptr->__vftable, 1i64);
    asyncOp.m_ptr->__vftable = NULL;
  }
  return v9;
}

/*
==============
bdLoginTaskFetchXboxOneToken::getTaskCode
==============
*/
__int64 bdLoginTaskFetchXboxOneToken::getTaskCode(bdLoginTaskFetchXboxOneToken *this)
{
  return (unsigned int)this->m_fetchXboxOneTokenStatusCode;
}

/*
==============
bdLoginTaskFetchXboxOneToken::getTaskMessage
==============
*/
char *bdLoginTaskFetchXboxOneToken::getTaskMessage(bdLoginTaskFetchXboxOneToken *this)
{
  return this->m_fetchXboxOneTokenStatusMessage;
}

/*
==============
bdLoginTaskFetchXboxOneToken::processAsyncOpResult
==============
*/
void bdLoginTaskFetchXboxOneToken::processAsyncOpResult(bdLoginTaskFetchXboxOneToken *this)
{
  bdWinRTPtr *m_ptr; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::System::GetTokenAndSignatureResult _> *v4; 
  HSTRING v5; 
  HSTRING v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  int v15; 
  HSTRING v16; 
  int v17; 
  const wchar_t *StringRawBuffer_0; 
  bdEnvironment Environment; 
  __int64 v20; 
  int v21; 
  int v22; 
  bool v23; 
  __int64 v24; 
  int v25; 
  int v26; 
  bool v27; 
  __int64 v28; 
  int v29; 
  int v30; 
  int v31; 
  double v32; 
  int v33; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::System::GetTokenAndSignatureResult _> *v34; 
  __int64 v35; 
  HSTRING string; 
  __int64 v37; 
  bdReference<bdWinRTPtr> asyncOp; 
  __int64 v39; 
  size_t PtNumOfCharConverted; 
  __int64 v41; 
  HSTRING newString[12]; 
  __int64 v43; 
  int v44; 
  int v45; 

  newString[1] = (HSTRING)-2i64;
  m_ptr = this->m_asyncOp.m_ptr;
  asyncOp.m_ptr = m_ptr;
  if ( m_ptr )
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
  v4 = getAsyncOp((bdReference<bdWinRTPtr>)&asyncOp);
  v5 = (HSTRING)v4;
  v34 = v4;
  if ( v4 )
    v4->__abi_AddRef(v4);
  newString[2] = v5;
  if ( v5 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v5 + 16i64))(v5);
  v6 = NULL;
  v7 = 0i64;
  v39 = 0i64;
  if ( v5 )
  {
    v8 = (**(__int64 (__fastcall ***)(HSTRING, void *, __int64 *))v5)(v5, &_uuidof__AUIAsyncInfo_Foundation_Windows__, &v39);
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    v7 = v39;
  }
  v37 = v7;
  LODWORD(v43) = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 56i64))(v7, &v43);
  if ( v9 < 0 )
    __abi_WinRTraiseException(v9);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
  v10 = v43;
  if ( (_DWORD)v43 )
  {
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::processAsyncOpResult", 0x4Cu, "Processing bdLogin fetchXboxOneToken task reply");
    if ( v10 == 1 )
    {
      PtNumOfCharConverted = 0i64;
      v35 = 0i64;
      v12 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v5 + 64i64))(v5, &v35);
      if ( v12 < 0 )
        __abi_WinRTraiseException(v12);
      v13 = v35;
      v14 = v35;
      if ( v35 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8i64))(v35);
        v13 = v35;
      }
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16i64))(v13);
      v43 = v14;
      string = NULL;
      v15 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v14 + 56i64))(v14, &string);
      if ( v15 < 0 )
        __abi_WinRTraiseException(v15);
      v16 = string;
      if ( string )
      {
        v17 = WindowsDuplicateString_0(string, newString);
        if ( v17 < 0 )
          __abi_WinRTraiseException(v17);
        v6 = newString[0];
        v16 = string;
      }
      WindowsDeleteString_0(v16);
      StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v6, NULL);
      wcstombs_s(&PtNumOfCharConverted, this->m_xstsToken, 0x1A80ui64, StringRawBuffer_0, 0x1A80ui64);
      WindowsDeleteString_0(v6);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16i64))(v14);
      if ( PtNumOfCharConverted )
      {
        Environment = bdLoginConfig::getEnvironment((bdLoginConfig *)this->m_loginConfig);
        if ( Environment == BD_ENVIRONMENT_MAX )
          Environment = bdLoginTaskFetchXboxOneToken::discoverEnvironment(this);
        else
          bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::processAsyncOpResult", 0x5Au, "Using Client specified Environment");
        bdLoginResult::setEnvironment(this->m_loginResult, Environment);
        bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::processAsyncOpResult", 0x61u, "Setting state to COMPLETED");
        bdLoginTaskFetchXboxOneToken::updateXboxOneFetchTokenStatus(this, "Xbox One platform token fetched successfully.", LOGIN_DELAY);
        bdLoginResult::setPlatformToken(this->m_loginResult, this->m_xstsToken);
      }
      else
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::processAsyncOpResult", 0x67u, "Failed to convert token from GetTokenAndSignatureAsync()");
        bdLoginTaskFetchXboxOneToken::updateXboxOneFetchTokenStatus(this, "Failed to process Xbox One platform token response.", FIRST_PARTY_AUTHED);
      }
    }
    else
    {
      v20 = 0i64;
      v41 = 0i64;
      if ( v5 )
      {
        v21 = (**(__int64 (__fastcall ***)(HSTRING, void *, __int64 *))v5)(v5, &_uuidof__AUIAsyncInfo_Foundation_Windows__, &v41);
        if ( v21 < 0 )
          __abi_WinRTraiseException(v21);
        v20 = v41;
      }
      v44 = 0;
      v22 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 64i64))(v20, &v44);
      if ( v22 < 0 )
        __abi_WinRTraiseException(v22);
      v23 = v44 == -2146051054;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16i64))(v20);
      if ( v23 )
      {
        bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::processAsyncOpResult", 0x74u, "GetTokenAndSignatureAsync failed with error XO_E_CONTENT_ISOLATION. Check XDP & Check SandboxId is correct and User is authorized to access the Sandbox.");
      }
      else
      {
        v24 = 0i64;
        v37 = 0i64;
        if ( v5 )
        {
          v25 = (**(__int64 (__fastcall ***)(HSTRING, void *, __int64 *))v5)(v5, &_uuidof__AUIAsyncInfo_Foundation_Windows__, &v37);
          if ( v25 < 0 )
            __abi_WinRTraiseException(v25);
          v24 = v37;
        }
        v45 = 0;
        v26 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 64i64))(v24, &v45);
        if ( v26 < 0 )
          __abi_WinRTraiseException(v26);
        v27 = v45 == -2015559647;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16i64))(v24);
        if ( v27 )
        {
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::processAsyncOpResult", 0x7Au, "GetTokenAndSignatureAsync failed with error AM_E_NO_TOKEN_REQUIRED. Ensure auth3 url is included in your NSAL configuration.");
        }
        else
        {
          v28 = 0i64;
          v34 = NULL;
          if ( v5 )
          {
            v29 = (**(__int64 (__fastcall ***)(HSTRING, void *, __int64 *))v5)(v5, &_uuidof__AUIAsyncInfo_Foundation_Windows__, (__int64 *)&v34);
            if ( v29 < 0 )
              __abi_WinRTraiseException(v29);
            v28 = (__int64)v34;
          }
          v33 = 0;
          v30 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v28 + 64i64))(v28, &v33);
          if ( v30 < 0 )
            __abi_WinRTraiseException(v30);
          v31 = v33;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16i64))(v28);
          bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::processAsyncOpResult", 0x83u, "GetTokenAndSignatureAsync(): Failure Microsoft Error Code: [0x%X]", v31);
        }
      }
      bdLoginTaskFetchXboxOneToken::updateXboxOneFetchTokenStatus(this, "Failed to fetch Xbox One platform token.", FIRST_PARTY_AUTHED);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::processAsyncOpResult", 0x47u, "processAsyncOpResult called when no token has yet been fetched.");
    bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::updateXboxOneFetchTokenStatus", 0xCAu, "Must provide valid message to update auth task status!");
    this->m_fetchXboxOneTokenStatusCode = FIRST_PARTY_AUTHED;
    bdStrlcpy(this->m_fetchXboxOneTokenStatusMessage, "Failed to process Xbox One platform token response.", 0x400ui64);
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+0E8h+var_B0], xmm1
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::updateXboxOneFetchTokenStatus", 0xD2u, "Task finished after %2.1f seconds", v32);
    this->m_firstPartyTokenStatusCode = FIRST_PARTY_AUTHED;
  }
  if ( v5 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v5 + 16i64))(v5);
}

/*
==============
bdLoginTaskFetchXboxOneToken::pump
==============
*/
void bdLoginTaskFetchXboxOneToken::pump(bdLoginTaskFetchXboxOneToken *this)
{
  bdLoginTaskFetchXboxOneToken::XboxOneFetchTokenStatusCode m_fetchXboxOneTokenStatusCode; 
  bdWinRTPtr *m_ptr; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::System::GetTokenAndSignatureResult _> *v4; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::System::GetTokenAndSignatureResult _> *v5; 
  __int64 v6; 
  int v7; 
  int v8; 
  int v9; 
  bdPlatformUser *User; 
  bdReference<bdWinRTPtr> *p_m_user; 
  bdWinRTPtr *v12; 
  __int64 v13; 
  bdPlatformUser result; 
  __int64 v15; 
  __int64 *v16; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::System::GetTokenAndSignatureResult _> *v17; 
  __int64 v18; 
  int v19; 
  bdWinRTPtr *v20; 
  bdReference<bdWinRTPtr> v21; 
  bdReference<bdWinRTPtr> asyncOp; 

  v15 = -2i64;
  m_fetchXboxOneTokenStatusCode = this->m_fetchXboxOneTokenStatusCode;
  if ( m_fetchXboxOneTokenStatusCode )
  {
    if ( m_fetchXboxOneTokenStatusCode == FETCHING_FIRST_PARTY_TOKEN )
    {
      m_ptr = this->m_asyncOp.m_ptr;
      v20 = m_ptr;
      if ( m_ptr )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
        m_ptr = v20;
      }
      v16 = (__int64 *)&v20;
      asyncOp.m_ptr = m_ptr;
      if ( m_ptr )
        _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
      v4 = getAsyncOp((bdReference<bdWinRTPtr>)&asyncOp);
      v5 = v4;
      v17 = v4;
      v6 = 0i64;
      v13 = 0i64;
      if ( v4 )
      {
        v7 = v4->__abi_QueryInterface(v4, (Platform::Guid *)&_uuidof__AUIAsyncInfo_Foundation_Windows__, (void **)&v13);
        if ( v7 < 0 )
          __abi_WinRTraiseException(v7);
        v6 = v13;
      }
      v18 = v6;
      v19 = 0;
      v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 56i64))(v6, &v19);
      if ( v8 < 0 )
        __abi_WinRTraiseException(v8);
      v9 = v19;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
      if ( v5 )
        v5->__abi_Release(v5);
      if ( v20 && _InterlockedExchangeAdd((volatile signed __int32 *)&v20->m_refCount, 0xFFFFFFFF) == 1 && v20 )
        ((void (__fastcall *)(bdWinRTPtr *, __int64))v20->~bdReferencable)(v20, 1i64);
      if ( v9 )
        bdLoginTaskFetchXboxOneToken::processAsyncOpResult(this);
    }
    return;
  }
  bdStopwatch::start(&this->m_taskTimer);
  User = bdLoginConfig::getUser((bdLoginConfig *)this->m_loginConfig, &result);
  bdPlatformUser::operator bdReference<bdWinRTPtr> const(User, &v21);
  p_m_user = &this->m_user;
  if ( &v21 != &this->m_user )
  {
    if ( p_m_user->m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&p_m_user->m_ptr->m_refCount, 0xFFFFFFFF) == 1 && p_m_user->m_ptr )
      ((void (__fastcall *)(bdWinRTPtr *, __int64))p_m_user->m_ptr->~bdReferencable)(p_m_user->m_ptr, 1i64);
    v12 = v21.m_ptr;
    p_m_user->m_ptr = v21.m_ptr;
    if ( !v12 )
      goto LABEL_31;
    _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
  }
  if ( v21.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v21.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
  {
    if ( v21.m_ptr )
      ((void (__fastcall *)(bdWinRTPtr *, __int64))v21.m_ptr->~bdReferencable)(v21.m_ptr, 1i64);
    v21.m_ptr = NULL;
  }
LABEL_31:
  if ( result.m_user.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_user.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_user.m_ptr )
    ((void (__fastcall *)(bdWinRTPtr *, __int64))result.m_user.m_ptr->~bdReferencable)(result.m_user.m_ptr, 1i64);
  bdLoginTaskFetchXboxOneToken::executeAsyncOp(this);
}

/*
==============
bdLoginTaskFetchXboxOneToken::reset
==============
*/
void bdLoginTaskFetchXboxOneToken::reset(bdLoginTaskFetchXboxOneToken *this)
{
  bdWinRTPtr *m_ptr; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::System::GetTokenAndSignatureResult _> *v3; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::System::GetTokenAndSignatureResult _> *v4; 
  __int64 v5; 
  int v6; 
  int v7; 
  bdWinRTPtr *v8; 
  bdWinRTPtr *v9; 
  bdReference<bdWinRTPtr> asyncOp; 
  __int64 v11; 
  Windows::Foundation::IAsyncOperation<Windows::Xbox::System::GetTokenAndSignatureResult _> *v12; 
  __int64 v13; 

  m_ptr = this->m_asyncOp.m_ptr;
  if ( m_ptr )
  {
    asyncOp.m_ptr = m_ptr;
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    v3 = getAsyncOp((bdReference<bdWinRTPtr>)&asyncOp);
    v4 = v3;
    v12 = v3;
    v5 = 0i64;
    v11 = 0i64;
    if ( v3 )
    {
      v6 = v3->__abi_QueryInterface(v3, (Platform::Guid *)&_uuidof__AUIAsyncInfo_Foundation_Windows__, (void **)&v11);
      if ( v6 < 0 )
        __abi_WinRTraiseException(v6);
      v5 = v11;
    }
    v13 = v5;
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 72i64))(v5);
    if ( v7 < 0 )
      __abi_WinRTraiseException(v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
    if ( v4 )
      v4->__abi_Release(v4);
  }
  v8 = this->m_asyncOp.m_ptr;
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 0xFFFFFFFF) == 1 )
    {
      v9 = this->m_asyncOp.m_ptr;
      if ( v9 )
        ((void (__fastcall *)(bdWinRTPtr *, __int64))v9->~bdReferencable)(v9, 1i64);
    }
  }
  this->m_asyncOp.m_ptr = NULL;
  memset_0(this->m_xstsToken, 0, sizeof(this->m_xstsToken));
  this->m_firstPartyTokenStatusCode = FETCHING_FIRST_PARTY_TOKEN;
  bdHandleAssert(1, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::updateXboxOneFetchTokenStatus", 0xCAu, "Must provide valid message to update auth task status!", -2i64);
  this->m_fetchXboxOneTokenStatusCode = READY;
  bdStrlcpy(this->m_fetchXboxOneTokenStatusMessage, "Xbox One platform token task reset", 0x400ui64);
}

/*
==============
bdLoginTaskFetchXboxOneToken::updateXboxOneFetchTokenStatus
==============
*/
void bdLoginTaskFetchXboxOneToken::updateXboxOneFetchTokenStatus(bdLoginTaskFetchXboxOneToken *this, const char *messageInfo, const bdLoginTaskFetchXboxOneToken::XboxOneFetchTokenStatusCode code)
{
  double v8; 

  bdHandleAssert(messageInfo != NULL, "(messageInfo != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::updateXboxOneFetchTokenStatus", 0xCAu, "Must provide valid message to update auth task status!");
  this->m_fetchXboxOneTokenStatusCode = code;
  bdStrlcpy(this->m_fetchXboxOneTokenStatusMessage, messageInfo, 0x400ui64);
  if ( (unsigned int)(code - 2) <= 1 )
  {
    *(double *)&_XMM0 = bdStopwatch::getElapsedTimeInSeconds(&this->m_taskTimer);
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+48h+var_10], xmm1
    }
    bdLogMessage(BD_LOG_INFO, "info/", "bdLogin", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlogin\\bdlogintask\\bdlogintaskfetchxboxonetoken.cpp", "bdLoginTaskFetchXboxOneToken::updateXboxOneFetchTokenStatus", 0xD2u, "Task finished after %2.1f seconds", v8);
    this->m_firstPartyTokenStatusCode = (code != FIRST_PARTY_AUTHED) + 2;
  }
}

