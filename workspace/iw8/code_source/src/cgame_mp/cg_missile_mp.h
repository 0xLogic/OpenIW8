/*
==============
CgMissileMP::ClearSystem
==============
*/

void __fastcall CgMissileMP::ClearSystem(const LocalClientNum_t localClientNum)
{
  ?ClearSystem@CgMissileMP@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgMissileMP::ClearSystem
==============
*/
void CgMissileMP::ClearSystem(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgMissileMP **v2; 
  CgMissileMP *v3; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  int v7; 

  v1 = localClientNum;
  if ( (_BYTE)CgMissile::ms_allocatedType != HALF_HALF )
  {
    v7 = (unsigned __int8)CgMissile::ms_allocatedType;
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 350, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tCgMissile::ClearSystemCommon: Trying to clear missile system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::SYSTEM_TYPE", v6, v7) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgMissile::ms_allocatedCount )
  {
    LODWORD(v5) = CgMissile::ms_allocatedCount;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 351, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = (CgMissileMP **)&CgMissile::ms_systemsArray[v1];
  ((void (__fastcall *)(CgMissileMP *, _QWORD))(*v2)->~BgMissile)(*v2, 0i64);
  v3 = *v2;
  v3->__vftable = NULL;
  *(_QWORD *)&v3->CgMissile::BgMissile::m_grenadeLinkToMovingPlatformUsesTag = 0i64;
  *(_QWORD *)&v3->CgMissile::BgMissile::m_javelinOffsetRight = 0i64;
  *(_QWORD *)&v3->m_localClientNum = 0i64;
  *(_QWORD *)&v3->CgMissile::m_changeEntityTypeOnImpact = 0i64;
  CgMissileMP::CgMissileMP(*v2, (const LocalClientNum_t)v1);
}

