/*
==============
CgSoundSystem::AllocateSoundSystemCommon<CgSoundSystemSP>
==============
*/

void __fastcall CgSoundSystem::AllocateSoundSystemCommon<CgSoundSystemSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateSoundSystemCommon@VCgSoundSystemSP@@@CgSoundSystem@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgSoundSystem::FreeSoundSystemCommon<CgSoundSystemSP>
==============
*/

__int64 CgSoundSystem::FreeSoundSystemCommon<CgSoundSystemSP>()
{
  return ??$FreeSoundSystemCommon@VCgSoundSystemSP@@@CgSoundSystem@@KAXXZ();
}

/*
==============
CgSoundSystem::ClearSoundSystemCommon<CgSoundSystemMP>
==============
*/

void __fastcall CgSoundSystem::ClearSoundSystemCommon<CgSoundSystemMP>(const LocalClientNum_t localClientNum)
{
  ??$ClearSoundSystemCommon@VCgSoundSystemMP@@@CgSoundSystem@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgSoundSystem::FreeSoundSystemCommon<CgSoundSystemMP>
==============
*/

__int64 CgSoundSystem::FreeSoundSystemCommon<CgSoundSystemMP>()
{
  return ??$FreeSoundSystemCommon@VCgSoundSystemMP@@@CgSoundSystem@@KAXXZ();
}

/*
==============
CgSoundSystem::~CgSoundSystem
==============
*/

void __fastcall CgSoundSystem::~CgSoundSystem(CgSoundSystem *this)
{
  ??1CgSoundSystem@@MEAA@XZ(this);
}

/*
==============
CgSoundSystem::AllocateSoundSystemCommon<CgSoundSystemMP>
==============
*/

void __fastcall CgSoundSystem::AllocateSoundSystemCommon<CgSoundSystemMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateSoundSystemCommon@VCgSoundSystemMP@@@CgSoundSystem@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgSoundSystem::GetSoundSystemCommon<CgSoundSystemMP>
==============
*/

CgSoundSystemMP *__fastcall CgSoundSystem::GetSoundSystemCommon<CgSoundSystemMP>(const LocalClientNum_t localClientNum)
{
  return ??$GetSoundSystemCommon@VCgSoundSystemMP@@@CgSoundSystem@@KAPEAVCgSoundSystemMP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgSoundSystem::GetSoundSystem
==============
*/

CgSoundSystem *__fastcall CgSoundSystem::GetSoundSystem(const LocalClientNum_t localClientNum)
{
  return ?GetSoundSystem@CgSoundSystem@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgSoundSystem::GetSoundSystem
==============
*/
CgSoundSystem *CgSoundSystem::GetSoundSystem(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( !(_BYTE)CgSoundSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 179, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the sound system for localClientNum %d but the sound system type is not known\n", "ms_allocatedType != GameModeType::NONE", localClientNum) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgSoundSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgSoundSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgSoundSystem::ms_soundSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 181, ASSERT_TYPE_ASSERT, "(ms_soundSystemArray[localClientNum])", "%s\n\tTrying to access unallocated sound system for localClientNum %d\n", "ms_soundSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgSoundSystem::ms_soundSystemArray[v1];
}

/*
==============
CgSoundSystem::GetSoundSystemCommon<CgSoundSystemMP>
==============
*/
CgSoundSystem *CgSoundSystem::GetSoundSystemCommon<CgSoundSystemMP>(const LocalClientNum_t localClientNum)
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
CgSoundSystem::AllocateSoundSystemCommon<CgSoundSystemMP>
==============
*/
void CgSoundSystem::AllocateSoundSystemCommon<CgSoundSystemMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  int v4; 
  CgSoundSystem *v5; 
  CgSoundSystem **v6; 
  __int64 v7; 
  int v8; 
  int v9; 

  v3 = maxLocalClients;
  if ( (_BYTE)CgSoundSystem::ms_allocatedType )
  {
    v8 = (unsigned __int8)CgSoundSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 203, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the sound system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v8) )
      __debugbreak();
  }
  v4 = 0;
  if ( (unsigned int)v3 > 2 )
  {
    v9 = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 204, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v7, 0i64, v9) )
      __debugbreak();
  }
  v5 = (CgSoundSystem *)Mem_HunkUser_AllocInternal(hunkUser, 16 * v3, 8ui64, "CgSoundSystem::AllocateSoundSystemCommon");
  memset_0(v5, 0, 16 * v3);
  if ( (int)v3 > 0 )
  {
    v6 = CgSoundSystem::ms_soundSystemArray;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 214, ASSERT_TYPE_ASSERT, "(!ms_soundSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_soundSystemArray[localClientIndex]") )
        __debugbreak();
      v5->m_localClientNum = v4++;
      v5->__vftable = (CgSoundSystem_vtbl *)&CgSoundSystemMP::`vftable';
      *v6++ = v5++;
    }
    while ( v4 < (int)v3 );
  }
  LOBYTE(CgSoundSystem::ms_allocatedType) = 2;
  CgSoundSystem::ms_allocatedCount = v3;
}

/*
==============
CgSoundSystem::ClearSoundSystemCommon<CgSoundSystemMP>
==============
*/
void CgSoundSystem::ClearSoundSystemCommon<CgSoundSystemMP>(const LocalClientNum_t localClientNum)
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

/*
==============
CgSoundSystem::FreeSoundSystemCommon<CgSoundSystemMP>
==============
*/
void CgSoundSystem::FreeSoundSystemCommon<CgSoundSystemMP>()
{
  char v0; 
  int v1; 
  void **v2; 
  int v3; 
  int v4; 

  v0 = CgSoundSystem::ms_allocatedType;
  if ( (_BYTE)CgSoundSystem::ms_allocatedType )
  {
    if ( (_BYTE)CgSoundSystem::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    v4 = (unsigned __int8)CgSoundSystem::ms_allocatedType;
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 228, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SOUND_SYSTEM_TYPE)", "%s\n\tTrying to free sound system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SOUND_SYSTEM_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgSoundSystem::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    CgSoundSystem::ms_allocatedCount = 0;
    LOBYTE(CgSoundSystem::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( CgSoundSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 232, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgSoundSystem::FreeSoundSystemCommon: Trying to free single-player sound system but no sound system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgSoundSystem::ms_allocatedCount - 1;
  if ( CgSoundSystem::ms_allocatedCount - 1 < 0 )
  {
    CgSoundSystem::ms_allocatedCount = 0;
    LOBYTE(CgSoundSystem::ms_allocatedType) = 0;
  }
  else
  {
    v2 = (void **)&CgSoundSystem::ms_soundSystemArray[v1];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 160i64))(*v2, 0i64);
      DebugWipe(*v2, 0x10ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
    CgSoundSystem::ms_allocatedCount = 0;
    LOBYTE(CgSoundSystem::ms_allocatedType) = 0;
  }
}

/*
==============
CgSoundSystem::~CgSoundSystem
==============
*/
void CgSoundSystem::~CgSoundSystem(CgSoundSystem *this)
{
  this->__vftable = (CgSoundSystem_vtbl *)&CgSoundSystem::`vftable';
}

/*
==============
CgSoundSystem::AllocateSoundSystemCommon<CgSoundSystemSP>
==============
*/
void CgSoundSystem::AllocateSoundSystemCommon<CgSoundSystemSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  int v4; 
  CgSoundSystem *v5; 
  CgSoundSystem **v6; 
  __int64 v7; 
  int v8; 
  int v9; 

  v3 = maxLocalClients;
  if ( (_BYTE)CgSoundSystem::ms_allocatedType )
  {
    v8 = (unsigned __int8)CgSoundSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 203, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the sound system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v8) )
      __debugbreak();
  }
  v4 = 0;
  if ( (unsigned int)v3 > 2 )
  {
    v9 = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 204, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v7, 0i64, v9) )
      __debugbreak();
  }
  v5 = (CgSoundSystem *)Mem_HunkUser_AllocInternal(hunkUser, 16 * v3, 8ui64, "CgSoundSystem::AllocateSoundSystemCommon");
  memset_0(v5, 0, 16 * v3);
  if ( (int)v3 > 0 )
  {
    v6 = CgSoundSystem::ms_soundSystemArray;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 214, ASSERT_TYPE_ASSERT, "(!ms_soundSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_soundSystemArray[localClientIndex]") )
        __debugbreak();
      v5->m_localClientNum = v4++;
      v5->__vftable = (CgSoundSystem_vtbl *)&CgSoundSystemSP::`vftable';
      *v6++ = v5++;
    }
    while ( v4 < (int)v3 );
  }
  LOBYTE(CgSoundSystem::ms_allocatedType) = 1;
  CgSoundSystem::ms_allocatedCount = v3;
}

/*
==============
CgSoundSystem::FreeSoundSystemCommon<CgSoundSystemSP>
==============
*/
void CgSoundSystem::FreeSoundSystemCommon<CgSoundSystemSP>()
{
  char v0; 
  int v1; 
  void **v2; 
  int v3; 
  int v4; 

  v0 = CgSoundSystem::ms_allocatedType;
  if ( (_BYTE)CgSoundSystem::ms_allocatedType )
  {
    if ( (_BYTE)CgSoundSystem::ms_allocatedType == HALF )
      goto LABEL_7;
    v4 = (unsigned __int8)CgSoundSystem::ms_allocatedType;
    v3 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 228, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SOUND_SYSTEM_TYPE)", "%s\n\tTrying to free sound system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SOUND_SYSTEM_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgSoundSystem::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    CgSoundSystem::ms_allocatedCount = 0;
    LOBYTE(CgSoundSystem::ms_allocatedType) = 0;
    return;
  }
LABEL_7:
  if ( CgSoundSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 232, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgSoundSystem::FreeSoundSystemCommon: Trying to free single-player sound system but no sound system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgSoundSystem::ms_allocatedCount - 1;
  if ( CgSoundSystem::ms_allocatedCount - 1 < 0 )
  {
    CgSoundSystem::ms_allocatedCount = 0;
    LOBYTE(CgSoundSystem::ms_allocatedType) = 0;
  }
  else
  {
    v2 = (void **)&CgSoundSystem::ms_soundSystemArray[v1];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 160i64))(*v2, 0i64);
      DebugWipe(*v2, 0x10ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
    CgSoundSystem::ms_allocatedCount = 0;
    LOBYTE(CgSoundSystem::ms_allocatedType) = 0;
  }
}

