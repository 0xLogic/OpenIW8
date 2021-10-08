/*
==============
GSaveMemory::~GSaveMemory
==============
*/

void __fastcall GSaveMemory::~GSaveMemory(GSaveMemory *this)
{
  ??1GSaveMemory@@UEAA@XZ(this);
}

/*
==============
GSaveMemory::FreeMemory<GSaveMemorySP>
==============
*/

__int64 GSaveMemory::FreeMemory<GSaveMemorySP>()
{
  return ??$FreeMemory@VGSaveMemorySP@@@GSaveMemory@@SAXXZ();
}

/*
==============
GSaveMemory::AllocateMemory<GSaveMemoryMP>
==============
*/

void __fastcall GSaveMemory::AllocateMemory<GSaveMemoryMP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGSaveMemoryMP@@@GSaveMemory@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GSaveMemory::FreeMemory<GSaveMemoryMP>
==============
*/

__int64 GSaveMemory::FreeMemory<GSaveMemoryMP>()
{
  return ??$FreeMemory@VGSaveMemoryMP@@@GSaveMemory@@SAXXZ();
}

/*
==============
GSaveMemory::GetMemorySize<GSaveMemoryMP>
==============
*/

unsigned int __fastcall GSaveMemory::GetMemorySize<GSaveMemoryMP>(unsigned int currentSize)
{
  return ??$GetMemorySize@VGSaveMemoryMP@@@GSaveMemory@@SAII@Z(currentSize);
}

/*
==============
GSaveMemory::GetAlignment<GSaveMemorySP>
==============
*/

unsigned __int64 __fastcall GSaveMemory::GetAlignment<GSaveMemorySP>()
{
  return ??$GetAlignment@VGSaveMemorySP@@@GSaveMemory@@SA_KXZ();
}

/*
==============
GSaveMemory::AllocateMemory<GSaveMemorySP>
==============
*/

void __fastcall GSaveMemory::AllocateMemory<GSaveMemorySP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGSaveMemorySP@@@GSaveMemory@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GSaveMemory::GetAlignment<GSaveMemoryMP>
==============
*/

unsigned __int64 __fastcall GSaveMemory::GetAlignment<GSaveMemoryMP>()
{
  return ??$GetAlignment@VGSaveMemoryMP@@@GSaveMemory@@SA_KXZ();
}

/*
==============
GSaveMemory::GetMemorySize<GSaveMemorySP>
==============
*/

unsigned int __fastcall GSaveMemory::GetMemorySize<GSaveMemorySP>(unsigned int currentSize)
{
  return ??$GetMemorySize@VGSaveMemorySP@@@GSaveMemory@@SAII@Z(currentSize);
}

/*
==============
GSaveMemory::AllocateMemory<GSaveMemoryMP>
==============
*/
void GSaveMemory::AllocateMemory<GSaveMemoryMP>(HunkUser *hunkUser)
{
  GSaveMemory *v2; 

  if ( (_BYTE)GSaveMemory::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 231, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GSaveMemory::ms_gSaveMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 232, ASSERT_TYPE_ASSERT, "( ms_gSaveMemory == 0 )", (const char *)&queryFormat, "ms_gSaveMemory == NULL") )
    __debugbreak();
  v2 = (GSaveMemory *)Mem_HunkUser_AllocInternal(hunkUser, 0x200500ui64, 0x80ui64, "GSaveMemory::AllocateMemory");
  memset_0(&v2[1], 0, 0x2004F8ui64);
  v2->__vftable = (GSaveMemory_vtbl *)&GSaveMemoryMP::`vftable';
  GSaveMemory::ms_gSaveMemory = v2;
  LOBYTE(GSaveMemory::ms_allocatedType) = 2;
}

/*
==============
GSaveMemory::FreeMemory<GSaveMemoryMP>
==============
*/
char GSaveMemory::FreeMemory<GSaveMemoryMP>()
{
  char v0; 
  GSaveMemory *v1; 
  GSaveMemory *v2; 

  v0 = GSaveMemory::ms_allocatedType;
  if ( (_BYTE)GSaveMemory::ms_allocatedType )
  {
    if ( (_BYTE)GSaveMemory::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 250, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GSaveMemory::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    v2 = GSaveMemory::ms_gSaveMemory;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GSaveMemory::ms_gSaveMemory;
  if ( !GSaveMemory::ms_gSaveMemory )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 254, ASSERT_TYPE_ASSERT, "(ms_gSaveMemory != 0)", "%s\n\tGSaveMemory::FreeMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gSaveMemory != NULL") )
      __debugbreak();
    v1 = GSaveMemory::ms_gSaveMemory;
  }
  ((void (__fastcall *)(GSaveMemory *, _QWORD))v1->~GSaveMemory)(v1, 0i64);
  DebugWipe(GSaveMemory::ms_gSaveMemory, 0x200500ui64);
  v2 = NULL;
  GSaveMemory::ms_gSaveMemory = NULL;
LABEL_13:
  LOBYTE(GSaveMemory::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 266, ASSERT_TYPE_ASSERT, "( ms_gSaveMemory == 0 )", (const char *)&queryFormat, "ms_gSaveMemory == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GSaveMemory::GetAlignment<GSaveMemoryMP>
==============
*/
unsigned __int64 GSaveMemory::GetAlignment<GSaveMemoryMP>()
{
  return 128i64;
}

/*
==============
GSaveMemory::GetMemorySize<GSaveMemoryMP>
==============
*/
__int64 GSaveMemory::GetMemorySize<GSaveMemoryMP>(unsigned int currentSize)
{
  unsigned __int64 v1; 

  v1 = ((currentSize + 127i64) & 0xFFFFFFFFFFFFFF80ui64) - currentSize + 2098432;
  if ( v1 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v1, "unsigned", ((currentSize + 127i64) & 0xFFFFFFFFFFFFFF80ui64) - currentSize + 2098432) )
    __debugbreak();
  return (unsigned int)v1;
}

/*
==============
GSaveMemory::~GSaveMemory
==============
*/
void GSaveMemory::~GSaveMemory(GSaveMemory *this)
{
  this->__vftable = (GSaveMemory_vtbl *)&GSaveMemory::`vftable';
}

/*
==============
GSaveMemory::AllocateMemory<GSaveMemorySP>
==============
*/
void GSaveMemory::AllocateMemory<GSaveMemorySP>(HunkUser *hunkUser)
{
  GSaveMemory *v2; 

  if ( (_BYTE)GSaveMemory::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 231, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GSaveMemory::ms_gSaveMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 232, ASSERT_TYPE_ASSERT, "( ms_gSaveMemory == 0 )", (const char *)&queryFormat, "ms_gSaveMemory == NULL") )
    __debugbreak();
  v2 = (GSaveMemory *)Mem_HunkUser_AllocInternal(hunkUser, 0x17E0B00ui64, 0x80ui64, "GSaveMemory::AllocateMemory");
  memset_0(&v2[1], 0, 0x17E0AF8ui64);
  v2->__vftable = (GSaveMemory_vtbl *)&GSaveMemorySP::`vftable';
  GSaveMemory::ms_gSaveMemory = v2;
  LOBYTE(GSaveMemory::ms_allocatedType) = 1;
}

/*
==============
GSaveMemory::FreeMemory<GSaveMemorySP>
==============
*/
char GSaveMemory::FreeMemory<GSaveMemorySP>()
{
  char v0; 
  GSaveMemory *v1; 
  GSaveMemory *v2; 

  v0 = GSaveMemory::ms_allocatedType;
  if ( (_BYTE)GSaveMemory::ms_allocatedType )
  {
    if ( (_BYTE)GSaveMemory::ms_allocatedType == HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 250, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GSaveMemory::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    v2 = GSaveMemory::ms_gSaveMemory;
    goto LABEL_13;
  }
LABEL_7:
  v1 = GSaveMemory::ms_gSaveMemory;
  if ( !GSaveMemory::ms_gSaveMemory )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 254, ASSERT_TYPE_ASSERT, "(ms_gSaveMemory != 0)", "%s\n\tGSaveMemory::FreeMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gSaveMemory != NULL") )
      __debugbreak();
    v1 = GSaveMemory::ms_gSaveMemory;
  }
  ((void (__fastcall *)(GSaveMemory *, _QWORD))v1->~GSaveMemory)(v1, 0i64);
  DebugWipe(GSaveMemory::ms_gSaveMemory, 0x17E0B00ui64);
  v2 = NULL;
  GSaveMemory::ms_gSaveMemory = NULL;
LABEL_13:
  LOBYTE(GSaveMemory::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 266, ASSERT_TYPE_ASSERT, "( ms_gSaveMemory == 0 )", (const char *)&queryFormat, "ms_gSaveMemory == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
GSaveMemory::GetAlignment<GSaveMemorySP>
==============
*/
unsigned __int64 GSaveMemory::GetAlignment<GSaveMemorySP>()
{
  return 128i64;
}

/*
==============
GSaveMemory::GetMemorySize<GSaveMemorySP>
==============
*/
unsigned int GSaveMemory::GetMemorySize<GSaveMemorySP>(unsigned int currentSize)
{
  return truncate_cast<unsigned int,unsigned __int64>(((currentSize + 127i64) & 0xFFFFFFFFFFFFFF80ui64) - currentSize + 25037568);
}

