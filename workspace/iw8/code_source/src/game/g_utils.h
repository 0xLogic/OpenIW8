/*
==============
GUtils::FreeMemory<GUtilsSP>
==============
*/

__int64 GUtils::FreeMemory<GUtilsSP>()
{
  return ??$FreeMemory@VGUtilsSP@@@GUtils@@SAXXZ();
}

/*
==============
GUtils::GetMemorySize<GUtilsMP>
==============
*/

unsigned int __fastcall GUtils::GetMemorySize<GUtilsMP>()
{
  return ??$GetMemorySize@VGUtilsMP@@@GUtils@@SAIXZ();
}

/*
==============
GUtils::AllocateMemory<GUtilsSP>
==============
*/

void __fastcall GUtils::AllocateMemory<GUtilsSP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGUtilsSP@@@GUtils@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GUtils::GetUtils
==============
*/

GUtils *__fastcall GUtils::GetUtils()
{
  return ?GetUtils@GUtils@@SAPEAV1@XZ();
}

/*
==============
G_FreeEntity
==============
*/

void __fastcall G_FreeEntity(gentity_s *ent)
{
  ?G_FreeEntity@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
GUtils::AllocateMemory<GUtilsMP>
==============
*/

void __fastcall GUtils::AllocateMemory<GUtilsMP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGUtilsMP@@@GUtils@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GUtils::FreeMemory<GUtilsMP>
==============
*/

__int64 GUtils::FreeMemory<GUtilsMP>()
{
  return ??$FreeMemory@VGUtilsMP@@@GUtils@@SAXXZ();
}

/*
==============
GUtils::GetMemorySize<GUtilsSP>
==============
*/

unsigned int __fastcall GUtils::GetMemorySize<GUtilsSP>()
{
  return ??$GetMemorySize@VGUtilsSP@@@GUtils@@SAIXZ();
}

/*
==============
GUtils::~GUtils
==============
*/

void __fastcall GUtils::~GUtils(GUtils *this)
{
  ??1GUtils@@UEAA@XZ(this);
}

/*
==============
G_DObjUpdate
==============
*/

void __fastcall G_DObjUpdate(gentity_s *ent, int link)
{
  ?G_DObjUpdate@@YAXPEAUgentity_s@@H@Z(ent, link);
}

/*
==============
GUtils::GetUtils
==============
*/
GUtils *GUtils::GetUtils()
{
  GUtils *result; 

  result = GUtils::ms_gUtils;
  if ( !GUtils::ms_gUtils )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
      __debugbreak();
    return GUtils::ms_gUtils;
  }
  return result;
}

/*
==============
G_FreeEntity
==============
*/
void G_FreeEntity(gentity_s *ent)
{
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->FreeEntity(GUtils::ms_gUtils, ent);
}

/*
==============
GUtils::~GUtils
==============
*/
void GUtils::~GUtils(GUtils *this)
{
  this->__vftable = (GUtils_vtbl *)&GUtils::`vftable';
}

/*
==============
G_DObjUpdate
==============
*/
void G_DObjUpdate(gentity_s *ent, int link)
{
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->DObjUpdate(GUtils::ms_gUtils, ent, link);
}

/*
==============
GUtils::AllocateMemory<GUtilsMP>
==============
*/
void GUtils::AllocateMemory<GUtilsMP>(HunkUser *hunkUser)
{
  GUtilsMP *v2; 
  GUtils *v3; 

  if ( (_BYTE)GUtils::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 130, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 131, ASSERT_TYPE_ASSERT, "( ms_gUtils == 0 )", (const char *)&queryFormat, "ms_gUtils == NULL") )
    __debugbreak();
  v2 = (GUtilsMP *)Mem_HunkUser_AllocInternal(hunkUser, 0x10ui64, 8ui64, "GUtils::AllocateMemory");
  v2->__vftable = NULL;
  *(_QWORD *)&v2->m_entitySpawnMinFreeTime = 0i64;
  GUtilsMP::GUtilsMP(v2);
  GUtils::ms_gUtils = v3;
  LOBYTE(GUtils::ms_allocatedType) = 2;
}

/*
==============
GUtils::FreeMemory<GUtilsMP>
==============
*/
char GUtils::FreeMemory<GUtilsMP>()
{
  char v0; 
  GUtils *v1; 
  GUtils *v2; 

  v0 = GUtils::ms_allocatedType;
  if ( (_BYTE)GUtils::ms_allocatedType )
  {
    if ( (_BYTE)GUtils::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 146, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GUtils::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    v2 = GUtils::ms_gUtils;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GUtils::ms_gUtils;
  if ( !GUtils::ms_gUtils )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 150, ASSERT_TYPE_ASSERT, "(ms_gUtils != 0)", "%s\n\tGUtils::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gUtils != NULL") )
      __debugbreak();
    v1 = GUtils::ms_gUtils;
  }
  ((void (__fastcall *)(GUtils *, _QWORD))v1->~GUtils)(v1, 0i64);
  DebugWipe(GUtils::ms_gUtils, 0x10ui64);
  v2 = NULL;
  GUtils::ms_gUtils = NULL;
LABEL_13:
  LOBYTE(GUtils::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 162, ASSERT_TYPE_ASSERT, "( ms_gUtils == 0 )", (const char *)&queryFormat, "ms_gUtils == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GUtils::GetMemorySize<GUtilsMP>
==============
*/
__int64 GUtils::GetMemorySize<GUtilsMP>()
{
  return 16i64;
}

/*
==============
GUtils::AllocateMemory<GUtilsSP>
==============
*/
void GUtils::AllocateMemory<GUtilsSP>(HunkUser *hunkUser)
{
  GUtilsSP *v2; 
  GUtils *v3; 

  if ( (_BYTE)GUtils::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 130, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 131, ASSERT_TYPE_ASSERT, "( ms_gUtils == 0 )", (const char *)&queryFormat, "ms_gUtils == NULL") )
    __debugbreak();
  v2 = (GUtilsSP *)Mem_HunkUser_AllocInternal(hunkUser, 0x10ui64, 8ui64, "GUtils::AllocateMemory");
  v2->__vftable = NULL;
  *(_QWORD *)&v2->m_entitySpawnMinFreeTime = 0i64;
  GUtilsSP::GUtilsSP(v2);
  GUtils::ms_gUtils = v3;
  LOBYTE(GUtils::ms_allocatedType) = 1;
}

/*
==============
GUtils::FreeMemory<GUtilsSP>
==============
*/
char GUtils::FreeMemory<GUtilsSP>()
{
  char v0; 
  GUtils *v1; 
  GUtils *v2; 

  v0 = GUtils::ms_allocatedType;
  if ( (_BYTE)GUtils::ms_allocatedType )
  {
    if ( (_BYTE)GUtils::ms_allocatedType == HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 146, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GUtils::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    v2 = GUtils::ms_gUtils;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GUtils::ms_gUtils;
  if ( !GUtils::ms_gUtils )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 150, ASSERT_TYPE_ASSERT, "(ms_gUtils != 0)", "%s\n\tGUtils::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gUtils != NULL") )
      __debugbreak();
    v1 = GUtils::ms_gUtils;
  }
  ((void (__fastcall *)(GUtils *, _QWORD))v1->~GUtils)(v1, 0i64);
  DebugWipe(GUtils::ms_gUtils, 0x10ui64);
  v2 = NULL;
  GUtils::ms_gUtils = NULL;
LABEL_13:
  LOBYTE(GUtils::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 162, ASSERT_TYPE_ASSERT, "( ms_gUtils == 0 )", (const char *)&queryFormat, "ms_gUtils == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GUtils::GetMemorySize<GUtilsSP>
==============
*/
__int64 GUtils::GetMemorySize<GUtilsSP>()
{
  return 16i64;
}

