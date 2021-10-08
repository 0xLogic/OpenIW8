/*
==============
StringTable_LookupRowNumForValue_ReverseFromIndex
==============
*/

int __fastcall StringTable_LookupRowNumForValue_ReverseFromIndex(const StringTable *table, const int comparisonColumn, const char *value, const int index)
{
  return ?StringTable_LookupRowNumForValue_ReverseFromIndex@@YAHPEBUStringTable@@HPEBDH@Z(table, comparisonColumn, value, index);
}

/*
==============
StringTable_LookupRowNumForMultipleKeyValues
==============
*/

int __fastcall StringTable_LookupRowNumForMultipleKeyValues(const StringTable *table, const int *lookupColumns, const char **lookupKeys, const int numLookupPairs)
{
  return ?StringTable_LookupRowNumForMultipleKeyValues@@YAHPEBUStringTable@@QEBHQEAPEBDH@Z(table, lookupColumns, lookupKeys, numLookupPairs);
}

/*
==============
StringTable_GetRowCount
==============
*/

int __fastcall StringTable_GetRowCount(const StringTable *table)
{
  return ?StringTable_GetRowCount@@YAHPEBUStringTable@@@Z(table);
}

/*
==============
StringTable_LookupRowNumForValue
==============
*/

int __fastcall StringTable_LookupRowNumForValue(const StringTable *table, const int comparisonColumn, const char *value)
{
  return ?StringTable_LookupRowNumForValue@@YAHPEBUStringTable@@HPEBD@Z(table, comparisonColumn, value);
}

/*
==============
StringTable_GetAsset_FastFile
==============
*/

void __fastcall StringTable_GetAsset_FastFile(const char *filename, const StringTable **tablePtr)
{
  ?StringTable_GetAsset_FastFile@@YAXPEBDPEAPEBUStringTable@@@Z(filename, tablePtr);
}

/*
==============
StringTable_LookupFromAsset
==============
*/

const char *__fastcall StringTable_LookupFromAsset(const char *filename, const int comparisonColumn, const char *stringValue, const int returnValueColumn)
{
  return ?StringTable_LookupFromAsset@@YAPEBDPEBDH0H@Z(filename, comparisonColumn, stringValue, returnValueColumn);
}

/*
==============
StringTable_GetColumnValueForRow
==============
*/

const char *__fastcall StringTable_GetColumnValueForRow(const StringTable *table, const int row, const int column)
{
  return ?StringTable_GetColumnValueForRow@@YAPEBDPEBUStringTable@@HH@Z(table, row, column);
}

/*
==============
Stringtable_GetAssetNonDefault
==============
*/

bool __fastcall Stringtable_GetAssetNonDefault(const char *fileName, const StringTable **tablePtr)
{
  return ?Stringtable_GetAssetNonDefault@@YA_NPEBDPEAPEBUStringTable@@@Z(fileName, tablePtr);
}

/*
==============
StringTable_MultipleKeyLookup
==============
*/

const char *__fastcall StringTable_MultipleKeyLookup(const StringTable *table, const int *lookupColumns, const char **lookupKeys, const int numLookupPairs, const int returnValueColumn)
{
  return ?StringTable_MultipleKeyLookup@@YAPEBDPEBUStringTable@@QEBHQEAPEBDHH@Z(table, lookupColumns, lookupKeys, numLookupPairs, returnValueColumn);
}

/*
==============
StringTable_LookupColumnNumForValue
==============
*/

int __fastcall StringTable_LookupColumnNumForValue(const StringTable *table, const int comparisonRow, const char *value)
{
  return ?StringTable_LookupColumnNumForValue@@YAHPEBUStringTable@@HPEBD@Z(table, comparisonRow, value);
}

/*
==============
StringTable_Lookup
==============
*/

const char *__fastcall StringTable_Lookup(const StringTable *table, const int comparisonColumn, const char *value, const int valueColumn)
{
  return ?StringTable_Lookup@@YAPEBDPEBUStringTable@@HPEBDH@Z(table, comparisonColumn, value, valueColumn);
}

/*
==============
StringTable_Checksum
==============
*/

unsigned int __fastcall StringTable_Checksum(const StringTable *table, unsigned int initialCrc)
{
  return ?StringTable_Checksum@@YAIPEBUStringTable@@I@Z(table, initialCrc);
}

/*
==============
StringTable_LookupRowNumForValue_StartFromIndex
==============
*/

int __fastcall StringTable_LookupRowNumForValue_StartFromIndex(const StringTable *table, const int comparisonColumn, const char *value, const int index)
{
  return ?StringTable_LookupRowNumForValue_StartFromIndex@@YAHPEBUStringTable@@HPEBDH@Z(table, comparisonColumn, value, index);
}

/*
==============
StringTable_GetColumnCount
==============
*/

int __fastcall StringTable_GetColumnCount(const StringTable *table)
{
  return ?StringTable_GetColumnCount@@YAHPEBUStringTable@@@Z(table);
}

/*
==============
StringTable_GetAsset
==============
*/

void __fastcall StringTable_GetAsset(const char *filename, const StringTable **tablePtr)
{
  ?StringTable_GetAsset@@YAXPEBDPEAPEBUStringTable@@@Z(filename, tablePtr);
}

/*
==============
StringTable_Checksum
==============
*/
__int64 StringTable_Checksum(const StringTable *table, unsigned int initialCrc)
{
  const char *name; 
  __int64 v5; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  unsigned int v9; 
  int i; 
  int rowCount; 
  int j; 
  __int64 v13; 
  unsigned int v14; 
  const char *v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 

  name = table->name;
  v5 = -1i64;
  do
    ++v5;
  while ( name[v5] );
  v6 = (unsigned int)v5;
  v7 = ~initialCrc;
  if ( (_DWORD)v5 )
  {
    do
    {
      v8 = *(unsigned __int8 *)name++;
      v7 = (v7 >> 8) ^ g_crc32Table[v8 ^ (unsigned __int8)v7];
      --v6;
    }
    while ( v6 );
  }
  v9 = ~v7;
  if ( !table->cellIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 357, ASSERT_TYPE_ASSERT, "(table->cellIndices)", (const char *)&queryFormat, "table->cellIndices") )
    __debugbreak();
  if ( !table->hashes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 358, ASSERT_TYPE_ASSERT, "(table->hashes)", (const char *)&queryFormat, "table->hashes") )
    __debugbreak();
  if ( !table->strings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 359, ASSERT_TYPE_ASSERT, "(table->strings)", (const char *)&queryFormat, "table->strings") )
    __debugbreak();
  for ( i = 0; i < table->columnCount; ++i )
  {
    rowCount = table->rowCount;
    for ( j = 0; j < rowCount; v9 = ~v14 )
    {
      if ( (i >= table->columnCount || j >= rowCount || j < 0 || i < 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 365, ASSERT_TYPE_ASSERT, "(col < table->columnCount && row < table->rowCount && row >= 0 && col >= 0)", (const char *)&queryFormat, "col < table->columnCount && row < table->rowCount && row >= 0 && col >= 0") )
        __debugbreak();
      v13 = table->cellIndices[i + j * table->columnCount];
      if ( (int)v13 >= table->uniqueCellCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 368, ASSERT_TYPE_ASSERT, "(index < table->uniqueCellCount && index >= 0)", (const char *)&queryFormat, "index < table->uniqueCellCount && index >= 0") )
        __debugbreak();
      v14 = ~v9;
      v15 = table->strings[v13];
      v16 = -1i64;
      do
        ++v16;
      while ( v15[v16] );
      v17 = (unsigned int)v16;
      if ( (_DWORD)v16 )
      {
        do
        {
          v18 = *(unsigned __int8 *)v15++;
          v14 = (v14 >> 8) ^ g_crc32Table[v18 ^ (unsigned __int8)v14];
          --v17;
        }
        while ( v17 );
      }
      rowCount = table->rowCount;
      ++j;
    }
  }
  return v9;
}

/*
==============
StringTable_GetAsset
==============
*/
void StringTable_GetAsset(const char *filename, const StringTable **tablePtr)
{
  *tablePtr = DB_FindXAssetHeader(ASSET_TYPE_STRINGTABLE, filename, 1).stringTable;
}

/*
==============
StringTable_GetAsset_FastFile
==============
*/
void StringTable_GetAsset_FastFile(const char *filename, const StringTable **tablePtr)
{
  *tablePtr = DB_FindXAssetHeader(ASSET_TYPE_STRINGTABLE, filename, 1).stringTable;
}

/*
==============
StringTable_GetColumnCount
==============
*/
__int64 StringTable_GetColumnCount(const StringTable *table)
{
  if ( table )
    return (unsigned int)table->columnCount;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 342, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  return MEMORY[8];
}

/*
==============
StringTable_GetColumnValueForRow
==============
*/
const char *StringTable_GetColumnValueForRow(const StringTable *table, const int row, const int column)
{
  int columnCount; 
  __int64 v7; 
  const char *v8; 
  int v9; 
  unsigned __int16 *cellIndices; 
  const char **strings; 
  const char *v12; 
  char *fmt; 
  __int64 v15; 

  if ( !table && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 218, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  columnCount = table->columnCount;
  if ( column >= columnCount || row >= table->rowCount || row < 0 || column < 0 )
  {
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_stringtable_debug, "stringtable_debug") )
    {
      LODWORD(v15) = table->rowCount;
      Com_PrintError(13, "Trying to read row %i, column %i, but the table '%s' has %i rows and %i columns\n", (unsigned int)row, (unsigned int)column, table->name, v15, table->columnCount);
    }
    return (char *)&queryFormat.fmt + 3;
  }
  v7 = table->cellIndices[column + row * columnCount];
  if ( (int)v7 >= table->uniqueCellCount )
  {
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_stringtable_debug, "stringtable_debug") )
    {
      LODWORD(fmt) = column;
      Com_PrintError(13, "Trying to read string %i at row %i, column %i, but the table '%s' has %i unique strings\n", (unsigned int)v7, (unsigned int)row, fmt, table->name, table->uniqueCellCount);
    }
    return (char *)&queryFormat.fmt + 3;
  }
  v8 = table->strings[v7];
  if ( (!v8 || !*v8) && Dvar_GetInt_Internal_DebugName(DVARINT_stringtable_debug, "stringtable_debug") )
  {
    v9 = table->columnCount;
    cellIndices = table->cellIndices;
    strings = table->strings;
    if ( v9 <= 1 )
      v12 = (char *)&queryFormat.fmt + 3;
    else
      v12 = strings[cellIndices[row * v9 + 1]];
    Com_PrintError(13, "Looking up row %i, column %i of table '%s' results in an empty string (first column is %s, second column is %s for that row)\n", (unsigned int)row, (unsigned int)column, table->name, strings[cellIndices[row * v9]], v12);
  }
  return v8;
}

/*
==============
StringTable_GetRowCount
==============
*/
__int64 StringTable_GetRowCount(const StringTable *table)
{
  if ( table )
    return (unsigned int)table->rowCount;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 335, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  return MEMORY[0xC];
}

/*
==============
StringTable_Lookup
==============
*/
const char *StringTable_Lookup(const StringTable *table, const int comparisonColumn, const char *value, const int valueColumn)
{
  int v7; 

  if ( table )
  {
    v7 = StringTable_LookupRowNumForValue(table, comparisonColumn, value);
    return StringTable_GetColumnValueForRow(table, v7, valueColumn);
  }
  else
  {
    Com_PrintError(13, "Unable to find the lookup table in the fastfile, aborting lookup\n", value);
    return (char *)&queryFormat.fmt + 3;
  }
}

/*
==============
StringTable_LookupColumnNumForValue
==============
*/
__int64 StringTable_LookupColumnNumForValue(const StringTable *table, const int comparisonRow, const char *value)
{
  int v6; 
  int columnCount; 
  int v8; 
  __int64 rowCount; 
  int v11; 
  __int64 v12; 
  const char *v13; 

  v6 = StringTable_HashString(value);
  columnCount = table->columnCount;
  v8 = v6;
  if ( !columnCount )
    return 0xFFFFFFFFi64;
  rowCount = (unsigned int)table->rowCount;
  if ( comparisonRow >= (int)rowCount )
  {
    Com_PrintError(13, "Unable to compare against row number %i - only %i row(s) in table", (unsigned int)comparisonRow, rowCount);
    return 0xFFFFFFFFi64;
  }
  v11 = columnCount - 1;
  if ( !table->cellIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 273, ASSERT_TYPE_ASSERT, "(table->cellIndices)", (const char *)&queryFormat, "table->cellIndices") )
    __debugbreak();
  if ( !table->hashes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 274, ASSERT_TYPE_ASSERT, "(table->hashes)", (const char *)&queryFormat, "table->hashes") )
    __debugbreak();
  if ( !table->strings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 275, ASSERT_TYPE_ASSERT, "(table->strings)", (const char *)&queryFormat, "table->strings") )
    __debugbreak();
  if ( v11 < 0 )
    return 0xFFFFFFFFi64;
  while ( 1 )
  {
    if ( (comparisonRow >= table->rowCount || v11 >= table->columnCount || comparisonRow < 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 278, ASSERT_TYPE_ASSERT, "(comparisonRow < table->rowCount && col < table->columnCount && col >= 0 && comparisonRow >= 0)", (const char *)&queryFormat, "comparisonRow < table->rowCount && col < table->columnCount && col >= 0 && comparisonRow >= 0") )
      __debugbreak();
    v12 = table->cellIndices[comparisonRow + table->rowCount * v11];
    if ( (int)v12 >= table->uniqueCellCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 281, ASSERT_TYPE_ASSERT, "(index < table->uniqueCellCount && index >= 0)", (const char *)&queryFormat, "index < table->uniqueCellCount && index >= 0") )
      __debugbreak();
    if ( table->hashes[v12] == v8 )
    {
      v13 = table->strings[v12];
      if ( v13 )
      {
        if ( !I_stricmp(value, v13) )
          break;
      }
    }
    if ( --v11 < 0 )
      return 0xFFFFFFFFi64;
  }
  return (unsigned int)v11;
}

/*
==============
StringTable_LookupFromAsset
==============
*/
const char *StringTable_LookupFromAsset(const char *filename, const int comparisonColumn, const char *stringValue, const int returnValueColumn)
{
  const StringTable *stringTable; 
  int v10; 

  stringTable = DB_FindXAssetHeader(ASSET_TYPE_STRINGTABLE, filename, 1).stringTable;
  if ( DB_IsXAssetDefault(ASSET_TYPE_STRINGTABLE, filename) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14416A930, 900i64, filename);
  if ( stringTable )
  {
    v10 = StringTable_LookupRowNumForValue(stringTable, comparisonColumn, stringValue);
    return StringTable_GetColumnValueForRow(stringTable, v10, returnValueColumn);
  }
  else
  {
    Com_PrintError(13, "Unable to find the lookup table in the fastfile, aborting lookup\n");
    return (char *)&queryFormat.fmt + 3;
  }
}

/*
==============
StringTable_LookupRowNumForMultipleKeyValues
==============
*/
__int64 StringTable_LookupRowNumForMultipleKeyValues(const StringTable *table, const int *lookupColumns, const char **lookupKeys, const int numLookupPairs)
{
  int v4; 
  const char **v5; 
  const int *v6; 
  int *v8; 
  char *v9; 
  const char **v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  const char *v21; 
  __int64 v22; 
  const char *v23; 
  signed __int64 v24; 
  int v25; 
  __int64 v26; 
  int v27; 
  int v28; 
  int v29; 
  __int64 v33; 
  int v35[6]; 

  v4 = numLookupPairs;
  v5 = lookupKeys;
  v6 = lookupColumns;
  if ( !table && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 157, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  if ( !table->columnCount || !v4 )
    return 0xFFFFFFFFi64;
  if ( v4 > 0 )
  {
    v8 = (int *)v6;
    v9 = (char *)((char *)v35 - (char *)v6);
    v10 = v5;
    v11 = (unsigned int)numLookupPairs;
    do
    {
      v12 = StringTable_HashString(*v10);
      v13 = *v8;
      *(int *)((char *)v8 + (_QWORD)v9) = v12;
      if ( v13 >= table->columnCount )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14416A140, 899i64);
      ++v10;
      ++v8;
      --v11;
    }
    while ( v11 );
    v6 = lookupColumns;
    v4 = numLookupPairs;
  }
  v14 = table->rowCount - 1;
  if ( !table->cellIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 175, ASSERT_TYPE_ASSERT, "(table->cellIndices)", (const char *)&queryFormat, "table->cellIndices") )
    __debugbreak();
  if ( !table->hashes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 176, ASSERT_TYPE_ASSERT, "(table->hashes)", (const char *)&queryFormat, "table->hashes") )
    __debugbreak();
  if ( !table->strings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 177, ASSERT_TYPE_ASSERT, "(table->strings)", (const char *)&queryFormat, "table->strings") )
    __debugbreak();
  v15 = 0i64;
  v16 = v4;
  v33 = v4;
  if ( v14 < 0 )
  {
LABEL_53:
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_stringtable_debug, "stringtable_debug") )
    {
      Com_PrintError(13, "Unable to find the following combination of pairs in table %s: ", table->name);
      if ( v16 > 0 )
      {
        do
        {
          Com_PrintError(13, "(%s in column %i); ", v5[v15], (unsigned int)v6[v15]);
          ++v15;
        }
        while ( v15 < v16 );
      }
      Com_PrintError(13, "\n");
    }
    return 0xFFFFFFFFi64;
  }
  while ( 1 )
  {
    v17 = 0;
    v18 = 0i64;
    if ( v16 > 0 )
    {
      while ( 2 )
      {
        v19 = v6[v18];
        if ( (v19 >= table->columnCount || v14 >= table->rowCount || v19 < 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 184, ASSERT_TYPE_ASSERT, "(column < table->columnCount && row < table->rowCount && row >= 0 && column >= 0)", (const char *)&queryFormat, "column < table->columnCount && row < table->rowCount && row >= 0 && column >= 0") )
          __debugbreak();
        v20 = table->cellIndices[v19 + v14 * table->columnCount];
        if ( (int)v20 >= table->uniqueCellCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 187, ASSERT_TYPE_ASSERT, "(index < table->uniqueCellCount && index >= 0)", (const char *)&queryFormat, "index < table->uniqueCellCount && index >= 0") )
          __debugbreak();
        if ( table->hashes[v20] == v35[v18] )
        {
          v21 = table->strings[v20];
          if ( v21 )
          {
            v22 = 0x7FFFFFFFi64;
            v23 = lookupKeys[v18];
            if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            v24 = v23 - v21;
            do
            {
              v25 = (unsigned __int8)v21[v24];
              v26 = v22;
              v27 = *(unsigned __int8 *)v21++;
              --v22;
              if ( !v26 )
                break;
              if ( v25 != v27 )
              {
                v28 = v25 + 32;
                if ( (unsigned int)(v25 - 65) > 0x19 )
                  v28 = v25;
                v25 = v28;
                v29 = v27 + 32;
                if ( (unsigned int)(v27 - 65) > 0x19 )
                  v29 = v27;
                if ( v25 != v29 )
                {
                  v6 = lookupColumns;
                  goto LABEL_49;
                }
              }
            }
            while ( v25 );
            v6 = lookupColumns;
            ++v17;
            if ( ++v18 < v33 )
              continue;
          }
        }
        break;
      }
LABEL_49:
      v16 = v33;
      v4 = numLookupPairs;
      v15 = 0i64;
    }
    if ( v17 == v4 )
      return (unsigned int)v14;
    if ( --v14 < 0 )
    {
      v5 = lookupKeys;
      goto LABEL_53;
    }
  }
}

/*
==============
StringTable_LookupRowNumForValue
==============
*/
__int64 StringTable_LookupRowNumForValue(const StringTable *table, const int comparisonColumn, const char *value)
{
  int v6; 
  int columnCount; 
  int v8; 
  int v9; 
  __int64 v10; 
  const char *v11; 
  __int64 v12; 
  const char *v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  int v18; 
  char *fmt; 

  v6 = StringTable_HashString(value);
  if ( !table && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 26, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  columnCount = table->columnCount;
  if ( !columnCount )
    return 0xFFFFFFFFi64;
  if ( comparisonColumn >= columnCount )
  {
    LODWORD(fmt) = table->columnCount;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14416A140, 896i64, (unsigned int)comparisonColumn, fmt);
  }
  v8 = table->rowCount - 1;
  if ( !table->cellIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 34, ASSERT_TYPE_ASSERT, "(table->cellIndices)", (const char *)&queryFormat, "table->cellIndices") )
    __debugbreak();
  if ( !table->hashes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 35, ASSERT_TYPE_ASSERT, "(table->hashes)", (const char *)&queryFormat, "table->hashes") )
    __debugbreak();
  if ( !table->strings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 36, ASSERT_TYPE_ASSERT, "(table->strings)", (const char *)&queryFormat, "table->strings") )
    __debugbreak();
  if ( v8 < 0 )
  {
LABEL_41:
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_stringtable_debug, "stringtable_debug") )
      Com_PrintError(13, "Unable to find '%s' in column %i of table %s\n", value, (unsigned int)comparisonColumn, table->name);
    return 0xFFFFFFFFi64;
  }
  while ( 1 )
  {
    v9 = v8;
    if ( (comparisonColumn >= table->columnCount || v8 >= table->rowCount || comparisonColumn < 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 39, ASSERT_TYPE_ASSERT, "(comparisonColumn < table->columnCount && row < table->rowCount && row >= 0 && comparisonColumn >= 0)", (const char *)&queryFormat, "comparisonColumn < table->columnCount && row < table->rowCount && row >= 0 && comparisonColumn >= 0") )
      __debugbreak();
    v10 = table->cellIndices[comparisonColumn + v8 * table->columnCount];
    if ( (int)v10 >= table->uniqueCellCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 42, ASSERT_TYPE_ASSERT, "(index < table->uniqueCellCount && index >= 0)", (const char *)&queryFormat, "index < table->uniqueCellCount && index >= 0") )
      __debugbreak();
    if ( table->hashes[v10] == v6 )
    {
      v11 = table->strings[v10];
      if ( v11 )
        break;
    }
LABEL_40:
    --v8;
    if ( v9 <= 0 )
      goto LABEL_41;
  }
  v12 = 0x7FFFFFFFi64;
  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v13 = (const char *)(value - v11);
  do
  {
    v14 = (unsigned __int8)v11[(_QWORD)v13];
    v15 = v12;
    v16 = *(unsigned __int8 *)v11++;
    --v12;
    if ( !v15 )
      break;
    if ( v14 != v16 )
    {
      v17 = v14 + 32;
      if ( (unsigned int)(v14 - 65) > 0x19 )
        v17 = v14;
      v14 = v17;
      v18 = v16 + 32;
      if ( (unsigned int)(v16 - 65) > 0x19 )
        v18 = v16;
      if ( v14 != v18 )
        goto LABEL_40;
    }
  }
  while ( v14 );
  return (unsigned int)v8;
}

/*
==============
StringTable_LookupRowNumForValue_ReverseFromIndex
==============
*/
__int64 StringTable_LookupRowNumForValue_ReverseFromIndex(const StringTable *table, const int comparisonColumn, const char *value, const int index)
{
  int v8; 
  int columnCount; 
  int v10; 
  __int64 v11; 
  const char *v12; 
  __int64 v13; 
  const char *v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  int v18; 
  int v19; 
  char *fmt; 

  v8 = StringTable_HashString(value);
  if ( !table && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 66, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  columnCount = table->columnCount;
  if ( !columnCount )
    return 0xFFFFFFFFi64;
  if ( comparisonColumn >= columnCount )
  {
    LODWORD(fmt) = table->columnCount;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14416A3F0, 897i64, (unsigned int)comparisonColumn, fmt);
  }
  if ( !table->cellIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 78, ASSERT_TYPE_ASSERT, "(table->cellIndices)", (const char *)&queryFormat, "table->cellIndices") )
    __debugbreak();
  if ( !table->hashes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 79, ASSERT_TYPE_ASSERT, "(table->hashes)", (const char *)&queryFormat, "table->hashes") )
    __debugbreak();
  if ( !table->strings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 80, ASSERT_TYPE_ASSERT, "(table->strings)", (const char *)&queryFormat, "table->strings") )
    __debugbreak();
  if ( index < 0 )
  {
LABEL_41:
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_stringtable_debug, "stringtable_debug") )
      Com_PrintError(13, "Unable to find '%s' in column %i of table %s\n", value, (unsigned int)comparisonColumn, table->name);
    return 0xFFFFFFFFi64;
  }
  while ( 1 )
  {
    v10 = index;
    if ( (comparisonColumn >= table->columnCount || index >= table->rowCount || comparisonColumn < 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 83, ASSERT_TYPE_ASSERT, "(comparisonColumn < table->columnCount && row < table->rowCount && row >= 0 && comparisonColumn >= 0)", (const char *)&queryFormat, "comparisonColumn < table->columnCount && row < table->rowCount && row >= 0 && comparisonColumn >= 0") )
      __debugbreak();
    v11 = table->cellIndices[comparisonColumn + index * table->columnCount];
    if ( (int)v11 >= table->uniqueCellCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 86, ASSERT_TYPE_ASSERT, "(rowIndex < table->uniqueCellCount && rowIndex >= 0)", (const char *)&queryFormat, "rowIndex < table->uniqueCellCount && rowIndex >= 0") )
      __debugbreak();
    if ( table->hashes[v11] == v8 )
    {
      v12 = table->strings[v11];
      if ( v12 )
        break;
    }
LABEL_40:
    --index;
    if ( v10 <= 0 )
      goto LABEL_41;
  }
  v13 = 0x7FFFFFFFi64;
  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v14 = (const char *)(value - v12);
  do
  {
    v15 = (unsigned __int8)v12[(_QWORD)v14];
    v16 = v13;
    v17 = *(unsigned __int8 *)v12++;
    --v13;
    if ( !v16 )
      break;
    if ( v15 != v17 )
    {
      v18 = v15 + 32;
      if ( (unsigned int)(v15 - 65) > 0x19 )
        v18 = v15;
      v15 = v18;
      v19 = v17 + 32;
      if ( (unsigned int)(v17 - 65) > 0x19 )
        v19 = v17;
      if ( v15 != v19 )
        goto LABEL_40;
    }
  }
  while ( v15 );
  return (unsigned int)index;
}

/*
==============
StringTable_LookupRowNumForValue_StartFromIndex
==============
*/
__int64 StringTable_LookupRowNumForValue_StartFromIndex(const StringTable *table, const int comparisonColumn, const char *value, const int index)
{
  int v8; 
  int columnCount; 
  __int64 v10; 
  const char *v11; 
  __int64 v12; 
  const char *v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  int v18; 
  char *fmt; 

  v8 = StringTable_HashString(value);
  if ( !table && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 113, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  columnCount = table->columnCount;
  if ( !columnCount )
    return 0xFFFFFFFFi64;
  if ( comparisonColumn >= columnCount )
  {
    LODWORD(fmt) = table->columnCount;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14416A3F0, 898i64, (unsigned int)comparisonColumn, fmt);
  }
  if ( !table->cellIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 125, ASSERT_TYPE_ASSERT, "(table->cellIndices)", (const char *)&queryFormat, "table->cellIndices") )
    __debugbreak();
  if ( !table->hashes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 126, ASSERT_TYPE_ASSERT, "(table->hashes)", (const char *)&queryFormat, "table->hashes") )
    __debugbreak();
  if ( !table->strings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 127, ASSERT_TYPE_ASSERT, "(table->strings)", (const char *)&queryFormat, "table->strings") )
    __debugbreak();
  while ( 1 )
  {
    if ( index >= table->rowCount )
    {
      if ( Dvar_GetInt_Internal_DebugName(DVARINT_stringtable_debug, "stringtable_debug") )
        Com_PrintError(13, "Unable to find '%s' in column %i of table %s\n", value, (unsigned int)comparisonColumn, table->name);
      return 0xFFFFFFFFi64;
    }
    if ( (comparisonColumn >= table->columnCount || index < 0 || comparisonColumn < 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 130, ASSERT_TYPE_ASSERT, "(comparisonColumn < table->columnCount && row < table->rowCount && row >= 0 && comparisonColumn >= 0)", (const char *)&queryFormat, "comparisonColumn < table->columnCount && row < table->rowCount && row >= 0 && comparisonColumn >= 0") )
      __debugbreak();
    v10 = table->cellIndices[comparisonColumn + index * table->columnCount];
    if ( (int)v10 >= table->uniqueCellCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 133, ASSERT_TYPE_ASSERT, "(rowIndex < table->uniqueCellCount && rowIndex >= 0)", (const char *)&queryFormat, "rowIndex < table->uniqueCellCount && rowIndex >= 0") )
      __debugbreak();
    if ( table->hashes[v10] == v8 )
    {
      v11 = table->strings[v10];
      if ( v11 )
        break;
    }
LABEL_40:
    ++index;
  }
  v12 = 0x7FFFFFFFi64;
  if ( !value && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v13 = (const char *)(value - v11);
  do
  {
    v14 = (unsigned __int8)v11[(_QWORD)v13];
    v15 = v12;
    v16 = *(unsigned __int8 *)v11++;
    --v12;
    if ( !v15 )
      break;
    if ( v14 != v16 )
    {
      v17 = v14 + 32;
      if ( (unsigned int)(v14 - 65) > 0x19 )
        v17 = v14;
      v14 = v17;
      v18 = v16 + 32;
      if ( (unsigned int)(v16 - 65) > 0x19 )
        v18 = v16;
      if ( v14 != v18 )
        goto LABEL_40;
    }
  }
  while ( v14 );
  return (unsigned int)index;
}

/*
==============
StringTable_MultipleKeyLookup
==============
*/
const char *StringTable_MultipleKeyLookup(const StringTable *table, const int *lookupColumns, const char **lookupKeys, __int64 numLookupPairs, const int returnValueColumn)
{
  int v7; 

  if ( table )
  {
    v7 = StringTable_LookupRowNumForMultipleKeyValues(table, lookupColumns, lookupKeys, numLookupPairs);
    return StringTable_GetColumnValueForRow(table, v7, returnValueColumn);
  }
  else
  {
    Com_PrintError(13, "Unable to find the lookup table in the fastfile, aborting lookup\n", lookupKeys, numLookupPairs);
    return (char *)&queryFormat.fmt + 3;
  }
}

/*
==============
Stringtable_GetAssetNonDefault
==============
*/
bool Stringtable_GetAssetNonDefault(const char *fileName, const StringTable **tablePtr)
{
  XAssetHeader v4; 

  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_stringtable.cpp", 394, ASSERT_TYPE_ASSERT, "(tablePtr)", (const char *)&queryFormat, "tablePtr") )
    __debugbreak();
  v4.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_STRINGTABLE, fileName, 0).physicsLibrary;
  *tablePtr = (const StringTable *)v4.physicsLibrary;
  return v4.physicsLibrary != NULL;
}

