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
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  char *fmt; 
  double v19; 
  double v20; 
  int v21[3]; 

  v0 = Cmd_LocalClientNum();
  result = CG_GetLocalClientGlobals(v0);
  _RBX = result;
  if ( result->nextSnap )
  {
    p_view = &result->refdef.view;
    if ( result == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = p_view->refdefViewOrg_aab;
    v = (_DWORD *)p_view->org.org.v;
    if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    v21[0] = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
    v21[1] = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
    v21[2] = ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2)) ^ v[2];
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+178C0h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovss  xmm1, dword ptr [rbx+178C4h]
      vcvtss2sd xmm1, xmm1, xmm1
      vmovss  xmm4, [rsp+68h+var_18]
      vcvtss2sd xmm4, xmm4, xmm4
      vmovss  xmm3, [rsp+68h+var_1C]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovss  xmm2, [rsp+68h+var_20]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+68h+var_38], xmm0
      vmovsd  [rsp+68h+var_40], xmm1
      vmovsd  [rsp+68h+fmt], xmm4
      vmovq   r9, xmm3
      vmovq   r8, xmm2
    }
    Com_Printf(0, "(%.0f %.0f %.0f) : %.0f %.0f\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmt, v19, v20);
    result = NULL;
    memset(v21, 0, sizeof(v21));
  }
  return result;
}

/*
==============
CG_ConsoleCmds_ShellShock_f
==============
*/

void __fastcall CG_ConsoleCmds_ShellShock_f(double _XMM0_8, __int64 a2, double _XMM2_8)
{
  LocalClientNum_t v4; 
  __int64 v5; 
  int v6; 
  const char *v7; 
  cg_t *LocalClientGlobals; 
  shellshock_parms_t *ShellshockParms; 

  v4 = Cmd_LocalClientNum();
  v5 = v4;
  if ( (unsigned int)v4 >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, 2) )
    __debugbreak();
  if ( !clientUIActives[v5].frontEndSceneState[0] && clientUIActives[v5].cgameInitialized && CG_IsFullyInitialized((const LocalClientNum_t)v5) )
  {
    v6 = Cmd_Argc() - 2;
    if ( !v6 )
      goto LABEL_11;
    if ( v6 != 1 )
    {
      Com_Printf(0, "USAGE: cg_shellshock <duration> <filename?>\n");
      return;
    }
    v7 = Cmd_Argv(2);
    if ( BG_LoadShellShockDvars(v7) )
    {
LABEL_11:
      __asm { vmovaps [rsp+58h+var_18], xmm6 }
      _XMM0_8 = Cmd_ArgFloat(1);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@447a0000
        vaddss  xmm3, xmm1, cs:__real@3f000000
        vxorps  xmm2, xmm2, xmm2
        vmovss  xmm4, xmm2, xmm3
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm6, xmm0, xmm4, 1
      }
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
      ShellshockParms = BG_GetShellshockParms(0);
      BG_SetShellShockParmsFromDvars(ShellshockParms);
      LocalClientGlobals->testShock.time = LocalClientGlobals->time;
      __asm
      {
        vcvttss2si ecx, xmm6
        vmovaps xmm6, [rsp+58h+var_18]
      }
      LocalClientGlobals->testShock.duration = _ECX;
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

