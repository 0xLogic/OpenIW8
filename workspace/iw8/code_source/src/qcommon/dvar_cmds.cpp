/*
==============
Dvar_DumpNameByChecksum
==============
*/

void __fastcall Dvar_DumpNameByChecksum()
{
  ?Dvar_DumpNameByChecksum@@YAXXZ();
}

/*
==============
Com_DvarDump
==============
*/

void __fastcall Com_DvarDump(int channel, const char *match)
{
  ?Com_DvarDump@@YAXHPEBD@Z(channel, match);
}

/*
==============
Dvar_Toggle_f
==============
*/

bool __fastcall Dvar_Toggle_f()
{
  return ?Dvar_Toggle_f@@YAXXZ();
}

/*
==============
Dvar_SetCL_f
==============
*/

void __fastcall Dvar_SetCL_f()
{
  ?Dvar_SetCL_f@@YAXXZ();
}

/*
==============
Dvar_Set_Cmd
==============
*/

void __fastcall Dvar_Set_Cmd(bool isSuperUser)
{
  ?Dvar_Set_Cmd@@YAX_N@Z(isSuperUser);
}

/*
==============
Dvar_TogglePrint_f
==============
*/

void __fastcall Dvar_TogglePrint_f()
{
  ?Dvar_TogglePrint_f@@YAXXZ();
}

/*
==============
Dvar_AddCommands
==============
*/

void Dvar_AddCommands(void)
{
  ?Dvar_AddCommands@@YAXXZ();
}

/*
==============
Dvar_List_f
==============
*/

void __fastcall Dvar_List_f()
{
  ?Dvar_List_f@@YAXXZ();
}

/*
==============
Dvar_Command
==============
*/

int __fastcall Dvar_Command(const bool isSuperUser)
{
  return ?Dvar_Command@@YAH_N@Z(isSuperUser);
}

/*
==============
Dvar_Reset_f
==============
*/

void __fastcall Dvar_Reset_f()
{
  ?Dvar_Reset_f@@YAXXZ();
}

/*
==============
Dvar_EnableSetA
==============
*/

void Dvar_EnableSetA(void)
{
  ?Dvar_EnableSetA@@YAXXZ();
}

/*
==============
Dvar_WriteDefaults
==============
*/

void __fastcall Dvar_WriteDefaults(fileHandle_t f)
{
  ?Dvar_WriteDefaults@@YAXUfileHandle_t@@@Z(f);
}

/*
==============
Dvar_DisableSetA
==============
*/

void Dvar_DisableSetA(void)
{
  ?Dvar_DisableSetA@@YAXXZ();
}

/*
==============
Dvar_Dump_f
==============
*/

void __fastcall Dvar_Dump_f()
{
  ?Dvar_Dump_f@@YAXXZ();
}

/*
==============
Dvar_WriteVariables
==============
*/

void __fastcall Dvar_WriteVariables(fileHandle_t f)
{
  ?Dvar_WriteVariables@@YAXUfileHandle_t@@@Z(f);
}

/*
==============
Dvar_SetC_Cmd
==============
*/

void __fastcall Dvar_SetC_Cmd(bool isSuperUser)
{
  ?Dvar_SetC_Cmd@@YAX_N@Z(isSuperUser);
}

/*
==============
Com_DvarDump
==============
*/
void Com_DvarDump(int channel, const char *match)
{
  const dvar_t *v4; 
  char *fmt; 
  int userData[2]; 
  const char *v7; 
  char dest[128]; 

  if ( channel != 6 )
    goto LABEL_6;
  v4 = DCONST_DVARINT_logfile;
  if ( !DCONST_DVARINT_logfile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "logfile") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.integer )
  {
LABEL_6:
    Com_PrintMessage(channel, "=============================== DVAR DUMP ========================================\n", 0);
    userData[0] = 0;
    userData[1] = channel;
    v7 = match;
    Dvar_ForEachNameWithUserData(Com_DvarDumpSingle, userData);
    LODWORD(fmt) = dvarCount;
    Com_sprintf(dest, 0x80ui64, "\n%i total dvars\n%i dvar indexes\n", (unsigned int)userData[0], fmt);
    Com_PrintMessage(channel, dest, 0);
    Com_PrintMessage(channel, "=============================== END DVAR DUMP =====================================\n", 0);
  }
}

/*
==============
Com_DvarDumpSingle
==============
*/
void Com_DvarDumpSingle(const dvar_t *dvar, void *userData)
{
  const char *v4; 
  const char *UnobfuscatedName; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  unsigned int checksum; 
  unsigned int v10; 

  ++*(_DWORD *)userData;
  if ( !*((_QWORD *)userData + 1) || (v4 = Dvar_DevGetUnobfuscatedName(dvar->name), Com_Filter(*((const char **)userData + 1), v4, 0)) )
  {
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvar->name);
    if ( Dvar_HasLatchedValue(dvar) )
    {
      v6 = Dvar_DisplayableLatchedValue(dvar);
      v7 = Dvar_DisplayableValue(dvar);
      checksum = dvar->checksum;
      Dvar_Printf(dvar, *((_DWORD *)userData + 1), "      %s (%d) \"%s\" -- latched \"%s\"\n", UnobfuscatedName, checksum, v7, v6);
    }
    else
    {
      v8 = Dvar_DisplayableValue(dvar);
      v10 = dvar->checksum;
      Dvar_Printf(dvar, *((_DWORD *)userData + 1), "      %s (%d) \"%s\"\n", UnobfuscatedName, v10, v8);
    }
  }
}

/*
==============
Dvar_AddCommands
==============
*/
void Dvar_AddCommands(void)
{
  Cmd_AddCommandInternal("toggle", (void (__fastcall *)())Dvar_Toggle_f, &Dvar_Toggle_f_VAR);
  Cmd_AddCommandInternal("togglep", Dvar_TogglePrint_f, &Dvar_TogglePrint_f_VAR);
  Cmd_AddCommandInternal("set", Dvar_Set_f, &Dvar_Set_f_VAR);
  Cmd_AddCommandInternal("seta", Dvar_SetA_f, &Dvar_SetA_f_VAR);
  Cmd_AddCommandInternal("setc", Dvar_SetC_f, &Dvar_SetC_f_VAR);
  Cmd_AddCommandInternal("setcl", Dvar_SetCL_f, &Dvar_SetCL_f_VAR);
  Cmd_AddCommandInternal("reset", Dvar_Reset_f, &Dvar_Reset_f_VAR);
  Cmd_AddSuperUserCommandInternal("set", Dvar_Set_SuperUser_f, &Dvar_Set_SuperUser_f_VAR);
  Cmd_AddSuperUserCommandInternal("seta", Dvar_SetA_SuperUser_f, &Dvar_SetA_SuperUser_f_VAR);
  Cmd_AddSuperUserCommandInternal("setc", Dvar_SetC_SuperUser_f, &Dvar_SetC_SuperUser_f_VAR);
  Cmd_AddSuperUserCommandInternal("setcl", Dvar_SetCL_SuperUser_f, &Dvar_SetCL_SuperUser_f_VAR);
  Cmd_AddCommandInternal("dvarlist", Dvar_List_f, &Dvar_List_f_VAR);
  Cmd_AddCommandInternal("dvardump", Dvar_Dump_f, &Dvar_Dump_f_VAR);
  Cmd_AddCommandInternal("dvarChkToName", Dvar_DumpNameByChecksum, &Dvar_DumpNameByChecksum_VAR);
  Cmd_AddSuperUserCommandInternal("dvar_bool", Dvar_RegisterBool_f, &Dvar_RegisterBool_f_VAR);
  Cmd_AddSuperUserCommandInternal("dvar_int", Dvar_RegisterInt_f, &Dvar_RegisterInt_f_VAR);
  Cmd_AddSuperUserCommandInternal("dvar_float", Dvar_RegisterFloat_f, &Dvar_RegisterFloat_f_VAR);
  Cmd_AddSuperUserCommandInternal("dvar_vec3", Dvar_RegisterVec3_f, &Dvar_RegisterVec3_f_VAR);
  Cmd_AddSuperUserCommandInternal("dvar_vec3_color", Dvar_RegisterVec3Color_f, &Dvar_RegisterVec3Color_f_VAR);
  Cmd_AddCommandInternal("dvarlist_saved", Dvar_ListSavedDvar_f, &Dvar_ListSavedDvar_f_VAR);
  Cmd_AddCommandInternal("dvarlist_level", Dvar_ListDvarLevel_f, &Dvar_ListDvarLevel_f_VAR);
  Cmd_AddCommandInternal("setfromdvar", Dvar_SetFromDvar_f, &Dvar_SetFromDvar_f_VAR);
}

/*
==============
Dvar_Command
==============
*/
const dvar_t *Dvar_Command(const bool isSuperUser)
{
  const char *v2; 
  const dvar_t *result; 
  const dvar_t *v4; 
  const char *v5; 
  const char *v6; 
  const char *UnobfuscatedName; 
  const char *v8; 
  const char *v9; 
  const dvar_t *v10; 
  char combined[4096]; 

  v2 = Cmd_Argv(0);
  result = Dvar_FindVarByName(v2);
  v4 = result;
  if ( result )
  {
    if ( Cmd_Argc() == 1 )
    {
      v5 = Dvar_DisplayableResetValue(v4);
      v6 = Dvar_DisplayableValue(v4);
      UnobfuscatedName = Dvar_DevGetUnobfuscatedName(v4->name);
      if ( Dvar_Printf(v4, 0, "\"%s\" is: \"%s^7\" default: \"%s^7\"\n", UnobfuscatedName, v6, v5) )
      {
        if ( Dvar_HasLatchedValue(v4) )
        {
          v8 = Dvar_DisplayableLatchedValue(v4);
          Com_Printf(0, "latched: \"%s\"\n", v8);
        }
        Dvar_PrintDomain(v4);
      }
    }
    else
    {
      v9 = Cmd_Argv(0);
      Dvar_GetCombinedString(combined, 1);
      Dvar_SetCommandByName(v9, combined, isSuperUser);
      v10 = DCONST_DVARBOOL_dconst_tracking_dump_data;
      if ( !DCONST_DVARBOOL_dconst_tracking_dump_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "dconst_tracking_dump_data") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( v10->current.enabled )
        Dvar_ReportDvarConstUsage_Frame();
    }
    return (const dvar_t *)1;
  }
  return result;
}

/*
==============
Dvar_DisableSetA
==============
*/
void Dvar_DisableSetA(void)
{
  s_setaEnabled = 0;
}

/*
==============
Dvar_DumpNameByChecksum
==============
*/
void Dvar_DumpNameByChecksum(void)
{
  const char *v0; 
  const char *v1; 
  const dvar_t *VarByChecksumString; 
  const char *UnobfuscatedName; 

  if ( Cmd_Argc() > 1 && (v0 = Cmd_Argv(1), (v1 = v0) != NULL) )
  {
    VarByChecksumString = Dvar_FindVarByChecksumString(v0);
    if ( VarByChecksumString )
    {
      UnobfuscatedName = Dvar_DevGetUnobfuscatedName(VarByChecksumString->name);
      Com_Printf(0, "dvar checksum %s maps to dvar name '%s'\n", v1, UnobfuscatedName);
    }
    else
    {
      Com_Printf(0, "Failed to find matching dvar for checksum %s\n", v1);
    }
  }
  else
  {
    Com_Printf(0, "No checksum string supplied. Unable to search for matching dvar\n");
  }
}

/*
==============
Dvar_Dump_f
==============
*/
void Dvar_Dump_f(void)
{
  const char *v0; 
  int v1; 
  __int64 userData[2]; 
  char dest[128]; 

  if ( Cmd_Argc() <= 1 )
    v0 = NULL;
  else
    v0 = Cmd_Argv(1);
  Com_PrintMessage(0, "=============================== DVAR DUMP ========================================\n", 0);
  userData[0] = 0i64;
  userData[1] = (__int64)v0;
  Dvar_ForEachNameWithUserData(Com_DvarDumpSingle, userData);
  v1 = dvarCount;
  Com_sprintf(dest, 0x80ui64, "\n%i total dvars\n%i dvar indexes\n", LODWORD(userData[0]), v1);
  Com_PrintMessage(0, dest, 0);
  Com_PrintMessage(0, "=============================== END DVAR DUMP =====================================\n", 0);
}

/*
==============
Dvar_EnableSetA
==============
*/
void Dvar_EnableSetA(void)
{
  s_setaEnabled = 1;
}

/*
==============
Dvar_GetCombinedString
==============
*/
void Dvar_GetCombinedString(char *combined, int first)
{
  int v4; 
  int v5; 
  int i; 
  const char *v7; 
  unsigned __int64 v8; 
  const char *v9; 

  v4 = Cmd_Argc();
  v5 = 0;
  *combined = 0;
  for ( i = v4; first < i; ++first )
  {
    v7 = Cmd_Argv(first);
    v8 = -1i64;
    do
      ++v8;
    while ( v7[v8] );
    if ( (v8 > 0x7FFFFFFFFFFFFFFFi64 || v8 + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v8, "unsigned", v8) )
      __debugbreak();
    v5 += v8 + 1;
    if ( v5 >= 4094 )
      break;
    v9 = Cmd_Argv(first);
    I_strcat(combined, 0x1000ui64, v9);
    if ( first != i - 1 )
      I_strcat(combined, 0x1000ui64, " ");
  }
}

/*
==============
Dvar_ListDvarLevel_f
==============
*/
void Dvar_ListDvarLevel_f()
{
  char userData; 

  if ( Cmd_Argc() == 2 )
  {
    userData = Cmd_ArgInt(1);
    Dvar_ForEachNameWithUserData(Dvar_ListDvarLevels_Single, &userData);
  }
  else
  {
    Com_Printf(16, "Missing level argument\n");
  }
}

/*
==============
Dvar_ListDvarLevels_Single
==============
*/
void Dvar_ListDvarLevels_Single(const dvar_t *dvar, void *userData)
{
  const char *UnobfuscatedName; 

  if ( dvar->level[0] == *(_BYTE *)userData )
  {
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvar->name);
    Dvar_Printf(dvar, 0, "%s\n", UnobfuscatedName);
  }
}

/*
==============
Dvar_ListSavedDvar_Single
==============
*/
void Dvar_ListSavedDvar_Single(const dvar_t *dvar, void *userData)
{
  const char *v3; 
  const char *UnobfuscatedName; 

  if ( (dvar->flags & 0x40) != 0 )
  {
    ++*(_DWORD *)userData;
    v3 = Dvar_DisplayableValue(dvar);
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvar->name);
    Dvar_Printf(dvar, 0, " %s \"%s\"\n", UnobfuscatedName, v3);
  }
}

/*
==============
Dvar_ListSavedDvar_f
==============
*/
void Dvar_ListSavedDvar_f()
{
  unsigned int userData; 

  userData = 0;
  Dvar_ForEachNameWithUserData(Dvar_ListSavedDvar_Single, &userData);
  Com_Printf(0, "\n%i total SAVED dvars\n", userData);
}

/*
==============
Dvar_ListSingle
==============
*/
void Dvar_ListSingle(const dvar_t *dvar, void *userData)
{
  const char *v4; 
  unsigned int flags; 
  char v6; 
  char v7; 
  char v8; 
  char v9; 
  char v10; 
  char v11; 
  char v12; 
  const char *v13; 
  const char *UnobfuscatedName; 
  char v15[8]; 
  char dest[248]; 

  if ( !userData || (v4 = Dvar_DevGetUnobfuscatedName(dvar->name), Com_Filter((const char *)userData, v4, 0)) )
  {
    flags = dvar->flags;
    v15[4] = 32;
    v6 = 32;
    if ( (flags & 0x400) != 0 )
      v6 = 83;
    v15[0] = v6;
    v7 = 85;
    if ( (flags & 0x200) == 0 )
      v7 = 32;
    v15[1] = v7;
    v8 = 82;
    if ( (flags & 0x2000) == 0 )
      v8 = 32;
    v15[2] = v8;
    v9 = 73;
    if ( (flags & 0x800) == 0 )
      v9 = 32;
    v15[3] = v9;
    v10 = 76;
    if ( (flags & 2) == 0 )
      v10 = 32;
    v15[5] = v10;
    v11 = 67;
    if ( (flags & 4) == 0 )
      v11 = 32;
    v15[6] = v11;
    v12 = 88;
    if ( (flags & 0x100) == 0 )
      v12 = 32;
    v15[7] = v12;
    v13 = Dvar_DisplayableValue(dvar);
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvar->name);
    Com_sprintf_truncate(dest, 0xF8ui64, " %s \"%s\"\n", UnobfuscatedName, v13);
    Com_Printf(0, (const char *)&queryFormat, v15);
  }
}

/*
==============
Dvar_List_f
==============
*/
void Dvar_List_f(void)
{
  char *v0; 

  if ( Cmd_Argc() <= 1 )
    v0 = NULL;
  else
    v0 = (char *)Cmd_Argv(1);
  Dvar_ForEachNameWithUserData(Dvar_ListSingle, v0);
  Com_Printf(0, "\n%i total dvars\n", (unsigned int)dvarCount);
}

/*
==============
Dvar_RegisterBool_f
==============
*/
void Dvar_RegisterBool_f()
{
  const char *v0; 
  const char *v1; 
  bool v2; 
  const dvar_t *VarByName; 
  unsigned __int8 type; 
  const char *UnobfuscatedName; 

  if ( Cmd_Argc() != 3 )
  {
    v0 = Cmd_Argv(0);
    Com_Printf(0, "USAGE: %s <name> <default>\n", v0);
    return;
  }
  v1 = Cmd_Argv(1);
  v2 = Cmd_ArgInt(2) != 0;
  VarByName = Dvar_FindVarByName(v1);
  if ( !VarByName )
    goto LABEL_6;
  type = VarByName->type;
  if ( type == 9 )
  {
    if ( (VarByName->flags & 0x100) != 0 )
    {
LABEL_6:
      Dvar_RegisterSuperUserBool(v1, v2, 0x100u, "External Dvar (SuperUser)");
      return;
    }
LABEL_9:
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(VarByName->name);
    Com_Printf(0, "dvar '%s' is not a boolean dvar\n", UnobfuscatedName);
    return;
  }
  if ( type )
    goto LABEL_9;
}

/*
==============
Dvar_RegisterFloat_f
==============
*/
void Dvar_RegisterFloat_f()
{
  const char *v0; 
  const char *v1; 
  double v2; 
  float v3; 
  double v4; 
  float v5; 
  double v6; 
  const dvar_t *VarByName; 
  unsigned __int8 type; 
  const char *UnobfuscatedName; 

  if ( Cmd_Argc() != 5 )
  {
    v0 = Cmd_Argv(0);
    Com_Printf(0, "USAGE: %s <name> <default> <min> <max>\n", v0);
    return;
  }
  v1 = Cmd_Argv(1);
  v2 = Cmd_ArgFloat(2);
  v3 = *(float *)&v2;
  v4 = Cmd_ArgFloat(3);
  v5 = *(float *)&v4;
  v6 = Cmd_ArgFloat(4);
  if ( v5 > *(float *)&v6 )
  {
    Com_Printf(0, "dvar %s: min %g should not be greater than max %g\n", v1, v5, *(float *)&v6);
    return;
  }
  VarByName = Dvar_FindVarByName(v1);
  if ( !VarByName )
    goto LABEL_8;
  type = VarByName->type;
  if ( type == 9 )
  {
    if ( (VarByName->flags & 0x100) != 0 )
    {
LABEL_8:
      Dvar_RegisterSuperUserFloat(v1, v3, v5, *(float *)&v6, 0x100u, "External Dvar (SuperUser)");
      return;
    }
LABEL_11:
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(VarByName->name);
    Com_Printf(0, "dvar '%s' is not an float dvar\n", UnobfuscatedName);
    return;
  }
  if ( type != 1 )
    goto LABEL_11;
}

/*
==============
Dvar_RegisterInt_f
==============
*/
void Dvar_RegisterInt_f()
{
  const char *v0; 
  const char *v1; 
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  const dvar_t *VarByName; 
  unsigned __int8 type; 
  const char *UnobfuscatedName; 

  if ( Cmd_Argc() != 5 )
  {
    v0 = Cmd_Argv(0);
    Com_Printf(0, "USAGE: %s <name> <default> <min> <max>\n", v0);
    return;
  }
  v1 = Cmd_Argv(1);
  v2 = Cmd_ArgInt(2);
  v3 = Cmd_ArgInt(3);
  v4 = Cmd_ArgInt(4);
  v5 = v4;
  if ( v3 > v4 )
  {
    Com_Printf(0, "dvar %s: min %i should not be greater than max %i\n", v1, (unsigned int)v3, v4);
    return;
  }
  VarByName = Dvar_FindVarByName(v1);
  if ( !VarByName )
    goto LABEL_8;
  type = VarByName->type;
  if ( type == 9 )
  {
    if ( (VarByName->flags & 0x100) != 0 )
    {
LABEL_8:
      Dvar_RegisterSuperUserInt(v1, v2, v3, v5, 0x100u, "External Dvar (SuperUser)");
      return;
    }
LABEL_12:
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(VarByName->name);
    Com_Printf(0, "dvar '%s' is not an integer dvar\n", UnobfuscatedName);
    return;
  }
  if ( type != 5 && type != 8 )
    goto LABEL_12;
}

/*
==============
Dvar_RegisterVec3Color_f
==============
*/
void Dvar_RegisterVec3Color_f()
{
  const char *v0; 
  const char *v1; 
  double v2; 
  float v3; 
  double v4; 
  float v5; 
  double v6; 
  const dvar_t *VarByName; 
  unsigned __int8 type; 
  const char *UnobfuscatedName; 

  if ( Cmd_Argc() != 5 )
  {
    v0 = Cmd_Argv(0);
    Com_Printf(0, "USAGE: %s <name> <defaultx> <defaulty> <defaultz>\n", v0);
    return;
  }
  v1 = Cmd_Argv(1);
  v2 = Cmd_ArgFloat(2);
  v3 = *(float *)&v2;
  v4 = Cmd_ArgFloat(3);
  v5 = *(float *)&v4;
  v6 = Cmd_ArgFloat(4);
  VarByName = Dvar_FindVarByName(v1);
  if ( !VarByName )
    goto LABEL_6;
  type = VarByName->type;
  if ( type == 9 )
  {
    if ( (VarByName->flags & 0x100) != 0 )
    {
LABEL_6:
      Dvar_RegisterSuperUserVec3Color(v1, v3, v5, *(float *)&v6, 1.0, 0x100u, "External Dvar (SuperUser)");
      return;
    }
LABEL_9:
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(VarByName->name);
    Com_Printf(0, "dvar '%s' is not an float 3 color dvar\n", UnobfuscatedName);
    return;
  }
  if ( type != 11 )
    goto LABEL_9;
}

/*
==============
Dvar_RegisterVec3_f
==============
*/
void Dvar_RegisterVec3_f()
{
  const char *v0; 
  const char *v1; 
  double v2; 
  float v3; 
  double v4; 
  float v5; 
  double v6; 
  float v7; 
  double v8; 
  float v9; 
  double v10; 
  const dvar_t *VarByName; 
  unsigned __int8 type; 
  const char *UnobfuscatedName; 

  if ( Cmd_Argc() != 7 )
  {
    v0 = Cmd_Argv(0);
    Com_Printf(0, "USAGE: %s <name> <defaultx> <defaulty> <defaultz>  <min> <max>\n", v0);
    return;
  }
  v1 = Cmd_Argv(1);
  v2 = Cmd_ArgFloat(2);
  v3 = *(float *)&v2;
  v4 = Cmd_ArgFloat(3);
  v5 = *(float *)&v4;
  v6 = Cmd_ArgFloat(4);
  v7 = *(float *)&v6;
  v8 = Cmd_ArgFloat(5);
  v9 = *(float *)&v8;
  v10 = Cmd_ArgFloat(6);
  if ( v9 > *(float *)&v10 )
  {
    Com_Printf(0, "dvar %s: min %g should not be greater than max %g\n", v1, v9, *(float *)&v10);
    return;
  }
  VarByName = Dvar_FindVarByName(v1);
  if ( !VarByName )
    goto LABEL_8;
  type = VarByName->type;
  if ( type == 9 )
  {
    if ( (VarByName->flags & 0x100) != 0 )
    {
LABEL_8:
      Dvar_RegisterSuperUserVec3(v1, v3, v5, v7, v9, *(float *)&v10, 0x100u, "External Dvar (SuperUser)");
      return;
    }
LABEL_11:
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(VarByName->name);
    Com_Printf(0, "dvar '%s' is not an float 3 dvar\n", UnobfuscatedName);
    return;
  }
  if ( type != 3 )
    goto LABEL_11;
}

/*
==============
Dvar_Reset_f
==============
*/
void Dvar_Reset_f(void)
{
  const char *v0; 
  const dvar_t *VarByName; 

  if ( Cmd_Argc() == 2 )
  {
    v0 = Cmd_Argv(1);
    VarByName = Dvar_FindVarByName(v0);
    if ( VarByName )
      Dvar_Reset(VarByName, DVAR_SOURCE_EXTERNAL);
  }
  else
  {
    Com_Printf(0, "USAGE: reset <variable>\n");
  }
}

/*
==============
Dvar_SetA_Cmd
==============
*/
void Dvar_SetA_Cmd(bool isSuperUser)
{
  const char *v2; 
  const char *v3; 
  const char *v4; 
  const dvar_t *VarByName; 

  if ( s_setaEnabled )
  {
    if ( Cmd_Argc() >= 3 )
    {
      Dvar_Set_Cmd(isSuperUser);
      v4 = Cmd_Argv(1);
      VarByName = Dvar_FindVarByName(v4);
      if ( VarByName )
        Dvar_AddFlags(VarByName, 0);
    }
    else
    {
      Com_Printf(0, "USAGE: seta <variable> <value>\n");
    }
  }
  else
  {
    if ( Cmd_Argc() > 1 )
    {
      v2 = Cmd_Argv(1);
      v3 = Cmd_Argv(0);
      Com_Printf(0, "Forcing \"%s\" command to normal \"Set\" for dvar \"%s\".\n", v3, v2);
    }
    Dvar_Set_Cmd(isSuperUser);
  }
}

/*
==============
Dvar_SetA_SuperUser_f
==============
*/
void Dvar_SetA_SuperUser_f()
{
  Dvar_SetA_Cmd(1);
}

/*
==============
Dvar_SetA_f
==============
*/
void Dvar_SetA_f()
{
  Dvar_SetA_Cmd(0);
}

/*
==============
Dvar_SetCL_Cmd
==============
*/
void Dvar_SetCL_Cmd(bool isSuperUser)
{
  const char *v2; 
  const char *v3; 
  const char *v4; 
  const dvar_t *VarByChecksumString; 

  if ( s_setaEnabled )
  {
    if ( Cmd_Argc() >= 3 )
    {
      Dvar_SetC_Cmd(isSuperUser);
      v4 = Cmd_Argv(1);
      VarByChecksumString = Dvar_FindVarByChecksumString(v4);
      if ( VarByChecksumString )
        Dvar_AddFlags(VarByChecksumString, 0);
    }
    else
    {
      Com_Printf(0, "USAGE: setcl <variable> <value>\n");
    }
  }
  else
  {
    if ( Cmd_Argc() > 1 )
    {
      v2 = Cmd_Argv(1);
      v3 = Cmd_Argv(0);
      Com_Printf(0, "Forcing \"%s\" command to normal \"Set\" for dvar \"%s\".\n", v3, v2);
    }
    Dvar_SetC_Cmd(isSuperUser);
  }
}

/*
==============
Dvar_SetCL_SuperUser_f
==============
*/
void Dvar_SetCL_SuperUser_f()
{
  Dvar_SetCL_Cmd(0);
}

/*
==============
Dvar_SetCL_f
==============
*/
void Dvar_SetCL_f(void)
{
  Dvar_SetCL_Cmd(0);
}

/*
==============
Dvar_SetC_Cmd
==============
*/
void Dvar_SetC_Cmd(bool isSuperUser)
{
  unsigned int v2; 
  char combined[4096]; 

  if ( Cmd_Argc() >= 3 )
  {
    v2 = Cmd_ArgInt(1);
    Dvar_GetCombinedString(combined, 2);
    Dvar_SetCommandByChecksum(v2, combined, isSuperUser);
  }
  else
  {
    Com_Printf(0, "USAGE: setc <variable> <value>\n");
  }
}

/*
==============
Dvar_SetC_SuperUser_f
==============
*/
void Dvar_SetC_SuperUser_f()
{
  Dvar_SetC_Cmd(1);
}

/*
==============
Dvar_SetC_f
==============
*/
void Dvar_SetC_f()
{
  if ( s_setaEnabled )
    Com_Printf(0, "setc not allowed during config registration. Use setcl instead\n");
  else
    Dvar_SetC_Cmd(0);
}

/*
==============
Dvar_SetFromDvar_f
==============
*/
void Dvar_SetFromDvar_f()
{
  const char *v0; 
  const dvar_t *VarByName; 
  const char *v2; 
  const char *v3; 
  const char *v4; 

  if ( Cmd_Argc() == 3 )
  {
    v0 = Cmd_Argv(2);
    VarByName = Dvar_FindVarByName(v0);
    if ( VarByName )
    {
      v3 = Dvar_DisplayableValue(VarByName);
      v4 = Cmd_Argv(1);
      Dvar_SetCommandByName(v4, v3, 0);
    }
    else
    {
      v2 = Cmd_Argv(2);
      Com_Printf(0, "dvar '%s' doesn't exist\n", v2);
    }
  }
  else
  {
    Com_Printf(0, "USAGE: setfromdvar <dest_dvar> <source_dvar>\n");
  }
}

/*
==============
Dvar_Set_Cmd
==============
*/
void Dvar_Set_Cmd(bool isSuperUser)
{
  int v2; 
  const char *v3; 
  const char *v4; 
  const char *v5; 
  const char *v6; 
  char combined[4096]; 

  v2 = Cmd_Argc();
  if ( v2 >= 3 )
  {
    v4 = Cmd_Argv(1);
    if ( Dvar_IsValidName(v4) )
    {
      Dvar_GetCombinedString(combined, 2);
      v6 = Cmd_Argv(1);
      Dvar_SetCommandByName(v6, combined, isSuperUser);
    }
    else
    {
      v5 = Cmd_Argv(1);
      Com_Printf(0, "invalid variable name: %s\n", v5);
    }
  }
  else if ( v2 <= 1 )
  {
    Com_Printf(0, "USAGE: set <variable> <value>\n");
  }
  else
  {
    v3 = Cmd_Argv(1);
    Com_Printf(0, "USAGE: set %s <value>\n", v3);
  }
}

/*
==============
Dvar_Set_SuperUser_f
==============
*/
void Dvar_Set_SuperUser_f()
{
  Dvar_Set_Cmd(1);
}

/*
==============
Dvar_Set_f
==============
*/
void Dvar_Set_f()
{
  if ( s_setaEnabled )
    Com_Printf(0, "set not allowed during config registration. Use seta instead\n");
  else
    Dvar_Set_Cmd(0);
}

/*
==============
Dvar_ToggleInternal
==============
*/
bool Dvar_ToggleInternal()
{
  const char *v0; 
  const char *v2; 
  const dvar_t *VarByName; 
  const char *v4; 
  int v5; 
  int v6; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  const char *v13; 

  if ( Cmd_Argc() >= 2 )
  {
    v2 = Cmd_Argv(1);
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dvar_cmds.cpp", 216, ASSERT_TYPE_ASSERT, "(dvarName)", (const char *)&queryFormat, "dvarName") )
      __debugbreak();
    VarByName = Dvar_FindVarByName(v2);
    if ( VarByName )
    {
      if ( Cmd_Argc() == 2 )
      {
        return Dvar_ToggleSimple(VarByName);
      }
      else
      {
        v4 = Dvar_DisplayableValue(VarByName);
        v5 = 2;
        if ( Cmd_Argc() <= 3 )
        {
LABEL_21:
          v10 = Cmd_Argv(2);
          v11 = v10;
          if ( VarByName->type == 8 )
          {
            v12 = Dvar_IndexStringToEnumString(VarByName, v10);
            if ( v12 )
            {
              if ( *v12 )
                v11 = v12;
            }
          }
          v13 = v11;
        }
        else
        {
          v6 = 3;
          while ( 1 )
          {
            v7 = Cmd_Argv(v5);
            v8 = v7;
            if ( VarByName->type == 8 )
            {
              v9 = Dvar_IndexStringToEnumString(VarByName, v7);
              if ( v9 )
              {
                if ( *v9 )
                  v8 = v9;
              }
            }
            if ( !I_stricmp(v4, v8) )
              break;
            v5 = v6++;
            if ( v6 >= Cmd_Argc() )
              goto LABEL_21;
          }
          v13 = Cmd_Argv(v6);
        }
        Dvar_SetCommandByName(v2, v13, 0);
        return 1;
      }
    }
    else
    {
      Com_Printf(0, "toggle failed: dvar '%s' not found.\n", v2);
      return 0;
    }
  }
  else
  {
    if ( !Cmd_Argv(0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dvar_cmds.cpp", 210, ASSERT_TYPE_ASSERT, "(Cmd_Argv( 0 ))", (const char *)&queryFormat, "Cmd_Argv( 0 )") )
      __debugbreak();
    v0 = Cmd_Argv(0);
    Com_Printf(0, "USAGE: %s <variable> <optional value sequence>\n", v0);
    return 0;
  }
}

/*
==============
Dvar_TogglePrint_f
==============
*/
void Dvar_TogglePrint_f(void)
{
  const char *v0; 
  const dvar_t *VarByName; 
  const char *v2; 
  int v3; 

  if ( Dvar_ToggleInternal() )
  {
    if ( Cmd_Argc() < 2 )
    {
      v3 = Cmd_Argc();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dvar_cmds.cpp", 293, ASSERT_TYPE_ASSERT, "( ( Cmd_Argc() >= 2 ) )", "( Cmd_Argc() ) = %i", v3) )
        __debugbreak();
    }
    v0 = Cmd_Argv(1);
    if ( !v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dvar_cmds.cpp", 295, ASSERT_TYPE_SANITY, "( dvarName )", (const char *)&queryFormat, "dvarName") )
      __debugbreak();
    VarByName = Dvar_FindVarByName(v0);
    if ( !VarByName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dvar_cmds.cpp", 297, ASSERT_TYPE_SANITY, "( dvar )", (const char *)&queryFormat, "dvar") )
      __debugbreak();
    v2 = Dvar_DisplayableValue(VarByName);
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dvar_cmds.cpp", 299, ASSERT_TYPE_SANITY, "( string )", (const char *)&queryFormat, "string") )
      __debugbreak();
    Com_Printf(0, "%s toggled to %s\n", v0, v2);
  }
}

/*
==============
Dvar_ToggleSimple
==============
*/
bool Dvar_ToggleSimple(const dvar_t *dvar)
{
  bool result; 
  int stringCount; 
  int max; 
  __int64 min; 
  unsigned __int64 v6; 
  const char *UnobfuscatedName; 
  int v12; 
  __int64 v13; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dvar_cmds.cpp", 101, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  switch ( dvar->type )
  {
    case 0u:
      Dvar_SetBoolFromSource(dvar, !dvar->current.enabled, DVAR_SOURCE_EXTERNAL);
      result = 1;
      break;
    case 1u:
      LODWORD(_XMM1) = dvar->domain.enumeration.stringCount;
      if ( *(float *)&_XMM1 > 0.0 || (_XMM3 = LODWORD(FLOAT_1_0), dvar->domain.value.max < 1.0) )
      {
        if ( *(float *)&_XMM1 == dvar->current.value )
          LODWORD(_XMM1) = dvar->domain.integer.max;
      }
      else
      {
        _XMM0 = dvar->current.unsignedInt;
        __asm
        {
          vcmpneqss xmm1, xmm0, xmm2
          vblendvps xmm1, xmm3, xmm2, xmm1
        }
      }
      Dvar_SetFloatFromSource(dvar, *(float *)&_XMM1, DVAR_SOURCE_EXTERNAL);
      result = 1;
      break;
    case 2u:
    case 3u:
    case 4u:
    case 9u:
    case 0xAu:
    case 0xBu:
      UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvar->name);
      Dvar_Printf(dvar, 0, "'toggle' with no arguments makes no sense for dvar '%s'\n", UnobfuscatedName);
      result = 0;
      break;
    case 5u:
      stringCount = dvar->domain.enumeration.stringCount;
      if ( stringCount > 0 || dvar->domain.integer.max < 1 )
      {
        if ( dvar->current.integer == stringCount )
          max = dvar->domain.integer.max;
        else
          max = dvar->domain.enumeration.stringCount;
      }
      else
      {
        max = dvar->current.integer == 0;
      }
      goto LABEL_12;
    case 6u:
      min = dvar->domain.integer64.min;
      if ( min > 0 || dvar->domain.integer64.max < 1 )
      {
        if ( dvar->current.integer64 == min )
          min = dvar->domain.integer64.max;
      }
      else
      {
        min = dvar->current.integer64 == 0;
      }
      Dvar_SetInt64FromSource(dvar, min, DVAR_SOURCE_EXTERNAL);
      result = 1;
      break;
    case 7u:
      v6 = dvar->domain.unsignedInt64.min;
      if ( v6 || !dvar->domain.integer64.max )
      {
        if ( dvar->current.integer64 == v6 )
          v6 = dvar->domain.unsignedInt64.max;
      }
      else
      {
        LOBYTE(v6) = dvar->current.integer64 == 0;
      }
      Dvar_SetUInt64FromSource(dvar, v6, DVAR_SOURCE_EXTERNAL);
      result = 1;
      break;
    case 8u:
      v12 = dvar->domain.enumeration.stringCount;
      if ( v12 )
      {
        max = (dvar->current.integer + 1) % v12;
LABEL_12:
        Dvar_SetIntFromSource(dvar, max, DVAR_SOURCE_EXTERNAL);
      }
      result = 1;
      break;
    default:
      LODWORD(v13) = dvar->type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dvar_cmds.cpp", 193, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "unhandled case %i", v13) )
        __debugbreak();
      result = 0;
      break;
  }
  return result;
}

/*
==============
Dvar_Toggle_f
==============
*/

bool __fastcall Dvar_Toggle_f()
{
  return Dvar_ToggleInternal();
}

/*
==============
Dvar_WriteDefaults
==============
*/
void Dvar_WriteDefaults(fileHandle_t f)
{
  __int64 userData; 

  userData = f.handle.handle;
  Dvar_ForEach(Dvar_WriteSingleDefault, &userData);
}

/*
==============
Dvar_WriteSingleDefault
==============
*/
void Dvar_WriteSingleDefault(const dvar_t *dvar, void *userData)
{
  fileHandle_t v3; 
  const char *v4; 
  const char *UnobfuscatedName; 

  if ( (dvar->flags & 0x2104) == 0 )
  {
    v3.handle.handle = *(_QWORD *)userData;
    v4 = Dvar_DisplayableResetValue(dvar);
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvar->name);
    FS_Printf(v3, "set %s \"%s\"\n", UnobfuscatedName, v4);
  }
}

/*
==============
Dvar_WriteSingleVariable
==============
*/
void Dvar_WriteSingleVariable(const dvar_t *dvar, void *userData)
{
  ;
}

/*
==============
Dvar_WriteVariables
==============
*/
void Dvar_WriteVariables(fileHandle_t f)
{
  __int64 userData; 

  userData = f.handle.handle;
  Dvar_ForEach(Dvar_WriteSingleVariable, &userData);
}

