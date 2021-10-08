/*
==============
CGMovingPlatformsMP::AllocateMovingPlatformSystem
==============
*/

void __fastcall CGMovingPlatformsMP::AllocateMovingPlatformSystem(HunkUser *hunkUser)
{
  ?AllocateMovingPlatformSystem@CGMovingPlatformsMP@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
CGMovingPlatformsMP::ClearMovingPlatformSystem
==============
*/

void CGMovingPlatformsMP::ClearMovingPlatformSystem(void)
{
  ?ClearMovingPlatformSystem@CGMovingPlatformsMP@@SAXXZ();
}

/*
==============
CGMovingPlatformsMP::CGMovingPlatformsMP
==============
*/

void __fastcall CGMovingPlatformsMP::CGMovingPlatformsMP(CGMovingPlatformsMP *this)
{
  ??0CGMovingPlatformsMP@@QEAA@XZ(this);
}

/*
==============
CGMovingPlatformsMP::GetPlayerBounds
==============
*/

void __fastcall CGMovingPlatformsMP::GetPlayerBounds(CGMovingPlatformsMP *this, LocalClientNum_t localClientNum, Bounds *bounds)
{
  ?GetPlayerBounds@CGMovingPlatformsMP@@UEAAXW4LocalClientNum_t@@PEAUBounds@@@Z(this, localClientNum, bounds);
}

/*
==============
CGMovingPlatformsMP::FreeMovingPlatformSystem
==============
*/

void CGMovingPlatformsMP::FreeMovingPlatformSystem(void)
{
  ?FreeMovingPlatformSystem@CGMovingPlatformsMP@@SAXXZ();
}

/*
==============
CGMovingPlatformsMP::CGMovingPlatformsMP
==============
*/
void CGMovingPlatformsMP::CGMovingPlatformsMP(CGMovingPlatformsMP *this)
{
  CGMovingPlatforms::CGMovingPlatforms(this);
  this->__vftable = (CGMovingPlatformsMP_vtbl *)&CGMovingPlatformsMP::`vftable';
}

/*
==============
CGMovingPlatformsMP::AllocateMovingPlatformSystem
==============
*/
void CGMovingPlatformsMP::AllocateMovingPlatformSystem(HunkUser *hunkUser)
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
CGMovingPlatformsMP::ClearMovingPlatformSystem
==============
*/
void CGMovingPlatformsMP::ClearMovingPlatformSystem(void)
{
  CGMovingPlatforms *v0; 
  CGMovingPlatforms *v1; 

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
  v1->__vftable = (CGMovingPlatforms_vtbl *)&CGMovingPlatformsMP::`vftable';
  if ( (_BYTE)CGMovingPlatforms::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.h", 164, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::ALLOCATION_TYPE)", (const char *)&queryFormat, "ms_allocatedType == SubSystem::ALLOCATION_TYPE") )
    __debugbreak();
}

/*
==============
CGMovingPlatformsMP::FreeMovingPlatformSystem
==============
*/
void CGMovingPlatformsMP::FreeMovingPlatformSystem(void)
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
CGMovingPlatformsMP::GetPlayerBounds
==============
*/
void CGMovingPlatformsMP::GetPlayerBounds(CGMovingPlatformsMP *this, LocalClientNum_t localClientNum, Bounds *bounds)
{
  CG_PredictMP_GetPlayerBounds(localClientNum, bounds);
}

