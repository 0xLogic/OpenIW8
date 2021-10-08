/*
==============
DevGui_UpdateUInt64Scroll
==============
*/

unsigned __int64 __fastcall DevGui_UpdateUInt64Scroll(float deltaTime, unsigned __int64 value, unsigned __int64 min, unsigned __int64 max, DevGuiInputAxis axis)
{
  return ?DevGui_UpdateUInt64Scroll@@YA_KM_K00W4DevGuiInputAxis@@@Z(deltaTime, value, min, max, axis);
}

/*
==============
DevGui_GetMouseY
==============
*/

int __fastcall DevGui_GetMouseY()
{
  return ?DevGui_GetMouseY@@YAHXZ();
}

/*
==============
DevGui_UpdateIntScroll
==============
*/

int __fastcall DevGui_UpdateIntScroll(float deltaTime, int value, int min, int max, DevGuiInputAxis axis)
{
  return ?DevGui_UpdateIntScroll@@YAHMHHHW4DevGuiInputAxis@@@Z(deltaTime, value, min, max, axis);
}

/*
==============
DevGui_IsButtonDown
==============
*/

bool __fastcall DevGui_IsButtonDown(DevGuiInputButton button)
{
  return ?DevGui_IsButtonDown@@YA_NW4DevGuiInputButton@@@Z(button);
}

/*
==============
DevGui_IsButtonReleased
==============
*/

bool __fastcall DevGui_IsButtonReleased(DevGuiInputButton button)
{
  return ?DevGui_IsButtonReleased@@YA_NW4DevGuiInputButton@@@Z(button);
}

/*
==============
DevGui_GetMenuScroll
==============
*/

__int16 __fastcall DevGui_GetMenuScroll(DevGuiInputAxis axis)
{
  return ?DevGui_GetMenuScroll@@YAFW4DevGuiInputAxis@@@Z(axis);
}

/*
==============
DevGui_InputShutdown
==============
*/

void DevGui_InputShutdown(void)
{
  ?DevGui_InputShutdown@@YAXXZ();
}

/*
==============
DevGui_SelectGamepad
==============
*/

void __fastcall DevGui_SelectGamepad(int gamePadIndex)
{
  ?DevGui_SelectGamepad@@YAXH@Z(gamePadIndex);
}

/*
==============
DevGui_UpdateFloatScroll
==============
*/

double __fastcall DevGui_UpdateFloatScroll(float deltaTime, float value, float min, float max, float step, DevGuiInputAxis axis, float minChange)
{
  double result; 

  *(float *)&result = ?DevGui_UpdateFloatScroll@@YAMMMMMMW4DevGuiInputAxis@@M@Z(deltaTime, value, min, max, step, axis, minChange);
  return result;
}

/*
==============
DevGui_InputUpdate
==============
*/

bool __fastcall DevGui_InputUpdate(LocalClientNum_t localClientNum, float deltaTime, bool disableMouseNavigation)
{
  return ?DevGui_InputUpdate@@YA_NW4LocalClientNum_t@@M_N@Z(localClientNum, deltaTime, disableMouseNavigation);
}

/*
==============
DevGui_IsButtonPressed
==============
*/

bool __fastcall DevGui_IsButtonPressed(DevGuiInputButton button)
{
  return ?DevGui_IsButtonPressed@@YA_NW4DevGuiInputButton@@@Z(button);
}

/*
==============
DevGui_GetMouseX
==============
*/

int __fastcall DevGui_GetMouseX()
{
  return ?DevGui_GetMouseX@@YAHXZ();
}

/*
==============
DevGui_MouseEvent
==============
*/

void __fastcall DevGui_MouseEvent(int x, int y, int dx, int dy)
{
  ?DevGui_MouseEvent@@YAXHHHH@Z(x, y, dx, dy);
}

/*
==============
DevGui_InputInit
==============
*/

void DevGui_InputInit(void)
{
  ?DevGui_InputInit@@YAXXZ();
}

/*
==============
DevGui_UpdateInt64Scroll
==============
*/

__int64 __fastcall DevGui_UpdateInt64Scroll(float deltaTime, __int64 value, __int64 min, __int64 max, DevGuiInputAxis axis)
{
  return ?DevGui_UpdateInt64Scroll@@YA_JM_J00W4DevGuiInputAxis@@@Z(deltaTime, value, min, max, axis);
}

/*
==============
DevGui_GetMenuScroll
==============
*/
__int64 DevGui_GetMenuScroll(DevGuiInputAxis axis)
{
  return (unsigned __int16)s_input.menuScroll[axis];
}

/*
==============
DevGui_GetMouseX
==============
*/
__int64 DevGui_GetMouseX()
{
  return (unsigned int)s_input.mouseX;
}

/*
==============
DevGui_GetMouseY
==============
*/
__int64 DevGui_GetMouseY()
{
  return (unsigned int)s_input.mouseY;
}

/*
==============
DevGui_InputInit
==============
*/
void DevGui_InputInit(void)
{
  Cmd_AddCommandInternal("devgui", DevGui_Toggle, &DevGui_Toggle_VAR);
}

/*
==============
DevGui_InputShutdown
==============
*/
void DevGui_InputShutdown(void)
{
  Cmd_RemoveCommand("devgui");
}

/*
==============
DevGui_InputUpdate
==============
*/

bool __fastcall DevGui_InputUpdate(LocalClientNum_t localClientNum, double deltaTime, bool disableMouseNavigation)
{
  int selectedGamePadIndex; 
  __int64 v19; 
  bool v54; 
  __int64 v83; 
  int v88; 
  int v89; 
  __int64 v93; 
  int v95; 
  int v96; 
  bool v99; 
  __int16 v104; 
  bool v105; 
  bool v106; 
  bool v116; 
  bool v117; 
  bool v118; 
  bool result; 
  char v142; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  selectedGamePadIndex = s_input.selectedGamePadIndex;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps [rsp+0D8h+var_88], xmm12
    vmovaps [rsp+0D8h+var_98], xmm13
  }
  s_input.gamePadIndex = selectedGamePadIndex;
  __asm { vmovaps xmm8, xmm1 }
  if ( selectedGamePadIndex < 0 || !GPad_IsActive(selectedGamePadIndex) )
    s_input.gamePadIndex = -1;
  __asm
  {
    vmovss  xmm0, cs:__real@42c80000
    vmovss  xmm1, cs:__real@3e99999a
  }
  _EBX = 0;
  __asm
  {
    vmovss  cs:s_input.sliderScrollTime, xmm0
    vmovss  cs:s_input.sliderScrollMaxTimeStep, xmm1
  }
  v19 = 0i64;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  do
  {
    s_input.prevButtonDown[v19] = s_input.buttonDown[v19];
    s_input.buttonDown[v19] = 0;
    if ( s_input.gamePadIndex >= 0 )
    {
      *(double *)&_XMM0 = GPad_GetButton(s_input.gamePadIndex, s_butMapsGamepad_0[v19]);
      __asm { vcomiss xmm0, xmm7 }
      s_input.buttonDown[v19] = !v99 && !v54;
    }
    s_input.buttonDown[v19] |= CL_Keys_IsKeyDown(localClientNum, s_butMapsKey_0[v19]) != 0;
    ++v19;
  }
  while ( v19 < 11 );
  if ( !disableMouseNavigation )
  {
    s_input.buttonDown[4] |= CL_Keys_IsKeyDown(localClientNum, 187) != 0;
    s_input.buttonDown[5] |= CL_Keys_IsKeyDown(localClientNum, 188) != 0;
  }
  __asm { vmovss  xmm11, cs:__real@3f800000 }
  _EAX = s_input.buttonDown[3];
  __asm { vmovd   xmm0, eax }
  _EAX = s_input.buttonDown[2];
  __asm
  {
    vmovd   xmm1, ebx
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm11, xmm7, xmm2
    vmovss  [rsp+0D8h+var_A8], xmm0
    vmovd   xmm0, eax
  }
  _EAX = s_input.buttonDown[0];
  __asm
  {
    vmovd   xmm1, ebx
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm11, xmm7, xmm2
    vmovss  [rsp+0D8h+var_AC], xmm0
    vmovd   xmm0, eax
  }
  _EAX = s_input.buttonDown[1];
  __asm
  {
    vmovd   xmm1, ebx
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm11, xmm7, xmm2
    vmovss  [rsp+0D8h+var_B4], xmm0
    vmovd   xmm0, eax
    vmovd   xmm1, ebx
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm11, xmm7, xmm2
    vmovss  [rsp+0D8h+var_B0], xmm0
    vmovaps xmm9, xmm7
    vmovaps xmm6, xmm7
    vmovaps xmm12, xmm7
    vmovaps xmm13, xmm7
  }
  if ( s_input.gamePadIndex < 0 )
    goto LABEL_15;
  *(double *)&_XMM0 = GPad_GetStick(s_input.gamePadIndex, GPAD_LX);
  __asm
  {
    vmulss  xmm2, xmm0, xmm0
    vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000
    vcmpless xmm0, xmm7, xmm0
    vblendvps xmm0, xmm1, xmm2, xmm0
    vmovss  [rsp+0D8h+var_B8], xmm0
  }
  *(double *)&_XMM0 = GPad_GetStick(s_input.gamePadIndex, GPAD_LY);
  __asm
  {
    vmulss  xmm2, xmm0, xmm0
    vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000
    vcmpless xmm0, xmm7, xmm0
    vblendvps xmm0, xmm1, xmm2, xmm0
    vmovss  [rsp+0D8h+arg_18], xmm0
  }
  *(double *)&_XMM0 = GPad_GetButton(s_input.gamePadIndex, GPAD_R_TRIG);
  __asm { vmovaps xmm12, xmm0 }
  *(double *)&_XMM0 = GPad_GetButton(s_input.gamePadIndex, GPAD_L_TRIG);
  v54 = s_input.gamePadIndex == 0;
  __asm
  {
    vmovss  xmm9, [rsp+0D8h+var_B8]
    vmovss  xmm6, [rsp+0D8h+arg_18]
    vmovaps xmm13, xmm0
  }
  if ( s_input.gamePadIndex < 0 )
    goto LABEL_15;
  __asm { vucomiss xmm9, xmm7 }
  if ( !s_input.gamePadIndex )
  {
    __asm { vucomiss xmm6, xmm7 }
    if ( !s_input.gamePadIndex )
    {
LABEL_15:
      v54 = !disableMouseNavigation;
      if ( !disableMouseNavigation )
      {
        v54 = !devgui_allowMouse->current.enabled;
        if ( devgui_allowMouse->current.enabled )
        {
          __asm
          {
            vmovss  xmm5, cs:__real@3eaaaaab
            vmulss  xmm3, xmm5, cs:s_input.mousePos+4
            vmulss  xmm2, xmm5, cs:s_input.mousePos
            vmulss  xmm1, xmm5, cs:s_input.mousePos+8
            vsubss  xmm0, xmm6, cs:s_input.mousePos+0Ch
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm2, xmm4, xmm1
            vsubss  xmm1, xmm0, cs:s_input.mousePos+10h
            vaddss  xmm3, xmm9, xmm2
            vsubss  xmm2, xmm1, cs:s_input.mousePos+14h
            vmulss  xmm6, xmm2, xmm5
            vmulss  xmm9, xmm3, xmm5
          }
        }
      }
    }
  }
  __asm
  {
    vmovss  xmm0, cs:s_input.mousePos+4
    vmovss  xmm1, cs:s_input.mousePos+10h
    vmovss  xmm10, [rsp+0D8h+var_A8]
    vucomiss xmm10, xmm7
    vmovss  xmm5, [rsp+0D8h+var_AC]
    vmovss  cs:s_input.mousePos+8, xmm0
    vmovss  xmm0, cs:s_input.mousePos
    vmovss  cs:s_input.mousePos+14h, xmm1
    vmovss  xmm1, cs:s_input.mousePos+0Ch
    vmovss  cs:s_input.mousePos+4, xmm0
    vmovss  cs:s_input.mousePos+10h, xmm1
    vmovss  cs:s_input.mousePos, xmm7
    vmovss  cs:s_input.mousePos+0Ch, xmm7
  }
  if ( !v54 )
    goto LABEL_20;
  __asm { vucomiss xmm5, xmm7 }
  if ( v54 )
  {
    __asm
    {
      vmovss  xmm3, [rsp+0D8h+var_B4]
      vmovss  xmm4, [rsp+0D8h+var_B0]
    }
  }
  else
  {
LABEL_20:
    __asm
    {
      vmovss  xmm3, [rsp+0D8h+var_B4]
      vucomiss xmm3, xmm7
    }
    if ( !v54 )
      goto LABEL_22;
    __asm
    {
      vmovss  xmm4, [rsp+0D8h+var_B0]
      vucomiss xmm4, xmm7
    }
    if ( !v54 )
    {
LABEL_22:
      __asm
      {
        vmovaps xmm10, xmm7
        vmovaps xmm5, xmm7
        vmovaps xmm3, xmm7
        vmovaps xmm4, xmm7
      }
    }
  }
  __asm
  {
    vmulss  xmm0, xmm12, cs:__real@40800000
    vaddss  xmm2, xmm0, xmm11
    vaddss  xmm1, xmm13, xmm11
    vmulss  xmm2, xmm2, xmm1
    vsubss  xmm1, xmm3, xmm4
    vsubss  xmm0, xmm10, xmm5
    vmovss  xmm5, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  v83 = 2i64;
  _RCX = s_input.digitalTimes;
  __asm
  {
    vmovss  cs:s_input.digitalAxis+4, xmm1
    vmovss  xmm1, cs:__real@3e800000
    vmovss  cs:s_input.scrollScale, xmm2
    vmovss  xmm2, cs:__real@3ecccccd
    vmovss  cs:s_input.digitalAxis, xmm0
    vmovss  cs:s_input.analogAxis, xmm9
    vmovss  cs:s_input.analogAxis+4, xmm6
  }
  do
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx-8]
      vucomiss xmm0, xmm7
    }
    if ( v54 )
    {
      *(_RCX - 4) = 0.0;
      *_RCX = 0.0;
    }
    else
    {
      v88 = *((_DWORD *)_RCX - 4);
      if ( v88 )
      {
        v89 = v88 - 1;
        if ( v89 )
        {
          __asm
          {
            vaddss  xmm0, xmm8, dword ptr [rcx]
            vmovss  dword ptr [rcx], xmm0
          }
          if ( v89 == 1 )
            __asm { vcomiss xmm0, xmm1 }
        }
        else
        {
          *((_DWORD *)_RCX - 4) = 2;
          *_RCX = 0.0;
        }
      }
      else
      {
        __asm
        {
          vandps  xmm0, xmm0, xmm5
          vcomiss xmm0, xmm2
        }
      }
    }
    ++_RCX;
    v54 = --v83 == 0;
  }
  while ( v83 );
  _RCX = s_input.analogTimes;
  v93 = 2i64;
  do
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx-8]
      vucomiss xmm0, xmm7
    }
    if ( v54 )
    {
      *(_RCX - 4) = 0.0;
      *_RCX = 0.0;
    }
    else
    {
      v95 = *((_DWORD *)_RCX - 4);
      if ( v95 )
      {
        v96 = v95 - 1;
        if ( v96 )
        {
          __asm
          {
            vaddss  xmm0, xmm8, dword ptr [rcx]
            vmovss  dword ptr [rcx], xmm0
          }
          if ( v96 == 1 )
            __asm { vcomiss xmm0, xmm1 }
        }
        else
        {
          *((_DWORD *)_RCX - 4) = 2;
          *_RCX = 0.0;
        }
      }
      else
      {
        __asm
        {
          vandps  xmm0, xmm0, xmm5
          vcomiss xmm0, xmm2
        }
      }
    }
    ++_RCX;
    v99 = v93-- == 0;
    v54 = v93 == 0;
  }
  while ( v93 );
  __asm
  {
    vmovss  xmm2, cs:s_input.analogAxis
    vmovss  xmm9, cs:s_input.analogAxis+4
    vandps  xmm1, xmm2, xmm5
    vandps  xmm0, xmm9, xmm5
    vcomiss xmm1, xmm0
  }
  if ( v99 || (unsigned __int8)v93 == 0i64 )
    __asm { vmovaps xmm2, xmm7 }
  else
    __asm { vmovaps xmm9, xmm7 }
  v104 = 0;
  s_input.menuScroll[0] = 0;
  v105 = s_input.digitalStates[0] == SCROLL_HELD || s_input.analogStates[0] == SCROLL_HELD;
  v106 = s_input.digitalStates[0] == SCROLL_PRESSED || s_input.analogStates[0] == SCROLL_PRESSED;
  __asm
  {
    vaddss  xmm1, xmm2, cs:s_input.digitalAxis
    vmovss  xmm10, cs:s_input.scrollScale
    vmovss  xmm3, cs:__real@3dcccccd
    vmovss  xmm4, cs:__real@bdcccccd
    vmulss  xmm6, xmm1, xmm10
  }
  if ( v105 )
  {
    __asm
    {
      vandps  xmm0, xmm6, xmm5
      vmulss  xmm1, xmm0, xmm8
      vmovss  xmm0, cs:s_input.menuScrollTime
      vaddss  xmm2, xmm0, xmm1
      vcomiss xmm2, xmm3
      vmovss  cs:s_input.menuScrollTime, xmm2
      vcomiss xmm6, xmm7
    }
    do
    {
      v116 = __CFADD__(v104, 1) || v104 == -1;
      ++v104;
      __asm
      {
        vaddss  xmm2, xmm2, xmm4
        vcomiss xmm2, xmm3
      }
    }
    while ( !v116 );
    __asm { vmovss  cs:s_input.menuScrollTime, xmm2 }
    goto LABEL_60;
  }
  if ( v106 )
  {
    __asm { vcomiss xmm6, xmm7 }
    v104 = 1;
    __asm { vmovss  cs:s_input.menuScrollTime, xmm7 }
LABEL_60:
    s_input.menuScroll[0] = v104;
  }
  s_input.menuScroll[1] = 0;
  v117 = s_input.digitalStates[1] == SCROLL_HELD || s_input.analogStates[1] == SCROLL_HELD;
  v118 = s_input.digitalStates[1] == SCROLL_PRESSED || s_input.analogStates[1] == SCROLL_PRESSED;
  __asm
  {
    vaddss  xmm1, xmm9, cs:s_input.digitalAxis+4
    vmulss  xmm6, xmm1, xmm10
  }
  if ( v117 )
  {
    __asm
    {
      vandps  xmm0, xmm6, xmm5
      vmulss  xmm1, xmm0, xmm8
      vmovss  xmm0, cs:s_input.menuScrollTime+4
      vaddss  xmm2, xmm0, xmm1
      vcomiss xmm2, xmm3
      vmovss  cs:s_input.menuScrollTime+4, xmm2
      vcomiss xmm6, xmm7
    }
    do
    {
      v116 = __CFADD__((_WORD)_EBX, 1) || (_WORD)_EBX == 0xFFFF;
      LOWORD(_EBX) = _EBX + 1;
      __asm
      {
        vaddss  xmm2, xmm2, xmm4
        vcomiss xmm2, xmm3
      }
      s_input.menuScroll[1] = _EBX;
    }
    while ( !v116 );
    __asm { vmovss  cs:s_input.menuScrollTime+4, xmm2 }
  }
  else if ( v118 )
  {
    __asm
    {
      vcomiss xmm6, xmm7
      vmovss  cs:s_input.menuScrollTime+4, xmm7
    }
    s_input.menuScroll[1] = 1;
  }
  CL_Input_ClearKeys(localClientNum);
  _R11 = &v142;
  result = 1;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
  return result;
}

/*
==============
DevGui_IsButtonDown
==============
*/
_BOOL8 DevGui_IsButtonDown(DevGuiInputButton button)
{
  return s_input.buttonDown[button];
}

/*
==============
DevGui_IsButtonPressed
==============
*/
bool DevGui_IsButtonPressed(DevGuiInputButton button)
{
  return s_input.buttonDown[button] && !s_input.prevButtonDown[button];
}

/*
==============
DevGui_IsButtonReleased
==============
*/
bool DevGui_IsButtonReleased(DevGuiInputButton button)
{
  return !s_input.buttonDown[button] && s_input.prevButtonDown[button];
}

/*
==============
DevGui_MouseEvent
==============
*/
void DevGui_MouseEvent(int x, int y, int dx, int dy)
{
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm0, xmm0, r8d
    vcvtsi2ss xmm1, xmm1, r9d
    vmovss  cs:s_input.mousePos, xmm0
    vmovss  cs:s_input.mousePos+0Ch, xmm1
  }
  s_input.mouseX = x;
  s_input.mouseY = y;
}

/*
==============
DevGui_SelectGamepad
==============
*/
void DevGui_SelectGamepad(int gamePadIndex)
{
  s_input.selectedGamePadIndex = gamePadIndex;
}

/*
==============
DevGui_UpdateFloatScroll
==============
*/

float __fastcall DevGui_UpdateFloatScroll(double deltaTime, double value, double min, double max, float step, DevGuiInputAxis axis, float minChange)
{
  DevGuiInputState v25; 
  bool v28; 
  bool v29; 
  char v51; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vsubss  xmm10, xmm3, xmm2
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm10, xmm7
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmm9, xmm3
    vmovaps xmm8, xmm2
    vmovaps xmm12, xmm1
    vmovaps xmm11, xmm0
    vmovss  xmm6, [rsp+0A8h+step]
    vucomiss xmm6, xmm7
  }
  if ( (unsigned int)axis > SCROLL_YAXIS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui_input.cpp", 611, ASSERT_TYPE_ASSERT, "(axis >= SCROLL_XAXIS && axis < SCROLL_AXIS_COUNT)", (const char *)&queryFormat, "axis >= SCROLL_XAXIS && axis < SCROLL_AXIS_COUNT") )
    __debugbreak();
  __asm
  {
    vmovss  xmm4, cs:s_input.scrollScale
    vmulss  xmm0, xmm4, dword ptr [rdx+rax*4+64h]
    vdivss  xmm1, xmm0, cs:s_input.sliderScrollTime
  }
  v25 = s_input.digitalStates[axis];
  __asm
  {
    vmulss  xmm2, xmm1, xmm10
    vmulss  xmm3, xmm2, xmm11
  }
  v28 = (unsigned int)v25 < SCROLL_HELD;
  v29 = (unsigned int)v25 <= SCROLL_HELD;
  if ( v25 == SCROLL_HELD )
  {
    __asm
    {
      vmovss  xmm2, cs:s_input.digitalSliderTime
      vmovss  xmm0, cs:__real@3dcccccd
      vdivss  xmm1, xmm0, xmm4
      vminss  xmm5, xmm1, cs:s_input.sliderScrollMaxTimeStep
      vaddss  xmm4, xmm2, xmm11
      vcomiss xmm4, xmm5
      vmovss  cs:s_input.digitalSliderTime, xmm4
    }
  }
  else
  {
    v28 = v25 == SCROLL_NONE;
    v29 = (unsigned int)v25 <= SCROLL_PRESSED;
    if ( v25 == SCROLL_PRESSED )
    {
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rdx+rax*4+4Ch]
        vaddss  xmm3, xmm3, xmm0
      }
    }
  }
  __asm
  {
    vcomiss xmm3, xmm7
    vmovss  xmm1, [rsp+0A8h+minChange]
  }
  if ( v28 )
  {
    __asm
    {
      vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
      vminss  xmm3, xmm0, xmm3
      vcomiss xmm3, xmm7
    }
  }
  if ( !v29 )
    __asm { vmaxss  xmm3, xmm3, xmm1 }
  __asm
  {
    vaddss  xmm1, xmm12, xmm3
    vcomiss xmm1, xmm8
  }
  if ( v29 )
  {
    __asm { vmovaps xmm0, xmm8 }
  }
  else
  {
    __asm
    {
      vcmpless xmm0, xmm9, xmm1
      vblendvps xmm0, xmm1, xmm9, xmm0
    }
  }
  _R11 = &v51;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
  return *(float *)&_XMM0;
}

/*
==============
DevGui_UpdateInt64Scroll
==============
*/

__int64 __fastcall DevGui_UpdateInt64Scroll(float deltaTime, __int64 value, __int64 min, __int64 max, DevGuiInputAxis axis)
{
  return DevGui_UpdateIntScroll_Internal(deltaTime, value, min, max, axis);
}

/*
==============
DevGui_UpdateIntScroll
==============
*/
__int64 DevGui_UpdateIntScroll(float deltaTime, int value, int min, int max, DevGuiInputAxis axis)
{
  return DevGui_UpdateIntScroll_Internal(deltaTime, value, min, max, axis);
}

/*
==============
DevGui_UpdateIntScroll_Internal
==============
*/

__int64 __fastcall DevGui_UpdateIntScroll_Internal(double deltaTime, __int64 value, __int64 min, __int64 max, DevGuiInputAxis axis)
{
  __int64 v11; 
  __int64 result; 
  DevGuiInputState v21; 
  DevGuiInputState v31; 
  bool v32; 
  int v45; 
  __int64 v50; 
  char v55; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-48h], xmm10 }
  v11 = max - min;
  __asm { vmovaps xmm10, xmm0 }
  if ( max - min < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui_input.cpp", 501, ASSERT_TYPE_ASSERT, "(range >= 0)", (const char *)&queryFormat, "range >= 0") )
    __debugbreak();
  if ( (unsigned int)axis > SCROLL_YAXIS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui_input.cpp", 502, ASSERT_TYPE_ASSERT, "(axis >= SCROLL_XAXIS && axis < SCROLL_AXIS_COUNT)", (const char *)&queryFormat, "axis >= SCROLL_XAXIS && axis < SCROLL_AXIS_COUNT") )
    __debugbreak();
  if ( v11 )
  {
    _RDX = axis;
    _R11 = &s_input;
    _ECX = 0;
    __asm
    {
      vmovaps [rsp+78h+var_18], xmm6
      vmovaps [rsp+78h+var_38], xmm9
      vmovss  xmm9, cs:s_input.scrollScale
    }
    v21 = s_input.digitalStates[axis];
    __asm { vxorps  xmm5, xmm5, xmm5 }
    if ( v21 == SCROLL_HELD )
    {
      __asm
      {
        vmovss  xmm2, cs:s_input.digitalSliderTime
        vmovss  xmm0, cs:__real@3dcccccd
        vaddss  xmm3, xmm2, xmm10
        vdivss  xmm1, xmm0, xmm9
        vminss  xmm4, xmm1, cs:s_input.sliderScrollMaxTimeStep
        vcomiss xmm3, xmm4
        vmovss  cs:s_input.digitalSliderTime, xmm3
      }
    }
    else if ( v21 == SCROLL_PRESSED )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r11+rdx*4+4Ch]
        vaddss  xmm2, xmm0, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm4, xmm0, xmm2, 1
        vcvttss2si ecx, xmm4
      }
    }
    else
    {
      __asm { vmovss  cs:s_input.digitalSliderTime, xmm5 }
    }
    v31 = s_input.analogStates[axis];
    v32 = (unsigned int)v31 <= SCROLL_HELD;
    if ( v31 == SCROLL_HELD )
    {
      __asm
      {
        vmulss  xmm2, xmm9, dword ptr [r11+rdx*4+64h]
        vmovss  xmm0, cs:s_input.sliderScrollTime
        vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rsi
        vdivss  xmm3, xmm0, xmm1
        vmovss  xmm1, cs:s_input.analogSliderTime
        vandps  xmm2, xmm2, xmm6
        vdivss  xmm0, xmm3, xmm2
        vminss  xmm4, xmm0, cs:s_input.sliderScrollMaxTimeStep
        vaddss  xmm2, xmm1, xmm10
        vcomiss xmm2, xmm4
        vmovss  cs:s_input.analogSliderTime, xmm2
        vmovss  xmm1, cs:__real@40000000
      }
      while ( 1 )
      {
        __asm { vcomiss xmm5, dword ptr [r11+rdx*4+64h] }
        v45 = -1;
        if ( v32 )
          v45 = 1;
        _ECX += v45;
        __asm
        {
          vsubss  xmm2, xmm2, xmm4
          vmovss  cs:s_input.analogSliderTime, xmm2
        }
        v32 = s_input.gamePadIndex == 0;
        if ( s_input.gamePadIndex < 0 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [r11+rdx*4+64h]
            vandps  xmm0, xmm0, xmm6
            vcomiss xmm0, xmm1
          }
        }
        __asm { vcomiss xmm2, xmm4 }
      }
    }
    if ( v31 == SCROLL_PRESSED )
    {
      __asm { vcomiss xmm5, dword ptr [r11+rdx*4+64h] }
      ++_ECX;
    }
    else
    {
      __asm { vmovss  cs:s_input.analogSliderTime, xmm5 }
    }
    __asm
    {
      vmovaps xmm9, [rsp+78h+var_38]
      vmovaps xmm6, [rsp+78h+var_18]
    }
    v50 = _ECX + value;
    if ( v50 > min )
    {
      if ( v50 >= max )
        v50 = max;
      result = v50;
    }
    else
    {
      result = min;
    }
  }
  else
  {
    result = 0i64;
  }
  _R11 = &v55;
  __asm { vmovaps xmm10, xmmword ptr [r11-40h] }
  return result;
}

/*
==============
DevGui_UpdateUInt64Scroll
==============
*/

__int64 __fastcall DevGui_UpdateUInt64Scroll(double deltaTime, unsigned __int64 value, unsigned __int64 min, unsigned __int64 max, DevGuiInputAxis axis)
{
  return DevGui_UpdateIntScroll_Internal(deltaTime, value, min, max, axis);
}

