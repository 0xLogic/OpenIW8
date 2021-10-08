/*
==============
BG_Camo_ClearNCS
==============
*/

void BG_Camo_ClearNCS(void)
{
  ?BG_Camo_ClearNCS@@YAXXZ();
}

/*
==============
BG_Camo_GetIndexFromScrString
==============
*/

unsigned int __fastcall BG_Camo_GetIndexFromScrString(const scr_string_t str)
{
  return ?BG_Camo_GetIndexFromScrString@@YAIW4scr_string_t@@@Z(str);
}

/*
==============
BG_Camo_GetWeaponDObjCamoParams
==============
*/

DObjCamoParams *__fastcall BG_Camo_GetWeaponDObjCamoParams(const Weapon *r_weapon, const bool viewModel, DObjCamoParams *outLocalParams)
{
  return ?BG_Camo_GetWeaponDObjCamoParams@@YAPEAUDObjCamoParams@@AEBUWeapon@@_NAEAU1@@Z(r_weapon, viewModel, outLocalParams);
}

/*
==============
BG_Camo_GetVehicleCamoCount
==============
*/

unsigned int __fastcall BG_Camo_GetVehicleCamoCount()
{
  return ?BG_Camo_GetVehicleCamoCount@@YAIXZ();
}

/*
==============
BG_Camo_GetCamo
==============
*/

const Camo *__fastcall BG_Camo_GetCamo(const unsigned int index)
{
  return ?BG_Camo_GetCamo@@YAPEBUCamo@@I@Z(index);
}

/*
==============
BG_Camo_GetVehicleCamo
==============
*/

const Camo *__fastcall BG_Camo_GetVehicleCamo(const unsigned int index)
{
  return ?BG_Camo_GetVehicleCamo@@YAPEBUCamo@@I@Z(index);
}

/*
==============
BG_Camo_GetVehicleCamoIndexFromScrString
==============
*/

unsigned int __fastcall BG_Camo_GetVehicleCamoIndexFromScrString(const scr_string_t str)
{
  return ?BG_Camo_GetVehicleCamoIndexFromScrString@@YAIW4scr_string_t@@@Z(str);
}

/*
==============
BG_Camo_GetCamoCount
==============
*/

unsigned int __fastcall BG_Camo_GetCamoCount()
{
  return ?BG_Camo_GetCamoCount@@YAIXZ();
}

/*
==============
BG_Camo_InitNCS
==============
*/

void __fastcall BG_Camo_InitNCS(const bool isFullInit)
{
  ?BG_Camo_InitNCS@@YAX_N@Z(isFullInit);
}

/*
==============
BG_Camo_ClearNCS
==============
*/
void BG_Camo_ClearNCS(void)
{
  unsigned __int8 v0; 
  unsigned int *p_ncsCamoCount; 

  v0 = 0;
  p_ncsCamoCount = &s_bgCamoGlob[0].ncsCamoCount;
  do
  {
    *((_BYTE *)p_ncsCamoCount - 4) = 0;
    *p_ncsCamoCount = 0;
    memset_0(p_ncsCamoCount - 513, 0, 0x800ui64);
    ++v0;
    p_ncsCamoCount += 514;
  }
  while ( v0 < 2u );
}

/*
==============
BG_Camo_GetCamo
==============
*/
Camo *BG_Camo_GetCamo(const unsigned int index)
{
  return s_bgCamoGlob[0].ncsCamos[index];
}

/*
==============
BG_Camo_GetCamoCount
==============
*/
__int64 BG_Camo_GetCamoCount()
{
  return s_bgCamoGlob[0].ncsCamoCount;
}

/*
==============
BG_Camo_GetIndexFromScrString
==============
*/
__int64 BG_Camo_GetIndexFromScrString(BG_CamoType camoType, const scr_string_t str)
{
  __int64 v4; 
  BG_CamoGlob *v5; 
  unsigned int ncsCamoCount; 
  __int64 result; 
  int v8; 
  int v9; 

  if ( (unsigned __int8)camoType >= ENUM_CAMO_TYPE_COUNT )
  {
    v9 = 2;
    v8 = (unsigned __int8)camoType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camo.cpp", 167, ASSERT_TYPE_ASSERT, "(unsigned)( camoType ) < (unsigned)( ENUM_CAMO_TYPE_COUNT )", "camoType doesn't index ENUM_CAMO_TYPE_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v4 = (unsigned __int8)camoType;
  v5 = &s_bgCamoGlob[v4];
  if ( !s_bgCamoGlob[v4].ncsCamosInited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camo.cpp", 169, ASSERT_TYPE_ASSERT, "(camoGlob.ncsCamosInited)", (const char *)&queryFormat, "camoGlob.ncsCamosInited") )
    __debugbreak();
  ncsCamoCount = s_bgCamoGlob[v4].ncsCamoCount;
  result = 0i64;
  if ( !ncsCamoCount )
    return 0xFFFFFFFFi64;
  while ( v5->ncsCamos[0]->internalName != str )
  {
    result = (unsigned int)(result + 1);
    v5 = (BG_CamoGlob *)((char *)v5 + 8);
    if ( (unsigned int)result >= ncsCamoCount )
      return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
BG_Camo_GetIndexFromScrString
==============
*/
__int64 BG_Camo_GetIndexFromScrString(const scr_string_t str)
{
  return BG_Camo_GetIndexFromScrString(ENUM_WEAPON_CAMO, str);
}

/*
==============
BG_Camo_GetVehicleCamo
==============
*/
Camo *BG_Camo_GetVehicleCamo(const unsigned int index)
{
  __int64 v1; 

  v1 = index;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camo.cpp", 262, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_CAMO ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_CAMO )") )
    __debugbreak();
  return s_bgCamoGlob[1].ncsCamos[v1];
}

/*
==============
BG_Camo_GetVehicleCamoCount
==============
*/
__int64 BG_Camo_GetVehicleCamoCount()
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camo.cpp", 269, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_CAMO ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_CAMO )") )
    __debugbreak();
  return s_bgCamoGlob[1].ncsCamoCount;
}

/*
==============
BG_Camo_GetVehicleCamoIndexFromScrString
==============
*/
__int64 BG_Camo_GetVehicleCamoIndexFromScrString(const scr_string_t str)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camo.cpp", 276, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_CAMO ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_CAMO )") )
    __debugbreak();
  return BG_Camo_GetIndexFromScrString(ENUM_VEHICLE_CAMO, str);
}

/*
==============
BG_Camo_GetWeaponDObjCamoParams
==============
*/
DObjCamoParams *BG_Camo_GetWeaponDObjCamoParams(const Weapon *r_weapon, const bool viewModel, DObjCamoParams *outLocalParams)
{
  __int64 weaponCamo; 
  DObjCamoParams *result; 
  const Camo *v7; 

  if ( !BG_WeaponIsUsingCamo(r_weapon) )
    return 0i64;
  weaponCamo = r_weapon->weaponCamo;
  if ( (unsigned int)weaponCamo >= s_bgCamoGlob[0].ncsCamoCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camo.cpp", 242, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Camo index out of range: %d >= %d", weaponCamo, s_bgCamoGlob[0].ncsCamoCount) )
      __debugbreak();
    return 0i64;
  }
  v7 = s_bgCamoGlob[0].ncsCamos[weaponCamo];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camo.cpp", 247, ASSERT_TYPE_ASSERT, "(camo)", (const char *)&queryFormat, "camo") )
    __debugbreak();
  outLocalParams->camo = v7;
  result = outLocalParams;
  outLocalParams->overrideType = MATERIAL_OVERRIDETYPE_CAMO;
  return result;
}

/*
==============
BG_Camo_InitNCS
==============
*/
void BG_Camo_InitNCS(const bool isFullInit)
{
  InitCamoGlob_0_(isFullInit);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE) )
  {
    InitCamoGlob_1_(isFullInit);
  }
  else if ( isFullInit )
  {
    s_bgCamoGlob[1].ncsCamosInited = 0;
    s_bgCamoGlob[1].ncsCamoCount = 0;
    memset_0(&s_bgCamoGlob[1], 0, 0x800ui64);
  }
}

