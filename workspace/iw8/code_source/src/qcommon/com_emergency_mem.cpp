/*
==============
Com_EmergencyMemory_GetSize
==============
*/

unsigned __int64 __fastcall Com_EmergencyMemory_GetSize()
{
  return ?Com_EmergencyMemory_GetSize@@YA_KXZ();
}

/*
==============
Com_EmergencyMemory_Update
==============
*/

void Com_EmergencyMemory_Update(void)
{
  ?Com_EmergencyMemory_Update@@YAXXZ();
}

/*
==============
Com_EmergencyMemory_GetCurrentAllocationSize
==============
*/

unsigned __int64 __fastcall Com_EmergencyMemory_GetCurrentAllocationSize()
{
  return ?Com_EmergencyMemory_GetCurrentAllocationSize@@YA_KXZ();
}

/*
==============
Com_EmergencyMemory_Init
==============
*/

void Com_EmergencyMemory_Init(void)
{
  ?Com_EmergencyMemory_Init@@YAXXZ();
}

/*
==============
Com_EmergencyMemory_GetCurrentAllocationSize
==============
*/
unsigned __int64 Com_EmergencyMemory_GetCurrentAllocationSize()
{
  return s_currentEmergencyAllocation;
}

/*
==============
Com_EmergencyMemory_GetSize
==============
*/
unsigned __int64 Com_EmergencyMemory_GetSize()
{
  __int64 integer; 

  integer = 0i64;
  if ( Com_GameMode_SupportsFeature(WEAPON_LADDER_SLIDE|0x80) )
  {
    if ( !com_emergencymem_sp_base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_emergency_mem.cpp", 86, ASSERT_TYPE_ASSERT, "(com_emergencymem_sp_base)", (const char *)&queryFormat, "com_emergencymem_sp_base") )
      __debugbreak();
    integer = com_emergencymem_sp_base->current.integer;
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_LADDER_AIM|0x80) )
    return integer;
  if ( !com_emergencymem_mp_base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_emergency_mem.cpp", 96, ASSERT_TYPE_ASSERT, "(com_emergencymem_mp_base)", (const char *)&queryFormat, "com_emergencymem_mp_base") )
    __debugbreak();
  return integer + com_emergencymem_mp_base->current.integer;
}

/*
==============
Com_EmergencyMemory_Init
==============
*/
void Com_EmergencyMemory_Init(void)
{
  Dvar_BeginPermanentRegistration();
  com_emergencymem_sp_base = Dvar_RegisterInt("LOOSSMPPLR", 40894464, 0, 0x40000000, 0, "Emergency mem reserve - Dev only allocation to reserve mem for future postship DLC");
  com_emergencymem_mp_base = Dvar_RegisterInt("MRMPOLKNOR", 141557760, 0, 0x40000000, 0, "Emergency mem reserve - Dev only allocation to reserve mem for future postship DLC");
  Dvar_EndPermanentRegistration();
}

/*
==============
Com_EmergencyMemory_Update
==============
*/
void Com_EmergencyMemory_Update(void)
{
  unsigned __int64 integer; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_emergency_mem.cpp", 60, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  integer = 0i64;
  if ( !Mem_Paged_GetDevMemorySize() )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_LADDER_SLIDE|0x80) )
    {
      if ( !com_emergencymem_sp_base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_emergency_mem.cpp", 86, ASSERT_TYPE_ASSERT, "(com_emergencymem_sp_base)", (const char *)&queryFormat, "com_emergencymem_sp_base") )
        __debugbreak();
      integer = com_emergencymem_sp_base->current.integer;
    }
    if ( Com_GameMode_SupportsFeature(WEAPON_LADDER_AIM|0x80) )
    {
      if ( !com_emergencymem_mp_base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_emergency_mem.cpp", 96, ASSERT_TYPE_ASSERT, "(com_emergencymem_mp_base)", (const char *)&queryFormat, "com_emergencymem_mp_base") )
        __debugbreak();
      integer += com_emergencymem_mp_base->current.integer;
    }
  }
  if ( integer != s_currentEmergencyAllocation )
  {
    PMem_UpdateStashedMemory(STASHED_EMERGENCY, integer);
    s_currentEmergencyAllocation = integer;
  }
}

