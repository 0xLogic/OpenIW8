/*
==============
IN_MouseEvent
==============
*/

void __fastcall IN_MouseEvent(unsigned int sysMsgTime, int mstate)
{
  ?IN_MouseEvent@@YAXIH@Z(sysMsgTime, mstate);
}

/*
==============
IN_CenterMouse
==============
*/

void __fastcall IN_CenterMouse(int controllerIndex)
{
  ?IN_CenterMouse@@YAXH@Z(controllerIndex);
}

/*
==============
IN_ShowGameCursor
==============
*/

void __fastcall IN_ShowGameCursor(int show)
{
  ?IN_ShowGameCursor@@YAXH@Z(show);
}

/*
==============
IN_GetCursorPos
==============
*/

void __fastcall IN_GetCursorPos(int controllerIndex, MouseCursorPos *curPos)
{
  ?IN_GetCursorPos@@YAXHPEAUMouseCursorPos@@@Z(controllerIndex, curPos);
}

/*
==============
IN_ShowSystemCursor
==============
*/

void __fastcall IN_ShowSystemCursor(int show)
{
  ?IN_ShowSystemCursor@@YAXH@Z(show);
}

/*
==============
IN_MouseMoveEvent
==============
*/

void __fastcall IN_MouseMoveEvent(unsigned int x, unsigned int y, bool updateDelta)
{
  ?IN_MouseMoveEvent@@YAXII_N@Z(x, y, updateDelta);
}

/*
==============
IN_StartupMouse
==============
*/

void IN_StartupMouse(void)
{
  ?IN_StartupMouse@@YAXXZ();
}

/*
==============
IN_SetMouseCursorType
==============
*/

void __fastcall IN_SetMouseCursorType(CursorType newCursorType)
{
  ?IN_SetMouseCursorType@@YAXW4CursorType@@@Z(newCursorType);
}

/*
==============
IN_MouseMove
==============
*/

void IN_MouseMove(void)
{
  ?IN_MouseMove@@YAXXZ();
}

/*
==============
IN_IsMouseActive
==============
*/

int __fastcall IN_IsMouseActive(int controllerIndex)
{
  return ?IN_IsMouseActive@@YAHH@Z(controllerIndex);
}

/*
==============
IN_CenterMouse
==============
*/
void IN_CenterMouse(int controllerIndex)
{
  ;
}

/*
==============
IN_GetCursorPos
==============
*/
void IN_GetCursorPos(int controllerIndex, MouseCursorPos *curPos)
{
  __int64 v3; 
  LocalClientNum_t outLocalClientNum; 

  *curPos = s_wmv.curPos;
  if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) )
  {
    v3 = outLocalClientNum;
    curPos->x -= (int)scrPlaceViewDisplay[v3].realViewportPosition.v[0];
    curPos->y -= (int)scrPlaceViewDisplay[v3].realViewportPosition.v[1];
  }
}

/*
==============
IN_IsMouseActive
==============
*/
__int64 IN_IsMouseActive(int controllerIndex)
{
  int KeyboardController; 
  unsigned __int8 v3; 

  KeyboardController = Xb3_Input_GetKeyboardController();
  v3 = 0;
  if ( controllerIndex == KeyboardController )
    return s_wmv.mouseActive;
  return v3;
}

/*
==============
IN_MouseEvent
==============
*/
void IN_MouseEvent(unsigned int sysMsgTime, int mstate)
{
  int KeyboardController; 
  int *p_keyCode; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int *v10; 
  int v11; 
  int v12; 

  if ( s_wmv.mouseInitialized )
  {
    KeyboardController = Xb3_Input_GetKeyboardController();
    if ( CL_Mgr_IsControllerMappedToClient(KeyboardController, NULL) )
    {
      if ( (mstate & 0x1E0) != 0 )
      {
        p_keyCode = &mouseWheelList[0].keyCode;
        do
        {
          v6 = *(p_keyCode - 1);
          v7 = *p_keyCode;
          if ( (v6 & 0x1E0) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mouse.cpp", 450, ASSERT_TYPE_ASSERT, "(flag & MOUSEINPUT_MWHEEL_MASK)", (const char *)&queryFormat, "flag & MOUSEINPUT_MWHEEL_MASK") )
            __debugbreak();
          if ( (unsigned int)(v7 - 192) > 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mouse.cpp", 451, ASSERT_TYPE_ASSERT, "(key >= K_START_MOUSEWHEEL && key <= K_LAST_MOUSEWHEEL)", (const char *)&queryFormat, "key >= K_START_MOUSEWHEEL && key <= K_LAST_MOUSEWHEEL") )
            __debugbreak();
          if ( (v6 & mstate) != 0 )
          {
            IN_MouseKeyEvent(KeyboardController, v7, 1, sysMsgTime);
            IN_MouseKeyEvent(KeyboardController, v7, 0, sysMsgTime);
          }
          p_keyCode += 2;
        }
        while ( (__int64)p_keyCode < (__int64)&unk_1441E4BEC );
      }
      v8 = mstate & 0x1F;
      v9 = v8 ^ s_wmv.oldButtonState;
      if ( v8 != s_wmv.oldButtonState )
      {
        v10 = &mouseButtonList[0].keyCode;
        do
        {
          v11 = *(v10 - 1);
          v12 = *v10;
          if ( (v11 & 0x1F) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mouse.cpp", 469, ASSERT_TYPE_ASSERT, "(flag & MOUSEINPUT_BUTTON_MASK)", (const char *)&queryFormat, "flag & MOUSEINPUT_BUTTON_MASK") )
            __debugbreak();
          if ( (unsigned int)(v12 - 187) > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mouse.cpp", 470, ASSERT_TYPE_ASSERT, "(key >= K_START_MOUSEBUTTON && key <= K_LAST_MOUSEBUTTON)", (const char *)&queryFormat, "key >= K_START_MOUSEBUTTON && key <= K_LAST_MOUSEBUTTON") )
            __debugbreak();
          if ( (v11 & v9) != 0 )
            IN_MouseKeyEvent(KeyboardController, v12, (v11 & v8) != 0, sysMsgTime);
          v10 += 2;
        }
        while ( (__int64)v10 < (__int64)&mouseWheelList[0].keyCode );
        s_wmv.oldButtonState = v8;
      }
    }
  }
}

/*
==============
IN_MouseKeyEvent
==============
*/
void IN_MouseKeyEvent(int portIndex, int key, const int down, const unsigned int time)
{
  if ( (unsigned int)(key - 187) > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mouse.cpp", 425, ASSERT_TYPE_ASSERT, "(key >= K_START_MOUSE && key <= K_LAST_MOUSE)", (const char *)&queryFormat, "key >= K_START_MOUSE && key <= K_LAST_MOUSE") )
    __debugbreak();
  Sys_QueEvent(time, SE_KEY, key, down, portIndex, 0, NULL);
}

/*
==============
IN_MouseMove
==============
*/
void IN_MouseMove(void)
{
  int KeyboardController; 
  int v1; 
  int deltaX; 
  int deltaY; 
  int v4; 
  __int64 v5; 
  int x; 
  int v7; 
  int v8; 
  int ActivationFactoryByPCWSTR; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  Platform::Guid pGuid; 
  __int64 v18; 
  LocalClientNum_t outLocalClientNum; 
  MouseCursorPos y; 
  Platform::Object_vtbl *v21; 

  if ( !s_wmv.mouseInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mouse.cpp", 616, ASSERT_TYPE_ASSERT, "(s_wmv.mouseInitialized)", (const char *)&queryFormat, "s_wmv.mouseInitialized", -2i64) )
    __debugbreak();
  KeyboardController = Xb3_Input_GetKeyboardController();
  if ( CL_Mgr_IsControllerMappedToClient(KeyboardController, &outLocalClientNum) && !s_wmv.mouseIgnored )
  {
    v1 = s_wmv.mouseCaps->__abi_get_MousePresent(s_wmv.mouseCaps, (int *)&v18);
    if ( v1 < 0 )
      __abi_WinRTraiseException(v1);
    s_wmv.mouseActive = (_DWORD)v18 != 0;
    IN_RelativeMouseLock();
    deltaX = s_wmv.deltaX;
    deltaY = s_wmv.deltaY;
    *(_QWORD *)&s_wmv.deltaX = 0i64;
    IN_RelativeMouseUnlock();
    v4 = Xb3_Input_GetKeyboardController();
    y = s_wmv.curPos;
    if ( CL_Mgr_IsControllerMappedToClient(v4, (LocalClientNum_t *)&v18) )
    {
      v5 = (int)v18;
      x = y.x - (int)scrPlaceViewDisplay[v5].realViewportPosition.v[0];
      v7 = y.y - (int)scrPlaceViewDisplay[v5].realViewportPosition.v[1];
    }
    else
    {
      v7 = y.y;
      x = y.x;
    }
    v8 = CL_Input_MouseEvent(v4, x, v7, deltaX, deltaY);
    if ( s_wmv.mouseActive )
    {
      pGuid.__vftable = (Platform::Object_vtbl *)0x40044A2DF5A82CE3i64;
      *(_DWORD *)&pGuid.__d = 1304921779;
      *(_DWORD *)&pGuid.__h = 2045352902;
      y = 0i64;
      ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Devices.Input.MouseDevice", &pGuid, (void **)&y);
      if ( ActivationFactoryByPCWSTR < 0 )
        __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
      v18 = 0i64;
      v10 = (*(__int64 (__fastcall **)(MouseCursorPos, __int64 *))(**(_QWORD **)&y + 48i64))(y, &v18);
      if ( v10 < 0 )
        __abi_WinRTraiseException(v10);
      v11 = v18;
      v12 = v18;
      if ( v18 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8i64))(v18);
        v11 = v18;
      }
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
      v21 = NULL;
      if ( y )
        (*(void (__fastcall **)(MouseCursorPos))(**(_QWORD **)&y + 16i64))(y);
      v21 = NULL;
      if ( v8 )
      {
        if ( s_wmv.mouseInitialized && !s_wmv.mouseEventRegistered && v12 )
        {
          v21 = NULL;
          v13 = (*(__int64 (__fastcall **)(__int64, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice _,Windows::Devices::Input::MouseEventArgs _> *, Platform::Object_vtbl **))(*(_QWORD *)v12 + 48i64))(v12, s_wmv.mouseMovedhandler, &v21);
          if ( v13 < 0 )
            __abi_WinRTraiseException(v13);
          s_wmv.mouseMovedEventToken.__vftable = v21;
          v21 = NULL;
          v14 = (*(__int64 (__fastcall **)(__int64, Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice _,Windows::Devices::Input::MouseEventArgs _> *, Platform::Object_vtbl **))(*(_QWORD *)v12 + 64i64))(v12, s_wmv.mouseWheelMovedhandler, &v21);
          if ( v14 < 0 )
            __abi_WinRTraiseException(v14);
          s_wmv.mouseWheelMovedEventToken.__vftable = v21;
          s_wmv.mouseEventRegistered = 1;
        }
      }
      else if ( s_wmv.mouseInitialized && s_wmv.mouseEventRegistered && v12 )
      {
        v15 = (*(__int64 (__fastcall **)(__int64, Platform::Object_vtbl *))(*(_QWORD *)v12 + 56i64))(v12, s_wmv.mouseMovedEventToken.__vftable);
        if ( v15 < 0 )
          __abi_WinRTraiseException(v15);
        v16 = (*(__int64 (__fastcall **)(__int64, Platform::Object_vtbl *))(*(_QWORD *)v12 + 72i64))(v12, s_wmv.mouseWheelMovedEventToken.__vftable);
        if ( v16 < 0 )
          __abi_WinRTraiseException(v16);
        s_wmv.mouseMovedEventToken.__vftable = NULL;
        s_wmv.mouseWheelMovedEventToken.__vftable = NULL;
        s_wmv.mouseEventRegistered = 0;
      }
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
    }
  }
}

/*
==============
IN_MouseMoveEvent
==============
*/
void IN_MouseMoveEvent(unsigned int x, unsigned int y, bool updateDelta)
{
  int KeyboardController; 
  unsigned int v7; 
  unsigned int v8; 

  KeyboardController = Xb3_Input_GetKeyboardController();
  if ( CL_Mgr_IsControllerMappedToClient(KeyboardController, NULL) )
  {
    if ( updateDelta && s_wmv.curPos.x != -100000 && !s_wmv.mouseIgnored )
    {
      v7 = y - s_wmv.curPos.y;
      v8 = x - s_wmv.curPos.x;
      IN_RelativeMouseLock();
      s_wmv.deltaX += v8;
      s_wmv.deltaY += v7;
      IN_RelativeMouseUnlock();
    }
    s_wmv.curPos.x = x;
    s_wmv.curPos.y = y;
  }
}

/*
==============
IN_OnMouseMovedEvent
==============
*/
void IN_OnMouseMovedEvent(Windows::Devices::Input::MouseDevice *device, Windows::Devices::Input::MouseEventArgs *args)
{
  Windows::Devices::Input::MouseEventArgs_vtbl *v2; 
  int v3; 
  int v4; 
  int v5; 
  __int64 v6; 

  v2 = args->Windows::Devices::Input::IMouseEventArgs::Platform::Object::__vftable;
  v6 = 0i64;
  v3 = v2->__abi_get_MouseDelta(args, (Windows::Devices::Input::MouseDelta *)&v6);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  v4 = HIDWORD(v6);
  v5 = v6;
  if ( v6 )
  {
    if ( !s_wmv.mouseIgnored )
    {
      IN_RelativeMouseLock();
      s_wmv.deltaX += v5;
      s_wmv.deltaY += v4;
      IN_RelativeMouseUnlock();
    }
  }
}

/*
==============
IN_OnMouseWheelMovedEvent
==============
*/
void IN_OnMouseWheelMovedEvent(Windows::Devices::Input::MouseDevice *device, Windows::Devices::Input::MouseEventArgs *args)
{
  ;
}

/*
==============
IN_RelativeMouseLock
==============
*/
__int64 IN_RelativeMouseLock()
{
  __int64 result; 

  while ( 1 )
  {
    if ( !s_wmv.relativeMouseLock )
    {
      if ( ((unsigned __int8)&s_wmv.relativeMouseLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", s_wmv.relativeMouseLock + 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_wmv.relativeMouseLock) )
        __debugbreak();
      result = (unsigned int)_InterlockedCompareExchange(&s_wmv.relativeMouseLock, 1, 0);
      if ( !(_DWORD)result )
        break;
    }
    Sys_Sleep(0);
  }
  return result;
}

/*
==============
IN_RelativeMouseUnlock
==============
*/
char IN_RelativeMouseUnlock()
{
  signed __int32 v0; 

  if ( ((unsigned __int8)&s_wmv.relativeMouseLock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_wmv.relativeMouseLock) )
    __debugbreak();
  v0 = _InterlockedCompareExchange(&s_wmv.relativeMouseLock, 0, 1);
  if ( v0 != 1 )
  {
    LOBYTE(v0) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mouse.cpp", 185, ASSERT_TYPE_ASSERT, "((Sys_InterlockedCompareExchange( &s_wmv.relativeMouseLock, 0, 1 )) == (1))", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_wmv.relativeMouseLock, 0, 1 ) == 1");
    if ( (_BYTE)v0 )
      __debugbreak();
  }
  return v0;
}

/*
==============
IN_SetMouseCursorType
==============
*/
void IN_SetMouseCursorType(CursorType newCursorType)
{
  if ( newCursorType != s_wmv.cursorType )
  {
    s_wmv.cursorType = newCursorType;
    IN_UpdateCursorVisual();
  }
}

/*
==============
IN_ShowGameCursor
==============
*/
void IN_ShowGameCursor(int show)
{
  int KeyboardController; 
  unsigned __int16 cursorVisiblityFlags; 
  unsigned __int16 v4; 

  KeyboardController = Xb3_Input_GetKeyboardController();
  if ( CL_Mgr_IsControllerMappedToClient(KeyboardController, NULL) )
  {
    cursorVisiblityFlags = s_wmv.cursorVisiblityFlags;
    if ( show )
      v4 = s_wmv.cursorVisiblityFlags | 2;
    else
      v4 = s_wmv.cursorVisiblityFlags & 0xFFFD;
    s_wmv.cursorVisiblityFlags = v4;
    if ( cursorVisiblityFlags != v4 )
      IN_UpdateCursorVisual();
  }
}

/*
==============
IN_ShowSystemCursor
==============
*/
void IN_ShowSystemCursor(int show)
{
  unsigned __int16 cursorVisiblityFlags; 
  unsigned __int16 v2; 

  cursorVisiblityFlags = s_wmv.cursorVisiblityFlags;
  if ( show )
    v2 = s_wmv.cursorVisiblityFlags | 1;
  else
    v2 = s_wmv.cursorVisiblityFlags & 0xFFFE;
  s_wmv.cursorVisiblityFlags = v2;
  if ( cursorVisiblityFlags != v2 )
    IN_UpdateCursorVisual();
}

/*
==============
IN_StartupMouse
==============
*/
void IN_StartupMouse(void)
{
  Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice _,Windows::Devices::Input::MouseEventArgs _> *v0; 
  Windows::UI::Core::CoreCursor *v1; 
  Windows::UI::Core::CoreCursor *arrowCursor; 
  Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice _,Windows::Devices::Input::MouseEventArgs _> *v3; 
  Windows::Devices::Input::MouseCapabilities *v4; 
  Windows::Devices::Input::MouseCapabilities *mouseCaps; 
  int v6; 
  Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice _,Windows::Devices::Input::MouseEventArgs _> *v7; 
  Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice _,Windows::Devices::Input::MouseEventArgs _> *v8; 
  Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice _,Windows::Devices::Input::MouseEventArgs _> *mouseMovedhandler; 
  Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice _,Windows::Devices::Input::MouseEventArgs _> *v10; 
  Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice _,Windows::Devices::Input::MouseEventArgs _> *v11; 
  Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice _,Windows::Devices::Input::MouseEventArgs _> *mouseWheelMovedhandler; 
  Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice _,Windows::Devices::Input::MouseEventArgs _> *v13; 

  s_wmv.mouseInitialized = 0;
  Dvar_BeginPermanentRegistration();
  in_mouse = Dvar_RegisterBool("OMNTRLMSQK", 1, 2u, "Initialize the mouse drivers");
  Dvar_EndPermanentRegistration();
  if ( !s_wmv.arrowCursor )
  {
    v13 = NULL;
    Windows::UI::Core::CoreCursor::CoreCursor(NULL, Arrow, 0);
    v1 = (Windows::UI::Core::CoreCursor *)v0;
    v13 = v0;
    arrowCursor = s_wmv.arrowCursor;
    if ( v0 != (Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice _,Windows::Devices::Input::MouseEventArgs _> *)s_wmv.arrowCursor )
    {
      if ( v0 )
      {
        v0->__abi_AddRef(v0);
        arrowCursor = s_wmv.arrowCursor;
      }
      if ( arrowCursor )
        arrowCursor->__abi_Release(arrowCursor);
      s_wmv.arrowCursor = v1;
    }
    if ( v1 )
      v1->__abi_Release(v1);
    LOAD_CURSOR_FROM_RESOURCE(CURSOR_TYPE_ARROW_NORMAL, 0x68u);
    LOAD_CURSOR_FROM_RESOURCE(CURSOR_TYPE_ARROW_ACTIVE, 0x65u);
    LOAD_CURSOR_FROM_RESOURCE(CURSOR_TYPE_ARROW_UNAVAILABLE, 0x69u);
    LOAD_CURSOR_FROM_RESOURCE(CURSOR_TYPE_ARROW_INACTIVE, 0x67u);
    LOAD_CURSOR_FROM_RESOURCE(CURSOR_TYPE_ARROW_CONTEXTUAL, 0x66u);
    LOAD_CURSOR_FROM_RESOURCE(CURSOR_TYPE_ROTATION_NORMAL, 0x6Bu);
    LOAD_CURSOR_FROM_RESOURCE(CURSOR_TYPE_ROTATION_ACTIVE, 0x6Au);
    LOAD_CURSOR_FROM_RESOURCE(CURSOR_TYPE_ROTATION_UNAVAILABLE, 0x6Cu);
    LOAD_CURSOR_FROM_RESOURCE(CURSOR_TYPE_ARROW_PANFOURWAYS, 0x6Eu);
    LOAD_CURSOR_FROM_RESOURCE(CURSOR_TYPE_IBEAM, 0x6Du);
    LOAD_CURSOR_FROM_CORETYPES(CURSOR_TYPE_WIN_ARROW, Arrow);
    LOAD_CURSOR_FROM_CORETYPES(CURSOR_TYPE_WIN_HAND, Hand);
    LOAD_CURSOR_FROM_CORETYPES(CURSOR_TYPE_WIN_IBEAM, IBeam);
  }
  if ( in_mouse->current.enabled )
  {
    v13 = NULL;
    Windows::Devices::Input::MouseCapabilities::MouseCapabilities(NULL);
    v4 = (Windows::Devices::Input::MouseCapabilities *)v3;
    v13 = v3;
    mouseCaps = s_wmv.mouseCaps;
    if ( v3 != (Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice _,Windows::Devices::Input::MouseEventArgs _> *)s_wmv.mouseCaps )
    {
      if ( v3 )
      {
        v3->__abi_AddRef(v3);
        mouseCaps = s_wmv.mouseCaps;
      }
      if ( mouseCaps )
        mouseCaps->__abi_Release(mouseCaps);
      mouseCaps = v4;
      s_wmv.mouseCaps = v4;
    }
    if ( v4 )
    {
      v4->__abi_Release(v4);
      mouseCaps = s_wmv.mouseCaps;
    }
    v6 = mouseCaps->__abi_get_MousePresent(mouseCaps, (int *)&v13);
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    s_wmv.mouseActive = (_DWORD)v13 != 0;
    s_wmv.mouseInitialized = 1;
    s_wmv.mouseIgnored = 0;
    s_wmv.mouseEventRegistered = 0;
    v13 = (Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice _,Windows::Devices::Input::MouseEventArgs _> *)Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
    Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice __gc *,Windows::Devices::Input::MouseEventArgs __gc *>::TypedEventHandler<Windows::Devices::Input::MouseDevice __gc *,Windows::Devices::Input::MouseEventArgs __gc *>(v13, IN_OnMouseMovedEvent, (Platform::CallbackContext)2, 0);
    v8 = v7;
    v13 = v7;
    mouseMovedhandler = s_wmv.mouseMovedhandler;
    if ( v7 != s_wmv.mouseMovedhandler )
    {
      if ( v7 )
      {
        v7->__abi_AddRef(v7);
        mouseMovedhandler = s_wmv.mouseMovedhandler;
      }
      if ( mouseMovedhandler )
        mouseMovedhandler->__abi_Release(mouseMovedhandler);
      s_wmv.mouseMovedhandler = v8;
    }
    if ( v8 )
      v8->__abi_Release(v8);
    v13 = (Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice _,Windows::Devices::Input::MouseEventArgs _> *)Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
    Windows::Foundation::TypedEventHandler<Windows::Devices::Input::MouseDevice __gc *,Windows::Devices::Input::MouseEventArgs __gc *>::TypedEventHandler<Windows::Devices::Input::MouseDevice __gc *,Windows::Devices::Input::MouseEventArgs __gc *>(v13, IN_OnMouseWheelMovedEvent, (Platform::CallbackContext)2, 0);
    v11 = v10;
    v13 = v10;
    mouseWheelMovedhandler = s_wmv.mouseWheelMovedhandler;
    if ( v10 != s_wmv.mouseWheelMovedhandler )
    {
      if ( v10 )
      {
        v10->__abi_AddRef(v10);
        mouseWheelMovedhandler = s_wmv.mouseWheelMovedhandler;
      }
      if ( mouseWheelMovedhandler )
        mouseWheelMovedhandler->__abi_Release(mouseWheelMovedhandler);
      s_wmv.mouseWheelMovedhandler = v11;
    }
    if ( v11 )
      v11->__abi_Release(v11);
    s_wmv.mouseMovedEventToken.__vftable = NULL;
    s_wmv.mouseWheelMovedEventToken.__vftable = NULL;
  }
  else
  {
    Com_Printf(16, "Mouse control not active.\n");
  }
}

/*
==============
IN_UpdateCursorVisual
==============
*/
__int64 IN_UpdateCursorVisual()
{
  int ActivationFactoryByPCWSTR; 
  __int64 result; 
  __int64 v2; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  int v6; 
  int v7; 
  int v8; 
  Platform::Guid v9; 
  __int64 v10; 
  void *v11; 
  __int64 v12; 
  __int64 v13; 

  v9.__vftable = (Platform::Object_vtbl *)0x41B13C2A4D239005i64;
  *(_QWORD *)&v9.__d = 0xB193CFB96B532290ui64;
  v11 = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.UI.Core.CoreWindow", &v9, &v11);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v10 = 0i64;
  result = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v11 + 48i64))(v11, &v10);
  if ( (int)result < 0 )
    __abi_WinRTraiseException(result);
  v2 = v10;
  v3 = v10;
  v13 = v10;
  if ( v10 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 8i64))(v10);
    v2 = v10;
  }
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16i64))(v2);
  v12 = 0i64;
  if ( v11 )
    result = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v11 + 16i64))(v11);
  v12 = 0i64;
  if ( v3 )
  {
    if ( (s_wmv.cursorVisiblityFlags & 1) != 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, Windows::UI::Core::CoreCursor *))(*(_QWORD *)v3 + 352i64))(v3, s_wmv.arrowCursor);
      if ( v4 < 0 )
        __abi_WinRTraiseException(v4);
    }
    else if ( (s_wmv.cursorVisiblityFlags & 2) != 0 )
    {
      v5 = *(_QWORD *)v3;
      if ( s_wmv.gameCursors[s_wmv.cursorType] )
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(v5 + 352))(v3);
        if ( v6 < 0 )
          __abi_WinRTraiseException(v6);
      }
      else
      {
        v7 = (*(__int64 (__fastcall **)(__int64, Windows::UI::Core::CoreCursor *))(v5 + 352))(v3, s_wmv.arrowCursor);
        if ( v7 < 0 )
          __abi_WinRTraiseException(v7);
      }
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 352i64))(v3, 0i64);
      if ( v8 < 0 )
        __abi_WinRTraiseException(v8);
    }
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16i64))(v3);
  }
  return result;
}

/*
==============
LOAD_CURSOR_FROM_CORETYPES
==============
*/
void LOAD_CURSOR_FROM_CORETYPES(const CursorType gameCursorType, const Windows::UI::Core::CoreCursorType coreCursorType)
{
  __int64 v3; 
  Windows::UI::Core::CoreCursor **v4; 
  Windows::UI::Core::CoreCursor *v5; 
  Windows::UI::Core::CoreCursor *v6; 
  Windows::UI::Core::CoreCursor *v7; 

  v3 = gameCursorType;
  if ( gameCursorType >= CURSOR_TYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mouse.cpp", 344, ASSERT_TYPE_ASSERT, "(gameCursorType < CURSOR_TYPE_COUNT)", (const char *)&queryFormat, "gameCursorType < CURSOR_TYPE_COUNT", -2i64) )
    __debugbreak();
  v4 = &s_wmv.gameCursors[v3];
  if ( *v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mouse.cpp", 345, ASSERT_TYPE_ASSERT, "(s_wmv.gameCursors[gameCursorType] == nullptr)", (const char *)&queryFormat, "s_wmv.gameCursors[gameCursorType] == nullptr") )
    __debugbreak();
  Windows::UI::Core::CoreCursor::CoreCursor(NULL, coreCursorType, 0);
  v6 = v5;
  v7 = *v4;
  if ( v5 != *v4 )
  {
    if ( v5 )
    {
      v5->__abi_AddRef(v5);
      v7 = *v4;
    }
    if ( v7 )
      v7->__abi_Release(v7);
    *v4 = v6;
  }
  if ( v6 )
    v6->__abi_Release(v6);
}

/*
==============
LOAD_CURSOR_FROM_RESOURCE
==============
*/
void LOAD_CURSOR_FROM_RESOURCE(const CursorType gameCursorType, const unsigned int resourceID)
{
  __int64 v3; 
  Windows::UI::Core::CoreCursor **v4; 
  Windows::UI::Core::CoreCursor *v5; 
  Windows::UI::Core::CoreCursor *v6; 
  Windows::UI::Core::CoreCursor *v7; 

  v3 = gameCursorType;
  if ( gameCursorType >= CURSOR_TYPE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mouse.cpp", 335, ASSERT_TYPE_ASSERT, "(gameCursorType < CURSOR_TYPE_COUNT)", (const char *)&queryFormat, "gameCursorType < CURSOR_TYPE_COUNT", -2i64) )
    __debugbreak();
  v4 = &s_wmv.gameCursors[v3];
  if ( *v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mouse.cpp", 336, ASSERT_TYPE_ASSERT, "(s_wmv.gameCursors[gameCursorType] == nullptr)", (const char *)&queryFormat, "s_wmv.gameCursors[gameCursorType] == nullptr") )
    __debugbreak();
  Windows::UI::Core::CoreCursor::CoreCursor(NULL, Custom, resourceID);
  v6 = v5;
  v7 = *v4;
  if ( v5 != *v4 )
  {
    if ( v5 )
    {
      v5->__abi_AddRef(v5);
      v7 = *v4;
    }
    if ( v7 )
      v7->__abi_Release(v7);
    *v4 = v6;
  }
  if ( v6 )
    v6->__abi_Release(v6);
}

