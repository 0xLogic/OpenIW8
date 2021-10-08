/*
==============
DB_AssetEntryTable::GetHash
==============
*/

unsigned int __fastcall DB_AssetEntryTable::GetHash(const char *name, XAssetType type)
{
  return ?GetHash@DB_AssetEntryTable@@SAIPEBDW4XAssetType@@@Z(name, type);
}

/*
==============
DB_AssetEntryTable::GetHash
==============
*/
__int64 DB_AssetEntryTable::GetHash(const char *name, XAssetType type)
{
  const char *v3; 
  char v4; 
  const char *v5; 
  __int64 v6; 
  char v7; 
  char i; 
  __int64 v10; 

  v3 = name;
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.h", 105, ASSERT_TYPE_ASSERT, "(pos)", (const char *)&queryFormat, "pos") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 100, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  v4 = *v3;
  v5 = v3;
  if ( *v3 >= 33 )
  {
    v6 = 0x1000000000001001i64;
    while ( 1 )
    {
      v7 = v4;
      if ( (unsigned __int8)(v4 - 65) <= 0x19u || (unsigned __int8)(v4 - 32) <= 0x3Cu && _bittest64(&v6, (char)(v4 - 32)) )
        break;
      if ( v4 == 124 )
        break;
      v4 = *++v5;
      if ( !v4 )
      {
        if ( v7 > 32 )
          goto LABEL_16;
        break;
      }
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.h", 106, ASSERT_TYPE_ASSERT, "( ( DB_IsAssetNameValid( pos ) ) )", "( pos ) = %s", v3) )
    __debugbreak();
LABEL_16:
  if ( (unsigned int)type >= ASSET_TYPE_COUNT )
  {
    LODWORD(v10) = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentrytable.h", 107, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v10, 113) )
      __debugbreak();
  }
  for ( i = *v3; *v3; i = *v3 )
  {
    ++v3;
    type = i + 31 * type;
  }
  return type % 0x5BA00u;
}

