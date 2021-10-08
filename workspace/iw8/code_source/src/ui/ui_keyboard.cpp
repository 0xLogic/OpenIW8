/*
==============
UI_ShowKeyboard
==============
*/

void __fastcall UI_ShowKeyboard(int controllerIndex, const char *title, const char *defaultText, int maxlen, bool verifyString, bool checkProfanity, bool allowEmpty, UI_KEYBOARD_TYPE type, void (__fastcall *callback)(LocalClientNum_t, UI_KEYBOARD_RESULT, const char *), bool openAsModal, bool useAutoAlign)
{
  ?UI_ShowKeyboard@@YAXHPEBD0H_N11W4UI_KEYBOARD_TYPE@@P6AXW4LocalClientNum_t@@W4UI_KEYBOARD_RESULT@@0@Z11@Z(controllerIndex, title, defaultText, maxlen, verifyString, checkProfanity, allowEmpty, type, callback, openAsModal, useAutoAlign);
}

/*
==============
UI_CallKeyboardCallback
==============
*/

void __fastcall UI_CallKeyboardCallback(LocalClientNum_t localClientNum, char *resultString)
{
  ?UI_CallKeyboardCallback@@YAXW4LocalClientNum_t@@PEAD@Z(localClientNum, resultString);
}

/*
==============
UI_CallKeyboardCallbackCancelled
==============
*/

void __fastcall UI_CallKeyboardCallbackCancelled(LocalClientNum_t localClientNum)
{
  ?UI_CallKeyboardCallbackCancelled@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
UI_CallKeyboardCallback
==============
*/
void UI_CallKeyboardCallback(LocalClientNum_t localClientNum, char *resultString)
{
  UI_KEYBOARD_RESULT v2; 
  int ControllerFromClient; 
  char dest[256]; 

  v2 = UI_KEYBOARD_RESULT_OK;
  if ( !s_UIKeyboard.callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_keyboard.cpp", 91, ASSERT_TYPE_ASSERT, "(s_UIKeyboard.callback)", (const char *)&queryFormat, "s_UIKeyboard.callback") )
    __debugbreak();
  memset_0(dest, 0, sizeof(dest));
  if ( resultString )
  {
    Core_strcpy(dest, 0x100ui64, resultString);
    if ( s_UIKeyboard.allowEmpty || *resultString )
    {
      if ( !s_UIKeyboard.verifyString || UI_VerifyString(resultString, NULL) )
      {
        ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
        if ( s_UIKeyboard.checkProfanity && ProfanityFilter_IsBadWord(ControllerFromClient, resultString) )
          v2 = UI_KEYBOARD_RESULT_PROFANITY;
      }
      else
      {
        v2 = UI_KEYBOARD_RESULT_INVALID_STRING;
        Com_SetErrorMessage("MENU/INVALIDCHARS");
      }
    }
    else
    {
      v2 = UI_KEYBOARD_RESULT_INVALID_STRING;
      Com_SetErrorMessage("MENU/INVALID_EMPTY_STRING");
    }
  }
  s_UIKeyboard.callback(localClientNum, v2, dest);
  s_UIKeyboard.callback = NULL;
}

/*
==============
UI_CallKeyboardCallbackCancelled
==============
*/
void UI_CallKeyboardCallbackCancelled(LocalClientNum_t localClientNum)
{
  if ( !s_UIKeyboard.callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ui\\ui_keyboard.cpp", 126, ASSERT_TYPE_ASSERT, "(s_UIKeyboard.callback)", (const char *)&queryFormat, "s_UIKeyboard.callback") )
    __debugbreak();
  s_UIKeyboard.callback(localClientNum, UI_KEYBOARD_RESULT_CANCELLED, NULL);
  s_UIKeyboard.callback = NULL;
}

/*
==============
UI_ShowKeyboard
==============
*/
void UI_ShowKeyboard(int controllerIndex, const char *title, const char *defaultText, int maxlen, bool verifyString, bool checkProfanity, bool allowEmpty, UI_KEYBOARD_TYPE type, void (*callback)(LocalClientNum_t, UI_KEYBOARD_RESULT, const char *), bool openAsModal, bool useAutoAlign)
{
  s_UIKeyboard.callback = callback;
  s_UIKeyboard.verifyString = verifyString;
  s_UIKeyboard.checkProfanity = checkProfanity;
  s_UIKeyboard.allowEmpty = allowEmpty;
  UI_ShowKeyboard_Impl(controllerIndex, title, defaultText, maxlen, type, openAsModal, useAutoAlign);
}

