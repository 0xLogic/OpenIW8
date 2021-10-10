/*
==============
G_Omnvar_SavePlayerStateOmnvars
==============
*/

void __fastcall G_Omnvar_SavePlayerStateOmnvars(gclient_s *client)
{
  ?G_Omnvar_SavePlayerStateOmnvars@@YAXPEAUgclient_s@@@Z(client);
}

/*
==============
G_Omnvar_GetData
==============
*/

OmnvarData *__fastcall G_Omnvar_GetData(unsigned int omnIdx, int clientIdx, playerState_s *const ps)
{
  return ?G_Omnvar_GetData@@YAPEAUOmnvarData@@IHQEAUplayerState_s@@@Z(omnIdx, clientIdx, ps);
}

/*
==============
G_Omnvar_MarkChanged
==============
*/

void __fastcall G_Omnvar_MarkChanged(OmnvarData *data)
{
  ?G_Omnvar_MarkChanged@@YAXPEAUOmnvarData@@@Z(data);
}

/*
==============
G_GetOmnvar_IntegerByName
==============
*/

int __fastcall G_GetOmnvar_IntegerByName(const char *name, int *result)
{
  return ?G_GetOmnvar_IntegerByName@@YAHPEBDPEAH@Z(name, result);
}

/*
==============
G_Omnvar_RegisterCommands
==============
*/

void G_Omnvar_RegisterCommands(void)
{
  ?G_Omnvar_RegisterCommands@@YAXXZ();
}

/*
==============
G_Omnvar_RestorePlayerStateOmnvars
==============
*/

void __fastcall G_Omnvar_RestorePlayerStateOmnvars(gclient_s *client)
{
  ?G_Omnvar_RestorePlayerStateOmnvars@@YAXPEAUgclient_s@@@Z(client);
}

/*
==============
G_Omnvar_UpdatePmoveValues
==============
*/

void __fastcall G_Omnvar_UpdatePmoveValues(gclient_s *client)
{
  ?G_Omnvar_UpdatePmoveValues@@YAXPEAUgclient_s@@@Z(client);
}

/*
==============
G_Omnvar_SetNCString
==============
*/

int __fastcall G_Omnvar_SetNCString(const OmnvarDef *def, OmnvarData *data, const char *stringValue)
{
  return ?G_Omnvar_SetNCString@@YAHPEBUOmnvarDef@@PEAUOmnvarData@@PEBD@Z(def, data, stringValue);
}

/*
==============
G_GetOmnvar_BoolByName
==============
*/

int __fastcall G_GetOmnvar_BoolByName(const char *name, bool *result)
{
  return ?G_GetOmnvar_BoolByName@@YAHPEBDPEA_N@Z(name, result);
}

/*
==============
G_GetOmnvar_BoolByName
==============
*/
__int64 G_GetOmnvar_BoolByName(const char *name, bool *result)
{
  unsigned int IndexByName; 
  const OmnvarDef *Def; 
  OmnvarData *Data; 
  OmnvarData *v7; 
  bool enabled; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 85, ASSERT_TYPE_ASSERT, "( name )", (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 86, ASSERT_TYPE_ASSERT, "( result )", (const char *)&queryFormat, "result") )
    __debugbreak();
  IndexByName = BG_Omnvar_GetIndexByName(name);
  if ( IndexByName == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 89, ASSERT_TYPE_ASSERT, "( omnIdx != ((uint)-1) )", (const char *)&queryFormat, "omnIdx != OMNVAR_NONE") )
    __debugbreak();
  Def = BG_Omnvar_GetDef(IndexByName);
  if ( (Def->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 92, ASSERT_TYPE_ASSERT, "( !(def->flags & ( 1 << 1 )) )", (const char *)&queryFormat, "!(def->flags & OMNVAR_FLAG_CLIENTSCOPE)") )
    __debugbreak();
  if ( (Def->flags & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 93, ASSERT_TYPE_ASSERT, "( !(def->flags & ( 1 << 2 )) )", (const char *)&queryFormat, "!(def->flags & OMNVAR_FLAG_ARCHIVED)") )
    __debugbreak();
  Data = G_Omnvar_GetData(IndexByName, -1, NULL);
  v7 = Data;
  if ( Def->type )
  {
    *result = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 105, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Omnvar %s is not a bool type", Def->name) )
      __debugbreak();
    return 0i64;
  }
  else
  {
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 225, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
      __debugbreak();
    if ( Def->type == OMNVAR_TYPE_BOOL )
      goto LABEL_27;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 226, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_BOOL)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_BOOL") )
      __debugbreak();
    if ( Def->type )
      enabled = 0;
    else
LABEL_27:
      enabled = v7->current.enabled;
    *result = enabled;
    return 1i64;
  }
}

/*
==============
G_GetOmnvar_IntegerByName
==============
*/
__int64 G_GetOmnvar_IntegerByName(const char *name, int *result)
{
  unsigned int IndexByName; 
  const OmnvarDef *Def; 
  const OmnvarData *Data; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 55, ASSERT_TYPE_ASSERT, "( name )", (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 56, ASSERT_TYPE_ASSERT, "( result )", (const char *)&queryFormat, "result") )
    __debugbreak();
  IndexByName = BG_Omnvar_GetIndexByName(name);
  if ( IndexByName == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 59, ASSERT_TYPE_ASSERT, "( omnIdx != ((uint)-1) )", (const char *)&queryFormat, "omnIdx != OMNVAR_NONE") )
    __debugbreak();
  Def = BG_Omnvar_GetDef(IndexByName);
  if ( (Def->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 62, ASSERT_TYPE_ASSERT, "( !(def->flags & ( 1 << 1 )) )", (const char *)&queryFormat, "!(def->flags & OMNVAR_FLAG_CLIENTSCOPE)") )
    __debugbreak();
  if ( (Def->flags & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 63, ASSERT_TYPE_ASSERT, "( !(def->flags & ( 1 << 2 )) )", (const char *)&queryFormat, "!(def->flags & OMNVAR_FLAG_ARCHIVED)") )
    __debugbreak();
  Data = G_Omnvar_GetData(IndexByName, -1, NULL);
  if ( Def->type == OMNVAR_TYPE_INT )
  {
    *result = Omnvar_GetInteger(Def, Data);
    return 1i64;
  }
  else
  {
    *result = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 75, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Omnvar %s is not a int type", Def->name) )
      __debugbreak();
    return 0i64;
  }
}

/*
==============
G_Omnvar_GetData
==============
*/
OmnvarData *G_Omnvar_GetData(unsigned int omnIdx, int clientIdx, playerState_s *const ps)
{
  __int64 v4; 
  __int64 v5; 
  unsigned __int8 flags; 
  unsigned int v7; 
  unsigned int v9; 
  OmnvarData *omnvars; 
  __int64 v11; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int v14; 

  v4 = clientIdx;
  v5 = omnIdx;
  flags = BG_Omnvar_GetDef(omnIdx)->flags;
  if ( (flags & 4) != 0 )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 33, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER )") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 34, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v7 = v5 - BG_Omnvar_PerSnapCount();
    if ( v7 >= BG_Omnvar_PerPlayerstateCount() )
    {
      v13 = BG_Omnvar_PerPlayerstateCount();
      LODWORD(v11) = v5 - BG_Omnvar_PerSnapCount();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 35, ASSERT_TYPE_ASSERT, "(unsigned)( omnIdx - BG_Omnvar_PerSnapCount() ) < (unsigned)( BG_Omnvar_PerPlayerstateCount() )", "omnIdx - BG_Omnvar_PerSnapCount() doesn't index BG_Omnvar_PerPlayerstateCount()\n\t%i not in [0, %i)", v11, v13) )
        __debugbreak();
    }
    return &ps->rxvOmnvars[(unsigned int)v5 - BG_Omnvar_PerSnapCount()];
  }
  else if ( (flags & 2) != 0 )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 41, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER )") )
      __debugbreak();
    if ( (unsigned int)v4 >= level.maxclients )
    {
      LODWORD(v11) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 42, ASSERT_TYPE_ASSERT, "(unsigned)( clientIdx ) < (unsigned)( level.maxclients )", "clientIdx doesn't index level.maxclients\n\t%i not in [0, %i)", v11, level.maxclients) )
        __debugbreak();
    }
    v9 = v5 - BG_Omnvar_PerGameCount();
    if ( v9 >= BG_Omnvar_PerClientCount() )
    {
      LODWORD(v12) = BG_Omnvar_PerClientCount();
      LODWORD(v11) = v5 - BG_Omnvar_PerGameCount();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 43, ASSERT_TYPE_ASSERT, "(unsigned)( omnIdx - BG_Omnvar_PerGameCount() ) < (unsigned)( BG_Omnvar_PerClientCount() )", "omnIdx - BG_Omnvar_PerGameCount() doesn't index BG_Omnvar_PerClientCount()\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    if ( !level.clients[v4].sess.omnvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 44, ASSERT_TYPE_ASSERT, "( level.clients[clientIdx].sess.omnvars )", (const char *)&queryFormat, "level.clients[clientIdx].sess.omnvars") )
      __debugbreak();
    omnvars = level.clients[v4].sess.omnvars;
    return &omnvars[(unsigned int)v5 - BG_Omnvar_PerGameCount()];
  }
  else
  {
    if ( (unsigned int)v5 >= BG_Omnvar_PerGameCount() )
    {
      v14 = BG_Omnvar_PerGameCount();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 48, ASSERT_TYPE_ASSERT, "(unsigned)( omnIdx ) < (unsigned)( BG_Omnvar_PerGameCount() )", "omnIdx doesn't index BG_Omnvar_PerGameCount()\n\t%i not in [0, %i)", v5, v14) )
        __debugbreak();
    }
    return (OmnvarData *)level.gameOmnvars + v5;
  }
}

/*
==============
G_Omnvar_Get_f
==============
*/
void G_Omnvar_Get_f()
{
  const char *v0; 
  unsigned int IndexByName; 
  unsigned int v2; 
  const OmnvarDef *Def; 
  playerState_s *EntityPlayerState; 
  OmnvarData *Data; 
  char *v6; 
  unsigned int Integer; 
  scrContext_t *v8; 
  char *outLuiString; 

  if ( Cmd_Argc() == 2 )
  {
    if ( G_IsEntityInUse(0) )
    {
      v0 = Cmd_Argv(1);
      IndexByName = BG_Omnvar_GetIndexByName(v0);
      v2 = IndexByName;
      if ( IndexByName == -1 )
      {
        Com_PrintWarning(14, "Omnvar %s not found\n", v0);
      }
      else
      {
        Def = BG_Omnvar_GetDef(IndexByName);
        EntityPlayerState = G_GetEntityPlayerState(g_entities);
        Data = G_Omnvar_GetData(v2, 0, EntityPlayerState);
        switch ( Def->type )
        {
          case OMNVAR_TYPE_BOOL:
            v6 = "false";
            if ( Data->current.enabled )
              v6 = "true";
            goto LABEL_16;
          case OMNVAR_TYPE_FLOAT:
            Com_Printf(14, "%f\n", Data->current.value);
            break;
          case OMNVAR_TYPE_INT:
            Integer = Omnvar_GetInteger(Def, Data);
            Com_Printf(14, "%d\n", Integer);
            break;
          case OMNVAR_TYPE_UINT:
          case OMNVAR_TYPE_TIME:
            Com_Printf(14, "%u\n", Data->current.unsignedInteger);
            break;
          case OMNVAR_TYPE_NCS_LUI:
            if ( NetConstStrings_GetLuiStringName(Data->current.unsignedInteger, (const char **)&outLuiString) )
            {
              v6 = outLuiString;
LABEL_16:
              Com_Printf(14, "%s\n", v6);
            }
            break;
          default:
            v8 = ScriptContext_Server();
            Scr_Error(COM_ERR_2527, v8, "devGetOmnvar - Omnvar type is unsupported!");
            break;
        }
      }
    }
    else
    {
      Com_PrintWarning(14, "Player 0 does not exist, this can't be used right now.\n");
    }
  }
  else
  {
    Com_PrintError(14, "devGetOmnvar usage: devGetOmnvar <omnvar_name>\n");
  }
}

/*
==============
G_Omnvar_MarkChanged
==============
*/
void G_Omnvar_MarkChanged(OmnvarData *data)
{
  int time; 

  time = 1;
  if ( level.time > 1 )
    time = level.time;
  data->timeModified = time;
}

/*
==============
G_Omnvar_RegisterCommands
==============
*/
void G_Omnvar_RegisterCommands(void)
{
  Cmd_AddCommandInternal("devSetOmnvar", Cbuf_AddServerText_f, &G_Omnvar_Set_f_VAR);
  Cmd_AddServerCommandInternal("devSetOmnvar", G_Omnvar_Set_f, &G_Omnvar_Set_f_VAR_SERVER);
  Cmd_AddCommandInternal("devGetOmnvar", Cbuf_AddServerText_f, &G_Omnvar_Get_f_VAR);
  Cmd_AddServerCommandInternal("devGetOmnvar", G_Omnvar_Get_f, &G_Omnvar_Get_f_VAR_SERVER);
}

/*
==============
G_Omnvar_RestorePlayerStateOmnvars
==============
*/
void G_Omnvar_RestorePlayerStateOmnvars(gclient_s *client)
{
  OmnvarData *rxvOmnvars; 
  OmnvarData *v2; 
  __int64 v3; 
  __m256i v4; 
  __int128 v5; 

  rxvOmnvars = client->ps.rxvOmnvars;
  v2 = client->sess.rxvOmnvars;
  v3 = 5i64;
  do
  {
    rxvOmnvars += 16;
    v4 = *(__m256i *)&v2->timeModified;
    v5 = *(_OWORD *)&v2[14].timeModified;
    v2 += 16;
    *(__m256i *)&rxvOmnvars[-16].timeModified = v4;
    *(__m256i *)&rxvOmnvars[-12].timeModified = *(__m256i *)&v2[-12].timeModified;
    *(__m256i *)&rxvOmnvars[-8].timeModified = *(__m256i *)&v2[-8].timeModified;
    *(_OWORD *)&rxvOmnvars[-4].timeModified = *(_OWORD *)&v2[-4].timeModified;
    *(_OWORD *)&rxvOmnvars[-2].timeModified = v5;
    --v3;
  }
  while ( v3 );
}

/*
==============
G_Omnvar_SavePlayerStateOmnvars
==============
*/
void G_Omnvar_SavePlayerStateOmnvars(gclient_s *client)
{
  OmnvarData *rxvOmnvars; 
  OmnvarData *v2; 
  __int64 v3; 
  __m256i v4; 
  __int128 v5; 

  rxvOmnvars = client->sess.rxvOmnvars;
  v2 = client->ps.rxvOmnvars;
  v3 = 5i64;
  do
  {
    rxvOmnvars += 16;
    v4 = *(__m256i *)&v2->timeModified;
    v5 = *(_OWORD *)&v2[14].timeModified;
    v2 += 16;
    *(__m256i *)&rxvOmnvars[-16].timeModified = v4;
    *(__m256i *)&rxvOmnvars[-12].timeModified = *(__m256i *)&v2[-12].timeModified;
    *(__m256i *)&rxvOmnvars[-8].timeModified = *(__m256i *)&v2[-8].timeModified;
    *(_OWORD *)&rxvOmnvars[-4].timeModified = *(_OWORD *)&v2[-4].timeModified;
    *(_OWORD *)&rxvOmnvars[-2].timeModified = v5;
    --v3;
  }
  while ( v3 );
}

/*
==============
G_Omnvar_SetNCString
==============
*/
int G_Omnvar_SetNCString(const OmnvarDef *def, OmnvarData *data, const char *stringValue)
{
  if ( def->type == OMNVAR_TYPE_NCS_LUI )
    return NetConstStrings_GetLuiStringIndex(stringValue, (unsigned int *)&data->current);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Omnvar %s is not a netconststring type", def->name) )
    __debugbreak();
  return 0;
}

/*
==============
G_Omnvar_Set_f
==============
*/

void __fastcall G_Omnvar_Set_f(double _XMM0_8)
{
  int time; 
  const char *v2; 
  const char *v3; 
  unsigned int IndexByName; 
  unsigned int v5; 
  const OmnvarDef *Def; 
  playerState_s *EntityPlayerState; 
  OmnvarData *Data; 
  int v9; 
  int v10; 
  int maxvalue; 
  __int64 v12; 

  if ( Cmd_Argc() == 3 )
  {
    if ( G_IsEntityInUse(0) )
    {
      time = 1;
      v2 = Cmd_Argv(1);
      v3 = Cmd_Argv(2);
      IndexByName = BG_Omnvar_GetIndexByName(v2);
      v5 = IndexByName;
      if ( IndexByName == -1 )
      {
        Com_PrintWarning(14, "Omnvar %s not found\n", v2);
      }
      else
      {
        Def = BG_Omnvar_GetDef(IndexByName);
        EntityPlayerState = G_GetEntityPlayerState(g_entities);
        Data = G_Omnvar_GetData(v5, 0, EntityPlayerState);
        switch ( Def->type )
        {
          case OMNVAR_TYPE_BOOL:
            if ( (unsigned __int8)(*v3 - 48) <= 1u )
            {
              Data->current.enabled = *v3 == 49;
              if ( level.time > 1 )
                time = level.time;
              Data->timeModified = time;
            }
            else
            {
              Com_PrintWarning(14, "Expected value 0 or 1 for boolean omnvar %s\n", Def->name);
            }
            return;
          case OMNVAR_TYPE_FLOAT:
            _XMM0_8 = atof(v3);
            __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
            if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 39, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
              __debugbreak();
            if ( Def->type != OMNVAR_TYPE_FLOAT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 40, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_FLOAT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_FLOAT") )
              __debugbreak();
            _XMM0 = (unsigned int)Def->type;
            __asm { vpcmpeqd xmm2, xmm0, xmm1 }
            _XMM1 = 0i64;
            __asm { vblendvps xmm0, xmm1, xmm6, xmm2 }
            Data->current.value = *(float *)&_XMM0;
            if ( level.time > 1 )
              time = level.time;
            Data->timeModified = time;
            return;
          case OMNVAR_TYPE_INT:
            v10 = atoi(v3);
            maxvalue = Def->maxvalue;
            LODWORD(v12) = v10;
            if ( v10 > maxvalue || v10 < Def->minvalue )
            {
              v12 = (unsigned int)I_clamp(v10, Def->minvalue, maxvalue);
              Com_PrintWarning(14, "Value was clamped to %d to respect min/max values of omnvar %s\n", v12, Def->name);
            }
            if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 21, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
              __debugbreak();
            if ( Def->type != OMNVAR_TYPE_INT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.h", 22, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_INT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_INT") )
              __debugbreak();
            Data->current.integer = v12 - Def->minvalue;
            if ( level.time > 1 )
              time = level.time;
            Data->timeModified = time;
            return;
          case OMNVAR_TYPE_UINT:
            v9 = atoi(v3);
            goto LABEL_28;
          case OMNVAR_TYPE_TIME:
            v9 = atoi(v3);
            if ( v9 >= 0 )
            {
LABEL_28:
              Data->current.integer = v9;
              if ( level.time > 1 )
                time = level.time;
              Data->timeModified = time;
            }
            else
            {
              Com_PrintWarning(14, "Expected positive value for time omnvar %s\n", Def->name);
            }
            return;
          case OMNVAR_TYPE_NCS_LUI:
            if ( Def->type == OMNVAR_TYPE_NCS_LUI )
            {
              if ( NetConstStrings_GetLuiStringIndex(v3, (unsigned int *)&Data->current) )
                goto LABEL_45;
            }
            else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 121, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Omnvar %s is not a netconststring type", Def->name) )
            {
              __debugbreak();
            }
            Com_PrintWarning(14, "Invalid value %s for omnvar %s. Add the string ncsLuiStrings.txt and rebuild fast files\n", v3, Def->name);
LABEL_45:
            if ( level.time > 1 )
              time = level.time;
            Data->timeModified = time;
            break;
          default:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 233, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected omnvar type") )
              __debugbreak();
            return;
        }
      }
    }
    else
    {
      Com_PrintWarning(14, "Player 0 does not exist, this can't be used right now.\n");
    }
  }
  else
  {
    Com_PrintError(15, "setOmnvar usage: setOmnvar <omnvar_name> <value>\n");
  }
}

/*
==============
G_Omnvar_UpdatePmoveValues
==============
*/
void G_Omnvar_UpdatePmoveValues(gclient_s *client)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v4; 
  __int64 clientNum; 
  __int64 v6; 
  unsigned __int8 flags; 
  unsigned int v8; 
  const OmnvarData *v9; 
  unsigned int v10; 
  OmnvarData *omnvars; 
  __int64 v12; 
  __int64 v13; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 318, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  v2 = BG_Omnvar_PmoveCount();
  if ( v2 )
  {
    v3 = 0;
    client->omnvarPmoveData.currentBufferIndex = (client->omnvarPmoveData.currentBufferIndex + 1) % 0xA;
    do
    {
      v4 = BG_Omnvar_PmoveIndexToPrimaryIndex(v3);
      clientNum = client->ps.clientNum;
      v6 = v4;
      flags = BG_Omnvar_GetDef(v4)->flags;
      if ( (flags & 4) != 0 )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 33, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER )") )
          __debugbreak();
        v8 = v6 - BG_Omnvar_PerSnapCount();
        if ( v8 >= BG_Omnvar_PerPlayerstateCount() )
        {
          LODWORD(v13) = BG_Omnvar_PerPlayerstateCount();
          LODWORD(v12) = v6 - BG_Omnvar_PerSnapCount();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 35, ASSERT_TYPE_ASSERT, "(unsigned)( omnIdx - BG_Omnvar_PerSnapCount() ) < (unsigned)( BG_Omnvar_PerPlayerstateCount() )", "omnIdx - BG_Omnvar_PerSnapCount() doesn't index BG_Omnvar_PerPlayerstateCount()\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        v9 = &client->ps.rxvOmnvars[(unsigned int)v6 - BG_Omnvar_PerSnapCount()];
      }
      else if ( (flags & 2) != 0 )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 41, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::OMNVARS_MULTIPLAYER )") )
          __debugbreak();
        if ( (unsigned int)clientNum >= level.maxclients )
        {
          LODWORD(v13) = level.maxclients;
          LODWORD(v12) = clientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 42, ASSERT_TYPE_ASSERT, "(unsigned)( clientIdx ) < (unsigned)( level.maxclients )", "clientIdx doesn't index level.maxclients\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        v10 = v6 - BG_Omnvar_PerGameCount();
        if ( v10 >= BG_Omnvar_PerClientCount() )
        {
          LODWORD(v13) = BG_Omnvar_PerClientCount();
          LODWORD(v12) = v6 - BG_Omnvar_PerGameCount();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 43, ASSERT_TYPE_ASSERT, "(unsigned)( omnIdx - BG_Omnvar_PerGameCount() ) < (unsigned)( BG_Omnvar_PerClientCount() )", "omnIdx - BG_Omnvar_PerGameCount() doesn't index BG_Omnvar_PerClientCount()\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        if ( !level.clients[clientNum].sess.omnvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 44, ASSERT_TYPE_ASSERT, "( level.clients[clientIdx].sess.omnvars )", (const char *)&queryFormat, "level.clients[clientIdx].sess.omnvars") )
          __debugbreak();
        omnvars = level.clients[clientNum].sess.omnvars;
        v9 = &omnvars[(unsigned int)v6 - BG_Omnvar_PerGameCount()];
      }
      else
      {
        if ( (unsigned int)v6 >= BG_Omnvar_PerGameCount() )
        {
          LODWORD(v13) = BG_Omnvar_PerGameCount();
          LODWORD(v12) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_omnvar.cpp", 48, ASSERT_TYPE_ASSERT, "(unsigned)( omnIdx ) < (unsigned)( BG_Omnvar_PerGameCount() )", "omnIdx doesn't index BG_Omnvar_PerGameCount()\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        v9 = &level.gameOmnvars->omnvars[v6];
      }
      BG_Omnvar_InsertPmoveValue(v9, v3++, &client->omnvarPmoveData);
    }
    while ( v3 < v2 );
  }
}

