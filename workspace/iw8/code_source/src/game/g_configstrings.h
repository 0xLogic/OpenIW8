/*
==============
GConfigStrings::FreeConfigStringsMemoryCommon<GConfigStringsSP>
==============
*/

__int64 GConfigStrings::FreeConfigStringsMemoryCommon<GConfigStringsSP>()
{
  return ??$FreeConfigStringsMemoryCommon@VGConfigStringsSP@@@GConfigStrings@@KAXXZ();
}

/*
==============
GConfigStrings::GetConfigStringsMemorySizeCommon<GConfigStringsSP>
==============
*/

unsigned int __fastcall GConfigStrings::GetConfigStringsMemorySizeCommon<GConfigStringsSP>()
{
  return ??$GetConfigStringsMemorySizeCommon@VGConfigStringsSP@@@GConfigStrings@@KAIXZ();
}

/*
==============
G_CString_GetModelName
==============
*/

const char *__fastcall G_CString_GetModelName(unsigned int modelIndex)
{
  return ?G_CString_GetModelName@@YAPEBDI@Z(modelIndex);
}

/*
==============
GConfigStrings::AllocateConfigStringsMemoryCommon<GConfigStringsSP>
==============
*/

void __fastcall GConfigStrings::AllocateConfigStringsMemoryCommon<GConfigStringsSP>(HunkUser *hunkUser)
{
  ??$AllocateConfigStringsMemoryCommon@VGConfigStringsSP@@@GConfigStrings@@KAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
G_CString_GetCompositeModelIndex
==============
*/

unsigned int __fastcall G_CString_GetCompositeModelIndex(const char *name)
{
  return ?G_CString_GetCompositeModelIndex@@YAIPEBD@Z(name);
}

/*
==============
GConfigStrings::FreeConfigStringsMemoryCommon<GConfigStringsMP>
==============
*/

__int64 GConfigStrings::FreeConfigStringsMemoryCommon<GConfigStringsMP>()
{
  return ??$FreeConfigStringsMemoryCommon@VGConfigStringsMP@@@GConfigStrings@@KAXXZ();
}

/*
==============
GConfigStrings::GetConfigStringSystem
==============
*/

GConfigStrings *__fastcall GConfigStrings::GetConfigStringSystem()
{
  return ?GetConfigStringSystem@GConfigStrings@@SAPEAV1@XZ();
}

/*
==============
GConfigStrings::AllocateConfigStringsMemoryCommon<GConfigStringsMP>
==============
*/

void __fastcall GConfigStrings::AllocateConfigStringsMemoryCommon<GConfigStringsMP>(HunkUser *hunkUser)
{
  ??$AllocateConfigStringsMemoryCommon@VGConfigStringsMP@@@GConfigStrings@@KAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
G_CString_GetModelIndex
==============
*/

unsigned int __fastcall G_CString_GetModelIndex(const char *name)
{
  return ?G_CString_GetModelIndex@@YAIPEBD@Z(name);
}

/*
==============
GConfigStrings::~GConfigStrings
==============
*/

void __fastcall GConfigStrings::~GConfigStrings(GConfigStrings *this)
{
  ??1GConfigStrings@@UEAA@XZ(this);
}

/*
==============
GConfigStrings::GetConfigStringsMemorySizeCommon<GConfigStringsMP>
==============
*/

unsigned int __fastcall GConfigStrings::GetConfigStringsMemorySizeCommon<GConfigStringsMP>()
{
  return ??$GetConfigStringsMemorySizeCommon@VGConfigStringsMP@@@GConfigStrings@@KAIXZ();
}

/*
==============
G_CString_GetModelIndex
==============
*/
unsigned int G_CString_GetModelIndex(const char *name)
{
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  return GConfigStrings::GetModelIndex(GConfigStrings::ms_gConfigStrings, name);
}

/*
==============
G_CString_GetModelName
==============
*/
const char *G_CString_GetModelName(unsigned int modelIndex)
{
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  return GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, modelIndex);
}

/*
==============
GConfigStrings::GetConfigStringSystem
==============
*/
GConfigStrings *GConfigStrings::GetConfigStringSystem()
{
  GConfigStrings *result; 

  result = GConfigStrings::ms_gConfigStrings;
  if ( !GConfigStrings::ms_gConfigStrings )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
      __debugbreak();
    return GConfigStrings::ms_gConfigStrings;
  }
  return result;
}

/*
==============
GConfigStrings::AllocateConfigStringsMemoryCommon<GConfigStringsMP>
==============
*/
void GConfigStrings::AllocateConfigStringsMemoryCommon<GConfigStringsMP>(HunkUser *hunkUser)
{
  GConfigStrings *v2; 

  if ( (_BYTE)GConfigStrings::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 89, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 90, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings == 0 )", (const char *)&queryFormat, "ms_gConfigStrings == NULL") )
    __debugbreak();
  v2 = (GConfigStrings *)Mem_HunkUser_AllocInternal(hunkUser, 8ui64, 8ui64, "GConfigStrings::AllocateConfigStringsMemoryCommon");
  v2->__vftable = (GConfigStrings_vtbl *)&GConfigStringsMP::`vftable';
  GConfigStrings::ms_gConfigStrings = v2;
  LOBYTE(GConfigStrings::ms_allocatedType) = 2;
}

/*
==============
GConfigStrings::FreeConfigStringsMemoryCommon<GConfigStringsMP>
==============
*/
char GConfigStrings::FreeConfigStringsMemoryCommon<GConfigStringsMP>()
{
  char v0; 
  GConfigStrings *v1; 
  GConfigStrings *v2; 

  v0 = GConfigStrings::ms_allocatedType;
  if ( (_BYTE)GConfigStrings::ms_allocatedType )
  {
    if ( (_BYTE)GConfigStrings::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 104, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GConfigStrings::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    v2 = GConfigStrings::ms_gConfigStrings;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GConfigStrings::ms_gConfigStrings;
  if ( !GConfigStrings::ms_gConfigStrings )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", (_DWORD)GConfigStrings::ms_gConfigStrings + 108, ASSERT_TYPE_ASSERT, "(ms_gConfigStrings != 0)", "%s\n\tFreeConfigStringsMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gConfigStrings != NULL") )
      __debugbreak();
    v1 = GConfigStrings::ms_gConfigStrings;
  }
  ((void (__fastcall *)(GConfigStrings *, _QWORD))v1->~GConfigStrings)(v1, 0i64);
  DebugWipe(GConfigStrings::ms_gConfigStrings, 8ui64);
  v2 = NULL;
  GConfigStrings::ms_gConfigStrings = NULL;
LABEL_13:
  LOBYTE(GConfigStrings::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 120, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings == 0 )", (const char *)&queryFormat, "ms_gConfigStrings == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GConfigStrings::GetConfigStringsMemorySizeCommon<GConfigStringsMP>
==============
*/
__int64 GConfigStrings::GetConfigStringsMemorySizeCommon<GConfigStringsMP>()
{
  return 8i64;
}

/*
==============
GConfigStrings::~GConfigStrings
==============
*/
void GConfigStrings::~GConfigStrings(GConfigStrings *this)
{
  this->__vftable = (GConfigStrings_vtbl *)&GConfigStrings::`vftable';
}

/*
==============
G_CString_GetCompositeModelIndex
==============
*/
unsigned int G_CString_GetCompositeModelIndex(const char *name)
{
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  return GConfigStrings::GetCompositeModelIndex(GConfigStrings::ms_gConfigStrings, name);
}

/*
==============
GConfigStrings::AllocateConfigStringsMemoryCommon<GConfigStringsSP>
==============
*/
void GConfigStrings::AllocateConfigStringsMemoryCommon<GConfigStringsSP>(HunkUser *hunkUser)
{
  GConfigStrings *v2; 

  if ( (_BYTE)GConfigStrings::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 89, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 90, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings == 0 )", (const char *)&queryFormat, "ms_gConfigStrings == NULL") )
    __debugbreak();
  v2 = (GConfigStrings *)Mem_HunkUser_AllocInternal(hunkUser, 8ui64, 8ui64, "GConfigStrings::AllocateConfigStringsMemoryCommon");
  v2->__vftable = (GConfigStrings_vtbl *)&GConfigStringsSP::`vftable';
  GConfigStrings::ms_gConfigStrings = v2;
  LOBYTE(GConfigStrings::ms_allocatedType) = 1;
}

/*
==============
GConfigStrings::FreeConfigStringsMemoryCommon<GConfigStringsSP>
==============
*/
char GConfigStrings::FreeConfigStringsMemoryCommon<GConfigStringsSP>()
{
  char v0; 
  GConfigStrings *v1; 
  GConfigStrings *v2; 

  v0 = GConfigStrings::ms_allocatedType;
  if ( (_BYTE)GConfigStrings::ms_allocatedType )
  {
    if ( (_BYTE)GConfigStrings::ms_allocatedType == HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 104, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GConfigStrings::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    v2 = GConfigStrings::ms_gConfigStrings;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GConfigStrings::ms_gConfigStrings;
  if ( !GConfigStrings::ms_gConfigStrings )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", (_DWORD)GConfigStrings::ms_gConfigStrings + 108, ASSERT_TYPE_ASSERT, "(ms_gConfigStrings != 0)", "%s\n\tFreeConfigStringsMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gConfigStrings != NULL") )
      __debugbreak();
    v1 = GConfigStrings::ms_gConfigStrings;
  }
  ((void (__fastcall *)(GConfigStrings *, _QWORD))v1->~GConfigStrings)(v1, 0i64);
  DebugWipe(GConfigStrings::ms_gConfigStrings, 8ui64);
  v2 = NULL;
  GConfigStrings::ms_gConfigStrings = NULL;
LABEL_13:
  LOBYTE(GConfigStrings::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 120, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings == 0 )", (const char *)&queryFormat, "ms_gConfigStrings == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GConfigStrings::GetConfigStringsMemorySizeCommon<GConfigStringsSP>
==============
*/
__int64 GConfigStrings::GetConfigStringsMemorySizeCommon<GConfigStringsSP>()
{
  return 8i64;
}

