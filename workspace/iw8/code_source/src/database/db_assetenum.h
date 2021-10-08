/*
==============
DB_GetAllXAssetOfType
==============
*/

int __fastcall DB_GetAllXAssetOfType(XAssetType type, XAssetHeader *assets, int maxCount)
{
  return ?DB_GetAllXAssetOfType@@YAHW4XAssetType@@PEATXAssetHeader@@H@Z(type, assets, maxCount);
}

/*
==============
DB_GetAllXAssetOfType
==============
*/
__int64 DB_GetAllXAssetOfType(XAssetType type, XAssetHeader *assets, int maxCount)
{
  unsigned int v3; 
  unsigned int v4; 
  DB_AssetEntryFlags *p_m_headEntries; 
  DB_AssetEntryPool *AssetEntryPool; 
  GetAllXAssetFunctor functor; 

  v3 = 0;
  functor.type = type;
  functor.assetCount = 0;
  functor.assets = assets;
  functor.maxCount = maxCount;
  DB_LockHashRead();
  v4 = 0;
  p_m_headEntries = &s_assetManager.table.m_headEntries;
  AssetEntryPool = DB_GetAssetEntryPool();
  do
  {
    DB_AssetEntryPool::MutableForEachInBlock<GetAllXAssetFunctor>(AssetEntryPool, &s_assetManager.table.m_headEntries, p_m_headEntries->m_flags.m_data[0], v3, &functor);
    v3 += 64;
    ++v4;
    p_m_headEntries = (DB_AssetEntryFlags *)((char *)p_m_headEntries + 8);
  }
  while ( v4 < 0x1768 );
  DB_UnlockHashRead();
  return (unsigned int)functor.assetCount;
}

