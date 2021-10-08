/*
==============
Online_HardwareSurvey::Plat_GenerateReport
==============
*/

void __fastcall Online_HardwareSurvey::Plat_GenerateReport(Online_HardwareSurvey *this, bdJSONValue *r_jsonRoot)
{
  ?Plat_GenerateReport@Online_HardwareSurvey@@AEAAXAEAVbdJSONValue@@@Z(this, r_jsonRoot);
}

/*
==============
Online_HardwareSurvey_SetJSONMember
==============
*/
void Online_HardwareSurvey_SetJSONMember(bdJSONValue *r_jsonRoot, const char *const memberName, const bdJSONValue *r_setValue)
{
  bdJSONObject *Object; 
  bdJSONValue *v7; 

  if ( !bdJSONValue::getObject(r_jsonRoot) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_hardwaresurvey_xb3.cpp", 18, ASSERT_TYPE_ASSERT, "(r_jsonRoot.getObject())", (const char *)&queryFormat, "r_jsonRoot.getObject()") )
    __debugbreak();
  Object = bdJSONValue::getObject(r_jsonRoot);
  v7 = bdJSONObject::operator[](Object, memberName);
  bdJSONValue::operator=(v7, r_setValue);
}

/*
==============
Online_HardwareSurvey::Plat_GenerateReport
==============
*/
void Online_HardwareSurvey::Plat_GenerateReport(Online_HardwareSurvey *this, bdJSONValue *r_jsonRoot)
{
  bool UsingPCHostHDDFolders; 
  const char *v4; 
  const bdJSONValue *v5; 
  const bdJSONValue *v6; 
  bdJSONObject *Object; 
  bdJSONValue *v8; 
  HSTRING v9; 
  int ActivationFactoryByPCWSTR; 
  int v11; 
  __int64 v12; 
  HSTRING v13; 
  int v14; 
  HSTRING v15; 
  int v16; 
  HSTRING v17; 
  const wchar_t *StringRawBuffer_0; 
  int v19; 
  HSTRING v20; 
  int v21; 
  const wchar_t *v22; 
  __int64 v23; 
  unsigned int v24; 
  const bdJSONValue *v25; 
  const bdJSONValue *v26; 
  bdJSONObject *v27; 
  bdJSONValue *v28; 
  const bdJSONValue *v29; 
  const bdJSONValue *v30; 
  bdJSONObject *v31; 
  bdJSONValue *v32; 
  const bdJSONValue *v33; 
  const bdJSONValue *v34; 
  const bdJSONValue *v35; 
  const bdJSONValue *v36; 
  const bdJSONValue *v37; 
  unsigned int HDMIChannelCount; 
  const bdJSONValue *v39; 
  const bdJSONValue *v40; 
  bdJSONObject *v41; 
  bdJSONValue *v42; 
  unsigned int SPDIFChannelCount; 
  const bdJSONValue *v44; 
  const bdJSONValue *v45; 
  bdJSONObject *v46; 
  bdJSONValue *v47; 
  char *fmt; 
  __int64 cbMultiByte; 
  LPCCH lpDefaultChar; 
  HSTRING string; 
  bdJSONValue v52; 
  bdJSONValue v53; 
  __int64 v54; 
  void *ppActivationFactory; 
  HSTRING newString[3]; 
  char MultiByteStr[1024]; 
  char dest[1024]; 

  newString[1] = (HSTRING)-2i64;
  UsingPCHostHDDFolders = Sys_GetUsingPCHostHDDFolders();
  v4 = "0";
  if ( UsingPCHostHDDFolders )
    v4 = "1";
  bdJSONValue::bdJSONValue(&v53, v4);
  v6 = v5;
  if ( !bdJSONValue::getObject(r_jsonRoot) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_hardwaresurvey_xb3.cpp", 18, ASSERT_TYPE_ASSERT, "(r_jsonRoot.getObject())", (const char *)&queryFormat, "r_jsonRoot.getObject()") )
    __debugbreak();
  Object = bdJSONValue::getObject(r_jsonRoot);
  v8 = bdJSONObject::operator[](Object, "UsingPCHost");
  bdJSONValue::operator=(v8, v6);
  bdJSONValue::~bdJSONValue(&v53);
  v53.m_type = -1898582512;
  *((_DWORD *)&v53.m_type + 1) = 1091355586;
  v53.m_string = (bdString *)0xC3255B3C3232C7A3i64;
  v9 = NULL;
  ppActivationFactory = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.System.Profile.AnalyticsInfo", (Platform::Guid *)&v53, &ppActivationFactory);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v54 = 0i64;
  v11 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppActivationFactory + 48i64))(ppActivationFactory, &v54);
  if ( v11 < 0 )
    __abi_WinRTraiseException(v11);
  v12 = v54;
  v13 = (HSTRING)v54;
  if ( v54 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 8i64))(v54);
    v12 = v54;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
  string = NULL;
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  newString[2] = v13;
  string = NULL;
  v14 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v13 + 48i64))(v13, &string);
  if ( v14 < 0 )
    __abi_WinRTraiseException(v14);
  v15 = string;
  if ( string )
  {
    v16 = WindowsDuplicateString_0(string, newString);
    if ( v16 < 0 )
      __abi_WinRTraiseException(v16);
    v17 = newString[0];
    v15 = string;
  }
  else
  {
    v17 = NULL;
  }
  WindowsDeleteString_0(v15);
  StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v17, NULL);
  WindowsDeleteString_0(v17);
  memset_0(MultiByteStr, 0, sizeof(MultiByteStr));
  memset_0(dest, 0, sizeof(dest));
  WideCharToMultiByte(0xFDE9u, 0, StringRawBuffer_0, -1, MultiByteStr, 1024, NULL, NULL);
  string = NULL;
  v19 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v13 + 56i64))(v13, &string);
  if ( v19 < 0 )
    __abi_WinRTraiseException(v19);
  v20 = string;
  if ( string )
  {
    v21 = WindowsDuplicateString_0(string, newString);
    if ( v21 < 0 )
      __abi_WinRTraiseException(v21);
    v9 = newString[0];
    v20 = string;
  }
  WindowsDeleteString_0(v20);
  v22 = WindowsGetStringRawBuffer_0(v9, NULL);
  v23 = _wtoi64(v22);
  v24 = v23;
  *(_QWORD *)&v52.m_type = v23;
  WindowsDeleteString_0(v9);
  LODWORD(lpDefaultChar) = (unsigned __int16)v24;
  LODWORD(cbMultiByte) = HIWORD(v24);
  LODWORD(fmt) = *((unsigned __int16 *)&v52.m_type + 2);
  Com_sprintf(dest, 0x400ui64, "%u.%u.%u.%u", *((unsigned __int16 *)&v52.m_type + 3), fmt, cbMultiByte, lpDefaultChar);
  bdJSONValue::bdJSONValue(&v52, MultiByteStr);
  v26 = v25;
  if ( !bdJSONValue::getObject(r_jsonRoot) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_hardwaresurvey_xb3.cpp", 18, ASSERT_TYPE_ASSERT, "(r_jsonRoot.getObject())", (const char *)&queryFormat, "r_jsonRoot.getObject()") )
    __debugbreak();
  v27 = bdJSONValue::getObject(r_jsonRoot);
  v28 = bdJSONObject::operator[](v27, "DeviceFamily");
  bdJSONValue::operator=(v28, v26);
  bdJSONValue::~bdJSONValue(&v52);
  bdJSONValue::bdJSONValue(&v52, dest);
  v30 = v29;
  if ( !bdJSONValue::getObject(r_jsonRoot) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_hardwaresurvey_xb3.cpp", 18, ASSERT_TYPE_ASSERT, "(r_jsonRoot.getObject())", (const char *)&queryFormat, "r_jsonRoot.getObject()") )
    __debugbreak();
  v31 = bdJSONValue::getObject(r_jsonRoot);
  v32 = bdJSONObject::operator[](v31, "DeviceFamilyVersion");
  bdJSONValue::operator=(v32, v30);
  bdJSONValue::~bdJSONValue(&v52);
  if ( g_dx.gpuConfig.GpuFrequency )
    goto LABEL_33;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_hardwaresurvey_xb3.cpp", 45, ASSERT_TYPE_ASSERT, "(g_dx.gpuConfig.GpuFrequency)", (const char *)&queryFormat, "g_dx.gpuConfig.GpuFrequency") )
    __debugbreak();
  if ( g_dx.gpuConfig.GpuFrequency )
  {
LABEL_33:
    if ( g_dx.gpuConfig.HardwareVersion )
    {
      if ( g_dx.gpuConfig.HardwareVersion == D3D12XBOX_HARDWARE_VERSION_XBOX_ONE_S )
      {
        bdJSONValue::bdJSONValue(&v52, "XB1-S");
        Online_HardwareSurvey_SetJSONMember(r_jsonRoot, "HWVersion", v35);
      }
      else if ( g_dx.gpuConfig.HardwareVersion == D3D12XBOX_HARDWARE_VERSION_XBOX_ONE_X )
      {
        bdJSONValue::bdJSONValue(&v52, "XB1-X");
        Online_HardwareSurvey_SetJSONMember(r_jsonRoot, "HWVersion", v34);
      }
      else
      {
        if ( g_dx.gpuConfig.HardwareVersion == D3D12XBOX_HARDWARE_VERSION_XBOX_ONE_X_DEVKIT )
          bdJSONValue::bdJSONValue(&v52, "XB1-X-Dev");
        else
          bdJSONValue::bdJSONValue(&v52, "Unknown");
        Online_HardwareSurvey_SetJSONMember(r_jsonRoot, "HWVersion", v33);
      }
    }
    else
    {
      bdJSONValue::bdJSONValue(&v52, "XB1");
      Online_HardwareSurvey_SetJSONMember(r_jsonRoot, "HWVersion", v36);
    }
    bdJSONValue::~bdJSONValue(&v52);
    bdJSONValue::bdJSONValue(&v52, g_dx.gpuConfig.GpuFrequency);
    Online_HardwareSurvey_SetJSONMember(r_jsonRoot, "GPUHz", v37);
    bdJSONValue::~bdJSONValue(&v52);
  }
  HDMIChannelCount = SND_GetHDMIChannelCount();
  bdJSONValue::bdJSONValue(&v52, HDMIChannelCount);
  v40 = v39;
  if ( !bdJSONValue::getObject(r_jsonRoot) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_hardwaresurvey_xb3.cpp", 18, ASSERT_TYPE_ASSERT, "(r_jsonRoot.getObject())", (const char *)&queryFormat, "r_jsonRoot.getObject()") )
    __debugbreak();
  v41 = bdJSONValue::getObject(r_jsonRoot);
  v42 = bdJSONObject::operator[](v41, "HDMIChannels");
  bdJSONValue::operator=(v42, v40);
  bdJSONValue::~bdJSONValue(&v52);
  SPDIFChannelCount = SND_GetSPDIFChannelCount();
  bdJSONValue::bdJSONValue(&v52, SPDIFChannelCount);
  v45 = v44;
  if ( !bdJSONValue::getObject(r_jsonRoot) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_hardwaresurvey_xb3.cpp", 18, ASSERT_TYPE_ASSERT, "(r_jsonRoot.getObject())", (const char *)&queryFormat, "r_jsonRoot.getObject()") )
    __debugbreak();
  v46 = bdJSONValue::getObject(r_jsonRoot);
  v47 = bdJSONObject::operator[](v46, "SPDIFChannels");
  bdJSONValue::operator=(v47, v45);
  bdJSONValue::~bdJSONValue(&v52);
  if ( v13 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 16i64))(v13);
}

