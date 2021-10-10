/*
==============
AD_InterfaceThreadSynchronize
==============
*/

bool __fastcall AD_InterfaceThreadSynchronize(AD_Interface *const iface)
{
  return ?AD_InterfaceThreadSynchronize@@YA_NQEAUAD_Interface@@@Z(iface);
}

/*
==============
AD_WinAudioDeviceNotifier::Destroy
==============
*/

void __fastcall AD_WinAudioDeviceNotifier::Destroy(AD_WinAudioDeviceNotifier *this)
{
  ?Destroy@AD_WinAudioDeviceNotifier@@QEAAXXZ(this);
}

/*
==============
AD_WinAudioDeviceNotifier::OnPropertyValueChanged
==============
*/

HRESULT __fastcall AD_WinAudioDeviceNotifier::OnPropertyValueChanged(AD_WinAudioDeviceNotifier *this, const wchar_t *pwstrDeviceId, const _tagpropertykey *key)
{
  return ?OnPropertyValueChanged@AD_WinAudioDeviceNotifier@@UEAAJPEB_WU_tagpropertykey@@@Z(this, pwstrDeviceId, key);
}

/*
==============
AD_InterfaceThreadUpdate
==============
*/

bool __fastcall AD_InterfaceThreadUpdate(AD_Interface *const iface, const AD_EventFlagHelper<enum AD_InterfaceThreadSignals,0>::EventFlags flags)
{
  return ?AD_InterfaceThreadUpdate@@YA_NQEAUAD_Interface@@VEventFlags@?$AD_EventFlagHelper@W4AD_InterfaceThreadSignals@@$0A@@@@Z(iface, flags);
}

/*
==============
AD_WinAudioDeviceNotifier::Init
==============
*/

void __fastcall AD_WinAudioDeviceNotifier::Init(AD_WinAudioDeviceNotifier *this, AD_Interface *iface)
{
  ?Init@AD_WinAudioDeviceNotifier@@QEAAXPEAUAD_Interface@@@Z(this, iface);
}

/*
==============
AD_XboxUserDeviceNotifier::OnAudioDeviceRemoved
==============
*/

void __fastcall AD_XboxUserDeviceNotifier::OnAudioDeviceRemoved(AD_XboxUserDeviceNotifier *this, Platform::Object *__formal, Windows::Xbox::System::AudioDeviceRemovedEventArgs *args)
{
  ?OnAudioDeviceRemoved@AD_XboxUserDeviceNotifier@@QE$AAAXPE$AAVObject@Platform@@PE$AAVAudioDeviceRemovedEventArgs@System@Xbox@Windows@@@Z(this, __formal, args);
}

/*
==============
AD_InterfaceThreadGetFlags
==============
*/

AD_EventFlagHelper<enum AD_InterfaceThreadSignals,0>::EventFlags *__fastcall AD_InterfaceThreadGetFlags(AD_EventFlagHelper<enum AD_InterfaceThreadSignals,0>::EventFlags *result, AD_Interface *const iface)
{
  return ?AD_InterfaceThreadGetFlags@@YA?AVEventFlags@?$AD_EventFlagHelper@W4AD_InterfaceThreadSignals@@$0A@@@QEAUAD_Interface@@@Z(result, iface);
}

/*
==============
AD_WinAudioDeviceNotifier::QueryInterface
==============
*/

HRESULT __fastcall AD_WinAudioDeviceNotifier::QueryInterface(AD_WinAudioDeviceNotifier *this, const _GUID *riid, void **pp_interface)
{
  return ?QueryInterface@AD_WinAudioDeviceNotifier@@UEAAJAEBU_GUID@@PEAPEAX@Z(this, riid, pp_interface);
}

/*
==============
AD_XboxUserDeviceNotifier::OnAudioDeviceChanged
==============
*/

void __fastcall AD_XboxUserDeviceNotifier::OnAudioDeviceChanged(AD_XboxUserDeviceNotifier *this, Platform::Object *__formal, Windows::Xbox::System::AudioDeviceChangedEventArgs *args)
{
  ?OnAudioDeviceChanged@AD_XboxUserDeviceNotifier@@QE$AAAXPE$AAVObject@Platform@@PE$AAVAudioDeviceChangedEventArgs@System@Xbox@Windows@@@Z(this, __formal, args);
}

/*
==============
AD_InterfaceThreadDestroy
==============
*/

void __fastcall AD_InterfaceThreadDestroy(AD_Interface *const iface)
{
  ?AD_InterfaceThreadDestroy@@YAXQEAUAD_Interface@@@Z(iface);
}

/*
==============
AD_XboxUserDeviceNotifier::~AD_XboxUserDeviceNotifier
==============
*/

void __fastcall AD_XboxUserDeviceNotifier::~AD_XboxUserDeviceNotifier(AD_XboxUserDeviceNotifier *this)
{
  ??1AD_XboxUserDeviceNotifier@@QE$AAA@XZ(this);
}

/*
==============
AD_InterfaceThreadCreateDevicesForUser
==============
*/

void __fastcall AD_InterfaceThreadCreateDevicesForUser(AD_Interface *const iface, const unsigned int userHandle)
{
  ?AD_InterfaceThreadCreateDevicesForUser@@YAXQEAUAD_Interface@@I@Z(iface, userHandle);
}

/*
==============
AD_InterfaceThreadInit
==============
*/

bool __fastcall AD_InterfaceThreadInit(AD_Interface *const iface)
{
  return ?AD_InterfaceThreadInit@@YA_NQEAUAD_Interface@@@Z(iface);
}

/*
==============
AD_WinAudioDeviceNotifier::OnDeviceRemoved
==============
*/

HRESULT __fastcall AD_WinAudioDeviceNotifier::OnDeviceRemoved(AD_WinAudioDeviceNotifier *this, const wchar_t *pwstrDeviceId)
{
  return ?OnDeviceRemoved@AD_WinAudioDeviceNotifier@@UEAAJPEB_W@Z(this, pwstrDeviceId);
}

/*
==============
AD_WinAudioDeviceNotifier::OnDefaultDeviceChanged
==============
*/

HRESULT __fastcall AD_WinAudioDeviceNotifier::OnDefaultDeviceChanged(AD_WinAudioDeviceNotifier *this, __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 flow, __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 role, const wchar_t *pwstrDeviceId)
{
  return ?OnDefaultDeviceChanged@AD_WinAudioDeviceNotifier@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEB_W@Z(this, flow, role, pwstrDeviceId);
}

/*
==============
AD_InterfaceThreadUpdateReopenedDevices
==============
*/

void __fastcall AD_InterfaceThreadUpdateReopenedDevices(AD_Interface *const iface)
{
  ?AD_InterfaceThreadUpdateReopenedDevices@@YAXQEAUAD_Interface@@@Z(iface);
}

/*
==============
AD_InitInterfaceThreadData
==============
*/

bool __fastcall AD_InitInterfaceThreadData(AD_Interface *const iface)
{
  return ?AD_InitInterfaceThreadData@@YA_NQEAUAD_Interface@@@Z(iface);
}

/*
==============
AD_WinAudioDeviceNotifier::OnDeviceStateChanged
==============
*/

HRESULT __fastcall AD_WinAudioDeviceNotifier::OnDeviceStateChanged(AD_WinAudioDeviceNotifier *this, const wchar_t *pwstrDeviceId, unsigned int dwNewState)
{
  return ?OnDeviceStateChanged@AD_WinAudioDeviceNotifier@@UEAAJPEB_WK@Z(this, pwstrDeviceId, dwNewState);
}

/*
==============
AD_EndpointSetDeviceConfig
==============
*/

bool __fastcall AD_EndpointSetDeviceConfig(AD_Interface *const iface, AD_Endpoint *const endpoint, const AD_DeviceConfigRequest *configRequest)
{
  return ?AD_EndpointSetDeviceConfig@@YA_NQEAUAD_Interface@@QEAUAD_Endpoint@@AEBUAD_DeviceConfigRequest@@@Z(iface, endpoint, configRequest);
}

/*
==============
AD_WinAudioDeviceNotifier::Release
==============
*/

unsigned int __fastcall AD_WinAudioDeviceNotifier::Release(AD_WinAudioDeviceNotifier *this)
{
  return ?Release@AD_WinAudioDeviceNotifier@@UEAAKXZ(this);
}

/*
==============
AD_WinAudioDeviceNotifier::OnDeviceAdded
==============
*/

HRESULT __fastcall AD_WinAudioDeviceNotifier::OnDeviceAdded(AD_WinAudioDeviceNotifier *this, const wchar_t *pwstrDeviceId)
{
  return ?OnDeviceAdded@AD_WinAudioDeviceNotifier@@UEAAJPEB_W@Z(this, pwstrDeviceId);
}

/*
==============
AD_XboxUserDeviceNotifier::AD_XboxUserDeviceNotifier
==============
*/

void __fastcall AD_XboxUserDeviceNotifier::AD_XboxUserDeviceNotifier(AD_XboxUserDeviceNotifier *this)
{
  ??0AD_XboxUserDeviceNotifier@@QE$AAA@XZ(this);
}

/*
==============
AD_DestroyInterfaceThreadData
==============
*/

void __fastcall AD_DestroyInterfaceThreadData(AD_Interface *const iface)
{
  ?AD_DestroyInterfaceThreadData@@YAXQEAUAD_Interface@@@Z(iface);
}

/*
==============
AD_WinAudioDeviceNotifier::AddRef
==============
*/

unsigned int __fastcall AD_WinAudioDeviceNotifier::AddRef(AD_WinAudioDeviceNotifier *this)
{
  return ?AddRef@AD_WinAudioDeviceNotifier@@UEAAKXZ(this);
}

/*
==============
AD_EndpointGetDeviceConfig
==============
*/

bool __fastcall AD_EndpointGetDeviceConfig(AD_Endpoint *const endpoint, AD_DeviceConfig *const destDevInfo)
{
  return ?AD_EndpointGetDeviceConfig@@YA_NQEAUAD_Endpoint@@QEAUAD_DeviceConfig@@@Z(endpoint, destDevInfo);
}

/*
==============
AD_XboxUserDeviceNotifier::OnAudioDeviceAdded
==============
*/

void __fastcall AD_XboxUserDeviceNotifier::OnAudioDeviceAdded(AD_XboxUserDeviceNotifier *this, Platform::Object *__formal, Windows::Xbox::System::AudioDeviceAddedEventArgs *args)
{
  ?OnAudioDeviceAdded@AD_XboxUserDeviceNotifier@@QE$AAAXPE$AAVObject@Platform@@PE$AAVAudioDeviceAddedEventArgs@System@Xbox@Windows@@@Z(this, __formal, args);
}

/*
==============
AD_InterfaceThreadDestroyDevicesForUser
==============
*/

void __fastcall AD_InterfaceThreadDestroyDevicesForUser(AD_Interface *const iface, const unsigned int userHandle)
{
  ?AD_InterfaceThreadDestroyDevicesForUser@@YAXQEAUAD_Interface@@I@Z(iface, userHandle);
}

/*
==============
Init
==============
*/
__int64 Init()
{
  int v0; 
  DoubleInstruction *v1; 
  int v2; 
  int i; 
  int v4; 
  int v5; 

  instructions[5].instruction[0].size = 4;
  instructions[0].instruction[1] = 0i64;
  instructions[1].instruction[0] = (DoubleInstruction::Instruction)1i64;
  instructions[0].instruction[0] = (DoubleInstruction::Instruction)2i64;
  v0 = 6;
  instructions[1].instruction[1] = 0i64;
  *(_DWORD *)instructions[2].instruction = 1;
  v1 = &instructions[19];
  instructions[2].instruction[0].size = 1;
  v2 = 0;
  instructions[2].instruction[1] = 0i64;
  *(_DWORD *)instructions[3].instruction = 1;
  instructions[3].instruction[0].size = 2;
  instructions[3].instruction[1] = 0i64;
  *(_DWORD *)instructions[4].instruction = 1;
  instructions[4].instruction[0].size = 3;
  instructions[4].instruction[1] = 0i64;
  *(_DWORD *)instructions[5].instruction = 1;
  instructions[5].instruction[1] = 0i64;
  *(_DWORD *)instructions[6].instruction = 1;
  instructions[6].instruction[1] = 0i64;
  *(_DWORD *)instructions[7].instruction = 1;
  instructions[7].instruction[0].size = 6;
  instructions[7].instruction[1] = 0i64;
  *(_DWORD *)instructions[8].instruction = 1;
  instructions[8].instruction[1] = 0i64;
  *(_DWORD *)instructions[9].instruction = 1;
  instructions[9].instruction[1] = 0i64;
  *(_DWORD *)instructions[10].instruction = 1;
  instructions[10].instruction[1] = 0i64;
  *(_DWORD *)instructions[11].instruction = 1;
  instructions[11].instruction[1] = 0i64;
  *(_DWORD *)instructions[12].instruction = 1;
  instructions[12].instruction[1] = 0i64;
  *(_DWORD *)instructions[13].instruction = 1;
  instructions[13].instruction[1] = 0i64;
  *(_DWORD *)instructions[14].instruction = 1;
  instructions[14].instruction[1] = 0i64;
  *(_DWORD *)instructions[15].instruction = 1;
  instructions[15].instruction[1] = 0i64;
  *(_DWORD *)instructions[16].instruction = 1;
  instructions[16].instruction[1] = 0i64;
  *(_DWORD *)instructions[17].instruction = 1;
  instructions[17].instruction[1] = 0i64;
  *(_DWORD *)instructions[18].instruction = 1;
  instructions[18].instruction[1] = 0i64;
  instructions[6].instruction[0].size = 5;
  instructions[8].instruction[0].size = 7;
  instructions[9].instruction[0].size = 8;
  instructions[10].instruction[0].size = 9;
  instructions[11].instruction[0].size = 10;
  instructions[12].instruction[0].size = 11;
  instructions[13].instruction[0].size = 12;
  instructions[14].instruction[0].size = 13;
  instructions[15].instruction[0].size = 14;
  instructions[16].instruction[0].size = 15;
  instructions[17].instruction[0].size = 16;
  instructions[18].instruction[0].size = 17;
  do
  {
    *((_WORD *)v1->instruction + 1) = v2;
    *(_WORD *)v1->instruction = 3;
    v1->instruction[0].size = 0;
    v1->instruction[1] = 0i64;
    *((_WORD *)v1[1].instruction + 1) = v2;
    *(_WORD *)v1[1].instruction = 3;
    v1[1].instruction[0].size = 4;
    v1[1].instruction[1] = 0i64;
    *(_WORD *)v1[2].instruction = 3;
    *((_WORD *)v1[2].instruction + 1) = v2;
    v1[2].instruction[0].size = 5;
    v1[2].instruction[1] = 0i64;
    *(_WORD *)v1[3].instruction = 3;
    *((_WORD *)v1[3].instruction + 1) = v2;
    v1[3].instruction[0].size = 6;
    v1[3].instruction[1] = 0i64;
    *(_WORD *)v1[4].instruction = 3;
    *((_WORD *)v1[4].instruction + 1) = v2;
    v1[4].instruction[0].size = 7;
    v1[4].instruction[1] = 0i64;
    *(_WORD *)v1[5].instruction = 3;
    *((_WORD *)v1[5].instruction + 1) = v2;
    v1[5].instruction[0].size = 8;
    v1[5].instruction[1] = 0i64;
    *(_WORD *)v1[6].instruction = 3;
    *((_WORD *)v1[6].instruction + 1) = v2;
    v1[6].instruction[0].size = 9;
    v1[6].instruction[1] = 0i64;
    *(_WORD *)v1[7].instruction = 3;
    *((_WORD *)v1[7].instruction + 1) = v2;
    v1[7].instruction[0].size = 10;
    v1[7].instruction[1] = 0i64;
    *(_WORD *)v1[8].instruction = 3;
    *((_WORD *)v1[8].instruction + 1) = v2;
    v1[8].instruction[0].size = 11;
    v1[8].instruction[1] = 0i64;
    *(_WORD *)v1[9].instruction = 3;
    *((_WORD *)v1[9].instruction + 1) = v2;
    v1[9].instruction[0].size = 12;
    v1[9].instruction[1] = 0i64;
    *(_WORD *)v1[10].instruction = 3;
    *((_WORD *)v1[10].instruction + 1) = v2;
    v1[10].instruction[0].size = 13;
    v1[10].instruction[1] = 0i64;
    *(_WORD *)v1[11].instruction = 3;
    *((_WORD *)v1[11].instruction + 1) = v2;
    v1[11].instruction[0].size = 14;
    v1[11].instruction[1] = 0i64;
    *(_WORD *)v1[12].instruction = 3;
    *((_WORD *)v1[12].instruction + 1) = v2;
    v1[12].instruction[0].size = 15;
    v1[12].instruction[1] = 0i64;
    *(_WORD *)v1[13].instruction = 3;
    *((_WORD *)v1[13].instruction + 1) = v2;
    v1[13].instruction[0].size = 16;
    v1[13].instruction[1] = 0i64;
    *(_WORD *)v1[14].instruction = 3;
    *((_WORD *)v1[14].instruction + 1) = v2;
    v1[14].instruction[0].size = 17;
    v1[14].instruction[1] = 0i64;
    *(_WORD *)v1[15].instruction = 3;
    *((_WORD *)v1[15].instruction + 1) = v2++;
    v1[15].instruction[0].size = 18;
    v1[15].instruction[1] = 0i64;
    v1 += 16;
  }
  while ( v2 <= 8 );
  if ( (((char *)v1 - (char *)instructions) & 0xFFFFFFFFFFFFFFF0ui64) != 2608 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bdiff.cpp", 157, ASSERT_TYPE_ASSERT, "(now - instructions == 163)", (const char *)&queryFormat, "now - instructions == 163") )
    __debugbreak();
  for ( i = 0; i <= 5; ++i )
  {
    v4 = 1;
    do
    {
      v1->instruction[0].size = v4;
      *(_DWORD *)v1->instruction = 1;
      *(_WORD *)&v1->instruction[1] = 3;
      *((_WORD *)&v1->instruction[1] + 1) = i;
      v1->instruction[1].size = 4;
      *(_DWORD *)v1[1].instruction = 1;
      v1[1].instruction[0].size = v4;
      *(_WORD *)&v1[1].instruction[1] = 3;
      *((_WORD *)&v1[1].instruction[1] + 1) = i;
      v1[1].instruction[1].size = 5;
      *(_DWORD *)v1[2].instruction = 1;
      v1[2].instruction[0].size = v4++;
      *(_WORD *)&v1[2].instruction[1] = 3;
      *((_WORD *)&v1[2].instruction[1] + 1) = i;
      v1[2].instruction[1].size = 6;
      v1 += 3;
    }
    while ( v4 <= 4 );
  }
  if ( (((char *)v1 - (char *)instructions) & 0xFFFFFFFFFFFFFFF0ui64) != 3760 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bdiff.cpp", 163, ASSERT_TYPE_ASSERT, "(now - instructions == 235)", (const char *)&queryFormat, "now - instructions == 235") )
    __debugbreak();
  do
  {
    *((_WORD *)&v1->instruction[1] + 1) = v0;
    *(_DWORD *)v1->instruction = 1;
    v1->instruction[0].size = 1;
    *(_WORD *)&v1->instruction[1] = 3;
    v1->instruction[1].size = 4;
    *(_DWORD *)v1[1].instruction = 1;
    v1[1].instruction[0].size = 2;
    *(_WORD *)&v1[1].instruction[1] = 3;
    *((_WORD *)&v1[1].instruction[1] + 1) = v0;
    v1[1].instruction[1].size = 4;
    *(_DWORD *)v1[2].instruction = 1;
    v1[2].instruction[0].size = 3;
    *(_WORD *)&v1[2].instruction[1] = 3;
    *((_WORD *)&v1[2].instruction[1] + 1) = v0;
    v1[2].instruction[1].size = 4;
    *(_DWORD *)v1[3].instruction = 1;
    v1[3].instruction[0].size = 4;
    *(_WORD *)&v1[3].instruction[1] = 3;
    *((_WORD *)&v1[3].instruction[1] + 1) = v0++;
    v1[3].instruction[1].size = 4;
    v1 += 4;
  }
  while ( v0 <= 8 );
  if ( (((char *)v1 - (char *)instructions) & 0xFFFFFFFFFFFFFFF0ui64) != 3952 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bdiff.cpp", 168, ASSERT_TYPE_ASSERT, "(now - instructions == 247)", (const char *)&queryFormat, "now - instructions == 247") )
    __debugbreak();
  v5 = 0;
  do
  {
    *((_WORD *)v1->instruction + 1) = v5++;
    *(_WORD *)v1->instruction = 3;
    v1->instruction[0].size = 4;
    *(_DWORD *)&v1->instruction[1] = 1;
    v1->instruction[1].size = 1;
    ++v1;
  }
  while ( v5 <= 8 );
  if ( (((char *)v1 - (char *)instructions) & 0xFFFFFFFFFFFFFFF0ui64) != 4096 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bdiff.cpp", 172, ASSERT_TYPE_ASSERT, "(now - instructions == 256)", (const char *)&queryFormat, "now - instructions == 256") )
    __debugbreak();
  return 0i64;
}

/*
==============
AD_XboxUserDeviceNotifier::AD_XboxUserDeviceNotifier
==============
*/
void AD_XboxUserDeviceNotifier::AD_XboxUserDeviceNotifier(AD_XboxUserDeviceNotifier *this)
{
  void *v2; 
  void *v3; 
  int ActivationFactoryByPCWSTR; 
  int v5; 
  Platform::Object_vtbl *v6; 
  void *v7; 
  void *v8; 
  int v9; 
  int v10; 
  Platform::Object_vtbl *v11; 
  __int64 v12[2]; 
  Platform::Guid pGuid; 
  Platform::Guid v14; 
  __int128 v15; 
  __int128 v16; 
  void *ppActivationFactory; 
  void *v18; 
  Platform::Object_vtbl *v19; 

  v12[1] = -2i64;
  Platform::Object::Object(&this->Platform::Object);
  this->__IAD_XboxUserDeviceNotifierPublicNonVirtuals::Platform::Object::__vftable = (AD_XboxUserDeviceNotifier_vtbl *)&AD_XboxUserDeviceNotifier::`vftable'{for `__IAD_XboxUserDeviceNotifierPublicNonVirtuals'};
  this->Platform::IDisposable::Platform::Object::__vftable = (Platform::IDisposable_vtbl *)&AD_XboxUserDeviceNotifier::`vftable'{for `Platform::IDisposable'};
  this->Platform::Object::__vftable = (Platform::Object_vtbl *)&AD_XboxUserDeviceNotifier::`vftable'{for `Platform::Object'};
  this->Platform::Details::IWeakReferenceSource::__abi_IUnknown::__vftable = (Platform::Details::IWeakReferenceSource_vtbl *)&AD_XboxUserDeviceNotifier::`vftable'{for `__abi_IUnknown'};
  this->Platform::Details::IWeakReferenceSource::Platform::Object::__vftable = (Platform::Object_vtbl *)&AD_XboxUserDeviceNotifier::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  this->__abi_reference_count.__pUnkMarshal = (__abi_IUnknown *volatile)-1i64;
  if ( __abi_module )
    __abi_module->__abi_IncrementObjectCount(__abi_module);
  ppActivationFactory = Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
  *(_QWORD *)&v15 = AD_XboxUserDeviceNotifier::OnAudioDeviceAdded;
  DWORD2(v15) = 0;
  Windows::Foundation::EventHandler<Windows::Xbox::System::AudioDeviceAddedEventArgs __gc *>::EventHandler<Windows::Xbox::System::AudioDeviceAddedEventArgs __gc *>((Windows::Foundation::EventHandler<Windows::Xbox::System::AudioDeviceAddedEventArgs _> *)ppActivationFactory, this, &v15, (Platform::CallbackContext)2, 0);
  v3 = v2;
  v18 = v2;
  pGuid.__vftable = (Platform::Object_vtbl *)0x4A507FC6B4F23A93i64;
  *(_DWORD *)&pGuid.__d = 9786289;
  *(_DWORD *)&pGuid.__h = 1352546326;
  ppActivationFactory = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR((void *)L"Windows.Xbox.System.User", &pGuid, &ppActivationFactory);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v19 = NULL;
  v5 = (*(__int64 (__fastcall **)(void *, void *, Platform::Object_vtbl **))(*(_QWORD *)ppActivationFactory + 144i64))(ppActivationFactory, v3, &v19);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  v6 = v19;
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  this->deviceAddedEventToken.__vftable = v6;
  if ( v3 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v3 + 16i64))(v3);
  ppActivationFactory = Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
  *(_QWORD *)&v15 = AD_XboxUserDeviceNotifier::OnAudioDeviceChanged;
  DWORD2(v15) = 0;
  v16 = v15;
  Windows::Foundation::EventHandler<Windows::Xbox::System::AudioDeviceChangedEventArgs __gc *>::EventHandler<Windows::Xbox::System::AudioDeviceChangedEventArgs __gc *>((Windows::Foundation::EventHandler<Windows::Xbox::System::AudioDeviceChangedEventArgs _> *)ppActivationFactory, this, &v16, (Platform::CallbackContext)2, 0);
  v8 = v7;
  ppActivationFactory = v7;
  v14.__vftable = (Platform::Object_vtbl *)0x4A507FC6B4F23A93i64;
  *(_DWORD *)&v14.__d = 9786289;
  *(_DWORD *)&v14.__h = 1352546326;
  v18 = NULL;
  v9 = __winRT::__getActivationFactoryByPCWSTR((void *)L"Windows.Xbox.System.User", &v14, &v18);
  if ( v9 < 0 )
    __abi_WinRTraiseException(v9);
  v12[0] = 0i64;
  v10 = (*(__int64 (__fastcall **)(void *, void *, __int64 *))(*(_QWORD *)v18 + 176i64))(v18, v8, v12);
  if ( v10 < 0 )
    __abi_WinRTraiseException(v10);
  v11 = (Platform::Object_vtbl *)v12[0];
  if ( v18 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 16i64))(v18);
  this->deviceChangedEventToken.__vftable = v11;
  if ( v8 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16i64))(v8);
}

/*
==============
AD_XboxUserDeviceNotifier::~AD_XboxUserDeviceNotifier
==============
*/
void AD_XboxUserDeviceNotifier::~AD_XboxUserDeviceNotifier(AD_XboxUserDeviceNotifier *this)
{
  Platform::Object_vtbl *v2; 
  int ActivationFactoryByPCWSTR; 
  int v4; 
  Platform::Object_vtbl *v5; 
  int v6; 
  int v7; 
  Platform::Guid pGuid; 
  void *ppActivationFactory; 

  v2 = this->deviceAddedEventToken.__vftable;
  pGuid.__vftable = (Platform::Object_vtbl *)0x4A507FC6B4F23A93i64;
  *(_DWORD *)&pGuid.__d = 9786289;
  *(_DWORD *)&pGuid.__h = 1352546326;
  ppActivationFactory = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR((void *)L"Windows.Xbox.System.User", &pGuid, &ppActivationFactory);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v4 = (*(__int64 (__fastcall **)(void *, Platform::Object_vtbl *))(*(_QWORD *)ppActivationFactory + 152i64))(ppActivationFactory, v2);
  if ( v4 < 0 )
    __abi_WinRTraiseException(v4);
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  v5 = this->deviceChangedEventToken.__vftable;
  pGuid.__vftable = (Platform::Object_vtbl *)0x4A507FC6B4F23A93i64;
  *(_DWORD *)&pGuid.__d = 9786289;
  *(_DWORD *)&pGuid.__h = 1352546326;
  ppActivationFactory = NULL;
  v6 = __winRT::__getActivationFactoryByPCWSTR((void *)L"Windows.Xbox.System.User", &pGuid, &ppActivationFactory);
  if ( v6 < 0 )
    __abi_WinRTraiseException(v6);
  v7 = (*(__int64 (__fastcall **)(void *, Platform::Object_vtbl *))(*(_QWORD *)ppActivationFactory + 184i64))(ppActivationFactory, v5);
  if ( v7 < 0 )
    __abi_WinRTraiseException(v7);
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
}

/*
==============
AD_DestroyInterfaceThreadData
==============
*/
void AD_DestroyInterfaceThreadData(AD_Interface *const iface)
{
  unsigned int v2; 
  AD_Endpoint *m_elements; 
  bool v4; 
  unsigned int v5; 
  AD_Endpoint *v6; 
  bool v7; 
  IMMDeviceEnumerator *instance; 
  IMMDeviceEnumerator *v9; 
  IMMDeviceEnumerator *pEnumerator; 

  if ( !iface && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 561, ASSERT_TYPE_ASSERT, "iface != nullptr", "iface != nullptr") )
    __debugbreak();
  iface->interfaceThreadData.inputDevicesChanged = 0;
  iface->interfaceThreadData.outputDevicesChanged = 0;
  v2 = 0;
  m_elements = iface->interfaceThreadData.inputEndpoints.m_elements;
  v4 = 1;
  do
  {
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    AD_EndpointDestroy(m_elements);
    ++v2;
    ++m_elements;
    v4 = v2 < 2;
  }
  while ( v2 != 2 );
  v5 = 0;
  v6 = iface->interfaceThreadData.outputEndpoints.m_elements;
  v7 = 1;
  do
  {
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    AD_EndpointDestroy(v6);
    ++v5;
    ++v6;
    v7 = v5 < 4;
  }
  while ( v5 != 4 );
  instance = iface->interfaceThreadData.deviceEnumerator.instance;
  if ( instance )
  {
    instance->UnregisterEndpointNotificationCallback(instance, &iface->interfaceThreadData.deviceNotifier);
    v9 = iface->interfaceThreadData.deviceEnumerator.instance;
    if ( v9 )
    {
      iface->interfaceThreadData.deviceEnumerator.instance = NULL;
      v9->Release(v9);
    }
  }
  pEnumerator = iface->interfaceThreadData.deviceNotifier.pEnumerator;
  if ( pEnumerator )
  {
    pEnumerator->Release(pEnumerator);
    iface->interfaceThreadData.deviceNotifier.pEnumerator = NULL;
  }
}

/*
==============
AD_EndpointGetDeviceConfig
==============
*/
bool AD_EndpointGetDeviceConfig(AD_Endpoint *const endpoint, AD_DeviceConfig *const destDevInfo)
{
  bool v4; 
  char v5; 
  AD_DeviceGUID *p_currentDeviceId; 
  bool result; 

  if ( !endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 1046, ASSERT_TYPE_ASSERT, "endpoint != nullptr", "endpoint != nullptr") )
    __debugbreak();
  if ( !destDevInfo && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 1047, ASSERT_TYPE_ASSERT, "destDevInfo != nullptr", "destDevInfo != nullptr") )
    __debugbreak();
  destDevInfo->format = endpoint->platformData->deviceFormat;
  v4 = endpoint->flow == Screen && endpoint->platformData->state == 1;
  destDevInfo->isMicEnabled = v4;
  destDevInfo->isKnownHeadset = ((endpoint->platformData->deviceFormFactor - 3) & 0xFFFFFFFD) == 0;
  if ( endpoint->flow )
    v5 = 0;
  else
    v5 = endpoint->platformData[656].currentDeviceId.value[45];
  destDevInfo->spatialSupport = v5;
  switch ( endpoint->platformData->deviceChannelCount )
  {
    case 1u:
      destDevInfo->channelCount = Mono;
      goto LABEL_22;
    case 2u:
      destDevInfo->channelCount = Stereo;
      goto LABEL_22;
    case 4u:
      destDevInfo->channelCount = Quadraphonic;
      goto LABEL_22;
    case 6u:
      destDevInfo->channelCount = Surround_5_1;
      goto LABEL_22;
    case 8u:
      destDevInfo->channelCount = Surround_7_1;
      goto LABEL_22;
    case 0xAu:
      destDevInfo->channelCount = Surround_7_1_2;
      goto LABEL_22;
    case 0xCu:
      destDevInfo->channelCount = Surround_7_1_4;
      goto LABEL_22;
    case 0x10u:
      destDevInfo->channelCount = Surround_7_1_4_4;
LABEL_22:
      destDevInfo->endpointType = endpoint->platformData->currentEndpointType;
      p_currentDeviceId = &endpoint->platformData->currentDeviceId;
      *(__m256i *)destDevInfo->customEndpointId.value = *(__m256i *)p_currentDeviceId->value;
      *(_OWORD *)&destDevInfo->customEndpointId.value[32] = *(_OWORD *)&p_currentDeviceId->value[32];
      *(double *)&destDevInfo->customEndpointId.value[48] = *(double *)&p_currentDeviceId->value[48];
      result = 1;
      break;
    default:
      destDevInfo->channelCount = Invalid;
      result = 0;
      break;
  }
  return result;
}

/*
==============
AD_EndpointSetDeviceConfig
==============
*/
char AD_EndpointSetDeviceConfig(AD_Interface *const iface, AD_Endpoint *const endpoint, const AD_DeviceConfigRequest *configRequest)
{
  bool v6; 
  AD_Endpoint_Platform *platformData; 
  bool v8; 
  AD_Endpoint_Platform *v9; 
  AD_EndpointType endpointType; 
  char v11; 
  AD_Endpoint_Platform *v12; 
  int v13; 

  if ( !endpoint && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 1115, ASSERT_TYPE_ASSERT, "endpoint != nullptr", "endpoint != nullptr") )
    __debugbreak();
  v6 = 0;
  if ( endpoint->flow || endpoint->role )
  {
    if ( configRequest->spatialSupport && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 1127, ASSERT_TYPE_ASSERT, "configRequest.spatialSupport == false", "Spatial audio is only supported on the main SFX endpoint.") )
      __debugbreak();
  }
  else
  {
    platformData = endpoint->platformData;
    v8 = platformData[656].currentDeviceId.value[44] == configRequest->spatialSupport;
    platformData[656].currentDeviceId.value[44] = configRequest->spatialSupport;
    v6 = !v8;
  }
  v9 = endpoint->platformData;
  endpointType = configRequest->endpointType;
  v11 = v6;
  v8 = v9->pendingEndpointType == endpointType;
  v9->pendingEndpointType = endpointType;
  v12 = endpoint->platformData;
  if ( !v8 )
    v11 = 1;
  if ( configRequest->endpointType == Custom )
  {
    v13 = memcmp_0(&v12->pendingDeviceId, &configRequest->customEndpointId, 0x38ui64);
    *(__m256i *)v12->pendingDeviceId.value = *(__m256i *)configRequest->customEndpointId.value;
    *(_OWORD *)&v12->pendingDeviceId.value[32] = *(_OWORD *)&configRequest->customEndpointId.value[32];
    *(double *)&v12->pendingDeviceId.value[48] = *(double *)&configRequest->customEndpointId.value[48];
    v11 |= v13 != 0;
  }
  else
  {
    v12->pendingDeviceId.value[0] = 0;
  }
  if ( v11 )
  {
    AD_EndpointScheduleReOpen(endpoint);
    if ( !iface->interfaceThreadSignals.event && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 140, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
      __debugbreak();
    AD_SignalEventFlags(iface->interfaceThreadSignals.event, 4ui64);
  }
  return 1;
}

/*
==============
AD_InitInterfaceThreadData
==============
*/
char AD_InitInterfaceThreadData(AD_Interface *const iface)
{
  AD_COMContainer<IMMDeviceEnumerator> *p_deviceEnumerator; 
  AD_XboxUserDeviceNotifier *v4; 
  AD_XboxUserDeviceNotifier *v5; 
  AD_XboxUserDeviceNotifier *v6; 
  AD_XboxUserDeviceNotifier *userDeviceNotifier; 
  unsigned int v8; 
  AD_Endpoint *m_elements; 
  AD_Input_Endpoint_Platform *v10; 
  bool v11; 
  unsigned int v12; 
  AD_Endpoint *v13; 
  AD_Output_Endpoint_Platform *v14; 
  bool v15; 
  void *deviceMixEvent; 
  void *EventHandleForFlag; 
  unsigned int v18; 
  AD_EndpointConfig *v19; 
  void *v20; 
  unsigned int v21; 
  AD_EndpointConfig *p_dest; 
  AD_Endpoint *v23; 
  unsigned int v24; 
  unsigned int v25; 
  AD_EndpointConfig *p_config; 
  void *v27; 
  AD_EndpointConfig *v28; 
  AD_Endpoint *v29; 
  AD_EndpointConfig dest; 
  AD_EndpointConfig v31; 
  AD_EndpointConfig v32; 
  void **v33; 
  AD_EndpointConfig config; 

  if ( !iface && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 448, ASSERT_TYPE_ASSERT, "iface != nullptr", "iface != nullptr") )
    __debugbreak();
  p_deviceEnumerator = &iface->interfaceThreadData.deviceEnumerator;
  if ( iface->interfaceThreadData.deviceEnumerator.instance && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 453, ASSERT_TYPE_ASSERT, "!threadData->deviceEnumerator", "!threadData->deviceEnumerator") )
    __debugbreak();
  if ( p_deviceEnumerator->instance && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_platform_util.h", 404, ASSERT_TYPE_ASSERT, "instance == nullptr", "instance == nullptr") )
    __debugbreak();
  if ( CoCreateInstance(&GUID_bcde0395_e52f_467c_8e3d_c4579291692e, NULL, 1u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, (LPVOID *)&iface->interfaceThreadData.deviceEnumerator.instance) < 0 )
    return 0;
  if ( !iface && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 20, ASSERT_TYPE_ASSERT, "iface != nullptr", "iface != nullptr") )
    __debugbreak();
  iface->interfaceThreadData.deviceNotifier.parentInterface = iface;
  CoCreateInstance(&GUID_bcde0395_e52f_467c_8e3d_c4579291692e, NULL, 1u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, (LPVOID *)&iface->interfaceThreadData.deviceNotifier.pEnumerator);
  p_deviceEnumerator->instance->RegisterEndpointNotificationCallback(p_deviceEnumerator->instance, &iface->interfaceThreadData.deviceNotifier);
  v4 = (AD_XboxUserDeviceNotifier *)Platform::Details::Heap::Allocate(0x40ui64, 0x58ui64);
  AD_XboxUserDeviceNotifier::AD_XboxUserDeviceNotifier(v4);
  v6 = v5;
  userDeviceNotifier = iface->interfaceThreadData.userDeviceNotifier;
  if ( v5 != userDeviceNotifier )
  {
    if ( v5 )
    {
      v5->__abi_AddRef(v5);
      userDeviceNotifier = iface->interfaceThreadData.userDeviceNotifier;
    }
    if ( userDeviceNotifier )
      userDeviceNotifier->__abi_Release(userDeviceNotifier);
    iface->interfaceThreadData.userDeviceNotifier = v6;
  }
  if ( v6 )
    v6->__abi_Release(v6);
  iface->interfaceThreadData.inputDeviceChangedTimestamp.v = 0i64;
  iface->interfaceThreadData.inputDevicesChanged = 0;
  v8 = 0;
  m_elements = iface->interfaceThreadData.inputEndpoints.m_elements;
  v10 = iface->interfaceThreadData.platformInputEndpoints.m_elements;
  v11 = 1;
  do
  {
    if ( !v11 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
    }
    AD_EndpointInit(m_elements, v10);
    ++v8;
    ++v10;
    ++m_elements;
    v11 = v8 < 2;
  }
  while ( v8 != 2 );
  iface->interfaceThreadData.outputDeviceChangedTimestamp.v = 0i64;
  iface->interfaceThreadData.outputDevicesChanged = 0;
  v12 = 0;
  v13 = iface->interfaceThreadData.outputEndpoints.m_elements;
  v14 = iface->interfaceThreadData.platformOutputEndpoints.m_elements;
  v15 = 1;
  do
  {
    if ( !v15 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
    }
    AD_EndpointInit(v13, v14);
    ++v12;
    ++v14;
    ++v13;
    v15 = v12 < 4;
  }
  while ( v12 != 4 );
  deviceMixEvent = AD_GetEventHandleForFlag(iface->interfaceThreadSignals.event, 3u);
  AD_SetEndpointConfig(&dest, Graph, SFX, Arrow, iface->interfaceThreadData.deviceEnumerator.instance, deviceMixEvent);
  if ( iface->options.supportSpatialAudio )
  {
    dest.supportSpatialAudio = 1;
    dest.spatialData = &iface->interfaceThreadData.spatialData;
  }
  EventHandleForFlag = AD_GetEventHandleForFlag(iface->interfaceThreadSignals.event, 4u);
  AD_SetEndpointConfig(&v31, Graph, BGM, Arrow, iface->interfaceThreadData.deviceEnumerator.instance, EventHandleForFlag);
  v31.restrictBGM = iface->options.restrictedBGM;
  v18 = 2;
  v19 = &v32;
  do
  {
    v20 = AD_GetEventHandleForFlag(iface->interfaceThreadSignals.event, v18 + 3);
    AD_SetEndpointConfig(v19, Graph, Communications, (AD_EndpointType)1, iface->interfaceThreadData.deviceEnumerator.instance, v20);
    ++v18;
    ++v19;
  }
  while ( v18 < 4 );
  v21 = 0;
  p_dest = &dest;
  v23 = iface->interfaceThreadData.outputEndpoints.m_elements;
  do
  {
    AD_EndpointConfigure(v23, p_dest);
    ++v21;
    ++p_dest;
    ++v23;
  }
  while ( v21 < 4 );
  v33 = &AD_EnumArray<AD_EndpointConfig,enum AD_InputEndpoints,2,16>::`vftable';
  v24 = 0;
  v25 = 0;
  p_config = &config;
  do
  {
    v27 = AD_GetEventHandleForFlag(iface->interfaceThreadSignals.event, v25 + 8);
    AD_SetEndpointConfig(p_config, Screen, Communications, (AD_EndpointType)1, iface->interfaceThreadData.deviceEnumerator.instance, v27);
    ++v25;
    ++p_config;
  }
  while ( v25 < 2 );
  v28 = &config;
  v29 = iface->interfaceThreadData.inputEndpoints.m_elements;
  do
  {
    AD_EndpointConfigure(v29, v28);
    ++v24;
    ++v28;
    ++v29;
  }
  while ( v24 < 2 );
  return 1;
}

/*
==============
AD_InterfaceThreadCreateDevicesForUser
==============
*/
void AD_InterfaceThreadCreateDevicesForUser(AD_Interface *const iface, const unsigned int userHandle)
{
  __int64 v2; 
  const AD_UserInfo *Info; 
  const AD_UserInfo *v5; 
  AD_OutputEndpoints v6; 
  const AD_Endpoint *v7; 
  AD_Endpoint *v8; 
  AD_Endpoint *v9; 

  v2 = userHandle;
  if ( !iface && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 953, ASSERT_TYPE_ASSERT, "iface != nullptr", "iface != nullptr") )
    __debugbreak();
  Info = AD_UserManagerGetInfo(&iface->userManager, v2);
  v5 = Info;
  if ( Info->userId == AD_InvalidUser.userId && Info->platformId == AD_InvalidUser.platformId && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 956, ASSERT_TYPE_ASSERT, "*userInfo != AD_InvalidUser", "*userInfo != AD_InvalidUser") )
    __debugbreak();
  v6 = v2 + 2;
  if ( (unsigned int)(v2 + 2) >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
    __debugbreak();
  v7 = &iface->interfaceThreadData.outputEndpoints.m_elements[(unsigned __int64)(unsigned int)v6];
  if ( !AD_EndpointIsActive(v7) )
  {
    if ( (unsigned int)v6 >= Quadraphonic && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    if ( !AD_EndpointIsBoundToUser(v7, v5) )
    {
      if ( (unsigned int)v6 >= Quadraphonic && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
      if ( !AD_EndpointIsOpenPending(v7) )
      {
        v8 = AD_EnumArray<AD_Endpoint,enum AD_OutputEndpoints,4,16>::operator[](&iface->interfaceThreadData.outputEndpoints, v6);
        AD_EndpointScheduleOpen(v8, v5);
        iface->interfaceThreadData.outputDevicesChanged = 1;
      }
    }
  }
  if ( (unsigned int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
    __debugbreak();
  if ( !AD_EndpointIsActive(&iface->interfaceThreadData.inputEndpoints.m_elements[v2]) )
  {
    if ( (unsigned int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    if ( !AD_EndpointIsBoundToUser(&iface->interfaceThreadData.inputEndpoints.m_elements[v2], v5) )
    {
      if ( (unsigned int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
      if ( !AD_EndpointIsOpenPending(&iface->interfaceThreadData.inputEndpoints.m_elements[v2]) )
      {
        v9 = AD_EnumArray<AD_Endpoint,enum AD_InputEndpoints,2,16>::operator[](&iface->interfaceThreadData.inputEndpoints, (AD_InputEndpoints)v2);
        AD_EndpointScheduleOpen(v9, v5);
        iface->interfaceThreadData.inputDevicesChanged = 1;
      }
    }
  }
}

/*
==============
AD_InterfaceThreadDestroy
==============
*/
void AD_InterfaceThreadDestroy(AD_Interface *const iface)
{
  unsigned int v1; 
  AD_Endpoint *m_elements; 
  unsigned int v3; 
  bool v4; 
  AD_Endpoint *v6; 
  bool v7; 

  v1 = 0;
  m_elements = iface->interfaceThreadData.outputEndpoints.m_elements;
  v3 = 0;
  v4 = 1;
  do
  {
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    AD_EndpointClose(m_elements);
    ++v3;
    ++m_elements;
    v4 = v3 < 4;
  }
  while ( v3 != 4 );
  v6 = iface->interfaceThreadData.inputEndpoints.m_elements;
  v7 = 1;
  do
  {
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    AD_EndpointClose(v6);
    ++v1;
    ++v6;
    v7 = v1 < 2;
  }
  while ( v1 != 2 );
}

/*
==============
AD_InterfaceThreadDestroyDevicesForUser
==============
*/
void AD_InterfaceThreadDestroyDevicesForUser(AD_Interface *const iface, const unsigned int userHandle)
{
  __int64 v3; 
  const AD_UserInfo *Info; 
  const AD_UserInfo *v5; 
  AD_InterfaceThreadData *p_interfaceThreadData; 
  unsigned int v7; 
  bool *v8; 
  AD_UserInfo v9; 
  bool *v10; 
  AD_UserInfo v11; 
  AD_UserInfo v12; 
  AD_UserInfo v13; 

  v3 = userHandle;
  Info = AD_UserManagerGetInfo(&iface->userManager, userHandle);
  v5 = Info;
  if ( Info->userId == AD_InvalidUser.userId && Info->platformId == AD_InvalidUser.platformId && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 981, ASSERT_TYPE_ASSERT, "*userInfo != AD_InvalidUser", "*userInfo != AD_InvalidUser") )
    __debugbreak();
  p_interfaceThreadData = &iface->interfaceThreadData;
  v7 = v3 + 2;
  if ( (unsigned int)(v3 + 2) >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
    __debugbreak();
  v8 = &p_interfaceThreadData->inputDevicesChanged + 64 * (unsigned __int64)v7;
  if ( AD_EndpointIsBoundToUser((const AD_Endpoint *const)(v8 + 8544), v5) )
  {
    if ( v7 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    if ( (*((_DWORD *)v8 + 2142) != v5->userId || *((_QWORD *)v8 + 1072) != v5->platformId) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.h", 150, ASSERT_TYPE_ASSERT, "endpoints[endpointIndx].pendingUserInfo == *userInfo", "endpoints[endpointIndx].pendingUserInfo == *userInfo") )
      __debugbreak();
    v9 = AD_InvalidUser;
    v12 = AD_InvalidUser;
    if ( v7 >= 4 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
      v9 = v12;
    }
    *(AD_UserInfo *)(v8 + 8568) = v9;
    if ( v7 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    AD_EndpointScheduleClose((AD_Endpoint *const)(v8 + 8544));
    p_interfaceThreadData->outputDevicesChanged = 1;
  }
  if ( (unsigned int)v3 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
    __debugbreak();
  v10 = &p_interfaceThreadData->inputDevicesChanged + 64 * v3;
  if ( AD_EndpointIsBoundToUser((const AD_Endpoint *const)(v10 + 32), v5) )
  {
    if ( (unsigned int)v3 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    if ( (*((_DWORD *)v10 + 14) != v5->userId || *((_QWORD *)v10 + 8) != v5->platformId) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.h", 150, ASSERT_TYPE_ASSERT, "endpoints[endpointIndx].pendingUserInfo == *userInfo", "endpoints[endpointIndx].pendingUserInfo == *userInfo") )
      __debugbreak();
    v11 = AD_InvalidUser;
    v13 = AD_InvalidUser;
    if ( (unsigned int)v3 >= 2 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
      v11 = v13;
    }
    *(AD_UserInfo *)(v10 + 56) = v11;
    if ( (unsigned int)v3 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    AD_EndpointScheduleClose((AD_Endpoint *const)(v10 + 32));
    p_interfaceThreadData->inputDevicesChanged = 1;
  }
}

/*
==============
AD_InterfaceThreadGetFlags
==============
*/
AD_EventFlagHelper<enum AD_InterfaceThreadSignals,0>::EventFlags *AD_InterfaceThreadGetFlags(AD_EventFlagHelper<enum AD_InterfaceThreadSignals,0>::EventFlags *result, AD_Interface *const iface)
{
  __int64 v2; 
  AD_Endpoint *m_elements; 
  unsigned int v4; 
  bool v7; 
  char v8; 
  __int64 v9; 
  AD_Endpoint *v10; 
  unsigned int v11; 
  bool v12; 
  char v13; 
  AD_EventFlagHelper<enum AD_InterfaceThreadSignals,0>::EventFlags *v14; 

  v2 = 0i64;
  m_elements = iface->interfaceThreadData.inputEndpoints.m_elements;
  v4 = 0;
  v7 = 1;
  v8 = 8;
  do
  {
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    if ( AD_EndpointIsActive(m_elements) )
    {
      if ( v4 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
      if ( !AD_EndpointIsClosePending(m_elements) )
        v2 |= 1i64 << v8;
    }
    ++v4;
    ++m_elements;
    ++v8;
    v7 = v4 < 2;
  }
  while ( v4 != 2 );
  v9 = 0i64;
  v10 = iface->interfaceThreadData.outputEndpoints.m_elements;
  v11 = 0;
  v12 = 1;
  v13 = 3;
  do
  {
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    if ( AD_EndpointIsActive(v10) )
    {
      if ( v11 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
      if ( !AD_EndpointIsClosePending(v10) )
        v9 |= 1i64 << v13;
    }
    ++v11;
    ++v10;
    ++v13;
    v12 = v11 < 4;
  }
  while ( v11 != 4 );
  v14 = result;
  result->flags = v2 | v9;
  return v14;
}

/*
==============
AD_InterfaceThreadInit
==============
*/
char AD_InterfaceThreadInit(AD_Interface *const iface)
{
  AD_Endpoint *m_elements; 
  unsigned int v2; 
  bool v3; 
  unsigned int v5; 
  AD_Endpoint *v6; 
  bool v7; 

  m_elements = iface->interfaceThreadData.outputEndpoints.m_elements;
  v2 = 0;
  v3 = 1;
  do
  {
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    if ( !AD_EndpointIsForUser(m_elements) )
    {
      if ( v2 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
      AD_EndpointScheduleOpen(m_elements, &AD_SystemUser);
      iface->interfaceThreadData.outputDeviceChangedTimestamp.v = 0i64;
      iface->interfaceThreadData.outputDevicesChanged = 1;
    }
    ++v2;
    ++m_elements;
    v3 = v2 < 4;
  }
  while ( v2 != 4 );
  v5 = 0;
  v6 = iface->interfaceThreadData.inputEndpoints.m_elements;
  v7 = 1;
  do
  {
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
      __debugbreak();
    if ( !AD_EndpointIsForUser(v6) )
    {
      if ( v5 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_containers.h", 40, ASSERT_TYPE_ASSERT, "index < T_MAX", "index < T_MAX") )
        __debugbreak();
      AD_EndpointScheduleOpen(v6, &AD_SystemUser);
      iface->interfaceThreadData.inputDeviceChangedTimestamp.v = 0i64;
      iface->interfaceThreadData.inputDevicesChanged = 1;
    }
    ++v5;
    ++v6;
    v7 = v5 < 2;
  }
  while ( v5 != 2 );
  return 1;
}

/*
==============
AD_InterfaceThreadSynchronize
==============
*/
char AD_InterfaceThreadSynchronize(AD_Interface *const iface)
{
  iface->interfaceThreadData.inputDevicesChanged = 1;
  iface->interfaceThreadData.inputDeviceChangedTimestamp.v = 0i64;
  iface->interfaceThreadData.outputDeviceChangedTimestamp.v = 0i64;
  iface->interfaceThreadData.outputDevicesChanged = 1;
  if ( !iface->interfaceThreadSignals.event && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 140, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
    __debugbreak();
  AD_SignalEventFlags(iface->interfaceThreadSignals.event, 4ui64);
  return 1;
}

/*
==============
AD_InterfaceThreadUpdate
==============
*/
char AD_InterfaceThreadUpdate(AD_Interface *const iface, const AD_EventFlagHelper<enum AD_InterfaceThreadSignals,0>::EventFlags flags)
{
  AD_InputEndpoints v3; 
  unsigned __int64 v; 
  __int64 v5; 
  AD_Endpoint *m_elements; 
  AD_Endpoint_Platform *platformData; 
  unsigned __int64 SampleDelta; 
  __int64 v9; 
  AD_Endpoint *v10; 
  AD_OutputEndpoints v11; 
  AD_Endpoint_Platform *v12; 
  unsigned __int64 v13; 
  AD_MixBed v14; 
  unsigned int numFrames; 
  AD_MasterBusMixer *masterBusMixer; 
  unsigned int v17; 
  AD_Event *event; 
  AD_Endpoint *v19; 
  AD_RawTimerValue v20; 
  unsigned int v21; 
  AD_Endpoint *v22; 
  unsigned int v23; 
  AD_RawTimerValue v24; 
  AD_Event *v25; 
  char *fmt; 
  __int64 v28; 
  __int64 v29; 
  AD_OutputEndpointView opView; 
  unsigned __int64 v31; 
  __int64 v32; 
  AD_Endpoint *v33; 
  AD_InputEndpointView ipView; 
  int v35; 
  int v36; 
  AD_Endpoint *endpoint; 
  char v38; 

  v38 = 0;
  v3 = 0;
  v = AD_GetTime().v;
  v5 = 1i64;
  endpoint = iface->interfaceThreadData.inputEndpoints.m_elements;
  m_elements = iface->interfaceThreadData.inputEndpoints.m_elements;
  do
  {
    if ( !AD_EndpointIsActive(m_elements) || AD_EndpointIsClosePending(m_elements) )
    {
      AD_MasterBusMixer_UpdateInputEndpointStatus(iface->masterBusMixer, v3, Reserved);
    }
    else
    {
      AD_MasterBusMixer_UpdateInputEndpointStatus(iface->masterBusMixer, v3, Inactive);
      if ( m_elements->flow != Screen && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.h", 34, ASSERT_TYPE_ASSERT, "flow == AD_EndpointFlow::Input", "flow == AD_EndpointFlow::Input") )
        __debugbreak();
      platformData = m_elements->platformData;
      SampleDelta = AD_GetSampleDelta(platformData->deviceRate, platformData->lastSubmitTime, (const AD_RawTimerValue)v);
      if ( (__ROL8__(v5, 8) & *(_QWORD *)flags.flags) != 0i64 || platformData->deviceBufferSize <= SampleDelta )
      {
        AD_EndpointConsumeBuffer(m_elements);
        if ( AD_EndpointGetBufferFramesAvail(m_elements, &ipView.numFrames) )
        {
          if ( ipView.numFrames )
          {
            ipView.rate = platformData->deviceRate;
            ipView.numChannels = 1;
            ipView.type = v3;
            ipView.interleavedBuffer = AD_EndpointGetBuffer(m_elements);
            if ( !ipView.interleavedBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 743, ASSERT_TYPE_ASSERT, "inputView.interleavedBuffer != nullptr", "inputView.interleavedBuffer != nullptr") )
              __debugbreak();
            AD_MasterBusMixer_ServiceInputEndpoint(iface->masterBusMixer, &ipView);
            platformData->lastSubmitTime.v = v;
            *(_DWORD *)&platformData[20].currentDeviceId.value[4] = 0;
          }
        }
        else
        {
          LODWORD(fmt) = v3;
          AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", "733", Started, "Lost input endpoint %d. Reopening device.", fmt);
          if ( AD_GetLogBreakLevel() == Started )
            __debugbreak();
          AD_EndpointScheduleReOpen(m_elements);
          if ( !iface->interfaceThreadSignals.event && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 140, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
            __debugbreak();
          AD_SignalEventFlags(iface->interfaceThreadSignals.event, 4ui64);
        }
      }
    }
    ++v3;
    v5 = __ROL8__(v5, 1);
    ++m_elements;
  }
  while ( (unsigned int)v3 < Stereo );
  v31 = 0i64;
  v9 = 1i64;
  v33 = iface->interfaceThreadData.outputEndpoints.m_elements;
  v10 = iface->interfaceThreadData.outputEndpoints.m_elements;
  v32 = 1i64;
  v11 = 0;
  do
  {
    if ( !AD_EndpointIsActive(v10) || AD_EndpointIsClosePending(v10) )
    {
      AD_MasterBusMixer_UpdateOutputEndpointStatus(iface->masterBusMixer, v11, Reserved);
      goto LABEL_82;
    }
    if ( v10->flow && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_endpoint.h", 40, ASSERT_TYPE_ASSERT, "flow == AD_EndpointFlow::Output", "flow == AD_EndpointFlow::Output") )
      __debugbreak();
    v12 = v10->platformData;
    AD_MasterBusMixer_UpdateOutputEndpointStatus(iface->masterBusMixer, v11, Inactive);
    v13 = AD_GetSampleDelta(v12->deviceRate, v12->lastSubmitTime, (const AD_RawTimerValue)v);
    if ( (__ROL8__(v9, 3) & *(_QWORD *)flags.flags) != 0i64 || 10 * v12->deviceBufferSize <= v13 )
    {
      if ( !AD_EndpointGetBufferFramesAvail(v10, &opView.numFrames) )
      {
        LODWORD(fmt) = v11;
        AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", "790", Started, "Lost output endpoint %d. Reopening device.", fmt);
        if ( AD_GetLogBreakLevel() == Started )
          __debugbreak();
        AD_EndpointScheduleReOpen(v10);
        if ( !iface->interfaceThreadSignals.event && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 140, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
          __debugbreak();
        AD_SignalEventFlags(iface->interfaceThreadSignals.event, 4ui64);
        goto LABEL_82;
      }
      if ( !opView.numFrames )
        goto LABEL_82;
      switch ( v12->deviceChannelCount )
      {
        case 1u:
          v14 = Mono|Stereo|Quadraphonic;
          break;
        case 2u:
          v14 = Surround_5_1;
          break;
        case 4u:
          v14 = Mono|Quadraphonic;
          break;
        case 6u:
          v14 = Quadraphonic;
          break;
        case 8u:
          v14 = Mono|Stereo;
          break;
        case 0xAu:
          v14 = Stereo;
          break;
        case 0xCu:
          v14 = Mono;
          break;
        case 0x10u:
          v14 = 0;
          break;
        default:
          AD_LogFunc("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_types.h", "195", (const AD_LogCategory)5, "invalid channel count");
          if ( (unsigned int)AD_GetLogBreakLevel() <= 5 )
            __debugbreak();
          v14 = Surround_7_1;
          break;
      }
      opView.mixBed = v14;
      opView.rate = v12->deviceRate;
      opView.type = v11;
      opView.interleavedBuffer = AD_EndpointGetBuffer(v10);
      if ( !opView.interleavedBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 800, ASSERT_TYPE_ASSERT, "outputView.interleavedBuffer != nullptr", "outputView.interleavedBuffer != nullptr") )
        __debugbreak();
      if ( v12[656].currentDeviceId.value[45] )
      {
        if ( !AD_MasterBusMixer_ServiceOutputEndpoint(iface->masterBusMixer, &opView) )
        {
          LODWORD(v29) = ((unsigned int)iface->masterBusMixer->outputs.m_elements[v31 / 0x24240].ringBuffer.m_dataAvail >> 2) / v12->deviceChannelCount;
          LODWORD(v28) = opView.numFrames;
          LODWORD(fmt) = v11;
          AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", "853", Error, "Output endpoint %d is starving for %u frames, have %u", fmt, v28, v29);
          if ( (unsigned int)AD_GetLogBreakLevel() <= Error )
            __debugbreak();
        }
        goto LABEL_65;
      }
      numFrames = opView.numFrames;
      masterBusMixer = iface->masterBusMixer;
      if ( 10 * v12->deviceRate / 0x3E8 < opView.numFrames )
        numFrames = 10 * v12->deviceRate / 0x3E8;
      opView.numFrames = numFrames;
      v17 = AD_MasterBusMixer_ServiceOutputEndpoint_BestEffort(masterBusMixer, &opView);
      if ( v17 || opView.numFrames >= v12->deviceBufferSize )
      {
        opView.numFrames = v17;
LABEL_65:
        if ( v12[656].currentDeviceId.value[45] )
        {
          if ( !*(_QWORD *)&v12[656].currentDeviceId.value[36] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 859, ASSERT_TYPE_ASSERT, "outputPlatformData->spatialData", "outputPlatformData->spatialData") )
            __debugbreak();
          if ( v38 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 861, ASSERT_TYPE_ASSERT, "!processedSpatial", "Only one device can support spatial audio at a time.") )
            __debugbreak();
          v38 = 1;
        }
        if ( !AD_EndpointSubmitBuffer(v10, opView.numFrames) )
        {
          LODWORD(fmt) = v11;
          AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", "883", Started, "Lost output endpoint %d. Reopening device.", fmt);
          if ( AD_GetLogBreakLevel() == Started )
            __debugbreak();
          AD_EndpointScheduleReOpen(v10);
          if ( !iface->interfaceThreadSignals.event && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 140, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
            __debugbreak();
          event = iface->interfaceThreadSignals.event;
          v35 = 2;
          AD_SignalEventFlags(event, 4ui64);
        }
        v9 = v32;
        v12->lastSubmitTime.v = v;
        goto LABEL_82;
      }
      LODWORD(v28) = opView.numFrames;
      LODWORD(fmt) = v11;
      AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", "827", Started, "No frames available for output endpoint %d. Want %u frames. Skipping submit.", fmt, v28);
      if ( AD_GetLogBreakLevel() == Started )
        __debugbreak();
    }
LABEL_82:
    v31 += 148032i64;
    ++v11;
    v9 = __ROL8__(v9, 1);
    ++v10;
    v32 = v9;
  }
  while ( (unsigned int)v11 < Quadraphonic );
  AD_MasterBusMixer_RequestMix(iface->masterBusMixer);
  v19 = v33;
  if ( iface->interfaceThreadData.inputDevicesChanged )
  {
    v20.v = AD_GetTime().v;
    v21 = 0;
    if ( AD_GetMSecDelta(iface->interfaceThreadData.inputDeviceChangedTimestamp, v20) > 0x3E8 )
    {
      v22 = endpoint;
      v23 = 0;
      iface->interfaceThreadData.inputDevicesChanged = 0;
      do
      {
        AD_EndpointProcessPendingActions(v22);
        ++v23;
        ++v22;
      }
      while ( v23 < 2 );
      v19 = v33;
    }
  }
  else
  {
    v21 = 0;
  }
  if ( iface->interfaceThreadData.outputDevicesChanged )
  {
    v24.v = AD_GetTime().v;
    if ( AD_GetMSecDelta(iface->interfaceThreadData.outputDeviceChangedTimestamp, v24) > 0x3E8 )
    {
      iface->interfaceThreadData.outputDevicesChanged = 0;
      do
      {
        AD_EndpointProcessPendingActions(v19);
        if ( !AD_EndpointIsActive(v19) && v21 < 2 )
        {
          LODWORD(fmt) = v21;
          AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", "938", Started, "Lost output endpoint %d. Reopening device.", fmt);
          if ( AD_GetLogBreakLevel() == Started )
            __debugbreak();
          AD_EndpointScheduleReOpen(v19);
          if ( !iface->interfaceThreadSignals.event && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\rt\\ad_rt_event.h", 140, ASSERT_TYPE_ASSERT, "event != nullptr", "event != nullptr") )
            __debugbreak();
          v25 = iface->interfaceThreadSignals.event;
          v36 = 2;
          AD_SignalEventFlags(v25, 4ui64);
        }
        ++v21;
        ++v19;
      }
      while ( v21 < 4 );
    }
  }
  return 1;
}

/*
==============
AD_InterfaceThreadUpdateReopenedDevices
==============
*/
void AD_InterfaceThreadUpdateReopenedDevices(AD_Interface *const iface)
{
  unsigned int v1; 
  bool *p_flaggedForReOpen; 
  unsigned int v3; 
  char v4; 
  char v6; 
  bool *v7; 

  v1 = 0;
  p_flaggedForReOpen = &iface->interfaceThreadData.inputEndpoints.m_elements[0].flaggedForReOpen;
  v3 = 0;
  v4 = 0;
  do
  {
    if ( *p_flaggedForReOpen )
    {
      *((_DWORD *)p_flaggedForReOpen - 1) = 3;
      *p_flaggedForReOpen = 0;
      v4 = 1;
    }
    ++v3;
    p_flaggedForReOpen += 64;
  }
  while ( v3 < 2 );
  v6 = 0;
  v7 = &iface->interfaceThreadData.outputEndpoints.m_elements[0].flaggedForReOpen;
  do
  {
    if ( *v7 )
    {
      *((_DWORD *)v7 - 1) = 3;
      *v7 = 0;
      v6 = 1;
    }
    ++v1;
    v7 += 64;
  }
  while ( v1 < 4 );
  if ( v4 )
  {
    iface->interfaceThreadData.inputDeviceChangedTimestamp = AD_GetTime();
    iface->interfaceThreadData.inputDevicesChanged = 1;
  }
  if ( v6 )
  {
    iface->interfaceThreadData.outputDeviceChangedTimestamp = AD_GetTime();
    iface->interfaceThreadData.outputDevicesChanged = 1;
  }
}

/*
==============
AD_SetEndpointConfig
==============
*/
void AD_SetEndpointConfig(AD_EndpointConfig *dest, AD_EndpointFlow flow, AD_EndpointRole role, AD_EndpointType endpointType, void *const deviceEnumerator, void *const deviceMixEvent)
{
  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 427, ASSERT_TYPE_ASSERT, "dest", "dest") )
    __debugbreak();
  if ( !deviceEnumerator && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 428, ASSERT_TYPE_ASSERT, "deviceEnumerator != nullptr", "deviceEnumerator != nullptr") )
    __debugbreak();
  if ( !deviceMixEvent && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 429, ASSERT_TYPE_ASSERT, "deviceMixEvent != nullptr", "deviceMixEvent != nullptr") )
    __debugbreak();
  dest->endpointType = endpointType;
  dest->deviceEnumerator = deviceEnumerator;
  dest->flow = flow;
  dest->role = role;
  dest->deviceMixEvent = deviceMixEvent;
  *(_WORD *)&dest->restrictBGM = 0;
  dest->spatialData = NULL;
}

/*
==============
AD_WinAudioDeviceNotifier::AddRef
==============
*/
int AD_WinAudioDeviceNotifier::AddRef(AD_WinAudioDeviceNotifier *this)
{
  return AD_InterlockedIncrement(&this->refCount);
}

/*
==============
AD_WinAudioDeviceNotifier::Destroy
==============
*/
void AD_WinAudioDeviceNotifier::Destroy(AD_WinAudioDeviceNotifier *this)
{
  IMMDeviceEnumerator *pEnumerator; 

  pEnumerator = this->pEnumerator;
  if ( pEnumerator )
  {
    pEnumerator->Release(pEnumerator);
    this->pEnumerator = NULL;
  }
}

/*
==============
AD_WinAudioDeviceNotifier::Init
==============
*/
void AD_WinAudioDeviceNotifier::Init(AD_WinAudioDeviceNotifier *this, AD_Interface *iface)
{
  if ( !iface && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 20, ASSERT_TYPE_ASSERT, "iface != nullptr", "iface != nullptr") )
    __debugbreak();
  this->parentInterface = iface;
  CoCreateInstance(&GUID_bcde0395_e52f_467c_8e3d_c4579291692e, NULL, 1u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, (LPVOID *)&this->pEnumerator);
}

/*
==============
AD_XboxUserDeviceNotifier::OnAudioDeviceAdded
==============
*/
void AD_XboxUserDeviceNotifier::OnAudioDeviceAdded(AD_XboxUserDeviceNotifier *this, Platform::Object *__formal, Windows::Xbox::System::AudioDeviceAddedEventArgs *args)
{
  AD_Interface *StaticInterfaceInstance; 
  int v5; 
  Windows::Xbox::System::IUser *v6; 
  Windows::Xbox::System::IUser *v7; 
  const wchar_t *StringRawBuffer_0; 
  unsigned __int64 v9; 
  unsigned int Handle; 
  AD_InputEndpoints v11; 
  const AD_UserInfo *Info; 
  Windows::Xbox::System::IAudioDeviceInfo *v13; 
  const wchar_t *v14; 
  Windows::Xbox::System::IAudioDeviceInfo *v15; 
  int v16; 
  bool v17; 
  Windows::Xbox::System::IAudioDeviceInfo *v18; 
  bool v19; 
  char *fmt; 
  Platform::String *v21; 
  Windows::Xbox::System::IUser *v22; 
  Windows::Xbox::System::IAudioDeviceInfo *v23; 
  __int64 v24; 
  Windows::Xbox::System::IUser *v25; 
  char MultiByteStr[256]; 

  v24 = -2i64;
  StaticInterfaceInstance = AD_GetStaticInterfaceInstance();
  if ( !StaticInterfaceInstance && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 217, ASSERT_TYPE_ASSERT, "iface != nullptr", "iface != nullptr") )
    __debugbreak();
  v22 = NULL;
  v5 = args->__abi_get_User(args, (Windows::Xbox::System::User **)&v22);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  v6 = v22;
  v7 = v22;
  if ( v22 )
  {
    v22->__abi_AddRef(v22);
    v6 = v22;
  }
  if ( v6 )
    v6->__abi_Release(v6);
  v25 = v7;
  v21 = NULL;
  if ( v7 )
  {
    v21 = Windows::Xbox::System::IUser::XboxUserId::get(v7);
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0((HSTRING)v21, NULL);
    v9 = _wcstoui64(StringRawBuffer_0, NULL, 10);
    WindowsDeleteString_0((HSTRING)v21);
    Handle = AD_UserManagerGetHandle(&StaticInterfaceInstance->userManager, v9);
    v11 = Handle;
    if ( Handle != 2 )
    {
      Info = AD_UserManagerGetInfo(&StaticInterfaceInstance->userManager, Handle);
      if ( !Info && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 233, ASSERT_TYPE_ASSERT, "userInfo", "userInfo") )
        __debugbreak();
      v13 = Windows::Xbox::System::IAudioDeviceAddedEventArgs::AudioDevice::get(args);
      v21 = Windows::Xbox::System::IAudioDeviceInfo::Id::get(v13);
      v14 = WindowsGetStringRawBuffer_0((HSTRING)v21, NULL);
      WideCharToMultiByte(0xFDE9u, 0, v14, -1, MultiByteStr, 256, NULL, NULL);
      WindowsDeleteString_0((HSTRING)v21);
      if ( v13 )
        v13->__abi_Release(v13);
      MultiByteStr[255] = 0;
      LODWORD(fmt) = v11;
      AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", "239", Canceled, "OnAudioDeviceAdded for user: %d, Device: %s", fmt, MultiByteStr);
      v15 = Windows::Xbox::System::IAudioDeviceAddedEventArgs::AudioDevice::get(args);
      v23 = v15;
      LODWORD(v21) = 0;
      v16 = v15->__abi_get_DeviceType(v15, (Windows::Xbox::System::AudioDeviceType *)&v21);
      if ( v16 < 0 )
        __abi_WinRTraiseException(v16);
      v15->__abi_Release(v15);
      if ( (_DWORD)v21 == 1 )
      {
        v17 = AD_ReopenUserEndpointHelper<AD_EnumArray<AD_Endpoint,enum AD_OutputEndpoints,4,16>,enum AD_OutputEndpoints>(Info, &StaticInterfaceInstance->interfaceThreadData.outputEndpoints, (const AD_OutputEndpoints)(v11 + 2));
      }
      else
      {
        v18 = Windows::Xbox::System::IAudioDeviceAddedEventArgs::AudioDevice::get(args);
        v23 = v18;
        v19 = Windows::Xbox::System::IAudioDeviceInfo::DeviceType::get(v18) == Capture;
        if ( v18 )
          v18->__abi_Release(v18);
        if ( !v19 )
          goto LABEL_25;
        v17 = AD_ReopenUserEndpointHelper<AD_EnumArray<AD_Endpoint,enum AD_InputEndpoints,2,16>,enum AD_InputEndpoints>(Info, &StaticInterfaceInstance->interfaceThreadData.inputEndpoints, v11);
      }
      if ( v17 )
        AD_EventFlagHelper<enum AD_InterfaceThreadSignals,0>::Signal<enum AD_InterfaceThreadSignals>(&StaticInterfaceInstance->interfaceThreadSignals, PhaseSpace);
    }
LABEL_25:
    v7->__abi_Release(v7);
  }
}

/*
==============
AD_XboxUserDeviceNotifier::OnAudioDeviceChanged
==============
*/
void AD_XboxUserDeviceNotifier::OnAudioDeviceChanged(AD_XboxUserDeviceNotifier *this, Platform::Object *__formal, Windows::Xbox::System::AudioDeviceChangedEventArgs *args)
{
  AD_Interface *StaticInterfaceInstance; 
  int v5; 
  Windows::Xbox::System::IUser *v6; 
  Windows::Xbox::System::IUser *v7; 
  const wchar_t *StringRawBuffer_0; 
  unsigned __int64 v9; 
  unsigned int Handle; 
  AD_InputEndpoints v11; 
  const AD_UserInfo *Info; 
  Windows::Xbox::System::IAudioDeviceInfo *v13; 
  const wchar_t *v14; 
  Windows::Xbox::System::IAudioDeviceInfo *v15; 
  int v16; 
  bool v17; 
  Windows::Xbox::System::IAudioDeviceInfo *v18; 
  bool v19; 
  char *fmt; 
  Platform::String *v21; 
  Windows::Xbox::System::IUser *v22; 
  Windows::Xbox::System::IAudioDeviceInfo *v23; 
  __int64 v24; 
  Windows::Xbox::System::IUser *v25; 
  char MultiByteStr[256]; 

  v24 = -2i64;
  StaticInterfaceInstance = AD_GetStaticInterfaceInstance();
  if ( !StaticInterfaceInstance && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 316, ASSERT_TYPE_ASSERT, "iface != nullptr", "iface != nullptr") )
    __debugbreak();
  v22 = NULL;
  v5 = args->__abi_get_User(args, (Windows::Xbox::System::User **)&v22);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  v6 = v22;
  v7 = v22;
  if ( v22 )
  {
    v22->__abi_AddRef(v22);
    v6 = v22;
  }
  if ( v6 )
    v6->__abi_Release(v6);
  v25 = v7;
  v21 = NULL;
  if ( v7 )
  {
    v21 = Windows::Xbox::System::IUser::XboxUserId::get(v7);
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0((HSTRING)v21, NULL);
    v9 = _wcstoui64(StringRawBuffer_0, NULL, 10);
    WindowsDeleteString_0((HSTRING)v21);
    Handle = AD_UserManagerGetHandle(&StaticInterfaceInstance->userManager, v9);
    v11 = Handle;
    if ( Handle != 2 )
    {
      Info = AD_UserManagerGetInfo(&StaticInterfaceInstance->userManager, Handle);
      if ( !Info && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 332, ASSERT_TYPE_ASSERT, "userInfo", "userInfo") )
        __debugbreak();
      v13 = Windows::Xbox::System::IAudioDeviceChangedEventArgs::AudioDevice::get(args);
      v21 = Windows::Xbox::System::IAudioDeviceInfo::Id::get(v13);
      v14 = WindowsGetStringRawBuffer_0((HSTRING)v21, NULL);
      WideCharToMultiByte(0xFDE9u, 0, v14, -1, MultiByteStr, 256, NULL, NULL);
      WindowsDeleteString_0((HSTRING)v21);
      if ( v13 )
        v13->__abi_Release(v13);
      MultiByteStr[255] = 0;
      LODWORD(fmt) = v11;
      AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", "338", Canceled, "OnAudioDeviceChanged for user: %d, Device: %s", fmt, MultiByteStr);
      v15 = Windows::Xbox::System::IAudioDeviceChangedEventArgs::AudioDevice::get(args);
      v23 = v15;
      LODWORD(v21) = 0;
      v16 = v15->__abi_get_DeviceType(v15, (Windows::Xbox::System::AudioDeviceType *)&v21);
      if ( v16 < 0 )
        __abi_WinRTraiseException(v16);
      v15->__abi_Release(v15);
      if ( (_DWORD)v21 == 1 )
      {
        v17 = AD_ReopenUserEndpointHelper<AD_EnumArray<AD_Endpoint,enum AD_OutputEndpoints,4,16>,enum AD_OutputEndpoints>(Info, &StaticInterfaceInstance->interfaceThreadData.outputEndpoints, (const AD_OutputEndpoints)(v11 + 2));
      }
      else
      {
        v18 = Windows::Xbox::System::IAudioDeviceChangedEventArgs::AudioDevice::get(args);
        v23 = v18;
        v19 = Windows::Xbox::System::IAudioDeviceInfo::DeviceType::get(v18) == Capture;
        if ( v18 )
          v18->__abi_Release(v18);
        if ( !v19 )
          goto LABEL_25;
        v17 = AD_ReopenUserEndpointHelper<AD_EnumArray<AD_Endpoint,enum AD_InputEndpoints,2,16>,enum AD_InputEndpoints>(Info, &StaticInterfaceInstance->interfaceThreadData.inputEndpoints, v11);
      }
      if ( v17 )
        AD_EventFlagHelper<enum AD_InterfaceThreadSignals,0>::Signal<enum AD_InterfaceThreadSignals>(&StaticInterfaceInstance->interfaceThreadSignals, PhaseSpace);
    }
LABEL_25:
    v7->__abi_Release(v7);
  }
}

/*
==============
AD_XboxUserDeviceNotifier::OnAudioDeviceRemoved
==============
*/
void AD_XboxUserDeviceNotifier::OnAudioDeviceRemoved(AD_XboxUserDeviceNotifier *this, Platform::Object *__formal, Windows::Xbox::System::AudioDeviceRemovedEventArgs *args)
{
  AD_Interface *StaticInterfaceInstance; 
  int v5; 
  Windows::Xbox::System::IUser *v6; 
  Windows::Xbox::System::IUser *v7; 
  const wchar_t *StringRawBuffer_0; 
  unsigned __int64 v9; 
  unsigned int Handle; 
  AD_InputEndpoints v11; 
  const AD_UserInfo *Info; 
  Windows::Xbox::System::IAudioDeviceInfo *v13; 
  const wchar_t *v14; 
  Windows::Xbox::System::IAudioDeviceInfo *v15; 
  int v16; 
  bool v17; 
  Windows::Xbox::System::IAudioDeviceInfo *v18; 
  bool v19; 
  char *fmt; 
  Platform::String *v21; 
  Windows::Xbox::System::IUser *v22; 
  Windows::Xbox::System::IAudioDeviceInfo *v23; 
  __int64 v24; 
  Windows::Xbox::System::IUser *v25; 
  char MultiByteStr[256]; 

  v24 = -2i64;
  StaticInterfaceInstance = AD_GetStaticInterfaceInstance();
  if ( !StaticInterfaceInstance && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 267, ASSERT_TYPE_ASSERT, "iface != nullptr", "iface != nullptr") )
    __debugbreak();
  v22 = NULL;
  v5 = args->__abi_get_User(args, (Windows::Xbox::System::User **)&v22);
  if ( v5 < 0 )
    __abi_WinRTraiseException(v5);
  v6 = v22;
  v7 = v22;
  if ( v22 )
  {
    v22->__abi_AddRef(v22);
    v6 = v22;
  }
  if ( v6 )
    v6->__abi_Release(v6);
  v25 = v7;
  v21 = NULL;
  if ( v7 )
  {
    v21 = Windows::Xbox::System::IUser::XboxUserId::get(v7);
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0((HSTRING)v21, NULL);
    v9 = _wcstoui64(StringRawBuffer_0, NULL, 10);
    WindowsDeleteString_0((HSTRING)v21);
    Handle = AD_UserManagerGetHandle(&StaticInterfaceInstance->userManager, v9);
    v11 = Handle;
    if ( Handle != 2 )
    {
      Info = AD_UserManagerGetInfo(&StaticInterfaceInstance->userManager, Handle);
      if ( !Info && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 283, ASSERT_TYPE_ASSERT, "userInfo", "userInfo") )
        __debugbreak();
      v13 = Windows::Xbox::System::IAudioDeviceRemovedEventArgs::AudioDevice::get(args);
      v21 = Windows::Xbox::System::IAudioDeviceInfo::Id::get(v13);
      v14 = WindowsGetStringRawBuffer_0((HSTRING)v21, NULL);
      WideCharToMultiByte(0xFDE9u, 0, v14, -1, MultiByteStr, 256, NULL, NULL);
      WindowsDeleteString_0((HSTRING)v21);
      if ( v13 )
        v13->__abi_Release(v13);
      MultiByteStr[255] = 0;
      LODWORD(fmt) = v11;
      AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", "289", Canceled, "OnAudioDeviceRemoved for user: %d, Device: %s", fmt, MultiByteStr);
      v15 = Windows::Xbox::System::IAudioDeviceRemovedEventArgs::AudioDevice::get(args);
      v23 = v15;
      LODWORD(v21) = 0;
      v16 = v15->__abi_get_DeviceType(v15, (Windows::Xbox::System::AudioDeviceType *)&v21);
      if ( v16 < 0 )
        __abi_WinRTraiseException(v16);
      v15->__abi_Release(v15);
      if ( (_DWORD)v21 == 1 )
      {
        v17 = AD_ReopenUserEndpointHelper<AD_EnumArray<AD_Endpoint,enum AD_OutputEndpoints,4,16>,enum AD_OutputEndpoints>(Info, &StaticInterfaceInstance->interfaceThreadData.outputEndpoints, (const AD_OutputEndpoints)(v11 + 2));
      }
      else
      {
        v18 = Windows::Xbox::System::IAudioDeviceRemovedEventArgs::AudioDevice::get(args);
        v23 = v18;
        v19 = Windows::Xbox::System::IAudioDeviceInfo::DeviceType::get(v18) == Capture;
        if ( v18 )
          v18->__abi_Release(v18);
        if ( !v19 )
          goto LABEL_25;
        v17 = AD_ReopenUserEndpointHelper<AD_EnumArray<AD_Endpoint,enum AD_InputEndpoints,2,16>,enum AD_InputEndpoints>(Info, &StaticInterfaceInstance->interfaceThreadData.inputEndpoints, v11);
      }
      if ( v17 )
        AD_EventFlagHelper<enum AD_InterfaceThreadSignals,0>::Signal<enum AD_InterfaceThreadSignals>(&StaticInterfaceInstance->interfaceThreadSignals, PhaseSpace);
    }
LABEL_25:
    v7->__abi_Release(v7);
  }
}

/*
==============
AD_WinAudioDeviceNotifier::OnDefaultDeviceChanged
==============
*/
__int64 AD_WinAudioDeviceNotifier::OnDefaultDeviceChanged(AD_WinAudioDeviceNotifier *this, __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 flow, __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 role, const wchar_t *pwstrDeviceId)
{
  AD_EndpointType v8; 
  AD_EndpointFlow v9; 
  char *fmt; 
  char dest[56]; 

  if ( !this->parentInterface && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 73, ASSERT_TYPE_ASSERT, "parentInterface != nullptr", "parentInterface != nullptr") )
    __debugbreak();
  dest[0] = 0;
  AD_WCharToUTF8(pwstrDeviceId, dest, 0x38ui64);
  AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", "79", Canceled, "OnDefaultDeviceChanged: %s", dest);
  v8 = 1;
  if ( flow )
  {
    if ( flow != eCapture )
    {
      if ( flow != eAll && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", 95, ASSERT_TYPE_ASSERT, "flow == eAll", "flow == eAll") )
        __debugbreak();
      LODWORD(fmt) = flow;
      AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", "96", Error, "Ignoring OnDefaultDeviceChanged with flow %d", fmt);
      goto LABEL_17;
    }
    v9 = Screen;
  }
  else
  {
    v9 = Graph;
  }
  if ( (unsigned int)role <= eMultimedia )
  {
    v8 = Arrow;
    goto LABEL_12;
  }
  if ( role == eCommunications )
  {
LABEL_12:
    AD_InterfaceReOpenDevice(this->parentInterface, v9, v8);
    return 0i64;
  }
  LODWORD(fmt) = role;
  AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", "110", Error, "Ignoring OnDefaultDeviceChanged with role %d", fmt);
LABEL_17:
  if ( (unsigned int)AD_GetLogBreakLevel() <= Error )
    __debugbreak();
  return 0i64;
}

/*
==============
AD_WinAudioDeviceNotifier::OnDeviceAdded
==============
*/
__int64 AD_WinAudioDeviceNotifier::OnDeviceAdded(AD_WinAudioDeviceNotifier *this, const wchar_t *pwstrDeviceId)
{
  AD_DeviceGUID dest; 

  dest.value[0] = 0;
  AD_WCharToUTF8(pwstrDeviceId, dest.value, 0x38ui64);
  AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", "126", Canceled, "OnDeviceAdded: %s", dest.value);
  AD_InterfaceReOpenDevice(this->parentInterface, &dest);
  return 0i64;
}

/*
==============
AD_WinAudioDeviceNotifier::OnDeviceRemoved
==============
*/
__int64 AD_WinAudioDeviceNotifier::OnDeviceRemoved(AD_WinAudioDeviceNotifier *this, const wchar_t *pwstrDeviceId)
{
  AD_DeviceGUID dest; 

  dest.value[0] = 0;
  AD_WCharToUTF8(pwstrDeviceId, dest.value, 0x38ui64);
  AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", "141", Canceled, "OnDeviceRemoved: %s", dest.value);
  AD_InterfaceReOpenDevice(this->parentInterface, &dest);
  return 0i64;
}

/*
==============
AD_WinAudioDeviceNotifier::OnDeviceStateChanged
==============
*/
__int64 AD_WinAudioDeviceNotifier::OnDeviceStateChanged(AD_WinAudioDeviceNotifier *this, const wchar_t *pwstrDeviceId, unsigned int dwNewState)
{
  unsigned int v6; 
  AD_DeviceGUID dest; 

  dest.value[0] = 0;
  AD_WCharToUTF8(pwstrDeviceId, dest.value, 0x38ui64);
  v6 = dwNewState;
  AD_LogFuncf("c:\\workspace\\iw8\\shared\\cpp\\libad\\bk\\ad_bk_interface_ms.cpp", "156", Canceled, "OnDeviceStateChanged: %s %d", dest.value, v6);
  AD_InterfaceUpdateDeviceState(this->parentInterface, &dest, dwNewState);
  return 0i64;
}

/*
==============
AD_WinAudioDeviceNotifier::OnPropertyValueChanged
==============
*/
__int64 AD_WinAudioDeviceNotifier::OnPropertyValueChanged(AD_WinAudioDeviceNotifier *this, const wchar_t *pwstrDeviceId, const _tagpropertykey *key)
{
  return 0i64;
}

/*
==============
AD_WinAudioDeviceNotifier::QueryInterface
==============
*/
__int64 AD_WinAudioDeviceNotifier::QueryInterface(AD_WinAudioDeviceNotifier *this, const _GUID *riid, void **pp_interface)
{
  __int64 result; 

  if ( *(_OWORD *)&IID_IUnknown == *(_OWORD *)riid || *(_QWORD *)&GUID_7991eec9_7e89_4d85_8390_6c703cec60c0.Data1 == *(_QWORD *)&riid->Data1 && *(_QWORD *)GUID_7991eec9_7e89_4d85_8390_6c703cec60c0.Data4 == *(_QWORD *)riid->Data4 )
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
AD_WinAudioDeviceNotifier::Release
==============
*/
int AD_WinAudioDeviceNotifier::Release(AD_WinAudioDeviceNotifier *this)
{
  return AD_InterlockedDecrement(&this->refCount);
}

