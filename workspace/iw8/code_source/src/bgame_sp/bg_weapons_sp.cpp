/*
==============
BG_WeaponsSP_AreWeaponModelsLoaded
==============
*/

bool __fastcall BG_WeaponsSP_AreWeaponModelsLoaded(const Weapon *weapon, const bool viewModel)
{
  return ?BG_WeaponsSP_AreWeaponModelsLoaded@@YA_NAEBUWeapon@@_N@Z(weapon, viewModel);
}

/*
==============
BG_WeaponsSP_AreWeaponModelsLoaded
==============
*/
char BG_WeaponsSP_AreWeaponModelsLoaded(const Weapon *weapon, const bool viewModel)
{
  int v2; 
  unsigned int WeaponStreamedModels; 
  const XModel **i; 
  const XModel *outList[32]; 

  v2 = 0;
  WeaponStreamedModels = BG_GetWeaponStreamedModels(weapon, (const XModel *(*)[32])outList, viewModel);
  if ( !WeaponStreamedModels )
    return 1;
  for ( i = outList; ; ++i )
  {
    if ( !*i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame_sp\\bg_weapons_sp.cpp", 16, ASSERT_TYPE_ASSERT, "(weaponModels[i])", (const char *)&queryFormat, "weaponModels[i]") )
      __debugbreak();
    if ( ((*i)->flags & 0x18000) != 0 )
      break;
    if ( ++v2 >= WeaponStreamedModels )
      return 1;
  }
  return 0;
}

