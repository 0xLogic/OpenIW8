/*
==============
GPad_SetControllerMissing
==============
*/

void __fastcall GPad_SetControllerMissing(const int controllerIndex)
{
  ?GPad_SetControllerMissing@@YAXH@Z(controllerIndex);
}

/*
==============
GPad_SetLowRumble
==============
*/

void __fastcall GPad_SetLowRumble(int portIndex, float rumble)
{
  ?GPad_SetLowRumble@@YAXHM@Z(portIndex, rumble);
}

/*
==============
GPad_GetControllerForGamePadIndex
==============
*/

Windows::Xbox::Input::IController *__fastcall GPad_GetControllerForGamePadIndex(int portIndex)
{
  return ?GPad_GetControllerForGamePadIndex@@YAPE$AAUIController@Input@Xbox@Windows@@H@Z(portIndex);
}

/*
==============
GPad_SetInsertedCB
==============
*/

void __fastcall GPad_SetInsertedCB(void (__fastcall *cb)(int))
{
  ?GPad_SetInsertedCB@@YAXP6AXH@Z@Z(cb);
}

/*
==============
GPad_GetAttachedControllerCount
==============
*/

int __fastcall GPad_GetAttachedControllerCount()
{
  return ?GPad_GetAttachedControllerCount@@YAHXZ();
}

/*
==============
GPad_IsStickReleased
==============
*/

bool __fastcall GPad_IsStickReleased(int portIndex, GamePadStick stick, GamePadStickDir stickDir)
{
  return ?GPad_IsStickReleased@@YA_NHW4GamePadStick@@W4GamePadStickDir@@@Z(portIndex, stick, stickDir);
}

/*
==============
GPad_GetControllerMissing
==============
*/

int __fastcall GPad_GetControllerMissing()
{
  return ?GPad_GetControllerMissing@@YAHXZ();
}

/*
==============
GPad_IsControllerPairedToUser
==============
*/

bool __fastcall GPad_IsControllerPairedToUser(Windows::Xbox::System::User *aUser, int portIndex)
{
  return ?GPad_IsControllerPairedToUser@@YA_NPE$AAVUser@System@Xbox@Windows@@H@Z(aUser, portIndex);
}

/*
==============
GPad_GetUserIndexForPort
==============
*/

bool __fastcall GPad_GetUserIndexForPort(const int portIndex, int *userIndexToReturn)
{
  return ?GPad_GetUserIndexForPort@@YA_NHAEAH@Z(portIndex, userIndexToReturn);
}

/*
==============
GPad_UpdateAll
==============
*/

void GPad_UpdateAll(void)
{
  ?GPad_UpdateAll@@YAXXZ();
}

/*
==============
GPad_RefreshAll
==============
*/

void GPad_RefreshAll(void)
{
  ?GPad_RefreshAll@@YAXXZ();
}

/*
==============
GPad_GetPortIndexForUser
==============
*/

bool __fastcall GPad_GetPortIndexForUser(Windows::Xbox::System::User *aUser, int *portIndexToReturn)
{
  return ?GPad_GetPortIndexForUser@@YA_NPE$AAVUser@System@Xbox@Windows@@AEAH@Z(aUser, portIndexToReturn);
}

/*
==============
GPad_SetHighRumble
==============
*/

void __fastcall GPad_SetHighRumble(int portIndex, float rumble)
{
  ?GPad_SetHighRumble@@YAXHM@Z(portIndex, rumble);
}

/*
==============
GPad_GetStick
==============
*/

double __fastcall GPad_GetStick(int portIndex, GamePadStick stick)
{
  double result; 

  *(float *)&result = ?GPad_GetStick@@YAMHW4GamePadStick@@@Z(portIndex, stick);
  return result;
}

/*
==============
GPad_InitAll
==============
*/

void GPad_InitAll(void)
{
  ?GPad_InitAll@@YAXXZ();
}

/*
==============
GPad_UpdateRumbles
==============
*/

void __fastcall GPad_UpdateRumbles(int portIndex)
{
  ?GPad_UpdateRumbles@@YAXH@Z(portIndex);
}

/*
==============
GPad_IsPairedToUser
==============
*/

bool __fastcall GPad_IsPairedToUser(const int portIndex)
{
  return ?GPad_IsPairedToUser@@YA_NH@Z(portIndex);
}

/*
==============
GPad_InvalidatePortMapping
==============
*/

void GPad_InvalidatePortMapping(void)
{
  ?GPad_InvalidatePortMapping@@YAXXZ();
}

/*
==============
GPad_SetRightStickDeadzoneOverride
==============
*/

void __fastcall GPad_SetRightStickDeadzoneOverride(float rightStickDeadzoneVal)
{
  ?GPad_SetRightStickDeadzoneOverride@@YAXM@Z(rightStickDeadzoneVal);
}

/*
==============
GPad_StopRumbles
==============
*/

void __fastcall GPad_StopRumbles(int portIndex, bool force)
{
  ?GPad_StopRumbles@@YAXH_N@Z(portIndex, force);
}

/*
==============
GPad_SetGetIsActiveCB
==============
*/

void __fastcall GPad_SetGetIsActiveCB(bool (__fastcall *cb)(int))
{
  ?GPad_SetGetIsActiveCB@@YAXP6A_NH@Z@Z(cb);
}

/*
==============
GPad_SetRightTriggerRumble
==============
*/

void __fastcall GPad_SetRightTriggerRumble(int portIndex, float rumble)
{
  ?GPad_SetRightTriggerRumble@@YAXHM@Z(portIndex, rumble);
}

/*
==============
GPad_IsStickPressed
==============
*/

bool __fastcall GPad_IsStickPressed(int portIndex, GamePadStick stick, GamePadStickDir stickDir)
{
  return ?GPad_IsStickPressed@@YA_NHW4GamePadStick@@W4GamePadStickDir@@@Z(portIndex, stick, stickDir);
}

/*
==============
GPad_IsButtonPressed
==============
*/

bool __fastcall GPad_IsButtonPressed(int portIndex, GamePadButton button)
{
  return ?GPad_IsButtonPressed@@YA_NHW4GamePadButton@@@Z(portIndex, button);
}

/*
==============
GPad_IsActive
==============
*/

bool __fastcall GPad_IsActive(int portIndex)
{
  return ?GPad_IsActive@@YA_NH@Z(portIndex);
}

/*
==============
GPad_GetGamepadCountForUser
==============
*/

int __fastcall GPad_GetGamepadCountForUser(Windows::Xbox::System::User *aUser)
{
  return ?GPad_GetGamepadCountForUser@@YAHPE$AAVUser@System@Xbox@Windows@@@Z(aUser);
}

/*
==============
GPad_ResetControllerMissing
==============
*/

void GPad_ResetControllerMissing(void)
{
  ?GPad_ResetControllerMissing@@YAXXZ();
}

/*
==============
GPad_SwapGamepadsForControllerIndexes
==============
*/

void __fastcall GPad_SwapGamepadsForControllerIndexes(int oldControllerIndex, int newControllerIndex)
{
  ?GPad_SwapGamepadsForControllerIndexes@@YAXHH@Z(oldControllerIndex, newControllerIndex);
}

/*
==============
GPad_ForceGamepadRefresh
==============
*/

void GPad_ForceGamepadRefresh(void)
{
  ?GPad_ForceGamepadRefresh@@YAXXZ();
}

/*
==============
GPad_GetControllersForUser
==============
*/

Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> *__fastcall GPad_GetControllersForUser(Windows::Xbox::System::User *aUser)
{
  return ?GPad_GetControllersForUser@@YAPE$AAU?$IVectorView@PE$AAUIController@Input@Xbox@Windows@@@Collections@Foundation@Windows@@PE$AAVUser@System@Xbox@4@@Z(aUser);
}

/*
==============
GPad_StopTriggers
==============
*/

void __fastcall GPad_StopTriggers(int portIndex)
{
  ?GPad_StopTriggers@@YAXH@Z(portIndex);
}

/*
==============
GPad_GetButton
==============
*/

double __fastcall GPad_GetButton(int portIndex, GamePadButton button)
{
  double result; 

  *(float *)&result = ?GPad_GetButton@@YAMHW4GamePadButton@@@Z(portIndex, button);
  return result;
}

/*
==============
GPad_SetRemovedCB
==============
*/

void __fastcall GPad_SetRemovedCB(void (__fastcall *cb)(int))
{
  ?GPad_SetRemovedCB@@YAXP6AXH@Z@Z(cb);
}

/*
==============
GPad_HasInput
==============
*/

bool __fastcall GPad_HasInput(int portIndex)
{
  return ?GPad_HasInput@@YA_NH@Z(portIndex);
}

/*
==============
GPad_SetLeftTriggerRumble
==============
*/

void __fastcall GPad_SetLeftTriggerRumble(int portIndex, float rumble)
{
  ?GPad_SetLeftTriggerRumble@@YAXHM@Z(portIndex, rumble);
}

/*
==============
GPad_HasKeyboard
==============
*/

bool __fastcall GPad_HasKeyboard(int portIndex)
{
  return ?GPad_HasKeyboard@@YA_NH@Z(portIndex);
}

/*
==============
GPad_IsButtonReleased
==============
*/

bool __fastcall GPad_IsButtonReleased(int portIndex, GamePadButton button)
{
  return ?GPad_IsButtonReleased@@YA_NHW4GamePadButton@@@Z(portIndex, button);
}

/*
==============
GPad_GetAllControllers
==============
*/

Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> *__fastcall GPad_GetAllControllers()
{
  return ?GPad_GetAllControllers@@YAPE$AAU?$IVectorView@PE$AAUIController@Input@Xbox@Windows@@@Collections@Foundation@Windows@@XZ();
}

/*
==============
GPadXB3_RegisterDvars
==============
*/
void GPadXB3_RegisterDvars()
{
  Dvar_BeginPermanentRegistration();
  gpad_button_deadzone = Dvar_RegisterFloat("MPLMKPSRT", 0.13, 0.0, 1.0, 4u, "Game pad button deadzone threshhold");
  gpad_stick_deadzone_min = Dvar_RegisterFloat("NQQSMKLKRO", 0.1, 0.0, 1.0, 4u, "On XB3 xb3_gpad_stick_deadzone_min is used. This one is the value being passed in by the override call GPad_SetRightStickDeadzoneOverride");
  gpad_stick_deadzone_max = Dvar_RegisterFloat("OPTMSRPOS", 0.0099999998, 0.0, 1.0, 4u, "Game pad maximum stick deadzone");
  gpad_stick_pressed = Dvar_RegisterFloat("NPSNRPPQNP", 0.40000001, 0.0, 1.0, 4u, "Game pad stick pressed threshhold");
  gpad_stick_pressed_hysteresis = Dvar_RegisterFloat("TTKLLTLMP", 0.1, 0.0, 1.0, 4u, "Game pad stick pressed no-change-zone around gpad_stick_pressed to prevent bouncing");
  gpad_menu_scroll_delay_first = Dvar_RegisterInt("SKSNNRNQQ", 420, 0, 1000, 0, "Menu scroll key-repeat delay, for the first repeat, in milliseconds");
  gpad_menu_scroll_delay_rest_start = Dvar_RegisterInt("LSNMOLPNPP", 210, 0, 1000, 0, "Menu scroll key-repeat delay start, for repeats after the first, in milliseconds");
  gpad_menu_scroll_delay_rest_end = Dvar_RegisterInt("NKLNROKPQO", 50, 0, 1000, 0, "Menu scroll key-repeat delay end, for repeats after the first, in milliseconds");
  gpad_menu_scroll_delay_rest_accel = Dvar_RegisterInt("NPKOTOKTKR", 2, 0, 1000, 0, "Menu scroll key-repeat delay acceleration from start to end, for repeats after the first, in milliseconds per repeat");
  gpad_dpadDebounceTime = Dvar_RegisterInt("LKSQPTSMPR", 0, 0, 0x7FFFFFFF, 4u, (const char *)&queryFormat.fmt + 3);
  gpad_button_lstick_deflect_max = Dvar_RegisterFloat("LMORSKSTPK", 1.0, 0.0, 1.0, 4u, "Left stick deflect max");
  gpad_button_rstick_deflect_max = Dvar_RegisterFloat("NOPKLKMSRM", 1.0, 0.0, 1.0, 4u, "Right stick deflect max");
  gpad_isLefty = Dvar_RegisterBool("LMTKLROPNM", 0, 4u, "Whether we're in lefty mode");
  gpad_use_deadzone_option_value = Dvar_RegisterBool("NPQOMTNPOQ", 1, 0, "Use the new profile value as a deadzone for the sticks in the gamepad updates.");
  gpad_rapidfire = Dvar_RegisterBool("LMRSPQRPNK", 0, 4u, "Simulate a modded controller (hold rtrigger most of the way down)");
  Dvar_EndPermanentRegistration();
}

/*
==============
GPad_ConvertStickToFloat
==============
*/

void __fastcall GPad_ConvertStickToFloat(double inX, float inY, float *outX, float *outY, float deadzoneMin)
{
  float v5; 
  __int128 v7; 
  float v8; 
  float value; 

  v7 = *(_OWORD *)&inX;
  v5 = *(float *)&inX;
  *(float *)&v7 = fsqrt((float)(*(float *)&inX * *(float *)&inX) + (float)(inY * inY));
  _XMM6 = v7;
  v8 = FLOAT_1_0;
  __asm
  {
    vcmpless xmm2, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm3, xmm2
  }
  if ( *(float *)&v7 >= deadzoneMin )
  {
    value = gpad_stick_deadzone_max->current.value;
    if ( *(float *)&v7 <= (float)(1.0 - value) )
      v8 = (float)(*(float *)&v7 - deadzoneMin) / (float)(1.0 - (float)(value + deadzoneMin));
  }
  else
  {
    v8 = 0.0;
  }
  *outX = (float)((float)(1.0 / *(float *)&_XMM0) * v5) * v8;
  *outY = (float)((float)(1.0 / *(float *)&_XMM0) * inY) * v8;
}

/*
==============
GPad_ForceGamepadRefresh
==============
*/
void GPad_ForceGamepadRefresh(void)
{
  s_gamepadPortMappingValid = 0;
  GPad_RefreshAll();
}

/*
==============
GPad_GetAllControllers
==============
*/
Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> *GPad_GetAllControllers()
{
  int ActivationFactoryByPCWSTR; 
  int v1; 
  __int64 v2; 
  __int64 v3; 
  Platform::Guid pGuid; 
  __int64 v6; 
  void *ppActivationFactory; 

  pGuid.__vftable = (Platform::Object_vtbl *)0x47FC144B7400624Fi64;
  *(_DWORD *)&pGuid.__d = -904053857;
  *(_DWORD *)&pGuid.__h = 1932019963;
  ppActivationFactory = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.Input.Controller", &pGuid, &ppActivationFactory);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v6 = 0i64;
  v1 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppActivationFactory + 48i64))(ppActivationFactory, &v6);
  if ( v1 < 0 )
    __abi_WinRTraiseException(v1);
  v2 = v6;
  v3 = v6;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8i64))(v6);
    v2 = v6;
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16i64))(v2);
  v6 = 0i64;
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  v6 = 0i64;
  return (Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> *)v3;
}

/*
==============
GPad_GetAttachedControllerCount
==============
*/
__int64 GPad_GetAttachedControllerCount()
{
  int enabled; 
  int v1; 
  int v2; 
  int v3; 
  int v4; 
  unsigned int v5; 
  __int64 result; 

  enabled = s_gamePads[0].enabled + 1;
  if ( !s_gamePads[1].enabled )
    enabled = s_gamePads[0].enabled;
  v1 = enabled + 1;
  if ( !s_gamePads[2].enabled )
    v1 = enabled;
  v2 = v1 + 1;
  if ( !s_gamePads[3].enabled )
    v2 = v1;
  v3 = v2 + 1;
  if ( !s_gamePads[4].enabled )
    v3 = v2;
  v4 = v3 + 1;
  if ( !s_gamePads[5].enabled )
    v4 = v3;
  v5 = v4 + 1;
  if ( !s_gamePads[6].enabled )
    v5 = v4;
  result = v5 + 1;
  if ( !s_gamePads[7].enabled )
    return v5;
  return result;
}

/*
==============
GPad_GetButton
==============
*/
float GPad_GetButton(int portIndex, GamePadButton button)
{
  __int64 v2; 
  __int64 v3; 
  GamePad *v4; 

  v2 = portIndex;
  v3 = button;
  if ( (unsigned int)portIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1186, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)") )
    __debugbreak();
  if ( (v3 & 0x30000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1187, ASSERT_TYPE_ASSERT, "(button & (0x10000000 | 0x20000000))", (const char *)&queryFormat, "button & (GPAD_DIGITAL_MASK | GPAD_ANALOG_MASK)") )
    __debugbreak();
  v4 = &s_gamePads[v2];
  if ( (v3 & 0x10000000) != 0 )
  {
    _XMM0 = (unsigned int)v3 & v4->digitals & 0xEFFFFFFF;
    __asm { vpcmpeqd xmm2, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_1_0);
    __asm { vblendvps xmm0, xmm1, xmm6, xmm2 }
  }
  else if ( (v3 & 0x20000000) != 0 )
  {
    *(float *)&_XMM0 = v4->analogs[v3 & 0xFFFFFFFFDFFFFFFFui64];
  }
  else
  {
    LODWORD(_XMM0) = 0;
  }
  return *(float *)&_XMM0;
}

/*
==============
GPad_GetControllerForGamePadIndex
==============
*/
Windows::Xbox::Input::IController *GPad_GetControllerForGamePadIndex(int portIndex)
{
  __int64 v1; 
  __int64 v2; 
  HSTRING v3; 
  __int64 v4; 
  int ActivationFactoryByPCWSTR; 
  int v6; 
  __int64 v7; 
  HSTRING v8; 
  Windows::Xbox::Input::IGamepad **p_gamepad; 
  Windows::Xbox::Input::IGamepad *v10; 
  HSTRING v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  HSTRING v16; 
  int v17; 
  void *v18; 
  Platform::Object_vtbl *v19; 
  int v20; 
  int v21; 
  HSTRING v22; 
  int v23; 
  HSTRING v24; 
  int v25; 
  HSTRING v26; 
  const wchar_t *StringRawBuffer_0; 
  void *ppActivationFactory; 
  __int64 v30; 
  Platform::Guid pGuid; 
  HSTRING v32; 
  HSTRING newString; 
  HSTRING v34; 
  HSTRING v35; 
  Platform::Object_vtbl *v36; 
  HSTRING string[2]; 
  __int64 v38; 
  __int64 v39; 
  char Dest[256]; 

  v39 = -2i64;
  v1 = portIndex;
  if ( (unsigned int)portIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 873, ASSERT_TYPE_ASSERT, "(unsigned)( portIndex ) < (unsigned)( 8 )", "portIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", portIndex, 8) )
    __debugbreak();
  v2 = 0i64;
  v3 = NULL;
  v35 = NULL;
  v4 = 0i64;
  v36 = NULL;
  v38 = 0i64;
  pGuid.__vftable = (Platform::Object_vtbl *)0x47FC144B7400624Fi64;
  *(_DWORD *)&pGuid.__d = -904053857;
  *(_DWORD *)&pGuid.__h = 1932019963;
  ppActivationFactory = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.Input.Controller", &pGuid, &ppActivationFactory);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v30 = 0i64;
  v6 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)ppActivationFactory + 48i64))(ppActivationFactory, &v30);
  if ( v6 < 0 )
    __abi_WinRTraiseException(v6);
  v7 = v30;
  v8 = (HSTRING)v30;
  if ( v30 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8i64))(v30);
    v7 = v30;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
  v32 = v8;
  if ( v8 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 8i64))(v8);
  v32 = v8;
  if ( v8 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 16i64))(v8);
  if ( v8 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 8i64))(v8);
  if ( v8 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 16i64))(v8);
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  v32 = v8;
  if ( v8 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 8i64))(v8);
  if ( v8 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 16i64))(v8);
  v32 = v8;
  if ( v8 )
  {
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 8i64))(v8);
    v3 = v8;
    v35 = v8;
  }
  if ( v8 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 16i64))(v8);
  v32 = NULL;
  p_gamepad = &s_gamePads[v1].gamepad;
  if ( !*p_gamepad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 896, ASSERT_TYPE_ASSERT, "(s_gamePads[portIndex].gamepad)", (const char *)&queryFormat, "s_gamePads[portIndex].gamepad") )
    __debugbreak();
  v10 = *p_gamepad;
  v11 = NULL;
  ppActivationFactory = NULL;
  if ( v10 )
  {
    v12 = v10->__abi_QueryInterface(v10, &_uuidof__AUIController_Input_Xbox_Windows__, &ppActivationFactory);
    if ( v12 < 0 )
      __abi_WinRTraiseException(v12);
    v11 = (HSTRING)ppActivationFactory;
  }
  v34 = v11;
  v13 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v11 + 48i64))(v11, &newString);
  if ( v13 < 0 )
    __abi_WinRTraiseException(v13);
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 16i64))(v11);
  v14 = 0;
  v15 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v3 + 56i64))(v3, &v30);
  if ( v15 < 0 )
LABEL_77:
    __abi_WinRTraiseException(v15);
  v16 = newString;
  while ( v14 < (int)v30 )
  {
    ppActivationFactory = NULL;
    v17 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, void **))(*(_QWORD *)v3 + 48i64))(v3, (unsigned int)v14, &ppActivationFactory);
    if ( v17 < 0 )
      __abi_WinRTraiseException(v17);
    v18 = ppActivationFactory;
    v19 = (Platform::Object_vtbl *)ppActivationFactory;
    if ( ppActivationFactory )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 8i64))(ppActivationFactory);
      v18 = ppActivationFactory;
    }
    if ( v18 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 16i64))(v18);
    pGuid.__vftable = v19;
    if ( v19 != (Platform::Object_vtbl *)v4 )
    {
      if ( v19 )
        (*((void (__fastcall **)(Platform::Object_vtbl *))v19->__abi_QueryInterface + 1))(v19);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
      v4 = (__int64)v19;
      v36 = v19;
    }
    if ( v19 )
      (*((void (__fastcall **)(Platform::Object_vtbl *))v19->__abi_QueryInterface + 2))(v19);
    v20 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v4 + 48i64))(v4, &v34);
    if ( v20 < 0 )
      __abi_WinRTraiseException(v20);
    ppActivationFactory = NULL;
    v21 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v4 + 56i64))(v4, &ppActivationFactory);
    if ( v21 < 0 )
      __abi_WinRTraiseException(v21);
    v22 = (HSTRING)ppActivationFactory;
    if ( ppActivationFactory )
    {
      v23 = WindowsDuplicateString_0((HSTRING)ppActivationFactory, &newString);
      if ( v23 < 0 )
        __abi_WinRTraiseException(v23);
      v24 = newString;
      v22 = (HSTRING)ppActivationFactory;
    }
    else
    {
      v24 = NULL;
    }
    WindowsDeleteString_0(v22);
    pGuid.__vftable = (Platform::Object_vtbl *)v24;
    if ( v24 )
    {
      v25 = WindowsDuplicateString_0(v24, string);
      if ( v25 < 0 )
        __abi_WinRTraiseException(v25);
      v26 = string[0];
    }
    else
    {
      v26 = NULL;
    }
    string[1] = v26;
    WindowsDeleteString_0(v24);
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v26, NULL);
    wcstombs(Dest, StringRawBuffer_0, 0xFFui64);
    Dest[255] = 0;
    if ( v16 == v34 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8i64))(v4);
      v2 = v4;
      v38 = v4;
      WindowsDeleteString_0(v26);
      break;
    }
    WindowsDeleteString_0(v26);
    ++v14;
    v15 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v3 + 56i64))(v3, &v30);
    if ( v15 < 0 )
      goto LABEL_77;
  }
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8i64))(v2);
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 919, ASSERT_TYPE_ASSERT, "(controllerToReturn != nullptr)", (const char *)&queryFormat, "controllerToReturn != nullptr") )
  {
    __debugbreak();
  }
  WindowsDeleteString_0(v32);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16i64))(v2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
  if ( v3 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v3 + 16i64))(v3);
  return (Windows::Xbox::Input::IController *)v2;
}

/*
==============
GPad_GetControllerMissing
==============
*/
__int64 GPad_GetControllerMissing()
{
  return (unsigned int)s_gpadControllerMissing;
}

/*
==============
GPad_GetControllersForUser
==============
*/
Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> *GPad_GetControllersForUser(Windows::Xbox::System::User *aUser)
{
  int v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 

  v5 = 0i64;
  v1 = aUser->__abi_get_Controllers(aUser, (Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> **)&v5);
  if ( v1 < 0 )
    __abi_WinRTraiseException(v1);
  v2 = v5;
  v3 = v5;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8i64))(v5);
    v2 = v5;
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16i64))(v2);
  v5 = 0i64;
  return (Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> *)v3;
}

/*
==============
GPad_GetGamepadCountForUser
==============
*/
__int64 GPad_GetGamepadCountForUser(Windows::Xbox::System::User *aUser)
{
  unsigned int v1; 
  __int64 v2; 
  HSTRING v3; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> *ControllersForUser; 
  __int64 v5; 
  unsigned int i; 
  int v7; 
  int v8; 
  HSTRING v9; 
  HSTRING v10; 
  int v11; 
  int v12; 
  HSTRING v13; 
  int v14; 
  HSTRING v15; 
  int v16; 
  HSTRING v17; 
  const wchar_t *StringRawBuffer_0; 
  Windows::Xbox::Input::IGamepad **p_gamepad; 
  __int64 v20; 
  Windows::Xbox::Input::IGamepad *v21; 
  HSTRING v22; 
  int v23; 
  int v24; 
  HSTRING string; 
  unsigned int v27; 
  int v28; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> *v29; 
  __int64 v30; 
  HSTRING v31; 
  HSTRING newString; 
  HSTRING v33[2]; 
  __int64 v34; 
  HSTRING v35; 
  __int64 v36; 
  __int64 v37; 
  HSTRING v38; 
  char Dest[256]; 

  v36 = -2i64;
  v1 = 0;
  v2 = 0i64;
  v30 = 0i64;
  v3 = NULL;
  v31 = NULL;
  ControllersForUser = GPad_GetControllersForUser(aUser);
  v5 = (__int64)ControllersForUser;
  v29 = ControllersForUser;
  if ( ControllersForUser )
  {
    ControllersForUser->__abi_AddRef(ControllersForUser);
    v2 = v5;
    v30 = v5;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
  v37 = 0i64;
  for ( i = 0; ; i = v27 + 1 )
  {
    v27 = i;
    v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 56i64))(v2, &v28);
    if ( v7 < 0 )
      __abi_WinRTraiseException(v7);
    if ( (int)i >= v28 )
      break;
    string = NULL;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING *))(*(_QWORD *)v2 + 48i64))(v2, i, &string);
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    v9 = string;
    v10 = string;
    if ( string )
    {
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8i64))(string);
      v9 = string;
    }
    if ( v9 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v9 + 16i64))(v9);
    v35 = v10;
    if ( v10 != v3 )
    {
      if ( v10 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 8i64))(v10);
      if ( v3 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v3 + 16i64))(v3);
      v3 = v10;
      v31 = v10;
    }
    if ( v10 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 16i64))(v10);
    v11 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v3 + 48i64))(v3, &v34);
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    string = NULL;
    v12 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v3 + 56i64))(v3, &string);
    if ( v12 < 0 )
      __abi_WinRTraiseException(v12);
    v13 = string;
    if ( string )
    {
      v14 = WindowsDuplicateString_0(string, &newString);
      if ( v14 < 0 )
        __abi_WinRTraiseException(v14);
      v15 = newString;
      v13 = string;
    }
    else
    {
      v15 = NULL;
    }
    WindowsDeleteString_0(v13);
    v35 = v15;
    if ( v15 )
    {
      v16 = WindowsDuplicateString_0(v15, v33);
      if ( v16 < 0 )
        __abi_WinRTraiseException(v16);
      v17 = v33[0];
    }
    else
    {
      v17 = NULL;
    }
    v33[1] = v17;
    WindowsDeleteString_0(v15);
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v17, NULL);
    wcstombs(Dest, StringRawBuffer_0, 0xFFui64);
    Dest[255] = 0;
    p_gamepad = &s_gamePads[0].gamepad;
    v20 = v34;
    do
    {
      if ( *((_BYTE *)p_gamepad - 8) )
      {
        v21 = *p_gamepad;
        v22 = NULL;
        string = NULL;
        if ( v21 )
        {
          v23 = v21->__abi_QueryInterface(v21, &_uuidof__AUIController_Input_Xbox_Windows__, (void **)&string);
          if ( v23 < 0 )
            __abi_WinRTraiseException(v23);
          v22 = string;
        }
        v38 = v22;
        v24 = (*(__int64 (__fastcall **)(HSTRING, Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> **))(*(_QWORD *)v22 + 48i64))(v22, &v29);
        if ( v24 < 0 )
          __abi_WinRTraiseException(v24);
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v22 + 16i64))(v22);
        if ( v29 == (Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> *)v20 )
          ++v1;
      }
      p_gamepad += 19;
    }
    while ( (__int64)p_gamepad < (__int64)&delayedInput[0].hasInput );
    WindowsDeleteString_0(v17);
  }
  WindowsDeleteString_0(NULL);
  if ( v3 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v3 + 16i64))(v3);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16i64))(v2);
  return v1;
}

/*
==============
GPad_GetPortIndexForUser
==============
*/
__int64 GPad_GetPortIndexForUser(Windows::Xbox::System::User *aUser, int *portIndexToReturn)
{
  int *v2; 
  unsigned __int8 v4; 
  __int64 v5; 
  HSTRING v6; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> *ControllersForUser; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 
  HSTRING v12; 
  HSTRING v13; 
  int v14; 
  int v15; 
  HSTRING v16; 
  int v17; 
  HSTRING v18; 
  int v19; 
  HSTRING v20; 
  const wchar_t *StringRawBuffer_0; 
  int v22; 
  Windows::Xbox::Input::IGamepad **p_gamepad; 
  __int64 v24; 
  Windows::Xbox::Input::IGamepad *v25; 
  HSTRING v26; 
  int v27; 
  int v28; 
  char v30; 
  HSTRING string; 
  int v32; 
  int v33; 
  int *v34; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> *v35; 
  __int64 v36; 
  HSTRING v37; 
  HSTRING newString; 
  HSTRING v39; 
  HSTRING v40; 
  __int64 v41; 
  HSTRING v42; 
  __int64 v43; 
  __int64 v44; 
  HSTRING v45; 
  char Dest[256]; 

  v43 = -2i64;
  v2 = portIndexToReturn;
  v34 = portIndexToReturn;
  v4 = 0;
  v30 = 0;
  if ( GPad_GetGamepadCountForUser(aUser) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 935, ASSERT_TYPE_ASSERT, "(GPad_GetGamepadCountForUser( aUser ) <= 1)", (const char *)&queryFormat, "GPad_GetGamepadCountForUser( aUser ) <= 1") )
    __debugbreak();
  v5 = 0i64;
  v36 = 0i64;
  v6 = NULL;
  v37 = NULL;
  ControllersForUser = GPad_GetControllersForUser(aUser);
  v8 = (__int64)ControllersForUser;
  v35 = ControllersForUser;
  if ( ControllersForUser )
  {
    ControllersForUser->__abi_AddRef(ControllersForUser);
    v5 = v8;
    v36 = v8;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
  *v2 = -1;
  v44 = 0i64;
  v9 = 0;
  v32 = 0;
  v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v5 + 56i64))(v5, &v33);
  if ( v10 < 0 )
LABEL_50:
    __abi_WinRTraiseException(v10);
  while ( v9 < v33 && *v2 == -1 )
  {
    string = NULL;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING *))(*(_QWORD *)v5 + 48i64))(v5, (unsigned int)v9, &string);
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    v12 = string;
    v13 = string;
    if ( string )
    {
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8i64))(string);
      v12 = string;
    }
    if ( v12 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v12 + 16i64))(v12);
    v42 = v13;
    if ( v13 != v6 )
    {
      if ( v13 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 8i64))(v13);
      if ( v6 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v6 + 16i64))(v6);
      v6 = v13;
      v37 = v13;
    }
    if ( v13 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 16i64))(v13);
    v14 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v6 + 48i64))(v6, &v41);
    if ( v14 < 0 )
      __abi_WinRTraiseException(v14);
    string = NULL;
    v15 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v6 + 56i64))(v6, &string);
    if ( v15 < 0 )
      __abi_WinRTraiseException(v15);
    v16 = string;
    if ( string )
    {
      v17 = WindowsDuplicateString_0(string, &newString);
      if ( v17 < 0 )
        __abi_WinRTraiseException(v17);
      v18 = newString;
      v16 = string;
    }
    else
    {
      v18 = NULL;
    }
    WindowsDeleteString_0(v16);
    v42 = v18;
    if ( v18 )
    {
      v19 = WindowsDuplicateString_0(v18, &v39);
      if ( v19 < 0 )
        __abi_WinRTraiseException(v19);
      v20 = v39;
      v40 = v39;
    }
    else
    {
      v20 = NULL;
      v40 = NULL;
    }
    WindowsDeleteString_0(v18);
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v20, NULL);
    wcstombs(Dest, StringRawBuffer_0, 0xFFui64);
    Dest[255] = 0;
    v22 = 0;
    p_gamepad = &s_gamePads[0].gamepad;
    v24 = v41;
    while ( 1 )
    {
      if ( *((_BYTE *)p_gamepad - 8) )
      {
        v25 = *p_gamepad;
        v26 = NULL;
        string = NULL;
        if ( v25 )
        {
          v27 = v25->__abi_QueryInterface(v25, &_uuidof__AUIController_Input_Xbox_Windows__, (void **)&string);
          if ( v27 < 0 )
            __abi_WinRTraiseException(v27);
          v26 = string;
        }
        v45 = v26;
        v28 = (*(__int64 (__fastcall **)(HSTRING, Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> **))(*(_QWORD *)v26 + 48i64))(v26, &v35);
        if ( v28 < 0 )
          __abi_WinRTraiseException(v28);
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v26 + 16i64))(v26);
        if ( v35 == (Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> *)v24 )
          break;
      }
      ++v22;
      p_gamepad += 19;
      if ( (__int64)p_gamepad >= (__int64)&delayedInput[0].hasInput )
      {
        v2 = v34;
        v4 = v30;
        goto LABEL_43;
      }
    }
    v2 = v34;
    *v34 = v22;
    v4 = 1;
    v30 = 1;
LABEL_43:
    WindowsDeleteString_0(v20);
    v9 = ++v32;
    v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v5 + 56i64))(v5, &v33);
    if ( v10 < 0 )
      goto LABEL_50;
  }
  WindowsDeleteString_0(NULL);
  if ( v6 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v6 + 16i64))(v6);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
  return v4;
}

/*
==============
GPad_GetStick
==============
*/
float GPad_GetStick(int portIndex, GamePadStick stick)
{
  __int64 v2; 
  __int64 v3; 

  v2 = portIndex;
  v3 = stick;
  if ( (unsigned int)portIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1269, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)") )
    __debugbreak();
  if ( (v3 & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1270, ASSERT_TYPE_ASSERT, "(stick & 0x40000000)", (const char *)&queryFormat, "stick & GPAD_STICK_MASK") )
    __debugbreak();
  return s_gamePads[v2].sticks[v3 & 0xFFFFFFFFBFFFFFFFui64];
}

/*
==============
GPad_GetStickChangedToPressedState
==============
*/
bool GPad_GetStickChangedToPressedState(int portIndex, GamePadStick stick, GamePadStickDir stickDir, bool pressedState)
{
  __int64 v4; 
  __int64 v5; 
  signed __int32 v8; 
  GamePad *v9; 
  bool v10; 

  v4 = portIndex;
  v5 = stickDir;
  if ( (unsigned int)portIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1335, ASSERT_TYPE_ASSERT, "(( portIndex >= 0 ) && ( portIndex < 8 ))", (const char *)&queryFormat, "( portIndex >= 0 ) && ( portIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  if ( (stick & 0x40000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1336, ASSERT_TYPE_ASSERT, "(stick & 0x40000000)", (const char *)&queryFormat, "stick & GPAD_STICK_MASK") )
    __debugbreak();
  if ( (unsigned int)v5 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1337, ASSERT_TYPE_ASSERT, "(( stickDir == GPAD_STICK_POS ) || ( stickDir == GPAD_STICK_NEG ))", (const char *)&queryFormat, "( stickDir == GPAD_STICK_POS ) || ( stickDir == GPAD_STICK_NEG )") )
    __debugbreak();
  v8 = stick & 0xBFFFFFFF;
  v9 = &s_gamePads[v4];
  if ( (unsigned int)v8 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1341, ASSERT_TYPE_ASSERT, "((unsigned)stickIndex < 4)", (const char *)&queryFormat, "(unsigned)stickIndex < GPAD_STICK_COUNT") )
    __debugbreak();
  v10 = v9->stickDown[v8][v5];
  return v10 != v9->stickDownLast[v8][v5] && v10 == pressedState;
}

/*
==============
GPad_GetUserIndexForPort
==============
*/
bool GPad_GetUserIndexForPort(const int portIndex, int *userIndexToReturn)
{
  int UserIndexForPort_Internal; 

  UserIndexForPort_Internal = GPad_GetUserIndexForPort_Internal(portIndex);
  *userIndexToReturn = UserIndexForPort_Internal;
  return UserIndexForPort_Internal != -1;
}

/*
==============
GPad_GetUserIndexForPort_Internal
==============
*/
__int64 GPad_GetUserIndexForPort_Internal(int portIndex)
{
  __int64 v1; 
  Windows::Xbox::System::User *v2; 
  __int64 v3; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> *v4; 
  HSTRING v5; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *Users; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int i; 
  int v11; 
  HSTRING v12; 
  int v13; 
  HSTRING v14; 
  HSTRING v15; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> *ControllersForUser; 
  __int64 v17; 
  int j; 
  int v19; 
  int v20; 
  HSTRING v21; 
  HSTRING v22; 
  int v23; 
  int v24; 
  HSTRING v25; 
  int v26; 
  int v27; 
  HSTRING v28; 
  const wchar_t *StringRawBuffer_0; 
  __int64 v30; 
  HSTRING string; 
  unsigned int v32; 
  unsigned int v33; 
  __int64 v34; 
  HSTRING v35; 
  __int64 v36; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *v37; 
  __int64 v38; 
  HSTRING v39; 
  __int64 v40; 
  HSTRING v41; 
  HSTRING newString; 
  HSTRING v43; 
  unsigned __int64 v44; 
  __int64 v45; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> *v46; 
  __int64 v47; 
  char Dest[256]; 

  v45 = -2i64;
  v1 = portIndex;
  if ( (unsigned int)portIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1075, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)") )
    __debugbreak();
  v2 = NULL;
  v39 = NULL;
  v3 = 0i64;
  v38 = 0i64;
  v4 = NULL;
  v40 = 0i64;
  v5 = NULL;
  v41 = NULL;
  if ( !s_gamePads[v1].gamepad )
    return 0xFFFFFFFFi64;
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v30) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 146, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 8 )", "index doesn't index XB3_SUPPORTED_GAMEPAD_COUNT\n\t%i not in [0, %i)", v30, 8) )
      __debugbreak();
  }
  v44 = s_gamepadIds[v1];
  Users = Users_GetUsers();
  v8 = (__int64)Users;
  v37 = Users;
  if ( Users )
  {
    Users->__abi_AddRef(Users);
    v3 = v8;
    v38 = v8;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
  v9 = -1;
  v33 = -1;
  for ( i = 0; ; i = v32 + 1 )
  {
LABEL_14:
    v32 = i;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 56i64))(v3, &v34);
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    if ( i >= (unsigned int)v34 || v9 != -1 )
      break;
    v12 = NULL;
    string = NULL;
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING *))(*(_QWORD *)v3 + 48i64))(v3, i, &string);
    if ( v13 < 0 )
      __abi_WinRTraiseException(v13);
    v14 = string;
    v15 = string;
    if ( string )
    {
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8i64))(string);
      v14 = string;
    }
    if ( v14 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v14 + 16i64))(v14);
    v35 = v15;
    if ( v15 != (HSTRING)v2 )
    {
      if ( v15 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v15 + 8i64))(v15);
      if ( v2 )
        v2->__abi_Release(v2);
      v2 = (Windows::Xbox::System::User *)v15;
      v39 = v15;
    }
    if ( v15 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v15 + 16i64))(v15);
    ControllersForUser = GPad_GetControllersForUser(v2);
    v17 = (__int64)ControllersForUser;
    v46 = ControllersForUser;
    if ( ControllersForUser != v4 )
    {
      if ( ControllersForUser )
        ControllersForUser->__abi_AddRef(ControllersForUser);
      if ( v4 )
        v4->__abi_Release(v4);
      v4 = (Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> *)v17;
      v40 = v17;
    }
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16i64))(v17);
    v47 = 0i64;
    for ( j = 0; ; ++j )
    {
      v19 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> *, __int64 *))v4->Platform::Object::__vftable[1].__abi_AddRef)(v4, &v36);
      if ( v19 < 0 )
        __abi_WinRTraiseException(v19);
      if ( j >= (int)v36 )
        break;
      string = NULL;
      v20 = v4->Platform::Object::__vftable[1].__abi_QueryInterface(v4, (Platform::Guid *)(unsigned int)j, (void **)&string);
      if ( v20 < 0 )
        __abi_WinRTraiseException(v20);
      v21 = string;
      v22 = string;
      if ( string )
      {
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8i64))(string);
        v21 = string;
      }
      if ( v21 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v21 + 16i64))(v21);
      v35 = v22;
      if ( v22 != v5 )
      {
        if ( v22 )
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v22 + 8i64))(v22);
        if ( v5 )
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v5 + 16i64))(v5);
        v5 = v22;
        v41 = v22;
      }
      if ( v22 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v22 + 16i64))(v22);
      v23 = (*(__int64 (__fastcall **)(HSTRING, Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> **))(*(_QWORD *)v5 + 48i64))(v5, &v37);
      if ( v23 < 0 )
        __abi_WinRTraiseException(v23);
      string = NULL;
      v24 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v5 + 56i64))(v5, &string);
      if ( v24 < 0 )
        __abi_WinRTraiseException(v24);
      v25 = string;
      if ( string )
      {
        v26 = WindowsDuplicateString_0(string, &newString);
        if ( v26 < 0 )
          __abi_WinRTraiseException(v26);
        v12 = newString;
        v25 = string;
      }
      WindowsDeleteString_0(v25);
      v35 = v12;
      if ( v12 )
      {
        v27 = WindowsDuplicateString_0(v12, &v43);
        if ( v27 < 0 )
          __abi_WinRTraiseException(v27);
        v28 = v43;
      }
      else
      {
        v28 = NULL;
      }
      v35 = v28;
      WindowsDeleteString_0(v12);
      StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v28, NULL);
      wcstombs(Dest, StringRawBuffer_0, 0xFFui64);
      Dest[255] = 0;
      if ( (Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *)v44 == v37 )
      {
        v9 = v32;
        v33 = v32;
        WindowsDeleteString_0(v28);
        i = v9 + 1;
        goto LABEL_14;
      }
      WindowsDeleteString_0(v28);
      v12 = NULL;
    }
    v9 = v33;
  }
  if ( v5 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v5 + 16i64))(v5);
  if ( v4 )
    v4->__abi_Release(v4);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16i64))(v3);
  if ( v2 )
    v2->__abi_Release(v2);
  return v9;
}

/*
==============
GPad_HasInput
==============
*/

bool __fastcall GPad_HasInput(int portIndex)
{
  return GPad_IsActive(portIndex);
}

/*
==============
GPad_HasKeyboard
==============
*/
bool GPad_HasKeyboard(int portIndex)
{
  return 0;
}

/*
==============
GPad_InitAll
==============
*/
void GPad_InitAll(void)
{
  GamePad *v0; 
  int v1; 
  bool v2; 
  int v3; 
  float *p_LeftTriggerLevel; 
  bool v5; 
  __int64 v6; 
  __int64 v7; 

  gpad_rStick_deadzone_min_override = 0.0;
  GPadXB3_RegisterDvars();
  v0 = s_gamePads;
  v1 = 0;
  v2 = 1;
  do
  {
    if ( !v2 )
    {
      LODWORD(v7) = 8;
      LODWORD(v6) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 605, ASSERT_TYPE_ASSERT, "(unsigned)( portIndex ) < (unsigned)( 8 )", "portIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    if ( v0->enabled && v0->gamepad )
    {
      v0->vibration.__vftable = NULL;
      *(_QWORD *)&v0->vibration.LeftTriggerLevel = 0i64;
      GPad_SetVibration(v0);
    }
    ++v1;
    ++v0;
    v2 = (unsigned int)v1 < 8;
  }
  while ( v1 < 8 );
  v3 = 0;
  p_LeftTriggerLevel = &s_gamePads[0].vibration.LeftTriggerLevel;
  v5 = 1;
  do
  {
    if ( !v5 )
    {
      LODWORD(v7) = 8;
      LODWORD(v6) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 626, ASSERT_TYPE_ASSERT, "(unsigned)( portIndex ) < (unsigned)( 8 )", "portIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    if ( *((_BYTE *)p_LeftTriggerLevel - 140) && *(_QWORD *)(p_LeftTriggerLevel - 33) )
    {
      *(_QWORD *)p_LeftTriggerLevel = 0i64;
      GPad_SetVibration((GamePad *)(p_LeftTriggerLevel - 35));
    }
    ++v3;
    p_LeftTriggerLevel += 38;
    v5 = (unsigned int)v3 < 8;
  }
  while ( v3 < 8 );
  GPad_RefreshAll();
}

/*
==============
GPad_InvalidatePortMapping
==============
*/
void GPad_InvalidatePortMapping(void)
{
  s_gamepadPortMappingValid = 0;
}

/*
==============
GPad_IsActive
==============
*/
bool GPad_IsActive(int portIndex)
{
  __int64 v1; 

  v1 = portIndex;
  if ( (unsigned int)portIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 828, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)") )
    __debugbreak();
  return s_gamePads[v1].enabled && s_gamePads[v1].gamepad;
}

/*
==============
GPad_IsButtonPressed
==============
*/
bool GPad_IsButtonPressed(int portIndex, GamePadButton button)
{
  __int64 v2; 
  __int64 v3; 
  GamePad *v4; 
  bool v5; 
  bool v6; 

  v2 = portIndex;
  v3 = button;
  if ( (unsigned int)portIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1213, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)") )
    __debugbreak();
  if ( (v3 & 0x30000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1214, ASSERT_TYPE_ASSERT, "(button & (0x10000000 | 0x20000000))", (const char *)&queryFormat, "button & (GPAD_DIGITAL_MASK | GPAD_ANALOG_MASK)") )
    __debugbreak();
  v4 = &s_gamePads[v2];
  if ( (v3 & 0x10000000) != 0 )
  {
    v5 = ((unsigned int)v3 & v4->digitals & 0xEFFFFFFF) != 0;
    v6 = ((unsigned int)v3 & v4->lastDigitals & 0xEFFFFFFF) != 0;
  }
  else
  {
    if ( (v3 & 0x20000000) == 0 )
      return 0;
    v5 = v4->analogs[v3 & 0xFFFFFFFFDFFFFFFFui64] > 0.0;
    v6 = v4->lastAnalogs[v3 & 0xFFFFFFFFDFFFFFFFui64] > 0.0;
  }
  return v5 && !v6;
}

/*
==============
GPad_IsButtonReleased
==============
*/
bool GPad_IsButtonReleased(int portIndex, GamePadButton button)
{
  __int64 v2; 
  __int64 v3; 
  GamePad *v4; 
  bool v5; 
  bool v6; 

  v2 = portIndex;
  v3 = button;
  if ( (unsigned int)portIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1242, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)") )
    __debugbreak();
  if ( (v3 & 0x30000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1243, ASSERT_TYPE_ASSERT, "(button & (0x10000000 | 0x20000000))", (const char *)&queryFormat, "button & (GPAD_DIGITAL_MASK | GPAD_ANALOG_MASK)") )
    __debugbreak();
  v4 = &s_gamePads[v2];
  if ( (v3 & 0x10000000) != 0 )
  {
    v5 = ((unsigned int)v3 & v4->digitals & 0xEFFFFFFF) != 0;
    v6 = ((unsigned int)v3 & v4->lastDigitals & 0xEFFFFFFF) != 0;
  }
  else
  {
    if ( (v3 & 0x20000000) == 0 )
      return 0;
    v5 = v4->analogs[v3 & 0xFFFFFFFFDFFFFFFFui64] > 0.0;
    v6 = v4->lastAnalogs[v3 & 0xFFFFFFFFDFFFFFFFui64] > 0.0;
  }
  return !v5 && v6;
}

/*
==============
GPad_IsControllerPairedToUser
==============
*/
char GPad_IsControllerPairedToUser(Windows::Xbox::System::User *aUser, int portIndex)
{
  __int64 v2; 
  char v4; 
  __int64 v5; 
  HSTRING v6; 
  char result; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> *ControllersForUser; 
  __int64 v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  HSTRING v13; 
  int v14; 
  HSTRING v15; 
  HSTRING v16; 
  int v17; 
  int v18; 
  HSTRING v19; 
  int v20; 
  HSTRING v21; 
  int v22; 
  const wchar_t *StringRawBuffer_0; 
  Windows::Xbox::Input::IGamepad *gamepad; 
  HSTRING v25; 
  int v26; 
  int v27; 
  HSTRING string; 
  int v29; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> *v30; 
  __int64 v31; 
  HSTRING v32; 
  HSTRING newString; 
  HSTRING v34[2]; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> *v35; 
  HSTRING v36; 
  __int64 v37; 
  __int64 v38; 
  HSTRING v39; 
  char Dest[256]; 

  v37 = -2i64;
  v2 = portIndex;
  v4 = 0;
  v5 = 0i64;
  v31 = 0i64;
  v6 = NULL;
  v32 = NULL;
  result = GPad_IsActive(portIndex);
  if ( result )
  {
    ControllersForUser = GPad_GetControllersForUser(aUser);
    v9 = (__int64)ControllersForUser;
    v30 = ControllersForUser;
    if ( ControllersForUser )
    {
      ControllersForUser->__abi_AddRef(ControllersForUser);
      v5 = v9;
      v31 = v9;
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
    v38 = 0i64;
    v10 = 0;
    v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v5 + 56i64))(v5, &v29);
    if ( v11 < 0 )
LABEL_43:
      __abi_WinRTraiseException(v11);
    v12 = v2;
    while ( v10 < v29 )
    {
      v13 = NULL;
      string = NULL;
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING *))(*(_QWORD *)v5 + 48i64))(v5, (unsigned int)v10, &string);
      if ( v14 < 0 )
        __abi_WinRTraiseException(v14);
      v15 = string;
      v16 = string;
      if ( string )
      {
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8i64))(string);
        v15 = string;
      }
      if ( v15 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v15 + 16i64))(v15);
      v36 = v16;
      if ( v16 != v6 )
      {
        if ( v16 )
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v16 + 8i64))(v16);
        if ( v6 )
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v6 + 16i64))(v6);
        v6 = v16;
        v32 = v16;
      }
      if ( v16 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v16 + 16i64))(v16);
      v17 = (*(__int64 (__fastcall **)(HSTRING, Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> **))(*(_QWORD *)v6 + 48i64))(v6, &v35);
      if ( v17 < 0 )
        __abi_WinRTraiseException(v17);
      string = NULL;
      v18 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v6 + 56i64))(v6, &string);
      if ( v18 < 0 )
        __abi_WinRTraiseException(v18);
      v19 = string;
      if ( string )
      {
        v20 = WindowsDuplicateString_0(string, &newString);
        if ( v20 < 0 )
          __abi_WinRTraiseException(v20);
        v21 = newString;
        v19 = string;
      }
      else
      {
        v21 = NULL;
      }
      WindowsDeleteString_0(v19);
      v36 = v21;
      if ( v21 )
      {
        v22 = WindowsDuplicateString_0(v21, v34);
        if ( v22 < 0 )
          __abi_WinRTraiseException(v22);
        v13 = v34[0];
      }
      v34[1] = v13;
      WindowsDeleteString_0(v21);
      StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v13, NULL);
      wcstombs(Dest, StringRawBuffer_0, 0xFFui64);
      Dest[255] = 0;
      gamepad = s_gamePads[v12].gamepad;
      v25 = NULL;
      string = NULL;
      if ( gamepad )
      {
        v26 = gamepad->__abi_QueryInterface(gamepad, &_uuidof__AUIController_Input_Xbox_Windows__, (void **)&string);
        if ( v26 < 0 )
          __abi_WinRTraiseException(v26);
        v25 = string;
      }
      v39 = v25;
      v27 = (*(__int64 (__fastcall **)(HSTRING, Windows::Foundation::Collections::IVectorView<Windows::Xbox::Input::IController _> **))(*(_QWORD *)v25 + 48i64))(v25, &v30);
      if ( v27 < 0 )
        __abi_WinRTraiseException(v27);
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v25 + 16i64))(v25);
      if ( v30 == v35 )
      {
        v4 = 1;
        WindowsDeleteString_0(v13);
        break;
      }
      WindowsDeleteString_0(v13);
      ++v10;
      v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v5 + 56i64))(v5, &v29);
      if ( v11 < 0 )
        goto LABEL_43;
    }
    WindowsDeleteString_0(NULL);
    if ( v6 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v6 + 16i64))(v6);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
    return v4;
  }
  return result;
}

/*
==============
GPad_IsPairedToUser
==============
*/
bool GPad_IsPairedToUser(const int portIndex)
{
  return (unsigned int)GPad_GetUserIndexForPort_Internal(portIndex) != -1;
}

/*
==============
GPad_IsStickPressed
==============
*/
bool GPad_IsStickPressed(int portIndex, GamePadStick stick, GamePadStickDir stickDir)
{
  return GPad_GetStickChangedToPressedState(portIndex, stick, stickDir, 1);
}

/*
==============
GPad_IsStickReleased
==============
*/
bool GPad_IsStickReleased(int portIndex, GamePadStick stick, GamePadStickDir stickDir)
{
  return GPad_GetStickChangedToPressedState(portIndex, stick, stickDir, 0);
}

/*
==============
GPad_RefreshAll
==============
*/
void GPad_RefreshAll(void)
{
  unsigned int v0; 
  __int64 v1; 
  __int64 v2; 
  int ActivationFactoryByPCWSTR; 
  int v4; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned int v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  int v18; 
  int v19; 
  __int64 v20; 
  __int64 i; 
  unsigned int v22; 
  __int64 *v23; 
  Windows::Xbox::Input::IGamepad **p_gamepad; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  unsigned int v28; 
  unsigned int v29; 
  __int64 v30; 
  __int64 v31; 
  int v32; 
  __int64 v33; 
  __int64 v34; 
  Platform::Object_vtbl *v35; 
  int v36; 
  int v37; 
  unsigned __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  Windows::Xbox::Input::IGamepad *v41; 
  __int64 v42; 
  __int64 v43; 
  Windows::Xbox::Input::IGamepad *gamepad; 
  __int64 v45; 
  const dvar_t *v46; 
  __int128 unsignedInt; 
  __int128 v51; 
  void (__fastcall *v53)(int); 
  __int64 *v54; 
  void *ppActivationFactory; 
  Platform::Guid pGuid; 
  Platform::Object_vtbl *v57; 
  __int64 v58; 
  __int64 v59; 
  __int64 v60; 
  __int64 v61; 
  __int64 v62; 
  __int64 v63; 
  __int64 v64[8]; 
  __int64 v65[8]; 
  __int64 v66; 

  v63 = -2i64;
  v0 = 0;
  v1 = 0i64;
  v59 = 0i64;
  v2 = 0i64;
  v60 = 0i64;
  if ( !s_gamepadPortMappingValid )
  {
    memset(v65, 0, sizeof(v65));
    memset(v64, 0, sizeof(v64));
    pGuid.__vftable = (Platform::Object_vtbl *)0x4BF8FDAB8C4C1BCDi64;
    *(_DWORD *)&pGuid.__d = -1297356355;
    *(_DWORD *)&pGuid.__h = -738339151;
    ppActivationFactory = NULL;
    ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.Input.Gamepad", &pGuid, &ppActivationFactory);
    if ( ActivationFactoryByPCWSTR < 0 )
      __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    v54 = NULL;
    v4 = (*(__int64 (__fastcall **)(void *, __int64 **))(*(_QWORD *)ppActivationFactory + 48i64))(ppActivationFactory, &v54);
    if ( v4 < 0 )
      __abi_WinRTraiseException(v4);
    v5 = (__int64)v54;
    v6 = (__int64)v54;
    if ( v54 )
    {
      (*(void (__fastcall **)(__int64 *))(*v54 + 8))(v54);
      v5 = (__int64)v54;
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
    v58 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8i64))(v6);
    v58 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8i64))(v6);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
    if ( ppActivationFactory )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
    v58 = v6;
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8i64))(v6);
      v1 = v6;
      v59 = v6;
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
    v7 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v1 + 56i64))(v1, &ppActivationFactory);
    if ( v7 < 0 )
      __abi_WinRTraiseException(v7);
    v8 = (int)ppActivationFactory;
    v66 = 0i64;
    v9 = 0i64;
    v10 = 8i64;
    do
    {
      v11 = v65[v9];
      if ( v11 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
        v65[v9] = 0i64;
      }
      v12 = v64[v9];
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
        v64[v9] = 0i64;
      }
      ++v9;
      --v10;
    }
    while ( v10 );
    v13 = 0;
    if ( v8 )
    {
      while ( 1 )
      {
        v54 = NULL;
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(*(_QWORD *)v1 + 48i64))(v1, v13, &v54);
        if ( v14 < 0 )
          __abi_WinRTraiseException(v14);
        v15 = (__int64)v54;
        v16 = (__int64)v54;
        if ( v54 )
        {
          (*(void (__fastcall **)(__int64 *))(*v54 + 8))(v54);
          v15 = (__int64)v54;
        }
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16i64))(v15);
        v58 = v16;
        v17 = 0i64;
        v57 = NULL;
        if ( v16 )
        {
          v18 = (**(__int64 (__fastcall ***)(__int64, Platform::Guid *, __int64 *))v16)(v16, &_uuidof__AUIController_Input_Xbox_Windows__, (__int64 *)&v57);
          if ( v18 < 0 )
            __abi_WinRTraiseException(v18);
          v17 = (__int64)v57;
        }
        v62 = v17;
        v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 48i64))(v17, &v61);
        if ( v19 < 0 )
          __abi_WinRTraiseException(v19);
        v20 = v61;
        if ( !v61 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 132, ASSERT_TYPE_ASSERT, "(id)", (const char *)&queryFormat, &valueOut) )
          __debugbreak();
        for ( i = 0i64; i < 8; ++i )
        {
          if ( s_gamepadIds[i] == v20 )
            goto LABEL_46;
        }
        i = -1i64;
LABEL_46:
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16i64))(v17);
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16i64))(v16);
        if ( i >= 0 )
          *((_BYTE *)&v66 + i) = 1;
        if ( ++v13 >= (unsigned int)ppActivationFactory )
          break;
        v1 = v59;
      }
    }
    v22 = 0;
    v23 = &v66;
    v54 = &v66;
    p_gamepad = &s_gamePads[0].gamepad;
    v25 = 0i64;
    do
    {
      if ( !s_isPadActiveInGameCB || s_isPadActiveInGameCB(v22) || *(_BYTE *)v23 )
      {
        v26 = v65[v25];
        v27 = (__int64)*p_gamepad;
        if ( *p_gamepad != (Windows::Xbox::Input::IGamepad *)v26 )
        {
          if ( v27 )
            (*(void (__fastcall **)(Windows::Xbox::Input::IGamepad *))(*(_QWORD *)v27 + 8i64))(*p_gamepad);
          if ( v26 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16i64))(v26);
          v65[v25] = v27;
        }
        v23 = v54;
      }
      else
      {
        s_gamepadIds[v25] = 0i64;
        *((_BYTE *)p_gamepad - 8) = 0;
        if ( *p_gamepad )
        {
          GPad_UpdateSticks(v22, NULL);
          GPad_UpdateDigitals(v22, NULL);
          GPad_UpdateAnalogs(v22, NULL);
          if ( *p_gamepad )
          {
            (*p_gamepad)->__abi_Release(*p_gamepad);
            *p_gamepad = NULL;
          }
        }
      }
      ++v22;
      v23 = (__int64 *)((char *)v23 + 1);
      v54 = v23;
      p_gamepad += 19;
      ++v25;
    }
    while ( v22 < 8 );
    v28 = 0;
    v29 = (unsigned int)ppActivationFactory;
    v30 = v60;
    if ( (_DWORD)ppActivationFactory )
    {
      v31 = v59;
      while ( 1 )
      {
        v54 = NULL;
        v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(*(_QWORD *)v31 + 48i64))(v31, v28, &v54);
        if ( v32 < 0 )
          __abi_WinRTraiseException(v32);
        v33 = (__int64)v54;
        v34 = (__int64)v54;
        if ( v54 )
        {
          (*(void (__fastcall **)(__int64 *))(*v54 + 8))(v54);
          v33 = (__int64)v54;
        }
        if ( v33 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16i64))(v33);
        v62 = v34;
        if ( v34 != v30 )
        {
          if ( v34 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8i64))(v34);
          if ( v30 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16i64))(v30);
          v30 = v34;
          v60 = v34;
        }
        if ( v34 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16i64))(v34);
        v35 = NULL;
        v57 = NULL;
        if ( v30 )
        {
          v36 = (**(__int64 (__fastcall ***)(__int64, Platform::Guid *, __int64 *))v30)(v30, &_uuidof__AUIController_Input_Xbox_Windows__, (__int64 *)&v57);
          if ( v36 < 0 )
            __abi_WinRTraiseException(v36);
          v35 = v57;
        }
        pGuid.__vftable = v35;
        v37 = (*((__int64 (__fastcall **)(Platform::Object_vtbl *, __int64 *))v35->__abi_QueryInterface + 6))(v35, &v58);
        if ( v37 < 0 )
          __abi_WinRTraiseException(v37);
        v38 = v58;
        (*((void (__fastcall **)(Platform::Object_vtbl *))v35->__abi_QueryInterface + 2))(v35);
        if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 132, ASSERT_TYPE_ASSERT, "(id)", (const char *)&queryFormat, &valueOut) )
          __debugbreak();
        v39 = 0i64;
        while ( s_gamepadIds[v39] != v38 )
        {
          if ( ++v39 >= 8 )
            goto LABEL_96;
        }
        if ( v39 == -1 )
        {
LABEL_96:
          if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 154, ASSERT_TYPE_ASSERT, "(id)", (const char *)&queryFormat, &valueOut) )
            __debugbreak();
          v39 = 0i64;
          while ( s_gamepadIds[v39] )
          {
            if ( ++v39 >= 8 )
              goto LABEL_104;
          }
          s_gamepadIds[v39] = v38;
          if ( v39 != -1 )
          {
LABEL_106:
            v40 = v64[v39];
            if ( v30 != v40 )
            {
              if ( v30 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8i64))(v30);
              if ( v40 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16i64))(v40);
              v64[v39] = v30;
            }
            goto LABEL_112;
          }
LABEL_104:
          Com_PrintWarning(1, "Ignoring a newly inserted controller id %llu due to the application max of %d controllers, a controller must be removed for this controller to be usable by the application!", v38, 8i64);
        }
        else if ( *((_BYTE *)&v66 + v39) )
        {
          goto LABEL_106;
        }
LABEL_112:
        if ( ++v28 >= v29 )
          goto LABEL_113;
      }
    }
    while ( 1 )
    {
LABEL_113:
      v41 = (Windows::Xbox::Input::IGamepad *)v64[v0];
      v42 = v65[v0];
      if ( (Windows::Xbox::Input::IGamepad *)v42 != v41 )
      {
        v43 = v0;
        gamepad = s_gamePads[v43].gamepad;
        if ( v41 != gamepad )
        {
          if ( v41 )
          {
            v41->__abi_AddRef((Platform::Object *)v64[v0]);
            gamepad = s_gamePads[v43].gamepad;
          }
          if ( gamepad )
            gamepad->__abi_Release(gamepad);
          s_gamePads[v43].gamepad = v41;
        }
        if ( v42 )
        {
          if ( !v41 )
          {
            s_gamePads[v43].enabled = 0;
            GPad_UpdateSticks(v0, NULL);
            GPad_UpdateDigitals(v0, NULL);
            v45 = (int)v0;
            s_gamePads[v45].lastAnalogs[0] = s_gamePads[v45].analogs[0];
            v46 = gpad_button_deadzone;
            unsignedInt = gpad_button_deadzone->current.unsignedInt;
            *(float *)&unsignedInt = gpad_button_deadzone->current.value / (float)(gpad_button_deadzone->current.value - 1.0);
            _XMM2 = unsignedInt;
            __asm { vmaxss  xmm1, xmm2, xmm7 }
            s_gamePads[v45].analogs[0] = *(float *)&_XMM1;
            s_gamePads[v45].lastAnalogs[1] = s_gamePads[v45].analogs[1];
            v51 = v46->current.unsignedInt;
            *(float *)&v51 = v46->current.value / (float)(v46->current.value - 1.0);
            _XMM2 = v51;
            __asm { vmaxss  xmm1, xmm2, xmm7 }
            s_gamePads[v45].analogs[1] = *(float *)&_XMM1;
            v53 = s_removedCB;
            goto LABEL_125;
          }
        }
        else if ( v41 )
        {
          s_gamePads[v43].enabled = 1;
          v53 = s_insertedCB;
LABEL_125:
          if ( v53 )
            v53(v0);
        }
      }
      if ( ++v0 >= 8 )
      {
        s_gamepadPortMappingValid = 1;
        v2 = v60;
        v1 = v59;
        break;
      }
    }
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16i64))(v2);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16i64))(v1);
}

/*
==============
GPad_ResetControllerMissing
==============
*/
void GPad_ResetControllerMissing(void)
{
  s_gpadControllerMissing = -1;
}

/*
==============
GPad_SetControllerMissing
==============
*/
void GPad_SetControllerMissing(const int controllerIndex)
{
  s_gpadControllerMissing = controllerIndex;
}

/*
==============
GPad_SetGetIsActiveCB
==============
*/
void GPad_SetGetIsActiveCB(bool (*cb)(int))
{
  if ( !cb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 819, ASSERT_TYPE_ASSERT, "(cb)", (const char *)&queryFormat, "cb") )
    __debugbreak();
  s_isPadActiveInGameCB = cb;
}

/*
==============
GPad_SetHighRumble
==============
*/

void __fastcall GPad_SetHighRumble(int portIndex, double rumble)
{
  __int64 v2; 
  float v3; 

  v2 = portIndex;
  v3 = *(float *)&rumble;
  if ( (unsigned int)portIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1296, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)") )
    __debugbreak();
  if ( *(float *)&rumble < 0.0 || *(float *)&rumble > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1297, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( rumble ) && ( rumble ) <= ( 1.f )", "rumble not in [0.f, 1.f]\n\t%g not in [%g, %g]", v3, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  *((float *)&s_gamePads[v2].vibration.__vftable + 1) = v3;
}

/*
==============
GPad_SetInsertedCB
==============
*/
void GPad_SetInsertedCB(void (*cb)(int))
{
  if ( !cb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 812, ASSERT_TYPE_ASSERT, "(cb)", (const char *)&queryFormat, "cb") )
    __debugbreak();
  s_insertedCB = cb;
}

/*
==============
GPad_SetLeftTriggerRumble
==============
*/

void __fastcall GPad_SetLeftTriggerRumble(int portIndex, double rumble)
{
  __int64 v2; 
  float v3; 

  v2 = portIndex;
  v3 = *(float *)&rumble;
  if ( (unsigned int)portIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1308, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)") )
    __debugbreak();
  if ( *(float *)&rumble < 0.0 || *(float *)&rumble > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1309, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( rumble ) && ( rumble ) <= ( 1.f )", "rumble not in [0.f, 1.f]\n\t%g not in [%g, %g]", v3, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  s_gamePads[v2].vibration.LeftTriggerLevel = v3;
}

/*
==============
GPad_SetLowRumble
==============
*/

void __fastcall GPad_SetLowRumble(int portIndex, double rumble)
{
  __int64 v2; 
  float v3; 

  v2 = portIndex;
  v3 = *(float *)&rumble;
  if ( (unsigned int)portIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1284, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)") )
    __debugbreak();
  if ( *(float *)&rumble < 0.0 || *(float *)&rumble > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1285, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( rumble ) && ( rumble ) <= ( 1.f )", "rumble not in [0.f, 1.f]\n\t%g not in [%g, %g]", v3, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  *(float *)&s_gamePads[v2].vibration.__vftable = v3;
}

/*
==============
GPad_SetRemovedCB
==============
*/
void GPad_SetRemovedCB(void (*cb)(int))
{
  if ( !cb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 805, ASSERT_TYPE_ASSERT, "(cb)", (const char *)&queryFormat, "cb") )
    __debugbreak();
  s_removedCB = cb;
}

/*
==============
GPad_SetRightStickDeadzoneOverride
==============
*/
void GPad_SetRightStickDeadzoneOverride(float rightStickDeadzoneVal)
{
  gpad_rStick_deadzone_min_override = rightStickDeadzoneVal;
}

/*
==============
GPad_SetRightTriggerRumble
==============
*/

void __fastcall GPad_SetRightTriggerRumble(int portIndex, double rumble)
{
  __int64 v2; 
  float v3; 

  v2 = portIndex;
  v3 = *(float *)&rumble;
  if ( (unsigned int)portIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1320, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)") )
    __debugbreak();
  if ( *(float *)&rumble < 0.0 || *(float *)&rumble > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1321, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( rumble ) && ( rumble ) <= ( 1.f )", "rumble not in [0.f, 1.f]\n\t%g not in [%g, %g]", v3, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  s_gamePads[v2].vibration.RightTriggerLevel = v3;
}

/*
==============
GPad_SetVibration
==============
*/
void GPad_SetVibration(GamePad *gPad)
{
  float v2; 
  float v3; 
  float LeftTriggerLevel; 
  float RightTriggerLevel; 
  Windows::Xbox::Input::IGamepad *gamepad; 
  Windows::Xbox::Input::IGamepad_vtbl *v7; 
  int v8; 
  Windows::Xbox::Input::GamepadVibration vibration; 

  if ( !gPad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 577, ASSERT_TYPE_ASSERT, "(gPad)", (const char *)&queryFormat, "gPad", -2i64) )
    __debugbreak();
  v2 = *(float *)&gPad->vibration.__vftable;
  if ( (v2 < 0.0 || v2 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 578, ASSERT_TYPE_ASSERT, "(( gPad->vibration.LeftMotorLevel >= 0.0f ) && ( gPad->vibration.LeftMotorLevel <= 1.0f ))", (const char *)&queryFormat, "( gPad->vibration.LeftMotorLevel >= 0.0f ) && ( gPad->vibration.LeftMotorLevel <= 1.0f )") )
    __debugbreak();
  v3 = *((float *)&gPad->vibration.__vftable + 1);
  if ( (v3 < 0.0 || v3 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 579, ASSERT_TYPE_ASSERT, "(( gPad->vibration.RightMotorLevel >= 0.0f ) && ( gPad->vibration.RightMotorLevel <= 1.0f ))", (const char *)&queryFormat, "( gPad->vibration.RightMotorLevel >= 0.0f ) && ( gPad->vibration.RightMotorLevel <= 1.0f )") )
    __debugbreak();
  LeftTriggerLevel = gPad->vibration.LeftTriggerLevel;
  if ( (LeftTriggerLevel < 0.0 || LeftTriggerLevel > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 580, ASSERT_TYPE_ASSERT, "(( gPad->vibration.LeftTriggerLevel >= 0.0f ) && ( gPad->vibration.LeftTriggerLevel <= 1.0f ))", (const char *)&queryFormat, "( gPad->vibration.LeftTriggerLevel >= 0.0f ) && ( gPad->vibration.LeftTriggerLevel <= 1.0f )") )
    __debugbreak();
  RightTriggerLevel = gPad->vibration.RightTriggerLevel;
  if ( (RightTriggerLevel < 0.0 || RightTriggerLevel > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 581, ASSERT_TYPE_ASSERT, "(( gPad->vibration.RightTriggerLevel >= 0.0f ) && ( gPad->vibration.RightTriggerLevel <= 1.0 ))", (const char *)&queryFormat, "( gPad->vibration.RightTriggerLevel >= 0.0f ) && ( gPad->vibration.RightTriggerLevel <= 1.0 )") )
    __debugbreak();
  gamepad = gPad->gamepad;
  v7 = gamepad->Platform::Object::__vftable;
  vibration = gPad->vibration;
  v8 = ((__int64 (__fastcall *)(Windows::Xbox::Input::IGamepad *, Windows::Xbox::Input::GamepadVibration *))v7->__abi_SetVibration)(gamepad, &vibration);
  if ( v8 < 0 )
    __abi_WinRTraiseException(v8);
}

/*
==============
GPad_StopRumbles
==============
*/
void GPad_StopRumbles(int portIndex, bool force)
{
  __int64 v2; 
  GamePad *v4; 
  Windows::Xbox::Input::GamepadVibration *p_vibration; 

  v2 = portIndex;
  if ( (unsigned int)portIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 605, ASSERT_TYPE_ASSERT, "(unsigned)( portIndex ) < (unsigned)( 8 )", "portIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", portIndex, 8) )
    __debugbreak();
  v4 = &s_gamePads[v2];
  if ( v4->enabled && v4->gamepad )
  {
    p_vibration = &v4->vibration;
    if ( force )
      goto LABEL_14;
    if ( v4 == (GamePad *)-132i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 125, ASSERT_TYPE_ASSERT, "(vibration)", (const char *)&queryFormat, "vibration") )
      __debugbreak();
    if ( *(float *)&p_vibration->__vftable != 0.0 || v4->vibration.LeftTriggerLevel != 0.0 || *((float *)&v4->vibration.__vftable + 1) != 0.0 || v4->vibration.RightTriggerLevel != 0.0 )
    {
LABEL_14:
      p_vibration->__vftable = NULL;
      *(_QWORD *)&v4->vibration.LeftTriggerLevel = 0i64;
      GPad_SetVibration(v4);
    }
  }
}

/*
==============
GPad_StopTriggers
==============
*/
void GPad_StopTriggers(int portIndex)
{
  __int64 v1; 
  GamePad *v2; 
  int v4; 

  v1 = portIndex;
  if ( (unsigned int)portIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 626, ASSERT_TYPE_ASSERT, "(unsigned)( portIndex ) < (unsigned)( 8 )", "portIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", portIndex, v4) )
      __debugbreak();
  }
  v2 = &s_gamePads[v1];
  if ( v2->enabled )
  {
    if ( v2->gamepad )
    {
      *(_QWORD *)&v2->vibration.LeftTriggerLevel = 0i64;
      GPad_SetVibration(v2);
    }
  }
}

/*
==============
GPad_SwapGamepadsForControllerIndexes
==============
*/
void GPad_SwapGamepadsForControllerIndexes(int oldControllerIndex, int newControllerIndex)
{
  unsigned __int64 *v2; 
  unsigned __int64 v3; 
  unsigned __int64 *v4; 

  v2 = &s_gamepadIds[oldControllerIndex];
  v3 = *v2;
  v4 = &s_gamepadIds[newControllerIndex];
  *v2 = *v4;
  *v4 = v3;
  s_gamepadPortMappingValid = 0;
  GPad_RefreshAll();
}

/*
==============
GPad_UpdateAll
==============
*/
void GPad_UpdateAll(void)
{
  Windows::Xbox::Input::IGamepadReading *v0; 
  const dvar_t *v1; 
  DelayedInput *v2; 
  int v3; 
  int v4; 
  DelayedInput *v5; 
  const dvar_t *v6; 
  Windows::Xbox::Input::IGamepad **v7; 
  Windows::Xbox::Input::IGamepad *v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  Windows::Xbox::Input::IGamepadReading *state; 
  int v13; 
  Windows::Xbox::Input::IGamepad **p_gamepad; 
  Windows::Xbox::Input::IGamepad *v15; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 

  v0 = NULL;
  v20 = 0i64;
  v1 = DCONST_DVARINT_gpad_debug;
  if ( !DCONST_DVARINT_gpad_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gpad_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.integer >= 0 )
  {
    GPad_RefreshAll();
    v13 = 0;
    p_gamepad = &s_gamePads[0].gamepad;
    do
    {
      if ( *((_BYTE *)p_gamepad - 8) )
      {
        v15 = *p_gamepad;
        v19 = 0i64;
        v16 = v15->__abi_GetCurrentReading(v15, (Windows::Xbox::Input::IGamepadReading **)&v19);
        if ( v16 < 0 )
          __abi_WinRTraiseException(v16);
        v17 = v19;
        v18 = v19;
        if ( v19 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8i64))(v19);
          v17 = v19;
        }
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16i64))(v17);
        v21 = v18;
        if ( (Windows::Xbox::Input::IGamepadReading *)v18 != v0 )
        {
          if ( v18 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8i64))(v18);
          if ( v0 )
            v0->__abi_Release(v0);
          v0 = (Windows::Xbox::Input::IGamepadReading *)v18;
          v20 = v18;
        }
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16i64))(v18);
        GPad_UpdateSticks(v13, v0);
        GPad_UpdateDigitals(v13, v0);
        GPad_UpdateAnalogs(v13, v0);
      }
      ++v13;
      p_gamepad += 19;
    }
    while ( v13 < 8 );
    goto LABEL_33;
  }
  v2 = delayedInput;
  v3 = inputCounter;
  if ( !inputCounter )
  {
    v4 = 0;
    v5 = delayedInput;
    do
    {
      if ( v5->hasInput )
      {
        GPad_UpdateSticks(v4, v5->state);
        GPad_UpdateDigitals(v4, v5->state);
        GPad_UpdateAnalogs(v4, v5->state);
      }
      ++v4;
      ++v5;
    }
    while ( v4 < 8 );
    v3 = inputCounter;
  }
  inputCounter = v3 - 1;
  v6 = DCONST_DVARINT_gpad_debug;
  if ( !DCONST_DVARINT_gpad_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gpad_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( inputCounter <= v6->current.integer )
  {
    GPad_RefreshAll();
    v7 = &s_gamePads[0].gamepad;
    do
    {
      if ( *((_BYTE *)v7 - 8) )
      {
        v2->hasInput = 1;
        v8 = *v7;
        v19 = 0i64;
        v9 = v8->__abi_GetCurrentReading(v8, (Windows::Xbox::Input::IGamepadReading **)&v19);
        if ( v9 < 0 )
          __abi_WinRTraiseException(v9);
        v10 = v19;
        v11 = v19;
        if ( v19 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8i64))(v19);
          v10 = v19;
        }
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
        v21 = v11;
        state = v2->state;
        if ( (Windows::Xbox::Input::IGamepadReading *)v11 != v2->state )
        {
          if ( v11 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8i64))(v11);
            state = v2->state;
          }
          if ( state )
            state->__abi_Release(state);
          v2->state = (Windows::Xbox::Input::IGamepadReading *)v11;
        }
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
      }
      else
      {
        v2->hasInput = 0;
        if ( v2->state )
        {
          v2->state->__abi_Release(v2->state);
          v2->state = NULL;
        }
      }
      v7 += 19;
      ++v2;
    }
    while ( (__int64)v7 < (__int64)&delayedInput[0].hasInput );
LABEL_33:
    inputCounter = 0;
  }
  ++s_rapidFireCounter;
  if ( v0 )
    v0->__abi_Release(v0);
}

/*
==============
GPad_UpdateAnalogs
==============
*/
void GPad_UpdateAnalogs(int portIndex, Windows::Xbox::Input::IGamepadReading *xpad)
{
  __int64 v2; 
  __int64 v4; 
  int v5; 
  __int128 v6; 
  const dvar_t *v7; 
  __int128 v8; 
  int v11; 
  __int128 v15; 
  unsigned int v18; 

  v2 = portIndex;
  if ( (unsigned int)portIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 427, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)") )
    __debugbreak();
  v4 = v2;
  s_gamePads[v4].lastAnalogs[0] = s_gamePads[v4].analogs[0];
  if ( xpad )
  {
    v5 = xpad->__abi_get_LeftTrigger(xpad, (float *)&v18);
    if ( v5 < 0 )
      __abi_WinRTraiseException(v5);
    v6 = v18;
  }
  else
  {
    v6 = 0i64;
  }
  v7 = gpad_button_deadzone;
  v8 = v6;
  *(float *)&v8 = (float)(*(float *)&v6 - gpad_button_deadzone->current.value) / (float)(1.0 - gpad_button_deadzone->current.value);
  _XMM1 = v8;
  __asm { vmaxss  xmm1, xmm1, xmm6 }
  s_gamePads[v4].analogs[0] = *(float *)&_XMM1;
  s_gamePads[v4].lastAnalogs[1] = s_gamePads[v4].analogs[1];
  if ( xpad )
  {
    v11 = xpad->__abi_get_RightTrigger(xpad, (float *)&v18);
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    _XMM2 = v18;
    v7 = gpad_button_deadzone;
  }
  else
  {
    _XMM2 = 0i64;
  }
  if ( gpad_rapidfire->current.enabled && (s_rapidFireCounter & 1) != 0 )
  {
    _XMM0 = LODWORD(FLOAT_0_5);
    __asm
    {
      vcmpltss xmm1, xmm0, xmm2
      vblendvps xmm2, xmm2, xmm6, xmm1
    }
  }
  v15 = _XMM2;
  *(float *)&v15 = (float)(*(float *)&_XMM2 - v7->current.value) / (float)(1.0 - v7->current.value);
  _XMM1 = v15;
  __asm { vmaxss  xmm1, xmm1, xmm6 }
  s_gamePads[v4].analogs[1] = *(float *)&_XMM1;
}

/*
==============
GPad_UpdateDigitals
==============
*/
void GPad_UpdateDigitals(int portIndex, Windows::Xbox::Input::IGamepadReading *xpad)
{
  __int64 v2; 
  __int64 v4; 
  __int16 v5; 
  int v6; 
  float gpadButtonRStickDeflect; 
  float gpadButtonLStickDeflect; 
  int v9; 

  v2 = portIndex;
  if ( (unsigned int)portIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 385, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)") )
    __debugbreak();
  v4 = v2;
  s_gamePads[v2].lastDigitals = s_gamePads[v2].digitals;
  v5 = 0;
  if ( xpad )
  {
    v9 = 0;
    v6 = xpad->__abi_get_Buttons(xpad, (Windows::Xbox::Input::GamepadButtons *)&v9);
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    v5 = v9;
  }
  s_gamePads[v4].digitals = v5;
  gpadButtonRStickDeflect = GamerProfile_GetProfileSettings(v2)->config.gpadButtonRStickDeflect;
  if ( COERCE_FLOAT(LODWORD(s_gamePads[v4].sticks[2]) & _xmm) > gpadButtonRStickDeflect )
    s_gamePads[v4].digitals &= ~0x8000u;
  if ( COERCE_FLOAT(LODWORD(s_gamePads[v4].sticks[3]) & _xmm) > gpadButtonRStickDeflect )
    s_gamePads[v4].digitals &= ~0x8000u;
  gpadButtonLStickDeflect = GamerProfile_GetProfileSettings(v2)->config.gpadButtonLStickDeflect;
  if ( COERCE_FLOAT(LODWORD(s_gamePads[v4].sticks[0]) & _xmm) > gpadButtonLStickDeflect )
    s_gamePads[v4].digitals &= ~0x4000u;
  if ( COERCE_FLOAT(LODWORD(s_gamePads[v4].sticks[1]) & _xmm) > gpadButtonLStickDeflect )
    s_gamePads[v4].digitals &= ~0x4000u;
}

/*
==============
GPad_UpdateRumbles
==============
*/
void GPad_UpdateRumbles(int portIndex)
{
  __int64 v1; 
  const dvar_t *v2; 
  GamePad *v3; 
  int v5; 

  v1 = portIndex;
  if ( (unsigned int)portIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 648, ASSERT_TYPE_ASSERT, "(unsigned)( portIndex ) < (unsigned)( 8 )", "portIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", portIndex, v5) )
      __debugbreak();
  }
  v2 = DCONST_DVARBOOL_gpad_rumble;
  if ( !DCONST_DVARBOOL_gpad_rumble && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gpad_rumble") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled && GamerProfile_UsesRumble(v1) )
  {
    v3 = &s_gamePads[v1];
    if ( v3->enabled )
    {
      if ( v3->gamepad )
        GPad_SetVibration(v3);
    }
  }
  else
  {
    GPad_StopRumbles(v1, 0);
  }
}

/*
==============
GPad_UpdateSticks
==============
*/
void GPad_UpdateSticks(int portIndex, Windows::Xbox::Input::IGamepadReading *xpad)
{
  __int64 v2; 
  __int64 v4; 
  float v7; 
  const dvar_t *v8; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  float v15; 
  double v16; 
  float v17; 
  float *sticks; 
  float v19; 
  bool (*stickDownLast)[2]; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  __int64 v26; 
  __int64 i; 
  float value; 
  bool v29; 
  float v30; 
  bool v31; 
  unsigned int v32; 
  float v33; 
  int v34; 
  float v35; 
  float outX; 
  float outY; 
  float v38; 
  float v39; 

  v2 = portIndex;
  if ( (unsigned int)portIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 521, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)") )
    __debugbreak();
  v4 = v2;
  _XMM6 = 0i64;
  if ( gpad_use_deadzone_option_value->current.enabled )
  {
    *(float *)&_XMM7 = GamerProfile_GetProfileSettings(v2)->config.gpadMinDeadzone;
    v7 = *(float *)&_XMM7;
  }
  else
  {
    v8 = DVARFLT_xb3_gpad_stick_deadzone_min;
    if ( !DVARFLT_xb3_gpad_stick_deadzone_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xb3_gpad_stick_deadzone_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    _XMM7 = v8->current.unsignedInt;
    __asm
    {
      vcmpltss xmm0, xmm6, xmm1
      vblendvps xmm0, xmm7, xmm1, xmm0
    }
    v7 = *(float *)&_XMM0;
    v32 = _XMM0;
  }
  if ( xpad )
  {
    v11 = xpad->__abi_get_LeftThumbstickY(xpad, &v33);
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    v12 = xpad->__abi_get_LeftThumbstickX(xpad, (float *)&v34);
    if ( v12 < 0 )
      __abi_WinRTraiseException(v12);
    GPad_ConvertStickToFloat(COERCE_DOUBLE((unsigned __int64)v34), v33, &outX, &outY, *(float *)&_XMM7);
    v13 = xpad->__abi_get_RightThumbstickY(xpad, &v35);
    if ( v13 < 0 )
      __abi_WinRTraiseException(v13);
    v14 = xpad->__abi_get_RightThumbstickX(xpad, (float *)&v32);
    if ( v14 < 0 )
      __abi_WinRTraiseException(v14);
    v15 = v35;
    *(_QWORD *)&v16 = v32;
  }
  else
  {
    GPad_ConvertStickToFloat(0.0, 0.0, &outX, &outY, *(float *)&_XMM7);
    v15 = 0.0;
    v16 = 0.0;
  }
  GPad_ConvertStickToFloat(v16, v15, &v38, &v39, v7);
  v17 = s_gamePads[v4].sticks[0];
  sticks = s_gamePads[v4].sticks;
  *sticks = outX;
  v19 = outY;
  s_gamePads[v4].lastSticks[0] = v17;
  stickDownLast = s_gamePads[v4].stickDownLast;
  v21 = s_gamePads[v4].sticks[1];
  s_gamePads[v4].sticks[1] = v19;
  v22 = v38;
  s_gamePads[v4].lastSticks[1] = v21;
  v23 = s_gamePads[v4].sticks[2];
  s_gamePads[v4].sticks[2] = v22;
  v24 = v39;
  s_gamePads[v4].lastSticks[2] = v23;
  v25 = s_gamePads[v4].sticks[3];
  s_gamePads[v4].sticks[3] = v24;
  v26 = 4i64;
  s_gamePads[v4].lastSticks[3] = v25;
  do
  {
    for ( i = 0i64; i != 2; ++i )
    {
      value = gpad_stick_pressed->current.value;
      v29 = (*stickDownLast)[i - 8];
      (*stickDownLast)[i] = v29;
      if ( v29 )
        v30 = value - gpad_stick_pressed_hysteresis->current.value;
      else
        v30 = value + gpad_stick_pressed_hysteresis->current.value;
      if ( i )
      {
        if ( i != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 506, ASSERT_TYPE_ASSERT, "(dir == GPAD_STICK_NEG)", (const char *)&queryFormat, "dir == GPAD_STICK_NEG") )
          __debugbreak();
        v31 = COERCE_FLOAT(LODWORD(v30) ^ _xmm) > *sticks;
      }
      else
      {
        v31 = v30 < *sticks;
      }
      (*stickDownLast)[i - 8] = v31;
    }
    ++sticks;
    ++stickDownLast;
    --v26;
  }
  while ( v26 );
}

