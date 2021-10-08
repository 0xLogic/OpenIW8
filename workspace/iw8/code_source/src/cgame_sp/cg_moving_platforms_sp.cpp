/*
==============
CGMovingPlatformsSP::GetPlayerBounds
==============
*/

void __fastcall CGMovingPlatformsSP::GetPlayerBounds(CGMovingPlatformsSP *this, LocalClientNum_t localClientNum, Bounds *bounds)
{
  ?GetPlayerBounds@CGMovingPlatformsSP@@UEAAXW4LocalClientNum_t@@PEAUBounds@@@Z(this, localClientNum, bounds);
}

/*
==============
CGMovingPlatformsSP::CGMovingPlatformsSP
==============
*/

void __fastcall CGMovingPlatformsSP::CGMovingPlatformsSP(CGMovingPlatformsSP *this)
{
  ??0CGMovingPlatformsSP@@QEAA@XZ(this);
}

/*
==============
CGMovingPlatformsSP::AllocateMovingPlatformSystem
==============
*/

void __fastcall CGMovingPlatformsSP::AllocateMovingPlatformSystem(HunkUser *hunkUser)
{
  ?AllocateMovingPlatformSystem@CGMovingPlatformsSP@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
CGMovingPlatformsSP::FreeMovingPlatformSystem
==============
*/

void CGMovingPlatformsSP::FreeMovingPlatformSystem(void)
{
  ?FreeMovingPlatformSystem@CGMovingPlatformsSP@@SAXXZ();
}

/*
==============
CGMovingPlatformsSP::ShouldUseImprovedAimAlgorithm
==============
*/

int __fastcall CGMovingPlatformsSP::ShouldUseImprovedAimAlgorithm(CGMovingPlatformsSP *this)
{
  return ?ShouldUseImprovedAimAlgorithm@CGMovingPlatformsSP@@UEAAHXZ(this);
}

/*
==============
CGMovingPlatformsSP::ClearMovingPlatformSystem
==============
*/

void CGMovingPlatformsSP::ClearMovingPlatformSystem(void)
{
  ?ClearMovingPlatformSystem@CGMovingPlatformsSP@@SAXXZ();
}

/*
==============
CGMovingPlatformsSP::BoltActorWeaponFlash
==============
*/

int __fastcall CGMovingPlatformsSP::BoltActorWeaponFlash(const entityState_t *ent, LocalClientNum_t localClientNum, const Weapon *weapon, const TagPair tagPair, bool isAlternate)
{
  return ?BoltActorWeaponFlash@CGMovingPlatformsSP@@SAHPEBUentityState_t@@W4LocalClientNum_t@@AEBUWeapon@@VTagPair@@_N@Z(ent, localClientNum, weapon, tagPair, isAlternate);
}

/*
==============
CGMovingPlatformsSP::CGMovingPlatformsSP
==============
*/
void CGMovingPlatformsSP::CGMovingPlatformsSP(CGMovingPlatformsSP *this)
{
  CGMovingPlatforms::CGMovingPlatforms(this);
  this->__vftable = (CGMovingPlatformsSP_vtbl *)&CGMovingPlatformsSP::`vftable';
}

/*
==============
CGMovingPlatformsSP::AllocateMovingPlatformSystem
==============
*/
void CGMovingPlatformsSP::AllocateMovingPlatformSystem(HunkUser *hunkUser)
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
CGMovingPlatformsSP::BoltActorWeaponFlash
==============
*/
__int64 CGMovingPlatformsSP::BoltActorWeaponFlash(const entityState_t *ent, LocalClientNum_t localClientNum, const Weapon *weapon, const TagPair tagPair, bool isAlternate)
{
  __int64 v5; 
  bool v6; 
  __int16 groundEntityNum; 
  __int64 v10; 
  const ParticleSystemDef *particleSystemDef; 
  unsigned int number; 
  unsigned int v13; 
  unsigned int v14; 
  const DObj *v15; 
  int v16; 
  const Material *markMaterialOverride; 
  tmat33_t<vec3_t> *axis; 
  __int64 markEntnum; 
  unsigned __int8 outBoneIndex[8]; 
  FXRegisteredDef def; 
  bitarray<64> perks; 
  orientation_t orient; 
  TagPair v25; 

  v25 = tagPair;
  v5 = localClientNum;
  v6 = ent->eType == ET_ACTOR;
  perks = 0i64;
  if ( !v6 )
    return 0i64;
  groundEntityNum = ent->groundEntityNum;
  if ( (unsigned __int16)groundEntityNum >= 0x7FEu )
    return 0i64;
  v10 = groundEntityNum;
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", localClientNum) )
    __debugbreak();
  if ( (unsigned int)v5 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(markEntnum) = CgEntitySystem::ms_allocatedCount;
    LODWORD(axis) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", axis, markEntnum) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v5] )
  {
    LODWORD(markEntnum) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", markEntnum) )
      __debugbreak();
  }
  if ( !CGMovingPlatforms::IsMoverMoving(&CgEntitySystem::ms_entitySystemArray[v5]->m_entities[v10]) )
    return 0i64;
  particleSystemDef = BG_WorldFlashEffect(perks, weapon, isAlternate, 0).particleSystemDef;
  if ( !particleSystemDef )
    return 0i64;
  number = ent->number;
  outBoneIndex[0] = -2;
  perks.array[0] = 0;
  if ( number > 0x9E4 )
  {
    LODWORD(markEntnum) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", markEntnum) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(markEntnum) = 2;
    LODWORD(axis) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", axis, markEntnum) )
      __debugbreak();
  }
  v13 = 2533 * v5 + number;
  if ( v13 >= 0x13CA )
  {
    LODWORD(markEntnum) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", markEntnum) )
      __debugbreak();
  }
  v14 = clientObjMap[v13];
  if ( v14 )
  {
    if ( v14 >= (unsigned int)s_objCount )
    {
      LODWORD(markEntnum) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", markEntnum) )
        __debugbreak();
    }
    v15 = (const DObj *)s_objBuf[v14];
  }
  else
  {
    v15 = NULL;
  }
  if ( !TagPair::GetTagNameAndBoneIndex(&v25, v15, (scr_string_t *)&perks, outBoneIndex) || !CG_Entity_GetBoneOrientation((LocalClientNum_t)v5, ent->number, outBoneIndex[0], &orient) )
    return 0i64;
  v16 = ent->groundEntityNum;
  def.m_particleSystemDef = particleSystemDef;
  markMaterialOverride = MARK_MATERIAL_OVERRIDE_NONE_6;
  if ( (unsigned int)v5 >= cg_t::ms_allocatedCount )
  {
    LODWORD(markEntnum) = cg_t::ms_allocatedCount;
    LODWORD(axis) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", axis, markEntnum) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v5] )
  {
    LODWORD(markEntnum) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", markEntnum) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(markEntnum) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", markEntnum) )
      __debugbreak();
  }
  FX_PlayDynamicBoltedEffect((LocalClientNum_t)v5, &def, cg_t::ms_cgArray[v5]->time, v16, &orient.origin, &orient.axis, 0x7FFu, 1, 0, markMaterialOverride);
  return 1i64;
}

/*
==============
CGMovingPlatformsSP::ClearMovingPlatformSystem
==============
*/
void CGMovingPlatformsSP::ClearMovingPlatformSystem(void)
{
  CGMovingPlatforms *v0; 
  CGMovingPlatforms *v1; 

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
  v1->__vftable = (CGMovingPlatforms_vtbl *)&CGMovingPlatformsSP::`vftable';
  if ( (_BYTE)CGMovingPlatforms::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\movingplatforms\\cg_moving_platforms.h", 164, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::ALLOCATION_TYPE)", (const char *)&queryFormat, "ms_allocatedType == SubSystem::ALLOCATION_TYPE") )
    __debugbreak();
}

/*
==============
CGMovingPlatformsSP::FreeMovingPlatformSystem
==============
*/
void CGMovingPlatformsSP::FreeMovingPlatformSystem(void)
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

/*
==============
CGMovingPlatformsSP::GetPlayerBounds
==============
*/
void CGMovingPlatformsSP::GetPlayerBounds(CGMovingPlatformsSP *this, LocalClientNum_t localClientNum, Bounds *bounds)
{
  CG_PredictSP_GetPlayerBounds(localClientNum, bounds);
}

/*
==============
CGMovingPlatformsSP::ShouldUseImprovedAimAlgorithm
==============
*/
__int64 CGMovingPlatformsSP::ShouldUseImprovedAimAlgorithm(CGMovingPlatformsSP *this)
{
  const dvar_t *v1; 

  v1 = DCONST_DVARMPBOOL_moving_platform_improved_aim;
  if ( !DCONST_DVARMPBOOL_moving_platform_improved_aim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "moving_platform_improved_aim") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.color[0];
}

