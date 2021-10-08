/*
==============
GClientSystem::FreeMemory<GClientSystemSP>
==============
*/

__int64 GClientSystem::FreeMemory<GClientSystemSP>()
{
  return ??$FreeMemory@VGClientSystemSP@@@GClientSystem@@SAXXZ();
}

/*
==============
GClientSystem::~GClientSystem
==============
*/

void __fastcall GClientSystem::~GClientSystem(GClientSystem *this)
{
  ??1GClientSystem@@UEAA@XZ(this);
}

/*
==============
GClientSystem::AllocateMemory<GClientSystemSP>
==============
*/

void __fastcall GClientSystem::AllocateMemory<GClientSystemSP>(HunkUser *hunkUser, const unsigned int maxClients)
{
  ??$AllocateMemory@VGClientSystemSP@@@GClientSystem@@SAXPEAUHunkUser@@I@Z(hunkUser, maxClients);
}

/*
==============
GClientSystem::GetMemorySize<GClientSystemSP>
==============
*/

unsigned int __fastcall GClientSystem::GetMemorySize<GClientSystemSP>(const unsigned int maxClients)
{
  return ??$GetMemorySize@VGClientSystemSP@@@GClientSystem@@SAII@Z(maxClients);
}

/*
==============
GClientSystem::FreeMemory<GClientSystemMP>
==============
*/

__int64 GClientSystem::FreeMemory<GClientSystemMP>()
{
  return ??$FreeMemory@VGClientSystemMP@@@GClientSystem@@SAXXZ();
}

/*
==============
GClientSystem::AllocateMemory<GClientSystemMP>
==============
*/

void __fastcall GClientSystem::AllocateMemory<GClientSystemMP>(HunkUser *hunkUser, const unsigned int maxClients)
{
  ??$AllocateMemory@VGClientSystemMP@@@GClientSystem@@SAXPEAUHunkUser@@I@Z(hunkUser, maxClients);
}

/*
==============
GClientSystem::GetMemorySize<GClientSystemMP>
==============
*/

unsigned int __fastcall GClientSystem::GetMemorySize<GClientSystemMP>(const unsigned int maxClients)
{
  return ??$GetMemorySize@VGClientSystemMP@@@GClientSystem@@SAII@Z(maxClients);
}

/*
==============
GClientSystem::AllocateMemory<GClientSystemMP>
==============
*/
void GClientSystem::AllocateMemory<GClientSystemMP>(HunkUser *hunkUser, const unsigned int maxClients)
{
  __int64 v2; 
  GClientSystem *v4; 
  gclient_s *v5; 

  v2 = maxClients;
  if ( (_BYTE)GClientSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 475, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GClientSystem::ms_gClientSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 476, ASSERT_TYPE_ASSERT, "( ms_gClientSystem == 0 )", (const char *)&queryFormat, "ms_gClientSystem == NULL") )
    __debugbreak();
  v4 = (GClientSystem *)Mem_HunkUser_AllocInternal(hunkUser, 0x18ui64, 8ui64, "GClientSystem::AllocateMemory");
  v4->__vftable = NULL;
  v4->m_clientsData = NULL;
  *(_QWORD *)&v4->m_clientsDataCount = 0i64;
  v5 = (gclient_s *)Mem_HunkUser_AllocInternal(hunkUser, 64592 * v2, 8ui64, "GClientSystem::AllocateMemory");
  DebugWipe(v5, 64592 * v2);
  *(_QWORD *)&v4->m_clientsDataCount = 0i64;
  v4->__vftable = (GClientSystem_vtbl *)&GClientSystemMP::`vftable';
  GClientSystem::ms_gClientSystem = v4;
  v4->m_clientsData = v5;
  GClientSystem::ms_gClientSystem->m_clientsDataCount = v2;
  LOBYTE(GClientSystem::ms_allocatedType) = 2;
}

/*
==============
GClientSystem::FreeMemory<GClientSystemMP>
==============
*/
char GClientSystem::FreeMemory<GClientSystemMP>()
{
  char v0; 
  GClientSystem *v1; 

  v0 = GClientSystem::ms_allocatedType;
  if ( (_BYTE)GClientSystem::ms_allocatedType )
  {
    if ( (_BYTE)GClientSystem::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 499, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GClientSystem::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    v1 = GClientSystem::ms_gClientSystem;
    goto LABEL_18;
  }
LABEL_7:
  if ( !GClientSystem::ms_gClientSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 503, ASSERT_TYPE_ASSERT, "(ms_gClientSystem != nullptr)", "%s\n\tGClientSystem::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gClientSystem != nullptr") )
    __debugbreak();
  if ( !GClientSystem::ms_gClientSystem->m_clientsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 504, ASSERT_TYPE_ASSERT, "( ms_gClientSystem->m_clientsData != nullptr )", (const char *)&queryFormat, "ms_gClientSystem->m_clientsData != nullptr") )
    __debugbreak();
  if ( !GClientSystem::ms_gClientSystem->m_clientsDataCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 505, ASSERT_TYPE_ASSERT, "( ms_gClientSystem->m_clientsDataCount )", (const char *)&queryFormat, "ms_gClientSystem->m_clientsDataCount") )
    __debugbreak();
  ((void (__fastcall *)(GClientSystem *, _QWORD))GClientSystem::ms_gClientSystem->~GClientSystem)(GClientSystem::ms_gClientSystem, 0i64);
  DebugWipe(GClientSystem::ms_gClientSystem->m_clientsData, 64592i64 * GClientSystem::ms_gClientSystem->m_clientsDataCount);
  DebugWipe(GClientSystem::ms_gClientSystem, 0x18ui64);
  v1 = NULL;
  GClientSystem::ms_gClientSystem = NULL;
LABEL_18:
  LOBYTE(GClientSystem::ms_allocatedType) = 0;
  if ( v1 )
  {
    LOBYTE(v1) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 518, ASSERT_TYPE_ASSERT, "( ms_gClientSystem == 0 )", (const char *)&queryFormat, "ms_gClientSystem == NULL");
    if ( (_BYTE)v1 )
      __debugbreak();
  }
  return (char)v1;
}

/*
==============
GClientSystem::GetMemorySize<GClientSystemMP>
==============
*/
__int64 GClientSystem::GetMemorySize<GClientSystemMP>(const unsigned int maxClients)
{
  return 64592 * maxClients + 24;
}

/*
==============
GClientSystem::~GClientSystem
==============
*/
void GClientSystem::~GClientSystem(GClientSystem *this)
{
  this->__vftable = (GClientSystem_vtbl *)&GClientSystem::`vftable';
}

/*
==============
GClientSystem::AllocateMemory<GClientSystemSP>
==============
*/
void GClientSystem::AllocateMemory<GClientSystemSP>(HunkUser *hunkUser, const unsigned int maxClients)
{
  __int64 v2; 
  GClientSystem *v4; 
  gclient_s *v5; 

  v2 = maxClients;
  if ( (_BYTE)GClientSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 475, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GClientSystem::ms_gClientSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 476, ASSERT_TYPE_ASSERT, "( ms_gClientSystem == 0 )", (const char *)&queryFormat, "ms_gClientSystem == NULL") )
    __debugbreak();
  v4 = (GClientSystem *)Mem_HunkUser_AllocInternal(hunkUser, 0x18ui64, 8ui64, "GClientSystem::AllocateMemory");
  v4->__vftable = NULL;
  v4->m_clientsData = NULL;
  *(_QWORD *)&v4->m_clientsDataCount = 0i64;
  v5 = (gclient_s *)Mem_HunkUser_AllocInternal(hunkUser, 64592 * v2, 8ui64, "GClientSystem::AllocateMemory");
  DebugWipe(v5, 64592 * v2);
  *(_QWORD *)&v4->m_clientsDataCount = 0i64;
  v4->__vftable = (GClientSystem_vtbl *)&GClientSystemSP::`vftable';
  GClientSystem::ms_gClientSystem = v4;
  v4->m_clientsData = v5;
  GClientSystem::ms_gClientSystem->m_clientsDataCount = v2;
  LOBYTE(GClientSystem::ms_allocatedType) = 1;
}

/*
==============
GClientSystem::FreeMemory<GClientSystemSP>
==============
*/
char GClientSystem::FreeMemory<GClientSystemSP>()
{
  char v0; 
  GClientSystem *v1; 

  v0 = GClientSystem::ms_allocatedType;
  if ( (_BYTE)GClientSystem::ms_allocatedType )
  {
    if ( (_BYTE)GClientSystem::ms_allocatedType == HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 499, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GClientSystem::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    v1 = GClientSystem::ms_gClientSystem;
    goto LABEL_18;
  }
LABEL_7:
  if ( !GClientSystem::ms_gClientSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 503, ASSERT_TYPE_ASSERT, "(ms_gClientSystem != nullptr)", "%s\n\tGClientSystem::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gClientSystem != nullptr") )
    __debugbreak();
  if ( !GClientSystem::ms_gClientSystem->m_clientsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 504, ASSERT_TYPE_ASSERT, "( ms_gClientSystem->m_clientsData != nullptr )", (const char *)&queryFormat, "ms_gClientSystem->m_clientsData != nullptr") )
    __debugbreak();
  if ( !GClientSystem::ms_gClientSystem->m_clientsDataCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 505, ASSERT_TYPE_ASSERT, "( ms_gClientSystem->m_clientsDataCount )", (const char *)&queryFormat, "ms_gClientSystem->m_clientsDataCount") )
    __debugbreak();
  ((void (__fastcall *)(GClientSystem *, _QWORD))GClientSystem::ms_gClientSystem->~GClientSystem)(GClientSystem::ms_gClientSystem, 0i64);
  DebugWipe(GClientSystem::ms_gClientSystem->m_clientsData, 64592i64 * GClientSystem::ms_gClientSystem->m_clientsDataCount);
  DebugWipe(GClientSystem::ms_gClientSystem, 0x18ui64);
  v1 = NULL;
  GClientSystem::ms_gClientSystem = NULL;
LABEL_18:
  LOBYTE(GClientSystem::ms_allocatedType) = 0;
  if ( v1 )
  {
    LOBYTE(v1) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 518, ASSERT_TYPE_ASSERT, "( ms_gClientSystem == 0 )", (const char *)&queryFormat, "ms_gClientSystem == NULL");
    if ( (_BYTE)v1 )
      __debugbreak();
  }
  return (char)v1;
}

/*
==============
GClientSystem::GetMemorySize<GClientSystemSP>
==============
*/
__int64 GClientSystem::GetMemorySize<GClientSystemSP>(const unsigned int maxClients)
{
  return 64592 * maxClients + 24;
}

