/*
==============
CL_GetOnlyLocalClientNum
==============
*/

LocalClientNum_t __fastcall CL_GetOnlyLocalClientNum()
{
  return ?CL_GetOnlyLocalClientNum@@YA?AW4LocalClientNum_t@@XZ();
}

/*
==============
CL_GetOnlyLocalClientNum
==============
*/
__int64 CL_GetOnlyLocalClientNum()
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  return 0i64;
}

