/*
==============
DB_GetXAssetTypeName
==============
*/

const char *__fastcall DB_GetXAssetTypeName(const int type)
{
  return ?DB_GetXAssetTypeName@@YAPEBDH@Z(type);
}

/*
==============
DB_GetDefaultXAssetName
==============
*/

const char *__fastcall DB_GetDefaultXAssetName(const int type)
{
  return ?DB_GetDefaultXAssetName@@YAPEBDH@Z(type);
}

/*
==============
DB_GetXAssetHeaderName
==============
*/

const char *__fastcall DB_GetXAssetHeaderName(const int type, const XAssetHeader header)
{
  return ?DB_GetXAssetHeaderName@@YAPEBDHTXAssetHeader@@@Z(type, header);
}

/*
==============
DB_GetXAssetTypeSize
==============
*/

unsigned int __fastcall DB_GetXAssetTypeSize(const XAssetType assetType)
{
  return ?DB_GetXAssetTypeSize@@YAIW4XAssetType@@@Z(assetType);
}

/*
==============
DB_SetXAssetHeaderName
==============
*/

void __fastcall DB_SetXAssetHeaderName(const int type, XAssetHeader header, const char *const name)
{
  ?DB_SetXAssetHeaderName@@YAXHTXAssetHeader@@QEBD@Z(type, header, name);
}

/*
==============
DB_GetXAssetTypeName
==============
*/
const char *DB_GetXAssetTypeName(const int type)
{
  __int64 v1; 
  int v4; 

  v1 = type;
  if ( (unsigned int)type >= 0x71 )
  {
    v4 = 113;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", type, v4) )
      __debugbreak();
  }
  return g_assetNames[v1];
}

/*
==============
DB_GetXAssetHeaderName
==============
*/
const char *DB_GetXAssetHeaderName(const int type, const XAssetHeader header)
{
  __int64 v2; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  v2 = type;
  if ( (unsigned int)type >= 0x71 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 62, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", type, 113) )
      __debugbreak();
    LODWORD(v8) = 113;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 20, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  if ( !g_assetNameFieldValid[v2] )
  {
    if ( (unsigned int)v2 >= 0x71 )
    {
      LODWORD(v7) = 113;
      LODWORD(v5) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v5, v7) )
        __debugbreak();
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 63, ASSERT_TYPE_ASSERT, "(DB_XAssetTypeHasName( type ))", "%s\n\tDB_GetXAssetHeaderName %s, 0x%p", "DB_XAssetTypeHasName( type )", g_assetNames[v2], header.physicsLibrary) )
      __debugbreak();
  }
  if ( !header.physicsLibrary )
  {
    if ( (unsigned int)v2 >= 0x71 )
    {
      LODWORD(v7) = 113;
      LODWORD(v5) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v5, v7) )
        __debugbreak();
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 65, ASSERT_TYPE_ASSERT, "(header.data)", "%s\n\tDB_GetXAssetHeaderName %s, nullptr", "header.data", g_assetNames[v2]) )
      __debugbreak();
  }
  return header.physicsLibrary->name;
}

/*
==============
DB_SetXAssetHeaderName
==============
*/
void DB_SetXAssetHeaderName(const int type, XAssetHeader header, const char *const name)
{
  __int64 v3; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  v3 = type;
  if ( (unsigned int)type >= 0x71 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 47, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", type, 113) )
      __debugbreak();
    LODWORD(v9) = 113;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 20, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  if ( !g_assetNameFieldValid[v3] )
  {
    if ( (unsigned int)v3 >= 0x71 )
    {
      LODWORD(v8) = 113;
      LODWORD(v6) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v6, v8) )
        __debugbreak();
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 48, ASSERT_TYPE_ASSERT, "(DB_XAssetTypeHasName( type ))", "%s\n\tDB_SetXAssetHeaderName %s, 0x%p, %s", "DB_XAssetTypeHasName( type )", g_assetNames[v3], header.physicsLibrary, name) )
      __debugbreak();
  }
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 50, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !header.physicsLibrary )
  {
    if ( (unsigned int)v3 >= 0x71 )
    {
      LODWORD(v8) = 113;
      LODWORD(v6) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v6, v8) )
        __debugbreak();
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 51, ASSERT_TYPE_ASSERT, "(header.data)", "%s\n\tDB_SetXAssetHeaderName %s, nullptr, %s", "header.data", g_assetNames[v3], name) )
      __debugbreak();
  }
  header.physicsLibrary->name = name;
}

/*
==============
DB_GetDefaultXAssetName
==============
*/
const char *DB_GetDefaultXAssetName(const int type)
{
  __int64 v1; 
  int v4; 

  v1 = type;
  if ( (unsigned int)type >= 0x71 )
  {
    v4 = 113;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 29, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", type, v4) )
      __debugbreak();
  }
  return g_defaultAssetName[v1];
}

/*
==============
DB_GetXAssetTypeSize
==============
*/
__int64 DB_GetXAssetTypeSize(const XAssetType assetType)
{
  __int64 v1; 
  int v4; 

  v1 = assetType;
  if ( (unsigned int)assetType >= ASSET_TYPE_COUNT )
  {
    v4 = 113;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( assetType ) < (unsigned)( ASSET_TYPE_COUNT )", "assetType doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", assetType, v4) )
      __debugbreak();
  }
  return g_assetSizes[v1];
}

