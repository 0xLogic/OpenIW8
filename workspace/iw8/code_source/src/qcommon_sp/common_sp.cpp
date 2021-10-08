/*
==============
Com_SP_UnregisterDvars
==============
*/

void Com_SP_UnregisterDvars(void)
{
  ?Com_SP_UnregisterDvars@@YAXXZ();
}

/*
==============
Com_SP_RegisterDvars
==============
*/

void Com_SP_RegisterDvars(void)
{
  ?Com_SP_RegisterDvars@@YAXXZ();
}

/*
==============
Com_SP_RegisterDvars
==============
*/
void Com_SP_RegisterDvars(void)
{
  cl_paused = Dvar_RegisterInt("RKLNRNMMN", 0, 0, 1, 1u, "[SP] Pause the client");
  com_maxfps = Dvar_RegisterInt("OMKRTPPKKQ", 60, 0, 1000, 0, "[SP] Cap frames per second");
}

/*
==============
Com_SP_UnregisterDvars
==============
*/
void Com_SP_UnregisterDvars(void)
{
  cl_paused = Dvar_Deregister(cl_paused);
  com_maxfps = Dvar_Deregister(com_maxfps);
}

