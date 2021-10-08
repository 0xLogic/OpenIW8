/*
==============
DB_EnumSafeXAssets
==============
*/

void __fastcall DB_EnumSafeXAssets(XAssetType type, void (__fastcall *func)(XAssetHeader, void *), void *inData)
{
  ?DB_EnumSafeXAssets@@YAXW4XAssetType@@P6AXTXAssetHeader@@PEAX@Z2@Z(type, func, inData);
}

/*
==============
DB_EnumXAssets
==============
*/

void __fastcall DB_EnumXAssets(XAssetType type, void (__fastcall *func)(XAssetHeader, void *), void *inData, bool includeStashed)
{
  ?DB_EnumXAssets@@YAXW4XAssetType@@P6AXTXAssetHeader@@PEAX@Z2_N@Z(type, func, inData, includeStashed);
}

/*
==============
DB_EnumSafeXAssets
==============
*/

void __fastcall DB_EnumSafeXAssets(XAssetType type, void (__fastcall *func)(XAssetHeader, void *), void *inData)
{
  DB_EnumSafeXAssets_FastFile(type, func, inData);
}

/*
==============
DB_EnumXAssets
==============
*/

void __fastcall DB_EnumXAssets(XAssetType type, void (__fastcall *func)(XAssetHeader, void *), void *inData, bool includeStashed)
{
  DB_EnumXAssets_FastFile(type, func, inData, includeStashed);
}

