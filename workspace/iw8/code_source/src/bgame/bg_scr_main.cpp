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
  float v2; 
  bool v3; 
  float v4; 
  bool v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  double Float; 
  double v10; 
  double v11; 

  if ( !Scr_GetNumParam(scrContext) || Scr_GetType(scrContext, 0) == VAR_UNDEFINED )
    Scr_Error(COM_ERR_2582, scrContext, "EasePower() requires a percentage parameter.\n");
  v2 = FLOAT_2_0;
  v3 = 0;
  v4 = 0.0;
  v5 = 0;
  v6 = Scr_GetNumParam(scrContext) - 1;
  if ( !v6 )
    goto LABEL_14;
  v7 = v6 - 1;
  if ( !v7 )
  {
LABEL_12:
    if ( Scr_GetType(scrContext, 1u) )
    {
      Float = Scr_GetFloat(scrContext, 1u);
      v2 = *(float *)&Float;
    }
LABEL_14:
    v10 = Scr_GetFloat(scrContext, 0);
    v4 = *(float *)&v10;
    goto LABEL_15;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
LABEL_10:
    if ( Scr_GetType(scrContext, 2u) )
      v3 = Scr_GetInt(scrContext, 2u) != 0;
    goto LABEL_12;
  }
  if ( v8 == 1 )
  {
    if ( Scr_GetType(scrContext, 3u) )
      v5 = Scr_GetInt(scrContext, 3u) != 0;
    goto LABEL_10;
  }
LABEL_15:
  v11 = EasePower(v4, v2, v3, v5);
  Scr_AddFloat(scrContext, *(float *)&v11);
}

/*
==============
BGScr_EaseExponential
==============
*/
void BGScr_EaseExponential(scrContext_t *scrContext)
{
  float v2; 
  bool v3; 
  float v4; 
  bool v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  double Float; 
  double v10; 
  double v11; 

  if ( !Scr_GetNumParam(scrContext) || Scr_GetType(scrContext, 0) == VAR_UNDEFINED )
    Scr_Error(COM_ERR_2583, scrContext, "EaseExponential() requires a percentage parameter.\n");
  v2 = FLOAT_1_0;
  v3 = 0;
  v4 = 0.0;
  v5 = 0;
  v6 = Scr_GetNumParam(scrContext) - 1;
  if ( !v6 )
    goto LABEL_14;
  v7 = v6 - 1;
  if ( !v7 )
  {
LABEL_12:
    if ( Scr_GetType(scrContext, 1u) )
    {
      Float = Scr_GetFloat(scrContext, 1u);
      v2 = *(float *)&Float;
    }
LABEL_14:
    v10 = Scr_GetFloat(scrContext, 0);
    v4 = *(float *)&v10;
    goto LABEL_15;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
LABEL_10:
    if ( Scr_GetType(scrContext, 2u) )
      v3 = Scr_GetInt(scrContext, 2u) != 0;
    goto LABEL_12;
  }
  if ( v8 == 1 )
  {
    if ( Scr_GetType(scrContext, 3u) )
      v5 = Scr_GetInt(scrContext, 3u) != 0;
    goto LABEL_10;
  }
LABEL_15:
  v11 = EaseExponential(v4, v2, v3, v5);
  Scr_AddFloat(scrContext, *(float *)&v11);
}

/*
==============
BGScr_EaseLogarithmic
==============
*/
void BGScr_EaseLogarithmic(scrContext_t *scrContext)
{
  float v2; 
  bool v3; 
  float v4; 
  bool v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  double Float; 
  double v10; 
  double v11; 

  if ( !Scr_GetNumParam(scrContext) || Scr_GetType(scrContext, 0) == VAR_UNDEFINED )
    Scr_Error(COM_ERR_2584, scrContext, "EaseLogarithmic() requires a percentage parameter.\n");
  v2 = FLOAT_2_0;
  v3 = 0;
  v4 = 0.0;
  v5 = 0;
  v6 = Scr_GetNumParam(scrContext) - 1;
  if ( !v6 )
    goto LABEL_14;
  v7 = v6 - 1;
  if ( !v7 )
  {
LABEL_12:
    if ( Scr_GetType(scrContext, 1u) )
    {
      Float = Scr_GetFloat(scrContext, 1u);
      v2 = *(float *)&Float;
    }
LABEL_14:
    v10 = Scr_GetFloat(scrContext, 0);
    v4 = *(float *)&v10;
    goto LABEL_15;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
LABEL_10:
    if ( Scr_GetType(scrContext, 2u) )
      v3 = Scr_GetInt(scrContext, 2u) != 0;
    goto LABEL_12;
  }
  if ( v8 == 1 )
  {
    if ( Scr_GetType(scrContext, 3u) )
      v5 = Scr_GetInt(scrContext, 3u) != 0;
    goto LABEL_10;
  }
LABEL_15:
  v11 = EaseLogarithmic(v4, v2, v3, v5);
  Scr_AddFloat(scrContext, *(float *)&v11);
}

/*
==============
BGScr_EaseSine
==============
*/
void BGScr_EaseSine(scrContext_t *scrContext)
{
  bool v2; 
  float v3; 
  bool v4; 
  unsigned int v5; 
  unsigned int v6; 
  double Float; 
  double v8; 

  if ( !Scr_GetNumParam(scrContext) || Scr_GetType(scrContext, 0) == VAR_UNDEFINED )
    Scr_Error(COM_ERR_2585, scrContext, "EaseSine() requires a percentage parameter.\n");
  v2 = 0;
  v3 = 0.0;
  v4 = 0;
  v5 = Scr_GetNumParam(scrContext) - 1;
  if ( !v5 )
    goto LABEL_11;
  v6 = v5 - 1;
  if ( !v6 )
  {
LABEL_9:
    if ( Scr_GetType(scrContext, 1u) )
      v2 = Scr_GetInt(scrContext, 1u) != 0;
LABEL_11:
    Float = Scr_GetFloat(scrContext, 0);
    v3 = *(float *)&Float;
    goto LABEL_12;
  }
  if ( v6 == 1 )
  {
    if ( Scr_GetType(scrContext, 2u) )
      v4 = Scr_GetInt(scrContext, 2u) != 0;
    goto LABEL_9;
  }
LABEL_12:
  v8 = EaseSine(v3, v2, v4);
  Scr_AddFloat(scrContext, *(float *)&v8);
}

/*
==============
BGScr_EaseBack
==============
*/
void BGScr_EaseBack(scrContext_t *scrContext)
{
  float v2; 
  float v3; 
  bool v4; 
  float v5; 
  bool easeOut; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  double v11; 
  double Float; 
  double v13; 
  double v14; 

  if ( !Scr_GetNumParam(scrContext) || Scr_GetType(scrContext, 0) == VAR_UNDEFINED )
    Scr_Error(COM_ERR_2586, scrContext, "EaseBack() requires a percentage parameter.\n");
  v2 = FLOAT_0_34999999;
  v3 = FLOAT_3_0;
  v4 = 0;
  v5 = 0.0;
  easeOut = 0;
  v7 = Scr_GetNumParam(scrContext) - 1;
  if ( !v7 )
    goto LABEL_17;
  v8 = v7 - 1;
  if ( !v8 )
  {
LABEL_15:
    if ( Scr_GetType(scrContext, 1u) )
    {
      Float = Scr_GetFloat(scrContext, 1u);
      v2 = *(float *)&Float;
    }
LABEL_17:
    v13 = Scr_GetFloat(scrContext, 0);
    v5 = *(float *)&v13;
    goto LABEL_18;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_13:
    if ( Scr_GetType(scrContext, 2u) )
    {
      v11 = Scr_GetFloat(scrContext, 2u);
      v3 = *(float *)&v11;
    }
    goto LABEL_15;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
LABEL_11:
    if ( Scr_GetType(scrContext, 3u) )
      v4 = Scr_GetInt(scrContext, 3u) != 0;
    goto LABEL_13;
  }
  if ( v10 == 1 )
  {
    if ( Scr_GetType(scrContext, 4u) )
      easeOut = Scr_GetInt(scrContext, 4u) != 0;
    goto LABEL_11;
  }
LABEL_18:
  v14 = EaseBack(v5, v2, v3, v4, easeOut);
  Scr_AddFloat(scrContext, *(float *)&v14);
}

/*
==============
BGScr_EaseElastic
==============
*/
void BGScr_EaseElastic(scrContext_t *scrContext)
{
  float v2; 
  float v3; 
  bool easeIn; 
  float v5; 
  float v6; 
  bool easeOut; 
  double Float; 
  double v9; 
  double v10; 
  double v11; 
  double v12; 

  if ( !Scr_GetNumParam(scrContext) || Scr_GetType(scrContext, 0) == VAR_UNDEFINED )
    Scr_Error(COM_ERR_2587, scrContext, "EaseElastic() requires a percentage parameter.\n");
  v2 = FLOAT_4_0;
  v3 = FLOAT_1_0;
  easeIn = 0;
  v5 = FLOAT_4_0;
  v6 = 0.0;
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
        Float = Scr_GetFloat(scrContext, 3u);
        v5 = *(float *)&Float;
      }
$LN11_3:
      if ( Scr_GetType(scrContext, 2u) )
      {
        v9 = Scr_GetFloat(scrContext, 2u);
        v2 = *(float *)&v9;
      }
$LN13_4:
      if ( Scr_GetType(scrContext, 1u) )
      {
        v10 = Scr_GetFloat(scrContext, 1u);
        v3 = *(float *)&v10;
      }
$LN15_5:
      v11 = Scr_GetFloat(scrContext, 0);
      v6 = *(float *)&v11;
      break;
    default:
      break;
  }
  v12 = EaseElastic(v6, v3, v2, v5, easeIn, easeOut);
  Scr_AddFloat(scrContext, *(float *)&v12);
}

/*
==============
BGScr_EaseBounce
==============
*/
void BGScr_EaseBounce(scrContext_t *scrContext)
{
  float v2; 
  int Int; 
  float v4; 
  bool v5; 
  bool easeOut; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  double v11; 
  double Float; 
  double v13; 

  if ( !Scr_GetNumParam(scrContext) || Scr_GetType(scrContext, 0) == VAR_UNDEFINED )
    Scr_Error(COM_ERR_2588, scrContext, "EaseBounce() requires a percentage parameter.\n");
  v2 = FLOAT_0_25;
  Int = 4;
  v4 = 0.0;
  v5 = 0;
  easeOut = 0;
  v7 = Scr_GetNumParam(scrContext) - 1;
  if ( !v7 )
    goto LABEL_17;
  v8 = v7 - 1;
  if ( !v8 )
  {
LABEL_15:
    if ( Scr_GetType(scrContext, 1u) )
      Int = Scr_GetInt(scrContext, 1u);
LABEL_17:
    Float = Scr_GetFloat(scrContext, 0);
    v4 = *(float *)&Float;
    goto LABEL_18;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_13:
    if ( Scr_GetType(scrContext, 2u) )
    {
      v11 = Scr_GetFloat(scrContext, 2u);
      v2 = *(float *)&v11;
    }
    goto LABEL_15;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
LABEL_11:
    if ( Scr_GetType(scrContext, 3u) )
      v5 = Scr_GetInt(scrContext, 3u) != 0;
    goto LABEL_13;
  }
  if ( v10 == 1 )
  {
    if ( Scr_GetType(scrContext, 4u) )
      easeOut = Scr_GetInt(scrContext, 4u) != 0;
    goto LABEL_11;
  }
LABEL_18:
  v13 = EaseBounce(v4, Int, v2, v5, easeOut);
  Scr_AddFloat(scrContext, *(float *)&v13);
}

/*
==============
BGScr_sin
==============
*/
void BGScr_sin(scrContext_t *scrContext)
{
  double Float; 
  float v3; 

  Float = Scr_GetFloat(scrContext, 0);
  v3 = *(float *)&Float * 0.017453292;
  sinf_0(*(float *)&Float * 0.017453292);
  Scr_AddFloat(scrContext, v3);
}

/*
==============
BGScr_cos
==============
*/
void BGScr_cos(scrContext_t *scrContext)
{
  double Float; 
  float v3; 

  Float = Scr_GetFloat(scrContext, 0);
  v3 = *(float *)&Float * 0.017453292;
  cosf_0(*(float *)&Float * 0.017453292);
  Scr_AddFloat(scrContext, v3);
}

/*
==============
BGScr_tan
==============
*/
void BGScr_tan(scrContext_t *scrContext)
{
  double Float; 
  float v3; 
  float c; 
  float s; 

  Float = Scr_GetFloat(scrContext, 0);
  FastSinCos(*(float *)&Float * 0.017453292, &s, &c);
  v3 = c;
  if ( c == 0.0 )
  {
    Scr_Error(COM_ERR_2538, scrContext, "divide by 0");
    v3 = c;
  }
  Scr_AddFloat(scrContext, s / v3);
}

/*
==============
BGScr_asin
==============
*/
void BGScr_asin(scrContext_t *scrContext)
{
  double Float; 
  const char *v3; 
  float v4; 

  Float = Scr_GetFloat(scrContext, 0);
  if ( *(float *)&Float < -1.0 || *(float *)&Float > 1.0 )
  {
    v3 = j_va("%g out of range", *(float *)&Float);
    Scr_Error(COM_ERR_2539, scrContext, v3);
  }
  v4 = asinf_0(*(float *)&Float);
  Scr_AddFloat(scrContext, v4 * 57.295776);
}

/*
==============
BGScr_acos
==============
*/
void BGScr_acos(scrContext_t *scrContext)
{
  double Float; 
  const char *v3; 
  float v4; 

  Float = Scr_GetFloat(scrContext, 0);
  if ( *(float *)&Float < -1.0 || *(float *)&Float > 1.0 )
  {
    v3 = j_va("%g out of range", *(float *)&Float);
    Scr_Error(COM_ERR_2540, scrContext, v3);
  }
  v4 = acosf_0(*(float *)&Float);
  Scr_AddFloat(scrContext, v4 * 57.295776);
}

/*
==============
BGScr_atan
==============
*/
void BGScr_atan(scrContext_t *scrContext)
{
  double Float; 

  Float = Scr_GetFloat(scrContext, 0);
  *(float *)&Float = atanf_0(*(float *)&Float);
  Scr_AddFloat(scrContext, *(float *)&Float * 57.295776);
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
  const char *v4; 
  int Int; 
  double Float; 
  const char *String; 
  int v8; 

  Type = Scr_GetType(scrContext, 0);
  switch ( Type )
  {
    case VAR_STRING:
      String = Scr_GetString(scrContext, 0);
      v8 = atoi(String);
      Scr_AddInt(scrContext, v8);
      break;
    case VAR_FLOAT:
      Float = Scr_GetFloat(scrContext, 0);
      Scr_AddInt(scrContext, (int)*(float *)&Float);
      break;
    case VAR_INTEGER:
      Int = Scr_GetInt(scrContext, 0);
      Scr_AddInt(scrContext, Int);
      break;
    default:
      TypeName = Scr_GetTypeName(scrContext, 0);
      v4 = j_va("cannot cast %s to int", TypeName);
      Scr_ParamError(COM_ERR_2541, scrContext, 0, v4);
      break;
  }
}

/*
==============
BGScr_CastFloat
==============
*/
void BGScr_CastFloat(scrContext_t *scrContext)
{
  VariableType Type; 
  const char *TypeName; 
  const char *v5; 
  int Int; 
  double Float; 
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
      Float = Scr_GetFloat(scrContext, 0);
      Scr_AddFloat(scrContext, *(float *)&Float);
      break;
    case VAR_INTEGER:
      Int = Scr_GetInt(scrContext, 0);
      Scr_AddFloat(scrContext, (float)Int);
      break;
    default:
      TypeName = Scr_GetTypeName(scrContext, 0);
      v5 = j_va("cannot cast %s to float", TypeName);
      Scr_ParamError(COM_ERR_2542, scrContext, 0, v5);
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
  double Float; 

  Float = Scr_GetFloat(scrContext, 0);
  Scr_AddFloat(scrContext, COERCE_FLOAT(LODWORD(Float) & _xmm));
}

/*
==============
BGScr_min
==============
*/
void BGScr_min(scrContext_t *scrContext)
{
  Scr_GetFloat(scrContext, 0);
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm { vminss  xmm1, xmm0, xmm6; value }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_max
==============
*/
void BGScr_max(scrContext_t *scrContext)
{
  Scr_GetFloat(scrContext, 0);
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm { vmaxss  xmm1, xmm0, xmm6; value }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_floor
==============
*/
void BGScr_floor(scrContext_t *scrContext)
{
  Scr_GetFloat(scrContext, 0);
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm0, 1; value }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_ceil
==============
*/
void BGScr_ceil(scrContext_t *scrContext)
{
  Scr_GetFloat(scrContext, 0);
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm0, 2; value }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
BGScr_exp
==============
*/
void BGScr_exp(scrContext_t *scrContext)
{
  double Float; 

  Float = Scr_GetFloat(scrContext, 0);
  *(float *)&Float = expf_0(*(float *)&Float);
  Scr_AddFloat(scrContext, *(float *)&Float);
}

/*
==============
BGScr_log
==============
*/
void BGScr_log(scrContext_t *scrContext)
{
  double Float; 

  Float = Scr_GetFloat(scrContext, 0);
  *(float *)&Float = logf_0(*(float *)&Float);
  Scr_AddFloat(scrContext, *(float *)&Float);
}

/*
==============
BGScr_sqrt
==============
*/
void BGScr_sqrt(scrContext_t *scrContext)
{
  double Float; 

  Float = Scr_GetFloat(scrContext, 0);
  Scr_AddFloat(scrContext, fsqrt(*(float *)&Float));
}

/*
==============
BGScr_squared
==============
*/
void BGScr_squared(scrContext_t *scrContext)
{
  double Float; 

  Float = Scr_GetFloat(scrContext, 0);
  Scr_AddFloat(scrContext, *(float *)&Float * *(float *)&Float);
}

/*
==============
BGScr_clamp
==============
*/
void BGScr_clamp(scrContext_t *scrContext)
{
  double Float; 
  float v3; 
  double v4; 
  float v5; 
  double v6; 
  double v7; 

  Float = Scr_GetFloat(scrContext, 0);
  v3 = *(float *)&Float;
  v4 = Scr_GetFloat(scrContext, 1u);
  v5 = *(float *)&v4;
  v6 = Scr_GetFloat(scrContext, 2u);
  v7 = I_fclamp(v3, v5, *(float *)&v6);
  Scr_AddFloat(scrContext, *(float *)&v7);
}

/*
==============
BGScr_pow
==============
*/
void BGScr_pow(scrContext_t *scrContext)
{
  double Float; 
  float v3; 
  double v4; 

  Float = Scr_GetFloat(scrContext, 0);
  v3 = *(float *)&Float;
  v4 = Scr_GetFloat(scrContext, 1u);
  *(float *)&v4 = powf_0(v3, *(float *)&v4);
  Scr_AddFloat(scrContext, *(float *)&v4);
}

/*
==============
BGScr_VectorFromLineToPoint
==============
*/
void BGScr_VectorFromLineToPoint(scrContext_t *scrContext)
{
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  vec3_t vectorValue; 
  vec3_t v13; 
  vec3_t v14; 
  float value[4]; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v13);
  Scr_GetVector(scrContext, 2u, &v14);
  v2 = vectorValue.v[0];
  v3 = vectorValue.v[1];
  v4 = vectorValue.v[2];
  v5 = v13.v[0] - vectorValue.v[0];
  v6 = v13.v[1] - vectorValue.v[1];
  v7 = v13.v[2] - vectorValue.v[2];
  v8 = (float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v7 * v7);
  if ( v8 < 0.001 )
  {
    Scr_ParamError(COM_ERR_2543, scrContext, 0, "The two points on the line must be different from each other");
    v3 = vectorValue.v[1];
    v2 = vectorValue.v[0];
    v4 = vectorValue.v[2];
  }
  v9 = v14.v[1] - v3;
  v10 = v14.v[2] - v4;
  LODWORD(v11) = COERCE_UNSIGNED_INT((float)((float)((float)((float)(v14.v[0] - v2) * v5) + (float)((float)(v14.v[1] - v3) * v6)) + (float)(v10 * v7)) / v8) ^ _xmm;
  value[0] = (float)(v11 * v5) + (float)(v14.v[0] - v2);
  value[2] = (float)(v11 * v7) + v10;
  value[1] = (float)(v11 * v6) + v9;
  Scr_AddVector(scrContext, value);
}

/*
==============
BGScr_PointOnSegmentNearestToPoint
==============
*/
void BGScr_PointOnSegmentNearestToPoint(scrContext_t *scrContext)
{
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  vec3_t *p_vectorValue; 
  vec3_t vectorValue; 
  vec3_t v13; 
  vec3_t v14; 
  float value[4]; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v13);
  Scr_GetVector(scrContext, 2u, &v14);
  v2 = vectorValue.v[0];
  v3 = vectorValue.v[1];
  v4 = vectorValue.v[2];
  v5 = v13.v[0] - vectorValue.v[0];
  v6 = v13.v[1] - vectorValue.v[1];
  v8 = v13.v[2] - vectorValue.v[2];
  v7 = v13.v[2] - vectorValue.v[2];
  v9 = (float)((float)(v6 * v6) + (float)(v5 * v5)) + (float)(v7 * v7);
  if ( v9 < 0.001 )
  {
    Scr_ParamError(COM_ERR_2544, scrContext, 0, "Line segment must not have zero length");
    v4 = vectorValue.v[2];
    v3 = vectorValue.v[1];
    v2 = vectorValue.v[0];
  }
  v10 = (float)((float)((float)((float)(v14.v[1] - v3) * v6) + (float)((float)(v14.v[0] - v2) * v5)) + (float)((float)(v14.v[2] - v4) * v8)) / v9;
  if ( v10 >= 0.0 )
  {
    if ( v10 <= 1.0 )
    {
      value[0] = (float)(v5 * v10) + v2;
      value[2] = (float)(v7 * v10) + v4;
      value[1] = (float)(v6 * v10) + v3;
      p_vectorValue = (vec3_t *)value;
    }
    else
    {
      p_vectorValue = &v13;
    }
  }
  else
  {
    p_vectorValue = &vectorValue;
  }
  Scr_AddVector(scrContext, p_vectorValue->v);
}

/*
==============
BGScr_Distance
==============
*/
void BGScr_Distance(scrContext_t *scrContext)
{
  vec3_t v2; 
  vec3_t vectorValue; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v2);
  Scr_AddFloat(scrContext, fsqrt((float)((float)((float)(v2.v[1] - vectorValue.v[1]) * (float)(v2.v[1] - vectorValue.v[1])) + (float)((float)(v2.v[0] - vectorValue.v[0]) * (float)(v2.v[0] - vectorValue.v[0]))) + (float)((float)(v2.v[2] - vectorValue.v[2]) * (float)(v2.v[2] - vectorValue.v[2]))));
}

/*
==============
BGScr_Distance2D
==============
*/
void BGScr_Distance2D(scrContext_t *scrContext)
{
  vec3_t v2; 
  vec3_t vectorValue; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v2);
  Scr_AddFloat(scrContext, fsqrt((float)((float)(v2.v[1] - vectorValue.v[1]) * (float)(v2.v[1] - vectorValue.v[1])) + (float)((float)(v2.v[0] - vectorValue.v[0]) * (float)(v2.v[0] - vectorValue.v[0]))));
}

/*
==============
BGScr_Distance2DSquared
==============
*/
void BGScr_Distance2DSquared(scrContext_t *scrContext)
{
  vec3_t v2; 
  vec3_t vectorValue; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v2);
  Scr_AddFloat(scrContext, (float)((float)(v2.v[1] - vectorValue.v[1]) * (float)(v2.v[1] - vectorValue.v[1])) + (float)((float)(v2.v[0] - vectorValue.v[0]) * (float)(v2.v[0] - vectorValue.v[0])));
}

/*
==============
BGScr_DistanceSquared
==============
*/
void BGScr_DistanceSquared(scrContext_t *scrContext)
{
  vec3_t v2; 
  vec3_t vectorValue; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v2);
  Scr_AddFloat(scrContext, (float)((float)((float)(v2.v[1] - vectorValue.v[1]) * (float)(v2.v[1] - vectorValue.v[1])) + (float)((float)(v2.v[0] - vectorValue.v[0]) * (float)(v2.v[0] - vectorValue.v[0]))) + (float)((float)(v2.v[2] - vectorValue.v[2]) * (float)(v2.v[2] - vectorValue.v[2])));
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
  Scr_AddFloat(scrContext, fsqrt((float)((float)(vectorValue.v[0] * vectorValue.v[0]) + (float)(vectorValue.v[1] * vectorValue.v[1])) + (float)(vectorValue.v[2] * vectorValue.v[2])));
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
  Scr_AddFloat(scrContext, fsqrt((float)(vectorValue.v[0] * vectorValue.v[0]) + (float)(vectorValue.v[1] * vectorValue.v[1])));
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
  Scr_AddFloat(scrContext, (float)((float)(vectorValue.v[0] * vectorValue.v[0]) + (float)(vectorValue.v[1] * vectorValue.v[1])) + (float)(vectorValue.v[2] * vectorValue.v[2]));
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
  Scr_AddFloat(scrContext, (float)(vectorValue.v[0] * vectorValue.v[0]) + (float)(vectorValue.v[1] * vectorValue.v[1]));
}

/*
==============
BGScr_Closer
==============
*/
void BGScr_Closer(scrContext_t *scrContext)
{
  vec3_t vectorValue; 
  vec3_t v3; 
  vec3_t v4; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v3);
  Scr_GetVector(scrContext, 2u, &v4);
  Scr_AddInt(scrContext, (float)((float)((float)((float)(vectorValue.v[1] - v4.v[1]) * (float)(vectorValue.v[1] - v4.v[1])) + (float)((float)(vectorValue.v[0] - v4.v[0]) * (float)(vectorValue.v[0] - v4.v[0]))) + (float)((float)(vectorValue.v[2] - v4.v[2]) * (float)(vectorValue.v[2] - v4.v[2]))) > (float)((float)((float)((float)(vectorValue.v[1] - v3.v[1]) * (float)(vectorValue.v[1] - v3.v[1])) + (float)((float)(vectorValue.v[0] - v3.v[0]) * (float)(vectorValue.v[0] - v3.v[0]))) + (float)((float)(vectorValue.v[2] - v3.v[2]) * (float)(vectorValue.v[2] - v3.v[2]))));
}

/*
==============
BGScr_VectorDot
==============
*/
void BGScr_VectorDot(scrContext_t *scrContext)
{
  vec3_t v2; 
  vec3_t vectorValue; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v2);
  Scr_AddFloat(scrContext, (float)((float)(v2.v[0] * vectorValue.v[0]) + (float)(v2.v[1] * vectorValue.v[1])) + (float)(v2.v[2] * vectorValue.v[2]));
}

/*
==============
BGScr_VectorCross
==============
*/
void BGScr_VectorCross(scrContext_t *scrContext)
{
  vec3_t vectorValue; 
  vec3_t v3; 
  float value[4]; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v3);
  value[0] = (float)(v3.v[2] * vectorValue.v[1]) - (float)(v3.v[1] * vectorValue.v[2]);
  value[1] = (float)(v3.v[0] * vectorValue.v[2]) - (float)(v3.v[2] * vectorValue.v[0]);
  value[2] = (float)(v3.v[1] * vectorValue.v[0]) - (float)(v3.v[0] * vectorValue.v[1]);
  Scr_AddVector(scrContext, value);
}

/*
==============
BGScr_VectorNormalize
==============
*/
void BGScr_VectorNormalize(scrContext_t *scrContext)
{
  __int128 v2; 
  vec3_t vectorValue; 

  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_2545, scrContext, "wrong number of arguments to vectornormalize!");
  Scr_GetVector(scrContext, 0, &vectorValue);
  v2 = LODWORD(vectorValue.v[0]);
  *(float *)&v2 = fsqrt((float)((float)(*(float *)&v2 * *(float *)&v2) + (float)(vectorValue.v[1] * vectorValue.v[1])) + (float)(vectorValue.v[2] * vectorValue.v[2]));
  _XMM3 = v2;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  vectorValue.v[0] = vectorValue.v[0] * (float)(1.0 / *(float *)&_XMM0);
  vectorValue.v[2] = vectorValue.v[2] * (float)(1.0 / *(float *)&_XMM0);
  vectorValue.v[1] = vectorValue.v[1] * (float)(1.0 / *(float *)&_XMM0);
  Scr_AddVector(scrContext, vectorValue.v);
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
  double v2; 
  vec3_t vectorValue; 

  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_2548, scrContext, "wrong number of arguments to vectortoyaw!");
  Scr_GetVector(scrContext, 0, &vectorValue);
  v2 = vectoyaw((const vec2_t *)&vectorValue);
  Scr_AddFloat(scrContext, *(float *)&v2);
}

/*
==============
BGScr_VectorToPitch
==============
*/
void BGScr_VectorToPitch(scrContext_t *scrContext)
{
  double v2; 
  vec3_t vectorValue; 

  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_2549, scrContext, "wrong number of arguments to vectortopitch!");
  Scr_GetVector(scrContext, 0, &vectorValue);
  v2 = vectopitch(&vectorValue);
  Scr_AddFloat(scrContext, *(float *)&v2);
}

/*
==============
BGScr_VectorLerp
==============
*/
void BGScr_VectorLerp(scrContext_t *scrContext)
{
  double Float; 
  vec3_t vectorValue; 
  vec3_t v4; 
  float value[4]; 

  if ( Scr_GetNumParam(scrContext) != 3 )
    Scr_Error(COM_ERR_2550, scrContext, "wrong number of arguments to vectorlerp");
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v4);
  Float = Scr_GetFloat(scrContext, 2u);
  value[0] = (float)((float)(v4.v[0] - vectorValue.v[0]) * *(float *)&Float) + vectorValue.v[0];
  value[2] = (float)((float)(v4.v[2] - vectorValue.v[2]) * *(float *)&Float) + vectorValue.v[2];
  value[1] = (float)((float)(v4.v[1] - vectorValue.v[1]) * *(float *)&Float) + vectorValue.v[1];
  Scr_AddVector(scrContext, value);
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

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  AnglesToAxis(&angles, &axis);
  MatrixTranspose(&axis, &out);
  value[0] = (float)((float)(out.m[0].v[0] * vectorValue.v[0]) + (float)(vectorValue.v[1] * out.m[1].v[0])) + (float)(vectorValue.v[2] * out.m[2].v[0]);
  value[1] = (float)((float)(out.m[0].v[1] * vectorValue.v[0]) + (float)(vectorValue.v[1] * out.m[1].v[1])) + (float)(vectorValue.v[2] * out.m[2].v[1]);
  value[2] = (float)((float)(out.m[0].v[2] * vectorValue.v[0]) + (float)(vectorValue.v[1] * out.m[1].v[2])) + (float)(vectorValue.v[2] * out.m[2].v[2]);
  Scr_AddVector(scrContext, value);
}

/*
==============
BGScr_CalculateStartOrientation
==============
*/
void BGScr_CalculateStartOrientation(scrContext_t *scrContext)
{
  vec3_t v2; 
  vec3_t vectorValue; 
  vec3_t angles; 
  vec3_t v5; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v7; 
  tmat43_t<vec3_t> out; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  Scr_GetVector(scrContext, 2u, &v2);
  Scr_GetVector(scrContext, 3u, &v5);
  AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
  axis.m[3] = vectorValue;
  AnglesToAxis(&v5, (tmat33_t<vec3_t> *)&v7);
  v7.m[3] = v2;
  MatrixInverseOrthogonal43(&axis, &out);
  MatrixMultiply43(&out, &v7, &axis);
  AxisToAngles((const tmat33_t<vec3_t> *)&axis, &v2);
  Scr_MakeArray(scrContext);
  Scr_AddVector(scrContext, axis.m[3].v);
  Scr_AddArray(scrContext);
  Scr_AddVector(scrContext, v2.v);
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

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  AnglesToAxis(&angles, &axis);
  value[0] = (float)((float)(axis.m[0].v[0] * vectorValue.v[0]) + (float)(vectorValue.v[1] * axis.m[1].v[0])) + (float)(vectorValue.v[2] * axis.m[2].v[0]);
  value[1] = (float)((float)(axis.m[0].v[1] * vectorValue.v[0]) + (float)(vectorValue.v[1] * axis.m[1].v[1])) + (float)(vectorValue.v[2] * axis.m[2].v[1]);
  value[2] = (float)((float)(axis.m[0].v[2] * vectorValue.v[0]) + (float)(vectorValue.v[1] * axis.m[1].v[2])) + (float)(vectorValue.v[2] * axis.m[2].v[2]);
  Scr_AddVector(scrContext, value);
}

/*
==============
BGScr_RotatePointAroundVector
==============
*/
void BGScr_RotatePointAroundVector(scrContext_t *scrContext)
{
  __int128 v2; 
  double Float; 
  vec3_t vectorValue; 
  vec3_t point; 
  vec3_t dst; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &point);
  v2 = LODWORD(vectorValue.v[0]);
  *(float *)&v2 = (float)((float)(*(float *)&v2 * *(float *)&v2) + (float)(vectorValue.v[1] * vectorValue.v[1])) + (float)(vectorValue.v[2] * vectorValue.v[2]);
  if ( *(float *)&v2 >= 0.001 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v2 - 1.0) & _xmm) > 0.0000010000001 )
    {
      *(float *)&v2 = fsqrt(*(float *)&v2);
      _XMM1 = v2;
      __asm
      {
        vcmpless xmm0, xmm1, cs:__real@80000000
        vblendvps xmm0, xmm1, xmm2, xmm0
      }
      vectorValue.v[0] = vectorValue.v[0] * (float)(1.0 / *(float *)&_XMM0);
      vectorValue.v[2] = vectorValue.v[2] * (float)(1.0 / *(float *)&_XMM0);
      vectorValue.v[1] = vectorValue.v[1] * (float)(1.0 / *(float *)&_XMM0);
    }
    Float = Scr_GetFloat(scrContext, 2u);
    RotatePointAroundVector(&dst, &vectorValue, &point, *(float *)&Float);
    Scr_AddVector(scrContext, dst.v);
  }
  else
  {
    Scr_Error(COM_ERR_2551, scrContext, "Zero length vector was passed as first parameter!");
  }
}

/*
==============
BGScr_AveragePoint
==============
*/
void BGScr_AveragePoint(scrContext_t *scrContext)
{
  float v2; 
  unsigned int resultCnt; 
  vec3_t resultSum; 

  SummarizeArrayPoints(scrContext, &resultCnt, &resultSum);
  v2 = (float)resultCnt;
  resultSum.v[0] = resultSum.v[0] / v2;
  resultSum.v[2] = resultSum.v[2] / v2;
  resultSum.v[1] = resultSum.v[1] / v2;
  Scr_AddVector(scrContext, resultSum.v);
}

/*
==============
BGScr_AverageNormal
==============
*/
void BGScr_AverageNormal(scrContext_t *scrContext)
{
  __int128 v2; 
  unsigned int resultCnt; 
  vec3_t resultSum; 

  SummarizeArrayPoints(scrContext, &resultCnt, &resultSum);
  v2 = LODWORD(resultSum.v[0]);
  *(float *)&v2 = fsqrt((float)((float)(*(float *)&v2 * *(float *)&v2) + (float)(resultSum.v[1] * resultSum.v[1])) + (float)(resultSum.v[2] * resultSum.v[2]));
  _XMM3 = v2;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  resultSum.v[0] = resultSum.v[0] * (float)(1.0 / *(float *)&_XMM0);
  resultSum.v[2] = resultSum.v[2] * (float)(1.0 / *(float *)&_XMM0);
  resultSum.v[1] = resultSum.v[1] * (float)(1.0 / *(float *)&_XMM0);
  Scr_AddVector(scrContext, resultSum.v);
}

/*
==============
BGScr_ProjectileIntercept
==============
*/
void BGScr_ProjectileIntercept(scrContext_t *scrContext)
{
  double Float; 
  vec3_t targetVel; 
  vec3_t targetPos; 
  vec3_t startVel; 
  vec3_t vectorValue; 
  vec3_t intercept; 

  if ( Scr_GetNumParam(scrContext) != 5 )
    Scr_Error(COM_ERR_2554, scrContext, "Incorrect number of parameters for ProjectileIntercept.");
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &startVel);
  Float = Scr_GetFloat(scrContext, 2u);
  Scr_GetVector(scrContext, 3u, &targetPos);
  Scr_GetVector(scrContext, 4u, &targetVel);
  if ( ProjectileIntercept(&vectorValue, &startVel, *(const float *)&Float, &targetPos, &targetVel, &intercept) )
    Scr_AddVector(scrContext, intercept.v);
}

/*
==============
BGScr_AngleClamp360
==============
*/
void BGScr_AngleClamp360(scrContext_t *scrContext)
{
  double Float; 
  double v3; 

  Float = Scr_GetFloat(scrContext, 0);
  v3 = AngleNormalize360(*(const float *)&Float);
  Scr_AddFloat(scrContext, *(float *)&v3);
}

/*
==============
BGScr_AngleClamp180
==============
*/
void BGScr_AngleClamp180(scrContext_t *scrContext)
{
  double Float; 
  float v3; 

  Float = Scr_GetFloat(scrContext, 0);
  v3 = *(float *)&Float * 0.0027777778;
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm3, 1 }
  Scr_AddFloat(scrContext, (float)(v3 - *(float *)&_XMM4) * 360.0);
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
  LODWORD(axis.m[1].v[0]) ^= _xmm;
  LODWORD(axis.m[1].v[2]) ^= _xmm;
  LODWORD(axis.m[1].v[1]) ^= _xmm;
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
  value[0] = -1.0 * right.v[0];
  value[1] = -1.0 * right.v[1];
  value[2] = -1.0 * right.v[2];
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
  float v2; 
  float v3; 
  vec4_t v4; 
  vec4_t quat; 
  vec3_t vectorValue; 
  vec3_t angles; 

  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  AnglesToQuat(&vectorValue, &quat);
  AnglesToQuat(&angles, &v4);
  LODWORD(v2) = COERCE_UNSIGNED_INT((float)((float)((float)(v4.v[0] * quat.v[0]) + (float)(v4.v[1] * quat.v[1])) + (float)(v4.v[2] * quat.v[2])) + (float)(v4.v[3] * quat.v[3])) & _xmm;
  if ( v2 <= 1.0 )
    v3 = acosf_0(v2) * 114.59155;
  else
    v3 = 0.0;
  Scr_AddFloat(scrContext, v3);
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
  double Float; 
  vec3_t vectorValue; 
  vec3_t angles; 
  vec3_t v5; 
  vec4_t to; 
  vec4_t quat; 
  vec4_t result; 
  tmat33_t<vec3_t> axis; 

  if ( Scr_GetNumParam(scrContext) != 3 )
    Scr_Error(COM_ERR_2556, scrContext, "Wrong number of arguments to AngleLerpQuat( <startAngles>, <end>, <maxAngleDelta> )");
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  Float = Scr_GetFloat(scrContext, 2u);
  AnglesToQuat(&vectorValue, &quat);
  AnglesToQuat(&angles, &to);
  QuatSlerpLimited(&quat, &to, *(float *)&Float * 0.017453292, &result);
  QuatToAxis(&result, &axis);
  AxisToAngles(&axis, &v5);
  Scr_AddVector(scrContext, v5.v);
}

/*
==============
BGScr_AngleLerpQuatFrac
==============
*/
void BGScr_AngleLerpQuatFrac(scrContext_t *scrContext)
{
  double Float; 
  vec3_t vectorValue; 
  vec3_t angles; 
  vec3_t v5; 
  vec4_t to; 
  vec4_t quat; 
  vec4_t result; 
  tmat33_t<vec3_t> axis; 

  if ( Scr_GetNumParam(scrContext) != 3 )
    Scr_Error(COM_ERR_2557, scrContext, "Wrong number of arguments to AngleLerpQuatFrac( <startAngles>, <end>, <fraction> )");
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &angles);
  Float = Scr_GetFloat(scrContext, 2u);
  AnglesToQuat(&vectorValue, &quat);
  AnglesToQuat(&angles, &to);
  QuatSlerp(&quat, &to, *(float *)&Float, &result);
  QuatToAxis(&result, &axis);
  AxisToAngles(&axis, &v5);
  Scr_AddVector(scrContext, v5.v);
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
  LODWORD(vectorValue.m[1].v[0]) ^= _xmm;
  LODWORD(vectorValue.m[1].v[2]) ^= _xmm;
  LODWORD(vectorValue.m[1].v[1]) ^= _xmm;
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
  VariableUnion *VariableValueAddress; 
  float *scriptCodePosValue; 

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
  *(_QWORD *)resultSum->v = 0i64;
  for ( resultSum->v[2] = 0.0; v10 < ArraySize; resultSum->v[2] = scriptCodePosValue[2] + resultSum->v[2] )
  {
    ArrayVariable = GetArrayVariable(scrContext, Object, v10);
    if ( GetValueType(scrContext, ArrayVariable) != VAR_VECTOR )
      Scr_Error(COM_ERR_2553, scrContext, "All elements need to be 3d points.");
    VariableValueAddress = GetVariableValueAddress(scrContext, ArrayVariable);
    ++v10;
    scriptCodePosValue = (float *)VariableValueAddress->scriptCodePosValue;
    resultSum->v[0] = *VariableValueAddress->vectorValue + resultSum->v[0];
    resultSum->v[1] = scriptCodePosValue[1] + resultSum->v[1];
  }
  *resultCnt = ArraySize;
}

