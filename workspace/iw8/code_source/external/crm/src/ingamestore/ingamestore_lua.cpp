/*
==============
InGameStore_Lua_EnumerateContent
==============
*/

int __fastcall InGameStore_Lua_EnumerateContent(lua_State *const L)
{
  return ?InGameStore_Lua_EnumerateContent@@YAHQEAUlua_State@@@Z(L);
}

/*
==============
InGameStore_Lua_GetCategories
==============
*/

int __fastcall InGameStore_Lua_GetCategories(lua_State *const L)
{
  return ?InGameStore_Lua_GetCategories@@YAHQEAUlua_State@@@Z(L);
}

/*
==============
InGameStore_Lua_SelectProduct
==============
*/

int __fastcall InGameStore_Lua_SelectProduct(lua_State *const L)
{
  return ?InGameStore_Lua_SelectProduct@@YAHQEAUlua_State@@@Z(L);
}

/*
==============
InGameStore_Lua_ShowStoreIcon
==============
*/

int __fastcall InGameStore_Lua_ShowStoreIcon(lua_State *const L)
{
  return ?InGameStore_Lua_ShowStoreIcon@@YAHQEAUlua_State@@@Z(L);
}

/*
==============
InGameStore_Lua_GetCategoryProducts
==============
*/

int __fastcall InGameStore_Lua_GetCategoryProducts(lua_State *const L)
{
  return ?InGameStore_Lua_GetCategoryProducts@@YAHQEAUlua_State@@@Z(L);
}

/*
==============
InGameStore_Lua_DeleteContent
==============
*/

int __fastcall InGameStore_Lua_DeleteContent(lua_State *const L)
{
  return ?InGameStore_Lua_DeleteContent@@YAHQEAUlua_State@@@Z(L);
}

/*
==============
InGameStore_Lua_GetCatalogStatus
==============
*/

int __fastcall InGameStore_Lua_GetCatalogStatus(lua_State *const L)
{
  return ?InGameStore_Lua_GetCatalogStatus@@YAHQEAUlua_State@@@Z(L);
}

/*
==============
InGameStore_Lua_FetchCatalog
==============
*/

int __fastcall InGameStore_Lua_FetchCatalog(lua_State *const L)
{
  return ?InGameStore_Lua_FetchCatalog@@YAHQEAUlua_State@@@Z(L);
}

/*
==============
InGameStore_RegisterLua
==============
*/

void __fastcall InGameStore_RegisterLua(lua_State *const L)
{
  ?InGameStore_RegisterLua@@YAXQEAUlua_State@@@Z(L);
}

/*
==============
InGameStore_Lua_GetProduct
==============
*/

int __fastcall InGameStore_Lua_GetProduct(lua_State *const L)
{
  return ?InGameStore_Lua_GetProduct@@YAHQEAUlua_State@@@Z(L);
}

/*
==============
InGameStore_Lua_FetchCatalog
==============
*/
__int64 InGameStore_Lua_FetchCatalog(lua_State *const L)
{
  int v2; 
  bool v3; 
  int v4; 
  bool Catalog; 

  if ( (j_lua_gettop(L) != 3 || !j_lua_isnumber(L, 1) || j_lua_type(L, 2) != 1 || j_lua_type(L, 3) != 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 29, ASSERT_TYPE_SANITY, "( lua_gettop( L ) == 3 && !!lua_isnumber( L, 1 ) && (lua_type(L, (2)) == 1) && (lua_type(L, (3)) == 1) )", (const char *)&queryFormat, "lua_gettop( L ) == 3 && lua_isinteger( L, 1 ) && lua_isboolean( L, 2 ) && lua_isboolean( L, 3 )") )
    __debugbreak();
  if ( j_lua_gettop(L) == 3 && j_lua_isnumber(L, 1) && j_lua_type(L, 2) == 1 && j_lua_type(L, 3) == 1 )
  {
    v2 = j_lua_tointeger(L, 1);
    v3 = j_lua_toboolean(L, 2) != 0;
    v4 = j_lua_toboolean(L, 3);
    Catalog = InGameStore_FetchCatalog(v2, v3, v4 != 0);
    j_lua_pushboolean(L, Catalog);
    return 1i64;
  }
  else
  {
    j_lua_pushboolean(L, 0);
    return 1i64;
  }
}

/*
==============
InGameStore_Lua_GetCatalogStatus
==============
*/
__int64 InGameStore_Lua_GetCatalogStatus(lua_State *const L)
{
  int v2; 
  InGameStoreCatalogStatus CatalogStatus; 
  int v5; 
  int v6; 

  if ( j_lua_gettop(L) != 1 )
  {
    v6 = 1;
    v5 = j_lua_gettop(L);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 47, ASSERT_TYPE_ASSERT, "( lua_gettop( L ) ) == ( 1 )", "%s == %s\n\t%i, %i", "lua_gettop( L )", "1", v5, v6) )
      __debugbreak();
  }
  if ( !j_lua_isnumber(L, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 48, ASSERT_TYPE_SANITY, "( !!lua_isnumber( L, 1 ) )", (const char *)&queryFormat, "lua_isinteger( L, 1 )") )
    __debugbreak();
  if ( j_lua_gettop(L) != 1 || !j_lua_isnumber(L, 1) )
    return 0i64;
  v2 = j_lua_tointeger(L, 1);
  CatalogStatus = InGameStore_GetCatalogStatus(v2);
  j_lua_pushinteger(L, CatalogStatus);
  return 1i64;
}

/*
==============
InGameStore_Lua_GetCategories
==============
*/
__int64 InGameStore_Lua_GetCategories(lua_State *const L)
{
  int v2; 
  InGameStoreCatalog *Catalog; 
  int v4; 
  const char **p_image; 
  int v7; 
  int v8; 

  if ( j_lua_gettop(L) != 1 )
  {
    v8 = 1;
    v7 = j_lua_gettop(L);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 63, ASSERT_TYPE_ASSERT, "( lua_gettop( L ) ) == ( 1 )", "%s == %s\n\t%i, %i", "lua_gettop( L )", "1", v7, v8) )
      __debugbreak();
  }
  if ( !j_lua_isnumber(L, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 64, ASSERT_TYPE_SANITY, "( !!lua_isnumber( L, 1 ) )", (const char *)&queryFormat, "lua_isinteger( L, 1 )") )
    __debugbreak();
  if ( j_lua_gettop(L) != 1 )
    return 0i64;
  if ( !j_lua_isnumber(L, 1) )
    return 0i64;
  v2 = j_lua_tointeger(L, 1);
  Catalog = InGameStore_GetCatalog(v2);
  if ( !Catalog )
    return 0i64;
  j_lua_createtable(L, 0, 0);
  v4 = 0;
  if ( Catalog->categoryCount > 0 )
  {
    p_image = &Catalog->categories[0].image;
    do
    {
      j_lua_pushinteger(L, ++v4);
      j_lua_createtable(L, 0, 0);
      j_lua_pushstring(L, *(p_image - 2));
      j_lua_setfield(L, -2, "categoryId");
      j_lua_pushstring(L, *(p_image - 1));
      j_lua_setfield(L, -2, "title");
      j_lua_pushstring(L, *p_image);
      j_lua_setfield(L, -2, "image");
      j_lua_pushstring(L, p_image[1]);
      j_lua_setfield(L, -2, "layout");
      j_lua_settable(L, -3);
      p_image += 66;
    }
    while ( v4 < Catalog->categoryCount );
  }
  return 1i64;
}

/*
==============
InGameStore_Lua_GetCategoryProducts
==============
*/
__int64 InGameStore_Lua_GetCategoryProducts(lua_State *const L)
{
  int v2; 
  const char *v3; 
  InGameStoreCatalog *Catalog; 
  InGameStoreCatalog *v5; 
  int v6; 
  int v7; 
  const char **i; 
  InGameStoreCategory *v10; 
  const char ***products; 
  int v12; 
  int v13; 

  if ( j_lua_gettop(L) != 2 )
  {
    v13 = 2;
    v12 = j_lua_gettop(L);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 106, ASSERT_TYPE_ASSERT, "( lua_gettop( L ) ) == ( 2 )", "%s == %s\n\t%i, %i", "lua_gettop( L )", "2", v12, v13) )
      __debugbreak();
  }
  if ( !j_lua_isnumber(L, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 107, ASSERT_TYPE_SANITY, "( !!lua_isnumber( L, 1 ) )", (const char *)&queryFormat, "lua_isinteger( L, 1 )") )
    __debugbreak();
  if ( !j_lua_isstring(L, 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 108, ASSERT_TYPE_SANITY, "( lua_isstring( L, 2 ) )", (const char *)&queryFormat, "lua_isstring( L, 2 )") )
    __debugbreak();
  if ( j_lua_gettop(L) != 2 )
    return 0i64;
  if ( !j_lua_isnumber(L, 1) )
    return 0i64;
  if ( !j_lua_isstring(L, 2) )
    return 0i64;
  v2 = j_lua_tointeger(L, 1);
  v3 = j_lua_tolstring(L, 2, NULL);
  Catalog = InGameStore_GetCatalog(v2);
  v5 = Catalog;
  if ( !Catalog )
    return 0i64;
  v6 = 0;
  v7 = 0;
  if ( Catalog->categoryCount <= 0 )
    return 0i64;
  for ( i = (const char **)Catalog; I_strcmp(v3, *i); i += 66 )
  {
    if ( ++v7 >= v5->categoryCount )
      return 0i64;
  }
  v10 = &v5->categories[v7];
  if ( !v10 )
    return 0i64;
  j_lua_createtable(L, 0, 0);
  if ( v10->productCount > 0 )
  {
    products = (const char ***)v10->products;
    do
    {
      j_lua_pushinteger(L, ++v6);
      j_lua_createtable(L, 0, 0);
      j_lua_pushstring(L, **products);
      j_lua_setfield(L, -2, "productId");
      j_lua_pushstring(L, (*products)[1]);
      j_lua_setfield(L, -2, "image");
      j_lua_pushstring(L, (*products)[2]);
      j_lua_setfield(L, -2, "popupImage");
      j_lua_pushstring(L, (*products)[3]);
      j_lua_setfield(L, -2, "title");
      j_lua_pushstring(L, (*products)[4]);
      j_lua_setfield(L, -2, "contentLong");
      j_lua_pushstring(L, (const char *)*products + 50);
      j_lua_setfield(L, -2, "price");
      j_lua_pushinteger(L, *((unsigned __int8 *)*products + 82));
      j_lua_setfield(L, -2, "currencyId");
      j_lua_pushinteger(L, *((int *)*products + 11));
      j_lua_setfield(L, -2, "status");
      j_lua_pushinteger(L, (int)(*((_DWORD *)*products + 22) << 20));
      j_lua_setfield(L, -2, "bytesDownloaded");
      j_lua_pushinteger(L, (int)(*((_DWORD *)*products + 24) << 20));
      j_lua_setfield(L, -2, "bytesTotal");
      j_lua_pushinteger(L, *((int *)*products + 26));
      j_lua_setfield(L, -2, "skuType");
      j_lua_settable(L, -3);
      ++products;
    }
    while ( v6 < v10->productCount );
  }
  return 1i64;
}

/*
==============
InGameStore_Lua_GetProduct
==============
*/
__int64 InGameStore_Lua_GetProduct(lua_State *const L)
{
  int v2; 
  const char *v3; 
  InGameStoreCatalog *Catalog; 
  InGameStoreCatalog *v5; 
  int v6; 
  const char **i; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  int v12; 

  if ( j_lua_gettop(L) != 2 )
  {
    v12 = 2;
    v11 = j_lua_gettop(L);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 186, ASSERT_TYPE_ASSERT, "( lua_gettop( L ) ) == ( 2 )", "%s == %s\n\t%i, %i", "lua_gettop( L )", "2", v11, v12) )
      __debugbreak();
  }
  if ( !j_lua_isnumber(L, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 187, ASSERT_TYPE_SANITY, "( !!lua_isnumber( L, 1 ) )", (const char *)&queryFormat, "lua_isinteger( L, 1 )") )
    __debugbreak();
  if ( !j_lua_isstring(L, 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 188, ASSERT_TYPE_SANITY, "( lua_isstring( L, 2 ) )", (const char *)&queryFormat, "lua_isstring( L, 2 )") )
    __debugbreak();
  if ( j_lua_gettop(L) != 2 )
    return 0i64;
  if ( !j_lua_isnumber(L, 1) )
    return 0i64;
  if ( !j_lua_isstring(L, 2) )
    return 0i64;
  v2 = j_lua_tointeger(L, 1);
  v3 = j_lua_tolstring(L, 2, NULL);
  Catalog = InGameStore_GetCatalog(v2);
  v5 = Catalog;
  if ( !Catalog )
    return 0i64;
  v6 = 0;
  if ( Catalog->productCount <= 0 )
    return 0i64;
  for ( i = &Catalog->products[0].productId; I_strcmp(v3, *i); i += 527 )
  {
    if ( ++v6 >= v5->productCount )
      return 0i64;
  }
  v9 = v6;
  v10 = (__int64)&v5->products[v9];
  if ( (InGameStoreCatalog *)((char *)v5 + v9 * 4216) == (InGameStoreCatalog *)-5288i64 )
    return 0i64;
  j_lua_createtable(L, 0, 0);
  j_lua_pushstring(L, *(const char **)v10);
  j_lua_setfield(L, -2, "productId");
  j_lua_pushstring(L, *(const char **)(v10 + 8));
  j_lua_setfield(L, -2, "image");
  j_lua_pushstring(L, *(const char **)(v10 + 16));
  j_lua_setfield(L, -2, "popupImage");
  j_lua_pushstring(L, *(const char **)(v10 + 24));
  j_lua_setfield(L, -2, "title");
  j_lua_pushstring(L, *(const char **)(v10 + 32));
  j_lua_setfield(L, -2, "contentLong");
  j_lua_pushstring(L, (const char *)(v10 + 50));
  j_lua_setfield(L, -2, "price");
  j_lua_pushinteger(L, *(unsigned __int8 *)(v10 + 82));
  j_lua_setfield(L, -2, "currencyId");
  j_lua_pushinteger(L, *(int *)(v10 + 44));
  j_lua_setfield(L, -2, "status");
  j_lua_pushinteger(L, (int)(*(_DWORD *)(v10 + 88) << 20));
  j_lua_setfield(L, -2, "bytesDownloaded");
  j_lua_pushinteger(L, (int)(*(_DWORD *)(v10 + 96) << 20));
  j_lua_setfield(L, -2, "bytesTotal");
  j_lua_pushinteger(L, *(int *)(v10 + 104));
  j_lua_setfield(L, -2, "skuType");
  return 1i64;
}

/*
==============
InGameStore_Lua_SelectProduct
==============
*/
__int64 InGameStore_Lua_SelectProduct(lua_State *const L)
{
  InGameStorePurchaseType v2; 
  int v3; 
  const char *v4; 
  unsigned int v5; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 

  if ( j_lua_gettop(L) < 2 || j_lua_gettop(L) > 3 )
  {
    v11 = 3;
    v10 = 2;
    v8 = j_lua_gettop(L);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 259, ASSERT_TYPE_ASSERT, "( 2 ) <= ( lua_gettop( L ) ) && ( lua_gettop( L ) ) <= ( 3 )", "lua_gettop( L ) not in [2, 3]\n\t%i not in [%i, %i]", v8, v10, v11) )
      __debugbreak();
  }
  if ( !j_lua_isnumber(L, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 260, ASSERT_TYPE_SANITY, "( !!lua_isnumber( L, 1 ) )", (const char *)&queryFormat, "lua_isinteger( L, 1 )") )
    __debugbreak();
  if ( !j_lua_isstring(L, 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 261, ASSERT_TYPE_SANITY, "( lua_isstring( L, 2 ) )", (const char *)&queryFormat, "lua_isstring( L, 2 )") )
    __debugbreak();
  if ( j_lua_gettop(L) >= 2 && j_lua_gettop(L) <= 3 && j_lua_isnumber(L, 1) && j_lua_isstring(L, 2) )
  {
    if ( j_lua_gettop(L) != 3 )
      goto LABEL_20;
    if ( !j_lua_isnumber(L, 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 270, ASSERT_TYPE_SANITY, "( !!lua_isnumber( L, 3 ) )", (const char *)&queryFormat, "lua_isinteger( L, 3 )") )
      __debugbreak();
    if ( j_lua_isnumber(L, 3) )
    {
LABEL_20:
      v2 = INGAMESTORE_PURCHASE_TYPE_CHECKOUT;
      v3 = j_lua_tointeger(L, 1);
      v4 = j_lua_tolstring(L, 2, NULL);
      if ( j_lua_gettop(L) == 3 )
      {
        v5 = j_lua_tointeger(L, 3);
        v2 = v5;
        if ( v5 >= 2 )
        {
          LODWORD(v9) = 2;
          LODWORD(v7) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 284, ASSERT_TYPE_ASSERT, "(unsigned)( purchaseType ) < (unsigned)( INGAMESTORE_PURCHASE_TYPE_COUNT )", "purchaseType doesn't index INGAMESTORE_PURCHASE_TYPE_COUNT\n\t%i not in [0, %i)", v7, v9) )
            __debugbreak();
        }
      }
      InGameStore_SelectProduct(v3, v4, v2);
    }
  }
  return 0i64;
}

/*
==============
InGameStore_Lua_EnumerateContent
==============
*/
__int64 InGameStore_Lua_EnumerateContent(lua_State *const L)
{
  int v3; 

  if ( j_lua_gettop(L) )
  {
    v3 = j_lua_gettop(L);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 295, ASSERT_TYPE_ASSERT, "( lua_gettop( L ) ) == ( 0 )", "%s == %s\n\t%i, %i", "lua_gettop( L )", "0", v3, 0i64) )
      __debugbreak();
  }
  if ( !j_lua_gettop(L) )
    InGameStore_EnumerateContent();
  return 0i64;
}

/*
==============
InGameStore_Lua_DeleteContent
==============
*/
__int64 InGameStore_Lua_DeleteContent(lua_State *const L)
{
  const char *v2; 
  int v4; 
  int v5; 

  if ( j_lua_gettop(L) != 2 )
  {
    v5 = 2;
    v4 = j_lua_gettop(L);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 309, ASSERT_TYPE_ASSERT, "( lua_gettop( L ) ) == ( 2 )", "%s == %s\n\t%i, %i", "lua_gettop( L )", "2", v4, v5) )
      __debugbreak();
  }
  if ( !j_lua_isnumber(L, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 310, ASSERT_TYPE_SANITY, "( !!lua_isnumber( L, 1 ) )", (const char *)&queryFormat, "lua_isinteger( L, 1 )") )
    __debugbreak();
  if ( !j_lua_isstring(L, 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 311, ASSERT_TYPE_SANITY, "( lua_isstring( L, 2 ) )", (const char *)&queryFormat, "lua_isstring( L, 2 )") )
    __debugbreak();
  if ( j_lua_gettop(L) == 2 && j_lua_isnumber(L, 1) && j_lua_isstring(L, 2) )
  {
    v2 = j_lua_tolstring(L, 2, NULL);
    InGameStore_DeleteContent(v2);
  }
  return 0i64;
}

/*
==============
InGameStore_Lua_ShowStoreIcon
==============
*/
__int64 InGameStore_Lua_ShowStoreIcon(lua_State *const L)
{
  bool v2; 
  InGameStoreStoreIconPosition v3; 
  unsigned int v4; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  int v10; 

  if ( j_lua_gettop(L) < 1 || j_lua_gettop(L) > 2 )
  {
    v10 = 2;
    v9 = 1;
    v7 = j_lua_gettop(L);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 327, ASSERT_TYPE_ASSERT, "( 1 ) <= ( lua_gettop( L ) ) && ( lua_gettop( L ) ) <= ( 2 )", "lua_gettop( L ) not in [1, 2]\n\t%i not in [%i, %i]", v7, v9, v10) )
      __debugbreak();
  }
  if ( j_lua_type(L, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 328, ASSERT_TYPE_SANITY, "( (lua_type(L, (1)) == 1) )", (const char *)&queryFormat, "lua_isboolean( L, 1 )") )
    __debugbreak();
  if ( j_lua_gettop(L) >= 1 && j_lua_gettop(L) <= 2 && j_lua_type(L, 1) == 1 )
  {
    if ( j_lua_gettop(L) != 2 )
      goto LABEL_16;
    if ( !j_lua_isnumber(L, 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 336, ASSERT_TYPE_SANITY, "( !!lua_isnumber( L, 2 ) )", (const char *)&queryFormat, "lua_isinteger( L, 2 )") )
      __debugbreak();
    if ( j_lua_isnumber(L, 2) )
    {
LABEL_16:
      v2 = j_lua_toboolean(L, 1) != 0;
      v3 = INGAMESTORE_STORE_ICON_POSITION_CENTER;
      if ( j_lua_gettop(L) == 2 )
      {
        v4 = j_lua_tointeger(L, 2);
        v3 = v4;
        if ( v4 >= 3 )
        {
          LODWORD(v8) = 3;
          LODWORD(v6) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\external\\crm\\src\\ingamestore\\ingamestore_lua.cpp", 348, ASSERT_TYPE_ASSERT, "(unsigned)( position ) < (unsigned)( INGAMESTORE_STORE_ICON_POSITION_COUNT )", "position doesn't index INGAMESTORE_STORE_ICON_POSITION_COUNT\n\t%i not in [0, %i)", v6, v8) )
            __debugbreak();
        }
      }
      InGameStore_ShowStoreIcon(v2, v3);
    }
  }
  return 0i64;
}

/*
==============
InGameStore_RegisterLua
==============
*/
void InGameStore_RegisterLua(lua_State *const L)
{
  j_luaL_register(L, "InGameStore", InGameStore_methods);
}

