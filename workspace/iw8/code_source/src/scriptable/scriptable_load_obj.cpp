/*
==============
IsLootCacheClassname
==============
*/

bool __fastcall IsLootCacheClassname(const char *classname)
{
  return ?IsLootCacheClassname@@YA_NPEBD@Z(classname);
}

/*
==============
IsLootCacheClassname
==============
*/
char IsLootCacheClassname(const char *classname)
{
  const char *v1; 
  __int64 v3; 
  signed __int64 v4; 
  int v5; 
  __int64 v6; 
  int v7; 
  int v8; 
  int v9; 

  v1 = "scriptable_br_loot_cache";
  v3 = 24i64;
  if ( !classname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v4 = classname - "scriptable_br_loot_cache";
  while ( 1 )
  {
    v5 = (unsigned __int8)v1[v4];
    v6 = v3;
    v7 = *(unsigned __int8 *)v1++;
    --v3;
    if ( !v6 )
      return 1;
    if ( v5 != v7 )
    {
      v8 = v5 + 32;
      if ( (unsigned int)(v5 - 65) > 0x19 )
        v8 = v5;
      v5 = v8;
      v9 = v7 + 32;
      if ( (unsigned int)(v7 - 65) > 0x19 )
        v9 = v7;
      if ( v5 != v9 )
        break;
    }
    if ( !v5 )
      return 1;
  }
  return 0;
}

