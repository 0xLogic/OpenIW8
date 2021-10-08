/*
==============
GTurret::GetMemorySize<GTurretMP>
==============
*/

unsigned int __fastcall GTurret::GetMemorySize<GTurretMP>()
{
  return ??$GetMemorySize@VGTurretMP@@@GTurret@@SAIXZ();
}

/*
==============
GTurret::FreeMemory<GTurretMP>
==============
*/

__int64 GTurret::FreeMemory<GTurretMP>()
{
  return ??$FreeMemory@VGTurretMP@@@GTurret@@SAXXZ();
}

/*
==============
GTurret::~GTurret
==============
*/

void __fastcall GTurret::~GTurret(GTurret *this)
{
  ??1GTurret@@UEAA@XZ(this);
}

/*
==============
GTurret::GetMemorySize<GTurretSP>
==============
*/

unsigned int __fastcall GTurret::GetMemorySize<GTurretSP>()
{
  return ??$GetMemorySize@VGTurretSP@@@GTurret@@SAIXZ();
}

/*
==============
GTurret::AllocateMemory<GTurretMP>
==============
*/

void __fastcall GTurret::AllocateMemory<GTurretMP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGTurretMP@@@GTurret@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GTurret::AllocateMemory<GTurretSP>
==============
*/

void __fastcall GTurret::AllocateMemory<GTurretSP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VGTurretSP@@@GTurret@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GTurret::GetTurret
==============
*/

GTurret *__fastcall GTurret::GetTurret(const BgObjectHandle<GTurret> *r_turretHandle)
{
  return ?GetTurret@GTurret@@SAPEAV1@AEBV?$BgObjectHandle@VGTurret@@@@@Z(r_turretHandle);
}

/*
==============
GTurret::FreeMemory<GTurretSP>
==============
*/

__int64 GTurret::FreeMemory<GTurretSP>()
{
  return ??$FreeMemory@VGTurretSP@@@GTurret@@SAXXZ();
}

/*
==============
GTurret::GetTurret
==============
*/
GTurret *GTurret::GetTurret(const BgObjectHandle<GTurret> *r_turretHandle)
{
  __int64 v2; 
  bool v3; 
  GTurret **v4; 
  __int64 v6; 
  int v7; 

  if ( !r_turretHandle->m_objIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_object_handle.h", 36, ASSERT_TYPE_ASSERT, "(IsDefined())", "%s\n\tCan't get the index of an undefined handle", "IsDefined()") )
    __debugbreak();
  v2 = r_turretHandle->m_objIndex - 1;
  if ( !(_BYTE)GTurret::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 226, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x80 )
  {
    v7 = 128;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 227, ASSERT_TYPE_ASSERT, "(unsigned)( turretIndex ) < (unsigned)( ( sizeof( *array_counter( ms_turretArray ) ) + 0 ) )", "turretIndex doesn't index ARRAY_COUNT( ms_turretArray )\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  v3 = GTurret::ms_turretArray[v2] == NULL;
  v4 = &GTurret::ms_turretArray[v2];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 228, ASSERT_TYPE_ASSERT, "( ms_turretArray[turretIndex] )", (const char *)&queryFormat, "ms_turretArray[turretIndex]") )
    __debugbreak();
  return *v4;
}

/*
==============
GTurret::AllocateMemory<GTurretMP>
==============
*/
void GTurret::AllocateMemory<GTurretMP>(HunkUser *hunkUser)
{
  char *v2; 
  unsigned int v3; 
  GTurret **v4; 
  GTurret *v5; 

  if ( (_BYTE)GTurret::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 248, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  v2 = (char *)Mem_HunkUser_AllocInternal(hunkUser, 0x8000ui64, 8ui64, "GTurret::AllocateMemory");
  memset_0(v2, 0, 0x8000ui64);
  v3 = 0;
  v4 = GTurret::ms_turretArray;
  do
  {
    if ( *v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 256, ASSERT_TYPE_ASSERT, "( !ms_turretArray[turretIndex] )", (const char *)&queryFormat, "!ms_turretArray[turretIndex]") )
      __debugbreak();
    v5 = (GTurret *)&v2[v3];
    memset_0(&v5->m_inuse, 0, 0xF8ui64);
    v5->__vftable = (GTurret_vtbl *)&GTurretMP::`vftable';
    v3 += 256;
    *v4++ = v5;
  }
  while ( v3 < 0x8000 );
  LOBYTE(GTurret::ms_allocatedType) = 2;
}

/*
==============
GTurret::FreeMemory<GTurretMP>
==============
*/
void GTurret::FreeMemory<GTurretMP>()
{
  char v0; 
  int v1; 
  void **v2; 

  v0 = GTurret::ms_allocatedType;
  if ( !(_BYTE)GTurret::ms_allocatedType )
    goto LABEL_6;
  if ( (_BYTE)GTurret::ms_allocatedType != HALF_HALF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 268, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GTurret::ms_allocatedType;
LABEL_6:
    if ( v0 != 2 )
      goto LABEL_12;
  }
  if ( !GTurret::ms_turretArray[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 272, ASSERT_TYPE_ASSERT, "(ms_turretArray[0] != 0)", "%s\n\tGTurret::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_turretArray[0] != NULL") )
    __debugbreak();
  v1 = 127;
  v2 = (void **)&GTurret::ms_turretArray[127];
  do
  {
    (**(void (__fastcall ***)(void *, _QWORD))*v2)(*v2, 0i64);
    DebugWipe(*v2, 0x100ui64);
    --v1;
    *v2-- = NULL;
  }
  while ( v1 >= 0 );
LABEL_12:
  LOBYTE(GTurret::ms_allocatedType) = 0;
  if ( GTurret::ms_turretArray[0] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 288, ASSERT_TYPE_ASSERT, "( ms_turretArray[0] == 0 )", (const char *)&queryFormat, "ms_turretArray[0] == NULL") )
      __debugbreak();
  }
}

/*
==============
GTurret::GetMemorySize<GTurretMP>
==============
*/
__int64 GTurret::GetMemorySize<GTurretMP>()
{
  return 0x8000i64;
}

/*
==============
GTurret::~GTurret
==============
*/
void GTurret::~GTurret(GTurret *this)
{
  this->__vftable = (GTurret_vtbl *)&GTurret::`vftable';
}

/*
==============
GTurret::AllocateMemory<GTurretSP>
==============
*/
void GTurret::AllocateMemory<GTurretSP>(HunkUser *hunkUser)
{
  char *v2; 
  unsigned int v3; 
  GTurret **v4; 
  GTurret *v5; 

  if ( (_BYTE)GTurret::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 248, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  v2 = (char *)Mem_HunkUser_AllocInternal(hunkUser, 0xA000ui64, 8ui64, "GTurret::AllocateMemory");
  memset_0(v2, 0, 0xA000ui64);
  v3 = 0;
  v4 = GTurret::ms_turretArray;
  do
  {
    if ( *v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 256, ASSERT_TYPE_ASSERT, "( !ms_turretArray[turretIndex] )", (const char *)&queryFormat, "!ms_turretArray[turretIndex]") )
      __debugbreak();
    v5 = (GTurret *)&v2[v3];
    memset_0(&v5->m_inuse, 0, 0x138ui64);
    v5->__vftable = (GTurret_vtbl *)&GTurretSP::`vftable';
    v3 += 320;
    *v4++ = v5;
  }
  while ( v3 < 0xA000 );
  LOBYTE(GTurret::ms_allocatedType) = 1;
}

/*
==============
GTurret::FreeMemory<GTurretSP>
==============
*/
void GTurret::FreeMemory<GTurretSP>()
{
  char v0; 
  int v1; 
  void **v2; 

  v0 = GTurret::ms_allocatedType;
  if ( !(_BYTE)GTurret::ms_allocatedType )
    goto LABEL_6;
  if ( (_BYTE)GTurret::ms_allocatedType != HALF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 268, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = GTurret::ms_allocatedType;
LABEL_6:
    if ( v0 != 1 )
      goto LABEL_12;
  }
  if ( !GTurret::ms_turretArray[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 272, ASSERT_TYPE_ASSERT, "(ms_turretArray[0] != 0)", "%s\n\tGTurret::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_turretArray[0] != NULL") )
    __debugbreak();
  v1 = 127;
  v2 = (void **)&GTurret::ms_turretArray[127];
  do
  {
    (**(void (__fastcall ***)(void *, _QWORD))*v2)(*v2, 0i64);
    DebugWipe(*v2, 0x140ui64);
    --v1;
    *v2-- = NULL;
  }
  while ( v1 >= 0 );
LABEL_12:
  LOBYTE(GTurret::ms_allocatedType) = 0;
  if ( GTurret::ms_turretArray[0] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 288, ASSERT_TYPE_ASSERT, "( ms_turretArray[0] == 0 )", (const char *)&queryFormat, "ms_turretArray[0] == NULL") )
      __debugbreak();
  }
}

/*
==============
GTurret::GetMemorySize<GTurretSP>
==============
*/
__int64 GTurret::GetMemorySize<GTurretSP>()
{
  return 40960i64;
}

