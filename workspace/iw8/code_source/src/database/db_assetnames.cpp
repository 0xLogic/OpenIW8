/*
==============
DB_GetXAssetTypeFromTypeName
==============
*/

int __fastcall DB_GetXAssetTypeFromTypeName(const char *name)
{
  return ?DB_GetXAssetTypeFromTypeName@@YAHPEBD@Z(name);
}

/*
==============
DB_DevFastfileIgnoresAssetTypeInMainFF
==============
*/

bool __fastcall DB_DevFastfileIgnoresAssetTypeInMainFF(XAssetType type)
{
  return ?DB_DevFastfileIgnoresAssetTypeInMainFF@@YA_NW4XAssetType@@@Z(type);
}

/*
==============
DB_DevFastfileIgnoresAssetTypeInMainFF
==============
*/
bool DB_DevFastfileIgnoresAssetTypeInMainFF(XAssetType type)
{
  return ((type - 13) & 0xFFFFFFFD) == 0;
}

/*
==============
DB_GetXAssetTypeFromTypeName
==============
*/
__int64 DB_GetXAssetTypeFromTypeName(const char *name)
{
  const char *const *v2; 
  unsigned int i; 
  const char *v4; 
  __int64 v5; 
  const char *v6; 
  char v7; 
  __int64 v8; 
  char v9; 

  v2 = g_assetNames;
  for ( i = 0; i < 0x71; ++i )
  {
    v4 = *v2;
    v5 = 0x7FFFFFFFi64;
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v6 = (const char *)(name - v4);
    while ( 1 )
    {
      v7 = v4[(_QWORD)v6];
      v8 = v5;
      v9 = *v4++;
      --v5;
      if ( !v8 )
        return i;
      if ( v7 != v9 )
        break;
      if ( !v7 )
        return i;
    }
    ++v2;
  }
  return 113i64;
}

