/*
==============
BG_Vehicle_Register
==============
*/

VehicleDef *__fastcall BG_Vehicle_Register(const char *name)
{
  return ?BG_Vehicle_Register@@YAPEAUVehicleDef@@PEBD@Z(name);
}

/*
==============
BG_Vehicle_Type_Compatible_GameProfile
==============
*/

bool __fastcall BG_Vehicle_Type_Compatible_GameProfile(VehicleType vehType, VehiclePhysicsGameProfile gameProfile)
{
  return ?BG_Vehicle_Type_Compatible_GameProfile@@YA_NW4VehicleType@@W4VehiclePhysicsGameProfile@@@Z(vehType, gameProfile);
}

/*
==============
BG_Vehicle_Register
==============
*/
VehicleDef *BG_Vehicle_Register(const char *name)
{
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_load_obj.cpp", 563, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_load_obj.cpp", 554, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
  }
  return DB_FindXAssetHeader(ASSET_TYPE_VEHICLE, name, 1).vehDef;
}

/*
==============
BG_Vehicle_Type_Compatible_GameProfile
==============
*/
char BG_Vehicle_Type_Compatible_GameProfile(VehicleType vehType, VehiclePhysicsGameProfile gameProfile)
{
  switch ( vehType )
  {
    case VEH_TREADED:
      return (unsigned __int8)gameProfile < VEH_GAMEPROFILE_JEEP;
    case VEH_CAR:
      if ( (unsigned __int8)(gameProfile - 2) > 3u && gameProfile != VEH_GAMEPROFILE_TWOWHEELED )
        return 0;
      break;
    case VEH_AIRCRAFT:
      return (unsigned __int8)(gameProfile - 6) <= 2u;
    case VEH_SEACRAFT:
      return gameProfile == VEH_GAMEPROFILE_BOAT;
  }
  return 1;
}

