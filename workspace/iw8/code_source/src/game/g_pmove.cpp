/*
==============
GPMove::GetEntityBounds
==============
*/

void __fastcall GPMove::GetEntityBounds(GPMove *this, int entId, int suitIndex, EffectiveStance stance, bool hasShield, Bounds *outBounds)
{
  ?GetEntityBounds@GPMove@@UEBAXHHW4EffectiveStance@@_NPEAUBounds@@@Z(this, entId, suitIndex, stance, hasShield, outBounds);
}

/*
==============
GPMove::EndPhysicserfProbe
==============
*/

void __fastcall GPMove::EndPhysicserfProbe(GPMove *this)
{
  ?EndPhysicserfProbe@GPMove@@UEBAXXZ(this);
}

/*
==============
GPMove::SetMantleHint
==============
*/

void __fastcall GPMove::SetMantleHint(GPMove *this, bool enabled)
{
  ?SetMantleHint@GPMove@@UEAAX_N@Z(this, enabled);
}

/*
==============
GPMove::DebugPrintRigidBodyTransform
==============
*/

void __fastcall GPMove::DebugPrintRigidBodyTransform(GPMove *this, const int commandTime, const int entityId)
{
  ?DebugPrintRigidBodyTransform@GPMove@@UEAAXHH@Z(this, commandTime, entityId);
}

/*
==============
GPMove::~GPMove
==============
*/

void __fastcall GPMove::~GPMove(GPMove *this)
{
  ??1GPMove@@UEAA@XZ(this);
}

/*
==============
GPMove::IsWorldUpVolume
==============
*/

bool __fastcall GPMove::IsWorldUpVolume(GPMove *this, const int entId)
{
  return ?IsWorldUpVolume@GPMove@@UEBA_NH@Z(this, entId);
}

/*
==============
GPMove::OnGestureOffhandTriggered
==============
*/

void __fastcall GPMove::OnGestureOffhandTriggered(GPMove *this)
{
  ?OnGestureOffhandTriggered@GPMove@@UEAAXXZ(this);
}

/*
==============
GPMove::GetWorldUpParentOrientation
==============
*/

bool __fastcall GPMove::GetWorldUpParentOrientation(GPMove *this, int entId, vec3_t *outOrigin, vec3_t *outAngles)
{
  return ?GetWorldUpParentOrientation@GPMove@@UEBA_NHAEATvec3_t@@0@Z(this, entId, outOrigin, outAngles);
}

/*
==============
GPMove::CanSkipFindMantleSurface
==============
*/

bool __fastcall GPMove::CanSkipFindMantleSurface(GPMove *this)
{
  return ?CanSkipFindMantleSurface@GPMove@@UEBA_NXZ(this);
}

/*
==============
GPMove::GPMove
==============
*/

void __fastcall GPMove::GPMove(GPMove *this)
{
  ??0GPMove@@QEAA@XZ(this);
}

/*
==============
GPMove::StartPhysicsPerfProbe
==============
*/

void __fastcall GPMove::StartPhysicsPerfProbe(GPMove *this)
{
  ?StartPhysicsPerfProbe@GPMove@@UEBAXXZ(this);
}

/*
==============
GPMove::GPMove
==============
*/
void GPMove::GPMove(GPMove *this)
{
  this->__vftable = (GPMove_vtbl *)&pmove_t::`vftable';
  this->ps = NULL;
  *(_QWORD *)&this->tracemask = 0i64;
  this->m_flags = 0;
  this->mountHint = NULL;
  this->speed = 0.0;
  *(_QWORD *)&this->mantleDuration = 0i64;
  this->fWaistPitch = 0.0;
  *(_WORD *)&this->initialCall = 0;
  this->isExtrapolation = 0;
  this->groundSurfaceType = 0;
  WorldUpReferenceFrame::WorldUpReferenceFrame(&this->refFrame);
  this->localClientNum = LOCAL_CLIENT_0;
  this->m_stepHeight = 0.0;
  this->m_bgHandler = NULL;
  this->antiLag = NULL;
  this->vehicles = NULL;
  this->bounds = NULL;
  this->ground = NULL;
  this->groundPersistent = NULL;
  this->footstepEventType = NULL;
  this->movingPlatforms = NULL;
  this->weaponMap = NULL;
  this->m_trace = NULL;
  this->m_playerTraceInfo = NULL;
  memset_0(&this->cmd, 0, 0x210ui64);
  *(_QWORD *)this->touchents = 0i64;
  *(_QWORD *)&this->touchents[4] = 0i64;
  *(_QWORD *)&this->touchents[8] = 0i64;
  *(_QWORD *)&this->touchents[12] = 0i64;
  *(_QWORD *)&this->touchents[16] = 0i64;
  *(_QWORD *)&this->touchents[20] = 0i64;
  *(_QWORD *)&this->touchents[24] = 0i64;
  *(_QWORD *)&this->touchents[28] = 0i64;
  *(_QWORD *)this->toucherflags = 0i64;
  *(_QWORD *)&this->toucherflags[8] = 0i64;
  *(_QWORD *)&this->toucherflags[16] = 0i64;
  *(_QWORD *)&this->toucherflags[24] = 0i64;
  *(_QWORD *)this->mantleEndPos.v = 0i64;
  this->mantleEndPos.v[2] = 0.0;
  *(_QWORD *)&this->offhandAdsWeapon.weaponIdx = 0i64;
  *(_QWORD *)&this->offhandAdsWeapon.stickerIndices[3] = 0i64;
  *(_QWORD *)&this->offhandAdsWeapon.weaponAttachments[2] = 0i64;
  *(_QWORD *)&this->offhandAdsWeapon.weaponAttachments[10] = 0i64;
  *(_QWORD *)&this->offhandAdsWeapon.attachmentVariationIndices[5] = 0i64;
  *(_QWORD *)&this->offhandAdsWeapon.attachmentVariationIndices[13] = 0i64;
  *(_QWORD *)&this->offhandAdsWeapon.attachmentVariationIndices[21] = 0i64;
  *(_DWORD *)&this->offhandAdsWeapon.weaponCamo = 0;
  this->__vftable = (GPMove_vtbl *)&GPMove::`vftable';
  this->m_isUserMoveWorker = 0;
}

/*
==============
GPMove::~GPMove
==============
*/
void GPMove::~GPMove(GPMove *this)
{
  this->__vftable = (GPMove_vtbl *)&pmove_t::`vftable';
}

/*
==============
GPMove::CanSkipFindMantleSurface
==============
*/
bool GPMove::CanSkipFindMantleSurface(GPMove *this)
{
  return SV_BotIsBotEnt(&g_entities[this->ps->clientNum]) == 0;
}

/*
==============
GPMove::DebugPrintRigidBodyTransform
==============
*/
void GPMove::DebugPrintRigidBodyTransform(GPMove *this, const int commandTime, const int entityId)
{
  G_PhysicsObject *v16; 
  unsigned int v17; 
  unsigned int NumRigidBodys; 
  unsigned int v19; 
  unsigned int m_serialAndIndex; 
  hknpWorld *world; 
  bool v35; 
  char *fmt; 
  __int64 v67; 
  __int64 v68; 
  double v69; 
  double v70; 
  double v71; 
  double v72; 
  double v73; 
  double v74; 
  double v75; 
  double v76; 
  double v77; 
  double v78; 
  double v79; 
  double v80; 
  double v81; 
  double v82; 
  double v83; 
  double v84; 
  hknpBodyId result; 

  v16 = G_PhysicsObject_Get(entityId);
  if ( v16 )
  {
    v17 = v16->physicsInstances[0];
    if ( v17 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_pmove.cpp", 582, ASSERT_TYPE_ASSERT, "( physicsInstance != 0xFFFFFFFF )", (const char *)&queryFormat, "physicsInstance != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v17);
    v19 = 0;
    if ( NumRigidBodys )
    {
      __asm
      {
        vmovaps [rsp+1A8h+var_48], xmm6
        vmovaps [rsp+1A8h+var_58], xmm7
        vmovaps [rsp+1A8h+var_68], xmm8
        vmovaps [rsp+1A8h+var_78], xmm9
        vmovaps [rsp+1A8h+var_88], xmm10
        vmovaps [rsp+1A8h+var_98], xmm11
        vmovaps [rsp+1A8h+var_A8], xmm12
        vmovaps [rsp+1A8h+var_B8], xmm13
        vmovaps [rsp+1A8h+var_C8], xmm14
        vmovaps [rsp+1A8h+var_D8], xmm15
      }
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( v17 == -1 )
        {
          LODWORD(v68) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v68) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated )
        {
          LODWORD(v68) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v68) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v17, v19)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v68) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 851, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v68) )
            __debugbreak();
        }
        world = g_havokPhysicsWorlds[0].world;
        if ( !g_havokPhysicsWorlds[0].world )
        {
          LODWORD(v68) = g_havokPhysicsWorlds[0].world;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 855, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v68) )
            __debugbreak();
        }
        _RAX = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, m_serialAndIndex);
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vmovss  xmm15, dword ptr [rax+8]
          vmovss  xmm14, dword ptr [rax+10h]
          vmovss  xmm13, dword ptr [rax+14h]
          vmovss  xmm12, dword ptr [rax+18h]
          vmovss  xmm11, dword ptr [rax+20h]
          vmovss  xmm10, dword ptr [rax+24h]
          vmovss  xmm9, dword ptr [rax+28h]
          vmovss  xmm8, dword ptr [rax+30h]
          vmovss  xmm7, dword ptr [rax+34h]
          vmovss  xmm6, dword ptr [rax+38h]
          vmovss  [rsp+1A8h+var_F4], xmm0
          vmovss  xmm0, dword ptr [rax+4]
          vmovss  [rsp+1A8h+var_F8], xmm0
        }
        v35 = this->m_bgHandler->IsClient((BgHandler *)this->m_bgHandler);
        __asm
        {
          vmovss  xmm2, cs:__real@42000000
          vmulss  xmm0, xmm6, xmm2
          vmulss  xmm1, xmm7, xmm2
          vcvtss2sd xmm4, xmm0, xmm0
          vmulss  xmm0, xmm8, xmm2
          vcvtss2sd xmm2, xmm0, xmm0
          vcvtss2sd xmm5, xmm10, xmm10
          vmovss  xmm10, [rsp+1A8h+var_F8]
          vcvtss2sd xmm0, xmm11, xmm11
          vmovss  xmm11, [rsp+1A8h+var_F4]
          vcvtss2sd xmm3, xmm1, xmm1
          vcvtss2sd xmm1, xmm9, xmm9
          vcvtss2sd xmm6, xmm12, xmm12
          vmovsd  xmm12, cs:__real@3ff0000000000000
          vmovsd  [rsp+1A8h+var_100], xmm12
          vmovsd  [rsp+1A8h+var_108], xmm4
          vmovsd  [rsp+1A8h+var_110], xmm3
          vmovsd  [rsp+1A8h+var_118], xmm2
          vxorpd  xmm2, xmm2, xmm2
          vmovsd  [rsp+1A8h+var_120], xmm2
          vmovsd  [rsp+1A8h+var_128], xmm1
          vmovsd  [rsp+1A8h+var_130], xmm5
          vmovsd  [rsp+1A8h+var_138], xmm0
          vmovsd  [rsp+1A8h+var_140], xmm2
          vmovsd  [rsp+1A8h+var_148], xmm6
          vcvtss2sd xmm7, xmm13, xmm13
          vmovsd  [rsp+1A8h+var_150], xmm7
          vcvtss2sd xmm8, xmm14, xmm14
          vmovsd  [rsp+1A8h+var_158], xmm8
          vmovsd  [rsp+1A8h+var_160], xmm2
          vcvtss2sd xmm9, xmm15, xmm15
          vmovsd  [rsp+1A8h+var_168], xmm9
          vcvtss2sd xmm10, xmm10, xmm10
          vmovsd  [rsp+1A8h+var_170], xmm10
          vcvtss2sd xmm11, xmm11, xmm11
          vmovsd  [rsp+1A8h+var_178], xmm11
        }
        LODWORD(v67) = v19;
        LODWORD(fmt) = entityId;
        Com_Printf(20, "   t: %i, h: %i, e: %i, idx: %i, trans: %a,%a,%a,%a, %a,%a,%a,%a, %a,%a,%a,%a, %a,%a,%a,%a\n", (unsigned int)commandTime, !v35, fmt, v67, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84);
        ++v19;
      }
      while ( v19 < NumRigidBodys );
      __asm
      {
        vmovaps xmm15, [rsp+1A8h+var_D8]
        vmovaps xmm14, [rsp+1A8h+var_C8]
        vmovaps xmm13, [rsp+1A8h+var_B8]
        vmovaps xmm12, [rsp+1A8h+var_A8]
        vmovaps xmm11, [rsp+1A8h+var_98]
        vmovaps xmm10, [rsp+1A8h+var_88]
        vmovaps xmm9, [rsp+1A8h+var_78]
        vmovaps xmm8, [rsp+1A8h+var_68]
        vmovaps xmm7, [rsp+1A8h+var_58]
        vmovaps xmm6, [rsp+1A8h+var_48]
      }
    }
  }
}

/*
==============
GPMove::EndPhysicserfProbe
==============
*/
void GPMove::EndPhysicserfProbe(GPMove *this)
{
  if ( !this->m_isUserMoveWorker )
    PhysPerfTrack_PMoveServerTimeStop();
}

/*
==============
GPMove::GetEntityBounds
==============
*/
void GPMove::GetEntityBounds(GPMove *this, int entId, int suitIndex, EffectiveStance stance, bool hasShield, Bounds *outBounds)
{
  __int64 v6; 
  const gentity_s *v9; 
  const DObj *ServerDObjForEnt; 
  int v18; 

  v6 = entId;
  if ( (unsigned int)entId >= 0x800 )
  {
    v18 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_pmove.cpp", 488, ASSERT_TYPE_ASSERT, "(unsigned)( entId ) < (unsigned)( ( 2048 ) )", "entId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entId, v18) )
      __debugbreak();
  }
  v9 = &g_entities[v6];
  ServerDObjForEnt = Com_GetServerDObjForEnt(v9);
  _RDI = outBounds;
  G_PhysicsCharacterProxy_GetCollisionBounds(ServerDObjForEnt, &v9->s, suitIndex, stance, outBounds);
  if ( hasShield )
  {
    _RBX = DCONST_DVARMPFLT_playerCharacterCollisionShieldOffset;
    if ( !DCONST_DVARMPFLT_playerCharacterCollisionShieldOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionShieldOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+28h]
      vaddss  xmm0, xmm1, dword ptr [rdi+0Ch]
      vmovss  dword ptr [rdi+0Ch], xmm0
      vaddss  xmm0, xmm1, dword ptr [rdi+10h]
      vmovss  dword ptr [rdi+10h], xmm0
      vaddss  xmm0, xmm1, dword ptr [rdi+14h]
      vmovss  dword ptr [rdi+14h], xmm0
    }
  }
}

/*
==============
GPMove::GetWorldUpParentOrientation
==============
*/
bool GPMove::GetWorldUpParentOrientation(GPMove *this, int entId, vec3_t *outOrigin, vec3_t *outAngles)
{
  gentity_s *GEntity; 
  gentity_s *v8; 
  EntityTagInfo *tagInfo; 
  float *parent; 
  float *v11; 

  if ( (unsigned int)entId >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_pmove.cpp", 193, ASSERT_TYPE_ASSERT, "(unsigned)( entId ) < (unsigned)( ( 2048 ) )", "entId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entId, 2048) )
    __debugbreak();
  if ( !G_IsEntityInUse(entId) )
    goto LABEL_26;
  GEntity = G_GetGEntity(entId);
  if ( !GEntity->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_pmove.cpp", 179, ASSERT_TYPE_ASSERT, "( ent->r.isInUse )", (const char *)&queryFormat, "ent->r.isInUse") )
    __debugbreak();
  if ( GEntity->client || !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&GEntity->s.lerp.eFlags, ACTIVE, 0xFu) )
  {
LABEL_26:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_pmove.cpp", 194, ASSERT_TYPE_ASSERT, "( IsWorldUpVolume( entId ) )", (const char *)&queryFormat, "IsWorldUpVolume( entId )") )
      __debugbreak();
  }
  *(_QWORD *)outAngles->v = 0i64;
  outAngles->v[2] = 0.0;
  *(_QWORD *)outOrigin->v = 0i64;
  outOrigin->v[2] = 0.0;
  v8 = G_GetGEntity(entId);
  if ( !v8->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_pmove.cpp", 200, ASSERT_TYPE_ASSERT, "( ent->r.isInUse )", (const char *)&queryFormat, "ent->r.isInUse") )
    __debugbreak();
  tagInfo = v8->tagInfo;
  if ( tagInfo )
  {
    if ( !tagInfo->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_pmove.cpp", 204, ASSERT_TYPE_ASSERT, "( ent->tagInfo->parent )", (const char *)&queryFormat, "ent->tagInfo->parent") )
      __debugbreak();
    if ( v8->tagInfo->parent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_pmove.cpp", 205, ASSERT_TYPE_ASSERT, "(ent->tagInfo->parent->client == nullptr)", "%s\n\tIt would not be safe to access player positions in that way as part of pmove", "ent->tagInfo->parent->client == nullptr") )
      __debugbreak();
    parent = (float *)v8->tagInfo->parent;
    outOrigin->v[0] = parent[76];
    outOrigin->v[1] = parent[77];
    outOrigin->v[2] = parent[78];
    v11 = (float *)v8->tagInfo->parent;
    outAngles->v[0] = v11[79];
    outAngles->v[1] = v11[80];
    outAngles->v[2] = v11[81];
    LOBYTE(tagInfo) = 1;
  }
  return (char)tagInfo;
}

/*
==============
GPMove::IsWorldUpVolume
==============
*/
bool GPMove::IsWorldUpVolume(GPMove *this, const int entId)
{
  gentity_s *GEntity; 

  if ( !G_IsEntityInUse(entId) )
    return 0;
  GEntity = G_GetGEntity(entId);
  if ( !GEntity->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_pmove.cpp", 179, ASSERT_TYPE_ASSERT, "( ent->r.isInUse )", (const char *)&queryFormat, "ent->r.isInUse") )
    __debugbreak();
  return !GEntity->client && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&GEntity->s.lerp.eFlags, ACTIVE, 0xFu);
}

/*
==============
GPMove::OnGestureOffhandTriggered
==============
*/
void GPMove::OnGestureOffhandTriggered(GPMove *this)
{
  ;
}

/*
==============
GPMove::SetMantleHint
==============
*/
void GPMove::SetMantleHint(GPMove *this, bool enabled)
{
  bot_data_t *EntityData; 

  EntityData = Bot_GetEntityData(&g_entities[this->ps->clientNum]);
  if ( EntityData )
    EntityData->botInfo.hasMantleHint = enabled;
}

/*
==============
GPMove::StartPhysicsPerfProbe
==============
*/
void GPMove::StartPhysicsPerfProbe(GPMove *this)
{
  if ( !this->m_isUserMoveWorker )
  {
    PhysPerfTrack_PMoveServerTimeStart();
    PhysPerfTrack_PMoveServerCountAdd();
  }
}

