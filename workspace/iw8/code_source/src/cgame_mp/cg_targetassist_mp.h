/*
==============
CgTargetAssistMP::ClearInstance
==============
*/

void __fastcall CgTargetAssistMP::ClearInstance(const LocalClientNum_t localClientNum)
{
  ?ClearInstance@CgTargetAssistMP@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgTargetAssistMP::GetInstanceMP
==============
*/

CgTargetAssistMP *__fastcall CgTargetAssistMP::GetInstanceMP(const LocalClientNum_t localClientNum)
{
  return ?GetInstanceMP@CgTargetAssistMP@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgTargetAssistMP::GetInstanceMP
==============
*/
CgTargetAssist *CgTargetAssistMP::GetInstanceMP(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (_BYTE)CgTargetAssist::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 86, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::INSTANCE_TYPE)", "%s\n\tTrying to access the target assist system for localClientNum %d but the target assist system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::INSTANCE_TYPE", localClientNum, 2, (unsigned __int8)CgTargetAssist::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgTargetAssist::ms_allocatedCount )
  {
    LODWORD(v4) = CgTargetAssist::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 87, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgTargetAssist::ms_instances[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 88, ASSERT_TYPE_ASSERT, "(ms_instances[localClientNum])", "%s\n\tTrying to access unallocated target assist system for localClientNum %d\n", "ms_instances[localClientNum]", v4) )
      __debugbreak();
  }
  return CgTargetAssist::ms_instances[v1];
}

/*
==============
CgTargetAssistMP::ClearInstance
==============
*/
void CgTargetAssistMP::ClearInstance(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  void **v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  int v6; 

  v1 = localClientNum;
  if ( (_BYTE)CgTargetAssist::ms_allocatedType != HALF_HALF )
  {
    v6 = (unsigned __int8)CgTargetAssist::ms_allocatedType;
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 147, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::INSTANCE_TYPE)", "%s\n\tCgTargetAssist::ClearInstanceCommon: Trying to clear target assist system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::INSTANCE_TYPE", v5, v6) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgTargetAssist::ms_allocatedCount )
  {
    LODWORD(v4) = CgTargetAssist::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 148, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  v2 = (void **)&CgTargetAssist::ms_instances[v1];
  (**(void (__fastcall ***)(void *, _QWORD))*v2)(*v2, 0i64);
  memset_0(*v2, 0, 0x980ui64);
  CgTargetAssistMP::CgTargetAssistMP((CgTargetAssistMP *)*v2, (const LocalClientNum_t)v1);
}

