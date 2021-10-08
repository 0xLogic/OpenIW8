/*
==============
SvDemo::GetMemorySize<SvDemoMP>
==============
*/

unsigned int __fastcall SvDemo::GetMemorySize<SvDemoMP>()
{
  return ??$GetMemorySize@VSvDemoMP@@@SvDemo@@SAIXZ();
}

/*
==============
SvDemo::~SvDemo
==============
*/

void __fastcall SvDemo::~SvDemo(SvDemo *this)
{
  ??1SvDemo@@UEAA@XZ(this);
}

/*
==============
SvDemo::FreeMemory<SvDemoMP>
==============
*/

__int64 SvDemo::FreeMemory<SvDemoMP>()
{
  return ??$FreeMemory@VSvDemoMP@@@SvDemo@@SAXXZ();
}

/*
==============
SvDemo::FreeMemory<SvDemoSP>
==============
*/

__int64 SvDemo::FreeMemory<SvDemoSP>()
{
  return ??$FreeMemory@VSvDemoSP@@@SvDemo@@SAXXZ();
}

/*
==============
SvDemo::GetMemorySize<SvDemoSP>
==============
*/

unsigned int __fastcall SvDemo::GetMemorySize<SvDemoSP>()
{
  return ??$GetMemorySize@VSvDemoSP@@@SvDemo@@SAIXZ();
}

/*
==============
SvDemo::AllocateMemory<SvDemoMP>
==============
*/

void __fastcall SvDemo::AllocateMemory<SvDemoMP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VSvDemoMP@@@SvDemo@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
SvDemo::AllocateMemory<SvDemoSP>
==============
*/

void __fastcall SvDemo::AllocateMemory<SvDemoSP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VSvDemoSP@@@SvDemo@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
SvDemo::GetDemoCommon
==============
*/

SvDemo *__fastcall SvDemo::GetDemoCommon()
{
  return ?GetDemoCommon@SvDemo@@SAPEAV1@XZ();
}

/*
==============
SvDemo::GetDemoCommon
==============
*/
SvDemo *SvDemo::GetDemoCommon()
{
  SvDemo *result; 

  result = SvDemo::ms_gServerDemoSystem;
  if ( !SvDemo::ms_gServerDemoSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 260, ASSERT_TYPE_ASSERT, "( ms_gServerDemoSystem )", (const char *)&queryFormat, "ms_gServerDemoSystem") )
      __debugbreak();
    return SvDemo::ms_gServerDemoSystem;
  }
  return result;
}

/*
==============
SvDemo::AllocateMemory<SvDemoMP>
==============
*/
void SvDemo::AllocateMemory<SvDemoMP>(HunkUser *hunkUser)
{
  unsigned int v2; 
  GSnapshotWeaponMap *v3; 
  void (__fastcall *CopyWeapon)(BgWeaponMap *, BgWeaponHandle *, const BgWeaponHandle *); 
  unsigned int ServerDemoMessageSize; 

  if ( (_BYTE)SvDemo::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 277, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE", -2i64) )
    __debugbreak();
  if ( SvDemo::ms_gServerDemoSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 278, ASSERT_TYPE_ASSERT, "( ms_gServerDemoSystem == 0 )", (const char *)&queryFormat, "ms_gServerDemoSystem == NULL") )
    __debugbreak();
  v2 = SvDemoMP::GetServerDemoMessageSize() + 7277312;
  v3 = (GSnapshotWeaponMap *)Mem_HunkUser_AllocInternal(hunkUser, v2, 0x80ui64, "SvDemo::AllocateMemory");
  memset_0(v3, 0, v2);
  memset_0(&v3->m_entries, 0, 0x6F0AF8ui64);
  v3->__vftable = (GSnapshotWeaponMap_vtbl *)&SvDemoMP::`vftable';
  LODWORD(v3[453366].m_entries) = 0;
  GSnapshotWeaponMap::GSnapshotWeaponMap(v3 + 454804);
  SvDemo::ms_gServerDemoSystem = (SvDemo *)v3;
  CopyWeapon = v3->CopyWeapon;
  ServerDemoMessageSize = SvDemoMP::GetServerDemoMessageSize();
  CopyWeapon((BgWeaponMap *)SvDemo::ms_gServerDemoSystem, (BgWeaponHandle *)&v3[454832], (const BgWeaponHandle *)ServerDemoMessageSize);
  LOBYTE(SvDemo::ms_allocatedType) = 2;
}

/*
==============
SvDemo::FreeMemory<SvDemoMP>
==============
*/
char SvDemo::FreeMemory<SvDemoMP>()
{
  char v0; 
  SvDemo *v1; 
  SvDemo *v2; 

  v0 = SvDemo::ms_allocatedType;
  if ( (_BYTE)SvDemo::ms_allocatedType )
  {
    if ( (_BYTE)SvDemo::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 295, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = SvDemo::ms_allocatedType;
  }
  if ( v0 != 2 )
  {
    v2 = SvDemo::ms_gServerDemoSystem;
    goto LABEL_13;
  }
LABEL_7:
  v1 = SvDemo::ms_gServerDemoSystem;
  if ( !SvDemo::ms_gServerDemoSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 299, ASSERT_TYPE_ASSERT, "(ms_gServerDemoSystem != 0)", "%s\n\tSvDemo::FreeMemory: Trying to free server memory but none have been allocated\n", "ms_gServerDemoSystem != NULL") )
      __debugbreak();
    v1 = SvDemo::ms_gServerDemoSystem;
  }
  ((void (__fastcall *)(SvDemo *, _QWORD))v1->~SvDemo)(v1, 0i64);
  DebugWipe(SvDemo::ms_gServerDemoSystem, 0x6F0B00ui64);
  v2 = NULL;
  SvDemo::ms_gServerDemoSystem = NULL;
LABEL_13:
  LOBYTE(SvDemo::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 310, ASSERT_TYPE_ASSERT, "( ms_gServerDemoSystem == 0 )", (const char *)&queryFormat, "ms_gServerDemoSystem == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
SvDemo::GetMemorySize<SvDemoMP>
==============
*/
__int64 SvDemo::GetMemorySize<SvDemoMP>()
{
  return SvDemoMP::GetServerDemoMessageSize() + 7277312;
}

/*
==============
SvDemo::~SvDemo
==============
*/
void SvDemo::~SvDemo(SvDemo *this)
{
  this->__vftable = (SvDemo_vtbl *)&SvDemo::`vftable';
}

/*
==============
SvDemo::AllocateMemory<SvDemoSP>
==============
*/
void SvDemo::AllocateMemory<SvDemoSP>(HunkUser *hunkUser)
{
  unsigned __int64 v2; 
  SvDemo *v3; 
  void (__fastcall *InitServerDemoMessageMem)(SvDemo *, unsigned __int8 *, unsigned __int64); 
  unsigned int ServerDemoMessageSize; 

  if ( (_BYTE)SvDemo::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 277, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( SvDemo::ms_gServerDemoSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 278, ASSERT_TYPE_ASSERT, "( ms_gServerDemoSystem == 0 )", (const char *)&queryFormat, "ms_gServerDemoSystem == NULL") )
    __debugbreak();
  v2 = SvDemoSP::GetServerDemoMessageSize() + 12729800;
  v3 = (SvDemo *)Mem_HunkUser_AllocInternal(hunkUser, v2, 0x80ui64, "SvDemo::AllocateMemory");
  memset_0(v3, 0, (unsigned int)v2);
  memset_0(&v3[1], 0, 0xC23DC0ui64);
  v3->__vftable = (SvDemo_vtbl *)&SvDemoSP::`vftable';
  SvDemo::ms_gServerDemoSystem = v3;
  InitServerDemoMessageMem = v3->InitServerDemoMessageMem;
  ServerDemoMessageSize = SvDemoSP::GetServerDemoMessageSize();
  InitServerDemoMessageMem(SvDemo::ms_gServerDemoSystem, (unsigned __int8 *)&v3[1591225], ServerDemoMessageSize);
  LOBYTE(SvDemo::ms_allocatedType) = 1;
}

/*
==============
SvDemo::FreeMemory<SvDemoSP>
==============
*/
char SvDemo::FreeMemory<SvDemoSP>()
{
  char v0; 
  SvDemo *v1; 
  SvDemo *v2; 

  v0 = SvDemo::ms_allocatedType;
  if ( (_BYTE)SvDemo::ms_allocatedType )
  {
    if ( (_BYTE)SvDemo::ms_allocatedType == HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 295, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = SvDemo::ms_allocatedType;
  }
  if ( v0 != 1 )
  {
    v2 = SvDemo::ms_gServerDemoSystem;
    goto LABEL_13;
  }
LABEL_7:
  v1 = SvDemo::ms_gServerDemoSystem;
  if ( !SvDemo::ms_gServerDemoSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 299, ASSERT_TYPE_ASSERT, "(ms_gServerDemoSystem != 0)", "%s\n\tSvDemo::FreeMemory: Trying to free server memory but none have been allocated\n", "ms_gServerDemoSystem != NULL") )
      __debugbreak();
    v1 = SvDemo::ms_gServerDemoSystem;
  }
  ((void (__fastcall *)(SvDemo *, _QWORD))v1->~SvDemo)(v1, 0i64);
  DebugWipe(SvDemo::ms_gServerDemoSystem, 0xC23DC8ui64);
  v2 = NULL;
  SvDemo::ms_gServerDemoSystem = NULL;
LABEL_13:
  LOBYTE(SvDemo::ms_allocatedType) = 0;
  if ( v2 )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 310, ASSERT_TYPE_ASSERT, "( ms_gServerDemoSystem == 0 )", (const char *)&queryFormat, "ms_gServerDemoSystem == NULL");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
SvDemo::GetMemorySize<SvDemoSP>
==============
*/
__int64 SvDemo::GetMemorySize<SvDemoSP>()
{
  return SvDemoSP::GetServerDemoMessageSize() + 12729800;
}

