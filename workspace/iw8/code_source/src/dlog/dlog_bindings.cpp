/*
==============
DLog_RecordInvalidEntry
==============
*/

bool __fastcall DLog_RecordInvalidEntry(DLogContext *context, const char *name)
{
  return ?DLog_RecordInvalidEntry@@YA_NPEAUDLogContext@@PEBD@Z(context, name);
}

/*
==============
DLog_Util_FillPlayerHeaderFromGEntity
==============
*/

void __fastcall DLog_Util_FillPlayerHeaderFromGEntity(gentity_s *playerEntity, DLogContext *context, const char *rowName)
{
  ?DLog_Util_FillPlayerHeaderFromGEntity@@YAXPEAUgentity_s@@PEAUDLogContext@@PEBD@Z(playerEntity, context, rowName);
}

/*
==============
DLog_GetFirstPartyAccountTypeFromClientPlatform
==============
*/

DLogFirstPartyAccountType __fastcall DLog_GetFirstPartyAccountTypeFromClientPlatform(ClientPlatform clientPlatform)
{
  return ?DLog_GetFirstPartyAccountTypeFromClientPlatform@@YA?AW4DLogFirstPartyAccountType@@W4ClientPlatform@@@Z(clientPlatform);
}

/*
==============
DLog_JsonColumns
==============
*/

bool __fastcall DLog_JsonColumns(DLogContext *context, DLogColumn *columns, int columnCount, Json *json)
{
  return ?DLog_JsonColumns@@YA_NPEAUDLogContext@@PEAUDLogColumn@@HVJson@@@Z(context, columns, columnCount, json);
}

/*
==============
DLog_ScrRecordEvent
==============
*/

void __fastcall DLog_ScrRecordEvent(scrContext_t *scrContext)
{
  ?DLog_ScrRecordEvent@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
DLog_Util_GetPlayerHeaderFieldsFromEntity
==============
*/

void __fastcall DLog_Util_GetPlayerHeaderFieldsFromEntity(const gentity_s *const entity, unsigned __int64 *outUnoId, unsigned __int64 *outFirstPartyUserId, DLogFirstPartyAccountType *outFirstPartyAccountType, unsigned __int64 *outUserSessionId, ClientPlatform *outClientPlatform)
{
  ?DLog_Util_GetPlayerHeaderFieldsFromEntity@@YAXQEBUgentity_s@@AEA_K1AEAW4DLogFirstPartyAccountType@@1AEAW4ClientPlatform@@@Z(entity, outUnoId, outFirstPartyUserId, outFirstPartyAccountType, outUserSessionId, outClientPlatform);
}

/*
==============
DLog_Util_FillPlayerHeader
==============
*/

void __fastcall DLog_Util_FillPlayerHeader(DLogContext *context, const char *rowName, unsigned __int64 unoId, unsigned __int64 firstPartyUserId, DLogFirstPartyAccountType firstPartyAccountType, unsigned __int64 userSessionId, ClientPlatform clientPlatform)
{
  ?DLog_Util_FillPlayerHeader@@YAXPEAUDLogContext@@PEBD_K2W4DLogFirstPartyAccountType@@2W4ClientPlatform@@@Z(context, rowName, unoId, firstPartyUserId, firstPartyAccountType, userSessionId, clientPlatform);
}

/*
==============
DLog_JsonRow
==============
*/

bool __fastcall DLog_JsonRow(DLogContext *context, const char *name, Json *json)
{
  return ?DLog_JsonRow@@YA_NPEAUDLogContext@@PEBDVJson@@@Z(context, name, json);
}

/*
==============
DLog_LuaRecordEvent
==============
*/

int __fastcall DLog_LuaRecordEvent(lua_State *luaVM)
{
  return ?DLog_LuaRecordEvent@@YAHPEAUlua_State@@@Z(luaVM);
}

/*
==============
PlayerCmd_DLog_RecordPlayerEvent
==============
*/

void __fastcall PlayerCmd_DLog_RecordPlayerEvent(scrContext_t *scrContext, scr_entref_t entref)
{
  ?PlayerCmd_DLog_RecordPlayerEvent@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
DLog_GetFirstPartyAccountTypeFromClientPlatform
==============
*/
__int64 DLog_GetFirstPartyAccountTypeFromClientPlatform(ClientPlatform clientPlatform)
{
  __int64 v1; 
  int v2; 
  int v3; 
  int v4; 
  int v5; 

  v1 = (unsigned int)(char)clientPlatform;
  v2 = (char)clientPlatform - 1;
  if ( !v2 )
    return 1i64;
  v3 = v2 - 1;
  if ( !v3 )
    return 2i64;
  v4 = v3 - 1;
  if ( !v4 )
    return 3i64;
  v5 = v4 - 1;
  if ( !v5 )
    return 4i64;
  if ( v5 == 1 )
    return 5i64;
  Com_PrintError(25, "DLog_GetFirstPartyAccountTypeFromClientPlatform: unhandled ClientPlatform value %d", v1);
  return 0i64;
}

/*
==============
DLog_JsonColumns
==============
*/
__int64 DLog_JsonColumns(DLogContext *context, DLogColumn *columns, int columnCount, Json *json)
{
  __int64 v5; 
  unsigned __int8 v9; 
  bool v10; 
  bool v11; 
  double v12; 
  float v13; 
  long double v14; 
  char v17; 
  __int16 v18; 
  int v19; 
  __int64 v20; 
  unsigned __int8 v21; 
  unsigned __int16 v22; 
  unsigned int v23; 
  unsigned __int64 v24; 
  const char *v25; 
  __int64 v27; 
  Json child; 

  v5 = columnCount;
  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 868, ASSERT_TYPE_ASSERT, "(context != nullptr)", (const char *)&queryFormat, "context != nullptr") )
    __debugbreak();
  if ( !columns && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 869, ASSERT_TYPE_ASSERT, "(columns != nullptr)", (const char *)&queryFormat, "columns != nullptr") )
    __debugbreak();
  v9 = 1;
  if ( v5 > 0 )
  {
    do
    {
      context->column = columns;
      Json::Json(&child);
      if ( Json::GetChild(json, columns->name, &child) )
      {
        switch ( columns->type )
        {
          case 3:
            goto $LN20_13;
          case 4:
            if ( !Json::IsBool(&child) )
              goto LABEL_13;
            v10 = Json::ToBool(&child, 0);
            if ( !DLog_Bool(context, columns->name, v10) )
              goto LABEL_13;
            v11 = 1;
            break;
          case 5:
            if ( Json::IsFloat(&child) )
            {
              _XMM1 = 0i64;
              v12 = Json::ToFloat32(&child, 0.0);
              v11 = DLog_Float32(context, columns->name, *(float *)&v12);
              break;
            }
            if ( !Json::IsInteger(&child) )
              goto LABEL_13;
            v13 = (float)Json::ToInt64(&child, 0i64);
            if ( !DLog_Float32(context, columns->name, v13) )
              goto LABEL_13;
            v11 = 1;
            break;
          case 6:
            if ( Json::IsFloat(&child) )
            {
              __asm { vxorpd  xmm1, xmm1, xmm1; defaultValue }
              v14 = Json::ToFloat64(&child, *(long double *)&_XMM1);
              v11 = DLog_Float64(context, columns->name, v14);
            }
            else
            {
              if ( !Json::IsInteger(&child) )
                goto LABEL_13;
              Json::ToInt64(&child, 0i64);
              _XMM2 = 0i64;
              __asm { vcvtsi2sd xmm2, xmm2, rax; value }
              if ( DLog_Float64(context, columns->name, *(long double *)&_XMM2) )
                v11 = 1;
              else
LABEL_13:
                v11 = 0;
            }
            break;
          case 7:
            if ( !Json::IsInteger(&child) )
              goto LABEL_13;
            v17 = Json::ToInt8(&child, 0);
            if ( !DLog_Int8(context, columns->name, v17) )
              goto LABEL_13;
            v11 = 1;
            break;
          case 8:
            if ( !Json::IsInteger(&child) )
              goto LABEL_13;
            v18 = Json::ToInt16(&child, 0);
            if ( !DLog_Int16(context, columns->name, v18) )
              goto LABEL_13;
            v11 = 1;
            break;
          case 9:
            if ( !Json::IsInteger(&child) )
              goto LABEL_13;
            v19 = Json::ToInt32(&child, 0);
            if ( !DLog_Int32(context, columns->name, v19) )
              goto LABEL_13;
            v11 = 1;
            break;
          case 0xA:
            if ( !Json::IsInteger(&child) )
              goto LABEL_13;
            v20 = Json::ToInt64(&child, 0i64);
            if ( !DLog_Int64(context, columns->name, v20) )
              goto LABEL_13;
            v11 = 1;
            break;
          case 0xB:
            if ( !Json::IsInteger(&child) )
              goto LABEL_13;
            v21 = Json::ToUInt8(&child, 0);
            if ( !DLog_UInt8(context, columns->name, v21) )
              goto LABEL_13;
            v11 = 1;
            break;
          case 0xC:
            if ( !Json::IsInteger(&child) )
              goto LABEL_13;
            v22 = Json::ToUInt16(&child, 0);
            if ( !DLog_UInt16(context, columns->name, v22) )
              goto LABEL_13;
            v11 = 1;
            break;
          case 0xD:
            if ( !Json::IsInteger(&child) )
              goto LABEL_13;
            v23 = Json::ToUInt32(&child, 0);
            if ( !DLog_UInt32(context, columns->name, v23) )
              goto LABEL_13;
            v11 = 1;
            break;
          case 0xE:
            if ( !Json::IsInteger(&child) )
              goto LABEL_13;
            v24 = Json::ToUInt64(&child, 0i64);
            if ( !DLog_UInt64(context, columns->name, v24) )
              goto LABEL_13;
            v11 = 1;
            break;
          case 0xF:
            if ( !Json::IsString(&child) )
              goto LABEL_13;
            v25 = Json::ToString(&child, (const char *)&queryFormat.fmt + 3);
            if ( !DLog_String(context, columns->name, v25, 0) )
              goto LABEL_13;
            v11 = 1;
            break;
          default:
            LODWORD(v27) = columns->type;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 926, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "DLog_Json: unhandled column->type %d\n", v27) )
              __debugbreak();
            v9 = 0;
            goto LABEL_56;
        }
      }
      else
      {
$LN20_13:
        v11 = DLog_RecordInvalidEntry(context, columns->name);
      }
      v9 &= v11;
LABEL_56:
      ++columns;
      --v5;
    }
    while ( v5 );
  }
  return v9;
}

/*
==============
DLog_JsonRow
==============
*/
bool DLog_JsonRow(DLogContext *context, const char *name, Json *json)
{
  const DLogRow *row; 
  Json v8; 

  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 943, ASSERT_TYPE_ASSERT, "(context != nullptr)", (const char *)&queryFormat, "context != nullptr") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 944, ASSERT_TYPE_ASSERT, "(name != nullptr)", (const char *)&queryFormat, "name != nullptr") )
    __debugbreak();
  if ( !DLog_BeginRow(context, name) )
    return 0;
  row = context->row;
  v8 = *json;
  if ( !DLog_JsonColumns(context, row->columns, row->columnCount, &v8) )
  {
    DLog_EndRow(context);
    return 0;
  }
  return DLog_EndRow(context);
}

/*
==============
DLog_LuaColumn
==============
*/
bool DLog_LuaColumn(DLogContext *context, const char *name, lua_State *luaVM, int idx)
{
  int v8; 

  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 89, ASSERT_TYPE_ASSERT, "(context != nullptr)", (const char *)&queryFormat, "context != nullptr") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 90, ASSERT_TYPE_ASSERT, "(name != nullptr)", (const char *)&queryFormat, "name != nullptr") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 91, ASSERT_TYPE_ASSERT, "(luaVM != nullptr)", (const char *)&queryFormat, "luaVM != nullptr") )
    __debugbreak();
  if ( j_lua_type(luaVM, idx) != 5 )
    return DLog_LuaValue(context, name, luaVM, idx);
  if ( !DLog_BeginArray(context, name) )
    return 0;
  v8 = 1;
  if ( j_lua_objlen(luaVM, idx) + 1 > 1 )
  {
    do
    {
      j_lua_rawgeti(luaVM, -1, v8);
      if ( !DLog_LuaValue(context, name, luaVM, -1) )
        return 0;
      j_lua_settop(luaVM, -2);
    }
    while ( (unsigned int)++v8 < j_lua_objlen(luaVM, idx) + 1 );
  }
  return DLog_EndArray(context);
}

/*
==============
DLog_LuaRecordEvent
==============
*/
__int64 DLog_LuaRecordEvent(lua_State *luaVM)
{
  int v2; 
  unsigned __int64 UserId; 
  const char *v4; 
  const DLogEvent *event; 
  int v6; 
  int v7; 
  __int64 v8; 
  const char **p_name; 
  int v10; 
  unsigned __int64 v11; 
  __int64 v12; 
  bool v13; 
  unsigned __int64 v14; 
  bool v15; 
  __int64 v16; 
  DLogColumn *columns; 
  DLogContext context; 
  char buffer[2048]; 

  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 189, ASSERT_TYPE_ASSERT, "(luaVM != nullptr)", (const char *)&queryFormat, "luaVM != nullptr") )
    __debugbreak();
  if ( j_lua_gettop(luaVM) != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 190, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 3)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 3") )
    __debugbreak();
  if ( !j_lua_isnumber(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 191, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, 1 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, 1 )") )
    __debugbreak();
  if ( !j_lua_isstring(luaVM, 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 192, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, 2 ))", (const char *)&queryFormat, "lua_isstring( luaVM, 2 )") )
    __debugbreak();
  if ( j_lua_type(luaVM, 3) != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 193, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (3)) == 5))", (const char *)&queryFormat, "lua_istable( luaVM, 3 )") )
    __debugbreak();
  v2 = j_lua_tointeger(luaVM, 1);
  UserId = DLog_GetUserId(v2);
  if ( !DLog_CreateContext(&context, UserId, buffer, 2048) )
    return 0i64;
  v4 = j_lua_tolstring(luaVM, 2, NULL);
  if ( !DLog_BeginEvent(&context, v4) )
    return 0i64;
  event = context.event;
  if ( !context.event )
    return 0i64;
  v6 = 0;
  v7 = 0;
  if ( context.event->rowCount <= 0 )
  {
LABEL_38:
    if ( event->columnCount <= 0 )
    {
LABEL_42:
      if ( DLog_EndEvent(&context) )
        DLog_RecordContext(&context);
    }
    else
    {
      v16 = 0i64;
      while ( 1 )
      {
        columns = event->columns;
        j_lua_pushstring(luaVM, columns[v16].name);
        j_lua_gettable(luaVM, 3);
        if ( !DLog_LuaColumn(&context, columns[v16].name, luaVM, -1) )
          break;
        ++v6;
        ++v16;
        if ( v6 >= event->columnCount )
          goto LABEL_42;
      }
    }
    return 0i64;
  }
  v8 = 0i64;
  while ( 1 )
  {
    p_name = &event->rows[v8].name;
    if ( p_name[6] )
      goto LABEL_37;
    j_lua_pushstring(luaVM, *p_name);
    j_lua_gettable(luaVM, 3);
    if ( j_lua_type(luaVM, -1) != 5 )
      return 0i64;
    j_lua_rawgeti(luaVM, -1, 1);
    v10 = j_lua_type(luaVM, -1);
    j_lua_settop(luaVM, -2);
    if ( v10 == 5 )
      break;
    v13 = j_lua_objlen(luaVM, -1) != 0;
    v14 = j_lua_objlen(luaVM, -1);
    if ( v14 || !v13 )
    {
      if ( v14 )
      {
        if ( !v13 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 281, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "DLog_RecordEvent value of '%s' is neither an array or row\n", *p_name) )
            __debugbreak();
          return 0i64;
        }
        v15 = DLog_LuaColumn(&context, *p_name, luaVM, -1);
      }
      else
      {
        v15 = DLog_LuaRow(&context, *p_name, luaVM, -1);
      }
      if ( !v15 )
        return 0i64;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 263, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "DLog_RecordEvent field '%s' is ambiguous, could be a row or a value array!\n", *p_name) )
    {
      __debugbreak();
    }
LABEL_37:
    ++v7;
    ++v8;
    if ( v7 >= event->rowCount )
      goto LABEL_38;
  }
  DLog_BeginRowArray(&context, *p_name);
  v11 = j_lua_objlen(luaVM, -1);
  v12 = 0i64;
  if ( !v11 )
  {
LABEL_27:
    DLog_EndRowArray(&context);
    goto LABEL_37;
  }
  while ( 1 )
  {
    j_lua_rawgeti(luaVM, -1, 1);
    if ( !DLog_LuaRow(&context, *p_name, luaVM, -1) )
      return 0i64;
    j_lua_settop(luaVM, -2);
    if ( ++v12 >= v11 )
      goto LABEL_27;
  }
}

/*
==============
DLog_LuaRow
==============
*/
char DLog_LuaRow(DLogContext *context, const char *name, lua_State *luaVM, int idx)
{
  const DLogRow *row; 
  int v9; 
  __int64 v10; 
  DLogColumn *columns; 

  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 129, ASSERT_TYPE_ASSERT, "(context != nullptr)", (const char *)&queryFormat, "context != nullptr") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 130, ASSERT_TYPE_ASSERT, "(name != nullptr)", (const char *)&queryFormat, "name != nullptr") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 131, ASSERT_TYPE_ASSERT, "(luaVM != nullptr)", (const char *)&queryFormat, "luaVM != nullptr") )
    __debugbreak();
  if ( !context->row && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 132, ASSERT_TYPE_ASSERT, "(context->row != nullptr)", (const char *)&queryFormat, "context->row != nullptr") )
    __debugbreak();
  if ( DLog_BeginRow(context, name) )
  {
    row = context->row;
    v9 = 0;
    if ( row->columnCount <= 0 )
    {
LABEL_18:
      if ( DLog_EndRow(context) )
        return 1;
    }
    else
    {
      v10 = 0i64;
      while ( 1 )
      {
        columns = row->columns;
        j_lua_pushstring(luaVM, columns[v10].name);
        j_lua_gettable(luaVM, idx - 1);
        if ( !DLog_LuaColumn(context, columns[v10].name, luaVM, -1) )
          break;
        j_lua_settop(luaVM, -2);
        ++v9;
        ++v10;
        if ( v9 >= row->columnCount )
          goto LABEL_18;
      }
    }
  }
  return 0;
}

/*
==============
DLog_LuaValue
==============
*/
bool DLog_LuaValue(DLogContext *context, const char *name, lua_State *luaVM, int idx)
{
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  const char *v13; 
  long double v14; 
  int v15; 

  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 65, ASSERT_TYPE_ASSERT, "(context != nullptr)", (const char *)&queryFormat, "context != nullptr") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 66, ASSERT_TYPE_ASSERT, "(name != nullptr)", (const char *)&queryFormat, "name != nullptr") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 67, ASSERT_TYPE_ASSERT, "(luaVM != nullptr)", (const char *)&queryFormat, "luaVM != nullptr") )
    __debugbreak();
  v8 = j_lua_type(luaVM, idx);
  if ( !v8 )
    return DLog_Null(context, name);
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 2;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        v13 = j_lua_tolstring(luaVM, idx, NULL);
        return DLog_String(context, name, v13, 1);
      }
      else
      {
        v11 = j_lua_type(luaVM, -1);
        DLog_Error(context, name, "lua type unsupported", "lua does not support type %s\n", s_luaTypeNames[v11]);
        return 0;
      }
    }
    else
    {
      v14 = j_lua_tonumber(luaVM, idx);
      return DLog_Float(context, name, v14);
    }
  }
  else
  {
    v15 = j_lua_toboolean(luaVM, idx);
    return DLog_Bool(context, name, v15 != 0);
  }
}

/*
==============
DLog_ProcessGSCScriptArgs
==============
*/
char DLog_ProcessGSCScriptArgs(scrContext_t *scrContext, const char *const eventName, DLogContext *context)
{
  DLogContext *v3; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int ArrayVariable; 
  scr_string_t *VariableValueAddress; 
  const char *v10; 
  unsigned int v11; 
  unsigned int Object; 
  VariableType ObjectType; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int Array; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  const DLogEvent *event; 
  const DLogRow *Row; 
  const char *type; 
  const char *v23; 
  __int64 v24; 
  signed __int64 v25; 
  char v26; 
  __int64 v27; 
  char v28; 
  scr_entref_t EntityIdRef; 
  gentity_s *v30; 
  const char *v31; 
  const DLogEvent *v32; 
  char v33; 
  unsigned int v34; 
  bool v35; 
  char v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v40; 
  VariableType ValueType; 
  unsigned int v42; 
  bool v43; 
  const DLogEvent *v45; 
  const DLogRow *v46; 
  const char *v47; 
  const char *v48; 
  __int64 v49; 
  signed __int64 v50; 
  char v51; 
  __int64 v52; 
  char v53; 
  const char *v54; 
  const char *v55; 
  VariableType v56; 
  const char *NameForType; 
  const char *v58; 
  ClientPlatform clientPlatform; 
  unsigned int ArrayObject; 
  unsigned int v61; 
  DLogFirstPartyAccountType outFirstPartyAccountType; 
  unsigned int ArraySize; 
  unsigned __int64 outUserSessionId; 
  unsigned __int64 outFirstPartyUserId; 
  unsigned __int64 outUnoId[9]; 
  ClientPlatform outClientPlatform; 

  v3 = context;
  ArrayObject = BGScr_Main_GetArrayObject(scrContext, 1u);
  v5 = ArrayObject;
  ArraySize = GetArraySize(scrContext, ArrayObject);
  v61 = 0;
  v6 = 0;
  if ( !ArraySize )
    return 1;
  while ( 1 )
  {
    v7 = v6 + 1;
    ArrayVariable = GetArrayVariable(scrContext, v5, v6);
    if ( GetValueType(scrContext, ArrayVariable) != VAR_STRING )
      break;
    VariableValueAddress = (scr_string_t *)GetVariableValueAddress(scrContext, ArrayVariable);
    v10 = SL_ConvertToString(*VariableValueAddress);
    v11 = GetArrayVariable(scrContext, v5, v7);
    if ( GetValueType(scrContext, v11) == VAR_POINTER )
    {
      Object = FindObject(scrContext, v11);
      ObjectType = GetObjectType(scrContext, Object);
      if ( ObjectType == VAR_ARRAY )
      {
        if ( GetArraySize(scrContext, Object) )
        {
          v14 = GetArrayVariable(scrContext, Object, 0);
          if ( GetValueType(scrContext, v14) == VAR_POINTER )
          {
            v15 = FindObject(scrContext, v14);
            if ( GetObjectType(scrContext, v15) == VAR_ARRAY )
            {
              DLog_BeginRowArray(v3, v10);
              Array = GetArray(scrContext, v11);
              v17 = GetArraySize(scrContext, Array);
              v18 = 0;
              if ( v17 )
              {
                do
                {
                  v19 = GetArrayVariable(scrContext, Array, v18);
                  if ( !DLog_ScrRow(v3, v10, scrContext, v19) )
                    return 0;
                }
                while ( ++v18 < v17 );
              }
              DLog_EndRowArray(v3);
              goto LABEL_56;
            }
          }
        }
      }
      else if ( ObjectType == VAR_ENTITY )
      {
        event = v3->event;
        if ( event && (Row = DLog_FindRow(event, v10)) != NULL )
        {
          type = Row->type;
          v23 = "player_header";
          v24 = 0x7FFFFFFFi64;
          if ( !type && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          v25 = type - "player_header";
          do
          {
            v26 = v23[v25];
            v27 = v24;
            v28 = *v23++;
            --v24;
            if ( !v27 )
              break;
            if ( v26 != v28 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 516, ASSERT_TYPE_ASSERT, "(I_strcmp( playerHeaderRow->type, \"player_header\" ) == 0)", (const char *)&queryFormat, "I_strcmp( playerHeaderRow->type, \"player_header\" ) == 0") )
                __debugbreak();
              break;
            }
          }
          while ( v26 );
          EntityIdRef = Scr_GetEntityIdRef(scrContext, Object);
          if ( EntityIdRef.entclass )
          {
            Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
            v30 = NULL;
          }
          else
          {
            if ( EntityIdRef.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 518, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
              __debugbreak();
            v30 = &g_entities[EntityIdRef.entnum];
            if ( !v30->client )
            {
              v31 = j_va("entity %i is not a player", EntityIdRef.entnum);
              Scr_ObjectError(COM_ERR_3680, scrContext, v31);
            }
          }
          if ( DLog_FindRow(v3->event, v10) )
          {
            DLog_Util_GetPlayerHeaderFieldsFromEntity(v30, outUnoId, &outFirstPartyUserId, &outFirstPartyAccountType, &outUserSessionId, &outClientPlatform);
            LOBYTE(clientPlatform) = outClientPlatform;
            DLog_Util_FillPlayerHeader(v3, v10, outUnoId[0], outFirstPartyUserId, outFirstPartyAccountType, outUserSessionId, clientPlatform);
          }
        }
        else
        {
          Com_Printf(16, "DLog_ProcessGSCScriptArgs - expected field %s to refer to a player_header\n", v10);
        }
        goto LABEL_56;
      }
      v32 = v3->event;
      if ( v32 && (v32->columnCount || v32->rowCount) )
      {
        if ( v3->row || v3->column || DLog_FindColumn(v3, v10) )
        {
LABEL_61:
          v43 = DLog_ScrColumn(v3, v10, scrContext, v11);
          goto LABEL_55;
        }
      }
      else
      {
        v33 = 1;
        v34 = GetArray(scrContext, v11);
        v35 = (GetArraySize(scrContext, v34) & 1) == 0;
        v36 = 26;
        v37 = 0;
        v38 = GetArray(scrContext, v11);
        if ( GetArraySize(scrContext, v38) )
        {
          do
          {
            v39 = GetArray(scrContext, v11);
            v40 = GetArrayVariable(scrContext, v39, v37);
            ValueType = GetValueType(scrContext, v40);
            if ( (v37 & 1) == 0 && ValueType != VAR_STRING )
              v35 = 0;
            if ( v36 == 26 )
            {
              v36 = ValueType;
            }
            else if ( ValueType != v36 )
            {
              v33 = 0;
            }
            ++v37;
            v42 = GetArray(scrContext, v11);
          }
          while ( v37 < GetArraySize(scrContext, v42) );
          v3 = context;
        }
        if ( !v35 )
        {
          if ( !v33 )
          {
            v55 = j_va("DLog_RecordEvent value of '%s' is neither an array or row\n", v10);
            Scr_Error(COM_ERR_2443, scrContext, v55);
            return 0;
          }
          v6 = v61;
          goto LABEL_61;
        }
        if ( v33 )
        {
          v54 = j_va("DLog_RecordEvent field '%s' is ambiguous, could be a row or a value array!\n", v10);
          Scr_Error(COM_ERR_6078, scrContext, v54);
          return 0;
        }
        v6 = v61;
      }
      v43 = DLog_ScrRow(v3, v10, scrContext, v11);
      goto LABEL_55;
    }
    if ( GetValueType(scrContext, v11) )
    {
      if ( !DLog_ScrColumn(v3, v10, scrContext, v11) )
        return 0;
    }
    else
    {
      v45 = v3->event;
      if ( v45 )
      {
        v46 = DLog_FindRow(v45, v10);
        if ( v46 )
        {
          v47 = v46->type;
          v48 = "player_header";
          v49 = 0x7FFFFFFFi64;
          if ( !v47 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          v50 = v47 - "player_header";
          do
          {
            v51 = v48[v50];
            v52 = v49;
            v53 = *v48++;
            --v49;
            if ( !v52 )
              break;
            if ( v51 != v53 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 633, ASSERT_TYPE_ASSERT, "(I_strcmp( playerHeaderRow->type, \"player_header\" ) == 0)", (const char *)&queryFormat, "I_strcmp( playerHeaderRow->type, \"player_header\" ) == 0") )
                __debugbreak();
              break;
            }
          }
          while ( v51 );
          if ( !DLog_IsActive() )
          {
            v3->error = DLOG_ERROR_NOT_ACTIVE;
            return 0;
          }
          if ( !DLog_BeginRow(v3, v10) || !DLog_UInt64(v3, "uno_id", 0i64) || !DLog_UInt64(v3, "first_party_user_id", 0i64) || !DLog_UInt8(v3, "first_party_account_type", 0) || !DLog_UInt64(v3, "user_session_id", 0i64) || !DLog_UInt8(v3, "platform", 0) )
            return 0;
          v43 = DLog_EndRow(v3);
LABEL_55:
          if ( !v43 )
            return 0;
LABEL_56:
          v5 = ArrayObject;
          goto LABEL_57;
        }
      }
      if ( !DLog_Null(v3, v10) )
        return 0;
    }
LABEL_57:
    v6 += 2;
    v61 = v6;
    if ( v6 >= ArraySize )
      return 1;
  }
  v56 = Scr_GetType(scrContext, v7);
  NameForType = Scr_GetNameForType(v56);
  v58 = j_va("DLog_ProcessGSCScriptArgs keyvals[%d] expects string name but found %s", v6, NameForType);
  Scr_Error(COM_ERR_2441, scrContext, v58);
  return 0;
}

/*
==============
DLog_RecordInvalidEntry
==============
*/

bool __fastcall DLog_RecordInvalidEntry(DLogContext *context, const char *name, double _XMM2_8)
{
  const DLogColumn *column; 
  bool result; 
  const char *v8; 
  __int64 v9; 

  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 963, ASSERT_TYPE_ASSERT, "(context != nullptr)", (const char *)&queryFormat, "context != nullptr") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 964, ASSERT_TYPE_ASSERT, "(name != nullptr)", (const char *)&queryFormat, "name != nullptr") )
    __debugbreak();
  if ( !context->column && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 965, ASSERT_TYPE_ASSERT, "(context->column != nullptr)", (const char *)&queryFormat, "context->column != nullptr") )
    __debugbreak();
  column = context->column;
  if ( !column )
    return 0;
  switch ( column->type )
  {
    case 4:
      result = DLog_Bool(context, name, 0);
      break;
    case 5:
      result = DLog_Float32(context, name, 0.0);
      break;
    case 6:
      __asm { vxorpd  xmm2, xmm2, xmm2; jumptable 000000014098EB92 case 6 }
      result = DLog_Float64(context, name, *(long double *)&_XMM2);
      break;
    case 7:
      result = DLog_Int8(context, name, 0);
      break;
    case 8:
      result = DLog_Int16(context, name, 0);
      break;
    case 9:
      result = DLog_Int32(context, name, 0);
      break;
    case 0xA:
      result = DLog_Int64(context, name, 0i64);
      break;
    case 0xB:
      result = DLog_UInt8(context, name, 0);
      break;
    case 0xC:
      result = DLog_UInt16(context, name, 0);
      break;
    case 0xD:
      result = DLog_UInt32(context, name, 0);
      break;
    case 0xE:
      result = DLog_UInt64(context, name, 0i64);
      break;
    case 0xF:
      v8 = "UNKNOWN";
      if ( column->stringSize < 8u )
        v8 = (char *)&queryFormat.fmt + 3;
      result = DLog_String(context, name, v8, 0);
      break;
    default:
      LODWORD(v9) = column->type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 1013, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "DLog_Json: unhandled column->type %d\n", v9) )
        __debugbreak();
      return 0;
  }
  return result;
}

/*
==============
DLog_SafetyCheckGSCParams
==============
*/
void DLog_SafetyCheckGSCParams(scrContext_t *scrContext)
{
  if ( Scr_GetNumParam(scrContext) < 2 )
    Scr_Error(COM_ERR_2438, scrContext, "DLog calls from GSC expect two arguments");
  if ( Scr_GetType(scrContext, 0) != VAR_STRING )
    Scr_Error(COM_ERR_2439, scrContext, "DLog calls from GSC expect string event name");
  if ( Scr_GetType(scrContext, 1u) != VAR_POINTER || Scr_GetPointerType(scrContext, 1u) != VAR_ARRAY )
    Scr_Error(COM_ERR_2440, scrContext, "DLog calls from GSC expect array keyvals");
}

/*
==============
DLog_ScrColumn
==============
*/
bool DLog_ScrColumn(DLogContext *context, const char *name, scrContext_t *scrContext, unsigned int valueId)
{
  unsigned int Array; 
  unsigned int v9; 
  unsigned int ArraySize; 
  unsigned int ArrayVariable; 

  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 337, ASSERT_TYPE_ASSERT, "(context != nullptr)", (const char *)&queryFormat, "context != nullptr") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 338, ASSERT_TYPE_ASSERT, "(name != nullptr)", (const char *)&queryFormat, "name != nullptr") )
    __debugbreak();
  if ( GetValueType(scrContext, valueId) != VAR_POINTER )
    return DLog_ScrValue(context, name, scrContext, valueId);
  if ( !DLog_BeginArray(context, name) )
    return 0;
  Array = GetArray(scrContext, valueId);
  v9 = 0;
  ArraySize = GetArraySize(scrContext, Array);
  if ( ArraySize )
  {
    do
    {
      ArrayVariable = GetArrayVariable(scrContext, Array, v9);
      if ( GetValueType(scrContext, ArrayVariable) == VAR_UNDEFINED )
        break;
      if ( !DLog_ScrValue(context, name, scrContext, ArrayVariable) )
        return 0;
      ++v9;
    }
    while ( v9 < ArraySize );
  }
  return DLog_EndArray(context);
}

/*
==============
DLog_ScrRecordEvent
==============
*/
void DLog_ScrRecordEvent(scrContext_t *scrContext)
{
  const char *String; 
  DLogContext context; 
  char buffer[2048]; 

  DLog_SafetyCheckGSCParams(scrContext);
  String = Scr_GetString(scrContext, 0);
  if ( DLog_CreateContext(&context, 0i64, buffer, 2048) && DLog_BeginEvent(&context, String) && DLog_ProcessGSCScriptArgs(scrContext, String, &context) && DLog_EndEvent(&context) )
    DLog_RecordContext(&context);
}

/*
==============
DLog_ScrRow
==============
*/
char DLog_ScrRow(DLogContext *context, const char *name, scrContext_t *scrContext, unsigned int valueId)
{
  unsigned int Array; 
  unsigned int v9; 
  unsigned int ArraySize; 
  unsigned int ArrayVariable; 
  VariableType ValueType; 
  const char *NameForType; 
  const char *v14; 
  scr_string_t *VariableValueAddress; 
  const char *v16; 
  unsigned int v17; 

  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 384, ASSERT_TYPE_ASSERT, "(context != nullptr)", (const char *)&queryFormat, "context != nullptr") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 385, ASSERT_TYPE_ASSERT, "(name != nullptr)", (const char *)&queryFormat, "name != nullptr") )
    __debugbreak();
  if ( DLog_BeginRow(context, name) )
  {
    Array = GetArray(scrContext, valueId);
    v9 = 0;
    ArraySize = GetArraySize(scrContext, Array);
    if ( ArraySize )
    {
      while ( 1 )
      {
        ArrayVariable = GetArrayVariable(scrContext, Array, v9);
        if ( GetValueType(scrContext, ArrayVariable) != VAR_STRING )
        {
          ValueType = GetValueType(scrContext, valueId);
          NameForType = Scr_GetNameForType(ValueType);
          v14 = j_va("DLog_RecordEvent %s[%d] expects string name but found '%s'", name, v9, NameForType);
          Scr_Error(COM_ERR_2437, scrContext, v14);
        }
        VariableValueAddress = (scr_string_t *)GetVariableValueAddress(scrContext, ArrayVariable);
        v16 = SL_ConvertToString(*VariableValueAddress);
        v17 = GetArrayVariable(scrContext, Array, v9 + 1);
        if ( !DLog_ScrColumn(context, v16, scrContext, v17) )
          break;
        v9 += 2;
        if ( v9 >= ArraySize )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      if ( DLog_EndRow(context) )
        return 1;
    }
  }
  return 0;
}

/*
==============
DLog_ScrValue
==============
*/
bool DLog_ScrValue(DLogContext *context, const char *name, scrContext_t *scrContext, unsigned int valueId)
{
  scr_string_t *VariableValueAddress; 
  VariableType ValueType; 
  VariableType v10; 
  const char *NameForType; 
  const char *v12; 
  const char *v14; 

  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 314, ASSERT_TYPE_ASSERT, "(context != nullptr)", (const char *)&queryFormat, "context != nullptr") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 315, ASSERT_TYPE_ASSERT, "(name != nullptr)", (const char *)&queryFormat, "name != nullptr") )
    __debugbreak();
  VariableValueAddress = (scr_string_t *)GetVariableValueAddress(scrContext, valueId);
  ValueType = GetValueType(scrContext, valueId);
  switch ( ValueType )
  {
    case VAR_UNDEFINED:
      return DLog_Null(context, name);
    case VAR_STRING:
      v14 = SL_ConvertToString(*VariableValueAddress);
      return DLog_String(context, name, v14, 1);
    case VAR_FLOAT:
      return DLog_Float(context, name, *(float *)VariableValueAddress);
    case VAR_INTEGER:
      return DLog_Int(context, name, *(int *)VariableValueAddress);
    default:
      v10 = GetValueType(scrContext, valueId);
      NameForType = Scr_GetNameForType(v10);
      v12 = j_va("DLog_RecordEvent field '%s' unhandled value type '%s'", name, NameForType);
      Scr_Error(COM_ERR_2436, scrContext, v12);
      return 0;
  }
}

/*
==============
DLog_Util_FillPlayerHeader
==============
*/
void DLog_Util_FillPlayerHeader(DLogContext *context, const char *rowName, unsigned __int64 unoId, unsigned __int64 firstPartyUserId, DLogFirstPartyAccountType firstPartyAccountType, unsigned __int64 userSessionId, ClientPlatform clientPlatform)
{
  if ( !DLog_IsActive() )
  {
    context->error = DLOG_ERROR_NOT_ACTIVE;
LABEL_10:
    Com_Printf(16, "=== DLog_Util_FillPlayerHeader - error writing %s row", rowName);
    return;
  }
  if ( !DLog_BeginRow(context, rowName) || !DLog_UInt64(context, "uno_id", unoId) || !DLog_UInt64(context, "first_party_user_id", firstPartyUserId) || !DLog_UInt8(context, "first_party_account_type", firstPartyAccountType) || !DLog_UInt64(context, "user_session_id", userSessionId) || !DLog_UInt8(context, "platform", clientPlatform) || !DLog_EndRow(context) )
    goto LABEL_10;
}

/*
==============
DLog_Util_FillPlayerHeaderFromGEntity
==============
*/
void DLog_Util_FillPlayerHeaderFromGEntity(gentity_s *playerEntity, DLogContext *context, const char *rowName)
{
  ClientPlatform clientPlatform; 
  unsigned __int64 userSessionId; 
  unsigned __int64 outFirstPartyUserId; 
  unsigned __int64 outUnoId[3]; 
  ClientPlatform outClientPlatform; 
  DLogFirstPartyAccountType outFirstPartyAccountType; 

  if ( DLog_FindRow(context->event, rowName) )
  {
    DLog_Util_GetPlayerHeaderFieldsFromEntity(playerEntity, outUnoId, &outFirstPartyUserId, &outFirstPartyAccountType, &userSessionId, &outClientPlatform);
    LOBYTE(clientPlatform) = outClientPlatform;
    DLog_Util_FillPlayerHeader(context, rowName, outUnoId[0], outFirstPartyUserId, outFirstPartyAccountType, userSessionId, clientPlatform);
  }
}

/*
==============
DLog_Util_GetPlayerHeaderFieldsFromEntity
==============
*/
void DLog_Util_GetPlayerHeaderFieldsFromEntity(const gentity_s *const entity, unsigned __int64 *outUnoId, unsigned __int64 *outFirstPartyUserId, DLogFirstPartyAccountType *outFirstPartyAccountType, unsigned __int64 *outUserSessionId, ClientPlatform *outClientPlatform)
{
  __int64 clientNum; 
  BG_SynchronizedPlayerInfo *v11; 
  char v12; 
  ClientPlatform *v13; 
  DLogFirstPartyAccountType v14; 
  __int64 v15; 
  XUID v16; 

  if ( !entity->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 739, ASSERT_TYPE_ASSERT, "(entity->client)", (const char *)&queryFormat, "entity->client") )
    __debugbreak();
  XUID::XUID(&v16);
  clientNum = (unsigned int)entity->s.clientNum;
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 991, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !(_BYTE)SvClient::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 992, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)clientNum >= SvClient::ms_clientCount )
  {
    LODWORD(v15) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 993, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ms_clientCount )", "clientNum doesn't index ms_clientCount\n\t%i not in [0, %i)", v15, SvClient::ms_clientCount) )
      __debugbreak();
  }
  v11 = SvClientMP::ms_playerInfos[clientNum];
  if ( v11 )
    XUID::operator=(&v16, &v11->xuid);
  else
    Com_Printf(16, "=== DLog_Util_GetPlayerHeaderFieldsFromEntity - error accessing playerInfo for clientNum %d", (unsigned int)clientNum);
  *outUnoId = Live_GetUnoIdFromPlayerInfo(v11);
  *outFirstPartyUserId = v11->platformId;
  v12 = v11->clientPlatform[0];
  v13 = outClientPlatform;
  *(_BYTE *)outClientPlatform = v12;
  if ( SV_BotIsBotEntClient(entity) || SV_ClientMP_IsTestClient(entity->s.number) == 1 )
  {
    v14 = DLOG_FIRST_PARTY_ACCOUNT_TYPE_BOT;
  }
  else
  {
    switch ( *(_BYTE *)v13 )
    {
      case 1:
        v14 = DLOG_FIRST_PARTY_ACCOUNT_TYPE_STEAM;
        break;
      case 2:
        v14 = DLOG_FIRST_PARTY_ACCOUNT_TYPE_BATTLENET;
        break;
      case 3:
        v14 = DLOG_FIRST_PARTY_ACCOUNT_TYPE_XBL;
        break;
      case 4:
        v14 = DLOG_FIRST_PARTY_ACCOUNT_TYPE_PSN;
        break;
      case 5:
        v14 = DLOG_FIRST_PARTY_ACCOUNT_TYPE_WEGAME;
        break;
      default:
        Com_PrintError(25, "DLog_GetFirstPartyAccountTypeFromClientPlatform: unhandled ClientPlatform value %d", (unsigned int)*(char *)v13);
        v14 = DLOG_FIRST_PARTY_ACCOUNT_TYPE_UNKNOWN;
        break;
    }
  }
  *outFirstPartyAccountType = v14;
  *outUserSessionId = entity->client->sess.userSessionId;
}

/*
==============
PlayerCmd_DLog_RecordPlayerEvent
==============
*/
void PlayerCmd_DLog_RecordPlayerEvent(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  const char *String; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  ClientPlatform clientPlatform; 
  ClientPlatform outClientPlatform; 
  DLogFirstPartyAccountType outFirstPartyAccountType; 
  unsigned __int64 outFirstPartyUserId; 
  unsigned __int64 outUnoId; 
  unsigned __int64 outUserSessionId; 
  DLogContext context; 
  char buffer[2048]; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_3681, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_bindings.cpp", 813, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client )
    {
      v5 = j_va("entity %i is not a player", entnum);
      Scr_ObjectError(COM_ERR_3680, scrContext, v5);
    }
  }
  DLog_SafetyCheckGSCParams(scrContext);
  String = Scr_GetString(scrContext, 0);
  DLog_Util_GetPlayerHeaderFieldsFromEntity(v4, &outUnoId, &outFirstPartyUserId, &outFirstPartyAccountType, &outUserSessionId, &outClientPlatform);
  v7 = outUnoId;
  v8 = outUnoId;
  if ( !outUnoId )
    v8 = outFirstPartyUserId;
  if ( DLog_CreateContext(&context, v8, buffer, 2048) && DLog_BeginEvent(&context, String) )
  {
    LOBYTE(clientPlatform) = outClientPlatform;
    DLog_Util_FillPlayerHeader(&context, rowName, v7, outFirstPartyUserId, outFirstPartyAccountType, outUserSessionId, clientPlatform);
    if ( DLog_ProcessGSCScriptArgs(scrContext, String, &context) )
    {
      if ( DLog_EndEvent(&context) )
        DLog_RecordContext(&context);
    }
  }
}

/*
==============
lua_isinteger
==============
*/
__int64 lua_isinteger(lua_State *L, int idx)
{
  int ok; 

  ok = 0;
  if ( j_lua_type(L, idx) == 3 )
    j_lua_tointegerx(L, idx, &ok);
  return (unsigned int)ok;
}

