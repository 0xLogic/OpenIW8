/*
==============
CG_ConsoleCmds_Unregister
==============
*/

void CG_ConsoleCmds_Unregister(void)
{
  ?CG_ConsoleCmds_Unregister@@YAXXZ();
}

/*
==============
CG_ConsoleCmds_ResetPrimaryLightMotionBits
==============
*/

void CG_ConsoleCmds_ResetPrimaryLightMotionBits(void)
{
  ?CG_ConsoleCmds_ResetPrimaryLightMotionBits@@YAXXZ();
}

/*
==============
CG_ConsoleCmds_Register
==============
*/

void CG_ConsoleCmds_Register(void)
{
  ?CG_ConsoleCmds_Register@@YAXXZ();
}

/*
==============
CG_ConsoleCmds_Viewpos_f
==============
*/
cg_t *CG_ConsoleCmds_Viewpos_f()
{
  LocalClientNum_t v0; 
  cg_t *result; 
  cg_t *v2; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  int v6[3]; 

  v0 = Cmd_LocalClientNum();
  result = CG_GetLocalClientGlobals(v0);
  v2 = result;
  if ( result->nextSnap )
  {
    p_view = &result->refdef.view;
    if ( result == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = p_view->refdefViewOrg_aab;
    v = (_DWORD *)p_view->org.org.v;
    if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    Com_Printf(0, "(%.0f %.0f %.0f) : %.0f %.0f\n", COERCE_FLOAT(*v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2))), COERCE_FLOAT(v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2))), COERCE_FLOAT(((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2)) ^ v[2]), v2->refdefViewAngles.v[1], v2->refdefViewAngles.v[0]);
    result = NULL;
    memset(v6, 0, sizeof(v6));
  }
  return result;
}

/*
==============
CG_ConsoleCmds_ShellShock_f
==============
*/
void CG_ConsoleCmds_ShellShock_f()
{
  LocalClientNum_t v0; 
  __int64 v1; 
  int v2; 
  const char *v3; 
  cg_t *LocalClientGlobals; 
  shellshock_parms_t *ShellshockParms; 

  v0 = Cmd_LocalClientNum();
  v1 = v0;
  if ( (unsigned int)v0 >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v0, 2) )
    __debugbreak();
  if ( !clientUIActives[v1].frontEndSceneState[0] && clientUIActives[v1].cgameInitialized && CG_IsFullyInitialized((const LocalClientNum_t)v1) )
  {
    v2 = Cmd_Argc() - 2;
    if ( !v2 )
      goto LABEL_11;
    if ( v2 != 1 )
    {
      Com_Printf(0, "USAGE: cg_shellshock <duration> <filename?>\n");
      return;
    }
    v3 = Cmd_Argv(2);
    if ( BG_LoadShellShockDvars(v3) )
    {
LABEL_11:
      Cmd_ArgFloat(1);
      _XMM0 = 0i64;
      __asm { vroundss xmm6, xmm0, xmm4, 1 }
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
      ShellshockParms = BG_GetShellshockParms(0);
      BG_SetShellShockParmsFromDvars(ShellshockParms);
      LocalClientGlobals->testShock.time = LocalClientGlobals->time;
      LocalClientGlobals->testShock.duration = (int)*(float *)&_XMM6;
    }
  }
}

/*
==============
CG_ConsoleCmds_ShellShock_Load_f
==============
*/
void CG_ConsoleCmds_ShellShock_Load_f()
{
  LocalClientNum_t v0; 
  const char *v1; 

  v0 = Cmd_LocalClientNum();
  if ( CG_IsFullyInitialized(v0) )
  {
    if ( Cmd_Argc() == 2 )
    {
      v1 = Cmd_Argv(1);
      BG_LoadShellShockDvars(v1);
    }
    else
    {
      Com_Printf(0, "USAGE: cg_shellshock_load <name>\n");
    }
  }
}

/*
==============
CG_ConsoleCmds_ShellShock_Save_f
==============
*/
void CG_ConsoleCmds_ShellShock_Save_f()
{
  LocalClientNum_t v0; 
  const char *v1; 

  v0 = Cmd_LocalClientNum();
  if ( CG_IsFullyInitialized(v0) )
  {
    if ( Cmd_Argc() == 2 )
    {
      v1 = Cmd_Argv(1);
      BG_SaveShellShockDvars(v1);
    }
    else
    {
      Com_Printf(0, "USAGE: cg_shellshock_save <name>\n");
    }
  }
}

/*
==============
CG_ConsoleCmds_PlayRumble_f
==============
*/
void CG_ConsoleCmds_PlayRumble_f()
{
  LocalClientNum_t v0; 
  const char *v1; 

  v0 = Cmd_LocalClientNum();
  if ( CG_IsFullyInitialized(v0) )
  {
    if ( Cmd_Argc() == 2 )
    {
      v1 = Cmd_Argv(1);
      CG_Rumble_PlayOnClientSafeByName(v0, v1);
    }
    else
    {
      Com_Printf(0, "USAGE: playrumble <rumblename>\n");
    }
  }
}

/*
==============
CG_ConsoleCmds_ShowHud_f
==============
*/
void CG_ConsoleCmds_ShowHud_f()
{
  LocalClientNum_t v0; 

  v0 = Cmd_LocalClientNum();
  CG_Draw_SetHudEnabled(v0, 1);
}

/*
==============
CG_ConsoleCmds_HideHud_f
==============
*/
void CG_ConsoleCmds_HideHud_f()
{
  LocalClientNum_t v0; 

  v0 = Cmd_LocalClientNum();
  CG_Draw_SetHudEnabled(v0, 0);
}

/*
==============
CG_ConsoleCmds_ResetPrimaryLightMotionBits
==============
*/

void CG_ConsoleCmds_ResetPrimaryLightMotionBits(void)
{
  R_ClearAllPrimaryLightMotionBits();
}

/*
==============
CG_ConsoleCmds_Register
==============
*/
void CG_ConsoleCmds_Register(void)
{
  Cmd_AddClientCommandList(S_CG_CONSOLE_COMMANDS_COMMON, 0xAu);
}

/*
==============
CG_ConsoleCmds_Unregister
==============
*/
void CG_ConsoleCmds_Unregister(void)
{
  Cmd_RemoveClientCommandList(S_CG_CONSOLE_COMMANDS_COMMON, 0xAu);
}

