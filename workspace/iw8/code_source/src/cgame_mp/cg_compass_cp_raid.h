/*
==============
CgCompassSystemCPRaid::GetCompassSystemCPRaid
==============
*/

CgCompassSystemCPRaid *__fastcall CgCompassSystemCPRaid::GetCompassSystemCPRaid(const LocalClientNum_t localClientNum)
{
  return ?GetCompassSystemCPRaid@CgCompassSystemCPRaid@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgCompassSystemCPRaid::GetCompassSystemCPRaid
==============
*/
CgCompassSystem *CgCompassSystemCPRaid::GetCompassSystemCPRaid(const LocalClientNum_t localClientNum)
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

