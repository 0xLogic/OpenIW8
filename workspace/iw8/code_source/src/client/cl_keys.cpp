/*
==============
CL_Keys_GetBindingCheat
==============
*/

const char *__fastcall CL_Keys_GetBindingCheat(LocalClientNum_t localClientNum, int keynum, InputContext inputContext)
{
  return ?CL_Keys_GetBindingCheat@@YAPEBDW4LocalClientNum_t@@HW4InputContext@@@Z(localClientNum, keynum, inputContext);
}

/*
==============
CL_Keys_GetDefaultKey
==============
*/

keyNum_t __fastcall CL_Keys_GetDefaultKey(LocalClientNum_t localClientNum, InputContext inputContext, Bind action, CL_KeyBindSlot slot, bool inherit)
{
  return ?CL_Keys_GetDefaultKey@@YA?AW4keyNum_t@@W4LocalClientNum_t@@W4InputContext@@W4Bind@@W4CL_KeyBindSlot@@_N@Z(localClientNum, inputContext, action, slot, inherit);
}

/*
==============
CL_Keys_GetBoundKey
==============
*/

keyNum_t __fastcall CL_Keys_GetBoundKey(LocalClientNum_t localClientNum, InputContext inputContext, Bind action, CL_KeyBindSlot slot, bool inherit)
{
  return ?CL_Keys_GetBoundKey@@YA?AW4keyNum_t@@W4LocalClientNum_t@@W4InputContext@@W4Bind@@W4CL_KeyBindSlot@@_N@Z(localClientNum, inputContext, action, slot, inherit);
}

/*
==============
CL_Keys_IsKBMKeyBound
==============
*/

bool __fastcall CL_Keys_IsKBMKeyBound(LocalClientNum_t localClientNum, const char *command, InputContext currentContext)
{
  return ?CL_Keys_IsKBMKeyBound@@YA_NW4LocalClientNum_t@@PEBDW4InputContext@@@Z(localClientNum, command, currentContext);
}

/*
==============
CL_Keys_WriteCheatBindings
==============
*/

void __fastcall CL_Keys_WriteCheatBindings(LocalClientNum_t localClientNum, fileHandle_t f)
{
  ?CL_Keys_WriteCheatBindings@@YAXW4LocalClientNum_t@@UfileHandle_t@@@Z(localClientNum, f);
}

/*
==============
CL_Keys_GetAlternateCommandAssignment
==============
*/

int __fastcall CL_Keys_GetAlternateCommandAssignment(LocalClientNum_t localClientNum, const char *command, int *twokeys)
{
  return ?CL_Keys_GetAlternateCommandAssignment@@YAHW4LocalClientNum_t@@PEBDQEAH@Z(localClientNum, command, twokeys);
}

/*
==============
CL_Keys_SetCatcher
==============
*/

void __fastcall CL_Keys_SetCatcher(LocalClientNum_t localClientNum, int catcher)
{
  ?CL_Keys_SetCatcher@@YAXW4LocalClientNum_t@@H@Z(localClientNum, catcher);
}

/*
==============
CL_Keys_DrawField
==============
*/

void __fastcall CL_Keys_DrawField(LocalClientNum_t localClientNum, field_t *edit, int x, int y, int horzAlign, int vertAlign)
{
  ?CL_Keys_DrawField@@YAXW4LocalClientNum_t@@PEAUfield_t@@HHHH@Z(localClientNum, edit, x, y, horzAlign, vertAlign);
}

/*
==============
CL_Keys_GetActiveInputContext
==============
*/

InputContext __fastcall CL_Keys_GetActiveInputContext(LocalClientNum_t localClientNum)
{
  return ?CL_Keys_GetActiveInputContext@@YA?AW4InputContext@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Keys_GetAlternateKeyBinding
==============
*/

int __fastcall CL_Keys_GetAlternateKeyBinding(LocalClientNum_t localClientNum, const char *command, char (*bindings)[128], InputContext inputContext)
{
  return ?CL_Keys_GetAlternateKeyBinding@@YAHW4LocalClientNum_t@@PEBDQEAY0IA@DW4InputContext@@@Z(localClientNum, command, bindings, inputContext);
}

/*
==============
CL_Keys_GetAllBindingsDLog
==============
*/

void __fastcall CL_Keys_GetAllBindingsDLog(LocalClientNum_t localClientNum, int *bindsList, int *groundVehBindsList, int *flyingVehBindsList, int *brBindsList)
{
  ?CL_Keys_GetAllBindingsDLog@@YAXW4LocalClientNum_t@@PEAH111@Z(localClientNum, bindsList, groundVehBindsList, flyingVehBindsList, brBindsList);
}

/*
==============
CL_Keys_Init
==============
*/

void CL_Keys_Init(void)
{
  ?CL_Keys_Init@@YAXXZ();
}

/*
==============
CL_Keys_IsCommandBound
==============
*/

int __fastcall CL_Keys_IsCommandBound(LocalClientNum_t localClientNum, const char *command)
{
  return ?CL_Keys_IsCommandBound@@YAHW4LocalClientNum_t@@PEBD@Z(localClientNum, command);
}

/*
==============
CL_Keys_AddBindingCommand
==============
*/

void __fastcall CL_Keys_AddBindingCommand(LocalClientNum_t localClientNum, const char *command, const KeyState *key)
{
  ?CL_Keys_AddBindingCommand@@YAXW4LocalClientNum_t@@PEBDPEBUKeyState@@@Z(localClientNum, command, key);
}

/*
==============
CL_Keys_SetBindingCheat
==============
*/

void __fastcall CL_Keys_SetBindingCheat(LocalClientNum_t localClientNum, int keynum, const char *bindingCheat)
{
  ?CL_Keys_SetBindingCheat@@YAXW4LocalClientNum_t@@HPEBD@Z(localClientNum, keynum, bindingCheat);
}

/*
==============
CL_Keys_ResetAllBindings
==============
*/

void __fastcall CL_Keys_ResetAllBindings(LocalClientNum_t localClientNum)
{
  ?CL_Keys_ResetAllBindings@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Keys_GetGamePadBinding
==============
*/

int __fastcall CL_Keys_GetGamePadBinding(LocalClientNum_t localClientNum, const char *command, char (*keyNames)[128], InputContext currentContext)
{
  return ?CL_Keys_GetGamePadBinding@@YAHW4LocalClientNum_t@@PEBDQEAY0IA@DW4InputContext@@@Z(localClientNum, command, keyNames, currentContext);
}

/*
==============
CL_Keys_CopyBind
==============
*/

void __fastcall CL_Keys_CopyBind(const int keynumFrom, const int keynumTo, const bool bothWayCopy)
{
  ?CL_Keys_CopyBind@@YAXHH_N@Z(keynumFrom, keynumTo, bothWayCopy);
}

/*
==============
CL_Keys_ClearStates
==============
*/

void __fastcall CL_Keys_ClearStates(LocalClientNum_t localClientNum)
{
  ?CL_Keys_ClearStates@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Keys_IsCatcherActive
==============
*/

bool __fastcall CL_Keys_IsCatcherActive(LocalClientNum_t localClientNum, int mask)
{
  return ?CL_Keys_IsCatcherActive@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, mask);
}

/*
==============
CL_Keys_GetCommandAssignment
==============
*/

int __fastcall CL_Keys_GetCommandAssignment(LocalClientNum_t localClientNum, const char *command, int *twokeys)
{
  return ?CL_Keys_GetCommandAssignment@@YAHW4LocalClientNum_t@@PEBDQEAH@Z(localClientNum, command, twokeys);
}

/*
==============
CL_Keys_IsKeyPressed
==============
*/

int __fastcall CL_Keys_IsKeyPressed(const LocalClientNum_t localClientNum, const char *keyName)
{
  return ?CL_Keys_IsKeyPressed@@YAHW4LocalClientNum_t@@PEBD@Z(localClientNum, keyName);
}

/*
==============
CL_Keys_StoreKeyBindingForContextDLog
==============
*/

void __fastcall CL_Keys_StoreKeyBindingForContextDLog(LocalClientNum_t localClientNum, int *bindsList, int keynum, InputContext inputContext)
{
  ?CL_Keys_StoreKeyBindingForContextDLog@@YAXW4LocalClientNum_t@@PEAHHW4InputContext@@@Z(localClientNum, bindsList, keynum, inputContext);
}

/*
==============
CL_Keys_GetKeyBinding
==============
*/

int __fastcall CL_Keys_GetKeyBinding(LocalClientNum_t localClientNum, const char *command, char (*keyNames)[128], InputContext currentContext)
{
  return ?CL_Keys_GetKeyBinding@@YAHW4LocalClientNum_t@@PEBDQEAY0IA@DW4InputContext@@@Z(localClientNum, command, keyNames, currentContext);
}

/*
==============
CL_Keys_UpdateActiveBindings
==============
*/

void __fastcall CL_Keys_UpdateActiveBindings(LocalClientNum_t localClientNum, InputContext newActiveContext)
{
  ?CL_Keys_UpdateActiveBindings@@YAXW4LocalClientNum_t@@W4InputContext@@@Z(localClientNum, newActiveContext);
}

/*
==============
CL_Keys_Shutdown
==============
*/

void CL_Keys_Shutdown(void)
{
  ?CL_Keys_Shutdown@@YAXXZ();
}

/*
==============
CL_Keys_SetOverstrikeMode
==============
*/

void __fastcall CL_Keys_SetOverstrikeMode(LocalClientNum_t localClientNum, int state)
{
  ?CL_Keys_SetOverstrikeMode@@YAXW4LocalClientNum_t@@H@Z(localClientNum, state);
}

/*
==============
CL_Keys_Event
==============
*/

void __fastcall CL_Keys_Event(LocalClientNum_t localClientNum, int key, bool down, unsigned int time, int virtualKey, int controllerIndex)
{
  ?CL_Keys_Event@@YAXW4LocalClientNum_t@@H_NIHH@Z(localClientNum, key, down, time, virtualKey, controllerIndex);
}

/*
==============
CL_Keys_IsGamepadKeyBound
==============
*/

bool __fastcall CL_Keys_IsGamepadKeyBound(LocalClientNum_t localClientNum, const char *command, InputContext currentContext)
{
  return ?CL_Keys_IsGamepadKeyBound@@YA_NW4LocalClientNum_t@@PEBDW4InputContext@@@Z(localClientNum, command, currentContext);
}

/*
==============
CL_Keys_ForceDefaultKeyBindingReload
==============
*/

void __fastcall CL_Keys_ForceDefaultKeyBindingReload(LocalClientNum_t localClientNum, const int controllerIndex)
{
  ?CL_Keys_ForceDefaultKeyBindingReload@@YAXW4LocalClientNum_t@@H@Z(localClientNum, controllerIndex);
}

/*
==============
CL_Keys_RemoveCatcher
==============
*/

void __fastcall CL_Keys_RemoveCatcher(LocalClientNum_t localClientNum, int andMask)
{
  ?CL_Keys_RemoveCatcher@@YAXW4LocalClientNum_t@@H@Z(localClientNum, andMask);
}

/*
==============
CL_Keys_AdjustScrollField
==============
*/

void __fastcall CL_Keys_AdjustScrollField(const ScreenPlacement *scrPlace, field_t *edit)
{
  ?CL_Keys_AdjustScrollField@@YAXPEBUScreenPlacement@@PEAUfield_t@@@Z(scrPlace, edit);
}

/*
==============
CL_Keys_GetKeyState
==============
*/

PlayerKeyState *__fastcall CL_Keys_GetKeyState(LocalClientNum_t localClientNum)
{
  return ?CL_Keys_GetKeyState@@YAPEAUPlayerKeyState@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Keys_UnbindGamepadButtons
==============
*/

void __fastcall CL_Keys_UnbindGamepadButtons(LocalClientNum_t localClientNum)
{
  ?CL_Keys_UnbindGamepadButtons@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Keys_GetOverstrikeMode
==============
*/

int __fastcall CL_Keys_GetOverstrikeMode(LocalClientNum_t localClientNum)
{
  return ?CL_Keys_GetOverstrikeMode@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Keys_LoadBindings
==============
*/

void __fastcall CL_Keys_LoadBindings(LocalClientNum_t localClientNum, int controllerIndex)
{
  ?CL_Keys_LoadBindings@@YAXW4LocalClientNum_t@@H@Z(localClientNum, controllerIndex);
}

/*
==============
CL_Keys_GetBinding
==============
*/

int __fastcall CL_Keys_GetBinding(LocalClientNum_t localClientNum, int keynum, InputContext inputContext)
{
  return ?CL_Keys_GetBinding@@YAHW4LocalClientNum_t@@HW4InputContext@@@Z(localClientNum, keynum, inputContext);
}

/*
==============
CL_Keys_SetBinding
==============
*/

void __fastcall CL_Keys_SetBinding(LocalClientNum_t localClientNum, int keynum, InputContext inputContext, int bindIndex)
{
  ?CL_Keys_SetBinding@@YAXW4LocalClientNum_t@@HW4InputContext@@H@Z(localClientNum, keynum, inputContext, bindIndex);
}

/*
==============
CL_Keys_IsAlternateKeyBound
==============
*/

bool __fastcall CL_Keys_IsAlternateKeyBound(LocalClientNum_t localClientNum, const char *command, InputContext inputContext)
{
  return ?CL_Keys_IsAlternateKeyBound@@YA_NW4LocalClientNum_t@@PEBDW4InputContext@@@Z(localClientNum, command, inputContext);
}

/*
==============
CL_Keys_ClearStatesExceptTriggers
==============
*/

void __fastcall CL_Keys_ClearStatesExceptTriggers(LocalClientNum_t localClientNum)
{
  ?CL_Keys_ClearStatesExceptTriggers@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Keys_IsActionBoundToKey
==============
*/

bool __fastcall CL_Keys_IsActionBoundToKey(const LocalClientNum_t localClientNum, const InputContext inputContext, const Bind action, const bool inherit)
{
  return ?CL_Keys_IsActionBoundToKey@@YA_NW4LocalClientNum_t@@W4InputContext@@W4Bind@@_N@Z(localClientNum, inputContext, action, inherit);
}

/*
==============
CL_Keys_BindKey
==============
*/

int __fastcall CL_Keys_BindKey(LocalClientNum_t localClientNum, InputContext inputContext, Bind action, CL_KeyBindSlot slot, keyNum_t key, CL_KeyBind (*unboundActions)[15])
{
  return ?CL_Keys_BindKey@@YAHW4LocalClientNum_t@@W4InputContext@@W4Bind@@W4CL_KeyBindSlot@@W4keyNum_t@@PEAY0P@UCL_KeyBind@@@Z(localClientNum, inputContext, action, slot, key, unboundActions);
}

/*
==============
CL_Keys_IsModifierKeyDown
==============
*/

int __fastcall CL_Keys_IsModifierKeyDown(LocalClientNum_t localClientNum, keyModifierNum_t keyModifierNum)
{
  return ?CL_Keys_IsModifierKeyDown@@YAHW4LocalClientNum_t@@W4keyModifierNum_t@@@Z(localClientNum, keyModifierNum);
}

/*
==============
CL_Keys_UpdateBindingsFile
==============
*/

void __fastcall CL_Keys_UpdateBindingsFile(LocalClientNum_t localClientNum)
{
  ?CL_Keys_UpdateBindingsFile@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Keys_GetActiveBinding
==============
*/

int __fastcall CL_Keys_GetActiveBinding(LocalClientNum_t localClientNum, int keynum)
{
  return ?CL_Keys_GetActiveBinding@@YAHW4LocalClientNum_t@@H@Z(localClientNum, keynum);
}

/*
==============
CL_Keys_AddCatcher
==============
*/

void __fastcall CL_Keys_AddCatcher(LocalClientNum_t localClientNum, int orMask)
{
  ?CL_Keys_AddCatcher@@YAXW4LocalClientNum_t@@H@Z(localClientNum, orMask);
}

/*
==============
CL_Keys_UpdateBindingsUI
==============
*/

void __fastcall CL_Keys_UpdateBindingsUI(LocalClientNum_t localClientNum)
{
  ?CL_Keys_UpdateBindingsUI@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Keys_DrawTextOverrideField
==============
*/

void __fastcall CL_Keys_DrawTextOverrideField(LocalClientNum_t localClientNum, const field_t *edit, int x, int y, int horzAlign, int vertAlign, const char *str, int drawLen, int cursorPos)
{
  ?CL_Keys_DrawTextOverrideField@@YAXW4LocalClientNum_t@@PEBUfield_t@@HHHHPEBDHH@Z(localClientNum, edit, x, y, horzAlign, vertAlign, str, drawLen, cursorPos);
}

/*
==============
CL_Keys_IsKeyDown
==============
*/

int __fastcall CL_Keys_IsKeyDown(LocalClientNum_t localClientNum, int keynum)
{
  return ?CL_Keys_IsKeyDown@@YAHW4LocalClientNum_t@@H@Z(localClientNum, keynum);
}

/*
==============
CL_Keys_CharEvent
==============
*/

void __fastcall CL_Keys_CharEvent(LocalClientNum_t localClientNum)
{
  ?CL_Keys_CharEvent@@YAXW4LocalClientNum_t@@_U@Z(localClientNum);
}

/*
==============
CL_Keys_AddBindingCommand
==============
*/
void CL_Keys_AddBindingCommand(LocalClientNum_t localClientNum, const char *command, const KeyState *key)
{
  __int64 v3; 
  CmdText *v6; 
  CmdText *v7; 

  v3 = localClientNum;
  if ( !command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 2144, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
    __debugbreak();
  if ( !key && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 2145, ASSERT_TYPE_ASSERT, "(key)", (const char *)&queryFormat, "key") )
    __debugbreak();
  v6 = s_cmd_superUser_textArray;
  if ( !key->isSuperUser )
    v6 = s_cmd_textArray;
  v7 = &v6[v3];
  Cbuf_AddText_Internal(command, v7);
  Cbuf_AddText_Internal("\n", v7);
}

/*
==============
CL_Keys_AddCatcher
==============
*/
void CL_Keys_AddCatcher(LocalClientNum_t localClientNum, int orMask)
{
  __int64 v2; 

  v2 = localClientNum;
  if ( orMask == 256 )
    Com_Printf(13, "RADIAL DEBUG: adding key catcher KEYCATCH_LUI_LAYER\n");
  if ( (unsigned int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v2, 2) )
    __debugbreak();
  clientUIActives[v2].keyCatchers |= orMask;
}

/*
==============
CL_Keys_AddConsoleCommand
==============
*/
void CL_Keys_AddConsoleCommand(LocalClientNum_t localClientNum, const char *command)
{
  __int64 v2; 
  CmdText *v4; 

  v2 = localClientNum;
  if ( !command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 885, ASSERT_TYPE_ASSERT, "(command)", (const char *)&queryFormat, "command") )
    __debugbreak();
  v4 = &s_cmd_superUser_textArray[v2];
  Cbuf_AddText_Internal(command, v4);
  Cbuf_AddText_Internal("\n", v4);
}

/*
==============
CL_Keys_AdjustScrollField
==============
*/
void CL_Keys_AdjustScrollField(const ScreenPlacement *scrPlace, field_t *edit)
{
  float v3; 
  float widthInPixels; 
  GfxFont *consoleFont; 
  double v6; 
  int scroll; 
  float v8; 
  float v9; 
  float v10; 
  int v11; 
  unsigned __int64 v12; 
  int v13; 
  int v14; 

  v3 = edit->charHeight * 0.020833334;
  widthInPixels = (float)edit->widthInPixels;
  if ( edit->fixedSize )
  {
    consoleFont = cls.consoleFont;
    v3 = (float)((float)(1.0 / cg_hudSplitscreenScale) * v3) * scrPlace->scaleRealToVirtual.v[0];
    widthInPixels = (float)((float)(1.0 / cg_hudSplitscreenScale) * widthInPixels) * scrPlace->scaleRealToVirtual.v[1];
  }
  else
  {
    consoleFont = UI_GetFontHandle(scrPlace, 0, edit->charHeight * 0.020833334);
  }
  v6 = R_NormalizedTextScale(consoleFont, v3);
  if ( (float)((float)R_TextWidth(edit->buffer, 0, consoleFont) * *(float *)&v6) < widthInPixels )
  {
    edit->scroll = 0;
    edit->drawWidth = SEH_PrintStrlen(edit->buffer);
    return;
  }
  if ( widthInPixels > 0.0 )
  {
    while ( 1 )
    {
      scroll = edit->scroll;
      if ( scroll <= 0 || (float)((float)R_TextWidth((const char *)&edit->fixedSize + scroll + 3, 0, consoleFont) * *(float *)&v6) >= widthInPixels )
        break;
      --edit->scroll;
    }
  }
  while ( 1 )
  {
    v8 = (float)R_TextWidth(&edit->buffer[edit->scroll], 0, consoleFont) * *(float *)&v6;
    v10 = v8 - (float)((float)R_TextWidth(&edit->buffer[edit->cursor], 0, consoleFont) * *(float *)&v6);
    v9 = v10;
    if ( v10 >= 0.0 )
    {
      if ( v10 < widthInPixels )
        goto LABEL_18;
      if ( v10 >= 0.0 )
      {
        ++edit->scroll;
        goto LABEL_18;
      }
    }
    v11 = edit->scroll;
    if ( !v11 )
    {
      v9 = 0.0;
      goto LABEL_20;
    }
    edit->scroll = v11 - 1;
LABEL_18:
    if ( v10 >= 0.0 )
    {
      v11 = edit->scroll;
LABEL_20:
      if ( v9 < widthInPixels )
        break;
    }
  }
  v12 = -1i64;
  do
    ++v12;
  while ( edit->buffer[v11 + v12] );
  v13 = truncate_cast<int,unsigned __int64>(v12);
  v14 = edit->cursor - edit->scroll;
  edit->drawWidth = v14;
  if ( widthInPixels > 0.0 )
  {
    while ( v14 < v13 && (float)((float)R_TextWidth(&edit->buffer[edit->scroll], v14 + 1, consoleFont) * *(float *)&v6) < widthInPixels )
      v14 = ++edit->drawWidth;
  }
}

/*
==============
CL_Keys_BindC_f
==============
*/
void CL_Keys_BindC_f()
{
  int v0; 
  const char *v1; 
  int v2; 
  const char *v3; 
  const char *v4; 
  InputContext v5; 
  const char *v6; 
  LocalClientNum_t v7; 
  LocalClientNum_t v8; 
  int Binding; 
  const char *v10; 
  const char *CommandForBinding; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  int BindingForCommand; 

  v0 = Cmd_Argc();
  if ( v0 >= 3 )
  {
    v1 = Cmd_Argv(1);
    v2 = Com_Keys_StringToKeynum(v1);
    if ( v2 == -1 )
    {
      v3 = Cmd_Argv(1);
      Com_Printf(0, "\"%s\" isn't a valid key\n", v3);
    }
    else
    {
      v4 = Cmd_Argv(2);
      v5 = CL_InputContext_FromName(v4);
      if ( v5 == (STRUCT_POINTER|FLOAT_POINTER) )
      {
        v6 = Cmd_Argv(2);
        Com_Printf(0, "\"%s\" isn't a valid input context\n", v6);
      }
      else
      {
        v7 = Cmd_LocalClientNum();
        v8 = v7;
        if ( v0 == 3 )
        {
          Binding = CL_Keys_GetBinding(v7, v2, v5);
          v10 = Cmd_Argv(2);
          if ( Binding )
          {
            CommandForBinding = Com_Keys_GetCommandForBinding(Binding);
            v12 = Cmd_Argv(1);
            Com_Printf(0, "\"%s\" is bound to \"%s\" for context %s\n", v12, CommandForBinding, v10);
          }
          else
          {
            v13 = Cmd_Argv(1);
            Com_Printf(0, "\"%s\" is not bound for context %s\n", v13, v10);
          }
        }
        else
        {
          v14 = Cmd_Argv(3);
          BindingForCommand = Com_Keys_GetBindingForCommand(v14);
          if ( BindingForCommand )
            CL_Keys_SetBinding(v8, v2, v5, BindingForCommand);
        }
      }
    }
  }
  else
  {
    Com_Printf(0, "bindc <key> <context> [<command>] : attach a command to a key for input context\n");
  }
}

/*
==============
CL_Keys_BindKey
==============
*/
__int64 CL_Keys_BindKey(LocalClientNum_t localClientNum, InputContext inputContext, Bind action, CL_KeyBindSlot slot, keyNum_t key, CL_KeyBind (*unboundActions)[15])
{
  __int64 v7; 
  unsigned int v8; 
  int Conflicting; 
  __int64 v10; 
  __int64 v11; 
  InputContext v12; 
  int v15; 
  CL_KeyBind v17; 
  CL_KeyBindSlot v18; 
  CL_KeyBind result; 
  __int64 v20; 
  InputContext conflictingContexts[15]; 

  v7 = localClientNum;
  v18 = slot;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v15 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 2920, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v15) )
      __debugbreak();
  }
  v8 = 0;
  Conflicting = CL_InputContext_GetConflicting(inputContext, (InputContext (*)[15])conflictingContexts);
  v10 = Conflicting;
  v20 = Conflicting;
  if ( Conflicting > 0 )
  {
    v11 = 0i64;
    do
    {
      v12 = conflictingContexts[v11];
      v17 = (CL_KeyBind)512;
      if ( v12 == inputContext )
      {
        CL_KeyBindings::SetKey(&s_keyBindings[v7], inputContext, action, v18, key, &v17);
      }
      else if ( key && key != K_INHERIT )
      {
        if ( CL_KeyBindings::GetKeyBind(&s_keyBindings[v7], &result, v12, key)->action != action )
          CL_KeyBindings::SetAction(&s_keyBindings[v7], v12, key, BIND_VOID, &v17);
        v10 = v20;
      }
      if ( unboundActions )
        (*unboundActions)[(unsigned __int8)v12] = v17;
      if ( v17.action )
      {
        if ( (int)++v8 >= 15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 2947, ASSERT_TYPE_ASSERT, "(unboundActionCount < INPUT_CONTEXT_COUNT)", (const char *)&queryFormat, "unboundActionCount < INPUT_CONTEXT_COUNT") )
          __debugbreak();
      }
      ++v11;
    }
    while ( v11 < v10 );
  }
  s_dirtyKeyBindingsUI[v7] = 1;
  s_activeInputContext[v7] = STRUCT_POINTER|FLOAT_POINTER;
  s_dirtyKeyBindingsFile[v7] = 1;
  return v8;
}

/*
==============
CL_Keys_Bind_Cmd
==============
*/
void CL_Keys_Bind_Cmd(bool isSuperUser)
{
  int v2; 
  __int64 v3; 
  const char *v4; 
  int v5; 
  const char *v6; 
  LocalClientNum_t v7; 
  LocalClientNum_t v8; 
  const char *BindingCheat; 
  const char *v10; 
  int v11; 
  const char *v12; 
  bool BindingSuperUser; 
  const char *v14; 
  int BindingForCommand; 
  const char *v16; 
  char v17; 
  const char *v18; 
  char dest[1024]; 

  v2 = Cmd_Argc();
  v3 = v2;
  if ( v2 >= 2 )
  {
    v4 = Cmd_Argv(1);
    v5 = Com_Keys_StringToKeynum(v4);
    if ( v5 == -1 )
    {
      v6 = Cmd_Argv(1);
      Com_Printf(0, "\"%s\" isn't a valid key\n", v6);
    }
    else
    {
      v7 = Cmd_LocalClientNum();
      v8 = v7;
      if ( (_DWORD)v3 == 2 )
      {
        BindingCheat = CL_Keys_GetBindingCheat(v7, v5, BYTE_VALUE);
        v10 = Cmd_Argv(1);
        if ( BindingCheat )
          Com_Printf(0, "\"%s\" = \"%s\"\n", v10, BindingCheat);
        else
          Com_Printf(0, "\"%s\" is not bound\n", v10);
      }
      else
      {
        v11 = 2;
        v12 = Cmd_Argv(2);
        BindingSuperUser = CL_Keys_GetBindingSuperUser(v8, v5);
        if ( isSuperUser || !BindingSuperUser )
        {
          BindingForCommand = Com_Keys_GetBindingForCommand(v12);
          if ( BindingForCommand )
          {
            CL_Keys_SetBinding(v8, v5, BYTE_VALUE, BindingForCommand);
          }
          else
          {
            dest[0] = 0;
            if ( (int)v3 > 2 )
            {
              do
              {
                if ( v3 > 3 && (v16 = Cmd_Argv(v11), strchr_0(v16, 32)) )
                {
                  v17 = 1;
                  I_strcat(dest, 0x400ui64, "\"");
                }
                else
                {
                  v17 = 0;
                }
                v18 = Cmd_Argv(v11);
                I_strcat(dest, 0x400ui64, v18);
                if ( v17 )
                  I_strcat(dest, 0x400ui64, "\"");
                if ( v11 != (_DWORD)v3 - 1 )
                  I_strcat(dest, 0x400ui64, " ");
                ++v11;
              }
              while ( v11 < (int)v3 );
            }
            CL_Keys_SetBindingCheat(v8, v5, dest);
          }
          CL_Keys_SetBindingSuperUser(v8, v5, isSuperUser);
        }
        else
        {
          v14 = Com_Keys_KeynumToString(v5);
          Com_Printf(6, "Key '%s' is developer-enabled. It can't be bound outside of command line or console commands. Attempted to bind to '%s'.\n", v14, v12);
        }
      }
    }
  }
  else
  {
    Com_Printf(0, "bind <key> [command] : attach a command to a key\n");
  }
}

/*
==============
CL_Keys_Bind_f
==============
*/
void CL_Keys_Bind_f()
{
  CL_Keys_Bind_Cmd(0);
}

/*
==============
CL_Keys_Bindlist_f
==============
*/
void CL_Keys_Bindlist_f()
{
  LocalClientNum_t v0; 
  int i; 
  int j; 
  const char *BindingCheat; 
  const char *v4; 
  BOOL BindingSuperUser; 
  const char *v6; 
  const char *v7; 
  __int64 v8; 

  v0 = Cmd_LocalClientNum();
  for ( i = 1; i < 222; ++i )
  {
    for ( j = 0; j < 15; ++j )
    {
      BindingCheat = CL_Keys_GetBindingCheat(v0, i, (InputContext)j);
      v4 = BindingCheat;
      if ( BindingCheat )
      {
        if ( *BindingCheat )
        {
          BindingSuperUser = CL_Keys_GetBindingSuperUser(v0, i);
          v6 = CL_InputContext_ToName((InputContext)j);
          v7 = Com_Keys_KeynumToString(i);
          LODWORD(v8) = BindingSuperUser;
          Com_Printf(0, "%s %s \"%s\" (%i)\n", v7, v6, v4, v8);
        }
      }
    }
  }
}

/*
==============
CL_Keys_CharEvent
==============
*/
void CL_Keys_CharEvent(LocalClientNum_t localClientNum, int a2)
{
  __int64 v3; 
  const dvar_t *v4; 
  unsigned __int64 v5; 
  __int64 v6; 
  int keyCatchers; 
  bool v8; 

  v3 = localClientNum;
  if ( !DevGui_IsActive() )
  {
    v4 = DVARBOOL_con_bindableGrave;
    if ( !DVARBOOL_con_bindableGrave && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_bindableGrave") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled || a2 != 96 && ((v5 = (unsigned int)(a2 - 126), (unsigned int)v5 > 0x2E) || (v6 = 0x410000000001i64, !_bittest64(&v6, v5))) )
    {
      keyCatchers = CL_GetLocalClientUIGlobals((const LocalClientNum_t)v3)->keyCatchers;
      if ( (keyCatchers & 1) != 0 )
      {
        if ( a2 != 8 )
        {
LABEL_18:
          if ( CL_Keys_CharEvent((LocalClientNum_t)v3, &scrPlaceFull, &g_consoleField) )
            Con_AllowAutoCompleteCycling(1);
          return;
        }
        v8 = !Con_CancelAutoComplete();
      }
      else
      {
        if ( (keyCatchers & 0x20) != 0 )
        {
          CL_Keys_CharEvent((LocalClientNum_t)v3, &scrPlaceViewDisplay[v3], &g_playerKeys[v3].chatField);
          return;
        }
        if ( (keyCatchers & 0x240) != 0 )
          LUI_CoD_CharEvent((LocalClientNum_t)v3);
        v8 = CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v3) == CA_DISCONNECTED;
      }
      if ( !v8 )
        return;
      goto LABEL_18;
    }
  }
}

/*
==============
CL_Keys_CharEvent
==============
*/
bool CL_Keys_CharEvent(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, field_t *edit, int a4)
{
  __int64 v4; 
  unsigned __int64 v6; 
  int v9; 
  int v10; 
  bool v11; 
  bool result; 
  __int64 cursor; 
  bool v14; 
  unsigned int v15; 
  int overstrikeMode; 
  BOOL v17; 
  int v18; 
  __int64 v20; 
  int v21; 
  __int64 v22; 
  char *v23; 

  v4 = localClientNum;
  v6 = -1i64;
  do
    ++v6;
  while ( edit->buffer[v6] );
  v9 = truncate_cast<int,unsigned __int64>(v6);
  v10 = v9;
  switch ( a4 )
  {
    case 22:
      v11 = CL_Keys_PasteField((LocalClientNum_t)v4, scrPlace, edit);
      CL_Keys_AdjustScrollField(scrPlace, edit);
      return v11;
    case 3:
      CL_Keys_ClearField(edit);
LABEL_38:
      v14 = 1;
      goto LABEL_39;
    case 8:
      cursor = edit->cursor;
      v14 = (int)cursor > 0;
      if ( (int)cursor <= 0 )
      {
LABEL_39:
        CL_Keys_AdjustScrollField(scrPlace, edit);
        return v14;
      }
      v15 = 1;
      if ( (int)cursor > 1 && *((_BYTE *)&edit->fixedSize + cursor + 2) == 0xC2 )
        v15 = 2;
      memmove_0(&edit->buffer[cursor - v15], &edit->buffer[cursor], v9 - (int)cursor + 1);
      edit->cursor -= v15;
      CL_Keys_AdjustScrollField(scrPlace, edit);
      return v14;
    case 1:
      result = 0;
      *(_QWORD *)&edit->cursor = 0i64;
      return result;
    case 5:
      edit->cursor = v9;
      CL_Keys_AdjustScrollField(scrPlace, edit);
      return 0;
    default:
      if ( (unsigned int)(a4 - 32) <= 0xDF )
      {
        overstrikeMode = g_playerKeys[v4].overstrikeMode;
        if ( !overstrikeMode || edit->cursor != 255 )
        {
          v17 = (a4 & 0x80) != 0;
          v18 = 256 - v17;
          if ( !overstrikeMode )
            v18 = 255 - v17;
          if ( v10 < v18 )
          {
            if ( overstrikeMode && edit->buffer[edit->cursor] == -62 )
            {
              v20 = edit->cursor;
              v21 = v20 + 1;
              if ( (a4 & 0x80) != 0 )
              {
                edit->cursor = v21;
              }
              else
              {
                memmove_0(&edit->buffer[v20], &edit->buffer[v21], v10 - (int)v20);
                --v10;
              }
            }
            else if ( (a4 & 0x80) != 0 )
            {
              memmove_0(&edit->buffer[edit->cursor + 1], &edit->buffer[edit->cursor], v10 - edit->cursor);
              edit->buffer[edit->cursor++] = -62;
            }
            v22 = edit->cursor;
            v23 = &edit->buffer[v22];
            if ( overstrikeMode )
            {
              *v23 = a4;
            }
            else
            {
              memmove_0(&edit->buffer[v22 + 1], v23, v10 - (int)v22 + 1);
              edit->buffer[edit->cursor] = a4;
            }
            if ( ++edit->cursor == v10 + 1 )
              edit->buffer[edit->cursor] = 0;
            goto LABEL_38;
          }
        }
      }
      return 0;
  }
}

/*
==============
CL_Keys_ClearStates
==============
*/
void CL_Keys_ClearStates(LocalClientNum_t localClientNum)
{
  unsigned __int64 v2; 
  __int64 v3; 
  int i; 
  int ControllerFromClient; 
  unsigned __int64 v6; 

  v2 = 4408i64 * (int)localClientNum;
  v3 = 1i64;
  g_playerKeys[v2 / 0x1138].anyKeyDown = 0;
  for ( i = 1; i < 222; ++i )
  {
    if ( *(&g_playerKeys[0].keys[v3].down + v2) && !Com_ErrorEntering() )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
      CL_GamepadButtonEvent(localClientNum, ControllerFromClient, i, 0, 0, 0);
    }
    v6 = v3 * 16 + v2;
    *(&g_playerKeys[0].keys[v3++].down + v2) = 0;
    *(&g_playerKeys[0].keys[0].repeats + v6) = 0;
  }
}

/*
==============
CL_Keys_ClearStatesExceptTriggers
==============
*/
void CL_Keys_ClearStatesExceptTriggers(LocalClientNum_t localClientNum)
{
  CL_Keys_ClearStatesInternal(localClientNum, 1);
}

/*
==============
CL_Keys_ClearStatesInternal
==============
*/
void CL_Keys_ClearStatesInternal(LocalClientNum_t localClientNum, bool excludeTriggers)
{
  unsigned __int64 v3; 
  int v5; 
  __int64 v6; 
  int ControllerFromClient; 

  v3 = 4408i64 * (int)localClientNum;
  v5 = 1;
  v6 = 1i64;
  g_playerKeys[v3 / 0x1138].anyKeyDown = 0;
  do
  {
    if ( !*(&g_playerKeys[0].keys[v6].down + v3) || Com_ErrorEntering() )
      goto LABEL_9;
    if ( !excludeTriggers || v5 < 5 || v5 > 6 && (unsigned int)(v5 - 18) > 1 )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
      CL_GamepadButtonEvent(localClientNum, ControllerFromClient, v5, 0, 0, 0);
LABEL_9:
      *(&g_playerKeys[0].keys[v6].down + v3) = 0;
      *(&g_playerKeys[0].keys[v6].repeats + v3) = 0;
    }
    ++v5;
    ++v6;
  }
  while ( v5 < 222 );
}

/*
==============
CL_Keys_CompleteCommand
==============
*/
void CL_Keys_CompleteCommand(const ScreenPlacement *scrPlace)
{
  const char *v1; 
  char v2; 
  const dvar_t *v3; 
  bool v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  int v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  int v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  char *v15; 
  __int64 v16; 
  field_t *v17; 
  __m256i v18; 
  __int128 v19; 
  __int128 v20; 
  __int64 v21; 
  char v22; 
  unsigned __int64 v23; 
  int v24; 
  const char *v25; 
  char *v26; 
  int i; 
  const char *v28; 
  char v29; 
  const char *v30; 
  __int64 v31; 
  __int64 v32; 
  const char *v33; 
  const char *v34; 
  const char *v35; 
  unsigned __int64 v36; 
  int v37; 
  const dvar_t *VarByName; 
  const dvar_t *v39; 
  const char *v40; 
  const char *v41; 
  unsigned __int64 v42; 
  int v43; 
  char **strings[2]; 
  CmdAutoCompleteResults result; 
  char v47; 
  char Str[264]; 
  char completed[256]; 

  s_completionString = Con_TokenizeInput();
  s_shortestMatch[0] = 0;
  v1 = s_completionString;
  s_matchCount = 0;
  s_prefixMatchCount = 0;
  if ( !*s_completionString )
    goto LABEL_102;
  if ( Cmd_Argc() > 1 && Con_IsDvarCommand(s_completionString) )
  {
    v2 = 1;
    s_completionString = Cmd_Argv(1);
  }
  else
  {
    v2 = 0;
  }
  v3 = DVARBOOL_con_matchPrefixOnly;
  if ( !DVARBOOL_con_matchPrefixOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_matchPrefixOnly") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  v4 = !v3->current.enabled;
  v5 = -1i64;
  s_shortestMatch[0] = 0;
  s_matchCount = 0;
  s_prefixMatchCount = 0;
  if ( v4 )
  {
    con_ignoreMatchPrefixOnly = 0;
    if ( v2 )
    {
      v7 = 0;
    }
    else
    {
      Cmd_ForEach(CL_Keys_FindMatches);
      v6 = -1i64;
      do
        ++v6;
      while ( s_shortestMatch[v6] );
      v7 = truncate_cast<int,unsigned __int64>(v6);
    }
    Dvar_ForEachName(CL_Keys_FindMatches);
    v8 = -1i64;
    do
      ++v8;
    while ( s_shortestMatch[v8] );
  }
  else
  {
    con_ignoreMatchPrefixOnly = 1;
    if ( v2 )
    {
      v7 = 0;
    }
    else
    {
      Cmd_ForEach(CL_Keys_FindMatches);
      v9 = -1i64;
      do
        ++v9;
      while ( s_shortestMatch[v9] );
      v7 = truncate_cast<int,unsigned __int64>(v9);
    }
    Dvar_ForEachName(CL_Keys_FindMatches);
    v10 = -1i64;
    do
      ++v10;
    while ( s_shortestMatch[v10] );
    v11 = truncate_cast<int,unsigned __int64>(v10);
    if ( s_matchCount <= con_inputMaxMatchesShown )
      goto LABEL_42;
    con_ignoreMatchPrefixOnly = 0;
    s_matchCount = 0;
    s_prefixMatchCount = 0;
    s_shortestMatch[0] = 0;
    if ( v2 )
    {
      v7 = 0;
    }
    else
    {
      Cmd_ForEach(CL_Keys_FindMatches);
      v12 = -1i64;
      do
        ++v12;
      while ( s_shortestMatch[v12] );
      v7 = truncate_cast<int,unsigned __int64>(v12);
    }
    Dvar_ForEachName(CL_Keys_FindMatches);
    v13 = -1i64;
    do
      ++v13;
    while ( s_shortestMatch[v13] );
    v11 = truncate_cast<int,unsigned __int64>(v13);
    if ( s_matchCount )
      goto LABEL_42;
    con_ignoreMatchPrefixOnly = 1;
    s_matchCount = 0;
    s_prefixMatchCount = 0;
    s_shortestMatch[0] = 0;
    if ( v2 )
    {
      v7 = 0;
    }
    else
    {
      Cmd_ForEach(CL_Keys_FindMatches);
      v14 = -1i64;
      do
        ++v14;
      while ( s_shortestMatch[v14] );
      v7 = truncate_cast<int,unsigned __int64>(v14);
    }
    Dvar_ForEachName(CL_Keys_FindMatches);
    v8 = -1i64;
    do
      ++v8;
    while ( s_shortestMatch[v8] );
  }
  v11 = truncate_cast<int,unsigned __int64>(v8);
LABEL_42:
  v15 = &v47;
  v16 = 2i64;
  v17 = &g_consoleField;
  do
  {
    v15 += 128;
    v18 = *(__m256i *)&v17->cursor;
    v19 = *(_OWORD *)&v17->buffer[88];
    v17 = (field_t *)((char *)v17 + 128);
    *((__m256i *)v15 - 4) = v18;
    *((__m256i *)v15 - 3) = *(__m256i *)&v17[-1].buffer[160];
    *((__m256i *)v15 - 2) = *(__m256i *)&v17[-1].buffer[192];
    *((_OWORD *)v15 - 2) = *(_OWORD *)&v17[-1].buffer[224];
    *((_OWORD *)v15 - 1) = v19;
    --v16;
  }
  while ( v16 );
  v4 = s_matchCount == 0;
  v20 = *(_OWORD *)&v17->cursor;
  v21 = *(_QWORD *)&v17->charHeight;
  *(_OWORD *)v15 = v20;
  *((_QWORD *)v15 + 2) = v21;
  if ( !v4 )
  {
LABEL_47:
    if ( v2 || s_matchCount == 1 || s_hasExactMatch && Con_AnySpaceAfterCommand() )
    {
      v22 = 1;
      if ( v2 )
      {
        Com_sprintf(g_consoleField.buffer, 0x100ui64, "\\%s %s", v1, s_shortestMatch);
        goto LABEL_53;
      }
    }
    else
    {
      v22 = 0;
    }
    Com_sprintf(g_consoleField.buffer, 0x100ui64, "\\%s", s_shortestMatch);
LABEL_53:
    v23 = -1i64;
    do
      ++v23;
    while ( g_consoleField.buffer[v23] );
    v24 = truncate_cast<int,unsigned __int64>(v23);
    v25 = s_completionString;
    g_consoleField.cursor = v24;
    v26 = strstr_0(Str, s_completionString);
    if ( v26 )
    {
      v31 = -1i64;
      do
        ++v31;
      while ( v25[v31] );
      I_strcat(g_consoleField.buffer, 0x100ui64, &v26[v31]);
    }
    else
    {
      for ( i = 1; i < Cmd_Argc(); ++i )
      {
        I_strcat(g_consoleField.buffer, 0x100ui64, " ");
        v28 = Cmd_Argv(i);
        v29 = *v28;
        if ( *v28 )
        {
          while ( v29 != 32 )
          {
            v29 = *++v28;
            if ( !v29 )
              goto LABEL_64;
          }
          I_strcat(g_consoleField.buffer, 0x100ui64, "\"");
        }
LABEL_64:
        v30 = Cmd_Argv(i);
        I_strcat(g_consoleField.buffer, 0x100ui64, v30);
        if ( *v28 == 32 )
          I_strcat(g_consoleField.buffer, 0x100ui64, "\"");
      }
    }
    if ( !s_matchCount )
    {
      do
        ++v5;
      while ( g_consoleField.buffer[v5] );
      g_consoleField.cursor = truncate_cast<int,unsigned __int64>(v5);
      Cmd_EndTokenizedString();
LABEL_70:
      CL_Keys_AdjustScrollField(scrPlace, &g_consoleField);
      return;
    }
    if ( !v22 )
    {
      if ( Con_HasTooManyMatchesToShow() )
      {
        Com_Printf(0, "]%s\n", g_consoleField.buffer);
        Cmd_ForEach(CL_Keys_PrintMatches);
        Dvar_ForEachName(CL_Keys_PrintMatches);
      }
      Cmd_EndTokenizedString();
      goto LABEL_70;
    }
    if ( !v2 )
    {
      if ( Cmd_Argc() == 1 )
      {
        v32 = -1i64;
        do
          ++v32;
        while ( g_consoleField.buffer[v32] );
        if ( !v32 || *((_BYTE *)&g_consoleField.fixedSize + v32 + 3) != 32 )
          I_strcat(g_consoleField.buffer, 0x100ui64, " ");
      }
      else if ( Cmd_Argc() == 2 )
      {
        v33 = Con_TokenizeInput();
        if ( v7 == v11 )
        {
          v34 = v33;
          v35 = Cmd_Argv(1);
          if ( *v35 )
          {
            *(CmdAutoCompleteResults *)strings = *Cmd_GetAutoCompleteParameters(&result, v34, "CL_Keys_CompleteCmdArgument");
            Cmd_EndTokenizedString();
            if ( SLODWORD(strings[1]) > 0 )
            {
              Con_AutoCompleteFromList((const char *const *)strings[0], (unsigned int)strings[1], v35, completed, 0x100u);
              Com_StripExtensionInPlace(completed);
              v36 = -1i64;
              do
                ++v36;
              while ( v35[v36] );
              v37 = truncate_cast<int,unsigned __int64>(v36);
              CL_Keys_ReplaceConsoleInputArgument(v37, completed);
            }
            Cmd_ReleaseAutoCompleteParameters((const CmdAutoCompleteResults *)strings);
            goto LABEL_97;
          }
        }
        else
        {
          VarByName = Dvar_FindVarByName(v33);
          v39 = VarByName;
          if ( VarByName )
          {
            if ( VarByName->type == 8 )
            {
              v40 = Cmd_Argv(1);
              v41 = v40;
              if ( *v40 )
              {
                Con_AutoCompleteFromList(v39->domain.enumeration.strings, v39->domain.enumeration.stringCount, v40, completed, 0x100u);
                v42 = -1i64;
                do
                  ++v42;
                while ( v41[v42] );
                v43 = truncate_cast<int,unsigned __int64>(v42);
                CL_Keys_ReplaceConsoleInputArgument(v43, completed);
              }
            }
          }
        }
        Cmd_EndTokenizedString();
      }
    }
    do
LABEL_97:
      ++v5;
    while ( g_consoleField.buffer[v5] );
    g_consoleField.cursor = truncate_cast<int,unsigned __int64>(v5);
    Cmd_EndTokenizedString();
    goto LABEL_70;
  }
  if ( v2 )
  {
    Core_strcpy(s_shortestMatch, 0x400ui64, s_completionString);
    goto LABEL_47;
  }
LABEL_102:
  Cmd_EndTokenizedString();
}

/*
==============
CL_Keys_ConsoleKey
==============
*/
void CL_Keys_ConsoleKey(LocalClientNum_t localClientNum, int key)
{
  __int64 v3; 
  int v4; 
  BOOL v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 
  __int64 v11; 
  field_t *v12; 
  field_t *v13; 
  __m256i v14; 
  __int128 v15; 
  __int128 v16; 
  __int64 v17; 
  int v18; 
  __int64 v19; 
  field_t *v20; 
  field_t *v21; 
  __m256i v22; 
  __int128 v23; 
  __int128 v24; 
  __int64 v25; 
  unsigned __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  int v29; 
  __int64 v30; 
  field_t *v31; 
  field_t *v32; 
  __m256i v33; 
  __int128 v34; 
  __int128 v35; 
  __int64 v36; 

  v3 = localClientNum;
  v4 = 0;
  v6 = s_shouldCompleteCmd;
  v7 = localClientNum;
  s_shouldCompleteCmd = 1;
  if ( g_playerKeys[v3].keys[140].down || (v8 = 0, g_playerKeys[v3].keys[141].down) )
    v8 = 1;
  if ( g_playerKeys[v3].keys[138].down || (v9 = 0, g_playerKeys[v3].keys[139].down) )
    v9 = 1;
  if ( g_playerKeys[v3].keys[136].down || g_playerKeys[v3].keys[137].down )
    v4 = 1;
  if ( key == 108 )
  {
    if ( v9 )
    {
      Cbuf_AddText_Internal("clear\n", &s_cmd_textArray[localClientNum]);
      return;
    }
    goto LABEL_35;
  }
  if ( key != 13 && key != 178 )
  {
    switch ( key )
    {
      case 9:
        if ( v6 )
          CL_Keys_CompleteCommand(&scrPlaceFull);
        else
          Con_CycleAutoComplete(2 * (v8 ^ 1) - 1);
        s_shouldCompleteCmd = 0;
        return;
      case 132:
        if ( v9 )
        {
          Con_CycleAutoComplete(-1);
          return;
        }
        break;
      case 133:
        if ( v9 )
        {
          Con_CycleAutoComplete(1);
          return;
        }
LABEL_35:
        if ( tolower(key) != 112 || !v9 )
        {
          if ( key == 192 )
          {
            if ( v8 )
              goto LABEL_39;
          }
          else if ( key == 133 || key == 176 )
          {
            goto LABEL_39;
          }
          if ( tolower(key) != 110 || !v9 )
          {
            switch ( key )
            {
              case 151:
LABEL_53:
                Con_PageUp();
                return;
              case 150:
LABEL_57:
                Con_PageDown();
                return;
              case 193:
                Con_PageUp();
                if ( !v9 )
                  return;
                Con_PageUp();
                goto LABEL_53;
              case 192:
                Con_PageDown();
                if ( !v9 )
                  return;
                Con_PageDown();
                goto LABEL_57;
              case 152:
                if ( v9 )
                {
                  Con_Top();
                  return;
                }
                break;
              case 153:
                if ( v9 )
                {
                  Con_Bottom();
                  return;
                }
                break;
              case 149:
              case 27:
                if ( Con_CancelAutoComplete() )
                  return;
                goto LABEL_74;
              default:
                v26 = (unsigned int)(key - 134);
                if ( (unsigned int)v26 <= 0x28 )
                {
                  v27 = 0x14000000003i64;
                  if ( _bittest64(&v27, v26) )
                    goto LABEL_72;
                }
                if ( key == 127 || v9 )
                {
LABEL_74:
                  if ( CL_Keys_KeyDownEvent(localClientNum, &scrPlaceFull, &g_consoleField, key) )
                    Con_AllowAutoCompleteCycling(1);
                  return;
                }
                break;
            }
            if ( !v4 && !v8 )
            {
LABEL_72:
              Con_CommitToAutoComplete();
              goto LABEL_74;
            }
            goto LABEL_74;
          }
LABEL_39:
          if ( !Con_CycleAutoComplete(1) )
          {
            v18 = s_historyLine;
            if ( s_historyLine != s_nextHistoryLine )
            {
              ++s_historyLine;
              v19 = 2i64;
              v20 = &g_historyEditLines[(v18 + 1) % 32];
              v21 = &g_consoleField;
              do
              {
                v21 = (field_t *)((char *)v21 + 128);
                v22 = *(__m256i *)&v20->cursor;
                v23 = *(_OWORD *)&v20->buffer[88];
                v20 = (field_t *)((char *)v20 + 128);
                *(__m256i *)&v21[-1].buffer[128] = v22;
                *(__m256i *)&v21[-1].buffer[160] = *(__m256i *)&v20[-1].buffer[160];
                *(__m256i *)&v21[-1].buffer[192] = *(__m256i *)&v20[-1].buffer[192];
                *(_OWORD *)&v21[-1].buffer[224] = *(_OWORD *)&v20[-1].buffer[224];
                *(_OWORD *)&v21[-1].buffer[240] = v23;
                --v19;
              }
              while ( v19 );
              v24 = *(_OWORD *)&v20->cursor;
              v25 = *(_QWORD *)&v20->charHeight;
              *(_OWORD *)&v21->cursor = v24;
              *(_QWORD *)&v21->charHeight = v25;
              CL_Keys_AdjustScrollField(&scrPlaceFull, &g_consoleField);
            }
          }
          return;
        }
        break;
      case 193:
        if ( !v8 )
          goto LABEL_35;
        break;
      case 170:
        break;
      default:
        goto LABEL_35;
    }
    v10 = s_historyLine;
    if ( s_nextHistoryLine - s_historyLine < 32 && s_historyLine > 0 )
      v10 = --s_historyLine;
    v11 = 2i64;
    v12 = &g_historyEditLines[v10 % 32];
    v13 = &g_consoleField;
    do
    {
      v13 = (field_t *)((char *)v13 + 128);
      v14 = *(__m256i *)&v12->cursor;
      v15 = *(_OWORD *)&v12->buffer[88];
      v12 = (field_t *)((char *)v12 + 128);
      *(__m256i *)&v13[-1].buffer[128] = v14;
      *(__m256i *)&v13[-1].buffer[160] = *(__m256i *)&v12[-1].buffer[160];
      *(__m256i *)&v13[-1].buffer[192] = *(__m256i *)&v12[-1].buffer[192];
      *(_OWORD *)&v13[-1].buffer[224] = *(_OWORD *)&v12[-1].buffer[224];
      *(_OWORD *)&v13[-1].buffer[240] = v15;
      --v11;
    }
    while ( v11 );
    v16 = *(_OWORD *)&v12->cursor;
    v17 = *(_QWORD *)&v12->charHeight;
    *(_OWORD *)&v13->cursor = v16;
    *(_QWORD *)&v13->charHeight = v17;
    CL_Keys_AdjustScrollField(&scrPlaceFull, &g_consoleField);
    Con_AllowAutoCompleteCycling(0);
    return;
  }
  if ( Con_CommitToAutoComplete() )
    return;
  Com_Printf(0, "]%s\n", g_consoleField.buffer);
  if ( g_consoleField.buffer[0] == 92 || g_consoleField.buffer[0] == 47 )
  {
    CL_Keys_AddConsoleCommand(localClientNum, &g_consoleField.buffer[1]);
  }
  else
  {
    if ( !g_consoleField.buffer[0] )
      return;
    v28 = v7;
    Cbuf_AddText_Internal(g_consoleField.buffer, &s_cmd_superUser_textArray[v28]);
    Cbuf_AddText_Internal("\n", &s_cmd_superUser_textArray[v28]);
  }
  if ( g_consoleField.buffer[0] )
  {
    v29 = s_nextHistoryLine;
    v30 = 2i64;
    v31 = &g_consoleField;
    v32 = &g_historyEditLines[s_nextHistoryLine % 32];
    do
    {
      v32 = (field_t *)((char *)v32 + 128);
      v33 = *(__m256i *)&v31->cursor;
      v34 = *(_OWORD *)&v31->buffer[88];
      v31 = (field_t *)((char *)v31 + 128);
      *(__m256i *)&v32[-1].buffer[128] = v33;
      *(__m256i *)&v32[-1].buffer[160] = *(__m256i *)&v31[-1].buffer[160];
      *(__m256i *)&v32[-1].buffer[192] = *(__m256i *)&v31[-1].buffer[192];
      *(_OWORD *)&v32[-1].buffer[224] = *(_OWORD *)&v31[-1].buffer[224];
      *(_OWORD *)&v32[-1].buffer[240] = v34;
      --v30;
    }
    while ( v30 );
    v35 = *(_OWORD *)&v31->cursor;
    v36 = *(_QWORD *)&v31->charHeight;
    *(_OWORD *)&v32->cursor = v35;
    *(_QWORD *)&v32->charHeight = v36;
    s_nextHistoryLine = v29 + 1;
    s_historyLine = v29 + 1;
  }
  CL_Keys_ClearField(&g_consoleField);
  g_consoleField.charHeight = g_console_char_height;
  g_consoleField.widthInPixels = g_console_field_width;
  g_consoleField.fixedSize = 1;
  if ( Com_FrontEnd_IsInFrontEnd() )
    CL_Screen_Update();
}

/*
==============
CL_Keys_CopyBind
==============
*/
void CL_Keys_CopyBind(const int keynumFrom, const int keynumTo, const bool bothWayCopy)
{
  int v3; 
  __int64 v4; 
  int v5; 
  char **p_bindingCheat; 
  char *v7; 
  int *v8; 
  int v9; 
  __int64 v10; 
  int i; 
  char *v12; 
  int v13; 
  char *v14; 
  int j; 
  int v16; 
  int v17; 
  int *v18; 
  const char *v19; 
  const char *v20; 
  int v22; 
  int keynum; 
  char *bindingCheat; 
  char *src; 
  char v26; 
  char v27[68]; 
  char dest[1024]; 

  v22 = keynumFrom;
  keynum = keynumTo;
  v3 = 0;
  v4 = Cmd_LocalClientNum();
  v5 = 0;
  p_bindingCheat = &bindingCheat;
  v7 = &v26;
  v8 = &v22;
  do
  {
    if ( *v8 == -1 )
    {
      v20 = Com_Keys_KeynumToString(-1);
      Com_Printf(0, "\"%s\" isn't a valid key\n", v20);
      return;
    }
    v9 = tolower(*v8);
    v10 = v9;
    *v8 = v9;
    if ( CL_Keys_GetBindingSuperUser((LocalClientNum_t)v4, v9) )
    {
      v19 = Com_Keys_KeynumToString(*(&v22 + v5));
      Com_Printf(6, "Key '%s' is developer-enabled. It can't be changed via bind_swap.\n", v19);
      return;
    }
    for ( i = 0; i < 15; ++i )
    {
      *(_DWORD *)v7 = CL_Keys_GetBinding((LocalClientNum_t)v4, v10, (InputContext)i);
      v7 += 4;
    }
    ++v5;
    ++v8;
    *p_bindingCheat++ = (char *)g_playerKeys[v4].keys[v10].bindingCheat;
  }
  while ( v5 < 2 );
  v12 = src;
  if ( src )
    Core_strcpy(dest, 0x400ui64, src);
  if ( bindingCheat )
  {
    CL_Keys_SetBindingCheat((LocalClientNum_t)v4, keynum, bindingCheat);
  }
  else
  {
    v13 = keynum;
    v14 = v27;
    for ( j = 0; j < 15; ++j )
    {
      v16 = *((_DWORD *)v14 - 15);
      if ( v16 || *(_DWORD *)v14 )
        CL_Keys_SetBinding((LocalClientNum_t)v4, v13, (InputContext)j, v16);
      v14 += 4;
    }
  }
  if ( bothWayCopy )
  {
    if ( v12 )
    {
      CL_Keys_SetBindingCheat((LocalClientNum_t)v4, v22, dest);
    }
    else
    {
      v17 = v22;
      v18 = (int *)v27;
      do
      {
        if ( *(v18 - 15) || *v18 )
          CL_Keys_SetBinding((LocalClientNum_t)v4, v17, (InputContext)v3, *v18);
        ++v3;
        ++v18;
      }
      while ( v3 < 15 );
    }
  }
}

/*
==============
CL_Keys_CopyBind_f
==============
*/
void CL_Keys_CopyBind_f()
{
  const char *v0; 
  int v1; 
  const char *v2; 
  int v3; 

  if ( Cmd_Argc() == 3 )
  {
    v0 = Cmd_Argv(1);
    v1 = Com_Keys_StringToKeynum(v0);
    v2 = Cmd_Argv(2);
    v3 = Com_Keys_StringToKeynum(v2);
    CL_Keys_CopyBind(v1, v3, 0);
  }
  else
  {
    Com_Printf(0, "bind_copy <keyFrom> <keyTo> : Copy binds of keys\n");
  }
}

/*
==============
CL_Keys_DrawField
==============
*/
void CL_Keys_DrawField(LocalClientNum_t localClientNum, field_t *edit, int x, int y, int horzAlign, int vertAlign)
{
  __int64 v10; 
  int scroll; 
  int str; 
  char dest[256]; 

  if ( !edit->drawWidth )
    edit->drawWidth = 256;
  if ( edit->scroll < 0 )
  {
    scroll = edit->scroll;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 200, ASSERT_TYPE_ASSERT, "( ( edit->scroll >= 0 ) )", "( edit->scroll ) = %i", scroll) )
      __debugbreak();
  }
  if ( edit->scroll >= 0x100u )
  {
    str = 256;
    LODWORD(v10) = edit->scroll;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 201, ASSERT_TYPE_ASSERT, "(unsigned)( edit->scroll ) < (unsigned)( sizeof( edit->buffer ) )", "edit->scroll doesn't index sizeof( edit->buffer )\n\t%i not in [0, %i)", v10, str) )
      __debugbreak();
  }
  Core_strncpy(dest, 0x100ui64, &edit->buffer[edit->scroll], 255i64 - edit->scroll);
  CL_Keys_DrawTextOverrideField(localClientNum, edit, x, y, horzAlign, vertAlign, dest, edit->drawWidth, edit->cursor - edit->scroll);
}

/*
==============
CL_Keys_DrawTextOverrideField
==============
*/
void CL_Keys_DrawTextOverrideField(LocalClientNum_t localClientNum, const field_t *edit, int x, int y, int horzAlign, int vertAlign, const char *str, int drawLen, int cursorPos)
{
  __int64 v11; 
  bool v12; 
  ScreenPlacement *v13; 
  float v14; 
  GfxFont *consoleFont; 
  int style; 
  char cursor; 
  float v18; 
  float charHeight; 
  double v20; 
  char v21; 
  float v22; 

  v11 = localClientNum;
  if ( drawLen <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 141, ASSERT_TYPE_ASSERT, "(drawLen > 0)", (const char *)&queryFormat, "drawLen > 0") )
    __debugbreak();
  if ( activeScreenPlacementMode == SCRMODE_FULL )
    goto LABEL_10;
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v12 )
      __debugbreak();
LABEL_10:
    v13 = &scrPlaceFull;
    goto LABEL_11;
  }
  v13 = &scrPlaceViewDisplay[v11];
LABEL_11:
  if ( edit->fixedSize )
  {
    v14 = FLOAT_1_0;
    consoleFont = cls.consoleFont;
    style = 0;
    cursor = 95;
    v18 = FLOAT_1_0;
    if ( !g_playerKeys[v11].overstrikeMode )
      cursor = 124;
  }
  else
  {
    charHeight = edit->charHeight;
    consoleFont = UI_GetFontHandle(v13, 0, charHeight * 0.020833334);
    v20 = R_NormalizedTextScale(consoleFont, charHeight * 0.020833334);
    v14 = *(float *)&v20;
    if ( vertAlign == 5 )
    {
      v14 = (float)(*(float *)&v20 * cg_hudSplitscreenScale) * v13->scaleVirtualToReal.v[0];
      v18 = (float)(*(float *)&v20 * cg_hudSplitscreenScale) * v13->scaleVirtualToReal.v[1];
    }
    else
    {
      v18 = *(float *)&v20;
    }
    v21 = 124;
    style = 3;
    if ( g_playerKeys[v11].overstrikeMode )
      v21 = 95;
    cursor = v21;
  }
  v22 = (float)(y + (int)(float)((float)R_TextHeight(consoleFont) * v18));
  CL_DrawTextWithCursor(v13, str, drawLen, consoleFont, (float)x, v22, horzAlign, vertAlign, v14, v18, &colorWhite, style, cursorPos, cursor);
}

/*
==============
CL_Keys_Event
==============
*/
void CL_Keys_Event(LocalClientNum_t localClientNum, int key, bool down, unsigned int time, int virtualKey, int controllerIndex)
{
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  int ActiveBinding; 
  __int64 v11; 
  KeyState *v12; 
  unsigned __int8 repeats; 
  bool v14; 
  int anyKeyDown; 
  const char *v16; 
  __int64 v17; 
  const dvar_t *v18; 
  __int64 v19; 
  const char *v20; 
  int v21; 
  __int64 v22; 
  int v23; 
  int v24; 
  int v25; 
  bool v26; 
  const dvar_t *v27; 
  __int64 v28; 
  bool v29; 
  const dvar_t *v30; 
  int v31; 
  ClActiveClient *Client; 
  int v33; 
  int ControllerFromClient; 
  BOOL v35; 
  const char *v36; 
  __int64 v37; 
  CmdText *v38; 
  CmdText *v39; 
  int v40; 
  const char *bindingCheat; 
  const char *v42; 
  int v43; 
  __int64 v44; 
  int v45; 
  int v46; 
  int v47; 
  char v48; 
  char v49; 
  char *fmt; 
  __int64 keyCatchers; 
  __int64 v53; 
  __int64 v55; 
  int wasDown; 
  char dest[1024]; 

  v7 = key;
  v8 = localClientNum;
  Stream_ImageRecord_InputEvent();
  v9 = v8;
  v55 = v8;
  ActiveBinding = CL_Keys_GetActiveBinding((LocalClientNum_t)v8, v7);
  if ( (unsigned int)v8 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, 2) )
    __debugbreak();
  v11 = v8;
  v53 = v8;
  if ( down && (unsigned int)(ActiveBinding - 153) <= 3 )
  {
    if ( clientUIActives[v11].holdKeyLatest == (_DWORD)v7 && clientUIActives[v11].holdKeyNextTime > Sys_Milliseconds() )
      return;
    clientUIActives[v11].holdKeyNextTime = gpad_dpadDebounceTime->current.integer + Sys_Milliseconds();
    clientUIActives[v11].holdKeyLatest = v7;
  }
  v12 = &g_playerKeys[v8].keys[v7];
  wasDown = v12->down;
  v12->down = down;
  if ( down )
  {
    repeats = v12->repeats;
    if ( repeats != 0xFF )
      v12->repeats = ++repeats;
    if ( repeats == 1 )
      ++g_playerKeys[v9].anyKeyDown;
  }
  else
  {
    v12->repeats = 0;
    v14 = --g_playerKeys[v9].anyKeyDown < 0;
    anyKeyDown = g_playerKeys[v9].anyKeyDown;
    if ( v14 )
      anyKeyDown = 0;
    g_playerKeys[v9].anyKeyDown = anyKeyDown;
  }
  if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v8) == CA_ACTIVE )
    CG_ModelPreviewerHandleKeyEvents((LocalClientNum_t)v8, v7, down, time);
  if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v8) == CA_ACTIVE && !CL_Keys_IsCatcherActive((LocalClientNum_t)v8, -1) && CG_CreateFx_HandleKeyEvents((LocalClientNum_t)v8, v7, down, v12->repeats, time) )
    return;
  v16 = "devgui";
  v17 = 0x7FFFFFFFi64;
  if ( (_DWORD)v7 == 96 )
  {
    v18 = DVARBOOL_con_bindableGrave;
    if ( !DVARBOOL_con_bindableGrave && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_bindableGrave") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( !v18->current.enabled )
      goto LABEL_46;
    v11 = v8;
  }
  if ( (clientUIActives[v11].keyCatchers & 1) != 0 )
  {
LABEL_46:
    if ( DevGui_IsActive() )
      DevGui_Toggle();
    goto LABEL_48;
  }
  if ( v12->bindingCheat )
  {
    v19 = 0x7FFFFFFFi64;
    v20 = "devgui";
    do
    {
      v21 = (unsigned __int8)v20[v12->bindingCheat - "devgui"];
      v22 = v19;
      v23 = *(unsigned __int8 *)v20++;
      --v19;
      if ( !v22 )
        break;
      if ( v21 != v23 )
      {
        v24 = v21 + 32;
        if ( (unsigned int)(v21 - 65) > 0x19 )
          v24 = v21;
        v21 = v24;
        v25 = v23 + 32;
        if ( (unsigned int)(v23 - 65) > 0x19 )
          v25 = v23;
        if ( v21 != v25 )
          goto LABEL_42;
      }
    }
    while ( v21 );
    if ( down && v12->repeats == 1 )
      CL_Keys_AddBindingCommand((LocalClientNum_t)v8, v12->bindingCheat, v12);
  }
LABEL_42:
  if ( DevGui_IsActive() || g_cpuProfiler.m_enabled && R_IsCPUTimelineProfilerViewEnabled() )
  {
    DevGui_KeyPressed(v7, v12->repeats, down);
    return;
  }
LABEL_48:
  if ( down && v12->repeats > 1u )
  {
    if ( (clientUIActives[v53].keyCatchers & 0x221) == 0 && (unsigned int)(ActiveBinding - 153) > 3 )
      return;
    v26 = (_DWORD)v7 == 96 ? !Dvar_GetBool_Internal_DebugName(DVARBOOL_con_bindableGrave, "con_bindableGrave") : (_DWORD)v7 == 27;
    if ( v26 )
      return;
  }
  v27 = DVARBOOL_con_restricted;
  if ( !DVARBOOL_con_restricted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_restricted") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  v26 = !v27->current.enabled;
  v28 = v8;
  if ( v26 || (clientUIActives[v53].keyCatchers & 1) != 0 )
  {
    if ( (_DWORD)v7 == 96 )
    {
      v30 = DVARBOOL_con_bindableGrave;
      if ( !DVARBOOL_con_bindableGrave && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_bindableGrave") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v30);
      if ( !v30->current.enabled )
      {
        if ( down )
        {
          if ( !g_playerKeys[v55].keys[140].down && !g_playerKeys[v55].keys[141].down )
            goto LABEL_64;
          if ( !Con_IsActive((LocalClientNum_t)v8) )
            Con_ToggleConsole();
          Con_ToggleConsoleOutput();
        }
        return;
      }
      goto LABEL_93;
    }
LABEL_78:
    if ( (_DWORD)v7 != 27 || !down )
      goto LABEL_93;
    v31 = clientUIActives[v53].keyCatchers;
    if ( (v31 & 0x20) != 0 )
    {
      CL_Keys_MessageKey((LocalClientNum_t)v8, 27);
      return;
    }
    if ( (v31 & 1) != 0 )
    {
      Con_CancelAutoComplete();
      v31 = clientUIActives[v53].keyCatchers;
    }
    if ( (v31 & 8) == 0 )
    {
      if ( (v31 & 0x240) == 0 )
      {
        if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v8) == CA_ACTIVE )
        {
          Client = ClActiveClient::GetClient((const LocalClientNum_t)v8);
          Client->Pause(Client);
        }
        return;
      }
      if ( cls.uiStarted && LUI_CoD_IsEnabled() )
      {
        v33 = clientUIActives[v53].keyCatchers;
        ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v8);
        LUI_CoD_KeyEvent((LocalClientNum_t)v8, ControllerFromClient, 27, ActiveBinding, down, v33, 0);
        v28 = v8;
      }
    }
    v29 = (clientUIActives[v28].keyCatchers & 0x18) == 0;
    goto LABEL_92;
  }
  if ( (_DWORD)v7 == 152 )
  {
    if ( down && g_playerKeys[v55].keys[127].down )
    {
LABEL_64:
      Con_ToggleConsole();
      return;
    }
    goto LABEL_93;
  }
  if ( (_DWORD)v7 != 96 )
    goto LABEL_78;
  v29 = !Dvar_GetBool_Internal_DebugName(DVARBOOL_con_bindableGrave, "con_bindableGrave");
LABEL_92:
  if ( v29 )
    return;
LABEL_93:
  if ( (clientUIActives[v53].keyCatchers & 1) == 0 )
    CL_Cameraman_HandleInput((LocalClientNum_t)v8, v7, down);
  v35 = 0;
  if ( !CL_Keys_IsCatcherActive((LocalClientNum_t)v8, 1) )
    v35 = LUI_CoD_KeyEvent((LocalClientNum_t)v8, controllerIndex, v7, ActiveBinding, down, clientUIActives[v53].keyCatchers, 0) || (clientUIActives[v53].keyCatchers & 0x40) != 0;
  if ( (unsigned int)(ActiveBinding - 153) <= 3 || clientUIActives[v53].lastInputType == GAMEPAD )
    LUI_CoD_UpdateInputType(controllerIndex, KEYBOARD_NAVIGATION);
  if ( !CL_Input_HandleFrontendSceneDebugEvent((LocalClientNum_t)v8, ActiveBinding, v7, down, wasDown) )
  {
    if ( down )
    {
      if ( v35 )
        return;
      v40 = clientUIActives[v53].keyCatchers;
      if ( (v40 & 8) != 0 )
      {
        if ( (v40 & 1) != 0 )
        {
          CL_Keys_ConsoleKey((LocalClientNum_t)v8, v7);
          v40 = clientUIActives[v53].keyCatchers;
        }
        else if ( (_DWORD)v7 == 27 )
        {
          g_playerKeys[v55].locSelInputState = LOC_SEL_INPUT_CANCEL;
        }
        else if ( ActiveBinding == 1 || ActiveBinding == 41 )
        {
          g_playerKeys[v55].locSelInputState = LOC_SEL_INPUT_CONFIRM;
        }
        if ( (v40 & 0x10) == 0 )
          return;
      }
      else
      {
        g_playerKeys[v55].locSelInputState = LOC_SEL_INPUT_NONE;
        if ( (v40 & 0x18) == 0 )
          g_playerKeys[v55].overrideLocSelInputState = LOC_SEL_INPUT_NONE;
      }
      if ( (v40 & 1) != 0 )
        goto LABEL_169;
      if ( (v40 & 0x20) != 0 )
      {
        CL_Keys_MessageKey((LocalClientNum_t)v8, v7);
        return;
      }
      if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v8) == CA_DISCONNECTED )
      {
LABEL_169:
        CL_Keys_ConsoleKey((LocalClientNum_t)v8, v7);
      }
      else if ( ActiveBinding )
      {
        v48 = (ActiveBinding == 178) | !CL_Input_IsGamepadEnabled((LocalClientNum_t)v8);
        if ( ActiveBinding == 121 )
          v48 = 1;
        v49 = (ActiveBinding == 120) | v48;
        if ( ActiveBinding == 119 )
          v49 = 1;
        if ( v49 && v12->repeats <= 1u )
          CL_Input_ExecBinding((LocalClientNum_t)v8, ActiveBinding, v7, 0);
      }
      else
      {
        bindingCheat = v12->bindingCheat;
        if ( v12->bindingCheat )
        {
          if ( *bindingCheat == 43 )
          {
            LODWORD(keyCatchers) = time;
            LODWORD(fmt) = v7;
            Com_sprintf(dest, 0x400ui64, "%s %i %i", v12->bindingCheat, fmt, keyCatchers);
            if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 2145, ASSERT_TYPE_ASSERT, "(key)", (const char *)&queryFormat, "key") )
              __debugbreak();
            v38 = s_cmd_superUser_textArray;
            if ( !v12->isSuperUser )
              v38 = s_cmd_textArray;
            v37 = v8;
            goto LABEL_123;
          }
          do
          {
            v43 = (unsigned __int8)v16[bindingCheat - "devgui"];
            v44 = v17;
            v45 = *(unsigned __int8 *)v16++;
            --v17;
            if ( !v44 )
              break;
            if ( v43 != v45 )
            {
              v46 = v43 + 32;
              if ( (unsigned int)(v43 - 65) > 0x19 )
                v46 = v43;
              v43 = v46;
              v47 = v45 + 32;
              if ( (unsigned int)(v45 - 65) > 0x19 )
                v47 = v45;
              if ( v43 != v47 )
              {
                CL_Keys_AddBindingCommand((LocalClientNum_t)v8, v12->bindingCheat, v12);
                return;
              }
            }
          }
          while ( v43 );
        }
        else if ( (int)v7 >= 207 )
        {
          v42 = Com_Keys_KeynumToString(v7);
          Com_Printf(14, "%s is unbound, use controls menu to set.\n", v42);
        }
      }
    }
    else
    {
      if ( CL_Input_IsGamepadEnabled((LocalClientNum_t)v8) && s_activeInputContext[v8] != VEC3_POINTER && v12->activeBinding.action != BIND_CHATMODELASTUSED && (clientUIActives[v53].keyCatchers & 0x200) == 0 && LUI_BeginEvent((LocalClientNum_t)v8, "input_locked", LUI_luaVM) )
      {
        LUI_SetTableBool("isGamepadLocked", 0, LUI_luaVM);
        LUI_EndEvent(LUI_luaVM);
      }
      if ( wasDown && (ActiveBinding & 1) != 0 && (ActiveBinding <= 116 || (unsigned int)(ActiveBinding - 249) <= 5) )
      {
        CL_Input_ExecBinding((LocalClientNum_t)v8, ActiveBinding + 1, v7, wasDown);
        return;
      }
      v36 = v12->bindingCheat;
      if ( v12->bindingCheat && *v36 == 43 )
      {
        LODWORD(keyCatchers) = time;
        LODWORD(fmt) = v7;
        Com_sprintf(dest, 0x400ui64, "-%s %i %i", v36 + 1, fmt, keyCatchers);
        if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 2145, ASSERT_TYPE_ASSERT, "(key)", (const char *)&queryFormat, "key") )
          __debugbreak();
        v37 = v8;
        v38 = s_cmd_superUser_textArray;
        if ( !v12->isSuperUser )
          v38 = s_cmd_textArray;
LABEL_123:
        v39 = &v38[v37];
        Cbuf_AddText_Internal(dest, v39);
        Cbuf_AddText_Internal("\n", v39);
      }
    }
  }
}

/*
==============
CL_Keys_FindMatches
==============
*/
void CL_Keys_FindMatches(const char *s)
{
  unsigned __int64 v2; 
  int v3; 
  unsigned __int64 v4; 
  const dvar_t *v5; 
  __int64 v6; 
  char v7; 
  int v8; 
  const char *v9; 
  int v10; 

  v2 = -1i64;
  do
    ++v2;
  while ( s_completionString[v2] );
  v3 = truncate_cast<int,unsigned __int64>(v2);
  v4 = v3;
  if ( Con_IsAutoCompleteMatch(s, s_completionString, v3) )
  {
    if ( !con_ignoreMatchPrefixOnly )
    {
      v5 = DVARBOOL_con_matchPrefixOnly;
      if ( !DVARBOOL_con_matchPrefixOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_matchPrefixOnly") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      if ( v5->current.enabled )
        goto LABEL_11;
    }
    if ( I_strnicmp(s, s_completionString, v4) )
    {
      v6 = (unsigned int)s_prefixMatchCount;
      v7 = 0;
    }
    else
    {
LABEL_11:
      v7 = 1;
      v6 = (unsigned int)++s_prefixMatchCount;
    }
    if ( ++s_matchCount == 1 || v7 && (_DWORD)v6 == 1 )
    {
      Core_strcpy(s_shortestMatch, 0x400ui64, s);
      s_hasExactMatch = 1;
    }
    else if ( (_DWORD)v6 )
    {
      if ( v7 )
      {
        v8 = 0;
        if ( *s )
        {
          v9 = s;
          do
          {
            v10 = tolower(v9[s_shortestMatch - s]);
            if ( v10 != tolower(*v9) )
              break;
            ++v9;
            ++v8;
          }
          while ( *v9 );
        }
        LOBYTE(v6) = !s[v8] || s_hasExactMatch && !s_shortestMatch[v8];
        s_hasExactMatch = v6;
        if ( (unsigned __int64)v8 >= 0x400 )
        {
          j___report_rangecheckfailure(v6);
          JUMPOUT(0x141A26949i64);
        }
        s_shortestMatch[v8] = 0;
      }
    }
    else
    {
      Core_strcpy(s_shortestMatch, 0x400ui64, s_completionString);
    }
  }
}

/*
==============
CL_Keys_ForceDefaultKeyBindingReload
==============
*/
void CL_Keys_ForceDefaultKeyBindingReload(LocalClientNum_t localClientNum, const int controllerIndex)
{
  s_defaultKeyBindingsData.loaded = 0;
  CL_Keys_LoadBindings(localClientNum, controllerIndex);
}

/*
==============
CL_Keys_GetActiveBinding
==============
*/
__int64 CL_Keys_GetActiveBinding(LocalClientNum_t localClientNum, int keynum)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  v3 = keynum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 1400, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x100 )
  {
    LODWORD(v7) = 256;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 1401, ASSERT_TYPE_ASSERT, "(unsigned)( keynum ) < (unsigned)( 256 )", "keynum doesn't index MAX_KEYS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return (unsigned __int8)g_playerKeys[v2].keys[v3].activeBinding.action;
}

/*
==============
CL_Keys_GetActiveInputContext
==============
*/
__int64 CL_Keys_GetActiveInputContext(LocalClientNum_t localClientNum)
{
  return (unsigned __int8)s_activeInputContext[localClientNum];
}

/*
==============
CL_Keys_GetAllBindingsDLog
==============
*/
void CL_Keys_GetAllBindingsDLog(LocalClientNum_t localClientNum, int *bindsList, int *groundVehBindsList, int *flyingVehBindsList, int *brBindsList)
{
  int v9; 
  bool v10; 
  __int64 v11; 
  __int64 v12; 

  CL_Mgr_GetControllerFromClient(localClientNum);
  v9 = 1;
  v10 = 1;
  do
  {
    if ( !v10 )
    {
      LODWORD(v12) = 222;
      LODWORD(v11) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 1408, ASSERT_TYPE_ASSERT, "(unsigned)( keynum ) < (unsigned)( K_LAST_KEY )", "keynum doesn't index K_LAST_KEY\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    if ( KeyCodes_IsGamepadKey((keyNum_t)v9) )
    {
      KeyCodes_IsControllerKey((keyNum_t)v9);
    }
    else
    {
      CL_Keys_StoreKeyBindingForContextDLog(localClientNum, bindsList, v9, VEC3_POINTER|BYTE_VALUE);
      CL_Keys_StoreKeyBindingForContextDLog(localClientNum, bindsList, v9, VEC3_POINTER);
      CL_Keys_StoreKeyBindingForContextDLog(localClientNum, bindsList, v9, VEC3_VALUE);
      CL_Keys_StoreKeyBindingForContextDLog(localClientNum, bindsList, v9, BYTE_VALUE);
      CL_Keys_StoreKeyBindingForContextDLog(localClientNum, bindsList, v9, FLOAT_VALUE);
      CL_Keys_StoreKeyBindingForContextDLog(localClientNum, bindsList, v9, INVALID);
      CL_Keys_StoreKeyBindingForContextDLog(localClientNum, bindsList, v9, FLOAT_POINTER);
      CL_Keys_StoreKeyBindingForContextDLog(localClientNum, bindsList, v9, BOOL_VALUE);
      CL_Keys_StoreKeyBindingForContextDLog(localClientNum, groundVehBindsList, v9, BYTE_POINTER);
      CL_Keys_StoreKeyBindingForContextDLog(localClientNum, flyingVehBindsList, v9, INT_VALUE);
      CL_Keys_StoreKeyBindingForContextDLog(localClientNum, brBindsList, v9, STRUCT_POINTER|INT_VALUE);
      CL_Keys_StoreKeyBindingForContextDLog(localClientNum, brBindsList, v9, VEC3_POINTER|FLOAT_POINTER);
    }
    v10 = (unsigned int)++v9 < 0xDE;
  }
  while ( v9 < 222 );
}

/*
==============
CL_Keys_GetAlternateCommandAssignment
==============
*/
int CL_Keys_GetAlternateCommandAssignment(LocalClientNum_t localClientNum, const char *command, int *twokeys)
{
  InputMethod v6; 

  LOBYTE(v6) = CL_Input_IsGamepadActiveForContext(localClientNum, STRUCT_POINTER|FLOAT_POINTER) + 1;
  return CL_Keys_GetAlternateCommandAssignmentInternal(localClientNum, command, twokeys, v6, STRUCT_POINTER|FLOAT_POINTER);
}

/*
==============
CL_Keys_GetAlternateCommandAssignmentInternal
==============
*/
int CL_Keys_GetAlternateCommandAssignmentInternal(const LocalClientNum_t localClientNum, const char *const command, int *twokeys, const InputMethod inputMethod, const InputContext inputContext)
{
  __int64 v5; 
  const char *v6; 
  unsigned __int8 v8; 
  __int64 v11; 
  char v12; 
  __int64 *v13; 
  __int64 v14; 
  char v15; 
  int ControllerFromClient; 
  int v17; 
  __int64 v18; 
  char v19; 
  __int64 v20; 
  char v21; 
  __int64 v22; 
  char v23; 
  char v24; 
  int result; 
  __int64 v26[2]; 
  __int64 v27[2]; 
  __int64 v28[2]; 
  __int64 v29[2]; 
  __int64 v30[2]; 
  __int64 v31[3]; 
  __int64 v32[3]; 
  __int64 v33[3]; 
  __int64 v34[3]; 
  __int64 v35[3]; 
  __int64 v36[3]; 
  __int64 v37[4]; 
  __int64 v38[4]; 

  v5 = 0i64;
  v31[2] = 0i64;
  v38[2] = (__int64)"+sprint_zoom";
  v6 = "+melee_breath";
  v31[0] = (__int64)"+melee_breath";
  v33[0] = (__int64)"+holdbreath";
  v37[1] = (__int64)"+holdbreath";
  v31[1] = (__int64)"+melee_zoom";
  v35[0] = (__int64)"+movedown";
  v8 = inputMethod;
  v27[0] = (__int64)"+melee_zoom";
  v34[1] = (__int64)"+melee_zoom";
  v35[1] = (__int64)"+stancedown";
  v38[1] = (__int64)"+breath_sprint";
  v36[0] = (__int64)"goprone";
  v38[0] = (__int64)"+sprint";
  v36[1] = (__int64)"toggleprone";
  v38[3] = 0i64;
  v26[0] = (__int64)"+equip_toggle_throw";
  v32[0] = (__int64)"+melee_breath";
  v29[0] = (__int64)"+attack_akimbo_accessible";
  v11 = 0i64;
  v32[1] = (__int64)"+breath_sprint";
  v30[0] = (__int64)"+ads_akimbo_accessible";
  v32[2] = 0i64;
  v33[1] = (__int64)"+breath_sprint";
  v33[2] = 0i64;
  v27[1] = 0i64;
  v37[0] = (__int64)"+changezoom";
  v37[2] = (__int64)"+breath_sprint";
  v37[3] = 0i64;
  v34[0] = (__int64)"+changezoom";
  v34[2] = 0i64;
  v28[0] = (__int64)"+changezoom";
  v28[1] = 0i64;
  v35[2] = 0i64;
  v36[2] = 0i64;
  v26[1] = 0i64;
  v29[1] = 0i64;
  v30[1] = 0i64;
  while ( 1 )
  {
    v12 = command[v11++];
    if ( v12 != aMelee_1[v11 - 1] )
      break;
    if ( v11 == 7 )
    {
      v13 = v31;
      goto LABEL_43;
    }
  }
  v14 = 0i64;
  while ( 1 )
  {
    v15 = command[v14++];
    if ( v15 != aSprint[v14 - 1] )
      break;
    if ( v14 == 8 )
      goto LABEL_42;
  }
  if ( !strcmp_0(command, "+breath_sprint") )
  {
LABEL_42:
    v13 = v38;
    v6 = "+sprint";
    goto LABEL_43;
  }
  if ( !strcmp_0(command, "+holdbreath") )
  {
    v13 = v32;
    goto LABEL_43;
  }
  if ( !strcmp_0(command, "+changezoom") )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    if ( GamerProfile_IsZoomBindedToCmdType(ControllerFromClient, ZOOM_HYBRID_CMD_BREATH) )
    {
      v13 = v33;
      v6 = "+holdbreath";
      goto LABEL_43;
    }
    if ( GamerProfile_IsZoomBindedToCmdType(ControllerFromClient, ZOOM_HYBRID_CMD_MELEE) )
    {
      v13 = v27;
      v6 = "+melee_zoom";
      goto LABEL_43;
    }
    return 0;
  }
  if ( strcmp_0(command, "togglehybrid") )
  {
    if ( !strcmp_0(command, "+togglecrouch") )
    {
      v13 = v35;
      v6 = "+movedown";
      goto LABEL_43;
    }
    v18 = 0i64;
    while ( 1 )
    {
      v19 = command[v18++];
      if ( v19 != aProne[v18 - 1] )
        break;
      if ( v18 == 7 )
      {
        v13 = v36;
        v6 = "goprone";
        goto LABEL_43;
      }
    }
    v20 = 0i64;
    while ( 1 )
    {
      v21 = command[v20++];
      if ( v21 != aFrag[v20 - 1] )
        break;
      if ( v20 == 6 )
      {
        v13 = v26;
        v6 = "+equip_toggle_throw";
        goto LABEL_43;
      }
    }
    v22 = 0i64;
    while ( 1 )
    {
      v23 = command[v22++];
      if ( v23 != aSmoke_1[v22 - 1] )
        break;
      if ( v22 == 7 )
      {
        v13 = v26;
        v6 = "+equip_toggle_throw";
        goto LABEL_43;
      }
    }
    while ( 1 )
    {
      v24 = command[v5++];
      if ( v24 != aAttack[v5 - 1] )
        break;
      if ( v5 == 8 )
      {
        v13 = v29;
        v6 = "+attack_akimbo_accessible";
        goto LABEL_43;
      }
    }
    if ( !strcmp_0(command, "+speed_throw") )
    {
      v13 = v30;
      v6 = "+ads_akimbo_accessible";
      goto LABEL_43;
    }
    return 0;
  }
  v17 = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( GamerProfile_IsHybridBindedToCmdType(v17, ZOOM_HYBRID_CMD_BREATH) )
  {
    v13 = v37;
    v6 = "+changezoom";
  }
  else
  {
    v6 = "+changezoom";
    if ( GamerProfile_IsHybridBindedToCmdType(v17, ZOOM_HYBRID_CMD_MELEE) )
      v13 = v34;
    else
      v13 = v28;
  }
LABEL_43:
  while ( 1 )
  {
    result = CL_Keys_GetCommandAssignmentInternal(localClientNum, v6, twokeys, (InputMethod)v8, inputContext);
    if ( result )
      break;
    v6 = (const char *)v13[1];
    ++v13;
    if ( !v6 )
      return 0;
  }
  return result;
}

/*
==============
CL_Keys_GetAlternateKeyBinding
==============
*/
__int64 CL_Keys_GetAlternateKeyBinding(LocalClientNum_t localClientNum, const char *command, char (*bindings)[128], InputContext inputContext)
{
  unsigned __int8 v8; 
  int ControllerFromClient; 
  int AlternateCommandAssignmentInternal; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  const char *v14; 
  int twokeys[10]; 

  v8 = CL_Input_IsGamepadActiveForContext(localClientNum, inputContext) + 1;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  AlternateCommandAssignmentInternal = CL_Keys_GetAlternateCommandAssignmentInternal(localClientNum, command, twokeys, (const InputMethod)v8, inputContext);
  v11 = AlternateCommandAssignmentInternal;
  if ( AlternateCommandAssignmentInternal > 0 )
  {
    v12 = 0i64;
    do
    {
      v13 = twokeys[v12];
      if ( Com_Keys_IsValidGamePadChar(v13) )
      {
        (*bindings)[0] = v13;
        (*bindings)[1] = 0;
      }
      else
      {
        v14 = Com_Keys_KeynumToLocalizedKeyName(ControllerFromClient, v13);
        Core_strcpy((char *)bindings, 0x80ui64, v14);
      }
      ++v12;
      ++bindings;
    }
    while ( v12 < v11 );
  }
  return (unsigned int)v11;
}

/*
==============
CL_Keys_GetBinding
==============
*/
__int64 CL_Keys_GetBinding(LocalClientNum_t localClientNum, int keynum, InputContext inputContext)
{
  __int64 v3; 
  __int64 v7; 
  __int64 v8; 
  CL_KeyBind result; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 1376, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)keynum >= 0x100 )
  {
    LODWORD(v8) = 256;
    LODWORD(v7) = keynum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 1377, ASSERT_TYPE_ASSERT, "(unsigned)( keynum ) < (unsigned)( 256 )", "keynum doesn't index MAX_KEYS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return (unsigned __int8)CL_KeyBindings::GetKeyBind(&s_keyBindings[v3], &result, inputContext, (keyNum_t)keynum)->action;
}

/*
==============
CL_Keys_GetBindingCheat
==============
*/
const char *CL_Keys_GetBindingCheat(LocalClientNum_t localClientNum, int keynum, InputContext inputContext)
{
  __int64 v3; 
  __int64 v5; 
  int Binding; 
  __int64 v8; 
  __int64 v9; 

  v3 = localClientNum;
  v5 = keynum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 1336, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x100 )
  {
    LODWORD(v9) = 256;
    LODWORD(v8) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 1337, ASSERT_TYPE_ASSERT, "(unsigned)( keynum ) < (unsigned)( 256 )", "keynum doesn't index MAX_KEYS\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  Binding = CL_Keys_GetBinding((LocalClientNum_t)v3, v5, inputContext);
  if ( Binding )
    return Com_Keys_GetCommandForBinding(Binding);
  else
    return g_playerKeys[v3].keys[v5].bindingCheat;
}

/*
==============
CL_Keys_GetBindingSuperUser
==============
*/
_BOOL8 CL_Keys_GetBindingSuperUser(LocalClientNum_t localClientNum, int keynum)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  int v8; 

  v2 = localClientNum;
  v3 = keynum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 1365, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x100 )
  {
    LODWORD(v7) = 256;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 1366, ASSERT_TYPE_ASSERT, "(unsigned)( keynum ) < (unsigned)( 256 )", "keynum doesn't index MAX_KEYS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return g_playerKeys[v2].keys[v3].isSuperUser;
}

/*
==============
CL_Keys_GetBoundKey
==============
*/
keyNum_t CL_Keys_GetBoundKey(LocalClientNum_t localClientNum, InputContext inputContext, Bind action, CL_KeyBindSlot slot, bool inherit)
{
  __int64 v5; 
  int v11; 

  v5 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v11 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 2904, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v11) )
      __debugbreak();
  }
  return CL_Keys_GetBoundKey_Internal(&s_keyBindings[v5], inputContext, action, slot, inherit);
}

/*
==============
CL_Keys_GetBoundKey_Internal
==============
*/
keyNum_t CL_Keys_GetBoundKey_Internal(const CL_KeyBindings *keyBindings, const InputContext inputContext, const Bind action, const CL_KeyBindSlot slot, const bool inherit)
{
  int v8; 
  int Inherited; 
  __int64 v10; 
  __int64 v11; 
  keyNum_t Key; 
  __int64 v14; 
  CL_KeyBind result; 
  InputContext inheritedContexts[15]; 

  if ( !inherit )
    return CL_KeyBindings::GetKey((CL_KeyBindings *)keyBindings, inputContext, action, slot);
  v8 = 0;
  Inherited = CL_InputContext_GetInherited(inputContext, (InputContext (*)[15])inheritedContexts);
  v10 = Inherited;
  if ( Inherited > 0 )
  {
    v11 = 0i64;
    while ( 1 )
    {
      Key = CL_KeyBindings::GetKey((CL_KeyBindings *)keyBindings, inheritedContexts[v11], action, slot);
      if ( Key != K_INHERIT )
        break;
      ++v8;
      if ( ++v11 >= v10 )
        return 0;
    }
    if ( Key == K_NONE )
      return Key;
    v14 = v8 - 1;
    if ( v8 - 1 < 0 )
      return Key;
    while ( CL_KeyBindings::GetKeyBind((CL_KeyBindings *)keyBindings, &result, inheritedContexts[v14], Key)->action == BIND_VOID )
    {
      if ( --v14 < 0 )
        return Key;
    }
  }
  return 0;
}

/*
==============
CL_Keys_GetCommandAssignment
==============
*/
int CL_Keys_GetCommandAssignment(LocalClientNum_t localClientNum, const char *command, int *twokeys, InputMethod a4)
{
  LOBYTE(a4) = 3;
  return CL_Keys_GetCommandAssignmentInternal(localClientNum, command, twokeys, a4, STRUCT_POINTER|FLOAT_POINTER);
}

/*
==============
CL_Keys_GetCommandAssignmentInternal
==============
*/
__int64 CL_Keys_GetCommandAssignmentInternal(LocalClientNum_t localClientNum, const char *command, int *twokeys, InputMethod inputMethod, InputContext inputContext)
{
  __int64 v5; 
  unsigned int v8; 
  int BindingForCommand; 
  int ControllerFromClient; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  const char *bindingCheat; 
  InputContext v15; 
  int v16; 
  __int64 v17; 
  CL_KeyBindSlot slot; 
  int v19; 
  __int64 v21; 
  __int64 v22; 
  int result; 
  unsigned __int8 v24; 

  v24 = inputMethod;
  v5 = localClientNum;
  *(_QWORD *)twokeys = -1i64;
  v8 = 0;
  BindingForCommand = Com_Keys_GetBindingForCommand(command);
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v5);
  result = ControllerFromClient;
  v11 = 1;
  v12 = 0i64;
  if ( BindingForCommand )
  {
    v15 = inputContext;
    while ( 1 )
    {
      if ( CL_Keys_KeynumMatchesInputMethod(ControllerFromClient, v11, (InputMethod)v24) )
      {
        v16 = v15 == (STRUCT_POINTER|FLOAT_POINTER) ? CL_Keys_GetActiveBinding((LocalClientNum_t)v5, v11) : CL_Keys_GetBinding((LocalClientNum_t)v5, v11, v15);
        if ( v16 == BindingForCommand )
        {
          twokeys[v12] = v11;
          ++v8;
          if ( ++v12 == 2 )
            break;
        }
      }
      if ( ++v11 >= 222 )
        return v8;
      ControllerFromClient = result;
    }
    v17 = *twokeys;
    if ( (unsigned int)v5 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 1384, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, 2) )
      __debugbreak();
    if ( (unsigned int)v17 >= 0x100 )
    {
      LODWORD(v22) = 256;
      LODWORD(v21) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 1385, ASSERT_TYPE_ASSERT, "(unsigned)( keynum ) < (unsigned)( 256 )", "keynum doesn't index MAX_KEYS\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    if ( v15 == (STRUCT_POINTER|FLOAT_POINTER) )
      slot = g_playerKeys[v5].keys[v17].activeBinding.slot;
    else
      slot = CL_KeyBindings::GetKeyBind(&s_keyBindings[v5], (CL_KeyBind *)&result, v15, (keyNum_t)v17)->slot;
    if ( slot == BOOL_VALUE )
    {
      v19 = *twokeys;
      *twokeys = twokeys[1];
      twokeys[1] = v19;
    }
  }
  else
  {
    v13 = 1i64;
    do
    {
      if ( CL_Keys_KeynumMatchesInputMethod(ControllerFromClient, v11, (InputMethod)v24) )
      {
        bindingCheat = g_playerKeys[v5].keys[v13].bindingCheat;
        if ( bindingCheat )
        {
          if ( !I_strnicmp(bindingCheat, command, 0x7FFFFFFFui64) )
          {
            twokeys[v12] = v11;
            ++v8;
            if ( ++v12 == 2 )
              break;
          }
        }
      }
      ControllerFromClient = result;
      ++v11;
      ++v13;
    }
    while ( v11 < 222 );
  }
  return v8;
}

/*
==============
CL_Keys_GetDefaultKey
==============
*/
keyNum_t CL_Keys_GetDefaultKey(LocalClientNum_t localClientNum, InputContext inputContext, Bind action, CL_KeyBindSlot slot, bool inherit)
{
  __int64 v10; 
  int v11; 

  if ( !s_defaultKeyBindingsData.loaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 3427, ASSERT_TYPE_ASSERT, "(data.loaded)", (const char *)&queryFormat, "data.loaded") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v11 = 2;
    LODWORD(v10) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 3428, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  return CL_Keys_GetBoundKey_Internal(&s_defaultKeyBindingsData.keyBindings, inputContext, action, slot, inherit);
}

/*
==============
CL_Keys_GetGamePadBinding
==============
*/
int CL_Keys_GetGamePadBinding(LocalClientNum_t localClientNum, const char *command, char (*keyNames)[128], InputMethod currentContext)
{
  InputContext currentContexta; 

  currentContexta = (char)currentContext;
  LOBYTE(currentContext) = 2;
  return CL_Keys_GetKeyBindingInternal(localClientNum, command, keyNames, currentContext, currentContexta);
}

/*
==============
CL_Keys_GetKeyBinding
==============
*/
int CL_Keys_GetKeyBinding(LocalClientNum_t localClientNum, const char *command, char (*keyNames)[128], InputMethod currentContext)
{
  InputContext currentContexta; 

  currentContexta = (char)currentContext;
  LOBYTE(currentContext) = 1;
  return CL_Keys_GetKeyBindingInternal(localClientNum, command, keyNames, currentContext, currentContexta);
}

/*
==============
CL_Keys_GetKeyBindingInternal
==============
*/
__int64 CL_Keys_GetKeyBindingInternal(LocalClientNum_t localClientNum, const char *command, char (*keyNames)[128], InputMethod inputMethod, InputContext currentContext)
{
  int CommandAssignmentInternal; 
  int v8; 
  int v9; 
  __int64 v10; 
  unsigned int MouseButtons; 
  __int64 v12; 
  int ControllerFromClient; 
  int v14; 
  const char *v15; 
  int twokeys; 
  int v18; 

  CommandAssignmentInternal = CL_Keys_GetCommandAssignmentInternal(localClientNum, command, &twokeys, inputMethod, currentContext);
  v8 = v18;
  v9 = 154;
  v10 = CommandAssignmentInternal;
  if ( v18 == 154 )
  {
    v8 = twokeys;
    twokeys = 154;
    v18 = v8;
  }
  else
  {
    v9 = twokeys;
  }
  MouseButtons = GetMouseButtons(localClientNum);
  if ( v8 >= 187 && v8 < (int)(MouseButtons + 187) )
  {
    twokeys = v8;
    v18 = v9;
  }
  v12 = 0i64;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( (unsigned int)v10 > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 3000, ASSERT_TYPE_ASSERT, "( 0 ) <= ( bindCount ) && ( bindCount ) <= ( 2 )", "bindCount not in [0, 2]\n\t%i not in [%i, %i]", v10, 0i64, 2) )
    __debugbreak();
  do
  {
    if ( v12 >= v10 )
    {
      (*keyNames)[0] = 0;
    }
    else
    {
      v14 = *(&twokeys + v12);
      if ( Com_Keys_IsValidGamePadChar(v14) )
      {
        (*keyNames)[0] = v14;
        (*keyNames)[1] = 0;
      }
      else
      {
        v15 = Com_Keys_KeynumToLocalizedKeyName(ControllerFromClient, v14);
        Core_strcpy((char *)keyNames, 0x80ui64, v15);
      }
    }
    ++v12;
    ++keyNames;
  }
  while ( v12 < 2 );
  return (unsigned int)v10;
}

/*
==============
CL_Keys_GetKeyState
==============
*/
PlayerKeyState *CL_Keys_GetKeyState(LocalClientNum_t localClientNum)
{
  return &g_playerKeys[localClientNum];
}

/*
==============
CL_Keys_GetOverstrikeMode
==============
*/
__int64 CL_Keys_GetOverstrikeMode(LocalClientNum_t localClientNum)
{
  return (unsigned int)g_playerKeys[localClientNum].overstrikeMode;
}

/*
==============
CL_Keys_Init
==============
*/
void CL_Keys_Init(void)
{
  *(_WORD *)s_activeInputContext = 3855;
  Cmd_AddCommandInternal("bind", CL_Keys_Bind_f, &CL_Keys_Bind_f_VAR);
  Cmd_AddCommandInternal("bindc", CL_Keys_BindC_f, &CL_Keys_BindC_f_VAR);
  Cmd_AddCommandInternal("bind_swap", CL_Keys_SwapBind_f, &CL_Keys_SwapBind_f_VAR);
  Cmd_AddCommandInternal("bind_copy", CL_Keys_CopyBind_f, &CL_Keys_CopyBind_f_VAR);
  Cmd_AddCommandInternal("unbind", CL_Keys_Unbind_f, &CL_Keys_Unbind_f_VAR);
  Cmd_AddCommandInternal("unbindall", CL_Keys_Unbindall_f, &CL_Keys_Unbindall_f_VAR);
  Cmd_AddCommandInternal("bindlist", CL_Keys_Bindlist_f, &CL_Keys_Bindlist_f_VAR);
  Cmd_AddSuperUserCommandInternal("bind", CL_Keys_SuperUserBind_f, &CL_Keys_SuperUserBind_f_VAR);
  Cmd_AddSuperUserCommandInternal("unbind", CL_Keys_SuperUserUnbind_f, &CL_Keys_SuperUserUnbind_f_VAR);
  Cmd_AddSuperUserCommandInternal("unbindall", CL_Keys_SuperUserUnbindall_f, &CL_Keys_SuperUserUnbindall_f_VAR);
}

/*
==============
CL_Keys_IsActionBoundToKey
==============
*/
keyNum_t CL_Keys_IsActionBoundToKey(const LocalClientNum_t localClientNum, const InputContext inputContext, const Bind action, const bool inherit)
{
  keyNum_t BoundKey; 
  keyNum_t result; 

  BoundKey = CL_Keys_GetBoundKey(localClientNum, inputContext, action, INVALID, inherit);
  result = CL_Keys_GetBoundKey(localClientNum, inputContext, action, BOOL_VALUE, inherit);
  if ( BoundKey || result )
    return 1;
  return result;
}

/*
==============
CL_Keys_IsAlternateKeyBound
==============
*/
bool CL_Keys_IsAlternateKeyBound(LocalClientNum_t localClientNum, const char *command, InputContext inputContext)
{
  InputMethod v6; 
  int twokeys; 

  LOBYTE(v6) = CL_Input_IsGamepadActiveForContext(localClientNum, inputContext) + 1;
  return CL_Keys_GetAlternateCommandAssignmentInternal(localClientNum, command, &twokeys, v6, inputContext) > 0;
}

/*
==============
CL_Keys_IsCatcherActive
==============
*/
bool CL_Keys_IsCatcherActive(LocalClientNum_t localClientNum, int mask)
{
  __int64 v2; 
  int v6; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  return (mask & clientUIActives[v2].keyCatchers) != 0;
}

/*
==============
CL_Keys_IsCommandAssignmentBoundInternal
==============
*/
char CL_Keys_IsCommandAssignmentBoundInternal(LocalClientNum_t localClientNum, const char *command, InputMethod inputMethod, InputContext currentContext)
{
  __int64 v4; 
  unsigned __int8 v6; 
  int BindingForCommand; 
  int ControllerFromClient; 
  int v10; 
  __int64 i; 
  const char *bindingCheat; 
  int v14; 

  v4 = localClientNum;
  v6 = inputMethod;
  BindingForCommand = Com_Keys_GetBindingForCommand(command);
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
  v10 = 1;
  if ( BindingForCommand )
  {
    while ( 1 )
    {
      if ( CL_Keys_KeynumMatchesInputMethod(ControllerFromClient, v10, (InputMethod)v6) )
      {
        v14 = currentContext == (STRUCT_POINTER|FLOAT_POINTER) ? CL_Keys_GetActiveBinding((LocalClientNum_t)v4, v10) : CL_Keys_GetBinding((LocalClientNum_t)v4, v10, currentContext);
        if ( v14 == BindingForCommand )
          break;
      }
      if ( ++v10 >= 222 )
        return 0;
    }
  }
  else
  {
    for ( i = 1i64; ; ++i )
    {
      if ( CL_Keys_KeynumMatchesInputMethod(ControllerFromClient, v10, (InputMethod)v6) )
      {
        bindingCheat = g_playerKeys[v4].keys[i].bindingCheat;
        if ( bindingCheat )
        {
          if ( !I_strnicmp(bindingCheat, command, 0x7FFFFFFFui64) )
            break;
        }
      }
      if ( ++v10 >= 222 )
        return 0;
    }
  }
  return 1;
}

/*
==============
CL_Keys_IsCommandBound
==============
*/
_BOOL8 CL_Keys_IsCommandBound(LocalClientNum_t localClientNum, const char *command, __int64 a3, InputMethod a4)
{
  int twokeys; 

  LOBYTE(a4) = 3;
  return (int)CL_Keys_GetCommandAssignmentInternal(localClientNum, command, &twokeys, a4, STRUCT_POINTER|FLOAT_POINTER) > 0;
}

/*
==============
CL_Keys_IsGamepadKeyBound
==============
*/
char CL_Keys_IsGamepadKeyBound(LocalClientNum_t localClientNum, const char *command, InputMethod currentContext)
{
  InputContext v3; 

  v3 = (char)currentContext;
  LOBYTE(currentContext) = 2;
  return CL_Keys_IsCommandAssignmentBoundInternal(localClientNum, command, currentContext, v3);
}

/*
==============
CL_Keys_IsKBMKeyBound
==============
*/
char CL_Keys_IsKBMKeyBound(LocalClientNum_t localClientNum, const char *command, InputMethod currentContext)
{
  InputContext v3; 

  v3 = (char)currentContext;
  LOBYTE(currentContext) = 1;
  return CL_Keys_IsCommandAssignmentBoundInternal(localClientNum, command, currentContext, v3);
}

/*
==============
CL_Keys_IsKeyDown
==============
*/
_BOOL8 CL_Keys_IsKeyDown(LocalClientNum_t localClientNum, int keynum)
{
  return keynum != -1 && g_playerKeys[localClientNum].keys[keynum].down;
}

/*
==============
CL_Keys_IsKeyPressed
==============
*/
_BOOL8 CL_Keys_IsKeyPressed(const LocalClientNum_t localClientNum, const char *keyName)
{
  __int64 v2; 
  int v3; 
  __int64 v4; 
  int v6; 

  v2 = localClientNum;
  v3 = Com_Keys_StringToKeynum(keyName);
  v4 = v3;
  if ( v3 < 0 )
    return 0i64;
  if ( (unsigned int)v2 > 1 )
  {
    v6 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 3205, ASSERT_TYPE_ASSERT, "( ( localClientNum >= 0 && localClientNum < 2 ) )", "( localClientNum ) = %i", v6) )
      __debugbreak();
  }
  return g_playerKeys[v2].keys[v4].down;
}

/*
==============
CL_Keys_IsModifierKeyDown
==============
*/
_BOOL8 CL_Keys_IsModifierKeyDown(const KeyState *const keys, keyModifierNum_t keyModifierNum)
{
  __int64 v2; 
  int v6; 

  v2 = keyModifierNum;
  if ( (unsigned int)keyModifierNum > KMOD_SHIFT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 1237, ASSERT_TYPE_ASSERT, "( KMOD_ALT ) <= ( keyModifierNum ) && ( keyModifierNum ) <= ( KMOD_COUNT - 1 )", "keyModifierNum not in [KMOD_ALT, KMOD_COUNT - 1]\n\t%i not in [%i, %i]", keyModifierNum, 0i64, v6) )
      __debugbreak();
  }
  return keys[(unsigned __int8)s_keyModifierNumToKeyNumMap[v2][0]].down || keys[(unsigned __int8)s_keyModifierNumToKeyNumMap[v2][1]].down;
}

/*
==============
CL_Keys_IsModifierKeyDown
==============
*/
_BOOL8 CL_Keys_IsModifierKeyDown(LocalClientNum_t localClientNum, keyModifierNum_t keyModifierNum)
{
  return CL_Keys_IsModifierKeyDown(g_playerKeys[localClientNum].keys, keyModifierNum);
}

/*
==============
CL_Keys_KeyDownEvent
==============
*/
_BOOL8 CL_Keys_KeyDownEvent(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, field_t *edit, int key)
{
  __int64 v4; 
  int v8; 
  __int64 v9; 
  int v10; 
  unsigned __int64 v11; 
  int v12; 
  const ScreenPlacement *v13; 
  bool v14; 
  __int64 cursor; 
  char *v16; 
  __int64 v17; 
  int v18; 
  __int64 v19; 
  int v20; 
  int v21; 
  __int64 v22; 
  int v23; 
  int v24; 
  int v25; 

  v4 = 0i64;
  v8 = 1;
  v9 = localClientNum;
  if ( g_playerKeys[v9].keys[140].down || (v10 = 0, g_playerKeys[v9].keys[141].down) )
    v10 = 1;
  if ( !g_playerKeys[v9].keys[138].down && !g_playerKeys[v9].keys[139].down )
    v8 = 0;
  v11 = -1i64;
  do
    ++v11;
  while ( edit->buffer[v11] );
  v12 = truncate_cast<int,unsigned __int64>(v11);
  if ( (key == 148 || key == 179) && v10 )
  {
    v13 = scrPlace;
    v14 = CL_Keys_PasteField(localClientNum, scrPlace, edit);
    goto LABEL_61;
  }
  if ( key == 149 )
  {
    cursor = edit->cursor;
    if ( (int)cursor < v12 )
    {
      v16 = &edit->buffer[cursor];
      LOBYTE(v4) = *v16 == -62;
      memmove_0(v16, &edit->buffer[v4 + 1 + cursor], v12 - (int)cursor);
    }
LABEL_60:
    v13 = scrPlace;
    v14 = 0;
    goto LABEL_61;
  }
  if ( key == 135 )
  {
    v17 = edit->cursor;
    v18 = v17;
    if ( (int)v17 < v12 && edit->buffer[v17] == -62 )
    {
      v18 = v17 + 1;
      edit->cursor = v17 + 1;
    }
    if ( v18 < v12 )
      edit->cursor = ++v18;
    if ( v8 )
    {
      if ( v18 < v12 )
      {
        do
        {
          if ( !isalnum(edit->buffer[v18]) )
            break;
          v19 = edit->cursor;
          v20 = v19;
          if ( (int)v19 < v12 && edit->buffer[v19] == -62 )
            v20 = v19 + 1;
          v18 = v20 + 1;
          edit->cursor = v20 + 1;
        }
        while ( v20 + 1 < v12 );
      }
      v21 = edit->cursor;
      if ( edit->cursor < v12 )
      {
        do
        {
          if ( isalnum(edit->buffer[v21]) )
            break;
          v22 = edit->cursor;
          v23 = v22;
          if ( (int)v22 < v12 && edit->buffer[v22] == -62 )
            v23 = v22 + 1;
          v21 = v23 + 1;
          edit->cursor = v23 + 1;
        }
        while ( v23 + 1 < v12 );
      }
    }
    goto LABEL_60;
  }
  if ( key != 134 )
  {
    if ( key == 152 || tolower(key) == 97 && v8 )
    {
      edit->cursor = 0;
    }
    else if ( key == 153 || tolower(key) == 101 && v8 )
    {
      edit->cursor = v12;
    }
    else if ( key == 148 )
    {
      LOBYTE(v4) = g_playerKeys[v9].overstrikeMode == 0;
      g_playerKeys[v9].overstrikeMode = v4;
    }
    goto LABEL_60;
  }
  v24 = edit->cursor;
  if ( edit->cursor > 0 )
  {
    edit->cursor = --v24;
    if ( v24 > 0 && edit->buffer[v24 - 1] == -62 )
      edit->cursor = --v24;
  }
  if ( v8 && v24 > 0 )
  {
    do
    {
      if ( !isalnum(*((char *)&edit->fixedSize + v24 + 3)) )
        break;
      v25 = edit->cursor - 1;
      edit->cursor = v25;
      v24 = v25;
      if ( v25 > 0 && *((_BYTE *)&edit->fixedSize + v25 + 3) == 0xC2 )
      {
        edit->cursor = v25 - 1;
        v24 = v25 - 1;
      }
    }
    while ( v24 > 0 );
  }
  v14 = 0;
  v13 = scrPlace;
  if ( edit->cursor < edit->scroll )
    edit->scroll = edit->cursor;
LABEL_61:
  if ( cls.uiStarted )
    CL_Keys_AdjustScrollField(v13, edit);
  return v14;
}

/*
==============
CL_Keys_KeynumMatchesInputMethod
==============
*/
bool CL_Keys_KeynumMatchesInputMethod(int controllerIndex, int keynum, InputMethod inputMethod)
{
  char v3; 
  keyNum_t v4; 
  bool IsControllerKey; 
  int v8; 

  v3 = inputMethod;
  v4 = (char)keynum;
  if ( (unsigned int)keynum >= 0xDE )
  {
    v8 = 222;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 1408, ASSERT_TYPE_ASSERT, "(unsigned)( keynum ) < (unsigned)( K_LAST_KEY )", "keynum doesn't index K_LAST_KEY\n\t%i not in [0, %i)", keynum, v8) )
      __debugbreak();
  }
  if ( !KeyCodes_IsGamepadKey(v4) )
    return v3 & 1;
  IsControllerKey = KeyCodes_IsControllerKey(v4);
  return (v3 & 2) != 0 && IsControllerKey;
}

/*
==============
CL_Keys_LoadBindings
==============
*/
void CL_Keys_LoadBindings(LocalClientNum_t localClientNum, int controllerIndex)
{
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  CL_KeyBindings *v5; 
  const dvar_t *v6; 
  const char *v7; 
  const char *v8; 
  EnumIndexedArray<EnumIndexedArray<CL_KeyBindings_LoadResultData,enum CL_KeyBindSlot> [255],enum InputContext> *v9; 
  __int64 v10; 
  const dvar_t *v11; 
  int i; 
  int j; 
  int v14; 
  __int64 v15; 
  bool v16; 
  keyNum_t BoundKey_Internal; 
  const char *v18; 
  CL_KeyBind (*unboundActions)[15]; 
  __int64 v20; 
  EnumIndexedArray<EnumIndexedArray<CL_KeyBindings_LoadResultData,enum CL_KeyBindSlot> [255],enum InputContext> v22; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 3450, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v4 = v3;
  v5 = &s_keyBindings[v3];
  if ( s_defaultKeyBindingsData.loaded )
  {
    memcpy_0(&s_keyBindings[v3], &s_defaultKeyBindingsData, sizeof(CL_KeyBindings));
  }
  else
  {
    v6 = DVARBOOL_cl_use_experimental_default_keybindings;
    if ( !DVARBOOL_cl_use_experimental_default_keybindings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_use_experimental_default_keybindings") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v7 = "experimental_default_keys.cfg";
    if ( !v6->current.enabled )
      v7 = "default_keys.cfg";
    v8 = j_va("exec %s\n", v7);
    Cmd_ExecuteSingleCommand_Internal((LocalClientNum_t)v3, controllerIndex, v8, 0);
    memcpy_0(&s_defaultKeyBindingsData, &s_keyBindings[v3], 0x46D7ui64);
    s_defaultKeyBindingsData.loaded = 1;
  }
  v9 = &v22;
  v10 = 3825i64;
  do
  {
    EnumIndexedArray<CL_KeyBindings_LoadResultData,enum CL_KeyBindSlot>::EnumIndexedArray<CL_KeyBindings_LoadResultData,enum CL_KeyBindSlot>((EnumIndexedArray<CL_KeyBindings_LoadResultData,enum CL_KeyBindSlot> *)v9);
    v9 = (EnumIndexedArray<EnumIndexedArray<CL_KeyBindings_LoadResultData,enum CL_KeyBindSlot> [255],enum InputContext> *)((char *)v9 + 4);
    --v10;
  }
  while ( v10 );
  v11 = DCONST_DVARBOOL_cl_useKeyBindingsFile;
  if ( !DCONST_DVARBOOL_cl_useKeyBindingsFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_useKeyBindingsFile") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled && CL_KeyBindings_Load(controllerIndex, &s_keyBindings[v3], "user_keys.kb", &v22) )
  {
    for ( i = 0; i < 15; ++i )
    {
      for ( j = 1; j < 255; ++j )
      {
        v14 = 0;
        v15 = (unsigned __int8)j;
        do
        {
          v16 = (_BYTE)v14 == 0;
          if ( (unsigned __int8)i >= 0xFu )
          {
            LODWORD(v20) = 15;
            LODWORD(unboundActions) = (unsigned __int8)i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\enum_indexed_array.h", 13, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( COUNT )", "index doesn't index COUNT\n\t%i not in [0, %i)", unboundActions, v20) )
              __debugbreak();
          }
          if ( (unsigned __int8)v14 >= 2u )
          {
            LODWORD(v20) = 2;
            LODWORD(unboundActions) = (unsigned __int8)v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\enum_indexed_array.h", 13, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( COUNT )", "index doesn't index COUNT\n\t%i not in [0, %i)", unboundActions, v20) )
              __debugbreak();
          }
          if ( v22.data[(unsigned __int8)i][v15].data[(unsigned __int8)v14].unbound && CL_KeyBindings::GetKey(v5, (InputContext)i, (Bind)j, (CL_KeyBindSlot)v16) == K_INHERIT )
            CL_KeyBindings_SetAnyUnusedKey(v5, (InputContext)i, (Bind)j, INVALID);
          if ( CL_KeyBindings::GetKey(v5, (InputContext)i, (Bind)j, (CL_KeyBindSlot)v14) != K_INHERIT && CL_KeyBindings::GetKey(v5, (InputContext)i, (Bind)j, (CL_KeyBindSlot)v16) == K_INHERIT )
          {
            if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
            {
              LODWORD(v20) = 2;
              LODWORD(unboundActions) = localClientNum;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 2904, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", unboundActions, v20) )
                __debugbreak();
            }
            BoundKey_Internal = CL_Keys_GetBoundKey_Internal(v5, (const InputContext)i, (const Bind)j, (const CL_KeyBindSlot)v16, 1);
            CL_Keys_BindKey(localClientNum, (InputContext)i, (Bind)j, (CL_KeyBindSlot)v16, BoundKey_Internal, NULL);
          }
          ++v14;
          v15 = (unsigned __int8)j;
        }
        while ( v14 < 2 );
      }
      v18 = "index doesn't index COUNT\n\t%i not in [0, %i)";
    }
    v4 = v3;
  }
  else
  {
    memcpy_0(&s_keyBindings[v3], &s_defaultKeyBindingsData, sizeof(CL_KeyBindings));
  }
  s_activeInputContext[v4] = STRUCT_POINTER|FLOAT_POINTER;
  s_dirtyKeyBindingsUI[v4] = 1;
  if ( v4 >= 2 )
  {
    j___report_rangecheckfailure(v18);
    JUMPOUT(0x141A28CEDi64);
  }
  s_dirtyKeyBindingsFile[v4] = 0;
}

/*
==============
CL_Keys_MessageKey
==============
*/
void CL_Keys_MessageKey(LocalClientNum_t localClientNum, int key)
{
  __int64 v2; 
  const dvar_t *v4; 
  PlayerKeyState *v5; 
  char *buffer; 
  __int64 v7; 
  __int64 v8; 
  unsigned __int8 v9; 
  const char *v10; 
  __int64 v11; 
  __int64 v13; 
  int v14; 
  char dest[1024]; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v14 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v14) )
      __debugbreak();
  }
  v4 = DVARBOOL_cl_textChatEnabled;
  v5 = &g_playerKeys[v2];
  if ( !DVARBOOL_cl_textChatEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_textChatEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled && key != 27 )
  {
    if ( key != 13 && key != 178 )
    {
      CL_Keys_KeyDownEvent((LocalClientNum_t)v2, &scrPlaceViewDisplay[v2], &g_playerKeys[v2].chatField, key);
      return;
    }
    if ( v5->chatField.buffer[0] && CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v2) == CA_ACTIVE )
    {
      buffer = v5->chatField.buffer;
      v7 = 256i64;
      v8 = 0x400000000002001i64;
      do
      {
        v9 = *buffer - 34;
        if ( v9 <= 0x3Au && _bittest64(&v8, (char)v9) )
          *buffer = 32;
        ++buffer;
        --v7;
      }
      while ( v7 );
      v10 = aSayTeam;
      if ( !g_playerKeys[v2].chat_team )
        v10 = aSay;
      Com_sprintf(dest, 0x400ui64, v10, v5->chatField.buffer);
      if ( (unsigned int)v2 >= 2 )
      {
        LODWORD(v13) = 2;
        LODWORD(v11) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 106, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v11, v13) )
          __debugbreak();
      }
      if ( !ClConnection::ms_connections[v2] )
      {
        if ( (_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 107, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE") )
          __debugbreak();
        if ( !ClConnection::ms_connections[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api_inline.h", 14, ASSERT_TYPE_ASSERT, "(ClConnection::HasClientConnection( localClientNum ))", "%s\n\tTrying to send a reliable command but we are not connected to a server", "ClConnection::HasClientConnection( localClientNum )") )
          __debugbreak();
      }
      if ( !CL_Demo_IsPlayingServer((LocalClientNum_t)v2) )
      {
        if ( (unsigned int)v2 >= LODWORD(cl_maxLocalClients) )
        {
          *(float *)&v13 = cl_maxLocalClients;
          LODWORD(v11) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v11, v13) )
            __debugbreak();
        }
        if ( !(_BYTE)ClConnection::ms_activeConnectionType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 98, ASSERT_TYPE_ASSERT, "(ms_activeConnectionType != GameModeType::NONE)", (const char *)&queryFormat, "ms_activeConnectionType != GameModeType::NONE") )
          __debugbreak();
        if ( !ClConnection::ms_connections[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 99, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum])", (const char *)&queryFormat, "ms_connections[localClientNum]") )
          __debugbreak();
        ClConnection::ms_connections[v2]->AddReliableCommand(ClConnection::ms_connections[v2], dest);
      }
    }
  }
  clientUIActives[v2].keyCatchers &= ~0x20u;
  CL_Keys_ClearField(&g_playerKeys[v2].chatField);
}

/*
==============
CL_Keys_PasteField
==============
*/
bool CL_Keys_PasteField(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace, field_t *edit)
{
  char *ClipboardData; 
  const char *v7; 
  unsigned __int64 v8; 
  unsigned __int64 i; 

  ClipboardData = Sys_GetClipboardData();
  v7 = ClipboardData;
  if ( ClipboardData )
  {
    v8 = -1i64;
    do
      ++v8;
    while ( ClipboardData[v8] );
    for ( i = 0i64; i < v8; ++i )
      CL_Keys_CharEvent(localClientNum, scrPlace, edit, v7[i]);
    Sys_FreeClipboardData(v7);
    LOBYTE(ClipboardData) = 1;
  }
  return (char)ClipboardData;
}

/*
==============
CL_Keys_PrintMatches
==============
*/
void CL_Keys_PrintMatches(const char *s)
{
  const dvar_t *v2; 
  unsigned __int64 v3; 

  if ( con_ignoreMatchPrefixOnly )
  {
    v2 = DVARBOOL_con_matchPrefixOnly;
    if ( !DVARBOOL_con_matchPrefixOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "con_matchPrefixOnly") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
      goto LABEL_13;
  }
  v3 = -1i64;
  do
    ++v3;
  while ( s_shortestMatch[v3] );
  if ( !I_strnicmp(s, s_shortestMatch, v3) )
  {
LABEL_13:
    if ( I_stristr(s, s_shortestMatch) )
      Com_Printf(0, "    %s\n", s);
  }
}

/*
==============
CL_Keys_RemoveCatcher
==============
*/
void CL_Keys_RemoveCatcher(LocalClientNum_t localClientNum, int andMask)
{
  __int64 v2; 
  __int64 v4; 

  v2 = localClientNum;
  if ( andMask == -257 )
    Com_Printf(13, "RADIAL DEBUG: removing key catcher KEYCATCH_LUI_LAYER\n");
  if ( ((andMask - 1) & andMask) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 3287, ASSERT_TYPE_ASSERT, "(!IsPowerOf2( andMask ))", (const char *)&queryFormat, "!IsPowerOf2( andMask )") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, 2) )
      __debugbreak();
  }
  clientUIActives[v2].keyCatchers &= andMask;
}

/*
==============
CL_Keys_ReplaceConsoleInputArgument
==============
*/
void CL_Keys_ReplaceConsoleInputArgument(int replaceCount, const char *replacement)
{
  unsigned __int64 v4; 
  int v5; 
  __int64 i; 

  if ( !replacement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 654, ASSERT_TYPE_ASSERT, "(replacement)", (const char *)&queryFormat, "replacement") )
    __debugbreak();
  if ( *replacement )
  {
    v4 = -1i64;
    do
      ++v4;
    while ( g_consoleField.buffer[v4] );
    v5 = truncate_cast<int,unsigned __int64>(v4);
    for ( i = v5; i; --i )
    {
      if ( !isspace(*((char *)&g_consoleField.fixedSize + i + 3)) )
        break;
      --v5;
    }
    if ( replaceCount >= v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 661, ASSERT_TYPE_ASSERT, "(replaceCount < cmdLineLen)", "%s\n\t%s: %i, %i", "replaceCount < cmdLineLen", g_consoleField.buffer, replaceCount, v5) )
      __debugbreak();
    Core_strcpy_truncate(&g_consoleField.buffer[v5 - replaceCount], 256i64 - (v5 - replaceCount), replacement);
  }
}

/*
==============
CL_Keys_ResetAllBindings
==============
*/
void CL_Keys_ResetAllBindings(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v2; 
  CL_KeyBindings *v3; 
  int i; 
  const char *v5; 
  int j; 
  int k; 
  CL_KeyBind unbound; 

  v1 = localClientNum;
  v2 = 0;
  v3 = &s_keyBindings[localClientNum];
  do
  {
    for ( i = 1; i < 222; ++i )
    {
      if ( CL_Keys_GetBindingSuperUser((LocalClientNum_t)v1, i) )
      {
        v5 = Com_Keys_KeynumToString(i);
        Com_Printf(6, "Key '%s' is developer-enabled. It can't be unbound outside of command line or console commands.\n", v5);
      }
      else
      {
        CL_Keys_SetBinding((LocalClientNum_t)v1, i, (InputContext)v2, 0);
        CL_Keys_SetBindingSuperUser((LocalClientNum_t)v1, i, 0);
      }
    }
    for ( j = 1; j < 255; ++j )
    {
      for ( k = 0; k < 2; ++k )
      {
        unbound = (CL_KeyBind)512;
        CL_KeyBindings::SetKey(v3, (InputContext)v2, (Bind)j, (CL_KeyBindSlot)k, K_INHERIT, &unbound);
      }
    }
    ++v2;
  }
  while ( v2 < 15 );
  s_dirtyKeyBindingsUI[v1] = 1;
  s_dirtyKeyBindingsFile[v1] = 1;
  memcpy_0(v3, &s_defaultKeyBindingsData, sizeof(CL_KeyBindings));
}

/*
==============
CL_Keys_SetBinding
==============
*/
void CL_Keys_SetBinding(LocalClientNum_t localClientNum, int keynum, InputContext inputContext, int bindIndex)
{
  __int64 v4; 
  Bind v5; 
  __int64 v7; 
  __int64 v8; 
  KeyState *v9; 
  CL_KeyBindSlot v10; 
  const char *v11; 
  const char *CommandForBinding; 
  const char *v13; 
  const char *v14; 
  CL_KeyBind unbound; 

  v4 = keynum;
  v5 = (char)bindIndex;
  v7 = localClientNum;
  if ( (unsigned int)(keynum - 1) <= 0xDC )
  {
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 1287, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
      __debugbreak();
    v8 = v7;
    v9 = &g_playerKeys[v7].keys[v4];
    if ( v9->bindingCheat )
    {
      SL_AllocString_Free(v9->bindingCheat);
      v9->bindingCheat = NULL;
    }
    unbound = (CL_KeyBind)512;
    v10 = CL_KeyBindings::SetAction(&s_keyBindings[v8], inputContext, (keyNum_t)v4, v5, &unbound);
    if ( unbound.action && v5 )
    {
      v11 = CL_InputContext_ToName(inputContext);
      CommandForBinding = Com_Keys_GetCommandForBinding((unsigned __int8)v5);
      v13 = Com_Keys_GetCommandForBinding((unsigned __int8)unbound.action);
      v14 = Com_Keys_KeynumToString(v4);
      Com_Printf(14, "Rebinding key %s from \"%s\" to \"%s\" for context \"%s\"\n", v14, v13, CommandForBinding, v11);
    }
    s_activeInputContext[v8] = STRUCT_POINTER|FLOAT_POINTER;
    if ( v10 != BYTE_VALUE )
    {
      s_dirtyKeyBindingsUI[v8] = 1;
      s_dirtyKeyBindingsFile[v8] = 1;
    }
  }
}

/*
==============
CL_Keys_SetBindingCheat
==============
*/
void CL_Keys_SetBindingCheat(LocalClientNum_t localClientNum, int keynum, const char *bindingCheat)
{
  __int64 v3; 
  __int64 v4; 
  int i; 
  __int64 v6; 
  const char *v7; 
  CL_KeyBindSlot v8; 
  __int64 v9; 
  __int64 v10; 
  CL_KeyBind unbound; 
  char *in; 

  in = (char *)bindingCheat;
  v3 = keynum;
  v4 = localClientNum;
  if ( keynum != -1 )
  {
    for ( i = 0; i < 15; ++i )
    {
      if ( (unsigned int)(v3 - 1) <= 0xDC )
      {
        if ( (unsigned int)v4 >= 2 )
        {
          LODWORD(v10) = 2;
          LODWORD(v9) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 1287, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, v10) )
            __debugbreak();
        }
        v6 = 4408 * v4 + 16 * v3;
        v7 = *(const char **)((char *)&g_playerKeys[0].keys[0].bindingCheat + v6);
        if ( v7 )
        {
          SL_AllocString_Free(v7);
          *(const char **)((char *)&g_playerKeys[0].keys[0].bindingCheat + v6) = NULL;
        }
        unbound = (CL_KeyBind)512;
        v8 = CL_KeyBindings::SetAction(&s_keyBindings[v4], (InputContext)i, (keyNum_t)v3, BIND_VOID, &unbound);
        s_activeInputContext[v4] = STRUCT_POINTER|FLOAT_POINTER;
        if ( v8 != BYTE_VALUE )
        {
          s_dirtyKeyBindingsUI[v4] = 1;
          s_dirtyKeyBindingsFile[v4] = 1;
        }
      }
    }
    g_playerKeys[v4].keys[v3].bindingCheat = SL_AllocString_Copy(in);
  }
}

/*
==============
CL_Keys_SetBindingSuperUser
==============
*/
void CL_Keys_SetBindingSuperUser(LocalClientNum_t localClientNum, int keynum, bool isSuperUser)
{
  __int64 v3; 
  __int64 v5; 
  bool *p_isSuperUser; 
  const char *v7; 
  const char *v8; 
  __int64 v9; 
  __int64 v11; 
  int v12; 

  v3 = localClientNum;
  v5 = keynum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v12 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 1349, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v12) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 0x100 )
  {
    LODWORD(v11) = 256;
    LODWORD(v9) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 1350, ASSERT_TYPE_ASSERT, "(unsigned)( keynum ) < (unsigned)( 256 )", "keynum doesn't index MAX_KEYS\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  p_isSuperUser = &g_playerKeys[v3].keys[v5].isSuperUser;
  if ( isSuperUser != *p_isSuperUser )
  {
    v7 = "off";
    if ( isSuperUser )
      v7 = "on";
    v8 = Com_Keys_KeynumToString(v5);
    Com_Printf(16, "Key '%s' super-user '%s'.\n", v8, v7);
  }
  *p_isSuperUser = isSuperUser;
}

/*
==============
CL_Keys_SetCatcher
==============
*/
void CL_Keys_SetCatcher(LocalClientNum_t localClientNum, int catcher)
{
  __int64 v2; 
  int *p_keyCatchers; 
  int v5; 
  int v7; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v7) )
      __debugbreak();
  }
  p_keyCatchers = &clientUIActives[v2].keyCatchers;
  v5 = catcher | 1;
  if ( (*p_keyCatchers & 1) == 0 )
    v5 = catcher;
  *p_keyCatchers = v5;
}

/*
==============
CL_Keys_SetOverstrikeMode
==============
*/
void CL_Keys_SetOverstrikeMode(LocalClientNum_t localClientNum, int state)
{
  g_playerKeys[localClientNum].overstrikeMode = state;
}

/*
==============
CL_Keys_Shutdown
==============
*/
void CL_Keys_Shutdown(void)
{
  KeyState *v0; 
  const char **p_bindingCheat; 
  __int64 v2; 

  v0 = &g_playerKeys[0].keys[1];
  do
  {
    p_bindingCheat = &v0->bindingCheat;
    v2 = 221i64;
    do
    {
      if ( *p_bindingCheat )
      {
        SL_AllocString_Free(*p_bindingCheat);
        *p_bindingCheat = NULL;
      }
      p_bindingCheat += 2;
      --v2;
    }
    while ( v2 );
    v0 = (KeyState *)((char *)v0 + 4408);
  }
  while ( (__int64)v0 < (__int64)&s_defaultKeyBindingsData.keyBindings.m_contextData.data[0].actionData[104] );
  memset_0(g_playerKeys, 0, sizeof(g_playerKeys));
  *(_WORD *)s_dirtyKeyBindingsUI = 0;
  *(_WORD *)s_dirtyKeyBindingsFile = 0;
}

/*
==============
CL_Keys_StoreKeyBindingForContextDLog
==============
*/
void CL_Keys_StoreKeyBindingForContextDLog(LocalClientNum_t localClientNum, int *bindsList, int keynum, InputContext inputContext)
{
  unsigned int v4; 
  int Binding; 
  __int64 v7; 

  v4 = keynum;
  Binding = CL_Keys_GetBinding(localClientNum, keynum, inputContext);
  v7 = Binding;
  if ( Binding )
  {
    if ( bindsList[Binding] )
    {
      if ( v4 > 0xDD )
      {
        Com_PrintWarning(14, "CL_Keys_MapKeynumToDlog: received unhandled key num %d\n", v4);
        v4 = 0;
      }
      bindsList[(int)v7 + 255] = v4;
    }
    else
    {
      if ( v4 > 0xDD )
      {
        Com_PrintWarning(14, "CL_Keys_MapKeynumToDlog: received unhandled key num %d\n", v4);
        v4 = 0;
      }
      bindsList[v7] = v4;
    }
  }
}

/*
==============
CL_Keys_SuperUserBind_f
==============
*/
void CL_Keys_SuperUserBind_f()
{
  CL_Keys_Bind_Cmd(1);
}

/*
==============
CL_Keys_SuperUserUnbind_f
==============
*/
void CL_Keys_SuperUserUnbind_f()
{
  CL_Keys_Unbind_Cmd(1);
}

/*
==============
CL_Keys_SuperUserUnbindall_f
==============
*/
void CL_Keys_SuperUserUnbindall_f()
{
  __int64 v0; 
  int i; 
  int j; 
  int k; 
  int m; 
  CL_KeyBind unbound; 

  v0 = Cmd_LocalClientNum();
  for ( i = 0; i < 15; ++i )
  {
    for ( j = 1; j < 222; ++j )
    {
      CL_Keys_GetBindingSuperUser((LocalClientNum_t)v0, j);
      CL_Keys_SetBinding((LocalClientNum_t)v0, j, (InputContext)i, 0);
      CL_Keys_SetBindingSuperUser((LocalClientNum_t)v0, j, 0);
    }
    for ( k = 1; k < 255; ++k )
    {
      for ( m = 0; m < 2; ++m )
      {
        unbound = (CL_KeyBind)512;
        CL_KeyBindings::SetKey(&s_keyBindings[v0], (InputContext)i, (Bind)k, (CL_KeyBindSlot)m, K_INHERIT, &unbound);
      }
    }
  }
  s_dirtyKeyBindingsUI[v0] = 1;
  s_dirtyKeyBindingsFile[v0] = 1;
}

/*
==============
CL_Keys_SwapBind_f
==============
*/
void CL_Keys_SwapBind_f()
{
  const char *v0; 
  int v1; 
  const char *v2; 
  int v3; 

  if ( Cmd_Argc() == 3 )
  {
    v0 = Cmd_Argv(1);
    v1 = Com_Keys_StringToKeynum(v0);
    v2 = Cmd_Argv(2);
    v3 = Com_Keys_StringToKeynum(v2);
    CL_Keys_CopyBind(v1, v3, 1);
  }
  else
  {
    Com_Printf(0, "bind_swap <key> <key> : Swap binds of keys\n");
  }
}

/*
==============
CL_Keys_UnbindGamepadButtons
==============
*/
void CL_Keys_UnbindGamepadButtons(LocalClientNum_t localClientNum)
{
  int v1; 
  __int64 v2; 
  __int64 v3; 
  int i; 
  KeyState *v5; 
  CL_KeyBindSlot v6; 
  __int64 v7; 
  __int64 v8; 
  CL_KeyBind unbound; 

  v1 = 1;
  v2 = localClientNum;
  v3 = 1i64;
  do
  {
    if ( KeyCodes_IsGamepadKey((keyNum_t)v1) )
    {
      for ( i = 0; i < 15; ++i )
      {
        if ( (unsigned int)(v1 - 1) <= 0xDC )
        {
          if ( (unsigned int)v2 >= 2 )
          {
            LODWORD(v8) = 2;
            LODWORD(v7) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 1287, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
              __debugbreak();
          }
          v5 = &g_playerKeys[v2].keys[v3];
          if ( v5->bindingCheat )
          {
            SL_AllocString_Free(v5->bindingCheat);
            v5->bindingCheat = NULL;
          }
          unbound = (CL_KeyBind)512;
          v6 = CL_KeyBindings::SetAction(&s_keyBindings[v2], (InputContext)i, (keyNum_t)v1, BIND_VOID, &unbound);
          s_activeInputContext[v2] = STRUCT_POINTER|FLOAT_POINTER;
          if ( v6 != BYTE_VALUE )
          {
            s_dirtyKeyBindingsUI[v2] = 1;
            s_dirtyKeyBindingsFile[v2] = 1;
          }
        }
      }
    }
    ++v1;
    ++v3;
  }
  while ( v1 < 222 );
}

/*
==============
CL_Keys_Unbind_Cmd
==============
*/
void CL_Keys_Unbind_Cmd(bool isSuperUser)
{
  int v2; 
  const char *v3; 
  int v4; 
  const char *v5; 
  InputContext v6; 
  const char *v7; 
  const char *v8; 
  LocalClientNum_t v9; 

  v2 = Cmd_Argc();
  if ( (unsigned int)(v2 - 2) > 1 )
  {
    Com_Printf(0, "unbind <key> [<input context>]: remove commands from a key\n");
  }
  else
  {
    v3 = Cmd_Argv(1);
    v4 = Com_Keys_StringToKeynum(v3);
    if ( v4 == -1 )
    {
      v5 = Cmd_Argv(1);
      Com_Printf(0, "\"%s\" isn't a valid key\n", v5);
    }
    else
    {
      v6 = BYTE_VALUE;
      if ( v2 > 2 && (v7 = Cmd_Argv(2), v6 = CL_InputContext_FromName(v7), v6 == (STRUCT_POINTER|FLOAT_POINTER)) )
      {
        v8 = Cmd_Argv(2);
        Com_Printf(0, "\"%s\" isn't a valid input context\n", v8);
      }
      else
      {
        v9 = Cmd_LocalClientNum();
        Cl_Keys_Unbind_Internal(v9, v4, isSuperUser, v6);
      }
    }
  }
}

/*
==============
CL_Keys_Unbind_f
==============
*/
void CL_Keys_Unbind_f()
{
  CL_Keys_Unbind_Cmd(0);
}

/*
==============
CL_Keys_Unbindall_f
==============
*/
void CL_Keys_Unbindall_f()
{
  __int64 v0; 
  int i; 
  int j; 
  const char *v3; 
  int k; 
  int m; 
  CL_KeyBind unbound; 

  v0 = Cmd_LocalClientNum();
  for ( i = 0; i < 15; ++i )
  {
    for ( j = 1; j < 222; ++j )
    {
      if ( CL_Keys_GetBindingSuperUser((LocalClientNum_t)v0, j) )
      {
        v3 = Com_Keys_KeynumToString(j);
        Com_Printf(6, "Key '%s' is developer-enabled. It can't be unbound outside of command line or console commands.\n", v3);
      }
      else
      {
        CL_Keys_SetBinding((LocalClientNum_t)v0, j, (InputContext)i, 0);
        CL_Keys_SetBindingSuperUser((LocalClientNum_t)v0, j, 0);
      }
    }
    for ( k = 1; k < 255; ++k )
    {
      for ( m = 0; m < 2; ++m )
      {
        unbound = (CL_KeyBind)512;
        CL_KeyBindings::SetKey(&s_keyBindings[v0], (InputContext)i, (Bind)k, (CL_KeyBindSlot)m, K_INHERIT, &unbound);
      }
    }
  }
  s_dirtyKeyBindingsUI[v0] = 1;
  s_dirtyKeyBindingsFile[v0] = 1;
}

/*
==============
CL_Keys_UpdateActiveBindings
==============
*/
void CL_Keys_UpdateActiveBindings(LocalClientNum_t localClientNum, InputContext newActiveContext)
{
  __int64 v2; 
  int v3; 
  __int64 v4; 
  CL_KeyBindings *v5; 
  __int64 Inherited; 
  Bind *v7; 
  __int64 v8; 
  char v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned __int8 InputMethod; 
  bool *v13; 
  int ControllerFromClient; 
  InputContext v15; 
  lua_State *v16; 
  const dvar_t *v17; 
  int v18; 
  __int64 resetInputs; 
  __int16 v20; 
  Bind *v22; 
  CL_KeyBind result; 
  __int64 v24; 
  InputContext v25[16]; 

  v2 = localClientNum;
  if ( s_activeInputContext[localClientNum] != newActiveContext )
  {
    v3 = 1;
    v4 = 4408i64 * (int)localClientNum;
    v5 = &s_keyBindings[localClientNum];
    v24 = v4;
    Inherited = CL_InputContext_GetInherited(newActiveContext, (InputContext (*)[15])v25);
    v22 = &g_playerKeys[0].keys[0].activeBinding.action + v4;
    v7 = &g_playerKeys[0].keys[0].activeBinding.action + v4;
    v8 = 1i64;
    do
    {
      v9 = 0;
      v20 = 512;
      v10 = 0i64;
      if ( Inherited > 0 )
      {
        while ( 1 )
        {
          v20 = (__int16)*CL_KeyBindings::GetKeyBind(v5, &result, v25[v10], (keyNum_t)v3);
          if ( (_BYTE)v20 )
            break;
          if ( ++v10 >= Inherited )
            goto LABEL_14;
        }
        v11 = v10 - 1;
        InputMethod = KeyCodes_GetInputMethod((keyNum_t)v3);
        if ( v11 < 0 )
        {
          v4 = v24;
LABEL_14:
          v9 = v20;
          goto LABEL_15;
        }
        v9 = v20;
        while ( CL_KeyBindings::IsLinked(v5, v25[v11], (Bind)v20, (InputMethod)InputMethod) )
        {
          if ( --v11 < 0 )
          {
            v4 = v24;
            goto LABEL_15;
          }
        }
        v4 = v24;
        v9 = 0;
        LOBYTE(v20) = 0;
LABEL_15:
        v7 = v22;
      }
      if ( v7[v8 * 16] != v9 && v3 != 27 )
      {
        v13 = &g_playerKeys[0].keys[v8].down + v4;
        if ( *v13 )
        {
          if ( !Com_ErrorEntering() )
          {
            ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
            CL_GamepadButtonEvent((LocalClientNum_t)v2, ControllerFromClient, v3, 0, 0, 0);
          }
          v7 = v22;
        }
        *v13 = 0;
        *(&g_playerKeys[0].keys[v8].repeats + v4) = 0;
      }
      ++v3;
      *(_WORD *)&v7[v8 * 16] = v20;
      ++v8;
    }
    while ( v3 < 222 );
    v15 = s_activeInputContext[v2];
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(resetInputs) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_keys.cpp", 3310, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", resetInputs, 2) )
        __debugbreak();
    }
    if ( CL_Input_IsGamepadEnabled((LocalClientNum_t)v2) && v15 == BYTE_POINTER )
      CL_Input_KeyClear(&g_playersKb[v2][31]);
    v16 = LUI_luaVM;
    s_activeInputContext[v2] = newActiveContext;
    if ( LUI_BeginEvent((LocalClientNum_t)v2, "input_context_changed", v16) )
      LUI_EndEvent(LUI_luaVM);
    v17 = DVARBOOL_lui_rendertime_binding_directive;
    if ( !DVARBOOL_lui_rendertime_binding_directive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_rendertime_binding_directive") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.enabled )
    {
      v18 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
      LUI_InvalidateAllDirectiveTextElements(v18);
    }
  }
}

/*
==============
CL_Keys_UpdateBindingsFile
==============
*/
void CL_Keys_UpdateBindingsFile(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  unsigned __int64 v2; 
  __int64 v3; 
  int ControllerFromClient; 

  v1 = DCONST_DVARBOOL_cl_useKeyBindingsFile;
  v2 = localClientNum;
  if ( !DCONST_DVARBOOL_cl_useKeyBindingsFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_useKeyBindingsFile") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled && s_dirtyKeyBindingsFile[v2] )
  {
    if ( v2 >= 2 )
    {
      j___report_rangecheckfailure(v3);
      JUMPOUT(0x141A2AA85i64);
    }
    s_dirtyKeyBindingsFile[v2] = 0;
    Com_GameMode_GetActiveGameMode();
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
    CL_KeyBindings_Save(ControllerFromClient, &s_keyBindings[v2], "user_keys.kb");
  }
}

/*
==============
CL_Keys_UpdateBindingsUI
==============
*/
void CL_Keys_UpdateBindingsUI(__int64 localClientNum)
{
  LocalClientNum_t v1; 
  unsigned __int64 v2; 
  const dvar_t *v3; 
  int ControllerFromClient; 

  v1 = (int)localClientNum;
  v2 = (int)localClientNum;
  if ( s_dirtyKeyBindingsUI[(int)localClientNum] )
  {
    if ( LUI_BeginEvent((LocalClientNum_t)localClientNum, "key_bindings_update", LUI_luaVM) )
      LUI_EndEvent(LUI_luaVM);
    v3 = DVARBOOL_lui_rendertime_binding_directive;
    if ( !DVARBOOL_lui_rendertime_binding_directive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_rendertime_binding_directive") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.enabled )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(v1);
      LUI_InvalidateAllDirectiveTextElements(ControllerFromClient);
    }
  }
  if ( v2 >= 2 )
  {
    j___report_rangecheckfailure(localClientNum);
    JUMPOUT(0x141A2ABB0i64);
  }
  s_dirtyKeyBindingsUI[v2] = 0;
}

/*
==============
CL_Keys_WriteCheatBindings
==============
*/
void CL_Keys_WriteCheatBindings(LocalClientNum_t localClientNum, fileHandle_t f)
{
  int v3; 
  KeyState *keys; 
  int i; 
  const char *bindingCheat; 
  const char *v7; 
  int v8; 
  char dest[2048]; 
  char msg[8192]; 

  v3 = 0;
  keys = g_playerKeys[localClientNum].keys;
  for ( i = 0; i < 222; ++i )
  {
    bindingCheat = keys->bindingCheat;
    if ( keys->bindingCheat && *bindingCheat )
    {
      v7 = Com_Keys_KeynumToString(i);
      Core_ReplaceAll_Copy(dest, 0x800ui64, bindingCheat, "\"", "\\\"");
      v8 = Com_sprintf_truncate(&msg[v3], 0x2000 - v3, "bind %s \"%s\"\n", v7, dest);
      if ( v8 < 0 )
        break;
      v3 += v8;
    }
    ++keys;
  }
  if ( v3 > 0 )
    FS_Print(f, msg);
}

/*
==============
Cl_Keys_Unbind_Internal
==============
*/
void Cl_Keys_Unbind_Internal(LocalClientNum_t localClientNum, int keynum, bool isSuperUser, InputContext inputContext)
{
  bool BindingSuperUser; 
  const char *v9; 

  BindingSuperUser = CL_Keys_GetBindingSuperUser(localClientNum, keynum);
  if ( isSuperUser || !BindingSuperUser )
  {
    CL_Keys_SetBinding(localClientNum, keynum, inputContext, 0);
    CL_Keys_SetBindingSuperUser(localClientNum, keynum, 0);
  }
  else
  {
    v9 = Com_Keys_KeynumToString(keynum);
    Com_Printf(6, "Key '%s' is developer-enabled. It can't be unbound outside of command line or console commands.\n", v9);
  }
}

