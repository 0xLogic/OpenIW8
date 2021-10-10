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
char DevGui_InputUpdate(LocalClientNum_t localClientNum, float deltaTime, bool disableMouseNavigation)
{
  __int16 v5; 
  __int16 v7; 
  __int64 v8; 
  double Button; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  __int128 v28; 
  __int128 v32; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  __int64 v40; 
  float *digitalTimes; 
  float v42; 
  int v43; 
  int v44; 
  float v45; 
  float *analogTimes; 
  __int64 v47; 
  float v48; 
  int v49; 
  int v50; 
  float v51; 
  float v52; 
  float v53; 
  __int16 v54; 
  bool v55; 
  bool v56; 
  float v57; 
  __int128 v58; 
  __int128 v59; 
  __int16 v60; 
  __int128 v61; 
  bool v62; 
  bool v63; 
  float v64; 
  __int128 v65; 
  __int128 v66; 
  __int128 v67; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 

  v5 = -1;
  s_input.gamePadIndex = s_input.selectedGamePadIndex;
  if ( s_input.selectedGamePadIndex < 0 || !GPad_IsActive(s_input.selectedGamePadIndex) )
    s_input.gamePadIndex = -1;
  v7 = 0;
  s_input.sliderScrollTime = FLOAT_100_0;
  s_input.sliderScrollMaxTimeStep = FLOAT_0_30000001;
  v8 = 0i64;
  _XMM7 = 0i64;
  do
  {
    s_input.prevButtonDown[v8] = s_input.buttonDown[v8];
    s_input.buttonDown[v8] = 0;
    if ( s_input.gamePadIndex >= 0 )
    {
      Button = GPad_GetButton(s_input.gamePadIndex, s_butMapsGamepad_0[v8]);
      s_input.buttonDown[v8] = *(float *)&Button > 0.0;
    }
    s_input.buttonDown[v8] |= CL_Keys_IsKeyDown(localClientNum, s_butMapsKey_0[v8]) != 0;
    ++v8;
  }
  while ( v8 < 11 );
  if ( !disableMouseNavigation )
  {
    s_input.buttonDown[4] |= CL_Keys_IsKeyDown(localClientNum, 187) != 0;
    s_input.buttonDown[5] |= CL_Keys_IsKeyDown(localClientNum, 188) != 0;
  }
  _XMM11 = LODWORD(FLOAT_1_0);
  _XMM0 = s_input.buttonDown[3];
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm11, xmm7, xmm2
  }
  v73 = *(float *)&_XMM0;
  _XMM0 = s_input.buttonDown[2];
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm11, xmm7, xmm2
  }
  v72 = *(float *)&_XMM0;
  _XMM0 = s_input.buttonDown[0];
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm11, xmm7, xmm2
  }
  v70 = *(float *)&_XMM0;
  _XMM0 = s_input.buttonDown[1];
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm11, xmm7, xmm2
  }
  v71 = *(float *)&_XMM0;
  v24 = 0.0;
  v25 = 0.0;
  v26 = 0.0;
  v27 = 0.0;
  if ( s_input.gamePadIndex < 0 )
    goto LABEL_90;
  *(double *)&_XMM0 = GPad_GetStick(s_input.gamePadIndex, GPAD_LX);
  v28 = _XMM0;
  *(float *)&v28 = *(float *)&_XMM0 * *(float *)&_XMM0;
  _XMM1 = v28 ^ _xmm;
  __asm
  {
    vcmpless xmm0, xmm7, xmm0
    vblendvps xmm0, xmm1, xmm2, xmm0
  }
  v69 = *(float *)&_XMM0;
  *(double *)&_XMM0 = GPad_GetStick(s_input.gamePadIndex, GPAD_LY);
  v32 = _XMM0;
  *(float *)&v32 = *(float *)&_XMM0 * *(float *)&_XMM0;
  _XMM1 = v32 ^ _xmm;
  __asm
  {
    vcmpless xmm0, xmm7, xmm0
    vblendvps xmm0, xmm1, xmm2, xmm0
  }
  v74 = *(float *)&_XMM0;
  *(double *)&_XMM0 = GPad_GetButton(s_input.gamePadIndex, GPAD_R_TRIG);
  v26 = *(float *)&_XMM0;
  *(double *)&_XMM0 = GPad_GetButton(s_input.gamePadIndex, GPAD_L_TRIG);
  v24 = v69;
  v25 = v74;
  v27 = *(float *)&_XMM0;
  if ( s_input.gamePadIndex < 0 || v69 == 0.0 && v74 == 0.0 )
  {
LABEL_90:
    if ( !disableMouseNavigation && devgui_allowMouse->current.enabled )
    {
      v25 = (float)((float)((float)(v25 - s_input.mousePos[1][0]) - s_input.mousePos[1][1]) - s_input.mousePos[1][2]) * 0.33333334;
      v24 = (float)(v24 + (float)((float)((float)(0.33333334 * s_input.mousePos[0][1]) + (float)(0.33333334 * s_input.mousePos[0][0])) + (float)(0.33333334 * s_input.mousePos[0][2]))) * 0.33333334;
    }
  }
  v36 = v73;
  v37 = v72;
  s_input.mousePos[0][2] = s_input.mousePos[0][1];
  s_input.mousePos[1][2] = s_input.mousePos[1][1];
  s_input.mousePos[0][1] = s_input.mousePos[0][0];
  s_input.mousePos[1][1] = s_input.mousePos[1][0];
  s_input.mousePos[0][0] = 0.0;
  s_input.mousePos[1][0] = 0.0;
  if ( v73 == 0.0 && v72 == 0.0 )
  {
    v38 = v70;
    v39 = v71;
  }
  else
  {
    v38 = v70;
    if ( v70 != 0.0 || (v39 = v71, v71 != 0.0) )
    {
      v36 = 0.0;
      v37 = 0.0;
      v38 = 0.0;
      v39 = 0.0;
    }
  }
  v40 = 2i64;
  digitalTimes = s_input.digitalTimes;
  s_input.digitalAxis[1] = v38 - v39;
  s_input.scrollScale = (float)((float)(v26 * 4.0) + 1.0) * (float)(v27 + 1.0);
  s_input.digitalAxis[0] = v36 - v37;
  s_input.analogAxis[0] = v24;
  s_input.analogAxis[1] = v25;
  do
  {
    v42 = *(digitalTimes - 2);
    if ( v42 == 0.0 )
    {
      *(digitalTimes - 4) = 0.0;
      *digitalTimes = 0.0;
    }
    else
    {
      v43 = *((_DWORD *)digitalTimes - 4);
      if ( v43 )
      {
        v44 = v43 - 1;
        if ( v44 )
        {
          v45 = deltaTime + *digitalTimes;
          *digitalTimes = v45;
          if ( v44 == 1 && v45 > 0.25 )
          {
            *((_DWORD *)digitalTimes - 4) = 3;
            *digitalTimes = 0.0;
          }
        }
        else
        {
          *((_DWORD *)digitalTimes - 4) = 2;
          *digitalTimes = 0.0;
        }
      }
      else if ( COERCE_FLOAT(LODWORD(v42) & _xmm) > 0.40000001 )
      {
        *((_DWORD *)digitalTimes - 4) = 1;
      }
    }
    ++digitalTimes;
    --v40;
  }
  while ( v40 );
  analogTimes = s_input.analogTimes;
  v47 = 2i64;
  do
  {
    v48 = *(analogTimes - 2);
    if ( v48 == 0.0 )
    {
      *(analogTimes - 4) = 0.0;
      *analogTimes = 0.0;
    }
    else
    {
      v49 = *((_DWORD *)analogTimes - 4);
      if ( v49 )
      {
        v50 = v49 - 1;
        if ( v50 )
        {
          v51 = deltaTime + *analogTimes;
          *analogTimes = v51;
          if ( v50 == 1 && v51 > 0.25 )
          {
            *((_DWORD *)analogTimes - 4) = 3;
            *analogTimes = 0.0;
          }
        }
        else
        {
          *((_DWORD *)analogTimes - 4) = 2;
          *analogTimes = 0.0;
        }
      }
      else if ( COERCE_FLOAT(LODWORD(v48) & _xmm) > 0.40000001 )
      {
        *((_DWORD *)analogTimes - 4) = 1;
      }
    }
    ++analogTimes;
    --v47;
  }
  while ( v47 );
  v52 = s_input.analogAxis[0];
  v53 = s_input.analogAxis[1];
  if ( COERCE_FLOAT(LODWORD(s_input.analogAxis[0]) & _xmm) <= COERCE_FLOAT(LODWORD(s_input.analogAxis[1]) & _xmm) )
    v52 = 0.0;
  else
    v53 = 0.0;
  v54 = 0;
  s_input.menuScroll[0] = 0;
  v55 = s_input.digitalStates[0] == SCROLL_HELD || s_input.analogStates[0] == SCROLL_HELD;
  v56 = s_input.digitalStates[0] == SCROLL_PRESSED || s_input.analogStates[0] == SCROLL_PRESSED;
  v57 = (float)(v52 + s_input.digitalAxis[0]) * s_input.scrollScale;
  if ( v55 )
  {
    v59 = LODWORD(s_input.menuScrollTime[0]);
    *(float *)&v59 = s_input.menuScrollTime[0] + (float)(COERCE_FLOAT(LODWORD(v57) & _xmm) * deltaTime);
    v58 = v59;
    s_input.menuScrollTime[0] = *(float *)&v59;
    if ( *(float *)&v59 > 0.1 )
    {
      v60 = -1;
      if ( v57 >= 0.0 )
        v60 = 1;
      do
      {
        v54 += v60;
        v61 = v58;
        *(float *)&v61 = *(float *)&v58 + -0.1;
        v58 = v61;
      }
      while ( *(float *)&v61 > 0.1 );
      s_input.menuScrollTime[0] = *(float *)&v61;
LABEL_68:
      s_input.menuScroll[0] = v54;
    }
  }
  else if ( v56 )
  {
    v54 = -1;
    if ( (float)((float)(v52 + s_input.digitalAxis[0]) * s_input.scrollScale) >= 0.0 )
      v54 = 1;
    s_input.menuScrollTime[0] = 0.0;
    goto LABEL_68;
  }
  s_input.menuScroll[1] = 0;
  v62 = s_input.digitalStates[1] == SCROLL_HELD || s_input.analogStates[1] == SCROLL_HELD;
  v63 = s_input.digitalStates[1] == SCROLL_PRESSED || s_input.analogStates[1] == SCROLL_PRESSED;
  v64 = (float)(v53 + s_input.digitalAxis[1]) * s_input.scrollScale;
  if ( v62 )
  {
    v66 = LODWORD(s_input.menuScrollTime[1]);
    *(float *)&v66 = s_input.menuScrollTime[1] + (float)(COERCE_FLOAT(LODWORD(v64) & _xmm) * deltaTime);
    v65 = v66;
    s_input.menuScrollTime[1] = *(float *)&v66;
    if ( *(float *)&v66 > 0.1 )
    {
      if ( v64 >= 0.0 )
        v5 = 1;
      do
      {
        v7 += v5;
        v67 = v65;
        *(float *)&v67 = *(float *)&v65 + -0.1;
        v65 = v67;
        s_input.menuScroll[1] = v7;
      }
      while ( *(float *)&v67 > 0.1 );
      s_input.menuScrollTime[1] = *(float *)&v67;
    }
  }
  else if ( v63 )
  {
    s_input.menuScrollTime[1] = 0.0;
    if ( (float)((float)(v53 + s_input.digitalAxis[1]) * s_input.scrollScale) >= 0.0 )
      v5 = 1;
    s_input.menuScroll[1] = v5;
  }
  CL_Input_ClearKeys(localClientNum);
  return 1;
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
  s_input.mousePos[0][0] = (float)dx;
  s_input.mousePos[1][0] = (float)dy;
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

float __fastcall DevGui_UpdateFloatScroll(float deltaTime, double value, float min, double max, float step, DevGuiInputAxis axis, float minChange)
{
  __int128 v8; 
  DevGuiInputState v9; 
  __int128 scrollScale_low; 
  __int128 v13; 
  __int128 v15; 
  __int128 digitalSliderTime_low; 
  float v17; 
  __int128 v18; 
  __int128 v19; 
  bool v20; 
  __int128 v23; 

  _XMM9 = *(_OWORD *)&max;
  v8 = *(_OWORD *)&value;
  if ( (float)(*(float *)&max - min) < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui_input.cpp", 609, ASSERT_TYPE_ASSERT, "(range >= 0)", (const char *)&queryFormat, "range >= 0") )
    __debugbreak();
  if ( step == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui_input.cpp", 610, ASSERT_TYPE_ASSERT, "(step)", (const char *)&queryFormat, "step") )
    __debugbreak();
  if ( (unsigned int)axis > SCROLL_YAXIS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui_input.cpp", 611, ASSERT_TYPE_ASSERT, "(axis >= SCROLL_XAXIS && axis < SCROLL_AXIS_COUNT)", (const char *)&queryFormat, "axis >= SCROLL_XAXIS && axis < SCROLL_AXIS_COUNT") )
    __debugbreak();
  scrollScale_low = LODWORD(s_input.scrollScale);
  v9 = s_input.digitalStates[axis];
  *(float *)&scrollScale_low = (float)((float)((float)(s_input.scrollScale * s_input.analogAxis[axis]) / s_input.sliderScrollTime) * (float)(*(float *)&max - min)) * deltaTime;
  _XMM3 = scrollScale_low;
  if ( v9 == SCROLL_HELD )
  {
    v13 = LODWORD(FLOAT_0_1);
    *(float *)&v13 = 0.1 / s_input.scrollScale;
    _XMM1 = v13;
    __asm { vminss  xmm5, xmm1, cs:s_input.sliderScrollMaxTimeStep }
    digitalSliderTime_low = LODWORD(s_input.digitalSliderTime);
    *(float *)&digitalSliderTime_low = s_input.digitalSliderTime + deltaTime;
    v15 = digitalSliderTime_low;
    s_input.digitalSliderTime = s_input.digitalSliderTime + deltaTime;
    if ( s_input.digitalSliderTime > *(float *)&_XMM5 )
    {
      do
      {
        v17 = step * s_input.digitalAxis[axis];
        v18 = v15;
        *(float *)&v18 = *(float *)&v15 - *(float *)&_XMM5;
        v15 = v18;
        v20 = *(float *)&v18 <= *(float *)&_XMM5;
        s_input.digitalSliderTime = *(float *)&v18;
        v19 = _XMM3;
        *(float *)&v19 = *(float *)&_XMM3 + v17;
        _XMM3 = v19;
      }
      while ( !v20 );
    }
  }
  else if ( v9 == SCROLL_PRESSED )
  {
    *(float *)&scrollScale_low = *(float *)&scrollScale_low + (float)(step * s_input.digitalAxis[axis]);
    _XMM3 = scrollScale_low;
  }
  v20 = *(float *)&_XMM3 <= 0.0;
  if ( *(float *)&_XMM3 < 0.0 )
  {
    _XMM0 = LODWORD(minChange) ^ (unsigned __int128)_xmm;
    __asm { vminss  xmm3, xmm0, xmm3 }
    v20 = *(float *)&_XMM3 <= 0.0;
  }
  if ( !v20 )
    __asm { vmaxss  xmm3, xmm3, xmm1 }
  v23 = v8;
  *(float *)&v23 = *(float *)&v8 + *(float *)&_XMM3;
  _XMM1 = v23;
  if ( (float)(*(float *)&v8 + *(float *)&_XMM3) <= min )
    return min;
  __asm
  {
    vcmpless xmm0, xmm9, xmm1
    vblendvps xmm0, xmm1, xmm9, xmm0
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
__int64 DevGui_UpdateIntScroll_Internal(float deltaTime, __int64 value, __int64 min, __int64 max, DevGuiInputAxis axis)
{
  __int64 v5; 
  int v11; 
  DevGuiInputState v12; 
  __int128 v13; 
  __int128 digitalSliderTime_low; 
  __int128 v16; 
  __int128 v19; 
  DevGuiInputState v23; 
  float v24; 
  __int128 sliderScrollTime_low; 
  __int128 v28; 
  __int128 analogSliderTime_low; 
  int v30; 
  __int128 v31; 
  int v32; 
  __int64 v33; 

  v5 = max - min;
  if ( max - min < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui_input.cpp", 501, ASSERT_TYPE_ASSERT, "(range >= 0)", (const char *)&queryFormat, "range >= 0") )
    __debugbreak();
  if ( (unsigned int)axis > SCROLL_YAXIS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devgui\\devgui_input.cpp", 502, ASSERT_TYPE_ASSERT, "(axis >= SCROLL_XAXIS && axis < SCROLL_AXIS_COUNT)", (const char *)&queryFormat, "axis >= SCROLL_XAXIS && axis < SCROLL_AXIS_COUNT") )
    __debugbreak();
  if ( !v5 )
    return 0i64;
  v11 = 0;
  v12 = s_input.digitalStates[axis];
  if ( v12 == SCROLL_HELD )
  {
    digitalSliderTime_low = LODWORD(s_input.digitalSliderTime);
    *(float *)&digitalSliderTime_low = s_input.digitalSliderTime + deltaTime;
    v13 = digitalSliderTime_low;
    v16 = LODWORD(FLOAT_0_1);
    *(float *)&v16 = 0.1 / s_input.scrollScale;
    _XMM1 = v16;
    __asm { vminss  xmm4, xmm1, cs:s_input.sliderScrollMaxTimeStep }
    s_input.digitalSliderTime = *(float *)&v13;
    if ( *(float *)&v13 > *(float *)&_XMM4 )
    {
      _XMM6 = 0i64;
      do
      {
        v19 = v13;
        *(float *)&v19 = *(float *)&v13 - *(float *)&_XMM4;
        v13 = v19;
        __asm { vroundss xmm0, xmm6, xmm2, 1 }
        v11 += (int)*(float *)&_XMM0;
        s_input.digitalSliderTime = *(float *)&v19;
      }
      while ( *(float *)&v19 > *(float *)&_XMM4 );
    }
  }
  else if ( v12 == SCROLL_PRESSED )
  {
    _XMM0 = 0i64;
    __asm { vroundss xmm4, xmm0, xmm2, 1 }
    v11 = (int)*(float *)&_XMM4;
  }
  else
  {
    s_input.digitalSliderTime = 0.0;
  }
  v23 = s_input.analogStates[axis];
  if ( v23 == SCROLL_HELD )
  {
    v24 = (float)v5;
    sliderScrollTime_low = LODWORD(s_input.sliderScrollTime);
    *(float *)&sliderScrollTime_low = (float)(s_input.sliderScrollTime / v24) / COERCE_FLOAT(COERCE_UNSIGNED_INT(s_input.scrollScale * s_input.analogAxis[axis]) & _xmm);
    _XMM0 = sliderScrollTime_low;
    __asm { vminss  xmm4, xmm0, cs:s_input.sliderScrollMaxTimeStep }
    analogSliderTime_low = LODWORD(s_input.analogSliderTime);
    *(float *)&analogSliderTime_low = s_input.analogSliderTime + deltaTime;
    v28 = analogSliderTime_low;
    s_input.analogSliderTime = s_input.analogSliderTime + deltaTime;
    if ( s_input.analogSliderTime < *(float *)&_XMM4 )
      goto LABEL_30;
    while ( 1 )
    {
      v30 = -1;
      if ( s_input.analogAxis[axis] >= 0.0 )
        v30 = 1;
      v11 += v30;
      v31 = v28;
      *(float *)&v31 = *(float *)&v28 - *(float *)&_XMM4;
      v28 = v31;
      s_input.analogSliderTime = *(float *)&v31;
      if ( s_input.gamePadIndex < 0 && COERCE_FLOAT(LODWORD(s_input.analogAxis[axis]) & _xmm) <= 2.0 )
        break;
      if ( *(float *)&v31 < *(float *)&_XMM4 )
        goto LABEL_30;
    }
  }
  else if ( v23 == SCROLL_PRESSED )
  {
    v32 = -1;
    if ( s_input.analogAxis[axis] >= 0.0 )
      v32 = 1;
    v11 += v32;
    goto LABEL_30;
  }
  s_input.analogSliderTime = 0.0;
LABEL_30:
  v33 = v11 + value;
  if ( v33 <= min )
    return min;
  if ( v33 >= max )
    return max;
  return v33;
}

/*
==============
DevGui_UpdateUInt64Scroll
==============
*/

__int64 __fastcall DevGui_UpdateUInt64Scroll(float deltaTime, unsigned __int64 value, unsigned __int64 min, unsigned __int64 max, DevGuiInputAxis axis)
{
  return DevGui_UpdateIntScroll_Internal(deltaTime, value, min, max, axis);
}

