/*
==============
AD_DetermineMixFormat
==============
*/

AD_EndpointFormat __fastcall AD_DetermineMixFormat(const WAVEFORMATEXTENSIBLE *wfx)
{
  return ?AD_DetermineMixFormat@@YA?AW4AD_EndpointFormat@@PEBUWAVEFORMATEXTENSIBLE@@@Z(wfx);
}

/*
==============
AD_PlatformDestroy
==============
*/

void __fastcall AD_PlatformDestroy(const AD_BK_Options *const options)
{
  ?AD_PlatformDestroy@@YAXQEBUAD_BK_Options@@@Z(options);
}

/*
==============
AD_UTF8ToWChar
==============
*/

void __fastcall AD_UTF8ToWChar(const char *const str, wchar_t *dest, int destLen)
{
  ?AD_UTF8ToWChar@@YAXQEBDPEA_WH@Z(str, dest, destLen);
}

/*
==============
AD_SpatialAudioObjectNotifier::QueryInterface
==============
*/

HRESULT __fastcall AD_SpatialAudioObjectNotifier::QueryInterface(AD_SpatialAudioObjectNotifier *this, const _GUID *riid, void **pp_interface)
{
  return ?QueryInterface@AD_SpatialAudioObjectNotifier@@UEAAJAEBU_GUID@@PEAPEAX@Z(this, riid, pp_interface);
}

/*
==============
AD_SpatialAudioObjectNotifier::OnAvailableDynamicObjectCountChange
==============
*/

HRESULT __fastcall AD_SpatialAudioObjectNotifier::OnAvailableDynamicObjectCountChange(AD_SpatialAudioObjectNotifier *this, ISpatialAudioObjectRenderStreamBase *sender, __int64 hnsComplianceDeadlineTime, unsigned int availableDynamicObjectCountChange)
{
  return ?OnAvailableDynamicObjectCountChange@AD_SpatialAudioObjectNotifier@@UEAAJPEAUISpatialAudioObjectRenderStreamBase@@_JI@Z(this, sender, hnsComplianceDeadlineTime, availableDynamicObjectCountChange);
}

/*
==============
AD_WCharToUTF8
==============
*/

void __fastcall AD_WCharToUTF8(const wchar_t *str, char *const dest, unsigned __int64 destLen)
{
  ?AD_WCharToUTF8@@YAXPEB_WQEAD_K@Z(str, dest, destLen);
}

/*
==============
AD_GetDeviceInfo
==============
*/

bool __fastcall AD_GetDeviceInfo(AD_COMContainer<IMMDevice> *device, AD_WASAPIDeviceInfo *deviceInfo, const AD_EndpointFlow flow, const AD_EndpointRole role)
{
  return ?AD_GetDeviceInfo@@YA_NAEAV?$AD_COMContainer@UIMMDevice@@@@AEAUAD_WASAPIDeviceInfo@@W4AD_EndpointFlow@@W4AD_EndpointRole@@@Z(device, deviceInfo, flow, role);
}

/*
==============
AD_SpatialAudioObjectNotifier::Release
==============
*/

unsigned int __fastcall AD_SpatialAudioObjectNotifier::Release(AD_SpatialAudioObjectNotifier *this)
{
  return ?Release@AD_SpatialAudioObjectNotifier@@UEAAKXZ(this);
}

/*
==============
AD_SpatialAudioObjectNotifier::AddRef
==============
*/

unsigned int __fastcall AD_SpatialAudioObjectNotifier::AddRef(AD_SpatialAudioObjectNotifier *this)
{
  return ?AddRef@AD_SpatialAudioObjectNotifier@@UEAAKXZ(this);
}

/*
==============
AD_PlatformInit
==============
*/

bool __fastcall AD_PlatformInit(const AD_BK_Options *const options)
{
  return ?AD_PlatformInit@@YA_NQEBUAD_BK_Options@@@Z(options);
}

/*
==============
AD_DetermineMixFormat
==============
*/
__int64 AD_DetermineMixFormat(const WAVEFORMATEXTENSIBLE *wfx)
{
  unsigned __int16 wFormatTag; 
  unsigned __int16 wBitsPerSample; 
  unsigned __int16 v5; 
  WAVEFORMATEXTENSIBLE::<unnamed_type_Samples> v6; 
  __int64 v7; 
  int wValidBitsPerSample; 
  const char *v9; 
  const char *v10; 
  char *fmt; 

  if ( !wfx && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.cpp", 348, ASSERT_TYPE_ASSERT, "wfx != nullptr", "wfx != nullptr") )
    __debugbreak();
  wFormatTag = wfx->Format.wFormatTag;
  if ( wfx->Format.wFormatTag == 1 )
  {
    wBitsPerSample = wfx->Format.wBitsPerSample;
    if ( wBitsPerSample != 8 )
    {
      if ( wBitsPerSample != 16 )
      {
        LODWORD(fmt) = wBitsPerSample;
        AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.cpp", "361", (const AD_LogCategory)4, "Unexpected wBitsPerSample (%d) for wfx->Format.wFormatTag == WAVE_FORMAT_PCM\n", fmt);
        goto LABEL_42;
      }
      return 3i64;
    }
    return 4i64;
  }
  if ( wFormatTag == 3 )
  {
    if ( wfx->Format.wBitsPerSample != 32 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.cpp", 365, ASSERT_TYPE_ASSERT, "wfx->Format.wBitsPerSample == 32", "wfx->Format.wBitsPerSample == 32") )
    {
      __debugbreak();
      return 0i64;
    }
    return 0i64;
  }
  if ( wFormatTag == 0xFFFE )
  {
    if ( wfx->Samples.wValidBitsPerSample > wfx->Format.wBitsPerSample && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.cpp", 370, ASSERT_TYPE_ASSERT, "wfx->Samples.wValidBitsPerSample <= wfx->Format.wBitsPerSample", "wfx->Samples.wValidBitsPerSample <= wfx->Format.wBitsPerSample") )
      __debugbreak();
    v5 = wfx->Format.wBitsPerSample;
    v6.wValidBitsPerSample = (unsigned __int16)wfx->Samples;
    v7 = *(_QWORD *)&wfx->SubFormat.Data1;
    if ( v5 != v6.wValidBitsPerSample )
    {
      if ( v7 != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 || *(_QWORD *)wfx->SubFormat.Data4 != *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 )
      {
        if ( *(_QWORD *)&wfx->SubFormat.Data1 != *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 || *(_QWORD *)wfx->SubFormat.Data4 != *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 )
          return 5i64;
        wValidBitsPerSample = v6.wValidBitsPerSample;
        v9 = "No valid format found: SubFormat is KSDATAFORMAT_SUBTYPE_IEEE_FLOAT and wBitsPerSample(%d) != wValidBitsPerSample(%d)\n";
        v10 = "386";
        goto LABEL_41;
      }
      if ( v6.wValidBitsPerSample != 24 || v5 != 32 )
      {
        wValidBitsPerSample = v6.wValidBitsPerSample;
        v9 = "No valid format found: SubFormat is KSDATAFORMAT_SUBTYPE_PCM and wBitsPerSample(%d) != wValidBitsPerSample(%d)\n";
        v10 = "381";
        goto LABEL_41;
      }
      return 2i64;
    }
    if ( v7 == *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 && *(_QWORD *)wfx->SubFormat.Data4 == *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 )
    {
      switch ( v5 )
      {
        case 0x20u:
          return 1i64;
        case 0x18u:
          return 2i64;
        case 0x10u:
          return 3i64;
        case 8u:
          return 4i64;
      }
      wValidBitsPerSample = v6.wValidBitsPerSample;
      v9 = "No valid format found: SubFormat is KSDATAFORMAT_SUBTYPE_PCM and wBitsPerSample(%d) == wValidBitsPerSample(%d)\n";
      v10 = "411";
    }
    else
    {
      if ( *(_QWORD *)&wfx->SubFormat.Data1 != *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 || *(_QWORD *)wfx->SubFormat.Data4 != *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 )
        return 5i64;
      if ( v5 == 32 )
        return 0i64;
      wValidBitsPerSample = v6.wValidBitsPerSample;
      v9 = "No valid format found: SubFormat is KSDATAFORMAT_SUBTYPE_IEEE_FLOAT and wBitsPerSample(%d) == wValidBitsPerSample(%d)\n";
      v10 = "422";
    }
LABEL_41:
    LODWORD(fmt) = v5;
    AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.cpp", v10, (const AD_LogCategory)4, v9, fmt, wValidBitsPerSample);
LABEL_42:
    if ( (unsigned int)AD_GetLogBreakLevel() <= 4 )
      __debugbreak();
  }
  return 5i64;
}

/*
==============
AD_GetDeviceInfo
==============
*/
char AD_GetDeviceInfo(AD_COMContainer<IMMDevice> *device, AD_WASAPIDeviceInfo *deviceInfo, __int64 flow, __int64 role)
{
  IMMDevice *instance; 
  int v7; 
  IMMDevice *v8; 
  __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v9; 
  IMMDevice *v10; 
  __int16 v11; 
  int v12; 
  double *v13; 
  double v14; 
  __int64 v16; 
  __int64 v17; 
  LPVOID pv; 
  __m256i v19; 
  double v20; 
  wchar_t *str; 

  instance = device->instance;
  v7 = flow;
  str = NULL;
  if ( ((int (__fastcall *)(IMMDevice *, wchar_t **, __int64, __int64))instance->GetId)(instance, &str, flow, role) < 0 )
    return 0;
  AD_WCharToUTF8(str, deviceInfo->deviceId.value, 0x38ui64);
  AD_WCharToUTF8(str, deviceInfo->deviceName, 0x100ui64);
  CoTaskMemFree(str);
  if ( device->instance->GetState(device->instance, &deviceInfo->state) < 0 )
    return 0;
  v8 = device->instance;
  v17 = 0i64;
  if ( v8->QueryInterface(v8, &IID_IMMEndpoint, (void **)&v17) < 0 )
    return 0;
  (*(void (__fastcall **)(__int64, __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 *))(*(_QWORD *)v17 + 24i64))(v17, &deviceInfo->flow);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16i64))(v17);
  v9 = deviceInfo->flow;
  if ( v9 == eRender )
  {
    if ( !v7 )
      goto LABEL_6;
LABEL_14:
    AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.cpp", "172", Error, "Device flow %d does not match requested flow direction %d", deviceInfo->flow, v7);
    if ( (unsigned int)AD_GetLogBreakLevel() <= Error )
      __debugbreak();
    return 0;
  }
  if ( v9 == eCapture && v7 != 1 )
    goto LABEL_14;
LABEL_6:
  v10 = device->instance;
  v16 = 0i64;
  if ( v10->Activate(v10, &IID_IAudioClient, 1u, NULL, (void **)&v16) < 0 )
  {
    AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.cpp", "230", Canceled, "IAudioClient Activate failed for %s", deviceInfo->deviceId.value);
    return 0;
  }
  *(_OWORD *)v19.m256i_i8 = 3ui64;
  *(_OWORD *)&v19.m256i_u64[2] = 0ui64;
  v20 = 0.0;
  *(int *)((char *)&v19.m256i_i32[3] + 2) = 32;
  if ( deviceInfo->flow )
  {
    if ( v7 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.cpp", 197, ASSERT_TYPE_ASSERT, "flow == AD_EndpointFlow::Input", "flow == AD_EndpointFlow::Input") )
      __debugbreak();
    v19.m256i_i16[1] = 1;
    v11 = 4;
    *(__int64 *)((char *)v19.m256i_i64 + 4) = 412316860440000i64;
  }
  else
  {
    if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.cpp", 188, ASSERT_TYPE_ASSERT, "flow == AD_EndpointFlow::Output", "flow == AD_EndpointFlow::Output") )
      __debugbreak();
    *(__int64 *)((char *)v19.m256i_i64 + 4) = 13194139533360000i64;
    v19.m256i_i16[1] = 16;
    v11 = 64;
  }
  v19.m256i_i16[6] = v11;
  pv = NULL;
  v12 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v16 + 64i64))(v16, &pv);
  v13 = (double *)pv;
  if ( v12 < 0 )
  {
    v14 = v20;
    *(__m256i *)&deviceInfo->defaultFormat.Format.wFormatTag = v19;
  }
  else
  {
    *(__m256i *)&deviceInfo->defaultFormat.Format.wFormatTag = *(__m256i *)pv;
    v14 = v13[4];
  }
  *(double *)deviceInfo->defaultFormat.SubFormat.Data4 = v14;
  if ( v13 )
    CoTaskMemFree(v13);
  (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v16 + 72i64))(v16, &deviceInfo->defaultDevicePeriod, &deviceInfo->minimumDevicePeriod);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16i64))(v16);
  return 1;
}

/*
==============
AD_PlatformDestroy
==============
*/
void AD_PlatformDestroy(const AD_BK_Options *const options)
{
  AD_ThreadDestroyCOM((const AD_ThreadOptions)1);
}

/*
==============
AD_PlatformInit
==============
*/
char AD_PlatformInit(const AD_BK_Options *const options)
{
  AD_ThreadInitCOM((const AD_ThreadOptions)1);
  if ( options->supportSpatialAudio && (unsigned int)EnableSpatialAudio_0() && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.cpp", 495, ASSERT_TYPE_ASSERT, "( EnableSpatialAudio() ) == ( ((HRESULT)0L) )", "( EnableSpatialAudio() ) == ( ((HRESULT)0L) )") )
    __debugbreak();
  return 1;
}

/*
==============
AD_UTF8ToWChar
==============
*/
void AD_UTF8ToWChar(const char *const str, wchar_t *dest, int destLen)
{
  __int64 v4; 

  if ( str )
  {
    v4 = -1i64;
    do
      ++v4;
    while ( str[v4] );
    if ( (int)v4 <= destLen - 1 )
    {
      MultiByteToWideChar(0xFDE9u, 0, str, -1, dest, destLen);
      return;
    }
    AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.cpp", "462", (const AD_LogCategory)4, "char string is too long (%d) for Wchar buffer size: %d", v4 + 1, destLen);
    if ( (unsigned int)AD_GetLogBreakLevel() <= 4 )
      __debugbreak();
  }
  *dest = 0;
}

/*
==============
AD_WCharToUTF8
==============
*/
void AD_WCharToUTF8(const wchar_t *str, char *const dest, unsigned __int64 destLen)
{
  __int64 v4; 
  __int64 v5; 
  int lpMultiByteStr; 

  if ( str )
  {
    v4 = -1i64;
    do
      ++v4;
    while ( str[v4] );
    v5 = (int)v4;
    if ( (int)v4 <= destLen - 1 )
    {
      WideCharToMultiByte(0xFDE9u, 0, str, v4, dest, destLen - 1, NULL, NULL);
      dest[v5] = 0;
      return;
    }
    lpMultiByteStr = v4 + 1;
    AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.cpp", "444", (const AD_LogCategory)4, "WChar string is too long (%d) for buffer size: %d", lpMultiByteStr, destLen);
    if ( (unsigned int)AD_GetLogBreakLevel() <= 4 )
      __debugbreak();
  }
  *dest = 0;
}

/*
==============
AD_SpatialAudioObjectNotifier::AddRef
==============
*/
int AD_SpatialAudioObjectNotifier::AddRef(AD_SpatialAudioObjectNotifier *this)
{
  return AD_InterlockedIncrement(&this->refCount);
}

/*
==============
AD_SpatialAudioObjectNotifier::OnAvailableDynamicObjectCountChange
==============
*/
__int64 AD_SpatialAudioObjectNotifier::OnAvailableDynamicObjectCountChange(AD_SpatialAudioObjectNotifier *this, ISpatialAudioObjectRenderStreamBase *sender, __int64 hnsComplianceDeadlineTime, unsigned int availableDynamicObjectCountChange)
{
  if ( !this->endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.cpp", 133, ASSERT_TYPE_ASSERT, "endpoint != nullptr", "endpoint != nullptr") )
    __debugbreak();
  if ( !this->callback && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.cpp", 134, ASSERT_TYPE_ASSERT, "callback != nullptr", "callback != nullptr") )
    __debugbreak();
  this->callback(this->endpoint, sender, hnsComplianceDeadlineTime, availableDynamicObjectCountChange);
  return 0i64;
}

/*
==============
AD_SpatialAudioObjectNotifier::QueryInterface
==============
*/
__int64 AD_SpatialAudioObjectNotifier::QueryInterface(AD_SpatialAudioObjectNotifier *this, const _GUID *riid, void **pp_interface)
{
  __int64 result; 

  if ( *(_OWORD *)&IID_IUnknown == *(_OWORD *)riid || *(_QWORD *)&GUID_dddf83e6_68d7_4c70_883f_a1836afb4a50.Data1 == *(_QWORD *)&riid->Data1 && *(_QWORD *)GUID_dddf83e6_68d7_4c70_883f_a1836afb4a50.Data4 == *(_QWORD *)riid->Data4 )
  {
    this->AddRef(this);
    result = 0i64;
    *pp_interface = this;
  }
  else
  {
    result = 2147500034i64;
    *pp_interface = NULL;
  }
  return result;
}

/*
==============
AD_SpatialAudioObjectNotifier::Release
==============
*/
int AD_SpatialAudioObjectNotifier::Release(AD_SpatialAudioObjectNotifier *this)
{
  return AD_InterlockedDecrement(&this->refCount);
}

