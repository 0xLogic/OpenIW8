/*
==============
DB_AssetEntry::GetName
==============
*/

const char *__fastcall DB_AssetEntry::GetName(DB_AssetEntry *this)
{
  return ?GetName@DB_AssetEntry@@QEBAPEBDXZ(this);
}

/*
==============
DB_AssetEntry::SetZoneIndex
==============
*/

void __fastcall DB_AssetEntry::SetZoneIndex(DB_AssetEntry *this, unsigned int index)
{
  ?SetZoneIndex@DB_AssetEntry@@QEAAXI@Z(this, index);
}

/*
==============
DB_AssetEntry::TestInUse
==============
*/

bool __fastcall DB_AssetEntry::TestInUse(DB_AssetEntry *this, unsigned __int8 testFlag)
{
  return ?TestInUse@DB_AssetEntry@@QEBA_NE@Z(this, testFlag);
}

/*
==============
DB_AssetEntry::ClearInUse
==============
*/

void __fastcall DB_AssetEntry::ClearInUse(DB_AssetEntry *this, unsigned __int8 flag)
{
  ?ClearInUse@DB_AssetEntry@@QEAAXE@Z(this, flag);
}

/*
==============
DB_AssetEntry::SetInUse
==============
*/

void __fastcall DB_AssetEntry::SetInUse(DB_AssetEntry *this, unsigned __int8 flag)
{
  ?SetInUse@DB_AssetEntry@@QEAAXE@Z(this, flag);
}

/*
==============
DB_AssetEntry::GetTypeName
==============
*/

const char *__fastcall DB_AssetEntry::GetTypeName(DB_AssetEntry *this)
{
  return ?GetTypeName@DB_AssetEntry@@QEBAPEBDXZ(this);
}

/*
==============
DB_AssetEntry::GetName
==============
*/
const char *DB_AssetEntry::GetName(DB_AssetEntry *this)
{
  __int64 m_type; 
  const void *physicsLibrary; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  m_type = this->m_type;
  physicsLibrary = this->m_header.physicsLibrary;
  if ( (unsigned int)m_type >= 0x71 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 62, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", m_type, 113) )
      __debugbreak();
    LODWORD(v7) = 113;
    LODWORD(v5) = m_type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 20, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  if ( !g_assetNameFieldValid[m_type] )
  {
    if ( (unsigned int)m_type >= 0x71 )
    {
      LODWORD(v6) = 113;
      LODWORD(v4) = m_type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v4, v6) )
        __debugbreak();
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 63, ASSERT_TYPE_ASSERT, "(DB_XAssetTypeHasName( type ))", "%s\n\tDB_GetXAssetHeaderName %s, 0x%p", "DB_XAssetTypeHasName( type )", g_assetNames[m_type], physicsLibrary) )
      __debugbreak();
  }
  if ( !physicsLibrary )
  {
    if ( (unsigned int)m_type >= 0x71 )
    {
      LODWORD(v6) = 113;
      LODWORD(v4) = m_type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v4, v6) )
        __debugbreak();
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 65, ASSERT_TYPE_ASSERT, "(header.data)", "%s\n\tDB_GetXAssetHeaderName %s, nullptr", "header.data", g_assetNames[m_type]) )
      __debugbreak();
  }
  return *(const char **)physicsLibrary;
}

/*
==============
DB_AssetEntry::ClearInUse
==============
*/
void DB_AssetEntry::ClearInUse(DB_AssetEntry *this, unsigned __int8 flag)
{
  if ( ((unsigned __int8)(flag - 1) & flag) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentry.h", 59, ASSERT_TYPE_ASSERT, "(IsPowerOf2( flag ))", (const char *)&queryFormat, "IsPowerOf2( flag )") )
    __debugbreak();
  this->m_inuse &= ~flag;
}

/*
==============
DB_AssetEntry::GetTypeName
==============
*/
const char *DB_AssetEntry::GetTypeName(DB_AssetEntry *this)
{
  __int64 m_type; 

  m_type = this->m_type;
  if ( (unsigned int)m_type >= 0x71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", this->m_type, 113) )
    __debugbreak();
  return g_assetNames[m_type];
}

/*
==============
DB_AssetEntry::SetInUse
==============
*/
void DB_AssetEntry::SetInUse(DB_AssetEntry *this, unsigned __int8 flag)
{
  if ( ((unsigned __int8)(flag - 1) & flag) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentry.h", 52, ASSERT_TYPE_ASSERT, "(IsPowerOf2( flag ))", (const char *)&queryFormat, "IsPowerOf2( flag )") )
    __debugbreak();
  this->m_inuse |= flag;
}

/*
==============
DB_AssetEntry::SetZoneIndex
==============
*/
void DB_AssetEntry::SetZoneIndex(DB_AssetEntry *this, unsigned int index)
{
  __int16 v2; 
  int v5; 

  v2 = index;
  if ( index >= 0x800 )
  {
    v5 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentry.h", 118, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( MAX_ASSETENTRY_ZONE_INDICES )", "index doesn't index MAX_ASSETENTRY_ZONE_INDICES\n\t%i not in [0, %i)", index, v5) )
      __debugbreak();
  }
  *((_WORD *)this + 9) &= 0xF800u;
  *((_WORD *)this + 9) |= v2 & 0x7FF;
}

/*
==============
DB_AssetEntry::TestInUse
==============
*/
bool DB_AssetEntry::TestInUse(DB_AssetEntry *this, unsigned __int8 testFlag)
{
  if ( !testFlag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetentry.h", 66, ASSERT_TYPE_ASSERT, "(testFlag != 0)", (const char *)&queryFormat, "testFlag != 0") )
    __debugbreak();
  return (this->m_inuse & testFlag) != 0;
}

