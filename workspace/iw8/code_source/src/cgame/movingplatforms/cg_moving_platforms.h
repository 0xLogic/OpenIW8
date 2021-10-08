/*
==============
CGMovingPlatforms::FreeMemory<CGMovingPlatformsSP>
==============
*/

__int64 CGMovingPlatforms::FreeMemory<CGMovingPlatformsSP>()
{
  return ??$FreeMemory@VCGMovingPlatformsSP@@@CGMovingPlatforms@@SAXXZ();
}

/*
==============
CGMovingPlatforms::ClearMemory<CGMovingPlatformsMP>
==============
*/

__int64 CGMovingPlatforms::ClearMemory<CGMovingPlatformsMP>()
{
  return ??$ClearMemory@VCGMovingPlatformsMP@@@CGMovingPlatforms@@SAXXZ();
}

/*
==============
CGMovingPlatforms::ClearMemory<CGMovingPlatformsSP>
==============
*/

__int64 CGMovingPlatforms::ClearMemory<CGMovingPlatformsSP>()
{
  return ??$ClearMemory@VCGMovingPlatformsSP@@@CGMovingPlatforms@@SAXXZ();
}

/*
==============
CGMovingPlatforms::AllocateMemory<CGMovingPlatformsSP>
==============
*/

void __fastcall CGMovingPlatforms::AllocateMemory<CGMovingPlatformsSP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VCGMovingPlatformsSP@@@CGMovingPlatforms@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
CGMovingPlatforms::AllocateMemory<CGMovingPlatformsMP>
==============
*/

void __fastcall CGMovingPlatforms::AllocateMemory<CGMovingPlatformsMP>(HunkUser *hunkUser)
{
  ??$AllocateMemory@VCGMovingPlatformsMP@@@CGMovingPlatforms@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
CGMovingPlatforms::FreeMemory<CGMovingPlatformsMP>
==============
*/

__int64 CGMovingPlatforms::FreeMemory<CGMovingPlatformsMP>()
{
  return ??$FreeMemory@VCGMovingPlatformsMP@@@CGMovingPlatforms@@SAXXZ();
}

/*
==============
CGMovingPlatforms::AllocateMemory<CGMovingPlatformsMP>
==============
*/
void CGMovingPlatforms::AllocateMemory<CGMovingPlatformsMP>(HunkUser *hunkUser)
{
  CGMovingPlatforms *v2; 

  if ( CGMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.h", 127, ASSERT_TYPE_ASSERT, "(ms_instance == 0)", (const char *)&queryFormat, "ms_instance == NULL") )
    __debugbreak();
  CGMovingPlatforms::ms_instance = (CGMovingPlatforms *)Mem_HunkUser_AllocInternal(hunkUser, 8ui64, 8ui64, "CGMovingPlatforms::AllocateMemory");
  CGMovingPlatforms::ms_instance->__vftable = NULL;
  v2 = CGMovingPlatforms::ms_instance;
  CGMovingPlatforms::CGMovingPlatforms(CGMovingPlatforms::ms_instance);
  v2->__vftable = (CGMovingPlatforms_vtbl *)&CGMovingPlatformsMP::`vftable';
  LOBYTE(CGMovingPlatforms::ms_allocatedType) = 2;
}

/*
==============
CGMovingPlatforms::ClearMemory<CGMovingPlatformsMP>
==============
*/
char CGMovingPlatforms::ClearMemory<CGMovingPlatformsMP>()
{
  CGMovingPlatforms *v0; 
  CGMovingPlatforms *v1; 
  void **v2; 

  v0 = CGMovingPlatforms::ms_instance;
  if ( !CGMovingPlatforms::ms_instance || (_BYTE)CGMovingPlatforms::ms_allocatedType != HALF_HALF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.h", 158, ASSERT_TYPE_ASSERT, "(ms_instance && ms_instance->ms_allocatedType == SubSystem::ALLOCATION_TYPE)", (const char *)&queryFormat, "ms_instance && ms_instance->ms_allocatedType == SubSystem::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = CGMovingPlatforms::ms_instance;
  }
  ((void (__fastcall *)(CGMovingPlatforms *, _QWORD))v0->~BGMovingPlatforms)(v0, 0i64);
  CGMovingPlatforms::ms_instance->__vftable = NULL;
  v1 = CGMovingPlatforms::ms_instance;
  CGMovingPlatforms::CGMovingPlatforms(CGMovingPlatforms::ms_instance);
  v2 = &CGMovingPlatformsMP::`vftable';
  v1->__vftable = (CGMovingPlatforms_vtbl *)&CGMovingPlatformsMP::`vftable';
  if ( (_BYTE)CGMovingPlatforms::ms_allocatedType != HALF_HALF )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.h", 164, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::ALLOCATION_TYPE)", (const char *)&queryFormat, "ms_allocatedType == SubSystem::ALLOCATION_TYPE");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
CGMovingPlatforms::FreeMemory<CGMovingPlatformsMP>
==============
*/
void CGMovingPlatforms::FreeMemory<CGMovingPlatformsMP>()
{
  CGMovingPlatforms *v0; 

  v0 = CGMovingPlatforms::ms_instance;
  if ( CGMovingPlatforms::ms_instance )
  {
    if ( (_BYTE)CGMovingPlatforms::ms_allocatedType != HALF_HALF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.h", 142, ASSERT_TYPE_ASSERT, "(ms_instance == 0 || ms_instance->ms_allocatedType == SubSystem::ALLOCATION_TYPE)", (const char *)&queryFormat, "ms_instance == NULL || ms_instance->ms_allocatedType == SubSystem::ALLOCATION_TYPE") )
        __debugbreak();
      v0 = CGMovingPlatforms::ms_instance;
    }
    if ( v0 )
    {
      ((void (__fastcall *)(CGMovingPlatforms *, _QWORD))v0->~BGMovingPlatforms)(v0, 0i64);
      DebugWipe(CGMovingPlatforms::ms_instance, 8ui64);
      CGMovingPlatforms::ms_instance = NULL;
    }
  }
}

/*
==============
CGMovingPlatforms::AllocateMemory<CGMovingPlatformsSP>
==============
*/
void CGMovingPlatforms::AllocateMemory<CGMovingPlatformsSP>(HunkUser *hunkUser)
{
  CGMovingPlatforms *v2; 

  if ( CGMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.h", 127, ASSERT_TYPE_ASSERT, "(ms_instance == 0)", (const char *)&queryFormat, "ms_instance == NULL") )
    __debugbreak();
  CGMovingPlatforms::ms_instance = (CGMovingPlatforms *)Mem_HunkUser_AllocInternal(hunkUser, 8ui64, 8ui64, "CGMovingPlatforms::AllocateMemory");
  CGMovingPlatforms::ms_instance->__vftable = NULL;
  v2 = CGMovingPlatforms::ms_instance;
  CGMovingPlatforms::CGMovingPlatforms(CGMovingPlatforms::ms_instance);
  v2->__vftable = (CGMovingPlatforms_vtbl *)&CGMovingPlatformsSP::`vftable';
  LOBYTE(CGMovingPlatforms::ms_allocatedType) = 1;
}

/*
==============
CGMovingPlatforms::ClearMemory<CGMovingPlatformsSP>
==============
*/
char CGMovingPlatforms::ClearMemory<CGMovingPlatformsSP>()
{
  CGMovingPlatforms *v0; 
  CGMovingPlatforms *v1; 
  void **v2; 

  v0 = CGMovingPlatforms::ms_instance;
  if ( !CGMovingPlatforms::ms_instance || (_BYTE)CGMovingPlatforms::ms_allocatedType != HALF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.h", 158, ASSERT_TYPE_ASSERT, "(ms_instance && ms_instance->ms_allocatedType == SubSystem::ALLOCATION_TYPE)", (const char *)&queryFormat, "ms_instance && ms_instance->ms_allocatedType == SubSystem::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = CGMovingPlatforms::ms_instance;
  }
  ((void (__fastcall *)(CGMovingPlatforms *, _QWORD))v0->~BGMovingPlatforms)(v0, 0i64);
  CGMovingPlatforms::ms_instance->__vftable = NULL;
  v1 = CGMovingPlatforms::ms_instance;
  CGMovingPlatforms::CGMovingPlatforms(CGMovingPlatforms::ms_instance);
  v2 = &CGMovingPlatformsSP::`vftable';
  v1->__vftable = (CGMovingPlatforms_vtbl *)&CGMovingPlatformsSP::`vftable';
  if ( (_BYTE)CGMovingPlatforms::ms_allocatedType != HALF )
  {
    LOBYTE(v2) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.h", 164, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::ALLOCATION_TYPE)", (const char *)&queryFormat, "ms_allocatedType == SubSystem::ALLOCATION_TYPE");
    if ( (_BYTE)v2 )
      __debugbreak();
  }
  return (char)v2;
}

/*
==============
CGMovingPlatforms::FreeMemory<CGMovingPlatformsSP>
==============
*/
void CGMovingPlatforms::FreeMemory<CGMovingPlatformsSP>()
{
  CGMovingPlatforms *v0; 

  v0 = CGMovingPlatforms::ms_instance;
  if ( CGMovingPlatforms::ms_instance )
  {
    if ( (_BYTE)CGMovingPlatforms::ms_allocatedType != HALF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.h", 142, ASSERT_TYPE_ASSERT, "(ms_instance == 0 || ms_instance->ms_allocatedType == SubSystem::ALLOCATION_TYPE)", (const char *)&queryFormat, "ms_instance == NULL || ms_instance->ms_allocatedType == SubSystem::ALLOCATION_TYPE") )
        __debugbreak();
      v0 = CGMovingPlatforms::ms_instance;
    }
    if ( v0 )
    {
      ((void (__fastcall *)(CGMovingPlatforms *, _QWORD))v0->~BGMovingPlatforms)(v0, 0i64);
      DebugWipe(CGMovingPlatforms::ms_instance, 8ui64);
      CGMovingPlatforms::ms_instance = NULL;
    }
  }
}

