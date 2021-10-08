/*
==============
CgViewSystemMP::ClearViewSystem
==============
*/

void __fastcall CgViewSystemMP::ClearViewSystem(const LocalClientNum_t localClientNum)
{
  ?ClearViewSystem@CgViewSystemMP@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgViewSystemMP::ClearViewSystem
==============
*/
void CgViewSystemMP::ClearViewSystem(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  void **v2; 
  _DWORD *v3; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  int v7; 

  v1 = localClientNum;
  if ( (_BYTE)CgViewSystem::ms_allocatedType != HALF_HALF )
  {
    v7 = (unsigned __int8)CgViewSystem::ms_allocatedType;
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 343, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE)", "%s\n\tCgViewSystem::ClearViewSystemCommon: Trying to clear view system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE", v6, v7) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgViewSystem::ms_allocatedCount )
  {
    LODWORD(v5) = CgViewSystem::ms_allocatedCount;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 344, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = (void **)&CgViewSystem::ms_viewSystemArray[v1];
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 32i64))(*v2, 0i64);
  memset_0(*v2, 0, 0x68ui64);
  v3 = *v2;
  v3[2] = v1;
  memset_0(v3 + 3, 0, 0x5Cui64);
  *(_QWORD *)v3 = &CgViewSystemMP::`vftable';
}

