/*
==============
CgSoundSystemMP::GetSoundSystemMP
==============
*/

CgSoundSystemMP *__fastcall CgSoundSystemMP::GetSoundSystemMP(const LocalClientNum_t localClientNum)
{
  return ?GetSoundSystemMP@CgSoundSystemMP@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgSoundSystemMP::ClearSoundSystem
==============
*/

void __fastcall CgSoundSystemMP::ClearSoundSystem(const LocalClientNum_t localClientNum)
{
  ?ClearSoundSystem@CgSoundSystemMP@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgSoundSystemMP::GetSoundSystemMP
==============
*/
CgSoundSystem *CgSoundSystemMP::GetSoundSystemMP(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (_BYTE)CgSoundSystem::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 190, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::SOUND_SYSTEM_TYPE)", "%s\n\tTrying to access the sound system for localClientNum %d but the sound system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::SOUND_SYSTEM_TYPE", localClientNum, 2, (unsigned __int8)CgSoundSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgSoundSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgSoundSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 191, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgSoundSystem::ms_soundSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 192, ASSERT_TYPE_ASSERT, "(ms_soundSystemArray[localClientNum])", "%s\n\tTrying to access unallocated sound system for localClientNum %d\n", "ms_soundSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgSoundSystem::ms_soundSystemArray[v1];
}

/*
==============
CgSoundSystemMP::ClearSoundSystem
==============
*/
void CgSoundSystemMP::ClearSoundSystem(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgSoundSystem **v2; 
  CgSoundSystem *v3; 
  CgSoundSystem *v4; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  int v8; 

  v1 = localClientNum;
  if ( (_BYTE)CgSoundSystem::ms_allocatedType != HALF_HALF )
  {
    v8 = (unsigned __int8)CgSoundSystem::ms_allocatedType;
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 255, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::SOUND_SYSTEM_TYPE)", "%s\n\tCgSoundSystem::ClearSoundSystemCommon: Trying to clear sound system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::SOUND_SYSTEM_TYPE", v7, v8) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgSoundSystem::ms_allocatedCount )
  {
    LODWORD(v6) = CgSoundSystem::ms_allocatedCount;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 256, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v2 = &CgSoundSystem::ms_soundSystemArray[v1];
  ((void (__fastcall *)(CgSoundSystem *, _QWORD))(*v2)->~CgSoundSystem)(*v2, 0i64);
  v3 = *v2;
  v3->__vftable = NULL;
  *(_QWORD *)&v3->m_localClientNum = 0i64;
  v4 = *v2;
  v4->m_localClientNum = v1;
  v4->__vftable = (CgSoundSystem_vtbl *)&CgSoundSystemMP::`vftable';
}

