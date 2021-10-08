/*
==============
BGScr_Main_GetArrayObject
==============
*/

unsigned int __fastcall BGScr_Main_GetArrayObject(scrContext_t *scrContext, const unsigned int index)
{
  return ?BGScr_Main_GetArrayObject@@YAIAEAUscrContext_t@@I@Z(scrContext, index);
}

/*
==============
BGScr_TableLookupInternal
==============
*/

const char *__fastcall BGScr_TableLookupInternal(scrContext_t *scrContext, const char *tableName, const int comparisonColumn, const char *stringValue, const int returnValueColumn)
{
  return ?BGScr_TableLookupInternal@@YAPEBDAEAUscrContext_t@@PEBDH1H@Z(scrContext, tableName, comparisonColumn, stringValue, returnValueColumn);
}

/*
==============
BGScr_StrICmp
==============
*/
void BGScr_StrICmp(scrContext_t *scrContext)
{
  int v2; 
  scr_string_t ConstString; 
  scr_string_t v4; 
  const char *v5; 
  __int64 v6; 
  const char *v7; 
  signed __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 

  v2 = 1;
  ConstString = Scr_GetConstString(scrContext, 0);
  v4 = Scr_GetConstString(scrContext, 1u);
  v5 = SL_ConvertToString(ConstString);
  v6 = 0x7FFFFFFFi64;
  v7 = SL_ConvertToString(v4);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v8 = v5 - v7;
  while ( 1 )
  {
    v9 = (unsigned __int8)v7[v8];
    v10 = v6;
    v11 = *(unsigned __int8 *)v7++;
    --v6;
    if ( !v10 )
    {
LABEL_16:
      v2 = 0;
      goto LABEL_17;
    }
    if ( v9 != v11 )
    {
      v12 = v9 + 32;
      if ( v9 - 65 > 0x19 )
        v12 = v9;
      v9 = v12;
      v13 = v11 + 32;
      if ( v11 - 65 > 0x19 )
        v13 = v11;
      if ( v9 != v13 )
        break;
    }
    if ( !v9 )
      goto LABEL_16;
  }
  if ( v9 < v13 )
    v2 = -1;
LABEL_17:
  Scr_AddInt(scrContext, v2);
}

/*
==============
BGScr_GetArrayKeys
==============
*/
void BGScr_GetArrayKeys(scrContext_t *scrContext)
{
  const char *TypeName; 
  const char *v3; 
  unsigned int Object; 

  if ( Scr_GetPointerType(scrContext, 0) != VAR_ARRAY )
  {
    TypeName = Scr_GetTypeName(scrContext, 0);
    v3 = j_va("Parameter (%s) must be an array", TypeName);
    Scr_ParamError(COM_ERR_2536, scrContext, 0, v3);
  }
  Object = Scr_GetObject(scrContext, 0);
  Scr_AddArrayKeys(scrContext, Object);
}

/*
==============
BGScr_GetFirstArrayKey
==============
*/
void BGScr_GetFirstArrayKey(scrContext_t *scrContext)
{
  const char *TypeName; 
  const char *v3; 
  unsigned int Object; 

  if ( Scr_GetPointerType(scrContext, 0) != VAR_ARRAY )
  {
    TypeName = Scr_GetTypeName(scrContext, 0);
    v3 = j_va("Parameter (%s) must be an array", TypeName);
    Scr_ParamError(COM_ERR_2536, scrContext, 0, v3);
  }
  Object = Scr_GetObject(scrContext, 0);
  Scr_AddFirstArrayKey(scrContext, Object);
}

/*
==============
BGScr_GetLastArrayKey
==============
*/
void BGScr_GetLastArrayKey(scrContext_t *scrContext)
{
  const char *TypeName; 
  const char *v3; 
  unsigned int Object; 

  if ( Scr_GetPointerType(scrContext, 0) != VAR_ARRAY )
  {
    TypeName = Scr_GetTypeName(scrContext, 0);
    v3 = j_va("Parameter (%s) must be an array", TypeName);
    Scr_ParamError(COM_ERR_2536, scrContext, 0, v3);
  }
  Object = Scr_GetObject(scrContext, 0);
  Scr_AddLastArrayKey(scrContext, Object);
}

/*
==============
BGScr_GetPrevArrayKey
==============
*/
void BGScr_GetPrevArrayKey(scrContext_t *scrContext)
{
  const char *TypeName; 
  const char *v3; 
  unsigned int Object; 
  VariableValue *Variable; 

  if ( Scr_GetPointerType(scrContext, 0) != VAR_ARRAY )
  {
    TypeName = Scr_GetTypeName(scrContext, 0);
    v3 = j_va("Parameter (%s) must be an array", TypeName);
    Scr_ParamError(COM_ERR_2536, scrContext, 0, v3);
  }
  Object = Scr_GetObject(scrContext, 0);
  Variable = Scr_GetVariable(scrContext, 1u);
  Scr_AddPrevArrayKey(scrContext, Object, Variable);
}

/*
==============
BGScr_GetNextArrayKey
==============
*/
void BGScr_GetNextArrayKey(scrContext_t *scrContext)
{
  const char *TypeName; 
  const char *v3; 
  unsigned int Object; 
  VariableValue *Variable; 

  if ( Scr_GetPointerType(scrContext, 0) != VAR_ARRAY )
  {
    TypeName = Scr_GetTypeName(scrContext, 0);
    v3 = j_va("Parameter (%s) must be an array", TypeName);
    Scr_ParamError(COM_ERR_2536, scrContext, 0, v3);
  }
  Object = Scr_GetObject(scrContext, 0);
  Variable = Scr_GetVariable(scrContext, 1u);
  Scr_AddNextArrayKey(scrContext, Object, Variable);
}

/*
==============
BGScr_GetSystemTimeInMicroseconds
==============
*/
void BGScr_GetSystemTimeInMicroseconds(scrContext_t *scrContext)
{
  int v2; 

  v2 = Sys_Microseconds();
  Scr_AddInt(scrContext, v2 & 0x7FFFFFFF);
}

/*
==============
BGScr_IsArray
==============
*/
void BGScr_IsArray(scrContext_t *scrContext)
{
  VariableType Type; 
  VariableType PointerType; 

  Type = Scr_GetType(scrContext, 0);
  if ( Type == VAR_POINTER )
  {
    PointerType = Scr_GetPointerType(scrContext, 0);
    if ( (unsigned __int8)PointerType < VAR_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_scr_main.cpp", 2036, ASSERT_TYPE_ASSERT, "(type >= VAR_FIRST_OBJECT)", (const char *)&queryFormat, "type >= VAR_FIRST_OBJECT") )
      __debugbreak();
    Scr_AddInt(scrContext, PointerType == VAR_ARRAY);
  }
  else
  {
    if ( (unsigned __int8)Type >= VAR_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_scr_main.cpp", 2041, ASSERT_TYPE_ASSERT, "(type < VAR_FIRST_OBJECT)", (const char *)&queryFormat, "type < VAR_FIRST_OBJECT") )
      __debugbreak();
    Scr_AddInt(scrContext, 0);
  }
}

/*
==============
BGScr_IsStruct
==============
*/
void BGScr_IsStruct(scrContext_t *scrContext)
{
  VariableType Type; 
  VariableType PointerType; 

  Type = Scr_GetType(scrContext, 0);
  if ( Type == VAR_POINTER )
  {
    PointerType = Scr_GetPointerType(scrContext, 0);
    if ( (unsigned __int8)PointerType < VAR_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_scr_main.cpp", 2064, ASSERT_TYPE_ASSERT, "(type >= VAR_FIRST_OBJECT)", (const char *)&queryFormat, "type >= VAR_FIRST_OBJECT") )
      __debugbreak();
    Scr_AddInt(scrContext, PointerType == VAR_OBJECT);
  }
  else
  {
    if ( (unsigned __int8)Type >= VAR_THREAD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_scr_main.cpp", 2069, ASSERT_TYPE_ASSERT, "(type < VAR_FIRST_OBJECT)", (const char *)&queryFormat, "type < VAR_FIRST_OBJECT") )
      __debugbreak();
    Scr_AddInt(scrContext, 0);
  }
}

/*
==============
BGScr_IsVector
==============
*/
void BGScr_IsVector(scrContext_t *scrContext)
{
  VariableType Type; 

  Type = Scr_GetType(scrContext, 0);
  Scr_AddInt(scrContext, Type == VAR_VECTOR);
}

/*
==============
BGScr_IsEnt
==============
*/
void BGScr_IsEnt(scrContext_t *scrContext)
{
  if ( Scr_GetType(scrContext, 0) == VAR_POINTER && Scr_GetPointerType(scrContext, 0) == VAR_ENTITY && !(unsigned __int8)*(_DWORD *)&Scr_GetEntityRef(scrContext, 0).entclass )
    Scr_AddInt(scrContext, 1);
  else
    Scr_AddInt(scrContext, 0);
}

/*
==============
BGScr_IsNode
==============
*/
void BGScr_IsNode(scrContext_t *scrContext)
{
  if ( Scr_GetType(scrContext, 0) == VAR_POINTER && Scr_GetPointerType(scrContext, 0) == VAR_ENTITY && (unsigned __int8)*(_DWORD *)&Scr_GetEntityRef(scrContext, 0).entclass == 2 )
    Scr_AddInt(scrContext, 1);
  else
    Scr_AddInt(scrContext, 0);
}

/*
==============
BGScr_IsNonEntSpawner
==============
*/
void BGScr_IsNonEntSpawner(scrContext_t *scrContext)
{
  if ( Scr_GetType(scrContext, 0) == VAR_POINTER && Scr_GetPointerType(scrContext, 0) == VAR_ENTITY && (unsigned __int8)*(_DWORD *)&Scr_GetEntityRef(scrContext, 0).entclass == 6 )
    Scr_AddInt(scrContext, 1);
  else
    Scr_AddInt(scrContext, 0);
}

/*
==============
BGScr_IsInt
==============
*/
void BGScr_IsInt(scrContext_t *scrContext)
{
  VariableType Type; 

  Type = Scr_GetType(scrContext, 0);
  Scr_AddInt(scrContext, Type == VAR_INTEGER);
}

/*
==============
BGScr_IsFloat
==============
*/
void BGScr_IsFloat(scrContext_t *scrContext)
{
  VariableType Type; 

  Type = Scr_GetType(scrContext, 0);
  Scr_AddInt(scrContext, Type == VAR_FLOAT);
}

/*
==============
BGScr_IsNumber
==============
*/
void BGScr_IsNumber(scrContext_t *scrContext)
{
  VariableType Type; 

  Type = Scr_GetType(scrContext, 0);
  Scr_AddBool(scrContext, (unsigned int)(unsigned __int8)Type - 5 <= 1);
}

/*
==============
BGScr_IsString
==============
*/
void BGScr_IsString(scrContext_t *scrContext)
{
  VariableType Type; 

  Type = Scr_GetType(scrContext, 0);
  Scr_AddInt(scrContext, Type == VAR_STRING);
}

/*
==============
BGScr_IsIString
==============
*/
void BGScr_IsIString(scrContext_t *scrContext)
{
  VariableType Type; 

  Type = Scr_GetType(scrContext, 0);
  Scr_AddInt(scrContext, Type == VAR_ISTRING);
}

/*
==============
BGScr_IsFunction
==============
*/
void BGScr_IsFunction(scrContext_t *scrContext)
{
  VariableType Type; 

  Type = Scr_GetType(scrContext, 0);
  Scr_AddInt(scrContext, Type == VAR_FUNCTION);
}

/*
==============
BGScr_IsBuiltinFunction
==============
*/
void BGScr_IsBuiltinFunction(scrContext_t *scrContext)
{
  VariableType Type; 

  Type = Scr_GetType(scrContext, 0);
  Scr_AddInt(scrContext, Type == VAR_BUILTIN_FUNCTION);
}

/*
==============
BGScr_IsBuiltinMethod
==============
*/
void BGScr_IsBuiltinMethod(scrContext_t *scrContext)
{
  VariableType Type; 

  Type = Scr_GetType(scrContext, 0);
  Scr_AddInt(scrContext, Type == VAR_BUILTIN_METHOD);
}

/*
==============
BGScr_IsAnimation
==============
*/
void BGScr_IsAnimation(scrContext_t *scrContext)
{
  VariableType Type; 

  Type = Scr_GetType(scrContext, 0);
  Scr_AddInt(scrContext, Type == VAR_ANIMATION);
}

/*
==============
BGScr_assertCmd
==============
*/
void BGScr_assertCmd(scrContext_t *scrContext)
{
  if ( !Scr_GetInt(scrContext, 0) )
    Scr_Error(COM_ERR_2563, scrContext, "assert fail");
}

/*
==============
BGScr_assertexCmd
==============
*/
void BGScr_assertexCmd(scrContext_t *scrContext)
{
  const char *String; 
  const char *v3; 

  if ( !Scr_GetInt(scrContext, 0) )
  {
    String = Scr_GetString(scrContext, 1u);
    v3 = j_va("assert fail: %s", String);
    Scr_Error(COM_ERR_2564, scrContext, v3);
  }
}

/*
==============
BGScr_assertmsgCmd
==============
*/
void BGScr_assertmsgCmd(scrContext_t *scrContext)
{
  const char *String; 
  const char *v3; 

  String = Scr_GetString(scrContext, 0);
  v3 = j_va("assert fail: %s", String);
  Scr_Error(COM_ERR_2565, scrContext, v3);
}

/*
==============
BGScr_TableLookup
==============
*/
void BGScr_TableLookup(scrContext_t *scrContext)
{
  const char *String; 
  int Int; 
  const char *v4; 
  int returnValueColumn; 
  const char *v6; 

  if ( Scr_GetNumParam(scrContext) < 4 )
    Scr_Error(COM_ERR_2566, scrContext, "USAGE: tableLookup( filename, searchColumnNum, searchValue, returnValueColumnNum )\n");
  String = Scr_GetString(scrContext, 0);
  Int = Scr_GetInt(scrContext, 1u);
  v4 = Scr_GetString(scrContext, 2u);
  returnValueColumn = Scr_GetInt(scrContext, 3u);
  v6 = BGScr_TableLookupInternal(scrContext, String, Int, v4, returnValueColumn);
  Scr_AddString(scrContext, v6);
}

/*
==============
BGScr_TableLookupByRow
==============
*/
void BGScr_TableLookupByRow(scrContext_t *scrContext)
{
  const char *String; 
  int Int; 
  int v4; 
  const char *v5; 
  const char *ColumnValueForRow; 
  StringTable *tablePtr; 

  if ( Scr_GetNumParam(scrContext) < 3 )
    Scr_Error(COM_ERR_2568, scrContext, "USAGE: tableLookupByRow( filename, rowNum, returnValueColumnNum )\n");
  String = Scr_GetString(scrContext, 0);
  Int = Scr_GetInt(scrContext, 1u);
  v4 = Scr_GetInt(scrContext, 2u);
  if ( !String || !*String )
    Scr_Error(COM_ERR_6330, scrContext, "Table name for lookup cannot be empty");
  StringTable_GetAsset(String, (const StringTable **)&tablePtr);
  if ( DB_IsXAssetDefault(ASSET_TYPE_STRINGTABLE, String) )
  {
    v5 = j_va("TableLookupByRow: Unable to find the lookup table '%s' in the fastfile", String);
    Scr_Error(COM_ERR_2567, scrContext, v5);
  }
  ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, Int, v4);
  Scr_AddString(scrContext, ColumnValueForRow);
}

/*
==============
BGScr_TableLookupIString
==============
*/
void BGScr_TableLookupIString(scrContext_t *scrContext)
{
  const char *String; 
  int Int; 
  const char *v4; 
  int returnValueColumn; 
  const char *v6; 

  if ( Scr_GetNumParam(scrContext) < 3 )
    Scr_Error(COM_ERR_2569, scrContext, "USAGE: tableLookup( filename, searchColumnNum, searchValue, returnValueColumnNum )\n");
  String = Scr_GetString(scrContext, 0);
  Int = Scr_GetInt(scrContext, 1u);
  v4 = Scr_GetString(scrContext, 2u);
  returnValueColumn = Scr_GetInt(scrContext, 3u);
  v6 = BGScr_TableLookupInternal(scrContext, String, Int, v4, returnValueColumn);
  Scr_AddIString(scrContext, v6);
}

/*
==============
BGScr_TableLookupIStringByRow
==============
*/
void BGScr_TableLookupIStringByRow(scrContext_t *scrContext)
{
  const char *String; 
  int Int; 
  int v4; 
  const char *v5; 
  const char *ColumnValueForRow; 
  StringTable *tablePtr; 

  if ( Scr_GetNumParam(scrContext) < 3 )
    Scr_Error(COM_ERR_2570, scrContext, "USAGE: tableLookupByRow( filename, rowNum, returnValueColumnNum )\n");
  String = Scr_GetString(scrContext, 0);
  Int = Scr_GetInt(scrContext, 1u);
  v4 = Scr_GetInt(scrContext, 2u);
  if ( !String || !*String )
    Scr_Error(COM_ERR_6330, scrContext, "Table name for lookup cannot be empty");
  StringTable_GetAsset(String, (const StringTable **)&tablePtr);
  if ( DB_IsXAssetDefault(ASSET_TYPE_STRINGTABLE, String) )
  {
    v5 = j_va("TableLookupByRow: Unable to find the lookup table '%s' in the fastfile", String);
    Scr_Error(COM_ERR_2567, scrContext, v5);
  }
  ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, Int, v4);
  Scr_AddIString(scrContext, ColumnValueForRow);
}

/*
==============
BGScr_TableLookupRowNum
==============
*/
void BGScr_TableLookupRowNum(scrContext_t *scrContext)
{
  const char *String; 
  int Int; 
  const char *v4; 
  const char *v5; 
  int v6; 
  StringTable *tablePtr; 

  if ( Scr_GetNumParam(scrContext) < 3 )
    Scr_Error(COM_ERR_2571, scrContext, "USAGE: tableLookupRowNum( filename, searchColumnNum, searchValue )\n");
  String = Scr_GetString(scrContext, 0);
  Int = Scr_GetInt(scrContext, 1u);
  v4 = Scr_GetString(scrContext, 2u);
  if ( !String || !*String )
    Scr_ParamError(COM_ERR_6331, scrContext, 0, "Table name for lookup cannot be empty");
  StringTable_GetAsset(String, (const StringTable **)&tablePtr);
  if ( DB_IsXAssetDefault(ASSET_TYPE_STRINGTABLE, String) )
  {
    v5 = j_va("Unable to find the lookup table '%s' in the fastfile", String);
    Scr_Error(COM_ERR_2572, scrContext, v5);
  }
  v6 = StringTable_LookupRowNumForValue(tablePtr, Int, v4);
  Scr_AddInt(scrContext, v6);
}

/*
==============
BGScr_TableExists
==============
*/
void BGScr_TableExists(scrContext_t *scrContext)
{
  const char *String; 

  if ( !Scr_GetNumParam(scrContext) )
  {
    Scr_Error(COM_ERR_2573, scrContext, "TableExists() called with no table name id.");
LABEL_3:
    Scr_AddBool(scrContext, 0);
    return;
  }
  String = Scr_GetString(scrContext, 0);
  if ( !DB_XAssetExists(ASSET_TYPE_STRINGTABLE, String) )
    goto LABEL_3;
  Scr_AddBool(scrContext, 1);
}

/*
==============
BGScr_TableLookupGetNumRows
==============
*/
void BGScr_TableLookupGetNumRows(scrContext_t *scrContext)
{
  const char *String; 
  const char *v3; 
  const char *v4; 
  int RowCount; 
  StringTable *tablePtr; 

  if ( !Scr_GetNumParam(scrContext) )
    Scr_Error(COM_ERR_2574, scrContext, "USAGE: tableLookupGetNumRows( filename )\n");
  String = Scr_GetString(scrContext, 0);
  v3 = String;
  if ( !String || !*String )
    Scr_ParamError(COM_ERR_6332, scrContext, 0, "Table name for lookup cannot be empty");
  StringTable_GetAsset(v3, (const StringTable **)&tablePtr);
  if ( DB_IsXAssetDefault(ASSET_TYPE_STRINGTABLE, v3) )
  {
    v4 = j_va("TableLookupGetNumRows: Unable to find the lookup table '%s' in the fastfile", v3);
    Scr_Error(COM_ERR_2575, scrContext, v4);
  }
  RowCount = StringTable_GetRowCount(tablePtr);
  Scr_AddInt(scrContext, RowCount);
}

/*
==============
BGScr_TableLookupGetNumCols
==============
*/
void BGScr_TableLookupGetNumCols(scrContext_t *scrContext)
{
  const char *String; 
  const char *v3; 
  const char *v4; 
  int ColumnCount; 
  StringTable *tablePtr; 

  if ( !Scr_GetNumParam(scrContext) )
    Scr_Error(COM_ERR_2576, scrContext, "USAGE: tableLookupGetNumCols( filename )\n");
  String = Scr_GetString(scrContext, 0);
  v3 = String;
  if ( !String || !*String )
    Scr_ParamError(COM_ERR_6333, scrContext, 0, "Table name for lookup cannot be empty");
  StringTable_GetAsset(v3, (const StringTable **)&tablePtr);
  if ( DB_IsXAssetDefault(ASSET_TYPE_STRINGTABLE, v3) )
  {
    v4 = j_va("TableLookupGetNumCols: Unable to find the lookup table '%s' in the fastfile", v3);
    Scr_Error(COM_ERR_2577, scrContext, v4);
  }
  ColumnCount = StringTable_GetColumnCount(tablePtr);
  Scr_AddInt(scrContext, ColumnCount);
}

/*
==============
BGScr_TableLookupRowNum_StartFromRow
==============
*/
void BGScr_TableLookupRowNum_StartFromRow(scrContext_t *scrContext)
{
  const char *String; 
  int Int; 
  const char *v4; 
  int v5; 
  const char *v6; 
  int v7; 
  StringTable *tablePtr; 

  if ( Scr_GetNumParam(scrContext) < 3 )
    Scr_Error(COM_ERR_2578, scrContext, "USAGE: TableLookupRowNum_StartFromRow( filename, searchColumnNum, searchValue, index )\n");
  String = Scr_GetString(scrContext, 0);
  Int = Scr_GetInt(scrContext, 1u);
  v4 = Scr_GetString(scrContext, 2u);
  v5 = Scr_GetInt(scrContext, 3u);
  if ( !String || !*String )
    Scr_ParamError(COM_ERR_6334, scrContext, 0, "Table name for lookup cannot be empty");
  StringTable_GetAsset(String, (const StringTable **)&tablePtr);
  if ( DB_IsXAssetDefault(ASSET_TYPE_STRINGTABLE, String) )
  {
    v6 = j_va("TableLookupRowNum_StartFromRow: Unable to find the lookup table '%s' in the fastfile", String);
    Scr_Error(COM_ERR_2579, scrContext, v6);
  }
  v7 = StringTable_LookupRowNumForValue_StartFromIndex(tablePtr, Int, v4, v5 - 1);
  Scr_AddInt(scrContext, v7);
}

/*
==============
BGScr_TableLookupRowNum_ReverseFromRow
==============
*/
void BGScr_TableLookupRowNum_ReverseFromRow(scrContext_t *scrContext)
{
  const char *String; 
  int Int; 
  const char *v4; 
  int v5; 
  const char *v6; 
  int v7; 
  StringTable *tablePtr; 

  if ( Scr_GetNumParam(scrContext) < 3 )
    Scr_Error(COM_ERR_2580, scrContext, "USAGE: TableLookupRowNum_ReverseFromRow( filename, searchColumnNum, searchValue, index )\n");
  String = Scr_GetString(scrContext, 0);
  Int = Scr_GetInt(scrContext, 1u);
  v4 = Scr_GetString(scrContext, 2u);
  v5 = Scr_GetInt(scrContext, 3u);
  if ( !String || !*String )
    Scr_ParamError(COM_ERR_6335, scrContext, 0, "Table name for lookup cannot be empty");
  StringTable_GetAsset(String, (const StringTable **)&tablePtr);
  if ( DB_IsXAssetDefault(ASSET_TYPE_STRINGTABLE, String) )
  {
    v6 = j_va("TableLookupRowNum_ReverseFromRow: Unable to find the lookup table '%s' in the fastfile", String);
    Scr_Error(COM_ERR_2581, scrContext, v6);
  }
  v7 = StringTable_LookupRowNumForValue_ReverseFromIndex(tablePtr, Int, v4, v5 - 1);
  Scr_AddInt(scrContext, v7);
}

/*
==============
BGScr_EasePower
==============
*/
void BGScr_EasePower(scrContext_t *scrContext)
{
  bool v6; 
  bool v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
  }
  if ( !Scr_GetNumParam(scrContext) || Scr_GetType(scrContext, 0) == VAR_UNDEFINED )
    Scr_Error(COM_ERR_2582, scrContext, "EasePower() requires a percentage parameter.\n");
  __asm { vmovss  xmm7, cs:__real@40000000 }
  v6 = 0;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  v8 = 0;
  v9 = Scr_GetNumParam(scrContext) - 1;
  if ( !v9 )
    goto LABEL_14;
  v10 = v9 - 1;
  if ( !v10 )
  {
LABEL_12:
    if ( Scr_GetType(scrContext, 1u) )
    {
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
      __asm { vmovaps xmm7, xmm0 }
    }
LABEL_14:
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
    __asm { vmovaps xmm6, xmm0 }
    goto LABEL_15;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_10:
    if ( Scr_GetType(scrContext, 2u) )
      v6 = Scr_GetInt(scrContext, 2u) != 0;
    goto LABEL_12;
  }
  if ( v11 == 1 )
  {
    if ( Scr_GetType(scrContext, 3u) )
      v8 = Scr_GetInt(scrContext, 3u) != 0;
    goto LABEL_10;
  }
LABEL_15:
  __asm
  {
    vmovaps xmm1, xmm7; power
    vmovaps xmm0, xmm6; pct
  }
  *(double *)&_XMM0 = EasePower(*(float *)&_XMM0, *(float *)&_XMM1, v6, v8);
  __asm
  {
    vmovaps xmm1, xmm0; value
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_EaseExponential
==============
*/
void BGScr_EaseExponential(scrContext_t *scrContext)
{
  bool v6; 
  bool v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
  }
  if ( !Scr_GetNumParam(scrContext) || Scr_GetType(scrContext, 0) == VAR_UNDEFINED )
    Scr_Error(COM_ERR_2583, scrContext, "EaseExponential() requires a percentage parameter.\n");
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  v6 = 0;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  v8 = 0;
  v9 = Scr_GetNumParam(scrContext) - 1;
  if ( !v9 )
    goto LABEL_14;
  v10 = v9 - 1;
  if ( !v10 )
  {
LABEL_12:
    if ( Scr_GetType(scrContext, 1u) )
    {
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
      __asm { vmovaps xmm7, xmm0 }
    }
LABEL_14:
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
    __asm { vmovaps xmm6, xmm0 }
    goto LABEL_15;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_10:
    if ( Scr_GetType(scrContext, 2u) )
      v6 = Scr_GetInt(scrContext, 2u) != 0;
    goto LABEL_12;
  }
  if ( v11 == 1 )
  {
    if ( Scr_GetType(scrContext, 3u) )
      v8 = Scr_GetInt(scrContext, 3u) != 0;
    goto LABEL_10;
  }
LABEL_15:
  __asm
  {
    vmovaps xmm1, xmm7; scale
    vmovaps xmm0, xmm6; pct
  }
  *(double *)&_XMM0 = EaseExponential(*(float *)&_XMM0, *(float *)&_XMM1, v6, v8);
  __asm
  {
    vmovaps xmm1, xmm0; value
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_EaseLogarithmic
==============
*/
void BGScr_EaseLogarithmic(scrContext_t *scrContext)
{
  bool v6; 
  bool v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
  }
  if ( !Scr_GetNumParam(scrContext) || Scr_GetType(scrContext, 0) == VAR_UNDEFINED )
    Scr_Error(COM_ERR_2584, scrContext, "EaseLogarithmic() requires a percentage parameter.\n");
  __asm { vmovss  xmm7, cs:__real@40000000 }
  v6 = 0;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  v8 = 0;
  v9 = Scr_GetNumParam(scrContext) - 1;
  if ( !v9 )
    goto LABEL_14;
  v10 = v9 - 1;
  if ( !v10 )
  {
LABEL_12:
    if ( Scr_GetType(scrContext, 1u) )
    {
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
      __asm { vmovaps xmm7, xmm0 }
    }
LABEL_14:
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
    __asm { vmovaps xmm6, xmm0 }
    goto LABEL_15;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_10:
    if ( Scr_GetType(scrContext, 2u) )
      v6 = Scr_GetInt(scrContext, 2u) != 0;
    goto LABEL_12;
  }
  if ( v11 == 1 )
  {
    if ( Scr_GetType(scrContext, 3u) )
      v8 = Scr_GetInt(scrContext, 3u) != 0;
    goto LABEL_10;
  }
LABEL_15:
  __asm
  {
    vmovaps xmm1, xmm7; logBase
    vmovaps xmm0, xmm6; pct
  }
  *(double *)&_XMM0 = EaseLogarithmic(*(float *)&_XMM0, *(float *)&_XMM1, v6, v8);
  __asm
  {
    vmovaps xmm1, xmm0; value
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_EaseSine
==============
*/
void BGScr_EaseSine(scrContext_t *scrContext)
{
  bool v4; 
  bool v6; 
  unsigned int v7; 
  unsigned int v8; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  if ( !Scr_GetNumParam(scrContext) || Scr_GetType(scrContext, 0) == VAR_UNDEFINED )
    Scr_Error(COM_ERR_2585, scrContext, "EaseSine() requires a percentage parameter.\n");
  v4 = 0;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  v6 = 0;
  v7 = Scr_GetNumParam(scrContext) - 1;
  if ( !v7 )
    goto LABEL_11;
  v8 = v7 - 1;
  if ( !v8 )
  {
LABEL_9:
    if ( Scr_GetType(scrContext, 1u) )
      v4 = Scr_GetInt(scrContext, 1u) != 0;
LABEL_11:
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
    __asm { vmovaps xmm6, xmm0 }
    goto LABEL_12;
  }
  if ( v8 == 1 )
  {
    if ( Scr_GetType(scrContext, 2u) )
      v6 = Scr_GetInt(scrContext, 2u) != 0;
    goto LABEL_9;
  }
LABEL_12:
  __asm { vmovaps xmm0, xmm6; pct }
  *(double *)&_XMM0 = EaseSine(*(float *)&_XMM0, v4, v6);
  __asm
  {
    vmovaps xmm1, xmm0; value
    vmovaps xmm6, [rsp+38h+var_18]
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_EaseBack
==============
*/
void BGScr_EaseBack(scrContext_t *scrContext)
{
  bool v8; 
  bool easeOut; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
  }
  if ( !Scr_GetNumParam(scrContext) || Scr_GetType(scrContext, 0) == VAR_UNDEFINED )
    Scr_Error(COM_ERR_2586, scrContext, "EaseBack() requires a percentage parameter.\n");
  __asm
  {
    vmovss  xmm7, cs:__real@3eb33333
    vmovss  xmm8, cs:__real@40400000
  }
  v8 = 0;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  easeOut = 0;
  v11 = Scr_GetNumParam(scrContext) - 1;
  if ( !v11 )
    goto LABEL_17;
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_15:
    if ( Scr_GetType(scrContext, 1u) )
    {
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
      __asm { vmovaps xmm7, xmm0 }
    }
LABEL_17:
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
    __asm { vmovaps xmm6, xmm0 }
    goto LABEL_18;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
LABEL_13:
    if ( Scr_GetType(scrContext, 2u) )
    {
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
      __asm { vmovaps xmm8, xmm0 }
    }
    goto LABEL_15;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
LABEL_11:
    if ( Scr_GetType(scrContext, 3u) )
      v8 = Scr_GetInt(scrContext, 3u) != 0;
    goto LABEL_13;
  }
  if ( v14 == 1 )
  {
    if ( Scr_GetType(scrContext, 4u) )
      easeOut = Scr_GetInt(scrContext, 4u) != 0;
    goto LABEL_11;
  }
LABEL_18:
  __asm
  {
    vmovaps xmm2, xmm8; power
    vmovaps xmm1, xmm7; overshootScalar
    vmovaps xmm0, xmm6; pct
  }
  *(double *)&_XMM0 = EaseBack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, v8, easeOut);
  __asm
  {
    vmovaps xmm1, xmm0; value
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_EaseElastic
==============
*/
void BGScr_EaseElastic(scrContext_t *scrContext)
{
  bool easeIn; 
  bool easeOut; 
  char v27; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm9
  }
  if ( !Scr_GetNumParam(scrContext) || Scr_GetType(scrContext, 0) == VAR_UNDEFINED )
    Scr_Error(COM_ERR_2587, scrContext, "EaseElastic() requires a percentage parameter.\n");
  __asm
  {
    vmovss  xmm7, cs:__real@40800000
    vmovss  xmm8, cs:__real@3f800000
  }
  easeIn = 0;
  __asm
  {
    vmovaps xmm9, xmm7
    vxorps  xmm6, xmm6, xmm6
  }
  easeOut = 0;
  switch ( Scr_GetNumParam(scrContext) )
  {
    case 1u:
      goto $LN15_5;
    case 2u:
      goto $LN13_4;
    case 3u:
      goto $LN11_3;
    case 4u:
      goto $LN9_0;
    case 5u:
      goto $LN7_0;
    case 6u:
      if ( Scr_GetType(scrContext, 5u) )
        easeOut = Scr_GetInt(scrContext, 5u) != 0;
$LN7_0:
      if ( Scr_GetType(scrContext, 4u) )
        easeIn = Scr_GetInt(scrContext, 4u) != 0;
$LN9_0:
      if ( Scr_GetType(scrContext, 3u) )
      {
        *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
        __asm { vmovaps xmm9, xmm0 }
      }
$LN11_3:
      if ( Scr_GetType(scrContext, 2u) )
      {
        *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
        __asm { vmovaps xmm7, xmm0 }
      }
$LN13_4:
      if ( Scr_GetType(scrContext, 1u) )
      {
        *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
        __asm { vmovaps xmm8, xmm0 }
      }
$LN15_5:
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
      __asm { vmovaps xmm6, xmm0 }
      break;
    default:
      break;
  }
  __asm
  {
    vmovaps xmm3, xmm9; fadeScalar
    vmovaps xmm2, xmm7; frequency
    vmovaps xmm1, xmm8; amplitude
    vmovaps xmm0, xmm6; pct
  }
  *(double *)&_XMM0 = EaseElastic(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, easeIn, easeOut);
  __asm
  {
    vmovaps xmm1, xmm0; value
    vmovaps xmm6, [rsp+78h+var_18]
  }
  _R11 = &v27;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_EaseBounce
==============
*/
void BGScr_EaseBounce(scrContext_t *scrContext)
{
  int Int; 
  bool v8; 
  bool easeOut; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  if ( !Scr_GetNumParam(scrContext) || Scr_GetType(scrContext, 0) == VAR_UNDEFINED )
    Scr_Error(COM_ERR_2588, scrContext, "EaseBounce() requires a percentage parameter.\n");
  __asm { vmovss  xmm7, cs:__real@3e800000 }
  Int = 4;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  v8 = 0;
  easeOut = 0;
  v10 = Scr_GetNumParam(scrContext) - 1;
  if ( !v10 )
    goto LABEL_17;
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_15:
    if ( Scr_GetType(scrContext, 1u) )
      Int = Scr_GetInt(scrContext, 1u);
LABEL_17:
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
    __asm { vmovaps xmm6, xmm0 }
    goto LABEL_18;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_13:
    if ( Scr_GetType(scrContext, 2u) )
    {
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
      __asm { vmovaps xmm7, xmm0 }
    }
    goto LABEL_15;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
LABEL_11:
    if ( Scr_GetType(scrContext, 3u) )
      v8 = Scr_GetInt(scrContext, 3u) != 0;
    goto LABEL_13;
  }
  if ( v13 == 1 )
  {
    if ( Scr_GetType(scrContext, 4u) )
      easeOut = Scr_GetInt(scrContext, 4u) != 0;
    goto LABEL_11;
  }
LABEL_18:
  __asm
  {
    vmovaps xmm2, xmm7; decayScalar
    vmovaps xmm0, xmm6; pct
  }
  *(double *)&_XMM0 = EaseBounce(*(float *)&_XMM0, Int, *(float *)&_XMM2, v8, easeOut);
  __asm
  {
    vmovaps xmm1, xmm0; value
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_sin
==============
*/
void BGScr_sin(scrContext_t *scrContext)
{
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm { vmulss  xmm0, xmm0, cs:__real@3c8efa35; X }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm { vmovaps xmm1, xmm0; value }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_cos
==============
*/
void BGScr_cos(scrContext_t *scrContext)
{
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm { vmulss  xmm0, xmm0, cs:__real@3c8efa35; X }
  *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
  __asm { vmovaps xmm1, xmm0; value }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_tan
==============
*/
void BGScr_tan(scrContext_t *scrContext)
{
  char v6; 
  float c; 
  float s; 

  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm { vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmovss  xmm1, [rsp+28h+c]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm1, xmm0
  }
  if ( v6 )
  {
    Scr_Error(COM_ERR_2538, scrContext, "divide by 0");
    __asm { vmovss  xmm1, [rsp+28h+c] }
  }
  __asm
  {
    vmovss  xmm0, [rsp+28h+s]
    vdivss  xmm1, xmm0, xmm1; value
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_asin
==============
*/
void BGScr_asin(scrContext_t *scrContext)
{
  char v4; 
  char v5; 
  const char *v9; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vcomiss xmm0, cs:__real@bf800000
    vmovaps xmm6, xmm0
  }
  if ( v4 )
    goto LABEL_3;
  __asm { vcomiss xmm0, cs:__real@3f800000 }
  if ( !(v4 | v5) )
  {
LABEL_3:
    __asm
    {
      vcvtss2sd xmm1, xmm6, xmm6
      vmovq   rdx, xmm1
    }
    v9 = j_va("%g out of range", _RDX);
    Scr_Error(COM_ERR_2539, scrContext, v9);
  }
  __asm { vmovaps xmm0, xmm6; X }
  *(float *)&_XMM0 = asinf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@42652ee0; value
    vmovaps xmm6, [rsp+38h+var_18]
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_acos
==============
*/
void BGScr_acos(scrContext_t *scrContext)
{
  char v4; 
  char v5; 
  const char *v9; 

  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vcomiss xmm0, cs:__real@bf800000
    vmovaps xmm6, xmm0
  }
  if ( v4 )
    goto LABEL_3;
  __asm { vcomiss xmm0, cs:__real@3f800000 }
  if ( !(v4 | v5) )
  {
LABEL_3:
    __asm
    {
      vcvtss2sd xmm1, xmm6, xmm6
      vmovq   rdx, xmm1
    }
    v9 = j_va("%g out of range", _RDX);
    Scr_Error(COM_ERR_2540, scrContext, v9);
  }
  __asm { vmovaps xmm0, xmm6; X }
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@42652ee0; value
    vmovaps xmm6, [rsp+38h+var_18]
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_atan
==============
*/
void BGScr_atan(scrContext_t *scrContext)
{
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
  __asm { vmulss  xmm1, xmm0, cs:__real@42652ee0; value }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_CastInt
==============
*/
void BGScr_CastInt(scrContext_t *scrContext)
{
  VariableType Type; 
  const char *TypeName; 
  const char *v5; 
  int Int; 
  const char *String; 
  int v9; 

  Type = Scr_GetType(scrContext, 0);
  switch ( Type )
  {
    case VAR_STRING:
      String = Scr_GetString(scrContext, 0);
      v9 = atoi(String);
      Scr_AddInt(scrContext, v9);
      break;
    case VAR_FLOAT:
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
      __asm { vcvttss2si edx, xmm0; value }
      Scr_AddInt(scrContext, _EDX);
      break;
    case VAR_INTEGER:
      Int = Scr_GetInt(scrContext, 0);
      Scr_AddInt(scrContext, Int);
      break;
    default:
      TypeName = Scr_GetTypeName(scrContext, 0);
      v5 = j_va("cannot cast %s to int", TypeName);
      Scr_ParamError(COM_ERR_2541, scrContext, 0, v5);
      break;
  }
}

/*
==============
BGScr_CastFloat
==============
*/

void __fastcall BGScr_CastFloat(scrContext_t *scrContext, double _XMM1_8)
{
  VariableType Type; 
  const char *TypeName; 
  const char *v6; 
  const char *String; 

  Type = Scr_GetType(scrContext, 0);
  switch ( Type )
  {
    case VAR_STRING:
      String = Scr_GetString(scrContext, 0);
      *(double *)&_XMM0 = atof(String);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0; value }
      Scr_AddFloat(scrContext, *(float *)&_XMM1);
      break;
    case VAR_FLOAT:
      *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
      __asm { vmovaps xmm1, xmm0; value }
      Scr_AddFloat(scrContext, *(float *)&_XMM1);
      break;
    case VAR_INTEGER:
      Scr_GetInt(scrContext, 0);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax; value
      }
      Scr_AddFloat(scrContext, *(float *)&_XMM1);
      break;
    default:
      TypeName = Scr_GetTypeName(scrContext, 0);
      v6 = j_va("cannot cast %s to float", TypeName);
      Scr_ParamError(COM_ERR_2542, scrContext, 0, v6);
      break;
  }
}

/*
==============
BGScr_abs
==============
*/
void BGScr_abs(scrContext_t *scrContext)
{
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm { vandps  xmm1, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; value }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_min
==============
*/
void BGScr_min(scrContext_t *scrContext)
{
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm
  {
    vminss  xmm1, xmm0, xmm6; value
    vmovaps xmm6, [rsp+38h+var_18]
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_max
==============
*/
void BGScr_max(scrContext_t *scrContext)
{
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm
  {
    vmaxss  xmm1, xmm0, xmm6; value
    vmovaps xmm6, [rsp+38h+var_18]
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_floor
==============
*/

void __fastcall BGScr_floor(scrContext_t *scrContext, double _XMM1_8)
{
  Scr_GetFloat(scrContext, 0);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm0, 1; value
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_ceil
==============
*/

void __fastcall BGScr_ceil(scrContext_t *scrContext, double _XMM1_8)
{
  Scr_GetFloat(scrContext, 0);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm1, xmm1, xmm0, 2; value
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_exp
==============
*/
void BGScr_exp(scrContext_t *scrContext)
{
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  *(float *)&_XMM0 = expf_0(*(float *)&_XMM0);
  __asm { vmovaps xmm1, xmm0; value }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_log
==============
*/
void BGScr_log(scrContext_t *scrContext)
{
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  *(float *)&_XMM0 = logf_0(*(float *)&_XMM0);
  __asm { vmovaps xmm1, xmm0; value }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_sqrt
==============
*/
void BGScr_sqrt(scrContext_t *scrContext)
{
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm { vsqrtss xmm1, xmm0, xmm0; value }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_squared
==============
*/
void BGScr_squared(scrContext_t *scrContext)
{
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm { vmulss  xmm1, xmm0, xmm0; value }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_clamp
==============
*/
void BGScr_clamp(scrContext_t *scrContext)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
  }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm { vmovaps xmm7, xmm0 }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm
  {
    vmovaps xmm2, xmm0; max
    vmovaps xmm0, xmm7; val
    vmovaps xmm1, xmm6; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm1, xmm0; value
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_pow
==============
*/
void BGScr_pow(scrContext_t *scrContext)
{
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm
  {
    vmovaps xmm1, xmm0; Y
    vmovaps xmm0, xmm6; X
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm0; value
    vmovaps xmm6, [rsp+38h+var_18]
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_VectorFromLineToPoint
==============
*/
void BGScr_VectorFromLineToPoint(scrContext_t *scrContext)
{
  char v23; 
  vec3_t vectorValue; 
  vec3_t v54; 
  vec3_t v55; 
  float value[4]; 
  char v57; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
  }
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v54);
  Scr_GetVector(scrContext, 2u, &v55);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0D8h+var_A8]
    vmovss  xmm3, dword ptr [rsp+0D8h+vectorValue]
    vmovss  xmm4, dword ptr [rsp+0D8h+vectorValue+4]
    vmovss  xmm7, dword ptr [rsp+0D8h+vectorValue+8]
    vsubss  xmm8, xmm0, xmm3
    vmovss  xmm0, dword ptr [rsp+0D8h+var_A8+4]
    vsubss  xmm9, xmm0, xmm4
    vmovss  xmm0, dword ptr [rsp+0D8h+var_A8+8]
    vsubss  xmm10, xmm0, xmm7
    vmulss  xmm1, xmm9, xmm9
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm10
    vaddss  xmm11, xmm2, xmm1
    vcomiss xmm11, cs:__real@3a83126f
  }
  if ( v23 )
  {
    Scr_ParamError(COM_ERR_2543, scrContext, 0, "The two points on the line must be different from each other");
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+0D8h+vectorValue+4]
      vmovss  xmm3, dword ptr [rsp+0D8h+vectorValue]
      vmovss  xmm7, dword ptr [rsp+0D8h+vectorValue+8]
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0D8h+var_98]
    vmovss  xmm1, dword ptr [rsp+0D8h+var_98+4]
    vsubss  xmm5, xmm0, xmm3
    vmovss  xmm0, dword ptr [rsp+0D8h+var_98+8]
    vsubss  xmm6, xmm1, xmm4
    vsubss  xmm7, xmm0, xmm7
    vmulss  xmm2, xmm5, xmm8
    vmulss  xmm1, xmm6, xmm9
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm10
    vaddss  xmm2, xmm3, xmm0
    vdivss  xmm1, xmm2, xmm11
    vxorps  xmm4, xmm1, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm0, xmm4, xmm8
    vaddss  xmm2, xmm0, xmm5
    vmulss  xmm1, xmm4, xmm9
    vaddss  xmm0, xmm1, xmm6
    vmovss  [rsp+0D8h+value], xmm2
    vmulss  xmm2, xmm4, xmm10
    vaddss  xmm1, xmm2, xmm7
    vmovss  [rsp+0D8h+var_80], xmm1
    vmovss  [rsp+0D8h+var_84], xmm0
  }
  Scr_AddVector(scrContext, value);
  _R11 = &v57;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
BGScr_PointOnSegmentNearestToPoint
==============
*/
void BGScr_PointOnSegmentNearestToPoint(scrContext_t *scrContext)
{
  char v10; 
  char v11; 
  vec3_t *p_vectorValue; 
  vec3_t vectorValue; 
  vec3_t v58; 
  vec3_t v59; 
  float value[4]; 
  char v61; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
  }
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v58);
  Scr_GetVector(scrContext, 2u, &v59);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0E8h+var_B8]
    vmovss  xmm6, dword ptr [rsp+0E8h+vectorValue]
    vmovss  xmm7, dword ptr [rsp+0E8h+vectorValue+4]
    vmovss  xmm8, dword ptr [rsp+0E8h+vectorValue+8]
    vsubss  xmm9, xmm0, xmm6
    vmovss  xmm0, dword ptr [rsp+0E8h+var_B8+4]
    vsubss  xmm10, xmm0, xmm7
    vmovss  xmm0, dword ptr [rsp+0E8h+var_B8+8]
    vsubss  xmm11, xmm0, xmm8
    vmulss  xmm1, xmm10, xmm10
    vmulss  xmm0, xmm9, xmm9
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm11, xmm11
    vaddss  xmm12, xmm2, xmm1
    vcomiss xmm12, cs:__real@3a83126f
  }
  if ( v10 )
  {
    Scr_ParamError(COM_ERR_2544, scrContext, 0, "Line segment must not have zero length");
    __asm
    {
      vmovss  xmm8, dword ptr [rsp+0E8h+vectorValue+8]
      vmovss  xmm7, dword ptr [rsp+0E8h+vectorValue+4]
      vmovss  xmm6, dword ptr [rsp+0E8h+vectorValue]
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0E8h+var_A8+4]
    vmovss  xmm2, dword ptr [rsp+0E8h+var_A8]
    vsubss  xmm1, xmm0, xmm7
    vmulss  xmm3, xmm1, xmm10
    vsubss  xmm0, xmm2, xmm6
    vmovss  xmm2, dword ptr [rsp+0E8h+var_A8+8]
    vmulss  xmm1, xmm0, xmm9
    vsubss  xmm0, xmm2, xmm8
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm1, xmm0, xmm11
    vaddss  xmm3, xmm4, xmm1
    vdivss  xmm5, xmm3, xmm12
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm5, xmm0
  }
  if ( v10 )
  {
    p_vectorValue = &vectorValue;
  }
  else
  {
    __asm { vcomiss xmm5, cs:__real@3f800000 }
    if ( v10 | v11 )
    {
      __asm
      {
        vmulss  xmm0, xmm9, xmm5
        vaddss  xmm1, xmm0, xmm6
        vmulss  xmm2, xmm10, xmm5
        vaddss  xmm0, xmm2, xmm7
        vmovss  [rsp+0E8h+value], xmm1
        vmulss  xmm1, xmm11, xmm5
        vaddss  xmm2, xmm1, xmm8
        vmovss  [rsp+0E8h+var_90], xmm2
        vmovss  [rsp+0E8h+var_94], xmm0
      }
      p_vectorValue = (vec3_t *)value;
    }
    else
    {
      p_vectorValue = &v58;
    }
  }
  Scr_AddVector(scrContext, p_vectorValue->v);
  _R11 = &v61;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
BGScr_Distance
==============
*/
void BGScr_Distance(scrContext_t *scrContext)
{
  vec3_t v14; 
  vec3_t vectorValue; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v14);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+var_38]
    vsubss  xmm3, xmm0, dword ptr [rsp+58h+vectorValue]
    vmovss  xmm1, dword ptr [rsp+58h+var_38+4]
    vsubss  xmm2, xmm1, dword ptr [rsp+58h+vectorValue+4]
    vmovss  xmm0, dword ptr [rsp+58h+var_38+8]
    vsubss  xmm4, xmm0, dword ptr [rsp+58h+vectorValue+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2; value
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_Distance2D
==============
*/
void BGScr_Distance2D(scrContext_t *scrContext)
{
  vec3_t v10; 
  vec3_t vectorValue; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v10);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+var_38]
    vmovss  xmm1, dword ptr [rsp+58h+var_38+4]
    vsubss  xmm2, xmm1, dword ptr [rsp+58h+vectorValue+4]
    vsubss  xmm4, xmm0, dword ptr [rsp+58h+vectorValue]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm3, xmm0
    vsqrtss xmm1, xmm1, xmm1; value
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_Distance2DSquared
==============
*/
void BGScr_Distance2DSquared(scrContext_t *scrContext)
{
  vec3_t v9; 
  vec3_t vectorValue; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v9);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+var_38]
    vmovss  xmm1, dword ptr [rsp+58h+var_38+4]
    vsubss  xmm2, xmm1, dword ptr [rsp+58h+vectorValue+4]
    vsubss  xmm4, xmm0, dword ptr [rsp+58h+vectorValue]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm3, xmm0; value
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_DistanceSquared
==============
*/
void BGScr_DistanceSquared(scrContext_t *scrContext)
{
  vec3_t v13; 
  vec3_t vectorValue; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v13);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+var_38]
    vsubss  xmm3, xmm0, dword ptr [rsp+58h+vectorValue]
    vmovss  xmm1, dword ptr [rsp+58h+var_38+4]
    vsubss  xmm2, xmm1, dword ptr [rsp+58h+vectorValue+4]
    vmovss  xmm0, dword ptr [rsp+58h+var_38+8]
    vsubss  xmm4, xmm0, dword ptr [rsp+58h+vectorValue+8]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm1, xmm3, xmm0; value
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_Length
==============
*/
void BGScr_Length(scrContext_t *scrContext)
{
  vec3_t vectorValue; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+48h+vectorValue]
    vmovss  xmm1, dword ptr [rsp+48h+vectorValue+4]
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm3, xmm0, xmm0
    vmovss  xmm0, dword ptr [rsp+48h+vectorValue+8]
    vmulss  xmm1, xmm0, xmm0
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vsqrtss xmm1, xmm2, xmm2; value
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_Length2D
==============
*/
void BGScr_Length2D(scrContext_t *scrContext)
{
  vec3_t vectorValue; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+48h+vectorValue]
    vmovss  xmm1, dword ptr [rsp+48h+vectorValue+4]
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm3, xmm0, xmm0
    vaddss  xmm0, xmm3, xmm2
    vsqrtss xmm1, xmm0, xmm0; value
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_LengthSquared
==============
*/
void BGScr_LengthSquared(scrContext_t *scrContext)
{
  vec3_t vectorValue; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+48h+vectorValue]
    vmovss  xmm1, dword ptr [rsp+48h+vectorValue+4]
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm3, xmm0, xmm0
    vmovss  xmm0, dword ptr [rsp+48h+vectorValue+8]
    vmulss  xmm1, xmm0, xmm0
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm1, xmm4, xmm1; value
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_Length2DSquared
==============
*/
void BGScr_Length2DSquared(scrContext_t *scrContext)
{
  vec3_t vectorValue; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+48h+vectorValue+4]
    vmovss  xmm0, dword ptr [rsp+48h+vectorValue]
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm1, xmm3, xmm2; value
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_Closer
==============
*/
void BGScr_Closer(scrContext_t *scrContext)
{
  vec3_t vectorValue; 
  vec3_t v28; 
  vec3_t v29; 

  __asm
  {
    vmovaps [rsp+98h+var_18], xmm6
    vmovaps [rsp+98h+var_28], xmm7
    vmovaps [rsp+98h+var_38], xmm8
  }
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v28);
  Scr_GetVector(scrContext, 2u, &v29);
  __asm
  {
    vmovss  xmm2, dword ptr [rsp+98h+vectorValue]
    vsubss  xmm6, xmm2, dword ptr [rsp+98h+var_68]
    vmovss  xmm1, dword ptr [rsp+98h+vectorValue+4]
    vsubss  xmm3, xmm1, dword ptr [rsp+98h+var_68+4]
    vsubss  xmm5, xmm1, dword ptr [rsp+98h+var_58+4]
    vmovss  xmm0, dword ptr [rsp+98h+vectorValue+8]
    vsubss  xmm4, xmm0, dword ptr [rsp+98h+var_68+8]
    vsubss  xmm8, xmm0, dword ptr [rsp+98h+var_58+8]
    vsubss  xmm7, xmm2, dword ptr [rsp+98h+var_58]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm6, xmm2, xmm1
    vmulss  xmm3, xmm5, xmm5
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm4, xmm2, xmm1
    vcomiss xmm4, xmm6
  }
  Scr_AddInt(scrContext, 0);
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, [rsp+98h+var_38]
  }
}

/*
==============
BGScr_VectorDot
==============
*/
void BGScr_VectorDot(scrContext_t *scrContext)
{
  vec3_t v10; 
  vec3_t vectorValue; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v10);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+var_38]
    vmovss  xmm1, dword ptr [rsp+58h+var_38+4]
    vmulss  xmm2, xmm1, dword ptr [rsp+58h+vectorValue+4]
    vmulss  xmm3, xmm0, dword ptr [rsp+58h+vectorValue]
    vmovss  xmm0, dword ptr [rsp+58h+var_38+8]
    vmulss  xmm1, xmm0, dword ptr [rsp+58h+vectorValue+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm1, xmm4, xmm1; value
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_VectorCross
==============
*/
void BGScr_VectorCross(scrContext_t *scrContext)
{
  vec3_t vectorValue; 
  vec3_t v17; 
  float value[4]; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v17);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+78h+var_48+8]
    vmovss  xmm6, dword ptr [rsp+78h+var_48+4]
    vmulss  xmm1, xmm5, dword ptr [rsp+78h+vectorValue+4]
    vmulss  xmm0, xmm6, dword ptr [rsp+78h+vectorValue+8]
    vmovss  xmm4, dword ptr [rsp+78h+var_48]
    vmulss  xmm2, xmm4, dword ptr [rsp+78h+vectorValue+8]
    vsubss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm5, dword ptr [rsp+78h+vectorValue]
    vmovss  [rsp+78h+value], xmm1
    vsubss  xmm1, xmm2, xmm0
    vmulss  xmm2, xmm6, dword ptr [rsp+78h+vectorValue]
    vmulss  xmm0, xmm4, dword ptr [rsp+78h+vectorValue+4]
    vmovss  [rsp+78h+var_34], xmm1
    vsubss  xmm1, xmm2, xmm0
    vmovss  [rsp+78h+var_30], xmm1
  }
  Scr_AddVector(scrContext, value);
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
}

/*
==============
BGScr_VectorNormalize
==============
*/
void BGScr_VectorNormalize(scrContext_t *scrContext)
{
  vec3_t vectorValue; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_2545, scrContext, "wrong number of arguments to vectornormalize!");
  Scr_GetVector(scrContext, 0, &vectorValue);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+58h+vectorValue]
    vmovss  xmm6, dword ptr [rsp+58h+vectorValue+4]
    vmovss  xmm4, dword ptr [rsp+58h+vectorValue+8]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsp+58h+vectorValue], xmm0
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+58h+vectorValue+8], xmm0
    vmovss  dword ptr [rsp+58h+vectorValue+4], xmm1
  }
  Scr_AddVector(scrContext, vectorValue.v);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
BGScr_GenerateAxisAnglesFromForwardVector
==============
*/
void BGScr_GenerateAxisAnglesFromForwardVector(scrContext_t *scrContext)
{
  vec3_t angles; 
  vec3_t vectorValue; 
  vec3_t v4; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> outAxis; 

  if ( Scr_GetNumParam(scrContext) != 2 )
    Scr_Error(COM_ERR_2546, scrContext, "Wrong number of arguments to GenerateAxisFromForwardVector");
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  AnglesToAxis(&angles, &axis);
  GenerateAxisFromForwardVector(&vectorValue, &axis, &outAxis);
  AxisToAngles(&outAxis, &v4);
  Scr_AddVector(scrContext, v4.v);
}

/*
==============
BGScr_GenerateAxisAnglesFromUpVector
==============
*/
void BGScr_GenerateAxisAnglesFromUpVector(scrContext_t *scrContext)
{
  vec3_t angles; 
  vec3_t vectorValue; 
  vec3_t v4; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> outAxis; 

  if ( Scr_GetNumParam(scrContext) != 2 )
    Scr_Error(COM_ERR_2547, scrContext, "Wrong number of arguments to GenerateAxisFromUpVector");
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  AnglesToAxis(&angles, &axis);
  GenerateAxisFromUpVector(&vectorValue, &axis, &outAxis);
  AxisToAngles(&outAxis, &v4);
  Scr_AddVector(scrContext, v4.v);
}

/*
==============
BGScr_VectorToYaw
==============
*/
void BGScr_VectorToYaw(scrContext_t *scrContext)
{
  vec3_t vectorValue; 

  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_2548, scrContext, "wrong number of arguments to vectortoyaw!");
  Scr_GetVector(scrContext, 0, &vectorValue);
  *(double *)&_XMM0 = vectoyaw((const vec2_t *)&vectorValue);
  __asm { vmovaps xmm1, xmm0; value }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_VectorToPitch
==============
*/
void BGScr_VectorToPitch(scrContext_t *scrContext)
{
  vec3_t vectorValue; 

  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_2549, scrContext, "wrong number of arguments to vectortopitch!");
  Scr_GetVector(scrContext, 0, &vectorValue);
  *(double *)&_XMM0 = vectopitch(&vectorValue);
  __asm { vmovaps xmm1, xmm0; value }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_VectorLerp
==============
*/
void BGScr_VectorLerp(scrContext_t *scrContext)
{
  vec3_t vectorValue; 
  vec3_t v19; 
  float value[4]; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  if ( Scr_GetNumParam(scrContext) != 3 )
    Scr_Error(COM_ERR_2550, scrContext, "wrong number of arguments to vectorlerp");
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v19);
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+78h+var_48]
    vsubss  xmm2, xmm1, dword ptr [rsp+78h+vectorValue]
    vmovss  xmm1, dword ptr [rsp+78h+var_48+4]
    vmulss  xmm3, xmm2, xmm0
    vaddss  xmm4, xmm3, dword ptr [rsp+78h+vectorValue]
    vsubss  xmm2, xmm1, dword ptr [rsp+78h+vectorValue+4]
    vmovss  xmm1, dword ptr [rsp+78h+var_48+8]
    vmulss  xmm3, xmm2, xmm0
    vmovaps xmm6, xmm0
    vsubss  xmm0, xmm1, dword ptr [rsp+78h+vectorValue+8]
    vmulss  xmm2, xmm0, xmm6
    vmovss  [rsp+78h+value], xmm4
    vaddss  xmm4, xmm3, dword ptr [rsp+78h+vectorValue+4]
    vaddss  xmm3, xmm2, dword ptr [rsp+78h+vectorValue+8]
    vmovss  [rsp+78h+var_30], xmm3
    vmovss  [rsp+78h+var_34], xmm4
  }
  Scr_AddVector(scrContext, value);
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
}

/*
==============
BGScr_TransformMove
==============
*/
void BGScr_TransformMove(scrContext_t *scrContext)
{
  vec3_t angles; 
  tmat43_t<vec3_t> v3; 
  tmat43_t<vec3_t> v4; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v6; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> in1; 

  Scr_GetVector(scrContext, 0, &axis.m[3]);
  Scr_GetVector(scrContext, 1u, &angles);
  AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
  Scr_GetVector(scrContext, 2u, &v3.m[3]);
  Scr_GetVector(scrContext, 3u, &angles);
  AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&v3);
  Scr_GetVector(scrContext, 4u, &v4.m[3]);
  Scr_GetVector(scrContext, 5u, &angles);
  AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&v4);
  MatrixInverseOrthogonal43(&v3, &out);
  MatrixMultiply43(&v4, &out, &in1);
  MatrixMultiply43(&in1, &axis, &v6);
  Scr_MakeArray(scrContext);
  Scr_AddVector(scrContext, v6.m[3].v);
  Scr_AddArrayStringIndexed(scrContext, scr_const.origin);
  AxisToAngles((const tmat33_t<vec3_t> *)&v6, &angles);
  Scr_AddVector(scrContext, angles.v);
  Scr_AddArrayStringIndexed(scrContext, scr_const.angles);
}

/*
==============
BGScr_RotateVectorInverted
==============
*/
void BGScr_RotateVectorInverted(scrContext_t *scrContext)
{
  vec3_t vectorValue; 
  float value[4]; 
  tmat33_t<vec3_t> out; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 

  __asm { vmovaps [rsp+0C8h+var_18], xmm6 }
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  AnglesToAxis(&angles, &axis);
  MatrixTranspose(&axis, &out);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+0C8h+vectorValue+4]
    vmovss  xmm6, dword ptr [rsp+0C8h+vectorValue+8]
    vmovss  xmm0, dword ptr [rsp+0C8h+out]
    vmulss  xmm2, xmm0, dword ptr [rsp+0C8h+vectorValue]
    vmulss  xmm1, xmm5, dword ptr [rsp+0C8h+out+0Ch]
    vmulss  xmm0, xmm6, dword ptr [rsp+0C8h+out+18h]
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm2, dword ptr [rsp+0C8h+out+4]
    vaddss  xmm1, xmm3, xmm0
    vmulss  xmm3, xmm2, dword ptr [rsp+0C8h+vectorValue]
    vmulss  xmm0, xmm6, dword ptr [rsp+0C8h+out+1Ch]
    vmovss  xmm2, dword ptr [rsp+0C8h+out+8]
    vmovss  [rsp+0C8h+value], xmm1
    vmulss  xmm1, xmm5, dword ptr [rsp+0C8h+out+10h]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm3, xmm2, dword ptr [rsp+0C8h+vectorValue]
    vaddss  xmm1, xmm4, xmm0
    vmulss  xmm0, xmm6, dword ptr [rsp+0C8h+out+20h]
    vmovss  [rsp+0C8h+var_94], xmm1
    vmulss  xmm1, xmm5, dword ptr [rsp+0C8h+out+14h]
    vaddss  xmm4, xmm3, xmm1
    vaddss  xmm1, xmm4, xmm0
    vmovss  [rsp+0C8h+var_90], xmm1
  }
  Scr_AddVector(scrContext, value);
  __asm { vmovaps xmm6, [rsp+0C8h+var_18] }
}

/*
==============
BGScr_CalculateStartOrientation
==============
*/
void BGScr_CalculateStartOrientation(scrContext_t *scrContext)
{
  vec3_t v8; 
  vec3_t vectorValue; 
  vec3_t angles; 
  vec3_t v11; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v13; 
  tmat43_t<vec3_t> out; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  Scr_GetVector(scrContext, 2u, &v8);
  Scr_GetVector(scrContext, 3u, &v11);
  AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+vectorValue]
    vmovss  xmm1, dword ptr [rbp+57h+vectorValue+4]
    vmovss  [rbp+57h+value], xmm0
    vmovss  xmm0, dword ptr [rbp+57h+vectorValue+8]
    vmovss  [rbp+57h+var_74], xmm0
    vmovss  [rbp+57h+var_78], xmm1
  }
  AnglesToAxis(&v11, (tmat33_t<vec3_t> *)&v13);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+100h+var_E0]
    vmovss  xmm1, dword ptr [rsp+100h+var_E0+4]
    vmovss  [rbp+57h+var_4C], xmm0
    vmovss  xmm0, dword ptr [rsp+100h+var_E0+8]
    vmovss  [rbp+57h+var_44], xmm0
    vmovss  [rbp+57h+var_48], xmm1
  }
  MatrixInverseOrthogonal43(&axis, &out);
  MatrixMultiply43(&out, &v13, &axis);
  AxisToAngles((const tmat33_t<vec3_t> *)&axis, &v8);
  Scr_MakeArray(scrContext);
  Scr_AddVector(scrContext, axis.m[3].v);
  Scr_AddArray(scrContext);
  Scr_AddVector(scrContext, v8.v);
  Scr_AddArray(scrContext);
}

/*
==============
BGScr_RotateVector
==============
*/
void BGScr_RotateVector(scrContext_t *scrContext)
{
  vec3_t vectorValue; 
  float value[4]; 
  tmat33_t<vec3_t> axis; 
  vec3_t angles; 

  __asm { vmovaps [rsp+98h+var_18], xmm6 }
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  AnglesToAxis(&angles, &axis);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+98h+vectorValue+4]
    vmovss  xmm6, dword ptr [rsp+98h+vectorValue+8]
    vmovss  xmm0, dword ptr [rsp+98h+axis]
    vmulss  xmm2, xmm0, dword ptr [rsp+98h+vectorValue]
    vmulss  xmm1, xmm5, dword ptr [rsp+98h+axis+0Ch]
    vmulss  xmm0, xmm6, dword ptr [rsp+98h+axis+18h]
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm2, dword ptr [rsp+98h+axis+4]
    vaddss  xmm1, xmm3, xmm0
    vmulss  xmm3, xmm2, dword ptr [rsp+98h+vectorValue]
    vmulss  xmm0, xmm6, dword ptr [rsp+98h+axis+1Ch]
    vmovss  xmm2, dword ptr [rsp+98h+axis+8]
    vmovss  [rsp+98h+value], xmm1
    vmulss  xmm1, xmm5, dword ptr [rsp+98h+axis+10h]
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm3, xmm2, dword ptr [rsp+98h+vectorValue]
    vaddss  xmm1, xmm4, xmm0
    vmulss  xmm0, xmm6, dword ptr [rsp+98h+axis+20h]
    vmovss  [rsp+98h+var_64], xmm1
    vmulss  xmm1, xmm5, dword ptr [rsp+98h+axis+14h]
    vaddss  xmm4, xmm3, xmm1
    vaddss  xmm1, xmm4, xmm0
    vmovss  [rsp+98h+var_60], xmm1
  }
  Scr_AddVector(scrContext, value);
  __asm { vmovaps xmm6, [rsp+98h+var_18] }
}

/*
==============
BGScr_RotatePointAroundVector
==============
*/
void BGScr_RotatePointAroundVector(scrContext_t *scrContext)
{
  char v3; 
  char v4; 
  vec3_t vectorValue; 
  vec3_t point; 
  vec3_t dst; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &point);
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+78h+vectorValue]
    vmovss  xmm5, dword ptr [rsp+78h+vectorValue+4]
    vmovss  xmm6, dword ptr [rsp+78h+vectorValue+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vcomiss xmm3, cs:__real@3a83126f
  }
  if ( v3 )
  {
    Scr_Error(COM_ERR_2551, scrContext, "Zero length vector was passed as first parameter!");
  }
  else
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000
      vsubss  xmm0, xmm3, xmm2
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@358637be
    }
    if ( !(v3 | v4) )
    {
      __asm
      {
        vsqrtss xmm1, xmm3, xmm3
        vcmpless xmm0, xmm1, cs:__real@80000000
        vblendvps xmm0, xmm1, xmm2, xmm0
        vdivss  xmm2, xmm2, xmm0
        vmulss  xmm0, xmm4, xmm2
        vmovss  dword ptr [rsp+78h+vectorValue], xmm0
        vmulss  xmm0, xmm6, xmm2
        vmulss  xmm1, xmm5, xmm2
        vmovss  dword ptr [rsp+78h+vectorValue+8], xmm0
        vmovss  dword ptr [rsp+78h+vectorValue+4], xmm1
      }
    }
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
    __asm { vmovaps xmm3, xmm0; degrees }
    RotatePointAroundVector(&dst, &vectorValue, &point, *(float *)&_XMM3);
    Scr_AddVector(scrContext, dst.v);
  }
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
}

/*
==============
BGScr_AveragePoint
==============
*/

void __fastcall BGScr_AveragePoint(scrContext_t *scrContext, __int64 a2, __int64 a3, double _XMM3_8)
{
  unsigned int resultCnt; 
  vec3_t resultSum; 

  SummarizeArrayPoints(scrContext, &resultCnt, &resultSum);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+48h+resultSum]
    vmovss  xmm2, dword ptr [rsp+48h+resultSum+4]
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, rax
    vdivss  xmm1, xmm0, xmm3
    vdivss  xmm0, xmm2, xmm3
    vmovss  dword ptr [rsp+48h+resultSum], xmm1
    vmovss  xmm1, dword ptr [rsp+48h+resultSum+8]
    vdivss  xmm2, xmm1, xmm3
    vmovss  dword ptr [rsp+48h+resultSum+8], xmm2
    vmovss  dword ptr [rsp+48h+resultSum+4], xmm0
  }
  Scr_AddVector(scrContext, resultSum.v);
}

/*
==============
BGScr_AverageNormal
==============
*/
void BGScr_AverageNormal(scrContext_t *scrContext)
{
  unsigned int resultCnt; 
  vec3_t resultSum; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  SummarizeArrayPoints(scrContext, &resultCnt, &resultSum);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+58h+resultSum]
    vmovss  xmm6, dword ptr [rsp+58h+resultSum+4]
    vmovss  xmm4, dword ptr [rsp+58h+resultSum+8]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsp+58h+resultSum], xmm0
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+58h+resultSum+8], xmm0
    vmovss  dword ptr [rsp+58h+resultSum+4], xmm1
  }
  Scr_AddVector(scrContext, resultSum.v);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
BGScr_ProjectileIntercept
==============
*/
void BGScr_ProjectileIntercept(scrContext_t *scrContext)
{
  vec3_t targetVel; 
  vec3_t targetPos; 
  vec3_t startVel; 
  vec3_t vectorValue; 
  vec3_t intercept; 

  __asm { vmovaps [rsp+0A8h+var_18], xmm6 }
  if ( Scr_GetNumParam(scrContext) != 5 )
    Scr_Error(COM_ERR_2554, scrContext, "Incorrect number of parameters for ProjectileIntercept.");
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &startVel);
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm { vmovaps xmm6, xmm0 }
  Scr_GetVector(scrContext, 3u, &targetPos);
  Scr_GetVector(scrContext, 4u, &targetVel);
  __asm { vmovaps xmm2, xmm6; projSpeed }
  if ( ProjectileIntercept(&vectorValue, &startVel, *(const float *)&_XMM2, &targetPos, &targetVel, &intercept) )
    Scr_AddVector(scrContext, intercept.v);
  __asm { vmovaps xmm6, [rsp+0A8h+var_18] }
}

/*
==============
BGScr_AngleClamp360
==============
*/
void BGScr_AngleClamp360(scrContext_t *scrContext)
{
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm { vmovaps xmm1, xmm0; value }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_AngleClamp180
==============
*/

void __fastcall BGScr_AngleClamp180(scrContext_t *scrContext, double _XMM1_8)
{
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vmulss  xmm5, xmm0, cs:__real@3b360b61
    vaddss  xmm2, xmm5, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm3, 1
    vsubss  xmm1, xmm5, xmm4
    vmulss  xmm1, xmm1, cs:__real@43b40000; value
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_AnglesToAxis
==============
*/
void BGScr_AnglesToAxis(scrContext_t *scrContext)
{
  tmat33_t<vec3_t> axis; 
  vec3_t vectorValue; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  AnglesToAxis(&vectorValue, &axis);
  Scr_MakeArray(scrContext);
  Scr_AddVector(scrContext, (const float *)&axis);
  Scr_AddArrayStringIndexed(scrContext, scr_const.forward);
  __asm
  {
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, dword ptr [rsp+68h+axis+0Ch]
    vmovss  xmm2, dword ptr [rsp+68h+axis+10h]
    vxorps  xmm1, xmm0, xmm3
    vxorps  xmm0, xmm2, xmm3
    vmovss  dword ptr [rsp+68h+axis+0Ch], xmm1
    vmovss  xmm1, dword ptr [rsp+68h+axis+14h]
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rsp+68h+axis+14h], xmm2
    vmovss  dword ptr [rsp+68h+axis+10h], xmm0
  }
  Scr_AddVector(scrContext, axis.m[1].v);
  Scr_AddArrayStringIndexed(scrContext, scr_const.right);
  Scr_AddVector(scrContext, axis.m[2].v);
  Scr_AddArrayStringIndexed(scrContext, scr_const.up);
}

/*
==============
BGScr_AnglesToUp
==============
*/
void BGScr_AnglesToUp(scrContext_t *scrContext)
{
  vec3_t vectorValue; 
  vec3_t up; 

  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_2555, scrContext, "wrong number of arguments to anglestoup!");
  Scr_GetVector(scrContext, 0, &vectorValue);
  AngleVectors(&vectorValue, NULL, NULL, &up);
  Scr_AddVector(scrContext, up.v);
}

/*
==============
BGScr_AnglesToRight
==============
*/
void BGScr_AnglesToRight(scrContext_t *scrContext)
{
  vec3_t vectorValue; 
  vec3_t right; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  AngleVectors(&vectorValue, NULL, &right, NULL);
  Scr_AddVector(scrContext, right.v);
}

/*
==============
BGScr_AnglesToLeft
==============
*/
void BGScr_AnglesToLeft(scrContext_t *scrContext)
{
  vec3_t right; 
  float value[4]; 
  vec3_t vectorValue; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  AngleVectors(&vectorValue, NULL, &right, NULL);
  __asm
  {
    vmovss  xmm3, cs:__real@bf800000
    vmulss  xmm1, xmm3, dword ptr [rsp+68h+right]
    vmulss  xmm0, xmm3, dword ptr [rsp+68h+right+4]
    vmulss  xmm2, xmm3, dword ptr [rsp+68h+right+8]
    vmovss  [rsp+68h+value], xmm1
    vmovss  [rsp+68h+var_34], xmm0
    vmovss  [rsp+68h+var_30], xmm2
  }
  Scr_AddVector(scrContext, value);
}

/*
==============
BGScr_AnglesToForward
==============
*/
void BGScr_AnglesToForward(scrContext_t *scrContext)
{
  vec3_t vectorValue; 
  vec3_t forward; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  AngleVectors(&vectorValue, &forward, NULL, NULL);
  Scr_AddVector(scrContext, forward.v);
}

/*
==============
BGScr_AnglesDelta
==============
*/
void BGScr_AnglesDelta(scrContext_t *scrContext)
{
  char v14; 
  char v15; 
  vec4_t v17; 
  vec4_t quat; 
  vec3_t vectorValue; 
  vec3_t angles; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  AnglesToQuat(&vectorValue, &quat);
  AnglesToQuat(&angles, &v17);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+78h+var_58]
    vmulss  xmm3, xmm0, dword ptr [rsp+78h+quat]
    vmovss  xmm1, dword ptr [rsp+78h+var_58+4]
    vmulss  xmm2, xmm1, dword ptr [rsp+78h+quat+4]
    vmovss  xmm0, dword ptr [rsp+78h+var_58+8]
    vmulss  xmm1, xmm0, dword ptr [rsp+78h+quat+8]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rsp+78h+var_58+0Ch]
    vmulss  xmm0, xmm2, dword ptr [rsp+78h+quat+0Ch]
    vaddss  xmm3, xmm4, xmm1
    vaddss  xmm0, xmm3, xmm0
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; X
    vcomiss xmm0, cs:__real@3f800000
  }
  if ( v14 | v15 )
  {
    *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
    __asm { vmulss  xmm1, xmm0, cs:__real@42e52ee0; value }
  }
  else
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_CombineAngles
==============
*/
void BGScr_CombineAngles(scrContext_t *scrContext)
{
  vec3_t vectorValue; 
  vec3_t angles; 
  vec3_t v4; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> out; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  AnglesToAxis(&vectorValue, &axis);
  AnglesToAxis(&angles, &in1);
  MatrixMultiply(&in1, &axis, &out);
  AxisToAngles(&out, &v4);
  Scr_AddVector(scrContext, v4.v);
}

/*
==============
BGScr_AngleLerpQuat
==============
*/
void BGScr_AngleLerpQuat(scrContext_t *scrContext)
{
  vec3_t vectorValue; 
  vec3_t angles; 
  vec3_t v9; 
  vec4_t to; 
  vec4_t quat; 
  vec4_t result; 
  tmat33_t<vec3_t> axis; 

  __asm { vmovaps [rsp+0C8h+var_18], xmm6 }
  if ( Scr_GetNumParam(scrContext) != 3 )
    Scr_Error(COM_ERR_2556, scrContext, "Wrong number of arguments to AngleLerpQuat( <startAngles>, <end>, <maxAngleDelta> )");
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm { vmovaps xmm6, xmm0 }
  AnglesToQuat(&vectorValue, &quat);
  AnglesToQuat(&angles, &to);
  __asm { vmulss  xmm2, xmm6, cs:__real@3c8efa35; limit }
  QuatSlerpLimited(&quat, &to, *(float *)&_XMM2, &result);
  QuatToAxis(&result, &axis);
  AxisToAngles(&axis, &v9);
  Scr_AddVector(scrContext, v9.v);
  __asm { vmovaps xmm6, [rsp+0C8h+var_18] }
}

/*
==============
BGScr_AngleLerpQuatFrac
==============
*/
void BGScr_AngleLerpQuatFrac(scrContext_t *scrContext)
{
  vec3_t vectorValue; 
  vec3_t angles; 
  vec3_t v9; 
  vec4_t to; 
  vec4_t quat; 
  vec4_t result; 
  tmat33_t<vec3_t> axis; 

  __asm { vmovaps [rsp+0C8h+var_18], xmm6 }
  if ( Scr_GetNumParam(scrContext) != 3 )
    Scr_Error(COM_ERR_2557, scrContext, "Wrong number of arguments to AngleLerpQuatFrac( <startAngles>, <end>, <fraction> )");
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm { vmovaps xmm6, xmm0 }
  AnglesToQuat(&vectorValue, &quat);
  AnglesToQuat(&angles, &to);
  __asm { vmovaps xmm2, xmm6; frac }
  QuatSlerp(&quat, &to, *(float *)&_XMM2, &result);
  QuatToAxis(&result, &axis);
  AxisToAngles(&axis, &v9);
  Scr_AddVector(scrContext, v9.v);
  __asm { vmovaps xmm6, [rsp+0C8h+var_18] }
}

/*
==============
BGScr_InvertAngles
==============
*/
void BGScr_InvertAngles(scrContext_t *scrContext)
{
  vec3_t vectorValue; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  AnglesToAxis(&vectorValue, &axis);
  MatrixTranspose(&axis, &out);
  AxisToAngles(&out, &vectorValue);
  Scr_AddVector(scrContext, vectorValue.v);
}

/*
==============
BGScr_AxisToAngles
==============
*/
void BGScr_AxisToAngles(scrContext_t *scrContext)
{
  tmat33_t<vec3_t> vectorValue; 
  vec3_t angles; 

  if ( Scr_GetNumParam(scrContext) != 3 )
    Scr_Error(COM_ERR_2558, scrContext, "wrong number of arguments to axistoangles");
  Scr_GetVector(scrContext, 0, vectorValue.m);
  Scr_GetVector(scrContext, 1u, &vectorValue.m[1]);
  Scr_GetVector(scrContext, 2u, &vectorValue.m[2]);
  __asm
  {
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, dword ptr [rsp+68h+var_3C]
    vmovss  xmm2, dword ptr [rsp+68h+var_3C+4]
    vxorps  xmm1, xmm0, xmm3
    vxorps  xmm0, xmm2, xmm3
    vmovss  dword ptr [rsp+68h+var_3C], xmm1
    vmovss  xmm1, dword ptr [rsp+68h+var_3C+8]
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rsp+68h+var_3C+8], xmm2
    vmovss  dword ptr [rsp+68h+var_3C+4], xmm0
  }
  AxisToAngles(&vectorValue, &angles);
  Scr_AddVector(scrContext, angles.v);
}

/*
==============
BGScr_VectorToAngles
==============
*/
void BGScr_VectorToAngles(scrContext_t *scrContext)
{
  vec3_t vectorValue; 
  vec3_t angles; 

  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_2559, scrContext, "wrong number of arguments to vectortoangle!");
  Scr_GetVector(scrContext, 0, &vectorValue);
  vectoangles(&vectorValue, &angles);
  Scr_AddVector(scrContext, angles.v);
}

/*
==============
BGScr_IsSubStr
==============
*/
void BGScr_IsSubStr(scrContext_t *scrContext)
{
  const char *String; 
  const char *v3; 
  char *v4; 

  String = Scr_GetString(scrContext, 0);
  v3 = Scr_GetString(scrContext, 1u);
  v4 = strstr_0(String, v3);
  Scr_AddBool(scrContext, v4 != NULL);
}

/*
==============
BGScr_IsEndStr
==============
*/
void BGScr_IsEndStr(scrContext_t *scrContext)
{
  int v2; 
  const char *String; 
  const char *v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  const char *v7; 
  signed __int64 v8; 
  int v9; 
  int v10; 

  v2 = 1;
  String = Scr_GetString(scrContext, 0);
  v4 = Scr_GetString(scrContext, 1u);
  v5 = -1i64;
  v6 = -1i64;
  do
    ++v6;
  while ( String[v6] );
  do
    ++v5;
  while ( v4[v5] );
  if ( v5 > v6 )
    goto LABEL_9;
  v7 = &String[v6 - v5];
  v8 = v4 - v7;
  do
  {
    v9 = (unsigned __int8)v7[v8];
    v10 = *(unsigned __int8 *)v7 - v9;
    if ( v10 )
      break;
    ++v7;
  }
  while ( v9 );
  if ( v10 )
LABEL_9:
    v2 = 0;
  Scr_AddBool(scrContext, v2);
}

/*
==============
BGScr_IsStartStr
==============
*/
void BGScr_IsStartStr(scrContext_t *scrContext)
{
  int v2; 
  const char *String; 
  const char *v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 

  v2 = 1;
  String = Scr_GetString(scrContext, 0);
  v4 = Scr_GetString(scrContext, 1u);
  v5 = -1i64;
  v6 = -1i64;
  do
    ++v6;
  while ( v4[v6] );
  if ( !v6 )
    goto LABEL_7;
  do
    ++v5;
  while ( String[v5] );
  if ( v6 > v5 || I_strncmp(String, v4, v6) )
LABEL_7:
    v2 = 0;
  Scr_AddBool(scrContext, v2);
}

/*
==============
BGScr_GetSubStr
==============
*/
void BGScr_GetSubStr(scrContext_t *scrContext)
{
  const char *String; 
  __int64 Int; 
  int v4; 
  int v5; 
  signed __int64 v6; 
  __int64 v7; 
  const char *v8; 
  char *v9; 
  const char *v10; 
  char value[1024]; 

  String = Scr_GetString(scrContext, 0);
  Int = Scr_GetInt(scrContext, 1u);
  if ( Scr_GetNumParam(scrContext) < 3 )
    v4 = 0x7FFFFFFF;
  else
    v4 = Scr_GetInt(scrContext, 2u);
  v5 = 0;
  v6 = v4;
  v7 = Int;
  if ( Int < v4 )
  {
    v8 = &String[Int];
    v9 = (char *)(&value[-Int] - String);
    v10 = &String[Int];
    do
    {
      if ( v10 - v8 >= 1024 )
        Scr_Error(COM_ERR_2560, scrContext, "string too long");
      if ( !*v10 )
        break;
      v10[(_QWORD)v9] = *v10;
      ++v5;
      ++v10;
    }
    while ( v10 - String < v6 );
  }
  if ( (unsigned __int64)v5 >= 0x400 )
  {
    j___report_rangecheckfailure(v7);
    JUMPOUT(0x1402FA7A2i64);
  }
  value[v5] = 0;
  Scr_AddString(scrContext, value);
}

/*
==============
BGScr_ToLower
==============
*/
void BGScr_ToLower(scrContext_t *scrContext)
{
  scr_string_t ConstString; 
  int v3; 
  const char *v4; 
  __int64 v5; 
  char v6; 
  char v7; 
  char value[1024]; 

  ConstString = Scr_GetConstString(scrContext, 0);
  v3 = 0;
  v4 = SL_ConvertToString(ConstString);
  v5 = 0i64;
  while ( 1 )
  {
    v6 = *v4;
    v7 = tolower(*v4);
    value[v5] = v7;
    v3 |= v7 != v6;
    if ( !v7 )
      break;
    ++v5;
    ++v4;
    if ( v5 >= 1024 )
    {
      Scr_Error(COM_ERR_2561, scrContext, "string too long");
      return;
    }
  }
  if ( v3 )
  {
    Scr_AddString(scrContext, value);
  }
  else
  {
    SL_AddRefToString(ConstString);
    Scr_AddConstString(scrContext, ConstString);
    SL_RemoveRefToString(ConstString);
  }
}

/*
==============
BGScr_StrTok
==============
*/
void BGScr_StrTok(scrContext_t *scrContext)
{
  scr_string_t ConstString; 
  scr_string_t v3; 
  const char *v4; 
  const char *v5; 
  unsigned __int64 v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  char value[1024]; 

  ConstString = Scr_GetConstString(scrContext, 0);
  v3 = Scr_GetConstString(scrContext, 1u);
  v4 = SL_ConvertToString(ConstString);
  v5 = SL_ConvertToString(v3);
  SL_AddRefToString(ConstString);
  SL_AddRefToString(v3);
  v6 = -1i64;
  do
    ++v6;
  while ( v5[v6] );
  if ( (v6 > 0x7FFFFFFFFFFFFFFFi64 || v6 + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v6, "unsigned", v6) )
    __debugbreak();
  v7 = 0;
  Scr_MakeArray(scrContext);
  v8 = *(unsigned __int8 *)v4;
  v9 = (int)v6;
  if ( (_BYTE)v8 )
  {
    v10 = 0i64;
    do
    {
      v11 = 0i64;
      if ( v9 <= 0 )
      {
LABEL_12:
        value[v10] = v8;
        ++v7;
        if ( (__int64)++v10 >= 1024 )
        {
          SL_RemoveRefToString(ConstString);
          SL_RemoveRefToString(v3);
          Scr_Error(COM_ERR_2562, scrContext, "string too long");
        }
      }
      else
      {
        while ( (_BYTE)v8 != v5[v11] )
        {
          if ( ++v11 >= v9 )
            goto LABEL_12;
        }
        if ( v10 )
        {
          if ( v10 >= 0x400 )
            goto LABEL_22;
          value[v10] = 0;
          Scr_AddString(scrContext, value);
          Scr_AddArray(scrContext);
          v7 = 0;
          v10 = 0i64;
        }
      }
      v8 = *(unsigned __int8 *)++v4;
    }
    while ( (_BYTE)v8 );
    if ( v7 )
    {
      if ( (unsigned __int64)v7 >= 0x400 )
      {
LABEL_22:
        j___report_rangecheckfailure(v8);
        JUMPOUT(0x1402FAB3Fi64);
      }
      value[v7] = 0;
      Scr_AddString(scrContext, value);
      Scr_AddArray(scrContext);
    }
  }
  SL_RemoveRefToString(ConstString);
  SL_RemoveRefToString(v3);
}

/*
==============
BGScr_Main_GetArrayObject
==============
*/
unsigned int BGScr_Main_GetArrayObject(scrContext_t *scrContext, const unsigned int index)
{
  const char *TypeName; 
  const char *v5; 

  if ( Scr_GetPointerType(scrContext, index) != VAR_ARRAY )
  {
    TypeName = Scr_GetTypeName(scrContext, index);
    v5 = j_va("Parameter (%s) must be an array", TypeName);
    Scr_ParamError(COM_ERR_2536, scrContext, index, v5);
  }
  return Scr_GetObject(scrContext, index);
}

/*
==============
BGScr_TableLookupInternal
==============
*/
const char *BGScr_TableLookupInternal(scrContext_t *scrContext, const char *tableName, const int comparisonColumn, const char *stringValue, const int returnValueColumn)
{
  const char *v9; 
  StringTable *tablePtr; 

  if ( !tableName || !*tableName )
    Scr_Error(COM_ERR_6336, scrContext, "Table name for lookup cannot be empty");
  StringTable_GetAsset(tableName, (const StringTable **)&tablePtr);
  if ( DB_IsXAssetDefault(ASSET_TYPE_STRINGTABLE, tableName) )
  {
    v9 = j_va("Unable to find the lookup table '%s' in the fastfile", tableName);
    Scr_Error(COM_ERR_2537, scrContext, v9);
  }
  return StringTable_Lookup(tablePtr, comparisonColumn, stringValue, returnValueColumn);
}

/*
==============
SummarizeArrayPoints
==============
*/
void SummarizeArrayPoints(scrContext_t *scrContext, unsigned int *resultCnt, vec3_t *resultSum)
{
  const char *TypeName; 
  const char *v7; 
  unsigned int Object; 
  unsigned int ArraySize; 
  unsigned int v10; 
  unsigned int ArrayVariable; 

  _RDI = resultSum;
  if ( !resultCnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_scr_main.cpp", 1158, ASSERT_TYPE_ASSERT, "(resultCnt)", (const char *)&queryFormat, "resultCnt") )
    __debugbreak();
  if ( Scr_GetPointerType(scrContext, 0) != VAR_ARRAY )
  {
    TypeName = Scr_GetTypeName(scrContext, 0);
    v7 = j_va("Parameter (%s) must be an array", TypeName);
    Scr_ParamError(COM_ERR_2536, scrContext, 0, v7);
  }
  Object = Scr_GetObject(scrContext, 0);
  ArraySize = GetArraySize(scrContext, Object);
  if ( !ArraySize )
    Scr_Error(COM_ERR_2552, scrContext, "An empty array is not valid.");
  v10 = 0;
  *(_QWORD *)_RDI->v = 0i64;
  _RDI->v[2] = 0.0;
  while ( v10 < ArraySize )
  {
    ArrayVariable = GetArrayVariable(scrContext, Object, v10);
    if ( GetValueType(scrContext, ArrayVariable) != VAR_VECTOR )
      Scr_Error(COM_ERR_2553, scrContext, "All elements need to be 3d points.");
    ++v10;
    _RCX = GetVariableValueAddress(scrContext, ArrayVariable)->scriptCodePosValue;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx]
      vaddss  xmm1, xmm0, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm2, dword ptr [rcx+4]
      vaddss  xmm0, xmm2, dword ptr [rdi+4]
      vmovss  dword ptr [rdi+4], xmm0
      vmovss  xmm1, dword ptr [rcx+8]
      vaddss  xmm2, xmm1, dword ptr [rdi+8]
      vmovss  dword ptr [rdi+8], xmm2
    }
  }
  *resultCnt = ArraySize;
}

