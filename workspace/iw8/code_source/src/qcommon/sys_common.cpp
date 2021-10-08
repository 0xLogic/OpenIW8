/*
==============
Sys_IsConsoleEnabled
==============
*/

bool __fastcall Sys_IsConsoleEnabled()
{
  return ?Sys_IsConsoleEnabled@@YA_NXZ();
}

/*
==============
Sys_EnableUnattended
==============
*/

void Sys_EnableUnattended(void)
{
  ?Sys_EnableUnattended@@YAXXZ();
}

/*
==============
Sys_IsUnattended
==============
*/

bool __fastcall Sys_IsUnattended()
{
  return ?Sys_IsUnattended@@YA_NXZ();
}

/*
==============
Sys_EnableUnattended
==============
*/
void Sys_EnableUnattended(void)
{
  char v0; 

  v0 = s_unattended;
  if ( !s_unattended )
    v0 = 1;
  s_unattended = v0;
}

/*
==============
Sys_IsConsoleEnabled
==============
*/
bool Sys_IsConsoleEnabled()
{
  return 0;
}

/*
==============
Sys_IsUnattended
==============
*/
_BOOL8 Sys_IsUnattended()
{
  return s_unattended;
}

