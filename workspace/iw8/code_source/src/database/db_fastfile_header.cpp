/*
==============
DB_FFHeader_GetExpectedXFileVersion
==============
*/

unsigned int __fastcall DB_FFHeader_GetExpectedXFileVersion(const DB_FFHeader *r_header)
{
  return ?DB_FFHeader_GetExpectedXFileVersion@@YAIAEBUDB_FFHeader@@@Z(r_header);
}

/*
==============
DB_FDHeader_GetResidentDataOffset
==============
*/

unsigned __int64 __fastcall DB_FDHeader_GetResidentDataOffset(const DB_FDHeader *r_header)
{
  return ?DB_FDHeader_GetResidentDataOffset@@YA_KAEBUDB_FDHeader@@@Z(r_header);
}

/*
==============
DB_FFHeader_GetResidentDataOffset
==============
*/

unsigned __int64 __fastcall DB_FFHeader_GetResidentDataOffset(const DB_FFHeader *r_header)
{
  return ?DB_FFHeader_GetResidentDataOffset@@YA_KAEBUDB_FFHeader@@@Z(r_header);
}

/*
==============
DB_FDHeader_GetResidentDataOffset
==============
*/
unsigned __int64 DB_FDHeader_GetResidentDataOffset(const DB_FDHeader *r_header)
{
  return 376i64;
}

/*
==============
DB_FFHeader_GetExpectedXFileVersion
==============
*/
__int64 DB_FFHeader_GetExpectedXFileVersion(const DB_FFHeader *r_header)
{
  unsigned __int8 v1; 
  unsigned int v3; 
  int v5; 
  int v6; 
  unsigned int v7; 
  int v8; 

  v1 = r_header->transientFileType[0];
  if ( v1 >= 0xEu )
  {
    v6 = 14;
    v5 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_header.cpp", 23, ASSERT_TYPE_ASSERT, "(unsigned)( r_header.transientFileType ) < (unsigned)( ( sizeof( *array_counter( XFILE_FASTFILE_TYPE_VERSIONS ) ) + 0 ) )", "r_header.transientFileType doesn't index ARRAY_COUNT( XFILE_FASTFILE_TYPE_VERSIONS )\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v3 = XFILE_FASTFILE_TYPE_VERSIONS[(unsigned __int8)r_header->transientFileType[0]];
  if ( v3 > 0x100F )
  {
    v8 = 4111;
    v7 = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_fastfile_header.cpp", 26, ASSERT_TYPE_ASSERT, "( returnVersion ) <= ( XFILE_VERSION_CURRENT )", "%s <= %s\n\t%u, %u", "returnVersion", "XFILE_VERSION_CURRENT", v7, v8) )
      __debugbreak();
  }
  return v3;
}

/*
==============
DB_FFHeader_GetResidentDataOffset
==============
*/
unsigned __int64 DB_FFHeader_GetResidentDataOffset(const DB_FFHeader *r_header)
{
  return 160i64;
}

