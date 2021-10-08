/*
==============
CgStaticGlobalsMP::FreeLocalClientStaticGlobals
==============
*/

void CgStaticGlobalsMP::FreeLocalClientStaticGlobals(void)
{
  ?FreeLocalClientStaticGlobals@CgStaticGlobalsMP@@SAXXZ();
}

/*
==============
CgStaticGlobalsMP::FreeLocalClientStaticGlobals
==============
*/
void CgStaticGlobalsMP::FreeLocalClientStaticGlobals(void)
{
  int v0; 
  __int64 v1; 
  cgs_t **v2; 
  __int64 v3; 

  if ( cgs_t::ms_allocatedType == STATIC_GLOB_TYPE_SP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_static_mp.cpp", 13, ASSERT_TYPE_ASSERT, "(CG_StaticGlobals_GetType() != CgStaticGlobalsType::STATIC_GLOB_TYPE_SP)", "%s\n\tTrying to free multiplayer client globals but single-player client globals are allocated\n", "CG_StaticGlobals_GetType() != CgStaticGlobalsType::STATIC_GLOB_TYPE_SP") )
    __debugbreak();
  if ( cgs_t::ms_allocatedType == STATIC_GLOB_TYPE_MP )
  {
    if ( cgs_t::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_static_mp.cpp", 17, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgStaticGlobalsMP::FreeLocalClientGlobals: Trying to free multiplayer client globals but no client globals have been allocated\n", "ms_allocatedCount > 0") )
      __debugbreak();
    v0 = cgs_t::ms_allocatedCount - 1;
    if ( cgs_t::ms_allocatedCount - 1 >= 0 )
    {
      v1 = v0;
      v2 = &cgs_t::ms_cgsArray[v0];
      v3 = v1 * 464872;
      do
      {
        ((void (__fastcall *)(char *, _QWORD))s_clientStaticGlobalsArrayMP[v1].~cgs_t)((char *)s_clientStaticGlobalsArrayMP + v3, 0i64);
        --v0;
        *v2 = NULL;
        v3 -= 464872i64;
        --v1;
        --v2;
      }
      while ( v0 >= 0 );
    }
    DebugWipe(s_clientStaticGlobalsArrayMP, 464872i64 * cgs_t::ms_allocatedCount);
    s_clientStaticGlobalsArrayMP = NULL;
  }
  cgs_t::ms_allocatedType = STATIC_GLOB_TYPE_UNKNOWN;
  cgs_t::ms_allocatedCount = 0;
}

