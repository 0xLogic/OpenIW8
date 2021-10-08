/*
==============
GTargetAssist::FreeMemory<GTargetAssistMP>
==============
*/

__int64 GTargetAssist::FreeMemory<GTargetAssistMP>()
{
  return ??$FreeMemory@VGTargetAssistMP@@@GTargetAssist@@SAXXZ();
}

/*
==============
GTargetAssist::AllocateMemory<GTargetAssistMP>
==============
*/

void __fastcall GTargetAssist::AllocateMemory<GTargetAssistMP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGTargetAssistMP@@@GTargetAssist@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GTargetAssist::AllocateMemory<GTargetAssistSP>
==============
*/

void __fastcall GTargetAssist::AllocateMemory<GTargetAssistSP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGTargetAssistSP@@@GTargetAssist@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GTargetAssist::GetMemorySize<GTargetAssistMP>
==============
*/

unsigned int __fastcall GTargetAssist::GetMemorySize<GTargetAssistMP>()
{
  return ??$GetMemorySize@VGTargetAssistMP@@@GTargetAssist@@SAIXZ();
}

/*
==============
GTargetAssist::GetMemorySize<GTargetAssistSP>
==============
*/

unsigned int __fastcall GTargetAssist::GetMemorySize<GTargetAssistSP>()
{
  return ??$GetMemorySize@VGTargetAssistSP@@@GTargetAssist@@SAIXZ();
}

/*
==============
GTargetAssist::FreeMemory<GTargetAssistSP>
==============
*/

__int64 GTargetAssist::FreeMemory<GTargetAssistSP>()
{
  return ??$FreeMemory@VGTargetAssistSP@@@GTargetAssist@@SAXXZ();
}

/*
==============
GTargetAssist::AllocateMemory<GTargetAssistMP>
==============
*/
void GTargetAssist::AllocateMemory<GTargetAssistMP>(HunkUser *hunkUser)
{
  GTargetAssistMP *v2; 
  GTargetAssist *v3; 

  if ( (_BYTE)GTargetAssist::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", 79, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GTargetAssist::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", 80, ASSERT_TYPE_ASSERT, "( ms_instance == 0 )", (const char *)&queryFormat, "ms_instance == NULL") )
    __debugbreak();
  v2 = (GTargetAssistMP *)Mem_HunkUser_AllocInternal(hunkUser, 0x970ui64, 8ui64, "GTargetAssist::AllocateMemory");
  memset_0(v2, 0, sizeof(GTargetAssistMP));
  GTargetAssistMP::GTargetAssistMP(v2);
  GTargetAssist::ms_instance = v3;
  LOBYTE(GTargetAssist::ms_allocatedType) = 2;
}

/*
==============
GTargetAssist::FreeMemory<GTargetAssistMP>
==============
*/
char GTargetAssist::FreeMemory<GTargetAssistMP>()
{
  char v0; 
  GTargetAssist *v1; 
  GTargetAssist *v2; 

  v0 = GTargetAssist::ms_allocatedType;
  if ( (_BYTE)GTargetAssist::ms_allocatedType )
  {
    if ( (_BYTE)GTargetAssist::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", 95, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GTargetAssist::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    v2 = GTargetAssist::ms_instance;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GTargetAssist::ms_instance;
  if ( !GTargetAssist::ms_instance )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", (_DWORD)GTargetAssist::ms_instance + 99, ASSERT_TYPE_ASSERT, "(ms_instance != 0)", "%s\n\tGTargetAssist::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_instance != NULL") )
      __debugbreak();
    v1 = GTargetAssist::ms_instance;
  }
  ((void (__fastcall *)(GTargetAssist *, _QWORD))v1->~BgTargetAssist)(v1, 0i64);
  DebugWipe(GTargetAssist::ms_instance, 0x970ui64);
  v2 = NULL;
  GTargetAssist::ms_instance = NULL;
LABEL_13:
  LOBYTE(GTargetAssist::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", 111, ASSERT_TYPE_ASSERT, "( ms_instance == 0 )", (const char *)&queryFormat, "ms_instance == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GTargetAssist::GetMemorySize<GTargetAssistMP>
==============
*/
__int64 GTargetAssist::GetMemorySize<GTargetAssistMP>()
{
  return 2416i64;
}

/*
==============
GTargetAssist::AllocateMemory<GTargetAssistSP>
==============
*/
void GTargetAssist::AllocateMemory<GTargetAssistSP>(HunkUser *hunkUser)
{
  GTargetAssistSP *v2; 
  GTargetAssist *v3; 

  if ( (_BYTE)GTargetAssist::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", 79, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GTargetAssist::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", 80, ASSERT_TYPE_ASSERT, "( ms_instance == 0 )", (const char *)&queryFormat, "ms_instance == NULL") )
    __debugbreak();
  v2 = (GTargetAssistSP *)Mem_HunkUser_AllocInternal(hunkUser, 0x330ui64, 8ui64, "GTargetAssist::AllocateMemory");
  memset_0(v2, 0, sizeof(GTargetAssistSP));
  GTargetAssistSP::GTargetAssistSP(v2);
  GTargetAssist::ms_instance = v3;
  LOBYTE(GTargetAssist::ms_allocatedType) = 1;
}

/*
==============
GTargetAssist::FreeMemory<GTargetAssistSP>
==============
*/
char GTargetAssist::FreeMemory<GTargetAssistSP>()
{
  char v0; 
  GTargetAssist *v1; 
  GTargetAssist *v2; 

  v0 = GTargetAssist::ms_allocatedType;
  if ( (_BYTE)GTargetAssist::ms_allocatedType )
  {
    if ( (_BYTE)GTargetAssist::ms_allocatedType == HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", 95, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GTargetAssist::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    v2 = GTargetAssist::ms_instance;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GTargetAssist::ms_instance;
  if ( !GTargetAssist::ms_instance )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", (_DWORD)GTargetAssist::ms_instance + 99, ASSERT_TYPE_ASSERT, "(ms_instance != 0)", "%s\n\tGTargetAssist::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_instance != NULL") )
      __debugbreak();
    v1 = GTargetAssist::ms_instance;
  }
  ((void (__fastcall *)(GTargetAssist *, _QWORD))v1->~BgTargetAssist)(v1, 0i64);
  DebugWipe(GTargetAssist::ms_instance, 0x330ui64);
  v2 = NULL;
  GTargetAssist::ms_instance = NULL;
LABEL_13:
  LOBYTE(GTargetAssist::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", 111, ASSERT_TYPE_ASSERT, "( ms_instance == 0 )", (const char *)&queryFormat, "ms_instance == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GTargetAssist::GetMemorySize<GTargetAssistSP>
==============
*/
__int64 GTargetAssist::GetMemorySize<GTargetAssistSP>()
{
  return 816i64;
}

