/*
==============
XB3_KeyboardUpdate
==============
*/

void XB3_KeyboardUpdate(void)
{
  ?XB3_KeyboardUpdate@@YAXXZ();
}

/*
==============
UI_KeyboardUpdate
==============
*/

void __fastcall UI_KeyboardUpdate(LocalClientNum_t localClientNum)
{
  ?UI_KeyboardUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
UI_ClanKeyboard_callback
==============
*/

void __fastcall UI_ClanKeyboard_callback(int localControllerIndex, bool changeConfirmed, const char *resultString)
{
  ?UI_ClanKeyboard_callback@@YAXH_NPEBD@Z(localControllerIndex, changeConfirmed, resultString);
}

/*
==============
UI_ShowKeyboard_Impl
==============
*/

void __fastcall UI_ShowKeyboard_Impl(int controllerIndex, const char *title, const char *defaultText, int maxlen, UI_KEYBOARD_TYPE type, bool openAsModal, bool useAutoAlign)
{
  ?UI_ShowKeyboard_Impl@@YAXHPEBD0HW4UI_KEYBOARD_TYPE@@_N2@Z(controllerIndex, title, defaultText, maxlen, type, openAsModal, useAutoAlign);
}

/*
==============
UI_ClanKeyboard_callback
==============
*/
void UI_ClanKeyboard_callback(int localControllerIndex, bool changeConfirmed, const char *resultString)
{
  char *v6; 

  if ( !changeConfirmed || (v6 = stripSpaces(resultString), CL_PlayerData_SanitizeClanName(v6), CL_PlayerData_ValidateActivisionClanNames(localControllerIndex, v6)) )
    Live_OnClanTagEnteredByUser(localControllerIndex, changeConfirmed, resultString);
  else
    Com_SetErrorMessage("PATCH_MENU/CLANTAG_NOTALLOWED");
}

/*
==============
UI_KeyboardUpdate
==============
*/
void UI_KeyboardUpdate(LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
UI_ShowKeyboard_Impl
==============
*/
void UI_ShowKeyboard_Impl(int controllerIndex, const char *title, const char *defaultText, int maxlen, UI_KEYBOARD_TYPE type)
{
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  HSTRING v11; 
  HSTRING v12; 
  int v13; 
  HSTRING v14; 
  HSTRING v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int ActivationFactoryByPCWSTR; 
  int v22; 
  __int64 v23; 
  __int64 v24; 
  unsigned int v25; 
  __int64 v26; 
  __int64 v27; 
  int v28; 
  HSTRING string; 
  HSTRING_HEADER hstringHeader; 
  __int64 v31[5]; 
  wchar_t __strArg[256]; 
  wchar_t WideCharStr[256]; 

  v31[1] = -2i64;
  MultiByteToWideChar(0xFDE9u, 0, title, -1, WideCharStr, 256);
  WideCharStr[255] = 0;
  if ( type == UI_KEYBOARD_TYPE_NUMBER_EMPTY )
  {
    MultiByteToWideChar(0xFDE9u, 0, (LPCCH)&queryFormat.fmt + 3, -1, __strArg, 256);
LABEL_8:
    v8 = 29;
    goto LABEL_9;
  }
  MultiByteToWideChar(0xFDE9u, 0, defaultText, -1, __strArg, 256);
  __strArg[255] = 0;
  v8 = 0;
  switch ( type )
  {
    case UI_KEYBOARD_TYPE_EMAIL:
      v8 = 5;
      break;
    case UI_KEYBOARD_TYPE_PASSWORD:
      v8 = 31;
      break;
    case UI_KEYBOARD_TYPE_NUMBER:
      goto LABEL_8;
  }
LABEL_9:
  if ( maxlen >= 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_keyboard_xb3.cpp", 84, ASSERT_TYPE_ASSERT, "(maxlen < 256)", (const char *)&queryFormat, "maxlen < MAX_XB3_KEYBOARD_STRING") )
    __debugbreak();
  s_xb3KeyboardStore.controllerIndex = controllerIndex;
  *(_WORD *)&s_xb3KeyboardStore.isComplete = 0;
  s_xb3KeyboardStore.wasCanceled = 0;
  memset_0(&s_xb3KeyboardStore, 0, 0x100ui64);
  Windows::Xbox::UI::KeyboardOptions::KeyboardOptions(NULL);
  v10 = v9;
  v31[2] = v9;
  string = NULL;
  Platform::String::String(NULL, __strArg);
  v12 = v11;
  v13 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v10 + 56i64))(v10, v11);
  if ( v13 < 0 )
    __abi_WinRTraiseException(v13);
  WindowsDeleteString_0(v12);
  Platform::String::String(NULL, WideCharStr);
  v15 = v14;
  v16 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v10 + 72i64))(v10, v14);
  if ( v16 < 0 )
    __abi_WinRTraiseException(v16);
  WindowsDeleteString_0(v15);
  v17 = WindowsCreateStringReference_0(&LocaleName, 0, &hstringHeader, &string);
  if ( v17 < 0 )
    __abi_WinRTraiseException(v17);
  v18 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v10 + 88i64))(v10, string);
  if ( v18 < 0 )
    __abi_WinRTraiseException(v18);
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 152i64))(v10, v8);
  if ( v19 < 0 )
    __abi_WinRTraiseException(v19);
  v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 104i64))(v10, (unsigned int)maxlen);
  if ( v20 < 0 )
    __abi_WinRTraiseException(v20);
  hstringHeader.Reserved.Reserved1 = (void *)0x44D89DF001F75706i64;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = 0x4AA705DA30A97C83i64;
  string = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.UI.SystemUI", (Platform::Guid *)&hstringHeader, (void **)&string);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v31[0] = 0i64;
  v22 = (*(__int64 (__fastcall **)(HSTRING, __int64, __int64 *))(*(_QWORD *)string + 48i64))(string, v10, v31);
  if ( v22 < 0 )
    __abi_WinRTraiseException(v22);
  v23 = v31[0];
  v24 = v31[0];
  if ( v31[0] )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31[0] + 8i64))(v31[0]);
    v23 = v31[0];
  }
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16i64))(v23);
  if ( string )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 16i64))(string);
  v31[3] = v24;
  v25 = (unsigned int)Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
  Windows::Foundation::AsyncOperationCompletedHandler_Platform::String___::AsyncOperationCompletedHandler_Platform::String_____lambda_2aedc0b2fd20ae6733201255f147c300___((UI_ShowKeyboard_Impl::__l2::<lambda_2aedc0b2fd20ae6733201255f147c300>)v25, (Platform::CallbackContext)maxlen, 2);
  v27 = v26;
  v28 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 48i64))(v24, v26);
  if ( v28 < 0 )
    __abi_WinRTraiseException(v28);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16i64))(v27);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16i64))(v24);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
}

/*
==============
XB3_KeyboardUpdate
==============
*/
void XB3_KeyboardUpdate(void)
{
  LocalClientNum_t ClientFromController; 
  xb3_keyboard_store *v1; 

  if ( s_xb3KeyboardStore.isComplete )
  {
    ClientFromController = CL_Mgr_GetClientFromController(s_xb3KeyboardStore.controllerIndex);
    if ( s_xb3KeyboardStore.wasCanceled )
    {
      UI_CallKeyboardCallbackCancelled(ClientFromController);
    }
    else
    {
      v1 = &s_xb3KeyboardStore;
      if ( s_xb3KeyboardStore.wasError )
        v1 = NULL;
      UI_CallKeyboardCallback(ClientFromController, v1->str);
    }
    *(_WORD *)&s_xb3KeyboardStore.isComplete = 0;
    s_xb3KeyboardStore.wasCanceled = 0;
  }
}

