/*
==============
CG_Omnvar_AreValuesEqual
==============
*/

bool __fastcall CG_Omnvar_AreValuesEqual(const OmnvarDef *const omnvarDef, const OmnvarData *const lhs, const OmnvarData *const rhs)
{
  return ?CG_Omnvar_AreValuesEqual@@YA_NQEBUOmnvarDef@@QEBUOmnvarData@@1@Z(omnvarDef, lhs, rhs);
}

/*
==============
CG_Omnvar_GetData
==============
*/

OmnvarData *__fastcall CG_Omnvar_GetData(LocalClientNum_t localClientNum, unsigned int omnIdx)
{
  return ?CG_Omnvar_GetData@@YAPEAUOmnvarData@@W4LocalClientNum_t@@I@Z(localClientNum, omnIdx);
}

/*
==============
CG_GetOmnvar_BooleanByName
==============
*/

int __fastcall CG_GetOmnvar_BooleanByName(LocalClientNum_t localClientNum, const char *name, bool *result, const OmnvarDef **optionalOutDef, const OmnvarData **optionalOutData)
{
  return ?CG_GetOmnvar_BooleanByName@@YAHW4LocalClientNum_t@@PEBDPEA_NPEAPEBUOmnvarDef@@PEAPEBUOmnvarData@@@Z(localClientNum, name, result, optionalOutDef, optionalOutData);
}

/*
==============
CG_Omnvar_NetworkTimeOmnvarChanged
==============
*/

bool __fastcall CG_Omnvar_NetworkTimeOmnvarChanged(const OmnvarDef *const omnvarDef, const OmnvarData *const lhs, const OmnvarData *const rhs)
{
  return ?CG_Omnvar_NetworkTimeOmnvarChanged@@YA_NQEBUOmnvarDef@@QEBUOmnvarData@@1@Z(omnvarDef, lhs, rhs);
}

/*
==============
CG_Omnvar_InitDefaults
==============
*/

void __fastcall CG_Omnvar_InitDefaults(LocalClientNum_t localClientNum)
{
  ?CG_Omnvar_InitDefaults@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Omnvar_UpdatePmoveValues
==============
*/

void __fastcall CG_Omnvar_UpdatePmoveValues(LocalClientNum_t localClientNum)
{
  ?CG_Omnvar_UpdatePmoveValues@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GetOmnvar_IntegerByName
==============
*/

int __fastcall CG_GetOmnvar_IntegerByName(LocalClientNum_t localClientNum, const char *name, int *result, const OmnvarDef **optionalOutDef, const OmnvarData **optionalOutData)
{
  return ?CG_GetOmnvar_IntegerByName@@YAHW4LocalClientNum_t@@PEBDPEAHPEAPEBUOmnvarDef@@PEAPEBUOmnvarData@@@Z(localClientNum, name, result, optionalOutDef, optionalOutData);
}

/*
==============
CG_Omnvar_GetTime
==============
*/

unsigned int __fastcall CG_Omnvar_GetTime(const OmnvarDef *def, const OmnvarData *data, const LocalClientNum_t localClientNum)
{
  return ?CG_Omnvar_GetTime@@YAIPEBUOmnvarDef@@PEBUOmnvarData@@W4LocalClientNum_t@@@Z(def, data, localClientNum);
}

/*
==============
CG_Omnvar_UpdateInterpolation
==============
*/

void __fastcall CG_Omnvar_UpdateInterpolation(const LocalClientNum_t localClientNum, const unsigned int perSnapOmnvarCount, const OmnvarData *const oldSnapOmnvars, const OmnvarData *const newSnapOmnvars)
{
  ?CG_Omnvar_UpdateInterpolation@@YAXW4LocalClientNum_t@@IQEBUOmnvarData@@1@Z(localClientNum, perSnapOmnvarCount, oldSnapOmnvars, newSnapOmnvars);
}

/*
==============
CG_Omnvar_IsDefault
==============
*/

bool __fastcall CG_Omnvar_IsDefault(const OmnvarDef *const omnvarDef, const OmnvarData *const current)
{
  return ?CG_Omnvar_IsDefault@@YA_NQEBUOmnvarDef@@QEBUOmnvarData@@@Z(omnvarDef, current);
}

/*
==============
CG_GetOmnvar_StringByName
==============
*/

int __fastcall CG_GetOmnvar_StringByName(LocalClientNum_t localClientNum, const char *name, const char **result, const OmnvarDef **optionalOutDef, const OmnvarData **optionalOutData)
{
  return ?CG_GetOmnvar_StringByName@@YAHW4LocalClientNum_t@@PEBDPEAPEBDPEAPEBUOmnvarDef@@PEAPEBUOmnvarData@@@Z(localClientNum, name, result, optionalOutDef, optionalOutData);
}

/*
==============
CG_GetOmnvar_BooleanByName
==============
*/
__int64 CG_GetOmnvar_BooleanByName(LocalClientNum_t localClientNum, const char *name, bool *result, const OmnvarDef **optionalOutDef, const OmnvarData **optionalOutData)
{
  unsigned int IndexByName; 
  unsigned int v10; 
  const OmnvarDef *Def; 
  OmnvarData *Data; 
  bool enabled; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 156, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 157, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 105, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  IndexByName = BG_Omnvar_GetIndexByName(name);
  v10 = IndexByName;
  if ( IndexByName == -1 )
  {
    Com_PrintError(1, "CG_Omnvar_GetDataDefsByName: failed retrieving data defs for omnvar '%s'\n", name);
    Com_PrintError(1, "CG_GetOmnvar_BooleanByName: failed retrieving data defs for omnvar '%s'\n", name);
    return 0i64;
  }
  else
  {
    Def = BG_Omnvar_GetDef(IndexByName);
    Data = CG_Omnvar_GetData(localClientNum, v10);
    if ( optionalOutDef )
      *optionalOutDef = Def;
    if ( optionalOutData )
      *optionalOutData = Data;
    if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 224, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 225, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
      __debugbreak();
    if ( Def->type == OMNVAR_TYPE_BOOL )
      goto LABEL_26;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 226, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_BOOL)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_BOOL") )
      __debugbreak();
    if ( Def->type )
      enabled = 0;
    else
LABEL_26:
      enabled = Data->current.enabled;
    *result = enabled;
    return 1i64;
  }
}

/*
==============
CG_GetOmnvar_IntegerByName
==============
*/
__int64 CG_GetOmnvar_IntegerByName(LocalClientNum_t localClientNum, const char *name, int *result, const OmnvarDef **optionalOutDef, const OmnvarData **optionalOutData)
{
  unsigned int IndexByName; 
  unsigned int v10; 
  const OmnvarDef *Def; 
  const OmnvarData *Data; 
  const OmnvarData *v14; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 128, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 129, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 105, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  IndexByName = BG_Omnvar_GetIndexByName(name);
  v10 = IndexByName;
  if ( IndexByName == -1 )
  {
    Com_PrintError(1, "CG_Omnvar_GetDataDefsByName: failed retrieving data defs for omnvar '%s'\n", name);
    Com_PrintError(1, "CG_GetOmnvar_IntegerByName: failed retrieving data defs for omnvar '%s'\n", name);
    return 0i64;
  }
  else
  {
    Def = BG_Omnvar_GetDef(IndexByName);
    Data = CG_Omnvar_GetData(localClientNum, v10);
    v14 = Data;
    if ( optionalOutDef )
      *optionalOutDef = Def;
    if ( optionalOutData )
      *optionalOutData = Data;
    if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 206, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 207, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
      __debugbreak();
    if ( Def->type != OMNVAR_TYPE_INT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 208, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_INT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_INT") )
      __debugbreak();
    *result = v14->current.integer + Def->minvalue;
    return 1i64;
  }
}

/*
==============
CG_GetOmnvar_StringByName
==============
*/
__int64 CG_GetOmnvar_StringByName(LocalClientNum_t localClientNum, const char *name, const char **result, const OmnvarDef **optionalOutDef, const OmnvarData **optionalOutData)
{
  unsigned int IndexByName; 
  unsigned int v10; 
  const OmnvarDef *Def; 
  const OmnvarData *Data; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 184, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 185, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 105, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  IndexByName = BG_Omnvar_GetIndexByName(name);
  v10 = IndexByName;
  if ( IndexByName == -1 )
  {
    Com_PrintError(1, "CG_Omnvar_GetDataDefsByName: failed retrieving data defs for omnvar '%s'\n", name);
    Com_PrintError(1, "CG_GetOmnvar_StringByName: failed retrieving data defs for omnvar '%s'\n", name);
    return 0i64;
  }
  else
  {
    Def = BG_Omnvar_GetDef(IndexByName);
    Data = CG_Omnvar_GetData(localClientNum, v10);
    if ( optionalOutDef )
      *optionalOutDef = Def;
    if ( optionalOutData )
      *optionalOutData = Data;
    if ( BG_Omnvar_GetNCString(Def, Data, result) )
    {
      return 1i64;
    }
    else
    {
      Com_PrintError(1, "CG_GetOmnvar_StringByName: failed finding net const string for omnvar '%s'\n", name);
      return 0i64;
    }
  }
}

/*
==============
CG_Omnvar_AreValuesEqual
==============
*/
bool CG_Omnvar_AreValuesEqual(const OmnvarDef *const omnvarDef, const OmnvarData *const lhs, const OmnvarData *const rhs)
{
  bool v6; 
  bool v7; 
  bool result; 

  _RBX = rhs;
  _RDI = lhs;
  if ( !omnvarDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 47, ASSERT_TYPE_ASSERT, "(omnvarDef)", (const char *)&queryFormat, "omnvarDef") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 48, ASSERT_TYPE_ASSERT, "(lhs)", (const char *)&queryFormat, "lhs") )
    __debugbreak();
  v6 = _RBX == NULL;
  if ( !_RBX )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 49, ASSERT_TYPE_ASSERT, "(rhs)", (const char *)&queryFormat, "rhs");
    v6 = !v7;
    if ( v7 )
      __debugbreak();
  }
  switch ( omnvarDef->type )
  {
    case OMNVAR_TYPE_BOOL:
      result = _RDI->current.enabled == _RBX->current.enabled;
      break;
    case OMNVAR_TYPE_FLOAT:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+4]; jumptable 00000001419EAC2B case 1
        vucomiss xmm0, dword ptr [rdi+4]
      }
      if ( !v6 )
        goto LABEL_17;
      result = 1;
      break;
    case OMNVAR_TYPE_INT:
    case OMNVAR_TYPE_UINT:
    case OMNVAR_TYPE_TIME:
    case OMNVAR_TYPE_NCS_LUI:
      result = _RDI->current.integer == _RBX->current.integer;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 66, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
        __debugbreak();
LABEL_17:
      result = 0;
      break;
  }
  return result;
}

/*
==============
CG_Omnvar_GetData
==============
*/
OmnvarData *CG_Omnvar_GetData(LocalClientNum_t localClientNum, unsigned int omnIdx)
{
  cg_t *LocalClientGlobals; 
  unsigned int v5; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  __int32 v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned int v15; 
  unsigned int v16; 

  if ( (BG_Omnvar_GetDef(omnIdx)->flags & 4) != 0 )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 27, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature ( Com_GameMode_Feature::OMNVARS_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature ( Com_GameMode_Feature::OMNVARS_MULTIPLAYER )") )
      __debugbreak();
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v5 = omnIdx - BG_Omnvar_PerSnapCount();
    if ( v5 >= BG_Omnvar_PerPlayerstateCount() )
    {
      v15 = BG_Omnvar_PerPlayerstateCount();
      LODWORD(v12) = omnIdx - BG_Omnvar_PerSnapCount();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 31, ASSERT_TYPE_ASSERT, "(unsigned)( omnIdx - BG_Omnvar_PerSnapCount() ) < (unsigned)( BG_Omnvar_PerPlayerstateCount() )", "omnIdx - BG_Omnvar_PerSnapCount() doesn't index BG_Omnvar_PerPlayerstateCount()\n\t%i not in [0, %i)", v12, v15) )
        __debugbreak();
    }
    return &LocalClientGlobals->predictedPlayerState.rxvOmnvars[omnIdx - BG_Omnvar_PerSnapCount()];
  }
  else
  {
    v7 = BG_Omnvar_PerGameCount();
    v8 = BG_Omnvar_PerClientCount() + v7;
    v9 = v8 + BG_Omnvar_PerPlayerstateCount();
    v10 = localClientNum * v9;
    if ( omnIdx >= v9 )
    {
      v16 = v9;
      v13 = omnIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 39, ASSERT_TYPE_ASSERT, "(unsigned)( omnIdx ) < (unsigned)( omnvarCount )", "omnIdx doesn't index omnvarCount\n\t%i not in [0, %i)", v13, v16) )
        __debugbreak();
    }
    v11 = omnIdx + v10;
    if ( (unsigned int)v11 >= 0x1000 )
    {
      LODWORD(v14) = 4096;
      LODWORD(v12) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 40, ASSERT_TYPE_ASSERT, "(unsigned)( offsetToOmnvars + omnIdx ) < (unsigned)( ( sizeof( *array_counter( s_localClientOmnvars ) ) + 0 ) )", "offsetToOmnvars + omnIdx doesn't index ARRAY_COUNT( s_localClientOmnvars )\n\t%i not in [0, %i)", v12, v14) )
        __debugbreak();
    }
    return &s_localClientOmnvars[v11];
  }
}

/*
==============
CG_Omnvar_GetTime
==============
*/
__int64 CG_Omnvar_GetTime(const OmnvarDef *def, const OmnvarData *data, const LocalClientNum_t localClientNum)
{
  OmnvarValue current; 

  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 246, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 247, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( def->type != OMNVAR_TYPE_TIME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 248, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_TIME)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_TIME") )
    __debugbreak();
  current = data->current;
  if ( current.integer && (def->flags & 4) != 0 )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 254, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER )") )
      __debugbreak();
    current.integer += CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.deltaTime;
  }
  return current.unsignedInteger;
}

/*
==============
CG_Omnvar_InitDefaults
==============
*/
void CG_Omnvar_InitDefaults(LocalClientNum_t localClientNum)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v4; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 
  LocalClientNum_t v10; 
  __int64 v11; 
  int v12; 

  v2 = BG_Omnvar_PerGameCount();
  v3 = BG_Omnvar_PerClientCount() + v2;
  v4 = BG_Omnvar_PerPlayerstateCount() + v3;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v12 = 2;
    v10 = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 216, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  v5 = localClientNum * v4;
  v6 = BG_Omnvar_PerGameCount();
  v7 = BG_Omnvar_PerClientCount();
  if ( v6 )
  {
    if ( (unsigned int)v5 >= 0x1000 )
    {
      LODWORD(v11) = 4096;
      LODWORD(v9) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 225, ASSERT_TYPE_ASSERT, "(unsigned)( offsetToOmnvars ) < (unsigned)( ( sizeof( *array_counter( s_localClientOmnvars ) ) + 0 ) )", "offsetToOmnvars doesn't index ARRAY_COUNT( s_localClientOmnvars )\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    if ( v6 + (unsigned int)v5 - 1 >= 0x1000 )
    {
      LODWORD(v11) = 4096;
      LODWORD(v9) = v6 + v5 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 226, ASSERT_TYPE_ASSERT, "(unsigned)( offsetToOmnvars + gameScopeCount - 1 ) < (unsigned)( ( sizeof( *array_counter( s_localClientOmnvars ) ) + 0 ) )", "offsetToOmnvars + gameScopeCount - 1 doesn't index ARRAY_COUNT( s_localClientOmnvars )\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    BG_Omnvar_LoadGamescopeDefaults(&s_localClientOmnvars[v5]);
  }
  if ( v7 )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 233, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER )") )
      __debugbreak();
    v8 = (unsigned int)v5 + v6;
    if ( (unsigned int)v8 >= 0x1000 )
    {
      LODWORD(v11) = 4096;
      LODWORD(v9) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 235, ASSERT_TYPE_ASSERT, "(unsigned)( offsetToClientOmnvars ) < (unsigned)( ( sizeof( *array_counter( s_localClientOmnvars ) ) + 0 ) )", "offsetToClientOmnvars doesn't index ARRAY_COUNT( s_localClientOmnvars )\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    if ( (unsigned int)v8 + v7 - 1 >= 0x1000 )
    {
      LODWORD(v11) = 4096;
      LODWORD(v9) = v8 + v7 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 236, ASSERT_TYPE_ASSERT, "(unsigned)( offsetToClientOmnvars + clientScopeCount - 1 ) < (unsigned)( ( sizeof( *array_counter( s_localClientOmnvars ) ) + 0 ) )", "offsetToClientOmnvars + clientScopeCount - 1 doesn't index ARRAY_COUNT( s_localClientOmnvars )\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    BG_Omnvar_LoadClientscopeDefaults(&s_localClientOmnvars[v8]);
  }
}

/*
==============
CG_Omnvar_Interpolate
==============
*/
void CG_Omnvar_Interpolate(const LocalClientNum_t localClientNum, const OmnvarDef *def, const OmnvarData *oldData, const OmnvarData *newData, const OmnvarData *currentData, float lerpValue, OmnvarData *outData)
{
  const OmnvarData *v8; 
  lua_State *v54; 
  int ControllerFromClient; 

  v8 = newData;
  if ( def->type == OMNVAR_TYPE_FLOAT )
  {
    _RAX = currentData;
    __asm
    {
      vmovss  xmm3, dword ptr [r9+4]
      vucomiss xmm3, dword ptr [rax+4]
    }
    if ( def->type == OMNVAR_TYPE_FLOAT )
      return;
    if ( def->userType == OMNVAR_USER_TYPE_ANGLE )
    {
      __asm
      {
        vsubss  xmm0, xmm3, dword ptr [r8+4]
        vmulss  xmm5, xmm0, cs:__real@3b360b61
        vaddss  xmm2, xmm5, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm4, xmm0, xmm2, 1
        vsubss  xmm1, xmm5, xmm4
        vmulss  xmm0, xmm1, cs:__real@43b40000
        vmulss  xmm2, xmm0, [rsp+38h+lerpValue]
        vaddss  xmm3, xmm2, dword ptr [r8+4]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vsubss  xmm0, xmm0, [rsp+38h+lerpValue]
        vmulss  xmm2, xmm0, dword ptr [r8+4]
        vmulss  xmm1, xmm3, [rsp+38h+lerpValue]
        vaddss  xmm3, xmm2, xmm1
      }
    }
    _RSI = outData;
    __asm { vmovss  dword ptr [rsi+4], xmm3 }
    goto LABEL_18;
  }
  if ( def->type == OMNVAR_TYPE_INT )
  {
    _ECX = newData->current;
    if ( currentData->current.integer == _ECX.integer )
      return;
    __asm
    {
      vmovd   xmm1, dword ptr [r8+4]
      vmovss  xmm0, cs:__real@3f800000
      vsubss  xmm0, xmm0, [rsp+38h+lerpValue]
    }
    _RSI = outData;
    __asm
    {
      vcvtdq2ps xmm1, xmm1
      vmulss  xmm3, xmm1, xmm0
      vmovd   xmm1, ecx
      vcvtdq2ps xmm1, xmm1
      vmulss  xmm2, xmm1, [rsp+38h+lerpValue]
      vaddss  xmm0, xmm3, xmm2
      vaddss  xmm3, xmm0, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm4, xmm0, xmm3, 1
      vcvttss2si eax, xmm4
    }
    outData->current = _EAX;
    goto LABEL_18;
  }
  if ( def->type != OMNVAR_TYPE_TIME )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 321, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_Omnvar_UpdateInterpolation - Cannot interpolate for non-numeric omnvar!") )
      __debugbreak();
    return;
  }
  if ( def->userType == OMNVAR_USER_TYPE_NOTIFY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 308, ASSERT_TYPE_ASSERT, "(def->userType != OMNVAR_USER_TYPE_NOTIFY)", (const char *)&queryFormat, "def->userType != OMNVAR_USER_TYPE_NOTIFY") )
    __debugbreak();
  if ( currentData->current.integer != v8->current.integer )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vsubss  xmm0, xmm0, [rsp+38h+lerpValue]
    }
    _RSI = outData;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vmulss  xmm2, xmm1, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rcx
      vmulss  xmm0, xmm1, [rsp+38h+lerpValue]
      vaddss  xmm2, xmm2, xmm0
      vaddss  xmm3, xmm2, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm2, xmm0, xmm3, 1
      vcvttss2si eax, xmm2
    }
    outData->current = _EAX;
LABEL_18:
    if ( (def->flags & 1) != 0 )
    {
      v54 = LUI_luaVM;
      ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
      LUI_NotifyOmnvarChanged(ControllerFromClient, def, _RSI, v54);
    }
  }
}

/*
==============
CG_Omnvar_IsDefault
==============
*/
bool CG_Omnvar_IsDefault(const OmnvarDef *const omnvarDef, const OmnvarData *const current)
{
  OmnvarValue initial; 
  bool v5; 
  bool v6; 
  bool result; 
  OmnvarValue v9; 

  _RDI = current;
  if ( !omnvarDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 74, ASSERT_TYPE_ASSERT, "(omnvarDef)", (const char *)&queryFormat, "omnvarDef") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 75, ASSERT_TYPE_ASSERT, "(current)", (const char *)&queryFormat, "current") )
    __debugbreak();
  initial = omnvarDef->initial;
  v9 = initial;
  v5 = _RDI == NULL;
  if ( !_RDI )
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 49, ASSERT_TYPE_ASSERT, "(rhs)", (const char *)&queryFormat, "rhs");
    v5 = !v6;
    if ( v6 )
      __debugbreak();
  }
  switch ( omnvarDef->type )
  {
    case OMNVAR_TYPE_BOOL:
      result = initial.enabled == _RDI->current.enabled;
      break;
    case OMNVAR_TYPE_FLOAT:
      __asm
      {
        vmovss  xmm0, [rsp+38h+arg_4]; jumptable 00000001419EB6DF case 1
        vucomiss xmm0, dword ptr [rdi+4]
      }
      if ( !v5 )
        goto LABEL_17;
      result = 1;
      break;
    case OMNVAR_TYPE_INT:
    case OMNVAR_TYPE_UINT:
    case OMNVAR_TYPE_TIME:
    case OMNVAR_TYPE_NCS_LUI:
      result = initial.integer == _RDI->current.integer;
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 66, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
        __debugbreak();
LABEL_17:
      result = 0;
      break;
  }
  return result;
}

/*
==============
CG_Omnvar_NetworkTimeOmnvarChanged
==============
*/
bool CG_Omnvar_NetworkTimeOmnvarChanged(const OmnvarDef *const omnvarDef, const OmnvarData *const lhs, const OmnvarData *const rhs)
{
  if ( !omnvarDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 88, ASSERT_TYPE_ASSERT, "(omnvarDef)", (const char *)&queryFormat, "omnvarDef") )
    __debugbreak();
  if ( !lhs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 89, ASSERT_TYPE_ASSERT, "(lhs)", (const char *)&queryFormat, "lhs") )
    __debugbreak();
  if ( !rhs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 90, ASSERT_TYPE_ASSERT, "(rhs)", (const char *)&queryFormat, "rhs") )
    __debugbreak();
  return (omnvarDef->flags & 0x40) != 0 && lhs->timeModified != rhs->timeModified;
}

/*
==============
CG_Omnvar_UpdateInterpolation
==============
*/
void CG_Omnvar_UpdateInterpolation(const LocalClientNum_t localClientNum, const unsigned int perSnapOmnvarCount, const OmnvarData *const oldSnapOmnvars, const OmnvarData *const newSnapOmnvars)
{
  cg_t *LocalClientGlobals; 
  snapshot_t *nextSnap; 
  snapshot_t *snap; 
  __int64 v20; 
  unsigned int v21; 
  const OmnvarDef *Def; 
  OmnvarData *outData; 
  cg_t *v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned __int32 v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  __int64 v32; 
  const OmnvarDef *v33; 
  __int64 v34; 
  OmnvarData *v35; 
  float lerpValue; 
  float lerpValuea; 
  cg_t *v39; 
  snapshot_t *v41; 
  __int64 v42; 
  __int64 v43; 

  __asm { vmovaps [rsp+98h+var_48], xmm6 }
  if ( !oldSnapOmnvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 369, ASSERT_TYPE_ASSERT, "(oldSnapOmnvars)", (const char *)&queryFormat, "oldSnapOmnvars") )
    __debugbreak();
  if ( !newSnapOmnvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 370, ASSERT_TYPE_ASSERT, "(newSnapOmnvars)", (const char *)&queryFormat, "newSnapOmnvars") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  __asm { vmovss  xmm2, cs:__real@3f800000; max }
  nextSnap = (snapshot_t *)LocalClientGlobals->nextSnap;
  snap = (snapshot_t *)LocalClientGlobals->snap;
  v41 = nextSnap;
  if ( nextSnap->serverTime == snap->serverTime )
  {
    __asm { vmovaps xmm0, xmm2; val }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm0, xmm0, ecx
      vcvtsi2ss xmm1, xmm1, eax
      vdivss  xmm0, xmm1, xmm0
    }
  }
  __asm { vxorps  xmm1, xmm1, xmm1; min }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  v20 = 0i64;
  v21 = 0;
  __asm { vmovaps xmm6, xmm0 }
  if ( perSnapOmnvarCount )
  {
    do
    {
      Def = BG_Omnvar_GetDef(v21);
      if ( (Def->flags & 8) != 0 )
      {
        outData = CG_Omnvar_GetData(localClientNum, v21);
        __asm { vmovss  [rsp+98h+lerpValue], xmm6 }
        CG_Omnvar_Interpolate(localClientNum, Def, &oldSnapOmnvars[v21], &newSnapOmnvars[v21], outData, lerpValue, outData);
      }
      ++v21;
    }
    while ( v21 < perSnapOmnvarCount );
    nextSnap = v41;
  }
  v42 = (__int64)nextSnap->GetPlayerState(nextSnap, localClientNum);
  v43 = (__int64)snap->GetPlayerState(snap, localClientNum);
  v25 = CG_GetLocalClientGlobals(localClientNum);
  v26 = BG_Omnvar_PerGameCount();
  v27 = BG_Omnvar_PerClientCount() + v26;
  v28 = localClientNum * (BG_Omnvar_PerPlayerstateCount() + v27);
  v29 = BG_Omnvar_PerGameCount();
  v30 = BG_Omnvar_PerClientCount() + v29 + v28;
  v39 = CG_GetLocalClientGlobals(localClientNum);
  if ( BG_Omnvar_PerPlayerstateCount() )
  {
    v31 = perSnapOmnvarCount - v30;
    do
    {
      v32 = (unsigned int)v20 + v30;
      v33 = BG_Omnvar_GetDef(v31 + (unsigned int)v32);
      if ( (v33->flags & 8) != 0 )
      {
        v34 = (unsigned int)v32;
        v35 = &s_localClientOmnvars[v32];
        __asm { vmovss  [rsp+98h+lerpValue], xmm6 }
        CG_Omnvar_Interpolate(localClientNum, v33, (const OmnvarData *)(v43 + 8 * v20 + 20432), (const OmnvarData *)(v42 + 8 * v20 + 20432), v35, lerpValuea, &v25->predictedPlayerState.rxvOmnvars[v20]);
        s_localClientOmnvars[v34].current.integer = v25->predictedPlayerState.rxvOmnvars[v20].current.integer;
        v35->timeModified = v39->time;
      }
      v20 = (unsigned int)(v20 + 1);
    }
    while ( (unsigned int)v20 < BG_Omnvar_PerPlayerstateCount() );
  }
  __asm { vmovaps xmm6, [rsp+98h+var_48] }
}

/*
==============
CG_Omnvar_UpdatePmoveValues
==============
*/
void CG_Omnvar_UpdatePmoveValues(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  const OmnvarData *Data; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals )
  {
    v3 = BG_Omnvar_PmoveCount();
    if ( v3 )
    {
      v4 = 0;
      LocalClientGlobals->omnvarPmoveData.currentBufferIndex = (LocalClientGlobals->omnvarPmoveData.currentBufferIndex + 1) % 0xA;
      do
      {
        v5 = BG_Omnvar_PmoveIndexToPrimaryIndex(v4);
        Data = CG_Omnvar_GetData(localClientNum, v5);
        BG_Omnvar_InsertPmoveValue(Data, v4++, &LocalClientGlobals->omnvarPmoveData);
      }
      while ( v4 < v3 );
    }
  }
}

