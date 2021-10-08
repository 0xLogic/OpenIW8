/*
==============
NetConstStrings_ShutdownNetworkDvars
==============
*/

void NetConstStrings_ShutdownNetworkDvars(void)
{
  ?NetConstStrings_ShutdownNetworkDvars@@YAXXZ();
}

/*
==============
NetConstStrings_ClearNetworkDvars
==============
*/

void NetConstStrings_ClearNetworkDvars(void)
{
  ?NetConstStrings_ClearNetworkDvars@@YAXXZ();
}

/*
==============
NetConstStrings_ForEachCodInfoDvar
==============
*/

void __fastcall NetConstStrings_ForEachCodInfoDvar(void (__fastcall *callback)(const unsigned int, const dvar_t *))
{
  ?NetConstStrings_ForEachCodInfoDvar@@YAXP6AXIPEBUdvar_t@@@Z@Z(callback);
}

/*
==============
NetConstStrings_GetDvarChecksum
==============
*/

int __fastcall NetConstStrings_GetDvarChecksum()
{
  return ?NetConstStrings_GetDvarChecksum@@YAHXZ();
}

/*
==============
NetConstStrings_GetNetworkDvarIndex
==============
*/

bool __fastcall NetConstStrings_GetNetworkDvarIndex(const dvar_t *dvar, unsigned int *outDvarIndex)
{
  return ?NetConstStrings_GetNetworkDvarIndex@@YA_NPEBUdvar_t@@PEAI@Z(dvar, outDvarIndex);
}

/*
==============
NetConstStrings_ResetNetworkDvars
==============
*/

void NetConstStrings_ResetNetworkDvars(void)
{
  ?NetConstStrings_ResetNetworkDvars@@YAXXZ();
}

/*
==============
NetConstStrings_GetCodInfoDvarAtIndex
==============
*/

bool __fastcall NetConstStrings_GetCodInfoDvarAtIndex(const unsigned int codInfoIndex, const dvar_t **outDvar)
{
  return ?NetConstStrings_GetCodInfoDvarAtIndex@@YA_NIPEAPEBUdvar_t@@@Z(codInfoIndex, outDvar);
}

/*
==============
NetConstStrings_InitNetworkDvars
==============
*/

void NetConstStrings_InitNetworkDvars(void)
{
  ?NetConstStrings_InitNetworkDvars@@YAXXZ();
}

/*
==============
NetConstStrings_GetNetworkDvarAtIndex
==============
*/

bool __fastcall NetConstStrings_GetNetworkDvarAtIndex(const unsigned int networkDvarIndex, const dvar_t **outDvar)
{
  return ?NetConstStrings_GetNetworkDvarAtIndex@@YA_NIPEAPEBUdvar_t@@@Z(networkDvarIndex, outDvar);
}

/*
==============
NetConstStrings_ClearNetworkDvars
==============
*/
void NetConstStrings_ClearNetworkDvars(void)
{
  s_ncsDvarInitialized = 0;
  memset_0(s_networkDvars, 0, sizeof(s_networkDvars));
  s_networkDvarCount = 0;
  memset_0(s_codinfoDvars, 0, sizeof(s_codinfoDvars));
  s_codInfoDvarCount = 0;
  s_ncsDvarChecksum = 0;
}

/*
==============
NetConstStrings_ForEachCodInfoDvar
==============
*/
void NetConstStrings_ForEachCodInfoDvar(void (*callback)(const unsigned int, const dvar_t *))
{
  __int64 i; 
  const dvar_t *v3; 
  __int64 v4; 
  __int64 v5; 

  if ( !s_ncsDvarInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 377, ASSERT_TYPE_ASSERT, "(s_ncsDvarInitialized)", (const char *)&queryFormat, "s_ncsDvarInitialized") )
    __debugbreak();
  if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 378, ASSERT_TYPE_ASSERT, "(callback)", (const char *)&queryFormat, "callback") )
    __debugbreak();
  for ( i = 0i64; (unsigned int)i < s_codInfoDvarCount; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 0x64 )
    {
      LODWORD(v5) = 100;
      LODWORD(v4) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 382, ASSERT_TYPE_ASSERT, "(unsigned)( codInfoIndex ) < (unsigned)( ( sizeof( *array_counter( s_codinfoDvars ) ) + 0 ) )", "codInfoIndex doesn't index ARRAY_COUNT( s_codinfoDvars )\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    v3 = s_codinfoDvars[i];
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 384, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
      __debugbreak();
    if ( (v3->flags & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 385, ASSERT_TYPE_ASSERT, "(dvar->flags & (1 << 3))", (const char *)&queryFormat, "dvar->flags & DVAR_CODINFO") )
      __debugbreak();
    callback(i, v3);
  }
}

/*
==============
NetConstStrings_GetCodInfoDvarAtIndex
==============
*/
char NetConstStrings_GetCodInfoDvarAtIndex(const unsigned int codInfoIndex, const dvar_t **outDvar)
{
  __int64 v2; 
  char result; 
  __int64 v5; 

  v2 = codInfoIndex;
  if ( !outDvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 394, ASSERT_TYPE_ASSERT, "(outDvar)", (const char *)&queryFormat, "outDvar") )
    __debugbreak();
  if ( (unsigned int)v2 >= s_codInfoDvarCount )
  {
    result = 0;
    *outDvar = NULL;
  }
  else
  {
    if ( (unsigned int)v2 >= 0x64 )
    {
      LODWORD(v5) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 398, ASSERT_TYPE_ASSERT, "(unsigned)( codInfoIndex ) < (unsigned)( ( sizeof( *array_counter( s_codinfoDvars ) ) + 0 ) )", "codInfoIndex doesn't index ARRAY_COUNT( s_codinfoDvars )\n\t%i not in [0, %i)", v5, 100) )
        __debugbreak();
    }
    *outDvar = s_codinfoDvars[v2];
    return 1;
  }
  return result;
}

/*
==============
NetConstStrings_GetDvarChecksum
==============
*/
__int64 NetConstStrings_GetDvarChecksum()
{
  __int64 result; 

  result = (unsigned int)s_ncsDvarChecksum;
  if ( !s_ncsDvarInitialized && s_ncsDvarChecksum )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 370, ASSERT_TYPE_ASSERT, "(s_ncsDvarInitialized || !s_ncsDvarChecksum)", (const char *)&queryFormat, "s_ncsDvarInitialized || !s_ncsDvarChecksum") )
      __debugbreak();
    return (unsigned int)s_ncsDvarChecksum;
  }
  return result;
}

/*
==============
NetConstStrings_GetNetworkDvarAtIndex
==============
*/
char NetConstStrings_GetNetworkDvarAtIndex(const unsigned int networkDvarIndex, const dvar_t **outDvar)
{
  __int64 v3; 
  char result; 
  __int64 v5; 

  v3 = networkDvarIndex;
  if ( !s_ncsDvarInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 430, ASSERT_TYPE_ASSERT, "(s_ncsDvarInitialized)", (const char *)&queryFormat, "s_ncsDvarInitialized") )
    __debugbreak();
  if ( !outDvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 431, ASSERT_TYPE_ASSERT, "(outDvar)", (const char *)&queryFormat, "outDvar") )
    __debugbreak();
  if ( (unsigned int)v3 >= s_networkDvarCount )
  {
    result = 0;
    *outDvar = NULL;
  }
  else
  {
    if ( (unsigned int)v3 >= 0x100 )
    {
      LODWORD(v5) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 435, ASSERT_TYPE_ASSERT, "(unsigned)( networkDvarIndex ) < (unsigned)( ( sizeof( *array_counter( s_networkDvars ) ) + 0 ) )", "networkDvarIndex doesn't index ARRAY_COUNT( s_networkDvars )\n\t%i not in [0, %i)", v5, 256) )
        __debugbreak();
    }
    *outDvar = s_networkDvars[v3];
    return 1;
  }
  return result;
}

/*
==============
NetConstStrings_GetNetworkDvarIndex
==============
*/
char NetConstStrings_GetNetworkDvarIndex(const dvar_t *dvar, unsigned int *outDvarIndex)
{
  unsigned int v4; 
  const dvar_t **v5; 

  if ( !s_ncsDvarInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 410, ASSERT_TYPE_ASSERT, "(s_ncsDvarInitialized)", (const char *)&queryFormat, "s_ncsDvarInitialized") )
    __debugbreak();
  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 411, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( !outDvarIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 412, ASSERT_TYPE_ASSERT, "(outDvarIndex)", (const char *)&queryFormat, "outDvarIndex") )
    __debugbreak();
  v4 = 0;
  if ( s_networkDvarCount )
  {
    v5 = s_networkDvars;
    while ( *v5 != dvar )
    {
      ++v4;
      ++v5;
      if ( v4 >= s_networkDvarCount )
        goto LABEL_14;
    }
    *outDvarIndex = v4;
    return 1;
  }
  else
  {
LABEL_14:
    *outDvarIndex = 0;
    return 0;
  }
}

/*
==============
NetConstStrings_InitNetworkDvars
==============
*/
void NetConstStrings_InitNetworkDvars(void)
{
  __int64 v0; 
  ComGameModeApplication *ActiveApplication; 
  __int64 v2; 
  const dvar_t *v3; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_IDLE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 303, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::NET_CONST_STRING_NETWORK_DVARS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::NET_CONST_STRING_NETWORK_DVARS )") )
    __debugbreak();
  if ( !s_ncsDvarInitialized )
  {
    s_ncsScriptDvarsRegistered = 0;
    Dvar_EnableReplication();
    s_ncsDvarInitialized = 0;
    memset_0(s_networkDvars, 0, sizeof(s_networkDvars));
    v0 = 0i64;
    s_networkDvarCount = 0;
    memset_0(s_codinfoDvars, 0, sizeof(s_codinfoDvars));
    s_codInfoDvarCount = 0;
    s_ncsDvarChecksum = 0;
    ActiveApplication = ComGameModeApplication::GetActiveApplication();
    ActiveApplication->RegisterNetworkDvars(ActiveApplication);
    Dvar_ForEach(NetConstStrings_InitNetworkDvars_Callback, NULL);
    NetConstStrings_RegisterScriptDvars();
    s_ncsScriptDvarsRegistered = 1;
    Dvar_DisableReplication();
    v2 = s_networkDvarCount;
    s_ncsDvarChecksum = 0;
    if ( s_networkDvarCount )
    {
      do
      {
        if ( !s_networkDvars[v0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 273, ASSERT_TYPE_ASSERT, "(s_networkDvars[scriptClientDataIndex])", (const char *)&queryFormat, "s_networkDvars[scriptClientDataIndex]") )
          __debugbreak();
        v3 = DCONST_DVARBOOL_netconststrings_debug_checksum;
        s_ncsDvarChecksum ^= s_networkDvars[v0]->checksum;
        if ( !DCONST_DVARBOOL_netconststrings_debug_checksum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "netconststrings_debug_checksum") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v3);
        if ( v3->current.enabled )
          Com_Printf(16, "NCSDVARDEBUG: %s\n", s_networkDvars[v0]->name);
        v2 = s_networkDvarCount;
        v0 = (unsigned int)(v0 + 1);
      }
      while ( (unsigned int)v0 < s_networkDvarCount );
    }
    Com_Printf(16, "NetConstStrings: [Dvars] Checksum 0x%x (%d dvars)\n", (unsigned int)s_ncsDvarChecksum, v2);
    s_ncsDvarInitialized = 1;
  }
}

/*
==============
NetConstStrings_InitNetworkDvars_Callback
==============
*/
void NetConstStrings_InitNetworkDvars_Callback(const dvar_t *dvar, void *userData)
{
  unsigned int v3; 
  unsigned int v4; 
  __int64 v5; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 66, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( (dvar->flags & 0x18) != 0 )
  {
    v3 = s_networkDvarCount;
    if ( s_networkDvarCount >= 0x100 )
    {
      Sys_Error((const ObfuscateErrorText)&stru_143FFB380, userData);
      v3 = s_networkDvarCount;
      if ( s_networkDvarCount >= 0x100 )
      {
        LODWORD(v5) = s_networkDvarCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 76, ASSERT_TYPE_ASSERT, "(unsigned)( s_networkDvarCount ) < (unsigned)( ( sizeof( *array_counter( s_networkDvars ) ) + 0 ) )", "s_networkDvarCount doesn't index ARRAY_COUNT( s_networkDvars )\n\t%i not in [0, %i)", v5, 256) )
          __debugbreak();
        v3 = s_networkDvarCount;
      }
    }
    s_networkDvarCount = v3 + 1;
    s_networkDvars[v3] = dvar;
    if ( (dvar->flags & 8) != 0 )
    {
      v4 = s_codInfoDvarCount;
      if ( s_codInfoDvarCount >= 0x64 )
      {
        Sys_Error((const ObfuscateErrorText)&stru_143FFB4D0, userData);
        v4 = s_codInfoDvarCount;
      }
      s_codInfoDvarCount = v4 + 1;
      s_codinfoDvars[v4] = dvar;
    }
  }
}

/*
==============
NetConstStrings_RegisterScriptDvars
==============
*/

int __fastcall NetConstStrings_RegisterScriptDvars(double _XMM0_8)
{
  int result; 
  unsigned int v4; 
  unsigned int v5; 
  const char *ColumnValueForRow; 
  const dvar_t *VarByName; 
  const char *v10; 
  unsigned int v11; 
  __int16 v12; 
  const char *v13; 
  const char *v14; 
  char v15; 
  const dvar_t *v16; 
  int v17; 
  int v21; 
  unsigned int v22; 
  unsigned int v23; 
  char *description; 
  __int64 v27; 
  StringTable *tablePtr; 

  StringTable_GetAsset("mp/scriptClientData.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 130, ASSERT_TYPE_ASSERT, "(scriptClientData)", (const char *)&queryFormat, "scriptClientData") )
    __debugbreak();
  result = StringTable_GetRowCount(tablePtr);
  v4 = result;
  v5 = 0;
  if ( result )
  {
    __asm
    {
      vmovaps [rsp+88h+var_38], xmm6
      vmovss  xmm6, cs:__real@7f7fffff
      vmovaps [rsp+88h+var_48], xmm7
      vmovss  xmm7, cs:__real@ff7fffff
    }
    while ( 1 )
    {
      ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v5, 1);
      if ( !Dvar_IsValidName(ColumnValueForRow) )
        Sys_Error((const ObfuscateErrorText)&stru_143FFB660, ColumnValueForRow, v5);
      VarByName = Dvar_FindVarByName(ColumnValueForRow);
      if ( VarByName )
        Sys_Error((const ObfuscateErrorText)&stru_143FFB6A0, ColumnValueForRow);
      if ( s_networkDvarCount == 256 )
        Sys_Error((const ObfuscateErrorText)&stru_143FFB6E0);
      v10 = StringTable_GetColumnValueForRow(tablePtr, v5, 0);
      if ( *v10 == 99 )
        break;
      if ( *v10 != 115 )
      {
        Sys_Error((const ObfuscateErrorText)&stru_143FFB7C0, v10);
        v11 = 0;
LABEL_19:
        v12 = 0;
        goto LABEL_20;
      }
      if ( s_codInfoDvarCount >= 0x64 )
        Sys_Error((const ObfuscateErrorText)&stru_143FFB750);
      v12 = 8;
      v11 = 396;
LABEL_20:
      v13 = StringTable_GetColumnValueForRow(tablePtr, v5, 2);
      v14 = StringTable_GetColumnValueForRow(tablePtr, v5, 3);
      v15 = *v13;
      if ( *v13 == 98 )
      {
        v21 = atoi(v14);
        v16 = Dvar_RegisterBool(ColumnValueForRow, v21 != 0, v11, "ScriptClientData Generated Bool");
      }
      else
      {
        switch ( v15 )
        {
          case 'f':
            _XMM0_8 = atof(v14);
            __asm
            {
              vcvtsd2ss xmm1, xmm0, xmm0; value
              vmovaps xmm3, xmm6; max
              vmovaps xmm2, xmm7; min
            }
            v16 = Dvar_RegisterFloat(ColumnValueForRow, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v11, "ScriptClientData Generated Float");
            break;
          case 'i':
            v17 = atoi(v14);
            v16 = Dvar_RegisterInt(ColumnValueForRow, v17, 0x80000000, 0x7FFFFFFF, v11, "ScriptClientData Generated Int");
            break;
          case 's':
            v16 = Dvar_RegisterString(ColumnValueForRow, v14, v11, "ScriptClientData Generated String");
            break;
          default:
            Sys_Error((const ObfuscateErrorText)&stru_143FFB8C0, v13, ColumnValueForRow);
            goto LABEL_30;
        }
      }
      VarByName = v16;
LABEL_30:
      if ( !VarByName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 210, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
        __debugbreak();
      if ( (VarByName->flags & 8) != 0 )
      {
        if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 215, ASSERT_TYPE_ASSERT, "(curFlags & (1 << 3))", (const char *)&queryFormat, "curFlags & DVAR_CODINFO") )
          __debugbreak();
        v22 = s_codInfoDvarCount;
        if ( s_codInfoDvarCount >= 0x64 )
        {
          LODWORD(v27) = 100;
          LODWORD(description) = s_codInfoDvarCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 217, ASSERT_TYPE_ASSERT, "(unsigned)( s_codInfoDvarCount ) < (unsigned)( ( sizeof( *array_counter( s_codinfoDvars ) ) + 0 ) )", "s_codInfoDvarCount doesn't index ARRAY_COUNT( s_codinfoDvars )\n\t%i not in [0, %i)", description, v27) )
            __debugbreak();
          v22 = s_codInfoDvarCount;
        }
        s_codInfoDvarCount = v22 + 1;
        s_codinfoDvars[v22] = VarByName;
      }
      v23 = s_networkDvarCount;
      if ( s_networkDvarCount >= 0x100 )
      {
        LODWORD(v27) = 256;
        LODWORD(description) = s_networkDvarCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 222, ASSERT_TYPE_ASSERT, "(unsigned)( s_networkDvarCount ) < (unsigned)( ( sizeof( *array_counter( s_networkDvars ) ) + 0 ) )", "s_networkDvarCount doesn't index ARRAY_COUNT( s_networkDvars )\n\t%i not in [0, %i)", description, v27) )
          __debugbreak();
        v23 = s_networkDvarCount;
      }
      result = v23;
      ++v5;
      s_networkDvarCount = v23 + 1;
      s_networkDvars[v23] = VarByName;
      if ( v5 >= v4 )
      {
        __asm
        {
          vmovaps xmm7, [rsp+88h+var_48]
          vmovaps xmm6, [rsp+88h+var_38]
        }
        return result;
      }
    }
    v11 = 276;
    goto LABEL_19;
  }
  return result;
}

/*
==============
NetConstStrings_ResetNetworkDvars
==============
*/
void NetConstStrings_ResetNetworkDvars(void)
{
  __int64 i; 

  if ( s_ncsDvarInitialized )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_IDLE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 450, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::NET_CONST_STRING_NETWORK_DVARS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::NET_CONST_STRING_NETWORK_DVARS )") )
      __debugbreak();
    for ( i = 0i64; (unsigned int)i < s_networkDvarCount; i = (unsigned int)(i + 1) )
      Dvar_Reset(s_networkDvars[i], DVAR_SOURCE_INTERNAL);
  }
}

/*
==============
NetConstStrings_ShutdownNetworkDvars
==============
*/
void NetConstStrings_ShutdownNetworkDvars(void)
{
  int i; 
  const char *ColumnValueForRow; 
  const dvar_t *VarByName; 
  unsigned int v3; 
  ComGameModeApplication *ActiveApplication; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  StringTable *tablePtr; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_IDLE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 339, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::NET_CONST_STRING_NETWORK_DVARS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::NET_CONST_STRING_NETWORK_DVARS )") )
    __debugbreak();
  if ( s_ncsDvarInitialized )
  {
    if ( s_ncsScriptDvarsRegistered )
    {
      StringTable_GetAsset("mp/scriptClientData.csv", (const StringTable **)&tablePtr);
      if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 236, ASSERT_TYPE_ASSERT, "(scriptClientData)", (const char *)&queryFormat, "scriptClientData") )
        __debugbreak();
      for ( i = StringTable_GetRowCount(tablePtr) - 1; i >= 0; --i )
      {
        ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, i, 1);
        if ( !Dvar_IsValidName(ColumnValueForRow) )
        {
          LODWORD(v7) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 243, ASSERT_TYPE_ASSERT, "(Dvar_IsValidName( nameStr ))", "%s\n\tmp/scriptClientData.csv invalid name '%s' at index %i", "Dvar_IsValidName( nameStr )", ColumnValueForRow, v7) )
            __debugbreak();
        }
        VarByName = Dvar_FindVarByName(ColumnValueForRow);
        if ( VarByName )
        {
          v3 = s_networkDvarCount - 1;
          s_networkDvarCount = v3;
          if ( v3 >= 0x100 )
          {
            LODWORD(v6) = 256;
            LODWORD(v5) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 251, ASSERT_TYPE_ASSERT, "(unsigned)( s_networkDvarCount ) < (unsigned)( ( sizeof( *array_counter( s_networkDvars ) ) + 0 ) )", "s_networkDvarCount doesn't index ARRAY_COUNT( s_networkDvars )\n\t%i not in [0, %i)", v5, v6) )
              __debugbreak();
            v3 = s_networkDvarCount;
          }
          if ( VarByName != s_networkDvars[v3] )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 252, ASSERT_TYPE_ASSERT, "(dvar == s_networkDvars[s_networkDvarCount])", "%s\n\tOut of order dvar deregistration", "dvar == s_networkDvars[s_networkDvarCount]") )
              __debugbreak();
            v3 = s_networkDvarCount;
          }
          s_networkDvars[v3] = NULL;
          Dvar_Deregister(VarByName);
        }
        else
        {
          Sys_Error((const ObfuscateErrorText)&stru_143FFBB60, ColumnValueForRow);
        }
      }
      s_ncsScriptDvarsRegistered = 0;
    }
    Dvar_ReverseForEach(NetConstStrings_ShutdownNetworkDvars_Callback, NULL);
    if ( s_networkDvarCount )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 359, ASSERT_TYPE_ASSERT, "(s_networkDvarCount == 0)", "%s\n\tDeregistration of network dvars does not match the registration", "s_networkDvarCount == 0") )
        __debugbreak();
    }
    s_ncsDvarInitialized = 0;
    memset_0(s_networkDvars, 0, sizeof(s_networkDvars));
    s_networkDvarCount = 0;
    memset_0(s_codinfoDvars, 0, sizeof(s_codinfoDvars));
    s_codInfoDvarCount = 0;
    s_ncsDvarChecksum = 0;
    ActiveApplication = ComGameModeApplication::GetActiveApplication();
    ActiveApplication->DeRegisterNetworkDvars(ActiveApplication);
  }
}

/*
==============
NetConstStrings_ShutdownNetworkDvars_Callback
==============
*/
void NetConstStrings_ShutdownNetworkDvars_Callback(const dvar_t *dvar, void *userData)
{
  unsigned int v3; 
  unsigned int v4; 
  __int64 v5; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 101, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  if ( (dvar->flags & 0x18) != 0 )
  {
    v3 = s_networkDvarCount;
    if ( !s_networkDvarCount )
    {
      Sys_Error((const ObfuscateErrorText)&stru_143FFB530, userData);
      v3 = s_networkDvarCount;
    }
    v4 = v3 - 1;
    s_networkDvarCount = v4;
    if ( v4 >= 0x100 )
    {
      LODWORD(v5) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 114, ASSERT_TYPE_ASSERT, "(unsigned)( s_networkDvarCount ) < (unsigned)( ( sizeof( *array_counter( s_networkDvars ) ) + 0 ) )", "s_networkDvarCount doesn't index ARRAY_COUNT( s_networkDvars )\n\t%i not in [0, %i)", v5, 256) )
        __debugbreak();
      v4 = s_networkDvarCount;
    }
    if ( s_networkDvars[v4] != dvar )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconststrings\\netconststrings_dvar.cpp", 115, ASSERT_TYPE_ASSERT, "(s_networkDvars[s_networkDvarCount] == dvar)", "%s\n\tOut of order dvar deregistration", "s_networkDvars[s_networkDvarCount] == dvar") )
        __debugbreak();
      v4 = s_networkDvarCount;
    }
    s_networkDvars[v4] = NULL;
  }
}

