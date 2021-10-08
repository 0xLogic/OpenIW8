/*
==============
Particle_GetRandomAssetWithIndex
==============
*/

const ParticleLinkedAssetDef *__fastcall Particle_GetRandomAssetWithIndex(const ParticleLinkedAssetListDef *pLinkedAssetList, int seed, FxRandKey key, int *outAssetIndex)
{
  return ?Particle_GetRandomAssetWithIndex@@YAAEBTParticleLinkedAssetDef@@PEBUParticleLinkedAssetListDef@@HW4FxRandKey@@AEAH@Z(pLinkedAssetList, seed, key, outAssetIndex);
}

/*
==============
Particle_RandomIndex
==============
*/

int __fastcall Particle_RandomIndex(int seed, FxRandKey key, int count)
{
  return ?Particle_RandomIndex@@YAHHW4FxRandKey@@H@Z(seed, key, count);
}

/*
==============
Particle_GetRandomAsset
==============
*/

const ParticleLinkedAssetDef *__fastcall Particle_GetRandomAsset(const ParticleLinkedAssetListDef *pLinkedAssetList, int seed, FxRandKey key)
{
  return ?Particle_GetRandomAsset@@YAAEBTParticleLinkedAssetDef@@PEBUParticleLinkedAssetListDef@@HW4FxRandKey@@@Z(pLinkedAssetList, seed, key);
}

/*
==============
Particle_GetRandomAsset
==============
*/
ParticleLinkedAssetDef *Particle_GetRandomAsset(const ParticleLinkedAssetListDef *pLinkedAssetList, int seed, FxRandKey key)
{
  Particle_VerifyAssetList(pLinkedAssetList);
  return &pLinkedAssetList->assetList[Particle_RandomIndex(seed, key, pLinkedAssetList->numAssets)];
}

/*
==============
Particle_RandomIndex
==============
*/
__int64 Particle_RandomIndex(int seed, FxRandKey key, int count)
{
  unsigned int v6; 
  __int64 v8; 
  int v9; 

  if ( count <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlerandom.h", 74, ASSERT_TYPE_ASSERT, "(count > 0)", (const char *)&queryFormat, "count > 0") )
    __debugbreak();
  v6 = abs32((count * LOWORD(fx_randomTable[seed + key])) >> 16);
  if ( v6 >= count )
  {
    v9 = count;
    LODWORD(v8) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlerandom.h", 78, ASSERT_TYPE_ASSERT, "(unsigned)( randomIndex ) < (unsigned)( count )", "randomIndex doesn't index count\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  return v6;
}

/*
==============
Particle_GetRandomAssetWithIndex
==============
*/
ParticleLinkedAssetDef *Particle_GetRandomAssetWithIndex(const ParticleLinkedAssetListDef *pLinkedAssetList, int seed, FxRandKey key, int *outAssetIndex)
{
  int v8; 

  if ( !pLinkedAssetList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 215, ASSERT_TYPE_ASSERT, "(pLinkedAssetList)", (const char *)&queryFormat, "pLinkedAssetList") )
    __debugbreak();
  if ( !pLinkedAssetList->assetList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 216, ASSERT_TYPE_ASSERT, "(pLinkedAssetList->assetList)", (const char *)&queryFormat, "pLinkedAssetList->assetList") )
    __debugbreak();
  if ( pLinkedAssetList->numAssets <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 217, ASSERT_TYPE_ASSERT, "(pLinkedAssetList->numAssets > 0)", (const char *)&queryFormat, "pLinkedAssetList->numAssets > 0") )
    __debugbreak();
  v8 = Particle_RandomIndex(seed, key, pLinkedAssetList->numAssets);
  *outAssetIndex = v8;
  return &pLinkedAssetList->assetList[v8];
}

