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
  __asm { vmovdqu xmmword ptr cs:?cgMediaSurfaceFxMap@@3V?$map@PEBUParticleSystemDef@@IV?$pool_allocator@U?$red_black_tree_node@U?$pair@PEBUParticleSystemDef@@I@ntl@@@ntl@@Vsolitary_buffer_allocator@2@@ntl@@U?$less@PEBUParticleSystemDef@@PEBU1@@3@@ntl@@A.baseclass_0.baseclass_0.baseclass_0.baseclass_0.m_data.m_buffer, xmm0; ntl::map<ParticleSystemDef const *,uint,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,uint>>,ntl::solitary_buffer_allocator>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *>> cgMediaSurfaceFxMap }
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
  __int64 v2; 
  cgs_t *v3; 
  int *p_viewHeight; 
  int *p_viewWidth; 
  bool v7; 
  bool v8; 
  __int64 v12; 
  double v14; 
  __int64 v15; 
  int v16; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v16 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 98, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v16) )
      __debugbreak();
  }
  if ( (int)v2 < cgs_t::ms_allocatedCount )
  {
    if ( (unsigned int)v2 >= cgs_t::ms_allocatedCount )
    {
      LODWORD(v15) = cgs_t::ms_allocatedCount;
      LODWORD(v12) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 112, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cgs_t::ms_allocatedCount )", "localClientNum doesn't index cgs_t::ms_allocatedCount\n\t%i not in [0, %i)", v12, v15) )
        __debugbreak();
    }
    if ( !cgs_t::ms_cgsArray[v2] )
    {
      LODWORD(v15) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 113, ASSERT_TYPE_ASSERT, "(cgs_t::ms_cgsArray[localClientNum])", "%s\n\tTrying to access unallocated client static globals for localClientNum %d\n", "cgs_t::ms_cgsArray[localClientNum]", v15) )
        __debugbreak();
    }
    if ( cgs_t::ms_allocatedType == STATIC_GLOB_TYPE_UNKNOWN )
    {
      LODWORD(v15) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 114, ASSERT_TYPE_ASSERT, "(cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client static globals for localClientNum %d but the client static global type is not known\n", "cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN", v15) )
        __debugbreak();
    }
    v3 = cgs_t::ms_cgsArray[v2];
    _RSI = &v3->viewAspect;
    v3->viewX = 0;
    p_viewHeight = &v3->viewHeight;
    v3->viewMult = 1.0;
    p_viewWidth = &v3->viewWidth;
    CL_GetScreenDimensions(&v3->viewWidth, &v3->viewHeight, &v3->viewAspect);
    if ( *p_viewWidth <= 0 )
    {
      LODWORD(v12) = *p_viewWidth;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_main.cpp", 256, ASSERT_TYPE_SANITY, "( ( cgs->viewWidth > 0 ) )", "( cgs->viewWidth ) = %i", v12) )
        __debugbreak();
    }
    v7 = *p_viewHeight == 0;
    if ( *p_viewHeight <= 0 )
    {
      LODWORD(v12) = *p_viewHeight;
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_main.cpp", 257, ASSERT_TYPE_SANITY, "( ( cgs->viewHeight > 0 ) )", "( cgs->viewHeight ) = %i", v12);
      v7 = !v8;
      if ( v8 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rsi]
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm1, xmm0
    }
    if ( v7 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm1, xmm1
        vmovsd  [rsp+48h+var_20], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_main.cpp", 258, ASSERT_TYPE_SANITY, "( ( cgs->viewAspect > 0 ) )", "( cgs->viewAspect ) = %g", v14) )
        __debugbreak();
    }
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
void CG_Main_RegisterGameDvars()
{
  const dvar_t **v13; 
  unsigned int i; 
  const dvar_t *v27; 
  const dvar_t *v31; 
  const dvar_t *v38; 
  const dvar_t *v45; 
  const dvar_t *v49; 
  unsigned int v60; 
  unsigned int v61; 
  const dvar_t *v70; 
  const dvar_t *v75; 
  const dvar_t *v79; 
  unsigned int v86; 
  unsigned int v97; 
  const dvar_t *v101; 
  const dvar_t *v121; 
  const dvar_t *v125; 
  const dvar_t *v135; 
  const dvar_t *v159; 
  const dvar_t *v182; 
  const dvar_t *v189; 
  const dvar_t *v193; 
  const dvar_t *v197; 
  char ActiveGameMode; 
  int v202; 
  const dvar_t *v209; 
  const dvar_t *v213; 
  const dvar_t *v217; 
  const dvar_t *v221; 
  const dvar_t *v225; 
  const dvar_t *v229; 
  const dvar_t *v236; 
  const dvar_t *v240; 
  const dvar_t *v254; 
  const dvar_t *v264; 
  unsigned int v271; 
  char v272; 
  const dvar_t *v277; 
  const dvar_t *v290; 
  const dvar_t *v295; 
  const dvar_t *v299; 
  const dvar_t *v306; 
  const dvar_t *v314; 
  const dvar_t *v318; 
  const dvar_t *v322; 
  unsigned int v329; 
  char v330; 
  const dvar_t *v343; 
  const dvar_t *v357; 
  const dvar_t *v361; 
  const dvar_t *v376; 
  const dvar_t *v386; 
  const dvar_t *v393; 
  const dvar_t *v397; 
  const dvar_t *v401; 
  const dvar_t *v408; 
  const dvar_t *v415; 
  const dvar_t *v420; 
  const dvar_t *v427; 
  const dvar_t *v431; 
  const dvar_t *v435; 
  unsigned int v439; 
  unsigned int v450; 
  const dvar_t *v454; 
  const dvar_t *v458; 
  const dvar_t *v462; 
  const dvar_t *v466; 
  const dvar_t *v470; 
  const dvar_t *v474; 
  const dvar_t *v478; 
  const dvar_t *v482; 
  unsigned int v486; 
  unsigned int v496; 
  const dvar_t *v500; 
  const dvar_t *v504; 
  const dvar_t *v508; 
  const dvar_t *v514; 
  const dvar_t *v518; 
  const dvar_t *v522; 
  const dvar_t *v526; 
  const dvar_t *v530; 
  const dvar_t *v534; 
  const dvar_t *v538; 
  unsigned int v546; 
  unsigned int v547; 
  char v548; 
  const dvar_t *v558; 
  const dvar_t *v571; 
  const dvar_t *v578; 
  const dvar_t *v582; 
  unsigned int v586; 
  unsigned int v587; 
  const dvar_t *v591; 
  const dvar_t *v595; 
  const dvar_t *v651; 
  const dvar_t *v664; 
  const dvar_t *v680; 
  const dvar_t *v684; 
  const dvar_t *v691; 
  const dvar_t *v701; 
  const dvar_t *v705; 
  const dvar_t *v710; 
  unsigned int v715; 
  unsigned int v719; 
  unsigned int v723; 
  unsigned int v727; 
  unsigned int v731; 
  const dvar_t *v748; 
  const dvar_t *v755; 
  const dvar_t *v760; 
  const dvar_t *v770; 
  char v777; 
  const dvar_t *v788; 
  const dvar_t *v792; 
  const dvar_t *v803; 
  const dvar_t *v807; 
  const dvar_t *v814; 
  const dvar_t *v818; 
  const dvar_t *v822; 
  const dvar_t *v826; 
  const dvar_t *v830; 
  const dvar_t *v834; 
  const dvar_t *v847; 
  const dvar_t *v851; 
  const dvar_t *v855; 
  const dvar_t *v859; 
  const dvar_t *v863; 
  const dvar_t *v868; 
  const dvar_t *v876; 
  const dvar_t *v883; 
  const dvar_t *v887; 
  const dvar_t *v891; 
  const dvar_t *v895; 
  const dvar_t *v899; 
  const dvar_t *v903; 
  const dvar_t *v907; 
  const dvar_t *v911; 
  const dvar_t *v918; 
  const dvar_t *v922; 
  const dvar_t *v926; 
  const dvar_t *v931; 
  const dvar_t *v935; 
  const dvar_t *v939; 
  const dvar_t *v943; 
  const dvar_t *v951; 
  const dvar_t *v955; 
  const dvar_t *v959; 
  const dvar_t *v963; 
  const dvar_t *v967; 
  const dvar_t *v971; 
  const dvar_t *v975; 
  const dvar_t *v979; 
  const dvar_t *v983; 
  const dvar_t *v987; 
  const dvar_t *v991; 
  const dvar_t *v995; 
  const dvar_t *v999; 
  const dvar_t *v1003; 
  const dvar_t *v1007; 
  const dvar_t *v1011; 
  const dvar_t *v1015; 
  const dvar_t *v1025; 
  const dvar_t *v1029; 
  const dvar_t *v1033; 
  const dvar_t *v1037; 
  char v1041; 
  char v1050; 
  char v1060; 
  const dvar_t *v1069; 
  const dvar_t *v1073; 
  const dvar_t *v1091; 
  const dvar_t *v1103; 
  const dvar_t *v1107; 
  const dvar_t *v1115; 
  const dvar_t *v1119; 
  const dvar_t *v1127; 
  const dvar_t *v1131; 
  const dvar_t *v1142; 
  const dvar_t *v1146; 
  const dvar_t *v1150; 
  const dvar_t *v1158; 
  const dvar_t *v1162; 
  const dvar_t *v1166; 
  const dvar_t *v1170; 
  const dvar_t *v1174; 
  const dvar_t *v1184; 
  const dvar_t *v1188; 
  const dvar_t *v1192; 
  const dvar_t *v1199; 
  const dvar_t *v1209; 
  const dvar_t *v1213; 
  const dvar_t *v1218; 
  const dvar_t *v1222; 
  const dvar_t *v1226; 
  const dvar_t *v1233; 
  const dvar_t *v1237; 
  const dvar_t *v1241; 
  const dvar_t *v1245; 
  const dvar_t *v1249; 
  const dvar_t *v1253; 
  const dvar_t *v1257; 
  const dvar_t *v1261; 
  const dvar_t *v1269; 
  const dvar_t *v1285; 
  const dvar_t *v1289; 
  const dvar_t *v1293; 
  const dvar_t *v1300; 
  const dvar_t *v1304; 
  const dvar_t *v1340; 
  const dvar_t *v1344; 
  const dvar_t *v1352; 
  const dvar_t *v1356; 
  const dvar_t *v1360; 
  const dvar_t *v1364; 
  const dvar_t *v1368; 
  const dvar_t *v1372; 
  const dvar_t *v1376; 
  const dvar_t *v1380; 
  const dvar_t *v1391; 
  const dvar_t *v1398; 
  const dvar_t *v1402; 
  const dvar_t *v1411; 
  const dvar_t *v1416; 
  const dvar_t *v1420; 
  const dvar_t *v1424; 
  const dvar_t *v1435; 
  char v1442; 
  char v1454; 
  char v1465; 
  const dvar_t *v1469; 
  const dvar_t *v1473; 
  const dvar_t *v1477; 
  const dvar_t *v1481; 
  const dvar_t *v1485; 
  const dvar_t *v1489; 
  const dvar_t *v1493; 
  unsigned int v1497; 
  unsigned int v1501; 
  unsigned int v1505; 
  const dvar_t *v1509; 
  const dvar_t *v1513; 
  const dvar_t *v1517; 
  const dvar_t *v1521; 
  const dvar_t *v1525; 
  const dvar_t *v1542; 
  const dvar_t *v1546; 
  const dvar_t *v1550; 
  const dvar_t *v1554; 
  const dvar_t *v1558; 
  const dvar_t *v1571; 
  const dvar_t *v1575; 
  const dvar_t *v1579; 
  const dvar_t *v1583; 
  const dvar_t *v1590; 
  const dvar_t *v1594; 
  const dvar_t *v1602; 
  const dvar_t *v1606; 
  const dvar_t *v1611; 
  const dvar_t *v1616; 
  const dvar_t *v1620; 
  const dvar_t *v1624; 
  const dvar_t *v1631; 
  const dvar_t *v1635; 
  const dvar_t *v1639; 
  const dvar_t *v1656; 
  const dvar_t *v1668; 
  const dvar_t *v1675; 
  const dvar_t *v1687; 
  const dvar_t *v1692; 
  const dvar_t *v1703; 
  const dvar_t *v1707; 
  const dvar_t *v1711; 
  char v1718; 
  char v1729; 
  char v1738; 
  char v1747; 
  const dvar_t *v1759; 
  const dvar_t *v1773; 
  char v1777; 
  char v1789; 
  const dvar_t *v1802; 
  const dvar_t *v1806; 
  const dvar_t *v1813; 
  const dvar_t *v1817; 
  const dvar_t *v1821; 
  const dvar_t *v1825; 
  const dvar_t *v1829; 
  const dvar_t *v1833; 
  const dvar_t *v1846; 
  const dvar_t *v1850; 
  const dvar_t *v1868; 
  const dvar_t *v1872; 
  const dvar_t *v1877; 
  const dvar_t *v1881; 
  const dvar_t *v1885; 
  const dvar_t *v1905; 
  const dvar_t *v1915; 
  const dvar_t *v1922; 
  const dvar_t *v1926; 
  const dvar_t *v1946; 
  const dvar_t *v1953; 
  const dvar_t *v1958; 
  const dvar_t *v1962; 
  const dvar_t *v1969; 
  const dvar_t *v1973; 
  const dvar_t *v1987; 
  const dvar_t *v1991; 
  const dvar_t *v1995; 
  const dvar_t *v1999; 
  const dvar_t *v2009; 
  unsigned int v2016; 
  const dvar_t *v2023; 
  char v2027; 
  const dvar_t *v2065; 
  const dvar_t *v2072; 
  bool v2088; 
  const dvar_t *v2095; 
  const dvar_t *v2099; 
  const dvar_t *v2112; 
  const dvar_t *v2116; 
  const dvar_t *v2123; 
  const dvar_t *v2127; 
  const dvar_t *v2131; 
  const dvar_t *v2141; 
  const dvar_t *v2149; 
  const dvar_t *v2153; 
  const dvar_t *v2157; 
  const dvar_t *v2161; 
  const dvar_t *v2165; 
  const dvar_t *v2169; 
  const dvar_t *v2173; 
  const dvar_t *v2177; 
  const dvar_t *v2181; 
  const dvar_t *v2188; 
  unsigned int v2195; 
  const dvar_t *v2199; 
  const dvar_t *v2203; 
  const dvar_t *v2216; 
  const dvar_t *v2225; 
  const dvar_t *v2234; 
  const dvar_t *v2239; 
  const dvar_t *v2244; 
  unsigned int v2251; 
  const dvar_t *v2260; 
  const dvar_t *v2264; 
  const dvar_t *v2271; 
  const dvar_t *v2275; 
  unsigned int v2279; 
  unsigned int v2292; 
  const dvar_t *v2302; 
  const dvar_t *v2306; 
  const dvar_t *v2310; 
  const dvar_t *v2314; 
  unsigned int v2325; 
  const dvar_t *v2336; 
  unsigned int v2340; 
  const dvar_t *v2350; 
  const dvar_t *v2354; 
  const dvar_t *v2361; 
  const dvar_t *v2365; 
  const dvar_t *v2369; 
  const dvar_t *v2373; 
  const dvar_t *v2377; 
  const dvar_t *v2381; 
  const dvar_t *v2385; 
  const dvar_t *v2392; 
  const dvar_t *v2396; 
  const dvar_t *v2400; 
  const dvar_t *v2404; 
  const dvar_t *v2408; 
  const dvar_t *v2412; 
  const dvar_t *v2416; 
  const dvar_t *v2420; 
  const dvar_t *v2424; 
  const dvar_t *v2428; 
  const dvar_t *v2432; 
  const dvar_t *v2436; 
  const dvar_t *v2440; 
  const dvar_t *v2444; 
  const dvar_t *v2451; 
  const dvar_t *v2455; 
  const dvar_t *v2459; 
  const dvar_t *v2463; 
  unsigned int v2467; 
  unsigned int v2471; 
  const dvar_t *v2508; 
  const dvar_t *v2512; 
  const dvar_t *v2526; 
  unsigned int v2530; 
  const dvar_t *v2535; 
  const dvar_t *v2539; 
  const dvar_t *v2543; 
  const dvar_t *v2547; 
  const dvar_t *v2554; 
  const dvar_t *v2571; 
  const dvar_t *v2575; 
  const dvar_t *v2579; 
  char v2584; 
  const dvar_t *v2588; 
  const dvar_t *v2592; 
  const dvar_t *v2596; 
  const dvar_t *v2600; 
  const dvar_t *v2604; 
  const dvar_t *v2608; 
  const dvar_t *v2612; 
  const dvar_t *v2619; 
  const dvar_t *v2623; 
  const dvar_t *v2628; 
  const dvar_t *v2632; 
  const dvar_t *v2636; 
  const dvar_t *v2640; 
  const dvar_t *v2644; 
  const dvar_t *v2648; 
  const dvar_t *v2664; 
  const dvar_t *v2678; 
  const dvar_t *v2682; 
  const dvar_t *v2689; 
  const dvar_t *v2696; 
  const dvar_t *v2703; 
  const dvar_t *v2707; 
  const dvar_t *v2711; 
  const dvar_t *v2715; 
  const dvar_t *v2722; 
  const dvar_t *v2726; 
  const dvar_t *v2731; 
  const dvar_t *v2735; 
  const dvar_t *v2739; 
  const dvar_t *v2743; 
  const dvar_t *v2747; 
  const dvar_t *v2751; 
  const dvar_t *v2755; 
  const dvar_t *v2759; 
  const dvar_t *v2763; 
  const dvar_t *v2767; 
  const dvar_t *v2771; 
  const dvar_t *v2775; 
  const dvar_t *v2779; 
  const dvar_t *v2783; 
  const dvar_t *v2790; 
  const dvar_t *v2794; 
  const dvar_t *v2798; 
  const dvar_t *v2802; 
  const dvar_t *v2806; 
  const dvar_t *v2810; 
  const dvar_t *v2814; 
  const dvar_t *v2818; 
  const dvar_t *v2825; 
  const dvar_t *v2829; 
  const dvar_t *v2833; 
  const dvar_t *v2837; 
  const dvar_t *v2841; 
  const dvar_t *v2845; 
  const dvar_t *v2849; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  float fmtj; 
  float fmtk; 
  float fmtl; 
  float fmtm; 
  float fmtn; 
  float fmto; 
  float fmtp; 
  float fmtq; 
  float fmtr; 
  float fmts; 
  float fmtt; 
  float fmtu; 
  float fmtv; 
  float fmtw; 
  float fmtx; 
  float fmty; 
  float fmtz; 
  float fmtba; 
  float fmtbb; 
  float fmtbc; 
  float fmtbd; 
  float fmtbe; 
  float fmtbf; 
  float fmtbg; 
  float fmtbh; 
  float fmtbi; 
  float fmtbj; 
  float fmtbk; 
  float fmtbl; 
  float fmtbm; 
  float fmtbn; 
  float fmtbo; 
  float fmtbp; 
  float fmtbq; 
  float fmtbr; 
  float fmtbs; 
  float fmtbt; 
  float fmtbu; 
  float fmtbv; 
  float fmtbw; 
  float fmtbx; 
  float fmtby; 
  float fmtbz; 
  float fmtca; 
  float fmtcb; 
  float fmtcc; 
  float fmtcd; 
  float fmtce; 
  float fmtcf; 
  float fmtcg; 
  float fmtch; 
  float fmtci; 
  float fmtcj; 
  float fmtck; 
  float fmtcl; 
  float fmtcm; 
  float fmtcn; 
  float fmtco; 
  float fmtcp; 
  float fmtcq; 
  float fmtcr; 
  float fmtcs; 
  float fmtct; 
  float fmtcu; 
  float fmtcv; 
  float fmtcw; 
  float fmtcx; 
  float fmtcy; 
  float fmtcz; 
  float fmtda; 
  float fmtdb; 
  float fmtdc; 
  float flags; 
  float flagsa; 
  float flagsb; 
  float flagsc; 
  float flagsd; 
  float flagse; 
  float flagsf; 
  float flagsg; 
  float flagsh; 
  float flagsi; 
  float flagsj; 
  float flagsk; 
  float flagsl; 
  float flagsm; 
  float flagsn; 
  float flagso; 
  float flagsp; 
  float flagsq; 
  float flagsr; 
  float flagss; 
  float flagst; 
  float flagsu; 
  float flagsv; 
  float flagsw; 
  float flagsx; 
  float flagsy; 
  float flagsz; 
  float flagsba; 
  float flagsbb; 
  float flagsbc; 
  float flagsbd; 
  float flagsbe; 
  float flagsbf; 
  float flagsbg; 
  float flagsbh; 
  float flagsbi; 
  float flagsbj; 
  float flagsbk; 
  float flagsbl; 
  float flagsbm; 
  float flagsbn; 
  float flagsbo; 
  float description; 
  float descriptiona; 
  float descriptionb; 
  float descriptionc; 
  float descriptiond; 
  float descriptione; 
  float descriptionf; 
  float descriptiong; 
  float descriptionh; 
  float descriptioni; 
  float descriptionj; 
  float descriptionk; 
  float descriptionl; 
  float descriptionm; 
  float descriptionn; 
  float descriptiono; 
  float descriptionp; 
  float descriptionq; 
  float descriptionr; 
  float descriptions; 
  float descriptiont; 
  float descriptionu; 
  float descriptionv; 
  float descriptionw; 
  char dest[64]; 
  char v3021; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  if ( !(unsigned __int8)Com_GameMode_GetActiveGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_main.cpp", 215, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() != GameModeType::NONE)", "%s\n\tThese dvars must be registered after game mode creation", "Com_GameMode_GetActiveGameMode() != GameModeType::NONE") )
    __debugbreak();
  __asm { vmovss  xmm14, cs:__real@3f800000 }
  _EBP = 0;
  v13 = cg_hud_outline_colors;
  for ( i = 0; i < 0xC; ++i )
  {
    Com_sprintf(dest, 0x40ui64, "cg_hud_outline_colors_%d", i);
    __asm
    {
      vmovaps xmm3, xmm14; b
      vmovaps xmm2, xmm14; g
      vmovaps xmm1, xmm14; r
      vmovss  dword ptr [rsp+178h+fmt], xmm14
    }
    *v13++ = Dvar_RegisterColor(dest, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, 0x140u, "hud outline color");
  }
  Com_GameMode_GetActiveGameMode();
  DVARBOOL_cg_drawVersion = Dvar_RegisterBool("LKQNQLPSNQ", 1, 0, "Draw the game version");
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm6, cs:__real@44000000
    vmovss  xmm1, cs:__real@41a00000; value
  }
  DVARBOOL_cg_drawBspVersion = Dvar_RegisterBool("OOTOSQQPN", 1, 0, "Draw the current map BSP version");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm10, xmm10, xmm10
    vmovss  xmm8, cs:__real@41200000
  }
  DVARFLT_cg_drawVersionX = Dvar_RegisterFloat("NQKSKRLLMO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "X offset for the version string");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v27 = Dvar_RegisterFloat("LNSPRMNMQL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Y offset for the version string");
  __asm { vmovss  xmm1, cs:__real@3e19999a; value }
  DVARFLT_cg_drawVersionY = v27;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v31 = Dvar_RegisterFloat("PSTNQQPKN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Fontscale of Version debug text");
  __asm { vmovss  xmm1, cs:__real@41a00000; value }
  DVARFLT_cg_drawVersionFontScale = v31;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cg_drawBspVersionX = Dvar_RegisterFloat("TQNROPMQP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "X offset for the BSP version string");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v38 = Dvar_RegisterFloat("NLSQKTNLMS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Y offset for the BSP version string");
  __asm { vmovss  xmm1, cs:__real@3e19999a; value }
  DVARFLT_cg_drawBspVersionY = v38;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cg_drawBSPVersionFontScale = Dvar_RegisterFloat("NSRKONOQQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Fontscale of BSP Version debug text");
  DVARBOOL_cg_draw2D = Dvar_RegisterBool("NNTRRPNLQ", 1, 4u, "Draw 2D screen elements");
  DVARBOOL_cg_drawDevOverlays = Dvar_RegisterBool("TKNMLPPSS", 1, 4u, "Draw dev overlays");
  __asm
  {
    vmovss  xmm3, cs:__real@44200000; max
    vmovss  xmm2, cs:__real@c4200000; min
    vmovss  xmm1, cs:__real@42000000; value
  }
  DVARSTR_cg_drawTitleString = Dvar_RegisterString("NNQKLMRLQR", (const char *)&queryFormat.fmt + 3, 0, "Title message for screenshots - none if empty");
  v45 = Dvar_RegisterFloat("LNOROTKROM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Title message for screenshots - X Position");
  __asm
  {
    vmovss  xmm3, cs:__real@43f00000; max
    vmovss  xmm2, cs:__real@c3f00000; min
    vmovss  xmm1, cs:__real@42800000; value
  }
  DVARFLT_cg_drawTitleX = v45;
  v49 = Dvar_RegisterFloat("NOMKLLKLRP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Title message for screenshots - Y Position");
  __asm
  {
    vmovss  xmm6, cs:__real@40a00000
    vmovss  xmm1, cs:__real@3f000000; value
  }
  DVARFLT_cg_drawTitleY = v49;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cg_drawTitleSize = Dvar_RegisterFloat("LOQKMLPKMN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Title message for screenshots - Font Size");
  __asm
  {
    vmovaps xmm3, xmm14; b
    vmovaps xmm2, xmm14; g
    vmovaps xmm1, xmm14; r
    vmovss  dword ptr [rsp+178h+fmt], xmm14
  }
  DVARCLR_cg_drawTitleColor = Dvar_RegisterColor("PPPPNSPKR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, 0, "Title message for screenshots - Color");
  DVARINT_cg_drawFPSGraphs = Dvar_RegisterEnum("PLTMRLOKK", cg_drawFPSGraphModes, 0, 0, "Display an FPS graph.");
  DVARINT_cg_drawTerrainStreamingInfo = Dvar_RegisterInt("LOORORLTLL", 0, 0, 4, 4u, "Display Super Terrain debugging info.  1 - material/combined/mask textures, 2 - Geo streaming");
  DVARINT_cg_drawTerrainStreamingInfoPosX = Dvar_RegisterInt("MQNMQLNQLP", 10, -4096, 4096, 4u, "X offset of Super Terrain Streaming info");
  __asm
  {
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@3e3851ec; value
  }
  DVARINT_cg_drawTerrainStreamingInfoPosY = Dvar_RegisterInt("PPTTTOLSM", 15, -2048, 2048, 4u, "Y offset of Super Terrain Streaming info");
  __asm { vmovaps xmm3, xmm14; max }
  DVARFLT_cg_drawTerrainStreamingInfoScale = Dvar_RegisterFloat("LQSSRPKTLT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Scale of Super Terrain Streaming info");
  DVARINT_cg_drawTerrainStreamingInfoMaterialLayerScroll = Dvar_RegisterInt("LOLONPKQMM", 0, 0, 4096, 4u, "Scrolls the Material Layer list");
  DVARINT_cg_drawTerrainStreamingInfoCombinedMapScroll = Dvar_RegisterInt("NRTQPQPNNT", 0, 0, 2048, 4u, "Scrolls the Combined Map list");
  DVARINT_cg_drawTerrainStreamingInfoStreamedGeoScroll = Dvar_RegisterInt("LNNSKRTPTS", 0, 0, 2048, 4u, "Scrolls the Streamed Geometry list");
  DVARINT_cg_drawTerrainStreamingInfoRenderedGeoScroll = Dvar_RegisterInt("MTLRNMTSQK", 0, 0, 2048, 4u, "Scrolls the Rendered Geometry list");
  DVARINT_cg_drawTerrainStreamingInfoHeightCutoutLmapScroll = Dvar_RegisterInt("MPSTPNTROL", 0, 0, 2048, 4u, "Scrolls the height, cutout, and light map list");
  DVARINT_cg_drawClutterInfo = Dvar_RegisterInt("NTPTOQQOPR", 0, 0, 5, 4u, "Display Clutter debugging info: 0: off, 1: No Sorting, 2: sort by generated instances, 3: sort by sampled instances, 4: sort by max instances, 5: sort by bitmask memory");
  v60 = 262340;
  v61 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v61 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPINT_cg_rootMotionLerpTime = Dvar_RegisterInt("LSPRLSRMOS", 200, 50, 5000, v61, "Time (ms) to lerp into a root motion anim so that the anim will always start at the beginning");
  DVARBOOL_cg_drawGun = Dvar_RegisterBool("SROLTPQLK", 1, 4u, "Draw the view model");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
    vmovss  xmm11, cs:__real@7f7fffff
    vmovss  xmm9, cs:__real@42c80000
  }
  DVARFLT_cg_buttonHintMinScale = Dvar_RegisterFloat("ROSSSPSSP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The minimum scale cursor hints of type HINT_BUTTON are displayed at");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  v70 = Dvar_RegisterFloat("NSOMOMMLML", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The distance at which cursor hints of type HINT_BUTTON are displayed at scale 1");
  __asm
  {
    vmovss  xmm15, cs:__real@40000000
    vmovss  xmm2, cs:__real@3c23d70a; min
  }
  DVARFLT_cg_buttonHintNaturalDistance = v70;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm1, xmm14; value
  }
  v75 = Dvar_RegisterFloat("OLPPMPLNTS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Scale applied to player 0 field of view");
  __asm { vmovss  xmm3, cs:__real@43200000; max }
  DVARFLT_cg_playerFovScale = v75;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v79 = Dvar_RegisterFloat("cg_fov_viewmodel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The separate field of view angle in degrees applied to the view model ( < 1.0 means standard field of view is used)");
  __asm { vmovss  xmm3, cs:__real@43200000; max }
  DCONST_DVARFLT_cg_fov_viewmodel = v79;
  __asm
  {
    vmovaps xmm2, xmm14; min
    vmovaps xmm1, xmm14; value
  }
  DVARFLT_cg_fovMin = Dvar_RegisterFloat("NQPKSOTP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The minimum possible field of view");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DVARFLT_cg_viewVehicleInfluence = Dvar_RegisterFloat("LNLQKQMPS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "The influence on the view angles from being in a vehicle");
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
  v86 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v86 = 262276;
  __asm
  {
    vmovss  xmm12, cs:__real@3e99999a
    vmovss  xmm3, cs:__real@41f00000; max
  }
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm { vmovd   xmm0, eax }
  _ER15 = 1;
  __asm
  {
    vmovd   xmm1, r15d
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm12, xmm2
    vmovaps xmm1, xmm0; value
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  [rsp+178h+var_128], xmm0
  }
  DCONST_DVARMPFLT_painVisionLerpOutRate = Dvar_RegisterFloat("OONLORSMO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v86, "Rate at which pain vision effect lerps out");
  v97 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v97 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm3, cs:__real@41f00000; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v101 = Dvar_RegisterFloat("MLLRKTPNRR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v97, "Rate at which pain vision effect lerps in");
  __asm { vmovss  xmm1, cs:__real@3f0ccccd; value }
  DCONST_DVARMPFLT_painVisionLerpInRate = v101;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_painVisionTriggerHealth = Dvar_RegisterFloat("TTMKNNPSN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Health (0 to 1) that will trigger the pain vision effect");
  DVARINT_cg_hudDamageIconTime = Dvar_RegisterInt("LNOPORRSOM", 6000, 0, 0x7FFFFFFF, 4u, "The amount of time for the damage icon to stay on screen after damage is taken");
  DVARINT_cg_hudShieldDamageIconTime = Dvar_RegisterInt("MNQTOKSRKL", 2000, 0, 0x7FFFFFFF, 4u, "The amount of time for the shield damage icon to stay on screen after damage is blocked");
  DVARINT_cg_hudRicochetDamageIconTime = Dvar_RegisterInt("NNROMKSPRT", 900, 0, 0x7FFFFFFF, 4u, "The amount of time for the ricochet damage icon to stay on screen after damage is taken");
  __asm { vmovss  xmm7, cs:__real@38d1b717 }
  DVARBOOL_cg_drawPlayerBoundingBox = Dvar_RegisterBool("NOORPNQNKQ", 0, 4u, "Draw a red bounding box at player's server position");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm7; min
    vmovaps xmm1, xmm14; value
  }
  DVARFLT_cg_hudSplitscreenCompassScale = Dvar_RegisterFloat("OKRQNQPQKT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scale value to apply to the compass in splitscreen");
  __asm { vmovd   xmm1, ebp }
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm0, cs:__real@3f8f5c29
    vmovss  xmm1, cs:__real@3fe00000
    vblendvps xmm1, xmm0, xmm1, xmm2; value
    vmovaps xmm2, xmm7; min
    vmovaps xmm3, xmm11; max
  }
  DVARFLT_cg_hudSplitscreenCompassElementScale = Dvar_RegisterFloat("LQMSSTKMOR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scale value to apply to compass elements in splitscreen");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm7; min
    vmovaps xmm1, xmm14; value
  }
  v121 = Dvar_RegisterFloat("MSQRLQTMOR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scale value to apply to the stance HUD element in splitscreen");
  __asm { vmovss  xmm2, cs:__real@3727c5ac; min }
  DVARFLT_cg_hudSplitscreenStanceScale = v121;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm1, xmm15; value
  }
  v125 = Dvar_RegisterFloat("PTOKMTMOR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scale value to apply to the scoreboard in splitscreen");
  __asm { vmovss  xmm2, cs:__real@3727c5ac; min }
  DVARFLT_cg_hudSplitscreenScoreboardScale = v125;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm1, xmm15; value
  }
  DVARFLT_cg_hudSplitscreenBannerScoreboardScale = Dvar_RegisterFloat("NOOPTNONTT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scale value to apply to the splitscreen banner scoreboard");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm7; min
    vmovaps xmm1, xmm12; value
  }
  DVARFLT_cg_splitscreenSpectatorScaleIncrease = Dvar_RegisterFloat("LSROQNMQQL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scale value to apply to the spectator message in splitscreen");
  DVARINT_cg_drawMaterial = Dvar_RegisterEnum("MKPTMMPNLN", cg_drawMaterialNames, 0, 4u, "Draw debugging information for materials");
  DVARINT_cg_drawMaterialLayerScroll = Dvar_RegisterInt("ORQQRPLSN", 0, 0, 32, 0, "Scroll cg_drawMaterial layer display such that the given layer is the first one shown.");
  DVARBOOL_cg_drawTechset = Dvar_RegisterBool("LMQQQKNLKQ", 0, 4u, "Draw debugging information for material techsets");
  DVARBOOL_cg_drawRange = Dvar_RegisterBool("TMQPKRPSL", 0, 4u, "Draw the range from the camera to the reticle point in the world");
  DVARBOOL_cg_drawpaused = Dvar_RegisterBool("RRLSQTNMO", 1, 0, "Draw paused screen");
  DVARBOOL_cg_equipmentSounds = Dvar_RegisterBool("NNLKSSMTLM", 1, 0x44u, "Play equipment sounds");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  v135 = Dvar_RegisterFloat("NSRPSNSOKQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The alpha value of the crosshair");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  DVARFLT_cg_crosshairAlpha = v135;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cg_crosshairAlphaMin = Dvar_RegisterFloat("OKQMQLNKQO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The minimum alpha value of the crosshair when it fades in");
  DVARBOOL_cg_crosshairDynamic = Dvar_RegisterBool("MTSRKMTOTL", 1, 4u, "Crosshair is Dynamic");
  DVARBOOL_cg_crosshairEnemyColorEnabled = Dvar_RegisterBool("MSLLKLMNKS", 0, 0x44u, "Enable changing the crosshair color when targeting an enemy");
  DVARBOOL_cg_crosshairEnemyColor = Dvar_RegisterBool("LMSLMNORNR", 1, 0x44u, "The crosshair color when over an enemy");
  DVARBOOL_cg_crosshairFriendlyColorEnabled = Dvar_RegisterBool("LMNMLOKNN", 0, 0x44u, "Enable changing the crosshair color when targeting a friendly");
  DVARBOOL_cg_crosshairSpectateHide = Dvar_RegisterBool("NKSMRLMRKR", 1, 0x44u, "Hip crosshair should be hidden during killcam and spectate.");
  DVARBOOL_cg_crosshairCheckDrivingPhysVeh = Dvar_RegisterBool("NRRNKOSKQK", 1, 0, "True to enable better checking of physics vehicle driving to skip crosshair drawing");
  DVARBOOL_cg_autoSwitchToHeavyWeapon = Dvar_RegisterBool("LTMQNPRLN", 1, 0, "Auto switch to heavy weapon slot if primary weapons run out of ammo.");
  __asm { vmovd   xmm1, ebp }
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, cs:__real@40400000
    vmovaps xmm0, xmm6
    vblendvps xmm1, xmm1, xmm0, xmm2; value
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm3, xmm11; max
  }
  DVARFLT_cg_centertime = Dvar_RegisterFloat("MLQKTPMNMO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The time for a center printed message to fade");
  DVARINT_cg_debugevents = Dvar_RegisterInt("MNTSOMMNM", -1, -1, 227, 4u, "Output event debug information.  EV_NONE turns it off.  EV_MAX_EVENTS shows all events.  Otherwise, show only specified value.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  DVARFLT_cg_errordecay = Dvar_RegisterFloat("MMRTPTQOKS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Decay for predicted error");
  DVARINT_cg_showmiss = Dvar_RegisterInt("MMMPPQSTKP", 0, 0, 2, 0, "Show prediction errors");
  DVARBOOL_cg_footsteps = Dvar_RegisterBool("SOPSMLMMP", 1, 0x44u, "Play footstep sounds that are NOT sprint");
  DVARBOOL_cg_footstepsSprint = Dvar_RegisterBool("RPRTRPRLL", 1, 0x44u, "Play sprint footstep sounds");
  __asm { vmovss  xmm7, cs:__real@447a0000 }
  DCONST_DVARBOOL_cg_footstepfx = Dvar_RegisterBool("cg_footstepfx", 1, 0x40004u, "Play footstep FXs");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  DCONST_DVARFLT_cg_footstepfx_maxDistance = Dvar_RegisterFloat("cg_footstepfx_maxDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max distance from player for playing their footstep fx. Zero to disable.");
  __asm { vmovss  xmm13, cs:__real@3dcccccd }
  DVARBOOL_cg_landingSounds = Dvar_RegisterBool("NKMMNOOQSP", 1, 0x44u, "Play landing on surface sounds");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm13; min
    vmovaps xmm1, xmm15; value
  }
  v159 = Dvar_RegisterFloat("LSLKPOQQSO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The multiplier applied to the base width when viewed in thermal vision");
  __asm { vmovss  xmm1, cs:__real@40800000; value }
  DVARFLT_tracer_thermalWidthMult = v159;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm13; min
  }
  DVARFLT_tracer_firstPersonMaxWidth = Dvar_RegisterFloat("MPMQRSMQMK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The maximum width our OWN tracers can be when looking through our ADS");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  DVARFLT_tracer_firstPersonMaxScrewRadius = Dvar_RegisterFloat("LPPSPNPOSM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The maximum screw radius our OWN tracers can be when looking through our ADS");
  __asm { vmovss  xmm6, cs:__real@3f400000 }
  DVARBOOL_tracer_explosiveOverride = Dvar_RegisterBool("LRLPQNTMMQ", 0, 0, "When turned on, will apply an override to the tracer settings when shooting explosive bullets.");
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm14
    vmovss  [rsp+178h+flags], xmm10
    vmovaps xmm3, xmm6; z
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm14; x
    vmovss  dword ptr [rsp+178h+fmt], xmm14
  }
  DVARVEC4_tracer_explosiveColor1 = Dvar_RegisterVec4("OLKOPPKTOM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, flags, description, 0, "The 1st color of a bullet tracer when using explosive bullets");
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm14
    vmovss  [rsp+178h+flags], xmm10
    vmovaps xmm3, xmm6; z
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm14; x
    vmovss  dword ptr [rsp+178h+fmt], xmm14
  }
  DVARVEC4_tracer_explosiveColor2 = Dvar_RegisterVec4("MKNLTNLPKT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, flagsa, descriptiona, 0, "The 2nd color of a bullet tracer when using explosive bullets");
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm14
    vmovss  [rsp+178h+flags], xmm10
    vmovaps xmm3, xmm6; z
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm14; x
    vmovss  dword ptr [rsp+178h+fmt], xmm14
  }
  DVARVEC4_tracer_explosiveColor3 = Dvar_RegisterVec4("OMPOMRTNRM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, flagsb, descriptionb, 0, "The 3rd color of a bullet tracer when using explosive bullets");
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm14
    vmovss  [rsp+178h+flags], xmm10
    vmovaps xmm3, xmm6; z
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm14; x
    vmovss  dword ptr [rsp+178h+fmt], xmm14
  }
  DVARVEC4_tracer_explosiveColor4 = Dvar_RegisterVec4("MLSLQPTTNT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, flagsc, descriptionc, 0, "The 4th color of a bullet tracer when using explosive bullets");
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm14
    vmovss  [rsp+178h+flags], xmm10
    vmovaps xmm3, xmm6; z
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm14; x
    vmovss  dword ptr [rsp+178h+fmt], xmm14
  }
  v182 = Dvar_RegisterVec4("LKTKOKPKQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, flagsd, descriptiond, 0, "The 5th color of a bullet tracer when using explosive bullets");
  __asm { vmovss  xmm1, cs:__real@40c00000; value }
  DVARVEC4_tracer_explosiveColor5 = v182;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm14; min
  }
  DVARFLT_tracer_explosiveWidth = Dvar_RegisterFloat("LQRTSOPOKO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The width of a bullet tracer when using explosive bullets");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm9; min
    vmovaps xmm1, xmm9; value
  }
  v189 = Dvar_RegisterFloat("tracer_minimumTravelViewmodel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Tracers are only drawn if they travel greater than this distance.");
  __asm
  {
    vmovss  xmm1, cs:__real@40a00000; value
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_tracer_minimumTravelViewmodel = v189;
  v193 = Dvar_RegisterFloat("tracer_minimumTravelWorldmodel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Tracers are only drawn if they travel greater than this distance.");
  __asm { vmovss  xmm1, cs:__real@41f00000; value }
  DCONST_DVARFLT_tracer_minimumTravelWorldmodel = v193;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v197 = Dvar_RegisterFloat("tracer_muzzleOffsetViewmodel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Tracers begin drawing at this distance from the weapon muzzle.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  DCONST_DVARFLT_tracer_muzzleOffsetViewmodel = v197;
  DCONST_DVARFLT_tracer_muzzleOffsetWorldmodel = Dvar_RegisterFloat("tracer_muzzleOffsetWorldmodel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Tracers begin drawing at this distance from the weapon muzzle.");
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
  v202 = 500;
  if ( ActiveGameMode != 1 )
    v202 = 455;
  DVARINT_cg_gameMessageWidth = Dvar_RegisterInt("NMSOPLSSKL", v202, 130, 1664, 4u, "The maximum character width of the game messages");
  DVARINT_cg_gameBoldMessageWidth = Dvar_RegisterInt("MSMOKPTNKS", 390, 130, 1664, 4u, "The maximum character width of the bold game messages");
  __asm
  {
    vmovss  xmm1, cs:__real@40400000; value
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cg_subtitleMinTime = Dvar_RegisterFloat("MROPKMTMLN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The minimum time that the subtitles are displayed on screen in seconds");
  DVARINT_cg_subtitleWidthStandard = Dvar_RegisterInt("LNTMQKOQKN", 480, 130, 1664, 0, "The width of the subtitles on a non wide-screen");
  DVARINT_cg_subtitleWidthWidescreen = Dvar_RegisterInt("LNKPMTSNMR", 600, 130, 1664, 0, "The width of the subtitle on a wide-screen");
  DVARBOOL_cg_cinematic_subtitles = Dvar_RegisterBool("NQKNLQSLOP", 1, 0, "Enable subtitles generated by bink videos.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  v209 = Dvar_RegisterFloat("cg_viewZSmoothingMin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Threshold for the minimum smoothing distance it must move to smooth");
  __asm { vmovss  xmm1, cs:__real@42700000; value }
  DCONST_DVARFLT_cg_viewZSmoothingMin = v209;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v213 = Dvar_RegisterFloat("cg_viewZSmoothingMax", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Threshold for the maximum smoothing distance we'll do");
  __asm { vmovss  xmm1, cs:__real@3e19999a; value }
  DCONST_DVARFLT_cg_viewZSmoothingMax = v213;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v217 = Dvar_RegisterFloat("cg_viewZSmoothingUpTimeMin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "When going up, min amount of time to spread the smoothing over");
  __asm { vmovss  xmm1, cs:__real@3ecccccd; value }
  DCONST_DVARFLT_cg_viewZSmoothingUpTimeMin = v217;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v221 = Dvar_RegisterFloat("cg_viewZSmoothingUpTimeMax", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "When going up, max amount of time to spread the smoothing over");
  __asm
  {
    vmovss  xmm1, cs:__real@3e19999a; value
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_viewZSmoothingUpTimeMax = v221;
  v225 = Dvar_RegisterFloat("cg_viewZSmoothingDownTimeMin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "When going up, min amount of time to spread the smoothing over");
  __asm { vmovss  xmm1, cs:__real@3ecccccd; value }
  DCONST_DVARFLT_cg_viewZSmoothingDownTimeMin = v225;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v229 = Dvar_RegisterFloat("cg_viewZSmoothingDownTimeMax", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "When going up, max amount of time to spread the smoothing over");
  __asm { vmovss  xmm1, cs:__real@42000000; value }
  DCONST_DVARFLT_cg_viewZSmoothingDownTimeMax = v229;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_viewZSmoothingPlayerSpeedFloor = Dvar_RegisterFloat("cg_viewZSmoothingPlayerSpeedFloor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Player speed at which cg_viewZSmoothingTimeMax is used");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  v236 = Dvar_RegisterFloat("cg_viewZSmoothingPlayerSpeedCeil", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Player speed at which cg_viewZSmoothingTimeMin is used");
  __asm
  {
    vmovss  xmm3, cs:__real@43b40000; max
    vmovss  xmm1, cs:__real@42a00000; value
  }
  DCONST_DVARFLT_cg_viewZSmoothingPlayerSpeedCeil = v236;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v240 = Dvar_RegisterFloat("cg_viewMaxFovBeforeZNearClamp", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "If the user real FoV is higher that this value, we clamp the znear value to 1 to prevent seeing trough walls and arms clipping. Set to 0 to disable the feature");
  __asm
  {
    vmovss  xmm3, cs:__real@43b40000; max
    vmovss  xmm1, cs:__real@42a00000; value
  }
  DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClamp = v240;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClampForSmallCharacter = Dvar_RegisterFloat("cg_viewMaxFovBeforeZNearClampForSmallCharacter", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Same as the above but for character with small bound radius (Hometown for example). Set to 0 to disable the feature");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DCONST_DVARFLT_cg_viewZNearClampValueForHighFov = Dvar_RegisterFloat("cg_viewZNearClampValueForHighFov", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The forced znear clamp while the user have a fov higher than DconstFloat( cg_viewMaxExtremeFovBeforeZNearClamp ) or DconstFloat( cg_viewMaxFovBeforeZNearClampForSmallCharacter ) in Hometown");
  __asm { vmovss  xmm15, cs:__real@461c4000 }
  DCONST_DVARINT_cg_viewZSmoothingInterpType = Dvar_RegisterEnum("cg_viewZSmoothingInterpType", cg_viewZSmoothingInterpolationTypeNames, 2, 0x40004u, "Interpolation curve for View Z Smoothing");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_sv_znear = Dvar_RegisterFloat("NLPLNQSNNR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Things closer than this aren't drawn.  Reducing this increases z-fighting in the distance.  Set to 0 to not specify.");
  DVARBOOL_cg_drawrumbledebug = Dvar_RegisterBool("MTTPSSTRS", 0, 0, "Display rumble debug information");
  DVARINT_cg_drawDebugBones = Dvar_RegisterInt("OKLNPSOPOQ", 2047, -1, 2560, 0, "Draw bones for entity number.");
  DVARINT_cg_drawDebugBonesType = Dvar_RegisterEnum("RQSNKTPSQ", cg_debugDrawBonesTypeNames, 0, 0, "Select a subset of bones to debug draw.");
  DVARSTR_cg_drawDebugBonesNameFilter = Dvar_RegisterString("LMNLKNOOSP", (const char *)&queryFormat.fmt + 3, 0, "Use a sub-string search for bone names.");
  DVARBOOL_cg_drawDebugBonesBind = Dvar_RegisterBool("RSPKTLOSN", 1, 0, "Draw bind pose when drawing bones with cg_drawDebugBones.");
  DVARBOOL_cg_drawDebugBonesClosest = Dvar_RegisterBool("LRLKTOQTQN", 0, 0, "updates cg_drawDebugBones to closest entity to camera.");
  DVARBOOL_cg_drawDebugAnimUsage = Dvar_RegisterBool("LNLTNRNROT", 0, 0, "Draw number of animations and animation nodes for all entities.");
  DVARBOOL_cg_drawDebugMaxAnimUsage = Dvar_RegisterBool("OLKQTQKSPR", 0, 0, "Draw maximum number of animations and animation nodes for all entities.");
  DVARBOOL_cg_drawDebugDoors = Dvar_RegisterBool("MQNPLTNQTO", 0, 0, "Draws scriptable door ownership and assignment.");
  __asm { vmovss  xmm1, cs:__real@42480000; value }
  DVARINT_cg_drawLOSLatency = Dvar_RegisterInt("MLOTQLSPNS", -1, -1, 2047, 0, "Draw a sphere to debug line of sight latency for entity number. For remote clients, player's view eye will snap for stance transitions.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v254 = Dvar_RegisterFloat("OLTKPPQNQT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Debug line of sight latency to calculate the recommended head position.");
  __asm { vmovss  xmm1, cs:__real@41a00000; value }
  DVARFLT_cg_drawLOSLatencyThreshold = v254;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cg_drawLOSLatencyTolerance = Dvar_RegisterFloat("MTSOQNOOQR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Debug line of sight latency tolerance to calcute the latency valid range.");
  DCONST_DVARBOOL_cg_drawLOSLatencyShowOptimalHead = Dvar_RegisterBool("cg_drawLOSLatencyShowOptimalHead", 1, 0x40004u, "Draws optimal head location.");
  DVARINT_cg_drawVisionSetMode = Dvar_RegisterEnum("MNRMNQTSNT", cg_drawDebugVisionSet, 0, 0, "Display debug visionset information");
  DVARINT_cg_drawDebugLadder = Dvar_RegisterEnum("PNLQPLNTR", cg_debugDrawLadderTypeNames, 0, 0, "Which ladder anim node to draw.");
  DVARBOOL_cg_drawDebugEntitiesLoD = Dvar_RegisterBool("LPPRMONNRN", 0, 0, "Draw debug entities LoD (red = high LoD, green = low LoD)");
  DCONST_DVARINT_cg_drawDebugAnimLodInfo = Dvar_RegisterEnum("cg_drawDebugAnimLodInfo", cg_drawDebugAnimLodInfoTypeNames, 0, 0x40004u, "Draw animation LOD debug information for visible entities");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DVARFLT_cg_animLODScale = Dvar_RegisterFloat("NMKLQPLSQM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Scale factor to apply to animation LOD distance scale");
  DVARBOOL_cg_inputLatencyDevice = Dvar_RegisterBool("LRKSRONORQ", 0, 0, "Draw colored square on screen for input latency tester.");
  DVARINT_cg_debugDrawHitBox = Dvar_RegisterEnum("SKOLNOSTP", cg_drawHitBoxCategories, 0, 0, "Display character hit boxes");
  DVARSTR_cg_foliagesnd_alias = Dvar_RegisterString("LTKNPSMTMT", "movement_foliage", 0x40u, "The sound that plays when an actor or player enters a foliage clip brush.");
  __asm
  {
    vmovss  xmm3, cs:__real@3e7cfcfd; b
    vmovss  xmm2, cs:__real@3ec4c4c5; g
    vmovss  xmm1, cs:__real@3f71f1f2; r
  }
  DVARSTR_cg_foliagebulletsnd_alias = Dvar_RegisterString("QPRSOMMSN", "bullet_foliage", 0x40u, "The sound that plays when an actor or player enters a foliage clip brush.");
  __asm { vmovss  dword ptr [rsp+178h+fmt], xmm14 }
  v264 = Dvar_RegisterColor("NORTRLQQTT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtg, 0, "Enemy team crosshair color");
  __asm
  {
    vmovss  xmm3, cs:__real@3f4dcdce; b
    vmovss  xmm2, cs:__real@3f47c7c8; g
    vmovss  xmm1, cs:__real@3ebebebf; r
  }
  DVARCLR_cg_CrosshairColor_EnemyTeam = v264;
  __asm { vmovss  dword ptr [rsp+178h+fmt], xmm14 }
  DVARCLR_cg_CrosshairColor_MyTeam = Dvar_RegisterColor("NSRQOMSLKT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmth, 0, "Player team crosshair color");
  DVARBOOL_cg_constantSizeHeadIcons = Dvar_RegisterBool("LNQKSKSLRR", 0, 4u, "Head icons are the same size regardless of distance from the player");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_vehHelicopterFreeLookReleaseSpeed = Dvar_RegisterFloat("LSOQLMLSPQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "The rate that the player's view moves back to center when freelook is released");
  DVARBOOL_cg_drawWVisDebug = Dvar_RegisterBool("MSLTLPQOTM", 0, 0, "Display weapon visibility debug info");
  v271 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v271 = 262276;
  v272 = Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPBOOL_cg_drawPlayerShadow = Dvar_RegisterBool("MSSMMTNTLP", v272 != 1, v271, "Draw player shadow in first person view");
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPSPBOOL_cg_drawPlayerLegs = Dvar_RegisterBool("cg_drawPlayerLegs", 1, 0x40004u, "Draw player legs in first person view");
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm6, cs:__real@c2c80000
    vmovss  xmm1, cs:__real@c1400000; value
  }
  DCONST_DVARMPSPBOOL_cg_drawPlayerAlways = Dvar_RegisterBool("cg_drawPlayerAlways", 0, 0x40004u, "Draw player legs/shadow even when in ufo/noclip");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm6; min
  }
  v277 = Dvar_RegisterFloat("cg_playerLegsOffset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Offset of first person legs model along view direction");
  __asm { vmovss  xmm1, cs:__real@c089eb85; value }
  DCONST_DVARFLT_cg_playerLegsOffset = v277;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm6; min
  }
  DCONST_DVARFLT_cg_playerLegsOffsetLadder = Dvar_RegisterFloat("cg_playerLegsOffsetLadder", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Offset of first person legs model along the up direction while playing ladder animations.");
  DCONST_DVARBOOL_cg_playerLegsOffsetEnableRadiusClamp = Dvar_RegisterBool("cg_playerLegsOffsetEnableRadiusClamp", 1, 0x40004u, "Enables clamping of the legs offset based on the suit bounding radius.");
  DCONST_DVARBOOL_cg_disable_playerLegsOffset_fov_comp = Dvar_RegisterBool("cg_disable_playerLegsOffset_fov_comp", 0, 0x40004u, "disable the first person legs mode positional compensation for fov changes");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovss  xmm1, cs:__real@c1a00000; value
    vmovaps xmm2, xmm6; min
  }
  DCONST_DVARFLT_cg_playerLegsOffset_fovComp_forward = Dvar_RegisterFloat("cg_playerLegsOffset_fovComp_forward", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Offset of the first person legs model along the forward vector of the view axis");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm6; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_cg_playerLegsOffset_fovComp_right = Dvar_RegisterFloat("cg_playerLegsOffset_fovComp_right", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Offset of the first person legs model along the right vector of the view axis");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm6; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v290 = Dvar_RegisterFloat("cg_playerLegsOffset_fovComp_up", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Offset of the first person legs model along the up vector of the view axis");
  __asm
  {
    vmovss  xmm6, cs:__real@43340000
    vmovss  xmm2, cs:__real@c3340000; min
    vmovss  xmm1, cs:__real@c3020000; value
  }
  DCONST_DVARFLT_cg_playerLegsOffset_fovComp_up = v290;
  __asm { vmovaps xmm3, xmm6; max }
  v295 = Dvar_RegisterFloat("cg_playerLegsSpineLowAngle", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Bend angle for lowest spine bone in player legs model");
  __asm
  {
    vmovss  xmm2, cs:__real@c3340000; min
    vmovss  xmm1, cs:__real@c1c80000; value
  }
  DCONST_DVARFLT_cg_playerLegsSpineLowAngle = v295;
  __asm { vmovaps xmm3, xmm6; max }
  v299 = Dvar_RegisterFloat("cg_playerLegsSpineMidAngle", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Bend angle for mid spine bone in player legs model");
  __asm { vmovss  xmm2, cs:__real@c3340000; min }
  DCONST_DVARFLT_cg_playerLegsSpineMidAngle = v299;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm1, xmm9; value
  }
  DCONST_DVARFLT_cg_playerLegsArmsAngle = Dvar_RegisterFloat("cg_playerLegsArmsAngle", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Bend angle for arms in player legs model");
  __asm { vmovss  xmm1, cs:__real@3f59999a; value }
  DCONST_DVARINT_cg_impaleWarpMode = Dvar_RegisterEnum("cg_impaleWarpMode", cg_impaleWarpNames, 2, 0x40004u, "Sets the warp mode that should be used to align the ragdoll hit location with the initial impaling constraint position.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v306 = Dvar_RegisterFloat("cg_impaleVelocityAdjust", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "When the impaling constraint's velocity changes, apply this fraction of the velocity to all bones in the attached ragdoll.");
  __asm
  {
    vmovss  xmm6, cs:__real@00800000
    vmovss  xmm1, cs:__real@43480000; value
  }
  DCONST_DVARFLT_cg_impaleVelocityAdjust = v306;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm6; min
  }
  DCONST_DVARFLT_cg_impaleFriction = Dvar_RegisterFloat("cg_impaleFriction", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Friction around the impaling constraint's hinge.");
  __asm
  {
    vmovss  xmm3, cs:__real@40490fdb; max
    vmovss  xmm1, cs:__real@3f4ccccd; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  v314 = Dvar_RegisterFloat("cg_impaleMaxAngle", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Maximum angle of rotation allowed around the impaling hinge (radians).");
  __asm { vmovss  xmm1, cs:__real@43af0000; value }
  DCONST_DVARFLT_cg_impaleMaxAngle = v314;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm6; min
  }
  v318 = Dvar_RegisterFloat("cg_impaleBreakThreshold", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Breaking force threshold for impaling constraint.");
  __asm { vmovss  xmm2, cs:__real@ff7fffff; min }
  DCONST_DVARFLT_cg_impaleBreakThreshold = v318;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  v322 = Dvar_RegisterFloat("cg_impaleBreakVelocityScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "When impaling constraint is broken, apply this scale to the velocity of the constrained physics body.  Simulates getting snagged on a rod when it breaks.");
  __asm { vmovss  xmm1, cs:__real@43fa0000; value }
  DCONST_DVARFLT_cg_impaleBreakVelocityScale = v322;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm6; min
  }
  DCONST_DVARFLT_cg_impaleRagdollStiffnessRate = Dvar_RegisterFloat("cg_impaleRagdollStiffnessRate", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "When the impaling constraint is moving at this speed (inches per second), the stiffness (friction) of all ragdoll joints will be doubled.  Higher speeds continue to increase joint friction.");
  DCONST_DVARINT_cg_impaleMaxBoneDistance = Dvar_RegisterInt("cg_impaleMaxBoneDistance", 2, 0, 0x7FFFFFFF, 0x40004u, "Maximum number of links between the impaled bone and the ragdoll torso bone.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm7; value
  }
  DCONST_DVARFLT_cg_impaleFailBoneSpeed = Dvar_RegisterFloat("cg_impaleFailBoneSpeed", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "When the impaling constraint fails to actually impale the victim, this velocity is applied to the hit bone and neighboring bones instead.");
  DCONST_DVARINT_cg_impaleMaxPenetrationSolveTimeMs = Dvar_RegisterInt("cg_impaleMaxPenetrationSolveTimeMs", 1100, 0, 0x7FFFFFFF, 0x40004u, "Maximum duration that an impaled ragdoll can attempt to solve penetrations with its environment before the constraint is forcibly broken (in milliseconds).");
  DVARBOOL_thermalVisionLuiDebugAlwaysActive = Dvar_RegisterBool("LONTTKLNNK", 0, 4u, "Set to use the new lui thermal vision system.");
  v329 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v329 = 262276;
  v330 = Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPBOOL_thermalVisionLuiUse = Dvar_RegisterBool("SLSPNLSQP", v330 != 1, v329, "Set to use the new lui thermal vision system.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm15; value
  }
  DCONST_DVARFLT_thermalVisionLuiDefaultDistance = Dvar_RegisterFloat("thermalVisionLuiDefaultDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max distance of thermal overlay for default.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm15; value
  }
  DCONST_DVARFLT_thermalVisionLuiLinkedDistance = Dvar_RegisterFloat("thermalVisionLuiLinkedDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max distance of thermal overlay when player linked.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm15; value
  }
  DCONST_DVARFLT_thermalVisionLuiApexDistance = Dvar_RegisterFloat("thermalVisionLuiApexDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max distance of thermal overlay for Apex.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm15; value
  }
  v343 = Dvar_RegisterFloat("thermalVisionLuiVenomDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max distance of thermal overlay for Venom.");
  __asm { vmovss  xmm1, cs:__real@3f666666; value }
  DCONST_DVARFLT_thermalVisionLuiVenomDistance = v343;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_materialOverrideFinishedFrac = Dvar_RegisterFloat("cg_materialOverrideFinishedFrac", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The point at which we consider the material override finished for shadow hiding purposes.");
  DCONST_DVARBOOL_cg_clientWeaponDrawRotationCenter = Dvar_RegisterBool("cg_clientWeaponDrawRotationCenter", 0, 0x40004u, "Draw debug lines to represent the rotation center of client weapons. Useful when tweaking rotationCenter in frontEndWeaponModelData.csv.");
  DCONST_DVARINT_cg_frontEndSceneTransientStreamingTime = Dvar_RegisterInt("cg_frontEndSceneTransientStreamingTime", 50, 0, 60000, 0x40004u, "Duration, in ms, to force the front-end scene to stream while transients are required");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  DCONST_DVARINT_cg_frontEndSceneTransientTimeout = Dvar_RegisterInt("cg_frontEndSceneTransientTimeout", 15000, 0, 60000, 0x40004u, "Time out in ms until we just accept that not all transients are going to be loaded");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_turretCameraShakeScale = Dvar_RegisterFloat("turretCameraShakeScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Global scaling for the camera shake when turret is firing");
  DCONST_DVARINT_turretCameraShakeDuration = Dvar_RegisterInt("turretCameraShakeDuration", 100, 0, 10000, 0x40004u, "Duration of the camera shake in Ms when turret is firing");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm13; min
    vmovaps xmm1, xmm9; value
  }
  DCONST_DVARFLT_turretCameraShakeRadius = Dvar_RegisterFloat("turretCameraShakeRadius", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Distance up to where the camera shake will have effect when turret fired");
  DCONST_DVARBOOL_turretCameraShakeOverride = Dvar_RegisterBool("turretCameraShakeOverride", 0, 0x40004u, "When enabled, it'll use the default dvar values rather than the weaponDef's ones");
  __asm
  {
    vmovss  xmm6, cs:__real@43800000
    vmovss  xmm1, cs:__real@40800000; value
  }
  DCONST_DVARBOOL_cg_drawPlayerLightSample = Dvar_RegisterBool("cg_drawPlayerLightSample", 0, 0x40004u, "Draw the lighting value of the player used for stealth gameplay.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm14; min
  }
  v357 = Dvar_RegisterFloat("NMOQOMONLQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "player light sample size.");
  __asm { vmovss  xmm1, cs:__real@41900000; value }
  DVARFLT_cg_playerLightSampleSize = v357;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm14; min
  }
  v361 = Dvar_RegisterFloat("LSMSTOQNTT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "player light sample generator shape size.");
  __asm
  {
    vmovss  xmm0, cs:__real@c3800000
    vmovss  xmm3, cs:__real@c0c00000; z
    vmovss  xmm1, cs:__real@40c00000; x
  }
  DVARFLT_cg_playerLightSampleShapeSize = v361;
  __asm
  {
    vmovss  [rsp+178h+flags], xmm6
    vxorps  xmm2, xmm2, xmm2; y
    vmovss  dword ptr [rsp+178h+fmt], xmm0
  }
  DVARVEC3_cg_playerLightSampleShapeOffset = Dvar_RegisterVec3("LMNOSOLQLT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmti, flagse, 0x40u, "player light sample generator offset.");
  DVARINT_cg_playerLightSamplePos = Dvar_RegisterInt("NKTRLMSRNR", 1, 0, 2, 0x40u, "0 = existing game code, 1 = cylinder shape, 2 = hemisphere shape.");
  DVARINT_cg_playerLightSampleNormal = Dvar_RegisterInt("LLLTQOOTPO", 4, 0, 4, 0x40u, "0 = no normal, 1 = all point up, 2 = all point forward, 3 = all point backward, 4 = all point outward.");
  DVARINT_cg_playerLightSampleFilter = Dvar_RegisterInt("NKSSQOPQQP", 0, 0, 1, 0x40u, "0 = avg of top 3 samples, 1 = skip top & bottom 3 samples and compute the avg of rest of them.");
  DCONST_DVARBOOL_cg_extrapolation_full_move = Dvar_RegisterBool("cg_extrapolation_full_move", 0, 0x40004u, "Enable full pmove when extrapolating client movement on the client");
  DCONST_DVARBOOL_cg_debugInfil = Dvar_RegisterBool("cg_debugInfil", 0, 0x40004u, "Turns on client debug information for infils.");
  DCONST_DVARINT_cg_debugInfil_Character = Dvar_RegisterInt("cg_debugInfil_Character", -1, -1, 0x7FFFFFFF, 0x40004u, "If set to a value greater than -1, will only show data for this character.");
  DCONST_DVARBOOL_cg_cfx_debug_effects = Dvar_RegisterBool("cg_cfx_debug_effects", 0, 0x40004u, "Turns on debug info for client side one-shot effects.");
  DCONST_DVARBOOL_cg_cfx_debug_sounds = Dvar_RegisterBool("cg_cfx_debug_sounds", 0, 0x40004u, "Turns on client debug client side one-shot and looping sounds.");
  __asm { vmovss  xmm1, cs:__real@45160000; value }
  DCONST_DVARBOOL_cg_cfx_debug_ssr = Dvar_RegisterBool("cg_cfx_debug_ssr", 0, 0x40004u, "Draw in world the spatial partitioning tree for effects or sounds.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_footstepCullDistance = Dvar_RegisterFloat("cg_footstepCullDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Footsteps generated outside this distance will not be processed.");
  DVARBOOL_cg_playerMovementNotetrackSounds = Dvar_RegisterBool("MKSMNLRMML", 1, 0x40u, "Whether player movement notetracks will emit sounds.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  DCONST_DVARFLT_cg_mountFoleyCullDistance = Dvar_RegisterFloat("cg_mountFoleyCullDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Mount foley events beyond this distance from the listener will not be processed.");
  DCONST_DVARINT_cg_drawCustomizationStreaming = Dvar_RegisterInt("cg_drawCustomizationStreaming", 0, 0, 2, 0x40004u, "Enables debug display of characters chosen to have their customization models streamed. 0=off, 1=sort order, 2=outlining");
  __asm
  {
    vmovss  xmm6, cs:__real@38d1b717
    vmovss  xmm1, cs:__real@3c000000; value
  }
  DCONST_DVARINT_cg_drawWeaponStreaming = Dvar_RegisterInt("cg_drawWeaponStreaming", 0, 0, 2, 0x40004u, "Enables debug display of weapons chosen to be streamed per frame. 0=off, 1=sort order, 2=outlining");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm6; min
  }
  v376 = Dvar_RegisterFloat("LSMPNKQMKS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Min image quality metric value considered to be of high enough image quality for CGame world streaming to notify the server it's ready for previously hinted camera changes");
  __asm { vmovss  xmm1, cs:__real@3d800000; value }
  DVARFLT_cg_worldStreamingMinImageQuality = v376;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm6; min
  }
  DVARFLT_cg_worldStreamingMaxImageQuality = Dvar_RegisterFloat("NKRKKSTRRO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Max image quality metric value considered to be of high enough image quality for CGame world streaming to notify the server it's ready for previously hinted camera changes");
  DVARINT_cg_worldStreamingLoadedTimeout = Dvar_RegisterInt("NOORNQMNM", 1000, 0, 0x7FFFFFFF, 0, "Milliseconds until a world streaming requests that has completed loading times out and is cleared. Setting this to 0 will cause stream views to be cleared immediately on completion.");
  DVARINT_cg_worldStreamingKeepAliveTimeout = Dvar_RegisterInt("NOLPSOTORP", 20000, 0, 0x7FFFFFFF, 0, "Milliseconds until a world streaming requests that has completed and is marked as keepAlive is forcibly cleared.");
  DVARINT_cg_worldStreamingLoadingTimeout = Dvar_RegisterInt("MOQSSOPLKP", 10000, 0, 0x7FFFFFFF, 0, "Milliseconds until a world streaming requests that is still loading times out and is forcibly cancelled.");
  DCONST_DVARINT_cg_worldStreamingLoadingWarnTimeout = Dvar_RegisterInt("cg_worldStreamingLoadingWarnTimeout", 2000, 0, 0x7FFFFFFF, 0x40004u, "Milliseconds until warnings are displayed that a world streaming requests is still loading.");
  DCONST_DVARINT_cg_worldStreamingKeepAliveWarnTimeout = Dvar_RegisterInt("cg_worldStreamingKeepAliveWarnTimeout", 2000, 0, 0x7FFFFFFF, 0x40004u, "Milliseconds until warnings are displayed that a world streaming requests is kept alive after it has loaded.");
  DCONST_DVARBOOL_cg_worldStreaming_verbose = Dvar_RegisterBool("cg_worldStreaming_verbose", 0, 0x40004u, "Enable to turn on verbose debug logging for CG_WorldStreaming");
  DCONST_DVARBOOL_cg_defaultWeaponHidesViewmodel = Dvar_RegisterBool("cg_defaultWeaponHidesViewmodel", 1, 0x40004u, "If enabled, the entire viewmodel will be hidden if we detect we are using a fallback, default viewmodel.");
  DCONST_DVARBOOL_cg_weaponFade_applyToViewmodel = Dvar_RegisterBool("cg_weaponFade_applyToViewmodel", 1, 0x40004u, "If enabled, weapon fade will apply the transition effect to the entire viewmodel dobj. If disabled, will only apply weapon fade to the weapon model.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DCONST_DVARFLT_cg_weaponFade_startTransitionFactor = Dvar_RegisterFloat("cg_weaponFade_startTransitionFactor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Initial transition factor for weapon fade, normalized [0.f, 1.f] where 0.f is no transition effects and 1.f is fully applied transition effects.");
  DCONST_DVARINT_cg_weaponFade_transitionTime = Dvar_RegisterInt("cg_weaponFade_transitionTime", 200, 0, 0x7FFFFFFF, 0x40004u, "Amount of time in milliseconds for the weapon transition shader animation to elapse.");
  DVARBOOL_cg_fx_slide_enable = Dvar_RegisterBool("NTMKTPSRO", 1, 0, "Play slide vfx when players slide");
  DVARBOOL_cg_pose_entityFixup = Dvar_RegisterBool("NQNOSLMSKT", 1, 0, "If enabled, the entity skeleton cache is flushed as soon as the pose is queried after the entity pose origin is set. This prevents systems from accessing a stale entity pose.");
  DVARBOOL_cg_pose_assertOnStaleAccess = Dvar_RegisterBool("STSPNNNOS", 0, 0, "If enabled, the game will assert if a system tries to query a pose before the entity pose origin is set.");
  DVARBOOL_cg_psInterpolationDiffClientsFix = Dvar_RegisterBool("SOQOQQNNT", 1, 0, "If enabled, the fix which prevents us from interpolating player states belonging to two different clients is enabled.");
  __asm
  {
    vmovss  xmm3, cs:__real@43fa0000; max
    vmovss  xmm1, cs:__real@41c80000; value
  }
  DVARBOOL_cg_keyframedPredictive = Dvar_RegisterBool("MQMTLNKTMN", 1, 0, "If enabled, will apply velocities to the client predictive keyframe objects. Otherwise it'll warp them as originally.");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v386 = Dvar_RegisterFloat("cg_cinematicCameraRotateMinDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "When rotating, min distance camera has to be from the target before skipping. If less than this, camera will pop to a valid position.");
  __asm
  {
    vmovss  xmm3, cs:__real@43fa0000; max
    vmovss  xmm2, cs:__real@41c80000; min
    vmovss  xmm1, cs:__real@420c0000; value
  }
  DCONST_DVARFLT_cg_cinematicCameraRotateMinDistance = v386;
  DCONST_DVARFLT_cg_cinematicCameraRotateDetachDistance = Dvar_RegisterFloat("cg_cinematicCameraRotateDetachDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "When rotating, distance camera has to be from the target before detaching the camera and holding in place.");
  __asm { vmovss  xmm3, cs:__real@43340000; max }
  DCONST_DVARINT_cg_cinematicCameraRotateMaxTracesPerFrame = Dvar_RegisterInt("cg_cinematicCameraRotateMaxTracesPerFrame", 4, 1, 10, 0x40004u, "When rotating and needs to skip a few degrees when rotating, max number of traces before giving up");
  __asm
  {
    vmovss  xmm1, cs:__real@41f00000; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  v393 = Dvar_RegisterFloat("cg_cinematicCameraRotateCollisionDegreesSkip", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "When rotating, skip this many degrees forward to find a viable location to place camera. Doubles after every trace");
  __asm { vmovss  xmm1, cs:__real@40400000; value }
  DCONST_DVARFLT_cg_cinematicCameraRotateCollisionDegreesSkip = v393;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v397 = Dvar_RegisterFloat("cg_cinematicCameraRotateReturnDistanceRate", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "When rotating, distance per second to return to normal distance after collision.");
  __asm { vmovss  xmm1, cs:__real@41700000; value }
  DCONST_DVARFLT_cg_cinematicCameraRotateReturnDistanceRate = v397;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v401 = Dvar_RegisterFloat("cg_cinematicCameraRotateReturnHeightRate", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "When rotating, rate to return the slide height back down to 0.");
  __asm { vmovss  xmm1, cs:__real@41f00000; value }
  DCONST_DVARFLT_cg_cinematicCameraRotateReturnHeightRate = v401;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_cinematicCameraRotateReturnPitchRate = Dvar_RegisterFloat("cg_cinematicCameraRotateReturnPitchRate", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "When rotating, pitch degrees per second to return to ideal pitch after collision.");
  DCONST_DVARBOOL_cg_cinematicCameraEnabled = Dvar_RegisterBool("cg_cinematicCameraEnabled", 1, 0x40004u, "When turned on, allows using cinematic camera.");
  DCONST_DVARBOOL_cg_cinematicCameraDofEnabled = Dvar_RegisterBool("cg_cinematicCameraDofEnabled", 0, 0x40004u, "Requires cg_cinematicCameraEnabled to be enabled. This would toggle depth of field, but cinematic camera has not been updated with physics dof yet.");
  DCONST_DVARBOOL_cg_cinematicCameraVisionEnabled = Dvar_RegisterBool("cg_cinematicCameraVisionEnabled", 1, 0x40004u, "Requires cg_cinematicCameraEnabled to be enabled. Toggles vision sets.");
  DCONST_DVARBOOL_cg_cinematicCameraSoundEnabled = Dvar_RegisterBool("cg_cinematicCameraSoundEnabled", 1, 0x40004u, "Requires cg_cinematicCameraEnabled to be enabled. Toggles sounds.");
  DCONST_DVARBOOL_cg_cinematicCameraFovEnabled = Dvar_RegisterBool("cg_cinematicCameraFovEnabled", 1, 0x40004u, "Requires cg_cinematicCameraEnabled to be enabled. Toggles fov.");
  __asm
  {
    vmovss  xmm3, cs:__real@44800000; max
    vmovss  xmm1, cs:__real@42f00000; value
  }
  DCONST_DVARBOOL_cg_cinematicCameraDebug = Dvar_RegisterBool("cg_cinematicCameraDebug", 0, 0x40004u, "When turned on, debugs cinematic camera.");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v408 = Dvar_RegisterFloat("cg_thirdPersonRange", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The range of the camera from the player in third person view");
  __asm { vmovss  xmm3, cs:__real@43b40000; max }
  DCONST_DVARFLT_cg_thirdPersonRange = v408;
  __asm
  {
    vmovss  xmm2, cs:__real@c3340000; min
    vmovss  xmm1, cs:__real@43b20000; value
  }
  DCONST_DVARFLT_cg_thirdPersonAngle = Dvar_RegisterFloat("cg_thirdPersonAngle", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The angle of the camera from the player in third person view");
  DCONST_DVARBOOL_cg_thirdPersonNoYaw = Dvar_RegisterBool("cg_thirdPersonNoYaw", 0, 0x40004u, "Ignore yaw in third person view camera");
  DCONST_DVARBOOL_cg_disableScreenShake = Dvar_RegisterBool("cg_disableScreenShake", 0, 0x40004u, "Turns off screen shakes when turned on. Dev-only");
  DCONST_DVARINT_cg_thirdPersonMode = Dvar_RegisterInt("cg_thirdPersonMode", 1, 0, 2, 0x40004u, "How the camera behaves in third person");
  DCONST_DVARBOOL_cg_thirdPersonNoPitch = Dvar_RegisterBool("cg_thirdPersonNoPitch", 0, 0x40004u, "Ignore pitch in third person view camera");
  DCONST_DVARBOOL_cg_drawShellshock = Dvar_RegisterBool("cg_drawShellshock", 1, 0x40004u, "Draw shellshock & flashbang screen effects.");
  DVARBOOL_cg_drawZoomHint = Dvar_RegisterBool("LKKMQRSKTS", 1, 0x40u, "Draw a 'click to zoom' hint");
  __asm { vmovss  xmm1, cs:__real@453b8000; value }
  DCONST_DVARINT_cg_draw_scrambler_max_flicker_time = Dvar_RegisterInt("cg_draw_scrambler_max_flicker_time", 200, 0, 5000, 0x40004u, "The maximum time that UI elements can be visible before they flicker when affected by the scrambler drone.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm14; min
  }
  v415 = Dvar_RegisterFloat("LLPPLMRKKQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "3rd person Tank camera, length of the trace performed from the turret forward to find the focus point.");
  __asm
  {
    vmovss  xmm9, cs:__real@c47a0000
    vmovss  xmm1, cs:__real@43c80000; value
  }
  DVARFLT_cg_thirdPersonTankTraceLen = v415;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm9; min
  }
  v420 = Dvar_RegisterFloat("LMTKRNOTT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "3rd person Tank camera distance to the tank, in the opposite to turret forward direction.");
  __asm { vmovss  xmm1, cs:__real@42480000; value }
  DVARFLT_cg_thirdPersonTankRange = v420;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm9; min
  }
  DVARFLT_cg_thirdPersonTankHeight = Dvar_RegisterFloat("QLLPPNNNP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "3rd person Tank camera height offset above the tank.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm9; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v427 = Dvar_RegisterFloat("NMQRLKTPL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "3rd person Tank camera horizontal offset.");
  __asm { vmovss  xmm1, cs:__real@42340000; value }
  DVARFLT_cg_thirdPersonTankHorizOffset = v427;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v431 = Dvar_RegisterFloat("LNLNTQQNN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "3rd person camera eye point angle");
  __asm { vmovss  xmm1, cs:__real@437a0000; value }
  DVARFLT_cg_thirdPersonCarAngle = v431;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm14; min
  }
  v435 = Dvar_RegisterFloat("LOPSQLMKPO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "3rd person camera distance to the atv quad.");
  __asm
  {
    vmovss  xmm2, cs:__real@3a83126f; min
    vmovaps xmm3, xmm11; max
    vmovaps xmm1, xmm14; value
  }
  DVARFLT_cg_thirdPersonQuadRange = v435;
  DCONST_DVARFLT_cg_thirdPersonCarTimeFac = Dvar_RegisterFloat("cg_thirdPersonCarTimeFac", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARBOOL_cg_thirdPersonCarReturn = Dvar_RegisterBool("cg_thirdPersonCarReturn", 1, 0x40004u, "If true, camera will return back");
  v439 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v439 = 262276;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@42a00000
      vmovss  xmm9, cs:__real@42b40000
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm9, cs:__real@42b40000
      vmovd   xmm1, r15d
    }
    _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode();
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm0, cs:__real@42a00000
      vblendvps xmm0, xmm9, xmm0, xmm2
      vmovaps xmm1, xmm0; value
      vmovss  [rsp+178h+var_128], xmm0
    }
  }
  __asm
  {
    vmovss  xmm3, cs:__real@42dc0000; max
    vmovaps xmm2, xmm14; min
  }
  DCONST_DVARMODEFLT_cg_thirdPersonCarDefaultPolar = Dvar_RegisterFloat("LQNPKMTTPL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v439, "Default camera polar");
  v450 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v450 = 262276;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG )
    Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm3, cs:__real@45000000; max
    vmovss  xmm2, cs:__real@3f000000; min
    vmovss  xmm1, cs:__real@41000000; value
  }
  v454 = Dvar_RegisterFloat("NQNTKQQRTQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v450, "Camera trace collision radius for third person car camera");
  __asm { vmovss  xmm1, cs:__real@40200000; value }
  DCONST_DVARMODEFLT_cg_thirdPersonCarCollRadius = v454;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm6; min
  }
  v458 = Dvar_RegisterFloat("cg_thirdPersonCarReturnSpeedAzimuth", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Speed factor the third person car camera will return to back/front. Only if cg_thirdPersonCarReturn is enabled");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm14; value
  }
  DCONST_DVARFLT_cg_thirdPersonCarReturnSpeedAzimuth = v458;
  v462 = Dvar_RegisterFloat("cg_thirdPersonCarReturnSpeedPolar", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Speed factor the third person car camera will return to back/front. Only if cg_thirdPersonCarReturn is enabled");
  __asm
  {
    vmovss  xmm3, cs:__real@bf800000; max
    vmovss  xmm2, cs:__real@ff7fffff; min
    vmovss  xmm1, cs:__real@c9742400; value
  }
  DCONST_DVARFLT_cg_thirdPersonCarReturnSpeedPolar = v462;
  v466 = Dvar_RegisterFloat("cg_thirdPersonCarReverseThreshold", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Speed in inches/sec when the camera will look backward on car reverse.");
  __asm { vmovss  xmm1, cs:__real@3f19999a; value }
  DCONST_DVARFLT_cg_thirdPersonCarReverseThreshold = v466;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v470 = Dvar_RegisterFloat("cg_thirdPersonCarTimeToReturn", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Time in seconds since we release the input until the camera starts returning to the original position");
  __asm { vmovss  xmm1, cs:__real@42f00000; value }
  DCONST_DVARFLT_cg_thirdPersonCarTimeToReturn = v470;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm14; min
  }
  v474 = Dvar_RegisterFloat("cg_thirdPersonCarMaxDiff", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max distance for lerping");
  __asm { vmovss  xmm1, cs:__real@42400000; value }
  DCONST_DVARFLT_cg_thirdPersonCarMaxDiff = v474;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm14; min
  }
  v478 = Dvar_RegisterFloat("cg_thirdPersonCarMaxAzimuthDiff", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max azimuth difference for lerping");
  __asm
  {
    vmovss  xmm2, cs:__real@41800000; y
    vmovss  xmm3, cs:__real@41600000; z
  }
  DCONST_DVARFLT_cg_thirdPersonCarMaxAzimuthDiff = v478;
  __asm
  {
    vmovss  [rsp+178h+flags], xmm11
    vmovaps xmm1, xmm2; x
    vmovss  dword ptr [rsp+178h+fmt], xmm10
  }
  v482 = Dvar_RegisterVec3("cg_thirdPersonCarLerpSpeed", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtj, flagsf, 0x40004u, "How fast the camera position will lerp to the desired for each camera axis");
  __asm { vmovss  xmm1, cs:__real@40f00000; value }
  DCONST_DVARVEC3_cg_thirdPersonCarLerpSpeed = v482;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_thirdPersonCorpseUpOffset = Dvar_RegisterFloat("cg_thirdPersonCorpseUpOffset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Offset applied to corpse view target position along entity 'up' axis.");
  v486 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v486 = 262276;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
  {
    __asm { vxorps  xmm1, xmm1, xmm1 }
  }
  else
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3b449ba6
      vmovd   xmm1, r15d
    }
    _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode();
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm1, cs:__real@3c1374bc
      vblendvps xmm0, xmm1, xmm2, xmm3
      vmovaps xmm1, xmm0; value
      vmovss  [rsp+178h+var_128], xmm0
    }
  }
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARMODEFLT_cg_thirdPersonCarBlurStrength = Dvar_RegisterFloat("NSTKSMPROK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v486, "Strength of radial blur while driving car wrt speed. 0 to disable");
  v496 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v496 = 262276;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG )
    Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm12; value
  }
  v500 = Dvar_RegisterFloat("MTLPRSKKST", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v496, "Radius of radial blur while driving car wrt speed. 0 to disable");
  __asm
  {
    vmovss  xmm3, cs:__real@42700000; max
    vmovss  xmm1, cs:__real@3cf5c28f; value
  }
  DCONST_DVARMODEFLT_cg_thirdPersonCarBlurRadius = v500;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v504 = Dvar_RegisterFloat("cg_thirdPersonCarMaxRoll", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "max roll allowed for 3rd person camera of car");
  __asm
  {
    vmovss  xmm3, cs:__real@42700000; max
    vmovss  xmm1, cs:__real@3ca3d70a; value
  }
  DCONST_DVARFLT_cg_thirdPersonCarMaxRoll = v504;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v508 = Dvar_RegisterFloat("cg_thirdPersonCarMaxPitch", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "max pitch allowed for 3rd person camera of car");
  __asm
  {
    vmovss  xmm6, cs:__real@3eb33333
    vmovss  xmm15, cs:__real@3f99999a
    vmovss  xmm1, cs:__real@3e4ccccd; x
  }
  DCONST_DVARFLT_cg_thirdPersonCarMaxPitch = v508;
  __asm
  {
    vmovss  [rsp+178h+flags], xmm9
    vmovaps xmm3, xmm6; z
    vmovaps xmm2, xmm15; y
    vmovss  dword ptr [rsp+178h+fmt], xmm10
  }
  v514 = Dvar_RegisterVec3("LTOPQLROPR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtk, flagsg, 4u, "Remote missile-cam, range to shake the view.");
  __asm
  {
    vmovss  xmm3, cs:__real@42a80000; z
    vmovss  xmm2, cs:__real@3f8ccccd; y
    vmovss  xmm1, cs:__real@42180000; x
  }
  DVARVEC3_cameraShakeRemoteMissile_Angles = v514;
  __asm
  {
    vmovss  [rsp+178h+flags], xmm11
    vmovss  dword ptr [rsp+178h+fmt], xmm10
  }
  v518 = Dvar_RegisterVec3("MMPLKPMOMK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtl, flagsh, 4u, "Remote missile-cam, how fast to shake.");
  __asm { vmovss  xmm2, cs:__real@457a0000; y }
  DVARVEC3_cameraShakeRemoteMissile_Freqs = v518;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm1, xmm7; x
    vmovss  dword ptr [rsp+178h+fmt], xmm11
  }
  v522 = Dvar_RegisterVec2("MTNORPNTLL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtm, 4u, "Remote missile-cam, range of missile speed to scale the shaking.");
  __asm
  {
    vmovss  xmm3, cs:__real@40000000; z
    vmovss  xmm2, cs:__real@3e19999a; y
    vmovss  xmm1, cs:__real@3e624dd3; x
  }
  DVARVEC2_cameraShakeRemoteMissile_SpeedRange = v522;
  __asm
  {
    vmovss  [rsp+178h+flags], xmm9
    vmovss  dword ptr [rsp+178h+fmt], xmm10
  }
  v526 = Dvar_RegisterVec3("LRQLQQPPNT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtn, flagsi, 4u, "Remote helicopter gunner cam, range to shake the view.");
  __asm
  {
    vmovss  xmm3, cs:__real@3f000000; z
    vmovss  xmm1, cs:__real@41f80000; x
  }
  DVARVEC3_cameraShakeRemoteHelo_Angles = v526;
  __asm
  {
    vmovss  [rsp+178h+flags], xmm11
    vmovss  dword ptr [rsp+178h+fmt], xmm10
    vmovaps xmm2, xmm9; y
  }
  v530 = Dvar_RegisterVec3("MLTTQQNSSQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmto, flagsj, 4u, "Remote helicopter gunner cam, how fast to shake.");
  __asm
  {
    vmovss  xmm2, cs:__real@459c4000; y
    vmovss  xmm1, cs:__real@44fa0000; x
  }
  DVARVEC3_cameraShakeRemoteHelo_Freqs = v530;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovss  dword ptr [rsp+178h+fmt], xmm11
  }
  v534 = Dvar_RegisterVec2("NLMSTOMKNR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtp, 4u, "Remote helicopter gunner cam, range of missile speed to scale the shaking.");
  __asm
  {
    vmovss  xmm3, cs:__real@461c4000; max
    vmovss  xmm1, cs:__real@42f00000; value
  }
  DVARVEC2_cameraShakeRemoteHelo_SpeedRange = v534;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v538 = Dvar_RegisterFloat("cg_camera_transition_fade_out_start_dist", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Dist from the camera where the player starts to fade out during a camera transition to 1st person.");
  __asm
  {
    vmovss  xmm3, cs:__real@461c4000; max
    vmovss  xmm1, cs:__real@42700000; value
  }
  DCONST_DVARFLT_cg_camera_transition_fade_out_start_dist = v538;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm9, cs:__real@bf800000
  }
  DCONST_DVARFLT_cg_camera_transition_fade_out_end_dist = Dvar_RegisterFloat("cg_camera_transition_fade_out_end_dist", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Dist from the camera where the player finishes fading out during a camera transition to 1st person.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm9; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_cg_crosshairVerticalOffset = Dvar_RegisterFloat("LLLRKRROOP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Amount to vertically offset the crosshair from the center.");
  v546 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v546 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPBOOL_cg_viewmotion_spring_enable = Dvar_RegisterBool("NPRMROSQTN", 1, v546, "If enabled, will attach viewmodel and camera to a spring-mass-damper system attached to the player origin.");
  v547 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v547 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPINT_cg_viewmotion_spring_blendDurationMs = Dvar_RegisterInt("QLQPTPLNN", 2000, 0, 0x7FFFFFFF, v547, "The amount of time to blend between different CinematicMotion asset sets (milliseconds).");
  DVARSTR_RemoteCameraSounds_RoomType = Dvar_RegisterString("LNKLOMQOS", "default", 4u, (const char *)&queryFormat.fmt + 3);
  v548 = Com_GameMode_GetActiveGameMode();
  _ECX = 0;
  _EAX = v548 == 1;
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, ecx
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm0, cs:__real@3f4ccccd
    vblendvps xmm1, xmm0, xmm13, xmm2; value
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm3, xmm14; max
  }
  v558 = Dvar_RegisterFloat("LPPROKMPPS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, (const char *)&queryFormat.fmt + 3);
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  DVARFLT_RemoteCameraSounds_DryLevel = v558;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_RemoteCameraSounds_WetLevel = Dvar_RegisterFloat("OKTKNPTSPP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, (const char *)&queryFormat.fmt + 3);
  DVARINT_thermalBlurFactorScope = Dvar_RegisterInt("QNOQQRSQO", 250, 0, 10000, 0x44u, "Amount of blur to use when drawing blur through a weapon's thermal scope.");
  DVARINT_thermalBlurFactorNoScope = Dvar_RegisterInt("NKRQMPKQML", 250, 0, 10000, 0x44u, "Amount of blur to use when drawing blur that is NOT through a weapon's thermal scope.");
  __asm { vmovss  xmm0, cs:__real@43340000 }
  DVARBOOL_cg_camAngleOverride = Dvar_RegisterBool("LRPTKOOKRQ", 0, 4u, "If true angle offsets override the actual view angles instead of modifying them.");
  __asm
  {
    vmovss  [rsp+178h+flags], xmm0
    vmovss  xmm0, cs:__real@c3340000
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  dword ptr [rsp+178h+fmt], xmm0
    vmovss  xmm0, cs:__real@c47a0000
  }
  DVARVEC3_cg_camAngleOffset = Dvar_RegisterVec3("SMRQNSSTN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtq, flagsk, 4u, "Pitch, Yaw, and Roll offsets in degrees");
  __asm
  {
    vmovss  [rsp+178h+flags], xmm7
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  dword ptr [rsp+178h+fmt], xmm0
  }
  v571 = Dvar_RegisterVec3("MTMRQMRMKS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtr, flagsl, 4u, "Position offset");
  __asm { vmovss  xmm3, cs:__real@47c35000; max }
  DVARVEC3_cg_camOffset = v571;
  __asm
  {
    vmovaps xmm2, xmm9; min
    vmovaps xmm1, xmm9; value
  }
  DVARFLT_cg_traceProfilingDist = Dvar_RegisterFloat("NTKPONOMTP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "If non-negative then length of trace from camera to measure cost of Locational Trace.");
  __asm
  {
    vmovss  xmm3, cs:__real@43480000; max
    vmovss  xmm1, cs:__real@41f00000; value
  }
  DVARBOOL_deathCameraFailsafe = Dvar_RegisterBool("LKNMLOSRPP", 1, 4u, "Turns on the system to find a failsafe position for the death camera.");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v578 = Dvar_RegisterFloat("NSMLPOKPLS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Offset distance for random position selection.");
  __asm { vmovss  xmm1, cs:__real@41c80000; value }
  DVARFLT_deathCameraFailsafeOffset = v578;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v582 = Dvar_RegisterFloat("thirdPersonViewTurretHeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Default height addition for 3rd person view of turret.");
  __asm { vmovss  xmm1, cs:__real@43480000; value }
  DCONST_DVARFLT_thirdPersonViewTurretHeight = v582;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_thirdPersonViewTurretRangeAddition = Dvar_RegisterFloat("thirdPersonViewTurretRangeAddition", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Default range offset for 3rd person view of turret.");
  v586 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v586 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPBOOL_cg_viewmodelMotionBlurFireScale = Dvar_RegisterBool("QNKLPNRKN", 1, v586, "If true, viewmodel motion blur velocity vectors will be scaled after each shot according to weapon GDT values.");
  v587 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v587 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm { vmovss  xmm1, cs:__real@41400000; value }
  DCONST_DVARMPBOOL_fovUseTimeBasedBlends = Dvar_RegisterBool("NMTPKOTOTL", 0, v587, "Enables fov to blend over time for sprint and jog, instead of using speed based blends.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v591 = Dvar_RegisterFloat("fovBlendSpeedIn", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Fov blend in speed when time based blends are enabled.");
  __asm { vmovss  xmm1, cs:__real@40800000; value }
  DCONST_DVARFLT_fovBlendSpeedIn = v591;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v595 = Dvar_RegisterFloat("fovBlendSpeedOut", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Fov blend out speed when time based blends are enabled.");
  __asm { vmovss  xmm1, cs:__real@40a00000; value }
  DCONST_DVARFLT_fovBlendSpeedOut = v595;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_fovIncreaseForSprint = Dvar_RegisterFloat("fovIncreaseForSprint", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Fov increase while sprinting.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_cg_viewModelDebugDist = Dvar_RegisterFloat("cg_viewModelDebugDist", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The distance to move the camera back from the view model.  An alternative to UFO viewmodel.");
  DCONST_DVARBOOL_handheldCameraEnabled = Dvar_RegisterBool("handheldCameraEnabled", 1, 0x40004u, "Whether or not the handheld camera system is enabled.");
  DCONST_DVARBOOL_handheldCameraImpulsesEnabled = Dvar_RegisterBool("handheldCameraImpulsesEnabled", 1, 0x40004u, "Whether or not the handheld camera 'impulse' system is enabled.  Used for events that violently shake the camera (damage, landing, etc).");
  DCONST_DVARINT_handheldCameraRepeatPeriodMs = Dvar_RegisterInt("handheldCameraRepeatPeriodMs", 60000, 1, 0x7FFFFFFF, 0x40004u, "Period of handheld camera motion before the perlin noise pattern repeats.");
  DCONST_DVARINT_handheldCameraOctaves = Dvar_RegisterInt("handheldCameraOctaves", 6, 1, 8, 0x40004u, "Number of octaves of Perlin noise to use for handheld camera motion.");
  DCONST_DVARINT_handheldCameraBlendDurationMs = Dvar_RegisterInt("handheldCameraBlendDurationMs", 500, 0, 0x7FFFFFFF, 0x40004u, "Duration of the blend between handheld camera properties in different cinematicmotion assets.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DVARFLT_handheldCameraTranslationScale = Dvar_RegisterFloat("NSPNNSMKSP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Scale the amount of handheld camera translation.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DVARFLT_handheldCameraRotationScale = Dvar_RegisterFloat("OLSQPSQLTK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Scale the amount of handheld camera rotation.");
  DCONST_DVARINT_handheldCameraDebug = Dvar_RegisterEnum("handheldCameraDebug", cg_shakeCameraDebugTypes, 0, 0x40004u, "Handheld camera debug.");
  DCONST_DVARBOOL_handheldCameraImpulseLandingEnabled = Dvar_RegisterBool("handheldCameraImpulseLandingEnabled", 1, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseLandingAttackMs = Dvar_RegisterInt("handheldCameraImpulseLandingAttackMs", 30, 1, 10000, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseLandingDecayMs = Dvar_RegisterInt("handheldCameraImpulseLandingDecayMs", 450, 1, 10000, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DCONST_DVARFLT_handheldCameraImpulseLandingRotAmplitudeScale = Dvar_RegisterFloat("handheldCameraImpulseLandingRotAmplitudeScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DCONST_DVARFLT_handheldCameraImpulseLandingRotPersistenceScale = Dvar_RegisterFloat("handheldCameraImpulseLandingRotPersistenceScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DCONST_DVARFLT_handheldCameraImpulseLandingTransAmplitudeScale = Dvar_RegisterFloat("handheldCameraImpulseLandingTransAmplitudeScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DCONST_DVARFLT_handheldCameraImpulseLandingTransPersistenceScale = Dvar_RegisterFloat("handheldCameraImpulseLandingTransPersistenceScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm { vmovss  xmm1, cs:__real@3e0f5c29; value }
  DCONST_DVARINT_handheldCameraImpulseLandingDecayType = Dvar_RegisterEnum("handheldCameraImpulseLandingDecayType", cg_shakeImpulseDecayTypes, 1, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_handheldCameraImpulseLandingModifierLow = Dvar_RegisterFloat("handheldCameraImpulseLandingModifierLow", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DCONST_DVARFLT_handheldCameraImpulseLandingModifierMedium = Dvar_RegisterFloat("handheldCameraImpulseLandingModifierMedium", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovss  xmm1, cs:__real@3f4ccccd; value
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_handheldCameraImpulseLandingModifierHigh = Dvar_RegisterFloat("handheldCameraImpulseLandingModifierHigh", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DCONST_DVARFLT_handheldCameraImpulseLandingModifierExtreme = Dvar_RegisterFloat("handheldCameraImpulseLandingModifierExtreme", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARBOOL_handheldCameraImpulseSlideEnabled = Dvar_RegisterBool("handheldCameraImpulseSlideEnabled", 1, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseSlideAttackMs = Dvar_RegisterInt("handheldCameraImpulseSlideAttackMs", 60, 1, 10000, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseSlideDecayMs = Dvar_RegisterInt("handheldCameraImpulseSlideDecayMs", 1000, 1, 10000, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DCONST_DVARFLT_handheldCameraImpulseSlideRotAmplitudeScale = Dvar_RegisterFloat("handheldCameraImpulseSlideRotAmplitudeScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
    vmovss  xmm13, cs:__real@3fc00000
  }
  DCONST_DVARFLT_handheldCameraImpulseSlideRotPersistenceScale = Dvar_RegisterFloat("handheldCameraImpulseSlideRotPersistenceScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
  }
  DCONST_DVARFLT_handheldCameraImpulseSlideTransAmplitudeScale = Dvar_RegisterFloat("handheldCameraImpulseSlideTransAmplitudeScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DCONST_DVARFLT_handheldCameraImpulseSlideTransPersistenceScale = Dvar_RegisterFloat("handheldCameraImpulseSlideTransPersistenceScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseSlideDecayType = Dvar_RegisterEnum("handheldCameraImpulseSlideDecayType", cg_shakeImpulseDecayTypes, 2, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARBOOL_handheldCameraImpulseDamageEnabled = Dvar_RegisterBool("handheldCameraImpulseDamageEnabled", 1, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseDamageAttackMs = Dvar_RegisterInt("handheldCameraImpulseDamageAttackMs", 1, 1, 10000, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm { vmovss  xmm1, cs:__real@40200000; value }
  DCONST_DVARINT_handheldCameraImpulseDamageDecayMs = Dvar_RegisterInt("handheldCameraImpulseDamageDecayMs", 400, 1, 10000, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_handheldCameraImpulseDamageRotAmplitudeScale = Dvar_RegisterFloat("handheldCameraImpulseDamageRotAmplitudeScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  v651 = Dvar_RegisterFloat("handheldCameraImpulseDamageRotPersistenceScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm { vmovss  xmm1, cs:__real@3f4ccccd; value }
  DCONST_DVARFLT_handheldCameraImpulseDamageRotPersistenceScale = v651;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_handheldCameraImpulseDamageTransAmplitudeScale = Dvar_RegisterFloat("handheldCameraImpulseDamageTransAmplitudeScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DCONST_DVARFLT_handheldCameraImpulseDamageTransPersistenceScale = Dvar_RegisterFloat("handheldCameraImpulseDamageTransPersistenceScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseDamageDecayType = Dvar_RegisterEnum("handheldCameraImpulseDamageDecayType", cg_shakeImpulseDecayTypes, 2, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARBOOL_handheldCameraImpulseImpactEnabled = Dvar_RegisterBool("handheldCameraImpulseImpactEnabled", 1, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseImpactAttackMs = Dvar_RegisterInt("handheldCameraImpulseImpactAttackMs", 1, 1, 10000, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm { vmovss  xmm1, cs:__real@3e051eb8; value }
  DCONST_DVARINT_handheldCameraImpulseImpactDecayMs = Dvar_RegisterInt("handheldCameraImpulseImpactDecayMs", 600, 1, 10000, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_handheldCameraImpulseImpactRotAmplitudeScale = Dvar_RegisterFloat("handheldCameraImpulseImpactRotAmplitudeScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  v664 = Dvar_RegisterFloat("handheldCameraImpulseImpactRotPersistenceScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm { vmovss  xmm1, cs:__real@3e051eb8; value }
  DCONST_DVARFLT_handheldCameraImpulseImpactRotPersistenceScale = v664;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_handheldCameraImpulseImpactTransAmplitudeScale = Dvar_RegisterFloat("handheldCameraImpulseImpactTransAmplitudeScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DCONST_DVARFLT_handheldCameraImpulseImpactTransPersistenceScale = Dvar_RegisterFloat("handheldCameraImpulseImpactTransPersistenceScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm { vmovss  xmm1, cs:__real@43fa0000; value }
  DCONST_DVARINT_handheldCameraImpulseImpactDecayType = Dvar_RegisterEnum("handheldCameraImpulseImpactDecayType", cg_shakeImpulseDecayTypes, 1, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_handheldCameraImpulseImpactMax2DSpeed = Dvar_RegisterFloat("handheldCameraImpulseImpactMax2DSpeed", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARBOOL_handheldCameraImpulseFootstepEnabled = Dvar_RegisterBool("handheldCameraImpulseFootstepEnabled", 1, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARINT_handheldCameraImpulseFootstepAttackMs = Dvar_RegisterInt("handheldCameraImpulseFootstepAttackMs", 120, 1, 10000, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm { vmovss  xmm1, cs:__real@3c23d70a; value }
  DCONST_DVARINT_handheldCameraImpulseFootstepDecayMs = Dvar_RegisterInt("handheldCameraImpulseFootstepDecayMs", 650, 1, 10000, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_handheldCameraImpulseFootstepRotAmplitudeScale = Dvar_RegisterFloat("handheldCameraImpulseFootstepRotAmplitudeScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  v680 = Dvar_RegisterFloat("handheldCameraImpulseFootstepRotPersistenceScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm { vmovss  xmm1, cs:__real@3cf5c28f; value }
  DCONST_DVARFLT_handheldCameraImpulseFootstepRotPersistenceScale = v680;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v684 = Dvar_RegisterFloat("handheldCameraImpulseFootstepTransAmplitudeScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm { vmovss  xmm1, cs:__real@3dcccccd; value }
  DCONST_DVARFLT_handheldCameraImpulseFootstepTransAmplitudeScale = v684;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_handheldCameraImpulseFootstepTransPersistenceScale = Dvar_RegisterFloat("handheldCameraImpulseFootstepTransPersistenceScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm { vmovss  xmm1, cs:__real@40400000; value }
  DCONST_DVARINT_handheldCameraImpulseFootstepDecayType = Dvar_RegisterEnum("handheldCameraImpulseFootstepDecayType", cg_shakeImpulseDecayTypes, 2, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v691 = Dvar_RegisterFloat("handheldCameraImpulseFootstepModifierJog", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm { vmovss  xmm1, cs:__real@40800000; value }
  DCONST_DVARFLT_handheldCameraImpulseFootstepModifierJog = v691;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_handheldCameraImpulseFootstepModifierSprint = Dvar_RegisterFloat("handheldCameraImpulseFootstepModifierSprint", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARBOOL_advancedSwayDebug = Dvar_RegisterBool("advancedSwayDebug", 0, 0x40004u, "Enables Advanced Sway debug displays.");
  DCONST_DVARBOOL_advancedSwayViewmodelSmoothingEnabled = Dvar_RegisterBool("advancedSwayViewmodelSmoothingEnabled", 1, 0x40004u, "Enables viewmodel smoothing.");
  DCONST_DVARBOOL_advancedSwayViewmodelSmoothingEnabled_mouse = Dvar_RegisterBool("advancedSwayViewmodelSmoothingEnabled_mouse", 0, 0x40004u, "Enables viewmodel smoothing while controlling the game with a mouse.");
  DCONST_DVARBOOL_advancedSwayGunTorsoSpringDamperEnabled = Dvar_RegisterBool("advancedSwayGunTorsoSpringDamperEnabled", 1, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARBOOL_advancedSwayGunDirEnabled = Dvar_RegisterBool("advancedSwayGunDirEnabled", 1, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARBOOL_advancedSwayGunDirSpringDamperEnabled = Dvar_RegisterBool("advancedSwayGunDirSpringDamperEnabled", 1, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARBOOL_advancedSwayEnabledSpectate = Dvar_RegisterBool("advancedSwayEnabledSpectate", 1, 0x40004u, "Whether to use advanced weapon sway in killcam and spectate modes.");
  __asm { vmovss  xmm1, cs:__real@41f00000; value }
  DCONST_DVARBOOL_smoothCameraEnabled = Dvar_RegisterBool("smoothCameraEnabled", 0, 0x40004u, "Enables camera smoothing.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_smoothCameraSpeed = Dvar_RegisterFloat("smoothCameraSpeed", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Camera smoothing rate (radians/sec) per radian of displacement from goal.");
  __asm { vmovss  xmm1, cs:__real@425c0000; value }
  DCONST_DVARBOOL_smoothCameraEnabledSpectate = Dvar_RegisterBool("smoothCameraEnabledSpectate", 0, 0x40004u, "Enables camera smoothing while in killcam or spectator mode.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v701 = Dvar_RegisterFloat("smoothCameraSpeedSpectate", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Camera smoothing rate (radians/sec) per radian of displacement from goal.  Value applied while in killcam or spectator mode.");
  __asm
  {
    vmovss  xmm3, cs:__real@43340000; max
    vmovss  xmm1, cs:__real@420c0000; value
  }
  DCONST_DVARFLT_smoothCameraSpeedSpectate = v701;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v705 = Dvar_RegisterFloat("smoothClampAngle", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "For camera and viewmodel smoothing, maximum angular displacement between goal and current orientations.");
  __asm
  {
    vmovss  xmm7, cs:__real@42820000
    vmovss  xmm3, cs:__real@432a0000; max
    vmovss  xmm2, cs:__real@40a00000; min
  }
  DCONST_DVARFLT_smoothClampAngle = v705;
  __asm { vmovaps xmm1, xmm7; value }
  v710 = Dvar_RegisterFloat("MRNKTKLLKP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Base hip FOV. When set to a value different than 65, hip FOV becomes this value and the ADS zoom FOV is scaled.");
  __asm
  {
    vmovss  xmm6, cs:__real@42c80000
    vmovss  xmm1, cs:__real@41f00000; value
  }
  DVARFLT_cg_targetBaseFov = v710;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_targetBaseFovDecreaseStopAt = Dvar_RegisterFloat("cg_targetBaseFovDecreaseStopAt", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  v715 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v715 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm { vmovss  xmm1, cs:__real@3e99999a; value }
  DCONST_DVARMPBOOL_cg_corpseFade_enabled = Dvar_RegisterBool("NQONMTOOTS", 1, v715, "Enables the corpse fade system.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_corpseFade_time = Dvar_RegisterFloat("cg_corpseFade_time", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Amount of time for a full corpse fade to elapse (seconds).");
  DCONST_DVARBOOL_cg_corpseFade_removeDObjWhenComplete = Dvar_RegisterBool("cg_corpseFade_removeDObjWhenComplete", 1, 0x40004u, "Whether the DObj should be completely removed from the scene when the model is completely faded out.  Improves rendering performance but may have other implications (shadow pop, material streaming, etc.)");
  v719 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v719 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm1, cs:__real@42000000; value
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARMPFLT_cg_corpseFade_outDistanceStart_ragdoll = Dvar_RegisterFloat("NQLPNORONS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v719, "Distance from corpse where it will begin to disappear from view.  For entities controlled by the ragdoll system.");
  v723 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v723 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm1, cs:__real@42280000; value
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARMPFLT_cg_corpseFade_inDistanceStart_ragdoll = Dvar_RegisterFloat("NQTLQOTLL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v723, "Distance from corpse where it will begin to fade back in.  For entities controlled by the ragdoll system.");
  v727 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v727 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm1, cs:__real@42480000; value
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARMPFLT_cg_corpseFade_outDistanceStart_scriptmodel = Dvar_RegisterFloat("MPOOMRMSML", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v727, "Distance from corpse where it will begin to disappear from view.  For scriptmodel entities.");
  v731 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v731 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm1, cs:__real@42700000; value
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARMPFLT_cg_corpseFade_inDistanceStart_scriptmodel = Dvar_RegisterFloat("LROTTMQLQO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v731, "Distance from corpse where it will begin to fade back in.  For scriptmodel entities.");
  DCONST_DVARBOOL_cg_corpseFade_debug = Dvar_RegisterBool("cg_corpseFade_debug", 0, 0x40004u, "Enables a debug display for the corpse fade system.");
  DCONST_DVARBOOL_helmetCamForceEnable = Dvar_RegisterBool("helmetCamForceEnable", 0, 0x40004u, "If true, forces the helmet cam to be enabled this client.");
  DCONST_DVARBOOL_helmetCamFollowEnabled = Dvar_RegisterBool("helmetCamFollowEnabled", 0, 0x40004u, "If true, permits switching to the helmet cam while spectating another player.");
  __asm
  {
    vmovss  xmm3, cs:__real@42b40000; max
    vmovss  xmm1, cs:__real@42200000; value
  }
  DCONST_DVARBOOL_helmetCamDrawHelmet = Dvar_RegisterBool("helmetCamDrawHelmet", 1, 0x40004u, "If true, will draw the helmet on-screen while helmet action cam is enabled.");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DCONST_DVARFLT_spectatorMaxPitch3p = Dvar_RegisterFloat("spectatorMaxPitch3p", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max pitch when spectating in third person.");
  DCONST_DVARBOOL_cg_resetDoorStateWhenRespawnPlayer = Dvar_RegisterBool("cg_resetDoorStateWhenRespawnPlayer", 1, 0x40004u, "If true, reset the door states when respawning a player.");
  DCONST_DVARBOOL_cg_crosshairTraceAsync = Dvar_RegisterBool("cg_crosshairTraceAsync", 1, 0x40004u, "Enable run crosshair trace asynchronously.");
  DVARINT_hud_health_min_fully_healed = Dvar_RegisterInt("LSQQNTRKKL", 135, 0, 1000, 4u, "Minimum health to be considered fully healed, if this is above the max health, then we will use the max health");
  DVARBOOL_cg_drawLUIObjectives = Dvar_RegisterBool("NLNLNLKNQM", 1, 0, "Draw objectives using the LUI system (in MP and SP). Requires LUI Reload to take effect.");
  __asm { vmovss  xmm0, cs:__real@c2c80000 }
  DVARBOOL_cg_trigger_draw = Dvar_RegisterBool("MQRMRRPRTR", 0, 4u, "draw the shape of the triggers");
  __asm
  {
    vmovss  [rsp+178h+flags], xmm6
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  dword ptr [rsp+178h+fmt], xmm0
  }
  DVARVEC3_rc_override = Dvar_RegisterVec3("NOPQNTOPMR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmts, flagsm, 4u, "override for character rotation offset");
  DVARBOOL_rc_draw_axis = Dvar_RegisterBool("NNPQSPTPL", 0, 4u, "Draw to the screen the axis of rotation of the character");
  DVARBOOL_cg_useplayerbreathsys = Dvar_RegisterBool("NOOPRPQTQN", 0, 0x40u, "Use the new player breath system");
  DCONST_DVARINT_cg_playerbreath_shot_recov_time = Dvar_RegisterInt("cg_playerbreath_shot_recov_time", 600, 0, 10000, 0x40004u, "Minimum amount of time in milliseconds player must be firing before a shot recovery breath sound will be played");
  DCONST_DVARBOOL_cg_playerbreath_debug = Dvar_RegisterBool("cg_playerbreath_debug", 0, 0x40004u, "enables the player breath debug overlay");
  DCONST_DVARINT_cg_playerbreath_jump_cooldown_time = Dvar_RegisterInt("cg_playerbreath_jump_cooldown_time", 5000, 0, 10000, 0x40004u, "Minimum amount of time in milliseconds in from the last jump before playing another jump sound");
  __asm
  {
    vmovss  xmm3, cs:__real@43480000; max
    vmovss  xmm1, cs:__real@4205999a; value
  }
  DCONST_DVARBOOL_snd_autoSim = Dvar_RegisterBool("snd_autoSim", 1, 0x40004u, "turn on client side simulation of automatic gun sounds");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DCONST_DVARFLT_snd_autoSim_predictWindowMs = Dvar_RegisterFloat("snd_autoSim_predictWindowMs", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The sounds should be queued before the actual firing time. This value defines the warm up time for the sound effect.");
  DCONST_DVARINT_snd_autoSim_ssc = Dvar_RegisterInt("snd_autoSim_ssc", 150, 0, 300, 0x40004u, "The fire rate threshold of when to use single shot correction");
  DCONST_DVARBOOL_cg_snd_debugwhizby = Dvar_RegisterBool("cg_snd_debugwhizby", 0, 0x40004u, "turn on printing of whizby speed warnings");
  __asm
  {
    vmovss  xmm1, cs:__real@43b40000; value
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm14; min
  }
  v748 = Dvar_RegisterFloat("LQSRRTOKNN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Height of the cone check to play ceiling footstep audio on the local client.");
  __asm { vmovss  xmm1, cs:__real@450ca000; value }
  DVARFLT_cg_ceiling_footstep_coneHeight = v748;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm14; min
  }
  DVARFLT_cg_ceiling_footstep_coneRadius = Dvar_RegisterFloat("OLPQMMPMMM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Radius of the cone check to play ceiling footstep audio on the local client.");
  DCONST_DVARBOOL_cg_default_zone_is_exterior = Dvar_RegisterBool("cg_default_zone_is_exterior", 1, 0x40004u, "Forces default audio script zones to be considered exterior areas for the occlusion system");
  DCONST_DVARINT_snd_footstep_debug_duration = Dvar_RegisterInt("snd_footstep_debug_duration", 300, 0, 0x7FFFFFFF, 0x40004u, "Number of frames to draw final debug display for footsteps under snd_footstep_debug.");
  DCONST_DVARINT_snd_footstep_debug_finish_max_remaining = Dvar_RegisterInt("snd_footstep_debug_finish_max_remaining", 75, 0, 0x7FFFFFFF, 0x40004u, "How early a footstep sound can be killed but still considered 'finished' (milliseconds).");
  DCONST_DVARBOOL_snd_footstep_debug_asserts = Dvar_RegisterBool("snd_footstep_debug_asserts", 0, 0x40004u, "Whether to emit asserts upon internal failures in footstep tracking logic.");
  __asm
  {
    vmovss  xmm3, cs:__real@42700000; max
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@40800000; value
  }
  DCONST_DVARBOOL_snd_footstep_debug_alias = Dvar_RegisterBool("snd_footstep_debug_alias", 0, 0x40004u, "Whether to draw the sound alias in some in-world displays.");
  v755 = Dvar_RegisterFloat("compassRadarUpdateTime", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Time between radar updates for the normal radar mode");
  __asm
  {
    vmovss  xmm6, cs:__real@3dcccccd
    vmovss  xmm3, cs:__real@42700000; max
    vmovss  xmm1, cs:__real@40000000; value
  }
  DCONST_DVARFLT_compassRadarUpdateTime = v755;
  __asm { vmovaps xmm2, xmm6; min }
  v760 = Dvar_RegisterFloat("compassFastRadarUpdateTime", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Time between radar updates for the fast radar mode");
  __asm
  {
    vmovss  xmm3, cs:__real@42700000; max
    vmovss  xmm1, cs:__real@41000000; value
  }
  DCONST_DVARFLT_compassFastRadarUpdateTime = v760;
  __asm { vmovaps xmm2, xmm6; min }
  DCONST_DVARFLT_compassSlowRadarUpdateTime = Dvar_RegisterFloat("compassSlowRadarUpdateTime", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Time between radar updates for the slow radar mode");
  __asm
  {
    vmovss  xmm1, cs:__real@42c00000; value
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_compassEnemyHeightDelta = Dvar_RegisterFloat("compassEnemyHeightDelta", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The minimum height difference at which an enemy's relative height will be displayed");
  DCONST_DVARBOOL_compassEyesOnEnabled = Dvar_RegisterBool("compassEyesOnEnabled", 1, 0x40004u, "Enable eyes-on radar on the minimap.");
  DCONST_DVARBOOL_compassPortableRadarOwnerOnly = Dvar_RegisterBool("compassPortableRadarOwnerOnly", 1, 0x40004u, "Should portable radar pings be shown to only the owner (or to the whole team)");
  DCONST_DVARBOOL_compassEnemyRedBlipPerkFadeEnabled = Dvar_RegisterBool("compassEnemyRedBlipPerkFadeEnabled", 1, 0x40004u, "Enable fade-out of enemy blips drawn due to the redblip perk");
  __asm
  {
    vmovss  xmm3, cs:__real@42700000; max
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@40800000; value
  }
  DCONST_DVARBOOL_compassEnemyFootstepEnabled = Dvar_RegisterBool("compassEnemyFootstepEnabled", 0, 0x40004u, "Enables enemies showing on the compass because of moving rapidly nearby.");
  v770 = Dvar_RegisterFloat("LONMLLOSKQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "How long an enemy is visible on the compass after it is detected by radar");
  __asm
  {
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@3ecccccd; value
  }
  DVARFLT_compassRadarPingFadeTime = v770;
  __asm { vmovaps xmm3, xmm8; max }
  DVARFLT_compassRadarLineThickness = Dvar_RegisterFloat("MNLRLKNQNR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Thickness, relative to the compass size, of the radar texture that sweeps across the map");
  __asm { vmovss  xmm1, cs:__real@4cbebc20; value }
  DVARBOOL_compassShowFire = Dvar_RegisterBool("LOSPTTQRSQ", 1, 4u, "Show enemy weapon pings on the compass/minimap");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_compassShowFireBrMaxDistSq = Dvar_RegisterFloat("MTQTTTMSPS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "If the player who fired their weapon is further than this squared distance, the fire is not shown in the radar. This is only applicable in BR/DMZ style big map modes and can be disabled by setting the value to 0.0f.");
  DVARBOOL_compass = Dvar_RegisterBool("compass", 1, 0x40u, "Display Compass");
  v777 = Com_GameMode_GetActiveGameMode();
  _ECX = 0;
  _EAX = v777 == 1;
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, ecx
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm0, cs:__real@40000000
    vmovss  xmm1, cs:__real@3fe00000
    vblendvps xmm1, xmm0, xmm1, xmm2; value
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm3, xmm11; max
  }
  v788 = Dvar_RegisterFloat("compassSoundPingDuration", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Duration of minimap ping when firing an unsilenced weapon (seconds).");
  __asm { vmovss  xmm1, cs:__real@40000000; value }
  DCONST_DVARMPSPFLT_compassSoundPingDuration = v788;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v792 = Dvar_RegisterFloat("compassSilencedSoundPingDuration", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Duration of minimap ping when firing a silenced weapon (seconds).");
  __asm { vmovss  xmm2, cs:__real@3c23d70a; min }
  DCONST_DVARFLT_compassSilencedSoundPingDuration = v792;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm1, xmm13; value
  }
  DVARFLT_compassSoundPingFadeTime = Dvar_RegisterFloat("LSQSKKLSQL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The time in seconds for the sound overlay on the compass to fade");
  __asm { vmovss  xmm8, cs:__real@41960000 }
  DVARBOOL_compassClampIcons = Dvar_RegisterBool("NPSOQNKNLS", 1, 4u, "If true, friendlies and enemy pings clamp to the edge of the radar.  If false, they disappear off the edge.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  DVARFLT_compassPlayerWidth = Dvar_RegisterFloat("NSROOQNTRQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The size of the player's icon on the compass");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v803 = Dvar_RegisterFloat("MNMOLKRRPN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The size of the player's icon on the compass");
  __asm
  {
    vmovss  xmm3, cs:__real@43c80000; z
    vmovss  xmm2, cs:__real@45606000; y
    vmovss  xmm1, cs:__real@44390000; x
  }
  DVARFLT_compassPlayerHeight = v803;
  __asm
  {
    vmovss  [rsp+178h+flags], xmm11
    vmovss  dword ptr [rsp+178h+fmt], xmm10
  }
  v807 = Dvar_RegisterVec3("LTLQTRKRQR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtt, flagsn, 0, "x = North-South coord base value, \ny = East-West coord base value, \nz = scale (game units per coord unit)");
  __asm { vmovss  xmm1, cs:__real@42140000; value }
  DVARVEC3_compassCoords = v807;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_compassECoordCutoff = Dvar_RegisterFloat("LRPSTLOMSK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Left cutoff for the scrolling east-west coords");
  DVARBOOL_compassRotation = Dvar_RegisterBool("MLOSPOTNPN", 1, 0x40u, "Style of compass");
  __asm
  {
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@3f59999a; value
    vmovaps xmm3, xmm14; max
  }
  v814 = Dvar_RegisterFloat("MMRQOORMSS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "How far the tickertape should stretch from its center.");
  __asm
  {
    vmovss  xmm3, cs:__real@41800000; max
    vmovss  xmm1, cs:__real@40400000; value
  }
  DVARFLT_compassTickertapeStretch = v814;
  __asm { vmovaps xmm2, xmm14; min }
  v818 = Dvar_RegisterFloat("LSPNSMSRMP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Thickness of SDF circle outline.");
  __asm { vmovss  xmm3, cs:__real@41800000; max }
  DVARFLT_compassCircleOutlineThickness = v818;
  __asm
  {
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm13; value
  }
  v822 = Dvar_RegisterFloat("compassCircleTravelLineThickness", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Thickness of the travel line pointing player toward boundary of circle.");
  __asm { vmovss  xmm1, cs:__real@41600000; value }
  DCONST_DVARFLT_compassCircleTravelLineThickness = v822;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v826 = Dvar_RegisterFloat("MLSNKQTKQK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The size of the objective on the compass");
  __asm { vmovss  xmm1, cs:__real@41600000; value }
  DVARFLT_compassObjectiveWidth = v826;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v830 = Dvar_RegisterFloat("LOTTTLOMOP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The size of the objective on the compass");
  __asm { vmovss  xmm1, cs:__real@41300000; value }
  DVARFLT_compassObjectiveHeight = v830;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v834 = Dvar_RegisterFloat("compassObjectiveWidthSmall", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The small size of the objective on the compass.");
  __asm { vmovss  xmm1, cs:__real@41300000; value }
  DCONST_DVARFLT_compassObjectiveWidthSmall = v834;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_compassObjectiveHeightSmall = Dvar_RegisterFloat("compassObjectiveHeightSmall", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The small size of the objective on the compass.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  DVARFLT_compassObjectiveWidthLarge = Dvar_RegisterFloat("MQQPKORPML", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The large size of the objective on the compass");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  DVARFLT_compassObjectiveHeightLarge = Dvar_RegisterFloat("MSSOQMMMKO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The large size of the objective on the compass");
  __asm
  {
    vmovss  xmm1, cs:__real@41e00000; value
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v847 = Dvar_RegisterFloat("NOSPSPKLQT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The medium size of the objective on the compass");
  __asm { vmovss  xmm1, cs:__real@41e00000; value }
  DVARFLT_compassObjectiveWidthMedium = v847;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v851 = Dvar_RegisterFloat("LSPTRONQSS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The medium size of the objective on the compass");
  __asm { vmovss  xmm1, cs:__real@42000000; value }
  DVARFLT_compassObjectiveHeightMedium = v851;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v855 = Dvar_RegisterFloat("MSKNSKROQR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The head icon size of the objective on the compass");
  __asm { vmovss  xmm1, cs:__real@42000000; value }
  DVARFLT_compassObjectiveWidthHeadIcon = v855;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v859 = Dvar_RegisterFloat("NKONSTLPQM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The head icon size of the objective on the compass");
  __asm
  {
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@40133333; value
  }
  DVARFLT_compassObjectiveHeightHeadIcon = v859;
  __asm { vmovaps xmm3, xmm11; max }
  v863 = Dvar_RegisterFloat("NKQKOQOKKL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "The scale multiplier for icons while MLG Spectator on the compass");
  __asm
  {
    vmovss  xmm7, cs:__real@7f7fffff
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@40000000; value
  }
  DVARFLT_compassIconMLGSpectatorScale = v863;
  __asm { vmovaps xmm3, xmm7; max }
  v868 = Dvar_RegisterFloat("LTKLSQSTSL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "The scale multiplier for vehicle icons while MLG Spectator on the compass");
  __asm
  {
    vmovss  xmm6, cs:__real@41200000
    vmovss  xmm1, cs:__real@3e800000; value
  }
  DVARFLT_compassIconMLGSpectatorVehicleScale = v868;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_compassIconMLGSpectatorLargeMapObjectiveSize = Dvar_RegisterFloat("LRTSQPMKPK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Increase the scale of objective icons on the large map");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v876 = Dvar_RegisterFloat("MKOTOLNKNP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "Circle that help correctly position the player number inside the arrow not matter its rotation");
  __asm { vmovss  xmm1, cs:__real@41880000; value }
  DVARFLT_compassPlayerNumberCircleRadius = v876;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_compassPlayerNumberObjectiveCircleRadius = Dvar_RegisterFloat("SRNQLTNRM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "Circle that help correctly position the player number inside the objective circle not matter its rotation");
  __asm
  {
    vmovss  xmm1, cs:__real@41800000; value
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v883 = Dvar_RegisterFloat("LQLQPLLRKS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "Radius of the arrow in objective holder for non spectated players holding the objective in CoDCaster");
  __asm { vmovss  xmm1, cs:__real@3f4ccccd; value }
  DVARFLT_compassPlayerObjectiveArrowRadius = v883;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v887 = Dvar_RegisterFloat("NSNPNTOTKK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "size of the circle in objective holder for players holding the objective in CoDCaster");
  __asm { vmovss  xmm1, cs:__real@3f4ccccd; value }
  DVARFLT_compassPlayerObjectiveHolderCicleSize = v887;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v891 = Dvar_RegisterFloat("LRKNOPQMTN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "size of the small arrow in objective holder for players holding the objective in CoDCaster");
  __asm { vmovss  xmm1, cs:__real@3f933333; value }
  DVARFLT_compassPlayerObjectiveHolderArrowSize = v891;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v895 = Dvar_RegisterFloat("SQRRQMQKR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "size of the whole arrow in objective holder for players holding the objective in CoDCaster");
  __asm { vmovss  xmm1, cs:__real@41980000; value }
  DVARFLT_compassPlayerObjectiveHolderOverallSize = v895;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v899 = Dvar_RegisterFloat("MMQORROKKL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "Radius of the arrow in objective holder for spectating players holding the objective in CoDCaster");
  __asm { vmovss  xmm1, cs:__real@41b00000; value }
  DVARFLT_compassSpectatedPlayerObjectiveArrowRadius = v899;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v903 = Dvar_RegisterFloat("MPMLTPNTKP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "width offset for the player number text box, the larger the number the more rightwards the box goes");
  __asm { vmovss  xmm1, cs:__real@41a00000; value }
  DVARFLT_compassPlayerNumberTextXOffset = v903;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v907 = Dvar_RegisterFloat("LKNNNNRNQM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "width offset for the player number text box for objective holders, the larger the number the more rightwards the box goes");
  __asm { vmovss  xmm1, cs:__real@40400000; value }
  DVARFLT_compassObjectivePlayerNumberTextXOffset = v907;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v911 = Dvar_RegisterFloat("MLSSPKORT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "width offset for the player jersey number text box, the larger the number the more rightwards the box goes");
  __asm
  {
    vmovss  xmm2, cs:__real@ff7fffff; min
    vmovss  xmm1, cs:__real@40000000; value
  }
  DVARFLT_compassPlayerJerseyNumberTextXOffset = v911;
  __asm { vmovaps xmm3, xmm7; max }
  DVARFLT_compassPlayerNumberTextYOffset = Dvar_RegisterFloat("OLRNNTSOPQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "height offset for the player number text box, the larger the number the more downwards the box goes");
  __asm
  {
    vmovss  xmm2, cs:__real@ff7fffff; min
    vmovss  xmm1, cs:__real@c1b80000; value
    vmovaps xmm3, xmm7; max
  }
  v918 = Dvar_RegisterFloat("LKRKQRPQN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "height offset for the player number text box for objective holders, the larger the number the more downwards the box goes");
  __asm
  {
    vmovss  xmm3, cs:__real@40000000; max
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@3f400000; value
  }
  DVARFLT_compassObjectivePlayerNumberTextYOffset = v918;
  v922 = Dvar_RegisterFloat("LTSQQPOLKS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "How much a vehicle should be scaled up or down for CoDCaster maps, viewing the partial map");
  __asm
  {
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@3f4ccccd; value
  }
  DVARFLT_compassMLGMapVehicleScalePartial = v922;
  __asm { vmovaps xmm3, xmm14; max }
  v926 = Dvar_RegisterFloat("MNTSNKNRM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "How opaque the CoDCaster arrow should be on the full map");
  __asm
  {
    vmovss  xmm14, cs:__real@40e00000
    vmovss  xmm3, cs:__real@42480000; max
    vmovss  xmm2, cs:__real@3c23d70a; min
  }
  DVARFLT_compassMLGLargeMapInnerArrowOpacity = v926;
  __asm { vmovaps xmm1, xmm14; value }
  v931 = Dvar_RegisterFloat("LLPQMMPKRQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Set the text width size of player numbers");
  __asm
  {
    vmovss  xmm3, cs:__real@42480000; max
    vmovss  xmm2, cs:__real@3c23d70a; min
  }
  DVARFLT_compassMLGPlayerNumberTextWidth = v931;
  __asm { vmovaps xmm1, xmm14; value }
  v935 = Dvar_RegisterFloat("NPNPPPSTTP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Set the text height of player numbers");
  __asm
  {
    vmovss  xmm3, cs:__real@42480000; max
    vmovss  xmm2, cs:__real@3c23d70a; min
  }
  DVARFLT_compassMLGPlayerNumberFontHeight = v935;
  __asm { vmovaps xmm1, xmm6; value }
  v939 = Dvar_RegisterFloat("OKKKLTTOPT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Set the text width size of player numbers for objective holders");
  __asm
  {
    vmovss  xmm3, cs:__real@42480000; max
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@41000000; value
  }
  DVARFLT_compassMLGPlayerObjectiveNumberTextWidth = v939;
  v943 = Dvar_RegisterFloat("LQRSLPKKKS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Set the text height of player numbers for objective holders");
  __asm { vmovss  xmm1, cs:__real@45000000; value }
  DVARFLT_compassMLGPlayerObjectiveNumberFontHeight = v943;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm6, cs:__real@3f800000
  }
  DVARFLT_compassObjectiveMaxRange = Dvar_RegisterFloat("LRNSPTNQOT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The maximum range at which an objective is visible on the compass");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  v951 = Dvar_RegisterFloat("MROOLSPRTQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The minimum alpha for an objective at the edge of the compass");
  __asm { vmovss  xmm1, cs:__real@41800000; value }
  DVARFLT_compassObjectiveMinAlpha = v951;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v955 = Dvar_RegisterFloat("NOTLNTRMTL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The size of the objective on the full map");
  __asm { vmovss  xmm1, cs:__real@41800000; value }
  DVARFLT_compassObjectiveIconWidth = v955;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v959 = Dvar_RegisterFloat("NMKNORNKMM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The size of the objective on the full map");
  __asm { vmovss  xmm1, cs:__real@42000000; value }
  DVARFLT_compassObjectiveIconHeight = v959;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v963 = Dvar_RegisterFloat("NOONSLPLPS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The medium size of the objective on the full map");
  __asm { vmovss  xmm1, cs:__real@42000000; value }
  DVARFLT_compassObjectiveIconWidthMedium = v963;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v967 = Dvar_RegisterFloat("LTTQPRLRLP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The medium size of the objective on the full map");
  __asm { vmovss  xmm1, cs:__real@42800000; value }
  DVARFLT_compassObjectiveIconHeightMedium = v967;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v971 = Dvar_RegisterFloat("LQNRMLNKLK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The large size of the objective on the full map");
  __asm { vmovss  xmm1, cs:__real@42800000; value }
  DVARFLT_compassObjectiveIconWidthLarge = v971;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v975 = Dvar_RegisterFloat("RMKORNSTL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The large size of the objective on the full map");
  __asm { vmovss  xmm1, cs:__real@42000000; value }
  DVARFLT_compassObjectiveIconHeightLarge = v975;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v979 = Dvar_RegisterFloat("LRPKLLSRNM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The head icon size of the objective on the full map");
  __asm { vmovss  xmm1, cs:__real@42000000; value }
  DVARFLT_compassObjectiveIconWidthHeadIcon = v979;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v983 = Dvar_RegisterFloat("MNTRQNQNML", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The head icon size of the objective on the full map");
  __asm { vmovss  xmm1, cs:__real@41200000; value }
  DVARFLT_compassObjectiveIconHeightHeadIcon = v983;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v987 = Dvar_RegisterFloat("compassObjectiveIconWidthSmall", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The small size of the objective on the compass.");
  __asm { vmovss  xmm1, cs:__real@41200000; value }
  DCONST_DVARFLT_compassObjectiveIconWidthSmall = v987;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v991 = Dvar_RegisterFloat("compassObjectiveIconHeightSmall", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The small size of the objective on the compass.");
  __asm { vmovss  xmm1, cs:__real@42000000; value }
  DCONST_DVARFLT_compassObjectiveIconHeightSmall = v991;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v995 = Dvar_RegisterFloat("STPKKTPSR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The size of the objective on the navbar");
  __asm { vmovss  xmm1, cs:__real@42000000; value }
  DVARFLT_navbarObjectiveIconWidth = v995;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v999 = Dvar_RegisterFloat("LSRRQNNMNS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The size of the objective on the navbar");
  __asm
  {
    vmovss  xmm3, cs:__real@3f000000; max
    vmovss  xmm2, cs:__real@3e4ccccd; min
    vmovss  xmm1, cs:__real@3ecccccd; value
  }
  DVARFLT_navbarObjectiveIconHeight = v999;
  v1003 = Dvar_RegisterFloat("navbarObjectiveIconSizeScalar", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The scalar for the objective icon size, this value is a percentage of the navbar element's height.");
  __asm { vmovss  xmm1, cs:__real@3d2e147b; value }
  DCONST_DVARFLT_navbarObjectiveIconSizeScalar = v1003;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1007 = Dvar_RegisterFloat("navbarEnemyIconAnimationRange", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The range over which the enemy ping animation will play, normalized");
  __asm
  {
    vmovss  xmm3, cs:__real@42480000; max
    vmovss  xmm1, cs:__real@3faccccd; value
  }
  DCONST_DVARFLT_navbarEnemyIconAnimationRange = v1007;
  __asm { vmovaps xmm2, xmm6; min }
  v1011 = Dvar_RegisterFloat("navbarEnemyIconMaxScalar", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "When an enemy is pinged the enemy icon size will increase by this scale factor and return to normal scale over a period of time.");
  __asm
  {
    vmovss  xmm3, cs:__real@42480000; max
    vmovss  xmm1, cs:__real@3ff33333; value
  }
  DCONST_DVARFLT_navbarEnemyIconMaxScalar = v1011;
  __asm { vmovaps xmm2, xmm6; min }
  v1015 = Dvar_RegisterFloat("navbarEnemyIconBackingMaxScalar", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The max scale of the background image on the enemy pinged icon during the ping animation.");
  __asm
  {
    vmovss  xmm2, cs:__real@3e54fdf4; y
    vmovss  xmm1, cs:__real@3eef1aa0; x
  }
  DCONST_DVARFLT_navbarEnemyIconBackingMaxScalar = v1015;
  __asm
  {
    vmovss  [rsp+178h+flags], xmm6
    vmovaps xmm3, xmm2; z
    vmovss  dword ptr [rsp+178h+fmt], xmm10
  }
  DCONST_DVARVEC3_navbarEnemyIconBackingColor = Dvar_RegisterVec3("navbarEnemyIconBackingColor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtu, flagso, 0x40004u, "Color of the background image on the enemy pinged icon");
  __asm
  {
    vmovss  xmm3, cs:__real@3d810625; z
    vmovss  xmm2, cs:__real@3dd91687; y
  }
  DCONST_DVARBOOL_navbarEnemyIconAnimPingPong = Dvar_RegisterBool("navbarEnemyIconAnimPingPong", 1, 0x40004u, "If true, the icon will scale up and then scale down when pinged, time is equally divided along the navbarEnemyIconAnimationRange");
  __asm
  {
    vmovss  [rsp+178h+flags], xmm6
    vmovaps xmm1, xmm6; x
    vmovss  dword ptr [rsp+178h+fmt], xmm10
  }
  DCONST_DVARVEC3_navbarEnemyIconColor = Dvar_RegisterVec3("navbarEnemyIconColor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtv, flagsp, 0x40004u, "Color of the enemy icon image on the navbar");
  DCONST_DVARBOOL_navbarUseRoundedCompass = Dvar_RegisterBool("navbarUseRoundedCompass", 1, 0x40004u, "When enabled the navbar compass will be rounded");
  DVARBOOL_compassHideVehicles = Dvar_RegisterBool("MRNRPRPMLK", 0, 0x44u, "When enabled, disables the CG_PLAYER_COMPASS_VEHICLES ownerdraw.");
  __asm { vmovss  xmm1, cs:__real@41700000; value }
  DVARBOOL_compassVehicleUseMapMask = Dvar_RegisterBool("MLNRPTSSQQ", 0, 0, "When enabled, all vehicles will not be pinned to the edges of the minimap by default.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1025 = Dvar_RegisterFloat("RLKSTRLQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The size of the friendly icon on the full map");
  __asm { vmovss  xmm1, cs:__real@41700000; value }
  DVARFLT_cg_hudMapFriendlyWidth = v1025;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1029 = Dvar_RegisterFloat("MPOSSTMTSN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The size of the friendly icon on the full map");
  __asm { vmovss  xmm1, cs:__real@41a00000; value }
  DVARFLT_cg_hudMapFriendlyHeight = v1029;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1033 = Dvar_RegisterFloat("OMLSQKPQMM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The size of the player's icon on the full map");
  __asm { vmovss  xmm1, cs:__real@41a00000; value }
  DVARFLT_cg_hudMapPlayerWidth = v1033;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1037 = Dvar_RegisterFloat("NPTNMOTON", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The size of the player's icon on the full map");
  __asm { vmovss  xmm1, cs:__real@40000000; value }
  DVARFLT_cg_hudMapPlayerHeight = v1037;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cg_hudMapBorderWidth = Dvar_RegisterFloat("RKLKRQNQT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The size of the full map's border, filled by the CG_PLAYER_FULLMAP_BORDER ownerdraw");
  v1041 = Com_GameMode_GetActiveGameMode();
  _ECX = 0;
  __asm { vmovd   xmm1, ecx }
  _EAX = v1041 == 1;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm15, xmm6, xmm2; value
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm3, xmm7; max
  }
  DVARFLT_compassSize = Dvar_RegisterFloat("MKMRRLNRTM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scale the compass");
  v1050 = Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm6, cs:__real@41800000
    vmovaps xmm3, xmm7; max
  }
  _ECX = 0;
  __asm { vmovd   xmm1, ecx }
  _EAX = v1050 == 1;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm8, xmm6, xmm2; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_compassFriendlyWidth = Dvar_RegisterFloat("NOQLNPSLSO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The size of the friendly icon on the compass");
  v1060 = Com_GameMode_GetActiveGameMode();
  __asm { vmovaps xmm3, xmm7; max }
  _ECX = 0;
  __asm { vmovd   xmm1, ecx }
  _EAX = v1060 == 1;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm8, xmm6, xmm2; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1069 = Dvar_RegisterFloat("NPROKNLRML", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The size of the friendly icon on the compass");
  __asm
  {
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@41200000; value
  }
  DVARFLT_compassFriendlyHeight = v1069;
  __asm { vmovaps xmm3, xmm7; max }
  v1073 = Dvar_RegisterFloat("OMLOLKQQOP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "When an objective is closer than this distance (in meters), the icon will not be drawn on the tickertape");
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vmovss  xmm2, cs:__real@3e4ccccd; min
    vmovss  xmm1, cs:__real@3f000000; value
  }
  DVARFLT_compassObjectiveDetailDist = v1073;
  __asm { vmovaps xmm3, xmm8; max }
  DCONST_DVARFLT_compassEnemyIconSizeScalar = Dvar_RegisterFloat("compassEnemyIconSizeScalar", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The scalar for the enemy icon size, this value is a percentage of the navbar element's height");
  __asm
  {
    vmovss  xmm2, cs:__real@3dcccccd; min
    vmovss  xmm1, cs:__real@3e800000; value
  }
  DCONST_DVARBOOL_compassDelayEnabled = Dvar_RegisterBool("compassDelayEnabled", 1, 0x40004u, "If true the compass will have a delay reaching the desired angle when rotating");
  __asm { vmovaps xmm3, xmm8; max }
  DCONST_DVARFLT_compassDelayEase = Dvar_RegisterFloat("compassDelayEase", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "How fast the compass will approach the current rotation of the player");
  __asm
  {
    vmovss  xmm3, cs:__real@42480000; max
    vmovss  xmm1, cs:__real@41200000; value
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm6, cs:__real@40a00000
  }
  DCONST_DVARFLT_compassShrinkFactor = Dvar_RegisterFloat("compassShrinkFactor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "How much the compass will shrink when it is a rounded compass");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  DCONST_DVARFLT_compassBackgroundWidthScalar = Dvar_RegisterFloat("compassBackgroundWidthScalar", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Scales the width of the blackBackground on the compass");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v1091 = Dvar_RegisterFloat("compassMaskScalar", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Scales the width of the side mask on the compass");
  __asm { vmovss  xmm1, cs:__real@3e800000; value }
  DCONST_DVARFLT_compassMaskScalar = v1091;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm6, cs:__real@3e3851ec
  }
  DCONST_DVARFLT_compassCenterMaskScalar = Dvar_RegisterFloat("compassCenterMaskScalar", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Scales the width of the center mask on the compass");
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm8
    vmovss  [rsp+178h+flags], xmm10
    vmovaps xmm3, xmm6; z
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm6; x
    vmovss  dword ptr [rsp+178h+fmt], xmm10
    vmovss  xmm0, cs:__real@3f333333
  }
  DCONST_DVARVEC4_compassBackgroundColor = Dvar_RegisterVec4("compassBackgroundColor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtw, flagsq, descriptione, 0x40004u, "Color of the background on the compass");
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm8
    vmovss  [rsp+178h+flags], xmm10
    vmovaps xmm3, xmm6; z
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm6; x
    vmovss  dword ptr [rsp+178h+fmt], xmm0
  }
  v1103 = Dvar_RegisterVec4("compassTextOutlineColor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtx, flagsr, descriptionf, 0x40004u, "Color of the glow applied to compass heading fonts");
  __asm { vmovss  xmm1, cs:__real@3ec00000; value }
  DCONST_DVARVEC4_compassTextOutlineColor = v1103;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm2, xmm9; min
  }
  v1107 = Dvar_RegisterFloat("compassTextVerticalOffset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Vertical offset of heading text from its default position");
  __asm
  {
    vmovss  xmm10, cs:__real@43960000
    vmovss  xmm1, cs:__real@41800000; value
  }
  DCONST_DVARFLT_compassTextVerticalOffset = v1107;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm8; min
  }
  DCONST_DVARFLT_compassVehicleSizeMini = Dvar_RegisterFloat("compassVehicleSizeMini", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The size of mini vehicle icons on the tacmap");
  __asm
  {
    vmovss  xmm2, cs:__real@3a83126f; min
    vmovss  xmm1, cs:__real@469c4000; value
    vmovaps xmm3, xmm7; max
  }
  v1115 = Dvar_RegisterFloat("radialSensorRange", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The maximum range from the player in world space that objects will be shown on the radial sensor before it is clamped");
  __asm { vmovss  xmm1, cs:__real@42800000; value }
  DCONST_DVARFLT_radialSensorRange = v1115;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm8; min
  }
  v1119 = Dvar_RegisterFloat("radialSensorIconSize", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The size of icons that appear on the radial sensor");
  __asm
  {
    vmovss  xmm3, cs:__real@461c4000; max
    vmovss  xmm1, cs:__real@442f0000; value
  }
  DCONST_DVARFLT_radialSensorIconSize = v1119;
  __asm { vmovaps xmm2, xmm8; min }
  DCONST_DVARFLT_radialSensorSweepRadius = Dvar_RegisterFloat("radialSensorSweepRadius", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The max radius of the sweep circle");
  DCONST_DVARINT_radialSensorSweepDuration = Dvar_RegisterInt("radialSensorSweepDuration", 700, 1, 50000, 0x40004u, "How long in ms it takes the sweep to reach the sweep diameter");
  DCONST_DVARINT_radialSensorNextPingTime = Dvar_RegisterInt("radialSensorNextPingTime", 2000, 1, 50000, 0x40004u, "Wait time between radial pings");
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm8
    vxorps  xmm7, xmm7, xmm7
    vmovss  [rsp+178h+flags], xmm7
    vxorps  xmm3, xmm3, xmm3; z
    vmovaps xmm2, xmm8; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+178h+fmt], xmm8
  }
  v1127 = Dvar_RegisterVec4("radialSensorIconColor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmty, flagss, descriptiong, 0x40004u, "Color of the radial sensor ping icons");
  __asm { vmovss  xmm1, cs:__real@3f19999a; value }
  DCONST_DVARVEC4_radialSensorIconColor = v1127;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1131 = Dvar_RegisterFloat("heartbeatSensorAlphaFalloff", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The greater the scalar the faster the ping will reach an alpha of 0 after being sweeped");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@40a00000; value
  }
  DCONST_DVARFLT_heartbeatSensorAlphaFalloff = v1131;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DCONST_DVARFLT_heartbeatSensorEnemyDistanceWarningThreshold = Dvar_RegisterFloat("heartbeatSensorEnemyDistanceWarningThreshold", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The distance at which the text will draw red for the closest nearby enemy ( in meters )");
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm8
    vmovss  [rsp+178h+flags], xmm7
    vmovss  xmm3, cs:__real@3e0f5c29; z
    vmovss  xmm2, cs:__real@3e6b851f; y
    vmovss  xmm1, cs:__real@3f6e147b; x
    vmovss  dword ptr [rsp+178h+fmt], xmm8
  }
  DCONST_DVARVEC4_heartbeatSensorEnemyDistanceWarningColor = Dvar_RegisterVec4("heartbeatSensorEnemyDistanceWarningColor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtz, flagst, descriptionh, 0x40004u, "Color of the text when we are within close enemy threshold distance");
  DCONST_DVARBOOL_hearbeatSensorUseCurrentOrientation = Dvar_RegisterBool("hearbeatSensorUseCurrentOrientation", 1, 0x40004u, "If true, the heartbeatSensor will use the current orientation of the player when drawing enemy blips.");
  __asm
  {
    vmovss  xmm9, cs:__real@7f7fffff
    vmovss  xmm1, cs:__real@44160000; value
  }
  DCONST_DVARINT_heartbeatSensorInitialSweepDelay = Dvar_RegisterInt("heartbeatSensorInitialSweepDelay", 1000, 1, 50000, 0x40004u, "The time in ms we will wait until the first sweep starts on the hearbeat sensor ( mainly to account for draw weapon animation time )");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1142 = Dvar_RegisterFloat("heartbeatSensorMaxPitchRange", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The distance over the pitch value of the pong is interpolated");
  __asm { vmovss  xmm1, cs:__real@40000000; value }
  DCONST_DVARFLT_heartbeatSensorMaxPitchRange = v1142;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1146 = Dvar_RegisterFloat("heartbeatSensorPitchShiftValue", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The pitch value of the pong at closest range, interpolates between 2.0 -> 1.0 over enemy distance");
  __asm { vmovss  xmm1, cs:__real@42300000; value }
  DCONST_DVARFLT_heartbeatSensorPitchShiftValue = v1146;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm8; min
  }
  v1150 = Dvar_RegisterFloat("heartbeatSensorEMPIconSize", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The size of icons that appear on the EMP heartbeat sensor");
  __asm
  {
    vmovss  xmm3, cs:__real@461c4000; max
    vmovss  xmm1, cs:__real@43820000; value
  }
  DCONST_DVARFLT_heartbeatSensorEMPIconSize = v1150;
  __asm { vmovaps xmm2, xmm8; min }
  DCONST_DVARFLT_heartbeatSensorEMPSweepRadius = Dvar_RegisterFloat("heartbeatSensorEMPSweepRadius", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The max radius of the EMP sweep circle");
  DVARINT_heartbeatSensorEMPNextPingTime = Dvar_RegisterInt("NMPRQQMSNN", 1000, 1, 50000, 0, "Wait time between EMP radial pings");
  __asm { vmovss  xmm3, cs:__real@40a00000; max }
  DCONST_DVARINT_heartbeatSensorEMPSweepDuration = Dvar_RegisterInt("heartbeatSensorEMPSweepDuration", 1000, 1, 50000, 0x40004u, "How long in ms it takes the EMP sweep to reach the sweep diameter");
  __asm
  {
    vmovss  xmm6, cs:__real@3dcccccd
    vmovss  xmm1, cs:__real@3f19999a; value
    vmovaps xmm2, xmm6; min
  }
  v1158 = Dvar_RegisterFloat("heartbeatSensorEMPFontScalar", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Scalar that changes the default font size");
  __asm
  {
    vmovss  xmm2, cs:__real@3f59999a; y
    vmovss  xmm1, cs:__real@3f000000; x
  }
  DCONST_DVARFLT_heartbeatSensorEMPFontScalar = v1158;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovss  dword ptr [rsp+178h+fmt], xmm8
  }
  v1162 = Dvar_RegisterVec2("heartbeatSensorEMPDistanceTextOffset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtba, 0x40004u, "The offset for the distance in meters to the closest players. Offsets are scalars relative to element width and height, an offset of 0.5f in the x will be placed halfway along the width of the element");
  __asm
  {
    vmovss  xmm2, cs:__real@3a83126f; min
    vmovss  xmm1, cs:__real@45abe000; value
  }
  DCONST_DVARVEC2_heartbeatSensorEMPDistanceTextOffset = v1162;
  __asm { vmovaps xmm3, xmm9; max }
  v1166 = Dvar_RegisterFloat("heartbeatSensorEMPRange", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The range from the player in world space that objects will be shown on the EMP before it is clamped");
  __asm { vmovss  xmm1, cs:__real@459c4000; value }
  DCONST_DVARFLT_heartbeatSensorEMPRange = v1166;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1170 = Dvar_RegisterFloat("LQPMKKRNTQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Anything past this difference will not be drawn");
  __asm { vmovss  xmm1, cs:__real@42a00000; value }
  DVARFLT_heartbeatSensorEMPMaxDrawRange = v1170;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm8; min
  }
  v1174 = Dvar_RegisterFloat("heartbeatSensorTabletIconSize", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The size of icons that appear on the Tablet heartbeat sensor");
  __asm
  {
    vmovss  xmm3, cs:__real@461c4000; max
    vmovss  xmm1, cs:__real@44098000; value
  }
  DCONST_DVARFLT_heartbeatSensorTabletIconSize = v1174;
  __asm { vmovaps xmm2, xmm8; min }
  DCONST_DVARFLT_heartbeatSensorTabletSweepRadius = Dvar_RegisterFloat("heartbeatSensorTabletSweepRadius", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The max radius of the Tablet sweep circle");
  DVARINT_heartbeatSensorTabletNextPingTime = Dvar_RegisterInt("NSKNMSMOLP", 1000, 1, 50000, 0, "Wait time between Tablet radial pings");
  __asm { vmovss  xmm3, cs:__real@40a00000; max }
  DCONST_DVARINT_heartbeatSensorTabletSweepDuration = Dvar_RegisterInt("heartbeatSensorTabletSweepDuration", 1000, 1, 50000, 0x40004u, "How long in ms it takes the Tablet sweep to reach the sweep diameter");
  __asm
  {
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm15; value
  }
  DCONST_DVARFLT_heartbeatSensorTabletFontScalar = Dvar_RegisterFloat("heartbeatSensorTabletFontScalar", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Scalar that changes the default font size");
  __asm
  {
    vmovss  xmm2, cs:__real@3f4ccccd; y
    vmovss  xmm1, cs:__real@3f000000; x
    vxorps  xmm3, xmm3, xmm3; min
    vmovss  dword ptr [rsp+178h+fmt], xmm8
  }
  v1184 = Dvar_RegisterVec2("heartbeatSensorTabletDistanceTextOffset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbb, 0x40004u, "The offset for the distance in meters to the closest players. Offsets are scalars relative to element width and height, an offset of 0.5f in the x will be placed halfway along the width of the element");
  __asm
  {
    vmovss  xmm2, cs:__real@3a83126f; min
    vmovss  xmm1, cs:__real@44160000; value
  }
  DCONST_DVARVEC2_heartbeatSensorTabletDistanceTextOffset = v1184;
  __asm { vmovaps xmm3, xmm9; max }
  v1188 = Dvar_RegisterFloat("NOQKLLMRO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The range from the player in world space that objects will be shown on the heartbeat sensor tablet before it is clamped");
  __asm { vmovss  xmm1, cs:__real@459c4000; value }
  DVARFLT_heartbeatSensorTabletRange = v1188;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1192 = Dvar_RegisterFloat("NLLRSSOQMQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Anything past this difference will not be drawn");
  __asm
  {
    vmovss  xmm3, cs:__real@3f558106; z
    vmovss  xmm2, cs:__real@3f4b851f; y
    vmovss  xmm1, cs:__real@3f3e353f; x
  }
  DVARFLT_heartbeatSensorTabletMaxDrawRange = v1192;
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm8
    vmovss  [rsp+178h+flags], xmm7
    vmovss  dword ptr [rsp+178h+fmt], xmm8
  }
  DCONST_DVARVEC4_compassMainHUDColor = Dvar_RegisterVec4("compassMainHUDColor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbc, flagsu, descriptioni, 0x40004u, "Color to be used as the main hud color when rendering compass items");
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm8
    vmovss  [rsp+178h+flags], xmm7
    vmovaps xmm3, xmm8; z
    vmovaps xmm2, xmm8; y
    vmovaps xmm1, xmm8; x
    vmovss  dword ptr [rsp+178h+fmt], xmm8
  }
  v1199 = Dvar_RegisterVec4("compassMainHeadingColor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbd, flagsv, descriptionj, 0x40004u, "Color to be used as the color when rendering main cardinal directions ( N,S,E,W ).");
  __asm
  {
    vmovss  xmm3, cs:__real@42c80000; max
    vmovss  xmm2, cs:__real@c2c80000; min
    vmovss  xmm1, cs:__real@40000000; value
  }
  DCONST_DVARVEC4_compassMainHeadingColor = v1199;
  DCONST_DVARFLT_compassArrowOffset = Dvar_RegisterFloat("compassArrowOffset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The vertical offset from the bottom of the compass navbar");
  DVARBOOL_compassShowAllEnemies = Dvar_RegisterBool("NOOMOKPQSN", 0, 0x44u, "When enabled, all enemies will be drawn on minimap without fade.");
  __asm
  {
    vmovss  xmm3, cs:__real@3f7d70a4; max
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@3f000000; value
  }
  DVARBOOL_compassZoomEnabled = Dvar_RegisterBool("OKPKSNONLP", 0, 4u, "Set to true to enable the compass dynamic zoom feature.");
  DVARFLT_compassZoomMaxLevel = Dvar_RegisterFloat("RTLQNRRTQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The maximum zoom applied to the compass. A lower number means a larger zoom.");
  __asm
  {
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovaps xmm3, xmm8; max
    vmovaps xmm1, xmm6; value
  }
  v1209 = Dvar_RegisterFloat("MTTRMPQTM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Controls the speed of the zoom lerp. A value of 1 means it will snap to the new zoom level.");
  __asm
  {
    vmovss  xmm2, cs:__real@3d4ccccd; min
    vmovss  xmm3, cs:__real@3f000000; max
  }
  DVARFLT_compassZoomSpeedFactor = v1209;
  __asm { vmovaps xmm1, xmm2; value }
  v1213 = Dvar_RegisterFloat("OKOORPKNLK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The maximum zoom applied to the Tac Map. A lower number means a larger zoom.");
  __asm
  {
    vmovss  xmm6, cs:__real@41200000
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@3f19999a; value
  }
  DVARFLT_compassTacMapZoomMaxLevel = v1213;
  __asm { vmovaps xmm3, xmm6; max }
  v1218 = Dvar_RegisterFloat("LPMLSTLTK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Controls the speed of the zoom lerp.");
  __asm
  {
    vmovss  xmm3, cs:__real@40a00000; max
    vmovss  xmm2, cs:__real@3c23d70a; min
  }
  DVARFLT_compassTacMapZoomSpeedFactor = v1218;
  __asm { vmovaps xmm1, xmm13; value }
  v1222 = Dvar_RegisterFloat("LNTKPSKRLT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Controls the speed of the zoom lerp when using a mouse.");
  __asm
  {
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@43160000; value
  }
  DVARFLT_compassTacMapMouseZoomSpeedFactor = v1222;
  __asm { vmovaps xmm3, xmm9; max }
  v1226 = Dvar_RegisterFloat("LLMTMTSPQP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance to tween scale");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  DVARFLT_compassClippedScaleMaxDistance = v1226;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_compassClippedScale = Dvar_RegisterFloat("QLKRMMPS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Amount of scale to apply at max distance and beyond");
  DVARBOOL_compassEnableClippedScale = Dvar_RegisterBool("NMKKQOPKPL", 1, 0, "Enable scaling down of clipped minimap icons that are pinned");
  DVARBOOL_compassHideClippedFriendlies = Dvar_RegisterBool("SNLPLNKOR", 0, 0, "Hide friendlies on the minimap if they're clipped");
  DVARBOOL_compassEnableFOVScaledCone = Dvar_RegisterBool("OMLRNPNKO", 0, 0, "If we are we using a fov scalable cone so we know to scale the overlay image to the current players FOV");
  DVARBOOL_compassHideClippedNonSquad = Dvar_RegisterBool("LLMOTOSKTT", 1, 0, "Hide non-squad friendlies on the minimap if they're clipped");
  __asm
  {
    vmovss  xmm2, cs:__real@bf800000; min
    vmovaps xmm1, xmm2; value
    vmovaps xmm3, xmm9; max
  }
  v1233 = Dvar_RegisterFloat("MORKQLLMNM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The distance in map space to clip enemy enemy vehicles, -1 disables it");
  __asm { vmovss  xmm1, cs:__real@43340000; value }
  DVARFLT_compassVehicleHideEnemyDistance = v1233;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm6; min
  }
  v1237 = Dvar_RegisterFloat("compass_stretch_max_fov_ADS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Maximum fov stretch applied to the compass in ADS");
  __asm { vmovss  xmm1, cs:__real@43340000; value }
  DCONST_DVARFLT_compass_stretch_max_fov_ADS = v1237;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm6; min
  }
  v1241 = Dvar_RegisterFloat("compass_stretch_min_fov_ADS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Minimum fov stretch applied to the compass in ADS");
  __asm { vmovss  xmm1, cs:__real@43340000; value }
  DCONST_DVARFLT_compass_stretch_min_fov_ADS = v1241;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm6; min
  }
  v1245 = Dvar_RegisterFloat("compass_stretch_max_fov_Hip", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Maximum fov stretch applied to the compass when hip firing");
  __asm { vmovss  xmm1, cs:__real@43340000; value }
  DCONST_DVARFLT_compass_stretch_max_fov_Hip = v1245;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm6; min
  }
  v1249 = Dvar_RegisterFloat("compass_stretch_min_fov_Hip", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Minimum fov stretch applied to the compass when hip firing");
  __asm
  {
    vmovss  xmm3, cs:__real@40000000; max
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@3f000000; value
  }
  DCONST_DVARFLT_compass_stretch_min_fov_Hip = v1249;
  v1253 = Dvar_RegisterFloat("MKLTMTLMKM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "How much a vehicle should be scaled up or down for large maps, viewing the partial map");
  __asm
  {
    vmovss  xmm3, cs:__real@40000000; max
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@3eb33333; value
  }
  DVARFLT_compassBigMapVehicleScalePartial = v1253;
  v1257 = Dvar_RegisterFloat("SLSNOMTOM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "How much a vehicle should be scaled up or down for large maps, viewing the full map");
  __asm { vmovss  xmm1, cs:__real@3eb33333; value }
  DVARFLT_compassBigMapVehicleScaleFull = v1257;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1261 = Dvar_RegisterFloat("MRMTMQOOQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Amount of scale to apply for vehicles at max distance and beyond on large maps");
  __asm
  {
    vmovss  xmm6, cs:__real@40000000
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@3e99999a; value
  }
  DVARFLT_compassBigMapClippedVehicleScale = v1261;
  __asm { vmovaps xmm3, xmm6; max }
  DVARFLT_compassTacMapVehicleScale = Dvar_RegisterFloat("MLPOMRKQTP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Amount of scale to apply for vehicle icons on a Tac Map for BR or CP.");
  __asm
  {
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@3f19999a; value
    vmovaps xmm3, xmm6; max
  }
  v1269 = Dvar_RegisterFloat("LLQRQPNLMQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Amount of scale to apply for vehicle icons on a Full Map for CP.");
  __asm
  {
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@3f59999a; value
  }
  DVARFLT_compassFullMapVehicleScale = v1269;
  __asm { vmovaps xmm3, xmm6; max }
  DVARFLT_compassVehicleScalePartial = Dvar_RegisterFloat("NTMPKLMPNS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Amount of scale to apply for vehicle icons on the minimap for MP");
  DVARBOOL_compassEditSettingsEnabled = Dvar_RegisterBool("PQOOSLLST", 0, 4u, "Debug setting to enable live minimap edit");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_compassEditSettingsHeight = Dvar_RegisterFloat("MMONNP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Live edit minimap height");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_compassEditSettingsWidth = Dvar_RegisterFloat("SSONROMQM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Live edit minimap width");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_compassEditSettingsZoom = Dvar_RegisterFloat("MOMMTNTLT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Live edit minimap zoom");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v1285 = Dvar_RegisterFloat("RRPKSPRSK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Live edit minimap rotation");
  __asm { vmovss  xmm2, cs:__real@ff7fffff; min }
  DVARFLT_compassEditSettingsRotation = v1285;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  v1289 = Dvar_RegisterFloat("OLROLKKOLN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Live edit minimap offset x coordinate");
  __asm { vmovss  xmm2, cs:__real@ff7fffff; min }
  DVARFLT_compassEditSettingsOffsetX = v1289;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  v1293 = Dvar_RegisterFloat("MLKLOSKTSK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Live edit minimap offset y coordinate");
  __asm { vmovss  xmm2, cs:__real@3c23d70a; min }
  DVARFLT_compassEditSettingsOffsetY = v1293;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovss  xmm1, cs:__real@3f400000; value
  }
  DVARFLT_compassRoleIconScale = Dvar_RegisterFloat("TKLLLLOMQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Amount of scale to apply for role icons on the minimap for CP Raid Security screen");
  DVARBOOL_isCompassCPRaidSecurityScreen = Dvar_RegisterBool("LQSSNPQOMO", 0, 0, "Is the compass system a cp_raid compass.");
  DVARBOOL_testCPRaidSecurityScreen = Dvar_RegisterBool("OKOQPMQQNM", 0, 0, "Force the security screen to display the cp_raid compass.");
  DVARINT_compassBRCirclePulseDuration = Dvar_RegisterInt("PPRTMPMQM", 800, 1, 50000, 0, "For pulsing BR Circle styles, this is the start/max duration that is split evenly when fading alpha 1->0->1");
  DVARINT_compassBRCircleMinPulseDuration = Dvar_RegisterInt("LKRMTKNKRQ", 200, 1, 50000, 0, "For pulsing BR Circle styles, this is the min duration that is split evenly when fading alpha 1->0->1");
  DVARINT_compassBRCircleTimeToMinPulse = Dvar_RegisterInt("NLKPRMLKRQ", 3000, 1, 50000, 0, "Time in ms when pulse duration will reach its minimum value");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  DVARINT_compassBRCirclePulseEaseType = Dvar_RegisterInt("NQOSLTOTO", 0, 0, 3, 0, "For pulsing BR Circle styles, EASE IN, 0: Sin, 1: Quad, 2: Cubic, 3: Quartic");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1300 = Dvar_RegisterFloat("MMQPTRQNPS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "For pulsing BR Circle styles, minimum alpha reached when pulsing");
  __asm { vmovss  xmm1, cs:__real@3f666666; value }
  DVARFLT_compassBRCirclePulseMinAlpha = v1300;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1304 = Dvar_RegisterFloat("compassTacmapIconAlphaOverride", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Alpha for missions and vehicles on the tacmap");
  __asm { vmovss  xmm1, cs:__real@3cd91687; value }
  DCONST_DVARFLT_compassTacmapIconAlphaOverride = v1304;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_compassAreaCalloutsTextHeightScale = Dvar_RegisterFloat("compassAreaCalloutsTextHeightScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "This is a scale factor for the text size relative to the whole image");
  __asm
  {
    vmovss  xmm6, cs:__real@41a00000
    vmovss  xmm1, cs:__real@40800000; value
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_compassAreaCalloutsBackgroundSidePadding = Dvar_RegisterFloat("compassAreaCalloutsBackgroundSidePadding", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "How many pixels to put around the side edges of the text for the background border");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_compassAreaCalloutsBackgroundTopPadding = Dvar_RegisterFloat("compassAreaCalloutsBackgroundTopPadding", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "How many pixels to put around the top edge of the text for the background border");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  DCONST_DVARFLT_compassAreaCalloutsBackgroundBottomPadding = Dvar_RegisterFloat("compassAreaCalloutsBackgroundBottomPadding", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "How many pixels to put around the bottom edge of the text for the background border");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  DCONST_DVARFLT_compassAreaCalloutsTextColorR = Dvar_RegisterFloat("compassAreaCalloutsTextColorR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Color for callout text");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  DCONST_DVARFLT_compassAreaCalloutsTextColorG = Dvar_RegisterFloat("compassAreaCalloutsTextColorG", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Color for callout text");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  DCONST_DVARFLT_compassAreaCalloutsTextColorB = Dvar_RegisterFloat("compassAreaCalloutsTextColorB", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Color for callout text");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
    vmovss  xmm6, cs:__real@3e7ced91
  }
  DCONST_DVARFLT_compassAreaCalloutsTextColorA = Dvar_RegisterFloat("compassAreaCalloutsTextColorA", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Color for callout text");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DCONST_DVARFLT_compassAreaCalloutsBGColorR = Dvar_RegisterFloat("compassAreaCalloutsBGColorR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Color for callout background");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DCONST_DVARFLT_compassAreaCalloutsBGColorG = Dvar_RegisterFloat("compassAreaCalloutsBGColorG", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Color for callout background");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  v1340 = Dvar_RegisterFloat("compassAreaCalloutsBGColorB", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Color for callout background");
  __asm { vmovss  xmm1, cs:__real@3f19999a; value }
  DCONST_DVARFLT_compassAreaCalloutsBGColorB = v1340;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1344 = Dvar_RegisterFloat("compassAreaCalloutsBGColorA", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Color for callout background");
  __asm { vmovss  xmm1, cs:__real@3f400000; value }
  DCONST_DVARFLT_compassAreaCalloutsBGColorA = v1344;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_compassAreaCalloutsBackgroundAlpha = Dvar_RegisterFloat("compassAreaCalloutsBackgroundAlpha", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Alpha for callout background");
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
  __asm
  {
    vmovss  xmm6, cs:__real@461c4000
    vmovss  xmm1, cs:__real@45dac000; value
  }
  DCONST_DVARBOOL_calloutmarkerping_debug_contextualping = Dvar_RegisterBool("calloutmarkerping_debug_contextualping", 0, 0x40004u, "Debug draw for the contextual ping target");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1352 = Dvar_RegisterFloat("calloutmarkerping_trace_entity_distance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Distance that the ping trace can hit entities");
  __asm { vmovss  xmm1, cs:__real@42840000; value }
  DCONST_DVARFLT_calloutmarkerping_trace_entity_distance = v1352;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1356 = Dvar_RegisterFloat("calloutmarkerping_trace_entity_radius", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Radius that the ping trace can hit entities");
  __asm { vmovss  xmm1, cs:__real@3cf5c28f; value }
  DCONST_DVARFLT_calloutmarkerping_trace_entity_radius = v1356;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1360 = Dvar_RegisterFloat("calloutmarkerping_trace_tacmap_radius", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Radius in 0-1 compass fractional space that the crosshair must be within a tacmap icon in order to ping it");
  __asm { vmovss  xmm1, cs:__real@459c4000; value }
  DCONST_DVARFLT_calloutmarkerping_trace_tacmap_radius = v1360;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1364 = Dvar_RegisterFloat("calloutmarkerping_trace_tacmap_height", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Height from word zero that the tacmap trace begins");
  __asm
  {
    vmovss  xmm2, cs:__real@bf800000; min
    vmovss  xmm1, cs:__real@3f68f5c3; value
  }
  DCONST_DVARFLT_calloutmarkerping_trace_tacmap_height = v1364;
  __asm { vmovaps xmm3, xmm8; max }
  v1368 = Dvar_RegisterFloat("calloutmarkerping_trace_entity_mindot", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "ArcCos of angle at which you can hit entities, 0.91 is +/- 25 degree arc");
  __asm { vmovss  xmm3, cs:__real@40a00000; max }
  DCONST_DVARFLT_calloutmarkerping_trace_entity_mindot = v1368;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v1372 = Dvar_RegisterFloat("calloutmarkerping_trace_enemy_bias", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "How much to bias enemies above other things when scoring entities with a single-tap");
  __asm
  {
    vmovss  xmm3, cs:__real@3f8ccccd; max
    vmovss  xmm1, cs:__real@3f7fdf3b; value
  }
  DCONST_DVARFLT_calloutmarkerping_trace_enemy_bias = v1372;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v1376 = Dvar_RegisterFloat("calloutmarkerping_lookat_ping_icon_dot", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Minimum angle when pointing directly at the icon in order to send feedback (clear/confirm)");
  __asm
  {
    vmovss  xmm3, cs:__real@42480000; max
    vmovss  xmm1, cs:__real@41000000; value
  }
  DCONST_DVARFLT_calloutmarkerping_lookat_ping_icon_dot = v1376;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v1380 = Dvar_RegisterFloat("calloutmarkerping_lookat_ping_beam_dist", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Minimum distance to the beam in order to send feedback");
  __asm
  {
    vmovss  xmm3, cs:__real@3f8ccccd; max
    vmovss  xmm1, cs:__real@3f7fc505; value
  }
  DCONST_DVARFLT_calloutmarkerping_lookat_ping_beam_dist = v1380;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm8, cs:__real@466a6000
  }
  DCONST_DVARFLT_calloutmarkerping_lookat_objective_icon_dot = Dvar_RegisterFloat("calloutmarkerping_lookat_objective_icon_dot", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Minimum angle when pointing directly at the objective icon in order to ping it");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  DVARFLT_calloutmarkerping_longRangeEnemyPing = Dvar_RegisterFloat("MSSNLOQPRL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The distance used for the long range enemy ping.");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v1391 = Dvar_RegisterFloat("NNKMTMLORP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance that the ping trace can hit solid geometry.");
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000; max
    vmovss  xmm1, cs:__real@3f666666; value
  }
  DVARFLT_calloutmarkerping_trace_solid_distance = v1391;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_compass_buyback_circle_moving_radius_pct = Dvar_RegisterFloat("NMTKLSKPPO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Percentage of circle radius to consider when selecting a buyback station while circle is moving");
  DCONST_DVARINT_calloutmarkerping_double_tap_time = Dvar_RegisterInt("calloutmarkerping_double_tap_time", 350, 100, 1000, 0x40004u, "The time in milliseconds used to determine if a player double tapped the ping button.");
  DCONST_DVARINT_calloutmarkerping_prediction_timeout_time = Dvar_RegisterInt("calloutmarkerping_prediction_timeout_time", 5000, 100, 10000, 0x40004u, "The time in milliseconds used to determine if a predicted ping should be removed even if it hasn't been acked by the server.");
  __asm
  {
    vmovss  xmm3, cs:__real@40400000; max
    vmovss  xmm1, cs:__real@3f4ccccd; value
  }
  DCONST_DVARINT_calloutmarkerping_prediction_debounce_time = Dvar_RegisterInt("calloutmarkerping_prediction_debounce_time", 100, 0, 10000, 0x40004u, "The time in milliseconds used to prevent additional messages if the player holds the button or spams it.");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v1398 = Dvar_RegisterFloat("scr_calloutmarkerping_iconpulse_basis", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Base size the icon increases by when cursor is over it");
  __asm
  {
    vmovss  xmm3, cs:__real@40400000; max
    vmovss  xmm1, cs:__real@3ca3d70a; value
  }
  DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_basis = v1398;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v1402 = Dvar_RegisterFloat("scr_calloutmarkerping_iconpulse_amplitude", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Sin wave min/max, so total amplitude is 2x this");
  __asm
  {
    vmovss  xmm3, cs:__real@453b8000; max
    vmovss  xmm2, cs:__real@3f800000; min
    vmovss  xmm1, cs:__real@43480000; value
  }
  DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_amplitude = v1402;
  __asm { vmovss  xmm6, cs:__real@42480000 }
  DCONST_DVARFLT_scr_calloutmarkerping_iconpulse_frequency = Dvar_RegisterFloat("scr_calloutmarkerping_iconpulse_frequency", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Frequency in milliseconds of the sin wave");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
    vxorps  xmm12, xmm12, xmm12
  }
  v1411 = Dvar_RegisterFloat("scr_calloutmarkerping_tacmap_prompt_height", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Height in pixels of the font, width is computed from lenght of the localized string");
  __asm
  {
    vmovss  xmm7, cs:__real@c2480000
    vmovss  xmm1, cs:__real@c1500000; value
  }
  DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_height = v1411;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm7; min
  }
  v1416 = Dvar_RegisterFloat("scr_calloutmarkerping_tacmap_prompt_y", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Position relative to the icon for the ping prompt, negative means above, positive would be below");
  __asm { vmovss  xmm1, cs:__real@c1700000; value }
  DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_y = v1416;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm7; min
  }
  v1420 = Dvar_RegisterFloat("scr_calloutmarkerping_tacmap_prompt_y_elev", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Position relative to the icon for the ping prompt, negative means above, positive would be below");
  __asm { vmovss  xmm1, cs:__real@c1700000; value }
  DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_y_elev = v1420;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm7; min
  }
  v1424 = Dvar_RegisterFloat("scr_calloutmarkerping_tacmap_prompt_y_ping", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Position relative to the icon for the ping prompt, negative means above, positive would be below");
  __asm { vmovss  xmm1, cs:__real@40a00000; value }
  DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_y_ping = v1424;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_pip_d = Dvar_RegisterFloat("scr_calloutmarkerping_tacmap_prompt_pip_d", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Diameter of the feedback pip");
  __asm
  {
    vmovss  xmm1, cs:__real@40000000; value
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_scr_calloutmarkerping_tacmap_prompt_pip_s = Dvar_RegisterFloat("scr_calloutmarkerping_tacmap_prompt_pip_s", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Space between the feedback pips");
  DCONST_DVARINT_bg_counterUAVStrengthLevelShowFriendlyOnly = Dvar_RegisterInt("bg_counterUAVStrengthLevelShowFriendlyOnly", 2, -100, 100, 0x40004u, "UAV level at which only friendlies are shown.");
  DCONST_DVARINT_bg_counterUAVStrengthLevelShowMapOnly = Dvar_RegisterInt("bg_counterUAVStrengthLevelShowMapOnly", 1, -100, 100, 0x40004u, "UAV level at which only the map is shown.");
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovss  xmm1, cs:__real@3e99999a; value
  }
  DCONST_DVARINT_bg_counterUAVStrengthLevelFullyJammed = Dvar_RegisterInt("bg_counterUAVStrengthLevelFullyJammed", 0, -100, 100, 0x40004u, "UAV level at which nothing is shown due to radar jamming.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1435 = Dvar_RegisterFloat("bg_counterUAVRadarJamLevelShowFriendlyOnly", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The radar jam amount at bg_counterUAVStrengthLevelShowFriendlyOnly.");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  DCONST_DVARFLT_bg_counterUAVRadarJamLevelShowFriendlyOnly = v1435;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_bg_counterUAVRadarJamLevelShowMapOnly = Dvar_RegisterFloat("bg_counterUAVRadarJamLevelShowMapOnly", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The radar jam amount at bg_ounterUAVStrengthLevelShowMapOnly.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DCONST_DVARFLT_bg_counterUAVRadarJamLevelFullyJammed = Dvar_RegisterFloat("bg_counterUAVRadarJamLevelFullyJammed", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The radar jam amount at bg_counterUAVStrengthLevelFullyJammed.");
  v1442 = Com_GameMode_GetActiveGameMode();
  __asm { vmovaps xmm7, xmm9 }
  _ECX = 0;
  __asm { vmovd   xmm1, ecx }
  _EAX = v1442 == 1;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm0, cs:__real@43fa0000
    vmovss  xmm1, cs:__real@43af0000
    vblendvps xmm1, xmm0, xmm1, xmm2; value
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm3, xmm7; max
  }
  DVARFLT_scramblerJamDistMin = Dvar_RegisterFloat("PRKMQROMO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Linear scrambler minimum jam distance.");
  v1454 = Com_GameMode_GetActiveGameMode();
  __asm { vmovaps xmm3, xmm7; max }
  _ECX = 0;
  __asm { vmovd   xmm1, ecx }
  _EAX = v1454 == 1;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, cs:__real@44480000
    vmovss  xmm0, cs:__real@447a0000
    vblendvps xmm1, xmm0, xmm1, xmm2; value
    vmovaps xmm2, xmm6; min
  }
  DVARFLT_scramblerJamDistMax = Dvar_RegisterFloat("RSOQLMNPK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Linear scrambler maximum jam distance.");
  v1465 = Com_GameMode_GetActiveGameMode();
  __asm { vmovss  xmm1, cs:__real@437a0000; value }
  DVARBOOL_scramblerJamSinCurve = Dvar_RegisterBool("LTKONTMSON", v1465 == 1, 4u, "Determines whether the linear scrambler jams linearly or sinusoidally");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1469 = Dvar_RegisterFloat("NTPSRTPSTK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Effective jam distance for the 'little' scrambler.");
  __asm { vmovss  xmm1, cs:__real@43fa0000; value }
  DVARFLT_scramblerJamDistLittle = v1469;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1473 = Dvar_RegisterFloat("LMTTLKKRMN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Effective jam distance for the 'medium' scrambler.");
  __asm { vmovss  xmm1, cs:__real@447a0000; value }
  DVARFLT_scramblerJamDistMedium = v1473;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1477 = Dvar_RegisterFloat("SKLRTTOON", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Effective jam distance for the 'large' scrambler.");
  __asm { vmovss  xmm1, cs:__real@41c80000; value }
  DVARFLT_scramblerJamDistLarge = v1477;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1481 = Dvar_RegisterFloat("QMONTNNM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Visual jam distance for the 'little' scrambler.");
  __asm { vmovss  xmm1, cs:__real@42480000; value }
  DVARFLT_scramblerJamCompassLittle = v1481;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1485 = Dvar_RegisterFloat("NLRLNPOSNR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Visual jam distance for the 'medium' scrambler.");
  __asm { vmovss  xmm1, cs:__real@42c80000; value }
  DVARFLT_scramblerJamCompassMedium = v1485;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1489 = Dvar_RegisterFloat("LNNTTQMLRN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Visual jam distance for the 'large' scrambler.");
  __asm { vmovss  xmm1, cs:__real@42200000; value }
  DVARFLT_scramblerJamCompassLarge = v1489;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1493 = Dvar_RegisterFloat("LTTRPPQMKT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Visual jam distance for the default linear scrambler.");
  __asm { vmovss  xmm1, cs:__real@3f59999a; value }
  DVARFLT_scramblerJamCompassLinear = v1493;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_teammate_firing_threshold = Dvar_RegisterFloat("cg_teammate_firing_threshold", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The alpha threshold at which we consider a teammate to be in a boolean firing/not firing state for lua data binds.");
  v1497 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v1497 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm1, cs:__real@40a00000; value
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARMPFLT_veh_boneTargetTrackLerpRate = Dvar_RegisterFloat("QTTLNNLPM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v1497, "Rate at which vehicle turrets track a locked target.");
  v1501 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v1501 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DCONST_DVARMPFLT_veh_boneTargetTrackResetLerpRate = Dvar_RegisterFloat("MQRMRNKPR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v1501, "Rate at which vehicle turrets reset to default position after tracking a locked target.");
  v1505 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v1505 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm1, cs:__real@3f000000; value
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1509 = Dvar_RegisterFloat("QLNKQKLMO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v1505, "Scale applied to turret motion when the vehicle is under local player's control.");
  __asm
  {
    vmovss  xmm3, cs:__real@42b40000; max
    vmovss  xmm1, cs:__real@40000000; value
  }
  DCONST_DVARMPFLT_veh_boneTargetTrackLocalScale = v1509;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v1513 = Dvar_RegisterFloat("aim_turret_align_start_angle", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The barrel starts to turn towards the turret body when the angle between the view and the turret body is less than or equal to this.");
  __asm
  {
    vmovss  xmm3, cs:__real@41200000; max
    vmovss  xmm1, cs:__real@3f000000; value
  }
  DCONST_DVARFLT_aim_turret_align_start_angle = v1513;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v1517 = Dvar_RegisterFloat("remote_turret_pitch_addition", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The scale of pitch inherited on the camera from the linked turret movement.");
  __asm { vmovss  xmm3, cs:__real@41200000; max }
  DCONST_DVARFLT_remote_turret_pitch_addition = v1517;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v1521 = Dvar_RegisterFloat("remote_turret_yaw_addition", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The scale of yaw inherited on the camera from the linked turret movement.");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  DCONST_DVARFLT_remote_turret_yaw_addition = v1521;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1525 = Dvar_RegisterFloat("veh_minAllowedWheelFrac", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Minimum wheel fraction raycast allowed");
  __asm { vmovss  xmm1, cs:__real@461c4000; value }
  DCONST_DVARFLT_veh_minAllowedWheelFrac = v1525;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
  }
  DVARFLT_cg_revPriority_distanceMax = Dvar_RegisterFloat("OLRKLMKTST", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Vehicles outside of this distance to the local player will not play audio.");
  DCONST_DVARBOOL_cg_vehicleCullingPriorities = Dvar_RegisterBool("cg_vehicleCullingPriorities", 1, 0x40004u, "Enable culling vehicle priorities.");
  DCONST_DVARINT_cg_vehicleSoundCount = Dvar_RegisterInt("cg_vehicleSoundCount", 10, 0, 128, 0x40004u, "Number of closed vihecle to play sound.");
  DVARBOOL_cg_vehicleSpectateEntityOrderFixActive = Dvar_RegisterBool("MNLMMSSLML", 1, 0, "If true, vehicle-related entities are _not_ delayed post-playerState while spectating.");
  __asm { vmovss  xmm0, cs:__real@43340000 }
  DVARBOOL_vehCam_freeLook = Dvar_RegisterBool("OKKSSOKQML", 0, 4u, "Enables free look mode");
  __asm
  {
    vmovss  [rsp+178h+flags], xmm0
    vmovss  xmm0, cs:__real@c3340000
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  dword ptr [rsp+178h+fmt], xmm0
    vmovss  xmm0, cs:__real@c47a0000
    vmovss  xmm6, cs:__real@447a0000
  }
  DVARVEC3_vehCam_angles = Dvar_RegisterVec3("MOTQKOSKRM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbe, flagsw, 0x44u, "Camera angles from vehicle");
  __asm
  {
    vmovss  [rsp+178h+flags], xmm6
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  dword ptr [rsp+178h+fmt], xmm0
  }
  DVARVEC3_vehCam_offset = Dvar_RegisterVec3("NOLORMOSTT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbf, flagsx, 0x44u, "Focus offset from vehicle origin");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v1542 = Dvar_RegisterFloat("LSRTTOSTTO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Camera radius from vehicle");
  __asm { vmovss  xmm3, cs:__real@3f000000; max }
  DVARFLT_vehCam_radius = v1542;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v1546 = Dvar_RegisterFloat("LTQOSONPNM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Controls how much the vehicle's speed effects the camera.");
  __asm
  {
    vmovss  xmm3, cs:__real@43b40000; max
    vmovss  xmm1, cs:__real@42b40000; value
  }
  DVARFLT_vehCam_speedInfluence = v1546;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v1550 = Dvar_RegisterFloat("PSPSOQSRL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Pitch turn rate for user adjustment");
  __asm
  {
    vmovss  xmm3, cs:__real@43340000; max
    vmovss  xmm1, cs:__real@41700000; value
  }
  DVARFLT_vehCam_pitchTurnRate = v1550;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v1554 = Dvar_RegisterFloat("TSPOOOTSN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Pitch clamp for user adjustment");
  __asm
  {
    vmovss  xmm3, cs:__real@43b40000; max
    vmovss  xmm1, cs:__real@43820000; value
  }
  DVARFLT_vehCam_pitchClamp = v1554;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v1558 = Dvar_RegisterFloat("MNOOLPRSQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Yaw turn rate for user adjustment");
  __asm
  {
    vmovss  xmm3, cs:__real@43340000; max
    vmovss  xmm1, cs:__real@42340000; value
  }
  DVARFLT_vehCam_yawTurnRate = v1558;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_vehCam_yawClamp = Dvar_RegisterFloat("NOTTPKOLQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Yaw clamp for user adjustment");
  __asm
  {
    vmovss  xmm0, cs:__real@43340000
    vmovss  xmm1, cs:__real@40800000; x
  }
  DVARINT_vehCam_zOffsetMode = Dvar_RegisterEnum("NRNNSORPTK", zOffsetModeNames, 1, 0x44u, "Camera offset mode for Z axis");
  __asm
  {
    vmovss  [rsp+178h+flags], xmm0
    vmovss  xmm0, cs:__real@c3340000
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vmovss  dword ptr [rsp+178h+fmt], xmm0
    vmovss  xmm0, cs:__real@c47a0000
  }
  DVARVEC3_vehCam_angles3P = Dvar_RegisterVec3("LNMTSOMSSR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbg, flagsy, 0x44u, "Camera angles from vehicle (3rd person)");
  __asm
  {
    vmovss  [rsp+178h+flags], xmm6
    vmovss  xmm3, cs:__real@429c0000; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  dword ptr [rsp+178h+fmt], xmm0
  }
  v1571 = Dvar_RegisterVec3("NNONTTTMTM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbh, flagsz, 0x44u, "Focus offset from vehicle origin (3rd person)");
  __asm { vmovss  xmm1, cs:__real@43200000; value }
  DVARVEC3_vehCam_offset3P = v1571;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1575 = Dvar_RegisterFloat("NQMKORNRPR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Camera radius from vehicle (3rd person)");
  __asm
  {
    vmovss  xmm3, cs:__real@3f000000; max
    vmovss  xmm1, cs:__real@3d4ccccd; value
  }
  DVARFLT_vehCam_radius3P = v1575;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v1579 = Dvar_RegisterFloat("LRSQPTMON", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Controls how much the vehicle's speed effects the camera. (3rd person)");
  __asm
  {
    vmovss  xmm3, cs:__real@43b40000; max
    vmovss  xmm1, cs:__real@42b40000; value
  }
  DVARFLT_vehCam_speedInfluence3P = v1579;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v1583 = Dvar_RegisterFloat("OMSSNSLNQK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Pitch turn rate for user adjustment (3rd person)");
  __asm
  {
    vmovss  xmm3, cs:__real@43340000; max
    vmovss  xmm1, cs:__real@41400000; value
  }
  DVARFLT_vehCam_pitchTurnRate3P = v1583;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_vehCam_pitchClamp3P = Dvar_RegisterFloat("NRRSPTSTTM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Pitch clamp for user adjustment (3rd person)");
  __asm
  {
    vmovss  xmm3, cs:__real@43b40000; max
    vmovss  xmm1, cs:__real@43200000; value
  }
  DVARINT_vehCam_zOffsetMode3P = Dvar_RegisterEnum("RTMLTLLQT", zOffsetModeNames, 2, 0x44u, "Camera offset mode for Z axis (3rd person)");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v1590 = Dvar_RegisterFloat("LNMSMQONPR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Yaw turn rate for user adjustment (3rd person)");
  __asm
  {
    vmovss  xmm3, cs:__real@43340000; max
    vmovss  xmm1, cs:__real@42b40000; value
  }
  DVARFLT_vehCam_yawTurnRate3P = v1590;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v1594 = Dvar_RegisterFloat("SSSPPKPTN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Yaw clamp for user adjustment (3rd person)");
  __asm
  {
    vmovss  xmm6, cs:__real@40000000
    vmovss  xmm1, cs:__real@3f400000; value
  }
  DVARFLT_vehCam_yawClamp3P = v1594;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_vehAudio_inAirPitchUpLerp = Dvar_RegisterFloat("NMKNSMKMTO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Rate at which the pitch lerps up");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  v1602 = Dvar_RegisterFloat("MPLKOPSSNN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Rate at which the pitch lerps down");
  __asm { vmovss  xmm3, cs:__real@41f00000; max }
  DVARFLT_vehAudio_inAirPitchDownLerp = v1602;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  v1606 = Dvar_RegisterFloat("MQOOLQLLPN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Seconds it takes for spawned vehicles to reach full volume.");
  __asm
  {
    vmovss  xmm15, cs:__real@3f800000
    vmovss  xmm3, cs:__real@41200000; max
  }
  DVARFLT_vehAudio_spawnVolumeTime = v1606;
  __asm
  {
    vmovaps xmm2, xmm15; min
    vmovaps xmm1, xmm6; value
  }
  v1611 = Dvar_RegisterFloat("OLKOOMKSMK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "When vehicles are idle and not occupied by the local client, multiply their audibility distance by this value.");
  __asm
  {
    vmovss  xmm0, cs:__real@ff7fffff
    vmovss  xmm1, cs:__real@c33e0000; x
  }
  DVARFLT_vehAudio_idleDistanceScale = v1611;
  __asm
  {
    vmovss  [rsp+178h+flags], xmm7
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vmovss  dword ptr [rsp+178h+fmt], xmm0
  }
  v1616 = Dvar_RegisterVec3("vehAudio_remoteClientLocalRotorOffset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbi, flagsba, 0x40004u, "Rotor offset from the origin of the helicopter");
  __asm { vmovss  xmm1, cs:__real@42800000; value }
  DCONST_DVARVEC3_vehAudio_remoteClientLocalRotorOffset = v1616;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1620 = Dvar_RegisterFloat("dynEnt_bulletForce", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Force applied from bullet hit");
  __asm { vmovss  xmm1, cs:__real@3f19999a; value }
  DCONST_DVARFLT_dynEnt_bulletForce = v1620;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1624 = Dvar_RegisterFloat("dynEnt_fixedMemoryShutdownThreshold", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The fixed memory pool proportion at which we start decreasing the clustered ents size");
  __asm { vmovss  xmm1, cs:__real@3f666666; value }
  DCONST_DVARFLT_dynEnt_fixedMemoryShutdownThreshold = v1624;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_dynEnt_fixedMemoryShutdownThreshold2 = Dvar_RegisterFloat("dynEnt_fixedMemoryShutdownThreshold2", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The fixed memory pool proportion at which we no longer use dynents");
  DVARINT_dynEnt_spatialMaxEnts = Dvar_RegisterInt("LRTTMPMQOO", 600, 0, 2000, 0x44u, "Maximum number of total common clutter dynents to be added around the player.");
  DVARINT_dynEnt_spatialMaxOccluderEnts = Dvar_RegisterInt("QRKSSMPR", 600, 0, 600, 0x44u, "Maximum number of sparse occluder dynents to be added around the player.");
  DCONST_DVARBOOL_dynEnt_spatialEnabled = Dvar_RegisterBool("dynEnt_spatialEnabled", 1, 0x40004u, "Enable DynEnt spatial partitioning");
  DCONST_DVARBOOL_dynEnt_spatialIteratorEnabled = Dvar_RegisterBool("dynEnt_spatialIteratorEnabled", 1, 0x40004u, "Enable DynEnt spatial partitioning iterator");
  DVARINT_dynEnt_spatialMaxEntsLowPrio = Dvar_RegisterInt("NTQKQKNRPQ", 600, 0, 2000, 0x44u, "Maximum number of low priority common clutter dynents that can be active.");
  __asm
  {
    vmovss  xmm3, cs:__real@47c35000; max
    vmovss  xmm1, cs:__real@459c4000; value
  }
  DVARINT_dynEnt_spatialMaxEntsHighPrio = Dvar_RegisterInt("RKTKKSMM", 600, 0, 2000, 0x44u, "Maximum number of high priority common clutter dynents that can be active.");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v1631 = Dvar_RegisterFloat("dynEnt_spatialMaxDistanceLowPrio", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Maximum distance to low priority common clutter dynents will be activated at.");
  __asm
  {
    vmovss  xmm3, cs:__real@47c35000; max
    vmovss  xmm1, cs:__real@459c4000; value
  }
  DCONST_DVARFLT_dynEnt_spatialMaxDistanceLowPrio = v1631;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v1635 = Dvar_RegisterFloat("dynEnt_spatialMaxDistanceHighPrio", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Maximum distance to high priority common clutter dynents will be activated at.");
  __asm { vmovss  xmm3, cs:__real@47c35000; max }
  DCONST_DVARFLT_dynEnt_spatialMaxDistanceHighPrio = v1635;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v1639 = Dvar_RegisterFloat("dynEnt_spatialMaxDistanceSparseOccluder", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Maximum distance to sparse occluder dynents will be activated at.");
  __asm
  {
    vmovss  xmm3, cs:__real@47c35000; max
    vmovss  xmm1, cs:__real@459c4000; value
  }
  DCONST_DVARFLT_dynEnt_spatialMaxDistanceSparseOccluder = v1639;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DCONST_DVARFLT_dynEnt_spatialViewBasedStartDistance = Dvar_RegisterFloat("dynEnt_spatialViewBasedStartDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "DynEnts farther away than this distance but less than maxDistance will only be activated if in fov.");
  DCONST_DVARINT_dynEnt_spatialMaxAddPerFrame = Dvar_RegisterInt("dynEnt_spatialMaxAddPerFrame", 10, 1, 100000, 0x40004u, "Maximum number of common clutter DynEnts to activate per frame.");
  DCONST_DVARINT_dynEnt_spatialMaxRemovePerFrame = Dvar_RegisterInt("dynEnt_spatialMaxRemovePerFrame", 10, 1, 100000, 0x40004u, "Maximum number of common clutter DynEnts to deactivate per frame.");
  DCONST_DVARINT_dynEnt_spatialMaxAddSparseOccluderPerFrame = Dvar_RegisterInt("dynEnt_spatialMaxAddSparseOccluderPerFrame", 10, 1, 100000, 0x40004u, "Maximum number of sparse occluder DynEnts to activate per frame.");
  __asm
  {
    vmovss  xmm3, cs:__real@47c35000; max
    vmovss  xmm1, cs:__real@453b8000; value
  }
  DCONST_DVARINT_dynEnt_spatialMaxRemoveSparseOccluderPerFrame = Dvar_RegisterInt("dynEnt_spatialMaxRemoveSparseOccluderPerFrame", 10, 1, 100000, 0x40004u, "Maximum number of sparse occluder DynEnts to deactivate per frame.");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DCONST_DVARFLT_dynEnt_spatialSparseOccluderCollisionActivationDistance = Dvar_RegisterFloat("dynEnt_spatialSparseOccluderCollisionActivationDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Try to only activate collisions on sparse occluders within this distance. Collisions will be activated with visibility when this is >= dynEnt_spatialMaxDistanceSparseOccluder.");
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
  __asm { vmovss  xmm3, cs:__real@42c80000; max }
  DVARBOOL_dynEnt_debugSpawnDepth = Dvar_RegisterBool("NNNNMRSNPN", 0, 4u, "Debug Dynent Spawn penetration depth");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  DVARFLT_dynEnt_debugSpawnDepthThreshold = Dvar_RegisterFloat("LPNSMQRSPO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Threshold for dynEnt_debugSpawnDepth");
  DVARINT_dynEnt_debugSpatialPopulation = Dvar_RegisterEnum("LLPPPQPRSM", dynEnt_DebugSpatialPopulationNames, 0, 4u, "Which dynEnt spatial population to use for debug drawing.");
  DVARBOOL_dynEnt_debugDrawSpatialWorld = Dvar_RegisterBool("LMORNMORSN", 0, 4u, "Debug draw Dynent spatial information in world");
  __asm
  {
    vmovss  xmm3, cs:__real@47435000; max
    vmovss  xmm1, cs:__real@459c4000; value
  }
  DVARINT_dynEnt_debugDrawSpatialOverlay = Dvar_RegisterEnum("OQOOSQLLT", dynEnt_DebugSpatialOverlayNames, 0, 4u, "Debug draw Dynent spatial information in 2D overlay");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm8, cs:__real@41f00000
  }
  DVARFLT_dynEnt_debugDrawSpatialOverlayZoom = Dvar_RegisterFloat("NNSPLMQKMK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Dynent spatial overlay zoom world size (lower is more zoomed in)");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  v1656 = Dvar_RegisterFloat("LOTNRMLLPS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Offhand weapons flash duration on changing weapon");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  DVARFLT_hud_flash_time_offhand = v1656;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_hud_flash_period_offhand = Dvar_RegisterFloat("LRMNSLSMNK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Offhand weapons flash period on changing weapon");
  __asm { vmovss  xmm0, cs:__real@3f4ccccd }
  DVARBOOL_actionSlotsHide = Dvar_RegisterBool("MNRKKQLQPQ", 0, 0x40u, "Hide the actionslots.");
  __asm
  {
    vmovss  dword ptr [rsp+178h+fmt], xmm0
    vmovss  xmm0, cs:__real@3f333333
    vmovaps xmm3, xmm0; b
    vmovaps xmm2, xmm0; g
    vmovaps xmm1, xmm0; r
  }
  DVARCLR_lowAmmoWarningColor1 = Dvar_RegisterColor("RQLRLQTKL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbj, 0, "Color 1 of 2 to oscilate between");
  __asm
  {
    vmovaps xmm3, xmm15; b
    vmovaps xmm2, xmm15; g
    vmovaps xmm1, xmm15; r
    vmovss  dword ptr [rsp+178h+fmt], xmm15
  }
  v1668 = Dvar_RegisterColor("MSNONNQNNO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbk, 0, "Color 2 of 2 to oscilate between");
  __asm { vmovss  xmm1, cs:__real@40133333; value }
  DVARCLR_lowAmmoWarningColor2 = v1668;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_lowAmmoWarningPulseFreq = Dvar_RegisterFloat("LLLORKNRTO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Frequency of the pulse (oscilation between the 2 colors)");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
  }
  v1675 = Dvar_RegisterFloat("OPQLOSSLO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Min of oscilation range: 0 is color1 and 1.0 is color2.  Can be < 0, and the wave will clip at 0.");
  __asm { vmovss  xmm2, cs:__real@ff7fffff; min }
  DVARFLT_lowAmmoWarningPulseMax = v1675;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm1, xmm1, xmm1; value
    vmovss  xmm11, cs:__real@3f333333
    vmovss  xmm6, cs:__real@3e99999a
  }
  DVARFLT_lowAmmoWarningPulseMin = Dvar_RegisterFloat("MLOLLLQNKO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Max of oscilation range: 0 is color1 and 1.0 is color2.  Can be > 1.0, and the wave will clip at 1.0.");
  __asm
  {
    vmovaps xmm3, xmm6; b
    vmovaps xmm2, xmm11; g
    vmovaps xmm1, xmm11; r
    vmovss  dword ptr [rsp+178h+fmt], xmm11
  }
  DVARCLR_lowAmmoWarningNoReloadColor1 = Dvar_RegisterColor("MLPTTLSRKP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbl, 0, "Like lowAmmoWarningColor1, but when no ammo to reload with.");
  __asm
  {
    vmovaps xmm3, xmm6; b
    vmovaps xmm2, xmm11; g
    vmovaps xmm1, xmm11; r
    vmovss  dword ptr [rsp+178h+fmt], xmm15
  }
  v1687 = Dvar_RegisterColor("OMNMPNSLNS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbm, 0, "lowAmmoWarningColor2, but when no ammo to reload with.");
  __asm
  {
    vmovss  xmm0, cs:__real@3f4ccccd
    vmovss  xmm2, cs:__real@3e800000; g
  }
  DVARCLR_lowAmmoWarningNoReloadColor2 = v1687;
  __asm
  {
    vmovaps xmm3, xmm6; b
    vmovaps xmm1, xmm0; r
    vmovss  dword ptr [rsp+178h+fmt], xmm0
  }
  v1692 = Dvar_RegisterColor("MLKRMNMOSM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbn, 0, "Like lowAmmoWarningColor1, but when no ammo.");
  __asm { vmovss  xmm2, cs:__real@3e800000; g }
  DVARCLR_lowAmmoWarningNoAmmoColor1 = v1692;
  __asm
  {
    vmovaps xmm3, xmm6; b
    vmovaps xmm1, xmm15; r
    vmovss  dword ptr [rsp+178h+fmt], xmm15
  }
  DVARCLR_lowAmmoWarningNoAmmoColor2 = Dvar_RegisterColor("NOQLNKOT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbo, 0, "lowAmmoWarningColor2, but when no ammo.");
  DCONST_DVARINT_visionSetKillcamEntBlendDuration = Dvar_RegisterInt("visionSetKillcamEntBlendDuration", 150, 0, 10000, 0x40004u, "Duration of visionset blend out when transitioning from player view to killcam entity.");
  __asm
  {
    vmovss  xmm6, cs:__real@00800000
    vmovss  xmm1, cs:__real@42100000; value
  }
  DVARBOOL_waypointDebugDraw = Dvar_RegisterBool("MLLRNRMPNP", 0, 0, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
  }
  DVARFLT_waypointIconWidth = Dvar_RegisterFloat("MTLOKKQKMN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Width of the offscreen pointer.");
  __asm
  {
    vmovss  xmm1, cs:__real@42100000; value
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
  }
  v1703 = Dvar_RegisterFloat("MSKPRTTKPK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Height of the offscreen pointer.");
  __asm { vmovss  xmm1, cs:__real@41c80000; value }
  DVARFLT_waypointIconHeight = v1703;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
  }
  v1707 = Dvar_RegisterFloat("MOTRNMTRKS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Width of the offscreen pointer.");
  __asm { vmovss  xmm1, cs:__real@41400000; value }
  DVARFLT_waypointOffscreenPointerWidth = v1707;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
  }
  v1711 = Dvar_RegisterFloat("STSSSLOQT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Height of the offscreen pointer.");
  __asm { vmovss  xmm1, cs:__real@41a00000; value }
  DVARFLT_waypointOffscreenPointerHeight = v1711;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
  }
  DVARFLT_waypointOffscreenPointerDistance = Dvar_RegisterFloat("OOSKKKNOP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance from the center of the offscreen objective icon to the center its arrow.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  DVARFLT_waypointOffscreenDistanceThresholdAlpha = Dvar_RegisterFloat("NKMOPMMNQP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance from the threshold over which offscreen objective icons lerp their alpha.");
  v1718 = Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm11, cs:__real@41700000
    vmovaps xmm3, xmm7; max
  }
  _ECX = 0;
  __asm { vmovd   xmm1, ecx }
  _EAX = v1718 == 1;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, cs:__real@42ce0000
    vblendvps xmm1, xmm11, xmm1, xmm2; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_waypointOffscreenPadLeft = Dvar_RegisterFloat("NRRMTSLKNT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Offset from the edge.");
  v1729 = Com_GameMode_GetActiveGameMode();
  __asm { vmovaps xmm3, xmm7; max }
  _ECX = 0;
  __asm { vmovd   xmm1, ecx }
  _EAX = v1729 == 1;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm11, xmm12, xmm2; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_waypointOffscreenPadRight = Dvar_RegisterFloat("NLSOONOQOK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Offset from the edge.");
  v1738 = Com_GameMode_GetActiveGameMode();
  __asm { vmovaps xmm3, xmm7; max }
  _ECX = 0;
  __asm { vmovd   xmm1, ecx }
  _EAX = v1738 == 1;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm11, xmm12, xmm2; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_waypointOffscreenPadTop = Dvar_RegisterFloat("NOMMOQKSMR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Offset from the edge.");
  v1747 = Com_GameMode_GetActiveGameMode();
  __asm { vmovaps xmm3, xmm7; max }
  _ECX = 0;
  __asm { vmovd   xmm1, ecx }
  _EAX = v1747 == 1;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm11, xmm8, xmm2; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_waypointOffscreenPadBottom = Dvar_RegisterFloat("LLMSOTSQSR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Offset from the edge.");
  __asm { vmovss  xmm1, cs:__real@42d20000; value }
  DVARBOOL_waypointOffscreenRoundedCorners = Dvar_RegisterBool("MOMPTQROTO", 1, 0, "Off-screen icons take rounded corners when true.  90-degree corners when false.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1759 = Dvar_RegisterFloat("RKMLSNPOQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Size of the rounded corners.");
  __asm { vmovss  xmm1, cs:__real@43fa0000; value }
  DVARFLT_waypointOffscreenCornerRadius = v1759;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
  }
  DVARFLT_waypointOffscreenScaleLength = Dvar_RegisterFloat("LMSRPLTONR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "How far the offscreen icon scale travels from full to smallest scale.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
    vmovss  xmm11, cs:__real@447a0000
  }
  DVARFLT_waypointOffscreenScaleSmallest = Dvar_RegisterFloat("NQKMMQKSLQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Smallest scale that the offscreen effect uses.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  DVARFLT_waypointDistScaleRangeMin = Dvar_RegisterFloat("OKRTRKKRMP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance from player that icon distance scaling starts.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm1, cs:__real@453b8000; value
  }
  v1773 = Dvar_RegisterFloat("LLRKMOOKPT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance from player that icon distance scaling ends.");
  __asm { vmovss  xmm1, cs:__real@3f4ccccd; value }
  DVARFLT_waypointDistScaleRangeMax = v1773;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_waypointDistScaleSmallest = Dvar_RegisterFloat("LOONOPPPNR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Smallest scale that the distance effect uses.");
  v1777 = Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm2, cs:__real@3fe66666
    vmovss  xmm8, cs:__real@3dcccccd
  }
  _ECX = 0;
  __asm { vmovd   xmm1, ecx }
  _EAX = v1777 == 1;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  xmm1, cs:__real@3fb33333
    vblendvps xmm1, xmm1, xmm2, xmm3; value
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm8; min
  }
  DVARFLT_waypointSplitscreenScale = Dvar_RegisterFloat("LOMLKMNNKS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scale applied to waypoint icons in splitscreen views.");
  v1789 = Com_GameMode_GetActiveGameMode();
  __asm { vmovss  xmm3, cs:__real@44fa0000; max }
  _ECX = 0;
  __asm { vmovd   xmm1, ecx }
  _EAX = v1789 == 1;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm0, cs:__real@43000000
    vblendvps xmm1, xmm12, xmm0, xmm2; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_waypointScreenCenterFadeRadius = Dvar_RegisterFloat("MTTNTNMPLL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Radius from screen center that a waypoint will start fading out. Setting to 0 will turn this off");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v1802 = Dvar_RegisterFloat("LSNLMOQNRT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "When 'waypointScreenCenterFadeRadius' enabled, minimum amount that waypoint will fade when in ads");
  __asm { vmovss  xmm1, cs:__real@3e4ccccd; value }
  DVARFLT_waypointScreenCenterFadeAdsMin = v1802;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1806 = Dvar_RegisterFloat("NLPOMMTMTM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "When 'waypointScreenCenterFadeRadius' enabled, minimum amount that waypoint will fade when in hip (non-ads)");
  __asm
  {
    vmovss  xmm2, cs:__real@ff7fffff; min
    vmovss  xmm1, cs:__real@c1880000; value
  }
  DVARFLT_waypointScreenCenterFadeHipMin = v1806;
  __asm { vmovaps xmm3, xmm7; max }
  DVARFLT_waypointTweakY = Dvar_RegisterFloat("NNLSNQRLT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovss  xmm1, cs:__real@3ecccccd; value
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1813 = Dvar_RegisterFloat("MSOSMKOSNO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Brightness of the hudelems when the game is paused.");
  __asm { vmovss  xmm1, cs:__real@41f00000; value }
  DVARFLT_hudElemPausedBrightness = v1813;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1817 = Dvar_RegisterFloat("NNTKMTSPLO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "For waypoints pointing to players, how high to offset off of their origin when they are prone.");
  __asm { vmovss  xmm1, cs:__real@42600000; value }
  DVARFLT_waypointPlayerOffsetProne = v1817;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1821 = Dvar_RegisterFloat("LRLTNMQOKK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "For waypoints pointing to players, how high to offset off of their origin when they are crouching.");
  __asm { vmovss  xmm1, cs:__real@42840000; value }
  DVARFLT_waypointPlayerOffsetCrouch = v1821;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1825 = Dvar_RegisterFloat("MONNPPSQPQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "For waypoints pointing to players, how high to offset off of their origin when they are standing.");
  __asm
  {
    vmovss  xmm2, cs:__real@3c23d70a; min
    vmovss  xmm1, cs:__real@3e800000; value
  }
  DVARFLT_waypointPlayerOffsetStand = v1825;
  __asm { vmovaps xmm3, xmm7; max }
  v1829 = Dvar_RegisterFloat("LPPTLMKOS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Onscreen Objective Pointer - Fontsize of the icon's text.");
  __asm
  {
    vmovss  xmm2, cs:__real@ff7fffff; min
    vmovss  xmm1, cs:__real@c0aa8f5c; value
  }
  DVARFLT_objectiveFontSize = v1829;
  __asm { vmovaps xmm3, xmm7; max }
  v1833 = Dvar_RegisterFloat("LPSLTNTSTL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Onscreen Objective Pointer - Offset of the icon's text.");
  __asm { vmovss  xmm1, cs:__real@41c80000; value }
  DVARFLT_objectiveTextOffsetY = v1833;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
  }
  DVARFLT_objectiveFadeTooFar = Dvar_RegisterFloat("MTNNKMQLLR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Onscreen Objective Pointer - Will not fade out if target ent is farther than this.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm8; value
  }
  DVARFLT_objectiveFadeTooClose = Dvar_RegisterFloat("LNQOPLRTPK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Onscreen Objective Pointer - Will not fade back in if target ent is closer than this.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm15; value
  }
  DVARFLT_objectiveFadeTimeGoingOn = Dvar_RegisterFloat("LLOSTRPM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Onscreen Objective Pointer - How long to take to fade back in.");
  __asm
  {
    vmovss  xmm1, cs:__real@3f000000; value
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
  }
  v1846 = Dvar_RegisterFloat("MSTLQMMONS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Onscreen Objective Pointer - How long to take to fade out.");
  __asm { vmovss  xmm1, cs:__real@40000000; value }
  DVARFLT_objectiveFadeTimeGoingOff = v1846;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
  }
  v1850 = Dvar_RegisterFloat("MKPQSTROLT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Onscreen Objective Pointer - How long to wait before turning back on, when appropriate.");
  __asm { vmovss  xmm1, cs:__real@40000000; value }
  DVARFLT_objectiveFadeTimeWaitOn = v1850;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
  }
  DVARFLT_objectiveFadeTimeWaitOff = Dvar_RegisterFloat("OKLSKPOTOP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Onscreen Objective Pointer - How long to wait before turning off, when appropriate.");
  DVARBOOL_objectiveHide = Dvar_RegisterBool("STNLLNSMQ", 0, 0x44u, "When enabled, objectives will not show.");
  DVARINT_objectiveGlobalFadeState = Dvar_RegisterInt("NTPKMKKQPQ", -1, -1, 3, 0x40u, "Overrides all current objective fade states when not -1.  0 = On, 1 = Off, 2 = Fading On, 3 = Fading Off");
  DVARBOOL_laserForceOn = Dvar_RegisterBool("NSKKPKOLNQ", 0, 4u, "Force laser sights on in all possible places (for debug purposes).");
  DVARBOOL_laserDebug = Dvar_RegisterBool("MPONLOSTOP", 0, 4u, "Enables the display of various debug info.");
  DVARBOOL_laserDebugWhizbyPos = Dvar_RegisterBool("MPSPQSOLSM", 0, 4u, "Draw the whizby position");
  __asm
  {
    vmovss  xmm3, cs:__real@42700000; max
    vmovss  xmm2, cs:__real@c2700000; min
    vmovss  xmm1, cs:__real@bfa66666; value
  }
  DVARINT_laserMaxInterpolationTime = Dvar_RegisterInt("MTOMPONOTT", 120, 20, 500, 4u, "The higher this number, the smoother the laser. The lower this number, the more accurate the laser. (millisecs)");
  __asm { vmovss  xmm6, cs:__real@38d1b717 }
  DVARFLT_laserLockEyeOffset = Dvar_RegisterFloat("LOQKPKKSON", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Distance from player's eye to lock the laser when locked onto target.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm6; value
  }
  DVARFLT_laserAdsFraction = Dvar_RegisterFloat("LMMNLSQQNQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The ADS fraction laser is turned on when ADSLaserEnabled flag is set to true in the attachment laser settings.");
  __asm
  {
    vmovaps xmm2, xmm6; min
    vmovss  xmm6, cs:__real@3f000000
    vmovaps xmm1, xmm6; value
    vmovaps xmm3, xmm15; max
  }
  DVARFLT_laserHipFraction = Dvar_RegisterFloat("LRNLPRTKLP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The ADS fraction laser is turned on when HipLaserEnabled flag is set to true in the attachment laser settings.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v1868 = Dvar_RegisterFloat("cg_silencedWeaponPingRangeSquared", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Square of the range at which the firing of a silenced weapon will ping on the compass.");
  __asm { vmovss  xmm1, cs:__real@42a00000; value }
  DCONST_DVARFLT_cg_silencedWeaponPingRangeSquared = v1868;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm15; min
  }
  v1872 = Dvar_RegisterFloat("hudWhizbyDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The distance in inches a bullet has to be near you for the whizby indicator to be active");
  __asm
  {
    vmovss  xmm13, cs:__real@42c80000
    vmovss  xmm1, cs:__real@3e19999a; value
  }
  DCONST_DVARFLT_hudWhizbyDistance = v1872;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1877 = Dvar_RegisterFloat("hudWhizbyDurationSec", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The time in seconds the whizby indicator will be shown");
  __asm
  {
    vmovss  xmm3, cs:__real@43b40000; max
    vmovss  xmm1, cs:__real@41000000; value
  }
  DCONST_DVARFLT_hudWhizbyDurationSec = v1877;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v1881 = Dvar_RegisterFloat("hudWhizbyClearAngle", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The minimum angle between two whizby indicators");
  __asm { vmovss  xmm1, cs:__real@42960000; value }
  DCONST_DVARFLT_hudWhizbyClearAngle = v1881;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm15; min
  }
  v1885 = Dvar_RegisterFloat("hudWhizbyOffset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Offset for the hud draw");
  __asm { vmovss  xmm1, cs:__real@43c80000; value }
  DCONST_DVARFLT_hudWhizbyOffset = v1885;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm15; min
  }
  DCONST_DVARFLT_hudWhizbyWidth = Dvar_RegisterFloat("hudWhizbyWidth", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "width of the whizby effect");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm15; min
    vmovaps xmm1, xmm10; value
  }
  DCONST_DVARFLT_hudWhizbyHeight = Dvar_RegisterFloat("hudWhizbyHeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "height of the whizby effect");
  __asm
  {
    vmovss  xmm1, cs:__real@430c0000; value
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm15; min
  }
  DCONST_DVARFLT_hudWhizbyAddOffset = Dvar_RegisterFloat("hudWhizbyAddOffset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Additional horizontal offset for the hud draw");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  DCONST_DVARFLT_hudWhizbyAlphaMult = Dvar_RegisterFloat("hudWhizbyAlphaMult", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Alpha multiplier for the whizby material");
  DCONST_DVARBOOL_hudWhizbyEnable = Dvar_RegisterBool("hudWhizbyEnable", 0, 0x40004u, "Enable/disable hud whizby indicator");
  __asm
  {
    vmovss  xmm10, cs:__real@41200000
    vmovss  xmm1, cs:__real@3df5c28f; value
  }
  DCONST_DVARBOOL_cg_viewmodelAnimBlending = Dvar_RegisterBool("cg_viewmodelAnimBlending", 1, 0x40004u, "Toggle anim blending for viewmodel anims");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_viewmodelMeleeAnimBlendTimeSec = Dvar_RegisterFloat("cg_viewmodelMeleeAnimBlendTimeSec", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Duration for melee-to-melee viewmodel animation blends.");
  DCONST_DVARINT_cg_wallrunBlendOutTimeFiring = Dvar_RegisterInt("cg_wallrunBlendOutTimeFiring", 100, 0, 2000, 0x40004u, "Milleseconds to blend out of wallrun anims to firing weapon");
  DCONST_DVARBOOL_cg_viewmodelAnimatedJumps = Dvar_RegisterBool("cg_viewmodelAnimatedJumps", 1, 0x40004u, "Toggle anim play viewmodel jump anims rather than procedural");
  __asm { vmovss  xmm1, cs:__real@3e4ccccd; value }
  DCONST_DVARBOOL_cg_viewmodelAnimatedCrawl = Dvar_RegisterBool("cg_viewmodelAnimatedCrawl", 1, 0x40004u, "Toggle anim play viewmodel crawl anims rather than procedural");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1905 = Dvar_RegisterFloat("cg_viewmodelLandDipMin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Minimum goal weight applied to landing animation.");
  __asm { vmovss  xmm1, cs:__real@3e4ccccd; value }
  DCONST_DVARFLT_cg_viewmodelLandDipMin = v1905;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_viewmodelLandDipMax = Dvar_RegisterFloat("cg_viewmodelLandDipMax", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Maximum goal weight applied to landing animation.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  DCONST_DVARFLT_cg_cameraLandDipScale = Dvar_RegisterFloat("cg_cameraLandDipScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Scale applied to camera view dip.  Scales legacy hardcoded camera dip amount.");
  DCONST_DVARBOOL_cg_viewmodelAdditiveJog = Dvar_RegisterBool("cg_viewmodelAdditiveJog", 1, 0x40004u, "Toggle additive jog.");
  DCONST_DVARBOOL_cg_viewmodelSprintOffset = Dvar_RegisterBool("cg_viewmodelSprintOffset", 1, 0x40004u, "Toggle sprint offset.");
  DCONST_DVARBOOL_cg_viewmodelFingerPoses = Dvar_RegisterBool("cg_viewmodelFingerPoses", 1, 0x40004u, "Toggle finger pose.");
  DCONST_DVARBOOL_cg_viewmodelAdsUpDown = Dvar_RegisterBool("cg_viewmodelAdsUpDown", 1, 0x40004u, "Toggle ads up down.");
  DCONST_DVARBOOL_cg_viewmodelAdsAnims = Dvar_RegisterBool("cg_viewmodelAdsAnims", 1, 0x40004u, "Toggle viewmodel ads.");
  DCONST_DVARBOOL_cg_viewmodelActiveIdle = Dvar_RegisterBool("cg_viewmodelActiveIdle", 1, 0x40004u, "Toggle active idle.");
  DCONST_DVARBOOL_cg_viewmodelAdditiveWalk = Dvar_RegisterBool("cg_viewmodelAdditiveWalk", 1, 0x40004u, "Toggle additive walk.");
  DCONST_DVARBOOL_cg_viewmodelAdditiveSprint = Dvar_RegisterBool("cg_viewmodelAdditiveSprint", 1, 0x40004u, "Toggle additive sprint.");
  __asm { vmovss  xmm1, cs:__real@42800000; value }
  DCONST_DVARBOOL_cg_enableMuzzleFlashInDualFOV = Dvar_RegisterBool("cg_enableMuzzleFlashInDualFOV", 1, 0x40004u, "Enables muzzle flash effects when in ADS with dual FOV scope");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm15; min
  }
  v1915 = Dvar_RegisterFloat("player_swimDragHandLookAtOffset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Forward axis offset to compare against last look at position for hand drag anims");
  __asm { vmovss  xmm1, cs:__real@42ae0000; value }
  DCONST_DVARFLT_player_swimDragHandLookAtOffset = v1915;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm15; min
  }
  DCONST_DVARFLT_player_swimDragHandFrictionMax = Dvar_RegisterFloat("player_swimDragHandFrictionMax", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max friction value to bring the dragging hand back to default idle position");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm15; min
    vmovaps xmm1, xmm14; value
  }
  v1922 = Dvar_RegisterFloat("player_swimDragHandFrictionMin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Min friction value to bring the dragging hand back to default idle position");
  __asm { vmovss  xmm1, cs:__real@40a00000; value }
  DCONST_DVARFLT_player_swimDragHandFrictionMin = v1922;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm15; min
  }
  v1926 = Dvar_RegisterFloat("player_swimForwardAnimCatchupMin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Lerped min speed to extend or retract arms if player is moving forward or back");
  __asm { vmovss  xmm1, cs:__real@43480000; value }
  DCONST_DVARFLT_player_swimForwardAnimCatchupMin = v1926;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm15; min
  }
  DCONST_DVARFLT_player_swimForwardAnimCatchupMax = Dvar_RegisterFloat("player_swimForwardAnimCatchupMax", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Lerped max speed to extend or retract arms if player is moving forward or back");
  DCONST_DVARBOOL_player_swimDragHandEnabled = Dvar_RegisterBool("player_swimDragHandEnabled", 1, 0x40004u, "Enable/disable left hand drag during swimming");
  DCONST_DVARINT_cg_crawlBlendTime = Dvar_RegisterInt("cg_crawlBlendTime", 250, 1, 2000, 0x40004u, "Milleseconds to blend in and out of crawl anims");
  DCONST_DVARINT_cg_crawlBlendOutTimeFiring = Dvar_RegisterInt("cg_crawlBlendOutTimeFiring", 100, 0, 2000, 0x40004u, "Milleseconds to blend out of crawl anims to firing weapon");
  DCONST_DVARINT_cg_crawlBlendDirTime = Dvar_RegisterInt("cg_crawlBlendDirTime", 400, 1, 2000, 0x40004u, "Milliseconds to blend between crawl direction animations");
  __asm { vmovss  xmm1, cs:__real@3eb33333; value }
  DVARBOOL_depthSortViewmodel = Dvar_RegisterBool("NMLOKNMRSK", 0, 0x44u, "Enable depth sorting on the viewmodel.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_shieldImpactBulletShakeScale = Dvar_RegisterFloat("LQKTTRTSNS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Viewmodel shake scale for bullet impacts.");
  DVARINT_shieldImpactBulletShakeDuration = Dvar_RegisterInt("NQOLQLNOQO", 500, 0, 0x7FFFFFFF, 4u, "Viewmodel shake duration for bullet impacts.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DVARFLT_shieldImpactMissileShakeScale = Dvar_RegisterFloat("LOQOSQQLQK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Viewmodel shake scale for direct missile impacts.");
  __asm { vmovss  xmm1, cs:__real@3ecccccd; value }
  DVARINT_shieldImpactMissileShakeDuration = Dvar_RegisterInt("LKTNPTORLS", 1500, 0, 0x7FFFFFFF, 4u, "Viewmodel shake duration for direct missile impacts.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_shieldImpactExplosionLowShakeScale = Dvar_RegisterFloat("LPLLPRNPST", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Viewmodel shake scale for weak splash damage.");
  DVARINT_shieldImpactExplosionLowShakeDuration = Dvar_RegisterInt("TMRQLOTLT", 800, 0, 0x7FFFFFFF, 4u, "Viewmodel shake duration for weak splash damage.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DVARFLT_shieldImpactExplosionHighShakeScale = Dvar_RegisterFloat("LMLRPPRNKR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Viewmodel shake scale for strong splash damage.");
  DVARINT_shieldImpactExplosionHighShakeDuration = Dvar_RegisterInt("MRPKPQQPKP", 1250, 0, 0x7FFFFFFF, 4u, "Viewmodel shake duration for strong splash damage.");
  __asm
  {
    vmovss  xmm6, cs:__real@41a00000
    vmovss  xmm2, cs:__real@c1a00000; min
  }
  DVARINT_shieldImpactExplosionThreshold = Dvar_RegisterInt("MQSKKKQNNK", 85, 0, 0x7FFFFFFF, 4u, "Pre-shield splash damage that is above this will be 'strong'.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  v1946 = Dvar_RegisterFloat("NLQONKNSTN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Forward position of the viewmodel");
  __asm { vmovss  xmm2, cs:__real@c1a00000; min }
  DVARFLT_cg_gun_x = v1946;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_cg_gun_y = Dvar_RegisterFloat("LKTLQSOOQK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Right position of the viewmodel");
  __asm
  {
    vmovss  xmm2, cs:__real@c1a00000; min
    vmovaps xmm3, xmm6; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  v1953 = Dvar_RegisterFloat("NKLOPRPOQN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Up position of the viewmodel");
  __asm
  {
    vmovss  xmm6, cs:__real@43340000
    vmovss  xmm2, cs:__real@c3340000; min
  }
  DVARFLT_cg_gun_z = v1953;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  v1958 = Dvar_RegisterFloat("LSSPMSSLNL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Pitch of the viewmodel");
  __asm { vmovss  xmm2, cs:__real@c3340000; min }
  DVARFLT_cg_gun_pitch = v1958;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  v1962 = Dvar_RegisterFloat("MQPKNKNOPO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Yaw of the viewmodel");
  __asm { vmovss  xmm2, cs:__real@c3340000; min }
  DVARFLT_cg_gun_yaw = v1962;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_cg_gun_roll = Dvar_RegisterFloat("NPONQQSOPM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Roll of the viewmodel");
  __asm
  {
    vmovss  xmm3, cs:__real@43200000; max
    vmovss  xmm1, cs:__real@42aa0000; value
  }
  DVARBOOL_cg_disable_fov_comp = Dvar_RegisterBool("OMLKKRRSS", 0, 0, "disable the view model positional compensation for fov changes");
  __asm { vmovaps xmm2, xmm15; min }
  v1969 = Dvar_RegisterFloat("cg_fov_comp_max", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The maximum field of view angle(in degrees) to compensate for gun placement");
  __asm
  {
    vmovss  xmm3, cs:__real@42a00000; max
    vmovss  xmm2, cs:__real@427c0000; min
    vmovss  xmm1, cs:__real@428c0000; value
  }
  DCONST_DVARFLT_cg_fov_comp_max = v1969;
  v1973 = Dvar_RegisterFloat("cg_fov_default_nocomp", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The default field of view angle(in degrees) for which there is no need to compensate for gun placement");
  __asm
  {
    vmovss  xmm9, cs:__real@ff7fffff
    vmovss  xmm1, cs:__real@c0c00000; value
  }
  DCONST_DVARFLT_cg_fov_default_nocomp = v1973;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm9; min
  }
  DCONST_DVARFLT_cg_gun_fovcomp_x = Dvar_RegisterFloat("cg_gun_fovcomp_x", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "x position FOV offset compensation of the viewmodel");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm9; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_cg_gun_fovcomp_y = Dvar_RegisterFloat("cg_gun_fovcomp_y", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "y position FOV offset compensation of the viewmodel");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm9; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_cg_gun_fovcomp_z = Dvar_RegisterFloat("cg_gun_fovcomp_z", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "z position FOV offset compensation of the viewmodel");
  DVARBOOL_viewModelHacks = Dvar_RegisterBool("LKOMKROSMT", 1, 4u, "Enabled depth hack and remove viewmodel from shadows.");
  DVARBOOL_viewModelDebugNotetracks = Dvar_RegisterBool("MTRTKMSRLO", 0, 4u, "Enable display of viewmodel notetrack debug info.");
  __asm { vmovss  xmm1, cs:__real@43000000; value }
  DVARBOOL_cg_cullBullets = Dvar_RegisterBool("LNSRONSPMP", 1, 4u, "Whether to cull bullet fire prediction if trajectory doesn't pass your view or anywhere near you");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1987 = Dvar_RegisterFloat("MMOPMNOKPO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Don't cull bullet trajectories that are within this distance to you.");
  __asm
  {
    vmovss  xmm3, cs:__real@42b40000; max
    vmovss  xmm1, cs:__real@42480000; value
  }
  DVARFLT_cg_minCullBulletDist = v1987;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v1991 = Dvar_RegisterFloat("MTTRPTOLPL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Cull bullet trajectories that don't fall within this fov");
  __asm { vmovss  xmm1, cs:__real@3fa66666; value }
  DVARFLT_cg_cullBulletAngle = v1991;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm8; min
  }
  v1995 = Dvar_RegisterFloat("OLNLKLMSTR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Base scale of Friend-or-Foe icons.");
  __asm { vmovss  xmm1, cs:__real@41f00000; value }
  DVARFLT_FoFIconScale = v1995;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v1999 = Dvar_RegisterFloat("LQMSSRNNKQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Minimum size a Friend-or-Foe icon should ever shrink to.");
  __asm { vmovss  xmm1, cs:__real@44200000; value }
  DVARFLT_FoFIconMinSize = v1999;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_FoFIconMaxSize = Dvar_RegisterFloat("LPPTSMNPKK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Maximum size a Friend-or-Foe icon should ever grow to.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  DVARFLT_FoFIconSpawnTimeDelay = Dvar_RegisterFloat("RLLNPQQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "How long to wait, after spawning, before showing the Friend-or-Foe icon on a player.");
  __asm
  {
    vmovss  xmm1, cs:__real@40a00000; value
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2009 = Dvar_RegisterFloat("LLPTKKRNN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Length of the Friend-or-Foe icons' fade-ins.");
  __asm { vmovss  xmm1, cs:__real@42340000; value }
  DVARFLT_FoFIconSpawnTimeFade = v2009;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cg_weapHitCullAngle = Dvar_RegisterFloat("OKROOSNNRL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Angle of cone within which to cull back facing weapon hit effects");
  __asm { vmovss  xmm1, cs:__real@42700000; value }
  DVARBOOL_cg_weapHitCullEnable = Dvar_RegisterBool("LKNKQKQQKN", 1, 0, "When true, cull back facing weapon hit fx.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cg_weapHitCullRadius = Dvar_RegisterFloat("ORNKMLNPS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The fixed radius used for occlusion culling of weapon hit fx.");
  DCONST_DVARBOOL_cg_viewmodelRoboticIK = Dvar_RegisterBool("cg_viewmodelRoboticIK", 0, 0x40004u, "Toggle robotic IK override on the viewmodel.");
  DVARBOOL_cg_lui_scope_reticles = Dvar_RegisterBool("NLNLTPOORT", 1, 0, "When true, will turn off code-rendering of the scope reticles (red dots) and use lui widgets instead");
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPSPINT_cg_maxAttachmentDisplays = Dvar_RegisterInt("cg_maxAttachmentDisplays", 3, 0, 10, 0x40004u, "Maximum number of attachments to display in a weapon's display name before changing to custom");
  v2016 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v2016 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm3, cs:__real@461c4000; max
    vmovss  xmm1, cs:__real@41800000; value
  }
  DCONST_DVARMPBOOL_cg_adjustClientImpactSound = Dvar_RegisterBool("NOPROTMONL", 1, v2016, "When true, will adjust impact sounds against the local player to more accurately reflect the source of attacks.  Does not currently support ricochet or exploding weapons.");
  __asm { vmovaps xmm2, xmm8; min }
  DCONST_DVARFLT_cg_adjustClientImpactSoundDistance = Dvar_RegisterFloat("cg_adjustClientImpactSoundDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "When adjusting client impact sound effects to play in the direction of the attacker, play the sound at this distance from the ear.");
  DVARBOOL_cg_enableViewModelBoneAndAnimDump = Dvar_RegisterBool("LLQNRQKOQR", 0, 4u, "Dumps the bone transformations and animation every frame when enabled.");
  DVARBOOL_cg_weapons_workers_enable = Dvar_RegisterBool("TMPRTPPTL", 1, 0, "Enables weapons workers");
  __asm
  {
    vmovss  xmm3, cs:__real@42f00000; max
    vmovss  xmm2, cs:__real@41700000; min
    vmovss  xmm1, cs:__real@427c0000; value
  }
  DVARBOOL_cg_gun_motion_enable_fov_compensation = Dvar_RegisterBool("MPPNTMTPTS", 1, 0x40u, "Adjusts the gun angles based on the fov ratio between the regular scene and depth hack scene.");
  v2023 = Dvar_RegisterFloat("POPROMRKQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "FOV used for the weapon (scope) rendering when the dual FOV rendering is activated.");
  __asm
  {
    vmovss  xmm3, cs:__real@42800000; max
    vmovss  xmm1, cs:__real@40800000; value
  }
  DVARFLT_cg_dualViewScopeFOV = v2023;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_cg_dualViewScopeTonemapFocusValue = Dvar_RegisterFloat("LLNLPRNKRS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Value used to set dvar r_tonemapFocus when the dual view scope is activated.");
  DVARBOOL_cg_weapAllowDefaultModelAttachments = Dvar_RegisterBool("OLSNNOLSTO", 0, 0, "Place attachments on the default weapon model.");
  v2027 = Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm6, cs:__real@3f000000
    vmovss  xmm3, cs:__real@461c4000; max
  }
  DVARBOOL_cg_weapOverrideDefaultModelMat = Dvar_RegisterBool("OKSKNRLPNR", v2027 != 1, 0, "Override the default model material to mask it when equipped.");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DVARFLT_cg_weapOverrideDefaultModelTrans = Dvar_RegisterFloat("LKKMTSKQTP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Time it takes in seconds to transition in the non-default weapon model once it is loaded after showing the default model.");
  DCONST_DVARBOOL_cg_weapForceDefaultModel = Dvar_RegisterBool("cg_weapForceDefaultModel", 0, 0x40004u, "Force the equipped weapon to use the default model.");
  DCONST_DVARBOOL_cg_debugBullets = Dvar_RegisterBool("cg_debugBullets", 0, 0x40004u, "Enable/disable rendering of debug bullet lines");
  DCONST_DVARBOOL_cg_debugBulletsHitLoc = Dvar_RegisterBool("cg_debugBulletsHitLoc", 0, 0x40004u, "Enable/disable rendering of the current point where the bullet will land. The hit location is calculated without any spread.");
  DCONST_DVARINT_cg_debugBulletsDrawDuration = Dvar_RegisterInt("cg_debugBulletsDrawDuration", 800, 0, 10000, 0x40004u, "The duration bullet lines stay on the screen.");
  DVARBOOL_cg_enableAdsAlignOffset = Dvar_RegisterBool("NTKQMLLQOP", 1, 4u, "Indicates whether the procedural ADS alignment offsets are applied to the view model.");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DVARFLT_cg_maxReflexSightDrift = Dvar_RegisterFloat("MNMKTKKNQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Defines how far the reticle projection on reflex sight can drift based on the angle it's looked at (in world units).");
  __asm { vmovss  xmm8, cs:__real@3e99999a }
  DCONST_DVARINT_cg_wmSmokeDelayAfterShot = Dvar_RegisterInt("cg_wmSmokeDelayAfterShot", 150, 0, 0x7FFFFFFF, 0x40004u, "Delay after a shot before worldmodel weapon smoke will begin (milliseconds).");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
    vmovss  xmm9, cs:__real@3e19999a
  }
  DCONST_DVARFLT_jogBlendTime = Dvar_RegisterFloat("jogBlendTime", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Generic jog blend time");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  DCONST_DVARFLT_jogAdsBlendTime = Dvar_RegisterFloat("jogAdsBlendTime", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Blend time from jog to ads");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  DCONST_DVARFLT_jogFireBlendTime = Dvar_RegisterFloat("jogFireBlendTime", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Blend time from jog to fire");
  __asm { vmovss  xmm14, cs:__real@3e4ccccd }
  DCONST_DVARBOOL_adsReloadUseAdditiveWalk = Dvar_RegisterBool("adsReloadUseAdditiveWalk", 1, 0x40004u, "If true, will blend in the additive walk animation during ADS Reloads.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DCONST_DVARFLT_superSprintBlendTime = Dvar_RegisterFloat("superSprintBlendTime", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Blend time in and out of super sprint.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_superSprintBlendOutSprintTime = Dvar_RegisterFloat("superSprintBlendOutSprintTime", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Speed to blend the existing sprint out.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DCONST_DVARFLT_superSprintControlForwardDeflection = Dvar_RegisterFloat("superSprintControlForwardDeflection", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Percentage of controller deflection from forward to neutral required to activate control.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DCONST_DVARFLT_superSprintControlMaxRightDeflection = Dvar_RegisterFloat("superSprintControlMaxRightDeflection", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Percentage of controller deflection from neutral to right that is allowed to activate control.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DCONST_DVARFLT_superSprintControlMaxInputTime = Dvar_RegisterFloat("superSprintControlMaxInputTime", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Seconds to input the total control sequence.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v2065 = Dvar_RegisterFloat("superSprintDoubleClickInputTime", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Seconds to input the total super sprint double click sequence.");
  __asm { vmovss  xmm2, cs:__real@3a83126f; min }
  DCONST_DVARFLT_superSprintDoubleClickInputTime = v2065;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm1, xmm8; value
  }
  DCONST_DVARFLT_offhandDetonateDoubleClickInputTime = Dvar_RegisterFloat("offhandDetonateDoubleClickInputTime", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Seconds to input the total offhand detonate double click sequence.");
  DVARBOOL_offhandDetonateDoubleClickEnable = Dvar_RegisterBool("NRKLOPNTNL", 0, 4u, "When true, offhand double tap detonate is enabled");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  v2072 = Dvar_RegisterFloat("cg_toggleScopeBlendInTime", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Blend in time to start playing the toggle scope on/off animations");
  __asm
  {
    vmovss  xmm9, cs:__real@3c23d70a
    vmovss  xmm1, cs:__real@3f733333; value
  }
  DCONST_DVARFLT_cg_toggleScopeBlendInTime = v2072;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm9; min
    vmovss  xmm14, cs:__real@3dcccccd
  }
  DCONST_DVARFLT_cg_toggleScopeBlendOutStartAnimNormalizedTime = Dvar_RegisterFloat("cg_toggleScopeBlendOutStartAnimNormalizedTime", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Determines how far into the toggle scope on/off animation we start to cross blend into idle. Only applicable when we gracefully settle without interruption.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DCONST_DVARFLT_cg_toggleScopeBlendOutTime = Dvar_RegisterFloat("cg_toggleScopeBlendOutTime", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Blend out time to settle into idle.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DCONST_DVARFLT_cg_mantleQuickBlendTime = Dvar_RegisterFloat("cg_mantleQuickBlendTime", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The time for cross blend when the player goes into the mantle animation.");
  DCONST_DVARBOOL_duckedRotationPivotDebug = Dvar_RegisterBool("duckedRotationPivotDebug", 0, 0x40004u, "Enable weapon ducked rotation debug");
  DCONST_DVARBOOL_cg_debugBallisticWhizby = Dvar_RegisterBool("cg_debugBallisticWhizby", 0, 0x40004u, "Enable/disable debug display for the ballistic whizby system");
  DCONST_DVARINT_cg_debugBallisticWhizbyDrawFrameCount = Dvar_RegisterInt("cg_debugBallisticWhizbyDrawFrameCount", 300, 0, 0x7FFFFFFF, 0x40004u, "Delay after a shot before worldmodel weapon smoke will begin (milliseconds).");
  __asm { vmovss  xmm0, cs:__real@ff7fffff }
  DCONST_DVARBOOL_cg_debugBallisticWhizbyEnableRefPoint = Dvar_RegisterBool("cg_debugBallisticWhizbyEnableRefPoint", 0, 0x40004u, "Enables whizby to be tested with a single client using a custom reference point.");
  __asm
  {
    vmovss  [rsp+178h+flags], xmm7
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  dword ptr [rsp+178h+fmt], xmm0
  }
  DCONST_DVARVEC3_cg_debugBallisticWhizbyRefPoint = Dvar_RegisterVec3("cg_debugBallisticWhizbyRefPoint", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbp, flagsbb, 0x40004u, "Replaces the whizby reference point (local player camera) with this location. Enables whizby to be tested with a single client");
  v2088 = ((g_currentRegion - 1) & 0xFFFFFFFC) != 0 || g_currentRegion == SaudiArabia;
  DVARBOOL_corpseImpactEffectsEnabled = Dvar_RegisterBool("NSOSPTMRMQ", v2088, 0x2000u, "If true, impact effects on player corpse entities is enabled.");
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
  __asm { vmovss  xmm1, cs:__real@40800000; value }
  DCONST_DVARINT_cg_missileQuickServerEntBlendInTimeMs = Dvar_RegisterInt("cg_missileQuickServerEntBlendInTimeMs", 100, 0, 1000, 0x40004u, "This is the server entity blend in time used for the predicted projectile system when the server entity is stationary or linked. It's used to reduce slides along surfaces due to the client/server trajectory difference.");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vmovaps xmm2, xmm15; min
  }
  DCONST_DVARFLT_cg_missileRotationBlendScale = Dvar_RegisterFloat("cg_missileRotationBlendScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Indicates how quicker the rotation is blended compared to the position.");
  DCONST_DVARBOOL_cg_predictedMissileDebug = Dvar_RegisterBool("cg_predictedMissileDebug", 0, 0x40004u, "Helps identifying cases where a server missile entity owned by the local player arrived but a matching predicted missile entity is not found");
  DCONST_DVARINT_cg_skydive_rmbTimeInMs = Dvar_RegisterInt("cg_skydive_rmbTimeInMs", 0, 0, 1000, 0x40004u, "The time to transition into the goal radial motion blur values");
  DCONST_DVARINT_cg_skydive_rmbTimeOutMs = Dvar_RegisterInt("cg_skydive_rmbTimeOutMs", 0, 0, 1000, 0x40004u, "The time to transition out of the goal radial motion blur values");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v2095 = Dvar_RegisterFloat("cg_skydive_super_dive_in_blend_in_time", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The time to blend out of the super dive out and to blend into free idle. The blend starts at such time that the blend finishes when the super dive out animation is finished.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DCONST_DVARFLT_cg_skydive_super_dive_in_blend_in_time = v2095;
  v2099 = Dvar_RegisterFloat("cg_skydive_super_dive_out_blend_out_time", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The time to blend out of the super dive out and to blend into free idle. The blend starts at such time that the blend finishes when the super dive out animation is finished.");
  __asm
  {
    vmovss  xmm3, cs:__real@41f00000; max
    vmovss  xmm1, cs:__real@41600000; value
  }
  DCONST_DVARFLT_cg_skydive_super_dive_out_blend_out_time = v2099;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_cg_skydive_super_dive_fov_delta = Dvar_RegisterFloat("LNMNLQP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "FOV change applied (in degrees) when in super dive mode.");
  DVARINT_cg_skydive_super_dive_fov_blend_in_time = Dvar_RegisterInt("MPNNNKPLQM", 1800, 0, 10000, 0, "Time to blend into the super dive FOV.");
  DVARINT_cg_skydive_super_dive_fov_blend_out_time = Dvar_RegisterInt("LSKTQNPKKN", 1000, 0, 10000, 0, "Time to blend out of the super dive FOV.");
  __asm
  {
    vmovss  xmm3, cs:__real@41f00000; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm10; value
  }
  DVARFLT_cg_skydive_parachute_cut_fov_delta = Dvar_RegisterFloat("MMPNQSNSNN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "FOV change applied (in degrees) after parachute cut (player must be looking down).");
  DVARINT_cg_skydive_parachute_cut_fov_blend_in_time = Dvar_RegisterInt("OOPPRRRSM", 1800, 0, 10000, 0, "Time to blend into the parachute cut FOV.");
  __asm
  {
    vmovss  xmm3, cs:__real@42b40000; max
    vmovss  xmm1, cs:__real@42340000; value
  }
  DVARINT_cg_skydive_parachute_cut_fov_blend_out_time = Dvar_RegisterInt("MLQKNLMPQR", 1000, 0, 10000, 0, "Time to blend out of the parachute cut FOV.");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_cg_skydive_parachute_cut_pitch_threshold = Dvar_RegisterFloat("MORKNPPSMR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Player's camera pitch must be greater than this value in order to apply the parachute cut FOV change.");
  DVARINT_cg_skydive_parachute_cut_look_down_grace_period = Dvar_RegisterInt("SQPLNKSOK", 800, 0, 10000, 0, "The grace period to look down in order to apply the parachute cut FOV change.");
  DVARINT_cg_skydive_parachute_cut_cam_shake_min_time = Dvar_RegisterInt("NTLRRMTQMM", 1000, 0, 10000, 0, "Minimum amount of time camera shake applied after a parachute cut action.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm10; value
  }
  v2112 = Dvar_RegisterFloat("MQLTOQPRLT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Parachute cut camera shake blend in speed.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm10; value
  }
  DVARFLT_cg_skydive_parachute_cut_cam_shake_blend_in_speed = v2112;
  v2116 = Dvar_RegisterFloat("LPOLPTMPKM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Parachute cut camera shake blend in speed.");
  __asm
  {
    vmovss  xmm3, cs:__real@47c35000; max
    vmovss  xmm1, cs:__real@44fa0000; value
  }
  DVARFLT_cg_skydive_parachute_cut_cam_shake_blend_out_speed = v2116;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_cg_skydive_parachute_cut_cam_shake_fake_speed = Dvar_RegisterFloat("SSOOSTOMR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Parachute cut camera shake fake speed.");
  DVARINT_cg_skydive_land_fov_blend_out_time = Dvar_RegisterInt("MKOLLTMMLM", 1000, 0, 10000, 0, "Time to blend out of skydive FOV changes when landed.");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  v2123 = Dvar_RegisterFloat("NMTQNKOOS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Skydive min strength for radial motion blur.");
  __asm { vmovss  xmm1, cs:__real@3cf5c28f; value }
  DVARFLT_cg_skydive_rmb_strength_min = v2123;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2127 = Dvar_RegisterFloat("MTNTQNKMPO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Skydive max strength for radial motion blur.");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_cg_skydive_rmb_strength_max = v2127;
  v2131 = Dvar_RegisterFloat("MKMSOLRQML", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Skydive min strength for radial motion blur.");
  __asm
  {
    vmovss  xmm1, cs:__real@3e800000; value
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cg_skydive_rmb_radius_min = v2131;
  DVARFLT_cg_skydive_rmb_radius_max = Dvar_RegisterFloat("NOLNTMSMPL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Skydive max strength for radial motion blur.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  DVARFLT_cg_skydive_rmb_freefall_weight_min = Dvar_RegisterFloat("NTSOOPTPOL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Minimum radial motion blur weight during freefall.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v2141 = Dvar_RegisterFloat("NTKRNNLQOQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Minimum radial motion blur weight during parachute cut.");
  __asm { vmovss  xmm1, cs:__real@40400000; value }
  DVARFLT_cg_skydive_rmb_parachute_cut_weight_min = v2141;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cg_skydive_rmb_track_speed = Dvar_RegisterFloat("MRKNLKLOLP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "RMB weight tracking speed.");
  __asm
  {
    vmovss  xmm6, cs:__real@bf800000
    vmovaps xmm2, xmm6; min
  }
  DCONST_DVARBOOL_cg_skydive_enable_debugAnimOverrides = Dvar_RegisterBool("cg_skydive_enable_debugAnimOverrides", 0, 0x40004u, "Allows manually overriding skydive animation tree. Used only for testing purposes.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  v2149 = Dvar_RegisterFloat("cg_skydive_debug_paramInputThrottle", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm6; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_cg_skydive_debug_paramInputThrottle = v2149;
  v2153 = Dvar_RegisterFloat("cg_skydive_debug_paramInputStrafe", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm6; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_cg_skydive_debug_paramInputStrafe = v2153;
  v2157 = Dvar_RegisterFloat("cg_skydive_debug_paramInputYaw", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm6; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_cg_skydive_debug_paramInputYaw = v2157;
  v2161 = Dvar_RegisterFloat("cg_skydive_debug_paramInputPitch", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovss  xmm3, cs:__real@42b40000; max
    vmovss  xmm2, cs:__real@c2b40000; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_cg_skydive_debug_paramInputPitch = v2161;
  v2165 = Dvar_RegisterFloat("cg_skydive_debug_paramCameraPitch", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_cg_skydive_debug_paramCameraPitch = v2165;
  v2169 = Dvar_RegisterFloat("cg_skydive_debug_throttleAnimWeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_cg_skydive_debug_throttleAnimWeight = v2169;
  v2173 = Dvar_RegisterFloat("cg_skydive_debug_strafeAnimWeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_cg_skydive_debug_strafeAnimWeight = v2173;
  v2177 = Dvar_RegisterFloat("cg_skydive_debug_yawAnimWeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_cg_skydive_debug_yawAnimWeight = v2177;
  v2181 = Dvar_RegisterFloat("cg_skydive_debug_pitchAnimWeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_cg_skydive_debug_pitchAnimWeight = v2181;
  DCONST_DVARFLT_cg_skydive_debug_lookAnimWeight = Dvar_RegisterFloat("cg_skydive_debug_lookAnimWeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v2188 = Dvar_RegisterFloat("cg_skydive_debug_velAnimWeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_cg_skydive_debug_velAnimWeight = v2188;
  DCONST_DVARFLT_cg_skydive_debug_velAnimPlayRate = Dvar_RegisterFloat("cg_skydive_debug_velAnimPlayRate", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, (const char *)&queryFormat.fmt + 3);
  DVARBOOL_cg_ladders_validate = Dvar_RegisterBool("MRQNQORKQM", 0, 4u, "Output warnings for all incorrectly formatted ladders in the level.");
  __asm { vmovss  xmm1, cs:__real@3f4ccccd; value }
  DCONST_DVARBOOL_cg_drawLadderSlideAudio = Dvar_RegisterBool("cg_drawLadderSlideAudio", 0, 0x40004u, "Debug draw the ladder slide audio information.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_ladderSpinTimePercent = Dvar_RegisterFloat("cg_ladderSpinTimePercent", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The percent of the ladder weapon aim/drop animation time that the view model will spin over to align to the ladder or the camera orientations.");
  v2195 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v2195 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm1, cs:__real@3f4a3d71; value
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2199 = Dvar_RegisterFloat("MMRNPTNSQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v2195, "Controls the intensity of ladder climb animations.");
  __asm { vmovss  xmm3, cs:__real@40000000; max }
  DCONST_DVARMPFLT_cg_ladderCameraAnimWeight = v2199;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v2203 = Dvar_RegisterFloat("cg_ladderCameraAnimBlendInTime", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "In seconds.  The time it takes for ladder climb animations to blend in.");
  __asm
  {
    vmovss  xmm3, cs:__real@40000000; max
    vmovss  xmm1, cs:__real@3e19999a; value
  }
  DCONST_DVARFLT_cg_ladderCameraAnimBlendInTime = v2203;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DCONST_DVARFLT_cg_ladderCameraAnimBlendOutTime = Dvar_RegisterFloat("cg_ladderCameraAnimBlendOutTime", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "In seconds.  The time it takes for ladder climb animations to blend out.");
  DVARBOOL_cg_train_killswitch_enabled = Dvar_RegisterBool("LRQMRKNTLL", 1, 0, "Enables the CG system which builds the train hierachy information by analyzing the snapshot. If this dvar is disabled the pose controller is also disabled");
  DVARBOOL_cg_train_killswitch_enable_pose_controller = Dvar_RegisterBool("RLPKRTSLO", 1, 0, "If enabled the pose controller to align the train couplings is active");
  DVARINT_cg_radialMenu_deactivationDelay = Dvar_RegisterInt("NLPKLPMKT", 250, 0, 1000, 4u, "Indicates how long after closing the radial menu do we keep capturing right stick input. Used so we don't imediately turn in that direction.");
  __asm
  {
    vmovss  xmm7, cs:__real@3e000000
    vmovss  xmm0, cs:__real@3f000000
    vmovss  xmm6, cs:__real@3df1a9fc
  }
  DVARINT_cg_radialMenu_selectionHold = Dvar_RegisterInt("MPSRKPSRQQ", 100, 0, 1000, 4u, "Indicates how long after releasing the right stick do we still hold the selection before clearing it out. Used so we still make a selection when releasing the stick and the d-pad at almost the same time");
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm15
    vmovss  [rsp+178h+flags], xmm12
    vmovaps xmm3, xmm6; z
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm7; x
    vmovss  dword ptr [rsp+178h+fmt], xmm0
  }
  DCONST_DVARVEC4_cg_radialMenu_color_bg_blur_darkening = Dvar_RegisterVec4("cg_radialMenu_color_bg_blur_darkening", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbq, flagsbc, descriptionk, 0x40004u, "The color for the background blur darkening.");
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm15
    vmovss  [rsp+178h+flags], xmm12
    vmovaps xmm3, xmm6; z
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm7; x
    vmovss  dword ptr [rsp+178h+fmt], xmm14
  }
  v2216 = Dvar_RegisterVec4("cg_radialMenu_color_bg_outline_blur_darkening", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbr, flagsbd, descriptionl, 0x40004u, "The color for the background outline blur darkening.");
  __asm
  {
    vmovss  xmm0, cs:__real@3e19999a
    vmovss  xmm3, cs:__real@3eeb851f; z
  }
  DCONST_DVARVEC4_cg_radialMenu_color_bg_outline_blur_darkening = v2216;
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm15
    vmovss  [rsp+178h+flags], xmm12
    vmovaps xmm2, xmm8; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  dword ptr [rsp+178h+fmt], xmm0
    vmovss  xmm0, cs:__real@3f19999a
  }
  DCONST_DVARVEC4_cg_radialMenu_color_bg_pixel_grid = Dvar_RegisterVec4("cg_radialMenu_color_bg_pixel_grid", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbs, flagsbe, descriptionm, 0x40004u, "The color for the background pixel grid.");
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm15
    vmovss  [rsp+178h+flags], xmm12
    vmovaps xmm3, xmm6; z
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm7; x
    vmovss  dword ptr [rsp+178h+fmt], xmm0
  }
  v2225 = Dvar_RegisterVec4("cg_radialMenu_color_masked_foreground", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbt, flagsbf, descriptionn, 0x40004u, "The color for the masked foreground.");
  __asm
  {
    vmovss  xmm8, cs:__real@3f30a3d7
    vmovss  xmm2, cs:__real@3ee147ae; y
  }
  DCONST_DVARVEC4_cg_radialMenu_color_masked_foreground = v2225;
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm15
    vmovss  [rsp+178h+flags], xmm12
    vmovaps xmm3, xmm8; z
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  dword ptr [rsp+178h+fmt], xmm15
  }
  DCONST_DVARVEC4_cg_radialMenu_color_outline_circles = Dvar_RegisterVec4("cg_radialMenu_color_outline_circles", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbu, flagsbg, descriptiono, 0x40004u, "The color for the outline circles.");
  __asm
  {
    vmovss  xmm0, cs:__real@3e19999a
    vmovss  xmm3, cs:__real@3f46a7f0; z
    vmovss  xmm2, cs:__real@3f4a3d71; y
    vmovss  xmm1, cs:__real@3f47ae14; x
    vmovss  dword ptr [rsp+178h+description], xmm15
    vmovss  [rsp+178h+flags], xmm12
    vmovss  dword ptr [rsp+178h+fmt], xmm0
  }
  v2234 = Dvar_RegisterVec4("cg_radialMenu_color_select_pixel_grid_plain", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbv, flagsbh, descriptionp, 0x40004u, "The color for the selection pixel grid - plain style.");
  __asm
  {
    vmovss  xmm0, cs:__real@3f000000
    vmovss  xmm2, cs:__real@3ee147ae; y
  }
  DCONST_DVARVEC4_cg_radialMenu_color_select_pixel_grid_plain = v2234;
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm15
    vmovss  [rsp+178h+flags], xmm12
    vmovaps xmm3, xmm8; z
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  dword ptr [rsp+178h+fmt], xmm0
  }
  v2239 = Dvar_RegisterVec4("cg_radialMenu_color_select_pixel_grid_glow", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbw, flagsbi, descriptionq, 0x40004u, "The color for the selection pixel grid - glow style.");
  __asm
  {
    vmovss  xmm0, cs:__real@3f19999a
    vmovss  xmm3, cs:__real@3f6b851f; z
    vmovss  xmm1, cs:__real@3ea8f5c3; x
  }
  DCONST_DVARVEC4_cg_radialMenu_color_select_pixel_grid_glow = v2239;
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm15
    vmovss  [rsp+178h+flags], xmm12
    vmovaps xmm2, xmm8; y
    vmovss  dword ptr [rsp+178h+fmt], xmm0
  }
  v2244 = Dvar_RegisterVec4("cg_radialMenu_color_edge_glow_lines", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbx, flagsbj, descriptionr, 0x40004u, "The color for the edge glow lines.");
  __asm
  {
    vmovss  xmm3, cs:__real@3f6b851f; z
    vmovss  xmm1, cs:__real@3ea8f5c3; x
  }
  DCONST_DVARVEC4_cg_radialMenu_color_edge_glow_lines = v2244;
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm15
    vmovss  [rsp+178h+flags], xmm12
    vmovaps xmm2, xmm8; y
    vmovss  dword ptr [rsp+178h+fmt], xmm15
  }
  DCONST_DVARVEC4_cg_radialMenu_color_selection_arrow = Dvar_RegisterVec4("cg_radialMenu_color_selection_arrow", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtby, flagsbk, descriptions, 0x40004u, "The color for the selection arrow.");
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm15
    vmovss  [rsp+178h+flags], xmm12
    vmovaps xmm3, xmm15; z
    vmovaps xmm2, xmm15; y
    vmovaps xmm1, xmm15; x
    vmovss  dword ptr [rsp+178h+fmt], xmm15
  }
  DCONST_DVARVEC4_cg_radialMenu_color_expanded_selection = Dvar_RegisterVec4("cg_radialMenu_color_expanded_selection", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtbz, flagsbl, descriptiont, 0x40004u, "The color for the expanded selection.");
  v2251 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v2251 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm3, cs:__real@40000000; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  DCONST_DVARMPFLT_aim_aimAssistRangeScale = Dvar_RegisterFloat("LSTNPLKNLS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v2251, "Scales the weapon's aim assist range");
  __asm
  {
    vmovss  xmm6, cs:__real@44870000
    vmovss  xmm9, cs:__real@42b40000
  }
  DCONST_DVARINT_aim_input_graph_index = Dvar_RegisterInt("aim_input_graph_index", 0, 0, 3, 0x40004u, "Which input graph to use");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  v2260 = Dvar_RegisterFloat("aim_turnrate_pitch", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The vertical turn rate for aim assist when firing from the hip");
  __asm { vmovss  xmm1, cs:__real@425c0000; value }
  DCONST_DVARFLT_aim_turnrate_pitch = v2260;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2264 = Dvar_RegisterFloat("aim_turnrate_pitch_ads", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The turn rate up and down for aim assist when aiming down the sight");
  __asm { vmovss  xmm1, cs:__real@43820000; value }
  DCONST_DVARFLT_aim_turnrate_pitch_ads = v2264;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_aim_turnrate_yaw = Dvar_RegisterFloat("aim_turnrate_yaw", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The horizontal turn rate for aim assist when firing from the hip");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  v2271 = Dvar_RegisterFloat("aim_turnrate_yaw_ads", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The horizontal turn rate for aim assist when aiming down the sight");
  __asm
  {
    vmovss  xmm3, cs:__real@457a0000; max
    vmovss  xmm1, cs:__real@44960000; value
  }
  DCONST_DVARFLT_aim_turnrate_yaw_ads = v2271;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v2275 = Dvar_RegisterFloat("aim_accel_turnrate_lerp", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The acceleration of the turnrates");
  __asm { vmovss  xmm3, cs:__real@44200000; max }
  DCONST_DVARFLT_aim_accel_turnrate_lerp = v2275;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  DCONST_DVARFLT_aim_slowdown_region_width = Dvar_RegisterFloat("aim_slowdown_region_width", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The screen width of the aim slowdown region");
  v2279 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v2279 = 262276;
  __asm
  {
    vmovss  xmm7, cs:__real@42853333
    vmovss  xmm3, cs:__real@43f00000; max
  }
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, r15d
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm7, xmm9, xmm2
    vmovaps xmm1, xmm0; value
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  [rsp+178h+var_128], xmm0
  }
  DCONST_DVARMPFLT_aim_slowdown_region_height = Dvar_RegisterFloat("OMKSOSNLRR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v2279, "The screen height of the aim assist slowdown region");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DCONST_DVARFLT_aim_slowdown_prioritization_dist_prop = Dvar_RegisterFloat("aim_slowdown_prioritization_dist_prop", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Auto aim prioritization - entities considered close if within this proportion of distance");
  v2292 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v2292 = 262276;
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, r15d
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm0, cs:__real@3e99999a
    vblendvps xmm0, xmm0, xmm14, xmm2
    vmovaps xmm1, xmm0; value
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  [rsp+178h+var_128], xmm0
  }
  v2302 = Dvar_RegisterFloat("NQLLTLSRQS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v2292, "Auto aim prioritization - entities considered crosshair close if within this proportion of crosshair distance");
  __asm { vmovss  xmm1, cs:__real@3e800000; value }
  DCONST_DVARMPFLT_aim_slowdown_prioritization_crosshair_dist_prop = v2302;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2306 = Dvar_RegisterFloat("aim_slowdown_prioritization_non_character_neg", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Auto aim prioritization - amount of negation applied to non characters considered close to other entities");
  __asm { vmovss  xmm1, cs:__real@41a00000; value }
  DCONST_DVARFLT_aim_slowdown_prioritization_non_character_neg = v2306;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2310 = Dvar_RegisterFloat("aim_autoaim_lerp", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The rate in degrees per second that the auto aim will converge to its target");
  __asm
  {
    vmovss  xmm3, cs:__real@44200000; max
    vmovss  xmm1, cs:__real@42f00000; value
  }
  DCONST_DVARFLT_aim_autoaim_lerp = v2310;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v2314 = Dvar_RegisterFloat("aim_autoaim_region_width", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The width of the auto aim region in virtual screen coordinates (0 - 640)");
  __asm
  {
    vmovss  xmm3, cs:__real@43f00000; max
    vmovss  xmm1, cs:__real@42a00000; value
  }
  DCONST_DVARFLT_aim_autoaim_region_width = v2314;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DCONST_DVARFLT_aim_autoaim_region_height = Dvar_RegisterFloat("aim_autoaim_region_height", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The height of the auto aim region in virtual screen coordinates (0 - 480)");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  DCONST_DVARFLT_aim_autoaim_bone_dist_ratio = Dvar_RegisterFloat("aim_autoaim_bone_dist_ratio", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Ratio of the size of the bounding box to the distance from the player at which we will use the detailed model bones for aim target.");
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
  __asm
  {
    vmovss  xmm9, cs:__real@7f7fffff
    vmovss  xmm1, cs:__real@47c35000; value
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_aim_lockon_max_pitch_speed_up = Dvar_RegisterFloat("aim_lockon_max_pitch_speed_up", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The maximum angular velocity applied for pitch lockon, in degrees per second.");
  v2325 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v2325 = 262276;
  __asm { vmovd   xmm1, r15d }
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, cs:__real@43480000
    vmovss  xmm0, cs:__real@47c35000
    vblendvps xmm0, xmm1, xmm0, xmm2
    vmovaps xmm1, xmm0; value
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  [rsp+178h+var_128], xmm0
  }
  v2336 = Dvar_RegisterFloat("NPOMMNSONS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v2325, "The maximum angular velocity applied for pitch lockon, in degrees per second.");
  __asm { vmovss  xmm1, cs:__real@47c35000; value }
  DCONST_DVARMPFLT_aim_lockon_max_pitch_speed_down = v2336;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_aim_lockon_max_yaw_speed = Dvar_RegisterFloat("aim_lockon_max_yaw_speed", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The maximum angular velocity applied for yaw lockon, in degrees per second.");
  v2340 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v2340 = 262276;
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, r15d
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm0, cs:__real@3f333333
    vblendvps xmm0, xmm0, xmm12, xmm2
    vmovaps xmm1, xmm0; value
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  [rsp+178h+var_128], xmm0
  }
  v2350 = Dvar_RegisterFloat("MKONTLSQQN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v2340, "Scales the size of the aim assist bounds. This scales from the bottom up, the top will remain in the same location.");
  __asm
  {
    vmovss  xmm2, cs:__real@3d4ccccd; min
    vmovss  xmm1, cs:__real@40a00000; value
  }
  DCONST_DVARMPFLT_aim_boundsOffsetScale = v2350;
  __asm { vmovaps xmm3, xmm9; max }
  v2354 = Dvar_RegisterFloat("aim_boundsMinBoxHeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Min height an aim assist target bounds can be.");
  __asm { vmovss  xmm1, cs:__real@40c00000; value }
  DCONST_DVARFLT_aim_boundsMinBoxHeight = v2354;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_aim_actorBoundsZPadding = Dvar_RegisterFloat("aim_actorBoundsZPadding", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Padding to apply to actor bounds along the Z-axis.");
  DCONST_DVARBOOL_aim_advanced_slowdown_enabled = Dvar_RegisterBool("aim_advanced_slowdown_enabled", 0, 0x40004u, "Turn on advanced auto aim technique");
  __asm
  {
    vmovss  xmm3, cs:__real@44200000; max
    vmovss  xmm1, cs:__real@41400000; value
  }
  DCONST_DVARBOOL_aim_enhanced_slowdown_enabled = Dvar_RegisterBool("aim_enhanced_slowdown_enabled", 0, 0x40004u, "Turn on enhanced auto aim technique");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v2361 = Dvar_RegisterFloat("aim_advanced_slowdown_region_width", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The screen width of the advanced aim slowdown region");
  __asm
  {
    vmovss  xmm3, cs:__real@43f00000; max
    vmovss  xmm1, cs:__real@41400000; value
  }
  DCONST_DVARFLT_aim_advanced_slowdown_region_width = v2361;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v2365 = Dvar_RegisterFloat("aim_advanced_slowdown_region_height", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The screen height of the advanced aim assist slowdown region");
  __asm { vmovss  xmm2, cs:__real@3d4ccccd; min }
  DCONST_DVARFLT_aim_advanced_slowdown_region_height = v2365;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm1, xmm2; value
  }
  v2369 = Dvar_RegisterFloat("aim_slowdown_standard_smoothing_percent_step", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Percent to step aim assist slowdown values each frame, for smoothing");
  __asm { vmovss  xmm1, cs:__real@41a00000; value }
  DCONST_DVARFLT_aim_slowdown_standard_smoothing_percent_step = v2369;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2373 = Dvar_RegisterFloat("aim_slowdown_blend_rate", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Speed that advanced slowdown algorithm will blend in.");
  __asm
  {
    vmovss  xmm3, cs:__real@43fa0000; max
    vmovss  xmm1, cs:__real@43200000; value
  }
  DCONST_DVARFLT_aim_slowdown_blend_rate = v2373;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v2377 = Dvar_RegisterFloat("aim_slowdown_target_motion_horiz_speed_max", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Top speed (units / sec) the target has to move to max out the target speed based aim assist slowdown");
  __asm { vmovss  xmm1, cs:__real@3ecccccd; value }
  DCONST_DVARFLT_aim_slowdown_target_motion_horiz_speed_max = v2377;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2381 = Dvar_RegisterFloat("aim_slowdown_target_motion_sweet_spot_offset_x", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Percentage across the targets body the sweet spot moves based on target motion");
  __asm
  {
    vmovss  xmm2, cs:__real@bf800000; min
    vmovss  xmm1, cs:__real@be800000; value
  }
  DCONST_DVARFLT_aim_slowdown_target_motion_sweet_spot_offset_x = v2381;
  __asm { vmovaps xmm3, xmm15; max }
  v2385 = Dvar_RegisterFloat("aim_slowdown_controller_sweet_spot_offset_x", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Percentage across the targets body the sweet spot moves based on controller input");
  __asm
  {
    vmovss  xmm2, cs:__real@bf800000; min
    vmovss  xmm1, cs:__real@be4ccccd; value
    vmovaps xmm3, xmm15; max
  }
  DCONST_DVARFLT_aim_slowdown_controller_sweet_spot_offset_x = v2385;
  DCONST_DVARFLT_aim_slowdown_controller_sweet_spot_offset_y = Dvar_RegisterFloat("aim_slowdown_controller_sweet_spot_offset_y", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Percentage across the targets body the sweet spot moves based on controller input");
  __asm
  {
    vmovss  xmm1, cs:__real@3f333333; value
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2392 = Dvar_RegisterFloat("aim_slowdown_max_factor_yaw", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max percentage to slow down yaw aim when motion or sweet spot slow down applies");
  __asm { vmovss  xmm1, cs:__real@3f19999a; value }
  DCONST_DVARFLT_aim_slowdown_max_factor_yaw = v2392;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2396 = Dvar_RegisterFloat("aim_slowdown_max_factor_pitch", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max percentage to slow down pitch aim when motion or sweet spot slow down applies");
  __asm { vmovss  xmm1, cs:__real@3f19999a; value }
  DCONST_DVARFLT_aim_slowdown_max_factor_pitch = v2396;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2400 = Dvar_RegisterFloat("aim_slowdown_standard_slowdown_yaw", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max percentage to slow down pitch aim when NEITHER motion or sweet spot slow down applies");
  __asm
  {
    vmovss  xmm1, cs:__real@3ee66666; value
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_aim_slowdown_standard_slowdown_yaw = v2400;
  v2404 = Dvar_RegisterFloat("aim_slowdown_standard_slowdown_pitch", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max percentage to slow down pitch aim when NEITHER motion or sweet spot slow down applies");
  __asm { vmovss  xmm1, cs:__real@3f0ccccd; value }
  DCONST_DVARFLT_aim_slowdown_standard_slowdown_pitch = v2404;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2408 = Dvar_RegisterFloat("aim_slowdown_max_factor_near_miss_yaw", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Flat percentage to slow down yaw aim when near miss assist is applied");
  __asm { vmovss  xmm1, cs:__real@3ecccccd; value }
  DCONST_DVARFLT_aim_slowdown_max_factor_near_miss_yaw = v2408;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2412 = Dvar_RegisterFloat("aim_slowdown_max_factor_near_miss_pitch", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Flat percentage to slow down pitch aim when near miss assist is applied");
  __asm { vmovss  xmm1, cs:__real@3e800000; value }
  DCONST_DVARFLT_aim_slowdown_max_factor_near_miss_pitch = v2412;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2416 = Dvar_RegisterFloat("aim_slowdown_far_assist_max_range_factor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Percentage of aim assist range where max far assist slow down is applied");
  __asm { vmovss  xmm1, cs:__real@3e4ccccd; value }
  DCONST_DVARFLT_aim_slowdown_far_assist_max_range_factor = v2416;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2420 = Dvar_RegisterFloat("aim_slowdown_far_assist_min_range_factor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Percentage of aim assist range where far assist slow down starts to be applied");
  __asm
  {
    vmovss  xmm3, cs:__real@43480000; max
    vmovss  xmm1, cs:__real@42b40000; value
  }
  DCONST_DVARFLT_aim_slowdown_far_assist_min_range_factor = v2420;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v2424 = Dvar_RegisterFloat("aim_slowdown_far_region_width", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The screen height of the FAR aim assist slowdown region");
  __asm { vmovss  xmm3, cs:__real@43480000; max }
  DCONST_DVARFLT_aim_slowdown_far_region_width = v2424;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  v2428 = Dvar_RegisterFloat("aim_slowdown_far_region_height", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The screen height of the FAR aim assist slowdown region");
  __asm { vmovss  xmm3, cs:__real@3f8ccccd; max }
  DCONST_DVARFLT_aim_slowdown_far_region_height = v2428;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm3; value
  }
  v2432 = Dvar_RegisterFloat("aim_slowdown_full_stick_threshold", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The magnitude of the input above which ignores all aim assist");
  __asm
  {
    vmovss  xmm2, cs:__real@bf800000; min
    vmovss  xmm1, cs:__real@bdcccccd; value
  }
  DCONST_DVARFLT_aim_slowdown_full_stick_threshold = v2432;
  __asm { vxorps  xmm3, xmm3, xmm3; max }
  v2436 = Dvar_RegisterFloat("aim_slowdown_near_miss_deflection_dot", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Dot product that describes near miss angle for enhanced aim assist; dot angle greater than this angle will apply slowdown");
  __asm
  {
    vmovss  xmm3, cs:__real@461c4000; max
    vmovss  xmm1, cs:__real@45000000; value
  }
  DCONST_DVARFLT_aim_slowdown_near_miss_deflection_dot = v2436;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v2440 = Dvar_RegisterFloat("aim_slowdown_box_reduction_range_min", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Longest range of aim assist target to shrink slowdown box");
  __asm
  {
    vmovss  xmm3, cs:__real@461c4000; max
    vmovss  xmm1, cs:__real@45800000; value
  }
  DCONST_DVARFLT_aim_slowdown_box_reduction_range_min = v2440;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v2444 = Dvar_RegisterFloat("aim_slowdown_box_reduction_range_max", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Closest range of aim assist target where slowdown box size is normal");
  __asm { vmovss  xmm1, cs:__real@3ee66666; value }
  DCONST_DVARFLT_aim_slowdown_box_reduction_range_max = v2444;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_aim_slowdown_box_reduction_max_percent = Dvar_RegisterFloat("aim_slowdown_box_reduction_max_percent", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Percentage to shrink the aim assist and lock on boxes at max range");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v2451 = Dvar_RegisterFloat("aim_lockon_height_change_strength", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The amount of aim assistance given by the target lock on when target changes height usually through stance change");
  __asm { vmovss  xmm3, cs:__real@40000000; max }
  DCONST_DVARFLT_aim_lockon_height_change_strength = v2451;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  v2455 = Dvar_RegisterFloat("MRNRLLPTNK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Scales the weapon's auto aim range");
  __asm { vmovss  xmm1, cs:__real@3d4ccccd; value }
  DVARFLT_aim_autoAimRangeScale = v2455;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2459 = Dvar_RegisterFloat("NQOMMSSMNT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "The amount of stick deflection for the lockon to activate");
  __asm { vmovss  xmm3, cs:__real@44200000; max }
  DVARFLT_aim_lockon_deflection = v2459;
  __asm
  {
    vmovss  xmm1, cs:__real@42b40000; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2463 = Dvar_RegisterFloat("MKRKSPRLLT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "The width of the auto aim region in virtual screen coordinates(0-640)");
  __asm
  {
    vmovss  xmm3, cs:__real@43f00000; max
    vmovss  xmm1, cs:__real@42b40000; value
  }
  DVARFLT_aim_lockon_region_width = v2463;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_aim_lockon_region_height = Dvar_RegisterFloat("MRROROQKQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "The height of the auto aim region in virtual screen coordinates(0-480)");
  v2467 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v2467 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  DCONST_DVARMPFLT_aim_lockon_strength_mult = Dvar_RegisterFloat("MMOOKLNONM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v2467, "Extra multiplier for the amount of aim assistance given by the target lock on, default is no change.");
  v2471 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v2471 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  DCONST_DVARMPFLT_aim_lockon_strength_pitch_mult = Dvar_RegisterFloat("LKPTPTSPOP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v2471, "Extra multiplier for the amount of aim assistance given by the target lock on for pitch.");
  DVARBOOL_aim_resist_pitch_enabled = Dvar_RegisterBool("OKSTSKLQQQ", 1, 4u, "Aim resist pitch applies resistance to the input at the edges of the view cone when the view cone is locked");
  __asm { vmovss  xmm1, cs:__real@3c23d70a; value }
  DVARBOOL_aim_resist_yaw_enabled = Dvar_RegisterBool("QOQRRPPPT", 1, 4u, "Aim resist yaw applies resistance to the input at the edges of the view cone when the view cone is locked");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_aim_resist_view_threshold = Dvar_RegisterFloat("NMQORRQKRT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The minimum input threshold to apply resistance to (0-1)");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm2, xmm15; y
    vmovaps xmm1, xmm15; x
    vmovss  dword ptr [rsp+178h+fmt], xmm15
  }
  DVARVEC2_aim_slowdown_wallrun_scale = Dvar_RegisterVec2("MQRSRNLR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtca, 4u, "Scale aim slowdown by this value while wallrunning (pitch, yaw).");
  __asm
  {
    vmovss  dword ptr [rsp+178h+fmt], xmm15
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm2, xmm15; y
    vmovaps xmm1, xmm15; x
  }
  DVARVEC2_aim_lockon_wallrun_scale = Dvar_RegisterVec2("NNKSRRNOLO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtcb, 4u, "Scale aim lockon by this value while wallrunning (pitch, yaw).");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm2, xmm15; y
    vmovaps xmm1, xmm15; x
    vmovss  dword ptr [rsp+178h+fmt], xmm15
  }
  DVARVEC2_aim_slowdown_wallrunjump_scale = Dvar_RegisterVec2("MTOQSKOLL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtcc, 4u, "Scale aim slowdown by this value after jump/fall from a wallrun (pitch, yaw).");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm2, xmm15; y
    vmovaps xmm1, xmm15; x
    vmovss  dword ptr [rsp+178h+fmt], xmm15
  }
  DVARVEC2_aim_lockon_wallrunjump_scale = Dvar_RegisterVec2("NSLSMQTMSS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtcd, 4u, "Scale aim lockon by this value after jump/fall from a wallrun (pitch, yaw).");
  DVARINT_aim_wallrunjump_duration = Dvar_RegisterInt("LPNTMKLSSR", 1500, 0, 0x7FFFFFFF, 4u, "Duration (milliseconds) that aim_*_wallrunjump_scale is applied after beginning wallrun jump/fall.");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm2, xmm15; y
    vmovaps xmm1, xmm15; x
    vmovss  dword ptr [rsp+178h+fmt], xmm15
  }
  DVARVEC2_aim_slowdown_thrustjump_scale = Dvar_RegisterVec2("MKKPMNNPQK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtce, 4u, "Scale aim slowdown by this value while thrust jumping (pitch, yaw).");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm2, xmm15; y
    vmovaps xmm1, xmm15; x
    vmovss  dword ptr [rsp+178h+fmt], xmm15
  }
  DVARVEC2_aim_lockon_thrustjump_scale = Dvar_RegisterVec2("MLOMMRLKRL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtcf, 4u, "Scale aim lockon by this value while thrust jumping (pitch, yaw).");
  DVARINT_aim_thrustjump_duration = Dvar_RegisterInt("NOTMMNOSQO", 1500, 0, 0x7FFFFFFF, 4u, "Duration (milliseconds) that aim_*_thrustjump_scale is applied after releasing jump thrust.");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm2, xmm15; y
    vmovaps xmm1, xmm15; x
    vmovss  dword ptr [rsp+178h+fmt], xmm15
  }
  DVARVEC2_aim_slowdown_slide_scale = Dvar_RegisterVec2("LOOSQMLOLN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtcg, 4u, "Scale aim slowdown by this value while sliding (pitch, yaw).");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm2, xmm15; y
    vmovaps xmm1, xmm15; x
    vmovss  dword ptr [rsp+178h+fmt], xmm15
  }
  DVARVEC2_aim_lockon_slide_scale = Dvar_RegisterVec2("TKPMPLQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtch, 4u, "Scale aim lockon by this value while sliding (pitch, yaw).");
  DVARBOOL_cg_vectorFieldsForceUniform = Dvar_RegisterBool("MKTLKSMQLP", 0, 0x40u, "Forces all vector field assets to represent a single, uniform direction");
  __asm { vmovss  xmm1, cs:__real@42700000; value }
  DVARINT_cg_vectorFieldsDraw = Dvar_RegisterInt("OLTNTMNKOQ", 0, 0, 2, 4u, "Enables debug drawing of vector field instances. (0=off, 1=no depth test, 2=depth test)");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cg_vectorFieldsDrawForceScale = Dvar_RegisterFloat("LOKPMTSNSR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Scaling factor on the size of the vectors for force type vector fields");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  v2508 = Dvar_RegisterFloat("NKRPSQMNMP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Scaling factor on the size of the vectors for velocity type vector fields");
  __asm
  {
    vmovss  xmm3, cs:__real@47c35000; max
    vmovss  xmm1, cs:__real@459c4000; value
  }
  DVARFLT_cg_vectorFieldsDrawVelocityScale = v2508;
  __asm { vmovaps xmm2, xmm15; min }
  v2512 = Dvar_RegisterFloat("OLPPQMOMTR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Distance at which the boxes of vector fields stop drawing.");
  __asm { vmovss  xmm3, cs:__real@47c35000; max }
  DVARFLT_cg_vectorFieldsDrawBoxDist = v2512;
  __asm
  {
    vmovaps xmm2, xmm15; min
    vmovaps xmm1, xmm11; value
    vmovss  xmm0, cs:__real@3f400000
  }
  DVARFLT_cg_vectorFieldsDrawEntryDist = Dvar_RegisterFloat("NMORSNOTOS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Distance at which the entries of vector fields stop drawing.");
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm15
    vmovss  [rsp+178h+flags], xmm12
    vmovaps xmm3, xmm0; z
    vmovaps xmm2, xmm0; y
    vmovaps xmm1, xmm0; x
    vmovss  dword ptr [rsp+178h+fmt], xmm15
  }
  DCONST_DVARVEC4_cg_hudGrenadeColorThrowback = Dvar_RegisterVec4("cg_hudGrenadeColorThrowback", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtci, flagsbm, descriptionu, 0x40004u, "The color of the grenade throwback icon");
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm15
    vmovss  [rsp+178h+flags], xmm12
    vmovaps xmm3, xmm14; z
    vmovaps xmm2, xmm14; y
    vmovaps xmm1, xmm15; x
    vmovss  dword ptr [rsp+178h+fmt], xmm15
  }
  DCONST_DVARVEC4_cg_hudGrenadeColorInProximity = Dvar_RegisterVec4("cg_hudGrenadeColorInProximity", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtcj, flagsbn, descriptionv, 0x40004u, "The color of the grenade icon when in proximity to a grenade");
  __asm
  {
    vmovss  dword ptr [rsp+178h+description], xmm15
    vmovss  [rsp+178h+flags], xmm12
    vmovss  dword ptr [rsp+178h+fmt], xmm15
    vmovaps xmm3, xmm14; z
    vmovaps xmm2, xmm14; y
    vmovaps xmm1, xmm15; x
  }
  v2526 = Dvar_RegisterVec4("cg_hudGrenadeColorDangerClose", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtck, flagsbo, descriptionw, 0x40004u, "The color of the grenade icon when the player will be in danger of dying");
  __asm { vmovss  xmm1, cs:__real@428c0000; value }
  DCONST_DVARVEC4_cg_hudGrenadeColorDangerClose = v2526;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_hudGrenadeDangerCloseDistance = Dvar_RegisterFloat("cg_hudGrenadeDangerCloseDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The distance within which the icon color will always be cg_hudGrenadeColorDangerClose");
  v2530 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v2530 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPBOOL_cg_drawDamageFlash = Dvar_RegisterBool("MRSTSRLQKL", 0, v2530, "Draw flash when hit.");
  __asm
  {
    vmovss  xmm7, cs:__real@44000000
    vmovss  xmm1, cs:__real@43000000; value
  }
  DCONST_DVARBOOL_cg_hudDamageIconInScope = Dvar_RegisterBool("cg_hudDamageIconInScope", 0, 0x40004u, "Draw damage icons when aiming down the sight of a scoped weapon");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2535 = Dvar_RegisterFloat("cg_hudDamageIconWidth", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The width of the damage icon");
  __asm { vmovss  xmm1, cs:__real@42800000; value }
  DCONST_DVARFLT_cg_hudDamageIconWidth = v2535;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2539 = Dvar_RegisterFloat("cg_hudDamageIconHeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The height of the damage icon");
  __asm { vmovss  xmm1, cs:__real@43000000; value }
  DCONST_DVARFLT_cg_hudDamageIconHeight = v2539;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2543 = Dvar_RegisterFloat("cg_hudDamageIconOffset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The offset from the center of the damage icon");
  __asm { vmovss  xmm1, cs:__real@43be0000; value }
  DCONST_DVARFLT_cg_hudDamageIconOffset = v2543;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2547 = Dvar_RegisterFloat("cg_hudRicochetDamageIconWidth", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The width of the ricochet damage icon");
  __asm { vmovss  xmm1, cs:__real@433e0000; value }
  DCONST_DVARFLT_cg_hudRicochetDamageIconWidth = v2547;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_hudRicochetDamageIconHeight = Dvar_RegisterFloat("cg_hudRicochetDamageIconHeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The height of the ricochet damage icon");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v2554 = Dvar_RegisterFloat("cg_hudRicochetDamageIconOffset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The offset from the center of the ricochet damage icon");
  __asm { vmovss  xmm1, cs:__real@42d00000; value }
  DCONST_DVARFLT_cg_hudRicochetDamageIconOffset = v2554;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_hudGrenadeIconMaxHeight = Dvar_RegisterFloat("cg_hudGrenadeIconMaxHeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The minimum height difference between a player and a grenade for the grenade to be shown on the grenade indicator");
  __asm
  {
    vmovss  xmm3, cs:__real@44fa0000; max
    vmovss  xmm1, cs:__real@43fa0000; value
  }
  DCONST_DVARBOOL_cg_hudGrenadeIconEnabledFlash = Dvar_RegisterBool("cg_hudGrenadeIconEnabledFlash", 0, 0x40004u, "Show the grenade indicator for flash grenades");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DCONST_DVARFLT_cg_hudGrenadeIconMaxRangeFlash = Dvar_RegisterFloat("cg_hudGrenadeIconMaxRangeFlash", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The maximum distance that a flashbang can be from a player in order to be shown on the grenade indicator");
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v60 = 262276;
  __asm { vmovss  xmm2, cs:__real@438c0000 }
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, r15d
    vpcmpeqd xmm4, xmm0, xmm1
    vmovss  xmm0, cs:__real@437a0000
    vblendvps xmm0, xmm0, xmm2, xmm4
    vmovaps xmm1, xmm0; value
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  [rsp+178h+var_128], xmm0
  }
  v2571 = Dvar_RegisterFloat("LLQPMRNTP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v60, "The minimum distance that a grenade has to be from a player in order to be shown on the grenade indicator");
  __asm
  {
    vmovss  xmm3, cs:__real@42480000; max
    vmovss  xmm1, cs:__real@3fd9999a; value
  }
  DCONST_DVARMPFLT_cg_hudGrenadeIconMaxRangeFrag = v2571;
  __asm { vmovaps xmm2, xmm14; min }
  v2575 = Dvar_RegisterFloat("cg_hudGrenadePointerPulseFreq", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The number of times per second that the grenade indicator flashes in Hertz");
  __asm
  {
    vmovss  xmm3, cs:__real@40400000; max
    vmovss  xmm1, cs:__real@3feccccd; value
  }
  DCONST_DVARFLT_cg_hudGrenadePointerPulseFreq = v2575;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v2579 = Dvar_RegisterFloat("cg_hudGrenadePointerPulseMax", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The maximum alpha of the grenade indicator pulse. Values higher than 1 will cause the indicator to remain at full brightness for longer");
  __asm
  {
    vmovss  xmm11, cs:__real@3e99999a
    vmovss  xmm2, cs:__real@c0400000; min
  }
  DCONST_DVARFLT_cg_hudGrenadePointerPulseMax = v2579;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm1, xmm11; value
  }
  DCONST_DVARFLT_cg_hudGrenadePointerPulseMin = Dvar_RegisterFloat("cg_hudGrenadePointerPulseMin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The minimum alpha of the grenade indicator pulse. Values lower than 0 will cause the indicator to remain at full transparency for longer");
  v2584 = Com_GameMode_GetActiveGameMode();
  __asm { vmovss  xmm1, cs:__real@41c80000; value }
  DVARBOOL_cg_hudGrenadeIconInScope = Dvar_RegisterBool("NNOKMOPPPP", v2584 == 1, 4u, "Show the grenade indicator when aiming down the sight of a scoped weapon");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2588 = Dvar_RegisterFloat("cg_hudGrenadeIconWidth", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The width of the grenade indicator icon");
  __asm { vmovss  xmm1, cs:__real@41c80000; value }
  DCONST_DVARFLT_cg_hudGrenadeIconWidth = v2588;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2592 = Dvar_RegisterFloat("cg_hudGrenadeIconHeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The height of the grenade indicator icon");
  __asm { vmovss  xmm1, cs:__real@41700000; value }
  DCONST_DVARFLT_cg_hudGrenadeIconHeight = v2592;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2596 = Dvar_RegisterFloat("cg_hudGrenadeIconWidthMin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The minimum width the grenade indicator icon will shrink to when the player is moving away");
  __asm { vmovss  xmm1, cs:__real@41700000; value }
  DCONST_DVARFLT_cg_hudGrenadeIconWidthMin = v2596;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2600 = Dvar_RegisterFloat("cg_hudGrenadeIconHeightMin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The minimum height the grenade indicator icon will shrink to when the player is moving away");
  __asm { vmovss  xmm1, cs:__real@41400000; value }
  DCONST_DVARFLT_cg_hudGrenadeIconHeightMin = v2600;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2604 = Dvar_RegisterFloat("cg_hudGrenadePointerWidth", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The width of the grenade indicator pointer");
  __asm { vmovss  xmm1, cs:__real@41400000; value }
  DCONST_DVARFLT_cg_hudGrenadePointerWidth = v2604;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2608 = Dvar_RegisterFloat("cg_hudGrenadePointerHeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The height of the grenade indicator pointer");
  __asm { vmovss  xmm1, cs:__real@42480000; value }
  DCONST_DVARFLT_cg_hudGrenadePointerHeight = v2608;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2612 = Dvar_RegisterFloat("cg_hudGrenadeIconOffset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The offset from the center of the screen for a grenade icon");
  __asm
  {
    vmovss  xmm2, cs:__real@41c00000; y
    vmovss  xmm1, cs:__real@40c00000; x
  }
  DCONST_DVARFLT_cg_hudGrenadeIconOffset = v2612;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovss  dword ptr [rsp+178h+fmt], xmm7
  }
  DCONST_DVARVEC2_cg_hudGrenadePointerPivot = Dvar_RegisterVec2("cg_hudGrenadePointerPivot", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtcl, 0x40004u, "The pivot point of the grenade indicator pointer");
  __asm
  {
    vmovss  xmm1, cs:__real@42160000; value
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2619 = Dvar_RegisterFloat("cg_hudGrenadeIconWidthSplitscreen", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The width of the grenade indicator icon");
  __asm
  {
    vmovss  xmm1, cs:__real@42160000; value
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_hudGrenadeIconWidthSplitscreen = v2619;
  v2623 = Dvar_RegisterFloat("cg_hudGrenadeIconHeightSplitscreen", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The height of the grenade indicator icon");
  __asm
  {
    vmovss  xmm6, cs:__real@41a00000
    vmovaps xmm1, xmm6; value
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_hudGrenadeIconHeightSplitscreen = v2623;
  v2628 = Dvar_RegisterFloat("cg_hudGrenadeIconWidthMinSplitscreen", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The minimum width the grenade indicator icon will shrink to when the player is moving away");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DCONST_DVARFLT_cg_hudGrenadeIconWidthMinSplitscreen = v2628;
  v2632 = Dvar_RegisterFloat("cg_hudGrenadeIconHeightMinSplitscreen", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The minimum height the grenade indicator icon will shrink to when the player is moving away");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DCONST_DVARFLT_cg_hudGrenadeIconHeightMinSplitscreen = v2632;
  v2636 = Dvar_RegisterFloat("cg_hudGrenadePointerWidthSplitscreen", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The width of the grenade indicator pointer");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DCONST_DVARFLT_cg_hudGrenadePointerWidthSplitscreen = v2636;
  v2640 = Dvar_RegisterFloat("cg_hudGrenadePointerHeightSplitscreen", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The height of the grenade indicator pointer");
  __asm
  {
    vmovss  xmm1, cs:__real@42960000; value
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_hudGrenadePointerHeightSplitscreen = v2640;
  v2644 = Dvar_RegisterFloat("cg_hudGrenadeIconOffsetSplitscreen", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The offset from the center of the screen for a grenade icon");
  __asm
  {
    vmovss  xmm2, cs:__real@42200000; y
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm1, xmm10; x
    vmovss  dword ptr [rsp+178h+fmt], xmm7
  }
  DCONST_DVARFLT_cg_hudGrenadeIconOffsetSplitscreen = v2644;
  v2648 = Dvar_RegisterVec2("cg_hudGrenadePointerPivotSplitscreen", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtcm, 0x40004u, "The pivot point of the grenade indicator pointer");
  __asm { vmovss  xmm2, cs:__real@3c23d70a; min }
  DCONST_DVARVEC2_cg_hudGrenadePointerPivotSplitscreen = v2648;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm1, xmm15; value
  }
  DVARFLT_cg_rumble_devgui_duration = Dvar_RegisterFloat("NRRLNTQNOL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Duration of rumble");
  DVARBOOL_cg_rumble_devgui_loop = Dvar_RegisterBool("MNLPRKLTRP", 0, 0, "Enable a looping rumble");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm14; min
    vmovaps xmm1, xmm11; value
  }
  DCONST_DVARFLT_cg_rumble_xb3_hf_mult = Dvar_RegisterFloat("cg_rumble_xb3_hf_mult", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Multiplier applied to the high frequency rumble motor on the xb3 in order to normalize it with other sources.");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm14; min
    vmovaps xmm1, xmm11; value
  }
  DCONST_DVARFLT_cg_rumble_xb3_lf_mult = Dvar_RegisterFloat("cg_rumble_xb3_lf_mult", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Multiplier applied to the low frequency rumble motor on the xb3 in order to normalize it with other sources.");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm14; min
    vmovaps xmm1, xmm11; value
  }
  DCONST_DVARFLT_cg_rumble_xb3_tr_mult = Dvar_RegisterFloat("cg_rumble_xb3_tr_mult", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Multiplier applied to the trigger rumble motors on the xb3 in order to normalize it with other sources.");
  __asm { vmovss  xmm1, cs:__real@3e800000; value }
  DCONST_DVARINT_s_scriptable_explCamShakeDuration = Dvar_RegisterInt("s_scriptable_explCamShakeDuration", 2000, 1, 100000, 0x40004u, "Duration, in MS, that a camera shake should last for during an explosion");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2664 = Dvar_RegisterFloat("s_scriptable_explCamShakeScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Scale applied to the camera shake. Higher means more shaking.");
  __asm { vmovss  xmm1, cs:__real@3fa00000; value }
  DCONST_DVARFLT_s_scriptable_explCamShakeScale = v2664;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_s_scriptable_explCamShakeRadiusMultiplier = Dvar_RegisterFloat("s_scriptable_explCamShakeRadiusMultiplier", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Multiplier applied to the outer radius of an explosion event to trigger the shake within.");
  DCONST_DVARBOOL_scriptable_debug_melee = Dvar_RegisterBool("scriptable_debug_melee", 0, 0x40004u, "Debug melee for scriptables");
  DCONST_DVARBOOL_scriptable_debug_vehicle_client = Dvar_RegisterBool("scriptable_debug_vehicle_client", 0, 0x40004u, "Debug vehicle client damage for scriptables");
  DCONST_DVARBOOL_scriptable_debug_impact = Dvar_RegisterBool("scriptable_debug_impact", 0, 0x40004u, "Debug impact for scriptables");
  __asm { vmovss  xmm6, cs:__real@461c4000 }
  DVARBOOL_scriptable_light_radiusscale = Dvar_RegisterBool("OLSTQTTPLO", 0, 4u, "Enable radiusMinScale and radiusMaxScale for scriptable lights");
  __asm
  {
    vmovss  xmm2, cs:__real@43fa0000; min
    vmovss  xmm1, cs:__real@453b8000; value
    vmovaps xmm3, xmm6; max
  }
  DCONST_DVARFLT_scriptable_spatialViewRadiusMax = Dvar_RegisterFloat("scriptable_spatialViewRadiusMax", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max distance that any client-model based standalone scriptable (brloot mostly) can be seen from.");
  __asm
  {
    vmovss  xmm2, cs:__real@43fa0000; min
    vmovss  xmm1, cs:__real@44160000; value
  }
  DCONST_DVARBOOL_scriptable_lootPingActive = Dvar_RegisterBool("scriptable_lootPingActive", 1, 0x40004u, "If true, draw a ping marker for loot based scriptables");
  __asm { vmovaps xmm3, xmm6; max }
  DCONST_DVARFLT_scriptable_lootPingRadius = Dvar_RegisterFloat("scriptable_lootPingRadius", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max distance that the ping FX marker will appear for loot");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vmovaps xmm2, xmm15; min
    vmovaps xmm1, xmm10; value
  }
  v2678 = Dvar_RegisterFloat("scriptable_lootPingWidth", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Size of the box you must point at in order to get the loot ping popup message");
  __asm
  {
    vmovss  xmm1, cs:__real@41c80000; value
    vmovaps xmm3, xmm13; max
    vmovaps xmm2, xmm15; min
  }
  DCONST_DVARFLT_scriptable_lootPingWidth = v2678;
  v2682 = Dvar_RegisterFloat("scriptable_lootPingHeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Size of the box you must point at in order to get the loot ping popup message");
  __asm
  {
    vmovss  xmm2, cs:__real@437a0000; min
    vmovss  xmm1, cs:__real@44160000; value
  }
  DCONST_DVARFLT_scriptable_lootPingHeight = v2682;
  __asm { vmovaps xmm3, xmm6; max }
  DCONST_DVARFLT_scriptable_lootPopupRadius = Dvar_RegisterFloat("scriptable_lootPopupRadius", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max distance that the ping UI will appear for loot");
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
  __asm { vmovss  xmm2, cs:__real@bf800000; min }
  DVARINT_mayhem_debugEnt = Dvar_RegisterInt("NTRRSSRPNR", -1, -1, 1024, 4u, "Debug a specific mayhem entity.");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vmovaps xmm1, xmm2; value
  }
  v2689 = Dvar_RegisterFloat("NTTNLOQNQS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Force time for mayhem entity selected by mayhem_debugEnt.");
  __asm { vmovss  xmm2, cs:__real@358637bd; min }
  DVARFLT_mayhem_debugEntTime = v2689;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm1, xmm14; value
  }
  DVARFLT_mayhem_debugEntTimeScale = Dvar_RegisterFloat("MLLNNONLSK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Time scale for mayhem_debugEntTime.");
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
  __asm { vmovss  xmm1, cs:__real@42f00000; value }
  DCONST_DVARINT_cg_event_forceLod = Dvar_RegisterEnum("cg_event_forceLod", g_cgEventForceLodNames, 6, 0x40004u, "Force all cg event level of detail to this level");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2696 = Dvar_RegisterFloat("cg_eventLodDistance_Lod0", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Maximum cg event lod0 distance.");
  __asm { vmovss  xmm1, cs:__real@44960000; value }
  DCONST_DVARFLT_cg_eventLodDistance_Lod0 = v2696;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_eventLodDistance_Lod1 = Dvar_RegisterFloat("cg_eventLodDistance_Lod1", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Maximum cg event lod1 distance.");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm1, cs:__real@45bb8000; value
  }
  v2703 = Dvar_RegisterFloat("cg_eventLodDistance_Lod2", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Maximum cg event lod2 distance.");
  __asm { vmovss  xmm1, cs:__real@463b8000; value }
  DCONST_DVARFLT_cg_eventLodDistance_Lod2 = v2703;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2707 = Dvar_RegisterFloat("cg_eventLodDistance_Lod3", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Maximum cg event lod3 distance.");
  __asm
  {
    vmovss  xmm3, cs:__real@42f00000; max
    vmovss  xmm1, cs:__real@42200000; value
  }
  DCONST_DVARFLT_cg_eventLodDistance_Lod3 = v2707;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v2711 = Dvar_RegisterFloat("cg_eventLod_NarrowFOV", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Events within this FOV are prioritized.");
  __asm { vmovss  xmm1, cs:__real@42100000; value }
  DCONST_DVARFLT_cg_eventLod_NarrowFOV = v2711;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_eventLod_FOVbubble = Dvar_RegisterFloat("cg_eventLod_FOVbubble", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Cg events are considered to be within FOV if within this distance regardless of actual FOV");
  DCONST_DVARINT_cg_event_playerAnimCalcFrameCount = Dvar_RegisterInt("cg_event_playerAnimCalcFrameCount", 20, 0, 200, 0x40004u, "Maximum number of player anim calcs for events per frame.");
  DCONST_DVARINT_cg_event_forceNetfieldLod = Dvar_RegisterEnum("cg_event_forceNetfieldLod", g_cgEventForceNetfieldLodNames, 0, 0x40004u, "Force netfield lod events.");
  DCONST_DVARBOOL_cg_event_enableDroppedLowLodEventWarning = Dvar_RegisterBool("cg_event_enableDroppedLowLodEventWarning", 0, 0x40004u, "Enable warning about dropped lowLodEvents");
  DVARINT_cg_event_debugAnalytics_Type = Dvar_RegisterEnum("MQRKPSPOKP", g_cgEventDebugTypeNames, 9, 4u, "Display analytics for event lod type");
  v2715 = Dvar_RegisterBool("LNNKSNTKLS", 0, 4u, "Display analytics for events skipped due to budget.");
  __asm { vmovss  xmm1, cs:?s_CG_HudLighting_default_fadeSharpness@@3MA; value }
  DVARBOOL_cg_event_debugAnalytics_overBudgetSkipped = v2715;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  g_CG_HudLighting_Dvars.fadeSharpness = Dvar_RegisterFloat("NPLTQSPNRL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "This controls how sharp the lines are when fading using the mask alpha.  Higher values are sharper.");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vmovss  xmm1, cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.specExponent; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2722 = Dvar_RegisterFloat("MLQKLMSRST", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "[basic] Specular exponent.  Higher values result in sharper highlights.");
  __asm { vmovss  xmm1, cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.lum.scale; value }
  g_CG_HudLighting_Dvars.modes[0].specExponent = v2722;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2726 = Dvar_RegisterFloat("MNNSLRRMNL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "[basic] Scale applied to ambient light luminance.");
  __asm
  {
    vmovss  xmm6, cs:__real@c1200000
    vmovss  xmm1, cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.lum.offset; value
  }
  g_CG_HudLighting_Dvars.modes[0].lights[0].lum.scale = v2726;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm6; min
  }
  v2731 = Dvar_RegisterFloat("NPLMROSQKM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "[basic] Offset applied to ambient light luminance.");
  __asm
  {
    vmovss  xmm3, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+8; z
    vmovss  xmm2, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+4; y
    vmovss  xmm1, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale; x
  }
  g_CG_HudLighting_Dvars.modes[0].lights[0].lum.offset = v2731;
  __asm { vmovss  dword ptr [rsp+178h+fmt], xmm10 }
  v2735 = Dvar_RegisterVec3Color("LLOLKOLPMN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtcn, 0x40u, "[basic] Scale applied to ambient light color.");
  __asm
  {
    vmovss  xmm3, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+8; z
    vmovss  xmm2, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+4; y
    vmovss  xmm1, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset; x
  }
  g_CG_HudLighting_Dvars.modes[0].lights[0].color.scale = v2735;
  __asm { vmovss  dword ptr [rsp+178h+fmt], xmm10 }
  v2739 = Dvar_RegisterVec3Color("LLQLKSMMTO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtco, 0x40u, "[basic] Offset applied to ambient light color.");
  __asm { vmovss  xmm1, cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.lum.scale+20h; value }
  g_CG_HudLighting_Dvars.modes[0].lights[0].color.offset = v2739;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2743 = Dvar_RegisterFloat("MLQMNPQNOP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "[basic] Scale applied to diffuse light luminance.");
  __asm { vmovss  xmm1, cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.lum.offset+20h; value }
  g_CG_HudLighting_Dvars.modes[0].lights[1].lum.scale = v2743;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm6; min
  }
  v2747 = Dvar_RegisterFloat("MPQLRTKSPM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "[basic] Offset applied to diffuse light luminance.");
  __asm
  {
    vmovss  xmm3, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+1Ch; z
    vmovss  xmm2, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+18h; y
    vmovss  xmm1, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+20h; x
  }
  g_CG_HudLighting_Dvars.modes[0].lights[1].lum.offset = v2747;
  __asm { vmovss  dword ptr [rsp+178h+fmt], xmm10 }
  v2751 = Dvar_RegisterVec3Color("MNQRLPRQOP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtcp, 0x40u, "[basic] Scale applied to diffuse light color.");
  __asm
  {
    vmovss  xmm3, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+34h; z
    vmovss  xmm2, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+30h; y
    vmovss  xmm1, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+20h; x
  }
  g_CG_HudLighting_Dvars.modes[0].lights[1].color.scale = v2751;
  __asm { vmovss  dword ptr [rsp+178h+fmt], xmm10 }
  v2755 = Dvar_RegisterVec3Color("OLPKRPRLPM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtcq, 0x40u, "[basic] Offset applied to diffuse light color.");
  __asm { vmovss  xmm1, cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.lum.scale+40h; value }
  g_CG_HudLighting_Dvars.modes[0].lights[1].color.offset = v2755;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2759 = Dvar_RegisterFloat("TMQTSMRPS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "[basic] Scale applied to spec light luminance.");
  __asm { vmovss  xmm1, cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.lum.offset+40h; value }
  g_CG_HudLighting_Dvars.modes[0].lights[2].lum.scale = v2759;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm6; min
  }
  v2763 = Dvar_RegisterFloat("LTTOPRNTON", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "[basic] Offset applied to spec light luminance.");
  __asm
  {
    vmovss  xmm3, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+48h; z
    vmovss  xmm2, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+38h; y
    vmovss  xmm1, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+34h; x
  }
  g_CG_HudLighting_Dvars.modes[0].lights[2].lum.offset = v2763;
  __asm { vmovss  dword ptr [rsp+178h+fmt], xmm10 }
  v2767 = Dvar_RegisterVec3Color("LMLLSTRMSQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtcr, 0x40u, "[basic] Scale applied to spec light color.");
  __asm
  {
    vmovss  xmm3, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+48h; z
    vmovss  xmm2, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+50h; y
    vmovss  xmm1, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+4Ch; x
  }
  g_CG_HudLighting_Dvars.modes[0].lights[2].color.scale = v2767;
  __asm { vmovss  dword ptr [rsp+178h+fmt], xmm10 }
  v2771 = Dvar_RegisterVec3Color("RORQSKTLT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtcs, 0x40u, "[basic] Offset applied to spec light color.");
  __asm { vmovss  xmm1, cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.lum.scale+60h; value }
  g_CG_HudLighting_Dvars.modes[0].lights[2].color.offset = v2771;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2775 = Dvar_RegisterFloat("OKTLSQMTOP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "[basic] Scale applied to additive light luminance.");
  __asm { vmovss  xmm1, cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.lum.offset+60h; value }
  g_CG_HudLighting_Dvars.modes[0].lights[3].lum.scale = v2775;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm6; min
  }
  v2779 = Dvar_RegisterFloat("NTNLSSTMQK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "[basic] Offset applied to additive light luminance.");
  __asm
  {
    vmovss  xmm3, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+68h; z
    vmovss  xmm2, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+64h; y
    vmovss  xmm1, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+60h; x
  }
  g_CG_HudLighting_Dvars.modes[0].lights[3].lum.offset = v2779;
  __asm { vmovss  dword ptr [rsp+178h+fmt], xmm10 }
  v2783 = Dvar_RegisterVec3Color("PORQNRQP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtct, 0x40u, "[basic] Scale applied to additive light color.");
  __asm
  {
    vmovss  xmm3, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+68h; z
    vmovss  xmm2, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+64h; y
    vmovss  xmm1, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+60h; x
  }
  g_CG_HudLighting_Dvars.modes[0].lights[3].color.scale = v2783;
  __asm { vmovss  dword ptr [rsp+178h+fmt], xmm10 }
  g_CG_HudLighting_Dvars.modes[0].lights[3].color.offset = Dvar_RegisterVec3Color("LPNRRKQQQO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtcu, 0x40u, "[basic] Offset applied to additive light color.");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vmovss  xmm1, cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.specExponent+84h; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2790 = Dvar_RegisterFloat("MMPRQRSPOP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "[blood] Specular exponent.  Higher values result in sharper highlights.");
  __asm { vmovss  xmm1, cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.lum.offset+80h; value }
  g_CG_HudLighting_Dvars.modes[1].specExponent = v2790;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2794 = Dvar_RegisterFloat("NLQKPRSMLT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "[blood] Scale applied to ambient light luminance.");
  __asm { vmovss  xmm1, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+80h; value }
  g_CG_HudLighting_Dvars.modes[1].lights[0].lum.scale = v2794;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm6; min
  }
  v2798 = Dvar_RegisterFloat("NOPLNKORSM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "[blood] Offset applied to ambient light luminance.");
  __asm
  {
    vmovss  xmm3, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+80h; z
    vmovss  xmm2, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+7Ch; y
    vmovss  xmm1, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+78h; x
  }
  g_CG_HudLighting_Dvars.modes[1].lights[0].lum.offset = v2798;
  __asm { vmovss  dword ptr [rsp+178h+fmt], xmm10 }
  v2802 = Dvar_RegisterVec3Color("LKRKKMPKQN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtcv, 0x40u, "[blood] Scale applied to ambient light color.");
  __asm
  {
    vmovss  xmm3, cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.lum.scale+0A0h; z
    vmovss  xmm2, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+94h; y
    vmovss  xmm1, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+90h; x
  }
  g_CG_HudLighting_Dvars.modes[1].lights[0].color.scale = v2802;
  __asm { vmovss  dword ptr [rsp+178h+fmt], xmm10 }
  v2806 = Dvar_RegisterVec3Color("MMLKKNQTRS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtcw, 0x40u, "[blood] Offset applied to ambient light color.");
  __asm { vmovss  xmm1, cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.lum.offset+0A0h; value }
  g_CG_HudLighting_Dvars.modes[1].lights[0].color.offset = v2806;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2810 = Dvar_RegisterFloat("TKPTLPSNR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "[blood] Scale applied to diffuse light luminance.");
  __asm { vmovss  xmm1, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+94h; value }
  g_CG_HudLighting_Dvars.modes[1].lights[1].lum.scale = v2810;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm6; min
  }
  v2814 = Dvar_RegisterFloat("LSLRLKSNM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "[blood] Offset applied to diffuse light luminance.");
  __asm
  {
    vmovss  xmm3, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+0ACh; z
    vmovss  xmm2, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+0A8h; y
    vmovss  xmm1, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+98h; x
  }
  g_CG_HudLighting_Dvars.modes[1].lights[1].lum.offset = v2814;
  __asm { vmovss  dword ptr [rsp+178h+fmt], xmm10 }
  v2818 = Dvar_RegisterVec3Color("MTTKNLQQQP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtcx, 0x40u, "[blood] Scale applied to diffuse light color.");
  __asm
  {
    vmovss  xmm3, cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.lum.scale+0C0h; z
    vmovss  xmm2, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+0A8h; y
    vmovss  xmm1, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+0B0h; x
  }
  g_CG_HudLighting_Dvars.modes[1].lights[1].color.scale = v2818;
  __asm { vmovss  dword ptr [rsp+178h+fmt], xmm10 }
  g_CG_HudLighting_Dvars.modes[1].lights[1].color.offset = Dvar_RegisterVec3Color("LMRRQQOKO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtcy, 0x40u, "[blood] Offset applied to diffuse light color.");
  __asm
  {
    vmovss  xmm1, cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.lum.offset+0C0h; value
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2825 = Dvar_RegisterFloat("LOLMPNLQLK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "[blood] Scale applied to spec light luminance.");
  __asm { vmovss  xmm1, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+0C0h; value }
  g_CG_HudLighting_Dvars.modes[1].lights[2].lum.scale = v2825;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm6; min
  }
  v2829 = Dvar_RegisterFloat("LNNTTKNOPT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "[blood] Offset applied to spec light luminance.");
  __asm
  {
    vmovss  xmm3, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+0C0h; z
    vmovss  xmm2, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+0C8h; y
    vmovss  xmm1, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+0C4h; x
  }
  g_CG_HudLighting_Dvars.modes[1].lights[2].lum.offset = v2829;
  __asm { vmovss  dword ptr [rsp+178h+fmt], xmm10 }
  v2833 = Dvar_RegisterVec3Color("MROQSKORRK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtcz, 0x40u, "[blood] Scale applied to spec light color.");
  __asm
  {
    vmovss  xmm3, cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.lum.scale+0E0h; z
    vmovss  xmm2, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+0C8h; y
    vmovss  xmm1, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+0C4h; x
  }
  g_CG_HudLighting_Dvars.modes[1].lights[2].color.scale = v2833;
  __asm { vmovss  dword ptr [rsp+178h+fmt], xmm10 }
  v2837 = Dvar_RegisterVec3Color("NOMMPMROTT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtda, 0x40u, "[blood] Offset applied to spec light color.");
  __asm { vmovss  xmm1, cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.lum.offset+0E0h; value }
  g_CG_HudLighting_Dvars.modes[1].lights[2].color.offset = v2837;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v2841 = Dvar_RegisterFloat("SQMPNNMSP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "[blood] Scale applied to additive light luminance.");
  __asm { vmovss  xmm1, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+0E0h; value }
  g_CG_HudLighting_Dvars.modes[1].lights[3].lum.scale = v2841;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm6; min
  }
  v2845 = Dvar_RegisterFloat("LQNPPQNOOS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "[blood] Offset applied to additive light luminance.");
  __asm
  {
    vmovss  xmm3, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+0E0h; z
    vmovss  xmm2, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+0DCh; y
    vmovss  xmm1, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.offset+0D8h; x
  }
  g_CG_HudLighting_Dvars.modes[1].lights[3].lum.offset = v2845;
  __asm { vmovss  dword ptr [rsp+178h+fmt], xmm10 }
  v2849 = Dvar_RegisterVec3Color("MNMRPMRPPN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtdb, 0x40u, "[blood] Scale applied to additive light color.");
  __asm
  {
    vmovss  xmm3, cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.lum.scale+100h; z
    vmovss  xmm2, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+0F4h; y
    vmovss  xmm1, dword ptr cs:?s_CG_HudLighting_modeConfigs@@3PAUCG_HudLighting_ModeConfig@@A.lights.color.scale+0F0h; x
  }
  g_CG_HudLighting_Dvars.modes[1].lights[3].color.scale = v2849;
  __asm { vmovss  dword ptr [rsp+178h+fmt], xmm10 }
  g_CG_HudLighting_Dvars.modes[1].lights[3].color.offset = Dvar_RegisterVec3Color("LPNLLTPOKO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtdc, 0x40u, "[blood] Offset applied to additive light color.");
  _R11 = &v3021;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
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
  ntl::red_black_tree_node_base *mp_right; 
  __int64 v27; 
  __int64 v28; 
  ntl::pair<ParticleSystemDef const *,unsigned int> r_element; 
  __m256i v30; 
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
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+0B8h+r_element.first]
      vmovups xmmword ptr cs:?cgMediaSurfaceFxMap@@3V?$map@PEBUParticleSystemDef@@IV?$pool_allocator@U?$red_black_tree_node@U?$pair@PEBUParticleSystemDef@@I@ntl@@@ntl@@Vsolitary_buffer_allocator@2@@ntl@@U?$less@PEBUParticleSystemDef@@PEBU1@@3@@ntl@@A.baseclass_0.baseclass_0.baseclass_0.baseclass_0.m_data.m_buffer, xmm0; ntl::map<ParticleSystemDef const *,uint,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,uint>>,ntl::solitary_buffer_allocator>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *>> cgMediaSurfaceFxMap
    }
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
        _RCX = cgMediaSurfaceFxMap.m_freelist.m_head.mp_next;
        v30.m256i_i32[0] = 0;
        v30.m256i_i64[1] = (__int64)p_m_endNodeBase;
        __asm { vmovups xmm1, xmmword ptr [rsp+0B8h+r_element.first] }
        cgMediaSurfaceFxMap.m_freelist.m_head.mp_next = cgMediaSurfaceFxMap.m_freelist.m_head.mp_next->mp_next;
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rsp+0B8h+var_58+10h], xmm0
          vmovups ymm0, ymmword ptr [rsp+0B8h+var_58]
          vmovups ymmword ptr [rcx], ymm0
          vmovups xmmword ptr [rcx+20h], xmm1
        }
        if ( p_m_endNodeBase == (ntl::map<ParticleSystemDef const *,unsigned int,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> > *)&cgMediaSurfaceFxMap.m_endNodeBase )
        {
          cgMediaSurfaceFxMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)_RCX;
          cgMediaSurfaceFxMap.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)_RCX;
          cgMediaSurfaceFxMap.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)_RCX;
        }
        else if ( (unsigned __int64)particleSystemDef >= p_m_endNodeBase->ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator>::ntl::solitary_buffer_allocator::m_data.m_size )
        {
          p_m_endNodeBase->ntl::red_black_tree<ParticleSystemDef const *,ntl::pair<ParticleSystemDef const *,unsigned int>,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::return_pair_first<ParticleSystemDef const *,unsigned int>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> >::ntl::internal::container_with_allocator<ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator> >::ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>::ntl::internal::container_with_allocator<ntl::solitary_buffer_allocator>::ntl::solitary_buffer_allocator::m_data.m_buffer = (char *)_RCX;
          mp_right = cgMediaSurfaceFxMap.m_endNodeBase.mp_right;
          if ( p_m_endNodeBase == (ntl::map<ParticleSystemDef const *,unsigned int,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> > *)cgMediaSurfaceFxMap.m_endNodeBase.mp_right )
            mp_right = (ntl::red_black_tree_node_base *)_RCX;
          cgMediaSurfaceFxMap.m_endNodeBase.mp_right = mp_right;
        }
        else
        {
          p_m_endNodeBase->m_freelist.m_head.mp_next = _RCX;
          if ( p_m_endNodeBase == (ntl::map<ParticleSystemDef const *,unsigned int,ntl::pool_allocator<ntl::red_black_tree_node<ntl::pair<ParticleSystemDef const *,unsigned int> >,ntl::solitary_buffer_allocator>,ntl::less<ParticleSystemDef const *,ParticleSystemDef const *> > *)cgMediaSurfaceFxMap.m_endNodeBase.mp_left )
            cgMediaSurfaceFxMap.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)_RCX;
        }
        ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)_RCX, &cgMediaSurfaceFxMap.m_endNodeBase.mp_parent);
        ++cgMediaSurfaceFxMap.m_size;
      }
      goto LABEL_80;
    }
LABEL_81:
    if ( cgMediaSurfaceFxMap.m_size != cgMedia.surfaceFx->numTableEntry )
    {
      LODWORD(v28) = cgMedia.surfaceFx->numTableEntry;
      LODWORD(v27) = cgMediaSurfaceFxMap.m_size;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_main.cpp", 532, ASSERT_TYPE_ASSERT, "( cgMediaSurfaceFxMap.size() ) == ( cgMedia.surfaceFx->numTableEntry )", "%s == %s\n\t%i, %i", "cgMediaSurfaceFxMap.size()", "cgMedia.surfaceFx->numTableEntry", v27, v28) )
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

