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

void __fastcall GPadXB3_RegisterDvars(__int64 a1, __int64 a2, double _XMM2_8)
{
  const dvar_t *v8; 
  const dvar_t *v12; 
  const dvar_t *v16; 
  const dvar_t *v20; 

  __asm { vmovaps [rsp+48h+var_18], xmm7 }
  Dvar_BeginPermanentRegistration();
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm1, cs:__real@3e051eb8; value
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v8 = Dvar_RegisterFloat("MPLMKPSRT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Game pad button deadzone threshhold");
  __asm { vmovss  xmm1, cs:__real@3dcccccd; value }
  gpad_button_deadzone = v8;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v12 = Dvar_RegisterFloat("NQQSMKLKRO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "On XB3 xb3_gpad_stick_deadzone_min is used. This one is the value being passed in by the override call GPad_SetRightStickDeadzoneOverride");
  __asm { vmovss  xmm1, cs:__real@3c23d70a; value }
  gpad_stick_deadzone_min = v12;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v16 = Dvar_RegisterFloat("OPTMSRPOS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Game pad maximum stick deadzone");
  __asm { vmovss  xmm1, cs:__real@3ecccccd; value }
  gpad_stick_deadzone_max = v16;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v20 = Dvar_RegisterFloat("NPSNRPPQNP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Game pad stick pressed threshhold");
  __asm { vmovss  xmm1, cs:__real@3dcccccd; value }
  gpad_stick_pressed = v20;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  gpad_stick_pressed_hysteresis = Dvar_RegisterFloat("TTKLLTLMP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Game pad stick pressed no-change-zone around gpad_stick_pressed to prevent bouncing");
  gpad_menu_scroll_delay_first = Dvar_RegisterInt("SKSNNRNQQ", 420, 0, 1000, 0, "Menu scroll key-repeat delay, for the first repeat, in milliseconds");
  gpad_menu_scroll_delay_rest_start = Dvar_RegisterInt("LSNMOLPNPP", 210, 0, 1000, 0, "Menu scroll key-repeat delay start, for repeats after the first, in milliseconds");
  gpad_menu_scroll_delay_rest_end = Dvar_RegisterInt("NKLNROKPQO", 50, 0, 1000, 0, "Menu scroll key-repeat delay end, for repeats after the first, in milliseconds");
  gpad_menu_scroll_delay_rest_accel = Dvar_RegisterInt("NPKOTOKTKR", 2, 0, 1000, 0, "Menu scroll key-repeat delay acceleration from start to end, for repeats after the first, in milliseconds per repeat");
  gpad_dpadDebounceTime = Dvar_RegisterInt("LKSQPTSMPR", 0, 0, 0x7FFFFFFF, 4u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  gpad_button_lstick_deflect_max = Dvar_RegisterFloat("LMORSKSTPK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Left stick deflect max");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  gpad_button_rstick_deflect_max = Dvar_RegisterFloat("NOPKLKMSRM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Right stick deflect max");
  gpad_isLefty = Dvar_RegisterBool("LMTKLROPNM", 0, 4u, "Whether we're in lefty mode");
  gpad_use_deadzone_option_value = Dvar_RegisterBool("NPQOMTNPOQ", 1, 0, "Use the new profile value as a deadzone for the sticks in the gamepad updates.");
  gpad_rapidfire = Dvar_RegisterBool("LMRSPQRPNK", 0, 4u, "Simulate a modded controller (hold rtrigger most of the way down)");
  __asm { vmovaps xmm7, [rsp+48h+var_18] }
  Dvar_EndPermanentRegistration();
}

/*
==============
GPad_ConvertStickToFloat
==============
*/

void __fastcall GPad_ConvertStickToFloat(double inX, double inY, float *outX, float *outY, float deadzoneMin)
{
  __asm
  {
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm3, xmm3, xmm2
    vmovaps xmm4, xmm0
    vmovaps [rsp+28h+var_18], xmm6
    vsqrtss xmm6, xmm3, xmm3
    vmovss  xmm3, cs:__real@3f800000
    vcmpless xmm2, xmm6, cs:__real@80000000
    vmovaps xmm5, xmm1
    vblendvps xmm0, xmm6, xmm3, xmm2
    vdivss  xmm1, xmm3, xmm0
    vmovaps [rsp+28h+var_28], xmm7
    vmulss  xmm7, xmm1, xmm4
    vmovss  xmm4, [rsp+28h+deadzoneMin]
    vcomiss xmm6, xmm4
    vmulss  xmm5, xmm1, xmm5
  }
  _RAX = gpad_stick_deadzone_max;
  __asm
  {
    vmovss  xmm2, dword ptr [rax+28h]
    vsubss  xmm0, xmm3, xmm2
    vcomiss xmm6, xmm0
    vmovaps xmm6, [rsp+28h+var_18]
    vmulss  xmm0, xmm7, xmm3
    vmovaps xmm7, [rsp+28h+var_28]
    vmulss  xmm1, xmm5, xmm3
    vmovss  dword ptr [r8], xmm0
    vmovss  dword ptr [r9], xmm1
  }
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
  __int64 v4; 
  __int64 v5; 

  v4 = portIndex;
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  v5 = button;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( (unsigned int)portIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1186, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)") )
    __debugbreak();
  if ( (v5 & 0x30000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1187, ASSERT_TYPE_ASSERT, "(button & (0x10000000 | 0x20000000))", (const char *)&queryFormat, "button & (GPAD_DIGITAL_MASK | GPAD_ANALOG_MASK)") )
    __debugbreak();
  _RCX = &s_gamePads[v4];
  if ( (v5 & 0x10000000) != 0 )
  {
    _EAX = v5 & _RCX->digitals & 0xEFFFFFFF;
    __asm { vmovd   xmm0, eax }
    _ECX = 0;
    __asm
    {
      vmovd   xmm1, ecx
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vblendvps xmm0, xmm1, xmm6, xmm2
    }
  }
  else if ( (v5 & 0x20000000) != 0 )
  {
    _RAX = v5 & 0xFFFFFFFFDFFFFFFFui64;
    __asm { vmovss  xmm0, dword ptr [rcx+rax*4+14h] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
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
  _RAX = s_gamePads[0].sticks;
  _RDX = 38 * v2 + (v3 & 0xFFFFFFFFBFFFFFFFui64);
  __asm { vmovss  xmm0, dword ptr [rax+rdx*4] }
  return *(float *)&_XMM0;
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
void GPad_InitAll(__int64 a1, __int64 a2, double a3)
{
  GamePad *v5; 
  int v6; 
  bool v7; 
  int v8; 
  float *p_LeftTriggerLevel; 
  bool v10; 
  __int64 v11; 
  __int64 v12; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  cs:gpad_rStick_deadzone_min_override, xmm0
  }
  GPadXB3_RegisterDvars(a1, a2, a3);
  v5 = s_gamePads;
  v6 = 0;
  v7 = 1;
  do
  {
    if ( !v7 )
    {
      LODWORD(v12) = 8;
      LODWORD(v11) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 605, ASSERT_TYPE_ASSERT, "(unsigned)( portIndex ) < (unsigned)( 8 )", "portIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    if ( v5->enabled && v5->gamepad )
    {
      v5->vibration.__vftable = NULL;
      *(_QWORD *)&v5->vibration.LeftTriggerLevel = 0i64;
      GPad_SetVibration(v5);
    }
    ++v6;
    ++v5;
    v7 = (unsigned int)v6 < 8;
  }
  while ( v6 < 8 );
  v8 = 0;
  p_LeftTriggerLevel = &s_gamePads[0].vibration.LeftTriggerLevel;
  v10 = 1;
  do
  {
    if ( !v10 )
    {
      LODWORD(v12) = 8;
      LODWORD(v11) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 626, ASSERT_TYPE_ASSERT, "(unsigned)( portIndex ) < (unsigned)( 8 )", "portIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    if ( *((_BYTE *)p_LeftTriggerLevel - 140) && *(_QWORD *)(p_LeftTriggerLevel - 33) )
    {
      *(_QWORD *)p_LeftTriggerLevel = 0i64;
      GPad_SetVibration((GamePad *)(p_LeftTriggerLevel - 35));
    }
    ++v8;
    p_LeftTriggerLevel += 38;
    v10 = (unsigned int)v8 < 8;
  }
  while ( v8 < 8 );
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
  __int64 v3; 
  __int64 v4; 
  bool v6; 
  bool v7; 

  v3 = portIndex;
  v4 = button;
  if ( (unsigned int)portIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1213, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)") )
    __debugbreak();
  if ( (v4 & 0x30000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1214, ASSERT_TYPE_ASSERT, "(button & (0x10000000 | 0x20000000))", (const char *)&queryFormat, "button & (GPAD_DIGITAL_MASK | GPAD_ANALOG_MASK)") )
    __debugbreak();
  _RCX = &s_gamePads[v3];
  if ( (v4 & 0x10000000) != 0 )
  {
    v6 = ((unsigned int)v4 & _RCX->digitals & 0xEFFFFFFF) != 0;
    v7 = ((unsigned int)v4 & _RCX->lastDigitals & 0xEFFFFFFF) != 0;
  }
  else
  {
    if ( (v4 & 0x20000000) == 0 )
      return 0;
    __asm { vxorps  xmm0, xmm0, xmm0 }
    _RAX = v4 & 0xFFFFFFFFDFFFFFFFui64;
    __asm { vcomiss xmm0, dword ptr [rcx+rax*4+14h] }
    v6 = (v4 & 0x20000000) != 0;
    __asm { vcomiss xmm0, dword ptr [rcx+rax*4+34h] }
    v7 = v6;
  }
  return v6 && !v7;
}

/*
==============
GPad_IsButtonReleased
==============
*/
bool GPad_IsButtonReleased(int portIndex, GamePadButton button)
{
  __int64 v3; 
  __int64 v4; 
  bool v6; 
  bool v7; 

  v3 = portIndex;
  v4 = button;
  if ( (unsigned int)portIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1242, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)") )
    __debugbreak();
  if ( (v4 & 0x30000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1243, ASSERT_TYPE_ASSERT, "(button & (0x10000000 | 0x20000000))", (const char *)&queryFormat, "button & (GPAD_DIGITAL_MASK | GPAD_ANALOG_MASK)") )
    __debugbreak();
  _RCX = &s_gamePads[v3];
  if ( (v4 & 0x10000000) != 0 )
  {
    v6 = ((unsigned int)v4 & _RCX->digitals & 0xEFFFFFFF) != 0;
    v7 = ((unsigned int)v4 & _RCX->lastDigitals & 0xEFFFFFFF) != 0;
  }
  else
  {
    if ( (v4 & 0x20000000) == 0 )
      return 0;
    __asm { vxorps  xmm0, xmm0, xmm0 }
    _RAX = v4 & 0xFFFFFFFFDFFFFFFFui64;
    __asm { vcomiss xmm0, dword ptr [rcx+rax*4+14h] }
    v6 = (v4 & 0x20000000) != 0;
    __asm { vcomiss xmm0, dword ptr [rcx+rax*4+34h] }
    v7 = v6;
  }
  return !v6 && v7;
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
void GPad_RefreshAll()
{
  unsigned int v3; 
  __int64 v4; 
  __int64 v5; 
  int ActivationFactoryByPCWSTR; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  int v21; 
  int v22; 
  __int64 v23; 
  __int64 i; 
  unsigned int v25; 
  __int64 *v26; 
  Windows::Xbox::Input::IGamepad **p_gamepad; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  unsigned int v31; 
  unsigned int v32; 
  __int64 v33; 
  __int64 v34; 
  int v35; 
  __int64 v36; 
  __int64 v37; 
  Platform::Object_vtbl *v38; 
  int v39; 
  int v40; 
  unsigned __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  Windows::Xbox::Input::IGamepad *v47; 
  __int64 v48; 
  __int64 v49; 
  Windows::Xbox::Input::IGamepad *gamepad; 
  void (__fastcall *v61)(int); 
  __int64 *v65; 
  void *ppActivationFactory; 
  Platform::Guid pGuid; 
  Platform::Object_vtbl *v68; 
  __int64 v69; 
  __int64 v70; 
  __int64 v71; 
  __int64 v72; 
  __int64 v73; 
  __int64 v74; 
  __int64 v75[8]; 
  __int64 v76[8]; 
  __int64 v77; 
  char v78; 
  void *retaddr; 

  _RAX = &retaddr;
  v74 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  v3 = 0;
  v4 = 0i64;
  v70 = 0i64;
  v5 = 0i64;
  v71 = 0i64;
  if ( !s_gamepadPortMappingValid )
  {
    memset(v76, 0, sizeof(v76));
    memset(v75, 0, sizeof(v75));
    pGuid.__vftable = (Platform::Object_vtbl *)0x4BF8FDAB8C4C1BCDi64;
    *(_DWORD *)&pGuid.__d = -1297356355;
    *(_DWORD *)&pGuid.__h = -738339151;
    ppActivationFactory = NULL;
    ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.Input.Gamepad", &pGuid, &ppActivationFactory);
    if ( ActivationFactoryByPCWSTR < 0 )
      __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    v65 = NULL;
    v7 = (*(__int64 (__fastcall **)(void *, __int64 **))(*(_QWORD *)ppActivationFactory + 48i64))(ppActivationFactory, &v65);
    if ( v7 < 0 )
      __abi_WinRTraiseException(v7);
    v8 = (__int64)v65;
    v9 = (__int64)v65;
    if ( v65 )
    {
      (*(void (__fastcall **)(__int64 *))(*v65 + 8))(v65);
      v8 = (__int64)v65;
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
    v69 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8i64))(v9);
    v69 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8i64))(v9);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
    if ( ppActivationFactory )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
    v69 = v9;
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8i64))(v9);
      v4 = v9;
      v70 = v9;
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
    v10 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v4 + 56i64))(v4, &ppActivationFactory);
    if ( v10 < 0 )
      __abi_WinRTraiseException(v10);
    v11 = (int)ppActivationFactory;
    v77 = 0i64;
    v12 = 0i64;
    v13 = 8i64;
    do
    {
      v14 = v76[v12];
      if ( v14 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16i64))(v14);
        v76[v12] = 0i64;
      }
      v15 = v75[v12];
      if ( v15 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16i64))(v15);
        v75[v12] = 0i64;
      }
      ++v12;
      --v13;
    }
    while ( v13 );
    v16 = 0;
    if ( v11 )
    {
      while ( 1 )
      {
        v65 = NULL;
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(*(_QWORD *)v4 + 48i64))(v4, v16, &v65);
        if ( v17 < 0 )
          __abi_WinRTraiseException(v17);
        v18 = (__int64)v65;
        v19 = (__int64)v65;
        if ( v65 )
        {
          (*(void (__fastcall **)(__int64 *))(*v65 + 8))(v65);
          v18 = (__int64)v65;
        }
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16i64))(v18);
        v69 = v19;
        v20 = 0i64;
        v68 = NULL;
        if ( v19 )
        {
          v21 = (**(__int64 (__fastcall ***)(__int64, Platform::Guid *, __int64 *))v19)(v19, &_uuidof__AUIController_Input_Xbox_Windows__, (__int64 *)&v68);
          if ( v21 < 0 )
            __abi_WinRTraiseException(v21);
          v20 = (__int64)v68;
        }
        v73 = v20;
        v22 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 48i64))(v20, &v72);
        if ( v22 < 0 )
          __abi_WinRTraiseException(v22);
        v23 = v72;
        if ( !v72 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 132, ASSERT_TYPE_ASSERT, "(id)", (const char *)&queryFormat, &valueOut) )
          __debugbreak();
        for ( i = 0i64; i < 8; ++i )
        {
          if ( s_gamepadIds[i] == v23 )
            goto LABEL_46;
        }
        i = -1i64;
LABEL_46:
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16i64))(v20);
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16i64))(v19);
        if ( i >= 0 )
          *((_BYTE *)&v77 + i) = 1;
        if ( ++v16 >= (unsigned int)ppActivationFactory )
          break;
        v4 = v70;
      }
    }
    v25 = 0;
    v26 = &v77;
    v65 = &v77;
    p_gamepad = &s_gamePads[0].gamepad;
    v28 = 0i64;
    do
    {
      if ( !s_isPadActiveInGameCB || s_isPadActiveInGameCB(v25) || *(_BYTE *)v26 )
      {
        v29 = v76[v28];
        v30 = (__int64)*p_gamepad;
        if ( *p_gamepad != (Windows::Xbox::Input::IGamepad *)v29 )
        {
          if ( v30 )
            (*(void (__fastcall **)(Windows::Xbox::Input::IGamepad *))(*(_QWORD *)v30 + 8i64))(*p_gamepad);
          if ( v29 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16i64))(v29);
          v76[v28] = v30;
        }
        v26 = v65;
      }
      else
      {
        s_gamepadIds[v28] = 0i64;
        *((_BYTE *)p_gamepad - 8) = 0;
        if ( *p_gamepad )
        {
          GPad_UpdateSticks(v25, NULL);
          GPad_UpdateDigitals(v25, NULL);
          GPad_UpdateAnalogs(v25, NULL);
          if ( *p_gamepad )
          {
            (*p_gamepad)->__abi_Release(*p_gamepad);
            *p_gamepad = NULL;
          }
        }
      }
      ++v25;
      v26 = (__int64 *)((char *)v26 + 1);
      v65 = v26;
      p_gamepad += 19;
      ++v28;
    }
    while ( v25 < 8 );
    v31 = 0;
    v32 = (unsigned int)ppActivationFactory;
    v33 = v71;
    if ( (_DWORD)ppActivationFactory )
    {
      v34 = v70;
      do
      {
        v65 = NULL;
        v35 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 **))(*(_QWORD *)v34 + 48i64))(v34, v31, &v65);
        if ( v35 < 0 )
          __abi_WinRTraiseException(v35);
        v36 = (__int64)v65;
        v37 = (__int64)v65;
        if ( v65 )
        {
          (*(void (__fastcall **)(__int64 *))(*v65 + 8))(v65);
          v36 = (__int64)v65;
        }
        if ( v36 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16i64))(v36);
        v73 = v37;
        if ( v37 != v33 )
        {
          if ( v37 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8i64))(v37);
          if ( v33 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16i64))(v33);
          v33 = v37;
          v71 = v37;
        }
        if ( v37 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16i64))(v37);
        v38 = NULL;
        v68 = NULL;
        if ( v33 )
        {
          v39 = (**(__int64 (__fastcall ***)(__int64, Platform::Guid *, __int64 *))v33)(v33, &_uuidof__AUIController_Input_Xbox_Windows__, (__int64 *)&v68);
          if ( v39 < 0 )
            __abi_WinRTraiseException(v39);
          v38 = v68;
        }
        pGuid.__vftable = v38;
        v40 = (*((__int64 (__fastcall **)(Platform::Object_vtbl *, __int64 *))v38->__abi_QueryInterface + 6))(v38, &v69);
        if ( v40 < 0 )
          __abi_WinRTraiseException(v40);
        v41 = v69;
        (*((void (__fastcall **)(Platform::Object_vtbl *))v38->__abi_QueryInterface + 2))(v38);
        if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 132, ASSERT_TYPE_ASSERT, "(id)", (const char *)&queryFormat, &valueOut) )
          __debugbreak();
        v42 = 0i64;
        while ( s_gamepadIds[v42] != v41 )
        {
          if ( ++v42 >= 8 )
            goto LABEL_96;
        }
        if ( v42 == -1 )
        {
LABEL_96:
          if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 154, ASSERT_TYPE_ASSERT, "(id)", (const char *)&queryFormat, &valueOut) )
            __debugbreak();
          v42 = 0i64;
          while ( s_gamepadIds[v42] )
          {
            if ( ++v42 >= 8 )
              goto LABEL_104;
          }
          s_gamepadIds[v42] = v41;
          if ( v42 != -1 )
          {
LABEL_106:
            v43 = v75[v42];
            if ( v33 != v43 )
            {
              if ( v33 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8i64))(v33);
              if ( v43 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16i64))(v43);
              v75[v42] = v33;
            }
            goto LABEL_112;
          }
LABEL_104:
          Com_PrintWarning(1, "Ignoring a newly inserted controller id %llu due to the application max of %d controllers, a controller must be removed for this controller to be usable by the application!", v41, 8i64);
        }
        else if ( *((_BYTE *)&v77 + v42) )
        {
          goto LABEL_106;
        }
LABEL_112:
        ++v31;
      }
      while ( v31 < v32 );
    }
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vxorps  xmm7, xmm7, xmm7
    }
    _R12 = 0x140000000ui64;
    while ( 1 )
    {
      v47 = (Windows::Xbox::Input::IGamepad *)v75[v3];
      v48 = v76[v3];
      if ( (Windows::Xbox::Input::IGamepad *)v48 != v47 )
      {
        v49 = v3;
        gamepad = s_gamePads[v49].gamepad;
        if ( v47 != gamepad )
        {
          if ( v47 )
          {
            v47->__abi_AddRef((Platform::Object *)v75[v3]);
            gamepad = s_gamePads[v49].gamepad;
          }
          if ( gamepad )
            gamepad->__abi_Release(gamepad);
          s_gamePads[v49].gamepad = v47;
        }
        if ( v48 )
        {
          if ( !v47 )
          {
            s_gamePads[v49].enabled = 0;
            GPad_UpdateSticks(v3, NULL);
            GPad_UpdateDigitals(v3, NULL);
            _RDX = (int)v3;
            s_gamePads[_RDX].lastAnalogs[0] = s_gamePads[_RDX].analogs[0];
            _RCX = gpad_button_deadzone;
            __asm
            {
              vmovss  xmm1, dword ptr [rcx+28h]
              vsubss  xmm0, xmm1, xmm6
              vdivss  xmm2, xmm1, xmm0
              vmaxss  xmm1, xmm2, xmm7
              vmovss  dword ptr [rdx+r12+16440644h], xmm1
            }
            s_gamePads[_RDX].lastAnalogs[1] = s_gamePads[_RDX].analogs[1];
            __asm
            {
              vmovss  xmm1, dword ptr [rcx+28h]
              vsubss  xmm0, xmm1, xmm6
              vdivss  xmm2, xmm1, xmm0
              vmaxss  xmm1, xmm2, xmm7
              vmovss  dword ptr [rdx+r12+16440648h], xmm1
            }
            v61 = s_removedCB;
            goto LABEL_126;
          }
        }
        else if ( v47 )
        {
          s_gamePads[v49].enabled = 1;
          v61 = s_insertedCB;
LABEL_126:
          if ( v61 )
            v61(v3);
        }
      }
      if ( ++v3 >= 8 )
      {
        s_gamepadPortMappingValid = 1;
        v5 = v71;
        v4 = v70;
        break;
      }
    }
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
  _R11 = &v78;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
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
  __int64 v4; 
  bool v6; 
  bool v7; 
  bool v8; 
  double v16; 
  double v17; 
  double v18; 

  v4 = portIndex;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  v6 = (unsigned int)portIndex < 7;
  v7 = (unsigned int)portIndex <= 7;
  if ( (unsigned int)portIndex > 7 )
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1296, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)");
    v6 = 0;
    v7 = !v8;
    if ( v8 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v6 )
    goto LABEL_6;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v7 )
  {
LABEL_6:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+58h+var_20], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+58h+var_28], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+58h+var_30], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1297, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( rumble ) && ( rumble ) <= ( 1.f )", "rumble not in [0.f, 1.f]\n\t%g not in [%g, %g]", v16, v17, v18) )
      __debugbreak();
  }
  _RCX = 152 * v4;
  _RAX = (char *)&s_gamePads[0].vibration.__vftable + 4;
  __asm
  {
    vmovss  dword ptr [rcx+rax], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
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
  __int64 v4; 
  bool v6; 
  bool v7; 
  bool v8; 
  double v16; 
  double v17; 
  double v18; 

  v4 = portIndex;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  v6 = (unsigned int)portIndex < 7;
  v7 = (unsigned int)portIndex <= 7;
  if ( (unsigned int)portIndex > 7 )
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1308, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)");
    v6 = 0;
    v7 = !v8;
    if ( v8 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v6 )
    goto LABEL_6;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v7 )
  {
LABEL_6:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+58h+var_20], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+58h+var_28], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+58h+var_30], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1309, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( rumble ) && ( rumble ) <= ( 1.f )", "rumble not in [0.f, 1.f]\n\t%g not in [%g, %g]", v16, v17, v18) )
      __debugbreak();
  }
  _RCX = 152 * v4;
  _RAX = &s_gamePads[0].vibration.LeftTriggerLevel;
  __asm
  {
    vmovss  dword ptr [rcx+rax], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
}

/*
==============
GPad_SetLowRumble
==============
*/

void __fastcall GPad_SetLowRumble(int portIndex, double rumble)
{
  __int64 v4; 
  bool v6; 
  bool v7; 
  bool v8; 
  double v16; 
  double v17; 
  double v18; 

  v4 = portIndex;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  v6 = (unsigned int)portIndex < 7;
  v7 = (unsigned int)portIndex <= 7;
  if ( (unsigned int)portIndex > 7 )
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1284, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)");
    v6 = 0;
    v7 = !v8;
    if ( v8 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v6 )
    goto LABEL_6;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v7 )
  {
LABEL_6:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+58h+var_20], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+58h+var_28], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+58h+var_30], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1285, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( rumble ) && ( rumble ) <= ( 1.f )", "rumble not in [0.f, 1.f]\n\t%g not in [%g, %g]", v16, v17, v18) )
      __debugbreak();
  }
  _RCX = 152 * v4;
  _RAX = &s_gamePads[0].vibration;
  __asm
  {
    vmovss  dword ptr [rcx+rax], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
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

void __fastcall GPad_SetRightStickDeadzoneOverride(double rightStickDeadzoneVal)
{
  __asm { vmovss  cs:gpad_rStick_deadzone_min_override, xmm0 }
}

/*
==============
GPad_SetRightTriggerRumble
==============
*/

void __fastcall GPad_SetRightTriggerRumble(int portIndex, double rumble)
{
  __int64 v4; 
  bool v6; 
  bool v7; 
  bool v8; 
  double v16; 
  double v17; 
  double v18; 

  v4 = portIndex;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  v6 = (unsigned int)portIndex < 7;
  v7 = (unsigned int)portIndex <= 7;
  if ( (unsigned int)portIndex > 7 )
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1320, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)");
    v6 = 0;
    v7 = !v8;
    if ( v8 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v6 )
    goto LABEL_6;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v7 )
  {
LABEL_6:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+58h+var_20], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+58h+var_28], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+58h+var_30], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 1321, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( rumble ) && ( rumble ) <= ( 1.f )", "rumble not in [0.f, 1.f]\n\t%g not in [%g, %g]", v16, v17, v18) )
      __debugbreak();
  }
  _RCX = 152 * v4;
  _RAX = &s_gamePads[0].vibration.RightTriggerLevel;
  __asm
  {
    vmovss  dword ptr [rcx+rax], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
}

/*
==============
GPad_SetVibration
==============
*/
void GPad_SetVibration(GamePad *gPad)
{
  bool v5; 
  bool v6; 
  bool v10; 
  bool v12; 
  bool v14; 
  __int64 *gamepad; 
  __int64 v17; 
  int v19; 
  __int128 v22[3]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RBX = gPad;
  v5 = gPad == NULL;
  if ( !gPad )
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 577, ASSERT_TYPE_ASSERT, "(gPad)", (const char *)&queryFormat, "gPad", -2i64);
    v5 = !v6;
    if ( v6 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+84h]
    vxorps  xmm7, xmm7, xmm7
    vmovss  xmm6, cs:__real@3f800000
    vcomiss xmm0, xmm7
    vcomiss xmm0, xmm6
  }
  if ( !v5 )
  {
    v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 578, ASSERT_TYPE_ASSERT, "(( gPad->vibration.LeftMotorLevel >= 0.0f ) && ( gPad->vibration.LeftMotorLevel <= 1.0f ))", (const char *)&queryFormat, "( gPad->vibration.LeftMotorLevel >= 0.0f ) && ( gPad->vibration.LeftMotorLevel <= 1.0f )");
    v5 = !v10;
    if ( v10 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+88h]
    vcomiss xmm0, xmm7
    vcomiss xmm0, xmm6
  }
  if ( !v5 )
  {
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 579, ASSERT_TYPE_ASSERT, "(( gPad->vibration.RightMotorLevel >= 0.0f ) && ( gPad->vibration.RightMotorLevel <= 1.0f ))", (const char *)&queryFormat, "( gPad->vibration.RightMotorLevel >= 0.0f ) && ( gPad->vibration.RightMotorLevel <= 1.0f )");
    v5 = !v12;
    if ( v12 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8Ch]
    vcomiss xmm0, xmm7
    vcomiss xmm0, xmm6
  }
  if ( !v5 )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 580, ASSERT_TYPE_ASSERT, "(( gPad->vibration.LeftTriggerLevel >= 0.0f ) && ( gPad->vibration.LeftTriggerLevel <= 1.0f ))", (const char *)&queryFormat, "( gPad->vibration.LeftTriggerLevel >= 0.0f ) && ( gPad->vibration.LeftTriggerLevel <= 1.0f )");
    v5 = !v14;
    if ( v14 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+90h]
    vcomiss xmm0, xmm7
    vcomiss xmm0, xmm6
  }
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 581, ASSERT_TYPE_ASSERT, "(( gPad->vibration.RightTriggerLevel >= 0.0f ) && ( gPad->vibration.RightTriggerLevel <= 1.0 ))", (const char *)&queryFormat, "( gPad->vibration.RightTriggerLevel >= 0.0f ) && ( gPad->vibration.RightTriggerLevel <= 1.0 )") )
    __debugbreak();
  gamepad = (__int64 *)_RBX->gamepad;
  v17 = *gamepad;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+84h]
    vmovups [rsp+78h+var_38], xmm0
  }
  v19 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v17 + 48))(gamepad, v22);
  if ( v19 < 0 )
    __abi_WinRTraiseException(v19);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
}

/*
==============
GPad_StopRumbles
==============
*/
void GPad_StopRumbles(int portIndex, bool force)
{
  __int64 v3; 
  bool v7; 
  bool v8; 

  v3 = portIndex;
  if ( (unsigned int)portIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 605, ASSERT_TYPE_ASSERT, "(unsigned)( portIndex ) < (unsigned)( 8 )", "portIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", portIndex, 8) )
    __debugbreak();
  _RBX = &s_gamePads[v3];
  if ( _RBX->enabled && _RBX->gamepad )
  {
    _RDI = &_RBX->vibration;
    if ( force )
      goto LABEL_14;
    v7 = _RDI == NULL;
    if ( _RBX == (GamePad *)-132i64 )
    {
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 125, ASSERT_TYPE_ASSERT, "(vibration)", (const char *)&queryFormat, "vibration");
      v7 = !v8;
      if ( v8 )
        __debugbreak();
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm0, dword ptr [rdi]
    }
    if ( !v7 )
      goto LABEL_14;
    __asm { vucomiss xmm0, dword ptr [rbx+8Ch] }
    if ( !v7 )
      goto LABEL_14;
    __asm { vucomiss xmm0, dword ptr [rbx+88h] }
    if ( !v7 )
      goto LABEL_14;
    __asm { vucomiss xmm0, dword ptr [rbx+90h] }
    if ( !v7 )
    {
LABEL_14:
      _RDI->__vftable = NULL;
      *(_QWORD *)&_RBX->vibration.LeftTriggerLevel = 0i64;
      GPad_SetVibration(_RBX);
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

void __fastcall GPad_UpdateAnalogs(int portIndex, Windows::Xbox::Input::IGamepadReading *xpad, double _XMM2_8)
{
  __int64 v6; 
  int v11; 
  int v18; 
  int v30; 

  v6 = portIndex;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( (unsigned int)portIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 427, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)") )
    __debugbreak();
  _RDI = v6;
  _RSI = s_gamePads;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  s_gamePads[_RDI].lastAnalogs[0] = s_gamePads[_RDI].analogs[0];
  if ( xpad )
  {
    v11 = xpad->__abi_get_LeftTrigger(xpad, (float *)&v30);
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    __asm { vmovss  xmm1, [rsp+58h+arg_0] }
  }
  else
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  __asm
  {
    vmovaps [rsp+58h+var_28], xmm7
    vmovss  xmm7, cs:__real@3f800000
    vsubss  xmm1, xmm1, dword ptr [rcx+28h]
    vsubss  xmm0, xmm7, dword ptr [rcx+28h]
    vdivss  xmm1, xmm1, xmm0
    vmaxss  xmm1, xmm1, xmm6
    vmovss  dword ptr [rdi+rsi+14h], xmm1
  }
  s_gamePads[_RDI].lastAnalogs[1] = s_gamePads[_RDI].analogs[1];
  if ( xpad )
  {
    v18 = xpad->__abi_get_RightTrigger(xpad, (float *)&v30);
    if ( v18 < 0 )
      __abi_WinRTraiseException(v18);
    __asm { vmovss  xmm2, [rsp+58h+arg_0] }
  }
  else
  {
    __asm { vxorps  xmm2, xmm2, xmm2 }
  }
  if ( gpad_rapidfire->current.enabled && (s_rapidFireCounter & 1) != 0 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f000000
      vcmpltss xmm1, xmm0, xmm2
      vblendvps xmm2, xmm2, xmm6, xmm1
    }
  }
  __asm
  {
    vsubss  xmm0, xmm7, dword ptr [rcx+28h]
    vsubss  xmm1, xmm2, dword ptr [rcx+28h]
    vmovaps xmm7, [rsp+58h+var_28]
    vdivss  xmm1, xmm1, xmm0
    vmaxss  xmm1, xmm1, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
    vmovss  dword ptr [rdi+rsi+18h], xmm1
  }
}

/*
==============
GPad_UpdateDigitals
==============
*/
void GPad_UpdateDigitals(int portIndex, Windows::Xbox::Input::IGamepadReading *xpad)
{
  __int64 v3; 
  __int16 v7; 
  int v8; 
  char v9; 
  bool v10; 
  char v18; 
  bool v19; 
  int v28; 

  v3 = portIndex;
  if ( (unsigned int)portIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 385, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)") )
    __debugbreak();
  _RBX = v3;
  _RBP = s_gamePads;
  s_gamePads[v3].lastDigitals = s_gamePads[v3].digitals;
  v7 = 0;
  if ( xpad )
  {
    v28 = 0;
    v8 = xpad->__abi_get_Buttons(xpad, (Windows::Xbox::Input::GamepadButtons *)&v28);
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    v7 = v28;
  }
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  s_gamePads[_RBX].digitals = v7;
  _RAX = GamerProfile_GetProfileSettings(v3);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+rbp+5Ch]
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm0, xmm0, xmm6
    vmovss  xmm1, dword ptr [rax+60h]
    vcomiss xmm0, xmm1
  }
  if ( !(v9 | v10) )
  {
    v9 = 0;
    v10 = (s_gamePads[_RBX].digitals & 0x7FFF) == 0;
    s_gamePads[_RBX].digitals &= ~0x8000u;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+rbp+60h]
    vandps  xmm0, xmm0, xmm6
    vcomiss xmm0, xmm1
  }
  if ( !(v9 | v10) )
    s_gamePads[_RBX].digitals &= ~0x8000u;
  _RAX = GamerProfile_GetProfileSettings(v3);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+rbp+54h]
    vandps  xmm0, xmm0, xmm6
    vmovss  xmm1, dword ptr [rax+5Ch]
    vcomiss xmm0, xmm1
  }
  if ( !(v18 | v19) )
  {
    v18 = 0;
    v19 = (s_gamePads[_RBX].digitals & 0xBFFF) == 0;
    s_gamePads[_RBX].digitals &= ~0x4000u;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+rbp+58h]
    vandps  xmm0, xmm0, xmm6
    vcomiss xmm0, xmm1
    vmovaps xmm6, [rsp+48h+var_18]
  }
  if ( !(v18 | v19) )
    s_gamePads[_RBX].digitals &= ~0x4000u;
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
  __int64 v7; 
  int v16; 
  int v17; 
  int v20; 
  int v21; 
  float v29; 
  bool (*stickDownLast)[2]; 
  float v33; 
  float v35; 
  float v37; 
  __int64 v38; 
  __int64 i; 
  bool v43; 
  bool v44; 
  bool v45; 
  bool v46; 
  float fmt; 
  float fmta; 
  float fmtb; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  float outX; 
  float outY; 
  float v60; 
  float v61; 

  __asm { vmovaps [rsp+0C8h+var_38], xmm6 }
  v7 = portIndex;
  if ( (unsigned int)portIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 521, ASSERT_TYPE_ASSERT, "((portIndex >= 0) && (portIndex < 8))", (const char *)&queryFormat, "(portIndex >= 0) && (portIndex < MAX_GPAD_COUNT)") )
    __debugbreak();
  _RBP = v7;
  __asm
  {
    vmovaps [rsp+0C8h+var_48], xmm7
    vmovaps [rsp+0C8h+var_58], xmm8
    vxorps  xmm6, xmm6, xmm6
  }
  if ( gpad_use_deadzone_option_value->current.enabled )
  {
    _RAX = GamerProfile_GetProfileSettings(v7);
    __asm
    {
      vmovss  xmm7, dword ptr [rax+0C94h]
      vmovaps xmm8, xmm7
    }
  }
  else
  {
    _RDI = DVARFLT_xb3_gpad_stick_deadzone_min;
    if ( !DVARFLT_xb3_gpad_stick_deadzone_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xb3_gpad_stick_deadzone_min") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm1, cs:gpad_rStick_deadzone_min_override
      vmovss  xmm7, dword ptr [rdi+28h]
      vcmpltss xmm0, xmm6, xmm1
      vblendvps xmm0, xmm7, xmm1, xmm0
      vmovaps xmm8, xmm0
      vmovss  [rsp+0C8h+var_88], xmm0
    }
  }
  if ( xpad )
  {
    v16 = xpad->__abi_get_LeftThumbstickY(xpad, (float *)&v55);
    if ( v16 < 0 )
      __abi_WinRTraiseException(v16);
    v17 = xpad->__abi_get_LeftThumbstickX(xpad, (float *)&v56);
    if ( v17 < 0 )
      __abi_WinRTraiseException(v17);
    __asm
    {
      vmovss  xmm1, [rsp+0C8h+var_84]; inY
      vmovss  xmm0, [rsp+0C8h+var_80]; inX
      vmovss  dword ptr [rsp+0C8h+fmt], xmm7
    }
    GPad_ConvertStickToFloat(*(double *)&_XMM0, *(double *)&_XMM1, &outX, &outY, fmt);
    v20 = xpad->__abi_get_RightThumbstickY(xpad, (float *)&v57);
    if ( v20 < 0 )
      __abi_WinRTraiseException(v20);
    v21 = xpad->__abi_get_RightThumbstickX(xpad, (float *)&v54);
    if ( v21 < 0 )
      __abi_WinRTraiseException(v21);
    __asm
    {
      vmovss  xmm1, [rsp+0C8h+var_7C]
      vmovss  xmm0, [rsp+0C8h+var_88]
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1; inY
      vxorps  xmm0, xmm0, xmm0; inX
      vmovss  dword ptr [rsp+0C8h+fmt], xmm7
    }
    GPad_ConvertStickToFloat(*(double *)&_XMM0, *(double *)&_XMM1, &outX, &outY, fmta);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1; inY
      vxorps  xmm0, xmm0, xmm0; inX
    }
  }
  __asm { vmovss  dword ptr [rsp+0C8h+fmt], xmm8 }
  GPad_ConvertStickToFloat(*(double *)&_XMM0, *(double *)&_XMM1, &v60, &v61, fmtb);
  __asm
  {
    vmovss  xmm0, [rsp+0C8h+outX]
    vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
  }
  _RCX = s_gamePads;
  v29 = s_gamePads[_RBP].sticks[0];
  _RSI = s_gamePads[_RBP].sticks;
  __asm
  {
    vmovss  dword ptr [rsi], xmm0
    vmovss  xmm0, [rsp+0C8h+outY]
  }
  s_gamePads[_RBP].lastSticks[0] = v29;
  stickDownLast = s_gamePads[_RBP].stickDownLast;
  v33 = s_gamePads[_RBP].sticks[1];
  __asm
  {
    vmovss  dword ptr [rcx+rbp+58h], xmm0
    vmovss  xmm0, [rsp+0C8h+var_70]
  }
  s_gamePads[_RBP].lastSticks[1] = v33;
  v35 = s_gamePads[_RBP].sticks[2];
  __asm
  {
    vmovss  dword ptr [rcx+rbp+5Ch], xmm0
    vmovss  xmm0, [rsp+0C8h+var_6C]
  }
  s_gamePads[_RBP].lastSticks[2] = v35;
  v37 = s_gamePads[_RBP].sticks[3];
  __asm { vmovss  dword ptr [rcx+rbp+60h], xmm0 }
  v38 = 4i64;
  s_gamePads[_RBP].lastSticks[3] = v37;
  do
  {
    for ( i = 0i64; i != 2; ++i )
    {
      _RAX = gpad_stick_pressed;
      __asm { vmovss  xmm0, dword ptr [rax+28h] }
      LOBYTE(_RAX) = (*stickDownLast)[i - 8];
      (*stickDownLast)[i] = (char)_RAX;
      if ( (_BYTE)_RAX )
        __asm { vsubss  xmm6, xmm0, dword ptr [rax+28h] }
      else
        __asm { vaddss  xmm6, xmm0, dword ptr [rax+28h] }
      if ( i )
      {
        v44 = i == 0;
        v45 = i == 1;
        if ( i != 1 )
        {
          v46 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_gamepad.cpp", 506, ASSERT_TYPE_ASSERT, "(dir == GPAD_STICK_NEG)", (const char *)&queryFormat, "dir == GPAD_STICK_NEG");
          v44 = 0;
          v45 = !v46;
          if ( v46 )
            __debugbreak();
        }
        __asm
        {
          vxorps  xmm0, xmm6, xmm7
          vcomiss xmm0, dword ptr [rsi]
        }
        v43 = !v44 && !v45;
      }
      else
      {
        __asm { vcomiss xmm6, dword ptr [rsi] }
        v43 = 0;
      }
      (*stickDownLast)[i - 8] = v43;
    }
    ++_RSI;
    ++stickDownLast;
    --v38;
  }
  while ( v38 );
  __asm
  {
    vmovaps xmm8, [rsp+0C8h+var_58]
    vmovaps xmm7, [rsp+0C8h+var_48]
    vmovaps xmm6, [rsp+0C8h+var_38]
  }
}

