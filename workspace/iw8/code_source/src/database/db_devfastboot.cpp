/*
==============
DB_DevFastBoot_BootTimeCheck
==============
*/

FastBootMode __fastcall DB_DevFastBoot_BootTimeCheck()
{
  return ?DB_DevFastBoot_BootTimeCheck@@YA?AW4FastBootMode@@XZ();
}

/*
==============
DB_DevFastBoot_DevmapBootSkipUI
==============
*/

bool __fastcall DB_DevFastBoot_DevmapBootSkipUI()
{
  return ?DB_DevFastBoot_DevmapBootSkipUI@@YA_NXZ();
}

/*
==============
DB_DevFastBoot_Disable
==============
*/

void DB_DevFastBoot_Disable(void)
{
  ?DB_DevFastBoot_Disable@@YAXXZ();
}

/*
==============
DB_DevFastBoot_SetUsedDevmap
==============
*/

void __fastcall DB_DevFastBoot_SetUsedDevmap(bool isAlwaysLoadedUIMap)
{
  ?DB_DevFastBoot_SetUsedDevmap@@YAX_N@Z(isAlwaysLoadedUIMap);
}

/*
==============
DB_DevFastBoot_IsDVarEnabled
==============
*/

FastBootMode __fastcall DB_DevFastBoot_IsDVarEnabled()
{
  return ?DB_DevFastBoot_IsDVarEnabled@@YA?AW4FastBootMode@@XZ();
}

/*
==============
DB_DevFastBoot_LoadUIFastFile
==============
*/

bool __fastcall DB_DevFastBoot_LoadUIFastFile()
{
  return ?DB_DevFastBoot_LoadUIFastFile@@YA_NXZ();
}

/*
==============
DB_DevFastBoot_BootTimeCheck
==============
*/
const dvar_t *DB_DevFastBoot_BootTimeCheck()
{
  const dvar_t *result; 
  const dvar_t *v1; 

  if ( s_devFastBootDisabled || !s_usedDevmap )
    return 0i64;
  result = Dvar_FindVarByName("PRPKNRLS");
  v1 = result;
  if ( result )
  {
    Dvar_CheckFrontendServerThread(result);
    return (const dvar_t *)v1->current.unsignedInt;
  }
  return result;
}

/*
==============
DB_DevFastBoot_DevmapBootSkipUI
==============
*/
char DB_DevFastBoot_DevmapBootSkipUI()
{
  const dvar_t *VarByName; 
  const dvar_t *v1; 
  const dvar_t *v2; 
  const dvar_t *v3; 

  if ( s_devFastBootDisabled || !s_usedDevmap )
    return 0;
  VarByName = Dvar_FindVarByName("PRPKNRLS");
  v1 = VarByName;
  if ( VarByName )
  {
    Dvar_CheckFrontendServerThread(VarByName);
    if ( v1->current.integer )
      return 1;
  }
  v2 = Dvar_FindVarByName("LPKOLMPNNO");
  v3 = v2;
  if ( !v2 )
    return 1;
  Dvar_CheckFrontendServerThread(v2);
  return v3->current.enabled;
}

/*
==============
DB_DevFastBoot_Disable
==============
*/
void DB_DevFastBoot_Disable(void)
{
  s_devFastBootDisabled = 1;
}

/*
==============
DB_DevFastBoot_IsDVarEnabled
==============
*/
const dvar_t *DB_DevFastBoot_IsDVarEnabled()
{
  const dvar_t *result; 
  const dvar_t *v1; 

  result = Dvar_FindVarByName("PRPKNRLS");
  v1 = result;
  if ( result )
  {
    Dvar_CheckFrontendServerThread(result);
    return (const dvar_t *)v1->current.unsignedInt;
  }
  return result;
}

/*
==============
DB_DevFastBoot_LoadUIFastFile
==============
*/
_BOOL8 DB_DevFastBoot_LoadUIFastFile()
{
  return s_usedAlwaysLoadedUIMap;
}

/*
==============
DB_DevFastBoot_SetUsedDevmap
==============
*/
void DB_DevFastBoot_SetUsedDevmap(bool isAlwaysLoadedUIMap)
{
  s_usedDevmap = 1;
  s_usedAlwaysLoadedUIMap = isAlwaysLoadedUIMap;
}

