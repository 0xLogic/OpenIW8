/*
==============
KeyCodes_IsMouseKey
==============
*/

bool __fastcall KeyCodes_IsMouseKey(keyNum_t key)
{
  return ?KeyCodes_IsMouseKey@@YA_NW4keyNum_t@@@Z(key);
}

/*
==============
Com_Keys_IsValidGamePadChar
==============
*/

bool __fastcall Com_Keys_IsValidGamePadChar(int key)
{
  return ?Com_Keys_IsValidGamePadChar@@YA_NH@Z(key);
}

/*
==============
KeyCodes_GetInputMethod
==============
*/

InputMethod __fastcall KeyCodes_GetInputMethod(keyNum_t key)
{
  return ?KeyCodes_GetInputMethod@@YA?AW4InputMethod@@W4keyNum_t@@@Z(key);
}

/*
==============
KeyCodes_IsVitaKey
==============
*/

bool __fastcall KeyCodes_IsVitaKey(keyNum_t key)
{
  return ?KeyCodes_IsVitaKey@@YA_NW4keyNum_t@@@Z(key);
}

/*
==============
KeyCodes_IsGamepadKey
==============
*/

bool __fastcall KeyCodes_IsGamepadKey(keyNum_t key)
{
  return ?KeyCodes_IsGamepadKey@@YA_NW4keyNum_t@@@Z(key);
}

/*
==============
KeyCodes_IsControllerKey
==============
*/

bool __fastcall KeyCodes_IsControllerKey(keyNum_t key)
{
  return ?KeyCodes_IsControllerKey@@YA_NW4keyNum_t@@@Z(key);
}

/*
==============
Com_Keys_IsValidGamePadChar
==============
*/
bool Com_Keys_IsValidGamePadChar(int key)
{
  int v1; 
  bool result; 

  result = 0;
  if ( (unsigned int)key <= 0x1F )
  {
    v1 = -201342850;
    if ( _bittest(&v1, key) )
      return 1;
  }
  return result;
}

/*
==============
KeyCodes_GetInputMethod
==============
*/
char KeyCodes_GetInputMethod(keyNum_t key)
{
  char result; 

  switch ( key )
  {
    case K_BUTTON_A:
    case K_BUTTON_B:
    case K_BUTTON_X:
    case K_BUTTON_Y:
    case K_BUTTON_LSHLDR:
    case K_BUTTON_RSHLDR:
    case K_BUTTON_START:
    case K_BUTTON_BACK:
    case K_BUTTON_LSTICK:
    case K_BUTTON_RSTICK:
    case K_BUTTON_LTRIG:
    case K_BUTTON_RTRIG:
    case K_DPAD_UP:
    case K_DPAD_DOWN:
    case K_DPAD_LEFT:
    case K_DPAD_RIGHT:
    case K_APAD1_UP:
    case K_APAD1_DOWN:
    case K_APAD1_LEFT:
    case K_APAD1_RIGHT:
    case K_APAD2_UP:
    case K_APAD2_DOWN:
    case K_APAD2_LEFT:
    case K_APAD2_RIGHT:
      result = 2;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}

/*
==============
KeyCodes_IsControllerKey
==============
*/
bool KeyCodes_IsControllerKey(keyNum_t key)
{
  bool result; 

  switch ( key )
  {
    case K_BUTTON_A:
    case K_BUTTON_B:
    case K_BUTTON_X:
    case K_BUTTON_Y:
    case K_BUTTON_LSHLDR:
    case K_BUTTON_RSHLDR:
    case K_BUTTON_START:
    case K_BUTTON_BACK:
    case K_BUTTON_LSTICK:
    case K_BUTTON_RSTICK:
    case K_BUTTON_LTRIG:
    case K_BUTTON_RTRIG:
    case K_DPAD_UP:
    case K_DPAD_DOWN:
    case K_DPAD_LEFT:
    case K_DPAD_RIGHT:
    case K_APAD1_UP:
    case K_APAD1_DOWN:
    case K_APAD1_LEFT:
    case K_APAD1_RIGHT:
    case K_APAD2_UP:
    case K_APAD2_DOWN:
    case K_APAD2_LEFT:
    case K_APAD2_RIGHT:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

/*
==============
KeyCodes_IsGamepadKey
==============
*/
bool KeyCodes_IsGamepadKey(keyNum_t key)
{
  bool result; 

  switch ( key )
  {
    case K_BUTTON_A:
    case K_BUTTON_B:
    case K_BUTTON_X:
    case K_BUTTON_Y:
    case K_BUTTON_LSHLDR:
    case K_BUTTON_RSHLDR:
    case K_BUTTON_START:
    case K_BUTTON_BACK:
    case K_BUTTON_LSTICK:
    case K_BUTTON_RSTICK:
    case K_BUTTON_LTRIG:
    case K_BUTTON_RTRIG:
    case K_DPAD_UP:
    case K_DPAD_DOWN:
    case K_DPAD_LEFT:
    case K_DPAD_RIGHT:
    case K_APAD1_UP:
    case K_APAD1_DOWN:
    case K_APAD1_LEFT:
    case K_APAD1_RIGHT:
    case K_APAD2_UP:
    case K_APAD2_DOWN:
    case K_APAD2_LEFT:
    case K_APAD2_RIGHT:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

/*
==============
KeyCodes_IsMouseKey
==============
*/
bool KeyCodes_IsMouseKey(keyNum_t key)
{
  return (unsigned __int8)(key + 69) <= 8u;
}

/*
==============
KeyCodes_IsVitaKey
==============
*/
bool KeyCodes_IsVitaKey(keyNum_t key)
{
  return 0;
}

