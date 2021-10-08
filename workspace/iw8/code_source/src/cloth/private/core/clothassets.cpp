/*
==============
Cloth_GetAssetList
==============
*/

void __fastcall Cloth_GetAssetList(const ClothAsset **const assets, unsigned int *numAssets, bool (__fastcall *optionalSort)(const ClothAsset *, const ClothAsset *))
{
  ?Cloth_GetAssetList@@YAXQEAPEBUClothAsset@@PEAIP6A_NPEBU1@2@Z@Z(assets, numAssets, optionalSort);
}

/*
==============
Cloth_CopyClothAsset
==============
*/

void __fastcall Cloth_CopyClothAsset(ClothAsset *from, ClothAsset *to)
{
  ?Cloth_CopyClothAsset@@YAXPEAUClothAsset@@0@Z(from, to);
}

/*
==============
Cloth_MoveClothAsset
==============
*/

void __fastcall Cloth_MoveClothAsset(ClothAsset *from, ClothAsset *to)
{
  ?Cloth_MoveClothAsset@@YAXPEAUClothAsset@@0@Z(from, to);
}

/*
==============
Cloth_SwapClothAsset
==============
*/

void __fastcall Cloth_SwapClothAsset(ClothAsset *from, ClothAsset *to)
{
  ?Cloth_SwapClothAsset@@YAXPEAUClothAsset@@0@Z(from, to);
}

/*
==============
Cloth_ReleaseClothAsset
==============
*/

void __fastcall Cloth_ReleaseClothAsset(ClothAsset *clothAsset, bool unloadData)
{
  ?Cloth_ReleaseClothAsset@@YAXPEAUClothAsset@@_N@Z(clothAsset, unloadData);
}

/*
==============
Cloth_AddClothAsset
==============
*/

void __fastcall Cloth_AddClothAsset(ClothAsset *clothAsset)
{
  ?Cloth_AddClothAsset@@YAXPEAUClothAsset@@@Z(clothAsset);
}

/*
==============
Cloth_AddClothAsset
==============
*/
void Cloth_AddClothAsset(ClothAsset *clothAsset)
{
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothassets.cpp", 33, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to AddClothAsset when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFA8072, "Cloth_AddClothAsset");
  HavokCloth_AddClothAsset(clothAsset);
  Sys_ProfEndNamedEvent();
}

/*
==============
Cloth_CopyClothAsset
==============
*/
void Cloth_CopyClothAsset(ClothAsset *from, ClothAsset *to)
{
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothassets.cpp", 93, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to CopyClothAsset when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFA8072, "Cloth_CopyClothAsset");
  HavokCloth_CopyClothAsset(from, to);
  Sys_ProfEndNamedEvent();
}

/*
==============
Cloth_GetAssetList
==============
*/
void Cloth_GetAssetList(const ClothAsset **const assets, unsigned int *numAssets, bool (*optionalSort)(const ClothAsset *, const ClothAsset *))
{
  if ( !assets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothassets.cpp", 108, ASSERT_TYPE_ASSERT, "(assets)", (const char *)&queryFormat, "assets") )
    __debugbreak();
  if ( !numAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothassets.cpp", 109, ASSERT_TYPE_ASSERT, "(numAssets)", (const char *)&queryFormat, "numAssets") )
    __debugbreak();
  *numAssets = 0;
  HavokCloth_GetAssetList(assets, numAssets, optionalSort);
}

/*
==============
Cloth_MoveClothAsset
==============
*/
void Cloth_MoveClothAsset(ClothAsset *from, ClothAsset *to)
{
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothassets.cpp", 78, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to MoveClothAsset when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFA8072, "Cloth_MoveClothAsset");
  HavokCloth_MoveClothAsset(from, to);
  Sys_ProfEndNamedEvent();
}

/*
==============
Cloth_ReleaseClothAsset
==============
*/
void Cloth_ReleaseClothAsset(ClothAsset *clothAsset, bool unloadData)
{
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothassets.cpp", 48, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to ReleaseClothAsset when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFA8072, "Cloth_ReleaseClothAsset");
  HavokCloth_ReleaseClothAsset(clothAsset, unloadData);
  Sys_ProfEndNamedEvent();
}

/*
==============
Cloth_SwapClothAsset
==============
*/
void Cloth_SwapClothAsset(ClothAsset *from, ClothAsset *to)
{
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cloth\\private\\core\\clothassets.cpp", 63, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", "%s\n\tCloth: Trying to SwapClothAsset when system is not initialized", "Cloth_IsInitialized()") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFA8072, "Cloth_SwapClothAsset");
  HavokCloth_SwapClothAsset(from, to);
  Sys_ProfEndNamedEvent();
}

