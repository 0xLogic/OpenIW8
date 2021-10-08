/*
==============
IN_DevchatpadCharacterReceivedEvent
==============
*/

bool __fastcall IN_DevchatpadCharacterReceivedEvent(int sysMsgTime, unsigned int keyCode, const KeyStatus *keyStatus)
{
  return ?IN_DevchatpadCharacterReceivedEvent@@YA_NHIAEBUKeyStatus@@@Z(sysMsgTime, keyCode, keyStatus);
}

/*
==============
IN_GetLocalizedKeyName
==============
*/

const char *__fastcall IN_GetLocalizedKeyName(const int controllerIndex, const int keynum, const char *keynameLocRef)
{
  return ?IN_GetLocalizedKeyName@@YAPEBDHHPEBD@Z(controllerIndex, keynum, keynameLocRef);
}

/*
==============
IN_KeyDownEvent
==============
*/

unsigned __int8 __fastcall IN_KeyDownEvent(int sysMsgTime, unsigned int virtualKey, const KeyStatus *keyStatus)
{
  return ?IN_KeyDownEvent@@YAEHIAEBUKeyStatus@@@Z(sysMsgTime, virtualKey, keyStatus);
}

/*
==============
IN_CharacterReceivedEvent
==============
*/

void __fastcall IN_CharacterReceivedEvent(int sysMsgTime, int characterCode)
{
  ?IN_CharacterReceivedEvent@@YAXHH@Z(sysMsgTime, characterCode);
}

/*
==============
IN_KeyUpEvent
==============
*/

unsigned __int8 __fastcall IN_KeyUpEvent(int sysMsgTime, unsigned int virtualKey, const KeyStatus *keyStatus)
{
  return ?IN_KeyUpEvent@@YAEHIAEBUKeyStatus@@@Z(sysMsgTime, virtualKey, keyStatus);
}

/*
==============
IN_IsKeyboardConnected
==============
*/

bool __fastcall IN_IsKeyboardConnected(const int controllerIndex)
{
  return ?IN_IsKeyboardConnected@@YA_NH@Z(controllerIndex);
}

/*
==============
IN_StartupKeyboard
==============
*/

void IN_StartupKeyboard(void)
{
  ?IN_StartupKeyboard@@YAXXZ();
}

/*
==============
IN_CharacterReceivedEvent
==============
*/
void IN_CharacterReceivedEvent(int sysMsgTime, int characterCode)
{
  int KeyboardController; 

  if ( s_devchatpadShortcutCaptured )
  {
    s_devchatpadShortcutCaptured = 0;
  }
  else
  {
    KeyboardController = Xb3_Input_GetKeyboardController();
    if ( CL_Mgr_IsControllerMappedToClient(KeyboardController, NULL) )
      Sys_QueEvent(sysMsgTime, SE_CHAR, characterCode, KeyboardController, 0, 0, NULL);
  }
}

/*
==============
IN_DevchatpadCharacterReceivedEvent
==============
*/
bool IN_DevchatpadCharacterReceivedEvent(int sysMsgTime, unsigned int keyCode, const KeyStatus *keyStatus)
{
  bool result; 

  result = IN_DevchatpadHandleShortcutKeycodes(sysMsgTime, keyCode, keyStatus);
  s_devchatpadShortcutCaptured = result;
  return result;
}

/*
==============
IN_DevchatpadHandleShortcutKeycodes
==============
*/
bool IN_DevchatpadHandleShortcutKeycodes(int sysMsgTime, unsigned int keyCode, const KeyStatus *keyStatus)
{
  int portIndex; 
  bool result; 
  int NthController_Safe; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 

  if ( !in_devchatpad_shortcuts || !in_devchatpad_shortcuts->current.enabled || keyStatus->scanCode != 56 || keyCode >= 0xFFFF )
    return 0;
  switch ( keyCode )
  {
    case 0xA1u:
      NthController_Safe = CL_Mgr_GetNthController_Safe(CLIENT_MANAGER_CONTROLLER_FIRST_ACTIVE);
      Sys_QueEvent(sysMsgTime, SE_KEY, 96, 1, NthController_Safe, 0, NULL);
      Sys_QueEvent(sysMsgTime, SE_KEY, 96, 0, NthController_Safe, 0, NULL);
      Sys_QueEvent(sysMsgTime, SE_CHAR, 96, 0, NthController_Safe, 0, NULL);
      result = 1;
      break;
    case 0xBFu:
      portIndex = CL_Mgr_GetNthController_Safe(CLIENT_MANAGER_CONTROLLER_FIRST_ACTIVE);
      Sys_QueEvent(sysMsgTime, SE_KEY, 140, 1, portIndex, 0, NULL);
      Sys_QueEvent(sysMsgTime, SE_KEY, 96, 1, portIndex, 0, NULL);
      Sys_QueEvent(sysMsgTime, SE_KEY, 96, 0, portIndex, 0, NULL);
      Sys_QueEvent(sysMsgTime, SE_CHAR, 96, 0, portIndex, 0, NULL);
      Sys_QueEvent(sysMsgTime, SE_KEY, 140, 0, portIndex, 0, NULL);
      Com_Printf_NoFilter("XBox One Messenger Kit Chatpad Help:\nORANGE+. (upside down questionmark) - This help (and toggle console output window)\nORANGE+Q - Toggle console\nORANGE+A - Toggle console output window\nORANGE+W - Up\nORANGE+S - Down\nORANGE+E - PageUp\nORANGE+D - PageDown\nORANGE+Z - Tab\n\n");
      result = 1;
      break;
    case 0xDFu:
      v9 = CL_Mgr_GetNthController_Safe(CLIENT_MANAGER_CONTROLLER_FIRST_ACTIVE);
      Sys_QueEvent(sysMsgTime, SE_KEY, 133, 1, v9, 0, NULL);
      Sys_QueEvent(sysMsgTime, SE_KEY, 133, 0, v9, 0, NULL);
      result = 1;
      break;
    case 0xE1u:
      v7 = CL_Mgr_GetNthController_Safe(CLIENT_MANAGER_CONTROLLER_FIRST_ACTIVE);
      Sys_QueEvent(sysMsgTime, SE_KEY, 140, 1, v7, 0, NULL);
      Sys_QueEvent(sysMsgTime, SE_KEY, 96, 1, v7, 0, NULL);
      Sys_QueEvent(sysMsgTime, SE_KEY, 96, 0, v7, 0, NULL);
      Sys_QueEvent(sysMsgTime, SE_CHAR, 126, 0, v7, 0, NULL);
      Sys_QueEvent(sysMsgTime, SE_KEY, 140, 0, v7, 0, NULL);
      result = 1;
      break;
    case 0xE5u:
      v8 = CL_Mgr_GetNthController_Safe(CLIENT_MANAGER_CONTROLLER_FIRST_ACTIVE);
      Sys_QueEvent(sysMsgTime, SE_KEY, 132, 1, v8, 0, NULL);
      Sys_QueEvent(sysMsgTime, SE_KEY, 132, 0, v8, 0, NULL);
      result = 1;
      break;
    case 0xE6u:
      v12 = CL_Mgr_GetNthController_Safe(CLIENT_MANAGER_CONTROLLER_FIRST_ACTIVE);
      Sys_QueEvent(sysMsgTime, SE_KEY, 9, 1, v12, 0, NULL);
      Sys_QueEvent(sysMsgTime, SE_KEY, 9, 0, v12, 0, NULL);
      result = 1;
      break;
    case 0xE9u:
      v10 = CL_Mgr_GetNthController_Safe(CLIENT_MANAGER_CONTROLLER_FIRST_ACTIVE);
      Sys_QueEvent(sysMsgTime, SE_KEY, 151, 1, v10, 0, NULL);
      Sys_QueEvent(sysMsgTime, SE_KEY, 151, 0, v10, 0, NULL);
      result = 1;
      break;
    case 0xF0u:
      v11 = CL_Mgr_GetNthController_Safe(CLIENT_MANAGER_CONTROLLER_FIRST_ACTIVE);
      Sys_QueEvent(sysMsgTime, SE_KEY, 150, 1, v11, 0, NULL);
      Sys_QueEvent(sysMsgTime, SE_KEY, 150, 0, v11, 0, NULL);
      result = 1;
      break;
    default:
      return 0;
  }
  return result;
}

/*
==============
IN_GetLocalizedKeyName
==============
*/
const char *IN_GetLocalizedKeyName(const int controllerIndex, const int keynum, const char *keynameLocRef)
{
  const char *v3; 
  __int64 v4; 
  unsigned int v5; 
  const char *result; 

  if ( Xb3_Keyboard_IsLayoutDependentKey(keynum) )
  {
    if ( !s_xb3KeyboardLayoutUnknown )
      return Xb3_Keyboard_GetLayoutDependentKeyName(v4);
    v5 = s_xb3KeynumToVirtualKey[v4];
    if ( v5 - 65 > 0x19 )
    {
      switch ( v5 )
      {
        case 0xBBu:
          return "+";
        case 0xBCu:
          return ",";
        case 0xBDu:
          return "-";
        case 0xBEu:
          return ".";
      }
    }
    else
    {
      result = j_va("%c", (unsigned int)(char)v5);
      if ( result )
        return result;
    }
    switch ( v5 )
    {
      case 0xBAu:
        result = ";";
        break;
      case 0xBFu:
        result = "/";
        break;
      case 0xC0u:
        result = "`";
        break;
      case 0xDBu:
        result = "[";
        break;
      case 0xDCu:
        result = "\\";
        break;
      case 0xDDu:
        result = "]";
        break;
      case 0xDEu:
        result = "'";
        break;
      case 0xDFu:
        result = "!";
        break;
      case 0xE2u:
        result = "<";
        break;
      default:
        result = NULL;
        break;
    }
  }
  else
  {
    if ( !v3 )
      return 0i64;
    result = SEH_StringEd_GetString(v3);
    if ( !result )
      return 0i64;
  }
  return result;
}

/*
==============
IN_IsKeyboardConnected
==============
*/
bool IN_IsKeyboardConnected(const int controllerIndex)
{
  int v2; 
  int v3; 

  if ( controllerIndex != Xb3_Input_GetKeyboardController() )
    return 0;
  if ( s_kbv.kbConnectedLastFrameNumber == com_frameNumber )
    return s_kbv.kbConnected;
  v2 = s_kbv.kbCaps->__abi_get_KeyboardPresent(s_kbv.kbCaps, &v3);
  if ( v2 < 0 )
    __abi_WinRTraiseException(v2);
  s_kbv.kbConnectedLastFrameNumber = com_frameNumber;
  s_kbv.kbConnected = v3 != 0;
  return v3 != 0;
}

/*
==============
IN_KeyDownEvent
==============
*/
__int64 IN_KeyDownEvent(int sysMsgTime, unsigned int virtualKey, const KeyStatus *keyStatus)
{
  unsigned __int8 v5; 
  int portIndex; 
  const char *KnownKeyNameFromVirtualKey; 
  const char *LayoutDependentKeyName; 
  signed __int64 v9; 
  int v10; 
  int v11; 
  char v12; 
  __int16 v13; 

  v5 = MapKey((Windows::System::VirtualKey)virtualKey, keyStatus);
  if ( !v5 )
    return 0i64;
  portIndex = Xb3_Input_GetKeyboardController();
  if ( !CL_Mgr_IsControllerMappedToClient(portIndex, NULL) )
    return v5;
  if ( !s_xb3KeyboardForcedNation && Xb3_Keyboard_IsLayoutDependentKey(v5) )
  {
    KnownKeyNameFromVirtualKey = Xb3_Keyboard_GetKnownKeyNameFromVirtualKey(virtualKey);
    if ( KnownKeyNameFromVirtualKey )
    {
      LayoutDependentKeyName = Xb3_Keyboard_GetLayoutDependentKeyName(v5);
      if ( LayoutDependentKeyName )
      {
        v9 = LayoutDependentKeyName - KnownKeyNameFromVirtualKey;
        do
        {
          v10 = (unsigned __int8)KnownKeyNameFromVirtualKey[v9];
          v11 = *(unsigned __int8 *)KnownKeyNameFromVirtualKey - v10;
          if ( v11 )
            break;
          ++KnownKeyNameFromVirtualKey;
        }
        while ( v10 );
        v12 = s_xb3KeyboardLayoutUnknown;
        if ( v11 )
          v12 = 1;
        s_xb3KeyboardLayoutUnknown = v12;
      }
    }
    s_xb3KeynumToVirtualKey[v5] = virtualKey;
  }
  v13 = truncate_cast<short,unsigned int>(virtualKey);
  Sys_QueEvent(sysMsgTime, SE_KEY, v5, (v13 << 16) | 1, portIndex, 0, NULL);
  return v5;
}

/*
==============
IN_KeyUpEvent
==============
*/
__int64 IN_KeyUpEvent(int sysMsgTime, unsigned int virtualKey, const KeyStatus *keyStatus)
{
  unsigned __int8 v5; 
  int portIndex; 
  __int16 v7; 

  v5 = MapKey((Windows::System::VirtualKey)virtualKey, keyStatus);
  if ( !v5 )
    return 0i64;
  portIndex = Xb3_Input_GetKeyboardController();
  if ( CL_Mgr_IsControllerMappedToClient(portIndex, NULL) )
  {
    v7 = truncate_cast<short,unsigned int>(virtualKey);
    Sys_QueEvent(sysMsgTime, SE_KEY, v5, v7 << 16, portIndex, 0, NULL);
  }
  return v5;
}

/*
==============
IN_StartupKeyboard
==============
*/
void IN_StartupKeyboard(void)
{
  Windows::Devices::Input::KeyboardCapabilities *v0; 
  Windows::Devices::Input::KeyboardCapabilities *v1; 
  Windows::Devices::Input::KeyboardCapabilities *kbCaps; 
  int v3; 
  Windows::Devices::Input::KeyboardCapabilities *v4; 

  Dvar_BeginPermanentRegistration();
  in_devchatpad_shortcuts = Dvar_RegisterBool("NONPNQOTKL", 1, 2u, "Support legacy chatpad keyboard shortcuts for the console");
  v4 = NULL;
  Windows::Devices::Input::KeyboardCapabilities::KeyboardCapabilities(NULL);
  v1 = v0;
  v4 = v0;
  kbCaps = s_kbv.kbCaps;
  if ( v0 != s_kbv.kbCaps )
  {
    if ( v0 )
    {
      v0->__abi_AddRef(v0);
      kbCaps = s_kbv.kbCaps;
    }
    if ( kbCaps )
      kbCaps->__abi_Release(kbCaps);
    kbCaps = v1;
    s_kbv.kbCaps = v1;
  }
  if ( v1 )
  {
    v1->__abi_Release(v1);
    kbCaps = s_kbv.kbCaps;
  }
  v3 = kbCaps->__abi_get_KeyboardPresent(kbCaps, (int *)&v4);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  s_kbv.kbConnected = (_DWORD)v4 != 0;
  s_kbv.kbConnectedLastFrameNumber = 0;
  Dvar_EndPermanentRegistration();
}

/*
==============
MapKey
==============
*/
__int64 MapKey(Windows::System::VirtualKey virtualKey, const KeyStatus *keyStatus)
{
  keyNum_t v2; 
  __int64 result; 
  unsigned __int32 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  v2 = s_scanCodeToKey[keyStatus->scanCode][(unsigned __int8)keyStatus->isExtendedKey];
  if ( (clientUIActives[0].keyCatchers & 1) == 0 )
    return (unsigned __int8)v2;
  if ( (unsigned int)(virtualKey - 96) > 9 )
  {
    result = (unsigned __int8)v2;
    if ( virtualKey == 110 )
      return 46i64;
  }
  else
  {
    v4 = virtualKey - 48;
    if ( (unsigned int)(virtualKey - 48) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)(virtualKey - 48), "unsigned", v4) )
      __debugbreak();
    if ( (unsigned __int8)(v4 - 48) > 9u )
    {
      LODWORD(v7) = 57;
      LODWORD(v6) = 48;
      LODWORD(v5) = (unsigned __int8)v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_keyboard.cpp", 198, ASSERT_TYPE_ASSERT, "( K_0 ) <= ( keyNum ) && ( keyNum ) <= ( K_9 )", "keyNum not in [K_0, K_9]\n\t%i not in [%i, %i]", v5, v6, v7) )
        __debugbreak();
    }
    return (unsigned __int8)v4;
  }
  return result;
}

/*
==============
Xb3_Keyboard_GetKnownKeyNameFromVirtualKey
==============
*/
const char *Xb3_Keyboard_GetKnownKeyNameFromVirtualKey(const unsigned int virtualKey)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v4; 

  if ( virtualKey - 65 <= 0x19 )
    return j_va("%c", (unsigned int)(char)virtualKey);
  v2 = virtualKey - 187;
  if ( !v2 )
    return "+";
  v3 = v2 - 1;
  if ( !v3 )
    return ",";
  v4 = v3 - 1;
  if ( !v4 )
    return "-";
  if ( v4 == 1 )
    return ".";
  return 0i64;
}

/*
==============
Xb3_Keyboard_GetLayoutDependentKeyName
==============
*/
const char *Xb3_Keyboard_GetLayoutDependentKeyName(const int keyNum)
{
  GEOID UserGeoID; 
  const char *result; 

  UserGeoID = s_xb3KeyboardForcedNation;
  if ( !s_xb3KeyboardForcedNation )
    UserGeoID = GetUserGeoID(s_xb3KeyboardForcedNation + 16);
  switch ( UserGeoID )
  {
    case 11:
    case 46:
    case 51:
    case 166:
      switch ( keyNum )
      {
        case '\'':
          result = "{";
          break;
        case '-':
          return "'";
        case '/':
          goto $LN221;
        case ';':
          goto $LN187;
        case '=':
          result = aA_26;
          break;
        case '[':
          goto $LN188;
        case '\\':
          result = "}";
          break;
        case ']':
          goto $LN222;
        case '`':
          goto $LN162;
        default:
          goto LABEL_78;
      }
      break;
    case 14:
    case 94:
      switch ( keyNum )
      {
        case '\'':
          goto $LN135_1;
        case '-':
          result = "ß";
          break;
        case '/':
          goto $LN221;
        case ';':
          goto $LN217_0;
        case '=':
          goto $LN188;
        case '[':
          goto $LN213_0;
        case '\\':
          goto $LN242_0;
        case ']':
          goto $LN222;
        case '`':
          return aA_18;
        case 'y':
          return "Z";
        case 'z':
          return "Y";
        default:
          goto LABEL_78;
      }
      break;
    case 21:
      switch ( keyNum )
      {
        case '\'':
          goto $LN150_1;
        case ',':
          goto $LN235;
        case '-':
          goto $LN93_6;
        case '.':
          goto $LN157_2;
        case '/':
          goto $LN222;
        case ';':
          goto $LN233_0;
        case '=':
          goto $LN221;
        case '[':
          return aA_18;
        case '\\':
          result = "µ";
          break;
        case ']':
          return "$";
        case '`':
          goto $LN92_2;
        case 'a':
          goto $LN223;
        case 'm':
          goto $LN234;
        case 'q':
          goto $LN228;
        case 'w':
          return "Z";
        case 'z':
          goto $LN224_1;
        default:
          goto LABEL_78;
      }
      break;
    case 32:
      switch ( keyNum )
      {
        case '\'':
          goto $LN179_0;
        case '/':
$LN229_0:
          result = ";";
          break;
        case ';':
          goto $LN218_0;
        case '<':
          goto $LN231;
        case '[':
          goto $LN188;
        case '\\':
          goto $LN227;
        case ']':
          goto $LN226;
        case '_':
          goto $LN236_0;
        case '`':
          return "'";
        default:
          goto LABEL_78;
      }
      break;
    case 39:
      if ( g_defaultLanguage != 2 )
        goto LABEL_78;
      switch ( keyNum )
      {
        case '\'':
          goto $LN220_1;
        case '/':
          result = aA_6;
          break;
        case '<':
          goto $LN174_1;
        case '[':
          return aA_18;
        case '\\':
$LN237:
          result = "<";
          break;
        case ']':
          result = aA_3;
          break;
        case '`':
          goto $LN242_0;
        default:
          goto LABEL_78;
      }
      break;
    case 61:
      switch ( keyNum )
      {
        case '\'':
          goto $LN167;
        case '-':
          goto $LN222;
        case '/':
          goto $LN221;
        case ';':
          goto $LN168_0;
        case '=':
          goto $LN188;
        case '[':
          goto $LN165;
        case '\\':
          return "'";
        case ']':
          return aA_31;
        case '`':
          result = aA_25;
          break;
        default:
          goto LABEL_78;
      }
      break;
    case 68:
    case 242:
      switch ( keyNum )
      {
        case '/':
$LN236_0:
          result = "/";
          break;
        case '<':
$LN231:
          result = "\\";
          break;
        case '\\':
$LN242_0:
          result = "#";
          break;
        default:
          goto LABEL_78;
      }
      break;
    case 77:
    case 221:
      switch ( keyNum )
      {
        case '\'':
$LN135_1:
          result = aA_24;
          break;
        case '-':
          goto $LN222;
        case '/':
          goto $LN221;
        case ';':
          goto $LN217_0;
        case '=':
          goto $LN188;
        case '[':
          goto $LN165;
        case '\\':
          return "'";
        case ']':
          return aA_31;
        case '`':
          return aA_19;
        default:
          goto LABEL_78;
      }
      break;
    case 84:
      switch ( keyNum )
      {
        case '\'':
          goto $LN150_1;
        case ',':
          goto $LN235;
        case '-':
$LN93_6:
          result = ")";
          break;
        case '.':
          goto $LN157_2;
        case '/':
          result = "!";
          break;
        case ';':
$LN233_0:
          result = "M";
          break;
        case '=':
          goto $LN222;
        case '[':
          return aA_18;
        case '\\':
          goto $LN210_0;
        case ']':
          return "$";
        case '`':
$LN92_2:
          result = aA_8;
          break;
        case 'a':
$LN223:
          result = "Q";
          break;
        case 'm':
          goto $LN234;
        case 'q':
$LN228:
          result = "A";
          break;
        case 'w':
          return "Z";
        case 'z':
$LN224_1:
          result = "W";
          break;
        default:
          goto LABEL_78;
      }
      break;
    case 118:
      switch ( keyNum )
      {
        case '\'':
          goto $LN204;
        case '-':
          return "'";
        case '/':
          goto $LN221;
        case ';':
          result = aA_33;
          break;
        case '=':
          result = aA_34;
          break;
        case '[':
          goto $LN241;
        case '\\':
$LN150_1:
          result = aA_30;
          break;
        case ']':
          goto $LN222;
        case '`':
          goto $LN231;
        default:
          goto LABEL_78;
      }
      break;
    case 122:
      switch ( keyNum )
      {
        case '\'':
$LN157_2:
          result = ":";
          break;
        case '=':
          return aA_18;
        case '[':
          result = "@";
          break;
        case '\\':
$LN227:
          result = "]";
          break;
        case ']':
$LN226:
          result = "[";
          break;
        case '_':
          goto $LN231;
        case '`':
          result = SEH_SafeTranslateString("KEY/ZEN_HAN");
          break;
        case '|':
          result = aA_32;
          break;
        default:
          goto LABEL_78;
      }
      break;
    case 177:
      switch ( keyNum )
      {
        case '\'':
$LN168_0:
          result = aA_29;
          break;
        case '-':
          goto $LN222;
        case '/':
          goto $LN221;
        case ';':
$LN167:
          result = aA_15;
          break;
        case '=':
          goto $LN231;
        case '[':
$LN165:
          result = aA_27;
          break;
        case '\\':
          return "'";
        case ']':
          return aA_31;
        case '`':
$LN162:
          result = "|";
          break;
        default:
          goto LABEL_78;
      }
      break;
    case 193:
      switch ( keyNum )
      {
        case '\'':
          goto $LN182;
        case '-':
          return "'";
        case '/':
          goto $LN221;
        case ';':
          goto $LN218_0;
        case '=':
$LN174_1:
          result = aA_0;
          break;
        case '[':
          goto $LN222;
        case '\\':
$LN179_0:
          result = "~";
          break;
        case ']':
          goto $LN188;
        case '`':
          goto $LN231;
        default:
          goto LABEL_78;
      }
      break;
    case 217:
      switch ( keyNum )
      {
        case '\'':
$LN188:
          result = aA_35;
          break;
        case '-':
          return "'";
        case '/':
          goto $LN221;
        case ';':
$LN187:
          result = aA_11;
          break;
        case '=':
          result = aA_28;
          break;
        case '[':
$LN220_1:
          result = "`";
          break;
        case '\\':
          goto $LN218_0;
        case ']':
$LN222:
          result = "+";
          break;
        case '`':
$LN182:
          result = "º";
          break;
        default:
          goto LABEL_78;
      }
      break;
    case 223:
      switch ( keyNum )
      {
        case '-':
          return "'";
        case '/':
          goto $LN221;
        case '=':
          return aA_18;
        case '\\':
          return "$";
        case ']':
          return aA_31;
        case '`':
          return aA_19;
        case 'y':
          return "Z";
        case 'z':
          return "Y";
        default:
          if ( g_defaultLanguage == 2 )
          {
            switch ( keyNum )
            {
              case '\'':
$LN204:
                result = aA_16;
                break;
              case ';':
                result = "é";
                break;
              case '[':
$LN241:
                result = aA_13;
                break;
              default:
                goto LABEL_78;
            }
          }
          else
          {
            switch ( keyNum )
            {
              case '\'':
                result = aA_5;
                break;
              case ';':
                result = aA_20;
                break;
              case '[':
                result = aA_14;
                break;
              default:
                goto LABEL_78;
            }
          }
          break;
      }
      break;
    case 235:
      switch ( keyNum )
      {
        case '\'':
          result = "İ";
          break;
        case ',':
$LN217_0:
          result = "Ö";
          break;
        case '-':
$LN210_0:
          result = "*";
          break;
        case '.':
$LN218_0:
          result = aA_4;
          break;
        case '/':
$LN235:
          result = ".";
          break;
        case ';':
          result = "Ş";
          break;
        case '=':
$LN221:
          result = "-";
          break;
        case '[':
          result = "Ğ";
          break;
        case '\\':
$LN234:
          result = ",";
          break;
        case ']':
$LN213_0:
          result = "Ü";
          break;
        case '`':
          result = "\"";
          break;
        default:
          goto LABEL_78;
      }
      break;
    default:
LABEL_78:
      switch ( keyNum )
      {
        case '\'':
          return "'";
        case ',':
          goto $LN234;
        case '-':
          goto $LN221;
        case '.':
          goto $LN235;
        case '/':
          goto $LN236_0;
        case ';':
          goto $LN229_0;
        case '<':
          goto $LN237;
        case '=':
          goto $LN222;
        case '[':
          goto $LN226;
        case '\\':
          goto $LN231;
        case ']':
          goto $LN227;
        case '`':
          goto $LN220_1;
        case 'a':
          goto $LN228;
        case 'm':
          goto $LN233_0;
        case 'q':
          goto $LN223;
        case 'w':
          goto $LN224_1;
        case 'y':
          return "Y";
        case 'z':
          return "Z";
        default:
          result = NULL;
          break;
      }
      break;
  }
  return result;
}

/*
==============
Xb3_Keyboard_IsLayoutDependentKey
==============
*/
bool Xb3_Keyboard_IsLayoutDependentKey(const int keynum)
{
  bool result; 

  switch ( keynum )
  {
    case '\'':
    case ',':
    case '-':
    case '.':
    case '/':
    case ';':
    case '<':
    case '=':
    case '[':
    case '\\':
    case ']':
    case '_':
    case '`':
    case 'a':
    case 'm':
    case 'q':
    case 'w':
    case 'y':
    case 'z':
    case '|':
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

