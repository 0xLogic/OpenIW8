/*
==============
DB_GetMemTypeFromXFileType
==============
*/

DBMemoryType __fastcall DB_GetMemTypeFromXFileType(const unsigned int blockIndex)
{
  return ?DB_GetMemTypeFromXFileType@@YA?AW4DBMemoryType@@I@Z(blockIndex);
}

/*
==============
DB_GetMemTypeName
==============
*/

const char *__fastcall DB_GetMemTypeName(const DBMemoryType memType)
{
  return ?DB_GetMemTypeName@@YAPEBDW4DBMemoryType@@@Z(memType);
}

/*
==============
DB_GetMemTypeFromXFileType
==============
*/
__int64 DB_GetMemTypeFromXFileType(const unsigned int blockIndex)
{
  __int64 v1; 
  int v4; 

  v1 = blockIndex;
  if ( blockIndex >= 0xB )
  {
    v4 = 11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory_types.cpp", 52, ASSERT_TYPE_ASSERT, "(unsigned)( blockIndex ) < (unsigned)( ( sizeof( *array_counter( XFILE_MEM_TYPE ) ) + 0 ) )", "blockIndex doesn't index ARRAY_COUNT( XFILE_MEM_TYPE )\n\t%i not in [0, %i)", blockIndex, v4) )
      __debugbreak();
  }
  return (unsigned int)XFILE_MEM_TYPE[v1];
}

/*
==============
DB_GetMemTypeName
==============
*/
const char *DB_GetMemTypeName(const DBMemoryType memType)
{
  __int64 v1; 
  int v4; 

  v1 = memType;
  if ( (unsigned int)memType >= DM_MEMORY_COUNT )
  {
    v4 = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_memory_types.cpp", 59, ASSERT_TYPE_ASSERT, "(unsigned)( memType ) < (unsigned)( ( sizeof( *array_counter( DB_MEMTYPE_NAME ) ) + 0 ) )", "memType doesn't index ARRAY_COUNT( DB_MEMTYPE_NAME )\n\t%i not in [0, %i)", memType, v4) )
      __debugbreak();
  }
  return DB_MEMTYPE_NAME[v1];
}

