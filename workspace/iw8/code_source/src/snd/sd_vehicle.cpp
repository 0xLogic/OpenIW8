/*
==============
SD_VehicleInit
==============
*/

void SD_VehicleInit(void)
{
  ?SD_VehicleInit@@YAXXZ();
}

/*
==============
SD_VehicleInit
==============
*/

void __fastcall SD_VehicleInit(sd_vehicle *vehicle)
{
  ?SD_VehicleInit@@YAXPEAUsd_vehicle@@@Z(vehicle);
}

/*
==============
SD_VehicleInit
==============
*/
void SD_VehicleInit(sd_vehicle *vehicle)
{
  if ( vehicle )
  {
    vehicle->lastUpdateTimeMs = g_snd.time;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_vehicle.cpp", 11, ASSERT_TYPE_ASSERT, "(vehicle)", (const char *)&queryFormat, "vehicle") )
      __debugbreak();
    MEMORY[0x10] = g_snd.time;
  }
}

/*
==============
SD_VehicleInit
==============
*/
void SD_VehicleInit(void)
{
  sd_vehicle *vehicles; 

  vehicles = g_sd.vehicles;
  do
  {
    if ( !vehicles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\snd\\sd_vehicle.cpp", 11, ASSERT_TYPE_ASSERT, "(vehicle)", (const char *)&queryFormat, "vehicle") )
      __debugbreak();
    vehicles->lastUpdateTimeMs = g_snd.time;
    ++vehicles;
  }
  while ( (__int64)vehicles < (__int64)&g_sd.vehicles[5] );
}

