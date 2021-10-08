/*
==============
Com_ExecDefaultConfigs
==============
*/

void __fastcall Com_ExecDefaultConfigs(const LocalClientNum_t localClientNum, const int controllerIndex, GameModeType gameMode)
{
  ?Com_ExecDefaultConfigs@@YAXW4LocalClientNum_t@@HW4GameModeType@@@Z(localClientNum, controllerIndex, gameMode);
}

/*
==============
Com_ExecLobbyDefaultConfigs
==============
*/

void __fastcall Com_ExecLobbyDefaultConfigs(LocalClientNum_t localClientNum, int controllerIndex, GameModeType gameMode)
{
  ?Com_ExecLobbyDefaultConfigs@@YAXW4LocalClientNum_t@@HW4GameModeType@@@Z(localClientNum, controllerIndex, gameMode);
}

/*
==============
Com_ExecButtonsMenuConfigs
==============
*/

void __fastcall Com_ExecButtonsMenuConfigs(LocalClientNum_t localClientNum, int controllerIndex, GameModeType gameMode)
{
  ?Com_ExecButtonsMenuConfigs@@YAXW4LocalClientNum_t@@HW4GameModeType@@@Z(localClientNum, controllerIndex, gameMode);
}

/*
==============
Com_ResetAllDvarOptions
==============
*/

void __fastcall Com_ResetAllDvarOptions(int controllerIndex)
{
  ?Com_ResetAllDvarOptions@@YAXH@Z(controllerIndex);
}

/*
==============
Com_ExecGameModeConfigs
==============
*/

void __fastcall Com_ExecGameModeConfigs(GameModeType gameMode)
{
  ?Com_ExecGameModeConfigs@@YAXW4GameModeType@@@Z(gameMode);
}

/*
==============
Com_ExecStartupConfigs
==============
*/

void Com_ExecStartupConfigs(void)
{
  ?Com_ExecStartupConfigs@@YAXXZ();
}

/*
==============
Com_ExecButtonsMenuConfigs
==============
*/
void Com_ExecButtonsMenuConfigs(LocalClientNum_t localClientNum, int controllerIndex, GameModeType gameMode)
{
  if ( (unsigned __int8)gameMode == HALF )
  {
    Cmd_ExecuteSingleCommand_Internal(localClientNum, controllerIndex, "exec buttons_menu_sp\n", 0);
  }
  else if ( (unsigned __int8)gameMode == HALF_HALF || (unsigned __int8)gameMode == LONG )
  {
    Cmd_ExecuteSingleCommand_Internal(localClientNum, controllerIndex, "exec buttons_menu_mp\n", 0);
  }
}

/*
==============
Com_ExecConfigsInternal
==============
*/
void Com_ExecConfigsInternal(GameModeType gameMode)
{
  unsigned __int8 v1; 
  int i; 
  int ControllerFromClient; 
  const dvar_t *v4; 
  unsigned int flags; 
  const char *v6; 
  const char *v7; 
  char dest[256]; 

  v1 = gameMode;
  for ( i = 0; i < 2; ++i )
  {
    if ( !CL_Mgr_IsClientActive((LocalClientNum_t)i) )
      continue;
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)i);
    Com_sprintf(dest, 0x100ui64, "exec %s\n", s_defaultConfigCommonSet[0]);
    Cbuf_ExecuteBufferInternal((const LocalClientNum_t)i, ControllerFromClient, dest, 0, 0);
    if ( (v1 & 0xFB) != 0 )
    {
      Com_sprintf(dest, 0x100ui64, "exec %s\n", s_defaultConfigCommonSet[v1]);
      Cbuf_ExecuteBufferInternal((const LocalClientNum_t)i, ControllerFromClient, dest, 0, 0);
      if ( v1 == 2 )
      {
        v4 = DVARBOOL_ui_is_magma_gamemode;
        if ( !DVARBOOL_ui_is_magma_gamemode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_is_magma_gamemode") )
          __debugbreak();
        if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
        {
          flags = v4->flags;
          if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v4->name) )
            __debugbreak();
        }
        if ( v4->current.enabled )
        {
          Com_sprintf(dest, 0x100ui64, "exec %s\n", "br_default_map.cfg");
          Cbuf_ExecuteBufferInternal((const LocalClientNum_t)i, ControllerFromClient, dest, 0, 0);
        }
      }
    }
    CL_Keys_LoadBindings((LocalClientNum_t)i, ControllerFromClient);
    Dvar_SetInAutoExec(1);
    Cbuf_ExecuteBufferInternal((const LocalClientNum_t)i, ControllerFromClient, "exec autoexec_dev_common.cfg\n", 0, 0);
    if ( v1 == 1 )
    {
      v6 = "exec autoexec_dev_sp.cfg\n";
      goto LABEL_21;
    }
    if ( v1 == 2 || v1 == 3 )
    {
      v6 = "exec autoexec_dev_mp.cfg\n";
LABEL_21:
      Cbuf_ExecuteBufferInternal((const LocalClientNum_t)i, ControllerFromClient, v6, 0, 0);
    }
    Cbuf_ExecuteBufferInternal((const LocalClientNum_t)i, ControllerFromClient, "exec autoexec_console_dev_common.cfg\n", 0, 0);
    if ( v1 == 1 )
    {
      v7 = "exec autoexec_console_dev_sp.cfg\n";
    }
    else
    {
      if ( v1 != 2 && v1 != 3 )
        goto LABEL_28;
      v7 = "exec autoexec_console_dev_mp.cfg\n";
    }
    Cbuf_ExecuteBufferInternal((const LocalClientNum_t)i, ControllerFromClient, v7, 0, 0);
LABEL_28:
    Dvar_SetInAutoExec(0);
    if ( v1 )
      GamerProfile_ExecControllerBindings(ControllerFromClient);
  }
}

/*
==============
Com_ExecDefaultConfigs
==============
*/
void Com_ExecDefaultConfigs(const LocalClientNum_t localClientNum, const int controllerIndex, GameModeType gameMode)
{
  unsigned __int8 v3; 
  const dvar_t *v6; 
  unsigned int flags; 
  char dest[256]; 

  v3 = gameMode;
  Com_sprintf(dest, 0x100ui64, "exec %s\n", s_defaultConfigCommonSet[0]);
  Cbuf_ExecuteBufferInternal(localClientNum, controllerIndex, dest, 0, 0);
  if ( (v3 & 0xFB) != 0 )
  {
    Com_sprintf(dest, 0x100ui64, "exec %s\n", s_defaultConfigCommonSet[v3]);
    Cbuf_ExecuteBufferInternal(localClientNum, controllerIndex, dest, 0, 0);
    if ( v3 == 2 )
    {
      v6 = DVARBOOL_ui_is_magma_gamemode;
      if ( !DVARBOOL_ui_is_magma_gamemode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_is_magma_gamemode") )
        __debugbreak();
      if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
      {
        flags = v6->flags;
        if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v6->name) )
          __debugbreak();
      }
      if ( v6->current.enabled )
      {
        Com_sprintf(dest, 0x100ui64, "exec %s\n", "br_default_map.cfg");
        Cbuf_ExecuteBufferInternal(localClientNum, controllerIndex, dest, 0, 0);
      }
    }
  }
}

/*
==============
Com_ExecGameModeConfigs
==============
*/

void __fastcall Com_ExecGameModeConfigs(GameModeType gameMode)
{
  Com_ExecConfigsInternal(gameMode);
}

/*
==============
Com_ExecLobbyDefaultConfigs
==============
*/
void Com_ExecLobbyDefaultConfigs(LocalClientNum_t localClientNum, int controllerIndex, GameModeType gameMode)
{
  if ( (unsigned __int8)gameMode == HALF_HALF )
  {
    Cmd_ExecuteSingleCommand_Internal(localClientNum, controllerIndex, "exec default_online_mp.cfg", 0);
  }
  else if ( (unsigned __int8)gameMode == LONG )
  {
    Cmd_ExecuteSingleCommand_Internal(localClientNum, controllerIndex, "exec default_aliens.cfg", 0);
  }
}

/*
==============
Com_ExecStartupConfigs
==============
*/
void Com_ExecStartupConfigs(void)
{
  Dvar_BeginPermanentRegistration();
  Com_ExecConfigsInternal(NONE);
  Dvar_EndPermanentRegistration();
}

/*
==============
Com_ResetAllDvarOptions
==============
*/
void Com_ResetAllDvarOptions(int controllerIndex)
{
  Dvar_ForEach((void (__fastcall *)(const dvar_t *, void *))Com_ResetDvarOption, NULL);
}

/*
==============
Com_ResetDvarOption
==============
*/
void Com_ResetDvarOption(const dvar_t *const dvar, void *userdata)
{
  ;
}

