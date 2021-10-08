/*
==============
GItems::GetMemorySize<GItemsSP>
==============
*/

unsigned int __fastcall GItems::GetMemorySize<GItemsSP>()
{
  return ??$GetMemorySize@VGItemsSP@@@GItems@@SAIXZ();
}

/*
==============
GItems::FreeMemory<GItemsSP>
==============
*/

__int64 GItems::FreeMemory<GItemsSP>()
{
  return ??$FreeMemory@VGItemsSP@@@GItems@@SAXXZ();
}

/*
==============
GItems::AllocateMemory<GItemsMP>
==============
*/

void __fastcall GItems::AllocateMemory<GItemsMP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGItemsMP@@@GItems@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GItems::FreeMemory<GItemsMP>
==============
*/

__int64 GItems::FreeMemory<GItemsMP>()
{
  return ??$FreeMemory@VGItemsMP@@@GItems@@SAXXZ();
}

/*
==============
GItems::GetItemSystem
==============
*/

GItems *__fastcall GItems::GetItemSystem()
{
  return ?GetItemSystem@GItems@@SAPEAV1@XZ();
}

/*
==============
GItems::GetMemorySize<GItemsMP>
==============
*/

unsigned int __fastcall GItems::GetMemorySize<GItemsMP>()
{
  return ??$GetMemorySize@VGItemsMP@@@GItems@@SAIXZ();
}

/*
==============
GItems::AllocateMemory<GItemsSP>
==============
*/

void __fastcall GItems::AllocateMemory<GItemsSP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGItemsSP@@@GItems@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GItems::~GItems
==============
*/

void __fastcall GItems::~GItems(GItems *this)
{
  ??1GItems@@UEAA@XZ(this);
}

/*
==============
GItems::GetItemSystem
==============
*/
GItems *GItems::GetItemSystem()
{
  GItems *result; 

  result = GItems::ms_gItemsSystem;
  if ( !GItems::ms_gItemsSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 76, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem )", (const char *)&queryFormat, "ms_gItemsSystem") )
      __debugbreak();
    return GItems::ms_gItemsSystem;
  }
  return result;
}

/*
==============
GItems::AllocateMemory<GItemsMP>
==============
*/
void GItems::AllocateMemory<GItemsMP>(HunkUser *hunkUser)
{
  GItems *v2; 

  if ( (_BYTE)GItems::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 100, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GItems::ms_gItemsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 101, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem == 0 )", (const char *)&queryFormat, "ms_gItemsSystem == NULL") )
    __debugbreak();
  v2 = (GItems *)Mem_HunkUser_AllocInternal(hunkUser, 0x978ui64, 8ui64, "GItems::AllocateMemory");
  memset_0(&v2->m_shouldUpdateDObjOnSpawn + 1, 0, 0x96Fui64);
  v2->m_shouldUpdateDObjOnSpawn = 0;
  v2->__vftable = (GItems_vtbl *)&GItemsMP::`vftable';
  GItems::ms_gItemsSystem = v2;
  LOBYTE(GItems::ms_allocatedType) = 2;
}

/*
==============
GItems::FreeMemory<GItemsMP>
==============
*/
char GItems::FreeMemory<GItemsMP>()
{
  char v0; 
  GItems *v1; 
  GItems *v2; 

  v0 = GItems::ms_allocatedType;
  if ( (_BYTE)GItems::ms_allocatedType )
  {
    if ( (_BYTE)GItems::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 116, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GItems::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    v2 = GItems::ms_gItemsSystem;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GItems::ms_gItemsSystem;
  if ( !GItems::ms_gItemsSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", (_DWORD)GItems::ms_gItemsSystem + 120, ASSERT_TYPE_ASSERT, "(ms_gItemsSystem != 0)", "%s\n\tGItems::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gItemsSystem != NULL") )
      __debugbreak();
    v1 = GItems::ms_gItemsSystem;
  }
  ((void (__fastcall *)(GItems *, _QWORD))v1->~GItems)(v1, 0i64);
  DebugWipe(GItems::ms_gItemsSystem, 0x978ui64);
  v2 = NULL;
  GItems::ms_gItemsSystem = NULL;
LABEL_13:
  LOBYTE(GItems::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 132, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem == 0 )", (const char *)&queryFormat, "ms_gItemsSystem == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GItems::GetMemorySize<GItemsMP>
==============
*/
__int64 GItems::GetMemorySize<GItemsMP>()
{
  return 2424i64;
}

/*
==============
GItems::~GItems
==============
*/
void GItems::~GItems(GItems *this)
{
  this->__vftable = (GItems_vtbl *)&GItems::`vftable';
}

/*
==============
GItems::AllocateMemory<GItemsSP>
==============
*/
void GItems::AllocateMemory<GItemsSP>(HunkUser *hunkUser)
{
  GItems *v2; 

  if ( (_BYTE)GItems::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 100, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GItems::ms_gItemsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 101, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem == 0 )", (const char *)&queryFormat, "ms_gItemsSystem == NULL") )
    __debugbreak();
  v2 = (GItems *)Mem_HunkUser_AllocInternal(hunkUser, 0x10ui64, 8ui64, "GItems::AllocateMemory");
  *(_QWORD *)&v2->m_shouldUpdateDObjOnSpawn = 0i64;
  v2->__vftable = (GItems_vtbl *)&GItemsSP::`vftable';
  v2->m_shouldUpdateDObjOnSpawn = 1;
  GItems::ms_gItemsSystem = v2;
  LOBYTE(GItems::ms_allocatedType) = 1;
}

/*
==============
GItems::FreeMemory<GItemsSP>
==============
*/
char GItems::FreeMemory<GItemsSP>()
{
  char v0; 
  GItems *v1; 
  GItems *v2; 

  v0 = GItems::ms_allocatedType;
  if ( (_BYTE)GItems::ms_allocatedType )
  {
    if ( (_BYTE)GItems::ms_allocatedType == HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 116, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GItems::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    v2 = GItems::ms_gItemsSystem;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GItems::ms_gItemsSystem;
  if ( !GItems::ms_gItemsSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", (_DWORD)GItems::ms_gItemsSystem + 120, ASSERT_TYPE_ASSERT, "(ms_gItemsSystem != 0)", "%s\n\tGItems::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gItemsSystem != NULL") )
      __debugbreak();
    v1 = GItems::ms_gItemsSystem;
  }
  ((void (__fastcall *)(GItems *, _QWORD))v1->~GItems)(v1, 0i64);
  DebugWipe(GItems::ms_gItemsSystem, 0x10ui64);
  v2 = NULL;
  GItems::ms_gItemsSystem = NULL;
LABEL_13:
  LOBYTE(GItems::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 132, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem == 0 )", (const char *)&queryFormat, "ms_gItemsSystem == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GItems::GetMemorySize<GItemsSP>
==============
*/
__int64 GItems::GetMemorySize<GItemsSP>()
{
  return 16i64;
}

