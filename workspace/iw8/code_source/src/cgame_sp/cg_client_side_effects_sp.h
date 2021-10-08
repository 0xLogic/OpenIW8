/*
==============
CgClientSideEffectsSystemSP::GetClientSideEffectsSystemSP
==============
*/

CgClientSideEffectsSystemSP *__fastcall CgClientSideEffectsSystemSP::GetClientSideEffectsSystemSP(const LocalClientNum_t localClientNum)
{
  return ?GetClientSideEffectsSystemSP@CgClientSideEffectsSystemSP@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgClientSideEffectsSystemSP::GetClientSideEffectsSystemSP
==============
*/
CgClientSideEffectsSystem *CgClientSideEffectsSystemSP::GetClientSideEffectsSystemSP(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 321, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE)", "%s\n\tTrying to access the client-side effects system for localClientNum %d but the client-side effects system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE", localClientNum, 1, (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgClientSideEffectsSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgClientSideEffectsSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgClientSideEffectsSystem::ms_cseSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 323, ASSERT_TYPE_ASSERT, "(ms_cseSystemArray[localClientNum])", "%s\n\tTrying to access unallocated client-side effects system for localClientNum %d\n", "ms_cseSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgClientSideEffectsSystem::ms_cseSystemArray[v1];
}

