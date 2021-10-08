/*
==============
GPredictedEntitySystem::AllocateMemory<GPredictedEntitySystemMP>
==============
*/

void __fastcall GPredictedEntitySystem::AllocateMemory<GPredictedEntitySystemMP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGPredictedEntitySystemMP@@@GPredictedEntitySystem@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GPredictedEntitySystem::GetMemorySize<GPredictedEntitySystemSP>
==============
*/

unsigned int __fastcall GPredictedEntitySystem::GetMemorySize<GPredictedEntitySystemSP>()
{
  return ??$GetMemorySize@VGPredictedEntitySystemSP@@@GPredictedEntitySystem@@SAIXZ();
}

/*
==============
GPredictedEntitySystem::GetMemorySize<GPredictedEntitySystemMP>
==============
*/

unsigned int __fastcall GPredictedEntitySystem::GetMemorySize<GPredictedEntitySystemMP>()
{
  return ??$GetMemorySize@VGPredictedEntitySystemMP@@@GPredictedEntitySystem@@SAIXZ();
}

/*
==============
GPredictedEntitySystem::AllocateMemory<GPredictedEntitySystemSP>
==============
*/

void __fastcall GPredictedEntitySystem::AllocateMemory<GPredictedEntitySystemSP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGPredictedEntitySystemSP@@@GPredictedEntitySystem@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GPredictedEntitySystem::FreeMemory<GPredictedEntitySystemSP>
==============
*/

__int64 GPredictedEntitySystem::FreeMemory<GPredictedEntitySystemSP>()
{
  return ??$FreeMemory@VGPredictedEntitySystemSP@@@GPredictedEntitySystem@@SAXXZ();
}

/*
==============
GPredictedEntitySystem::~GPredictedEntitySystem
==============
*/

void __fastcall GPredictedEntitySystem::~GPredictedEntitySystem(GPredictedEntitySystem *this)
{
  ??1GPredictedEntitySystem@@UEAA@XZ(this);
}

/*
==============
GPredictedEntitySystem::FreeMemory<GPredictedEntitySystemMP>
==============
*/

__int64 GPredictedEntitySystem::FreeMemory<GPredictedEntitySystemMP>()
{
  return ??$FreeMemory@VGPredictedEntitySystemMP@@@GPredictedEntitySystem@@SAXXZ();
}

/*
==============
GPredictedEntitySystem::AllocateMemory<GPredictedEntitySystemMP>
==============
*/
void GPredictedEntitySystem::AllocateMemory<GPredictedEntitySystemMP>(HunkUser *hunkUser)
{
  GPredictedEntitySystem *v2; 

  if ( (_BYTE)GPredictedEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", 57, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GPredictedEntitySystem::ms_gSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", 58, ASSERT_TYPE_ASSERT, "( ms_gSystem == 0 )", (const char *)&queryFormat, "ms_gSystem == NULL") )
    __debugbreak();
  v2 = (GPredictedEntitySystem *)Mem_HunkUser_AllocInternal(hunkUser, 0x10ui64, 8ui64, "GPredictedEntitySystem::AllocateMemory");
  v2->__vftable = NULL;
  *(_QWORD *)&v2->m_currentPredictionIndex = 0i64;
  BgPredictedEntitySystem::BgPredictedEntitySystem(v2);
  v2->__vftable = (GPredictedEntitySystem_vtbl *)&GPredictedEntitySystemMP::`vftable';
  GPredictedEntitySystem::ms_gSystem = v2;
  LOBYTE(GPredictedEntitySystem::ms_allocatedType) = 2;
}

/*
==============
GPredictedEntitySystem::FreeMemory<GPredictedEntitySystemMP>
==============
*/
char GPredictedEntitySystem::FreeMemory<GPredictedEntitySystemMP>()
{
  char v0; 
  GPredictedEntitySystem *v1; 
  GPredictedEntitySystem *v2; 

  v0 = GPredictedEntitySystem::ms_allocatedType;
  if ( (_BYTE)GPredictedEntitySystem::ms_allocatedType )
  {
    if ( (_BYTE)GPredictedEntitySystem::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", 73, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GPredictedEntitySystem::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    v2 = GPredictedEntitySystem::ms_gSystem;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GPredictedEntitySystem::ms_gSystem;
  if ( !GPredictedEntitySystem::ms_gSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", (_DWORD)GPredictedEntitySystem::ms_gSystem + 77, ASSERT_TYPE_ASSERT, "(ms_gSystem != 0)", "%s\n\tGPredictedEntitySystem::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gSystem != NULL") )
      __debugbreak();
    v1 = GPredictedEntitySystem::ms_gSystem;
  }
  ((void (__fastcall *)(GPredictedEntitySystem *, _QWORD))v1->~BgPredictedEntitySystem)(v1, 0i64);
  DebugWipe(GPredictedEntitySystem::ms_gSystem, 0x10ui64);
  v2 = NULL;
  GPredictedEntitySystem::ms_gSystem = NULL;
LABEL_13:
  LOBYTE(GPredictedEntitySystem::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", 89, ASSERT_TYPE_ASSERT, "( ms_gSystem == 0 )", (const char *)&queryFormat, "ms_gSystem == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GPredictedEntitySystem::GetMemorySize<GPredictedEntitySystemMP>
==============
*/
__int64 GPredictedEntitySystem::GetMemorySize<GPredictedEntitySystemMP>()
{
  return 16i64;
}

/*
==============
GPredictedEntitySystem::~GPredictedEntitySystem
==============
*/
void GPredictedEntitySystem::~GPredictedEntitySystem(GPredictedEntitySystem *this)
{
  this->__vftable = (GPredictedEntitySystem_vtbl *)&BgPredictedEntitySystem::`vftable';
}

/*
==============
GPredictedEntitySystem::AllocateMemory<GPredictedEntitySystemSP>
==============
*/
void GPredictedEntitySystem::AllocateMemory<GPredictedEntitySystemSP>(HunkUser *hunkUser)
{
  GPredictedEntitySystem *v2; 

  if ( (_BYTE)GPredictedEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", 57, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GPredictedEntitySystem::ms_gSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", 58, ASSERT_TYPE_ASSERT, "( ms_gSystem == 0 )", (const char *)&queryFormat, "ms_gSystem == NULL") )
    __debugbreak();
  v2 = (GPredictedEntitySystem *)Mem_HunkUser_AllocInternal(hunkUser, 0x10ui64, 8ui64, "GPredictedEntitySystem::AllocateMemory");
  v2->__vftable = NULL;
  *(_QWORD *)&v2->m_currentPredictionIndex = 0i64;
  BgPredictedEntitySystem::BgPredictedEntitySystem(v2);
  v2->__vftable = (GPredictedEntitySystem_vtbl *)&GPredictedEntitySystemSP::`vftable';
  GPredictedEntitySystem::ms_gSystem = v2;
  LOBYTE(GPredictedEntitySystem::ms_allocatedType) = 1;
}

/*
==============
GPredictedEntitySystem::FreeMemory<GPredictedEntitySystemSP>
==============
*/
char GPredictedEntitySystem::FreeMemory<GPredictedEntitySystemSP>()
{
  char v0; 
  GPredictedEntitySystem *v1; 
  GPredictedEntitySystem *v2; 

  v0 = GPredictedEntitySystem::ms_allocatedType;
  if ( (_BYTE)GPredictedEntitySystem::ms_allocatedType )
  {
    if ( (_BYTE)GPredictedEntitySystem::ms_allocatedType == HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", 73, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GPredictedEntitySystem::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    v2 = GPredictedEntitySystem::ms_gSystem;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GPredictedEntitySystem::ms_gSystem;
  if ( !GPredictedEntitySystem::ms_gSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", (_DWORD)GPredictedEntitySystem::ms_gSystem + 77, ASSERT_TYPE_ASSERT, "(ms_gSystem != 0)", "%s\n\tGPredictedEntitySystem::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gSystem != NULL") )
      __debugbreak();
    v1 = GPredictedEntitySystem::ms_gSystem;
  }
  ((void (__fastcall *)(GPredictedEntitySystem *, _QWORD))v1->~BgPredictedEntitySystem)(v1, 0i64);
  DebugWipe(GPredictedEntitySystem::ms_gSystem, 0x10ui64);
  v2 = NULL;
  GPredictedEntitySystem::ms_gSystem = NULL;
LABEL_13:
  LOBYTE(GPredictedEntitySystem::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", 89, ASSERT_TYPE_ASSERT, "( ms_gSystem == 0 )", (const char *)&queryFormat, "ms_gSystem == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GPredictedEntitySystem::GetMemorySize<GPredictedEntitySystemSP>
==============
*/
__int64 GPredictedEntitySystem::GetMemorySize<GPredictedEntitySystemSP>()
{
  return 16i64;
}

