/*
==============
CG_Main_FreeCloth
==============
*/

void __fastcall CG_Main_FreeCloth(LocalClientNum_t localClientNum)
{
  ?CG_Main_FreeCloth@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Main_RegisterSurfaceEffects
==============
*/

void __fastcall CG_Main_RegisterSurfaceEffects(const char *filename)
{
  ?CG_Main_RegisterSurfaceEffects@@YAXPEBD@Z(filename);
}

/*
==============
CG_Main_InitViewDimensions
==============
*/

void __fastcall CG_Main_InitViewDimensions(LocalClientNum_t localClientNum)
{
  ?CG_Main_InitViewDimensions@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Main_ImpactTypeToRegisteredImpactType
==============
*/

RegisteredImpactType __fastcall CG_Main_ImpactTypeToRegisteredImpactType(int impactType)
{
  return ?CG_Main_ImpactTypeToRegisteredImpactType@@YA?AW4RegisteredImpactType@@H@Z(impactType);
}

/*
==============
CG_Main_InitDofPhysicalDefault
==============
*/

void __fastcall CG_Main_InitDofPhysicalDefault(GfxDepthOfFieldPhysical *dofPhysical)
{
  ?CG_Main_InitDofPhysicalDefault@@YAXPEAUGfxDepthOfFieldPhysical@@@Z(dofPhysical);
}

/*
==============
CG_Main_FreeRagdolls
==============
*/

void __fastcall CG_Main_FreeRagdolls(LocalClientNum_t localClientNum)
{
  ?CG_Main_FreeRagdolls@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Main_RegisterGameDvars
==============
*/

void CG_Main_RegisterGameDvars(void)
{
  ?CG_Main_RegisterGameDvars@@YAXXZ();
}

/*
==============
CG_Main_UnregisterGameDvars
==============
*/

void CG_Main_UnregisterGameDvars(void)
{
  ?CG_Main_UnregisterGameDvars@@YAXXZ();
}

/*
==============
CG_Main_PrecacheShellshocks
==============
*/

void CG_Main_PrecacheShellshocks(void)
{
  ?CG_Main_PrecacheShellshocks@@YAXXZ();
}

/*
==============
CG_Main_CleanupLevel
==============
*/

void CG_Main_CleanupLevel(void)
{
  ?CG_Main_CleanupLevel@@YAXXZ();
}

/*
==============
CG_Main_InitDofPhysical
==============
*/

void __fastcall CG_Main_InitDofPhysical(LocalClientNum_t localClientNum)
{
  ?CG_Main_InitDofPhysical@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Main_InitRadialMotionBlur
==============
*/

void __fastcall CG_Main_InitRadialMotionBlur(GfxRadialMotionBlur *radialMotionBlur)
{
  ?CG_Main_InitRadialMotionBlur@@YAXPEAUGfxRadialMotionBlur@@@Z(radialMotionBlur);
}

/*
==============
CG_Main_FreePhysics
==============
*/

void __fastcall CG_Main_FreePhysics(LocalClientNum_t localClientNum)
{
  ?CG_Main_FreePhysics@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Main_InitSuits
==============
*/

void __fastcall CG_Main_InitSuits(const bool isFullInit)
{
  ?CG_Main_InitSuits@@YAX_N@Z(isFullInit);
}

/*
==============
CG_Main_RegisteredImpactTypeToImpactType
==============
*/

int __fastcall CG_Main_RegisteredImpactTypeToImpactType(RegisteredImpactType registeredImpactType)
{
  return ?CG_Main_RegisteredImpactTypeToImpactType@@YAHW4RegisteredImpactType@@@Z(registeredImpactType);
}

/*
==============
CG_Main_ClearCgMedia
==============
*/

void CG_Main_ClearCgMedia(void)
{
  ?CG_Main_ClearCgMedia@@YAXXZ();
}

/*
==============
CG_Main_CleanupLevel
==============
*/
void CG_Main_CleanupLevel(void)
{
  CG_VisionSetShutdown();
  Glass_ClearPendingZones();
}

/*
==============
CG_Main_ClearCgMedia
==============
*/

void __fastcall CG_Main_ClearCgMedia(double _XMM0_8)
{
  memset_0(&cgMedia, 0, sizeof(cgMedia));
  cgMediaSurfaceFxMap.m_freelist.m_head.mp_next = NULL;
  *(_QWORD *)&cgMediaSurfaceFxMap.m_endNodeBase.m_color = 0i64;
  *(_QWORD *)&cgMediaSurfaceFxMap.m_keyAccessor.ntl::unary_function<ntl::pair<ParticleSystemDef const *,unsigned int>,ParticleSystemDef const *> = 0i64;
  cgMediaSurfaceFxMap.ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator>::ntl::solitary_buffer_allocator::m_data.m_buffer = NULL;
  cgMediaSurfaceFxMap.ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator>::ntl::solitary_buffer_allocator::m_data.m_size = 0i64;
  cgMediaSurfaceFxMap.m_size = 0i64;
  cgMediaSurfaceFxMap.m_endNodeBase.mp_parent = NULL;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  cgMediaSurfaceFxMap.m_endNodeBase.mp_left = &cgMediaSurfaceFxMap.m_endNodeBase;
  cgMediaSurfaceFxMap.m_endNodeBase.mp_right = &cgMediaSurfaceFxMap.m_endNodeBase;
  cgMediaSurfaceFxMap.ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> > >,48>::m_data = _XMM0;
}

/*
==============
CG_Main_FreeCloth
==============
*/
void CG_Main_FreeCloth(LocalClientNum_t localClientNum)
{
  int i; 

  if ( localClientNum != LOCAL_CLIENT_INVALID && localClientNum < cg_maxLocalClients )
  {
    for ( i = 0; i < 2048; ++i )
    {
      CG_Entity_DestroyCloth(localClientNum, i);
      CG_Entity_DestroyStowedCloth(localClientNum, i);
    }
  }
}

/*
==============
CG_Main_FreePhysics
==============
*/
void CG_Main_FreePhysics(LocalClientNum_t localClientNum)
{
  int i; 

  if ( localClientNum != LOCAL_CLIENT_INVALID && localClientNum < cg_maxLocalClients )
  {
    for ( i = 0; i < 2048; ++i )
      CG_Entity_DestroyPhysics(localClientNum, i);
  }
}

/*
==============
CG_Main_FreeRagdolls
==============
*/
void CG_Main_FreeRagdolls(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgEntitySystem **v2; 
  int v3; 
  __int64 v4; 
  CgEntitySystem *v5; 
  int ragdollHandle; 
  int killcamRagdollHandle; 
  __int64 v8; 
  __int64 v9; 

  v1 = localClientNum;
  if ( Ragdoll_IsRegistered(localClientNum) && (_DWORD)v1 != -1 && (int)v1 < cg_maxLocalClients )
  {
    v2 = &CgEntitySystem::ms_entitySystemArray[v1];
    v3 = 0;
    v4 = 0i64;
    do
    {
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v9) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v9) )
          __debugbreak();
      }
      if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v9) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v8) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      if ( !*v2 )
      {
        LODWORD(v9) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v9) )
          __debugbreak();
      }
      v5 = *v2;
      if ( (unsigned int)v3 >= 0x800 )
      {
        LODWORD(v9) = 2048;
        LODWORD(v8) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      ragdollHandle = v5->m_entities[v4].pose.ragdollHandle;
      if ( ragdollHandle )
      {
        Ragdoll_Release(ragdollHandle);
        v5->m_entities[v4].pose.ragdollHandle = 0;
      }
      killcamRagdollHandle = v5->m_entities[v4].pose.killcamRagdollHandle;
      if ( killcamRagdollHandle )
      {
        Ragdoll_Release(killcamRagdollHandle);
        v5->m_entities[v4].pose.killcamRagdollHandle = 0;
      }
      ++v3;
      ++v4;
    }
    while ( v3 < 2048 );
  }
}

/*
==============
CG_Main_ImpactTypeToRegisteredImpactType
==============
*/
__int64 CG_Main_ImpactTypeToRegisteredImpactType(int impactType)
{
  FxImpactTable *impactFx; 
  __int64 v2; 
  int v4; 

  impactFx = cgMedia.impactFx;
  v2 = impactType;
  if ( cgMedia.impactFx )
  {
    if ( impactType >= cgMedia.impactFx->impactTypeCount )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_main.cpp", 486, ASSERT_TYPE_ASSERT, "(unsigned)( impactType ) < (unsigned)( cgMedia.impactFx->impactTypeCount )", "impactType doesn't index cgMedia.impactFx->impactTypeCount\n\t%i not in [0, %i)", impactType, cgMedia.impactFx->impactTypeCount) )
        __debugbreak();
      impactFx = cgMedia.impactFx;
    }
    v4 = impactFx->genericToRegistered[v2];
    if ( v4 >= 33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_main.cpp", 488, ASSERT_TYPE_ASSERT, "( static_cast<int>(registeredImpactType) ) < ( static_cast<int>(RegisteredImpactType::COUNT) )", "%s < %s\n\t%i, %i", "static_cast<int>(registeredImpactType)", "static_cast<int>(RegisteredImpactType::COUNT)", v4, 33) )
      __debugbreak();
    return (unsigned int)v4;
  }
  else
  {
    Com_PrintWarning(LODWORD(cgMedia.impactFx) + 14, "ImpactFX table not present; ImpactTypeToRegisteredImpactType() failed.");
    return 0xFFFFFFFFi64;
  }
}

/*
==============
CG_Main_InitDofPhysical
==============
*/
void CG_Main_InitDofPhysical(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *v2; 
  __int64 v4; 
  int v5; 

  v1 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount )
  {
    v5 = cg_t::ms_allocatedCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v4) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v4) )
      __debugbreak();
  }
  v2 = cg_t::ms_cgArray[v1];
  *(_QWORD *)&v2->refdef.dofPhysical.enabled = 0i64;
  *(_QWORD *)&v2->refdef.dofPhysical.minFocusDistance = 0i64;
  *(_QWORD *)&v2->refdef.dofPhysical.fstop = 0i64;
  *(_QWORD *)&v2->refdef.dofPhysical.cocScale = 0i64;
  v2->refdef.dofPhysical.viewModelFocusDistance = 0.0;
  *(_WORD *)&v2->refdef.dofPhysical.hipEnabled = 0;
  v2->refdef.dofPhysical.adsEnabled = 0;
  v2->refdef.dofPhysical.filmDiagonal = 43.200001;
  v2->refdef.dofPhysical.minFocusDistance = 9.0;
  v2->refdef.dofPhysical.maxCocDiameter = 14.5;
  v2->refdef.dofPhysical.fstop = 22.0;
  *(_QWORD *)&v2->refdef.dofPhysical.focusDistance = 1105881203i64;
  v2->refdef.dofPhysicalFocusState.fstop = 22.0;
  *(_QWORD *)&v2->refdef.dofPhysicalFocusState.focusDistance = 1105881203i64;
  v2->refdef.dofPhysicalFocusState.focusGradient = 0.0;
  v2->refdef.dofLerpValues.fWeaponPosFrac = 0.0;
  v2->refdef.dofLerpValues.dofPhysical.focusDistance = 29.301001;
  v2->refdef.dofLerpValues.dofPhysical.fstop = 22.0;
  v2->refdef.dofLerpValues.dofPhysical.maxCocDiameter = 14.5;
}

/*
==============
CG_Main_InitDofPhysicalDefault
==============
*/
void CG_Main_InitDofPhysicalDefault(GfxDepthOfFieldPhysical *dofPhysical)
{
  *(_DWORD *)&dofPhysical->enabled = 0;
  *(_QWORD *)&dofPhysical->viewModelFstop = 0i64;
  dofPhysical->filmDiagonal = 43.200001;
  dofPhysical->minFocusDistance = 9.0;
  dofPhysical->maxCocDiameter = 14.5;
  dofPhysical->fstop = 22.0;
  *(_QWORD *)&dofPhysical->focusDistance = 1105881203i64;
}

/*
==============
CG_Main_InitRadialMotionBlur
==============
*/
void CG_Main_InitRadialMotionBlur(GfxRadialMotionBlur *radialMotionBlur)
{
  if ( !radialMotionBlur && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_main.cpp", 307, ASSERT_TYPE_ASSERT, "(radialMotionBlur)", (const char *)&queryFormat, "radialMotionBlur") )
    __debugbreak();
  *(_QWORD *)&radialMotionBlur->enabled = 0i64;
  radialMotionBlur->strength = 0.0;
}

/*
==============
CG_Main_InitSuits
==============
*/
void CG_Main_InitSuits(const bool isFullInit)
{
  void (__fastcall *v1)(const unsigned int, const char *); 

  v1 = (void (__fastcall *)(const unsigned int, const char *))BG_LoadSuit;
  if ( !isFullInit )
    v1 = CG_Main_VerifySuitDef;
  NetConstStrings_CallForAllSuitStrings(v1);
}

/*
==============
CG_Main_InitViewDimensions
==============
*/
void CG_Main_InitViewDimensions(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cgs_t *v2; 
  float *p_viewAspect; 
  int *p_viewHeight; 
  int *p_viewWidth; 
  __int64 v6; 
  __int64 v8; 
  int v9; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v9 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 98, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v9) )
      __debugbreak();
  }
  if ( (int)v1 < cgs_t::ms_allocatedCount )
  {
    if ( (unsigned int)v1 >= cgs_t::ms_allocatedCount )
    {
      LODWORD(v8) = cgs_t::ms_allocatedCount;
      LODWORD(v6) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 112, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cgs_t::ms_allocatedCount )", "localClientNum doesn't index cgs_t::ms_allocatedCount\n\t%i not in [0, %i)", v6, v8) )
        __debugbreak();
    }
    if ( !cgs_t::ms_cgsArray[v1] )
    {
      LODWORD(v8) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 113, ASSERT_TYPE_ASSERT, "(cgs_t::ms_cgsArray[localClientNum])", "%s\n\tTrying to access unallocated client static globals for localClientNum %d\n", "cgs_t::ms_cgsArray[localClientNum]", v8) )
        __debugbreak();
    }
    if ( cgs_t::ms_allocatedType == STATIC_GLOB_TYPE_UNKNOWN )
    {
      LODWORD(v8) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 114, ASSERT_TYPE_ASSERT, "(cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client static globals for localClientNum %d but the client static global type is not known\n", "cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN", v8) )
        __debugbreak();
    }
    v2 = cgs_t::ms_cgsArray[v1];
    p_viewAspect = &v2->viewAspect;
    v2->viewX = 0;
    p_viewHeight = &v2->viewHeight;
    v2->viewMult = 1.0;
    p_viewWidth = &v2->viewWidth;
    CL_GetScreenDimensions(&v2->viewWidth, &v2->viewHeight, &v2->viewAspect);
    if ( *p_viewWidth <= 0 )
    {
      LODWORD(v6) = *p_viewWidth;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_main.cpp", 256, ASSERT_TYPE_SANITY, "( ( cgs->viewWidth > 0 ) )", "( cgs->viewWidth ) = %i", v6) )
        __debugbreak();
    }
    if ( *p_viewHeight <= 0 )
    {
      LODWORD(v6) = *p_viewHeight;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_main.cpp", 257, ASSERT_TYPE_SANITY, "( ( cgs->viewHeight > 0 ) )", "( cgs->viewHeight ) = %i", v6) )
        __debugbreak();
    }
    if ( *p_viewAspect <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_main.cpp", 258, ASSERT_TYPE_SANITY, "( ( cgs->viewAspect > 0 ) )", "( cgs->viewAspect ) = %g", *p_viewAspect) )
      __debugbreak();
  }
}

/*
==============
CG_Main_PrecacheShellshocks
==============
*/
void CG_Main_PrecacheShellshocks(void)
{
  NetConstStrings_CallForCommonShockStrings(CG_Main_RegisterShellshocks_Callback);
  NetConstStrings_CallForLevelShockStrings(CG_Main_RegisterShellshocks_Callback);
}

/*
==============
CG_Main_RegisterGameDvars
==============
*/
void CG_Main_RegisterGameDvars(void)
{
  const dvar_t **v0; 
  unsigned int i; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v9; 
  char ActiveGameMode; 
  int v19; 
  unsigned int v20; 
  char v21; 
  unsigned int v22; 
  char v23; 
  unsigned int v24; 
  float v25; 
  unsigned int v30; 
  unsigned int v31; 
  float v32; 
  unsigned int v37; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned int v49; 
  unsigned int v50; 
  unsigned int v51; 
  char v75; 
  unsigned int v76; 
  unsigned int v77; 
  unsigned int v78; 
  unsigned int v99; 
  char v100; 
  bool v101; 
  unsigned int v102; 
  unsigned int v103; 
  unsigned int v104; 
  unsigned int v109; 
  unsigned int v114; 
  unsigned int v119; 
  unsigned int v124; 
  unsigned int v125; 
  unsigned int v126; 
  char v131; 
  char dest[64]; 

  if ( !(unsigned __int8)Com_GameMode_GetActiveGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_main.cpp", 215, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() != GameModeType::NONE)", "%s\n\tThese dvars must be registered after game mode creation", "Com_GameMode_GetActiveGameMode() != GameModeType::NONE") )
    __debugbreak();
  v0 = cg_hud_outline_colors;
  for ( i = 0; i < 0xC; ++i )
  {
    Com_sprintf(dest, 0x40ui64, "cg_hud_outline_colors_%d", i);
    *v0++ = Dvar_RegisterColor(dest, 1.0, 1.0, 1.0, 1.0, 0x140u, "hud outline color");
  }
  Com_GameMode_GetActiveGameMode();
  DVARBOOL_cg_drawVersion = Dvar_RegisterBool("LKQNQLPSNQ", 1, 0, "Draw the game version");
  Com_GameMode_GetActiveGameMode();
  DVARBOOL_cg_drawBspVersion = Dvar_RegisterBool("OOTOSQQPN", 1, 0, "Draw the current map BSP version");
  DVARFLT_cg_drawVersionX = Dvar_RegisterFloat("NQKSKRLLMO", 20.0, 0.0, 512.0, 0, "X offset for the version string");
  DVARFLT_cg_drawVersionY = Dvar_RegisterFloat("LNSPRMNMQL", 10.0, 0.0, 512.0, 0, "Y offset for the version string");
  DVARFLT_cg_drawVersionFontScale = Dvar_RegisterFloat("PSTNQQPKN", 0.15000001, 0.0, 1.0, 0, "Fontscale of Version debug text");
  DVARFLT_cg_drawBspVersionX = Dvar_RegisterFloat("TQNROPMQP", 20.0, 0.0, 512.0, 0, "X offset for the BSP version string");
  DVARFLT_cg_drawBspVersionY = Dvar_RegisterFloat("NLSQKTNLMS", 0.0, 0.0, 512.0, 0, "Y offset for the BSP version string");
  DVARFLT_cg_drawBSPVersionFontScale = Dvar_RegisterFloat("NSRKONOQQQ", 0.15000001, 0.0, 1.0, 0, "Fontscale of BSP Version debug text");
  DVARBOOL_cg_draw2D = Dvar_RegisterBool("NNTRRPNLQ", 1, 4u, "Draw 2D screen elements");
  DVARBOOL_cg_drawDevOverlays = Dvar_RegisterBool("TKNMLPPSS", 1, 4u, "Draw dev overlays");
  DVARSTR_cg_drawTitleString = Dvar_RegisterString("NNQKLMRLQR", (const char *)&queryFormat.fmt + 3, 0, "Title message for screenshots - none if empty");
  DVARFLT_cg_drawTitleX = Dvar_RegisterFloat("LNOROTKROM", 32.0, -640.0, 640.0, 0, "Title message for screenshots - X Position");
  _XMM6 = LODWORD(FLOAT_5_0);
  DVARFLT_cg_drawTitleY = Dvar_RegisterFloat("NOMKLLKLRP", 64.0, -480.0, 480.0, 0, "Title message for screenshots - Y Position");
  DVARFLT_cg_drawTitleSize = Dvar_RegisterFloat("LOQKMLPKMN", 0.5, 0.0, 5.0, 0, "Title message for screenshots - Font Size");
  DVARCLR_cg_drawTitleColor = Dvar_RegisterColor("PPPPNSPKR", 1.0, 1.0, 1.0, 1.0, 0, "Title message for screenshots - Color");
  DVARINT_cg_drawFPSGraphs = Dvar_RegisterEnum("PLTMRLOKK", cg_drawFPSGraphModes, 0, 0, "Display an FPS graph.");
  DVARINT_cg_drawTerrainStreamingInfo = Dvar_RegisterInt("LOORORLTLL", 0, 0, 4, 4u, "Display Super Terrain debugging info.  1 - material/combined/mask textures, 2 - Geo streaming");
  DVARINT_cg_drawTerrainStreamingInfoPosX = Dvar_RegisterInt("MQNMQLNQLP", 10, -4096, 4096, 4u, "X offset of Super Terrain Streaming info");
  DVARINT_cg_drawTerrainStreamingInfoPosY = Dvar_RegisterInt("PPTTTOLSM", 15, -2048, 2048, 4u, "Y offset of Super Terrain Streaming info");
  DVARFLT_cg_drawTerrainStreamingInfoScale = Dvar_RegisterFloat("LQSSRPKTLT", 0.18000001, 0.0099999998, 1.0, 4u, "Scale of Super Terrain Streaming info");
  DVARINT_cg_drawTerrainStreamingInfoMaterialLayerScroll = Dvar_RegisterInt("LOLONPKQMM", 0, 0, 4096, 4u, "Scrolls the Material Layer list");
  DVARINT_cg_drawTerrainStreamingInfoCombinedMapScroll = Dvar_RegisterInt("NRTQPQPNNT", 0, 0, 2048, 4u, "Scrolls the Combined Map list");
  DVARINT_cg_drawTerrainStreamingInfoStreamedGeoScroll = Dvar_RegisterInt("LNNSKRTPTS", 0, 0, 2048, 4u, "Scrolls the Streamed Geometry list");
  DVARINT_cg_drawTerrainStreamingInfoRenderedGeoScroll = Dvar_RegisterInt("MTLRNMTSQK", 0, 0, 2048, 4u, "Scrolls the Rendered Geometry list");
  DVARINT_cg_drawTerrainStreamingInfoHeightCutoutLmapScroll = Dvar_RegisterInt("MPSTPNTROL", 0, 0, 2048, 4u, "Scrolls the height, cutout, and light map list");
  DVARINT_cg_drawClutterInfo = Dvar_RegisterInt("NTPTOQQOPR", 0, 0, 5, 4u, "Display Clutter debugging info: 0: off, 1: No Sorting, 2: sort by generated instances, 3: sort by sampled instances, 4: sort by max instances, 5: sort by bitmask memory");
  v3 = 262340;
  v4 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v4 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPINT_cg_rootMotionLerpTime = Dvar_RegisterInt("LSPRLSRMOS", 200, 50, 5000, v4, "Time (ms) to lerp into a root motion anim so that the anim will always start at the beginning");
  DVARBOOL_cg_drawGun = Dvar_RegisterBool("SROLTPQLK", 1, 4u, "Draw the view model");
  DVARFLT_cg_buttonHintMinScale = Dvar_RegisterFloat("ROSSSPSSP", 1.0, 0.0, 1.0, 4u, "The minimum scale cursor hints of type HINT_BUTTON are displayed at");
  DVARFLT_cg_buttonHintNaturalDistance = Dvar_RegisterFloat("NSOMOMMLML", 100.0, 0.0, 3.4028235e38, 4u, "The distance at which cursor hints of type HINT_BUTTON are displayed at scale 1");
  DVARFLT_cg_playerFovScale = Dvar_RegisterFloat("OLPPMPLNTS", 1.0, 0.0099999998, 2.0, 0x40u, "Scale applied to player 0 field of view");
  DCONST_DVARFLT_cg_fov_viewmodel = Dvar_RegisterFloat("cg_fov_viewmodel", 0.0, 0.0, 160.0, 0x40004u, "The separate field of view angle in degrees applied to the view model ( < 1.0 means standard field of view is used)");
  DVARFLT_cg_fovMin = Dvar_RegisterFloat("NQPKSOTP", 1.0, 1.0, 160.0, 0, "The minimum possible field of view");
  DVARFLT_cg_viewVehicleInfluence = Dvar_RegisterFloat("LNLQKQMPS", 1.0, 0.0, 1.0, 0x44u, "The influence on the view angles from being in a vehicle");
  DVARBOOL_cg_drawHealth = Dvar_RegisterBool("MQNMPKRKMQ", 0, 4u, "Draw health bar");
  DVARBOOL_cg_drawBreathHint = Dvar_RegisterBool("MPRRPOPQPN", 1, 0, "Draw a 'hold breath to steady' hint");
  DVARINT_cg_drawCenterLines = Dvar_RegisterEnum("LKQRKNPNMS", cg_drawCenterLineNames, 0, 0, "Draw a horizontal line and a vertical line through the center of the screen");
  DVARBOOL_cg_useTopDownMapData = Dvar_RegisterBool("PTTNLRPLQ", 1, 0, "Whether or not to use the top down map data.");
  DVARBOOL_cg_debugDrawHandDragInfo = Dvar_RegisterBool("LMSSTPMRQQ", 0, 4u, "Draw info about hand drag when swimming");
  DVARINT_cg_debugDrawSpawnGroupLoot = Dvar_RegisterInt("NRORKMLKMN", 0, 0, 2, 4u, "Draw loot spawn points");
  DVARINT_snd_drawInfo = Dvar_RegisterEnum("NSOPTRNRMT", snd_drawInfoStrings, 0, 0, "Draw debugging information for sounds");
  DVARBOOL_cg_drawScriptUsageServer = Dvar_RegisterBool("PKOPRQPQP", 0, 0, "Draw debugging information for server scripts");
  DVARBOOL_cg_drawTurretCrosshair = Dvar_RegisterBool("LQLQQSSSQQ", 1, 0, "Draw a cross hair when using a turret");
  DVARBOOL_cg_drawDamageDirection = Dvar_RegisterBool("MROMRKROOO", 1, 0x44u, "Draw hit direction arrow.");
  DVARBOOL_cg_requireCollisionForPrediction = Dvar_RegisterBool("RNRTLROOR", 1, 4u, "Do we require ground collision on the client for predictive pmove.");
  v5 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v5 = 262276;
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm12, xmm2
  }
  DCONST_DVARMPFLT_painVisionLerpOutRate = Dvar_RegisterFloat("OONLORSMO", *(float *)&_XMM0, 0.0, 30.0, v5, "Rate at which pain vision effect lerps out");
  v9 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v9 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_painVisionLerpInRate = Dvar_RegisterFloat("MLLRKTPNRR", 10.0, 0.0, 30.0, v9, "Rate at which pain vision effect lerps in");
  DVARFLT_painVisionTriggerHealth = Dvar_RegisterFloat("TTMKNNPSN", 0.55000001, 0.0, 1.0, 4u, "Health (0 to 1) that will trigger the pain vision effect");
  DVARINT_cg_hudDamageIconTime = Dvar_RegisterInt("LNOPORRSOM", 6000, 0, 0x7FFFFFFF, 4u, "The amount of time for the damage icon to stay on screen after damage is taken");
  DVARINT_cg_hudShieldDamageIconTime = Dvar_RegisterInt("MNQTOKSRKL", 2000, 0, 0x7FFFFFFF, 4u, "The amount of time for the shield damage icon to stay on screen after damage is blocked");
  DVARINT_cg_hudRicochetDamageIconTime = Dvar_RegisterInt("NNROMKSPRT", 900, 0, 0x7FFFFFFF, 4u, "The amount of time for the ricochet damage icon to stay on screen after damage is taken");
  DVARBOOL_cg_drawPlayerBoundingBox = Dvar_RegisterBool("NOORPNQNKQ", 0, 4u, "Draw a red bounding box at player's server position");
  DVARFLT_cg_hudSplitscreenCompassScale = Dvar_RegisterFloat("OKRQNQPQKT", 1.0, 0.000099999997, 3.4028235e38, 0, "Scale value to apply to the compass in splitscreen");
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM0 = LODWORD(FLOAT_1_12);
  __asm { vblendvps xmm1, xmm0, xmm1, xmm2; value }
  DVARFLT_cg_hudSplitscreenCompassElementScale = Dvar_RegisterFloat("LQMSSTKMOR", *(float *)&_XMM1, 0.000099999997, 3.4028235e38, 0, "Scale value to apply to compass elements in splitscreen");
  DVARFLT_cg_hudSplitscreenStanceScale = Dvar_RegisterFloat("MSQRLQTMOR", 1.0, 0.000099999997, 3.4028235e38, 0, "Scale value to apply to the stance HUD element in splitscreen");
  DVARFLT_cg_hudSplitscreenScoreboardScale = Dvar_RegisterFloat("PTOKMTMOR", 2.0, 0.0000099999997, 3.4028235e38, 0, "Scale value to apply to the scoreboard in splitscreen");
  DVARFLT_cg_hudSplitscreenBannerScoreboardScale = Dvar_RegisterFloat("NOOPTNONTT", 2.0, 0.0000099999997, 3.4028235e38, 0, "Scale value to apply to the splitscreen banner scoreboard");
  DVARFLT_cg_splitscreenSpectatorScaleIncrease = Dvar_RegisterFloat("LSROQNMQQL", 0.30000001, 0.000099999997, 3.4028235e38, 0, "Scale value to apply to the spectator message in splitscreen");
  DVARINT_cg_drawMaterial = Dvar_RegisterEnum("MKPTMMPNLN", cg_drawMaterialNames, 0, 4u, "Draw debugging information for materials");
  DVARINT_cg_drawMaterialLayerScroll = Dvar_RegisterInt("ORQQRPLSN", 0, 0, 32, 0, "Scroll cg_drawMaterial layer display such that the given layer is the first one shown.");
  DVARBOOL_cg_drawTechset = Dvar_RegisterBool("LMQQQKNLKQ", 0, 4u, "Draw debugging information for material techsets");
  DVARBOOL_cg_drawRange = Dvar_RegisterBool("TMQPKRPSL", 0, 4u, "Draw the range from the camera to the reticle point in the world");
  DVARBOOL_cg_drawpaused = Dvar_RegisterBool("RRLSQTNMO", 1, 0, "Draw paused screen");
  DVARBOOL_cg_equipmentSounds = Dvar_RegisterBool("NNLKSSMTLM", 1, 0x44u, "Play equipment sounds");
  DVARFLT_cg_crosshairAlpha = Dvar_RegisterFloat("NSRPSNSOKQ", 1.0, 0.0, 1.0, 4u, "The alpha value of the crosshair");
  DVARFLT_cg_crosshairAlphaMin = Dvar_RegisterFloat("OKQMQLNKQO", 0.5, 0.0, 1.0, 4u, "The minimum alpha value of the crosshair when it fades in");
  DVARBOOL_cg_crosshairDynamic = Dvar_RegisterBool("MTSRKMTOTL", 1, 4u, "Crosshair is Dynamic");
  DVARBOOL_cg_crosshairEnemyColorEnabled = Dvar_RegisterBool("MSLLKLMNKS", 0, 0x44u, "Enable changing the crosshair color when targeting an enemy");
  DVARBOOL_cg_crosshairEnemyColor = Dvar_RegisterBool("LMSLMNORNR", 1, 0x44u, "The crosshair color when over an enemy");
  DVARBOOL_cg_crosshairFriendlyColorEnabled = Dvar_RegisterBool("LMNMLOKNN", 0, 0x44u, "Enable changing the crosshair color when targeting a friendly");
  DVARBOOL_cg_crosshairSpectateHide = Dvar_RegisterBool("NKSMRLMRKR", 1, 0x44u, "Hip crosshair should be hidden during killcam and spectate.");
  DVARBOOL_cg_crosshairCheckDrivingPhysVeh = Dvar_RegisterBool("NRRNKOSKQK", 1, 0, "True to enable better checking of physics vehicle driving to skip crosshair drawing");
  DVARBOOL_cg_autoSwitchToHeavyWeapon = Dvar_RegisterBool("LTMQNPRLN", 1, 0, "Auto switch to heavy weapon slot if primary weapons run out of ammo.");
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_3_0);
  __asm { vblendvps xmm1, xmm1, xmm0, xmm2; value }
  DVARFLT_cg_centertime = Dvar_RegisterFloat("MLQKTPMNMO", *(float *)&_XMM1, 0.0, 3.4028235e38, 4u, "The time for a center printed message to fade");
  DVARINT_cg_debugevents = Dvar_RegisterInt("MNTSOMMNM", -1, -1, 227, 4u, "Output event debug information.  EV_NONE turns it off.  EV_MAX_EVENTS shows all events.  Otherwise, show only specified value.");
  DVARFLT_cg_errordecay = Dvar_RegisterFloat("MMRTPTQOKS", 100.0, 0.0, 3.4028235e38, 0, "Decay for predicted error");
  DVARINT_cg_showmiss = Dvar_RegisterInt("MMMPPQSTKP", 0, 0, 2, 0, "Show prediction errors");
  DVARBOOL_cg_footsteps = Dvar_RegisterBool("SOPSMLMMP", 1, 0x44u, "Play footstep sounds that are NOT sprint");
  DVARBOOL_cg_footstepsSprint = Dvar_RegisterBool("RPRTRPRLL", 1, 0x44u, "Play sprint footstep sounds");
  DCONST_DVARBOOL_cg_footstepfx = Dvar_RegisterBool("cg_footstepfx", 1, 0x40004u, "Play footstep FXs");
  DCONST_DVARFLT_cg_footstepfx_maxDistance = Dvar_RegisterFloat("cg_footstepfx_maxDistance", 1000.0, 0.0, 3.4028235e38, 0x40004u, "Max distance from player for playing their footstep fx. Zero to disable.");
  DVARBOOL_cg_landingSounds = Dvar_RegisterBool("NKMMNOOQSP", 1, 0x44u, "Play landing on surface sounds");
  DVARFLT_tracer_thermalWidthMult = Dvar_RegisterFloat("LSLKPOQQSO", 2.0, 0.1, 3.4028235e38, 0, "The multiplier applied to the base width when viewed in thermal vision");
  DVARFLT_tracer_firstPersonMaxWidth = Dvar_RegisterFloat("MPMQRSMQMK", 4.0, 0.1, 3.4028235e38, 0, "The maximum width our OWN tracers can be when looking through our ADS");
  DVARFLT_tracer_firstPersonMaxScrewRadius = Dvar_RegisterFloat("LPPSPNPOSM", 100.0, 0.0, 3.4028235e38, 0, "The maximum screw radius our OWN tracers can be when looking through our ADS");
  DVARBOOL_tracer_explosiveOverride = Dvar_RegisterBool("LRLPQNTMMQ", 0, 0, "When turned on, will apply an override to the tracer settings when shooting explosive bullets.");
  DVARVEC4_tracer_explosiveColor1 = Dvar_RegisterVec4("OLKOPPKTOM", 1.0, 0.75, 0.75, 1.0, 0.0, 1.0, 0, "The 1st color of a bullet tracer when using explosive bullets");
  DVARVEC4_tracer_explosiveColor2 = Dvar_RegisterVec4("MKNLTNLPKT", 1.0, 0.75, 0.75, 1.0, 0.0, 1.0, 0, "The 2nd color of a bullet tracer when using explosive bullets");
  DVARVEC4_tracer_explosiveColor3 = Dvar_RegisterVec4("OMPOMRTNRM", 1.0, 0.75, 0.75, 1.0, 0.0, 1.0, 0, "The 3rd color of a bullet tracer when using explosive bullets");
  DVARVEC4_tracer_explosiveColor4 = Dvar_RegisterVec4("MLSLQPTTNT", 1.0, 0.75, 0.75, 1.0, 0.0, 1.0, 0, "The 4th color of a bullet tracer when using explosive bullets");
  DVARVEC4_tracer_explosiveColor5 = Dvar_RegisterVec4("LKTKOKPKQ", 1.0, 0.75, 0.75, 1.0, 0.0, 1.0, 0, "The 5th color of a bullet tracer when using explosive bullets");
  DVARFLT_tracer_explosiveWidth = Dvar_RegisterFloat("LQRTSOPOKO", 6.0, 1.0, 3.4028235e38, 0, "The width of a bullet tracer when using explosive bullets");
  DCONST_DVARFLT_tracer_minimumTravelViewmodel = Dvar_RegisterFloat("tracer_minimumTravelViewmodel", 100.0, 100.0, 3.4028235e38, 0x40004u, "Tracers are only drawn if they travel greater than this distance.");
  DCONST_DVARFLT_tracer_minimumTravelWorldmodel = Dvar_RegisterFloat("tracer_minimumTravelWorldmodel", 5.0, 0.0, 3.4028235e38, 0x40004u, "Tracers are only drawn if they travel greater than this distance.");
  DCONST_DVARFLT_tracer_muzzleOffsetViewmodel = Dvar_RegisterFloat("tracer_muzzleOffsetViewmodel", 30.0, 0.0, 3.4028235e38, 0x40004u, "Tracers begin drawing at this distance from the weapon muzzle.");
  DCONST_DVARFLT_tracer_muzzleOffsetWorldmodel = Dvar_RegisterFloat("tracer_muzzleOffsetWorldmodel", 100.0, 0.0, 3.4028235e38, 0x40004u, "Tracers begin drawing at this distance from the weapon muzzle.");
  DVARBOOL_tracer_debugDraw = Dvar_RegisterBool("LQTPKKQQSS", 0, 0, "Draw debug lines where the tracers should be visible.");
  DVARBOOL_cg_debug_overlay_viewport = Dvar_RegisterBool("LOMTPOROKP", 0, 4u, "Remove the sniper overlay so you can check that the scissor window is correct.");
  DVARINT_cg_dumpAnims = Dvar_RegisterInt("MTMOQTNNTO", -1, -1, 2047, 4u, "Output animation info for the given entity id");
  DVARINT_cg_dumpAnims3D = Dvar_RegisterInt("LQSSMKRKQP", -1, -1, 2047, 4u, "In-game debug draw the animation blend tree");
  DVARINT_cg_dobjdump = Dvar_RegisterInt("MRQQRPROML", -1, -1, 2047, 4u, "Output dobj info for the given entity id");
  DVARINT_cg_dumpAnimsToScreen = Dvar_RegisterInt("LTPQMNPSQT", -1, -1, 2559, 4u, "Output animation info for the given entity id to the screen.");
  DVARINT_cg_dumpAnimsToScreen2 = Dvar_RegisterInt("OLLRKTSRRT", -1, -1, 2559, 4u, "Output animation info for the given entity id.  Will output to the lower part of the screen if both are enabled.");
  DVARINT_cg_dumpBlendSpaces = Dvar_RegisterInt("SPOSMTSMS", -1, -1, 2047, 4u, "Output blendspace info for the given entity id to the screen.");
  DVARBOOL_cg_dumpblendspaces_coverage = Dvar_RegisterBool("MMKSLNLRRN", 1, 4u, "Draw blendspace triangles to find holes on the 2D space.");
  DVARBOOL_cg_dumpViewmodelBlendSpaces = Dvar_RegisterBool("MRKPSRQQPO", 0, 4u, "Output blendspace info for the viewmodel to the screen.");
  DVARBOOL_cg_drawProcBonesAllocatorInfo = Dvar_RegisterBool("LNOSRMPSKM", 0, 4u, "Draw procedural bones allocator info on the screen.");
  DVARINT_cg_drawBoneVisibility = Dvar_RegisterInt("LKSKOMTTTK", -1, -1, 2559, 4u, "Draw the bone visibility for the given entity.");
  DVARINT_cg_debugCharacterController = Dvar_RegisterInt("MSTQNPORRO", -1, -1, 2559, 4u, "Displays the character controller and some other relevant information for the given entity id.");
  DVARBOOL_cg_dumpScriptedAnims = Dvar_RegisterBool("MRLMOPRRNM", 0, 4u, "Output scripted animation info for all script movers.");
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  v19 = 500;
  if ( ActiveGameMode != 1 )
    v19 = 455;
  DVARINT_cg_gameMessageWidth = Dvar_RegisterInt("NMSOPLSSKL", v19, 130, 1664, 4u, "The maximum character width of the game messages");
  DVARINT_cg_gameBoldMessageWidth = Dvar_RegisterInt("MSMOKPTNKS", 390, 130, 1664, 4u, "The maximum character width of the bold game messages");
  DVARFLT_cg_subtitleMinTime = Dvar_RegisterFloat("MROPKMTMLN", 3.0, 0.0, 3.4028235e38, 0, "The minimum time that the subtitles are displayed on screen in seconds");
  DVARINT_cg_subtitleWidthStandard = Dvar_RegisterInt("LNTMQKOQKN", 480, 130, 1664, 0, "The width of the subtitles on a non wide-screen");
  DVARINT_cg_subtitleWidthWidescreen = Dvar_RegisterInt("LNKPMTSNMR", 600, 130, 1664, 0, "The width of the subtitle on a wide-screen");
  DVARBOOL_cg_cinematic_subtitles = Dvar_RegisterBool("NQKNLQSLOP", 1, 0, "Enable subtitles generated by bink videos.");
  DCONST_DVARFLT_cg_viewZSmoothingMin = Dvar_RegisterFloat("cg_viewZSmoothingMin", 1.0, 0.0, 3.4028235e38, 0x40004u, "Threshold for the minimum smoothing distance it must move to smooth");
  DCONST_DVARFLT_cg_viewZSmoothingMax = Dvar_RegisterFloat("cg_viewZSmoothingMax", 60.0, 0.0, 3.4028235e38, 0x40004u, "Threshold for the maximum smoothing distance we'll do");
  DCONST_DVARFLT_cg_viewZSmoothingUpTimeMin = Dvar_RegisterFloat("cg_viewZSmoothingUpTimeMin", 0.15000001, 0.0, 3.4028235e38, 0x40004u, "When going up, min amount of time to spread the smoothing over");
  DCONST_DVARFLT_cg_viewZSmoothingUpTimeMax = Dvar_RegisterFloat("cg_viewZSmoothingUpTimeMax", 0.40000001, 0.0, 3.4028235e38, 0x40004u, "When going up, max amount of time to spread the smoothing over");
  DCONST_DVARFLT_cg_viewZSmoothingDownTimeMin = Dvar_RegisterFloat("cg_viewZSmoothingDownTimeMin", 0.15000001, 0.0, 3.4028235e38, 0x40004u, "When going up, min amount of time to spread the smoothing over");
  DCONST_DVARFLT_cg_viewZSmoothingDownTimeMax = Dvar_RegisterFloat("cg_viewZSmoothingDownTimeMax", 0.40000001, 0.0, 3.4028235e38, 0x40004u, "When going up, max amount of time to spread the smoothing over");
  DCONST_DVARFLT_cg_viewZSmoothingPlayerSpeedFloor = Dvar_RegisterFloat("cg_viewZSmoothingPlayerSpeedFloor", 32.0, 0.0, 3.4028235e38, 0x40004u, "Player speed at which cg_viewZSmoothingTimeMax is used");
  DCONST_DVARFLT_cg_viewZSmoothingPlayerSpeedCeil = Dvar_RegisterFloat("cg_viewZSmoothingPlayerSpeedCeil", 100.0, 0.0, 3.4028235e38, 0x40004u, "Player speed at which cg_viewZSmoothingTimeMin is used");
  DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClamp = Dvar_RegisterFloat("cg_viewMaxFovBeforeZNearClamp", 80.0, 0.0, 360.0, 0x40004u, "If the user real FoV is higher that this value, we clamp the znear value to 1 to prevent seeing trough walls and arms clipping. Set to 0 to disable the feature");
  DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClampForSmallCharacter = Dvar_RegisterFloat("cg_viewMaxFovBeforeZNearClampForSmallCharacter", 80.0, 0.0, 360.0, 0x40004u, "Same as the above but for character with small bound radius (Hometown for example). Set to 0 to disable the feature");
  DCONST_DVARFLT_cg_viewZNearClampValueForHighFov = Dvar_RegisterFloat("cg_viewZNearClampValueForHighFov", 1.0, 0.0, 3.4028235e38, 0x40004u, "The forced znear clamp while the user have a fov higher than DconstFloat( cg_viewMaxExtremeFovBeforeZNearClamp ) or DconstFloat( cg_viewMaxFovBeforeZNearClampForSmallCharacter ) in Hometown");
  DCONST_DVARINT_cg_viewZSmoothingInterpType = Dvar_RegisterEnum("cg_viewZSmoothingInterpType", cg_viewZSmoothingInterpolationTypeNames, 2, 0x40004u, "Interpolation curve for View Z Smoothing");
  DVARFLT_sv_znear = Dvar_RegisterFloat("NLPLNQSNNR", 0.0, 0.0, 10000.0, 0x44u, "Things closer than this aren't drawn.  Reducing this increases z-fighting in the distance.  Set to 0 to not specify.");
  DVARBOOL_cg_drawrumbledebug = Dvar_RegisterBool("MTTPSSTRS", 0, 0, "Display rumble debug information");
  DVARINT_cg_drawDebugBones = Dvar_RegisterInt("OKLNPSOPOQ", 2047, -1, 2560, 0, "Draw bones for entity number.");
  DVARINT_cg_drawDebugBonesType = Dvar_RegisterEnum("RQSNKTPSQ", cg_debugDrawBonesTypeNames, 0, 0, "Select a subset of bones to debug draw.");
  DVARSTR_cg_drawDebugBonesNameFilter = Dvar_RegisterString("LMNLKNOOSP", (const char *)&queryFormat.fmt + 3, 0, "Use a sub-string search for bone names.");
  DVARBOOL_cg_drawDebugBonesBind = Dvar_RegisterBool("RSPKTLOSN", 1, 0, "Draw bind pose when drawing bones with cg_drawDebugBones.");
  DVARBOOL_cg_drawDebugBonesClosest = Dvar_RegisterBool("LRLKTOQTQN", 0, 0, "updates cg_drawDebugBones to closest entity to camera.");
  DVARBOOL_cg_drawDebugAnimUsage = Dvar_RegisterBool("LNLTNRNROT", 0, 0, "Draw number of animations and animation nodes for all entities.");
  DVARBOOL_cg_drawDebugMaxAnimUsage = Dvar_RegisterBool("OLKQTQKSPR", 0, 0, "Draw maximum number of animations and animation nodes for all entities.");
  DVARBOOL_cg_drawDebugDoors = Dvar_RegisterBool("MQNPLTNQTO", 0, 0, "Draws scriptable door ownership and assignment.");
  DVARINT_cg_drawLOSLatency = Dvar_RegisterInt("MLOTQLSPNS", -1, -1, 2047, 0, "Draw a sphere to debug line of sight latency for entity number. For remote clients, player's view eye will snap for stance transitions.");
  DVARFLT_cg_drawLOSLatencyThreshold = Dvar_RegisterFloat("OLTKPPQNQT", 50.0, 0.0, 1000.0, 0, "Debug line of sight latency to calculate the recommended head position.");
  DVARFLT_cg_drawLOSLatencyTolerance = Dvar_RegisterFloat("MTSOQNOOQR", 20.0, 0.0, 1000.0, 0, "Debug line of sight latency tolerance to calcute the latency valid range.");
  DCONST_DVARBOOL_cg_drawLOSLatencyShowOptimalHead = Dvar_RegisterBool("cg_drawLOSLatencyShowOptimalHead", 1, 0x40004u, "Draws optimal head location.");
  DVARINT_cg_drawVisionSetMode = Dvar_RegisterEnum("MNRMNQTSNT", cg_drawDebugVisionSet, 0, 0, "Display debug visionset information");
  DVARINT_cg_drawDebugLadder = Dvar_RegisterEnum("PNLQPLNTR", cg_debugDrawLadderTypeNames, 0, 0, "Which ladder anim node to draw.");
  DVARBOOL_cg_drawDebugEntitiesLoD = Dvar_RegisterBool("LPPRMONNRN", 0, 0, "Draw debug entities LoD (red = high LoD, green = low LoD)");
  DCONST_DVARINT_cg_drawDebugAnimLodInfo = Dvar_RegisterEnum("cg_drawDebugAnimLodInfo", cg_drawDebugAnimLodInfoTypeNames, 0, 0x40004u, "Draw animation LOD debug information for visible entities");
  DVARFLT_cg_animLODScale = Dvar_RegisterFloat("NMKLQPLSQM", 1.0, 0.0, 100.0, 0x40u, "Scale factor to apply to animation LOD distance scale");
  DVARBOOL_cg_inputLatencyDevice = Dvar_RegisterBool("LRKSRONORQ", 0, 0, "Draw colored square on screen for input latency tester.");
  DVARINT_cg_debugDrawHitBox = Dvar_RegisterEnum("SKOLNOSTP", cg_drawHitBoxCategories, 0, 0, "Display character hit boxes");
  DVARSTR_cg_foliagesnd_alias = Dvar_RegisterString("LTKNPSMTMT", "movement_foliage", 0x40u, "The sound that plays when an actor or player enters a foliage clip brush.");
  DVARSTR_cg_foliagebulletsnd_alias = Dvar_RegisterString("QPRSOMMSN", "bullet_foliage", 0x40u, "The sound that plays when an actor or player enters a foliage clip brush.");
  DVARCLR_cg_CrosshairColor_EnemyTeam = Dvar_RegisterColor("NORTRLQQTT", 0.94509804, 0.38431373, 0.24705882, 1.0, 0, "Enemy team crosshair color");
  DVARCLR_cg_CrosshairColor_MyTeam = Dvar_RegisterColor("NSRQOMSLKT", 0.37254903, 0.78039217, 0.80392158, 1.0, 0, "Player team crosshair color");
  DVARBOOL_cg_constantSizeHeadIcons = Dvar_RegisterBool("LNQKSKSLRR", 0, 4u, "Head icons are the same size regardless of distance from the player");
  DVARFLT_vehHelicopterFreeLookReleaseSpeed = Dvar_RegisterFloat("LSOQLMLSPQ", 0.0, 0.0, 3.4028235e38, 0x44u, "The rate that the player's view moves back to center when freelook is released");
  DVARBOOL_cg_drawWVisDebug = Dvar_RegisterBool("MSLTLPQOTM", 0, 0, "Display weapon visibility debug info");
  v20 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v20 = 262276;
  v21 = Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPBOOL_cg_drawPlayerShadow = Dvar_RegisterBool("MSSMMTNTLP", v21 != 1, v20, "Draw player shadow in first person view");
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPSPBOOL_cg_drawPlayerLegs = Dvar_RegisterBool("cg_drawPlayerLegs", 1, 0x40004u, "Draw player legs in first person view");
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPSPBOOL_cg_drawPlayerAlways = Dvar_RegisterBool("cg_drawPlayerAlways", 0, 0x40004u, "Draw player legs/shadow even when in ufo/noclip");
  DCONST_DVARFLT_cg_playerLegsOffset = Dvar_RegisterFloat("cg_playerLegsOffset", -12.0, -100.0, 100.0, 0x40004u, "Offset of first person legs model along view direction");
  DCONST_DVARFLT_cg_playerLegsOffsetLadder = Dvar_RegisterFloat("cg_playerLegsOffsetLadder", -4.3099999, -100.0, 100.0, 0x40004u, "Offset of first person legs model along the up direction while playing ladder animations.");
  DCONST_DVARBOOL_cg_playerLegsOffsetEnableRadiusClamp = Dvar_RegisterBool("cg_playerLegsOffsetEnableRadiusClamp", 1, 0x40004u, "Enables clamping of the legs offset based on the suit bounding radius.");
  DCONST_DVARBOOL_cg_disable_playerLegsOffset_fov_comp = Dvar_RegisterBool("cg_disable_playerLegsOffset_fov_comp", 0, 0x40004u, "disable the first person legs mode positional compensation for fov changes");
  DCONST_DVARFLT_cg_playerLegsOffset_fovComp_forward = Dvar_RegisterFloat("cg_playerLegsOffset_fovComp_forward", -20.0, -100.0, 100.0, 0x40004u, "Offset of the first person legs model along the forward vector of the view axis");
  DCONST_DVARFLT_cg_playerLegsOffset_fovComp_right = Dvar_RegisterFloat("cg_playerLegsOffset_fovComp_right", 0.0, -100.0, 100.0, 0x40004u, "Offset of the first person legs model along the right vector of the view axis");
  DCONST_DVARFLT_cg_playerLegsOffset_fovComp_up = Dvar_RegisterFloat("cg_playerLegsOffset_fovComp_up", 0.0, -100.0, 100.0, 0x40004u, "Offset of the first person legs model along the up vector of the view axis");
  DCONST_DVARFLT_cg_playerLegsSpineLowAngle = Dvar_RegisterFloat("cg_playerLegsSpineLowAngle", -130.0, -180.0, 180.0, 0x40004u, "Bend angle for lowest spine bone in player legs model");
  DCONST_DVARFLT_cg_playerLegsSpineMidAngle = Dvar_RegisterFloat("cg_playerLegsSpineMidAngle", -25.0, -180.0, 180.0, 0x40004u, "Bend angle for mid spine bone in player legs model");
  DCONST_DVARFLT_cg_playerLegsArmsAngle = Dvar_RegisterFloat("cg_playerLegsArmsAngle", 100.0, -180.0, 180.0, 0x40004u, "Bend angle for arms in player legs model");
  DCONST_DVARINT_cg_impaleWarpMode = Dvar_RegisterEnum("cg_impaleWarpMode", cg_impaleWarpNames, 2, 0x40004u, "Sets the warp mode that should be used to align the ragdoll hit location with the initial impaling constraint position.");
  DCONST_DVARFLT_cg_impaleVelocityAdjust = Dvar_RegisterFloat("cg_impaleVelocityAdjust", 0.85000002, 0.0, 1.0, 0x40004u, "When the impaling constraint's velocity changes, apply this fraction of the velocity to all bones in the attached ragdoll.");
  DCONST_DVARFLT_cg_impaleFriction = Dvar_RegisterFloat("cg_impaleFriction", 200.0, 1.1754944e-38, 3.4028235e38, 0x40004u, "Friction around the impaling constraint's hinge.");
  DCONST_DVARFLT_cg_impaleMaxAngle = Dvar_RegisterFloat("cg_impaleMaxAngle", 0.80000001, 0.0, 3.1415927, 0x40004u, "Maximum angle of rotation allowed around the impaling hinge (radians).");
  DCONST_DVARFLT_cg_impaleBreakThreshold = Dvar_RegisterFloat("cg_impaleBreakThreshold", 350.0, 1.1754944e-38, 3.4028235e38, 0x40004u, "Breaking force threshold for impaling constraint.");
  DCONST_DVARFLT_cg_impaleBreakVelocityScale = Dvar_RegisterFloat("cg_impaleBreakVelocityScale", 0.0, -3.4028235e38, 3.4028235e38, 0x40004u, "When impaling constraint is broken, apply this scale to the velocity of the constrained physics body.  Simulates getting snagged on a rod when it breaks.");
  DCONST_DVARFLT_cg_impaleRagdollStiffnessRate = Dvar_RegisterFloat("cg_impaleRagdollStiffnessRate", 500.0, 1.1754944e-38, 3.4028235e38, 0x40004u, "When the impaling constraint is moving at this speed (inches per second), the stiffness (friction) of all ragdoll joints will be doubled.  Higher speeds continue to increase joint friction.");
  DCONST_DVARINT_cg_impaleMaxBoneDistance = Dvar_RegisterInt("cg_impaleMaxBoneDistance", 2, 0, 0x7FFFFFFF, 0x40004u, "Maximum number of links between the impaled bone and the ragdoll torso bone.");
  DCONST_DVARFLT_cg_impaleFailBoneSpeed = Dvar_RegisterFloat("cg_impaleFailBoneSpeed", 1000.0, 1.1754944e-38, 3.4028235e38, 0x40004u, "When the impaling constraint fails to actually impale the victim, this velocity is applied to the hit bone and neighboring bones instead.");
  DCONST_DVARINT_cg_impaleMaxPenetrationSolveTimeMs = Dvar_RegisterInt("cg_impaleMaxPenetrationSolveTimeMs", 1100, 0, 0x7FFFFFFF, 0x40004u, "Maximum duration that an impaled ragdoll can attempt to solve penetrations with its environment before the constraint is forcibly broken (in milliseconds).");
  DVARBOOL_thermalVisionLuiDebugAlwaysActive = Dvar_RegisterBool("LONTTKLNNK", 0, 4u, "Set to use the new lui thermal vision system.");
  v22 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v22 = 262276;
  v23 = Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPBOOL_thermalVisionLuiUse = Dvar_RegisterBool("SLSPNLSQP", v23 != 1, v22, "Set to use the new lui thermal vision system.");
  DCONST_DVARFLT_thermalVisionLuiDefaultDistance = Dvar_RegisterFloat("thermalVisionLuiDefaultDistance", 10000.0, 1.1754944e-38, 3.4028235e38, 0x40004u, "Max distance of thermal overlay for default.");
  DCONST_DVARFLT_thermalVisionLuiLinkedDistance = Dvar_RegisterFloat("thermalVisionLuiLinkedDistance", 10000.0, 1.1754944e-38, 3.4028235e38, 0x40004u, "Max distance of thermal overlay when player linked.");
  DCONST_DVARFLT_thermalVisionLuiApexDistance = Dvar_RegisterFloat("thermalVisionLuiApexDistance", 10000.0, 1.1754944e-38, 3.4028235e38, 0x40004u, "Max distance of thermal overlay for Apex.");
  DCONST_DVARFLT_thermalVisionLuiVenomDistance = Dvar_RegisterFloat("thermalVisionLuiVenomDistance", 10000.0, 1.1754944e-38, 3.4028235e38, 0x40004u, "Max distance of thermal overlay for Venom.");
  DCONST_DVARFLT_cg_materialOverrideFinishedFrac = Dvar_RegisterFloat("cg_materialOverrideFinishedFrac", 0.89999998, 0.0, 1.0, 0x40004u, "The point at which we consider the material override finished for shadow hiding purposes.");
  DCONST_DVARBOOL_cg_clientWeaponDrawRotationCenter = Dvar_RegisterBool("cg_clientWeaponDrawRotationCenter", 0, 0x40004u, "Draw debug lines to represent the rotation center of client weapons. Useful when tweaking rotationCenter in frontEndWeaponModelData.csv.");
  DCONST_DVARINT_cg_frontEndSceneTransientStreamingTime = Dvar_RegisterInt("cg_frontEndSceneTransientStreamingTime", 50, 0, 60000, 0x40004u, "Duration, in ms, to force the front-end scene to stream while transients are required");
  DCONST_DVARINT_cg_frontEndSceneTransientTimeout = Dvar_RegisterInt("cg_frontEndSceneTransientTimeout", 15000, 0, 60000, 0x40004u, "Time out in ms until we just accept that not all transients are going to be loaded");
  DCONST_DVARFLT_turretCameraShakeScale = Dvar_RegisterFloat("turretCameraShakeScale", 0.5, 0.0, 100.0, 0x40004u, "Global scaling for the camera shake when turret is firing");
  DCONST_DVARINT_turretCameraShakeDuration = Dvar_RegisterInt("turretCameraShakeDuration", 100, 0, 10000, 0x40004u, "Duration of the camera shake in Ms when turret is firing");
  DCONST_DVARFLT_turretCameraShakeRadius = Dvar_RegisterFloat("turretCameraShakeRadius", 100.0, 0.1, 1000.0, 0x40004u, "Distance up to where the camera shake will have effect when turret fired");
  DCONST_DVARBOOL_turretCameraShakeOverride = Dvar_RegisterBool("turretCameraShakeOverride", 0, 0x40004u, "When enabled, it'll use the default dvar values rather than the weaponDef's ones");
  DCONST_DVARBOOL_cg_drawPlayerLightSample = Dvar_RegisterBool("cg_drawPlayerLightSample", 0, 0x40004u, "Draw the lighting value of the player used for stealth gameplay.");
  DVARFLT_cg_playerLightSampleSize = Dvar_RegisterFloat("NMOQOMONLQ", 4.0, 1.0, 256.0, 0x40u, "player light sample size.");
  DVARFLT_cg_playerLightSampleShapeSize = Dvar_RegisterFloat("LSMSTOQNTT", 18.0, 1.0, 256.0, 0x40u, "player light sample generator shape size.");
  DVARVEC3_cg_playerLightSampleShapeOffset = Dvar_RegisterVec3("LMNOSOLQLT", 6.0, 0.0, -6.0, -256.0, 256.0, 0x40u, "player light sample generator offset.");
  DVARINT_cg_playerLightSamplePos = Dvar_RegisterInt("NKTRLMSRNR", 1, 0, 2, 0x40u, "0 = existing game code, 1 = cylinder shape, 2 = hemisphere shape.");
  DVARINT_cg_playerLightSampleNormal = Dvar_RegisterInt("LLLTQOOTPO", 4, 0, 4, 0x40u, "0 = no normal, 1 = all point up, 2 = all point forward, 3 = all point backward, 4 = all point outward.");
  DVARINT_cg_playerLightSampleFilter = Dvar_RegisterInt("NKSSQOPQQP", 0, 0, 1, 0x40u, "0 = avg of top 3 samples, 1 = skip top & bottom 3 samples and compute the avg of rest of them.");
  DCONST_DVARBOOL_cg_extrapolation_full_move = Dvar_RegisterBool("cg_extrapolation_full_move", 0, 0x40004u, "Enable full pmove when extrapolating client movement on the client");
  DCONST_DVARBOOL_cg_debugInfil = Dvar_RegisterBool("cg_debugInfil", 0, 0x40004u, "Turns on client debug information for infils.");
  DCONST_DVARINT_cg_debugInfil_Character = Dvar_RegisterInt("cg_debugInfil_Character", -1, -1, 0x7FFFFFFF, 0x40004u, "If set to a value greater than -1, will only show data for this character.");
  DCONST_DVARBOOL_cg_cfx_debug_effects = Dvar_RegisterBool("cg_cfx_debug_effects", 0, 0x40004u, "Turns on debug info for client side one-shot effects.");
  DCONST_DVARBOOL_cg_cfx_debug_sounds = Dvar_RegisterBool("cg_cfx_debug_sounds", 0, 0x40004u, "Turns on client debug client side one-shot and looping sounds.");
  DCONST_DVARBOOL_cg_cfx_debug_ssr = Dvar_RegisterBool("cg_cfx_debug_ssr", 0, 0x40004u, "Draw in world the spatial partitioning tree for effects or sounds.");
  DCONST_DVARFLT_cg_footstepCullDistance = Dvar_RegisterFloat("cg_footstepCullDistance", 2400.0, 0.0, 3.4028235e38, 0x40004u, "Footsteps generated outside this distance will not be processed.");
  DVARBOOL_cg_playerMovementNotetrackSounds = Dvar_RegisterBool("MKSMNLRMML", 1, 0x40u, "Whether player movement notetracks will emit sounds.");
  DCONST_DVARFLT_cg_mountFoleyCullDistance = Dvar_RegisterFloat("cg_mountFoleyCullDistance", 1000.0, 0.0, 3.4028235e38, 0x40004u, "Mount foley events beyond this distance from the listener will not be processed.");
  DCONST_DVARINT_cg_drawCustomizationStreaming = Dvar_RegisterInt("cg_drawCustomizationStreaming", 0, 0, 2, 0x40004u, "Enables debug display of characters chosen to have their customization models streamed. 0=off, 1=sort order, 2=outlining");
  DCONST_DVARINT_cg_drawWeaponStreaming = Dvar_RegisterInt("cg_drawWeaponStreaming", 0, 0, 2, 0x40004u, "Enables debug display of weapons chosen to be streamed per frame. 0=off, 1=sort order, 2=outlining");
  DVARFLT_cg_worldStreamingMinImageQuality = Dvar_RegisterFloat("LSMPNKQMKS", 0.0078125, 0.000099999997, 3.4028235e38, 0, "Min image quality metric value considered to be of high enough image quality for CGame world streaming to notify the server it's ready for previously hinted camera changes");
  DVARFLT_cg_worldStreamingMaxImageQuality = Dvar_RegisterFloat("NKRKKSTRRO", 0.0625, 0.000099999997, 3.4028235e38, 0, "Max image quality metric value considered to be of high enough image quality for CGame world streaming to notify the server it's ready for previously hinted camera changes");
  DVARINT_cg_worldStreamingLoadedTimeout = Dvar_RegisterInt("NOORNQMNM", 1000, 0, 0x7FFFFFFF, 0, "Milliseconds until a world streaming requests that has completed loading times out and is cleared. Setting this to 0 will cause stream views to be cleared immediately on completion.");
  DVARINT_cg_worldStreamingKeepAliveTimeout = Dvar_RegisterInt("NOLPSOTORP", 20000, 0, 0x7FFFFFFF, 0, "Milliseconds until a world streaming requests that has completed and is marked as keepAlive is forcibly cleared.");
  DVARINT_cg_worldStreamingLoadingTimeout = Dvar_RegisterInt("MOQSSOPLKP", 10000, 0, 0x7FFFFFFF, 0, "Milliseconds until a world streaming requests that is still loading times out and is forcibly cancelled.");
  DCONST_DVARINT_cg_worldStreamingLoadingWarnTimeout = Dvar_RegisterInt("cg_worldStreamingLoadingWarnTimeout", 2000, 0, 0x7FFFFFFF, 0x40004u, "Milliseconds until warnings are displayed that a world streaming requests is still loading.");
  DCONST_DVARINT_cg_worldStreamingKeepAliveWarnTimeout = Dvar_RegisterInt("cg_worldStreamingKeepAliveWarnTimeout", 2000, 0, 0x7FFFFFFF, 0x40004u, "Milliseconds until warnings are displayed that a world streaming requests is kept alive after it has loaded.");
  DCONST_DVARBOOL_cg_worldStreaming_verbose = Dvar_RegisterBool("cg_worldStreaming_verbose", 0, 0x40004u, "Enable to turn on verbose debug logging for CG_WorldStreaming");
  DCONST_DVARBOOL_cg_defaultWeaponHidesViewmodel = Dvar_RegisterBool("cg_defaultWeaponHidesViewmodel", 1, 0x40004u, "If enabled, the entire viewmodel will be hidden if we detect we are using a fallback, default viewmodel.");
  DCONST_DVARBOOL_cg_weaponFade_applyToViewmodel = Dvar_RegisterBool("cg_weaponFade_applyToViewmodel", 1, 0x40004u, "If enabled, weapon fade will apply the transition effect to the entire viewmodel dobj. If disabled, will only apply weapon fade to the weapon model.");
  DCONST_DVARFLT_cg_weaponFade_startTransitionFactor = Dvar_RegisterFloat("cg_weaponFade_startTransitionFactor", 1.0, 0.0, 1.0, 0x40004u, "Initial transition factor for weapon fade, normalized [0.f, 1.f] where 0.f is no transition effects and 1.f is fully applied transition effects.");
  DCONST_DVARINT_cg_weaponFade_transitionTime = Dvar_RegisterInt("cg_weaponFade_transitionTime", 200, 0, 0x7FFFFFFF, 0x40004u, "Amount of time in milliseconds for the weapon transition shader animation to elapse.");
  DVARBOOL_cg_fx_slide_enable = Dvar_RegisterBool("NTMKTPSRO", 1, 0, "Play slide vfx when players slide");
  DVARBOOL_cg_pose_entityFixup = Dvar_RegisterBool("NQNOSLMSKT", 1, 0, "If enabled, the entity skeleton cache is flushed as soon as the pose is queried after the entity pose origin is set. This prevents systems from accessing a stale entity pose.");
  DVARBOOL_cg_pose_assertOnStaleAccess = Dvar_RegisterBool("STSPNNNOS", 0, 0, "If enabled, the game will assert if a system tries to query a pose before the entity pose origin is set.");
  DVARBOOL_cg_psInterpolationDiffClientsFix = Dvar_RegisterBool("SOQOQQNNT", 1, 0, "If enabled, the fix which prevents us from interpolating player states belonging to two different clients is enabled.");
  DVARBOOL_cg_keyframedPredictive = Dvar_RegisterBool("MQMTLNKTMN", 1, 0, "If enabled, will apply velocities to the client predictive keyframe objects. Otherwise it'll warp them as originally.");
  DCONST_DVARFLT_cg_cinematicCameraRotateMinDistance = Dvar_RegisterFloat("cg_cinematicCameraRotateMinDistance", 25.0, 0.0, 500.0, 0x40004u, "When rotating, min distance camera has to be from the target before skipping. If less than this, camera will pop to a valid position.");
  DCONST_DVARFLT_cg_cinematicCameraRotateDetachDistance = Dvar_RegisterFloat("cg_cinematicCameraRotateDetachDistance", 35.0, 25.0, 500.0, 0x40004u, "When rotating, distance camera has to be from the target before detaching the camera and holding in place.");
  DCONST_DVARINT_cg_cinematicCameraRotateMaxTracesPerFrame = Dvar_RegisterInt("cg_cinematicCameraRotateMaxTracesPerFrame", 4, 1, 10, 0x40004u, "When rotating and needs to skip a few degrees when rotating, max number of traces before giving up");
  DCONST_DVARFLT_cg_cinematicCameraRotateCollisionDegreesSkip = Dvar_RegisterFloat("cg_cinematicCameraRotateCollisionDegreesSkip", 30.0, 0.0, 180.0, 0x40004u, "When rotating, skip this many degrees forward to find a viable location to place camera. Doubles after every trace");
  DCONST_DVARFLT_cg_cinematicCameraRotateReturnDistanceRate = Dvar_RegisterFloat("cg_cinematicCameraRotateReturnDistanceRate", 3.0, 0.0, 1000.0, 0x40004u, "When rotating, distance per second to return to normal distance after collision.");
  DCONST_DVARFLT_cg_cinematicCameraRotateReturnHeightRate = Dvar_RegisterFloat("cg_cinematicCameraRotateReturnHeightRate", 15.0, 0.0, 1000.0, 0x40004u, "When rotating, rate to return the slide height back down to 0.");
  DCONST_DVARFLT_cg_cinematicCameraRotateReturnPitchRate = Dvar_RegisterFloat("cg_cinematicCameraRotateReturnPitchRate", 30.0, 0.0, 1000.0, 0x40004u, "When rotating, pitch degrees per second to return to ideal pitch after collision.");
  DCONST_DVARBOOL_cg_cinematicCameraEnabled = Dvar_RegisterBool("cg_cinematicCameraEnabled", 1, 0x40004u, "When turned on, allows using cinematic camera.");
  DCONST_DVARBOOL_cg_cinematicCameraDofEnabled = Dvar_RegisterBool("cg_cinematicCameraDofEnabled", 0, 0x40004u, "Requires cg_cinematicCameraEnabled to be enabled. This would toggle depth of field, but cinematic camera has not been updated with physics dof yet.");
  DCONST_DVARBOOL_cg_cinematicCameraVisionEnabled = Dvar_RegisterBool("cg_cinematicCameraVisionEnabled", 1, 0x40004u, "Requires cg_cinematicCameraEnabled to be enabled. Toggles vision sets.");
  DCONST_DVARBOOL_cg_cinematicCameraSoundEnabled = Dvar_RegisterBool("cg_cinematicCameraSoundEnabled", 1, 0x40004u, "Requires cg_cinematicCameraEnabled to be enabled. Toggles sounds.");
  DCONST_DVARBOOL_cg_cinematicCameraFovEnabled = Dvar_RegisterBool("cg_cinematicCameraFovEnabled", 1, 0x40004u, "Requires cg_cinematicCameraEnabled to be enabled. Toggles fov.");
  DCONST_DVARBOOL_cg_cinematicCameraDebug = Dvar_RegisterBool("cg_cinematicCameraDebug", 0, 0x40004u, "When turned on, debugs cinematic camera.");
  DCONST_DVARFLT_cg_thirdPersonRange = Dvar_RegisterFloat("cg_thirdPersonRange", 120.0, 0.0, 1024.0, 0x40004u, "The range of the camera from the player in third person view");
  DCONST_DVARFLT_cg_thirdPersonAngle = Dvar_RegisterFloat("cg_thirdPersonAngle", 356.0, -180.0, 360.0, 0x40004u, "The angle of the camera from the player in third person view");
  DCONST_DVARBOOL_cg_thirdPersonNoYaw = Dvar_RegisterBool("cg_thirdPersonNoYaw", 0, 0x40004u, "Ignore yaw in third person view camera");
  DCONST_DVARBOOL_cg_disableScreenShake = Dvar_RegisterBool("cg_disableScreenShake", 0, 0x40004u, "Turns off screen shakes when turned on. Dev-only");
  DCONST_DVARINT_cg_thirdPersonMode = Dvar_RegisterInt("cg_thirdPersonMode", 1, 0, 2, 0x40004u, "How the camera behaves in third person");
  DCONST_DVARBOOL_cg_thirdPersonNoPitch = Dvar_RegisterBool("cg_thirdPersonNoPitch", 0, 0x40004u, "Ignore pitch in third person view camera");
  DCONST_DVARBOOL_cg_drawShellshock = Dvar_RegisterBool("cg_drawShellshock", 1, 0x40004u, "Draw shellshock & flashbang screen effects.");
  DVARBOOL_cg_drawZoomHint = Dvar_RegisterBool("LKKMQRSKTS", 1, 0x40u, "Draw a 'click to zoom' hint");
  DCONST_DVARINT_cg_draw_scrambler_max_flicker_time = Dvar_RegisterInt("cg_draw_scrambler_max_flicker_time", 200, 0, 5000, 0x40004u, "The maximum time that UI elements can be visible before they flicker when affected by the scrambler drone.");
  DVARFLT_cg_thirdPersonTankTraceLen = Dvar_RegisterFloat("LLPPLMRKKQ", 3000.0, 1.0, 10000.0, 0, "3rd person Tank camera, length of the trace performed from the turret forward to find the focus point.");
  DVARFLT_cg_thirdPersonTankRange = Dvar_RegisterFloat("LMTKRNOTT", 400.0, -1000.0, 1000.0, 0, "3rd person Tank camera distance to the tank, in the opposite to turret forward direction.");
  DVARFLT_cg_thirdPersonTankHeight = Dvar_RegisterFloat("QLLPPNNNP", 50.0, -1000.0, 1000.0, 0, "3rd person Tank camera height offset above the tank.");
  DVARFLT_cg_thirdPersonTankHorizOffset = Dvar_RegisterFloat("NMQRLKTPL", 0.0, -1000.0, 1000.0, 0, "3rd person Tank camera horizontal offset.");
  DVARFLT_cg_thirdPersonCarAngle = Dvar_RegisterFloat("LNLNTQQNN", 45.0, 0.0, 1000.0, 0, "3rd person camera eye point angle");
  DVARFLT_cg_thirdPersonQuadRange = Dvar_RegisterFloat("LOPSQLMKPO", 250.0, 1.0, 1000.0, 0, "3rd person camera distance to the atv quad.");
  DCONST_DVARFLT_cg_thirdPersonCarTimeFac = Dvar_RegisterFloat("cg_thirdPersonCarTimeFac", 1.0, 0.001, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARBOOL_cg_thirdPersonCarReturn = Dvar_RegisterBool("cg_thirdPersonCarReturn", 1, 0x40004u, "If true, camera will return back");
  v24 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v24 = 262276;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
  {
    v25 = FLOAT_80_0;
    *(float *)&_XMM9 = FLOAT_90_0;
  }
  else
  {
    _XMM9 = LODWORD(FLOAT_90_0);
    _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm9, xmm0, xmm2
    }
    v25 = *(float *)&_XMM0;
  }
  DCONST_DVARMODEFLT_cg_thirdPersonCarDefaultPolar = Dvar_RegisterFloat("LQNPKMTTPL", v25, 1.0, 110.0, v24, "Default camera polar");
  v30 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v30 = 262276;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG )
    Com_GameMode_GetActiveGameMode();
  DCONST_DVARMODEFLT_cg_thirdPersonCarCollRadius = Dvar_RegisterFloat("NQNTKQQRTQ", 8.0, 0.5, 2048.0, v30, "Camera trace collision radius for third person car camera");
  DCONST_DVARFLT_cg_thirdPersonCarReturnSpeedAzimuth = Dvar_RegisterFloat("cg_thirdPersonCarReturnSpeedAzimuth", 2.5, 0.000099999997, 3.4028235e38, 0x40004u, "Speed factor the third person car camera will return to back/front. Only if cg_thirdPersonCarReturn is enabled");
  DCONST_DVARFLT_cg_thirdPersonCarReturnSpeedPolar = Dvar_RegisterFloat("cg_thirdPersonCarReturnSpeedPolar", 1.0, 0.000099999997, 3.4028235e38, 0x40004u, "Speed factor the third person car camera will return to back/front. Only if cg_thirdPersonCarReturn is enabled");
  DCONST_DVARFLT_cg_thirdPersonCarReverseThreshold = Dvar_RegisterFloat("cg_thirdPersonCarReverseThreshold", -1000000.0, -3.4028235e38, -1.0, 0x40004u, "Speed in inches/sec when the camera will look backward on car reverse.");
  DCONST_DVARFLT_cg_thirdPersonCarTimeToReturn = Dvar_RegisterFloat("cg_thirdPersonCarTimeToReturn", 0.60000002, 0.0, 1000.0, 0x40004u, "Time in seconds since we release the input until the camera starts returning to the original position");
  DCONST_DVARFLT_cg_thirdPersonCarMaxDiff = Dvar_RegisterFloat("cg_thirdPersonCarMaxDiff", 120.0, 1.0, 3.4028235e38, 0x40004u, "Max distance for lerping");
  DCONST_DVARFLT_cg_thirdPersonCarMaxAzimuthDiff = Dvar_RegisterFloat("cg_thirdPersonCarMaxAzimuthDiff", 48.0, 1.0, 3.4028235e38, 0x40004u, "Max azimuth difference for lerping");
  DCONST_DVARVEC3_cg_thirdPersonCarLerpSpeed = Dvar_RegisterVec3("cg_thirdPersonCarLerpSpeed", 16.0, 16.0, 14.0, 0.0, 3.4028235e38, 0x40004u, "How fast the camera position will lerp to the desired for each camera axis");
  DCONST_DVARFLT_cg_thirdPersonCorpseUpOffset = Dvar_RegisterFloat("cg_thirdPersonCorpseUpOffset", 7.5, 0.0, 3.4028235e38, 0x40004u, "Offset applied to corpse view target position along entity 'up' axis.");
  v31 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v31 = 262276;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
  {
    v32 = 0.0;
  }
  else
  {
    _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_0_0089999996);
    __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
    v32 = *(float *)&_XMM0;
  }
  DCONST_DVARMODEFLT_cg_thirdPersonCarBlurStrength = Dvar_RegisterFloat("NSTKSMPROK", v32, 0.0, 1.0, v31, "Strength of radial blur while driving car wrt speed. 0 to disable");
  v37 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v37 = 262276;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG )
    Com_GameMode_GetActiveGameMode();
  DCONST_DVARMODEFLT_cg_thirdPersonCarBlurRadius = Dvar_RegisterFloat("MTLPRSKKST", 0.30000001, 0.0, 1.0, v37, "Radius of radial blur while driving car wrt speed. 0 to disable");
  DCONST_DVARFLT_cg_thirdPersonCarMaxRoll = Dvar_RegisterFloat("cg_thirdPersonCarMaxRoll", 0.029999999, 0.0, 60.0, 0x40004u, "max roll allowed for 3rd person camera of car");
  _XMM15 = LODWORD(FLOAT_1_2);
  DCONST_DVARFLT_cg_thirdPersonCarMaxPitch = Dvar_RegisterFloat("cg_thirdPersonCarMaxPitch", 0.02, 0.0, 60.0, 0x40004u, "max pitch allowed for 3rd person camera of car");
  DVARVEC3_cameraShakeRemoteMissile_Angles = Dvar_RegisterVec3("LTOPQLROPR", 0.2, 1.2, 0.34999999, 0.0, *(float *)&_XMM9, 4u, "Remote missile-cam, range to shake the view.");
  DVARVEC3_cameraShakeRemoteMissile_Freqs = Dvar_RegisterVec3("MMPLKPMOMK", 38.0, 1.1, 84.0, 0.0, 3.4028235e38, 4u, "Remote missile-cam, how fast to shake.");
  DVARVEC2_cameraShakeRemoteMissile_SpeedRange = Dvar_RegisterVec2("MTNORPNTLL", 1000.0, 4000.0, 0.0, 3.4028235e38, 4u, "Remote missile-cam, range of missile speed to scale the shaking.");
  DVARVEC3_cameraShakeRemoteHelo_Angles = Dvar_RegisterVec3("LRQLQQPPNT", 0.221, 0.15000001, 2.0, 0.0, *(float *)&_XMM9, 4u, "Remote helicopter gunner cam, range to shake the view.");
  DVARVEC3_cameraShakeRemoteHelo_Freqs = Dvar_RegisterVec3("MLTTQQNSSQ", 31.0, *(float *)&_XMM9, 0.5, 0.0, 3.4028235e38, 4u, "Remote helicopter gunner cam, how fast to shake.");
  DVARVEC2_cameraShakeRemoteHelo_SpeedRange = Dvar_RegisterVec2("NLMSTOMKNR", 2000.0, 5000.0, 0.0, 3.4028235e38, 4u, "Remote helicopter gunner cam, range of missile speed to scale the shaking.");
  DCONST_DVARFLT_cg_camera_transition_fade_out_start_dist = Dvar_RegisterFloat("cg_camera_transition_fade_out_start_dist", 120.0, 0.0, 10000.0, 0x40004u, "Dist from the camera where the player starts to fade out during a camera transition to 1st person.");
  DCONST_DVARFLT_cg_camera_transition_fade_out_end_dist = Dvar_RegisterFloat("cg_camera_transition_fade_out_end_dist", 60.0, 0.0, 10000.0, 0x40004u, "Dist from the camera where the player finishes fading out during a camera transition to 1st person.");
  DVARFLT_cg_crosshairVerticalOffset = Dvar_RegisterFloat("LLLRKRROOP", 0.0, -1.0, 1.0, 4u, "Amount to vertically offset the crosshair from the center.");
  v39 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v39 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPBOOL_cg_viewmotion_spring_enable = Dvar_RegisterBool("NPRMROSQTN", 1, v39, "If enabled, will attach viewmodel and camera to a spring-mass-damper system attached to the player origin.");
  v40 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v40 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPINT_cg_viewmotion_spring_blendDurationMs = Dvar_RegisterInt("QLQPTPLNN", 2000, 0, 0x7FFFFFFF, v40, "The amount of time to blend between different CinematicMotion asset sets (milliseconds).");
  DVARSTR_RemoteCameraSounds_RoomType = Dvar_RegisterString("LNKLOMQOS", "default", 4u, (const char *)&queryFormat.fmt + 3);
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM0 = LODWORD(FLOAT_0_80000001);
  __asm { vblendvps xmm1, xmm0, xmm13, xmm2; value }
  DVARFLT_RemoteCameraSounds_DryLevel = Dvar_RegisterFloat("LPPROKMPPS", *(float *)&_XMM1, 0.0, 1.0, 4u, (const char *)&queryFormat.fmt + 3);
  DVARFLT_RemoteCameraSounds_WetLevel = Dvar_RegisterFloat("OKTKNPTSPP", 0.5, 0.0, 1.0, 4u, (const char *)&queryFormat.fmt + 3);
  DVARINT_thermalBlurFactorScope = Dvar_RegisterInt("QNOQQRSQO", 250, 0, 10000, 0x44u, "Amount of blur to use when drawing blur through a weapon's thermal scope.");
  DVARINT_thermalBlurFactorNoScope = Dvar_RegisterInt("NKRQMPKQML", 250, 0, 10000, 0x44u, "Amount of blur to use when drawing blur that is NOT through a weapon's thermal scope.");
  DVARBOOL_cg_camAngleOverride = Dvar_RegisterBool("LRPTKOOKRQ", 0, 4u, "If true angle offsets override the actual view angles instead of modifying them.");
  DVARVEC3_cg_camAngleOffset = Dvar_RegisterVec3("SMRQNSSTN", 0.0, 0.0, 0.0, -180.0, 180.0, 4u, "Pitch, Yaw, and Roll offsets in degrees");
  DVARVEC3_cg_camOffset = Dvar_RegisterVec3("MTMRQMRMKS", 0.0, 0.0, 0.0, -1000.0, 1000.0, 4u, "Position offset");
  DVARFLT_cg_traceProfilingDist = Dvar_RegisterFloat("NTKPONOMTP", -1.0, -1.0, 100000.0, 4u, "If non-negative then length of trace from camera to measure cost of Locational Trace.");
  DVARBOOL_deathCameraFailsafe = Dvar_RegisterBool("LKNMLOSRPP", 1, 4u, "Turns on the system to find a failsafe position for the death camera.");
  DVARFLT_deathCameraFailsafeOffset = Dvar_RegisterFloat("NSMLPOKPLS", 30.0, 0.0, 200.0, 4u, "Offset distance for random position selection.");
  DCONST_DVARFLT_thirdPersonViewTurretHeight = Dvar_RegisterFloat("thirdPersonViewTurretHeight", 25.0, 0.0, 3.4028235e38, 0x40004u, "Default height addition for 3rd person view of turret.");
  DCONST_DVARFLT_thirdPersonViewTurretRangeAddition = Dvar_RegisterFloat("thirdPersonViewTurretRangeAddition", 200.0, 0.0, 3.4028235e38, 0x40004u, "Default range offset for 3rd person view of turret.");
  v45 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v45 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPBOOL_cg_viewmodelMotionBlurFireScale = Dvar_RegisterBool("QNKLPNRKN", 1, v45, "If true, viewmodel motion blur velocity vectors will be scaled after each shot according to weapon GDT values.");
  v46 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v46 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPBOOL_fovUseTimeBasedBlends = Dvar_RegisterBool("NMTPKOTOTL", 0, v46, "Enables fov to blend over time for sprint and jog, instead of using speed based blends.");
  DCONST_DVARFLT_fovBlendSpeedIn = Dvar_RegisterFloat("fovBlendSpeedIn", 12.0, 0.0, 3.4028235e38, 0x40004u, "Fov blend in speed when time based blends are enabled.");
  DCONST_DVARFLT_fovBlendSpeedOut = Dvar_RegisterFloat("fovBlendSpeedOut", 4.0, 0.0, 3.4028235e38, 0x40004u, "Fov blend out speed when time based blends are enabled.");
  DCONST_DVARFLT_fovIncreaseForSprint = Dvar_RegisterFloat("fovIncreaseForSprint", 5.0, 0.0, 3.4028235e38, 0x40004u, "Fov increase while sprinting.");
  DCONST_DVARFLT_cg_viewModelDebugDist = Dvar_RegisterFloat("cg_viewModelDebugDist", 0.0, 0.0, 3.4028235e38, 0x40004u, "The distance to move the camera back from the view model.  An alternative to UFO viewmodel.");
  DCONST_DVARBOOL_handheldCameraEnabled = Dvar_RegisterBool("handheldCameraEnabled", 1, 0x40004u, "Whether or not the handheld camera system is enabled.");
  DCONST_DVARBOOL_handheldCameraImpulsesEnabled = Dvar_RegisterBool("handheldCameraImpulsesEnabled", 1, 0x40004u, "Whether or not the handheld camera 'impulse' system is enabled.  Used for events that violently shake the camera (damage, landing, etc).");
  DCONST_DVARINT_handheldCameraRepeatPeriodMs = Dvar_RegisterInt("handheldCameraRepeatPeriodMs", 60000, 1, 0x7FFFFFFF, 0x40004u, "Period of handheld camera motion before the perlin noise pattern repeats.");
  DCONST_DVARINT_handheldCameraOctaves = Dvar_RegisterInt("handheldCameraOctaves", 6, 1, 8, 0x40004u, "Number of octaves of Perlin noise to use for handheld camera motion.");
  DCONST_DVARINT_handheldCameraBlendDurationMs = Dvar_RegisterInt("handheldCameraBlendDurationMs", 500, 0, 0x7FFFFFFF, 0x40004u, "Duration of the blend between handheld camera properties in different cinematicmotion assets.");
  DVARFLT_handheldCameraTranslationScale = Dvar_RegisterFloat("NSPNNSMKSP", 1.0, 0.0, 3.4028235e38, 0x40u, "Scale the amount of handheld camera translation.");
  DVARFLT_handheldCameraRotationScale = Dvar_RegisterFloat("OLSQPSQLTK", 1.0, 0.0, 3.4028235e38, 0x40u, "Scale the amount of handheld camera rotation.");
  DCONST_DVARINT_handheldCameraDebug = Dvar_RegisterEnum("handheldCameraDebug", cg_shakeCameraDebugTypes, 0, 0x40004u, "Handheld camera debug.");
  DCONST_DVARBOOL_handheldCameraImpulseLandingEnabled = Dvar_RegisterBool("handheldCameraImpulseLandingEnabled", 1, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseLandingAttackMs = Dvar_RegisterInt("handheldCameraImpulseLandingAttackMs", 30, 1, 10000, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseLandingDecayMs = Dvar_RegisterInt("handheldCameraImpulseLandingDecayMs", 450, 1, 10000, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseLandingRotAmplitudeScale = Dvar_RegisterFloat("handheldCameraImpulseLandingRotAmplitudeScale", 1.0, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseLandingRotPersistenceScale = Dvar_RegisterFloat("handheldCameraImpulseLandingRotPersistenceScale", 1.0, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseLandingTransAmplitudeScale = Dvar_RegisterFloat("handheldCameraImpulseLandingTransAmplitudeScale", 1.0, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseLandingTransPersistenceScale = Dvar_RegisterFloat("handheldCameraImpulseLandingTransPersistenceScale", 1.0, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseLandingDecayType = Dvar_RegisterEnum("handheldCameraImpulseLandingDecayType", cg_shakeImpulseDecayTypes, 1, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseLandingModifierLow = Dvar_RegisterFloat("handheldCameraImpulseLandingModifierLow", 0.14, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseLandingModifierMedium = Dvar_RegisterFloat("handheldCameraImpulseLandingModifierMedium", 0.34999999, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseLandingModifierHigh = Dvar_RegisterFloat("handheldCameraImpulseLandingModifierHigh", 0.80000001, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseLandingModifierExtreme = Dvar_RegisterFloat("handheldCameraImpulseLandingModifierExtreme", 1.0, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARBOOL_handheldCameraImpulseSlideEnabled = Dvar_RegisterBool("handheldCameraImpulseSlideEnabled", 1, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseSlideAttackMs = Dvar_RegisterInt("handheldCameraImpulseSlideAttackMs", 60, 1, 10000, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseSlideDecayMs = Dvar_RegisterInt("handheldCameraImpulseSlideDecayMs", 1000, 1, 10000, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseSlideRotAmplitudeScale = Dvar_RegisterFloat("handheldCameraImpulseSlideRotAmplitudeScale", 0.34999999, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseSlideRotPersistenceScale = Dvar_RegisterFloat("handheldCameraImpulseSlideRotPersistenceScale", 1.0, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseSlideTransAmplitudeScale = Dvar_RegisterFloat("handheldCameraImpulseSlideTransAmplitudeScale", 1.5, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseSlideTransPersistenceScale = Dvar_RegisterFloat("handheldCameraImpulseSlideTransPersistenceScale", 1.0, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseSlideDecayType = Dvar_RegisterEnum("handheldCameraImpulseSlideDecayType", cg_shakeImpulseDecayTypes, 2, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARBOOL_handheldCameraImpulseDamageEnabled = Dvar_RegisterBool("handheldCameraImpulseDamageEnabled", 1, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseDamageAttackMs = Dvar_RegisterInt("handheldCameraImpulseDamageAttackMs", 1, 1, 10000, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseDamageDecayMs = Dvar_RegisterInt("handheldCameraImpulseDamageDecayMs", 400, 1, 10000, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseDamageRotAmplitudeScale = Dvar_RegisterFloat("handheldCameraImpulseDamageRotAmplitudeScale", 2.5, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseDamageRotPersistenceScale = Dvar_RegisterFloat("handheldCameraImpulseDamageRotPersistenceScale", 1.0, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseDamageTransAmplitudeScale = Dvar_RegisterFloat("handheldCameraImpulseDamageTransAmplitudeScale", 0.80000001, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseDamageTransPersistenceScale = Dvar_RegisterFloat("handheldCameraImpulseDamageTransPersistenceScale", 1.0, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseDamageDecayType = Dvar_RegisterEnum("handheldCameraImpulseDamageDecayType", cg_shakeImpulseDecayTypes, 2, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARBOOL_handheldCameraImpulseImpactEnabled = Dvar_RegisterBool("handheldCameraImpulseImpactEnabled", 1, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseImpactAttackMs = Dvar_RegisterInt("handheldCameraImpulseImpactAttackMs", 1, 1, 10000, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseImpactDecayMs = Dvar_RegisterInt("handheldCameraImpulseImpactDecayMs", 600, 1, 10000, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseImpactRotAmplitudeScale = Dvar_RegisterFloat("handheldCameraImpulseImpactRotAmplitudeScale", 0.13, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseImpactRotPersistenceScale = Dvar_RegisterFloat("handheldCameraImpulseImpactRotPersistenceScale", 1.0, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseImpactTransAmplitudeScale = Dvar_RegisterFloat("handheldCameraImpulseImpactTransAmplitudeScale", 0.13, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseImpactTransPersistenceScale = Dvar_RegisterFloat("handheldCameraImpulseImpactTransPersistenceScale", 1.0, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseImpactDecayType = Dvar_RegisterEnum("handheldCameraImpulseImpactDecayType", cg_shakeImpulseDecayTypes, 1, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseImpactMax2DSpeed = Dvar_RegisterFloat("handheldCameraImpulseImpactMax2DSpeed", 500.0, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARBOOL_handheldCameraImpulseFootstepEnabled = Dvar_RegisterBool("handheldCameraImpulseFootstepEnabled", 1, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseFootstepAttackMs = Dvar_RegisterInt("handheldCameraImpulseFootstepAttackMs", 120, 1, 10000, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseFootstepDecayMs = Dvar_RegisterInt("handheldCameraImpulseFootstepDecayMs", 650, 1, 10000, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseFootstepRotAmplitudeScale = Dvar_RegisterFloat("handheldCameraImpulseFootstepRotAmplitudeScale", 0.0099999998, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseFootstepRotPersistenceScale = Dvar_RegisterFloat("handheldCameraImpulseFootstepRotPersistenceScale", 1.0, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseFootstepTransAmplitudeScale = Dvar_RegisterFloat("handheldCameraImpulseFootstepTransAmplitudeScale", 0.029999999, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseFootstepTransPersistenceScale = Dvar_RegisterFloat("handheldCameraImpulseFootstepTransPersistenceScale", 0.1, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseFootstepDecayType = Dvar_RegisterEnum("handheldCameraImpulseFootstepDecayType", cg_shakeImpulseDecayTypes, 2, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseFootstepModifierJog = Dvar_RegisterFloat("handheldCameraImpulseFootstepModifierJog", 3.0, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_handheldCameraImpulseFootstepModifierSprint = Dvar_RegisterFloat("handheldCameraImpulseFootstepModifierSprint", 4.0, 0.0, 3.4028235e38, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARBOOL_advancedSwayDebug = Dvar_RegisterBool("advancedSwayDebug", 0, 0x40004u, "Enables Advanced Sway debug displays.");
  DCONST_DVARBOOL_advancedSwayViewmodelSmoothingEnabled = Dvar_RegisterBool("advancedSwayViewmodelSmoothingEnabled", 1, 0x40004u, "Enables viewmodel smoothing.");
  DCONST_DVARBOOL_advancedSwayViewmodelSmoothingEnabled_mouse = Dvar_RegisterBool("advancedSwayViewmodelSmoothingEnabled_mouse", 0, 0x40004u, "Enables viewmodel smoothing while controlling the game with a mouse.");
  DCONST_DVARBOOL_advancedSwayGunTorsoSpringDamperEnabled = Dvar_RegisterBool("advancedSwayGunTorsoSpringDamperEnabled", 1, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARBOOL_advancedSwayGunDirEnabled = Dvar_RegisterBool("advancedSwayGunDirEnabled", 1, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARBOOL_advancedSwayGunDirSpringDamperEnabled = Dvar_RegisterBool("advancedSwayGunDirSpringDamperEnabled", 1, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARBOOL_advancedSwayEnabledSpectate = Dvar_RegisterBool("advancedSwayEnabledSpectate", 1, 0x40004u, "Whether to use advanced weapon sway in killcam and spectate modes.");
  DCONST_DVARBOOL_smoothCameraEnabled = Dvar_RegisterBool("smoothCameraEnabled", 0, 0x40004u, "Enables camera smoothing.");
  DCONST_DVARFLT_smoothCameraSpeed = Dvar_RegisterFloat("smoothCameraSpeed", 30.0, 0.0, 3.4028235e38, 0x40004u, "Camera smoothing rate (radians/sec) per radian of displacement from goal.");
  DCONST_DVARBOOL_smoothCameraEnabledSpectate = Dvar_RegisterBool("smoothCameraEnabledSpectate", 0, 0x40004u, "Enables camera smoothing while in killcam or spectator mode.");
  DCONST_DVARFLT_smoothCameraSpeedSpectate = Dvar_RegisterFloat("smoothCameraSpeedSpectate", 55.0, 0.0, 3.4028235e38, 0x40004u, "Camera smoothing rate (radians/sec) per radian of displacement from goal.  Value applied while in killcam or spectator mode.");
  DCONST_DVARFLT_smoothClampAngle = Dvar_RegisterFloat("smoothClampAngle", 35.0, 0.0, 180.0, 0x40004u, "For camera and viewmodel smoothing, maximum angular displacement between goal and current orientations.");
  DVARFLT_cg_targetBaseFov = Dvar_RegisterFloat("MRNKTKLLKP", 65.0, 5.0, 170.0, 0x44u, "Base hip FOV. When set to a value different than 65, hip FOV becomes this value and the ADS zoom FOV is scaled.");
  DCONST_DVARFLT_cg_targetBaseFovDecreaseStopAt = Dvar_RegisterFloat("cg_targetBaseFovDecreaseStopAt", 30.0, 0.0, 100.0, 0x40004u, (const char *)&queryFormat.fmt + 3);
  v47 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v47 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPBOOL_cg_corpseFade_enabled = Dvar_RegisterBool("NQONMTOOTS", 1, v47, "Enables the corpse fade system.");
  DCONST_DVARFLT_cg_corpseFade_time = Dvar_RegisterFloat("cg_corpseFade_time", 0.30000001, 0.0, 3.4028235e38, 0x40004u, "Amount of time for a full corpse fade to elapse (seconds).");
  DCONST_DVARBOOL_cg_corpseFade_removeDObjWhenComplete = Dvar_RegisterBool("cg_corpseFade_removeDObjWhenComplete", 1, 0x40004u, "Whether the DObj should be completely removed from the scene when the model is completely faded out.  Improves rendering performance but may have other implications (shadow pop, material streaming, etc.)");
  v48 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v48 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_cg_corpseFade_outDistanceStart_ragdoll = Dvar_RegisterFloat("NQLPNORONS", 32.0, 0.0, 3.4028235e38, v48, "Distance from corpse where it will begin to disappear from view.  For entities controlled by the ragdoll system.");
  v49 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v49 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_cg_corpseFade_inDistanceStart_ragdoll = Dvar_RegisterFloat("NQTLQOTLL", 42.0, 0.0, 3.4028235e38, v49, "Distance from corpse where it will begin to fade back in.  For entities controlled by the ragdoll system.");
  v50 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v50 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_cg_corpseFade_outDistanceStart_scriptmodel = Dvar_RegisterFloat("MPOOMRMSML", 50.0, 0.0, 3.4028235e38, v50, "Distance from corpse where it will begin to disappear from view.  For scriptmodel entities.");
  v51 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v51 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_cg_corpseFade_inDistanceStart_scriptmodel = Dvar_RegisterFloat("LROTTMQLQO", 60.0, 0.0, 3.4028235e38, v51, "Distance from corpse where it will begin to fade back in.  For scriptmodel entities.");
  DCONST_DVARBOOL_cg_corpseFade_debug = Dvar_RegisterBool("cg_corpseFade_debug", 0, 0x40004u, "Enables a debug display for the corpse fade system.");
  DCONST_DVARBOOL_helmetCamForceEnable = Dvar_RegisterBool("helmetCamForceEnable", 0, 0x40004u, "If true, forces the helmet cam to be enabled this client.");
  DCONST_DVARBOOL_helmetCamFollowEnabled = Dvar_RegisterBool("helmetCamFollowEnabled", 0, 0x40004u, "If true, permits switching to the helmet cam while spectating another player.");
  DCONST_DVARBOOL_helmetCamDrawHelmet = Dvar_RegisterBool("helmetCamDrawHelmet", 1, 0x40004u, "If true, will draw the helmet on-screen while helmet action cam is enabled.");
  DCONST_DVARFLT_spectatorMaxPitch3p = Dvar_RegisterFloat("spectatorMaxPitch3p", 40.0, 0.0, 90.0, 0x40004u, "Max pitch when spectating in third person.");
  DCONST_DVARBOOL_cg_resetDoorStateWhenRespawnPlayer = Dvar_RegisterBool("cg_resetDoorStateWhenRespawnPlayer", 1, 0x40004u, "If true, reset the door states when respawning a player.");
  DCONST_DVARBOOL_cg_crosshairTraceAsync = Dvar_RegisterBool("cg_crosshairTraceAsync", 1, 0x40004u, "Enable run crosshair trace asynchronously.");
  DVARINT_hud_health_min_fully_healed = Dvar_RegisterInt("LSQQNTRKKL", 135, 0, 1000, 4u, "Minimum health to be considered fully healed, if this is above the max health, then we will use the max health");
  DVARBOOL_cg_drawLUIObjectives = Dvar_RegisterBool("NLNLNLKNQM", 1, 0, "Draw objectives using the LUI system (in MP and SP). Requires LUI Reload to take effect.");
  DVARBOOL_cg_trigger_draw = Dvar_RegisterBool("MQRMRRPRTR", 0, 4u, "draw the shape of the triggers");
  DVARVEC3_rc_override = Dvar_RegisterVec3("NOPQNTOPMR", 0.0, 0.0, 0.0, -100.0, 100.0, 4u, "override for character rotation offset");
  DVARBOOL_rc_draw_axis = Dvar_RegisterBool("NNPQSPTPL", 0, 4u, "Draw to the screen the axis of rotation of the character");
  DVARBOOL_cg_useplayerbreathsys = Dvar_RegisterBool("NOOPRPQTQN", 0, 0x40u, "Use the new player breath system");
  DCONST_DVARINT_cg_playerbreath_shot_recov_time = Dvar_RegisterInt("cg_playerbreath_shot_recov_time", 600, 0, 10000, 0x40004u, "Minimum amount of time in milliseconds player must be firing before a shot recovery breath sound will be played");
  DCONST_DVARBOOL_cg_playerbreath_debug = Dvar_RegisterBool("cg_playerbreath_debug", 0, 0x40004u, "enables the player breath debug overlay");
  DCONST_DVARINT_cg_playerbreath_jump_cooldown_time = Dvar_RegisterInt("cg_playerbreath_jump_cooldown_time", 5000, 0, 10000, 0x40004u, "Minimum amount of time in milliseconds in from the last jump before playing another jump sound");
  DCONST_DVARBOOL_snd_autoSim = Dvar_RegisterBool("snd_autoSim", 1, 0x40004u, "turn on client side simulation of automatic gun sounds");
  DCONST_DVARFLT_snd_autoSim_predictWindowMs = Dvar_RegisterFloat("snd_autoSim_predictWindowMs", 33.400002, 0.0, 200.0, 0x40004u, "The sounds should be queued before the actual firing time. This value defines the warm up time for the sound effect.");
  DCONST_DVARINT_snd_autoSim_ssc = Dvar_RegisterInt("snd_autoSim_ssc", 150, 0, 300, 0x40004u, "The fire rate threshold of when to use single shot correction");
  DCONST_DVARBOOL_cg_snd_debugwhizby = Dvar_RegisterBool("cg_snd_debugwhizby", 0, 0x40004u, "turn on printing of whizby speed warnings");
  DVARFLT_cg_ceiling_footstep_coneHeight = Dvar_RegisterFloat("LQSRRTOKNN", 360.0, 1.0, 3.4028235e38, 0, "Height of the cone check to play ceiling footstep audio on the local client.");
  DVARFLT_cg_ceiling_footstep_coneRadius = Dvar_RegisterFloat("OLPQMMPMMM", 2250.0, 1.0, 3.4028235e38, 0, "Radius of the cone check to play ceiling footstep audio on the local client.");
  DCONST_DVARBOOL_cg_default_zone_is_exterior = Dvar_RegisterBool("cg_default_zone_is_exterior", 1, 0x40004u, "Forces default audio script zones to be considered exterior areas for the occlusion system");
  DCONST_DVARINT_snd_footstep_debug_duration = Dvar_RegisterInt("snd_footstep_debug_duration", 300, 0, 0x7FFFFFFF, 0x40004u, "Number of frames to draw final debug display for footsteps under snd_footstep_debug.");
  DCONST_DVARINT_snd_footstep_debug_finish_max_remaining = Dvar_RegisterInt("snd_footstep_debug_finish_max_remaining", 75, 0, 0x7FFFFFFF, 0x40004u, "How early a footstep sound can be killed but still considered 'finished' (milliseconds).");
  DCONST_DVARBOOL_snd_footstep_debug_asserts = Dvar_RegisterBool("snd_footstep_debug_asserts", 0, 0x40004u, "Whether to emit asserts upon internal failures in footstep tracking logic.");
  DCONST_DVARBOOL_snd_footstep_debug_alias = Dvar_RegisterBool("snd_footstep_debug_alias", 0, 0x40004u, "Whether to draw the sound alias in some in-world displays.");
  DCONST_DVARFLT_compassRadarUpdateTime = Dvar_RegisterFloat("compassRadarUpdateTime", 4.0, 0.0099999998, 60.0, 0x40004u, "Time between radar updates for the normal radar mode");
  DCONST_DVARFLT_compassFastRadarUpdateTime = Dvar_RegisterFloat("compassFastRadarUpdateTime", 2.0, 0.1, 60.0, 0x40004u, "Time between radar updates for the fast radar mode");
  DCONST_DVARFLT_compassSlowRadarUpdateTime = Dvar_RegisterFloat("compassSlowRadarUpdateTime", 8.0, 0.1, 60.0, 0x40004u, "Time between radar updates for the slow radar mode");
  DCONST_DVARFLT_compassEnemyHeightDelta = Dvar_RegisterFloat("compassEnemyHeightDelta", 96.0, 0.0, 3.4028235e38, 0x40004u, "The minimum height difference at which an enemy's relative height will be displayed");
  DCONST_DVARBOOL_compassEyesOnEnabled = Dvar_RegisterBool("compassEyesOnEnabled", 1, 0x40004u, "Enable eyes-on radar on the minimap.");
  DCONST_DVARBOOL_compassPortableRadarOwnerOnly = Dvar_RegisterBool("compassPortableRadarOwnerOnly", 1, 0x40004u, "Should portable radar pings be shown to only the owner (or to the whole team)");
  DCONST_DVARBOOL_compassEnemyRedBlipPerkFadeEnabled = Dvar_RegisterBool("compassEnemyRedBlipPerkFadeEnabled", 1, 0x40004u, "Enable fade-out of enemy blips drawn due to the redblip perk");
  DCONST_DVARBOOL_compassEnemyFootstepEnabled = Dvar_RegisterBool("compassEnemyFootstepEnabled", 0, 0x40004u, "Enables enemies showing on the compass because of moving rapidly nearby.");
  DVARFLT_compassRadarPingFadeTime = Dvar_RegisterFloat("LONMLLOSKQ", 4.0, 0.0099999998, 60.0, 4u, "How long an enemy is visible on the compass after it is detected by radar");
  DVARFLT_compassRadarLineThickness = Dvar_RegisterFloat("MNLRLKNQNR", 0.40000001, 0.0099999998, 10.0, 4u, "Thickness, relative to the compass size, of the radar texture that sweeps across the map");
  DVARBOOL_compassShowFire = Dvar_RegisterBool("LOSPTTQRSQ", 1, 4u, "Show enemy weapon pings on the compass/minimap");
  DVARFLT_compassShowFireBrMaxDistSq = Dvar_RegisterFloat("MTQTTTMSPS", 100000000.0, 0.0, 3.4028235e38, 0, "If the player who fired their weapon is further than this squared distance, the fire is not shown in the radar. This is only applicable in BR/DMZ style big map modes and can be disabled by setting the value to 0.0f.");
  DVARBOOL_compass = Dvar_RegisterBool("compass", 1, 0x40u, "Display Compass");
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM0 = LODWORD(FLOAT_2_0);
  __asm { vblendvps xmm1, xmm0, xmm1, xmm2; value }
  DCONST_DVARMPSPFLT_compassSoundPingDuration = Dvar_RegisterFloat("compassSoundPingDuration", *(float *)&_XMM1, 0.0, 3.4028235e38, 0x40004u, "Duration of minimap ping when firing an unsilenced weapon (seconds).");
  DCONST_DVARFLT_compassSilencedSoundPingDuration = Dvar_RegisterFloat("compassSilencedSoundPingDuration", 2.0, 0.0, 3.4028235e38, 0x40004u, "Duration of minimap ping when firing a silenced weapon (seconds).");
  DVARFLT_compassSoundPingFadeTime = Dvar_RegisterFloat("LSQSKKLSQL", 1.5, 0.0099999998, 10.0, 4u, "The time in seconds for the sound overlay on the compass to fade");
  _XMM8 = LODWORD(FLOAT_18_75);
  DVARBOOL_compassClampIcons = Dvar_RegisterBool("NPSOQNKNLS", 1, 4u, "If true, friendlies and enemy pings clamp to the edge of the radar.  If false, they disappear off the edge.");
  DVARFLT_compassPlayerWidth = Dvar_RegisterFloat("NSROOQNTRQ", 18.75, 0.0, 3.4028235e38, 0, "The size of the player's icon on the compass");
  DVARFLT_compassPlayerHeight = Dvar_RegisterFloat("MNMOLKRRPN", 18.75, 0.0, 3.4028235e38, 0, "The size of the player's icon on the compass");
  DVARVEC3_compassCoords = Dvar_RegisterVec3("LTLQTRKRQR", 740.0, 3590.0, 400.0, 0.0, 3.4028235e38, 0, "x = North-South coord base value, \ny = East-West coord base value, \nz = scale (game units per coord unit)");
  DVARFLT_compassECoordCutoff = Dvar_RegisterFloat("LRPSTLOMSK", 37.0, 0.0, 3.4028235e38, 0, "Left cutoff for the scrolling east-west coords");
  DVARBOOL_compassRotation = Dvar_RegisterBool("MLOSPOTNPN", 1, 0x40u, "Style of compass");
  DVARFLT_compassTickertapeStretch = Dvar_RegisterFloat("MMRQOORMSS", 0.85000002, 0.0099999998, 1.0, 0x44u, "How far the tickertape should stretch from its center.");
  DVARFLT_compassCircleOutlineThickness = Dvar_RegisterFloat("LSPNSMSRMP", 3.0, 1.0, 16.0, 0, "Thickness of SDF circle outline.");
  DCONST_DVARFLT_compassCircleTravelLineThickness = Dvar_RegisterFloat("compassCircleTravelLineThickness", 1.5, 0.1, 16.0, 0x40004u, "Thickness of the travel line pointing player toward boundary of circle.");
  DVARFLT_compassObjectiveWidth = Dvar_RegisterFloat("MLSNKQTKQK", 14.0, 0.0, 3.4028235e38, 0, "The size of the objective on the compass");
  DVARFLT_compassObjectiveHeight = Dvar_RegisterFloat("LOTTTLOMOP", 14.0, 0.0, 3.4028235e38, 0, "The size of the objective on the compass");
  DCONST_DVARFLT_compassObjectiveWidthSmall = Dvar_RegisterFloat("compassObjectiveWidthSmall", 11.0, 0.0, 3.4028235e38, 0x40004u, "The small size of the objective on the compass.");
  DCONST_DVARFLT_compassObjectiveHeightSmall = Dvar_RegisterFloat("compassObjectiveHeightSmall", 11.0, 0.0, 3.4028235e38, 0x40004u, "The small size of the objective on the compass.");
  DVARFLT_compassObjectiveWidthLarge = Dvar_RegisterFloat("MQQPKORPML", 65.0, 0.0, 3.4028235e38, 0, "The large size of the objective on the compass");
  DVARFLT_compassObjectiveHeightLarge = Dvar_RegisterFloat("MSSOQMMMKO", 65.0, 0.0, 3.4028235e38, 0, "The large size of the objective on the compass");
  DVARFLT_compassObjectiveWidthMedium = Dvar_RegisterFloat("NOSPSPKLQT", 28.0, 0.0, 3.4028235e38, 0, "The medium size of the objective on the compass");
  DVARFLT_compassObjectiveHeightMedium = Dvar_RegisterFloat("LSPTRONQSS", 28.0, 0.0, 3.4028235e38, 0, "The medium size of the objective on the compass");
  DVARFLT_compassObjectiveWidthHeadIcon = Dvar_RegisterFloat("MSKNSKROQR", 32.0, 0.0, 3.4028235e38, 0, "The head icon size of the objective on the compass");
  DVARFLT_compassObjectiveHeightHeadIcon = Dvar_RegisterFloat("NKONSTLPQM", 32.0, 0.0, 3.4028235e38, 0, "The head icon size of the objective on the compass");
  DVARFLT_compassIconMLGSpectatorScale = Dvar_RegisterFloat("NKQKOQOKKL", 2.3, 0.0099999998, 3.4028235e38, 0x40000u, "The scale multiplier for icons while MLG Spectator on the compass");
  DVARFLT_compassIconMLGSpectatorVehicleScale = Dvar_RegisterFloat("LTKLSQSTSL", 2.0, 0.0099999998, 3.4028235e38, 0x40000u, "The scale multiplier for vehicle icons while MLG Spectator on the compass");
  DVARFLT_compassIconMLGSpectatorLargeMapObjectiveSize = Dvar_RegisterFloat("LRTSQPMKPK", 0.25, 0.0, 10.0, 0, "Increase the scale of objective icons on the large map");
  DVARFLT_compassPlayerNumberCircleRadius = Dvar_RegisterFloat("MKOTOLNKNP", 0.0, 0.0, 3.4028235e38, 0x40000u, "Circle that help correctly position the player number inside the arrow not matter its rotation");
  DVARFLT_compassPlayerNumberObjectiveCircleRadius = Dvar_RegisterFloat("SRNQLTNRM", 17.0, 0.0, 3.4028235e38, 0x40000u, "Circle that help correctly position the player number inside the objective circle not matter its rotation");
  DVARFLT_compassPlayerObjectiveArrowRadius = Dvar_RegisterFloat("LQLQPLLRKS", 16.0, 0.0, 3.4028235e38, 0x40000u, "Radius of the arrow in objective holder for non spectated players holding the objective in CoDCaster");
  DVARFLT_compassPlayerObjectiveHolderCicleSize = Dvar_RegisterFloat("NSNPNTOTKK", 0.80000001, 0.0, 10.0, 0x40000u, "size of the circle in objective holder for players holding the objective in CoDCaster");
  DVARFLT_compassPlayerObjectiveHolderArrowSize = Dvar_RegisterFloat("LRKNOPQMTN", 0.80000001, 0.0, 10.0, 0x40000u, "size of the small arrow in objective holder for players holding the objective in CoDCaster");
  DVARFLT_compassPlayerObjectiveHolderOverallSize = Dvar_RegisterFloat("SQRRQMQKR", 1.15, 0.0, 10.0, 0x40000u, "size of the whole arrow in objective holder for players holding the objective in CoDCaster");
  DVARFLT_compassSpectatedPlayerObjectiveArrowRadius = Dvar_RegisterFloat("MMQORROKKL", 19.0, 0.0, 3.4028235e38, 0x40000u, "Radius of the arrow in objective holder for spectating players holding the objective in CoDCaster");
  DVARFLT_compassPlayerNumberTextXOffset = Dvar_RegisterFloat("MPMLTPNTKP", 22.0, 0.0, 3.4028235e38, 0x40000u, "width offset for the player number text box, the larger the number the more rightwards the box goes");
  DVARFLT_compassObjectivePlayerNumberTextXOffset = Dvar_RegisterFloat("LKNNNNRNQM", 20.0, 0.0, 3.4028235e38, 0x40000u, "width offset for the player number text box for objective holders, the larger the number the more rightwards the box goes");
  DVARFLT_compassPlayerJerseyNumberTextXOffset = Dvar_RegisterFloat("MLSSPKORT", 3.0, 0.0, 3.4028235e38, 0x40000u, "width offset for the player jersey number text box, the larger the number the more rightwards the box goes");
  DVARFLT_compassPlayerNumberTextYOffset = Dvar_RegisterFloat("OLRNNTSOPQ", 2.0, -3.4028235e38, 3.4028235e38, 0x40000u, "height offset for the player number text box, the larger the number the more downwards the box goes");
  DVARFLT_compassObjectivePlayerNumberTextYOffset = Dvar_RegisterFloat("LKRKQRPQN", -23.0, -3.4028235e38, 3.4028235e38, 0x40000u, "height offset for the player number text box for objective holders, the larger the number the more downwards the box goes");
  DVARFLT_compassMLGMapVehicleScalePartial = Dvar_RegisterFloat("LTSQQPOLKS", 0.75, 0.0099999998, 2.0, 0, "How much a vehicle should be scaled up or down for CoDCaster maps, viewing the partial map");
  DVARFLT_compassMLGLargeMapInnerArrowOpacity = Dvar_RegisterFloat("MNTSNKNRM", 0.80000001, 0.0099999998, 1.0, 0, "How opaque the CoDCaster arrow should be on the full map");
  DVARFLT_compassMLGPlayerNumberTextWidth = Dvar_RegisterFloat("LLPQMMPKRQ", 7.0, 0.0099999998, 50.0, 0, "Set the text width size of player numbers");
  DVARFLT_compassMLGPlayerNumberFontHeight = Dvar_RegisterFloat("NPNPPPSTTP", 7.0, 0.0099999998, 50.0, 0, "Set the text height of player numbers");
  DVARFLT_compassMLGPlayerObjectiveNumberTextWidth = Dvar_RegisterFloat("OKKKLTTOPT", 10.0, 0.0099999998, 50.0, 0, "Set the text width size of player numbers for objective holders");
  DVARFLT_compassMLGPlayerObjectiveNumberFontHeight = Dvar_RegisterFloat("LQRSLPKKKS", 8.0, 0.0099999998, 50.0, 0, "Set the text height of player numbers for objective holders");
  DVARFLT_compassObjectiveMaxRange = Dvar_RegisterFloat("LRNSPTNQOT", 2048.0, 0.0, 3.4028235e38, 0, "The maximum range at which an objective is visible on the compass");
  DVARFLT_compassObjectiveMinAlpha = Dvar_RegisterFloat("MROOLSPRTQ", 1.0, 0.0, 1.0, 0, "The minimum alpha for an objective at the edge of the compass");
  DVARFLT_compassObjectiveIconWidth = Dvar_RegisterFloat("NOTLNTRMTL", 16.0, 0.0, 3.4028235e38, 0, "The size of the objective on the full map");
  DVARFLT_compassObjectiveIconHeight = Dvar_RegisterFloat("NMKNORNKMM", 16.0, 0.0, 3.4028235e38, 0, "The size of the objective on the full map");
  DVARFLT_compassObjectiveIconWidthMedium = Dvar_RegisterFloat("NOONSLPLPS", 32.0, 0.0, 3.4028235e38, 0, "The medium size of the objective on the full map");
  DVARFLT_compassObjectiveIconHeightMedium = Dvar_RegisterFloat("LTTQPRLRLP", 32.0, 0.0, 3.4028235e38, 0, "The medium size of the objective on the full map");
  DVARFLT_compassObjectiveIconWidthLarge = Dvar_RegisterFloat("LQNRMLNKLK", 64.0, 0.0, 3.4028235e38, 0, "The large size of the objective on the full map");
  DVARFLT_compassObjectiveIconHeightLarge = Dvar_RegisterFloat("RMKORNSTL", 64.0, 0.0, 3.4028235e38, 0, "The large size of the objective on the full map");
  DVARFLT_compassObjectiveIconWidthHeadIcon = Dvar_RegisterFloat("LRPKLLSRNM", 32.0, 0.0, 3.4028235e38, 0, "The head icon size of the objective on the full map");
  DVARFLT_compassObjectiveIconHeightHeadIcon = Dvar_RegisterFloat("MNTRQNQNML", 32.0, 0.0, 3.4028235e38, 0, "The head icon size of the objective on the full map");
  DCONST_DVARFLT_compassObjectiveIconWidthSmall = Dvar_RegisterFloat("compassObjectiveIconWidthSmall", 10.0, 0.0, 3.4028235e38, 0x40004u, "The small size of the objective on the compass.");
  DCONST_DVARFLT_compassObjectiveIconHeightSmall = Dvar_RegisterFloat("compassObjectiveIconHeightSmall", 10.0, 0.0, 3.4028235e38, 0x40004u, "The small size of the objective on the compass.");
  DVARFLT_navbarObjectiveIconWidth = Dvar_RegisterFloat("STPKKTPSR", 32.0, 0.0, 3.4028235e38, 0, "The size of the objective on the navbar");
  DVARFLT_navbarObjectiveIconHeight = Dvar_RegisterFloat("LSRRQNNMNS", 32.0, 0.0, 3.4028235e38, 0, "The size of the objective on the navbar");
  DCONST_DVARFLT_navbarObjectiveIconSizeScalar = Dvar_RegisterFloat("navbarObjectiveIconSizeScalar", 0.40000001, 0.2, 0.5, 0x40004u, "The scalar for the objective icon size, this value is a percentage of the navbar element's height.");
  DCONST_DVARFLT_navbarEnemyIconAnimationRange = Dvar_RegisterFloat("navbarEnemyIconAnimationRange", 0.0425, 0.0, 1.0, 0x40004u, "The range over which the enemy ping animation will play, normalized");
  DCONST_DVARFLT_navbarEnemyIconMaxScalar = Dvar_RegisterFloat("navbarEnemyIconMaxScalar", 1.35, 1.0, 50.0, 0x40004u, "When an enemy is pinged the enemy icon size will increase by this scale factor and return to normal scale over a period of time.");
  DCONST_DVARFLT_navbarEnemyIconBackingMaxScalar = Dvar_RegisterFloat("navbarEnemyIconBackingMaxScalar", 1.9, 1.0, 50.0, 0x40004u, "The max scale of the background image on the enemy pinged icon during the ping animation.");
  DCONST_DVARVEC3_navbarEnemyIconBackingColor = Dvar_RegisterVec3("navbarEnemyIconBackingColor", 0.46700001, 0.208, 0.208, 0.0, 1.0, 0x40004u, "Color of the background image on the enemy pinged icon");
  DCONST_DVARBOOL_navbarEnemyIconAnimPingPong = Dvar_RegisterBool("navbarEnemyIconAnimPingPong", 1, 0x40004u, "If true, the icon will scale up and then scale down when pinged, time is equally divided along the navbarEnemyIconAnimationRange");
  DCONST_DVARVEC3_navbarEnemyIconColor = Dvar_RegisterVec3("navbarEnemyIconColor", 1.0, 0.106, 0.063000001, 0.0, 1.0, 0x40004u, "Color of the enemy icon image on the navbar");
  DCONST_DVARBOOL_navbarUseRoundedCompass = Dvar_RegisterBool("navbarUseRoundedCompass", 1, 0x40004u, "When enabled the navbar compass will be rounded");
  DVARBOOL_compassHideVehicles = Dvar_RegisterBool("MRNRPRPMLK", 0, 0x44u, "When enabled, disables the CG_PLAYER_COMPASS_VEHICLES ownerdraw.");
  DVARBOOL_compassVehicleUseMapMask = Dvar_RegisterBool("MLNRPTSSQQ", 0, 0, "When enabled, all vehicles will not be pinned to the edges of the minimap by default.");
  DVARFLT_cg_hudMapFriendlyWidth = Dvar_RegisterFloat("RLKSTRLQQ", 15.0, 0.0, 3.4028235e38, 0, "The size of the friendly icon on the full map");
  DVARFLT_cg_hudMapFriendlyHeight = Dvar_RegisterFloat("MPOSSTMTSN", 15.0, 0.0, 3.4028235e38, 0, "The size of the friendly icon on the full map");
  DVARFLT_cg_hudMapPlayerWidth = Dvar_RegisterFloat("OMLSQKPQMM", 20.0, 0.0, 3.4028235e38, 0, "The size of the player's icon on the full map");
  DVARFLT_cg_hudMapPlayerHeight = Dvar_RegisterFloat("NPTNMOTON", 20.0, 0.0, 3.4028235e38, 0, "The size of the player's icon on the full map");
  DVARFLT_cg_hudMapBorderWidth = Dvar_RegisterFloat("RKLKRQNQT", 2.0, 0.0, 3.4028235e38, 0, "The size of the full map's border, filled by the CG_PLAYER_FULLMAP_BORDER ownerdraw");
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm15, xmm6, xmm2; value
  }
  DVARFLT_compassSize = Dvar_RegisterFloat("MKMRRLNRTM", *(float *)&_XMM1, 0.0, 3.4028235e38, 0, "Scale the compass");
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm8, xmm6, xmm2; value
  }
  DVARFLT_compassFriendlyWidth = Dvar_RegisterFloat("NOQLNPSLSO", *(float *)&_XMM1, 0.0, 3.4028235e38, 0, "The size of the friendly icon on the compass");
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm8, xmm6, xmm2; value
  }
  DVARFLT_compassFriendlyHeight = Dvar_RegisterFloat("NPROKNLRML", *(float *)&_XMM1, 0.0, 3.4028235e38, 0, "The size of the friendly icon on the compass");
  DVARFLT_compassObjectiveDetailDist = Dvar_RegisterFloat("OMLOLKQQOP", 10.0, 0.0099999998, 3.4028235e38, 0x40u, "When an objective is closer than this distance (in meters), the icon will not be drawn on the tickertape");
  DCONST_DVARFLT_compassEnemyIconSizeScalar = Dvar_RegisterFloat("compassEnemyIconSizeScalar", 0.5, 0.2, 1.0, 0x40004u, "The scalar for the enemy icon size, this value is a percentage of the navbar element's height");
  DCONST_DVARBOOL_compassDelayEnabled = Dvar_RegisterBool("compassDelayEnabled", 1, 0x40004u, "If true the compass will have a delay reaching the desired angle when rotating");
  DCONST_DVARFLT_compassDelayEase = Dvar_RegisterFloat("compassDelayEase", 0.25, 0.1, 1.0, 0x40004u, "How fast the compass will approach the current rotation of the player");
  DCONST_DVARFLT_compassShrinkFactor = Dvar_RegisterFloat("compassShrinkFactor", 10.0, 0.0, 50.0, 0x40004u, "How much the compass will shrink when it is a rounded compass");
  DCONST_DVARFLT_compassBackgroundWidthScalar = Dvar_RegisterFloat("compassBackgroundWidthScalar", 1.0, 0.0, 5.0, 0x40004u, "Scales the width of the blackBackground on the compass");
  DCONST_DVARFLT_compassMaskScalar = Dvar_RegisterFloat("compassMaskScalar", 1.0, 0.0, 5.0, 0x40004u, "Scales the width of the side mask on the compass");
  DCONST_DVARFLT_compassCenterMaskScalar = Dvar_RegisterFloat("compassCenterMaskScalar", 0.25, 0.0, 5.0, 0x40004u, "Scales the width of the center mask on the compass");
  DCONST_DVARVEC4_compassBackgroundColor = Dvar_RegisterVec4("compassBackgroundColor", 0.18000001, 0.18000001, 0.18000001, 0.0, 0.0, 1.0, 0x40004u, "Color of the background on the compass");
  DCONST_DVARVEC4_compassTextOutlineColor = Dvar_RegisterVec4("compassTextOutlineColor", 0.18000001, 0.18000001, 0.18000001, 0.69999999, 0.0, 1.0, 0x40004u, "Color of the glow applied to compass heading fonts");
  DCONST_DVARFLT_compassTextVerticalOffset = Dvar_RegisterFloat("compassTextVerticalOffset", 0.375, -1.0, 1.0, 0x40004u, "Vertical offset of heading text from its default position");
  DCONST_DVARFLT_compassVehicleSizeMini = Dvar_RegisterFloat("compassVehicleSizeMini", 16.0, 1.0, 300.0, 0x40004u, "The size of mini vehicle icons on the tacmap");
  DCONST_DVARFLT_radialSensorRange = Dvar_RegisterFloat("radialSensorRange", 20000.0, 0.001, 3.4028235e38, 0x40004u, "The maximum range from the player in world space that objects will be shown on the radial sensor before it is clamped");
  DCONST_DVARFLT_radialSensorIconSize = Dvar_RegisterFloat("radialSensorIconSize", 64.0, 1.0, 300.0, 0x40004u, "The size of icons that appear on the radial sensor");
  DCONST_DVARFLT_radialSensorSweepRadius = Dvar_RegisterFloat("radialSensorSweepRadius", 700.0, 1.0, 10000.0, 0x40004u, "The max radius of the sweep circle");
  DCONST_DVARINT_radialSensorSweepDuration = Dvar_RegisterInt("radialSensorSweepDuration", 700, 1, 50000, 0x40004u, "How long in ms it takes the sweep to reach the sweep diameter");
  DCONST_DVARINT_radialSensorNextPingTime = Dvar_RegisterInt("radialSensorNextPingTime", 2000, 1, 50000, 0x40004u, "Wait time between radial pings");
  DCONST_DVARVEC4_radialSensorIconColor = Dvar_RegisterVec4("radialSensorIconColor", 1.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0x40004u, "Color of the radial sensor ping icons");
  DCONST_DVARFLT_heartbeatSensorAlphaFalloff = Dvar_RegisterFloat("heartbeatSensorAlphaFalloff", 0.60000002, 0.0, 1.0, 0x40004u, "The greater the scalar the faster the ping will reach an alpha of 0 after being sweeped");
  DCONST_DVARFLT_heartbeatSensorEnemyDistanceWarningThreshold = Dvar_RegisterFloat("heartbeatSensorEnemyDistanceWarningThreshold", 5.0, 0.0, 3.4028235e38, 0x40004u, "The distance at which the text will draw red for the closest nearby enemy ( in meters )");
  DCONST_DVARVEC4_heartbeatSensorEnemyDistanceWarningColor = Dvar_RegisterVec4("heartbeatSensorEnemyDistanceWarningColor", 0.93000001, 0.23, 0.14, 1.0, 0.0, 1.0, 0x40004u, "Color of the text when we are within close enemy threshold distance");
  DCONST_DVARBOOL_hearbeatSensorUseCurrentOrientation = Dvar_RegisterBool("hearbeatSensorUseCurrentOrientation", 1, 0x40004u, "If true, the heartbeatSensor will use the current orientation of the player when drawing enemy blips.");
  DCONST_DVARINT_heartbeatSensorInitialSweepDelay = Dvar_RegisterInt("heartbeatSensorInitialSweepDelay", 1000, 1, 50000, 0x40004u, "The time in ms we will wait until the first sweep starts on the hearbeat sensor ( mainly to account for draw weapon animation time )");
  DCONST_DVARFLT_heartbeatSensorMaxPitchRange = Dvar_RegisterFloat("heartbeatSensorMaxPitchRange", 600.0, 0.0, 3.4028235e38, 0x40004u, "The distance over the pitch value of the pong is interpolated");
  DCONST_DVARFLT_heartbeatSensorPitchShiftValue = Dvar_RegisterFloat("heartbeatSensorPitchShiftValue", 2.0, 0.0, 3.4028235e38, 0x40004u, "The pitch value of the pong at closest range, interpolates between 2.0 -> 1.0 over enemy distance");
  DCONST_DVARFLT_heartbeatSensorEMPIconSize = Dvar_RegisterFloat("heartbeatSensorEMPIconSize", 44.0, 1.0, 300.0, 0x40004u, "The size of icons that appear on the EMP heartbeat sensor");
  DCONST_DVARFLT_heartbeatSensorEMPSweepRadius = Dvar_RegisterFloat("heartbeatSensorEMPSweepRadius", 260.0, 1.0, 10000.0, 0x40004u, "The max radius of the EMP sweep circle");
  DVARINT_heartbeatSensorEMPNextPingTime = Dvar_RegisterInt("NMPRQQMSNN", 1000, 1, 50000, 0, "Wait time between EMP radial pings");
  DCONST_DVARINT_heartbeatSensorEMPSweepDuration = Dvar_RegisterInt("heartbeatSensorEMPSweepDuration", 1000, 1, 50000, 0x40004u, "How long in ms it takes the EMP sweep to reach the sweep diameter");
  DCONST_DVARFLT_heartbeatSensorEMPFontScalar = Dvar_RegisterFloat("heartbeatSensorEMPFontScalar", 0.60000002, 0.1, 5.0, 0x40004u, "Scalar that changes the default font size");
  DCONST_DVARVEC2_heartbeatSensorEMPDistanceTextOffset = Dvar_RegisterVec2("heartbeatSensorEMPDistanceTextOffset", 0.5, 0.85000002, 0.0, 1.0, 0x40004u, "The offset for the distance in meters to the closest players. Offsets are scalars relative to element width and height, an offset of 0.5f in the x will be placed halfway along the width of the element");
  DCONST_DVARFLT_heartbeatSensorEMPRange = Dvar_RegisterFloat("heartbeatSensorEMPRange", 5500.0, 0.001, 3.4028235e38, 0x40004u, "The range from the player in world space that objects will be shown on the EMP before it is clamped");
  DVARFLT_heartbeatSensorEMPMaxDrawRange = Dvar_RegisterFloat("LQPMKKRNTQ", 5000.0, 0.0, 3.4028235e38, 0, "Anything past this difference will not be drawn");
  DCONST_DVARFLT_heartbeatSensorTabletIconSize = Dvar_RegisterFloat("heartbeatSensorTabletIconSize", 80.0, 1.0, 300.0, 0x40004u, "The size of icons that appear on the Tablet heartbeat sensor");
  DCONST_DVARFLT_heartbeatSensorTabletSweepRadius = Dvar_RegisterFloat("heartbeatSensorTabletSweepRadius", 550.0, 1.0, 10000.0, 0x40004u, "The max radius of the Tablet sweep circle");
  DVARINT_heartbeatSensorTabletNextPingTime = Dvar_RegisterInt("NSKNMSMOLP", 1000, 1, 50000, 0, "Wait time between Tablet radial pings");
  DCONST_DVARINT_heartbeatSensorTabletSweepDuration = Dvar_RegisterInt("heartbeatSensorTabletSweepDuration", 1000, 1, 50000, 0x40004u, "How long in ms it takes the Tablet sweep to reach the sweep diameter");
  DCONST_DVARFLT_heartbeatSensorTabletFontScalar = Dvar_RegisterFloat("heartbeatSensorTabletFontScalar", 1.2, 0.1, 5.0, 0x40004u, "Scalar that changes the default font size");
  DCONST_DVARVEC2_heartbeatSensorTabletDistanceTextOffset = Dvar_RegisterVec2("heartbeatSensorTabletDistanceTextOffset", 0.5, 0.80000001, 0.0, 1.0, 0x40004u, "The offset for the distance in meters to the closest players. Offsets are scalars relative to element width and height, an offset of 0.5f in the x will be placed halfway along the width of the element");
  DVARFLT_heartbeatSensorTabletRange = Dvar_RegisterFloat("NOQKLLMRO", 600.0, 0.001, 3.4028235e38, 0, "The range from the player in world space that objects will be shown on the heartbeat sensor tablet before it is clamped");
  DVARFLT_heartbeatSensorTabletMaxDrawRange = Dvar_RegisterFloat("NLLRSSOQMQ", 5000.0, 0.0, 3.4028235e38, 0, "Anything past this difference will not be drawn");
  DCONST_DVARVEC4_compassMainHUDColor = Dvar_RegisterVec4("compassMainHUDColor", 0.74299997, 0.79500002, 0.83399999, 1.0, 0.0, 1.0, 0x40004u, "Color to be used as the main hud color when rendering compass items");
  DCONST_DVARVEC4_compassMainHeadingColor = Dvar_RegisterVec4("compassMainHeadingColor", 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0x40004u, "Color to be used as the color when rendering main cardinal directions ( N,S,E,W ).");
  DCONST_DVARFLT_compassArrowOffset = Dvar_RegisterFloat("compassArrowOffset", 2.0, -100.0, 100.0, 0x40004u, "The vertical offset from the bottom of the compass navbar");
  DVARBOOL_compassShowAllEnemies = Dvar_RegisterBool("NOOMOKPQSN", 0, 0x44u, "When enabled, all enemies will be drawn on minimap without fade.");
  DVARBOOL_compassZoomEnabled = Dvar_RegisterBool("OKPKSNONLP", 0, 4u, "Set to true to enable the compass dynamic zoom feature.");
  DVARFLT_compassZoomMaxLevel = Dvar_RegisterFloat("RTLQNRRTQ", 0.5, 0.0099999998, 0.99000001, 0, "The maximum zoom applied to the compass. A lower number means a larger zoom.");
  DVARFLT_compassZoomSpeedFactor = Dvar_RegisterFloat("MTTRMPQTM", 0.1, 0.0099999998, 1.0, 0, "Controls the speed of the zoom lerp. A value of 1 means it will snap to the new zoom level.");
  DVARFLT_compassTacMapZoomMaxLevel = Dvar_RegisterFloat("OKOORPKNLK", 0.050000001, 0.050000001, 0.5, 0, "The maximum zoom applied to the Tac Map. A lower number means a larger zoom.");
  DVARFLT_compassTacMapZoomSpeedFactor = Dvar_RegisterFloat("LPMLSTLTK", 0.60000002, 0.0099999998, 10.0, 0, "Controls the speed of the zoom lerp.");
  DVARFLT_compassTacMapMouseZoomSpeedFactor = Dvar_RegisterFloat("LNTKPSKRLT", 1.5, 0.0099999998, 5.0, 0, "Controls the speed of the zoom lerp when using a mouse.");
  DVARFLT_compassClippedScaleMaxDistance = Dvar_RegisterFloat("LLMTMTSPQP", 150.0, 0.0099999998, 3.4028235e38, 0, "Distance to tween scale");
  DVARFLT_compassClippedScale = Dvar_RegisterFloat("QLKRMMPS", 0.5, 0.0, 3.4028235e38, 0, "Amount of scale to apply at max distance and beyond");
  DVARBOOL_compassEnableClippedScale = Dvar_RegisterBool("NMKKQOPKPL", 1, 0, "Enable scaling down of clipped minimap icons that are pinned");
  DVARBOOL_compassHideClippedFriendlies = Dvar_RegisterBool("SNLPLNKOR", 0, 0, "Hide friendlies on the minimap if they're clipped");
  DVARBOOL_compassEnableFOVScaledCone = Dvar_RegisterBool("OMLRNPNKO", 0, 0, "If we are we using a fov scalable cone so we know to scale the overlay image to the current players FOV");
  DVARBOOL_compassHideClippedNonSquad = Dvar_RegisterBool("LLMOTOSKTT", 1, 0, "Hide non-squad friendlies on the minimap if they're clipped");
  DVARFLT_compassVehicleHideEnemyDistance = Dvar_RegisterFloat("MORKQLLMNM", -1.0, -1.0, 3.4028235e38, 0, "The distance in map space to clip enemy enemy vehicles, -1 disables it");
  DCONST_DVARFLT_compass_stretch_max_fov_ADS = Dvar_RegisterFloat("compass_stretch_max_fov_ADS", 180.0, 10.0, 3.4028235e38, 0x40004u, "Maximum fov stretch applied to the compass in ADS");
  DCONST_DVARFLT_compass_stretch_min_fov_ADS = Dvar_RegisterFloat("compass_stretch_min_fov_ADS", 180.0, 10.0, 3.4028235e38, 0x40004u, "Minimum fov stretch applied to the compass in ADS");
  DCONST_DVARFLT_compass_stretch_max_fov_Hip = Dvar_RegisterFloat("compass_stretch_max_fov_Hip", 180.0, 10.0, 3.4028235e38, 0x40004u, "Maximum fov stretch applied to the compass when hip firing");
  DCONST_DVARFLT_compass_stretch_min_fov_Hip = Dvar_RegisterFloat("compass_stretch_min_fov_Hip", 180.0, 10.0, 3.4028235e38, 0x40004u, "Minimum fov stretch applied to the compass when hip firing");
  DVARFLT_compassBigMapVehicleScalePartial = Dvar_RegisterFloat("MKLTMTLMKM", 0.5, 0.0099999998, 2.0, 0, "How much a vehicle should be scaled up or down for large maps, viewing the partial map");
  DVARFLT_compassBigMapVehicleScaleFull = Dvar_RegisterFloat("SLSNOMTOM", 0.34999999, 0.0099999998, 2.0, 0, "How much a vehicle should be scaled up or down for large maps, viewing the full map");
  DVARFLT_compassBigMapClippedVehicleScale = Dvar_RegisterFloat("MRMTMQOOQQ", 0.34999999, 0.0, 3.4028235e38, 0, "Amount of scale to apply for vehicles at max distance and beyond on large maps");
  DVARFLT_compassTacMapVehicleScale = Dvar_RegisterFloat("MLPOMRKQTP", 0.30000001, 0.0099999998, 2.0, 0, "Amount of scale to apply for vehicle icons on a Tac Map for BR or CP.");
  DVARFLT_compassFullMapVehicleScale = Dvar_RegisterFloat("LLQRQPNLMQ", 0.60000002, 0.0099999998, 2.0, 0, "Amount of scale to apply for vehicle icons on a Full Map for CP.");
  DVARFLT_compassVehicleScalePartial = Dvar_RegisterFloat("NTMPKLMPNS", 0.85000002, 0.0099999998, 2.0, 0, "Amount of scale to apply for vehicle icons on the minimap for MP");
  DVARBOOL_compassEditSettingsEnabled = Dvar_RegisterBool("PQOOSLLST", 0, 4u, "Debug setting to enable live minimap edit");
  DVARFLT_compassEditSettingsHeight = Dvar_RegisterFloat("MMONNP", 0.0, 0.0, 3.4028235e38, 4u, "Live edit minimap height");
  DVARFLT_compassEditSettingsWidth = Dvar_RegisterFloat("SSONROMQM", 0.0, 0.0, 3.4028235e38, 4u, "Live edit minimap width");
  DVARFLT_compassEditSettingsZoom = Dvar_RegisterFloat("MOMMTNTLT", 0.0, 0.0, 1.0, 4u, "Live edit minimap zoom");
  DVARFLT_compassEditSettingsRotation = Dvar_RegisterFloat("RRPKSPRSK", 0.0, 0.0, 3.4028235e38, 4u, "Live edit minimap rotation");
  DVARFLT_compassEditSettingsOffsetX = Dvar_RegisterFloat("OLROLKKOLN", 0.0, -3.4028235e38, 3.4028235e38, 4u, "Live edit minimap offset x coordinate");
  DVARFLT_compassEditSettingsOffsetY = Dvar_RegisterFloat("MLKLOSKTSK", 0.0, -3.4028235e38, 3.4028235e38, 4u, "Live edit minimap offset y coordinate");
  DVARFLT_compassRoleIconScale = Dvar_RegisterFloat("TKLLLLOMQ", 0.75, 0.0099999998, 2.0, 0, "Amount of scale to apply for role icons on the minimap for CP Raid Security screen");
  DVARBOOL_isCompassCPRaidSecurityScreen = Dvar_RegisterBool("LQSSNPQOMO", 0, 0, "Is the compass system a cp_raid compass.");
  DVARBOOL_testCPRaidSecurityScreen = Dvar_RegisterBool("OKOQPMQQNM", 0, 0, "Force the security screen to display the cp_raid compass.");
  DVARINT_compassBRCirclePulseDuration = Dvar_RegisterInt("PPRTMPMQM", 800, 1, 50000, 0, "For pulsing BR Circle styles, this is the start/max duration that is split evenly when fading alpha 1->0->1");
  DVARINT_compassBRCircleMinPulseDuration = Dvar_RegisterInt("LKRMTKNKRQ", 200, 1, 50000, 0, "For pulsing BR Circle styles, this is the min duration that is split evenly when fading alpha 1->0->1");
  DVARINT_compassBRCircleTimeToMinPulse = Dvar_RegisterInt("NLKPRMLKRQ", 3000, 1, 50000, 0, "Time in ms when pulse duration will reach its minimum value");
  DVARINT_compassBRCirclePulseEaseType = Dvar_RegisterInt("NQOSLTOTO", 0, 0, 3, 0, "For pulsing BR Circle styles, EASE IN, 0: Sin, 1: Quad, 2: Cubic, 3: Quartic");
  DVARFLT_compassBRCirclePulseMinAlpha = Dvar_RegisterFloat("MMQPTRQNPS", 0.5, 0.0, 1.0, 0, "For pulsing BR Circle styles, minimum alpha reached when pulsing");
  DCONST_DVARFLT_compassTacmapIconAlphaOverride = Dvar_RegisterFloat("compassTacmapIconAlphaOverride", 0.89999998, 0.0, 1.0, 0x40004u, "Alpha for missions and vehicles on the tacmap");
  DCONST_DVARFLT_compassAreaCalloutsTextHeightScale = Dvar_RegisterFloat("compassAreaCalloutsTextHeightScale", 0.0265, 0.0, 1.0, 0x40004u, "This is a scale factor for the text size relative to the whole image");
  DCONST_DVARFLT_compassAreaCalloutsBackgroundSidePadding = Dvar_RegisterFloat("compassAreaCalloutsBackgroundSidePadding", 4.0, 0.0, 20.0, 0x40004u, "How many pixels to put around the side edges of the text for the background border");
  DCONST_DVARFLT_compassAreaCalloutsBackgroundTopPadding = Dvar_RegisterFloat("compassAreaCalloutsBackgroundTopPadding", 0.0, 0.0, 20.0, 0x40004u, "How many pixels to put around the top edge of the text for the background border");
  DCONST_DVARFLT_compassAreaCalloutsBackgroundBottomPadding = Dvar_RegisterFloat("compassAreaCalloutsBackgroundBottomPadding", 1.0, 0.0, 20.0, 0x40004u, "How many pixels to put around the bottom edge of the text for the background border");
  DCONST_DVARFLT_compassAreaCalloutsTextColorR = Dvar_RegisterFloat("compassAreaCalloutsTextColorR", 1.0, 0.0, 1.0, 0x40004u, "Color for callout text");
  DCONST_DVARFLT_compassAreaCalloutsTextColorG = Dvar_RegisterFloat("compassAreaCalloutsTextColorG", 1.0, 0.0, 1.0, 0x40004u, "Color for callout text");
  DCONST_DVARFLT_compassAreaCalloutsTextColorB = Dvar_RegisterFloat("compassAreaCalloutsTextColorB", 1.0, 0.0, 1.0, 0x40004u, "Color for callout text");
  DCONST_DVARFLT_compassAreaCalloutsTextColorA = Dvar_RegisterFloat("compassAreaCalloutsTextColorA", 1.0, 0.0, 1.0, 0x40004u, "Color for callout text");
  DCONST_DVARFLT_compassAreaCalloutsBGColorR = Dvar_RegisterFloat("compassAreaCalloutsBGColorR", 0.24699999, 0.0, 1.0, 0x40004u, "Color for callout background");
  DCONST_DVARFLT_compassAreaCalloutsBGColorG = Dvar_RegisterFloat("compassAreaCalloutsBGColorG", 0.24699999, 0.0, 1.0, 0x40004u, "Color for callout background");
  DCONST_DVARFLT_compassAreaCalloutsBGColorB = Dvar_RegisterFloat("compassAreaCalloutsBGColorB", 0.24699999, 0.0, 1.0, 0x40004u, "Color for callout background");
  DCONST_DVARFLT_compassAreaCalloutsBGColorA = Dvar_RegisterFloat("compassAreaCalloutsBGColorA", 0.60000002, 0.0, 1.0, 0x40004u, "Color for callout background");
  DCONST_DVARFLT_compassAreaCalloutsBackgroundAlpha = Dvar_RegisterFloat("compassAreaCalloutsBackgroundAlpha", 0.75, 0.0, 1.0, 0x40004u, "Alpha for callout background");
  DVARBOOL_compassRenderAdditionalHighResTiles = Dvar_RegisterBool("NNQSLKNPNP", 1, 0, "If this is true, we will render 5 additional high res tiles for all partial maps that have compass tiles > 1 to support higher range values in the compass");
  DVARBOOL_calloutmarkerping_enabled = Dvar_RegisterBool("LTLRPLPRQP", 1, 0, "If true, the system is enabled");
  DCONST_DVARBOOL_calloutmarkerping_use_prediction = Dvar_RegisterBool("calloutmarkerping_use_prediction", 1, 0x40004u, "If true, predictivly create pings on the client and only send them up to the server after double-tap is resolved");
  DCONST_DVARBOOL_calloutmarkerping_trace_hit_lethals = Dvar_RegisterBool("calloutmarkerping_trace_hit_lethals", 1, 0x40004u, "If true, single tap can pick claymores and other placed equipment");
  DCONST_DVARBOOL_calloutmarkerping_trace_hit_vehicles = Dvar_RegisterBool("calloutmarkerping_trace_hit_vehicles", 1, 0x40004u, "If true, single tap can find vehicles");
  DCONST_DVARBOOL_calloutmarkerping_trace_hit_enemies = Dvar_RegisterBool("calloutmarkerping_trace_hit_enemies", 1, 0x40004u, "If true, single tap can find enemies");
  DCONST_DVARBOOL_calloutmarkerping_trace_hit_doors = Dvar_RegisterBool("calloutmarkerping_trace_hit_doors", 1, 0x40004u, "If true, single tap can find doors");
  DCONST_DVARBOOL_calloutmarkerping_trace_hit_caches = Dvar_RegisterBool("calloutmarkerping_trace_hit_caches", 1, 0x40004u, "If true, single tap can find open caches");
  DCONST_DVARBOOL_calloutmarkerping_trace_hit_kiosks = Dvar_RegisterBool("calloutmarkerping_trace_hit_kiosks", 1, 0x40004u, "If true, single tap can find plunder kiosks");
  DCONST_DVARBOOL_calloutmarkerping_trace_hit_objectives = Dvar_RegisterBool("calloutmarkerping_trace_hit_objectives", 1, 0x40004u, "If true, single tap can find objective icons");
  DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_tablets = Dvar_RegisterBool("calloutmarkerping_tacmap_hit_tablets", 1, 0x40004u, "If true, clicking on the tacmap can find quest tablets");
  DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_kiosks = Dvar_RegisterBool("calloutmarkerping_tacmap_hit_kiosks", 1, 0x40004u, "If true, clicking on the tacmap can find plunder kiosks");
  DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_vehicles = Dvar_RegisterBool("calloutmarkerping_tacmap_hit_vehicles", 1, 0x40004u, "If true, clicking on the tacmap can find vehicles");
  DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_objectives = Dvar_RegisterBool("calloutmarkerping_tacmap_hit_objectives", 1, 0x40004u, "If true, clicking on the tacmap can find quest objectives (dom flag, etc)");
  DVARBOOL_calloutmarkerping_buybackEnabled = Dvar_RegisterBool("NKNRQKMKLM", 1, 0, "If true, the buyBack from kiosk is enabled");
  DVARBOOL_compassVehiclePingMarkersCustom = Dvar_RegisterBool("MSQPRTOTPT", 1, 0, "Use custom calloutMarkerPing icons for vehicles");
  DVARBOOL_calloutmarkerping_contextualPingDetectionEnabled = Dvar_RegisterBool("MLNNPLTRR", 1, 0, "Enables per frame update to detect what can be pinged every frame.");
  DVARBOOL_calloutmarkerping_useAABBBCollection = Dvar_RegisterBool("NMTRTPRNKR", 1, 0, "Use AABB collection instead of a sphere cast to improve performance at the time of pinging. Contextual ping always uses AABB.");
  DVARBOOL_calloutmarkerping_sightTraceContentsFix = Dvar_RegisterBool("NORPPNOSRN", 1, 0, "Use more appropriate content flags to determine line of sight to the target.");
  DVARBOOL_calloutmarkerping_enableLongRangeEnemyPing = Dvar_RegisterBool("NKTQSKMOSM", 1, 0, "Enables the long range enemy (players and vehicles) pinging.");
  DVARBOOL_calloutmarkerping_enabled_groundwar = Dvar_RegisterBool("NTKKMSQKMN", 0, 0, "If true, the system is enabled for ground war");
  DVARBOOL_calloutmarkerping_enabled_arena = Dvar_RegisterBool("OLMLQMOSRL", 0, 0, "If true, the system is enabled for gunfight / arena");
  DVARBOOL_calloutmarkerping_enabled_cp = Dvar_RegisterBool("LOPLPOKTOP", 0, 0, "If true, the system is enabled for cp");
  DCONST_DVARBOOL_calloutmarkerping_debug_log = Dvar_RegisterBool("calloutmarkerping_debug_log", 1, 0x40004u, "If true, enable logging of every new marker and it's trip up to the server and back");
  DCONST_DVARBOOL_calloutmarkerping_debug_trace = Dvar_RegisterBool("calloutmarkerping_debug_trace", 0, 0x40004u, "If true, all traces and their results will be drawn in 3D");
  DCONST_DVARINT_calloutmarkerping_debug_trace_duration = Dvar_RegisterInt("calloutmarkerping_debug_trace_duration", 100, 0, 800, 0x40004u, "Duration in client frames for debug lines to last");
  DCONST_DVARBOOL_calloutmarkerping_debug_contextualping = Dvar_RegisterBool("calloutmarkerping_debug_contextualping", 0, 0x40004u, "Debug draw for the contextual ping target");
  DCONST_DVARFLT_calloutmarkerping_trace_entity_distance = Dvar_RegisterFloat("calloutmarkerping_trace_entity_distance", 7000.0, 0.0, 10000.0, 0x40004u, "Distance that the ping trace can hit entities");
  DCONST_DVARFLT_calloutmarkerping_trace_entity_radius = Dvar_RegisterFloat("calloutmarkerping_trace_entity_radius", 66.0, 0.0, 10000.0, 0x40004u, "Radius that the ping trace can hit entities");
  DCONST_DVARFLT_calloutmarkerping_trace_tacmap_radius = Dvar_RegisterFloat("calloutmarkerping_trace_tacmap_radius", 0.029999999, 0.0, 1.0, 0x40004u, "Radius in 0-1 compass fractional space that the crosshair must be within a tacmap icon in order to ping it");
  DCONST_DVARFLT_calloutmarkerping_trace_tacmap_height = Dvar_RegisterFloat("calloutmarkerping_trace_tacmap_height", 5000.0, 0.0, 10000.0, 0x40004u, "Height from word zero that the tacmap trace begins");
  DCONST_DVARFLT_calloutmarkerping_trace_entity_mindot = Dvar_RegisterFloat("calloutmarkerping_trace_entity_mindot", 0.91000003, -1.0, 1.0, 0x40004u, "ArcCos of angle at which you can hit entities, 0.91 is +/- 25 degree arc");
  DCONST_DVARFLT_calloutmarkerping_trace_enemy_bias = Dvar_RegisterFloat("calloutmarkerping_trace_enemy_bias", 1.0, 0.0, 5.0, 0x40004u, "How much to bias enemies above other things when scoring entities with a single-tap");
  DCONST_DVARFLT_calloutmarkerping_lookat_ping_icon_dot = Dvar_RegisterFloat("calloutmarkerping_lookat_ping_icon_dot", 0.99949998, 0.0, 1.1, 0x40004u, "Minimum angle when pointing directly at the icon in order to send feedback (clear/confirm)");
  DCONST_DVARFLT_calloutmarkerping_lookat_ping_beam_dist = Dvar_RegisterFloat("calloutmarkerping_lookat_ping_beam_dist", 8.0, 0.0, 50.0, 0x40004u, "Minimum distance to the beam in order to send feedback");
  DCONST_DVARFLT_calloutmarkerping_lookat_objective_icon_dot = Dvar_RegisterFloat("calloutmarkerping_lookat_objective_icon_dot", 0.99910003, 0.0, 1.1, 0x40004u, "Minimum angle when pointing directly at the objective icon in order to ping it");
  DVARFLT_calloutmarkerping_longRangeEnemyPing = Dvar_RegisterFloat("MSSNLOQPRL", 15000.0, 0.0, 3.4028235e38, 0, "The distance used for the long range enemy ping.");
  DVARFLT_calloutmarkerping_trace_solid_distance = Dvar_RegisterFloat("NNKMTMLORP", 15000.0, 0.0, 3.4028235e38, 0, "Distance that the ping trace can hit solid geometry.");
  DVARFLT_compass_buyback_circle_moving_radius_pct = Dvar_RegisterFloat("NMTKLSKPPO", 0.89999998, 0.0, 1.0, 0, "Percentage of circle radius to consider when selecting a buyback station while circle is moving");
  DCONST_DVARINT_calloutmarkerping_double_tap_time = Dvar_RegisterInt("calloutmarkerping_double_tap_time", 350, 100, 1000, 0x40004u, "The time in milliseconds used to determine if a player double tapped the ping button.");
  DCONST_DVARINT_calloutmarkerping_prediction_timeout_time = Dvar_RegisterInt("calloutmarkerping_prediction_timeout_time", 5000, 100, 10000, 0x40004u, "The time in milliseconds used to determine if a predicted ping should be removed even if it hasn't been acked by the server.");
  DCONST_DVARINT_calloutmarkerping_prediction_debounce_time = Dvar_RegisterInt("calloutmarkerping_prediction_debounce_time", 100, 0, 10000, 0x40004u, "The time in milliseconds used to prevent additional messages if the player holds the button or spams it.");
  DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_basis = Dvar_RegisterFloat("scr_calloutmarkerping_iconpulse_basis", 0.80000001, 0.0, 3.0, 0x40004u, "Base size the icon increases by when cursor is over it");
  DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_amplitude = Dvar_RegisterFloat("scr_calloutmarkerping_iconpulse_amplitude", 0.02, 0.0, 3.0, 0x40004u, "Sin wave min/max, so total amplitude is 2x this");
  DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_frequency = Dvar_RegisterFloat("scr_calloutmarkerping_iconpulse_frequency", 200.0, 1.0, 3000.0, 0x40004u, "Frequency in milliseconds of the sin wave");
  _XMM12 = 0i64;
  DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_height = Dvar_RegisterFloat("scr_calloutmarkerping_tacmap_prompt_height", 7.0, 0.0, 50.0, 0x40004u, "Height in pixels of the font, width is computed from lenght of the localized string");
  DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_y = Dvar_RegisterFloat("scr_calloutmarkerping_tacmap_prompt_y", -13.0, -50.0, 50.0, 0x40004u, "Position relative to the icon for the ping prompt, negative means above, positive would be below");
  DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_y_elev = Dvar_RegisterFloat("scr_calloutmarkerping_tacmap_prompt_y_elev", -15.0, -50.0, 50.0, 0x40004u, "Position relative to the icon for the ping prompt, negative means above, positive would be below");
  DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_y_ping = Dvar_RegisterFloat("scr_calloutmarkerping_tacmap_prompt_y_ping", -15.0, -50.0, 50.0, 0x40004u, "Position relative to the icon for the ping prompt, negative means above, positive would be below");
  DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_pip_d = Dvar_RegisterFloat("scr_calloutmarkerping_tacmap_prompt_pip_d", 5.0, 0.0, 50.0, 0x40004u, "Diameter of the feedback pip");
  DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_pip_s = Dvar_RegisterFloat("scr_calloutmarkerping_tacmap_prompt_pip_s", 2.0, 0.0, 50.0, 0x40004u, "Space between the feedback pips");
  DCONST_DVARINT_bg_counterUAVStrengthLevelShowFriendlyOnly = Dvar_RegisterInt("bg_counterUAVStrengthLevelShowFriendlyOnly", 2, -100, 100, 0x40004u, "UAV level at which only friendlies are shown.");
  DCONST_DVARINT_bg_counterUAVStrengthLevelShowMapOnly = Dvar_RegisterInt("bg_counterUAVStrengthLevelShowMapOnly", 1, -100, 100, 0x40004u, "UAV level at which only the map is shown.");
  DCONST_DVARINT_bg_counterUAVStrengthLevelFullyJammed = Dvar_RegisterInt("bg_counterUAVStrengthLevelFullyJammed", 0, -100, 100, 0x40004u, "UAV level at which nothing is shown due to radar jamming.");
  DCONST_DVARFLT_bg_counterUAVRadarJamLevelShowFriendlyOnly = Dvar_RegisterFloat("bg_counterUAVRadarJamLevelShowFriendlyOnly", 0.30000001, 0.0, 1.0, 0x40004u, "The radar jam amount at bg_counterUAVStrengthLevelShowFriendlyOnly.");
  DCONST_DVARFLT_bg_counterUAVRadarJamLevelShowMapOnly = Dvar_RegisterFloat("bg_counterUAVRadarJamLevelShowMapOnly", 0.5, 0.0, 1.0, 0x40004u, "The radar jam amount at bg_ounterUAVStrengthLevelShowMapOnly.");
  DCONST_DVARFLT_bg_counterUAVRadarJamLevelFullyJammed = Dvar_RegisterFloat("bg_counterUAVRadarJamLevelFullyJammed", 1.0, 0.0, 1.0, 0x40004u, "The radar jam amount at bg_counterUAVStrengthLevelFullyJammed.");
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM0 = LODWORD(FLOAT_500_0);
  __asm { vblendvps xmm1, xmm0, xmm1, xmm2; value }
  DVARFLT_scramblerJamDistMin = Dvar_RegisterFloat("PRKMQROMO", *(float *)&_XMM1, 0.0, 3.4028235e38, 4u, "Linear scrambler minimum jam distance.");
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM0 = LODWORD(FLOAT_1000_0);
  __asm { vblendvps xmm1, xmm0, xmm1, xmm2; value }
  DVARFLT_scramblerJamDistMax = Dvar_RegisterFloat("RSOQLMNPK", *(float *)&_XMM1, 1.0, 3.4028235e38, 4u, "Linear scrambler maximum jam distance.");
  v75 = Com_GameMode_GetActiveGameMode();
  DVARBOOL_scramblerJamSinCurve = Dvar_RegisterBool("LTKONTMSON", v75 == 1, 4u, "Determines whether the linear scrambler jams linearly or sinusoidally");
  DVARFLT_scramblerJamDistLittle = Dvar_RegisterFloat("NTPSRTPSTK", 250.0, 0.0, 3.4028235e38, 4u, "Effective jam distance for the 'little' scrambler.");
  DVARFLT_scramblerJamDistMedium = Dvar_RegisterFloat("LMTTLKKRMN", 500.0, 0.0, 3.4028235e38, 4u, "Effective jam distance for the 'medium' scrambler.");
  DVARFLT_scramblerJamDistLarge = Dvar_RegisterFloat("SKLRTTOON", 1000.0, 0.0, 3.4028235e38, 4u, "Effective jam distance for the 'large' scrambler.");
  DVARFLT_scramblerJamCompassLittle = Dvar_RegisterFloat("QMONTNNM", 25.0, 0.0, 3.4028235e38, 4u, "Visual jam distance for the 'little' scrambler.");
  DVARFLT_scramblerJamCompassMedium = Dvar_RegisterFloat("NLRLNPOSNR", 50.0, 0.0, 3.4028235e38, 4u, "Visual jam distance for the 'medium' scrambler.");
  DVARFLT_scramblerJamCompassLarge = Dvar_RegisterFloat("LNNTTQMLRN", 100.0, 0.0, 3.4028235e38, 4u, "Visual jam distance for the 'large' scrambler.");
  DVARFLT_scramblerJamCompassLinear = Dvar_RegisterFloat("LTTRPPQMKT", 40.0, 0.0, 3.4028235e38, 4u, "Visual jam distance for the default linear scrambler.");
  DCONST_DVARFLT_cg_teammate_firing_threshold = Dvar_RegisterFloat("cg_teammate_firing_threshold", 0.85000002, 0.0, 1.0, 0x40004u, "The alpha threshold at which we consider a teammate to be in a boolean firing/not firing state for lua data binds.");
  v76 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v76 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_veh_boneTargetTrackLerpRate = Dvar_RegisterFloat("QTTLNNLPM", 5.0, 0.0, 3.4028235e38, v76, "Rate at which vehicle turrets track a locked target.");
  v77 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v77 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_veh_boneTargetTrackResetLerpRate = Dvar_RegisterFloat("MQRMRNKPR", 1.0, 0.0, 3.4028235e38, v77, "Rate at which vehicle turrets reset to default position after tracking a locked target.");
  v78 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v78 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_veh_boneTargetTrackLocalScale = Dvar_RegisterFloat("QLNKQKLMO", 0.5, 0.0, 3.4028235e38, v78, "Scale applied to turret motion when the vehicle is under local player's control.");
  DCONST_DVARFLT_aim_turret_align_start_angle = Dvar_RegisterFloat("aim_turret_align_start_angle", 2.0, 0.0, 90.0, 0x40004u, "The barrel starts to turn towards the turret body when the angle between the view and the turret body is less than or equal to this.");
  DCONST_DVARFLT_remote_turret_pitch_addition = Dvar_RegisterFloat("remote_turret_pitch_addition", 0.5, 0.0, 10.0, 0x40004u, "The scale of pitch inherited on the camera from the linked turret movement.");
  DCONST_DVARFLT_remote_turret_yaw_addition = Dvar_RegisterFloat("remote_turret_yaw_addition", 0.0, 0.0, 10.0, 0x40004u, "The scale of yaw inherited on the camera from the linked turret movement.");
  DCONST_DVARFLT_veh_minAllowedWheelFrac = Dvar_RegisterFloat("veh_minAllowedWheelFrac", 0.5, 0.0, 1.0, 0x40004u, "Minimum wheel fraction raycast allowed");
  DVARFLT_cg_revPriority_distanceMax = Dvar_RegisterFloat("OLRKLMKTST", 10000.0, 1.0, 3.4028235e38, 4u, "Vehicles outside of this distance to the local player will not play audio.");
  DCONST_DVARBOOL_cg_vehicleCullingPriorities = Dvar_RegisterBool("cg_vehicleCullingPriorities", 1, 0x40004u, "Enable culling vehicle priorities.");
  DCONST_DVARINT_cg_vehicleSoundCount = Dvar_RegisterInt("cg_vehicleSoundCount", 10, 0, 128, 0x40004u, "Number of closed vihecle to play sound.");
  DVARBOOL_cg_vehicleSpectateEntityOrderFixActive = Dvar_RegisterBool("MNLMMSSLML", 1, 0, "If true, vehicle-related entities are _not_ delayed post-playerState while spectating.");
  DVARBOOL_vehCam_freeLook = Dvar_RegisterBool("OKKSSOKQML", 0, 4u, "Enables free look mode");
  DVARVEC3_vehCam_angles = Dvar_RegisterVec3("MOTQKOSKRM", 0.0, 0.0, 0.0, -180.0, 180.0, 0x44u, "Camera angles from vehicle");
  DVARVEC3_vehCam_offset = Dvar_RegisterVec3("NOLORMOSTT", 0.0, 0.0, 0.0, -1000.0, 1000.0, 0x44u, "Focus offset from vehicle origin");
  DVARFLT_vehCam_radius = Dvar_RegisterFloat("LSRTTOSTTO", 0.0, 0.0, 1000.0, 0x44u, "Camera radius from vehicle");
  DVARFLT_vehCam_speedInfluence = Dvar_RegisterFloat("LTQOSONPNM", 0.0, 0.0, 0.5, 0x44u, "Controls how much the vehicle's speed effects the camera.");
  DVARFLT_vehCam_pitchTurnRate = Dvar_RegisterFloat("PSPSOQSRL", 90.0, 0.0, 360.0, 0x44u, "Pitch turn rate for user adjustment");
  DVARFLT_vehCam_pitchClamp = Dvar_RegisterFloat("TSPOOOTSN", 15.0, 0.0, 180.0, 0x44u, "Pitch clamp for user adjustment");
  DVARFLT_vehCam_yawTurnRate = Dvar_RegisterFloat("MNOOLPRSQ", 260.0, 0.0, 360.0, 0x44u, "Yaw turn rate for user adjustment");
  DVARFLT_vehCam_yawClamp = Dvar_RegisterFloat("NOTTPKOLQQ", 45.0, 0.0, 180.0, 0x44u, "Yaw clamp for user adjustment");
  DVARINT_vehCam_zOffsetMode = Dvar_RegisterEnum("NRNNSORPTK", zOffsetModeNames, 1, 0x44u, "Camera offset mode for Z axis");
  DVARVEC3_vehCam_angles3P = Dvar_RegisterVec3("LNMTSOMSSR", 4.0, 0.0, 0.0, -180.0, 180.0, 0x44u, "Camera angles from vehicle (3rd person)");
  DVARVEC3_vehCam_offset3P = Dvar_RegisterVec3("NNONTTTMTM", 0.0, 0.0, 78.0, -1000.0, 1000.0, 0x44u, "Focus offset from vehicle origin (3rd person)");
  DVARFLT_vehCam_radius3P = Dvar_RegisterFloat("NQMKORNRPR", 160.0, 0.0, 1000.0, 0x44u, "Camera radius from vehicle (3rd person)");
  DVARFLT_vehCam_speedInfluence3P = Dvar_RegisterFloat("LRSQPTMON", 0.050000001, 0.0, 0.5, 0x44u, "Controls how much the vehicle's speed effects the camera. (3rd person)");
  DVARFLT_vehCam_pitchTurnRate3P = Dvar_RegisterFloat("OMSSNSLNQK", 90.0, 0.0, 360.0, 0x44u, "Pitch turn rate for user adjustment (3rd person)");
  DVARFLT_vehCam_pitchClamp3P = Dvar_RegisterFloat("NRRSPTSTTM", 12.0, 0.0, 180.0, 0x44u, "Pitch clamp for user adjustment (3rd person)");
  DVARINT_vehCam_zOffsetMode3P = Dvar_RegisterEnum("RTMLTLLQT", zOffsetModeNames, 2, 0x44u, "Camera offset mode for Z axis (3rd person)");
  DVARFLT_vehCam_yawTurnRate3P = Dvar_RegisterFloat("LNMSMQONPR", 160.0, 0.0, 360.0, 0x44u, "Yaw turn rate for user adjustment (3rd person)");
  DVARFLT_vehCam_yawClamp3P = Dvar_RegisterFloat("SSSPPKPTN", 90.0, 0.0, 180.0, 0x44u, "Yaw clamp for user adjustment (3rd person)");
  DVARFLT_vehAudio_inAirPitchUpLerp = Dvar_RegisterFloat("NMKNSMKMTO", 0.75, 0.0, 2.0, 4u, "Rate at which the pitch lerps up");
  DVARFLT_vehAudio_inAirPitchDownLerp = Dvar_RegisterFloat("MPLKOPSSNN", 1.2, 0.0, 2.0, 4u, "Rate at which the pitch lerps down");
  DVARFLT_vehAudio_spawnVolumeTime = Dvar_RegisterFloat("MQOOLQLLPN", 2.0, 0.0, 30.0, 0x44u, "Seconds it takes for spawned vehicles to reach full volume.");
  DVARFLT_vehAudio_idleDistanceScale = Dvar_RegisterFloat("OLKOOMKSMK", 2.0, 1.0, 10.0, 0, "When vehicles are idle and not occupied by the local client, multiply their audibility distance by this value.");
  DCONST_DVARVEC3_vehAudio_remoteClientLocalRotorOffset = Dvar_RegisterVec3("vehAudio_remoteClientLocalRotorOffset", -190.0, 0.0, 0.0, -3.4028235e38, 3.4028235e38, 0x40004u, "Rotor offset from the origin of the helicopter");
  DCONST_DVARFLT_dynEnt_bulletForce = Dvar_RegisterFloat("dynEnt_bulletForce", 64.0, 0.0, 3.4028235e38, 0x40004u, "Force applied from bullet hit");
  DCONST_DVARFLT_dynEnt_fixedMemoryShutdownThreshold = Dvar_RegisterFloat("dynEnt_fixedMemoryShutdownThreshold", 0.60000002, 0.0, 1.0, 0x40004u, "The fixed memory pool proportion at which we start decreasing the clustered ents size");
  DCONST_DVARFLT_dynEnt_fixedMemoryShutdownThreshold2 = Dvar_RegisterFloat("dynEnt_fixedMemoryShutdownThreshold2", 0.89999998, 0.0, 1.0, 0x40004u, "The fixed memory pool proportion at which we no longer use dynents");
  DVARINT_dynEnt_spatialMaxEnts = Dvar_RegisterInt("LRTTMPMQOO", 600, 0, 2000, 0x44u, "Maximum number of total common clutter dynents to be added around the player.");
  DVARINT_dynEnt_spatialMaxOccluderEnts = Dvar_RegisterInt("QRKSSMPR", 600, 0, 600, 0x44u, "Maximum number of sparse occluder dynents to be added around the player.");
  DCONST_DVARBOOL_dynEnt_spatialEnabled = Dvar_RegisterBool("dynEnt_spatialEnabled", 1, 0x40004u, "Enable DynEnt spatial partitioning");
  DCONST_DVARBOOL_dynEnt_spatialIteratorEnabled = Dvar_RegisterBool("dynEnt_spatialIteratorEnabled", 1, 0x40004u, "Enable DynEnt spatial partitioning iterator");
  DVARINT_dynEnt_spatialMaxEntsLowPrio = Dvar_RegisterInt("NTQKQKNRPQ", 600, 0, 2000, 0x44u, "Maximum number of low priority common clutter dynents that can be active.");
  DVARINT_dynEnt_spatialMaxEntsHighPrio = Dvar_RegisterInt("RKTKKSMM", 600, 0, 2000, 0x44u, "Maximum number of high priority common clutter dynents that can be active.");
  DCONST_DVARFLT_dynEnt_spatialMaxDistanceLowPrio = Dvar_RegisterFloat("dynEnt_spatialMaxDistanceLowPrio", 5000.0, 0.0, 100000.0, 0x40004u, "Maximum distance to low priority common clutter dynents will be activated at.");
  DCONST_DVARFLT_dynEnt_spatialMaxDistanceHighPrio = Dvar_RegisterFloat("dynEnt_spatialMaxDistanceHighPrio", 5000.0, 0.0, 100000.0, 0x40004u, "Maximum distance to high priority common clutter dynents will be activated at.");
  DCONST_DVARFLT_dynEnt_spatialMaxDistanceSparseOccluder = Dvar_RegisterFloat("dynEnt_spatialMaxDistanceSparseOccluder", 15000.0, 0.0, 100000.0, 0x40004u, "Maximum distance to sparse occluder dynents will be activated at.");
  DCONST_DVARFLT_dynEnt_spatialViewBasedStartDistance = Dvar_RegisterFloat("dynEnt_spatialViewBasedStartDistance", 5000.0, 0.0, 100000.0, 0x40004u, "DynEnts farther away than this distance but less than maxDistance will only be activated if in fov.");
  DCONST_DVARINT_dynEnt_spatialMaxAddPerFrame = Dvar_RegisterInt("dynEnt_spatialMaxAddPerFrame", 10, 1, 100000, 0x40004u, "Maximum number of common clutter DynEnts to activate per frame.");
  DCONST_DVARINT_dynEnt_spatialMaxRemovePerFrame = Dvar_RegisterInt("dynEnt_spatialMaxRemovePerFrame", 10, 1, 100000, 0x40004u, "Maximum number of common clutter DynEnts to deactivate per frame.");
  DCONST_DVARINT_dynEnt_spatialMaxAddSparseOccluderPerFrame = Dvar_RegisterInt("dynEnt_spatialMaxAddSparseOccluderPerFrame", 10, 1, 100000, 0x40004u, "Maximum number of sparse occluder DynEnts to activate per frame.");
  DCONST_DVARINT_dynEnt_spatialMaxRemoveSparseOccluderPerFrame = Dvar_RegisterInt("dynEnt_spatialMaxRemoveSparseOccluderPerFrame", 10, 1, 100000, 0x40004u, "Maximum number of sparse occluder DynEnts to deactivate per frame.");
  DCONST_DVARFLT_dynEnt_spatialSparseOccluderCollisionActivationDistance = Dvar_RegisterFloat("dynEnt_spatialSparseOccluderCollisionActivationDistance", 3000.0, 0.0, 100000.0, 0x40004u, "Try to only activate collisions on sparse occluders within this distance. Collisions will be activated with visibility when this is >= dynEnt_spatialMaxDistanceSparseOccluder.");
  DVARBOOL_dynEnt_debugFreezeCamera = Dvar_RegisterBool("MMRPQNQNSL", 0, 5u, "Freeze camera position");
  DVARINT_dynEnt_debugDisplayOffsetX = Dvar_RegisterInt("LSPLLSROLQ", 0, -500, 500, 4u, "Move the DynEnt Debug Display in the X direction");
  DVARINT_dynEnt_debugDisplayOffsetY = Dvar_RegisterInt("NTMNSKQSOT", 0, -5000, 500, 4u, "Move the DynEnt Debug Display in the Y direction");
  DVARBOOL_dynEnt_debugDump = Dvar_RegisterBool("SSTRQNOLT", 0, 5u, "Dump Dynent devgui output to TTY");
  DVARINT_dynEnt_debugSummary = Dvar_RegisterEnum("MMPKPSSRLP", dynEnt_DebugSectionNames, 0, 4u, "Show dynEnt system summary usage");
  DVARINT_dynEnt_debugWorld = Dvar_RegisterEnum("MOPLMNOPML", dynEnt_DebugSectionNames, 0, 4u, "Show the entities for a dynEnt world");
  DVARINT_dynEnt_debugModelId = Dvar_RegisterInt("NPPRQSSRML", -1, -1, 805306366, 4u, "Show details about a selected Model Based DynEnt");
  DVARINT_dynEnt_debugBrushId = Dvar_RegisterInt("LKPNPKKTSS", -1, -1, 805306366, 4u, "Show details about a selected Brush Based DynEnt");
  DVARBOOL_dynEnt_debugTransients = Dvar_RegisterBool("MLSPMQSPPM", 0, 4u, "Show details about transient Dynents");
  DVARBOOL_dynEnt_debugWarped = Dvar_RegisterBool("MKTOSTRPRO", 0, 4u, "Show details about warped linked DynEnts");
  DVARBOOL_dynEnt_debugDynentShapes = Dvar_RegisterBool("TNKORMPKN", 0, 4u, "Debug Dynent Physics Shapes");
  DVARBOOL_dynEnt_debugDynentBodyBoneCounts = Dvar_RegisterBool("LQOSNTSNRR", 0, 4u, "Debug Dynent Bone and Body counts");
  DVARBOOL_dynEnt_debugMaxCollisionCacheCount = Dvar_RegisterBool("MMRRQNOQNS", 0, 4u, "Debug Dynent Collision Cache counts");
  DVARINT_dynEnt_debugMaxCollisionCacheCountThreshold = Dvar_RegisterInt("MNSSSTPR", 6, 0, 100000, 4u, "Threshold for dynEnt_debugMaxCollisionCacheCount");
  DVARBOOL_dynEnt_debugSpawnDepth = Dvar_RegisterBool("NNNNMRSNPN", 0, 4u, "Debug Dynent Spawn penetration depth");
  DVARFLT_dynEnt_debugSpawnDepthThreshold = Dvar_RegisterFloat("LPNSMQRSPO", 1.0, 0.0, 100.0, 4u, "Threshold for dynEnt_debugSpawnDepth");
  DVARINT_dynEnt_debugSpatialPopulation = Dvar_RegisterEnum("LLPPPQPRSM", dynEnt_DebugSpatialPopulationNames, 0, 4u, "Which dynEnt spatial population to use for debug drawing.");
  DVARBOOL_dynEnt_debugDrawSpatialWorld = Dvar_RegisterBool("LMORNMORSN", 0, 4u, "Debug draw Dynent spatial information in world");
  DVARINT_dynEnt_debugDrawSpatialOverlay = Dvar_RegisterEnum("OQOOSQLLT", dynEnt_DebugSpatialOverlayNames, 0, 4u, "Debug draw Dynent spatial information in 2D overlay");
  DVARFLT_dynEnt_debugDrawSpatialOverlayZoom = Dvar_RegisterFloat("NNSPLMQKMK", 5000.0, 0.0, 50000.0, 4u, "Dynent spatial overlay zoom world size (lower is more zoomed in)");
  DVARFLT_hud_flash_time_offhand = Dvar_RegisterFloat("LOTNRMLLPS", 2.0, 0.0, 30.0, 0, "Offhand weapons flash duration on changing weapon");
  DVARFLT_hud_flash_period_offhand = Dvar_RegisterFloat("LRMNSLSMNK", 0.5, 0.0, 30.0, 0, "Offhand weapons flash period on changing weapon");
  DVARBOOL_actionSlotsHide = Dvar_RegisterBool("MNRKKQLQPQ", 0, 0x40u, "Hide the actionslots.");
  DVARCLR_lowAmmoWarningColor1 = Dvar_RegisterColor("RQLRLQTKL", 0.69999999, 0.69999999, 0.69999999, 0.80000001, 0, "Color 1 of 2 to oscilate between");
  DVARCLR_lowAmmoWarningColor2 = Dvar_RegisterColor("MSNONNQNNO", 1.0, 1.0, 1.0, 1.0, 0, "Color 2 of 2 to oscilate between");
  DVARFLT_lowAmmoWarningPulseFreq = Dvar_RegisterFloat("LLLORKNRTO", 2.3, 0.0, 3.4028235e38, 0, "Frequency of the pulse (oscilation between the 2 colors)");
  DVARFLT_lowAmmoWarningPulseMax = Dvar_RegisterFloat("OPQLOSSLO", 1.5, 0.0, 3.4028235e38, 0, "Min of oscilation range: 0 is color1 and 1.0 is color2.  Can be < 0, and the wave will clip at 0.");
  DVARFLT_lowAmmoWarningPulseMin = Dvar_RegisterFloat("MLOLLLQNKO", 0.0, -3.4028235e38, 1.0, 0, "Max of oscilation range: 0 is color1 and 1.0 is color2.  Can be > 1.0, and the wave will clip at 1.0.");
  DVARCLR_lowAmmoWarningNoReloadColor1 = Dvar_RegisterColor("MLPTTLSRKP", 0.69999999, 0.69999999, 0.30000001, 0.69999999, 0, "Like lowAmmoWarningColor1, but when no ammo to reload with.");
  DVARCLR_lowAmmoWarningNoReloadColor2 = Dvar_RegisterColor("OMNMPNSLNS", 0.69999999, 0.69999999, 0.30000001, 1.0, 0, "lowAmmoWarningColor2, but when no ammo to reload with.");
  DVARCLR_lowAmmoWarningNoAmmoColor1 = Dvar_RegisterColor("MLKRMNMOSM", 0.80000001, 0.25, 0.30000001, 0.80000001, 0, "Like lowAmmoWarningColor1, but when no ammo.");
  DVARCLR_lowAmmoWarningNoAmmoColor2 = Dvar_RegisterColor("NOQLNKOT", 1.0, 0.25, 0.30000001, 1.0, 0, "lowAmmoWarningColor2, but when no ammo.");
  DCONST_DVARINT_visionSetKillcamEntBlendDuration = Dvar_RegisterInt("visionSetKillcamEntBlendDuration", 150, 0, 10000, 0x40004u, "Duration of visionset blend out when transitioning from player view to killcam entity.");
  DVARBOOL_waypointDebugDraw = Dvar_RegisterBool("MLLRNRMPNP", 0, 0, (const char *)&queryFormat.fmt + 3);
  DVARFLT_waypointIconWidth = Dvar_RegisterFloat("MTLOKKQKMN", 36.0, 1.1754944e-38, 3.4028235e38, 0x44u, "Width of the offscreen pointer.");
  DVARFLT_waypointIconHeight = Dvar_RegisterFloat("MSKPRTTKPK", 36.0, 1.1754944e-38, 3.4028235e38, 0x44u, "Height of the offscreen pointer.");
  DVARFLT_waypointOffscreenPointerWidth = Dvar_RegisterFloat("MOTRNMTRKS", 25.0, 1.1754944e-38, 3.4028235e38, 0, "Width of the offscreen pointer.");
  DVARFLT_waypointOffscreenPointerHeight = Dvar_RegisterFloat("STSSSLOQT", 12.0, 1.1754944e-38, 3.4028235e38, 0, "Height of the offscreen pointer.");
  DVARFLT_waypointOffscreenPointerDistance = Dvar_RegisterFloat("OOSKKKNOP", 20.0, 1.1754944e-38, 3.4028235e38, 0, "Distance from the center of the offscreen objective icon to the center its arrow.");
  DVARFLT_waypointOffscreenDistanceThresholdAlpha = Dvar_RegisterFloat("NKMOPMMNQP", 30.0, 0.0, 3.4028235e38, 0, "Distance from the threshold over which offscreen objective icons lerp their alpha.");
  _XMM11 = LODWORD(FLOAT_15_0);
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm11, xmm1, xmm2; value
  }
  DVARFLT_waypointOffscreenPadLeft = Dvar_RegisterFloat("NRRMTSLKNT", *(float *)&_XMM1, 0.0, 3.4028235e38, 0, "Offset from the edge.");
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm11, xmm12, xmm2; value
  }
  DVARFLT_waypointOffscreenPadRight = Dvar_RegisterFloat("NLSOONOQOK", *(float *)&_XMM1, 0.0, 3.4028235e38, 0, "Offset from the edge.");
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm11, xmm12, xmm2; value
  }
  DVARFLT_waypointOffscreenPadTop = Dvar_RegisterFloat("NOMMOQKSMR", *(float *)&_XMM1, 0.0, 3.4028235e38, 0, "Offset from the edge.");
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm11, xmm8, xmm2; value
  }
  DVARFLT_waypointOffscreenPadBottom = Dvar_RegisterFloat("LLMSOTSQSR", *(float *)&_XMM1, 0.0, 3.4028235e38, 0, "Offset from the edge.");
  DVARBOOL_waypointOffscreenRoundedCorners = Dvar_RegisterBool("MOMPTQROTO", 1, 0, "Off-screen icons take rounded corners when true.  90-degree corners when false.");
  DVARFLT_waypointOffscreenCornerRadius = Dvar_RegisterFloat("RKMLSNPOQ", 105.0, 0.0, 3.4028235e38, 0, "Size of the rounded corners.");
  DVARFLT_waypointOffscreenScaleLength = Dvar_RegisterFloat("LMSRPLTONR", 500.0, 1.1754944e-38, 3.4028235e38, 0, "How far the offscreen icon scale travels from full to smallest scale.");
  DVARFLT_waypointOffscreenScaleSmallest = Dvar_RegisterFloat("NQKMMQKSLQ", 1.0, 0.0, 3.4028235e38, 0, "Smallest scale that the offscreen effect uses.");
  DVARFLT_waypointDistScaleRangeMin = Dvar_RegisterFloat("OKRTRKKRMP", 1000.0, 0.0, 3.4028235e38, 0, "Distance from player that icon distance scaling starts.");
  DVARFLT_waypointDistScaleRangeMax = Dvar_RegisterFloat("LLRKMOOKPT", 3000.0, 0.0, 3.4028235e38, 0, "Distance from player that icon distance scaling ends.");
  DVARFLT_waypointDistScaleSmallest = Dvar_RegisterFloat("LOONOPPPNR", 0.80000001, 0.0, 3.4028235e38, 0, "Smallest scale that the distance effect uses.");
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_1_4);
  __asm { vblendvps xmm1, xmm1, xmm2, xmm3; value }
  DVARFLT_waypointSplitscreenScale = Dvar_RegisterFloat("LOMLKMNNKS", *(float *)&_XMM1, 0.1, 3.4028235e38, 0, "Scale applied to waypoint icons in splitscreen views.");
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm12, xmm0, xmm2; value
  }
  DVARFLT_waypointScreenCenterFadeRadius = Dvar_RegisterFloat("MTTNTNMPLL", *(float *)&_XMM1, 0.0, 2000.0, 0, "Radius from screen center that a waypoint will start fading out. Setting to 0 will turn this off");
  DVARFLT_waypointScreenCenterFadeAdsMin = Dvar_RegisterFloat("LSNLMOQNRT", 0.0, 0.0, 1.0, 0, "When 'waypointScreenCenterFadeRadius' enabled, minimum amount that waypoint will fade when in ads");
  DVARFLT_waypointScreenCenterFadeHipMin = Dvar_RegisterFloat("NLPOMMTMTM", 0.2, 0.0, 1.0, 0, "When 'waypointScreenCenterFadeRadius' enabled, minimum amount that waypoint will fade when in hip (non-ads)");
  DVARFLT_waypointTweakY = Dvar_RegisterFloat("NNLSNQRLT", -17.0, -3.4028235e38, 3.4028235e38, 0x44u, (const char *)&queryFormat.fmt + 3);
  DVARFLT_hudElemPausedBrightness = Dvar_RegisterFloat("MSOSMKOSNO", 0.40000001, 0.0, 1.0, 4u, "Brightness of the hudelems when the game is paused.");
  DVARFLT_waypointPlayerOffsetProne = Dvar_RegisterFloat("NNTKMTSPLO", 30.0, 0.0, 3.4028235e38, 4u, "For waypoints pointing to players, how high to offset off of their origin when they are prone.");
  DVARFLT_waypointPlayerOffsetCrouch = Dvar_RegisterFloat("LRLTNMQOKK", 56.0, 0.0, 3.4028235e38, 4u, "For waypoints pointing to players, how high to offset off of their origin when they are crouching.");
  DVARFLT_waypointPlayerOffsetStand = Dvar_RegisterFloat("MONNPPSQPQ", 66.0, 0.0, 3.4028235e38, 4u, "For waypoints pointing to players, how high to offset off of their origin when they are standing.");
  DVARFLT_objectiveFontSize = Dvar_RegisterFloat("LPPTLMKOS", 0.25, 0.0099999998, 3.4028235e38, 0x44u, "Onscreen Objective Pointer - Fontsize of the icon's text.");
  DVARFLT_objectiveTextOffsetY = Dvar_RegisterFloat("LPSLTNTSTL", -5.3299999, -3.4028235e38, 3.4028235e38, 4u, "Onscreen Objective Pointer - Offset of the icon's text.");
  DVARFLT_objectiveFadeTooFar = Dvar_RegisterFloat("MTNNKMQLLR", 25.0, 1.1754944e-38, 3.4028235e38, 0x44u, "Onscreen Objective Pointer - Will not fade out if target ent is farther than this.");
  DVARFLT_objectiveFadeTooClose = Dvar_RegisterFloat("LNQOPLRTPK", 0.1, 1.1754944e-38, 3.4028235e38, 4u, "Onscreen Objective Pointer - Will not fade back in if target ent is closer than this.");
  DVARFLT_objectiveFadeTimeGoingOn = Dvar_RegisterFloat("LLOSTRPM", 1.0, 1.1754944e-38, 3.4028235e38, 4u, "Onscreen Objective Pointer - How long to take to fade back in.");
  DVARFLT_objectiveFadeTimeGoingOff = Dvar_RegisterFloat("MSTLQMMONS", 0.5, 1.1754944e-38, 3.4028235e38, 4u, "Onscreen Objective Pointer - How long to take to fade out.");
  DVARFLT_objectiveFadeTimeWaitOn = Dvar_RegisterFloat("MKPQSTROLT", 2.0, 1.1754944e-38, 3.4028235e38, 0x44u, "Onscreen Objective Pointer - How long to wait before turning back on, when appropriate.");
  DVARFLT_objectiveFadeTimeWaitOff = Dvar_RegisterFloat("OKLSKPOTOP", 2.0, 1.1754944e-38, 3.4028235e38, 0x44u, "Onscreen Objective Pointer - How long to wait before turning off, when appropriate.");
  DVARBOOL_objectiveHide = Dvar_RegisterBool("STNLLNSMQ", 0, 0x44u, "When enabled, objectives will not show.");
  DVARINT_objectiveGlobalFadeState = Dvar_RegisterInt("NTPKMKKQPQ", -1, -1, 3, 0x40u, "Overrides all current objective fade states when not -1.  0 = On, 1 = Off, 2 = Fading On, 3 = Fading Off");
  DVARBOOL_laserForceOn = Dvar_RegisterBool("NSKKPKOLNQ", 0, 4u, "Force laser sights on in all possible places (for debug purposes).");
  DVARBOOL_laserDebug = Dvar_RegisterBool("MPONLOSTOP", 0, 4u, "Enables the display of various debug info.");
  DVARBOOL_laserDebugWhizbyPos = Dvar_RegisterBool("MPSPQSOLSM", 0, 4u, "Draw the whizby position");
  DVARINT_laserMaxInterpolationTime = Dvar_RegisterInt("MTOMPONOTT", 120, 20, 500, 4u, "The higher this number, the smoother the laser. The lower this number, the more accurate the laser. (millisecs)");
  DVARFLT_laserLockEyeOffset = Dvar_RegisterFloat("LOQKPKKSON", -1.3, -60.0, 60.0, 4u, "Distance from player's eye to lock the laser when locked onto target.");
  DVARFLT_laserAdsFraction = Dvar_RegisterFloat("LMMNLSQQNQ", 0.000099999997, 0.000099999997, 1.0, 4u, "The ADS fraction laser is turned on when ADSLaserEnabled flag is set to true in the attachment laser settings.");
  DVARFLT_laserHipFraction = Dvar_RegisterFloat("LRNLPRTKLP", 0.5, 0.000099999997, 1.0, 4u, "The ADS fraction laser is turned on when HipLaserEnabled flag is set to true in the attachment laser settings.");
  DCONST_DVARFLT_cg_silencedWeaponPingRangeSquared = Dvar_RegisterFloat("cg_silencedWeaponPingRangeSquared", 0.0, 0.0, 3.4028235e38, 0x40004u, "Square of the range at which the firing of a silenced weapon will ping on the compass.");
  DCONST_DVARFLT_hudWhizbyDistance = Dvar_RegisterFloat("hudWhizbyDistance", 80.0, 1.0, 1000.0, 0x40004u, "The distance in inches a bullet has to be near you for the whizby indicator to be active");
  DCONST_DVARFLT_hudWhizbyDurationSec = Dvar_RegisterFloat("hudWhizbyDurationSec", 0.15000001, 0.0, 100.0, 0x40004u, "The time in seconds the whizby indicator will be shown");
  DCONST_DVARFLT_hudWhizbyClearAngle = Dvar_RegisterFloat("hudWhizbyClearAngle", 8.0, 0.0, 360.0, 0x40004u, "The minimum angle between two whizby indicators");
  DCONST_DVARFLT_hudWhizbyOffset = Dvar_RegisterFloat("hudWhizbyOffset", 75.0, 1.0, 1000.0, 0x40004u, "Offset for the hud draw");
  DCONST_DVARFLT_hudWhizbyWidth = Dvar_RegisterFloat("hudWhizbyWidth", 400.0, 1.0, 1000.0, 0x40004u, "width of the whizby effect");
  DCONST_DVARFLT_hudWhizbyHeight = Dvar_RegisterFloat("hudWhizbyHeight", 300.0, 1.0, 1000.0, 0x40004u, "height of the whizby effect");
  DCONST_DVARFLT_hudWhizbyAddOffset = Dvar_RegisterFloat("hudWhizbyAddOffset", 140.0, 1.0, 1000.0, 0x40004u, "Additional horizontal offset for the hud draw");
  DCONST_DVARFLT_hudWhizbyAlphaMult = Dvar_RegisterFloat("hudWhizbyAlphaMult", 1.0, 0.0, 1.0, 0x40004u, "Alpha multiplier for the whizby material");
  DCONST_DVARBOOL_hudWhizbyEnable = Dvar_RegisterBool("hudWhizbyEnable", 0, 0x40004u, "Enable/disable hud whizby indicator");
  DCONST_DVARBOOL_cg_viewmodelAnimBlending = Dvar_RegisterBool("cg_viewmodelAnimBlending", 1, 0x40004u, "Toggle anim blending for viewmodel anims");
  DCONST_DVARFLT_cg_viewmodelMeleeAnimBlendTimeSec = Dvar_RegisterFloat("cg_viewmodelMeleeAnimBlendTimeSec", 0.12, 0.0, 10.0, 0x40004u, "Duration for melee-to-melee viewmodel animation blends.");
  DCONST_DVARINT_cg_wallrunBlendOutTimeFiring = Dvar_RegisterInt("cg_wallrunBlendOutTimeFiring", 100, 0, 2000, 0x40004u, "Milleseconds to blend out of wallrun anims to firing weapon");
  DCONST_DVARBOOL_cg_viewmodelAnimatedJumps = Dvar_RegisterBool("cg_viewmodelAnimatedJumps", 1, 0x40004u, "Toggle anim play viewmodel jump anims rather than procedural");
  DCONST_DVARBOOL_cg_viewmodelAnimatedCrawl = Dvar_RegisterBool("cg_viewmodelAnimatedCrawl", 1, 0x40004u, "Toggle anim play viewmodel crawl anims rather than procedural");
  DCONST_DVARFLT_cg_viewmodelLandDipMin = Dvar_RegisterFloat("cg_viewmodelLandDipMin", 0.2, 0.0, 3.4028235e38, 0x40004u, "Minimum goal weight applied to landing animation.");
  DCONST_DVARFLT_cg_viewmodelLandDipMax = Dvar_RegisterFloat("cg_viewmodelLandDipMax", 0.2, 0.0, 3.4028235e38, 0x40004u, "Maximum goal weight applied to landing animation.");
  DCONST_DVARFLT_cg_cameraLandDipScale = Dvar_RegisterFloat("cg_cameraLandDipScale", 1.0, 0.0, 3.4028235e38, 0x40004u, "Scale applied to camera view dip.  Scales legacy hardcoded camera dip amount.");
  DCONST_DVARBOOL_cg_viewmodelAdditiveJog = Dvar_RegisterBool("cg_viewmodelAdditiveJog", 1, 0x40004u, "Toggle additive jog.");
  DCONST_DVARBOOL_cg_viewmodelSprintOffset = Dvar_RegisterBool("cg_viewmodelSprintOffset", 1, 0x40004u, "Toggle sprint offset.");
  DCONST_DVARBOOL_cg_viewmodelFingerPoses = Dvar_RegisterBool("cg_viewmodelFingerPoses", 1, 0x40004u, "Toggle finger pose.");
  DCONST_DVARBOOL_cg_viewmodelAdsUpDown = Dvar_RegisterBool("cg_viewmodelAdsUpDown", 1, 0x40004u, "Toggle ads up down.");
  DCONST_DVARBOOL_cg_viewmodelAdsAnims = Dvar_RegisterBool("cg_viewmodelAdsAnims", 1, 0x40004u, "Toggle viewmodel ads.");
  DCONST_DVARBOOL_cg_viewmodelActiveIdle = Dvar_RegisterBool("cg_viewmodelActiveIdle", 1, 0x40004u, "Toggle active idle.");
  DCONST_DVARBOOL_cg_viewmodelAdditiveWalk = Dvar_RegisterBool("cg_viewmodelAdditiveWalk", 1, 0x40004u, "Toggle additive walk.");
  DCONST_DVARBOOL_cg_viewmodelAdditiveSprint = Dvar_RegisterBool("cg_viewmodelAdditiveSprint", 1, 0x40004u, "Toggle additive sprint.");
  DCONST_DVARBOOL_cg_enableMuzzleFlashInDualFOV = Dvar_RegisterBool("cg_enableMuzzleFlashInDualFOV", 1, 0x40004u, "Enables muzzle flash effects when in ADS with dual FOV scope");
  DCONST_DVARFLT_player_swimDragHandLookAtOffset = Dvar_RegisterFloat("player_swimDragHandLookAtOffset", 64.0, 1.0, 1000.0, 0x40004u, "Forward axis offset to compare against last look at position for hand drag anims");
  DCONST_DVARFLT_player_swimDragHandFrictionMax = Dvar_RegisterFloat("player_swimDragHandFrictionMax", 87.0, 1.0, 1000.0, 0x40004u, "Max friction value to bring the dragging hand back to default idle position");
  DCONST_DVARFLT_player_swimDragHandFrictionMin = Dvar_RegisterFloat("player_swimDragHandFrictionMin", 7.0, 1.0, 1000.0, 0x40004u, "Min friction value to bring the dragging hand back to default idle position");
  DCONST_DVARFLT_player_swimForwardAnimCatchupMin = Dvar_RegisterFloat("player_swimForwardAnimCatchupMin", 5.0, 1.0, 1000.0, 0x40004u, "Lerped min speed to extend or retract arms if player is moving forward or back");
  DCONST_DVARFLT_player_swimForwardAnimCatchupMax = Dvar_RegisterFloat("player_swimForwardAnimCatchupMax", 200.0, 1.0, 1000.0, 0x40004u, "Lerped max speed to extend or retract arms if player is moving forward or back");
  DCONST_DVARBOOL_player_swimDragHandEnabled = Dvar_RegisterBool("player_swimDragHandEnabled", 1, 0x40004u, "Enable/disable left hand drag during swimming");
  DCONST_DVARINT_cg_crawlBlendTime = Dvar_RegisterInt("cg_crawlBlendTime", 250, 1, 2000, 0x40004u, "Milleseconds to blend in and out of crawl anims");
  DCONST_DVARINT_cg_crawlBlendOutTimeFiring = Dvar_RegisterInt("cg_crawlBlendOutTimeFiring", 100, 0, 2000, 0x40004u, "Milleseconds to blend out of crawl anims to firing weapon");
  DCONST_DVARINT_cg_crawlBlendDirTime = Dvar_RegisterInt("cg_crawlBlendDirTime", 400, 1, 2000, 0x40004u, "Milliseconds to blend between crawl direction animations");
  DVARBOOL_depthSortViewmodel = Dvar_RegisterBool("NMLOKNMRSK", 0, 0x44u, "Enable depth sorting on the viewmodel.");
  DVARFLT_shieldImpactBulletShakeScale = Dvar_RegisterFloat("LQKTTRTSNS", 0.34999999, 0.0, 3.4028235e38, 4u, "Viewmodel shake scale for bullet impacts.");
  DVARINT_shieldImpactBulletShakeDuration = Dvar_RegisterInt("NQOLQLNOQO", 500, 0, 0x7FFFFFFF, 4u, "Viewmodel shake duration for bullet impacts.");
  DVARFLT_shieldImpactMissileShakeScale = Dvar_RegisterFloat("LOQOSQQLQK", 0.5, 0.0, 3.4028235e38, 4u, "Viewmodel shake scale for direct missile impacts.");
  DVARINT_shieldImpactMissileShakeDuration = Dvar_RegisterInt("LKTNPTORLS", 1500, 0, 0x7FFFFFFF, 4u, "Viewmodel shake duration for direct missile impacts.");
  DVARFLT_shieldImpactExplosionLowShakeScale = Dvar_RegisterFloat("LPLLPRNPST", 0.40000001, 0.0, 3.4028235e38, 4u, "Viewmodel shake scale for weak splash damage.");
  DVARINT_shieldImpactExplosionLowShakeDuration = Dvar_RegisterInt("TMRQLOTLT", 800, 0, 0x7FFFFFFF, 4u, "Viewmodel shake duration for weak splash damage.");
  DVARFLT_shieldImpactExplosionHighShakeScale = Dvar_RegisterFloat("LMLRPPRNKR", 0.5, 0.0, 3.4028235e38, 4u, "Viewmodel shake scale for strong splash damage.");
  DVARINT_shieldImpactExplosionHighShakeDuration = Dvar_RegisterInt("MRPKPQQPKP", 1250, 0, 0x7FFFFFFF, 4u, "Viewmodel shake duration for strong splash damage.");
  DVARINT_shieldImpactExplosionThreshold = Dvar_RegisterInt("MQSKKKQNNK", 85, 0, 0x7FFFFFFF, 4u, "Pre-shield splash damage that is above this will be 'strong'.");
  DVARFLT_cg_gun_x = Dvar_RegisterFloat("NLQONKNSTN", 0.0, -20.0, 20.0, 4u, "Forward position of the viewmodel");
  DVARFLT_cg_gun_y = Dvar_RegisterFloat("LKTLQSOOQK", 0.0, -20.0, 20.0, 4u, "Right position of the viewmodel");
  DVARFLT_cg_gun_z = Dvar_RegisterFloat("NKLOPRPOQN", 0.0, -20.0, 20.0, 4u, "Up position of the viewmodel");
  DVARFLT_cg_gun_pitch = Dvar_RegisterFloat("LSSPMSSLNL", 0.0, -180.0, 180.0, 4u, "Pitch of the viewmodel");
  DVARFLT_cg_gun_yaw = Dvar_RegisterFloat("MQPKNKNOPO", 0.0, -180.0, 180.0, 4u, "Yaw of the viewmodel");
  DVARFLT_cg_gun_roll = Dvar_RegisterFloat("NPONQQSOPM", 0.0, -180.0, 180.0, 4u, "Roll of the viewmodel");
  DVARBOOL_cg_disable_fov_comp = Dvar_RegisterBool("OMLKKRRSS", 0, 0, "disable the view model positional compensation for fov changes");
  DCONST_DVARFLT_cg_fov_comp_max = Dvar_RegisterFloat("cg_fov_comp_max", 85.0, 1.0, 160.0, 0x40004u, "The maximum field of view angle(in degrees) to compensate for gun placement");
  DCONST_DVARFLT_cg_fov_default_nocomp = Dvar_RegisterFloat("cg_fov_default_nocomp", 70.0, 63.0, 80.0, 0x40004u, "The default field of view angle(in degrees) for which there is no need to compensate for gun placement");
  DCONST_DVARFLT_cg_gun_fovcomp_x = Dvar_RegisterFloat("cg_gun_fovcomp_x", -6.0, -3.4028235e38, 3.4028235e38, 0x40004u, "x position FOV offset compensation of the viewmodel");
  DCONST_DVARFLT_cg_gun_fovcomp_y = Dvar_RegisterFloat("cg_gun_fovcomp_y", 0.0, -3.4028235e38, 3.4028235e38, 0x40004u, "y position FOV offset compensation of the viewmodel");
  DCONST_DVARFLT_cg_gun_fovcomp_z = Dvar_RegisterFloat("cg_gun_fovcomp_z", 0.0, -3.4028235e38, 3.4028235e38, 0x40004u, "z position FOV offset compensation of the viewmodel");
  DVARBOOL_viewModelHacks = Dvar_RegisterBool("LKOMKROSMT", 1, 4u, "Enabled depth hack and remove viewmodel from shadows.");
  DVARBOOL_viewModelDebugNotetracks = Dvar_RegisterBool("MTRTKMSRLO", 0, 4u, "Enable display of viewmodel notetrack debug info.");
  DVARBOOL_cg_cullBullets = Dvar_RegisterBool("LNSRONSPMP", 1, 4u, "Whether to cull bullet fire prediction if trajectory doesn't pass your view or anywhere near you");
  DVARFLT_cg_minCullBulletDist = Dvar_RegisterFloat("MMOPMNOKPO", 128.0, 0.0, 3.4028235e38, 4u, "Don't cull bullet trajectories that are within this distance to you.");
  DVARFLT_cg_cullBulletAngle = Dvar_RegisterFloat("MTTRPTOLPL", 50.0, 0.0, 90.0, 4u, "Cull bullet trajectories that don't fall within this fov");
  DVARFLT_FoFIconScale = Dvar_RegisterFloat("OLNLKLMSTR", 1.3, 0.1, 3.4028235e38, 4u, "Base scale of Friend-or-Foe icons.");
  DVARFLT_FoFIconMinSize = Dvar_RegisterFloat("LQMSSRNNKQ", 30.0, 0.0, 3.4028235e38, 4u, "Minimum size a Friend-or-Foe icon should ever shrink to.");
  DVARFLT_FoFIconMaxSize = Dvar_RegisterFloat("LPPTSMNPKK", 640.0, 0.0, 3.4028235e38, 4u, "Maximum size a Friend-or-Foe icon should ever grow to.");
  DVARFLT_FoFIconSpawnTimeDelay = Dvar_RegisterFloat("RLLNPQQQ", 1.0, 0.0, 3.4028235e38, 4u, "How long to wait, after spawning, before showing the Friend-or-Foe icon on a player.");
  DVARFLT_FoFIconSpawnTimeFade = Dvar_RegisterFloat("LLPTKKRNN", 5.0, 0.0, 3.4028235e38, 4u, "Length of the Friend-or-Foe icons' fade-ins.");
  DVARFLT_cg_weapHitCullAngle = Dvar_RegisterFloat("OKROOSNNRL", 45.0, 0.0, 180.0, 0, "Angle of cone within which to cull back facing weapon hit effects");
  DVARBOOL_cg_weapHitCullEnable = Dvar_RegisterBool("LKNKQKQQKN", 1, 0, "When true, cull back facing weapon hit fx.");
  DVARFLT_cg_weapHitCullRadius = Dvar_RegisterFloat("ORNKMLNPS", 60.0, 0.0, 1000.0, 0, "The fixed radius used for occlusion culling of weapon hit fx.");
  DCONST_DVARBOOL_cg_viewmodelRoboticIK = Dvar_RegisterBool("cg_viewmodelRoboticIK", 0, 0x40004u, "Toggle robotic IK override on the viewmodel.");
  DVARBOOL_cg_lui_scope_reticles = Dvar_RegisterBool("NLNLTPOORT", 1, 0, "When true, will turn off code-rendering of the scope reticles (red dots) and use lui widgets instead");
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPSPINT_cg_maxAttachmentDisplays = Dvar_RegisterInt("cg_maxAttachmentDisplays", 3, 0, 10, 0x40004u, "Maximum number of attachments to display in a weapon's display name before changing to custom");
  v99 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v99 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPBOOL_cg_adjustClientImpactSound = Dvar_RegisterBool("NOPROTMONL", 1, v99, "When true, will adjust impact sounds against the local player to more accurately reflect the source of attacks.  Does not currently support ricochet or exploding weapons.");
  DCONST_DVARFLT_cg_adjustClientImpactSoundDistance = Dvar_RegisterFloat("cg_adjustClientImpactSoundDistance", 16.0, 0.1, 10000.0, 0x40004u, "When adjusting client impact sound effects to play in the direction of the attacker, play the sound at this distance from the ear.");
  DVARBOOL_cg_enableViewModelBoneAndAnimDump = Dvar_RegisterBool("LLQNRQKOQR", 0, 4u, "Dumps the bone transformations and animation every frame when enabled.");
  DVARBOOL_cg_weapons_workers_enable = Dvar_RegisterBool("TMPRTPPTL", 1, 0, "Enables weapons workers");
  DVARBOOL_cg_gun_motion_enable_fov_compensation = Dvar_RegisterBool("MPPNTMTPTS", 1, 0x40u, "Adjusts the gun angles based on the fov ratio between the regular scene and depth hack scene.");
  DVARFLT_cg_dualViewScopeFOV = Dvar_RegisterFloat("POPROMRKQ", 63.0, 15.0, 120.0, 0, "FOV used for the weapon (scope) rendering when the dual FOV rendering is activated.");
  DVARFLT_cg_dualViewScopeTonemapFocusValue = Dvar_RegisterFloat("LLNLPRNKRS", 4.0, 0.0, 64.0, 0, "Value used to set dvar r_tonemapFocus when the dual view scope is activated.");
  DVARBOOL_cg_weapAllowDefaultModelAttachments = Dvar_RegisterBool("OLSNNOLSTO", 0, 0, "Place attachments on the default weapon model.");
  v100 = Com_GameMode_GetActiveGameMode();
  DVARBOOL_cg_weapOverrideDefaultModelMat = Dvar_RegisterBool("OKSKNRLPNR", v100 != 1, 0, "Override the default model material to mask it when equipped.");
  DVARFLT_cg_weapOverrideDefaultModelTrans = Dvar_RegisterFloat("LKKMTSKQTP", 0.5, 0.0, 10000.0, 0, "Time it takes in seconds to transition in the non-default weapon model once it is loaded after showing the default model.");
  DCONST_DVARBOOL_cg_weapForceDefaultModel = Dvar_RegisterBool("cg_weapForceDefaultModel", 0, 0x40004u, "Force the equipped weapon to use the default model.");
  DCONST_DVARBOOL_cg_debugBullets = Dvar_RegisterBool("cg_debugBullets", 0, 0x40004u, "Enable/disable rendering of debug bullet lines");
  DCONST_DVARBOOL_cg_debugBulletsHitLoc = Dvar_RegisterBool("cg_debugBulletsHitLoc", 0, 0x40004u, "Enable/disable rendering of the current point where the bullet will land. The hit location is calculated without any spread.");
  DCONST_DVARINT_cg_debugBulletsDrawDuration = Dvar_RegisterInt("cg_debugBulletsDrawDuration", 800, 0, 10000, 0x40004u, "The duration bullet lines stay on the screen.");
  DVARBOOL_cg_enableAdsAlignOffset = Dvar_RegisterBool("NTKQMLLQOP", 1, 4u, "Indicates whether the procedural ADS alignment offsets are applied to the view model.");
  DVARFLT_cg_maxReflexSightDrift = Dvar_RegisterFloat("MNMKTKKNQQ", 7.0, 0.0, 100.0, 0, "Defines how far the reticle projection on reflex sight can drift based on the angle it's looked at (in world units).");
  DCONST_DVARINT_cg_wmSmokeDelayAfterShot = Dvar_RegisterInt("cg_wmSmokeDelayAfterShot", 150, 0, 0x7FFFFFFF, 0x40004u, "Delay after a shot before worldmodel weapon smoke will begin (milliseconds).");
  DCONST_DVARFLT_jogBlendTime = Dvar_RegisterFloat("jogBlendTime", 0.30000001, 0.0, 3.4028235e38, 0x40004u, "Generic jog blend time");
  DCONST_DVARFLT_jogAdsBlendTime = Dvar_RegisterFloat("jogAdsBlendTime", 0.15000001, 0.0, 3.4028235e38, 0x40004u, "Blend time from jog to ads");
  DCONST_DVARFLT_jogFireBlendTime = Dvar_RegisterFloat("jogFireBlendTime", 0.15000001, 0.0, 3.4028235e38, 0x40004u, "Blend time from jog to fire");
  DCONST_DVARBOOL_adsReloadUseAdditiveWalk = Dvar_RegisterBool("adsReloadUseAdditiveWalk", 1, 0x40004u, "If true, will blend in the additive walk animation during ADS Reloads.");
  DCONST_DVARFLT_superSprintBlendTime = Dvar_RegisterFloat("superSprintBlendTime", 0.2, 0.0, 3.4028235e38, 0x40004u, "Blend time in and out of super sprint.");
  DCONST_DVARFLT_superSprintBlendOutSprintTime = Dvar_RegisterFloat("superSprintBlendOutSprintTime", 0.0, 0.0, 3.4028235e38, 0x40004u, "Speed to blend the existing sprint out.");
  DCONST_DVARFLT_superSprintControlForwardDeflection = Dvar_RegisterFloat("superSprintControlForwardDeflection", 0.2, 0.0, 3.4028235e38, 0x40004u, "Percentage of controller deflection from forward to neutral required to activate control.");
  DCONST_DVARFLT_superSprintControlMaxRightDeflection = Dvar_RegisterFloat("superSprintControlMaxRightDeflection", 0.2, 0.0, 3.4028235e38, 0x40004u, "Percentage of controller deflection from neutral to right that is allowed to activate control.");
  DCONST_DVARFLT_superSprintControlMaxInputTime = Dvar_RegisterFloat("superSprintControlMaxInputTime", 0.2, 0.0, 3.4028235e38, 0x40004u, "Seconds to input the total control sequence.");
  DCONST_DVARFLT_superSprintDoubleClickInputTime = Dvar_RegisterFloat("superSprintDoubleClickInputTime", 0.30000001, 0.0, 3.4028235e38, 0x40004u, "Seconds to input the total super sprint double click sequence.");
  DCONST_DVARFLT_offhandDetonateDoubleClickInputTime = Dvar_RegisterFloat("offhandDetonateDoubleClickInputTime", 0.30000001, 0.001, 3.4028235e38, 0x40004u, "Seconds to input the total offhand detonate double click sequence.");
  DVARBOOL_offhandDetonateDoubleClickEnable = Dvar_RegisterBool("NRKLOPNTNL", 0, 4u, "When true, offhand double tap detonate is enabled");
  DCONST_DVARFLT_cg_toggleScopeBlendInTime = Dvar_RegisterFloat("cg_toggleScopeBlendInTime", 0.15000001, 0.0, 1.0, 0x40004u, "Blend in time to start playing the toggle scope on/off animations");
  DCONST_DVARFLT_cg_toggleScopeBlendOutStartAnimNormalizedTime = Dvar_RegisterFloat("cg_toggleScopeBlendOutStartAnimNormalizedTime", 0.94999999, 0.0099999998, 1.0, 0x40004u, "Determines how far into the toggle scope on/off animation we start to cross blend into idle. Only applicable when we gracefully settle without interruption.");
  DCONST_DVARFLT_cg_toggleScopeBlendOutTime = Dvar_RegisterFloat("cg_toggleScopeBlendOutTime", 0.1, 0.0, 1.0, 0x40004u, "Blend out time to settle into idle.");
  DCONST_DVARFLT_cg_mantleQuickBlendTime = Dvar_RegisterFloat("cg_mantleQuickBlendTime", 0.1, 0.0, 1.0, 0x40004u, "The time for cross blend when the player goes into the mantle animation.");
  DCONST_DVARBOOL_duckedRotationPivotDebug = Dvar_RegisterBool("duckedRotationPivotDebug", 0, 0x40004u, "Enable weapon ducked rotation debug");
  DCONST_DVARBOOL_cg_debugBallisticWhizby = Dvar_RegisterBool("cg_debugBallisticWhizby", 0, 0x40004u, "Enable/disable debug display for the ballistic whizby system");
  DCONST_DVARINT_cg_debugBallisticWhizbyDrawFrameCount = Dvar_RegisterInt("cg_debugBallisticWhizbyDrawFrameCount", 300, 0, 0x7FFFFFFF, 0x40004u, "Delay after a shot before worldmodel weapon smoke will begin (milliseconds).");
  DCONST_DVARBOOL_cg_debugBallisticWhizbyEnableRefPoint = Dvar_RegisterBool("cg_debugBallisticWhizbyEnableRefPoint", 0, 0x40004u, "Enables whizby to be tested with a single client using a custom reference point.");
  DCONST_DVARVEC3_cg_debugBallisticWhizbyRefPoint = Dvar_RegisterVec3("cg_debugBallisticWhizbyRefPoint", 0.0, 0.0, 0.0, -3.4028235e38, 3.4028235e38, 0x40004u, "Replaces the whizby reference point (local player camera) with this location. Enables whizby to be tested with a single client");
  v101 = ((g_currentRegion - 1) & 0xFFFFFFFC) != 0 || g_currentRegion == SaudiArabia;
  DVARBOOL_corpseImpactEffectsEnabled = Dvar_RegisterBool("NSOSPTMRMQ", v101, 0x2000u, "If true, impact effects on player corpse entities is enabled.");
  DCONST_DVARBOOL_cg_validateAdsHipFireAnimTimes = Dvar_RegisterBool("cg_validateAdsHipFireAnimTimes", 0, 0x40004u, "Enables hip-ADS fire animation time validation");
  DVARBOOL_cg_riotshield_decalfix_enable = Dvar_RegisterBool("LTKRSOQLRQ", 0, 4u, "Enables the fix for drawing decals on the third and first person riot shield.");
  DVARBOOL_cg_enableSkinningSkelRecordTransferFix = Dvar_RegisterBool("LONMSLNTTS", 1, 0, "When true, the fix for view model skinning skeleton record transfer is enabled. The fix forces the model indices to be matched for each bone in addition to the bone name.");
  DVARBOOL_cg_enableSkinningSkelRecordTransferAkimboFix = Dvar_RegisterBool("LKPMRNMOOT", 1, 0, "When true, the fix for view model skinning skeleton record transfer for akimbo is enabled. This prevents us from transferring records from left hand to right hand.");
  DVARBOOL_cg_enableViewModelMotionPrecisionFix = Dvar_RegisterBool("NKONRLPQSQ", 1, 0, "When enabled, the fix to solve view model motion floating point precision issue is enabled.");
  DCONST_DVARBOOL_cg_disableViewAnimation = Dvar_RegisterBool("cg_disableViewAnimation", 0, 0x40004u, "Disables the view model camera animations. Used for debugging purposes");
  DVARINT_cg_ballisticsMaxSimStepsPerServerFrame = Dvar_RegisterInt("RQMTPQRRL", 1, 0, 0x7FFFFFFF, 0, "Maximum simulation steps per ballistic instance per client frame.");
  DCONST_DVARINT_cg_wristwatch_script_transition_time_ms = Dvar_RegisterInt("cg_wristwatch_script_transition_time_ms", 1100, 1, 0x7FFFFFFF, 0x40004u, "Duration over which the client wristwatch should transition to or from its script-defined time.");
  DCONST_DVARINT_cg_wristwatch_script_transition_additional_rot_hour = Dvar_RegisterInt("cg_wristwatch_script_transition_additional_rot_hour", -1, 0x80000000, 0x7FFFFFFF, 0x40004u, "Additional rotations to apply to this hand during scripted transitions.");
  DCONST_DVARINT_cg_wristwatch_script_transition_additional_rot_min = Dvar_RegisterInt("cg_wristwatch_script_transition_additional_rot_min", 2, 0x80000000, 0x7FFFFFFF, 0x40004u, "Additional rotations to apply to this hand during scripted transitions.");
  DCONST_DVARINT_cg_missileQuickServerEntBlendInTimeMs = Dvar_RegisterInt("cg_missileQuickServerEntBlendInTimeMs", 100, 0, 1000, 0x40004u, "This is the server entity blend in time used for the predicted projectile system when the server entity is stationary or linked. It's used to reduce slides along surfaces due to the client/server trajectory difference.");
  DCONST_DVARFLT_cg_missileRotationBlendScale = Dvar_RegisterFloat("cg_missileRotationBlendScale", 4.0, 1.0, 100.0, 0x40004u, "Indicates how quicker the rotation is blended compared to the position.");
  DCONST_DVARBOOL_cg_predictedMissileDebug = Dvar_RegisterBool("cg_predictedMissileDebug", 0, 0x40004u, "Helps identifying cases where a server missile entity owned by the local player arrived but a matching predicted missile entity is not found");
  DCONST_DVARINT_cg_skydive_rmbTimeInMs = Dvar_RegisterInt("cg_skydive_rmbTimeInMs", 0, 0, 1000, 0x40004u, "The time to transition into the goal radial motion blur values");
  DCONST_DVARINT_cg_skydive_rmbTimeOutMs = Dvar_RegisterInt("cg_skydive_rmbTimeOutMs", 0, 0, 1000, 0x40004u, "The time to transition out of the goal radial motion blur values");
  DCONST_DVARFLT_cg_skydive_super_dive_in_blend_in_time = Dvar_RegisterFloat("cg_skydive_super_dive_in_blend_in_time", 0.30000001, 0.0, 1.0, 0x40004u, "The time to blend out of the super dive out and to blend into free idle. The blend starts at such time that the blend finishes when the super dive out animation is finished.");
  DCONST_DVARFLT_cg_skydive_super_dive_out_blend_out_time = Dvar_RegisterFloat("cg_skydive_super_dive_out_blend_out_time", 0.5, 0.0, 1.0, 0x40004u, "The time to blend out of the super dive out and to blend into free idle. The blend starts at such time that the blend finishes when the super dive out animation is finished.");
  DVARFLT_cg_skydive_super_dive_fov_delta = Dvar_RegisterFloat("LNMNLQP", 14.0, 0.0, 30.0, 0, "FOV change applied (in degrees) when in super dive mode.");
  DVARINT_cg_skydive_super_dive_fov_blend_in_time = Dvar_RegisterInt("MPNNNKPLQM", 1800, 0, 10000, 0, "Time to blend into the super dive FOV.");
  DVARINT_cg_skydive_super_dive_fov_blend_out_time = Dvar_RegisterInt("LSKTQNPKKN", 1000, 0, 10000, 0, "Time to blend out of the super dive FOV.");
  DVARFLT_cg_skydive_parachute_cut_fov_delta = Dvar_RegisterFloat("MMPNQSNSNN", 10.0, 0.0, 30.0, 0, "FOV change applied (in degrees) after parachute cut (player must be looking down).");
  DVARINT_cg_skydive_parachute_cut_fov_blend_in_time = Dvar_RegisterInt("OOPPRRRSM", 1800, 0, 10000, 0, "Time to blend into the parachute cut FOV.");
  DVARINT_cg_skydive_parachute_cut_fov_blend_out_time = Dvar_RegisterInt("MLQKNLMPQR", 1000, 0, 10000, 0, "Time to blend out of the parachute cut FOV.");
  DVARFLT_cg_skydive_parachute_cut_pitch_threshold = Dvar_RegisterFloat("MORKNPPSMR", 45.0, 0.0, 90.0, 0, "Player's camera pitch must be greater than this value in order to apply the parachute cut FOV change.");
  DVARINT_cg_skydive_parachute_cut_look_down_grace_period = Dvar_RegisterInt("SQPLNKSOK", 800, 0, 10000, 0, "The grace period to look down in order to apply the parachute cut FOV change.");
  DVARINT_cg_skydive_parachute_cut_cam_shake_min_time = Dvar_RegisterInt("NTLRRMTQMM", 1000, 0, 10000, 0, "Minimum amount of time camera shake applied after a parachute cut action.");
  DVARFLT_cg_skydive_parachute_cut_cam_shake_blend_in_speed = Dvar_RegisterFloat("MQLTOQPRLT", 10.0, 0.0, 1000.0, 0, "Parachute cut camera shake blend in speed.");
  DVARFLT_cg_skydive_parachute_cut_cam_shake_blend_out_speed = Dvar_RegisterFloat("LPOLPTMPKM", 10.0, 0.0, 1000.0, 0, "Parachute cut camera shake blend in speed.");
  DVARFLT_cg_skydive_parachute_cut_cam_shake_fake_speed = Dvar_RegisterFloat("SSOOSTOMR", 2000.0, 0.0, 100000.0, 0, "Parachute cut camera shake fake speed.");
  DVARINT_cg_skydive_land_fov_blend_out_time = Dvar_RegisterInt("MKOLLTMMLM", 1000, 0, 10000, 0, "Time to blend out of skydive FOV changes when landed.");
  DVARFLT_cg_skydive_rmb_strength_min = Dvar_RegisterFloat("NMTQNKOOS", 0.0099999998, 0.0, 10.0, 0, "Skydive min strength for radial motion blur.");
  DVARFLT_cg_skydive_rmb_strength_max = Dvar_RegisterFloat("MTNTQNKMPO", 0.029999999, 0.0, 10.0, 0, "Skydive max strength for radial motion blur.");
  DVARFLT_cg_skydive_rmb_radius_min = Dvar_RegisterFloat("MKMSOLRQML", 0.0, 0.0, 10.0, 0, "Skydive min strength for radial motion blur.");
  DVARFLT_cg_skydive_rmb_radius_max = Dvar_RegisterFloat("NOLNTMSMPL", 0.25, 0.0, 10.0, 0, "Skydive max strength for radial motion blur.");
  DVARFLT_cg_skydive_rmb_freefall_weight_min = Dvar_RegisterFloat("NTSOOPTPOL", 0.30000001, 0.0, 1.0, 0, "Minimum radial motion blur weight during freefall.");
  DVARFLT_cg_skydive_rmb_parachute_cut_weight_min = Dvar_RegisterFloat("NTKRNNLQOQ", 0.30000001, 0.0, 1.0, 0, "Minimum radial motion blur weight during parachute cut.");
  DVARFLT_cg_skydive_rmb_track_speed = Dvar_RegisterFloat("MRKNLKLOLP", 3.0, 0.0, 100.0, 0, "RMB weight tracking speed.");
  DCONST_DVARBOOL_cg_skydive_enable_debugAnimOverrides = Dvar_RegisterBool("cg_skydive_enable_debugAnimOverrides", 0, 0x40004u, "Allows manually overriding skydive animation tree. Used only for testing purposes.");
  DCONST_DVARFLT_cg_skydive_debug_paramInputThrottle = Dvar_RegisterFloat("cg_skydive_debug_paramInputThrottle", 0.0, -1.0, 1.0, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_cg_skydive_debug_paramInputStrafe = Dvar_RegisterFloat("cg_skydive_debug_paramInputStrafe", 0.0, -1.0, 1.0, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_cg_skydive_debug_paramInputYaw = Dvar_RegisterFloat("cg_skydive_debug_paramInputYaw", 0.0, -1.0, 1.0, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_cg_skydive_debug_paramInputPitch = Dvar_RegisterFloat("cg_skydive_debug_paramInputPitch", 0.0, -1.0, 1.0, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_cg_skydive_debug_paramCameraPitch = Dvar_RegisterFloat("cg_skydive_debug_paramCameraPitch", 0.0, -90.0, 90.0, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_cg_skydive_debug_throttleAnimWeight = Dvar_RegisterFloat("cg_skydive_debug_throttleAnimWeight", 0.0, 0.0, 1.0, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_cg_skydive_debug_strafeAnimWeight = Dvar_RegisterFloat("cg_skydive_debug_strafeAnimWeight", 0.0, 0.0, 1.0, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_cg_skydive_debug_yawAnimWeight = Dvar_RegisterFloat("cg_skydive_debug_yawAnimWeight", 0.0, 0.0, 1.0, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_cg_skydive_debug_pitchAnimWeight = Dvar_RegisterFloat("cg_skydive_debug_pitchAnimWeight", 0.0, 0.0, 1.0, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_cg_skydive_debug_lookAnimWeight = Dvar_RegisterFloat("cg_skydive_debug_lookAnimWeight", 0.0, 0.0, 1.0, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_cg_skydive_debug_velAnimWeight = Dvar_RegisterFloat("cg_skydive_debug_velAnimWeight", 0.0, 0.0, 1.0, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_cg_skydive_debug_velAnimPlayRate = Dvar_RegisterFloat("cg_skydive_debug_velAnimPlayRate", 0.0, 0.0, 10.0, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DVARBOOL_cg_ladders_validate = Dvar_RegisterBool("MRQNQORKQM", 0, 4u, "Output warnings for all incorrectly formatted ladders in the level.");
  DCONST_DVARBOOL_cg_drawLadderSlideAudio = Dvar_RegisterBool("cg_drawLadderSlideAudio", 0, 0x40004u, "Debug draw the ladder slide audio information.");
  DCONST_DVARFLT_cg_ladderSpinTimePercent = Dvar_RegisterFloat("cg_ladderSpinTimePercent", 0.80000001, 0.0, 1.0, 0x40004u, "The percent of the ladder weapon aim/drop animation time that the view model will spin over to align to the ladder or the camera orientations.");
  v102 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v102 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_cg_ladderCameraAnimWeight = Dvar_RegisterFloat("MMRNPTNSQ", 0.79000002, 0.0, 1.0, v102, "Controls the intensity of ladder climb animations.");
  DCONST_DVARFLT_cg_ladderCameraAnimBlendInTime = Dvar_RegisterFloat("cg_ladderCameraAnimBlendInTime", 0.30000001, 0.0, 2.0, 0x40004u, "In seconds.  The time it takes for ladder climb animations to blend in.");
  DCONST_DVARFLT_cg_ladderCameraAnimBlendOutTime = Dvar_RegisterFloat("cg_ladderCameraAnimBlendOutTime", 0.15000001, 0.0, 2.0, 0x40004u, "In seconds.  The time it takes for ladder climb animations to blend out.");
  DVARBOOL_cg_train_killswitch_enabled = Dvar_RegisterBool("LRQMRKNTLL", 1, 0, "Enables the CG system which builds the train hierachy information by analyzing the snapshot. If this dvar is disabled the pose controller is also disabled");
  DVARBOOL_cg_train_killswitch_enable_pose_controller = Dvar_RegisterBool("RLPKRTSLO", 1, 0, "If enabled the pose controller to align the train couplings is active");
  DVARINT_cg_radialMenu_deactivationDelay = Dvar_RegisterInt("NLPKLPMKT", 250, 0, 1000, 4u, "Indicates how long after closing the radial menu do we keep capturing right stick input. Used so we don't imediately turn in that direction.");
  DVARINT_cg_radialMenu_selectionHold = Dvar_RegisterInt("MPSRKPSRQQ", 100, 0, 1000, 4u, "Indicates how long after releasing the right stick do we still hold the selection before clearing it out. Used so we still make a selection when releasing the stick and the d-pad at almost the same time");
  DCONST_DVARVEC4_cg_radialMenu_color_bg_blur_darkening = Dvar_RegisterVec4("cg_radialMenu_color_bg_blur_darkening", 0.125, 0.125, 0.118, 0.5, 0.0, 1.0, 0x40004u, "The color for the background blur darkening.");
  DCONST_DVARVEC4_cg_radialMenu_color_bg_outline_blur_darkening = Dvar_RegisterVec4("cg_radialMenu_color_bg_outline_blur_darkening", 0.125, 0.125, 0.118, 0.1, 0.0, 1.0, 0x40004u, "The color for the background outline blur darkening.");
  DCONST_DVARVEC4_cg_radialMenu_color_bg_pixel_grid = Dvar_RegisterVec4("cg_radialMenu_color_bg_pixel_grid", 0.0, 0.30000001, 0.46000001, 0.15000001, 0.0, 1.0, 0x40004u, "The color for the background pixel grid.");
  DCONST_DVARVEC4_cg_radialMenu_color_masked_foreground = Dvar_RegisterVec4("cg_radialMenu_color_masked_foreground", 0.125, 0.125, 0.118, 0.60000002, 0.0, 1.0, 0x40004u, "The color for the masked foreground.");
  DCONST_DVARVEC4_cg_radialMenu_color_outline_circles = Dvar_RegisterVec4("cg_radialMenu_color_outline_circles", 0.0, 0.44, 0.69, 1.0, 0.0, 1.0, 0x40004u, "The color for the outline circles.");
  DCONST_DVARVEC4_cg_radialMenu_color_select_pixel_grid_plain = Dvar_RegisterVec4("cg_radialMenu_color_select_pixel_grid_plain", 0.77999997, 0.79000002, 0.77600002, 0.15000001, 0.0, 1.0, 0x40004u, "The color for the selection pixel grid - plain style.");
  DCONST_DVARVEC4_cg_radialMenu_color_select_pixel_grid_glow = Dvar_RegisterVec4("cg_radialMenu_color_select_pixel_grid_glow", 0.0, 0.44, 0.69, 0.5, 0.0, 1.0, 0x40004u, "The color for the selection pixel grid - glow style.");
  DCONST_DVARVEC4_cg_radialMenu_color_edge_glow_lines = Dvar_RegisterVec4("cg_radialMenu_color_edge_glow_lines", 0.33000001, 0.69, 0.92000002, 0.60000002, 0.0, 1.0, 0x40004u, "The color for the edge glow lines.");
  DCONST_DVARVEC4_cg_radialMenu_color_selection_arrow = Dvar_RegisterVec4("cg_radialMenu_color_selection_arrow", 0.33000001, 0.69, 0.92000002, 1.0, 0.0, 1.0, 0x40004u, "The color for the selection arrow.");
  DCONST_DVARVEC4_cg_radialMenu_color_expanded_selection = Dvar_RegisterVec4("cg_radialMenu_color_expanded_selection", 1.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0x40004u, "The color for the expanded selection.");
  v103 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v103 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_aim_aimAssistRangeScale = Dvar_RegisterFloat("LSTNPLKNLS", 1.0, 0.0, 2.0, v103, "Scales the weapon's aim assist range");
  DCONST_DVARINT_aim_input_graph_index = Dvar_RegisterInt("aim_input_graph_index", 0, 0, 3, 0x40004u, "Which input graph to use");
  DCONST_DVARFLT_aim_turnrate_pitch = Dvar_RegisterFloat("aim_turnrate_pitch", 90.0, 0.0, 1080.0, 0x40004u, "The vertical turn rate for aim assist when firing from the hip");
  DCONST_DVARFLT_aim_turnrate_pitch_ads = Dvar_RegisterFloat("aim_turnrate_pitch_ads", 55.0, 0.0, 1080.0, 0x40004u, "The turn rate up and down for aim assist when aiming down the sight");
  DCONST_DVARFLT_aim_turnrate_yaw = Dvar_RegisterFloat("aim_turnrate_yaw", 260.0, 0.0, 1080.0, 0x40004u, "The horizontal turn rate for aim assist when firing from the hip");
  DCONST_DVARFLT_aim_turnrate_yaw_ads = Dvar_RegisterFloat("aim_turnrate_yaw_ads", 90.0, 0.0, 1080.0, 0x40004u, "The horizontal turn rate for aim assist when aiming down the sight");
  DCONST_DVARFLT_aim_accel_turnrate_lerp = Dvar_RegisterFloat("aim_accel_turnrate_lerp", 1200.0, 0.0, 4000.0, 0x40004u, "The acceleration of the turnrates");
  DCONST_DVARFLT_aim_slowdown_region_width = Dvar_RegisterFloat("aim_slowdown_region_width", 90.0, 0.0, 640.0, 0x40004u, "The screen width of the aim slowdown region");
  v104 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v104 = 262276;
  _XMM7 = LODWORD(FLOAT_66_599998);
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm7, xmm9, xmm2
  }
  DCONST_DVARMPFLT_aim_slowdown_region_height = Dvar_RegisterFloat("OMKSOSNLRR", *(float *)&_XMM0, 0.0, 480.0, v104, "The screen height of the aim assist slowdown region");
  DCONST_DVARFLT_aim_slowdown_prioritization_dist_prop = Dvar_RegisterFloat("aim_slowdown_prioritization_dist_prop", 0.1, 0.0, 1.0, 0x40004u, "Auto aim prioritization - entities considered close if within this proportion of distance");
  v109 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v109 = 262276;
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM0 = LODWORD(FLOAT_0_30000001);
  __asm { vblendvps xmm0, xmm0, xmm14, xmm2 }
  DCONST_DVARMPFLT_aim_slowdown_prioritization_crosshair_dist_prop = Dvar_RegisterFloat("NQLLTLSRQS", *(float *)&_XMM0, 0.0, 1.0, v109, "Auto aim prioritization - entities considered crosshair close if within this proportion of crosshair distance");
  DCONST_DVARFLT_aim_slowdown_prioritization_non_character_neg = Dvar_RegisterFloat("aim_slowdown_prioritization_non_character_neg", 0.25, 0.0, 1.0, 0x40004u, "Auto aim prioritization - amount of negation applied to non characters considered close to other entities");
  DCONST_DVARFLT_aim_autoaim_lerp = Dvar_RegisterFloat("aim_autoaim_lerp", 20.0, 0.0, 100.0, 0x40004u, "The rate in degrees per second that the auto aim will converge to its target");
  DCONST_DVARFLT_aim_autoaim_region_width = Dvar_RegisterFloat("aim_autoaim_region_width", 120.0, 0.0, 640.0, 0x40004u, "The width of the auto aim region in virtual screen coordinates (0 - 640)");
  DCONST_DVARFLT_aim_autoaim_region_height = Dvar_RegisterFloat("aim_autoaim_region_height", 80.0, 0.0, 480.0, 0x40004u, "The height of the auto aim region in virtual screen coordinates (0 - 480)");
  DCONST_DVARFLT_aim_autoaim_bone_dist_ratio = Dvar_RegisterFloat("aim_autoaim_bone_dist_ratio", 0.1, 0.0, 1.0, 0x40004u, "Ratio of the size of the bounding box to the distance from the player at which we will use the detailed model bones for aim target.");
  DCONST_DVARINT_aim_autoaim_delay = Dvar_RegisterInt("aim_autoaim_delay", 1500, 0, 10000, 0x40004u, "The delay between autoaim presses");
  DCONST_DVARBOOL_aim_autoaim_useAimPos = Dvar_RegisterBool("aim_autoaim_useAimPos", 1, 0x40004u, "Use the aimpos instead of the bounds center for calculating best screen target");
  DCONST_DVARBOOL_aim_input_graph_enabled = Dvar_RegisterBool("aim_input_graph_enabled", 1, 0x40004u, "Use graph for adjusting view input");
  DCONST_DVARBOOL_aim_input_graph_debug = Dvar_RegisterBool("aim_input_graph_debug", 0, 0x40004u, "Debug the view input graphs");
  DCONST_DVARBOOL_aim_accel_turnrate_enabled = Dvar_RegisterBool("aim_accel_turnrate_enabled", 1, 0x40004u, "Enable/disable acceleration of the turnrates");
  DCONST_DVARBOOL_aim_accel_turnrate_debug = Dvar_RegisterBool("aim_accel_turnrate_debug", 0, 0x40004u, "Turn on debugging info for the acceleration");
  DCONST_DVARBOOL_aim_slowdown_enabled = Dvar_RegisterBool("aim_slowdown_enabled", 1, 0x40004u, "Slowdown the turn rate when the cross hair passes over a target");
  DCONST_DVARBOOL_aim_slowdown_debug = Dvar_RegisterBool("aim_slowdown_debug", 0, 0x40004u, "Turn on debugging info for aim slowdown");
  DCONST_DVARBOOL_aim_autoaim_enabled = Dvar_RegisterBool("aim_autoaim_enabled", 1, 0x40004u, "Turn on auto aim");
  DCONST_DVARBOOL_aim_autoaim_debug = Dvar_RegisterBool("aim_autoaim_debug", 0, 0x40004u, "Turn on auto aim debugging");
  DCONST_DVARBOOL_aim_lockon_enabled = Dvar_RegisterBool("aim_lockon_enabled", 1, 0x40004u, "Aim lock on helps the player to stay on target");
  DCONST_DVARBOOL_aim_lockon_debug = Dvar_RegisterBool("aim_lockon_debug", 0, 0x40004u, "Turn on debugging info for aim lock on");
  DCONST_DVARBOOL_aim_scale_view_axis = Dvar_RegisterBool("aim_scale_view_axis", 1, 0x40004u, "Scale the influence of each input axis so that the major axis has more influence on the control");
  DCONST_DVARBOOL_aim_target_trace_async = Dvar_RegisterBool("aim_target_trace_async", 1, 0x40004u, "Calculate aim target traces asynchronously as an optimization");
  DCONST_DVARFLT_aim_lockon_max_pitch_speed_up = Dvar_RegisterFloat("aim_lockon_max_pitch_speed_up", 100000.0, 0.0, 3.4028235e38, 0x40004u, "The maximum angular velocity applied for pitch lockon, in degrees per second.");
  v114 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v114 = 262276;
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_200_0);
  __asm { vblendvps xmm0, xmm1, xmm0, xmm2 }
  DCONST_DVARMPFLT_aim_lockon_max_pitch_speed_down = Dvar_RegisterFloat("NPOMMNSONS", *(float *)&_XMM0, 0.0, 3.4028235e38, v114, "The maximum angular velocity applied for pitch lockon, in degrees per second.");
  DCONST_DVARFLT_aim_lockon_max_yaw_speed = Dvar_RegisterFloat("aim_lockon_max_yaw_speed", 100000.0, 0.0, 3.4028235e38, 0x40004u, "The maximum angular velocity applied for yaw lockon, in degrees per second.");
  v119 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v119 = 262276;
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM0 = LODWORD(FLOAT_0_69999999);
  __asm { vblendvps xmm0, xmm0, xmm12, xmm2 }
  DCONST_DVARMPFLT_aim_boundsOffsetScale = Dvar_RegisterFloat("MKONTLSQQN", *(float *)&_XMM0, 0.0, 3.4028235e38, v119, "Scales the size of the aim assist bounds. This scales from the bottom up, the top will remain in the same location.");
  DCONST_DVARFLT_aim_boundsMinBoxHeight = Dvar_RegisterFloat("aim_boundsMinBoxHeight", 5.0, 0.050000001, 3.4028235e38, 0x40004u, "Min height an aim assist target bounds can be.");
  DCONST_DVARFLT_aim_actorBoundsZPadding = Dvar_RegisterFloat("aim_actorBoundsZPadding", 6.0, 0.0, 3.4028235e38, 0x40004u, "Padding to apply to actor bounds along the Z-axis.");
  DCONST_DVARBOOL_aim_advanced_slowdown_enabled = Dvar_RegisterBool("aim_advanced_slowdown_enabled", 0, 0x40004u, "Turn on advanced auto aim technique");
  DCONST_DVARBOOL_aim_enhanced_slowdown_enabled = Dvar_RegisterBool("aim_enhanced_slowdown_enabled", 0, 0x40004u, "Turn on enhanced auto aim technique");
  DCONST_DVARFLT_aim_advanced_slowdown_region_width = Dvar_RegisterFloat("aim_advanced_slowdown_region_width", 12.0, 0.0, 640.0, 0x40004u, "The screen width of the advanced aim slowdown region");
  DCONST_DVARFLT_aim_advanced_slowdown_region_height = Dvar_RegisterFloat("aim_advanced_slowdown_region_height", 12.0, 0.0, 480.0, 0x40004u, "The screen height of the advanced aim assist slowdown region");
  DCONST_DVARFLT_aim_slowdown_standard_smoothing_percent_step = Dvar_RegisterFloat("aim_slowdown_standard_smoothing_percent_step", 0.050000001, 0.050000001, 1.0, 0x40004u, "Percent to step aim assist slowdown values each frame, for smoothing");
  DCONST_DVARFLT_aim_slowdown_blend_rate = Dvar_RegisterFloat("aim_slowdown_blend_rate", 20.0, 0.0, 3.4028235e38, 0x40004u, "Speed that advanced slowdown algorithm will blend in.");
  DCONST_DVARFLT_aim_slowdown_target_motion_horiz_speed_max = Dvar_RegisterFloat("aim_slowdown_target_motion_horiz_speed_max", 160.0, 0.0, 500.0, 0x40004u, "Top speed (units / sec) the target has to move to max out the target speed based aim assist slowdown");
  DCONST_DVARFLT_aim_slowdown_target_motion_sweet_spot_offset_x = Dvar_RegisterFloat("aim_slowdown_target_motion_sweet_spot_offset_x", 0.40000001, 0.0, 1.0, 0x40004u, "Percentage across the targets body the sweet spot moves based on target motion");
  DCONST_DVARFLT_aim_slowdown_controller_sweet_spot_offset_x = Dvar_RegisterFloat("aim_slowdown_controller_sweet_spot_offset_x", -0.25, -1.0, 1.0, 0x40004u, "Percentage across the targets body the sweet spot moves based on controller input");
  DCONST_DVARFLT_aim_slowdown_controller_sweet_spot_offset_y = Dvar_RegisterFloat("aim_slowdown_controller_sweet_spot_offset_y", -0.2, -1.0, 1.0, 0x40004u, "Percentage across the targets body the sweet spot moves based on controller input");
  DCONST_DVARFLT_aim_slowdown_max_factor_yaw = Dvar_RegisterFloat("aim_slowdown_max_factor_yaw", 0.69999999, 0.0, 1.0, 0x40004u, "Max percentage to slow down yaw aim when motion or sweet spot slow down applies");
  DCONST_DVARFLT_aim_slowdown_max_factor_pitch = Dvar_RegisterFloat("aim_slowdown_max_factor_pitch", 0.60000002, 0.0, 1.0, 0x40004u, "Max percentage to slow down pitch aim when motion or sweet spot slow down applies");
  DCONST_DVARFLT_aim_slowdown_standard_slowdown_yaw = Dvar_RegisterFloat("aim_slowdown_standard_slowdown_yaw", 0.60000002, 0.0, 1.0, 0x40004u, "Max percentage to slow down pitch aim when NEITHER motion or sweet spot slow down applies");
  DCONST_DVARFLT_aim_slowdown_standard_slowdown_pitch = Dvar_RegisterFloat("aim_slowdown_standard_slowdown_pitch", 0.44999999, 0.0, 1.0, 0x40004u, "Max percentage to slow down pitch aim when NEITHER motion or sweet spot slow down applies");
  DCONST_DVARFLT_aim_slowdown_max_factor_near_miss_yaw = Dvar_RegisterFloat("aim_slowdown_max_factor_near_miss_yaw", 0.55000001, 0.0, 1.0, 0x40004u, "Flat percentage to slow down yaw aim when near miss assist is applied");
  DCONST_DVARFLT_aim_slowdown_max_factor_near_miss_pitch = Dvar_RegisterFloat("aim_slowdown_max_factor_near_miss_pitch", 0.40000001, 0.0, 1.0, 0x40004u, "Flat percentage to slow down pitch aim when near miss assist is applied");
  DCONST_DVARFLT_aim_slowdown_far_assist_max_range_factor = Dvar_RegisterFloat("aim_slowdown_far_assist_max_range_factor", 0.25, 0.0, 1.0, 0x40004u, "Percentage of aim assist range where max far assist slow down is applied");
  DCONST_DVARFLT_aim_slowdown_far_assist_min_range_factor = Dvar_RegisterFloat("aim_slowdown_far_assist_min_range_factor", 0.2, 0.0, 1.0, 0x40004u, "Percentage of aim assist range where far assist slow down starts to be applied");
  DCONST_DVARFLT_aim_slowdown_far_region_width = Dvar_RegisterFloat("aim_slowdown_far_region_width", 90.0, 0.0, 200.0, 0x40004u, "The screen height of the FAR aim assist slowdown region");
  DCONST_DVARFLT_aim_slowdown_far_region_height = Dvar_RegisterFloat("aim_slowdown_far_region_height", 66.599998, 0.0, 200.0, 0x40004u, "The screen height of the FAR aim assist slowdown region");
  DCONST_DVARFLT_aim_slowdown_full_stick_threshold = Dvar_RegisterFloat("aim_slowdown_full_stick_threshold", 1.1, 0.0, 1.1, 0x40004u, "The magnitude of the input above which ignores all aim assist");
  DCONST_DVARFLT_aim_slowdown_near_miss_deflection_dot = Dvar_RegisterFloat("aim_slowdown_near_miss_deflection_dot", -0.1, -1.0, 0.0, 0x40004u, "Dot product that describes near miss angle for enhanced aim assist; dot angle greater than this angle will apply slowdown");
  DCONST_DVARFLT_aim_slowdown_box_reduction_range_min = Dvar_RegisterFloat("aim_slowdown_box_reduction_range_min", 2048.0, 0.0, 10000.0, 0x40004u, "Longest range of aim assist target to shrink slowdown box");
  DCONST_DVARFLT_aim_slowdown_box_reduction_range_max = Dvar_RegisterFloat("aim_slowdown_box_reduction_range_max", 4096.0, 0.0, 10000.0, 0x40004u, "Closest range of aim assist target where slowdown box size is normal");
  DCONST_DVARFLT_aim_slowdown_box_reduction_max_percent = Dvar_RegisterFloat("aim_slowdown_box_reduction_max_percent", 0.44999999, 0.0, 1.0, 0x40004u, "Percentage to shrink the aim assist and lock on boxes at max range");
  DCONST_DVARFLT_aim_lockon_height_change_strength = Dvar_RegisterFloat("aim_lockon_height_change_strength", 0.0, 0.0, 1.0, 0x40004u, "The amount of aim assistance given by the target lock on when target changes height usually through stance change");
  DVARFLT_aim_autoAimRangeScale = Dvar_RegisterFloat("MRNRLLPTNK", 1.0, 0.0, 2.0, 0x44u, "Scales the weapon's auto aim range");
  DVARFLT_aim_lockon_deflection = Dvar_RegisterFloat("NQOMMSSMNT", 0.050000001, 0.0, 1.0, 0x44u, "The amount of stick deflection for the lockon to activate");
  DVARFLT_aim_lockon_region_width = Dvar_RegisterFloat("MKRKSPRLLT", 90.0, 0.0, 640.0, 0x44u, "The width of the auto aim region in virtual screen coordinates(0-640)");
  DVARFLT_aim_lockon_region_height = Dvar_RegisterFloat("MRROROQKQQ", 90.0, 0.0, 480.0, 0x44u, "The height of the auto aim region in virtual screen coordinates(0-480)");
  v124 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v124 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_aim_lockon_strength_mult = Dvar_RegisterFloat("MMOOKLNONM", 1.0, 0.0, 1000.0, v124, "Extra multiplier for the amount of aim assistance given by the target lock on, default is no change.");
  v125 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v125 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_aim_lockon_strength_pitch_mult = Dvar_RegisterFloat("LKPTPTSPOP", 1.0, 0.0, 1000.0, v125, "Extra multiplier for the amount of aim assistance given by the target lock on for pitch.");
  DVARBOOL_aim_resist_pitch_enabled = Dvar_RegisterBool("OKSTSKLQQQ", 1, 4u, "Aim resist pitch applies resistance to the input at the edges of the view cone when the view cone is locked");
  DVARBOOL_aim_resist_yaw_enabled = Dvar_RegisterBool("QOQRRPPPT", 1, 4u, "Aim resist yaw applies resistance to the input at the edges of the view cone when the view cone is locked");
  DVARFLT_aim_resist_view_threshold = Dvar_RegisterFloat("NMQORRQKRT", 0.0099999998, 0.0, 1.0, 4u, "The minimum input threshold to apply resistance to (0-1)");
  DVARVEC2_aim_slowdown_wallrun_scale = Dvar_RegisterVec2("MQRSRNLR", 1.0, 1.0, 0.0, 1.0, 4u, "Scale aim slowdown by this value while wallrunning (pitch, yaw).");
  DVARVEC2_aim_lockon_wallrun_scale = Dvar_RegisterVec2("NNKSRRNOLO", 1.0, 1.0, 0.0, 1.0, 4u, "Scale aim lockon by this value while wallrunning (pitch, yaw).");
  DVARVEC2_aim_slowdown_wallrunjump_scale = Dvar_RegisterVec2("MTOQSKOLL", 1.0, 1.0, 0.0, 1.0, 4u, "Scale aim slowdown by this value after jump/fall from a wallrun (pitch, yaw).");
  DVARVEC2_aim_lockon_wallrunjump_scale = Dvar_RegisterVec2("NSLSMQTMSS", 1.0, 1.0, 0.0, 1.0, 4u, "Scale aim lockon by this value after jump/fall from a wallrun (pitch, yaw).");
  DVARINT_aim_wallrunjump_duration = Dvar_RegisterInt("LPNTMKLSSR", 1500, 0, 0x7FFFFFFF, 4u, "Duration (milliseconds) that aim_*_wallrunjump_scale is applied after beginning wallrun jump/fall.");
  DVARVEC2_aim_slowdown_thrustjump_scale = Dvar_RegisterVec2("MKKPMNNPQK", 1.0, 1.0, 0.0, 1.0, 4u, "Scale aim slowdown by this value while thrust jumping (pitch, yaw).");
  DVARVEC2_aim_lockon_thrustjump_scale = Dvar_RegisterVec2("MLOMMRLKRL", 1.0, 1.0, 0.0, 1.0, 4u, "Scale aim lockon by this value while thrust jumping (pitch, yaw).");
  DVARINT_aim_thrustjump_duration = Dvar_RegisterInt("NOTMMNOSQO", 1500, 0, 0x7FFFFFFF, 4u, "Duration (milliseconds) that aim_*_thrustjump_scale is applied after releasing jump thrust.");
  DVARVEC2_aim_slowdown_slide_scale = Dvar_RegisterVec2("LOOSQMLOLN", 1.0, 1.0, 0.0, 1.0, 4u, "Scale aim slowdown by this value while sliding (pitch, yaw).");
  DVARVEC2_aim_lockon_slide_scale = Dvar_RegisterVec2("TKPMPLQQ", 1.0, 1.0, 0.0, 1.0, 4u, "Scale aim lockon by this value while sliding (pitch, yaw).");
  DVARBOOL_cg_vectorFieldsForceUniform = Dvar_RegisterBool("MKTLKSMQLP", 0, 0x40u, "Forces all vector field assets to represent a single, uniform direction");
  DVARINT_cg_vectorFieldsDraw = Dvar_RegisterInt("OLTNTMNKOQ", 0, 0, 2, 4u, "Enables debug drawing of vector field instances. (0=off, 1=no depth test, 2=depth test)");
  DVARFLT_cg_vectorFieldsDrawForceScale = Dvar_RegisterFloat("LOKPMTSNSR", 60.0, 0.0, 1000.0, 4u, "Scaling factor on the size of the vectors for force type vector fields");
  DVARFLT_cg_vectorFieldsDrawVelocityScale = Dvar_RegisterFloat("NKRPSQMNMP", 1.0, 0.0, 1000.0, 4u, "Scaling factor on the size of the vectors for velocity type vector fields");
  DVARFLT_cg_vectorFieldsDrawBoxDist = Dvar_RegisterFloat("OLPPQMOMTR", 5000.0, 1.0, 100000.0, 4u, "Distance at which the boxes of vector fields stop drawing.");
  DVARFLT_cg_vectorFieldsDrawEntryDist = Dvar_RegisterFloat("NMORSNOTOS", 1000.0, 1.0, 100000.0, 4u, "Distance at which the entries of vector fields stop drawing.");
  DCONST_DVARVEC4_cg_hudGrenadeColorThrowback = Dvar_RegisterVec4("cg_hudGrenadeColorThrowback", 0.75, 0.75, 0.75, 1.0, 0.0, 1.0, 0x40004u, "The color of the grenade throwback icon");
  DCONST_DVARVEC4_cg_hudGrenadeColorInProximity = Dvar_RegisterVec4("cg_hudGrenadeColorInProximity", 1.0, 0.1, 0.1, 1.0, 0.0, 1.0, 0x40004u, "The color of the grenade icon when in proximity to a grenade");
  DCONST_DVARVEC4_cg_hudGrenadeColorDangerClose = Dvar_RegisterVec4("cg_hudGrenadeColorDangerClose", 1.0, 0.1, 0.1, 1.0, 0.0, 1.0, 0x40004u, "The color of the grenade icon when the player will be in danger of dying");
  DCONST_DVARFLT_cg_hudGrenadeDangerCloseDistance = Dvar_RegisterFloat("cg_hudGrenadeDangerCloseDistance", 70.0, 0.0, 1000.0, 0x40004u, "The distance within which the icon color will always be cg_hudGrenadeColorDangerClose");
  v126 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v126 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPBOOL_cg_drawDamageFlash = Dvar_RegisterBool("MRSTSRLQKL", 0, v126, "Draw flash when hit.");
  DCONST_DVARBOOL_cg_hudDamageIconInScope = Dvar_RegisterBool("cg_hudDamageIconInScope", 0, 0x40004u, "Draw damage icons when aiming down the sight of a scoped weapon");
  DCONST_DVARFLT_cg_hudDamageIconWidth = Dvar_RegisterFloat("cg_hudDamageIconWidth", 128.0, 0.0, 512.0, 0x40004u, "The width of the damage icon");
  DCONST_DVARFLT_cg_hudDamageIconHeight = Dvar_RegisterFloat("cg_hudDamageIconHeight", 64.0, 0.0, 512.0, 0x40004u, "The height of the damage icon");
  DCONST_DVARFLT_cg_hudDamageIconOffset = Dvar_RegisterFloat("cg_hudDamageIconOffset", 128.0, 0.0, 512.0, 0x40004u, "The offset from the center of the damage icon");
  DCONST_DVARFLT_cg_hudRicochetDamageIconWidth = Dvar_RegisterFloat("cg_hudRicochetDamageIconWidth", 380.0, 0.0, 512.0, 0x40004u, "The width of the ricochet damage icon");
  DCONST_DVARFLT_cg_hudRicochetDamageIconHeight = Dvar_RegisterFloat("cg_hudRicochetDamageIconHeight", 190.0, 0.0, 512.0, 0x40004u, "The height of the ricochet damage icon");
  DCONST_DVARFLT_cg_hudRicochetDamageIconOffset = Dvar_RegisterFloat("cg_hudRicochetDamageIconOffset", 0.0, 0.0, 512.0, 0x40004u, "The offset from the center of the ricochet damage icon");
  DCONST_DVARFLT_cg_hudGrenadeIconMaxHeight = Dvar_RegisterFloat("cg_hudGrenadeIconMaxHeight", 104.0, 0.0, 1000.0, 0x40004u, "The minimum height difference between a player and a grenade for the grenade to be shown on the grenade indicator");
  DCONST_DVARBOOL_cg_hudGrenadeIconEnabledFlash = Dvar_RegisterBool("cg_hudGrenadeIconEnabledFlash", 0, 0x40004u, "Show the grenade indicator for flash grenades");
  DCONST_DVARFLT_cg_hudGrenadeIconMaxRangeFlash = Dvar_RegisterFloat("cg_hudGrenadeIconMaxRangeFlash", 500.0, 0.0, 2000.0, 0x40004u, "The maximum distance that a flashbang can be from a player in order to be shown on the grenade indicator");
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v3 = 262276;
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm { vpcmpeqd xmm4, xmm0, xmm1 }
  _XMM0 = LODWORD(FLOAT_250_0);
  __asm { vblendvps xmm0, xmm0, xmm2, xmm4 }
  DCONST_DVARMPFLT_cg_hudGrenadeIconMaxRangeFrag = Dvar_RegisterFloat("LLQPMRNTP", *(float *)&_XMM0, 0.0, 1000.0, v3, "The minimum distance that a grenade has to be from a player in order to be shown on the grenade indicator");
  DCONST_DVARFLT_cg_hudGrenadePointerPulseFreq = Dvar_RegisterFloat("cg_hudGrenadePointerPulseFreq", 1.7, 0.1, 50.0, 0x40004u, "The number of times per second that the grenade indicator flashes in Hertz");
  DCONST_DVARFLT_cg_hudGrenadePointerPulseMax = Dvar_RegisterFloat("cg_hudGrenadePointerPulseMax", 1.85, 0.0, 3.0, 0x40004u, "The maximum alpha of the grenade indicator pulse. Values higher than 1 will cause the indicator to remain at full brightness for longer");
  DCONST_DVARFLT_cg_hudGrenadePointerPulseMin = Dvar_RegisterFloat("cg_hudGrenadePointerPulseMin", 0.30000001, -3.0, 1.0, 0x40004u, "The minimum alpha of the grenade indicator pulse. Values lower than 0 will cause the indicator to remain at full transparency for longer");
  v131 = Com_GameMode_GetActiveGameMode();
  DVARBOOL_cg_hudGrenadeIconInScope = Dvar_RegisterBool("NNOKMOPPPP", v131 == 1, 4u, "Show the grenade indicator when aiming down the sight of a scoped weapon");
  DCONST_DVARFLT_cg_hudGrenadeIconWidth = Dvar_RegisterFloat("cg_hudGrenadeIconWidth", 25.0, 0.0, 512.0, 0x40004u, "The width of the grenade indicator icon");
  DCONST_DVARFLT_cg_hudGrenadeIconHeight = Dvar_RegisterFloat("cg_hudGrenadeIconHeight", 25.0, 0.0, 512.0, 0x40004u, "The height of the grenade indicator icon");
  DCONST_DVARFLT_cg_hudGrenadeIconWidthMin = Dvar_RegisterFloat("cg_hudGrenadeIconWidthMin", 15.0, 0.0, 512.0, 0x40004u, "The minimum width the grenade indicator icon will shrink to when the player is moving away");
  DCONST_DVARFLT_cg_hudGrenadeIconHeightMin = Dvar_RegisterFloat("cg_hudGrenadeIconHeightMin", 15.0, 0.0, 512.0, 0x40004u, "The minimum height the grenade indicator icon will shrink to when the player is moving away");
  DCONST_DVARFLT_cg_hudGrenadePointerWidth = Dvar_RegisterFloat("cg_hudGrenadePointerWidth", 12.0, 0.0, 512.0, 0x40004u, "The width of the grenade indicator pointer");
  DCONST_DVARFLT_cg_hudGrenadePointerHeight = Dvar_RegisterFloat("cg_hudGrenadePointerHeight", 12.0, 0.0, 512.0, 0x40004u, "The height of the grenade indicator pointer");
  DCONST_DVARFLT_cg_hudGrenadeIconOffset = Dvar_RegisterFloat("cg_hudGrenadeIconOffset", 50.0, 0.0, 512.0, 0x40004u, "The offset from the center of the screen for a grenade icon");
  DCONST_DVARVEC2_cg_hudGrenadePointerPivot = Dvar_RegisterVec2("cg_hudGrenadePointerPivot", 6.0, 24.0, 0.0, 512.0, 0x40004u, "The pivot point of the grenade indicator pointer");
  DCONST_DVARFLT_cg_hudGrenadeIconWidthSplitscreen = Dvar_RegisterFloat("cg_hudGrenadeIconWidthSplitscreen", 37.5, 0.0, 512.0, 0x40004u, "The width of the grenade indicator icon");
  DCONST_DVARFLT_cg_hudGrenadeIconHeightSplitscreen = Dvar_RegisterFloat("cg_hudGrenadeIconHeightSplitscreen", 37.5, 0.0, 512.0, 0x40004u, "The height of the grenade indicator icon");
  DCONST_DVARFLT_cg_hudGrenadeIconWidthMinSplitscreen = Dvar_RegisterFloat("cg_hudGrenadeIconWidthMinSplitscreen", 20.0, 0.0, 512.0, 0x40004u, "The minimum width the grenade indicator icon will shrink to when the player is moving away");
  DCONST_DVARFLT_cg_hudGrenadeIconHeightMinSplitscreen = Dvar_RegisterFloat("cg_hudGrenadeIconHeightMinSplitscreen", 20.0, 0.0, 512.0, 0x40004u, "The minimum height the grenade indicator icon will shrink to when the player is moving away");
  DCONST_DVARFLT_cg_hudGrenadePointerWidthSplitscreen = Dvar_RegisterFloat("cg_hudGrenadePointerWidthSplitscreen", 20.0, 0.0, 512.0, 0x40004u, "The width of the grenade indicator pointer");
  DCONST_DVARFLT_cg_hudGrenadePointerHeightSplitscreen = Dvar_RegisterFloat("cg_hudGrenadePointerHeightSplitscreen", 20.0, 0.0, 512.0, 0x40004u, "The height of the grenade indicator pointer");
  DCONST_DVARFLT_cg_hudGrenadeIconOffsetSplitscreen = Dvar_RegisterFloat("cg_hudGrenadeIconOffsetSplitscreen", 75.0, 0.0, 512.0, 0x40004u, "The offset from the center of the screen for a grenade icon");
  DCONST_DVARVEC2_cg_hudGrenadePointerPivotSplitscreen = Dvar_RegisterVec2("cg_hudGrenadePointerPivotSplitscreen", 10.0, 40.0, 0.0, 512.0, 0x40004u, "The pivot point of the grenade indicator pointer");
  DVARFLT_cg_rumble_devgui_duration = Dvar_RegisterFloat("NRRLNTQNOL", 1.0, 0.0099999998, 10.0, 0, "Duration of rumble");
  DVARBOOL_cg_rumble_devgui_loop = Dvar_RegisterBool("MNLPRKLTRP", 0, 0, "Enable a looping rumble");
  DCONST_DVARFLT_cg_rumble_xb3_hf_mult = Dvar_RegisterFloat("cg_rumble_xb3_hf_mult", 0.30000001, 0.1, 10.0, 0x40004u, "Multiplier applied to the high frequency rumble motor on the xb3 in order to normalize it with other sources.");
  DCONST_DVARFLT_cg_rumble_xb3_lf_mult = Dvar_RegisterFloat("cg_rumble_xb3_lf_mult", 0.30000001, 0.1, 10.0, 0x40004u, "Multiplier applied to the low frequency rumble motor on the xb3 in order to normalize it with other sources.");
  DCONST_DVARFLT_cg_rumble_xb3_tr_mult = Dvar_RegisterFloat("cg_rumble_xb3_tr_mult", 0.30000001, 0.1, 10.0, 0x40004u, "Multiplier applied to the trigger rumble motors on the xb3 in order to normalize it with other sources.");
  DCONST_DVARINT_s_scriptable_explCamShakeDuration = Dvar_RegisterInt("s_scriptable_explCamShakeDuration", 2000, 1, 100000, 0x40004u, "Duration, in MS, that a camera shake should last for during an explosion");
  DCONST_DVARFLT_s_scriptable_explCamShakeScale = Dvar_RegisterFloat("s_scriptable_explCamShakeScale", 0.25, 0.0, 1.0, 0x40004u, "Scale applied to the camera shake. Higher means more shaking.");
  DCONST_DVARFLT_s_scriptable_explCamShakeRadiusMultiplier = Dvar_RegisterFloat("s_scriptable_explCamShakeRadiusMultiplier", 1.25, 0.0, 10.0, 0x40004u, "Multiplier applied to the outer radius of an explosion event to trigger the shake within.");
  DCONST_DVARBOOL_scriptable_debug_melee = Dvar_RegisterBool("scriptable_debug_melee", 0, 0x40004u, "Debug melee for scriptables");
  DCONST_DVARBOOL_scriptable_debug_vehicle_client = Dvar_RegisterBool("scriptable_debug_vehicle_client", 0, 0x40004u, "Debug vehicle client damage for scriptables");
  DCONST_DVARBOOL_scriptable_debug_impact = Dvar_RegisterBool("scriptable_debug_impact", 0, 0x40004u, "Debug impact for scriptables");
  DVARBOOL_scriptable_light_radiusscale = Dvar_RegisterBool("OLSTQTTPLO", 0, 4u, "Enable radiusMinScale and radiusMaxScale for scriptable lights");
  DCONST_DVARFLT_scriptable_spatialViewRadiusMax = Dvar_RegisterFloat("scriptable_spatialViewRadiusMax", 3000.0, 500.0, 10000.0, 0x40004u, "Max distance that any client-model based standalone scriptable (brloot mostly) can be seen from.");
  DCONST_DVARBOOL_scriptable_lootPingActive = Dvar_RegisterBool("scriptable_lootPingActive", 1, 0x40004u, "If true, draw a ping marker for loot based scriptables");
  DCONST_DVARFLT_scriptable_lootPingRadius = Dvar_RegisterFloat("scriptable_lootPingRadius", 600.0, 500.0, 10000.0, 0x40004u, "Max distance that the ping FX marker will appear for loot");
  DCONST_DVARFLT_scriptable_lootPingWidth = Dvar_RegisterFloat("scriptable_lootPingWidth", 10.0, 1.0, 100.0, 0x40004u, "Size of the box you must point at in order to get the loot ping popup message");
  DCONST_DVARFLT_scriptable_lootPingHeight = Dvar_RegisterFloat("scriptable_lootPingHeight", 25.0, 1.0, 100.0, 0x40004u, "Size of the box you must point at in order to get the loot ping popup message");
  DCONST_DVARFLT_scriptable_lootPopupRadius = Dvar_RegisterFloat("scriptable_lootPopupRadius", 600.0, 250.0, 10000.0, 0x40004u, "Max distance that the ping UI will appear for loot");
  DVARINT_scriptable_lootOutlineColor = Dvar_RegisterInt("NRRKTONLNK", 0, 0, 5, 0, "Outline color for loot, 0=white, 1=black, 2=loot rarity color");
  DCONST_DVARBOOL_scriptable_loot_fx_enabled = Dvar_RegisterBool("scriptable_loot_fx_enabled", 1, 0x40004u, "Enable loot beams and trails");
  DCONST_DVARBOOL_scriptable_loot_fx_debug = Dvar_RegisterBool("scriptable_loot_fx_debug", 0, 0x40004u, "Draw lines where the loot FX would be");
  DVARBOOL_scriptable_particle_event_debug = Dvar_RegisterBool("LSNOSMOSRO", 0, 4u, "Turn on/off particle event debugging for scriptable system");
  DCONST_DVARBOOL_scriptable_debug_spatial_3d = Dvar_RegisterBool("scriptable_debug_spatial_3d", 0, 0x40004u, "Debug melee for scriptables");
  DCONST_DVARBOOL_scriptable_debug_spatial_tree = Dvar_RegisterBool("scriptable_debug_spatial_tree", 0, 0x40004u, "Debug melee for scriptables");
  DCONST_DVARBOOL_scriptable_debug_spatial_overlay = Dvar_RegisterBool("scriptable_debug_spatial_overlay", 0, 0x40004u, "Debug melee for scriptables");
  DCONST_DVARBOOL_scriptable_debug_loot = Dvar_RegisterBool("scriptable_debug_loot", 0, 0x40004u, "Debug loot scriptables");
  DVARBOOL_mayhem_debugNotetracks = Dvar_RegisterBool("NOTTPOPTSQ", 0, 4u, "Enable display of mayhem notetrack debug info.");
  DVARBOOL_mayhem_entInfo = Dvar_RegisterBool("MMKKTLQSPK", 0, 4u, "Enable display of mayhem entity info.");
  DVARBOOL_mayhem_lerpSelfVis = Dvar_RegisterBool("MSKSKSPQRM", 1, 4u, "Enable mayhem self-vis feature.");
  DVARINT_mayhem_debugEnt = Dvar_RegisterInt("NTRRSSRPNR", -1, -1, 1024, 4u, "Debug a specific mayhem entity.");
  DVARFLT_mayhem_debugEntTime = Dvar_RegisterFloat("NTTNLOQNQS", -1.0, -1.0, 100.0, 4u, "Force time for mayhem entity selected by mayhem_debugEnt.");
  DVARFLT_mayhem_debugEntTimeScale = Dvar_RegisterFloat("MLLNNONLSK", 0.1, 0.000001, 10.0, 4u, "Time scale for mayhem_debugEntTime.");
  DVARBOOL_cg_ClientModel_Debug_ShowModels = Dvar_RegisterBool("LSMPOPSTSQ", 0, 4u, "ClientModel: Debug draw: Show all Models");
  DVARINT_cg_ClientModel_Debug_ShowModelDetails = Dvar_RegisterInt("MRKKNTKQQR", -1, -1, 384, 4u, "ClientModel: Debug draw: Show details for a specific Model");
  DVARINT_cg_ClientModel_Debug_DisplayOffsetX = Dvar_RegisterInt("LSTMOPLRK", 0, -500, 500, 4u, "ClientModel: Debug draw: Move the screen text in the X direction");
  DVARINT_cg_ClientModel_Debug_DisplayOffsetY = Dvar_RegisterInt("MMQLSQOQKN", 0, -15000, 500, 4u, "ClientModel: Debug draw: Move the screen text in the Y direction");
  DVARBOOL_cg_ClientModel_Debug_Dump = Dvar_RegisterBool("MQSLRKMLLN", 0, 4u, "ClientModel: Debug draw: Dump output to TTY");
  DVARBOOL_cg_entityWorkers = Dvar_RegisterBool("MTLOPLPKKS", 1, 0, "Enabled distributed entity processing across worker commands");
  DCONST_DVARBOOL_cg_entityWorkersCritSecLegacyMode = Dvar_RegisterBool("cg_entityWorkersCritSecLegacyMode", 0, 0x40004u, "Disables the new entity worker critical sections and falls back to the old critical sections.");
  DCONST_DVARBOOL_cg_entityWorkersCostBalancing = Dvar_RegisterBool("cg_entityWorkersCostBalancing", 1, 0x40004u, "Set to enable entity workers cost-based load balancing. Enabled for multiplayer only (ENTITY_WORKER_LOAD_BALANCING)");
  DCONST_DVARBOOL_cg_entityWorkersPhysicsCheckLocks = Dvar_RegisterBool("cg_entityWorkersPhysicsCheckLocks", 1, 0x40004u, "Sets whether to use the physics Lock Check mode. Enables asserts.");
  DCONST_DVARBOOL_cg_entityWorkersBufferedOutput = Dvar_RegisterBool("cg_entityWorkersBufferedOutput", 1, 0x40004u, "Enable to turn on entity buffered worker requests");
  DCONST_DVARINT_cg_event_forceLod = Dvar_RegisterEnum("cg_event_forceLod", g_cgEventForceLodNames, 6, 0x40004u, "Force all cg event level of detail to this level");
  DCONST_DVARFLT_cg_eventLodDistance_Lod0 = Dvar_RegisterFloat("cg_eventLodDistance_Lod0", 120.0, 0.0, 3.4028235e38, 0x40004u, "Maximum cg event lod0 distance.");
  DCONST_DVARFLT_cg_eventLodDistance_Lod1 = Dvar_RegisterFloat("cg_eventLodDistance_Lod1", 1200.0, 0.0, 3.4028235e38, 0x40004u, "Maximum cg event lod1 distance.");
  DCONST_DVARFLT_cg_eventLodDistance_Lod2 = Dvar_RegisterFloat("cg_eventLodDistance_Lod2", 6000.0, 0.0, 3.4028235e38, 0x40004u, "Maximum cg event lod2 distance.");
  DCONST_DVARFLT_cg_eventLodDistance_Lod3 = Dvar_RegisterFloat("cg_eventLodDistance_Lod3", 12000.0, 0.0, 3.4028235e38, 0x40004u, "Maximum cg event lod3 distance.");
  DCONST_DVARFLT_cg_eventLod_NarrowFOV = Dvar_RegisterFloat("cg_eventLod_NarrowFOV", 40.0, 0.0, 120.0, 0x40004u, "Events within this FOV are prioritized.");
  DCONST_DVARFLT_cg_eventLod_FOVbubble = Dvar_RegisterFloat("cg_eventLod_FOVbubble", 36.0, 0.0, 3.4028235e38, 0x40004u, "Cg events are considered to be within FOV if within this distance regardless of actual FOV");
  DCONST_DVARINT_cg_event_playerAnimCalcFrameCount = Dvar_RegisterInt("cg_event_playerAnimCalcFrameCount", 20, 0, 200, 0x40004u, "Maximum number of player anim calcs for events per frame.");
  DCONST_DVARINT_cg_event_forceNetfieldLod = Dvar_RegisterEnum("cg_event_forceNetfieldLod", g_cgEventForceNetfieldLodNames, 0, 0x40004u, "Force netfield lod events.");
  DCONST_DVARBOOL_cg_event_enableDroppedLowLodEventWarning = Dvar_RegisterBool("cg_event_enableDroppedLowLodEventWarning", 0, 0x40004u, "Enable warning about dropped lowLodEvents");
  DVARINT_cg_event_debugAnalytics_Type = Dvar_RegisterEnum("MQRKPSPOKP", g_cgEventDebugTypeNames, 9, 4u, "Display analytics for event lod type");
  DVARBOOL_cg_event_debugAnalytics_overBudgetSkipped = Dvar_RegisterBool("LNNKSNTKLS", 0, 4u, "Display analytics for events skipped due to budget.");
  g_CG_HudLighting_Dvars.fadeSharpness = Dvar_RegisterFloat("NPLTQSPNRL", s_CG_HudLighting_default_fadeSharpness, 0.0, 100.0, 0x40u, "This controls how sharp the lines are when fading using the mask alpha.  Higher values are sharper.");
  g_CG_HudLighting_Dvars.modes[0].specExponent = Dvar_RegisterFloat("MLQKLMSRST", s_CG_HudLighting_modeConfigs[0].specExponent, 0.0, 100.0, 0x40u, "[basic] Specular exponent.  Higher values result in sharper highlights.");
  g_CG_HudLighting_Dvars.modes[0].lights[0].lum.scale = Dvar_RegisterFloat("MNNSLRRMNL", s_CG_HudLighting_modeConfigs[0].lights[0].lum.scale, 0.0, 10.0, 0x40u, "[basic] Scale applied to ambient light luminance.");
  g_CG_HudLighting_Dvars.modes[0].lights[0].lum.offset = Dvar_RegisterFloat("NPLMROSQKM", s_CG_HudLighting_modeConfigs[0].lights[0].lum.offset, -10.0, 10.0, 0x40u, "[basic] Offset applied to ambient light luminance.");
  g_CG_HudLighting_Dvars.modes[0].lights[0].color.scale = Dvar_RegisterVec3Color("LLOLKOLPMN", s_CG_HudLighting_modeConfigs[0].lights[0].color.scale.v[0], s_CG_HudLighting_modeConfigs[0].lights[0].color.scale.v[1], s_CG_HudLighting_modeConfigs[0].lights[0].color.scale.v[2], 10.0, 0x40u, "[basic] Scale applied to ambient light color.");
  g_CG_HudLighting_Dvars.modes[0].lights[0].color.offset = Dvar_RegisterVec3Color("LLQLKSMMTO", s_CG_HudLighting_modeConfigs[0].lights[0].color.offset.v[0], s_CG_HudLighting_modeConfigs[0].lights[0].color.offset.v[1], s_CG_HudLighting_modeConfigs[0].lights[0].color.offset.v[2], 10.0, 0x40u, "[basic] Offset applied to ambient light color.");
  g_CG_HudLighting_Dvars.modes[0].lights[1].lum.scale = Dvar_RegisterFloat("MLQMNPQNOP", s_CG_HudLighting_modeConfigs[0].lights[1].lum.scale, 0.0, 10.0, 0x40u, "[basic] Scale applied to diffuse light luminance.");
  g_CG_HudLighting_Dvars.modes[0].lights[1].lum.offset = Dvar_RegisterFloat("MPQLRTKSPM", s_CG_HudLighting_modeConfigs[0].lights[1].lum.offset, -10.0, 10.0, 0x40u, "[basic] Offset applied to diffuse light luminance.");
  g_CG_HudLighting_Dvars.modes[0].lights[1].color.scale = Dvar_RegisterVec3Color("MNQRLPRQOP", s_CG_HudLighting_modeConfigs[0].lights[1].color.scale.v[0], s_CG_HudLighting_modeConfigs[0].lights[1].color.scale.v[1], s_CG_HudLighting_modeConfigs[0].lights[1].color.scale.v[2], 10.0, 0x40u, "[basic] Scale applied to diffuse light color.");
  g_CG_HudLighting_Dvars.modes[0].lights[1].color.offset = Dvar_RegisterVec3Color("OLPKRPRLPM", s_CG_HudLighting_modeConfigs[0].lights[1].color.offset.v[0], s_CG_HudLighting_modeConfigs[0].lights[1].color.offset.v[1], s_CG_HudLighting_modeConfigs[0].lights[1].color.offset.v[2], 10.0, 0x40u, "[basic] Offset applied to diffuse light color.");
  g_CG_HudLighting_Dvars.modes[0].lights[2].lum.scale = Dvar_RegisterFloat("TMQTSMRPS", s_CG_HudLighting_modeConfigs[0].lights[2].lum.scale, 0.0, 10.0, 0x40u, "[basic] Scale applied to spec light luminance.");
  g_CG_HudLighting_Dvars.modes[0].lights[2].lum.offset = Dvar_RegisterFloat("LTTOPRNTON", s_CG_HudLighting_modeConfigs[0].lights[2].lum.offset, -10.0, 10.0, 0x40u, "[basic] Offset applied to spec light luminance.");
  g_CG_HudLighting_Dvars.modes[0].lights[2].color.scale = Dvar_RegisterVec3Color("LMLLSTRMSQ", s_CG_HudLighting_modeConfigs[0].lights[2].color.scale.v[0], s_CG_HudLighting_modeConfigs[0].lights[2].color.scale.v[1], s_CG_HudLighting_modeConfigs[0].lights[2].color.scale.v[2], 10.0, 0x40u, "[basic] Scale applied to spec light color.");
  g_CG_HudLighting_Dvars.modes[0].lights[2].color.offset = Dvar_RegisterVec3Color("RORQSKTLT", s_CG_HudLighting_modeConfigs[0].lights[2].color.offset.v[0], s_CG_HudLighting_modeConfigs[0].lights[2].color.offset.v[1], s_CG_HudLighting_modeConfigs[0].lights[2].color.offset.v[2], 10.0, 0x40u, "[basic] Offset applied to spec light color.");
  g_CG_HudLighting_Dvars.modes[0].lights[3].lum.scale = Dvar_RegisterFloat("OKTLSQMTOP", s_CG_HudLighting_modeConfigs[0].lights[3].lum.scale, 0.0, 10.0, 0x40u, "[basic] Scale applied to additive light luminance.");
  g_CG_HudLighting_Dvars.modes[0].lights[3].lum.offset = Dvar_RegisterFloat("NTNLSSTMQK", s_CG_HudLighting_modeConfigs[0].lights[3].lum.offset, -10.0, 10.0, 0x40u, "[basic] Offset applied to additive light luminance.");
  g_CG_HudLighting_Dvars.modes[0].lights[3].color.scale = Dvar_RegisterVec3Color("PORQNRQP", s_CG_HudLighting_modeConfigs[0].lights[3].color.scale.v[0], s_CG_HudLighting_modeConfigs[0].lights[3].color.scale.v[1], s_CG_HudLighting_modeConfigs[0].lights[3].color.scale.v[2], 10.0, 0x40u, "[basic] Scale applied to additive light color.");
  g_CG_HudLighting_Dvars.modes[0].lights[3].color.offset = Dvar_RegisterVec3Color("LPNRRKQQQO", s_CG_HudLighting_modeConfigs[0].lights[3].color.offset.v[0], s_CG_HudLighting_modeConfigs[0].lights[3].color.offset.v[1], s_CG_HudLighting_modeConfigs[0].lights[3].color.offset.v[2], 10.0, 0x40u, "[basic] Offset applied to additive light color.");
  g_CG_HudLighting_Dvars.modes[1].specExponent = Dvar_RegisterFloat("MMPRQRSPOP", s_CG_HudLighting_modeConfigs[1].specExponent, 0.0, 100.0, 0x40u, "[blood] Specular exponent.  Higher values result in sharper highlights.");
  g_CG_HudLighting_Dvars.modes[1].lights[0].lum.scale = Dvar_RegisterFloat("NLQKPRSMLT", s_CG_HudLighting_modeConfigs[1].lights[0].lum.scale, 0.0, 10.0, 0x40u, "[blood] Scale applied to ambient light luminance.");
  g_CG_HudLighting_Dvars.modes[1].lights[0].lum.offset = Dvar_RegisterFloat("NOPLNKORSM", s_CG_HudLighting_modeConfigs[1].lights[0].lum.offset, -10.0, 10.0, 0x40u, "[blood] Offset applied to ambient light luminance.");
  g_CG_HudLighting_Dvars.modes[1].lights[0].color.scale = Dvar_RegisterVec3Color("LKRKKMPKQN", s_CG_HudLighting_modeConfigs[1].lights[0].color.scale.v[0], s_CG_HudLighting_modeConfigs[1].lights[0].color.scale.v[1], s_CG_HudLighting_modeConfigs[1].lights[0].color.scale.v[2], 10.0, 0x40u, "[blood] Scale applied to ambient light color.");
  g_CG_HudLighting_Dvars.modes[1].lights[0].color.offset = Dvar_RegisterVec3Color("MMLKKNQTRS", s_CG_HudLighting_modeConfigs[1].lights[0].color.offset.v[0], s_CG_HudLighting_modeConfigs[1].lights[0].color.offset.v[1], s_CG_HudLighting_modeConfigs[1].lights[0].color.offset.v[2], 10.0, 0x40u, "[blood] Offset applied to ambient light color.");
  g_CG_HudLighting_Dvars.modes[1].lights[1].lum.scale = Dvar_RegisterFloat("TKPTLPSNR", s_CG_HudLighting_modeConfigs[1].lights[1].lum.scale, 0.0, 10.0, 0x40u, "[blood] Scale applied to diffuse light luminance.");
  g_CG_HudLighting_Dvars.modes[1].lights[1].lum.offset = Dvar_RegisterFloat("LSLRLKSNM", s_CG_HudLighting_modeConfigs[1].lights[1].lum.offset, -10.0, 10.0, 0x40u, "[blood] Offset applied to diffuse light luminance.");
  g_CG_HudLighting_Dvars.modes[1].lights[1].color.scale = Dvar_RegisterVec3Color("MTTKNLQQQP", s_CG_HudLighting_modeConfigs[1].lights[1].color.scale.v[0], s_CG_HudLighting_modeConfigs[1].lights[1].color.scale.v[1], s_CG_HudLighting_modeConfigs[1].lights[1].color.scale.v[2], 10.0, 0x40u, "[blood] Scale applied to diffuse light color.");
  g_CG_HudLighting_Dvars.modes[1].lights[1].color.offset = Dvar_RegisterVec3Color("LMRRQQOKO", s_CG_HudLighting_modeConfigs[1].lights[1].color.offset.v[0], s_CG_HudLighting_modeConfigs[1].lights[1].color.offset.v[1], s_CG_HudLighting_modeConfigs[1].lights[1].color.offset.v[2], 10.0, 0x40u, "[blood] Offset applied to diffuse light color.");
  g_CG_HudLighting_Dvars.modes[1].lights[2].lum.scale = Dvar_RegisterFloat("LOLMPNLQLK", s_CG_HudLighting_modeConfigs[1].lights[2].lum.scale, 0.0, 10.0, 0x40u, "[blood] Scale applied to spec light luminance.");
  g_CG_HudLighting_Dvars.modes[1].lights[2].lum.offset = Dvar_RegisterFloat("LNNTTKNOPT", s_CG_HudLighting_modeConfigs[1].lights[2].lum.offset, -10.0, 10.0, 0x40u, "[blood] Offset applied to spec light luminance.");
  g_CG_HudLighting_Dvars.modes[1].lights[2].color.scale = Dvar_RegisterVec3Color("MROQSKORRK", s_CG_HudLighting_modeConfigs[1].lights[2].color.scale.v[0], s_CG_HudLighting_modeConfigs[1].lights[2].color.scale.v[1], s_CG_HudLighting_modeConfigs[1].lights[2].color.scale.v[2], 10.0, 0x40u, "[blood] Scale applied to spec light color.");
  g_CG_HudLighting_Dvars.modes[1].lights[2].color.offset = Dvar_RegisterVec3Color("NOMMPMROTT", s_CG_HudLighting_modeConfigs[1].lights[2].color.offset.v[0], s_CG_HudLighting_modeConfigs[1].lights[2].color.offset.v[1], s_CG_HudLighting_modeConfigs[1].lights[2].color.offset.v[2], 10.0, 0x40u, "[blood] Offset applied to spec light color.");
  g_CG_HudLighting_Dvars.modes[1].lights[3].lum.scale = Dvar_RegisterFloat("SQMPNNMSP", s_CG_HudLighting_modeConfigs[1].lights[3].lum.scale, 0.0, 10.0, 0x40u, "[blood] Scale applied to additive light luminance.");
  g_CG_HudLighting_Dvars.modes[1].lights[3].lum.offset = Dvar_RegisterFloat("LQNPPQNOOS", s_CG_HudLighting_modeConfigs[1].lights[3].lum.offset, -10.0, 10.0, 0x40u, "[blood] Offset applied to additive light luminance.");
  g_CG_HudLighting_Dvars.modes[1].lights[3].color.scale = Dvar_RegisterVec3Color("MNMRPMRPPN", s_CG_HudLighting_modeConfigs[1].lights[3].color.scale.v[0], s_CG_HudLighting_modeConfigs[1].lights[3].color.scale.v[1], s_CG_HudLighting_modeConfigs[1].lights[3].color.scale.v[2], 10.0, 0x40u, "[blood] Scale applied to additive light color.");
  g_CG_HudLighting_Dvars.modes[1].lights[3].color.offset = Dvar_RegisterVec3Color("LPNLLTPOKO", s_CG_HudLighting_modeConfigs[1].lights[3].color.offset.v[0], s_CG_HudLighting_modeConfigs[1].lights[3].color.offset.v[1], s_CG_HudLighting_modeConfigs[1].lights[3].color.offset.v[2], 10.0, 0x40u, "[blood] Offset applied to additive light color.");
}

/*
==============
CG_Main_RegisterShellshocks_Callback
==============
*/
void CG_Main_RegisterShellshocks_Callback(const unsigned int shockIndex, const char *shockName)
{
  shellshock_parms_t *ShellshockParms; 

  if ( !shockIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_main.cpp", 436, ASSERT_TYPE_ASSERT, "(shockIndex != 0)", (const char *)&queryFormat, "shockIndex != 0") )
    __debugbreak();
  if ( !BG_LoadShellShockDvars(shockName) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442BE390, 3i64, shockName);
  ShellshockParms = BG_GetShellshockParms(shockIndex);
  BG_SetShellShockParmsFromDvars(ShellshockParms);
}

/*
==============
CG_Main_RegisterSurfaceEffects
==============
*/
void CG_Main_RegisterSurfaceEffects(const char *filename)
{
  SurfaceFxTable *surfaceFx; 
  __int64 numTableEntry; 
  unsigned __int64 mapPoolBufferSize; 
  char *mapPoolBuffer; 
  unsigned __int64 v6; 
  __int64 v7; 
  char *m_buffer; 
  ntl::internal::pool_allocator_freelist<48> *p_m_freelist; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v11; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *mp_left; 
  int v14; 
  __int64 v15; 
  const ParticleSystemDef *particleSystemDef; 
  ntl::red_black_tree_node_base *v17; 
  ntl::map<ParticleSystemDef const *,unsigned int,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> > *p_m_endNodeBase; 
  bool v19; 
  _QWORD *p_m_buffer; 
  _QWORD *i; 
  _QWORD *v22; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::pair<ParticleSystemDef const *,unsigned int> v24; 
  ntl::red_black_tree_node_base *mp_right; 
  __int64 v26; 
  __int64 v27; 
  ntl::pair<ParticleSystemDef const *,unsigned int> r_element; 
  __m256i v29; 
  ntl::red_black_tree_iterator<ParticleSystemDef const *,ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::pair<ParticleSystemDef const *,unsigned int> *,ntl::pair<ParticleSystemDef const *,unsigned int> &> result; 

  cgMedia.impactFx = CG_RegisterImpactEffects(filename);
  cgMedia.surfaceFx = CG_RegisterSurfaceEffects(filename);
  surfaceFx = cgMedia.surfaceFx;
  cgMediaSurfaceFxMap.ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> > >,48>::m_data.m_buffer = NULL;
  cgMediaSurfaceFxMap.ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> > >,48>::m_data.m_size = 0i64;
  cgMediaSurfaceFxMap.m_freelist.m_head.mp_next = NULL;
  *(_QWORD *)&cgMediaSurfaceFxMap.m_endNodeBase.m_color = 0i64;
  *(_QWORD *)&cgMediaSurfaceFxMap.m_keyAccessor.ntl::unary_function<ntl::pair<ParticleSystemDef const *,unsigned int>,ParticleSystemDef const *> = 0i64;
  cgMediaSurfaceFxMap.m_endNodeBase.mp_left = &cgMediaSurfaceFxMap.m_endNodeBase;
  cgMediaSurfaceFxMap.m_endNodeBase.mp_right = &cgMediaSurfaceFxMap.m_endNodeBase;
  cgMediaSurfaceFxMap.ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator>::ntl::solitary_buffer_allocator::m_data.m_buffer = NULL;
  cgMediaSurfaceFxMap.ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator>::ntl::solitary_buffer_allocator::m_data.m_size = 0i64;
  cgMediaSurfaceFxMap.m_size = 0i64;
  cgMediaSurfaceFxMap.m_endNodeBase.mp_parent = NULL;
  if ( !cgMedia.surfaceFx )
  {
    Com_PrintWarning(14, "Error reading CSV files in the fx directory to identify surface effects");
    return;
  }
  numTableEntry = cgMedia.surfaceFx->numTableEntry;
  if ( (int)numTableEntry > 0 )
  {
    mapPoolBufferSize = cgMedia.surfaceFx->mapPoolBufferSize;
    if ( 48 * numTableEntry > mapPoolBufferSize )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_main.cpp", 520, ASSERT_TYPE_ASSERT, "( requiredBufferSize ) <= ( cgMedia.surfaceFx->mapPoolBufferSize )", "%s <= %s\n\t%i, %i", "requiredBufferSize", "cgMedia.surfaceFx->mapPoolBufferSize", 48 * numTableEntry, mapPoolBufferSize) )
        __debugbreak();
      surfaceFx = cgMedia.surfaceFx;
    }
    mapPoolBuffer = (char *)surfaceFx->mapPoolBuffer;
    v6 = surfaceFx->mapPoolBufferSize;
    if ( !mapPoolBuffer )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start") )
        __debugbreak();
      surfaceFx = cgMedia.surfaceFx;
    }
    cgMediaSurfaceFxMap.ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator>::ntl::solitary_buffer_allocator::m_data.m_buffer = mapPoolBuffer;
    cgMediaSurfaceFxMap.ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator>::ntl::solitary_buffer_allocator::m_data.m_size = v6;
    v7 = surfaceFx->numTableEntry;
    if ( cgMediaSurfaceFxMap.ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> > >,48>::m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 458, ASSERT_TYPE_ASSERT, "( base_type::m_data.begin() == 0 )", (const char *)&queryFormat, "base_type::m_data.begin() == NULL") )
      __debugbreak();
    if ( 48 * v7 > cgMediaSurfaceFxMap.ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator>::ntl::solitary_buffer_allocator::m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 56, ASSERT_TYPE_ASSERT, "( size_bytes <= m_data.size_in_bytes() )", (const char *)&queryFormat, "size_bytes <= m_data.size_in_bytes()") )
      __debugbreak();
    m_buffer = cgMediaSurfaceFxMap.ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator>::ntl::solitary_buffer_allocator::m_data.m_buffer;
    r_element.first = (const ParticleSystemDef *)cgMediaSurfaceFxMap.ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator>::ntl::solitary_buffer_allocator::m_data.m_buffer;
    *(_QWORD *)&r_element.second = v7;
    _XMM0 = r_element;
    cgMediaSurfaceFxMap.ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> > >,48>::m_data = (ntl::internal::buffer_memory_block<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> > >)r_element;
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 52, ASSERT_TYPE_ASSERT, "( num_elements > 0 )", (const char *)&queryFormat, "num_elements > 0") )
      __debugbreak();
    p_m_freelist = &cgMediaSurfaceFxMap.m_freelist;
    v11 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)&m_buffer[48 * v7];
    do
    {
      v11 -= 6;
      v11->mp_next = &p_m_freelist->m_head;
      p_m_freelist = (ntl::internal::pool_allocator_freelist<48> *)v11;
    }
    while ( v11 > (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)m_buffer );
    cgMediaSurfaceFxMap.m_freelist.m_head.mp_next = v11;
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    if ( cgMediaSurfaceFxMap.m_size )
    {
      mp_parent = cgMediaSurfaceFxMap.m_endNodeBase.mp_parent;
      if ( cgMediaSurfaceFxMap.m_endNodeBase.mp_parent )
      {
        do
        {
          ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int>>,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *>>::erase_tree(&cgMediaSurfaceFxMap, (ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> > *)mp_parent->mp_right);
          mp_left = mp_parent->mp_left;
          *(_QWORD *)&mp_parent->m_color = cgMediaSurfaceFxMap.m_freelist.m_head.mp_next;
          cgMediaSurfaceFxMap.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)mp_parent;
          mp_parent = mp_left;
        }
        while ( mp_left );
      }
      cgMediaSurfaceFxMap.m_endNodeBase.mp_parent = NULL;
      cgMediaSurfaceFxMap.m_endNodeBase.mp_left = &cgMediaSurfaceFxMap.m_endNodeBase;
      cgMediaSurfaceFxMap.m_endNodeBase.mp_right = &cgMediaSurfaceFxMap.m_endNodeBase;
      cgMediaSurfaceFxMap.m_size = 0i64;
    }
    v14 = 0;
    if ( cgMedia.surfaceFx->numTableEntry > 0 )
    {
      v15 = 0i64;
      while ( 1 )
      {
        particleSystemDef = cgMedia.surfaceFx->table[v15].baseEffect.particleSystemDef;
        if ( !particleSystemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_main.cpp", 529, ASSERT_TYPE_ASSERT, "(baseEffect.IsValid())", (const char *)&queryFormat, "baseEffect.IsValid()") )
          __debugbreak();
        v17 = cgMediaSurfaceFxMap.m_endNodeBase.mp_parent;
        p_m_endNodeBase = (ntl::map<ParticleSystemDef const *,unsigned int,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> > *)&cgMediaSurfaceFxMap.m_endNodeBase;
        r_element.first = particleSystemDef;
        v19 = 1;
        r_element.second = v14;
        while ( v17 )
        {
          p_m_endNodeBase = (ntl::map<ParticleSystemDef const *,unsigned int,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> > *)v17;
          v19 = (unsigned __int64)particleSystemDef < *(_QWORD *)&v17[1].m_color;
          if ( (unsigned __int64)particleSystemDef >= *(_QWORD *)&v17[1].m_color )
            v17 = v17->mp_right;
          else
            v17 = v17->mp_left;
        }
        p_m_buffer = &p_m_endNodeBase->ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> > >,48>::m_data.m_buffer;
        if ( !v19 )
          goto LABEL_55;
        if ( p_m_endNodeBase != (ntl::map<ParticleSystemDef const *,unsigned int,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> > *)cgMediaSurfaceFxMap.m_endNodeBase.mp_left )
          break;
        ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int>>,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *>>::insert_node(&cgMediaSurfaceFxMap, &result, (ntl::red_black_tree_node_base *)p_m_endNodeBase, &r_element, 1, 0);
LABEL_80:
        ++v14;
        ++v15;
        if ( v14 >= cgMedia.surfaceFx->numTableEntry )
          goto LABEL_81;
      }
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( LODWORD(p_m_endNodeBase->ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> > >,48>::m_data.m_buffer) || *(ntl::map<ParticleSystemDef const *,unsigned int,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> > **)(p_m_endNodeBase->ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> > >,48>::m_data.m_size + 8) != p_m_endNodeBase )
      {
        p_m_buffer = &p_m_endNodeBase->m_freelist.m_head.mp_next->mp_next;
        if ( p_m_buffer )
        {
          for ( i = (_QWORD *)p_m_buffer[3]; i; i = (_QWORD *)i[3] )
            p_m_buffer = i;
        }
        else
        {
          p_m_buffer = (_QWORD *)p_m_endNodeBase->ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> > >,48>::m_data.m_size;
          if ( p_m_endNodeBase == (ntl::map<ParticleSystemDef const *,unsigned int,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> > *)p_m_buffer[2] )
          {
            do
            {
              v22 = p_m_buffer;
              p_m_buffer = (_QWORD *)p_m_buffer[1];
            }
            while ( v22 == (_QWORD *)p_m_buffer[2] );
          }
        }
      }
      else
      {
        p_m_buffer = p_m_endNodeBase->ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator>::ntl::solitary_buffer_allocator::m_data.m_buffer;
      }
LABEL_55:
      if ( !p_m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( p_m_buffer[4] < (unsigned __int64)particleSystemDef )
      {
        if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 694, ASSERT_TYPE_ASSERT, "( p_insert != 0 )", (const char *)&queryFormat, "p_insert != NULL") )
          __debugbreak();
        if ( !cgMediaSurfaceFxMap.m_freelist.m_head.mp_next )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
          if ( !cgMediaSurfaceFxMap.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
            __debugbreak();
        }
        if ( (ntl::internal::pool_allocator_freelist<48> *)cgMediaSurfaceFxMap.m_freelist.m_head.mp_next == &cgMediaSurfaceFxMap.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x30ui64, cgMediaSurfaceFxMap.ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::pool_allocator_impl<ntl::internal::buffer_memory_block<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> > >,48>::m_data.m_size) )
          __debugbreak();
        mp_next = cgMediaSurfaceFxMap.m_freelist.m_head.mp_next;
        v29.m256i_i32[0] = 0;
        v29.m256i_i64[1] = (__int64)p_m_endNodeBase;
        v24 = r_element;
        cgMediaSurfaceFxMap.m_freelist.m_head.mp_next = cgMediaSurfaceFxMap.m_freelist.m_head.mp_next->mp_next;
        __asm { vpxor   xmm0, xmm0, xmm0 }
        *(ntl::pair<ParticleSystemDef const *,unsigned int> *)&v29.m256i_u64[2] = _XMM0;
        *(__m256i *)&mp_next->mp_next = v29;
        *(ntl::pair<ParticleSystemDef const *,unsigned int> *)&mp_next[4].mp_next = v24;
        if ( p_m_endNodeBase == (ntl::map<ParticleSystemDef const *,unsigned int,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> > *)&cgMediaSurfaceFxMap.m_endNodeBase )
        {
          cgMediaSurfaceFxMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
          cgMediaSurfaceFxMap.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)mp_next;
          cgMediaSurfaceFxMap.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)mp_next;
        }
        else if ( (unsigned __int64)particleSystemDef >= p_m_endNodeBase->ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator>::ntl::solitary_buffer_allocator::m_data.m_size )
        {
          p_m_endNodeBase->ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator>::ntl::solitary_buffer_allocator::m_data.m_buffer = (char *)mp_next;
          mp_right = cgMediaSurfaceFxMap.m_endNodeBase.mp_right;
          if ( p_m_endNodeBase == (ntl::map<ParticleSystemDef const *,unsigned int,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> > *)cgMediaSurfaceFxMap.m_endNodeBase.mp_right )
            mp_right = (ntl::red_black_tree_node_base *)mp_next;
          cgMediaSurfaceFxMap.m_endNodeBase.mp_right = mp_right;
        }
        else
        {
          p_m_endNodeBase->m_freelist.m_head.mp_next = mp_next;
          if ( p_m_endNodeBase == (ntl::map<ParticleSystemDef const *,unsigned int,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> > *)cgMediaSurfaceFxMap.m_endNodeBase.mp_left )
            cgMediaSurfaceFxMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
        }
        ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)mp_next, &cgMediaSurfaceFxMap.m_endNodeBase.mp_parent);
        ++cgMediaSurfaceFxMap.m_size;
      }
      goto LABEL_80;
    }
LABEL_81:
    if ( cgMediaSurfaceFxMap.m_size != cgMedia.surfaceFx->numTableEntry )
    {
      LODWORD(v27) = cgMedia.surfaceFx->numTableEntry;
      LODWORD(v26) = cgMediaSurfaceFxMap.m_size;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_main.cpp", 532, ASSERT_TYPE_ASSERT, "( cgMediaSurfaceFxMap.size() ) == ( cgMedia.surfaceFx->numTableEntry )", "%s == %s\n\t%i, %i", "cgMediaSurfaceFxMap.size()", "cgMedia.surfaceFx->numTableEntry", v26, v27) )
        __debugbreak();
    }
  }
}

/*
==============
CG_Main_RegisteredImpactTypeToImpactType
==============
*/
__int64 CG_Main_RegisteredImpactTypeToImpactType(RegisteredImpactType registeredImpactType)
{
  FxImpactTable *impactFx; 
  __int64 v2; 
  unsigned int v4; 
  __int64 v5; 
  __int64 v6; 

  impactFx = cgMedia.impactFx;
  v2 = registeredImpactType;
  if ( cgMedia.impactFx )
  {
    if ( registeredImpactType == -1 )
    {
      Com_PrintWarning(14, "Unknown registered impact type encountered.");
      return 0i64;
    }
    else
    {
      if ( (unsigned int)registeredImpactType >= 0x21 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_main.cpp", 470, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( registeredImpactType ) ) < (unsigned)( static_cast<int>( RegisteredImpactType::COUNT ) )", "static_cast<int>( registeredImpactType ) doesn't index static_cast<int>( RegisteredImpactType::COUNT )\n\t%i not in [0, %i)", registeredImpactType, 33) )
          __debugbreak();
        impactFx = cgMedia.impactFx;
      }
      v4 = impactFx->registeredToGeneric[v2];
      if ( v4 >= impactFx->impactTypeCount )
      {
        LODWORD(v6) = impactFx->impactTypeCount;
        LODWORD(v5) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_main.cpp", 472, ASSERT_TYPE_ASSERT, "(unsigned)( impactType ) < (unsigned)( cgMedia.impactFx->impactTypeCount )", "impactType doesn't index cgMedia.impactFx->impactTypeCount\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      return v4;
    }
  }
  else
  {
    Com_PrintWarning(LODWORD(cgMedia.impactFx) + 14, "ImpactFX table not present; RegisteredImpactTypeToImpactType() failed.");
    return 0i64;
  }
}

/*
==============
CG_Main_UnregisterGameDvars
==============
*/
void CG_Main_UnregisterGameDvars(void)
{
  const dvar_t **v0; 
  __int64 v1; 

  v0 = cg_hud_outline_colors;
  v1 = 12i64;
  do
  {
    *v0 = Dvar_Deregister(*v0);
    ++v0;
    --v1;
  }
  while ( v1 );
  DVARBOOL_cg_drawVersion = Dvar_Deregister(DVARBOOL_cg_drawVersion);
  DVARBOOL_cg_drawBspVersion = Dvar_Deregister(DVARBOOL_cg_drawBspVersion);
  DVARFLT_cg_drawVersionX = Dvar_Deregister(DVARFLT_cg_drawVersionX);
  DVARFLT_cg_drawVersionY = Dvar_Deregister(DVARFLT_cg_drawVersionY);
  DVARFLT_cg_drawVersionFontScale = Dvar_Deregister(DVARFLT_cg_drawVersionFontScale);
  DVARFLT_cg_drawBspVersionX = Dvar_Deregister(DVARFLT_cg_drawBspVersionX);
  DVARFLT_cg_drawBspVersionY = Dvar_Deregister(DVARFLT_cg_drawBspVersionY);
  DVARFLT_cg_drawBSPVersionFontScale = Dvar_Deregister(DVARFLT_cg_drawBSPVersionFontScale);
  DVARBOOL_cg_draw2D = Dvar_Deregister(DVARBOOL_cg_draw2D);
  DVARBOOL_cg_drawDevOverlays = Dvar_Deregister(DVARBOOL_cg_drawDevOverlays);
  DVARSTR_cg_drawTitleString = Dvar_Deregister(DVARSTR_cg_drawTitleString);
  DVARFLT_cg_drawTitleX = Dvar_Deregister(DVARFLT_cg_drawTitleX);
  DVARFLT_cg_drawTitleY = Dvar_Deregister(DVARFLT_cg_drawTitleY);
  DVARFLT_cg_drawTitleSize = Dvar_Deregister(DVARFLT_cg_drawTitleSize);
  DVARCLR_cg_drawTitleColor = Dvar_Deregister(DVARCLR_cg_drawTitleColor);
  DVARINT_cg_drawFPSGraphs = Dvar_Deregister(DVARINT_cg_drawFPSGraphs);
  DVARINT_cg_drawTerrainStreamingInfo = Dvar_Deregister(DVARINT_cg_drawTerrainStreamingInfo);
  DVARINT_cg_drawTerrainStreamingInfoPosX = Dvar_Deregister(DVARINT_cg_drawTerrainStreamingInfoPosX);
  DVARINT_cg_drawTerrainStreamingInfoPosY = Dvar_Deregister(DVARINT_cg_drawTerrainStreamingInfoPosY);
  DVARFLT_cg_drawTerrainStreamingInfoScale = Dvar_Deregister(DVARFLT_cg_drawTerrainStreamingInfoScale);
  DVARINT_cg_drawTerrainStreamingInfoMaterialLayerScroll = Dvar_Deregister(DVARINT_cg_drawTerrainStreamingInfoMaterialLayerScroll);
  DVARINT_cg_drawTerrainStreamingInfoCombinedMapScroll = Dvar_Deregister(DVARINT_cg_drawTerrainStreamingInfoCombinedMapScroll);
  DVARINT_cg_drawTerrainStreamingInfoStreamedGeoScroll = Dvar_Deregister(DVARINT_cg_drawTerrainStreamingInfoStreamedGeoScroll);
  DVARINT_cg_drawTerrainStreamingInfoRenderedGeoScroll = Dvar_Deregister(DVARINT_cg_drawTerrainStreamingInfoRenderedGeoScroll);
  DVARINT_cg_drawTerrainStreamingInfoHeightCutoutLmapScroll = Dvar_Deregister(DVARINT_cg_drawTerrainStreamingInfoHeightCutoutLmapScroll);
  DVARINT_cg_drawClutterInfo = Dvar_Deregister(DVARINT_cg_drawClutterInfo);
  DCONST_DVARMPINT_cg_rootMotionLerpTime = Dvar_Deregister(DCONST_DVARMPINT_cg_rootMotionLerpTime);
  DVARBOOL_cg_drawGun = Dvar_Deregister(DVARBOOL_cg_drawGun);
  DVARFLT_cg_buttonHintMinScale = Dvar_Deregister(DVARFLT_cg_buttonHintMinScale);
  DVARFLT_cg_buttonHintNaturalDistance = Dvar_Deregister(DVARFLT_cg_buttonHintNaturalDistance);
  DVARFLT_cg_playerFovScale = Dvar_Deregister(DVARFLT_cg_playerFovScale);
  DCONST_DVARFLT_cg_fov_viewmodel = Dvar_Deregister(DCONST_DVARFLT_cg_fov_viewmodel);
  DVARFLT_cg_fovMin = Dvar_Deregister(DVARFLT_cg_fovMin);
  DVARFLT_cg_viewVehicleInfluence = Dvar_Deregister(DVARFLT_cg_viewVehicleInfluence);
  DVARBOOL_cg_drawHealth = Dvar_Deregister(DVARBOOL_cg_drawHealth);
  DVARBOOL_cg_drawBreathHint = Dvar_Deregister(DVARBOOL_cg_drawBreathHint);
  DVARINT_cg_drawCenterLines = Dvar_Deregister(DVARINT_cg_drawCenterLines);
  DVARBOOL_cg_useTopDownMapData = Dvar_Deregister(DVARBOOL_cg_useTopDownMapData);
  DVARBOOL_cg_debugDrawHandDragInfo = Dvar_Deregister(DVARBOOL_cg_debugDrawHandDragInfo);
  DVARINT_cg_debugDrawSpawnGroupLoot = Dvar_Deregister(DVARINT_cg_debugDrawSpawnGroupLoot);
  DVARINT_snd_drawInfo = Dvar_Deregister(DVARINT_snd_drawInfo);
  DVARBOOL_cg_drawScriptUsageServer = Dvar_Deregister(DVARBOOL_cg_drawScriptUsageServer);
  DVARBOOL_cg_drawTurretCrosshair = Dvar_Deregister(DVARBOOL_cg_drawTurretCrosshair);
  DVARBOOL_cg_drawDamageDirection = Dvar_Deregister(DVARBOOL_cg_drawDamageDirection);
  DVARBOOL_cg_requireCollisionForPrediction = Dvar_Deregister(DVARBOOL_cg_requireCollisionForPrediction);
  DCONST_DVARMPFLT_painVisionLerpOutRate = Dvar_Deregister(DCONST_DVARMPFLT_painVisionLerpOutRate);
  DCONST_DVARMPFLT_painVisionLerpInRate = Dvar_Deregister(DCONST_DVARMPFLT_painVisionLerpInRate);
  DVARFLT_painVisionTriggerHealth = Dvar_Deregister(DVARFLT_painVisionTriggerHealth);
  DVARINT_cg_hudDamageIconTime = Dvar_Deregister(DVARINT_cg_hudDamageIconTime);
  DVARINT_cg_hudShieldDamageIconTime = Dvar_Deregister(DVARINT_cg_hudShieldDamageIconTime);
  DVARINT_cg_hudRicochetDamageIconTime = Dvar_Deregister(DVARINT_cg_hudRicochetDamageIconTime);
  DVARBOOL_cg_drawPlayerBoundingBox = Dvar_Deregister(DVARBOOL_cg_drawPlayerBoundingBox);
  DVARFLT_cg_hudSplitscreenCompassScale = Dvar_Deregister(DVARFLT_cg_hudSplitscreenCompassScale);
  DVARFLT_cg_hudSplitscreenCompassElementScale = Dvar_Deregister(DVARFLT_cg_hudSplitscreenCompassElementScale);
  DVARFLT_cg_hudSplitscreenStanceScale = Dvar_Deregister(DVARFLT_cg_hudSplitscreenStanceScale);
  DVARFLT_cg_hudSplitscreenScoreboardScale = Dvar_Deregister(DVARFLT_cg_hudSplitscreenScoreboardScale);
  DVARFLT_cg_hudSplitscreenBannerScoreboardScale = Dvar_Deregister(DVARFLT_cg_hudSplitscreenBannerScoreboardScale);
  DVARFLT_cg_splitscreenSpectatorScaleIncrease = Dvar_Deregister(DVARFLT_cg_splitscreenSpectatorScaleIncrease);
  DVARINT_cg_drawMaterial = Dvar_Deregister(DVARINT_cg_drawMaterial);
  DVARINT_cg_drawMaterialLayerScroll = Dvar_Deregister(DVARINT_cg_drawMaterialLayerScroll);
  DVARBOOL_cg_drawTechset = Dvar_Deregister(DVARBOOL_cg_drawTechset);
  DVARBOOL_cg_drawRange = Dvar_Deregister(DVARBOOL_cg_drawRange);
  DVARBOOL_cg_drawpaused = Dvar_Deregister(DVARBOOL_cg_drawpaused);
  DVARBOOL_cg_equipmentSounds = Dvar_Deregister(DVARBOOL_cg_equipmentSounds);
  DVARFLT_cg_crosshairAlpha = Dvar_Deregister(DVARFLT_cg_crosshairAlpha);
  DVARFLT_cg_crosshairAlphaMin = Dvar_Deregister(DVARFLT_cg_crosshairAlphaMin);
  DVARBOOL_cg_crosshairDynamic = Dvar_Deregister(DVARBOOL_cg_crosshairDynamic);
  DVARBOOL_cg_crosshairEnemyColorEnabled = Dvar_Deregister(DVARBOOL_cg_crosshairEnemyColorEnabled);
  DVARBOOL_cg_crosshairEnemyColor = Dvar_Deregister(DVARBOOL_cg_crosshairEnemyColor);
  DVARBOOL_cg_crosshairFriendlyColorEnabled = Dvar_Deregister(DVARBOOL_cg_crosshairFriendlyColorEnabled);
  DVARBOOL_cg_crosshairSpectateHide = Dvar_Deregister(DVARBOOL_cg_crosshairSpectateHide);
  DVARBOOL_cg_crosshairCheckDrivingPhysVeh = Dvar_Deregister(DVARBOOL_cg_crosshairCheckDrivingPhysVeh);
  DVARBOOL_cg_autoSwitchToHeavyWeapon = Dvar_Deregister(DVARBOOL_cg_autoSwitchToHeavyWeapon);
  DVARFLT_cg_centertime = Dvar_Deregister(DVARFLT_cg_centertime);
  DVARINT_cg_debugevents = Dvar_Deregister(DVARINT_cg_debugevents);
  DVARFLT_cg_errordecay = Dvar_Deregister(DVARFLT_cg_errordecay);
  DVARINT_cg_showmiss = Dvar_Deregister(DVARINT_cg_showmiss);
  DVARBOOL_cg_footsteps = Dvar_Deregister(DVARBOOL_cg_footsteps);
  DVARBOOL_cg_footstepsSprint = Dvar_Deregister(DVARBOOL_cg_footstepsSprint);
  DCONST_DVARBOOL_cg_footstepfx = Dvar_Deregister(DCONST_DVARBOOL_cg_footstepfx);
  DCONST_DVARFLT_cg_footstepfx_maxDistance = Dvar_Deregister(DCONST_DVARFLT_cg_footstepfx_maxDistance);
  DVARBOOL_cg_landingSounds = Dvar_Deregister(DVARBOOL_cg_landingSounds);
  DVARFLT_tracer_thermalWidthMult = Dvar_Deregister(DVARFLT_tracer_thermalWidthMult);
  DVARFLT_tracer_firstPersonMaxWidth = Dvar_Deregister(DVARFLT_tracer_firstPersonMaxWidth);
  DVARFLT_tracer_firstPersonMaxScrewRadius = Dvar_Deregister(DVARFLT_tracer_firstPersonMaxScrewRadius);
  DVARBOOL_tracer_explosiveOverride = Dvar_Deregister(DVARBOOL_tracer_explosiveOverride);
  DVARVEC4_tracer_explosiveColor1 = Dvar_Deregister(DVARVEC4_tracer_explosiveColor1);
  DVARVEC4_tracer_explosiveColor2 = Dvar_Deregister(DVARVEC4_tracer_explosiveColor2);
  DVARVEC4_tracer_explosiveColor3 = Dvar_Deregister(DVARVEC4_tracer_explosiveColor3);
  DVARVEC4_tracer_explosiveColor4 = Dvar_Deregister(DVARVEC4_tracer_explosiveColor4);
  DVARVEC4_tracer_explosiveColor5 = Dvar_Deregister(DVARVEC4_tracer_explosiveColor5);
  DVARFLT_tracer_explosiveWidth = Dvar_Deregister(DVARFLT_tracer_explosiveWidth);
  DCONST_DVARFLT_tracer_minimumTravelViewmodel = Dvar_Deregister(DCONST_DVARFLT_tracer_minimumTravelViewmodel);
  DCONST_DVARFLT_tracer_minimumTravelWorldmodel = Dvar_Deregister(DCONST_DVARFLT_tracer_minimumTravelWorldmodel);
  DCONST_DVARFLT_tracer_muzzleOffsetViewmodel = Dvar_Deregister(DCONST_DVARFLT_tracer_muzzleOffsetViewmodel);
  DCONST_DVARFLT_tracer_muzzleOffsetWorldmodel = Dvar_Deregister(DCONST_DVARFLT_tracer_muzzleOffsetWorldmodel);
  DVARBOOL_tracer_debugDraw = Dvar_Deregister(DVARBOOL_tracer_debugDraw);
  DVARBOOL_cg_debug_overlay_viewport = Dvar_Deregister(DVARBOOL_cg_debug_overlay_viewport);
  DVARINT_cg_dumpAnims = Dvar_Deregister(DVARINT_cg_dumpAnims);
  DVARINT_cg_dumpAnims3D = Dvar_Deregister(DVARINT_cg_dumpAnims3D);
  DVARINT_cg_dobjdump = Dvar_Deregister(DVARINT_cg_dobjdump);
  DVARINT_cg_dumpAnimsToScreen = Dvar_Deregister(DVARINT_cg_dumpAnimsToScreen);
  DVARINT_cg_dumpAnimsToScreen2 = Dvar_Deregister(DVARINT_cg_dumpAnimsToScreen2);
  DVARINT_cg_dumpBlendSpaces = Dvar_Deregister(DVARINT_cg_dumpBlendSpaces);
  DVARBOOL_cg_dumpblendspaces_coverage = Dvar_Deregister(DVARBOOL_cg_dumpblendspaces_coverage);
  DVARBOOL_cg_dumpViewmodelBlendSpaces = Dvar_Deregister(DVARBOOL_cg_dumpViewmodelBlendSpaces);
  DVARBOOL_cg_drawProcBonesAllocatorInfo = Dvar_Deregister(DVARBOOL_cg_drawProcBonesAllocatorInfo);
  DVARINT_cg_drawBoneVisibility = Dvar_Deregister(DVARINT_cg_drawBoneVisibility);
  DVARINT_cg_debugCharacterController = Dvar_Deregister(DVARINT_cg_debugCharacterController);
  DVARBOOL_cg_dumpScriptedAnims = Dvar_Deregister(DVARBOOL_cg_dumpScriptedAnims);
  DVARINT_cg_gameMessageWidth = Dvar_Deregister(DVARINT_cg_gameMessageWidth);
  DVARINT_cg_gameBoldMessageWidth = Dvar_Deregister(DVARINT_cg_gameBoldMessageWidth);
  DVARFLT_cg_subtitleMinTime = Dvar_Deregister(DVARFLT_cg_subtitleMinTime);
  DVARINT_cg_subtitleWidthStandard = Dvar_Deregister(DVARINT_cg_subtitleWidthStandard);
  DVARINT_cg_subtitleWidthWidescreen = Dvar_Deregister(DVARINT_cg_subtitleWidthWidescreen);
  DVARBOOL_cg_cinematic_subtitles = Dvar_Deregister(DVARBOOL_cg_cinematic_subtitles);
  DCONST_DVARFLT_cg_viewZSmoothingMin = Dvar_Deregister(DCONST_DVARFLT_cg_viewZSmoothingMin);
  DCONST_DVARFLT_cg_viewZSmoothingMax = Dvar_Deregister(DCONST_DVARFLT_cg_viewZSmoothingMax);
  DCONST_DVARFLT_cg_viewZSmoothingUpTimeMin = Dvar_Deregister(DCONST_DVARFLT_cg_viewZSmoothingUpTimeMin);
  DCONST_DVARFLT_cg_viewZSmoothingUpTimeMax = Dvar_Deregister(DCONST_DVARFLT_cg_viewZSmoothingUpTimeMax);
  DCONST_DVARFLT_cg_viewZSmoothingDownTimeMin = Dvar_Deregister(DCONST_DVARFLT_cg_viewZSmoothingDownTimeMin);
  DCONST_DVARFLT_cg_viewZSmoothingDownTimeMax = Dvar_Deregister(DCONST_DVARFLT_cg_viewZSmoothingDownTimeMax);
  DCONST_DVARFLT_cg_viewZSmoothingPlayerSpeedFloor = Dvar_Deregister(DCONST_DVARFLT_cg_viewZSmoothingPlayerSpeedFloor);
  DCONST_DVARFLT_cg_viewZSmoothingPlayerSpeedCeil = Dvar_Deregister(DCONST_DVARFLT_cg_viewZSmoothingPlayerSpeedCeil);
  DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClamp = Dvar_Deregister(DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClamp);
  DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClampForSmallCharacter = Dvar_Deregister(DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClampForSmallCharacter);
  DCONST_DVARFLT_cg_viewZNearClampValueForHighFov = Dvar_Deregister(DCONST_DVARFLT_cg_viewZNearClampValueForHighFov);
  DCONST_DVARINT_cg_viewZSmoothingInterpType = Dvar_Deregister(DCONST_DVARINT_cg_viewZSmoothingInterpType);
  DVARFLT_sv_znear = Dvar_Deregister(DVARFLT_sv_znear);
  DVARBOOL_cg_drawrumbledebug = Dvar_Deregister(DVARBOOL_cg_drawrumbledebug);
  DVARINT_cg_drawDebugBones = Dvar_Deregister(DVARINT_cg_drawDebugBones);
  DVARINT_cg_drawDebugBonesType = Dvar_Deregister(DVARINT_cg_drawDebugBonesType);
  DVARSTR_cg_drawDebugBonesNameFilter = Dvar_Deregister(DVARSTR_cg_drawDebugBonesNameFilter);
  DVARBOOL_cg_drawDebugBonesBind = Dvar_Deregister(DVARBOOL_cg_drawDebugBonesBind);
  DVARBOOL_cg_drawDebugBonesClosest = Dvar_Deregister(DVARBOOL_cg_drawDebugBonesClosest);
  DVARBOOL_cg_drawDebugAnimUsage = Dvar_Deregister(DVARBOOL_cg_drawDebugAnimUsage);
  DVARBOOL_cg_drawDebugMaxAnimUsage = Dvar_Deregister(DVARBOOL_cg_drawDebugMaxAnimUsage);
  DVARBOOL_cg_drawDebugDoors = Dvar_Deregister(DVARBOOL_cg_drawDebugDoors);
  DVARINT_cg_drawLOSLatency = Dvar_Deregister(DVARINT_cg_drawLOSLatency);
  DVARFLT_cg_drawLOSLatencyThreshold = Dvar_Deregister(DVARFLT_cg_drawLOSLatencyThreshold);
  DVARFLT_cg_drawLOSLatencyTolerance = Dvar_Deregister(DVARFLT_cg_drawLOSLatencyTolerance);
  DCONST_DVARBOOL_cg_drawLOSLatencyShowOptimalHead = Dvar_Deregister(DCONST_DVARBOOL_cg_drawLOSLatencyShowOptimalHead);
  DVARINT_cg_drawVisionSetMode = Dvar_Deregister(DVARINT_cg_drawVisionSetMode);
  DVARINT_cg_drawDebugLadder = Dvar_Deregister(DVARINT_cg_drawDebugLadder);
  DVARBOOL_cg_drawDebugEntitiesLoD = Dvar_Deregister(DVARBOOL_cg_drawDebugEntitiesLoD);
  DCONST_DVARINT_cg_drawDebugAnimLodInfo = Dvar_Deregister(DCONST_DVARINT_cg_drawDebugAnimLodInfo);
  DVARFLT_cg_animLODScale = Dvar_Deregister(DVARFLT_cg_animLODScale);
  DVARBOOL_cg_inputLatencyDevice = Dvar_Deregister(DVARBOOL_cg_inputLatencyDevice);
  DVARINT_cg_debugDrawHitBox = Dvar_Deregister(DVARINT_cg_debugDrawHitBox);
  DVARSTR_cg_foliagesnd_alias = Dvar_Deregister(DVARSTR_cg_foliagesnd_alias);
  DVARSTR_cg_foliagebulletsnd_alias = Dvar_Deregister(DVARSTR_cg_foliagebulletsnd_alias);
  DVARCLR_cg_CrosshairColor_EnemyTeam = Dvar_Deregister(DVARCLR_cg_CrosshairColor_EnemyTeam);
  DVARCLR_cg_CrosshairColor_MyTeam = Dvar_Deregister(DVARCLR_cg_CrosshairColor_MyTeam);
  DVARBOOL_cg_constantSizeHeadIcons = Dvar_Deregister(DVARBOOL_cg_constantSizeHeadIcons);
  DVARFLT_vehHelicopterFreeLookReleaseSpeed = Dvar_Deregister(DVARFLT_vehHelicopterFreeLookReleaseSpeed);
  DVARBOOL_cg_drawWVisDebug = Dvar_Deregister(DVARBOOL_cg_drawWVisDebug);
  DCONST_DVARMPBOOL_cg_drawPlayerShadow = Dvar_Deregister(DCONST_DVARMPBOOL_cg_drawPlayerShadow);
  DCONST_DVARMPSPBOOL_cg_drawPlayerLegs = Dvar_Deregister(DCONST_DVARMPSPBOOL_cg_drawPlayerLegs);
  DCONST_DVARMPSPBOOL_cg_drawPlayerAlways = Dvar_Deregister(DCONST_DVARMPSPBOOL_cg_drawPlayerAlways);
  DCONST_DVARFLT_cg_playerLegsOffset = Dvar_Deregister(DCONST_DVARFLT_cg_playerLegsOffset);
  DCONST_DVARFLT_cg_playerLegsOffsetLadder = Dvar_Deregister(DCONST_DVARFLT_cg_playerLegsOffsetLadder);
  DCONST_DVARBOOL_cg_playerLegsOffsetEnableRadiusClamp = Dvar_Deregister(DCONST_DVARBOOL_cg_playerLegsOffsetEnableRadiusClamp);
  DCONST_DVARBOOL_cg_disable_playerLegsOffset_fov_comp = Dvar_Deregister(DCONST_DVARBOOL_cg_disable_playerLegsOffset_fov_comp);
  DCONST_DVARFLT_cg_playerLegsOffset_fovComp_forward = Dvar_Deregister(DCONST_DVARFLT_cg_playerLegsOffset_fovComp_forward);
  DCONST_DVARFLT_cg_playerLegsOffset_fovComp_right = Dvar_Deregister(DCONST_DVARFLT_cg_playerLegsOffset_fovComp_right);
  DCONST_DVARFLT_cg_playerLegsOffset_fovComp_up = Dvar_Deregister(DCONST_DVARFLT_cg_playerLegsOffset_fovComp_up);
  DCONST_DVARFLT_cg_playerLegsSpineLowAngle = Dvar_Deregister(DCONST_DVARFLT_cg_playerLegsSpineLowAngle);
  DCONST_DVARFLT_cg_playerLegsSpineMidAngle = Dvar_Deregister(DCONST_DVARFLT_cg_playerLegsSpineMidAngle);
  DCONST_DVARFLT_cg_playerLegsArmsAngle = Dvar_Deregister(DCONST_DVARFLT_cg_playerLegsArmsAngle);
  DCONST_DVARINT_cg_impaleWarpMode = Dvar_Deregister(DCONST_DVARINT_cg_impaleWarpMode);
  DCONST_DVARFLT_cg_impaleVelocityAdjust = Dvar_Deregister(DCONST_DVARFLT_cg_impaleVelocityAdjust);
  DCONST_DVARFLT_cg_impaleFriction = Dvar_Deregister(DCONST_DVARFLT_cg_impaleFriction);
  DCONST_DVARFLT_cg_impaleMaxAngle = Dvar_Deregister(DCONST_DVARFLT_cg_impaleMaxAngle);
  DCONST_DVARFLT_cg_impaleBreakThreshold = Dvar_Deregister(DCONST_DVARFLT_cg_impaleBreakThreshold);
  DCONST_DVARFLT_cg_impaleBreakVelocityScale = Dvar_Deregister(DCONST_DVARFLT_cg_impaleBreakVelocityScale);
  DCONST_DVARFLT_cg_impaleRagdollStiffnessRate = Dvar_Deregister(DCONST_DVARFLT_cg_impaleRagdollStiffnessRate);
  DCONST_DVARINT_cg_impaleMaxBoneDistance = Dvar_Deregister(DCONST_DVARINT_cg_impaleMaxBoneDistance);
  DCONST_DVARFLT_cg_impaleFailBoneSpeed = Dvar_Deregister(DCONST_DVARFLT_cg_impaleFailBoneSpeed);
  DCONST_DVARINT_cg_impaleMaxPenetrationSolveTimeMs = Dvar_Deregister(DCONST_DVARINT_cg_impaleMaxPenetrationSolveTimeMs);
  DVARBOOL_thermalVisionLuiDebugAlwaysActive = Dvar_Deregister(DVARBOOL_thermalVisionLuiDebugAlwaysActive);
  DCONST_DVARMPBOOL_thermalVisionLuiUse = Dvar_Deregister(DCONST_DVARMPBOOL_thermalVisionLuiUse);
  DCONST_DVARFLT_thermalVisionLuiDefaultDistance = Dvar_Deregister(DCONST_DVARFLT_thermalVisionLuiDefaultDistance);
  DCONST_DVARFLT_thermalVisionLuiLinkedDistance = Dvar_Deregister(DCONST_DVARFLT_thermalVisionLuiLinkedDistance);
  DCONST_DVARFLT_thermalVisionLuiApexDistance = Dvar_Deregister(DCONST_DVARFLT_thermalVisionLuiApexDistance);
  DCONST_DVARFLT_thermalVisionLuiVenomDistance = Dvar_Deregister(DCONST_DVARFLT_thermalVisionLuiVenomDistance);
  DCONST_DVARFLT_cg_materialOverrideFinishedFrac = Dvar_Deregister(DCONST_DVARFLT_cg_materialOverrideFinishedFrac);
  DCONST_DVARBOOL_cg_clientWeaponDrawRotationCenter = Dvar_Deregister(DCONST_DVARBOOL_cg_clientWeaponDrawRotationCenter);
  DCONST_DVARINT_cg_frontEndSceneTransientStreamingTime = Dvar_Deregister(DCONST_DVARINT_cg_frontEndSceneTransientStreamingTime);
  DCONST_DVARINT_cg_frontEndSceneTransientTimeout = Dvar_Deregister(DCONST_DVARINT_cg_frontEndSceneTransientTimeout);
  DCONST_DVARFLT_turretCameraShakeScale = Dvar_Deregister(DCONST_DVARFLT_turretCameraShakeScale);
  DCONST_DVARINT_turretCameraShakeDuration = Dvar_Deregister(DCONST_DVARINT_turretCameraShakeDuration);
  DCONST_DVARFLT_turretCameraShakeRadius = Dvar_Deregister(DCONST_DVARFLT_turretCameraShakeRadius);
  DCONST_DVARBOOL_turretCameraShakeOverride = Dvar_Deregister(DCONST_DVARBOOL_turretCameraShakeOverride);
  DCONST_DVARBOOL_cg_drawPlayerLightSample = Dvar_Deregister(DCONST_DVARBOOL_cg_drawPlayerLightSample);
  DVARFLT_cg_playerLightSampleSize = Dvar_Deregister(DVARFLT_cg_playerLightSampleSize);
  DVARFLT_cg_playerLightSampleShapeSize = Dvar_Deregister(DVARFLT_cg_playerLightSampleShapeSize);
  DVARVEC3_cg_playerLightSampleShapeOffset = Dvar_Deregister(DVARVEC3_cg_playerLightSampleShapeOffset);
  DVARINT_cg_playerLightSamplePos = Dvar_Deregister(DVARINT_cg_playerLightSamplePos);
  DVARINT_cg_playerLightSampleNormal = Dvar_Deregister(DVARINT_cg_playerLightSampleNormal);
  DVARINT_cg_playerLightSampleFilter = Dvar_Deregister(DVARINT_cg_playerLightSampleFilter);
  DCONST_DVARBOOL_cg_extrapolation_full_move = Dvar_Deregister(DCONST_DVARBOOL_cg_extrapolation_full_move);
  DCONST_DVARBOOL_cg_debugInfil = Dvar_Deregister(DCONST_DVARBOOL_cg_debugInfil);
  DCONST_DVARINT_cg_debugInfil_Character = Dvar_Deregister(DCONST_DVARINT_cg_debugInfil_Character);
  DCONST_DVARBOOL_cg_cfx_debug_effects = Dvar_Deregister(DCONST_DVARBOOL_cg_cfx_debug_effects);
  DCONST_DVARBOOL_cg_cfx_debug_sounds = Dvar_Deregister(DCONST_DVARBOOL_cg_cfx_debug_sounds);
  DCONST_DVARBOOL_cg_cfx_debug_ssr = Dvar_Deregister(DCONST_DVARBOOL_cg_cfx_debug_ssr);
  DCONST_DVARFLT_cg_footstepCullDistance = Dvar_Deregister(DCONST_DVARFLT_cg_footstepCullDistance);
  DVARBOOL_cg_playerMovementNotetrackSounds = Dvar_Deregister(DVARBOOL_cg_playerMovementNotetrackSounds);
  DCONST_DVARFLT_cg_mountFoleyCullDistance = Dvar_Deregister(DCONST_DVARFLT_cg_mountFoleyCullDistance);
  DCONST_DVARINT_cg_drawCustomizationStreaming = Dvar_Deregister(DCONST_DVARINT_cg_drawCustomizationStreaming);
  DCONST_DVARINT_cg_drawWeaponStreaming = Dvar_Deregister(DCONST_DVARINT_cg_drawWeaponStreaming);
  DVARFLT_cg_worldStreamingMinImageQuality = Dvar_Deregister(DVARFLT_cg_worldStreamingMinImageQuality);
  DVARFLT_cg_worldStreamingMaxImageQuality = Dvar_Deregister(DVARFLT_cg_worldStreamingMaxImageQuality);
  DVARINT_cg_worldStreamingLoadedTimeout = Dvar_Deregister(DVARINT_cg_worldStreamingLoadedTimeout);
  DVARINT_cg_worldStreamingKeepAliveTimeout = Dvar_Deregister(DVARINT_cg_worldStreamingKeepAliveTimeout);
  DVARINT_cg_worldStreamingLoadingTimeout = Dvar_Deregister(DVARINT_cg_worldStreamingLoadingTimeout);
  DCONST_DVARINT_cg_worldStreamingLoadingWarnTimeout = Dvar_Deregister(DCONST_DVARINT_cg_worldStreamingLoadingWarnTimeout);
  DCONST_DVARINT_cg_worldStreamingKeepAliveWarnTimeout = Dvar_Deregister(DCONST_DVARINT_cg_worldStreamingKeepAliveWarnTimeout);
  DCONST_DVARBOOL_cg_worldStreaming_verbose = Dvar_Deregister(DCONST_DVARBOOL_cg_worldStreaming_verbose);
  DCONST_DVARBOOL_cg_defaultWeaponHidesViewmodel = Dvar_Deregister(DCONST_DVARBOOL_cg_defaultWeaponHidesViewmodel);
  DCONST_DVARBOOL_cg_weaponFade_applyToViewmodel = Dvar_Deregister(DCONST_DVARBOOL_cg_weaponFade_applyToViewmodel);
  DCONST_DVARFLT_cg_weaponFade_startTransitionFactor = Dvar_Deregister(DCONST_DVARFLT_cg_weaponFade_startTransitionFactor);
  DCONST_DVARINT_cg_weaponFade_transitionTime = Dvar_Deregister(DCONST_DVARINT_cg_weaponFade_transitionTime);
  DVARBOOL_cg_fx_slide_enable = Dvar_Deregister(DVARBOOL_cg_fx_slide_enable);
  DVARBOOL_cg_pose_entityFixup = Dvar_Deregister(DVARBOOL_cg_pose_entityFixup);
  DVARBOOL_cg_pose_assertOnStaleAccess = Dvar_Deregister(DVARBOOL_cg_pose_assertOnStaleAccess);
  DVARBOOL_cg_psInterpolationDiffClientsFix = Dvar_Deregister(DVARBOOL_cg_psInterpolationDiffClientsFix);
  DVARBOOL_cg_keyframedPredictive = Dvar_Deregister(DVARBOOL_cg_keyframedPredictive);
  DCONST_DVARFLT_cg_cinematicCameraRotateMinDistance = Dvar_Deregister(DCONST_DVARFLT_cg_cinematicCameraRotateMinDistance);
  DCONST_DVARFLT_cg_cinematicCameraRotateDetachDistance = Dvar_Deregister(DCONST_DVARFLT_cg_cinematicCameraRotateDetachDistance);
  DCONST_DVARINT_cg_cinematicCameraRotateMaxTracesPerFrame = Dvar_Deregister(DCONST_DVARINT_cg_cinematicCameraRotateMaxTracesPerFrame);
  DCONST_DVARFLT_cg_cinematicCameraRotateCollisionDegreesSkip = Dvar_Deregister(DCONST_DVARFLT_cg_cinematicCameraRotateCollisionDegreesSkip);
  DCONST_DVARFLT_cg_cinematicCameraRotateReturnDistanceRate = Dvar_Deregister(DCONST_DVARFLT_cg_cinematicCameraRotateReturnDistanceRate);
  DCONST_DVARFLT_cg_cinematicCameraRotateReturnHeightRate = Dvar_Deregister(DCONST_DVARFLT_cg_cinematicCameraRotateReturnHeightRate);
  DCONST_DVARFLT_cg_cinematicCameraRotateReturnPitchRate = Dvar_Deregister(DCONST_DVARFLT_cg_cinematicCameraRotateReturnPitchRate);
  DCONST_DVARBOOL_cg_cinematicCameraEnabled = Dvar_Deregister(DCONST_DVARBOOL_cg_cinematicCameraEnabled);
  DCONST_DVARBOOL_cg_cinematicCameraDofEnabled = Dvar_Deregister(DCONST_DVARBOOL_cg_cinematicCameraDofEnabled);
  DCONST_DVARBOOL_cg_cinematicCameraVisionEnabled = Dvar_Deregister(DCONST_DVARBOOL_cg_cinematicCameraVisionEnabled);
  DCONST_DVARBOOL_cg_cinematicCameraSoundEnabled = Dvar_Deregister(DCONST_DVARBOOL_cg_cinematicCameraSoundEnabled);
  DCONST_DVARBOOL_cg_cinematicCameraFovEnabled = Dvar_Deregister(DCONST_DVARBOOL_cg_cinematicCameraFovEnabled);
  DCONST_DVARBOOL_cg_cinematicCameraDebug = Dvar_Deregister(DCONST_DVARBOOL_cg_cinematicCameraDebug);
  DCONST_DVARFLT_cg_thirdPersonRange = Dvar_Deregister(DCONST_DVARFLT_cg_thirdPersonRange);
  DCONST_DVARFLT_cg_thirdPersonAngle = Dvar_Deregister(DCONST_DVARFLT_cg_thirdPersonAngle);
  DCONST_DVARBOOL_cg_thirdPersonNoYaw = Dvar_Deregister(DCONST_DVARBOOL_cg_thirdPersonNoYaw);
  DCONST_DVARBOOL_cg_disableScreenShake = Dvar_Deregister(DCONST_DVARBOOL_cg_disableScreenShake);
  DCONST_DVARINT_cg_thirdPersonMode = Dvar_Deregister(DCONST_DVARINT_cg_thirdPersonMode);
  DCONST_DVARBOOL_cg_thirdPersonNoPitch = Dvar_Deregister(DCONST_DVARBOOL_cg_thirdPersonNoPitch);
  DCONST_DVARBOOL_cg_drawShellshock = Dvar_Deregister(DCONST_DVARBOOL_cg_drawShellshock);
  DVARBOOL_cg_drawZoomHint = Dvar_Deregister(DVARBOOL_cg_drawZoomHint);
  DCONST_DVARINT_cg_draw_scrambler_max_flicker_time = Dvar_Deregister(DCONST_DVARINT_cg_draw_scrambler_max_flicker_time);
  DVARFLT_cg_thirdPersonTankTraceLen = Dvar_Deregister(DVARFLT_cg_thirdPersonTankTraceLen);
  DVARFLT_cg_thirdPersonTankRange = Dvar_Deregister(DVARFLT_cg_thirdPersonTankRange);
  DVARFLT_cg_thirdPersonTankHeight = Dvar_Deregister(DVARFLT_cg_thirdPersonTankHeight);
  DVARFLT_cg_thirdPersonTankHorizOffset = Dvar_Deregister(DVARFLT_cg_thirdPersonTankHorizOffset);
  DVARFLT_cg_thirdPersonCarAngle = Dvar_Deregister(DVARFLT_cg_thirdPersonCarAngle);
  DVARFLT_cg_thirdPersonQuadRange = Dvar_Deregister(DVARFLT_cg_thirdPersonQuadRange);
  DCONST_DVARFLT_cg_thirdPersonCarTimeFac = Dvar_Deregister(DCONST_DVARFLT_cg_thirdPersonCarTimeFac);
  DCONST_DVARBOOL_cg_thirdPersonCarReturn = Dvar_Deregister(DCONST_DVARBOOL_cg_thirdPersonCarReturn);
  DCONST_DVARMODEFLT_cg_thirdPersonCarDefaultPolar = Dvar_Deregister(DCONST_DVARMODEFLT_cg_thirdPersonCarDefaultPolar);
  DCONST_DVARMODEFLT_cg_thirdPersonCarCollRadius = Dvar_Deregister(DCONST_DVARMODEFLT_cg_thirdPersonCarCollRadius);
  DCONST_DVARFLT_cg_thirdPersonCarReturnSpeedAzimuth = Dvar_Deregister(DCONST_DVARFLT_cg_thirdPersonCarReturnSpeedAzimuth);
  DCONST_DVARFLT_cg_thirdPersonCarReturnSpeedPolar = Dvar_Deregister(DCONST_DVARFLT_cg_thirdPersonCarReturnSpeedPolar);
  DCONST_DVARFLT_cg_thirdPersonCarReverseThreshold = Dvar_Deregister(DCONST_DVARFLT_cg_thirdPersonCarReverseThreshold);
  DCONST_DVARFLT_cg_thirdPersonCarTimeToReturn = Dvar_Deregister(DCONST_DVARFLT_cg_thirdPersonCarTimeToReturn);
  DCONST_DVARFLT_cg_thirdPersonCarMaxDiff = Dvar_Deregister(DCONST_DVARFLT_cg_thirdPersonCarMaxDiff);
  DCONST_DVARFLT_cg_thirdPersonCarMaxAzimuthDiff = Dvar_Deregister(DCONST_DVARFLT_cg_thirdPersonCarMaxAzimuthDiff);
  DCONST_DVARVEC3_cg_thirdPersonCarLerpSpeed = Dvar_Deregister(DCONST_DVARVEC3_cg_thirdPersonCarLerpSpeed);
  DCONST_DVARFLT_cg_thirdPersonCorpseUpOffset = Dvar_Deregister(DCONST_DVARFLT_cg_thirdPersonCorpseUpOffset);
  DCONST_DVARMODEFLT_cg_thirdPersonCarBlurStrength = Dvar_Deregister(DCONST_DVARMODEFLT_cg_thirdPersonCarBlurStrength);
  DCONST_DVARMODEFLT_cg_thirdPersonCarBlurRadius = Dvar_Deregister(DCONST_DVARMODEFLT_cg_thirdPersonCarBlurRadius);
  DCONST_DVARFLT_cg_thirdPersonCarMaxRoll = Dvar_Deregister(DCONST_DVARFLT_cg_thirdPersonCarMaxRoll);
  DCONST_DVARFLT_cg_thirdPersonCarMaxPitch = Dvar_Deregister(DCONST_DVARFLT_cg_thirdPersonCarMaxPitch);
  DVARVEC3_cameraShakeRemoteMissile_Angles = Dvar_Deregister(DVARVEC3_cameraShakeRemoteMissile_Angles);
  DVARVEC3_cameraShakeRemoteMissile_Freqs = Dvar_Deregister(DVARVEC3_cameraShakeRemoteMissile_Freqs);
  DVARVEC2_cameraShakeRemoteMissile_SpeedRange = Dvar_Deregister(DVARVEC2_cameraShakeRemoteMissile_SpeedRange);
  DVARVEC3_cameraShakeRemoteHelo_Angles = Dvar_Deregister(DVARVEC3_cameraShakeRemoteHelo_Angles);
  DVARVEC3_cameraShakeRemoteHelo_Freqs = Dvar_Deregister(DVARVEC3_cameraShakeRemoteHelo_Freqs);
  DVARVEC2_cameraShakeRemoteHelo_SpeedRange = Dvar_Deregister(DVARVEC2_cameraShakeRemoteHelo_SpeedRange);
  DCONST_DVARFLT_cg_camera_transition_fade_out_start_dist = Dvar_Deregister(DCONST_DVARFLT_cg_camera_transition_fade_out_start_dist);
  DCONST_DVARFLT_cg_camera_transition_fade_out_end_dist = Dvar_Deregister(DCONST_DVARFLT_cg_camera_transition_fade_out_end_dist);
  DVARFLT_cg_crosshairVerticalOffset = Dvar_Deregister(DVARFLT_cg_crosshairVerticalOffset);
  DCONST_DVARMPBOOL_cg_viewmotion_spring_enable = Dvar_Deregister(DCONST_DVARMPBOOL_cg_viewmotion_spring_enable);
  DCONST_DVARMPINT_cg_viewmotion_spring_blendDurationMs = Dvar_Deregister(DCONST_DVARMPINT_cg_viewmotion_spring_blendDurationMs);
  DVARSTR_RemoteCameraSounds_RoomType = Dvar_Deregister(DVARSTR_RemoteCameraSounds_RoomType);
  DVARFLT_RemoteCameraSounds_DryLevel = Dvar_Deregister(DVARFLT_RemoteCameraSounds_DryLevel);
  DVARFLT_RemoteCameraSounds_WetLevel = Dvar_Deregister(DVARFLT_RemoteCameraSounds_WetLevel);
  DVARINT_thermalBlurFactorScope = Dvar_Deregister(DVARINT_thermalBlurFactorScope);
  DVARINT_thermalBlurFactorNoScope = Dvar_Deregister(DVARINT_thermalBlurFactorNoScope);
  DVARBOOL_cg_camAngleOverride = Dvar_Deregister(DVARBOOL_cg_camAngleOverride);
  DVARVEC3_cg_camAngleOffset = Dvar_Deregister(DVARVEC3_cg_camAngleOffset);
  DVARVEC3_cg_camOffset = Dvar_Deregister(DVARVEC3_cg_camOffset);
  DVARFLT_cg_traceProfilingDist = Dvar_Deregister(DVARFLT_cg_traceProfilingDist);
  DVARBOOL_deathCameraFailsafe = Dvar_Deregister(DVARBOOL_deathCameraFailsafe);
  DVARFLT_deathCameraFailsafeOffset = Dvar_Deregister(DVARFLT_deathCameraFailsafeOffset);
  DCONST_DVARFLT_thirdPersonViewTurretHeight = Dvar_Deregister(DCONST_DVARFLT_thirdPersonViewTurretHeight);
  DCONST_DVARFLT_thirdPersonViewTurretRangeAddition = Dvar_Deregister(DCONST_DVARFLT_thirdPersonViewTurretRangeAddition);
  DCONST_DVARMPBOOL_cg_viewmodelMotionBlurFireScale = Dvar_Deregister(DCONST_DVARMPBOOL_cg_viewmodelMotionBlurFireScale);
  DCONST_DVARMPBOOL_fovUseTimeBasedBlends = Dvar_Deregister(DCONST_DVARMPBOOL_fovUseTimeBasedBlends);
  DCONST_DVARFLT_fovBlendSpeedIn = Dvar_Deregister(DCONST_DVARFLT_fovBlendSpeedIn);
  DCONST_DVARFLT_fovBlendSpeedOut = Dvar_Deregister(DCONST_DVARFLT_fovBlendSpeedOut);
  DCONST_DVARFLT_fovIncreaseForSprint = Dvar_Deregister(DCONST_DVARFLT_fovIncreaseForSprint);
  DCONST_DVARFLT_cg_viewModelDebugDist = Dvar_Deregister(DCONST_DVARFLT_cg_viewModelDebugDist);
  DCONST_DVARBOOL_handheldCameraEnabled = Dvar_Deregister(DCONST_DVARBOOL_handheldCameraEnabled);
  DCONST_DVARBOOL_handheldCameraImpulsesEnabled = Dvar_Deregister(DCONST_DVARBOOL_handheldCameraImpulsesEnabled);
  DCONST_DVARINT_handheldCameraRepeatPeriodMs = Dvar_Deregister(DCONST_DVARINT_handheldCameraRepeatPeriodMs);
  DCONST_DVARINT_handheldCameraOctaves = Dvar_Deregister(DCONST_DVARINT_handheldCameraOctaves);
  DCONST_DVARINT_handheldCameraBlendDurationMs = Dvar_Deregister(DCONST_DVARINT_handheldCameraBlendDurationMs);
  DVARFLT_handheldCameraTranslationScale = Dvar_Deregister(DVARFLT_handheldCameraTranslationScale);
  DVARFLT_handheldCameraRotationScale = Dvar_Deregister(DVARFLT_handheldCameraRotationScale);
  DCONST_DVARINT_handheldCameraDebug = Dvar_Deregister(DCONST_DVARINT_handheldCameraDebug);
  DCONST_DVARBOOL_handheldCameraImpulseLandingEnabled = Dvar_Deregister(DCONST_DVARBOOL_handheldCameraImpulseLandingEnabled);
  DCONST_DVARINT_handheldCameraImpulseLandingAttackMs = Dvar_Deregister(DCONST_DVARINT_handheldCameraImpulseLandingAttackMs);
  DCONST_DVARINT_handheldCameraImpulseLandingDecayMs = Dvar_Deregister(DCONST_DVARINT_handheldCameraImpulseLandingDecayMs);
  DCONST_DVARFLT_handheldCameraImpulseLandingRotAmplitudeScale = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseLandingRotAmplitudeScale);
  DCONST_DVARFLT_handheldCameraImpulseLandingRotPersistenceScale = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseLandingRotPersistenceScale);
  DCONST_DVARFLT_handheldCameraImpulseLandingTransAmplitudeScale = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseLandingTransAmplitudeScale);
  DCONST_DVARFLT_handheldCameraImpulseLandingTransPersistenceScale = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseLandingTransPersistenceScale);
  DCONST_DVARINT_handheldCameraImpulseLandingDecayType = Dvar_Deregister(DCONST_DVARINT_handheldCameraImpulseLandingDecayType);
  DCONST_DVARFLT_handheldCameraImpulseLandingModifierLow = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseLandingModifierLow);
  DCONST_DVARFLT_handheldCameraImpulseLandingModifierMedium = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseLandingModifierMedium);
  DCONST_DVARFLT_handheldCameraImpulseLandingModifierHigh = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseLandingModifierHigh);
  DCONST_DVARFLT_handheldCameraImpulseLandingModifierExtreme = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseLandingModifierExtreme);
  DCONST_DVARBOOL_handheldCameraImpulseSlideEnabled = Dvar_Deregister(DCONST_DVARBOOL_handheldCameraImpulseSlideEnabled);
  DCONST_DVARINT_handheldCameraImpulseSlideAttackMs = Dvar_Deregister(DCONST_DVARINT_handheldCameraImpulseSlideAttackMs);
  DCONST_DVARINT_handheldCameraImpulseSlideDecayMs = Dvar_Deregister(DCONST_DVARINT_handheldCameraImpulseSlideDecayMs);
  DCONST_DVARFLT_handheldCameraImpulseSlideRotAmplitudeScale = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseSlideRotAmplitudeScale);
  DCONST_DVARFLT_handheldCameraImpulseSlideRotPersistenceScale = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseSlideRotPersistenceScale);
  DCONST_DVARFLT_handheldCameraImpulseSlideTransAmplitudeScale = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseSlideTransAmplitudeScale);
  DCONST_DVARFLT_handheldCameraImpulseSlideTransPersistenceScale = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseSlideTransPersistenceScale);
  DCONST_DVARINT_handheldCameraImpulseSlideDecayType = Dvar_Deregister(DCONST_DVARINT_handheldCameraImpulseSlideDecayType);
  DCONST_DVARBOOL_handheldCameraImpulseDamageEnabled = Dvar_Deregister(DCONST_DVARBOOL_handheldCameraImpulseDamageEnabled);
  DCONST_DVARINT_handheldCameraImpulseDamageAttackMs = Dvar_Deregister(DCONST_DVARINT_handheldCameraImpulseDamageAttackMs);
  DCONST_DVARINT_handheldCameraImpulseDamageDecayMs = Dvar_Deregister(DCONST_DVARINT_handheldCameraImpulseDamageDecayMs);
  DCONST_DVARFLT_handheldCameraImpulseDamageRotAmplitudeScale = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseDamageRotAmplitudeScale);
  DCONST_DVARFLT_handheldCameraImpulseDamageRotPersistenceScale = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseDamageRotPersistenceScale);
  DCONST_DVARFLT_handheldCameraImpulseDamageTransAmplitudeScale = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseDamageTransAmplitudeScale);
  DCONST_DVARFLT_handheldCameraImpulseDamageTransPersistenceScale = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseDamageTransPersistenceScale);
  DCONST_DVARINT_handheldCameraImpulseDamageDecayType = Dvar_Deregister(DCONST_DVARINT_handheldCameraImpulseDamageDecayType);
  DCONST_DVARBOOL_handheldCameraImpulseImpactEnabled = Dvar_Deregister(DCONST_DVARBOOL_handheldCameraImpulseImpactEnabled);
  DCONST_DVARINT_handheldCameraImpulseImpactAttackMs = Dvar_Deregister(DCONST_DVARINT_handheldCameraImpulseImpactAttackMs);
  DCONST_DVARINT_handheldCameraImpulseImpactDecayMs = Dvar_Deregister(DCONST_DVARINT_handheldCameraImpulseImpactDecayMs);
  DCONST_DVARFLT_handheldCameraImpulseImpactRotAmplitudeScale = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseImpactRotAmplitudeScale);
  DCONST_DVARFLT_handheldCameraImpulseImpactRotPersistenceScale = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseImpactRotPersistenceScale);
  DCONST_DVARFLT_handheldCameraImpulseImpactTransAmplitudeScale = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseImpactTransAmplitudeScale);
  DCONST_DVARFLT_handheldCameraImpulseImpactTransPersistenceScale = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseImpactTransPersistenceScale);
  DCONST_DVARINT_handheldCameraImpulseImpactDecayType = Dvar_Deregister(DCONST_DVARINT_handheldCameraImpulseImpactDecayType);
  DCONST_DVARFLT_handheldCameraImpulseImpactMax2DSpeed = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseImpactMax2DSpeed);
  DCONST_DVARBOOL_handheldCameraImpulseFootstepEnabled = Dvar_Deregister(DCONST_DVARBOOL_handheldCameraImpulseFootstepEnabled);
  DCONST_DVARINT_handheldCameraImpulseFootstepAttackMs = Dvar_Deregister(DCONST_DVARINT_handheldCameraImpulseFootstepAttackMs);
  DCONST_DVARINT_handheldCameraImpulseFootstepDecayMs = Dvar_Deregister(DCONST_DVARINT_handheldCameraImpulseFootstepDecayMs);
  DCONST_DVARFLT_handheldCameraImpulseFootstepRotAmplitudeScale = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseFootstepRotAmplitudeScale);
  DCONST_DVARFLT_handheldCameraImpulseFootstepRotPersistenceScale = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseFootstepRotPersistenceScale);
  DCONST_DVARFLT_handheldCameraImpulseFootstepTransAmplitudeScale = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseFootstepTransAmplitudeScale);
  DCONST_DVARFLT_handheldCameraImpulseFootstepTransPersistenceScale = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseFootstepTransPersistenceScale);
  DCONST_DVARINT_handheldCameraImpulseFootstepDecayType = Dvar_Deregister(DCONST_DVARINT_handheldCameraImpulseFootstepDecayType);
  DCONST_DVARFLT_handheldCameraImpulseFootstepModifierJog = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseFootstepModifierJog);
  DCONST_DVARFLT_handheldCameraImpulseFootstepModifierSprint = Dvar_Deregister(DCONST_DVARFLT_handheldCameraImpulseFootstepModifierSprint);
  DCONST_DVARBOOL_advancedSwayDebug = Dvar_Deregister(DCONST_DVARBOOL_advancedSwayDebug);
  DCONST_DVARBOOL_advancedSwayViewmodelSmoothingEnabled = Dvar_Deregister(DCONST_DVARBOOL_advancedSwayViewmodelSmoothingEnabled);
  DCONST_DVARBOOL_advancedSwayViewmodelSmoothingEnabled_mouse = Dvar_Deregister(DCONST_DVARBOOL_advancedSwayViewmodelSmoothingEnabled_mouse);
  DCONST_DVARBOOL_advancedSwayGunTorsoSpringDamperEnabled = Dvar_Deregister(DCONST_DVARBOOL_advancedSwayGunTorsoSpringDamperEnabled);
  DCONST_DVARBOOL_advancedSwayGunDirEnabled = Dvar_Deregister(DCONST_DVARBOOL_advancedSwayGunDirEnabled);
  DCONST_DVARBOOL_advancedSwayGunDirSpringDamperEnabled = Dvar_Deregister(DCONST_DVARBOOL_advancedSwayGunDirSpringDamperEnabled);
  DCONST_DVARBOOL_advancedSwayEnabledSpectate = Dvar_Deregister(DCONST_DVARBOOL_advancedSwayEnabledSpectate);
  DCONST_DVARBOOL_smoothCameraEnabled = Dvar_Deregister(DCONST_DVARBOOL_smoothCameraEnabled);
  DCONST_DVARFLT_smoothCameraSpeed = Dvar_Deregister(DCONST_DVARFLT_smoothCameraSpeed);
  DCONST_DVARBOOL_smoothCameraEnabledSpectate = Dvar_Deregister(DCONST_DVARBOOL_smoothCameraEnabledSpectate);
  DCONST_DVARFLT_smoothCameraSpeedSpectate = Dvar_Deregister(DCONST_DVARFLT_smoothCameraSpeedSpectate);
  DCONST_DVARFLT_smoothClampAngle = Dvar_Deregister(DCONST_DVARFLT_smoothClampAngle);
  DVARFLT_cg_targetBaseFov = Dvar_Deregister(DVARFLT_cg_targetBaseFov);
  DCONST_DVARFLT_cg_targetBaseFovDecreaseStopAt = Dvar_Deregister(DCONST_DVARFLT_cg_targetBaseFovDecreaseStopAt);
  DCONST_DVARMPBOOL_cg_corpseFade_enabled = Dvar_Deregister(DCONST_DVARMPBOOL_cg_corpseFade_enabled);
  DCONST_DVARFLT_cg_corpseFade_time = Dvar_Deregister(DCONST_DVARFLT_cg_corpseFade_time);
  DCONST_DVARBOOL_cg_corpseFade_removeDObjWhenComplete = Dvar_Deregister(DCONST_DVARBOOL_cg_corpseFade_removeDObjWhenComplete);
  DCONST_DVARMPFLT_cg_corpseFade_outDistanceStart_ragdoll = Dvar_Deregister(DCONST_DVARMPFLT_cg_corpseFade_outDistanceStart_ragdoll);
  DCONST_DVARMPFLT_cg_corpseFade_inDistanceStart_ragdoll = Dvar_Deregister(DCONST_DVARMPFLT_cg_corpseFade_inDistanceStart_ragdoll);
  DCONST_DVARMPFLT_cg_corpseFade_outDistanceStart_scriptmodel = Dvar_Deregister(DCONST_DVARMPFLT_cg_corpseFade_outDistanceStart_scriptmodel);
  DCONST_DVARMPFLT_cg_corpseFade_inDistanceStart_scriptmodel = Dvar_Deregister(DCONST_DVARMPFLT_cg_corpseFade_inDistanceStart_scriptmodel);
  DCONST_DVARBOOL_cg_corpseFade_debug = Dvar_Deregister(DCONST_DVARBOOL_cg_corpseFade_debug);
  DCONST_DVARBOOL_helmetCamForceEnable = Dvar_Deregister(DCONST_DVARBOOL_helmetCamForceEnable);
  DCONST_DVARBOOL_helmetCamFollowEnabled = Dvar_Deregister(DCONST_DVARBOOL_helmetCamFollowEnabled);
  DCONST_DVARBOOL_helmetCamDrawHelmet = Dvar_Deregister(DCONST_DVARBOOL_helmetCamDrawHelmet);
  DCONST_DVARFLT_spectatorMaxPitch3p = Dvar_Deregister(DCONST_DVARFLT_spectatorMaxPitch3p);
  DCONST_DVARBOOL_cg_resetDoorStateWhenRespawnPlayer = Dvar_Deregister(DCONST_DVARBOOL_cg_resetDoorStateWhenRespawnPlayer);
  DCONST_DVARBOOL_cg_crosshairTraceAsync = Dvar_Deregister(DCONST_DVARBOOL_cg_crosshairTraceAsync);
  DVARINT_hud_health_min_fully_healed = Dvar_Deregister(DVARINT_hud_health_min_fully_healed);
  DVARBOOL_cg_drawLUIObjectives = Dvar_Deregister(DVARBOOL_cg_drawLUIObjectives);
  DVARBOOL_cg_trigger_draw = Dvar_Deregister(DVARBOOL_cg_trigger_draw);
  DVARVEC3_rc_override = Dvar_Deregister(DVARVEC3_rc_override);
  DVARBOOL_rc_draw_axis = Dvar_Deregister(DVARBOOL_rc_draw_axis);
  DVARBOOL_cg_useplayerbreathsys = Dvar_Deregister(DVARBOOL_cg_useplayerbreathsys);
  DCONST_DVARINT_cg_playerbreath_shot_recov_time = Dvar_Deregister(DCONST_DVARINT_cg_playerbreath_shot_recov_time);
  DCONST_DVARBOOL_cg_playerbreath_debug = Dvar_Deregister(DCONST_DVARBOOL_cg_playerbreath_debug);
  DCONST_DVARINT_cg_playerbreath_jump_cooldown_time = Dvar_Deregister(DCONST_DVARINT_cg_playerbreath_jump_cooldown_time);
  DCONST_DVARBOOL_snd_autoSim = Dvar_Deregister(DCONST_DVARBOOL_snd_autoSim);
  DCONST_DVARFLT_snd_autoSim_predictWindowMs = Dvar_Deregister(DCONST_DVARFLT_snd_autoSim_predictWindowMs);
  DCONST_DVARINT_snd_autoSim_ssc = Dvar_Deregister(DCONST_DVARINT_snd_autoSim_ssc);
  DCONST_DVARBOOL_cg_snd_debugwhizby = Dvar_Deregister(DCONST_DVARBOOL_cg_snd_debugwhizby);
  DVARFLT_cg_ceiling_footstep_coneHeight = Dvar_Deregister(DVARFLT_cg_ceiling_footstep_coneHeight);
  DVARFLT_cg_ceiling_footstep_coneRadius = Dvar_Deregister(DVARFLT_cg_ceiling_footstep_coneRadius);
  DCONST_DVARBOOL_cg_default_zone_is_exterior = Dvar_Deregister(DCONST_DVARBOOL_cg_default_zone_is_exterior);
  DCONST_DVARINT_snd_footstep_debug_duration = Dvar_Deregister(DCONST_DVARINT_snd_footstep_debug_duration);
  DCONST_DVARINT_snd_footstep_debug_finish_max_remaining = Dvar_Deregister(DCONST_DVARINT_snd_footstep_debug_finish_max_remaining);
  DCONST_DVARBOOL_snd_footstep_debug_asserts = Dvar_Deregister(DCONST_DVARBOOL_snd_footstep_debug_asserts);
  DCONST_DVARBOOL_snd_footstep_debug_alias = Dvar_Deregister(DCONST_DVARBOOL_snd_footstep_debug_alias);
  DCONST_DVARFLT_compassRadarUpdateTime = Dvar_Deregister(DCONST_DVARFLT_compassRadarUpdateTime);
  DCONST_DVARFLT_compassFastRadarUpdateTime = Dvar_Deregister(DCONST_DVARFLT_compassFastRadarUpdateTime);
  DCONST_DVARFLT_compassSlowRadarUpdateTime = Dvar_Deregister(DCONST_DVARFLT_compassSlowRadarUpdateTime);
  DCONST_DVARFLT_compassEnemyHeightDelta = Dvar_Deregister(DCONST_DVARFLT_compassEnemyHeightDelta);
  DCONST_DVARBOOL_compassEyesOnEnabled = Dvar_Deregister(DCONST_DVARBOOL_compassEyesOnEnabled);
  DCONST_DVARBOOL_compassPortableRadarOwnerOnly = Dvar_Deregister(DCONST_DVARBOOL_compassPortableRadarOwnerOnly);
  DCONST_DVARBOOL_compassEnemyRedBlipPerkFadeEnabled = Dvar_Deregister(DCONST_DVARBOOL_compassEnemyRedBlipPerkFadeEnabled);
  DCONST_DVARBOOL_compassEnemyFootstepEnabled = Dvar_Deregister(DCONST_DVARBOOL_compassEnemyFootstepEnabled);
  DVARFLT_compassRadarPingFadeTime = Dvar_Deregister(DVARFLT_compassRadarPingFadeTime);
  DVARFLT_compassRadarLineThickness = Dvar_Deregister(DVARFLT_compassRadarLineThickness);
  DVARBOOL_compassShowFire = Dvar_Deregister(DVARBOOL_compassShowFire);
  DVARFLT_compassShowFireBrMaxDistSq = Dvar_Deregister(DVARFLT_compassShowFireBrMaxDistSq);
  DVARBOOL_compass = Dvar_Deregister(DVARBOOL_compass);
  DCONST_DVARMPSPFLT_compassSoundPingDuration = Dvar_Deregister(DCONST_DVARMPSPFLT_compassSoundPingDuration);
  DCONST_DVARFLT_compassSilencedSoundPingDuration = Dvar_Deregister(DCONST_DVARFLT_compassSilencedSoundPingDuration);
  DVARFLT_compassSoundPingFadeTime = Dvar_Deregister(DVARFLT_compassSoundPingFadeTime);
  DVARBOOL_compassClampIcons = Dvar_Deregister(DVARBOOL_compassClampIcons);
  DVARFLT_compassPlayerWidth = Dvar_Deregister(DVARFLT_compassPlayerWidth);
  DVARFLT_compassPlayerHeight = Dvar_Deregister(DVARFLT_compassPlayerHeight);
  DVARVEC3_compassCoords = Dvar_Deregister(DVARVEC3_compassCoords);
  DVARFLT_compassECoordCutoff = Dvar_Deregister(DVARFLT_compassECoordCutoff);
  DVARBOOL_compassRotation = Dvar_Deregister(DVARBOOL_compassRotation);
  DVARFLT_compassTickertapeStretch = Dvar_Deregister(DVARFLT_compassTickertapeStretch);
  DVARFLT_compassCircleOutlineThickness = Dvar_Deregister(DVARFLT_compassCircleOutlineThickness);
  DCONST_DVARFLT_compassCircleTravelLineThickness = Dvar_Deregister(DCONST_DVARFLT_compassCircleTravelLineThickness);
  DVARFLT_compassObjectiveWidth = Dvar_Deregister(DVARFLT_compassObjectiveWidth);
  DVARFLT_compassObjectiveHeight = Dvar_Deregister(DVARFLT_compassObjectiveHeight);
  DCONST_DVARFLT_compassObjectiveWidthSmall = Dvar_Deregister(DCONST_DVARFLT_compassObjectiveWidthSmall);
  DCONST_DVARFLT_compassObjectiveHeightSmall = Dvar_Deregister(DCONST_DVARFLT_compassObjectiveHeightSmall);
  DVARFLT_compassObjectiveWidthLarge = Dvar_Deregister(DVARFLT_compassObjectiveWidthLarge);
  DVARFLT_compassObjectiveHeightLarge = Dvar_Deregister(DVARFLT_compassObjectiveHeightLarge);
  DVARFLT_compassObjectiveWidthMedium = Dvar_Deregister(DVARFLT_compassObjectiveWidthMedium);
  DVARFLT_compassObjectiveHeightMedium = Dvar_Deregister(DVARFLT_compassObjectiveHeightMedium);
  DVARFLT_compassObjectiveWidthHeadIcon = Dvar_Deregister(DVARFLT_compassObjectiveWidthHeadIcon);
  DVARFLT_compassObjectiveHeightHeadIcon = Dvar_Deregister(DVARFLT_compassObjectiveHeightHeadIcon);
  DVARFLT_compassIconMLGSpectatorScale = Dvar_Deregister(DVARFLT_compassIconMLGSpectatorScale);
  DVARFLT_compassIconMLGSpectatorVehicleScale = Dvar_Deregister(DVARFLT_compassIconMLGSpectatorVehicleScale);
  DVARFLT_compassIconMLGSpectatorLargeMapObjectiveSize = Dvar_Deregister(DVARFLT_compassIconMLGSpectatorLargeMapObjectiveSize);
  DVARFLT_compassPlayerNumberCircleRadius = Dvar_Deregister(DVARFLT_compassPlayerNumberCircleRadius);
  DVARFLT_compassPlayerNumberObjectiveCircleRadius = Dvar_Deregister(DVARFLT_compassPlayerNumberObjectiveCircleRadius);
  DVARFLT_compassPlayerObjectiveArrowRadius = Dvar_Deregister(DVARFLT_compassPlayerObjectiveArrowRadius);
  DVARFLT_compassPlayerObjectiveHolderCicleSize = Dvar_Deregister(DVARFLT_compassPlayerObjectiveHolderCicleSize);
  DVARFLT_compassPlayerObjectiveHolderArrowSize = Dvar_Deregister(DVARFLT_compassPlayerObjectiveHolderArrowSize);
  DVARFLT_compassPlayerObjectiveHolderOverallSize = Dvar_Deregister(DVARFLT_compassPlayerObjectiveHolderOverallSize);
  DVARFLT_compassSpectatedPlayerObjectiveArrowRadius = Dvar_Deregister(DVARFLT_compassSpectatedPlayerObjectiveArrowRadius);
  DVARFLT_compassPlayerNumberTextXOffset = Dvar_Deregister(DVARFLT_compassPlayerNumberTextXOffset);
  DVARFLT_compassObjectivePlayerNumberTextXOffset = Dvar_Deregister(DVARFLT_compassObjectivePlayerNumberTextXOffset);
  DVARFLT_compassPlayerJerseyNumberTextXOffset = Dvar_Deregister(DVARFLT_compassPlayerJerseyNumberTextXOffset);
  DVARFLT_compassPlayerNumberTextYOffset = Dvar_Deregister(DVARFLT_compassPlayerNumberTextYOffset);
  DVARFLT_compassObjectivePlayerNumberTextYOffset = Dvar_Deregister(DVARFLT_compassObjectivePlayerNumberTextYOffset);
  DVARFLT_compassMLGMapVehicleScalePartial = Dvar_Deregister(DVARFLT_compassMLGMapVehicleScalePartial);
  DVARFLT_compassMLGLargeMapInnerArrowOpacity = Dvar_Deregister(DVARFLT_compassMLGLargeMapInnerArrowOpacity);
  DVARFLT_compassMLGPlayerNumberTextWidth = Dvar_Deregister(DVARFLT_compassMLGPlayerNumberTextWidth);
  DVARFLT_compassMLGPlayerNumberFontHeight = Dvar_Deregister(DVARFLT_compassMLGPlayerNumberFontHeight);
  DVARFLT_compassMLGPlayerObjectiveNumberTextWidth = Dvar_Deregister(DVARFLT_compassMLGPlayerObjectiveNumberTextWidth);
  DVARFLT_compassMLGPlayerObjectiveNumberFontHeight = Dvar_Deregister(DVARFLT_compassMLGPlayerObjectiveNumberFontHeight);
  DVARFLT_compassObjectiveMaxRange = Dvar_Deregister(DVARFLT_compassObjectiveMaxRange);
  DVARFLT_compassObjectiveMinAlpha = Dvar_Deregister(DVARFLT_compassObjectiveMinAlpha);
  DVARFLT_compassObjectiveIconWidth = Dvar_Deregister(DVARFLT_compassObjectiveIconWidth);
  DVARFLT_compassObjectiveIconHeight = Dvar_Deregister(DVARFLT_compassObjectiveIconHeight);
  DVARFLT_compassObjectiveIconWidthMedium = Dvar_Deregister(DVARFLT_compassObjectiveIconWidthMedium);
  DVARFLT_compassObjectiveIconHeightMedium = Dvar_Deregister(DVARFLT_compassObjectiveIconHeightMedium);
  DVARFLT_compassObjectiveIconWidthLarge = Dvar_Deregister(DVARFLT_compassObjectiveIconWidthLarge);
  DVARFLT_compassObjectiveIconHeightLarge = Dvar_Deregister(DVARFLT_compassObjectiveIconHeightLarge);
  DVARFLT_compassObjectiveIconWidthHeadIcon = Dvar_Deregister(DVARFLT_compassObjectiveIconWidthHeadIcon);
  DVARFLT_compassObjectiveIconHeightHeadIcon = Dvar_Deregister(DVARFLT_compassObjectiveIconHeightHeadIcon);
  DCONST_DVARFLT_compassObjectiveIconWidthSmall = Dvar_Deregister(DCONST_DVARFLT_compassObjectiveIconWidthSmall);
  DCONST_DVARFLT_compassObjectiveIconHeightSmall = Dvar_Deregister(DCONST_DVARFLT_compassObjectiveIconHeightSmall);
  DVARFLT_navbarObjectiveIconWidth = Dvar_Deregister(DVARFLT_navbarObjectiveIconWidth);
  DVARFLT_navbarObjectiveIconHeight = Dvar_Deregister(DVARFLT_navbarObjectiveIconHeight);
  DCONST_DVARFLT_navbarObjectiveIconSizeScalar = Dvar_Deregister(DCONST_DVARFLT_navbarObjectiveIconSizeScalar);
  DCONST_DVARFLT_navbarEnemyIconAnimationRange = Dvar_Deregister(DCONST_DVARFLT_navbarEnemyIconAnimationRange);
  DCONST_DVARFLT_navbarEnemyIconMaxScalar = Dvar_Deregister(DCONST_DVARFLT_navbarEnemyIconMaxScalar);
  DCONST_DVARFLT_navbarEnemyIconBackingMaxScalar = Dvar_Deregister(DCONST_DVARFLT_navbarEnemyIconBackingMaxScalar);
  DCONST_DVARVEC3_navbarEnemyIconBackingColor = Dvar_Deregister(DCONST_DVARVEC3_navbarEnemyIconBackingColor);
  DCONST_DVARBOOL_navbarEnemyIconAnimPingPong = Dvar_Deregister(DCONST_DVARBOOL_navbarEnemyIconAnimPingPong);
  DCONST_DVARVEC3_navbarEnemyIconColor = Dvar_Deregister(DCONST_DVARVEC3_navbarEnemyIconColor);
  DCONST_DVARBOOL_navbarUseRoundedCompass = Dvar_Deregister(DCONST_DVARBOOL_navbarUseRoundedCompass);
  DVARBOOL_compassHideVehicles = Dvar_Deregister(DVARBOOL_compassHideVehicles);
  DVARBOOL_compassVehicleUseMapMask = Dvar_Deregister(DVARBOOL_compassVehicleUseMapMask);
  DVARFLT_cg_hudMapFriendlyWidth = Dvar_Deregister(DVARFLT_cg_hudMapFriendlyWidth);
  DVARFLT_cg_hudMapFriendlyHeight = Dvar_Deregister(DVARFLT_cg_hudMapFriendlyHeight);
  DVARFLT_cg_hudMapPlayerWidth = Dvar_Deregister(DVARFLT_cg_hudMapPlayerWidth);
  DVARFLT_cg_hudMapPlayerHeight = Dvar_Deregister(DVARFLT_cg_hudMapPlayerHeight);
  DVARFLT_cg_hudMapBorderWidth = Dvar_Deregister(DVARFLT_cg_hudMapBorderWidth);
  DVARFLT_compassSize = Dvar_Deregister(DVARFLT_compassSize);
  DVARFLT_compassFriendlyWidth = Dvar_Deregister(DVARFLT_compassFriendlyWidth);
  DVARFLT_compassFriendlyHeight = Dvar_Deregister(DVARFLT_compassFriendlyHeight);
  DVARFLT_compassObjectiveDetailDist = Dvar_Deregister(DVARFLT_compassObjectiveDetailDist);
  DCONST_DVARFLT_compassEnemyIconSizeScalar = Dvar_Deregister(DCONST_DVARFLT_compassEnemyIconSizeScalar);
  DCONST_DVARBOOL_compassDelayEnabled = Dvar_Deregister(DCONST_DVARBOOL_compassDelayEnabled);
  DCONST_DVARFLT_compassDelayEase = Dvar_Deregister(DCONST_DVARFLT_compassDelayEase);
  DCONST_DVARFLT_compassShrinkFactor = Dvar_Deregister(DCONST_DVARFLT_compassShrinkFactor);
  DCONST_DVARFLT_compassBackgroundWidthScalar = Dvar_Deregister(DCONST_DVARFLT_compassBackgroundWidthScalar);
  DCONST_DVARFLT_compassMaskScalar = Dvar_Deregister(DCONST_DVARFLT_compassMaskScalar);
  DCONST_DVARFLT_compassCenterMaskScalar = Dvar_Deregister(DCONST_DVARFLT_compassCenterMaskScalar);
  DCONST_DVARVEC4_compassBackgroundColor = Dvar_Deregister(DCONST_DVARVEC4_compassBackgroundColor);
  DCONST_DVARVEC4_compassTextOutlineColor = Dvar_Deregister(DCONST_DVARVEC4_compassTextOutlineColor);
  DCONST_DVARFLT_compassTextVerticalOffset = Dvar_Deregister(DCONST_DVARFLT_compassTextVerticalOffset);
  DCONST_DVARFLT_compassVehicleSizeMini = Dvar_Deregister(DCONST_DVARFLT_compassVehicleSizeMini);
  DCONST_DVARFLT_radialSensorRange = Dvar_Deregister(DCONST_DVARFLT_radialSensorRange);
  DCONST_DVARFLT_radialSensorIconSize = Dvar_Deregister(DCONST_DVARFLT_radialSensorIconSize);
  DCONST_DVARFLT_radialSensorSweepRadius = Dvar_Deregister(DCONST_DVARFLT_radialSensorSweepRadius);
  DCONST_DVARINT_radialSensorSweepDuration = Dvar_Deregister(DCONST_DVARINT_radialSensorSweepDuration);
  DCONST_DVARINT_radialSensorNextPingTime = Dvar_Deregister(DCONST_DVARINT_radialSensorNextPingTime);
  DCONST_DVARVEC4_radialSensorIconColor = Dvar_Deregister(DCONST_DVARVEC4_radialSensorIconColor);
  DCONST_DVARFLT_heartbeatSensorAlphaFalloff = Dvar_Deregister(DCONST_DVARFLT_heartbeatSensorAlphaFalloff);
  DCONST_DVARFLT_heartbeatSensorEnemyDistanceWarningThreshold = Dvar_Deregister(DCONST_DVARFLT_heartbeatSensorEnemyDistanceWarningThreshold);
  DCONST_DVARVEC4_heartbeatSensorEnemyDistanceWarningColor = Dvar_Deregister(DCONST_DVARVEC4_heartbeatSensorEnemyDistanceWarningColor);
  DCONST_DVARBOOL_hearbeatSensorUseCurrentOrientation = Dvar_Deregister(DCONST_DVARBOOL_hearbeatSensorUseCurrentOrientation);
  DCONST_DVARINT_heartbeatSensorInitialSweepDelay = Dvar_Deregister(DCONST_DVARINT_heartbeatSensorInitialSweepDelay);
  DCONST_DVARFLT_heartbeatSensorMaxPitchRange = Dvar_Deregister(DCONST_DVARFLT_heartbeatSensorMaxPitchRange);
  DCONST_DVARFLT_heartbeatSensorPitchShiftValue = Dvar_Deregister(DCONST_DVARFLT_heartbeatSensorPitchShiftValue);
  DCONST_DVARFLT_heartbeatSensorEMPIconSize = Dvar_Deregister(DCONST_DVARFLT_heartbeatSensorEMPIconSize);
  DCONST_DVARFLT_heartbeatSensorEMPSweepRadius = Dvar_Deregister(DCONST_DVARFLT_heartbeatSensorEMPSweepRadius);
  DVARINT_heartbeatSensorEMPNextPingTime = Dvar_Deregister(DVARINT_heartbeatSensorEMPNextPingTime);
  DCONST_DVARINT_heartbeatSensorEMPSweepDuration = Dvar_Deregister(DCONST_DVARINT_heartbeatSensorEMPSweepDuration);
  DCONST_DVARFLT_heartbeatSensorEMPFontScalar = Dvar_Deregister(DCONST_DVARFLT_heartbeatSensorEMPFontScalar);
  DCONST_DVARVEC2_heartbeatSensorEMPDistanceTextOffset = Dvar_Deregister(DCONST_DVARVEC2_heartbeatSensorEMPDistanceTextOffset);
  DCONST_DVARFLT_heartbeatSensorEMPRange = Dvar_Deregister(DCONST_DVARFLT_heartbeatSensorEMPRange);
  DVARFLT_heartbeatSensorEMPMaxDrawRange = Dvar_Deregister(DVARFLT_heartbeatSensorEMPMaxDrawRange);
  DCONST_DVARFLT_heartbeatSensorTabletIconSize = Dvar_Deregister(DCONST_DVARFLT_heartbeatSensorTabletIconSize);
  DCONST_DVARFLT_heartbeatSensorTabletSweepRadius = Dvar_Deregister(DCONST_DVARFLT_heartbeatSensorTabletSweepRadius);
  DVARINT_heartbeatSensorTabletNextPingTime = Dvar_Deregister(DVARINT_heartbeatSensorTabletNextPingTime);
  DCONST_DVARINT_heartbeatSensorTabletSweepDuration = Dvar_Deregister(DCONST_DVARINT_heartbeatSensorTabletSweepDuration);
  DCONST_DVARFLT_heartbeatSensorTabletFontScalar = Dvar_Deregister(DCONST_DVARFLT_heartbeatSensorTabletFontScalar);
  DCONST_DVARVEC2_heartbeatSensorTabletDistanceTextOffset = Dvar_Deregister(DCONST_DVARVEC2_heartbeatSensorTabletDistanceTextOffset);
  DVARFLT_heartbeatSensorTabletRange = Dvar_Deregister(DVARFLT_heartbeatSensorTabletRange);
  DVARFLT_heartbeatSensorTabletMaxDrawRange = Dvar_Deregister(DVARFLT_heartbeatSensorTabletMaxDrawRange);
  DCONST_DVARVEC4_compassMainHUDColor = Dvar_Deregister(DCONST_DVARVEC4_compassMainHUDColor);
  DCONST_DVARVEC4_compassMainHeadingColor = Dvar_Deregister(DCONST_DVARVEC4_compassMainHeadingColor);
  DCONST_DVARFLT_compassArrowOffset = Dvar_Deregister(DCONST_DVARFLT_compassArrowOffset);
  DVARBOOL_compassShowAllEnemies = Dvar_Deregister(DVARBOOL_compassShowAllEnemies);
  DVARBOOL_compassZoomEnabled = Dvar_Deregister(DVARBOOL_compassZoomEnabled);
  DVARFLT_compassZoomMaxLevel = Dvar_Deregister(DVARFLT_compassZoomMaxLevel);
  DVARFLT_compassZoomSpeedFactor = Dvar_Deregister(DVARFLT_compassZoomSpeedFactor);
  DVARFLT_compassTacMapZoomMaxLevel = Dvar_Deregister(DVARFLT_compassTacMapZoomMaxLevel);
  DVARFLT_compassTacMapZoomSpeedFactor = Dvar_Deregister(DVARFLT_compassTacMapZoomSpeedFactor);
  DVARFLT_compassTacMapMouseZoomSpeedFactor = Dvar_Deregister(DVARFLT_compassTacMapMouseZoomSpeedFactor);
  DVARFLT_compassClippedScaleMaxDistance = Dvar_Deregister(DVARFLT_compassClippedScaleMaxDistance);
  DVARFLT_compassClippedScale = Dvar_Deregister(DVARFLT_compassClippedScale);
  DVARBOOL_compassEnableClippedScale = Dvar_Deregister(DVARBOOL_compassEnableClippedScale);
  DVARBOOL_compassHideClippedFriendlies = Dvar_Deregister(DVARBOOL_compassHideClippedFriendlies);
  DVARBOOL_compassEnableFOVScaledCone = Dvar_Deregister(DVARBOOL_compassEnableFOVScaledCone);
  DVARBOOL_compassHideClippedNonSquad = Dvar_Deregister(DVARBOOL_compassHideClippedNonSquad);
  DVARFLT_compassVehicleHideEnemyDistance = Dvar_Deregister(DVARFLT_compassVehicleHideEnemyDistance);
  DCONST_DVARFLT_compass_stretch_max_fov_ADS = Dvar_Deregister(DCONST_DVARFLT_compass_stretch_max_fov_ADS);
  DCONST_DVARFLT_compass_stretch_min_fov_ADS = Dvar_Deregister(DCONST_DVARFLT_compass_stretch_min_fov_ADS);
  DCONST_DVARFLT_compass_stretch_max_fov_Hip = Dvar_Deregister(DCONST_DVARFLT_compass_stretch_max_fov_Hip);
  DCONST_DVARFLT_compass_stretch_min_fov_Hip = Dvar_Deregister(DCONST_DVARFLT_compass_stretch_min_fov_Hip);
  DVARFLT_compassBigMapVehicleScalePartial = Dvar_Deregister(DVARFLT_compassBigMapVehicleScalePartial);
  DVARFLT_compassBigMapVehicleScaleFull = Dvar_Deregister(DVARFLT_compassBigMapVehicleScaleFull);
  DVARFLT_compassBigMapClippedVehicleScale = Dvar_Deregister(DVARFLT_compassBigMapClippedVehicleScale);
  DVARFLT_compassTacMapVehicleScale = Dvar_Deregister(DVARFLT_compassTacMapVehicleScale);
  DVARFLT_compassFullMapVehicleScale = Dvar_Deregister(DVARFLT_compassFullMapVehicleScale);
  DVARFLT_compassVehicleScalePartial = Dvar_Deregister(DVARFLT_compassVehicleScalePartial);
  DVARBOOL_compassEditSettingsEnabled = Dvar_Deregister(DVARBOOL_compassEditSettingsEnabled);
  DVARFLT_compassEditSettingsHeight = Dvar_Deregister(DVARFLT_compassEditSettingsHeight);
  DVARFLT_compassEditSettingsWidth = Dvar_Deregister(DVARFLT_compassEditSettingsWidth);
  DVARFLT_compassEditSettingsZoom = Dvar_Deregister(DVARFLT_compassEditSettingsZoom);
  DVARFLT_compassEditSettingsRotation = Dvar_Deregister(DVARFLT_compassEditSettingsRotation);
  DVARFLT_compassEditSettingsOffsetX = Dvar_Deregister(DVARFLT_compassEditSettingsOffsetX);
  DVARFLT_compassEditSettingsOffsetY = Dvar_Deregister(DVARFLT_compassEditSettingsOffsetY);
  DVARFLT_compassRoleIconScale = Dvar_Deregister(DVARFLT_compassRoleIconScale);
  DVARBOOL_isCompassCPRaidSecurityScreen = Dvar_Deregister(DVARBOOL_isCompassCPRaidSecurityScreen);
  DVARBOOL_testCPRaidSecurityScreen = Dvar_Deregister(DVARBOOL_testCPRaidSecurityScreen);
  DVARINT_compassBRCirclePulseDuration = Dvar_Deregister(DVARINT_compassBRCirclePulseDuration);
  DVARINT_compassBRCircleMinPulseDuration = Dvar_Deregister(DVARINT_compassBRCircleMinPulseDuration);
  DVARINT_compassBRCircleTimeToMinPulse = Dvar_Deregister(DVARINT_compassBRCircleTimeToMinPulse);
  DVARINT_compassBRCirclePulseEaseType = Dvar_Deregister(DVARINT_compassBRCirclePulseEaseType);
  DVARFLT_compassBRCirclePulseMinAlpha = Dvar_Deregister(DVARFLT_compassBRCirclePulseMinAlpha);
  DCONST_DVARFLT_compassTacmapIconAlphaOverride = Dvar_Deregister(DCONST_DVARFLT_compassTacmapIconAlphaOverride);
  DCONST_DVARFLT_compassAreaCalloutsTextHeightScale = Dvar_Deregister(DCONST_DVARFLT_compassAreaCalloutsTextHeightScale);
  DCONST_DVARFLT_compassAreaCalloutsBackgroundSidePadding = Dvar_Deregister(DCONST_DVARFLT_compassAreaCalloutsBackgroundSidePadding);
  DCONST_DVARFLT_compassAreaCalloutsBackgroundTopPadding = Dvar_Deregister(DCONST_DVARFLT_compassAreaCalloutsBackgroundTopPadding);
  DCONST_DVARFLT_compassAreaCalloutsBackgroundBottomPadding = Dvar_Deregister(DCONST_DVARFLT_compassAreaCalloutsBackgroundBottomPadding);
  DCONST_DVARFLT_compassAreaCalloutsTextColorR = Dvar_Deregister(DCONST_DVARFLT_compassAreaCalloutsTextColorR);
  DCONST_DVARFLT_compassAreaCalloutsTextColorG = Dvar_Deregister(DCONST_DVARFLT_compassAreaCalloutsTextColorG);
  DCONST_DVARFLT_compassAreaCalloutsTextColorB = Dvar_Deregister(DCONST_DVARFLT_compassAreaCalloutsTextColorB);
  DCONST_DVARFLT_compassAreaCalloutsTextColorA = Dvar_Deregister(DCONST_DVARFLT_compassAreaCalloutsTextColorA);
  DCONST_DVARFLT_compassAreaCalloutsBGColorR = Dvar_Deregister(DCONST_DVARFLT_compassAreaCalloutsBGColorR);
  DCONST_DVARFLT_compassAreaCalloutsBGColorG = Dvar_Deregister(DCONST_DVARFLT_compassAreaCalloutsBGColorG);
  DCONST_DVARFLT_compassAreaCalloutsBGColorB = Dvar_Deregister(DCONST_DVARFLT_compassAreaCalloutsBGColorB);
  DCONST_DVARFLT_compassAreaCalloutsBGColorA = Dvar_Deregister(DCONST_DVARFLT_compassAreaCalloutsBGColorA);
  DCONST_DVARFLT_compassAreaCalloutsBackgroundAlpha = Dvar_Deregister(DCONST_DVARFLT_compassAreaCalloutsBackgroundAlpha);
  DVARBOOL_compassRenderAdditionalHighResTiles = Dvar_Deregister(DVARBOOL_compassRenderAdditionalHighResTiles);
  DVARBOOL_calloutmarkerping_enabled = Dvar_Deregister(DVARBOOL_calloutmarkerping_enabled);
  DCONST_DVARBOOL_calloutmarkerping_use_prediction = Dvar_Deregister(DCONST_DVARBOOL_calloutmarkerping_use_prediction);
  DCONST_DVARBOOL_calloutmarkerping_trace_hit_lethals = Dvar_Deregister(DCONST_DVARBOOL_calloutmarkerping_trace_hit_lethals);
  DCONST_DVARBOOL_calloutmarkerping_trace_hit_vehicles = Dvar_Deregister(DCONST_DVARBOOL_calloutmarkerping_trace_hit_vehicles);
  DCONST_DVARBOOL_calloutmarkerping_trace_hit_enemies = Dvar_Deregister(DCONST_DVARBOOL_calloutmarkerping_trace_hit_enemies);
  DCONST_DVARBOOL_calloutmarkerping_trace_hit_doors = Dvar_Deregister(DCONST_DVARBOOL_calloutmarkerping_trace_hit_doors);
  DCONST_DVARBOOL_calloutmarkerping_trace_hit_caches = Dvar_Deregister(DCONST_DVARBOOL_calloutmarkerping_trace_hit_caches);
  DCONST_DVARBOOL_calloutmarkerping_trace_hit_kiosks = Dvar_Deregister(DCONST_DVARBOOL_calloutmarkerping_trace_hit_kiosks);
  DCONST_DVARBOOL_calloutmarkerping_trace_hit_objectives = Dvar_Deregister(DCONST_DVARBOOL_calloutmarkerping_trace_hit_objectives);
  DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_tablets = Dvar_Deregister(DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_tablets);
  DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_kiosks = Dvar_Deregister(DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_kiosks);
  DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_vehicles = Dvar_Deregister(DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_vehicles);
  DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_objectives = Dvar_Deregister(DCONST_DVARBOOL_calloutmarkerping_tacmap_hit_objectives);
  DVARBOOL_calloutmarkerping_buybackEnabled = Dvar_Deregister(DVARBOOL_calloutmarkerping_buybackEnabled);
  DVARBOOL_compassVehiclePingMarkersCustom = Dvar_Deregister(DVARBOOL_compassVehiclePingMarkersCustom);
  DVARBOOL_calloutmarkerping_contextualPingDetectionEnabled = Dvar_Deregister(DVARBOOL_calloutmarkerping_contextualPingDetectionEnabled);
  DVARBOOL_calloutmarkerping_useAABBBCollection = Dvar_Deregister(DVARBOOL_calloutmarkerping_useAABBBCollection);
  DVARBOOL_calloutmarkerping_sightTraceContentsFix = Dvar_Deregister(DVARBOOL_calloutmarkerping_sightTraceContentsFix);
  DVARBOOL_calloutmarkerping_enableLongRangeEnemyPing = Dvar_Deregister(DVARBOOL_calloutmarkerping_enableLongRangeEnemyPing);
  DVARBOOL_calloutmarkerping_enabled_groundwar = Dvar_Deregister(DVARBOOL_calloutmarkerping_enabled_groundwar);
  DVARBOOL_calloutmarkerping_enabled_arena = Dvar_Deregister(DVARBOOL_calloutmarkerping_enabled_arena);
  DVARBOOL_calloutmarkerping_enabled_cp = Dvar_Deregister(DVARBOOL_calloutmarkerping_enabled_cp);
  DCONST_DVARBOOL_calloutmarkerping_debug_log = Dvar_Deregister(DCONST_DVARBOOL_calloutmarkerping_debug_log);
  DCONST_DVARBOOL_calloutmarkerping_debug_trace = Dvar_Deregister(DCONST_DVARBOOL_calloutmarkerping_debug_trace);
  DCONST_DVARINT_calloutmarkerping_debug_trace_duration = Dvar_Deregister(DCONST_DVARINT_calloutmarkerping_debug_trace_duration);
  DCONST_DVARBOOL_calloutmarkerping_debug_contextualping = Dvar_Deregister(DCONST_DVARBOOL_calloutmarkerping_debug_contextualping);
  DCONST_DVARFLT_calloutmarkerping_trace_entity_distance = Dvar_Deregister(DCONST_DVARFLT_calloutmarkerping_trace_entity_distance);
  DCONST_DVARFLT_calloutmarkerping_trace_entity_radius = Dvar_Deregister(DCONST_DVARFLT_calloutmarkerping_trace_entity_radius);
  DCONST_DVARFLT_calloutmarkerping_trace_tacmap_radius = Dvar_Deregister(DCONST_DVARFLT_calloutmarkerping_trace_tacmap_radius);
  DCONST_DVARFLT_calloutmarkerping_trace_tacmap_height = Dvar_Deregister(DCONST_DVARFLT_calloutmarkerping_trace_tacmap_height);
  DCONST_DVARFLT_calloutmarkerping_trace_entity_mindot = Dvar_Deregister(DCONST_DVARFLT_calloutmarkerping_trace_entity_mindot);
  DCONST_DVARFLT_calloutmarkerping_trace_enemy_bias = Dvar_Deregister(DCONST_DVARFLT_calloutmarkerping_trace_enemy_bias);
  DCONST_DVARFLT_calloutmarkerping_lookat_ping_icon_dot = Dvar_Deregister(DCONST_DVARFLT_calloutmarkerping_lookat_ping_icon_dot);
  DCONST_DVARFLT_calloutmarkerping_lookat_ping_beam_dist = Dvar_Deregister(DCONST_DVARFLT_calloutmarkerping_lookat_ping_beam_dist);
  DCONST_DVARFLT_calloutmarkerping_lookat_objective_icon_dot = Dvar_Deregister(DCONST_DVARFLT_calloutmarkerping_lookat_objective_icon_dot);
  DVARFLT_calloutmarkerping_longRangeEnemyPing = Dvar_Deregister(DVARFLT_calloutmarkerping_longRangeEnemyPing);
  DVARFLT_calloutmarkerping_trace_solid_distance = Dvar_Deregister(DVARFLT_calloutmarkerping_trace_solid_distance);
  DVARFLT_compass_buyback_circle_moving_radius_pct = Dvar_Deregister(DVARFLT_compass_buyback_circle_moving_radius_pct);
  DCONST_DVARINT_calloutmarkerping_double_tap_time = Dvar_Deregister(DCONST_DVARINT_calloutmarkerping_double_tap_time);
  DCONST_DVARINT_calloutmarkerping_prediction_timeout_time = Dvar_Deregister(DCONST_DVARINT_calloutmarkerping_prediction_timeout_time);
  DCONST_DVARINT_calloutmarkerping_prediction_debounce_time = Dvar_Deregister(DCONST_DVARINT_calloutmarkerping_prediction_debounce_time);
  DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_basis = Dvar_Deregister(DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_basis);
  DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_amplitude = Dvar_Deregister(DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_amplitude);
  DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_frequency = Dvar_Deregister(DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_frequency);
  DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_height = Dvar_Deregister(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_height);
  DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_y = Dvar_Deregister(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_y);
  DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_y_elev = Dvar_Deregister(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_y_elev);
  DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_y_ping = Dvar_Deregister(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_y_ping);
  DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_pip_d = Dvar_Deregister(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_pip_d);
  DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_pip_s = Dvar_Deregister(DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_pip_s);
  DCONST_DVARINT_bg_counterUAVStrengthLevelShowFriendlyOnly = Dvar_Deregister(DCONST_DVARINT_bg_counterUAVStrengthLevelShowFriendlyOnly);
  DCONST_DVARINT_bg_counterUAVStrengthLevelShowMapOnly = Dvar_Deregister(DCONST_DVARINT_bg_counterUAVStrengthLevelShowMapOnly);
  DCONST_DVARINT_bg_counterUAVStrengthLevelFullyJammed = Dvar_Deregister(DCONST_DVARINT_bg_counterUAVStrengthLevelFullyJammed);
  DCONST_DVARFLT_bg_counterUAVRadarJamLevelShowFriendlyOnly = Dvar_Deregister(DCONST_DVARFLT_bg_counterUAVRadarJamLevelShowFriendlyOnly);
  DCONST_DVARFLT_bg_counterUAVRadarJamLevelShowMapOnly = Dvar_Deregister(DCONST_DVARFLT_bg_counterUAVRadarJamLevelShowMapOnly);
  DCONST_DVARFLT_bg_counterUAVRadarJamLevelFullyJammed = Dvar_Deregister(DCONST_DVARFLT_bg_counterUAVRadarJamLevelFullyJammed);
  DVARFLT_scramblerJamDistMin = Dvar_Deregister(DVARFLT_scramblerJamDistMin);
  DVARFLT_scramblerJamDistMax = Dvar_Deregister(DVARFLT_scramblerJamDistMax);
  DVARBOOL_scramblerJamSinCurve = Dvar_Deregister(DVARBOOL_scramblerJamSinCurve);
  DVARFLT_scramblerJamDistLittle = Dvar_Deregister(DVARFLT_scramblerJamDistLittle);
  DVARFLT_scramblerJamDistMedium = Dvar_Deregister(DVARFLT_scramblerJamDistMedium);
  DVARFLT_scramblerJamDistLarge = Dvar_Deregister(DVARFLT_scramblerJamDistLarge);
  DVARFLT_scramblerJamCompassLittle = Dvar_Deregister(DVARFLT_scramblerJamCompassLittle);
  DVARFLT_scramblerJamCompassMedium = Dvar_Deregister(DVARFLT_scramblerJamCompassMedium);
  DVARFLT_scramblerJamCompassLarge = Dvar_Deregister(DVARFLT_scramblerJamCompassLarge);
  DVARFLT_scramblerJamCompassLinear = Dvar_Deregister(DVARFLT_scramblerJamCompassLinear);
  DCONST_DVARFLT_cg_teammate_firing_threshold = Dvar_Deregister(DCONST_DVARFLT_cg_teammate_firing_threshold);
  DCONST_DVARMPFLT_veh_boneTargetTrackLerpRate = Dvar_Deregister(DCONST_DVARMPFLT_veh_boneTargetTrackLerpRate);
  DCONST_DVARMPFLT_veh_boneTargetTrackResetLerpRate = Dvar_Deregister(DCONST_DVARMPFLT_veh_boneTargetTrackResetLerpRate);
  DCONST_DVARMPFLT_veh_boneTargetTrackLocalScale = Dvar_Deregister(DCONST_DVARMPFLT_veh_boneTargetTrackLocalScale);
  DCONST_DVARFLT_aim_turret_align_start_angle = Dvar_Deregister(DCONST_DVARFLT_aim_turret_align_start_angle);
  DCONST_DVARFLT_remote_turret_pitch_addition = Dvar_Deregister(DCONST_DVARFLT_remote_turret_pitch_addition);
  DCONST_DVARFLT_remote_turret_yaw_addition = Dvar_Deregister(DCONST_DVARFLT_remote_turret_yaw_addition);
  DCONST_DVARFLT_veh_minAllowedWheelFrac = Dvar_Deregister(DCONST_DVARFLT_veh_minAllowedWheelFrac);
  DVARFLT_cg_revPriority_distanceMax = Dvar_Deregister(DVARFLT_cg_revPriority_distanceMax);
  DCONST_DVARBOOL_cg_vehicleCullingPriorities = Dvar_Deregister(DCONST_DVARBOOL_cg_vehicleCullingPriorities);
  DCONST_DVARINT_cg_vehicleSoundCount = Dvar_Deregister(DCONST_DVARINT_cg_vehicleSoundCount);
  DVARBOOL_cg_vehicleSpectateEntityOrderFixActive = Dvar_Deregister(DVARBOOL_cg_vehicleSpectateEntityOrderFixActive);
  DVARBOOL_vehCam_freeLook = Dvar_Deregister(DVARBOOL_vehCam_freeLook);
  DVARVEC3_vehCam_angles = Dvar_Deregister(DVARVEC3_vehCam_angles);
  DVARVEC3_vehCam_offset = Dvar_Deregister(DVARVEC3_vehCam_offset);
  DVARFLT_vehCam_radius = Dvar_Deregister(DVARFLT_vehCam_radius);
  DVARFLT_vehCam_speedInfluence = Dvar_Deregister(DVARFLT_vehCam_speedInfluence);
  DVARFLT_vehCam_pitchTurnRate = Dvar_Deregister(DVARFLT_vehCam_pitchTurnRate);
  DVARFLT_vehCam_pitchClamp = Dvar_Deregister(DVARFLT_vehCam_pitchClamp);
  DVARFLT_vehCam_yawTurnRate = Dvar_Deregister(DVARFLT_vehCam_yawTurnRate);
  DVARFLT_vehCam_yawClamp = Dvar_Deregister(DVARFLT_vehCam_yawClamp);
  DVARINT_vehCam_zOffsetMode = Dvar_Deregister(DVARINT_vehCam_zOffsetMode);
  DVARVEC3_vehCam_angles3P = Dvar_Deregister(DVARVEC3_vehCam_angles3P);
  DVARVEC3_vehCam_offset3P = Dvar_Deregister(DVARVEC3_vehCam_offset3P);
  DVARFLT_vehCam_radius3P = Dvar_Deregister(DVARFLT_vehCam_radius3P);
  DVARFLT_vehCam_speedInfluence3P = Dvar_Deregister(DVARFLT_vehCam_speedInfluence3P);
  DVARFLT_vehCam_pitchTurnRate3P = Dvar_Deregister(DVARFLT_vehCam_pitchTurnRate3P);
  DVARFLT_vehCam_pitchClamp3P = Dvar_Deregister(DVARFLT_vehCam_pitchClamp3P);
  DVARINT_vehCam_zOffsetMode3P = Dvar_Deregister(DVARINT_vehCam_zOffsetMode3P);
  DVARFLT_vehCam_yawTurnRate3P = Dvar_Deregister(DVARFLT_vehCam_yawTurnRate3P);
  DVARFLT_vehCam_yawClamp3P = Dvar_Deregister(DVARFLT_vehCam_yawClamp3P);
  DVARFLT_vehAudio_inAirPitchUpLerp = Dvar_Deregister(DVARFLT_vehAudio_inAirPitchUpLerp);
  DVARFLT_vehAudio_inAirPitchDownLerp = Dvar_Deregister(DVARFLT_vehAudio_inAirPitchDownLerp);
  DVARFLT_vehAudio_spawnVolumeTime = Dvar_Deregister(DVARFLT_vehAudio_spawnVolumeTime);
  DVARFLT_vehAudio_idleDistanceScale = Dvar_Deregister(DVARFLT_vehAudio_idleDistanceScale);
  DCONST_DVARVEC3_vehAudio_remoteClientLocalRotorOffset = Dvar_Deregister(DCONST_DVARVEC3_vehAudio_remoteClientLocalRotorOffset);
  DCONST_DVARFLT_dynEnt_bulletForce = Dvar_Deregister(DCONST_DVARFLT_dynEnt_bulletForce);
  DCONST_DVARFLT_dynEnt_fixedMemoryShutdownThreshold = Dvar_Deregister(DCONST_DVARFLT_dynEnt_fixedMemoryShutdownThreshold);
  DCONST_DVARFLT_dynEnt_fixedMemoryShutdownThreshold2 = Dvar_Deregister(DCONST_DVARFLT_dynEnt_fixedMemoryShutdownThreshold2);
  DVARINT_dynEnt_spatialMaxEnts = Dvar_Deregister(DVARINT_dynEnt_spatialMaxEnts);
  DVARINT_dynEnt_spatialMaxOccluderEnts = Dvar_Deregister(DVARINT_dynEnt_spatialMaxOccluderEnts);
  DCONST_DVARBOOL_dynEnt_spatialEnabled = Dvar_Deregister(DCONST_DVARBOOL_dynEnt_spatialEnabled);
  DCONST_DVARBOOL_dynEnt_spatialIteratorEnabled = Dvar_Deregister(DCONST_DVARBOOL_dynEnt_spatialIteratorEnabled);
  DVARINT_dynEnt_spatialMaxEntsLowPrio = Dvar_Deregister(DVARINT_dynEnt_spatialMaxEntsLowPrio);
  DVARINT_dynEnt_spatialMaxEntsHighPrio = Dvar_Deregister(DVARINT_dynEnt_spatialMaxEntsHighPrio);
  DCONST_DVARFLT_dynEnt_spatialMaxDistanceLowPrio = Dvar_Deregister(DCONST_DVARFLT_dynEnt_spatialMaxDistanceLowPrio);
  DCONST_DVARFLT_dynEnt_spatialMaxDistanceHighPrio = Dvar_Deregister(DCONST_DVARFLT_dynEnt_spatialMaxDistanceHighPrio);
  DCONST_DVARFLT_dynEnt_spatialMaxDistanceSparseOccluder = Dvar_Deregister(DCONST_DVARFLT_dynEnt_spatialMaxDistanceSparseOccluder);
  DCONST_DVARFLT_dynEnt_spatialViewBasedStartDistance = Dvar_Deregister(DCONST_DVARFLT_dynEnt_spatialViewBasedStartDistance);
  DCONST_DVARINT_dynEnt_spatialMaxAddPerFrame = Dvar_Deregister(DCONST_DVARINT_dynEnt_spatialMaxAddPerFrame);
  DCONST_DVARINT_dynEnt_spatialMaxRemovePerFrame = Dvar_Deregister(DCONST_DVARINT_dynEnt_spatialMaxRemovePerFrame);
  DCONST_DVARINT_dynEnt_spatialMaxAddSparseOccluderPerFrame = Dvar_Deregister(DCONST_DVARINT_dynEnt_spatialMaxAddSparseOccluderPerFrame);
  DCONST_DVARINT_dynEnt_spatialMaxRemoveSparseOccluderPerFrame = Dvar_Deregister(DCONST_DVARINT_dynEnt_spatialMaxRemoveSparseOccluderPerFrame);
  DCONST_DVARFLT_dynEnt_spatialSparseOccluderCollisionActivationDistance = Dvar_Deregister(DCONST_DVARFLT_dynEnt_spatialSparseOccluderCollisionActivationDistance);
  DVARBOOL_dynEnt_debugFreezeCamera = Dvar_Deregister(DVARBOOL_dynEnt_debugFreezeCamera);
  DVARINT_dynEnt_debugDisplayOffsetX = Dvar_Deregister(DVARINT_dynEnt_debugDisplayOffsetX);
  DVARINT_dynEnt_debugDisplayOffsetY = Dvar_Deregister(DVARINT_dynEnt_debugDisplayOffsetY);
  DVARBOOL_dynEnt_debugDump = Dvar_Deregister(DVARBOOL_dynEnt_debugDump);
  DVARINT_dynEnt_debugSummary = Dvar_Deregister(DVARINT_dynEnt_debugSummary);
  DVARINT_dynEnt_debugWorld = Dvar_Deregister(DVARINT_dynEnt_debugWorld);
  DVARINT_dynEnt_debugModelId = Dvar_Deregister(DVARINT_dynEnt_debugModelId);
  DVARINT_dynEnt_debugBrushId = Dvar_Deregister(DVARINT_dynEnt_debugBrushId);
  DVARBOOL_dynEnt_debugTransients = Dvar_Deregister(DVARBOOL_dynEnt_debugTransients);
  DVARBOOL_dynEnt_debugWarped = Dvar_Deregister(DVARBOOL_dynEnt_debugWarped);
  DVARBOOL_dynEnt_debugDynentShapes = Dvar_Deregister(DVARBOOL_dynEnt_debugDynentShapes);
  DVARBOOL_dynEnt_debugDynentBodyBoneCounts = Dvar_Deregister(DVARBOOL_dynEnt_debugDynentBodyBoneCounts);
  DVARBOOL_dynEnt_debugMaxCollisionCacheCount = Dvar_Deregister(DVARBOOL_dynEnt_debugMaxCollisionCacheCount);
  DVARINT_dynEnt_debugMaxCollisionCacheCountThreshold = Dvar_Deregister(DVARINT_dynEnt_debugMaxCollisionCacheCountThreshold);
  DVARBOOL_dynEnt_debugSpawnDepth = Dvar_Deregister(DVARBOOL_dynEnt_debugSpawnDepth);
  DVARFLT_dynEnt_debugSpawnDepthThreshold = Dvar_Deregister(DVARFLT_dynEnt_debugSpawnDepthThreshold);
  DVARINT_dynEnt_debugSpatialPopulation = Dvar_Deregister(DVARINT_dynEnt_debugSpatialPopulation);
  DVARBOOL_dynEnt_debugDrawSpatialWorld = Dvar_Deregister(DVARBOOL_dynEnt_debugDrawSpatialWorld);
  DVARINT_dynEnt_debugDrawSpatialOverlay = Dvar_Deregister(DVARINT_dynEnt_debugDrawSpatialOverlay);
  DVARFLT_dynEnt_debugDrawSpatialOverlayZoom = Dvar_Deregister(DVARFLT_dynEnt_debugDrawSpatialOverlayZoom);
  DVARFLT_hud_flash_time_offhand = Dvar_Deregister(DVARFLT_hud_flash_time_offhand);
  DVARFLT_hud_flash_period_offhand = Dvar_Deregister(DVARFLT_hud_flash_period_offhand);
  DVARBOOL_actionSlotsHide = Dvar_Deregister(DVARBOOL_actionSlotsHide);
  DVARCLR_lowAmmoWarningColor1 = Dvar_Deregister(DVARCLR_lowAmmoWarningColor1);
  DVARCLR_lowAmmoWarningColor2 = Dvar_Deregister(DVARCLR_lowAmmoWarningColor2);
  DVARFLT_lowAmmoWarningPulseFreq = Dvar_Deregister(DVARFLT_lowAmmoWarningPulseFreq);
  DVARFLT_lowAmmoWarningPulseMax = Dvar_Deregister(DVARFLT_lowAmmoWarningPulseMax);
  DVARFLT_lowAmmoWarningPulseMin = Dvar_Deregister(DVARFLT_lowAmmoWarningPulseMin);
  DVARCLR_lowAmmoWarningNoReloadColor1 = Dvar_Deregister(DVARCLR_lowAmmoWarningNoReloadColor1);
  DVARCLR_lowAmmoWarningNoReloadColor2 = Dvar_Deregister(DVARCLR_lowAmmoWarningNoReloadColor2);
  DVARCLR_lowAmmoWarningNoAmmoColor1 = Dvar_Deregister(DVARCLR_lowAmmoWarningNoAmmoColor1);
  DVARCLR_lowAmmoWarningNoAmmoColor2 = Dvar_Deregister(DVARCLR_lowAmmoWarningNoAmmoColor2);
  DCONST_DVARINT_visionSetKillcamEntBlendDuration = Dvar_Deregister(DCONST_DVARINT_visionSetKillcamEntBlendDuration);
  DVARBOOL_waypointDebugDraw = Dvar_Deregister(DVARBOOL_waypointDebugDraw);
  DVARFLT_waypointIconWidth = Dvar_Deregister(DVARFLT_waypointIconWidth);
  DVARFLT_waypointIconHeight = Dvar_Deregister(DVARFLT_waypointIconHeight);
  DVARFLT_waypointOffscreenPointerWidth = Dvar_Deregister(DVARFLT_waypointOffscreenPointerWidth);
  DVARFLT_waypointOffscreenPointerHeight = Dvar_Deregister(DVARFLT_waypointOffscreenPointerHeight);
  DVARFLT_waypointOffscreenPointerDistance = Dvar_Deregister(DVARFLT_waypointOffscreenPointerDistance);
  DVARFLT_waypointOffscreenDistanceThresholdAlpha = Dvar_Deregister(DVARFLT_waypointOffscreenDistanceThresholdAlpha);
  DVARFLT_waypointOffscreenPadLeft = Dvar_Deregister(DVARFLT_waypointOffscreenPadLeft);
  DVARFLT_waypointOffscreenPadRight = Dvar_Deregister(DVARFLT_waypointOffscreenPadRight);
  DVARFLT_waypointOffscreenPadTop = Dvar_Deregister(DVARFLT_waypointOffscreenPadTop);
  DVARFLT_waypointOffscreenPadBottom = Dvar_Deregister(DVARFLT_waypointOffscreenPadBottom);
  DVARBOOL_waypointOffscreenRoundedCorners = Dvar_Deregister(DVARBOOL_waypointOffscreenRoundedCorners);
  DVARFLT_waypointOffscreenCornerRadius = Dvar_Deregister(DVARFLT_waypointOffscreenCornerRadius);
  DVARFLT_waypointOffscreenScaleLength = Dvar_Deregister(DVARFLT_waypointOffscreenScaleLength);
  DVARFLT_waypointOffscreenScaleSmallest = Dvar_Deregister(DVARFLT_waypointOffscreenScaleSmallest);
  DVARFLT_waypointDistScaleRangeMin = Dvar_Deregister(DVARFLT_waypointDistScaleRangeMin);
  DVARFLT_waypointDistScaleRangeMax = Dvar_Deregister(DVARFLT_waypointDistScaleRangeMax);
  DVARFLT_waypointDistScaleSmallest = Dvar_Deregister(DVARFLT_waypointDistScaleSmallest);
  DVARFLT_waypointSplitscreenScale = Dvar_Deregister(DVARFLT_waypointSplitscreenScale);
  DVARFLT_waypointScreenCenterFadeRadius = Dvar_Deregister(DVARFLT_waypointScreenCenterFadeRadius);
  DVARFLT_waypointScreenCenterFadeAdsMin = Dvar_Deregister(DVARFLT_waypointScreenCenterFadeAdsMin);
  DVARFLT_waypointScreenCenterFadeHipMin = Dvar_Deregister(DVARFLT_waypointScreenCenterFadeHipMin);
  DVARFLT_waypointTweakY = Dvar_Deregister(DVARFLT_waypointTweakY);
  DVARFLT_hudElemPausedBrightness = Dvar_Deregister(DVARFLT_hudElemPausedBrightness);
  DVARFLT_waypointPlayerOffsetProne = Dvar_Deregister(DVARFLT_waypointPlayerOffsetProne);
  DVARFLT_waypointPlayerOffsetCrouch = Dvar_Deregister(DVARFLT_waypointPlayerOffsetCrouch);
  DVARFLT_waypointPlayerOffsetStand = Dvar_Deregister(DVARFLT_waypointPlayerOffsetStand);
  DVARFLT_objectiveFontSize = Dvar_Deregister(DVARFLT_objectiveFontSize);
  DVARFLT_objectiveTextOffsetY = Dvar_Deregister(DVARFLT_objectiveTextOffsetY);
  DVARFLT_objectiveFadeTooFar = Dvar_Deregister(DVARFLT_objectiveFadeTooFar);
  DVARFLT_objectiveFadeTooClose = Dvar_Deregister(DVARFLT_objectiveFadeTooClose);
  DVARFLT_objectiveFadeTimeGoingOn = Dvar_Deregister(DVARFLT_objectiveFadeTimeGoingOn);
  DVARFLT_objectiveFadeTimeGoingOff = Dvar_Deregister(DVARFLT_objectiveFadeTimeGoingOff);
  DVARFLT_objectiveFadeTimeWaitOn = Dvar_Deregister(DVARFLT_objectiveFadeTimeWaitOn);
  DVARFLT_objectiveFadeTimeWaitOff = Dvar_Deregister(DVARFLT_objectiveFadeTimeWaitOff);
  DVARBOOL_objectiveHide = Dvar_Deregister(DVARBOOL_objectiveHide);
  DVARINT_objectiveGlobalFadeState = Dvar_Deregister(DVARINT_objectiveGlobalFadeState);
  DVARBOOL_laserForceOn = Dvar_Deregister(DVARBOOL_laserForceOn);
  DVARBOOL_laserDebug = Dvar_Deregister(DVARBOOL_laserDebug);
  DVARBOOL_laserDebugWhizbyPos = Dvar_Deregister(DVARBOOL_laserDebugWhizbyPos);
  DVARINT_laserMaxInterpolationTime = Dvar_Deregister(DVARINT_laserMaxInterpolationTime);
  DVARFLT_laserLockEyeOffset = Dvar_Deregister(DVARFLT_laserLockEyeOffset);
  DVARFLT_laserAdsFraction = Dvar_Deregister(DVARFLT_laserAdsFraction);
  DVARFLT_laserHipFraction = Dvar_Deregister(DVARFLT_laserHipFraction);
  DCONST_DVARFLT_cg_silencedWeaponPingRangeSquared = Dvar_Deregister(DCONST_DVARFLT_cg_silencedWeaponPingRangeSquared);
  DCONST_DVARFLT_hudWhizbyDistance = Dvar_Deregister(DCONST_DVARFLT_hudWhizbyDistance);
  DCONST_DVARFLT_hudWhizbyDurationSec = Dvar_Deregister(DCONST_DVARFLT_hudWhizbyDurationSec);
  DCONST_DVARFLT_hudWhizbyClearAngle = Dvar_Deregister(DCONST_DVARFLT_hudWhizbyClearAngle);
  DCONST_DVARFLT_hudWhizbyOffset = Dvar_Deregister(DCONST_DVARFLT_hudWhizbyOffset);
  DCONST_DVARFLT_hudWhizbyWidth = Dvar_Deregister(DCONST_DVARFLT_hudWhizbyWidth);
  DCONST_DVARFLT_hudWhizbyHeight = Dvar_Deregister(DCONST_DVARFLT_hudWhizbyHeight);
  DCONST_DVARFLT_hudWhizbyAddOffset = Dvar_Deregister(DCONST_DVARFLT_hudWhizbyAddOffset);
  DCONST_DVARFLT_hudWhizbyAlphaMult = Dvar_Deregister(DCONST_DVARFLT_hudWhizbyAlphaMult);
  DCONST_DVARBOOL_hudWhizbyEnable = Dvar_Deregister(DCONST_DVARBOOL_hudWhizbyEnable);
  DCONST_DVARBOOL_cg_viewmodelAnimBlending = Dvar_Deregister(DCONST_DVARBOOL_cg_viewmodelAnimBlending);
  DCONST_DVARFLT_cg_viewmodelMeleeAnimBlendTimeSec = Dvar_Deregister(DCONST_DVARFLT_cg_viewmodelMeleeAnimBlendTimeSec);
  DCONST_DVARINT_cg_wallrunBlendOutTimeFiring = Dvar_Deregister(DCONST_DVARINT_cg_wallrunBlendOutTimeFiring);
  DCONST_DVARBOOL_cg_viewmodelAnimatedJumps = Dvar_Deregister(DCONST_DVARBOOL_cg_viewmodelAnimatedJumps);
  DCONST_DVARBOOL_cg_viewmodelAnimatedCrawl = Dvar_Deregister(DCONST_DVARBOOL_cg_viewmodelAnimatedCrawl);
  DCONST_DVARFLT_cg_viewmodelLandDipMin = Dvar_Deregister(DCONST_DVARFLT_cg_viewmodelLandDipMin);
  DCONST_DVARFLT_cg_viewmodelLandDipMax = Dvar_Deregister(DCONST_DVARFLT_cg_viewmodelLandDipMax);
  DCONST_DVARFLT_cg_cameraLandDipScale = Dvar_Deregister(DCONST_DVARFLT_cg_cameraLandDipScale);
  DCONST_DVARBOOL_cg_viewmodelAdditiveJog = Dvar_Deregister(DCONST_DVARBOOL_cg_viewmodelAdditiveJog);
  DCONST_DVARBOOL_cg_viewmodelSprintOffset = Dvar_Deregister(DCONST_DVARBOOL_cg_viewmodelSprintOffset);
  DCONST_DVARBOOL_cg_viewmodelFingerPoses = Dvar_Deregister(DCONST_DVARBOOL_cg_viewmodelFingerPoses);
  DCONST_DVARBOOL_cg_viewmodelAdsUpDown = Dvar_Deregister(DCONST_DVARBOOL_cg_viewmodelAdsUpDown);
  DCONST_DVARBOOL_cg_viewmodelAdsAnims = Dvar_Deregister(DCONST_DVARBOOL_cg_viewmodelAdsAnims);
  DCONST_DVARBOOL_cg_viewmodelActiveIdle = Dvar_Deregister(DCONST_DVARBOOL_cg_viewmodelActiveIdle);
  DCONST_DVARBOOL_cg_viewmodelAdditiveWalk = Dvar_Deregister(DCONST_DVARBOOL_cg_viewmodelAdditiveWalk);
  DCONST_DVARBOOL_cg_viewmodelAdditiveSprint = Dvar_Deregister(DCONST_DVARBOOL_cg_viewmodelAdditiveSprint);
  DCONST_DVARBOOL_cg_enableMuzzleFlashInDualFOV = Dvar_Deregister(DCONST_DVARBOOL_cg_enableMuzzleFlashInDualFOV);
  DCONST_DVARFLT_player_swimDragHandLookAtOffset = Dvar_Deregister(DCONST_DVARFLT_player_swimDragHandLookAtOffset);
  DCONST_DVARFLT_player_swimDragHandFrictionMax = Dvar_Deregister(DCONST_DVARFLT_player_swimDragHandFrictionMax);
  DCONST_DVARFLT_player_swimDragHandFrictionMin = Dvar_Deregister(DCONST_DVARFLT_player_swimDragHandFrictionMin);
  DCONST_DVARFLT_player_swimForwardAnimCatchupMin = Dvar_Deregister(DCONST_DVARFLT_player_swimForwardAnimCatchupMin);
  DCONST_DVARFLT_player_swimForwardAnimCatchupMax = Dvar_Deregister(DCONST_DVARFLT_player_swimForwardAnimCatchupMax);
  DCONST_DVARBOOL_player_swimDragHandEnabled = Dvar_Deregister(DCONST_DVARBOOL_player_swimDragHandEnabled);
  DCONST_DVARINT_cg_crawlBlendTime = Dvar_Deregister(DCONST_DVARINT_cg_crawlBlendTime);
  DCONST_DVARINT_cg_crawlBlendOutTimeFiring = Dvar_Deregister(DCONST_DVARINT_cg_crawlBlendOutTimeFiring);
  DCONST_DVARINT_cg_crawlBlendDirTime = Dvar_Deregister(DCONST_DVARINT_cg_crawlBlendDirTime);
  DVARBOOL_depthSortViewmodel = Dvar_Deregister(DVARBOOL_depthSortViewmodel);
  DVARFLT_shieldImpactBulletShakeScale = Dvar_Deregister(DVARFLT_shieldImpactBulletShakeScale);
  DVARINT_shieldImpactBulletShakeDuration = Dvar_Deregister(DVARINT_shieldImpactBulletShakeDuration);
  DVARFLT_shieldImpactMissileShakeScale = Dvar_Deregister(DVARFLT_shieldImpactMissileShakeScale);
  DVARINT_shieldImpactMissileShakeDuration = Dvar_Deregister(DVARINT_shieldImpactMissileShakeDuration);
  DVARFLT_shieldImpactExplosionLowShakeScale = Dvar_Deregister(DVARFLT_shieldImpactExplosionLowShakeScale);
  DVARINT_shieldImpactExplosionLowShakeDuration = Dvar_Deregister(DVARINT_shieldImpactExplosionLowShakeDuration);
  DVARFLT_shieldImpactExplosionHighShakeScale = Dvar_Deregister(DVARFLT_shieldImpactExplosionHighShakeScale);
  DVARINT_shieldImpactExplosionHighShakeDuration = Dvar_Deregister(DVARINT_shieldImpactExplosionHighShakeDuration);
  DVARINT_shieldImpactExplosionThreshold = Dvar_Deregister(DVARINT_shieldImpactExplosionThreshold);
  DVARFLT_cg_gun_x = Dvar_Deregister(DVARFLT_cg_gun_x);
  DVARFLT_cg_gun_y = Dvar_Deregister(DVARFLT_cg_gun_y);
  DVARFLT_cg_gun_z = Dvar_Deregister(DVARFLT_cg_gun_z);
  DVARFLT_cg_gun_pitch = Dvar_Deregister(DVARFLT_cg_gun_pitch);
  DVARFLT_cg_gun_yaw = Dvar_Deregister(DVARFLT_cg_gun_yaw);
  DVARFLT_cg_gun_roll = Dvar_Deregister(DVARFLT_cg_gun_roll);
  DVARBOOL_cg_disable_fov_comp = Dvar_Deregister(DVARBOOL_cg_disable_fov_comp);
  DCONST_DVARFLT_cg_fov_comp_max = Dvar_Deregister(DCONST_DVARFLT_cg_fov_comp_max);
  DCONST_DVARFLT_cg_fov_default_nocomp = Dvar_Deregister(DCONST_DVARFLT_cg_fov_default_nocomp);
  DCONST_DVARFLT_cg_gun_fovcomp_x = Dvar_Deregister(DCONST_DVARFLT_cg_gun_fovcomp_x);
  DCONST_DVARFLT_cg_gun_fovcomp_y = Dvar_Deregister(DCONST_DVARFLT_cg_gun_fovcomp_y);
  DCONST_DVARFLT_cg_gun_fovcomp_z = Dvar_Deregister(DCONST_DVARFLT_cg_gun_fovcomp_z);
  DVARBOOL_viewModelHacks = Dvar_Deregister(DVARBOOL_viewModelHacks);
  DVARBOOL_viewModelDebugNotetracks = Dvar_Deregister(DVARBOOL_viewModelDebugNotetracks);
  DVARBOOL_cg_cullBullets = Dvar_Deregister(DVARBOOL_cg_cullBullets);
  DVARFLT_cg_minCullBulletDist = Dvar_Deregister(DVARFLT_cg_minCullBulletDist);
  DVARFLT_cg_cullBulletAngle = Dvar_Deregister(DVARFLT_cg_cullBulletAngle);
  DVARFLT_FoFIconScale = Dvar_Deregister(DVARFLT_FoFIconScale);
  DVARFLT_FoFIconMinSize = Dvar_Deregister(DVARFLT_FoFIconMinSize);
  DVARFLT_FoFIconMaxSize = Dvar_Deregister(DVARFLT_FoFIconMaxSize);
  DVARFLT_FoFIconSpawnTimeDelay = Dvar_Deregister(DVARFLT_FoFIconSpawnTimeDelay);
  DVARFLT_FoFIconSpawnTimeFade = Dvar_Deregister(DVARFLT_FoFIconSpawnTimeFade);
  DVARFLT_cg_weapHitCullAngle = Dvar_Deregister(DVARFLT_cg_weapHitCullAngle);
  DVARBOOL_cg_weapHitCullEnable = Dvar_Deregister(DVARBOOL_cg_weapHitCullEnable);
  DVARFLT_cg_weapHitCullRadius = Dvar_Deregister(DVARFLT_cg_weapHitCullRadius);
  DCONST_DVARBOOL_cg_viewmodelRoboticIK = Dvar_Deregister(DCONST_DVARBOOL_cg_viewmodelRoboticIK);
  DVARBOOL_cg_lui_scope_reticles = Dvar_Deregister(DVARBOOL_cg_lui_scope_reticles);
  DCONST_DVARMPSPINT_cg_maxAttachmentDisplays = Dvar_Deregister(DCONST_DVARMPSPINT_cg_maxAttachmentDisplays);
  DCONST_DVARMPBOOL_cg_adjustClientImpactSound = Dvar_Deregister(DCONST_DVARMPBOOL_cg_adjustClientImpactSound);
  DCONST_DVARFLT_cg_adjustClientImpactSoundDistance = Dvar_Deregister(DCONST_DVARFLT_cg_adjustClientImpactSoundDistance);
  DVARBOOL_cg_enableViewModelBoneAndAnimDump = Dvar_Deregister(DVARBOOL_cg_enableViewModelBoneAndAnimDump);
  DVARBOOL_cg_weapons_workers_enable = Dvar_Deregister(DVARBOOL_cg_weapons_workers_enable);
  DVARBOOL_cg_gun_motion_enable_fov_compensation = Dvar_Deregister(DVARBOOL_cg_gun_motion_enable_fov_compensation);
  DVARFLT_cg_dualViewScopeFOV = Dvar_Deregister(DVARFLT_cg_dualViewScopeFOV);
  DVARFLT_cg_dualViewScopeTonemapFocusValue = Dvar_Deregister(DVARFLT_cg_dualViewScopeTonemapFocusValue);
  DVARBOOL_cg_weapAllowDefaultModelAttachments = Dvar_Deregister(DVARBOOL_cg_weapAllowDefaultModelAttachments);
  DVARBOOL_cg_weapOverrideDefaultModelMat = Dvar_Deregister(DVARBOOL_cg_weapOverrideDefaultModelMat);
  DVARFLT_cg_weapOverrideDefaultModelTrans = Dvar_Deregister(DVARFLT_cg_weapOverrideDefaultModelTrans);
  DCONST_DVARBOOL_cg_weapForceDefaultModel = Dvar_Deregister(DCONST_DVARBOOL_cg_weapForceDefaultModel);
  DCONST_DVARBOOL_cg_debugBullets = Dvar_Deregister(DCONST_DVARBOOL_cg_debugBullets);
  DCONST_DVARBOOL_cg_debugBulletsHitLoc = Dvar_Deregister(DCONST_DVARBOOL_cg_debugBulletsHitLoc);
  DCONST_DVARINT_cg_debugBulletsDrawDuration = Dvar_Deregister(DCONST_DVARINT_cg_debugBulletsDrawDuration);
  DVARBOOL_cg_enableAdsAlignOffset = Dvar_Deregister(DVARBOOL_cg_enableAdsAlignOffset);
  DVARFLT_cg_maxReflexSightDrift = Dvar_Deregister(DVARFLT_cg_maxReflexSightDrift);
  DCONST_DVARINT_cg_wmSmokeDelayAfterShot = Dvar_Deregister(DCONST_DVARINT_cg_wmSmokeDelayAfterShot);
  DCONST_DVARFLT_jogBlendTime = Dvar_Deregister(DCONST_DVARFLT_jogBlendTime);
  DCONST_DVARFLT_jogAdsBlendTime = Dvar_Deregister(DCONST_DVARFLT_jogAdsBlendTime);
  DCONST_DVARFLT_jogFireBlendTime = Dvar_Deregister(DCONST_DVARFLT_jogFireBlendTime);
  DCONST_DVARBOOL_adsReloadUseAdditiveWalk = Dvar_Deregister(DCONST_DVARBOOL_adsReloadUseAdditiveWalk);
  DCONST_DVARFLT_superSprintBlendTime = Dvar_Deregister(DCONST_DVARFLT_superSprintBlendTime);
  DCONST_DVARFLT_superSprintBlendOutSprintTime = Dvar_Deregister(DCONST_DVARFLT_superSprintBlendOutSprintTime);
  DCONST_DVARFLT_superSprintControlForwardDeflection = Dvar_Deregister(DCONST_DVARFLT_superSprintControlForwardDeflection);
  DCONST_DVARFLT_superSprintControlMaxRightDeflection = Dvar_Deregister(DCONST_DVARFLT_superSprintControlMaxRightDeflection);
  DCONST_DVARFLT_superSprintControlMaxInputTime = Dvar_Deregister(DCONST_DVARFLT_superSprintControlMaxInputTime);
  DCONST_DVARFLT_superSprintDoubleClickInputTime = Dvar_Deregister(DCONST_DVARFLT_superSprintDoubleClickInputTime);
  DCONST_DVARFLT_offhandDetonateDoubleClickInputTime = Dvar_Deregister(DCONST_DVARFLT_offhandDetonateDoubleClickInputTime);
  DVARBOOL_offhandDetonateDoubleClickEnable = Dvar_Deregister(DVARBOOL_offhandDetonateDoubleClickEnable);
  DCONST_DVARFLT_cg_toggleScopeBlendInTime = Dvar_Deregister(DCONST_DVARFLT_cg_toggleScopeBlendInTime);
  DCONST_DVARFLT_cg_toggleScopeBlendOutStartAnimNormalizedTime = Dvar_Deregister(DCONST_DVARFLT_cg_toggleScopeBlendOutStartAnimNormalizedTime);
  DCONST_DVARFLT_cg_toggleScopeBlendOutTime = Dvar_Deregister(DCONST_DVARFLT_cg_toggleScopeBlendOutTime);
  DCONST_DVARFLT_cg_mantleQuickBlendTime = Dvar_Deregister(DCONST_DVARFLT_cg_mantleQuickBlendTime);
  DCONST_DVARBOOL_duckedRotationPivotDebug = Dvar_Deregister(DCONST_DVARBOOL_duckedRotationPivotDebug);
  DCONST_DVARBOOL_cg_debugBallisticWhizby = Dvar_Deregister(DCONST_DVARBOOL_cg_debugBallisticWhizby);
  DCONST_DVARINT_cg_debugBallisticWhizbyDrawFrameCount = Dvar_Deregister(DCONST_DVARINT_cg_debugBallisticWhizbyDrawFrameCount);
  DCONST_DVARBOOL_cg_debugBallisticWhizbyEnableRefPoint = Dvar_Deregister(DCONST_DVARBOOL_cg_debugBallisticWhizbyEnableRefPoint);
  DCONST_DVARVEC3_cg_debugBallisticWhizbyRefPoint = Dvar_Deregister(DCONST_DVARVEC3_cg_debugBallisticWhizbyRefPoint);
  DVARBOOL_corpseImpactEffectsEnabled = Dvar_Deregister(DVARBOOL_corpseImpactEffectsEnabled);
  DCONST_DVARBOOL_cg_validateAdsHipFireAnimTimes = Dvar_Deregister(DCONST_DVARBOOL_cg_validateAdsHipFireAnimTimes);
  DVARBOOL_cg_riotshield_decalfix_enable = Dvar_Deregister(DVARBOOL_cg_riotshield_decalfix_enable);
  DVARBOOL_cg_enableSkinningSkelRecordTransferFix = Dvar_Deregister(DVARBOOL_cg_enableSkinningSkelRecordTransferFix);
  DVARBOOL_cg_enableSkinningSkelRecordTransferAkimboFix = Dvar_Deregister(DVARBOOL_cg_enableSkinningSkelRecordTransferAkimboFix);
  DVARBOOL_cg_enableViewModelMotionPrecisionFix = Dvar_Deregister(DVARBOOL_cg_enableViewModelMotionPrecisionFix);
  DCONST_DVARBOOL_cg_disableViewAnimation = Dvar_Deregister(DCONST_DVARBOOL_cg_disableViewAnimation);
  DVARINT_cg_ballisticsMaxSimStepsPerServerFrame = Dvar_Deregister(DVARINT_cg_ballisticsMaxSimStepsPerServerFrame);
  DCONST_DVARINT_cg_wristwatch_script_transition_time_ms = Dvar_Deregister(DCONST_DVARINT_cg_wristwatch_script_transition_time_ms);
  DCONST_DVARINT_cg_wristwatch_script_transition_additional_rot_hour = Dvar_Deregister(DCONST_DVARINT_cg_wristwatch_script_transition_additional_rot_hour);
  DCONST_DVARINT_cg_wristwatch_script_transition_additional_rot_min = Dvar_Deregister(DCONST_DVARINT_cg_wristwatch_script_transition_additional_rot_min);
  DCONST_DVARINT_cg_missileQuickServerEntBlendInTimeMs = Dvar_Deregister(DCONST_DVARINT_cg_missileQuickServerEntBlendInTimeMs);
  DCONST_DVARFLT_cg_missileRotationBlendScale = Dvar_Deregister(DCONST_DVARFLT_cg_missileRotationBlendScale);
  DCONST_DVARBOOL_cg_predictedMissileDebug = Dvar_Deregister(DCONST_DVARBOOL_cg_predictedMissileDebug);
  DCONST_DVARINT_cg_skydive_rmbTimeInMs = Dvar_Deregister(DCONST_DVARINT_cg_skydive_rmbTimeInMs);
  DCONST_DVARINT_cg_skydive_rmbTimeOutMs = Dvar_Deregister(DCONST_DVARINT_cg_skydive_rmbTimeOutMs);
  DCONST_DVARFLT_cg_skydive_super_dive_in_blend_in_time = Dvar_Deregister(DCONST_DVARFLT_cg_skydive_super_dive_in_blend_in_time);
  DCONST_DVARFLT_cg_skydive_super_dive_out_blend_out_time = Dvar_Deregister(DCONST_DVARFLT_cg_skydive_super_dive_out_blend_out_time);
  DVARFLT_cg_skydive_super_dive_fov_delta = Dvar_Deregister(DVARFLT_cg_skydive_super_dive_fov_delta);
  DVARINT_cg_skydive_super_dive_fov_blend_in_time = Dvar_Deregister(DVARINT_cg_skydive_super_dive_fov_blend_in_time);
  DVARINT_cg_skydive_super_dive_fov_blend_out_time = Dvar_Deregister(DVARINT_cg_skydive_super_dive_fov_blend_out_time);
  DVARFLT_cg_skydive_parachute_cut_fov_delta = Dvar_Deregister(DVARFLT_cg_skydive_parachute_cut_fov_delta);
  DVARINT_cg_skydive_parachute_cut_fov_blend_in_time = Dvar_Deregister(DVARINT_cg_skydive_parachute_cut_fov_blend_in_time);
  DVARINT_cg_skydive_parachute_cut_fov_blend_out_time = Dvar_Deregister(DVARINT_cg_skydive_parachute_cut_fov_blend_out_time);
  DVARFLT_cg_skydive_parachute_cut_pitch_threshold = Dvar_Deregister(DVARFLT_cg_skydive_parachute_cut_pitch_threshold);
  DVARINT_cg_skydive_parachute_cut_look_down_grace_period = Dvar_Deregister(DVARINT_cg_skydive_parachute_cut_look_down_grace_period);
  DVARINT_cg_skydive_parachute_cut_cam_shake_min_time = Dvar_Deregister(DVARINT_cg_skydive_parachute_cut_cam_shake_min_time);
  DVARFLT_cg_skydive_parachute_cut_cam_shake_blend_in_speed = Dvar_Deregister(DVARFLT_cg_skydive_parachute_cut_cam_shake_blend_in_speed);
  DVARFLT_cg_skydive_parachute_cut_cam_shake_blend_out_speed = Dvar_Deregister(DVARFLT_cg_skydive_parachute_cut_cam_shake_blend_out_speed);
  DVARFLT_cg_skydive_parachute_cut_cam_shake_fake_speed = Dvar_Deregister(DVARFLT_cg_skydive_parachute_cut_cam_shake_fake_speed);
  DVARINT_cg_skydive_land_fov_blend_out_time = Dvar_Deregister(DVARINT_cg_skydive_land_fov_blend_out_time);
  DVARFLT_cg_skydive_rmb_strength_min = Dvar_Deregister(DVARFLT_cg_skydive_rmb_strength_min);
  DVARFLT_cg_skydive_rmb_strength_max = Dvar_Deregister(DVARFLT_cg_skydive_rmb_strength_max);
  DVARFLT_cg_skydive_rmb_radius_min = Dvar_Deregister(DVARFLT_cg_skydive_rmb_radius_min);
  DVARFLT_cg_skydive_rmb_radius_max = Dvar_Deregister(DVARFLT_cg_skydive_rmb_radius_max);
  DVARFLT_cg_skydive_rmb_freefall_weight_min = Dvar_Deregister(DVARFLT_cg_skydive_rmb_freefall_weight_min);
  DVARFLT_cg_skydive_rmb_parachute_cut_weight_min = Dvar_Deregister(DVARFLT_cg_skydive_rmb_parachute_cut_weight_min);
  DVARFLT_cg_skydive_rmb_track_speed = Dvar_Deregister(DVARFLT_cg_skydive_rmb_track_speed);
  DCONST_DVARBOOL_cg_skydive_enable_debugAnimOverrides = Dvar_Deregister(DCONST_DVARBOOL_cg_skydive_enable_debugAnimOverrides);
  DCONST_DVARFLT_cg_skydive_debug_paramInputThrottle = Dvar_Deregister(DCONST_DVARFLT_cg_skydive_debug_paramInputThrottle);
  DCONST_DVARFLT_cg_skydive_debug_paramInputStrafe = Dvar_Deregister(DCONST_DVARFLT_cg_skydive_debug_paramInputStrafe);
  DCONST_DVARFLT_cg_skydive_debug_paramInputYaw = Dvar_Deregister(DCONST_DVARFLT_cg_skydive_debug_paramInputYaw);
  DCONST_DVARFLT_cg_skydive_debug_paramInputPitch = Dvar_Deregister(DCONST_DVARFLT_cg_skydive_debug_paramInputPitch);
  DCONST_DVARFLT_cg_skydive_debug_paramCameraPitch = Dvar_Deregister(DCONST_DVARFLT_cg_skydive_debug_paramCameraPitch);
  DCONST_DVARFLT_cg_skydive_debug_throttleAnimWeight = Dvar_Deregister(DCONST_DVARFLT_cg_skydive_debug_throttleAnimWeight);
  DCONST_DVARFLT_cg_skydive_debug_strafeAnimWeight = Dvar_Deregister(DCONST_DVARFLT_cg_skydive_debug_strafeAnimWeight);
  DCONST_DVARFLT_cg_skydive_debug_yawAnimWeight = Dvar_Deregister(DCONST_DVARFLT_cg_skydive_debug_yawAnimWeight);
  DCONST_DVARFLT_cg_skydive_debug_pitchAnimWeight = Dvar_Deregister(DCONST_DVARFLT_cg_skydive_debug_pitchAnimWeight);
  DCONST_DVARFLT_cg_skydive_debug_lookAnimWeight = Dvar_Deregister(DCONST_DVARFLT_cg_skydive_debug_lookAnimWeight);
  DCONST_DVARFLT_cg_skydive_debug_velAnimWeight = Dvar_Deregister(DCONST_DVARFLT_cg_skydive_debug_velAnimWeight);
  DCONST_DVARFLT_cg_skydive_debug_velAnimPlayRate = Dvar_Deregister(DCONST_DVARFLT_cg_skydive_debug_velAnimPlayRate);
  DVARBOOL_cg_ladders_validate = Dvar_Deregister(DVARBOOL_cg_ladders_validate);
  DCONST_DVARBOOL_cg_drawLadderSlideAudio = Dvar_Deregister(DCONST_DVARBOOL_cg_drawLadderSlideAudio);
  DCONST_DVARFLT_cg_ladderSpinTimePercent = Dvar_Deregister(DCONST_DVARFLT_cg_ladderSpinTimePercent);
  DCONST_DVARMPFLT_cg_ladderCameraAnimWeight = Dvar_Deregister(DCONST_DVARMPFLT_cg_ladderCameraAnimWeight);
  DCONST_DVARFLT_cg_ladderCameraAnimBlendInTime = Dvar_Deregister(DCONST_DVARFLT_cg_ladderCameraAnimBlendInTime);
  DCONST_DVARFLT_cg_ladderCameraAnimBlendOutTime = Dvar_Deregister(DCONST_DVARFLT_cg_ladderCameraAnimBlendOutTime);
  DVARBOOL_cg_train_killswitch_enabled = Dvar_Deregister(DVARBOOL_cg_train_killswitch_enabled);
  DVARBOOL_cg_train_killswitch_enable_pose_controller = Dvar_Deregister(DVARBOOL_cg_train_killswitch_enable_pose_controller);
  DVARINT_cg_radialMenu_deactivationDelay = Dvar_Deregister(DVARINT_cg_radialMenu_deactivationDelay);
  DVARINT_cg_radialMenu_selectionHold = Dvar_Deregister(DVARINT_cg_radialMenu_selectionHold);
  DCONST_DVARVEC4_cg_radialMenu_color_bg_blur_darkening = Dvar_Deregister(DCONST_DVARVEC4_cg_radialMenu_color_bg_blur_darkening);
  DCONST_DVARVEC4_cg_radialMenu_color_bg_outline_blur_darkening = Dvar_Deregister(DCONST_DVARVEC4_cg_radialMenu_color_bg_outline_blur_darkening);
  DCONST_DVARVEC4_cg_radialMenu_color_bg_pixel_grid = Dvar_Deregister(DCONST_DVARVEC4_cg_radialMenu_color_bg_pixel_grid);
  DCONST_DVARVEC4_cg_radialMenu_color_masked_foreground = Dvar_Deregister(DCONST_DVARVEC4_cg_radialMenu_color_masked_foreground);
  DCONST_DVARVEC4_cg_radialMenu_color_outline_circles = Dvar_Deregister(DCONST_DVARVEC4_cg_radialMenu_color_outline_circles);
  DCONST_DVARVEC4_cg_radialMenu_color_select_pixel_grid_plain = Dvar_Deregister(DCONST_DVARVEC4_cg_radialMenu_color_select_pixel_grid_plain);
  DCONST_DVARVEC4_cg_radialMenu_color_select_pixel_grid_glow = Dvar_Deregister(DCONST_DVARVEC4_cg_radialMenu_color_select_pixel_grid_glow);
  DCONST_DVARVEC4_cg_radialMenu_color_edge_glow_lines = Dvar_Deregister(DCONST_DVARVEC4_cg_radialMenu_color_edge_glow_lines);
  DCONST_DVARVEC4_cg_radialMenu_color_selection_arrow = Dvar_Deregister(DCONST_DVARVEC4_cg_radialMenu_color_selection_arrow);
  DCONST_DVARVEC4_cg_radialMenu_color_expanded_selection = Dvar_Deregister(DCONST_DVARVEC4_cg_radialMenu_color_expanded_selection);
  DCONST_DVARMPFLT_aim_aimAssistRangeScale = Dvar_Deregister(DCONST_DVARMPFLT_aim_aimAssistRangeScale);
  DCONST_DVARINT_aim_input_graph_index = Dvar_Deregister(DCONST_DVARINT_aim_input_graph_index);
  DCONST_DVARFLT_aim_turnrate_pitch = Dvar_Deregister(DCONST_DVARFLT_aim_turnrate_pitch);
  DCONST_DVARFLT_aim_turnrate_pitch_ads = Dvar_Deregister(DCONST_DVARFLT_aim_turnrate_pitch_ads);
  DCONST_DVARFLT_aim_turnrate_yaw = Dvar_Deregister(DCONST_DVARFLT_aim_turnrate_yaw);
  DCONST_DVARFLT_aim_turnrate_yaw_ads = Dvar_Deregister(DCONST_DVARFLT_aim_turnrate_yaw_ads);
  DCONST_DVARFLT_aim_accel_turnrate_lerp = Dvar_Deregister(DCONST_DVARFLT_aim_accel_turnrate_lerp);
  DCONST_DVARFLT_aim_slowdown_region_width = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_region_width);
  DCONST_DVARMPFLT_aim_slowdown_region_height = Dvar_Deregister(DCONST_DVARMPFLT_aim_slowdown_region_height);
  DCONST_DVARFLT_aim_slowdown_prioritization_dist_prop = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_prioritization_dist_prop);
  DCONST_DVARMPFLT_aim_slowdown_prioritization_crosshair_dist_prop = Dvar_Deregister(DCONST_DVARMPFLT_aim_slowdown_prioritization_crosshair_dist_prop);
  DCONST_DVARFLT_aim_slowdown_prioritization_non_character_neg = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_prioritization_non_character_neg);
  DCONST_DVARFLT_aim_autoaim_lerp = Dvar_Deregister(DCONST_DVARFLT_aim_autoaim_lerp);
  DCONST_DVARFLT_aim_autoaim_region_width = Dvar_Deregister(DCONST_DVARFLT_aim_autoaim_region_width);
  DCONST_DVARFLT_aim_autoaim_region_height = Dvar_Deregister(DCONST_DVARFLT_aim_autoaim_region_height);
  DCONST_DVARFLT_aim_autoaim_bone_dist_ratio = Dvar_Deregister(DCONST_DVARFLT_aim_autoaim_bone_dist_ratio);
  DCONST_DVARINT_aim_autoaim_delay = Dvar_Deregister(DCONST_DVARINT_aim_autoaim_delay);
  DCONST_DVARBOOL_aim_autoaim_useAimPos = Dvar_Deregister(DCONST_DVARBOOL_aim_autoaim_useAimPos);
  DCONST_DVARBOOL_aim_input_graph_enabled = Dvar_Deregister(DCONST_DVARBOOL_aim_input_graph_enabled);
  DCONST_DVARBOOL_aim_input_graph_debug = Dvar_Deregister(DCONST_DVARBOOL_aim_input_graph_debug);
  DCONST_DVARBOOL_aim_accel_turnrate_enabled = Dvar_Deregister(DCONST_DVARBOOL_aim_accel_turnrate_enabled);
  DCONST_DVARBOOL_aim_accel_turnrate_debug = Dvar_Deregister(DCONST_DVARBOOL_aim_accel_turnrate_debug);
  DCONST_DVARBOOL_aim_slowdown_enabled = Dvar_Deregister(DCONST_DVARBOOL_aim_slowdown_enabled);
  DCONST_DVARBOOL_aim_slowdown_debug = Dvar_Deregister(DCONST_DVARBOOL_aim_slowdown_debug);
  DCONST_DVARBOOL_aim_autoaim_enabled = Dvar_Deregister(DCONST_DVARBOOL_aim_autoaim_enabled);
  DCONST_DVARBOOL_aim_autoaim_debug = Dvar_Deregister(DCONST_DVARBOOL_aim_autoaim_debug);
  DCONST_DVARBOOL_aim_lockon_enabled = Dvar_Deregister(DCONST_DVARBOOL_aim_lockon_enabled);
  DCONST_DVARBOOL_aim_lockon_debug = Dvar_Deregister(DCONST_DVARBOOL_aim_lockon_debug);
  DCONST_DVARBOOL_aim_scale_view_axis = Dvar_Deregister(DCONST_DVARBOOL_aim_scale_view_axis);
  DCONST_DVARBOOL_aim_target_trace_async = Dvar_Deregister(DCONST_DVARBOOL_aim_target_trace_async);
  DCONST_DVARFLT_aim_lockon_max_pitch_speed_up = Dvar_Deregister(DCONST_DVARFLT_aim_lockon_max_pitch_speed_up);
  DCONST_DVARMPFLT_aim_lockon_max_pitch_speed_down = Dvar_Deregister(DCONST_DVARMPFLT_aim_lockon_max_pitch_speed_down);
  DCONST_DVARFLT_aim_lockon_max_yaw_speed = Dvar_Deregister(DCONST_DVARFLT_aim_lockon_max_yaw_speed);
  DCONST_DVARMPFLT_aim_boundsOffsetScale = Dvar_Deregister(DCONST_DVARMPFLT_aim_boundsOffsetScale);
  DCONST_DVARFLT_aim_boundsMinBoxHeight = Dvar_Deregister(DCONST_DVARFLT_aim_boundsMinBoxHeight);
  DCONST_DVARFLT_aim_actorBoundsZPadding = Dvar_Deregister(DCONST_DVARFLT_aim_actorBoundsZPadding);
  DCONST_DVARBOOL_aim_advanced_slowdown_enabled = Dvar_Deregister(DCONST_DVARBOOL_aim_advanced_slowdown_enabled);
  DCONST_DVARBOOL_aim_enhanced_slowdown_enabled = Dvar_Deregister(DCONST_DVARBOOL_aim_enhanced_slowdown_enabled);
  DCONST_DVARFLT_aim_advanced_slowdown_region_width = Dvar_Deregister(DCONST_DVARFLT_aim_advanced_slowdown_region_width);
  DCONST_DVARFLT_aim_advanced_slowdown_region_height = Dvar_Deregister(DCONST_DVARFLT_aim_advanced_slowdown_region_height);
  DCONST_DVARFLT_aim_slowdown_standard_smoothing_percent_step = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_standard_smoothing_percent_step);
  DCONST_DVARFLT_aim_slowdown_blend_rate = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_blend_rate);
  DCONST_DVARFLT_aim_slowdown_target_motion_horiz_speed_max = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_target_motion_horiz_speed_max);
  DCONST_DVARFLT_aim_slowdown_target_motion_sweet_spot_offset_x = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_target_motion_sweet_spot_offset_x);
  DCONST_DVARFLT_aim_slowdown_controller_sweet_spot_offset_x = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_controller_sweet_spot_offset_x);
  DCONST_DVARFLT_aim_slowdown_controller_sweet_spot_offset_y = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_controller_sweet_spot_offset_y);
  DCONST_DVARFLT_aim_slowdown_max_factor_yaw = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_max_factor_yaw);
  DCONST_DVARFLT_aim_slowdown_max_factor_pitch = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_max_factor_pitch);
  DCONST_DVARFLT_aim_slowdown_standard_slowdown_yaw = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_standard_slowdown_yaw);
  DCONST_DVARFLT_aim_slowdown_standard_slowdown_pitch = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_standard_slowdown_pitch);
  DCONST_DVARFLT_aim_slowdown_max_factor_near_miss_yaw = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_max_factor_near_miss_yaw);
  DCONST_DVARFLT_aim_slowdown_max_factor_near_miss_pitch = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_max_factor_near_miss_pitch);
  DCONST_DVARFLT_aim_slowdown_far_assist_max_range_factor = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_far_assist_max_range_factor);
  DCONST_DVARFLT_aim_slowdown_far_assist_min_range_factor = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_far_assist_min_range_factor);
  DCONST_DVARFLT_aim_slowdown_far_region_width = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_far_region_width);
  DCONST_DVARFLT_aim_slowdown_far_region_height = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_far_region_height);
  DCONST_DVARFLT_aim_slowdown_full_stick_threshold = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_full_stick_threshold);
  DCONST_DVARFLT_aim_slowdown_near_miss_deflection_dot = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_near_miss_deflection_dot);
  DCONST_DVARFLT_aim_slowdown_box_reduction_range_min = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_box_reduction_range_min);
  DCONST_DVARFLT_aim_slowdown_box_reduction_range_max = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_box_reduction_range_max);
  DCONST_DVARFLT_aim_slowdown_box_reduction_max_percent = Dvar_Deregister(DCONST_DVARFLT_aim_slowdown_box_reduction_max_percent);
  DCONST_DVARFLT_aim_lockon_height_change_strength = Dvar_Deregister(DCONST_DVARFLT_aim_lockon_height_change_strength);
  DVARFLT_aim_autoAimRangeScale = Dvar_Deregister(DVARFLT_aim_autoAimRangeScale);
  DVARFLT_aim_lockon_deflection = Dvar_Deregister(DVARFLT_aim_lockon_deflection);
  DVARFLT_aim_lockon_region_width = Dvar_Deregister(DVARFLT_aim_lockon_region_width);
  DVARFLT_aim_lockon_region_height = Dvar_Deregister(DVARFLT_aim_lockon_region_height);
  DCONST_DVARMPFLT_aim_lockon_strength_mult = Dvar_Deregister(DCONST_DVARMPFLT_aim_lockon_strength_mult);
  DCONST_DVARMPFLT_aim_lockon_strength_pitch_mult = Dvar_Deregister(DCONST_DVARMPFLT_aim_lockon_strength_pitch_mult);
  DVARBOOL_aim_resist_pitch_enabled = Dvar_Deregister(DVARBOOL_aim_resist_pitch_enabled);
  DVARBOOL_aim_resist_yaw_enabled = Dvar_Deregister(DVARBOOL_aim_resist_yaw_enabled);
  DVARFLT_aim_resist_view_threshold = Dvar_Deregister(DVARFLT_aim_resist_view_threshold);
  DVARVEC2_aim_slowdown_wallrun_scale = Dvar_Deregister(DVARVEC2_aim_slowdown_wallrun_scale);
  DVARVEC2_aim_lockon_wallrun_scale = Dvar_Deregister(DVARVEC2_aim_lockon_wallrun_scale);
  DVARVEC2_aim_slowdown_wallrunjump_scale = Dvar_Deregister(DVARVEC2_aim_slowdown_wallrunjump_scale);
  DVARVEC2_aim_lockon_wallrunjump_scale = Dvar_Deregister(DVARVEC2_aim_lockon_wallrunjump_scale);
  DVARINT_aim_wallrunjump_duration = Dvar_Deregister(DVARINT_aim_wallrunjump_duration);
  DVARVEC2_aim_slowdown_thrustjump_scale = Dvar_Deregister(DVARVEC2_aim_slowdown_thrustjump_scale);
  DVARVEC2_aim_lockon_thrustjump_scale = Dvar_Deregister(DVARVEC2_aim_lockon_thrustjump_scale);
  DVARINT_aim_thrustjump_duration = Dvar_Deregister(DVARINT_aim_thrustjump_duration);
  DVARVEC2_aim_slowdown_slide_scale = Dvar_Deregister(DVARVEC2_aim_slowdown_slide_scale);
  DVARVEC2_aim_lockon_slide_scale = Dvar_Deregister(DVARVEC2_aim_lockon_slide_scale);
  DVARBOOL_cg_vectorFieldsForceUniform = Dvar_Deregister(DVARBOOL_cg_vectorFieldsForceUniform);
  DVARINT_cg_vectorFieldsDraw = Dvar_Deregister(DVARINT_cg_vectorFieldsDraw);
  DVARFLT_cg_vectorFieldsDrawForceScale = Dvar_Deregister(DVARFLT_cg_vectorFieldsDrawForceScale);
  DVARFLT_cg_vectorFieldsDrawVelocityScale = Dvar_Deregister(DVARFLT_cg_vectorFieldsDrawVelocityScale);
  DVARFLT_cg_vectorFieldsDrawBoxDist = Dvar_Deregister(DVARFLT_cg_vectorFieldsDrawBoxDist);
  DVARFLT_cg_vectorFieldsDrawEntryDist = Dvar_Deregister(DVARFLT_cg_vectorFieldsDrawEntryDist);
  DCONST_DVARVEC4_cg_hudGrenadeColorThrowback = Dvar_Deregister(DCONST_DVARVEC4_cg_hudGrenadeColorThrowback);
  DCONST_DVARVEC4_cg_hudGrenadeColorInProximity = Dvar_Deregister(DCONST_DVARVEC4_cg_hudGrenadeColorInProximity);
  DCONST_DVARVEC4_cg_hudGrenadeColorDangerClose = Dvar_Deregister(DCONST_DVARVEC4_cg_hudGrenadeColorDangerClose);
  DCONST_DVARFLT_cg_hudGrenadeDangerCloseDistance = Dvar_Deregister(DCONST_DVARFLT_cg_hudGrenadeDangerCloseDistance);
  DCONST_DVARMPBOOL_cg_drawDamageFlash = Dvar_Deregister(DCONST_DVARMPBOOL_cg_drawDamageFlash);
  DCONST_DVARBOOL_cg_hudDamageIconInScope = Dvar_Deregister(DCONST_DVARBOOL_cg_hudDamageIconInScope);
  DCONST_DVARFLT_cg_hudDamageIconWidth = Dvar_Deregister(DCONST_DVARFLT_cg_hudDamageIconWidth);
  DCONST_DVARFLT_cg_hudDamageIconHeight = Dvar_Deregister(DCONST_DVARFLT_cg_hudDamageIconHeight);
  DCONST_DVARFLT_cg_hudDamageIconOffset = Dvar_Deregister(DCONST_DVARFLT_cg_hudDamageIconOffset);
  DCONST_DVARFLT_cg_hudRicochetDamageIconWidth = Dvar_Deregister(DCONST_DVARFLT_cg_hudRicochetDamageIconWidth);
  DCONST_DVARFLT_cg_hudRicochetDamageIconHeight = Dvar_Deregister(DCONST_DVARFLT_cg_hudRicochetDamageIconHeight);
  DCONST_DVARFLT_cg_hudRicochetDamageIconOffset = Dvar_Deregister(DCONST_DVARFLT_cg_hudRicochetDamageIconOffset);
  DCONST_DVARFLT_cg_hudGrenadeIconMaxHeight = Dvar_Deregister(DCONST_DVARFLT_cg_hudGrenadeIconMaxHeight);
  DCONST_DVARBOOL_cg_hudGrenadeIconEnabledFlash = Dvar_Deregister(DCONST_DVARBOOL_cg_hudGrenadeIconEnabledFlash);
  DCONST_DVARFLT_cg_hudGrenadeIconMaxRangeFlash = Dvar_Deregister(DCONST_DVARFLT_cg_hudGrenadeIconMaxRangeFlash);
  DCONST_DVARMPFLT_cg_hudGrenadeIconMaxRangeFrag = Dvar_Deregister(DCONST_DVARMPFLT_cg_hudGrenadeIconMaxRangeFrag);
  DCONST_DVARFLT_cg_hudGrenadePointerPulseFreq = Dvar_Deregister(DCONST_DVARFLT_cg_hudGrenadePointerPulseFreq);
  DCONST_DVARFLT_cg_hudGrenadePointerPulseMax = Dvar_Deregister(DCONST_DVARFLT_cg_hudGrenadePointerPulseMax);
  DCONST_DVARFLT_cg_hudGrenadePointerPulseMin = Dvar_Deregister(DCONST_DVARFLT_cg_hudGrenadePointerPulseMin);
  DVARBOOL_cg_hudGrenadeIconInScope = Dvar_Deregister(DVARBOOL_cg_hudGrenadeIconInScope);
  DCONST_DVARFLT_cg_hudGrenadeIconWidth = Dvar_Deregister(DCONST_DVARFLT_cg_hudGrenadeIconWidth);
  DCONST_DVARFLT_cg_hudGrenadeIconHeight = Dvar_Deregister(DCONST_DVARFLT_cg_hudGrenadeIconHeight);
  DCONST_DVARFLT_cg_hudGrenadeIconWidthMin = Dvar_Deregister(DCONST_DVARFLT_cg_hudGrenadeIconWidthMin);
  DCONST_DVARFLT_cg_hudGrenadeIconHeightMin = Dvar_Deregister(DCONST_DVARFLT_cg_hudGrenadeIconHeightMin);
  DCONST_DVARFLT_cg_hudGrenadePointerWidth = Dvar_Deregister(DCONST_DVARFLT_cg_hudGrenadePointerWidth);
  DCONST_DVARFLT_cg_hudGrenadePointerHeight = Dvar_Deregister(DCONST_DVARFLT_cg_hudGrenadePointerHeight);
  DCONST_DVARFLT_cg_hudGrenadeIconOffset = Dvar_Deregister(DCONST_DVARFLT_cg_hudGrenadeIconOffset);
  DCONST_DVARVEC2_cg_hudGrenadePointerPivot = Dvar_Deregister(DCONST_DVARVEC2_cg_hudGrenadePointerPivot);
  DCONST_DVARFLT_cg_hudGrenadeIconWidthSplitscreen = Dvar_Deregister(DCONST_DVARFLT_cg_hudGrenadeIconWidthSplitscreen);
  DCONST_DVARFLT_cg_hudGrenadeIconHeightSplitscreen = Dvar_Deregister(DCONST_DVARFLT_cg_hudGrenadeIconHeightSplitscreen);
  DCONST_DVARFLT_cg_hudGrenadeIconWidthMinSplitscreen = Dvar_Deregister(DCONST_DVARFLT_cg_hudGrenadeIconWidthMinSplitscreen);
  DCONST_DVARFLT_cg_hudGrenadeIconHeightMinSplitscreen = Dvar_Deregister(DCONST_DVARFLT_cg_hudGrenadeIconHeightMinSplitscreen);
  DCONST_DVARFLT_cg_hudGrenadePointerWidthSplitscreen = Dvar_Deregister(DCONST_DVARFLT_cg_hudGrenadePointerWidthSplitscreen);
  DCONST_DVARFLT_cg_hudGrenadePointerHeightSplitscreen = Dvar_Deregister(DCONST_DVARFLT_cg_hudGrenadePointerHeightSplitscreen);
  DCONST_DVARFLT_cg_hudGrenadeIconOffsetSplitscreen = Dvar_Deregister(DCONST_DVARFLT_cg_hudGrenadeIconOffsetSplitscreen);
  DCONST_DVARVEC2_cg_hudGrenadePointerPivotSplitscreen = Dvar_Deregister(DCONST_DVARVEC2_cg_hudGrenadePointerPivotSplitscreen);
  DVARFLT_cg_rumble_devgui_duration = Dvar_Deregister(DVARFLT_cg_rumble_devgui_duration);
  DVARBOOL_cg_rumble_devgui_loop = Dvar_Deregister(DVARBOOL_cg_rumble_devgui_loop);
  DCONST_DVARFLT_cg_rumble_xb3_hf_mult = Dvar_Deregister(DCONST_DVARFLT_cg_rumble_xb3_hf_mult);
  DCONST_DVARFLT_cg_rumble_xb3_lf_mult = Dvar_Deregister(DCONST_DVARFLT_cg_rumble_xb3_lf_mult);
  DCONST_DVARFLT_cg_rumble_xb3_tr_mult = Dvar_Deregister(DCONST_DVARFLT_cg_rumble_xb3_tr_mult);
  DCONST_DVARINT_s_scriptable_explCamShakeDuration = Dvar_Deregister(DCONST_DVARINT_s_scriptable_explCamShakeDuration);
  DCONST_DVARFLT_s_scriptable_explCamShakeScale = Dvar_Deregister(DCONST_DVARFLT_s_scriptable_explCamShakeScale);
  DCONST_DVARFLT_s_scriptable_explCamShakeRadiusMultiplier = Dvar_Deregister(DCONST_DVARFLT_s_scriptable_explCamShakeRadiusMultiplier);
  DCONST_DVARBOOL_scriptable_debug_melee = Dvar_Deregister(DCONST_DVARBOOL_scriptable_debug_melee);
  DCONST_DVARBOOL_scriptable_debug_vehicle_client = Dvar_Deregister(DCONST_DVARBOOL_scriptable_debug_vehicle_client);
  DCONST_DVARBOOL_scriptable_debug_impact = Dvar_Deregister(DCONST_DVARBOOL_scriptable_debug_impact);
  DVARBOOL_scriptable_light_radiusscale = Dvar_Deregister(DVARBOOL_scriptable_light_radiusscale);
  DCONST_DVARFLT_scriptable_spatialViewRadiusMax = Dvar_Deregister(DCONST_DVARFLT_scriptable_spatialViewRadiusMax);
  DCONST_DVARBOOL_scriptable_lootPingActive = Dvar_Deregister(DCONST_DVARBOOL_scriptable_lootPingActive);
  DCONST_DVARFLT_scriptable_lootPingRadius = Dvar_Deregister(DCONST_DVARFLT_scriptable_lootPingRadius);
  DCONST_DVARFLT_scriptable_lootPingWidth = Dvar_Deregister(DCONST_DVARFLT_scriptable_lootPingWidth);
  DCONST_DVARFLT_scriptable_lootPingHeight = Dvar_Deregister(DCONST_DVARFLT_scriptable_lootPingHeight);
  DCONST_DVARFLT_scriptable_lootPopupRadius = Dvar_Deregister(DCONST_DVARFLT_scriptable_lootPopupRadius);
  DVARINT_scriptable_lootOutlineColor = Dvar_Deregister(DVARINT_scriptable_lootOutlineColor);
  DCONST_DVARBOOL_scriptable_loot_fx_enabled = Dvar_Deregister(DCONST_DVARBOOL_scriptable_loot_fx_enabled);
  DCONST_DVARBOOL_scriptable_loot_fx_debug = Dvar_Deregister(DCONST_DVARBOOL_scriptable_loot_fx_debug);
  DVARBOOL_scriptable_particle_event_debug = Dvar_Deregister(DVARBOOL_scriptable_particle_event_debug);
  DCONST_DVARBOOL_scriptable_debug_spatial_3d = Dvar_Deregister(DCONST_DVARBOOL_scriptable_debug_spatial_3d);
  DCONST_DVARBOOL_scriptable_debug_spatial_tree = Dvar_Deregister(DCONST_DVARBOOL_scriptable_debug_spatial_tree);
  DCONST_DVARBOOL_scriptable_debug_spatial_overlay = Dvar_Deregister(DCONST_DVARBOOL_scriptable_debug_spatial_overlay);
  DCONST_DVARBOOL_scriptable_debug_loot = Dvar_Deregister(DCONST_DVARBOOL_scriptable_debug_loot);
  DVARBOOL_mayhem_debugNotetracks = Dvar_Deregister(DVARBOOL_mayhem_debugNotetracks);
  DVARBOOL_mayhem_entInfo = Dvar_Deregister(DVARBOOL_mayhem_entInfo);
  DVARBOOL_mayhem_lerpSelfVis = Dvar_Deregister(DVARBOOL_mayhem_lerpSelfVis);
  DVARINT_mayhem_debugEnt = Dvar_Deregister(DVARINT_mayhem_debugEnt);
  DVARFLT_mayhem_debugEntTime = Dvar_Deregister(DVARFLT_mayhem_debugEntTime);
  DVARFLT_mayhem_debugEntTimeScale = Dvar_Deregister(DVARFLT_mayhem_debugEntTimeScale);
  DVARBOOL_cg_ClientModel_Debug_ShowModels = Dvar_Deregister(DVARBOOL_cg_ClientModel_Debug_ShowModels);
  DVARINT_cg_ClientModel_Debug_ShowModelDetails = Dvar_Deregister(DVARINT_cg_ClientModel_Debug_ShowModelDetails);
  DVARINT_cg_ClientModel_Debug_DisplayOffsetX = Dvar_Deregister(DVARINT_cg_ClientModel_Debug_DisplayOffsetX);
  DVARINT_cg_ClientModel_Debug_DisplayOffsetY = Dvar_Deregister(DVARINT_cg_ClientModel_Debug_DisplayOffsetY);
  DVARBOOL_cg_ClientModel_Debug_Dump = Dvar_Deregister(DVARBOOL_cg_ClientModel_Debug_Dump);
  DVARBOOL_cg_entityWorkers = Dvar_Deregister(DVARBOOL_cg_entityWorkers);
  DCONST_DVARBOOL_cg_entityWorkersCritSecLegacyMode = Dvar_Deregister(DCONST_DVARBOOL_cg_entityWorkersCritSecLegacyMode);
  DCONST_DVARBOOL_cg_entityWorkersCostBalancing = Dvar_Deregister(DCONST_DVARBOOL_cg_entityWorkersCostBalancing);
  DCONST_DVARBOOL_cg_entityWorkersPhysicsCheckLocks = Dvar_Deregister(DCONST_DVARBOOL_cg_entityWorkersPhysicsCheckLocks);
  DCONST_DVARBOOL_cg_entityWorkersBufferedOutput = Dvar_Deregister(DCONST_DVARBOOL_cg_entityWorkersBufferedOutput);
  DCONST_DVARINT_cg_event_forceLod = Dvar_Deregister(DCONST_DVARINT_cg_event_forceLod);
  DCONST_DVARFLT_cg_eventLodDistance_Lod0 = Dvar_Deregister(DCONST_DVARFLT_cg_eventLodDistance_Lod0);
  DCONST_DVARFLT_cg_eventLodDistance_Lod1 = Dvar_Deregister(DCONST_DVARFLT_cg_eventLodDistance_Lod1);
  DCONST_DVARFLT_cg_eventLodDistance_Lod2 = Dvar_Deregister(DCONST_DVARFLT_cg_eventLodDistance_Lod2);
  DCONST_DVARFLT_cg_eventLodDistance_Lod3 = Dvar_Deregister(DCONST_DVARFLT_cg_eventLodDistance_Lod3);
  DCONST_DVARFLT_cg_eventLod_NarrowFOV = Dvar_Deregister(DCONST_DVARFLT_cg_eventLod_NarrowFOV);
  DCONST_DVARFLT_cg_eventLod_FOVbubble = Dvar_Deregister(DCONST_DVARFLT_cg_eventLod_FOVbubble);
  DCONST_DVARINT_cg_event_playerAnimCalcFrameCount = Dvar_Deregister(DCONST_DVARINT_cg_event_playerAnimCalcFrameCount);
  DCONST_DVARINT_cg_event_forceNetfieldLod = Dvar_Deregister(DCONST_DVARINT_cg_event_forceNetfieldLod);
  DCONST_DVARBOOL_cg_event_enableDroppedLowLodEventWarning = Dvar_Deregister(DCONST_DVARBOOL_cg_event_enableDroppedLowLodEventWarning);
  DVARINT_cg_event_debugAnalytics_Type = Dvar_Deregister(DVARINT_cg_event_debugAnalytics_Type);
  DVARBOOL_cg_event_debugAnalytics_overBudgetSkipped = Dvar_Deregister(DVARBOOL_cg_event_debugAnalytics_overBudgetSkipped);
  g_CG_HudLighting_Dvars.fadeSharpness = Dvar_Deregister(g_CG_HudLighting_Dvars.fadeSharpness);
  g_CG_HudLighting_Dvars.modes[0].specExponent = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[0].specExponent);
  g_CG_HudLighting_Dvars.modes[0].lights[0].lum.scale = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[0].lights[0].lum.scale);
  g_CG_HudLighting_Dvars.modes[0].lights[0].lum.offset = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[0].lights[0].lum.offset);
  g_CG_HudLighting_Dvars.modes[0].lights[0].color.scale = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[0].lights[0].color.scale);
  g_CG_HudLighting_Dvars.modes[0].lights[0].color.offset = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[0].lights[0].color.offset);
  g_CG_HudLighting_Dvars.modes[0].lights[1].lum.scale = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[0].lights[1].lum.scale);
  g_CG_HudLighting_Dvars.modes[0].lights[1].lum.offset = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[0].lights[1].lum.offset);
  g_CG_HudLighting_Dvars.modes[0].lights[1].color.scale = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[0].lights[1].color.scale);
  g_CG_HudLighting_Dvars.modes[0].lights[1].color.offset = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[0].lights[1].color.offset);
  g_CG_HudLighting_Dvars.modes[0].lights[2].lum.scale = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[0].lights[2].lum.scale);
  g_CG_HudLighting_Dvars.modes[0].lights[2].lum.offset = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[0].lights[2].lum.offset);
  g_CG_HudLighting_Dvars.modes[0].lights[2].color.scale = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[0].lights[2].color.scale);
  g_CG_HudLighting_Dvars.modes[0].lights[2].color.offset = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[0].lights[2].color.offset);
  g_CG_HudLighting_Dvars.modes[0].lights[3].lum.scale = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[0].lights[3].lum.scale);
  g_CG_HudLighting_Dvars.modes[0].lights[3].lum.offset = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[0].lights[3].lum.offset);
  g_CG_HudLighting_Dvars.modes[0].lights[3].color.scale = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[0].lights[3].color.scale);
  g_CG_HudLighting_Dvars.modes[0].lights[3].color.offset = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[0].lights[3].color.offset);
  g_CG_HudLighting_Dvars.modes[1].specExponent = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[1].specExponent);
  g_CG_HudLighting_Dvars.modes[1].lights[0].lum.scale = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[1].lights[0].lum.scale);
  g_CG_HudLighting_Dvars.modes[1].lights[0].lum.offset = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[1].lights[0].lum.offset);
  g_CG_HudLighting_Dvars.modes[1].lights[0].color.scale = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[1].lights[0].color.scale);
  g_CG_HudLighting_Dvars.modes[1].lights[0].color.offset = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[1].lights[0].color.offset);
  g_CG_HudLighting_Dvars.modes[1].lights[1].lum.scale = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[1].lights[1].lum.scale);
  g_CG_HudLighting_Dvars.modes[1].lights[1].lum.offset = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[1].lights[1].lum.offset);
  g_CG_HudLighting_Dvars.modes[1].lights[1].color.scale = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[1].lights[1].color.scale);
  g_CG_HudLighting_Dvars.modes[1].lights[1].color.offset = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[1].lights[1].color.offset);
  g_CG_HudLighting_Dvars.modes[1].lights[2].lum.scale = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[1].lights[2].lum.scale);
  g_CG_HudLighting_Dvars.modes[1].lights[2].lum.offset = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[1].lights[2].lum.offset);
  g_CG_HudLighting_Dvars.modes[1].lights[2].color.scale = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[1].lights[2].color.scale);
  g_CG_HudLighting_Dvars.modes[1].lights[2].color.offset = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[1].lights[2].color.offset);
  g_CG_HudLighting_Dvars.modes[1].lights[3].lum.scale = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[1].lights[3].lum.scale);
  g_CG_HudLighting_Dvars.modes[1].lights[3].lum.offset = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[1].lights[3].lum.offset);
  g_CG_HudLighting_Dvars.modes[1].lights[3].color.scale = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[1].lights[3].color.scale);
  g_CG_HudLighting_Dvars.modes[1].lights[3].color.offset = Dvar_Deregister(g_CG_HudLighting_Dvars.modes[1].lights[3].color.offset);
}

/*
==============
CG_Main_VerifySuitDef
==============
*/
void CG_Main_VerifySuitDef(const unsigned int suitDefIndex, const char *name)
{
  const SuitDef *SuitDef; 
  const char *v4; 
  __int64 v5; 
  signed __int64 v6; 
  char v7; 
  __int64 v8; 
  char v9; 

  SuitDef = BG_GetSuitDef(suitDefIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_main.cpp", 317, ASSERT_TYPE_ASSERT, "(otherSuitDef)", (const char *)&queryFormat, "otherSuitDef") )
    __debugbreak();
  v4 = SuitDef->name;
  v5 = 0x7FFFFFFFi64;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v6 = v4 - name;
  do
  {
    v7 = name[v6];
    v8 = v5;
    v9 = *name++;
    --v5;
    if ( !v8 )
      break;
    if ( v7 != v9 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_main.cpp", 318, ASSERT_TYPE_ASSERT, "(!I_strcmp( otherSuitDef->name, name ))", (const char *)&queryFormat, "!I_strcmp( otherSuitDef->name, name )") )
        __debugbreak();
      return;
    }
  }
  while ( v7 );
}

