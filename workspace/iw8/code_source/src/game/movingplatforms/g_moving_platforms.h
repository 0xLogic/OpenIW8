/*
==============
GMovingPlatforms::GetMovingPlatforms
==============
*/

GMovingPlatforms *__fastcall GMovingPlatforms::GetMovingPlatforms()
{
  return ?GetMovingPlatforms@GMovingPlatforms@@SAPEAV1@XZ();
}

/*
==============
GMovingPlatforms::GetClientFromHandle
==============
*/

GMovingPlatformClient *__fastcall GMovingPlatforms::GetClientFromHandle(const BgObjectHandle<GMovingPlatformClient> *r_clientHandle)
{
  return ?GetClientFromHandle@GMovingPlatforms@@SAPEAVGMovingPlatformClient@@AEBV?$BgObjectHandle@VGMovingPlatformClient@@@@@Z(r_clientHandle);
}

/*
==============
GMovingPlatforms::AllocateMemory<GMovingPlatformsMP>
==============
*/

void __fastcall GMovingPlatforms::AllocateMemory<GMovingPlatformsMP>(HunkUser *hunkUser, const unsigned int moverClientCount)
{
  ??$AllocateMemory@VGMovingPlatformsMP@@@GMovingPlatforms@@SAXPEAUHunkUser@@I@Z(hunkUser, moverClientCount);
}

/*
==============
GMovingPlatforms::AllocateMemory<GMovingPlatformsSP>
==============
*/

void __fastcall GMovingPlatforms::AllocateMemory<GMovingPlatformsSP>(HunkUser *hunkUser, const unsigned int moverClientCount)
{
  ??$AllocateMemory@VGMovingPlatformsSP@@@GMovingPlatforms@@SAXPEAUHunkUser@@I@Z(hunkUser, moverClientCount);
}

/*
==============
GMovingPlatforms::GetMemorySize<GMovingPlatformsSP>
==============
*/

unsigned int __fastcall GMovingPlatforms::GetMemorySize<GMovingPlatformsSP>()
{
  return ??$GetMemorySize@VGMovingPlatformsSP@@@GMovingPlatforms@@SAIXZ();
}

/*
==============
GMovingPlatforms::FreeMemory<GMovingPlatformsMP>
==============
*/

__int64 GMovingPlatforms::FreeMemory<GMovingPlatformsMP>()
{
  return ??$FreeMemory@VGMovingPlatformsMP@@@GMovingPlatforms@@SAXXZ();
}

/*
==============
GMovingPlatforms::GetMemorySize<GMovingPlatformsMP>
==============
*/

unsigned int __fastcall GMovingPlatforms::GetMemorySize<GMovingPlatformsMP>()
{
  return ??$GetMemorySize@VGMovingPlatformsMP@@@GMovingPlatforms@@SAIXZ();
}

/*
==============
GMovingPlatforms::FreeMemory<GMovingPlatformsSP>
==============
*/

__int64 GMovingPlatforms::FreeMemory<GMovingPlatformsSP>()
{
  return ??$FreeMemory@VGMovingPlatformsSP@@@GMovingPlatforms@@SAXXZ();
}

/*
==============
GMovingPlatforms::GetMovingPlatforms
==============
*/
GMovingPlatforms *GMovingPlatforms::GetMovingPlatforms()
{
  GMovingPlatforms *result; 

  result = GMovingPlatforms::ms_instance;
  if ( !GMovingPlatforms::ms_instance )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 189, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
      __debugbreak();
    return GMovingPlatforms::ms_instance;
  }
  return result;
}

/*
==============
GMovingPlatforms::GetClientFromHandle
==============
*/
GMovingPlatformClient *GMovingPlatforms::GetClientFromHandle(const BgObjectHandle<GMovingPlatformClient> *r_clientHandle)
{
  GMovingPlatforms *v2; 
  unsigned int v3; 
  __int64 v5; 
  int v6; 

  if ( !GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 207, ASSERT_TYPE_ASSERT, "(ms_instance)", (const char *)&queryFormat, "ms_instance") )
    __debugbreak();
  v2 = GMovingPlatforms::ms_instance;
  if ( !r_clientHandle->m_objIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_object_handle.h", 36, ASSERT_TYPE_ASSERT, "(IsDefined())", "%s\n\tCan't get the index of an undefined handle", "IsDefined()") )
    __debugbreak();
  v3 = r_clientHandle->m_objIndex - 1;
  if ( !(_BYTE)GMovingPlatforms::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 198, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( v3 >= 0xF8 )
  {
    v6 = 248;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( ( sizeof( *array_counter( m_moverClientArray ) ) + 0 ) )", "clientIndex doesn't index ARRAY_COUNT( m_moverClientArray )\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return &v2->m_moverClientArray[v3];
}

/*
==============
GMovingPlatforms::AllocateMemory<GMovingPlatformsMP>
==============
*/
void GMovingPlatforms::AllocateMemory<GMovingPlatformsMP>(HunkUser *hunkUser, const unsigned int moverClientCount)
{
  GMovingPlatformsMP *v4; 
  GMovingPlatforms *v5; 
  __int64 v6; 
  int v7; 

  if ( GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 225, ASSERT_TYPE_ASSERT, "( ms_instance == 0 )", (const char *)&queryFormat, "ms_instance == NULL") )
    __debugbreak();
  v4 = (GMovingPlatformsMP *)Mem_HunkUser_AllocInternal(hunkUser, 0x5550ui64, 8ui64, "GMovingPlatforms::AllocateMemory");
  memset_0(v4, 0, sizeof(GMovingPlatformsMP));
  GMovingPlatformsMP::GMovingPlatformsMP(v4);
  GMovingPlatforms::ms_instance = v5;
  if ( moverClientCount > 0xF8 )
  {
    v7 = 248;
    LODWORD(v6) = moverClientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 231, ASSERT_TYPE_ASSERT, "( moverClientCount ) <= ( ( sizeof( *array_counter( ms_instance->m_moverClientArray ) ) + 0 ) )", "moverClientCount <= ARRAY_COUNT( ms_instance->m_moverClientArray )\n\t%i, %i", v6, v7) )
      __debugbreak();
    v5 = GMovingPlatforms::ms_instance;
  }
  v5->m_moverClientCount = moverClientCount;
  LOBYTE(GMovingPlatforms::ms_allocatedType) = 2;
}

/*
==============
GMovingPlatforms::FreeMemory<GMovingPlatformsMP>
==============
*/
void GMovingPlatforms::FreeMemory<GMovingPlatformsMP>()
{
  GMovingPlatforms *v0; 

  v0 = GMovingPlatforms::ms_instance;
  if ( GMovingPlatforms::ms_instance )
  {
    if ( (_BYTE)GMovingPlatforms::ms_allocatedType != HALF_HALF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 241, ASSERT_TYPE_ASSERT, "( !ms_instance || ms_instance->ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "!ms_instance || ms_instance->ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
        __debugbreak();
      v0 = GMovingPlatforms::ms_instance;
    }
    if ( v0 )
    {
      ((void (__fastcall *)(GMovingPlatforms *, _QWORD))v0->~BGMovingPlatforms)(v0, 0i64);
      DebugWipe(GMovingPlatforms::ms_instance, 0x5550ui64);
      GMovingPlatforms::ms_instance = NULL;
    }
  }
}

/*
==============
GMovingPlatforms::GetMemorySize<GMovingPlatformsMP>
==============
*/
__int64 GMovingPlatforms::GetMemorySize<GMovingPlatformsMP>()
{
  return 21840i64;
}

/*
==============
GMovingPlatforms::AllocateMemory<GMovingPlatformsSP>
==============
*/
void GMovingPlatforms::AllocateMemory<GMovingPlatformsSP>(HunkUser *hunkUser, const unsigned int moverClientCount)
{
  GMovingPlatforms *v4; 
  __int64 v5; 
  int v6; 

  if ( GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 225, ASSERT_TYPE_ASSERT, "( ms_instance == 0 )", (const char *)&queryFormat, "ms_instance == NULL") )
    __debugbreak();
  v4 = (GMovingPlatforms *)Mem_HunkUser_AllocInternal(hunkUser, 0x5550ui64, 8ui64, "GMovingPlatforms::AllocateMemory");
  memset_0(v4, 0, sizeof(GMovingPlatforms));
  GMovingPlatforms::GMovingPlatforms(v4);
  v4->__vftable = (GMovingPlatforms_vtbl *)&GMovingPlatformsSP::`vftable';
  GMovingPlatforms::ms_instance = v4;
  if ( moverClientCount <= 0xF8 )
  {
    v4->m_moverClientCount = moverClientCount;
    LOBYTE(GMovingPlatforms::ms_allocatedType) = 1;
  }
  else
  {
    v6 = 248;
    LODWORD(v5) = moverClientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 231, ASSERT_TYPE_ASSERT, "( moverClientCount ) <= ( ( sizeof( *array_counter( ms_instance->m_moverClientArray ) ) + 0 ) )", "moverClientCount <= ARRAY_COUNT( ms_instance->m_moverClientArray )\n\t%i, %i", v5, v6) )
      __debugbreak();
    GMovingPlatforms::ms_instance->m_moverClientCount = moverClientCount;
    LOBYTE(GMovingPlatforms::ms_allocatedType) = 1;
  }
}

/*
==============
GMovingPlatforms::FreeMemory<GMovingPlatformsSP>
==============
*/
void GMovingPlatforms::FreeMemory<GMovingPlatformsSP>()
{
  GMovingPlatforms *v0; 

  v0 = GMovingPlatforms::ms_instance;
  if ( GMovingPlatforms::ms_instance )
  {
    if ( (_BYTE)GMovingPlatforms::ms_allocatedType != HALF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 241, ASSERT_TYPE_ASSERT, "( !ms_instance || ms_instance->ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "!ms_instance || ms_instance->ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
        __debugbreak();
      v0 = GMovingPlatforms::ms_instance;
    }
    if ( v0 )
    {
      ((void (__fastcall *)(GMovingPlatforms *, _QWORD))v0->~BGMovingPlatforms)(v0, 0i64);
      DebugWipe(GMovingPlatforms::ms_instance, 0x5550ui64);
      GMovingPlatforms::ms_instance = NULL;
    }
  }
}

/*
==============
GMovingPlatforms::GetMemorySize<GMovingPlatformsSP>
==============
*/
__int64 GMovingPlatforms::GetMemorySize<GMovingPlatformsSP>()
{
  return 21840i64;
}

