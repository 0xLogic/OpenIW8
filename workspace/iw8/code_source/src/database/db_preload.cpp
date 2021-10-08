/*
==============
Postload_XAssetArrayCustom
==============
*/

void Postload_XAssetArrayCustom(void)
{
  ?Postload_XAssetArrayCustom@@YAXXZ();
}

/*
==============
Preload_XAssetArrayCustom
==============
*/

DB_LoadXFileReturn __fastcall Preload_XAssetArrayCustom(const bool wasPaused)
{
  return ?Preload_XAssetArrayCustom@@YA?AW4DB_LoadXFileReturn@@_N@Z(wasPaused);
}

/*
==============
Postload_XAssetArrayCustom
==============
*/
void Postload_XAssetArrayCustom(void)
{
  XAssetList *v0; 
  unsigned __int8 *assets; 
  unsigned int assetCount; 
  unsigned __int64 v3; 
  unsigned int v4; 
  __int64 type; 
  __int64 v6; 
  __int64 v7; 

  v0 = varXAssetList;
  if ( !varXAssetList )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload.cpp", (_DWORD)varXAssetList + 56, ASSERT_TYPE_ASSERT, "(varXAssetList)", (const char *)&queryFormat, "varXAssetList") )
      __debugbreak();
    v0 = varXAssetList;
  }
  if ( v0->assetReadPos != v0->assetCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload.cpp", 57, ASSERT_TYPE_ASSERT, "(varXAssetList->assetReadPos == varXAssetList->assetCount)", (const char *)&queryFormat, "varXAssetList->assetReadPos == varXAssetList->assetCount") )
      __debugbreak();
    v0 = varXAssetList;
  }
  assets = (unsigned __int8 *)v0->assets;
  if ( assets )
  {
    assetCount = v0->assetCount;
    if ( assetCount )
    {
      v3 = 16i64 * assetCount;
      if ( assets != g_streamPosGlob.pos )
      {
        DB_PatchMem_ValidatePostloadStream(AtStart, assets, 16i64 * assetCount);
        v0 = varXAssetList;
      }
      if ( v3 )
      {
        if ( v3 > 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload_inline.h", 98, ASSERT_TYPE_ASSERT, "(size <= 2147483647i32)", (const char *)&queryFormat, "size <= INT32_MAX") )
          __debugbreak();
        DB_IncStreamPos(v3);
        v0 = varXAssetList;
      }
      v4 = 0;
      if ( v0->assetCount )
      {
        do
        {
          varXAsset = &v0->assets[v4];
          type = varXAsset->type;
          if ( (unsigned int)type >= 0x71 )
          {
            LODWORD(v7) = 113;
            LODWORD(v6) = varXAsset->type;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnames.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ASSET_TYPE_COUNT )", "type doesn't index ASSET_TYPE_COUNT\n\t%i not in [0, %i)", v6, v7) )
              __debugbreak();
          }
          ProfLoad_DB_Begin(g_assetNames[type]);
          Postload_XAsset(NotAtStart);
          ProfLoad_DB_End();
          v0 = varXAssetList;
          ++v4;
        }
        while ( v4 < varXAssetList->assetCount );
      }
    }
  }
}

/*
==============
Preload_XAssetArrayCustom
==============
*/
__int64 Preload_XAssetArrayCustom(const bool wasPaused)
{
  XAssetList *v1; 
  unsigned int assetCount; 
  unsigned int assetReadPos; 
  const char *XAssetTypeName; 

  v1 = varXAssetList;
  if ( !varXAssetList )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload.cpp", 16, ASSERT_TYPE_ASSERT, "(varXAssetList)", (const char *)&queryFormat, "varXAssetList") )
      __debugbreak();
    v1 = varXAssetList;
  }
  if ( !v1->assets )
    goto LABEL_13;
  assetCount = v1->assetCount;
  if ( !assetCount )
    goto LABEL_13;
  if ( !wasPaused )
  {
    Load_Stream(AtStart, v1->assets, 16i64 * assetCount);
    v1 = varXAssetList;
  }
  assetReadPos = v1->assetReadPos;
  if ( assetReadPos < v1->assetCount )
  {
    while ( !DB_IsCurrentFastfileLoadCancelled() )
    {
      if ( DB_IsCurrentFastfileLoadPaused() )
        return 1i64;
      varXAsset = &varXAssetList->assets[assetReadPos];
      XAssetTypeName = DB_GetXAssetTypeName(varXAsset->type);
      ProfLoad_DB_Begin(XAssetTypeName);
      Preload_XAsset(NotAtStart);
      ProfLoad_DB_End();
      ++assetReadPos;
      ++varXAssetList->assetReadPos;
      v1 = varXAssetList;
      if ( assetReadPos >= varXAssetList->assetCount )
        goto LABEL_13;
    }
    return 2i64;
  }
  else
  {
LABEL_13:
    if ( v1->assetReadPos != v1->assetCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_preload.cpp", 46, ASSERT_TYPE_ASSERT, "(varXAssetList->assetReadPos == varXAssetList->assetCount)", (const char *)&queryFormat, "varXAssetList->assetReadPos == varXAssetList->assetCount") )
      __debugbreak();
    return 0i64;
  }
}

