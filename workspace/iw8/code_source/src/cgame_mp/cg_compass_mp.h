/*
==============
CgCompassSystemMP::ClearCompassSystem
==============
*/

void __fastcall CgCompassSystemMP::ClearCompassSystem(const LocalClientNum_t localClientNum)
{
  ?ClearCompassSystem@CgCompassSystemMP@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgCompassSystemMP::GetCompassSystemMP
==============
*/

CgCompassSystemMP *__fastcall CgCompassSystemMP::GetCompassSystemMP(const LocalClientNum_t localClientNum)
{
  return ?GetCompassSystemMP@CgCompassSystemMP@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgCompassSystemMP::GetCompassSystemMP
==============
*/
CgCompassSystem *CgCompassSystemMP::GetCompassSystemMP(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", localClientNum, 2, (unsigned __int8)CgCompassSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgCompassSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgCompassSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgCompassSystem::ms_compassSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgCompassSystem::ms_compassSystemArray[v1];
}

/*
==============
CgCompassSystemMP::ClearCompassSystem
==============
*/
void CgCompassSystemMP::ClearCompassSystem(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  void **v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  int v6; 

  v1 = localClientNum;
  if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF )
  {
    v6 = (unsigned __int8)CgCompassSystem::ms_allocatedType;
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 651, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tCgCompassSystem::ClearCompassSystemCommon: Trying to clear compass system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v5, v6) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgCompassSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgCompassSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 652, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  v2 = (void **)&CgCompassSystem::ms_compassSystemArray[v1];
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 120i64))(*v2, 0i64);
  memset_0(*v2, 0, 0xFB18ui64);
  CgCompassSystemMP::CgCompassSystemMP((CgCompassSystemMP *)*v2, (const LocalClientNum_t)v1);
  if ( !(_BYTE)CgCompassSystem::ms_allocatedType )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 575, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type is not known\n", "ms_allocatedType != GameModeType::NONE", v4) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgCompassSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgCompassSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 576, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !*v2 )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 577, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  CgCompassSystem::ResetCompassActorObfuscation((CgCompassSystem *const)*v2);
}

