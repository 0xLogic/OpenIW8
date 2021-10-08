/*
==============
CgGlobalsSP::GetLocalClientGlobals
==============
*/

CgGlobalsSP *__fastcall CgGlobalsSP::GetLocalClientGlobals(const LocalClientNum_t localClientNum)
{
  return ?GetLocalClientGlobals@CgGlobalsSP@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgGlobalsSP::GetLocalClientGlobals
==============
*/
cg_t *CgGlobalsSP::GetLocalClientGlobals(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  CgGlobalsType v4; 

  v1 = localClientNum;
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  if ( (_DWORD)v1 )
  {
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.h", 69, ASSERT_TYPE_ASSERT, "( ( localClientNum == CL_GetOnlyLocalClientNum() ) )", "( localClientNum ) = %i", v3) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType != GLOB_TYPE_SP )
  {
    v4 = cg_t::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.h", 70, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_SP)", "%s\n\tCgGlobalsSP::GetLocalClientGlobals: Trying to get single-player globals but the globals were not allocated as single-player. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_SP", v4) )
      __debugbreak();
  }
  return cg_t::ms_cgArray[v1];
}

