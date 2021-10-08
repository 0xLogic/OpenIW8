/*
==============
CgStaticGlobalsSP::ClearLocalClientStaticGlobals
==============
*/

void __fastcall CgStaticGlobalsSP::ClearLocalClientStaticGlobals(const LocalClientNum_t localClientNum)
{
  ?ClearLocalClientStaticGlobals@CgStaticGlobalsSP@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgStaticGlobalsSP::FreeLocalClientStaticGlobals
==============
*/

void CgStaticGlobalsSP::FreeLocalClientStaticGlobals(void)
{
  ?FreeLocalClientStaticGlobals@CgStaticGlobalsSP@@SAXXZ();
}

/*
==============
CgStaticGlobalsSP::AllocateLocalClientStaticGlobals
==============
*/

void __fastcall CgStaticGlobalsSP::AllocateLocalClientStaticGlobals(HunkUser *hunkUser, const int maxLocalClients)
{
  ?AllocateLocalClientStaticGlobals@CgStaticGlobalsSP@@SAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgStaticGlobalsSP::AllocateLocalClientStaticGlobals
==============
*/
void CgStaticGlobalsSP::AllocateLocalClientStaticGlobals(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  CgStaticGlobalsSP *v6; 
  __int64 v7; 
  CGCorpseInfoMP *corpseinfo; 
  CGCorpseInfoMP *agentCorpseInfo; 
  __int64 v10; 
  int v12; 

  v2 = maxLocalClients;
  v3 = 0i64;
  if ( (unsigned int)maxLocalClients > 2 )
  {
    v12 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_static_sp.cpp", 17, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", maxLocalClients, 0i64, v12) )
      __debugbreak();
  }
  if ( s_clientStaticGlobalsArraySP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_static_sp.cpp", 18, ASSERT_TYPE_ASSERT, "(!s_clientStaticGlobalsArraySP)", (const char *)&queryFormat, "!s_clientStaticGlobalsArraySP") )
    __debugbreak();
  s_clientStaticGlobalsArraySP = (CgStaticGlobalsSP *)Mem_HunkUser_AllocInternal(hunkUser, 464872 * v2, 0x80ui64, "CgStaticGlobalsSP::AllocateLocalClientStaticGlobals");
  memset_0(s_clientStaticGlobalsArraySP, 0, 464872 * v2);
  if ( (int)v2 > 0 )
  {
    v5 = 0i64;
    do
    {
      if ( cgs_t::ms_cgsArray[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_static_sp.cpp", 25, ASSERT_TYPE_ASSERT, "(!ms_cgsArray[localClientIndex])", (const char *)&queryFormat, "!ms_cgsArray[localClientIndex]") )
        __debugbreak();
      v6 = &s_clientStaticGlobalsArraySP[v5];
      memset_0(&s_clientStaticGlobalsArraySP[v5].viewX, 0, 0x717E0ui64);
      v6->__vftable = (CgStaticGlobalsSP_vtbl *)&cgs_t::`vftable';
      v7 = 8i64;
      corpseinfo = v6->corpseinfo;
      do
      {
        CGCorpseInfoMP::CGCorpseInfoMP(corpseinfo++);
        --v7;
      }
      while ( v7 );
      agentCorpseInfo = v6->agentCorpseInfo;
      v10 = 8i64;
      do
      {
        CGCorpseInfoMP::CGCorpseInfoMP(agentCorpseInfo++);
        --v10;
      }
      while ( v10 );
      ++v5;
      v6->__vftable = (CgStaticGlobalsSP_vtbl *)&CgStaticGlobalsSP::`vftable';
      cgs_t::ms_cgsArray[v3++] = v6;
    }
    while ( v3 < v2 );
    LODWORD(v2) = maxLocalClients;
  }
  cgs_t::ms_allocatedType = STATIC_GLOB_TYPE_SP;
  cgs_t::ms_allocatedCount = v2;
}

/*
==============
CgStaticGlobalsSP::ClearLocalClientStaticGlobals
==============
*/
void CgStaticGlobalsSP::ClearLocalClientStaticGlobals(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  CgStaticGlobalsSP *v3; 
  __int64 v5; 
  int v6; 

  v1 = localClientNum;
  if ( localClientNum >= (unsigned int)cgs_t::ms_allocatedCount )
  {
    v6 = cgs_t::ms_allocatedCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_static_sp.cpp", 66, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( cgs_t::ms_allocatedType != STATIC_GLOB_TYPE_SP )
  {
    LODWORD(v5) = cgs_t::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_static_sp.cpp", 67, ASSERT_TYPE_ASSERT, "(CG_StaticGlobals_GetType() == CgStaticGlobalsType::STATIC_GLOB_TYPE_SP)", "%s\n\tCgStaticGlobalsSP::ClearLocalClientGlobals: Trying to clear single-player static globals but the static globals were not allocated as single-player. Allocated type is:%d\n", "CG_StaticGlobals_GetType() == CgStaticGlobalsType::STATIC_GLOB_TYPE_SP", v5) )
      __debugbreak();
  }
  v2 = v1;
  ((void (__fastcall *)(CgStaticGlobalsSP *, _QWORD))s_clientStaticGlobalsArraySP[v2].~cgs_t)(&s_clientStaticGlobalsArraySP[v2], 0i64);
  v3 = &s_clientStaticGlobalsArraySP[v2];
  memset_0(v3, 0, sizeof(CgStaticGlobalsSP));
  CgStaticGlobalsSP::CgStaticGlobalsSP(v3);
}

/*
==============
CgStaticGlobalsSP::FreeLocalClientStaticGlobals
==============
*/
void CgStaticGlobalsSP::FreeLocalClientStaticGlobals(void)
{
  int v0; 
  __int64 v1; 
  cgs_t **v2; 
  __int64 v3; 

  if ( cgs_t::ms_allocatedType == STATIC_GLOB_TYPE_MP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_static_sp.cpp", 38, ASSERT_TYPE_ASSERT, "(CG_StaticGlobals_GetType() != CgStaticGlobalsType::STATIC_GLOB_TYPE_MP)", "%s\n\tTrying to free single-player client static globals but multiplayer client globals are allocated\n", "CG_StaticGlobals_GetType() != CgStaticGlobalsType::STATIC_GLOB_TYPE_MP") )
    __debugbreak();
  if ( cgs_t::ms_allocatedType == STATIC_GLOB_TYPE_SP )
  {
    if ( cgs_t::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_static_sp.cpp", 42, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgStaticGlobalsSP::FreeLocalClientGlobals: Trying to free single-player client static globals but no client globals have been allocated\n", "ms_allocatedCount > 0") )
      __debugbreak();
    v0 = cgs_t::ms_allocatedCount - 1;
    if ( cgs_t::ms_allocatedCount - 1 >= 0 )
    {
      v1 = v0;
      v2 = &cgs_t::ms_cgsArray[v0];
      v3 = v1 * 464872;
      do
      {
        ((void (__fastcall *)(char *, _QWORD))s_clientStaticGlobalsArraySP[v1].~cgs_t)((char *)s_clientStaticGlobalsArraySP + v3, 0i64);
        --v0;
        *v2 = NULL;
        v3 -= 464872i64;
        --v1;
        --v2;
      }
      while ( v0 >= 0 );
    }
    DebugWipe(s_clientStaticGlobalsArraySP, 464872i64 * cgs_t::ms_allocatedCount);
    s_clientStaticGlobalsArraySP = NULL;
  }
  cgs_t::ms_allocatedType = STATIC_GLOB_TYPE_UNKNOWN;
  cgs_t::ms_allocatedCount = 0;
}

