/*
==============
CL_XB3_RegisterCommands
==============
*/

void CL_XB3_RegisterCommands(void)
{
  ?CL_XB3_RegisterCommands@@YAXXZ();
}

/*
==============
CL_XB3_UnregisterCommands
==============
*/

void CL_XB3_UnregisterCommands(void)
{
  ?CL_XB3_UnregisterCommands@@YAXXZ();
}

/*
==============
CL_XB3_RegisterDvars
==============
*/

void CL_XB3_RegisterDvars(void)
{
  ?CL_XB3_RegisterDvars@@YAXXZ();
}

/*
==============
CL_UpdateDvarsFromProfile
==============
*/
void CL_UpdateDvarsFromProfile()
{
  int ControllerFromClient; 

  if ( Cmd_Argc() == 2 )
    ControllerFromClient = Cmd_ArgInt(1);
  else
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  GamerProfile_UpdateSystemVarsFromProfile(ControllerFromClient);
}

/*
==============
CL_XB3_RegisterCommands
==============
*/
void CL_XB3_RegisterCommands(void)
{
  Cmd_AddClientCommandList(S_CL_XB3_CMD, 1u);
}

/*
==============
CL_XB3_RegisterDvars
==============
*/
void CL_XB3_RegisterDvars(void)
{
  ;
}

/*
==============
CL_XB3_UnregisterCommands
==============
*/
void CL_XB3_UnregisterCommands(void)
{
  Cmd_RemoveClientCommandList(S_CL_XB3_CMD, 1u);
}

