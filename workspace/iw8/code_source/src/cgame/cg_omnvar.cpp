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
  bool result; 

  if ( !omnvarDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 47, ASSERT_TYPE_ASSERT, "(omnvarDef)", (const char *)&queryFormat, "omnvarDef") )
    __debugbreak();
  if ( !lhs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 48, ASSERT_TYPE_ASSERT, "(lhs)", (const char *)&queryFormat, "lhs") )
    __debugbreak();
  if ( !rhs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 49, ASSERT_TYPE_ASSERT, "(rhs)", (const char *)&queryFormat, "rhs") )
    __debugbreak();
  switch ( omnvarDef->type )
  {
    case OMNVAR_TYPE_BOOL:
      result = lhs->current.enabled == rhs->current.enabled;
      break;
    case OMNVAR_TYPE_FLOAT:
      if ( rhs->current.value != lhs->current.value )
        goto LABEL_17;
      result = 1;
      break;
    case OMNVAR_TYPE_INT:
    case OMNVAR_TYPE_UINT:
    case OMNVAR_TYPE_TIME:
    case OMNVAR_TYPE_NCS_LUI:
      result = lhs->current.integer == rhs->current.integer;
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
  OmnvarData *v10; 
  OmnvarValue current; 
  float value; 
  float v19; 
  lua_State *v20; 
  int ControllerFromClient; 

  if ( def->type == OMNVAR_TYPE_FLOAT )
  {
    value = newData->current.value;
    if ( value == currentData->current.value )
      return;
    if ( def->userType == OMNVAR_USER_TYPE_ANGLE )
    {
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm2, 1 }
      v19 = (float)((float)((float)((float)((float)(value - oldData->current.value) * 0.0027777778) - *(float *)&_XMM4) * 360.0) * lerpValue) + oldData->current.value;
    }
    else
    {
      v19 = (float)((float)(1.0 - lerpValue) * oldData->current.value) + (float)(value * lerpValue);
    }
    v10 = outData;
    outData->current.value = v19;
    goto LABEL_18;
  }
  if ( def->type == OMNVAR_TYPE_INT )
  {
    current = newData->current;
    if ( currentData->current.integer == current.integer )
      return;
    v10 = outData;
    _mm_cvtepi32_ps((__m128i)oldData->current.unsignedInteger);
    _mm_cvtepi32_ps((__m128i)current.unsignedInteger);
    _XMM0 = 0i64;
    __asm { vroundss xmm4, xmm0, xmm3, 1 }
    outData->current.integer = (int)*(float *)&_XMM4;
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
  if ( currentData->current.integer != newData->current.integer )
  {
    v10 = outData;
    _XMM0 = 0i64;
    __asm { vroundss xmm2, xmm0, xmm3, 1 }
    outData->current.integer = (int)*(float *)&_XMM2;
LABEL_18:
    if ( (def->flags & 1) != 0 )
    {
      v20 = LUI_luaVM;
      ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
      LUI_NotifyOmnvarChanged(ControllerFromClient, def, v10, v20);
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
  float value; 
  bool result; 

  if ( !omnvarDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 74, ASSERT_TYPE_ASSERT, "(omnvarDef)", (const char *)&queryFormat, "omnvarDef") )
    __debugbreak();
  if ( !current && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 75, ASSERT_TYPE_ASSERT, "(current)", (const char *)&queryFormat, "current") )
    __debugbreak();
  value = omnvarDef->initial.value;
  if ( !current && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 49, ASSERT_TYPE_ASSERT, "(rhs)", (const char *)&queryFormat, "rhs") )
    __debugbreak();
  switch ( omnvarDef->type )
  {
    case OMNVAR_TYPE_BOOL:
      result = LOBYTE(value) == current->current.enabled;
      break;
    case OMNVAR_TYPE_FLOAT:
      if ( value != current->current.value )
        goto LABEL_17;
      result = 1;
      break;
    case OMNVAR_TYPE_INT:
    case OMNVAR_TYPE_UINT:
    case OMNVAR_TYPE_TIME:
    case OMNVAR_TYPE_NCS_LUI:
      result = LODWORD(value) == current->current.integer;
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
  int serverTime; 
  int v12; 
  float v13; 
  double lerpValue; 
  __int64 v15; 
  unsigned int v16; 
  const OmnvarDef *Def; 
  OmnvarData *outData; 
  cg_t *v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned __int32 v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  __int64 v26; 
  const OmnvarDef *v27; 
  __int64 v28; 
  OmnvarData *v29; 
  cg_t *v30; 
  snapshot_t *v31; 
  __int64 v32; 
  __int64 v33; 

  if ( !oldSnapOmnvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 369, ASSERT_TYPE_ASSERT, "(oldSnapOmnvars)", (const char *)&queryFormat, "oldSnapOmnvars") )
    __debugbreak();
  if ( !newSnapOmnvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_omnvar.cpp", 370, ASSERT_TYPE_ASSERT, "(newSnapOmnvars)", (const char *)&queryFormat, "newSnapOmnvars") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  nextSnap = (snapshot_t *)LocalClientGlobals->nextSnap;
  snap = (snapshot_t *)LocalClientGlobals->snap;
  v31 = nextSnap;
  serverTime = nextSnap->serverTime;
  v12 = snap->serverTime;
  if ( serverTime == v12 )
    v13 = FLOAT_1_0;
  else
    v13 = (float)(LocalClientGlobals->time - v12) / (float)(serverTime - v12);
  lerpValue = I_fclamp(v13, 0.0, 1.0);
  v15 = 0i64;
  v16 = 0;
  if ( perSnapOmnvarCount )
  {
    do
    {
      Def = BG_Omnvar_GetDef(v16);
      if ( (Def->flags & 8) != 0 )
      {
        outData = CG_Omnvar_GetData(localClientNum, v16);
        CG_Omnvar_Interpolate(localClientNum, Def, &oldSnapOmnvars[v16], &newSnapOmnvars[v16], outData, *(float *)&lerpValue, outData);
      }
      ++v16;
    }
    while ( v16 < perSnapOmnvarCount );
    nextSnap = v31;
  }
  v32 = (__int64)nextSnap->GetPlayerState(nextSnap, localClientNum);
  v33 = (__int64)snap->GetPlayerState(snap, localClientNum);
  v19 = CG_GetLocalClientGlobals(localClientNum);
  v20 = BG_Omnvar_PerGameCount();
  v21 = BG_Omnvar_PerClientCount() + v20;
  v22 = localClientNum * (BG_Omnvar_PerPlayerstateCount() + v21);
  v23 = BG_Omnvar_PerGameCount();
  v24 = BG_Omnvar_PerClientCount() + v23 + v22;
  v30 = CG_GetLocalClientGlobals(localClientNum);
  if ( BG_Omnvar_PerPlayerstateCount() )
  {
    v25 = perSnapOmnvarCount - v24;
    do
    {
      v26 = (unsigned int)v15 + v24;
      v27 = BG_Omnvar_GetDef(v25 + (unsigned int)v26);
      if ( (v27->flags & 8) != 0 )
      {
        v28 = (unsigned int)v26;
        v29 = &s_localClientOmnvars[v26];
        CG_Omnvar_Interpolate(localClientNum, v27, (const OmnvarData *)(v33 + 8 * v15 + 20432), (const OmnvarData *)(v32 + 8 * v15 + 20432), v29, *(float *)&lerpValue, &v19->predictedPlayerState.rxvOmnvars[v15]);
        s_localClientOmnvars[v28].current.integer = v19->predictedPlayerState.rxvOmnvars[v15].current.integer;
        v29->timeModified = v30->time;
      }
      v15 = (unsigned int)(v15 + 1);
    }
    while ( (unsigned int)v15 < BG_Omnvar_PerPlayerstateCount() );
  }
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

