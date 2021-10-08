/*
==============
cgs_t::~cgs_t
==============
*/

void __fastcall cgs_t::~cgs_t(cgs_t *this)
{
  ??1cgs_t@@MEAA@XZ(this);
}

/*
==============
CG_GetLocalClientStaticGlobals
==============
*/

cgs_t *__fastcall CG_GetLocalClientStaticGlobals(const LocalClientNum_t localClientNum)
{
  return ?CG_GetLocalClientStaticGlobals@@YAPEAVcgs_t@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GetLocalClientStaticGlobals
==============
*/
cgs_t *CG_GetLocalClientStaticGlobals(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v4; 
  int v5; 

  v1 = localClientNum;
  if ( localClientNum >= (unsigned int)cgs_t::ms_allocatedCount )
  {
    v5 = cgs_t::ms_allocatedCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 112, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cgs_t::ms_allocatedCount )", "localClientNum doesn't index cgs_t::ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
  }
  if ( !cgs_t::ms_cgsArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 113, ASSERT_TYPE_ASSERT, "(cgs_t::ms_cgsArray[localClientNum])", "%s\n\tTrying to access unallocated client static globals for localClientNum %d\n", "cgs_t::ms_cgsArray[localClientNum]", v4) )
      __debugbreak();
  }
  if ( cgs_t::ms_allocatedType == STATIC_GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 114, ASSERT_TYPE_ASSERT, "(cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client static globals for localClientNum %d but the client static global type is not known\n", "cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN", v4) )
      __debugbreak();
  }
  return cgs_t::ms_cgsArray[v1];
}

/*
==============
cgs_t::~cgs_t
==============
*/
void cgs_t::~cgs_t(cgs_t *this)
{
  this->__vftable = (cgs_t_vtbl *)&cgs_t::`vftable';
}

