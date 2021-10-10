/*
==============
CG_Foliage_ProcessCharacterEntity
==============
*/

void __fastcall CG_Foliage_ProcessCharacterEntity(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  ?CG_Foliage_ProcessCharacterEntity@@YAXW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Foliage_StartProcessCharacterEntityCmds
==============
*/

void CG_Foliage_StartProcessCharacterEntityCmds(void)
{
  ?CG_Foliage_StartProcessCharacterEntityCmds@@YAXXZ();
}

/*
==============
CG_Foliage_QueueProcessCharacterEntityCmd
==============
*/

void __fastcall CG_Foliage_QueueProcessCharacterEntityCmd(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  ?CG_Foliage_QueueProcessCharacterEntityCmd@@YAXW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Foliage_PlayBulletSound
==============
*/

void __fastcall CG_Foliage_PlayBulletSound(const LocalClientNum_t localClientNum, const centity_t *cent, const vec3_t *foliagePos, const int surfaceType)
{
  ?CG_Foliage_PlayBulletSound@@YAXW4LocalClientNum_t@@PEBUcentity_t@@AEBTvec3_t@@H@Z(localClientNum, cent, foliagePos, surfaceType);
}

/*
==============
CG_Foliage_BulletTrace
==============
*/

bool __fastcall CG_Foliage_BulletTrace(const LocalClientNum_t localClientNum, const vec3_t *bulletStart, const vec3_t *bulletEnd, vec3_t *outHitPos, unsigned __int8 *outHitSurfaceTypeId)
{
  return ?CG_Foliage_BulletTrace@@YA_NW4LocalClientNum_t@@AEBTvec3_t@@1AEAT2@AEAE@Z(localClientNum, bulletStart, bulletEnd, outHitPos, outHitSurfaceTypeId);
}

/*
==============
CG_Foliage_WaitForProcessCharacterEntityCmds
==============
*/

void CG_Foliage_WaitForProcessCharacterEntityCmds(void)
{
  ?CG_Foliage_WaitForProcessCharacterEntityCmds@@YAXXZ();
}

/*
==============
CG_Foliage_PlayCharacterSound
==============
*/

void __fastcall CG_Foliage_PlayCharacterSound(const cg_t *cgameGlob, const centity_t *cent, const bool isPlayerView, const int surfaceType)
{
  ?CG_Foliage_PlayCharacterSound@@YAXPEBVcg_t@@PEBUcentity_t@@_NH@Z(cgameGlob, cent, isPlayerView, surfaceType);
}

/*
==============
FoliageCharSoundQueryParams::~FoliageCharSoundQueryParams
==============
*/

void __fastcall FoliageCharSoundQueryParams::~FoliageCharSoundQueryParams(FoliageCharSoundQueryParams *this)
{
  ??1FoliageCharSoundQueryParams@@QEAA@XZ(this);
}

/*
==============
CG_Foliage_ProcessCharacterEntityCmd
==============
*/

void __fastcall CG_Foliage_ProcessCharacterEntityCmd(const void *const cmdData)
{
  ?CG_Foliage_ProcessCharacterEntityCmd@@YAXQEBX@Z(cmdData);
}

/*
==============
CG_Foliage_ProcessLocalCharacterEntity
==============
*/

void __fastcall CG_Foliage_ProcessLocalCharacterEntity(const LocalClientNum_t localClientNum)
{
  ?CG_Foliage_ProcessLocalCharacterEntity@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
FoliageCharSoundQueryParams::~FoliageCharSoundQueryParams
==============
*/
void FoliageCharSoundQueryParams::~FoliageCharSoundQueryParams(FoliageCharSoundQueryParams *this)
{
  hknpShape *shape; 
  Physics_WorldId physicsWorld; 

  if ( this->localStorageShape )
  {
    shape = this->shape;
    if ( shape )
    {
      physicsWorld = this->physicsWorld;
      if ( (unsigned int)physicsWorld <= PHYSICS_WORLD_ID_CLIENT1_DETAIL )
        Physics_ReleaseShape(physicsWorld, shape, 0);
    }
  }
}

/*
==============
CG_Foliage_BulletTrace
==============
*/
char CG_Foliage_BulletTrace(const LocalClientNum_t localClientNum, const vec3_t *bulletStart, const vec3_t *bulletEnd, vec3_t *outHitPos, unsigned __int8 *outHitSurfaceTypeId)
{
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  float v11; 
  float v12; 
  float v13; 
  __int128 v15; 
  const dvar_t *v18; 
  __int32 v19; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  unsigned __int8 *WeaponPriorityMap; 
  int v24; 
  float t; 
  Physics_RaycastExtendedData extendedData; 
  vec3_t center; 
  vec3_t rayDir; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v24 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 508, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v24) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 512, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *(_QWORD *)center.v = *(_QWORD *)p_predictedPlayerState->origin.v;
  v11 = bulletEnd->v[0] - bulletStart->v[0];
  v12 = bulletEnd->v[2] - bulletStart->v[2];
  center.v[2] = p_predictedPlayerState->origin.v[2];
  v15 = LODWORD(bulletEnd->v[1]);
  v13 = bulletEnd->v[1] - bulletStart->v[1];
  *(float *)&v15 = fsqrt((float)((float)(v13 * v13) + (float)(v11 * v11)) + (float)(v12 * v12));
  _XMM7 = v15;
  __asm
  {
    vcmpless xmm0, xmm7, cs:__real@80000000
    vblendvps xmm0, xmm7, xmm1, xmm0
  }
  rayDir.v[1] = v13 * (float)(1.0 / *(float *)&_XMM0);
  rayDir.v[0] = v11 * (float)(1.0 / *(float *)&_XMM0);
  rayDir.v[2] = v12 * (float)(1.0 / *(float *)&_XMM0);
  if ( *(float *)&v15 <= 0.000001 )
    return 0;
  v18 = DCONST_DVARFLT_bg_foliagesnd_radius;
  t = FLOAT_N3_4028235e38;
  if ( !DCONST_DVARFLT_bg_foliagesnd_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_radius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( !IntersectRaySphere(bulletStart, &rayDir, &center, v18->current.value, &t) )
    return 0;
  if ( t < 0.0 )
    return 0;
  if ( t > *(float *)&v15 )
    return 0;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  v19 = 3 * localClientNum + 4;
  extendedData.ignoreBodies = NULL;
  extendedData.phaseSelection = All;
  extendedData.collisionBuffer = 0.0;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = 2;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
  ClosestResult = PhysicsQuery_GetClosestResult((Physics_WorldId)v19);
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  WeaponPriorityMap = BG_GetWeaponPriorityMap(&NULL_WEAPON, 0);
  Physics_AddDetailTrace(ClosestResult, WeaponPriorityMap);
  Physics_Raycast((Physics_WorldId)v19, bulletStart, bulletEnd, &extendedData, ClosestResult);
  if ( !HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
    return 0;
  *outHitSurfaceTypeId = (HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(ClosestResult, 0) >> 19) & 0x3F;
  HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(ClosestResult, 0, outHitPos);
  return 1;
}

/*
==============
CG_Foliage_GetCharacterOrigin
==============
*/
void CG_Foliage_GetCharacterOrigin(LocalClientNum_t localClientNum, const playerState_s *ps, const centity_t *cent, bool isLocalPlayer, const characterInfo_t *ci, int vehEntNum, vec3_t *outOrigin)
{
  CgVehicleSystem *VehicleSystem; 
  BgVehiclePhysics *v12; 
  unsigned int PhysicsBodyId; 
  vec4_t orientation; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 212, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 213, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 214, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( vehEntNum == 2047 )
  {
    if ( isLocalPlayer )
      *outOrigin = ps->origin;
    else
      CG_GetPoseOrigin(&cent->pose, outOrigin);
  }
  else
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 219, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
      __debugbreak();
    v12 = (BgVehiclePhysics *)VehicleSystem->PhysicsGetVehicleObject(VehicleSystem, vehEntNum);
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 222, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
      __debugbreak();
    if ( BgVehiclePhysics::IsPhysicsBodyIdValid(v12) )
    {
      PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(v12);
      Physics_GetRigidBodyTransform((const Physics_WorldId)v12->m_worldId, PhysicsBodyId, outOrigin, &orientation);
    }
  }
}

/*
==============
CG_Foliage_GetCharacterQueryParams
==============
*/
bool CG_Foliage_GetCharacterQueryParams(cg_t *cgameGlob, const centity_t *cent, const characterInfo_t *ci, CgCharacterInfo *clientCi, FoliageCharSoundQueryParams *outParams)
{
  __int128 v5; 
  __int128 v6; 
  unsigned int vehEntNum; 
  LocalClientNum_t localClientNum; 
  int linkedEntNum; 
  int v14; 
  CgHandler *Handler; 
  int v16; 
  const entityState_t *EntityState; 
  bool v18; 
  LocalClientNum_t v19; 
  int speed; 
  CgVehicleSystem *VehicleSystem; 
  __int64 v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float minSpeed; 
  float v29; 
  float maxSpeed; 
  double v31; 
  CgVehicleSystem *v32; 
  BgVehiclePhysics *v33; 
  unsigned int PhysicsBodyId; 
  hknpShape *Shape; 
  CgEntitySystem *EntitySystem; 
  EffectiveStance EffectiveStance; 
  int suitIndex; 
  float v39; 
  bool result; 
  int clientNum; 
  int number; 
  int time; 
  FoliageCharSoundSettings outFolSndSettings; 
  __int128 v45; 
  __int128 v46; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 243, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 244, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 245, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !clientCi && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 246, ASSERT_TYPE_ASSERT, "(clientCi)", (const char *)&queryFormat, "clientCi") )
    __debugbreak();
  vehEntNum = 2047;
  localClientNum = cgameGlob->localClientNum;
  time = cgameGlob->time;
  clientNum = cgameGlob->predictedPlayerState.clientNum;
  number = cent->nextState.number;
  if ( !BG_IsPlayingVehicleOccupancyAnims(ci) )
    goto LABEL_21;
  linkedEntNum = ci->linkedEntNum;
  if ( linkedEntNum <= 0 )
    goto LABEL_21;
  v14 = linkedEntNum - 1;
  Handler = CgHandler::getHandler(localClientNum);
  if ( !Handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 131, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  v16 = *(_DWORD *)&BG_GetEntityState(Handler, v14)->clientLinkInfo & 0x7FF;
  if ( v16 && (EntityState = BG_GetEntityState(Handler, v16 - 1), EntityState->eType == ET_VEHICLE) )
  {
    vehEntNum = EntityState->number;
    v18 = 1;
  }
  else
  {
LABEL_21:
    v18 = 0;
  }
  v19 = cgameGlob->localClientNum;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 181, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( vehEntNum == 2047 )
  {
    speed = ci->speed;
  }
  else
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(v19);
    if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 189, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
      __debugbreak();
    v22 = (__int64)VehicleSystem->PhysicsGetVehicleObject(VehicleSystem, vehEntNum);
    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 192, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
      __debugbreak();
    if ( BgVehiclePhysics::IsDynamic((BgVehiclePhysics *)v22) )
    {
      v23 = (float)((float)(*(float *)(v22 + 420) * *(float *)(v22 + 420)) + (float)(*(float *)(v22 + 424) * *(float *)(v22 + 424))) + (float)(*(float *)(v22 + 428) * *(float *)(v22 + 428));
    }
    else
    {
      v24 = *(float *)(v22 + 328);
      v25 = COERCE_FLOAT(*(_QWORD *)(v22 + 320)) * COERCE_FLOAT(*(_QWORD *)(v22 + 320));
      *(_QWORD *)&outFolSndSettings.radius = *(_QWORD *)(v22 + 320);
      outFolSndSettings.maxSpeed = v24;
      v23 = (float)(v25 + (float)(outFolSndSettings.minSpeed * outFolSndSettings.minSpeed)) + (float)(v24 * v24);
    }
    speed = (int)fsqrt(v23);
  }
  CG_Foliage_GetFoliageSndSettings(v18, &outFolSndSettings);
  CG_Foliage_GetCharacterOrigin(cgameGlob->localClientNum, &cgameGlob->predictedPlayerState, cent, number == clientNum, ci, vehEntNum, &outParams->origin);
  if ( (number == clientNum || (v26 = cgameGlob->predictedPlayerState.origin.v[1] - outParams->origin.v[1], v27 = cgameGlob->predictedPlayerState.origin.v[2] - outParams->origin.v[2], (float)((float)((float)(v26 * v26) + (float)((float)(cgameGlob->predictedPlayerState.origin.v[0] - outParams->origin.v[0]) * (float)(cgameGlob->predictedPlayerState.origin.v[0] - outParams->origin.v[0]))) + (float)(v27 * v27)) <= (float)(outFolSndSettings.radius * outFolSndSettings.radius))) && (minSpeed = outFolSndSettings.minSpeed, v29 = (float)speed, v29 >= outFolSndSettings.minSpeed) )
  {
    v46 = v5;
    maxSpeed = outFolSndSettings.maxSpeed;
    v45 = v6;
    if ( (float)(outFolSndSettings.maxSpeed - outFolSndSettings.minSpeed) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 277, ASSERT_TYPE_SANITY, "( folSndSettings.maxSpeed - folSndSettings.minSpeed > 0 )", (const char *)&queryFormat, "folSndSettings.maxSpeed - folSndSettings.minSpeed > 0") )
      __debugbreak();
    v31 = I_fclamp((float)(v29 - minSpeed) / (float)(maxSpeed - minSpeed), 0.0, 1.0);
    if ( clientCi->foliageInfo.foliageSoundTime + (int)(float)((float)(*(float *)&v31 * (float)(outFolSndSettings.fastInterval - outFolSndSettings.slowInterval)) + (float)outFolSndSettings.slowInterval) < time )
    {
      outParams->shape = NULL;
      outParams->physicsWorld = 3 * cgameGlob->localClientNum + 2;
      if ( v18 && vehEntNum != 2047 )
      {
        v32 = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)cgameGlob->localClientNum);
        if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 296, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
          __debugbreak();
        v33 = (BgVehiclePhysics *)v32->PhysicsGetVehicleObject(v32, vehEntNum);
        if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 298, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
          __debugbreak();
        PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(v33);
        Shape = Physics_GetShape(outParams->physicsWorld, PhysicsBodyId);
        outParams->shape = Shape;
        outParams->localStorageShape = 0;
        if ( Shape )
          return 1;
      }
      EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)cgameGlob->localClientNum);
      if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 307, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
        __debugbreak();
      EffectiveStance = CgEntitySystem::GetEffectiveStance(EntitySystem, &cent->nextState);
      if ( number == clientNum )
        suitIndex = cgameGlob->predictedPlayerState.suitIndex;
      else
        suitIndex = ci->suitIndex;
      outFolSndSettings = (FoliageCharSoundSettings)*BG_Suit_GetBounds(suitIndex, EffectiveStance);
      v39 = _mm_shuffle_ps(*(__m128 *)&outFolSndSettings.radius, *(__m128 *)&outFolSndSettings.radius, 255).m128_f32[0];
      if ( v39 > 0.000001 && *(float *)&outFolSndSettings.resetInterval > 0.000001 )
      {
        outParams->shape = Physics_CreateShapeCylinder((const vec3_t *)&outFolSndSettings, *(float *)&outFolSndSettings.resetInterval, v39, 16, 1);
        outParams->localStorageShape = 1;
        return 1;
      }
    }
  }
  else if ( outFolSndSettings.resetInterval + clientCi->foliageInfo.foliageSoundTime < time )
  {
    clientCi->foliageInfo.foliageSoundTime = 0;
  }
  *(_QWORD *)outParams->origin.v = 0i64;
  result = 0;
  outParams->origin.v[2] = 0.0;
  outParams->physicsWorld = PHYSICS_WORLD_ID_INVALID;
  outParams->shape = NULL;
  *(_WORD *)&outParams->isLocalPlayer = 0;
  return result;
}

/*
==============
CG_Foliage_GetFoliageSndSettings
==============
*/
void CG_Foliage_GetFoliageSndSettings(bool isOnVehicle, FoliageCharSoundSettings *outFolSndSettings)
{
  const dvar_t *v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const char *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 

  if ( isOnVehicle )
  {
    v3 = DCONST_DVARFLT_bg_foliagesnd_radius_veh;
    if ( !DCONST_DVARFLT_bg_foliagesnd_radius_veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_radius_veh") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    LODWORD(outFolSndSettings->radius) = v3->current.integer;
    v4 = DCONST_DVARINT_bg_foliagesnd_resetinterval_veh;
    if ( !DCONST_DVARINT_bg_foliagesnd_resetinterval_veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_resetinterval_veh") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    outFolSndSettings->resetInterval = v4->current.integer;
    v5 = DCONST_DVARFLT_bg_foliagesnd_minspeed_veh;
    if ( !DCONST_DVARFLT_bg_foliagesnd_minspeed_veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_minspeed_veh") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    LODWORD(outFolSndSettings->minSpeed) = v5->current.integer;
    v6 = DCONST_DVARFLT_bg_foliagesnd_maxspeed_veh;
    if ( !DCONST_DVARFLT_bg_foliagesnd_maxspeed_veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_maxspeed_veh") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    LODWORD(outFolSndSettings->maxSpeed) = v6->current.integer;
    v7 = DCONST_DVARINT_bg_foliagesnd_fastinterval_veh;
    if ( !DCONST_DVARINT_bg_foliagesnd_fastinterval_veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_fastinterval_veh") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    outFolSndSettings->fastInterval = v7->current.integer;
    v8 = DCONST_DVARINT_bg_foliagesnd_slowinterval_veh;
    if ( !DCONST_DVARINT_bg_foliagesnd_slowinterval_veh )
    {
      v9 = "bg_foliagesnd_slowinterval_veh";
      goto LABEL_36;
    }
  }
  else
  {
    v10 = DCONST_DVARFLT_bg_foliagesnd_radius;
    if ( !DCONST_DVARFLT_bg_foliagesnd_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_radius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    LODWORD(outFolSndSettings->radius) = v10->current.integer;
    v11 = DCONST_DVARINT_bg_foliagesnd_resetinterval;
    if ( !DCONST_DVARINT_bg_foliagesnd_resetinterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_resetinterval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    outFolSndSettings->resetInterval = v11->current.integer;
    v12 = DCONST_DVARFLT_bg_foliagesnd_minspeed;
    if ( !DCONST_DVARFLT_bg_foliagesnd_minspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_minspeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    LODWORD(outFolSndSettings->minSpeed) = v12->current.integer;
    v13 = DCONST_DVARFLT_bg_foliagesnd_maxspeed;
    if ( !DCONST_DVARFLT_bg_foliagesnd_maxspeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_maxspeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    LODWORD(outFolSndSettings->maxSpeed) = v13->current.integer;
    v14 = DCONST_DVARINT_bg_foliagesnd_fastinterval;
    if ( !DCONST_DVARINT_bg_foliagesnd_fastinterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_fastinterval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    outFolSndSettings->fastInterval = v14->current.integer;
    v8 = DCONST_DVARINT_bg_foliagesnd_slowinterval;
    if ( !DCONST_DVARINT_bg_foliagesnd_slowinterval )
    {
      v9 = "bg_foliagesnd_slowinterval";
LABEL_36:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v9) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(v8);
  outFolSndSettings->slowInterval = v8->current.integer;
}

/*
==============
CG_Foliage_PlayBulletSound
==============
*/
void CG_Foliage_PlayBulletSound(const LocalClientNum_t localClientNum, const centity_t *cent, const vec3_t *foliagePos, const int surfaceType)
{
  CgSoundSystem *SoundSystem; 
  const dvar_t *v9; 
  CgSoundSystem *v10; 
  SndAliasList *Alias; 
  int v13; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v13 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 108, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v13) )
      __debugbreak();
  }
  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  v9 = DVARSTR_cg_foliagebulletsnd_alias;
  v10 = SoundSystem;
  if ( !DVARSTR_cg_foliagebulletsnd_alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_foliagebulletsnd_alias") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  Alias = SND_FindAlias(v9->current.string);
  ((void (__fastcall *)(CgSoundSystem *, _QWORD, const vec3_t *, SndAliasList *, const int, _DWORD, _DWORD, _DWORD))v10->PlaySurfaceSound)(v10, (unsigned int)cent->nextState.number, foliagePos, Alias, surfaceType, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
}

/*
==============
CG_Foliage_PlayCharacterSound
==============
*/
void CG_Foliage_PlayCharacterSound(const cg_t *cgameGlob, const centity_t *cent, const bool isPlayerView, const int surfaceType)
{
  CgSoundSystem *SoundSystem; 
  const dvar_t *v9; 
  SndAliasList *Alias; 
  trajectory_t_secure *p_pos; 
  __int64 v12; 
  _QWORD v13[4]; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> axis; 

  v13[3] = -2i64;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 78, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 79, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (unsigned int)surfaceType >= 0x40 )
  {
    LODWORD(v12) = surfaceType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 80, ASSERT_TYPE_ASSERT, "(unsigned)( surfaceType ) < (unsigned)( 64 )", "surfaceType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", v12, 64) )
      __debugbreak();
  }
  SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)cgameGlob->localClientNum);
  v9 = DVARSTR_cg_foliagesnd_alias;
  if ( !DVARSTR_cg_foliagesnd_alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_foliagesnd_alias") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  Alias = SND_FindAlias(v9->current.string);
  if ( isPlayerView )
  {
    AnglesToAxis(&cent->pose.angles, &axis);
    p_pos = &cent->nextState.lerp.pos;
    if ( !p_pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
      __debugbreak();
    if ( p_pos->trType == TR_LINEAR_STOP_SECURE )
    {
      v13[2] = v13;
      LODWORD(v13[1]) = LODWORD(p_pos->trBase.v[1]) ^ LODWORD(p_pos->trBase.v[2]) ^ s_trbase_aab_Z;
      HIDWORD(v13[0]) = LODWORD(p_pos->trBase.v[0]) ^ LODWORD(p_pos->trBase.v[1]) ^ s_trbase_aab_Y;
      LODWORD(v13[0]) = LODWORD(p_pos->trBase.v[0]) ^ ~s_trbase_aab_X;
      memset(&v13[2], 0, sizeof(_QWORD));
      *(float *)&v13[2] = *(float *)v13;
      if ( (v13[0] & 0x7F800000) == 2139095040 || (*(float *)&v13[2] = *((float *)v13 + 1), (HIDWORD(v13[0]) & 0x7F800000) == 2139095040) || (*(float *)&v13[2] = *(float *)&v13[1], (v13[1] & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
          __debugbreak();
      }
    }
    else
    {
      v13[0] = *(_QWORD *)p_pos->trBase.v;
      *(float *)&v13[1] = p_pos->trBase.v[2];
    }
    outOrigin.v[0] = (float)(50.0 * axis.m[0].v[0]) + *(float *)v13;
    outOrigin.v[1] = (float)(50.0 * axis.m[0].v[1]) + *((float *)v13 + 1);
    outOrigin.v[2] = (float)(50.0 * axis.m[0].v[2]) + *(float *)&v13[1];
    ((void (__fastcall *)(CgSoundSystem *, __int64, vec3_t *, SndAliasList *, const int, _DWORD, _DWORD, _DWORD))SoundSystem->PlaySurfaceSoundAsync)(SoundSystem, 2046i64, &outOrigin, Alias, surfaceType, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
    memset(v13, 0, 0xCui64);
  }
  else
  {
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, SndAliasList *, const int, _DWORD, _DWORD, _DWORD))SoundSystem->PlaySurfaceSoundAsync)(SoundSystem, (unsigned int)cent->nextState.number, &outOrigin, Alias, surfaceType, LODWORD(FLOAT_1_0), LODWORD(FLOAT_1_0), 0);
  }
}

/*
==============
CG_Foliage_ProcessCharacterEntity
==============
*/
void CG_Foliage_ProcessCharacterEntity(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  __int64 number; 
  CgGlobalsSP *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  CgCharacterInfo *v7; 
  __int64 v8; 
  __int64 v9; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 388, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  Profile_Begin(372);
  if ( (cent->flags & 1) != 0 )
  {
    number = cent->nextState.number;
    LocalClientGlobals = (CgGlobalsSP *)CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 402, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( !LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, number) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 404, ASSERT_TYPE_ASSERT, "(cgameGlob->HasCharacterInfo( entNum ))", (const char *)&queryFormat, "cgameGlob->HasCharacterInfo( entNum )") )
      __debugbreak();
    if ( !LocalClientGlobals->HasCgCharacterInfo(LocalClientGlobals, number) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 405, ASSERT_TYPE_ASSERT, "(cgameGlob->HasCgCharacterInfo( entNum ))", (const char *)&queryFormat, "cgameGlob->HasCgCharacterInfo( entNum )") )
      __debugbreak();
    if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
    {
      if ( (unsigned int)number >= *(_DWORD *)&LocalClientGlobals->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[28] )
      {
        LODWORD(v9) = *(_DWORD *)&LocalClientGlobals->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[28];
        LODWORD(v8) = number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[12] + 14792 * number);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo(LocalClientGlobals, number);
    }
    v7 = LocalClientGlobals->GetCgCharacterInfo(LocalClientGlobals, number);
    CG_Foliage_ProcessCharacterEntitySounds(LocalClientGlobals, cent, CharacterInfo, v7);
  }
  Profile_EndInternal(NULL);
}

/*
==============
CG_Foliage_ProcessCharacterEntityCmd
==============
*/
void CG_Foliage_ProcessCharacterEntityCmd(const void *const cmdData)
{
  unsigned int i; 
  LocalClientNum_t v3; 
  __int64 v4; 
  __int64 v5; 
  CgGlobalsSP *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  CgCharacterInfo *v8; 
  __int64 v9; 
  __int64 v10; 

  for ( i = 0; i < *((_DWORD *)cmdData + 12); ++i )
  {
    v3 = *((_DWORD *)cmdData + 4 * i);
    v4 = *((_QWORD *)cmdData + 2 * i + 1);
    if ( (unsigned int)v3 >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v10) = 2;
      LODWORD(v9) = *((_DWORD *)cmdData + 4 * i);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 388, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    Profile_Begin(372);
    if ( (*(_BYTE *)(v4 + 648) & 1) != 0 )
    {
      v5 = *(__int16 *)(v4 + 400);
      LocalClientGlobals = (CgGlobalsSP *)CG_GetLocalClientGlobals(v3);
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 402, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( !LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 404, ASSERT_TYPE_ASSERT, "(cgameGlob->HasCharacterInfo( entNum ))", (const char *)&queryFormat, "cgameGlob->HasCharacterInfo( entNum )") )
        __debugbreak();
      if ( !LocalClientGlobals->HasCgCharacterInfo(LocalClientGlobals, v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 405, ASSERT_TYPE_ASSERT, "(cgameGlob->HasCgCharacterInfo( entNum ))", (const char *)&queryFormat, "cgameGlob->HasCgCharacterInfo( entNum )") )
        __debugbreak();
      if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
      {
        if ( (unsigned int)v5 >= *(_DWORD *)&LocalClientGlobals->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[28] )
        {
          LODWORD(v10) = *(_DWORD *)&LocalClientGlobals->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[28];
          LODWORD(v9) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v9, v10) )
            __debugbreak();
        }
        CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[12] + 14792 * v5);
      }
      else
      {
        CharacterInfo = CgGlobalsSP::GetCharacterInfo(LocalClientGlobals, v5);
      }
      v8 = LocalClientGlobals->GetCgCharacterInfo(LocalClientGlobals, v5);
      CG_Foliage_ProcessCharacterEntitySounds(LocalClientGlobals, (const centity_t *)v4, CharacterInfo, v8);
    }
    Profile_EndInternal(NULL);
  }
}

/*
==============
CG_Foliage_ProcessCharacterEntitySounds
==============
*/
void CG_Foliage_ProcessCharacterEntitySounds(cg_t *cgameGlob, const centity_t *cent, const characterInfo_t *ci, CgCharacterInfo *clientCi)
{
  unsigned int ClosestPointHitHitSurfFlags; 
  HavokPhysics_CollisionQueryResult *result; 
  bool HasHit; 
  bool isLocalPlayer; 
  Physics_GetClosestPointsExtendedData extendedData; 
  __int64 v13; 
  FoliageCharSoundQueryParams outParams; 

  v13 = -2i64;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 332, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 333, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 334, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !clientCi && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 335, ASSERT_TYPE_ASSERT, "(clientCi)", (const char *)&queryFormat, "clientCi") )
    __debugbreak();
  outParams.origin.v[0] = 0.0;
  outParams.origin.v[1] = 0.0;
  outParams.origin.v[2] = 0.0;
  outParams.physicsWorld = PHYSICS_WORLD_ID_INVALID;
  ClosestPointHitHitSurfFlags = 0;
  outParams.shape = NULL;
  *(_WORD *)&outParams.isLocalPlayer = 0;
  if ( CG_Foliage_GetCharacterQueryParams(cgameGlob, cent, ci, clientCi, &outParams) )
  {
    Sys_ProfBeginNamedEvent(0xFFFF00FF, "CG_Foliage Physics Query");
    extendedData.simplify = 0;
    extendedData.ignoreBodies = NULL;
    extendedData.collisionBuffer = 0.0;
    extendedData.nonBrushShape = NULL;
    extendedData.phaseSelection = All;
    extendedData.contents = 2;
    result = PhysicsQuery_GetAnyResult(outParams.physicsWorld);
    HavokPhysics_CollisionQueryResult::Reset(result, 1);
    if ( !outParams.isLocalPlayer )
      CG_EntityWorkers_AcquireReadLock_Physics(BASE);
    if ( !outParams.shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 361, ASSERT_TYPE_ASSERT, "(sndQueryParams.shape)", (const char *)&queryFormat, "sndQueryParams.shape") )
      __debugbreak();
    if ( outParams.physicsWorld > (unsigned int)PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 362, ASSERT_TYPE_ASSERT, "(sndQueryParams.physicsWorld >= PHYSICS_WORLD_ID_FIRST && sndQueryParams.physicsWorld <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "sndQueryParams.physicsWorld >= PHYSICS_WORLD_ID_FIRST && sndQueryParams.physicsWorld <= PHYSICS_WORLD_ID_LAST") )
      __debugbreak();
    Physics_GetClosestPoints(outParams.physicsWorld, outParams.shape, &outParams.origin, &quat_identity, 0.0, &extendedData, result);
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(result);
    if ( HasHit )
      ClosestPointHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(result, 0);
    isLocalPlayer = outParams.isLocalPlayer;
    if ( !outParams.isLocalPlayer )
    {
      CG_EntityWorkers_ReleaseReadLock_Physics(BASE);
      isLocalPlayer = outParams.isLocalPlayer;
    }
    if ( HasHit )
    {
      CG_Foliage_PlayCharacterSound(cgameGlob, cent, isLocalPlayer, (ClosestPointHitHitSurfFlags >> 19) & 0x3F);
      clientCi->foliageInfo.foliageSoundTime = cgameGlob->time;
    }
    Sys_ProfEndNamedEvent();
  }
  if ( outParams.localStorageShape && outParams.shape && outParams.physicsWorld <= (unsigned int)PHYSICS_WORLD_ID_CLIENT1_DETAIL )
    Physics_ReleaseShape(outParams.physicsWorld, outParams.shape, 0);
}

/*
==============
CG_Foliage_ProcessLocalCharacterEntity
==============
*/
void CG_Foliage_ProcessLocalCharacterEntity(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  centity_t *Entity; 
  int v6; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 490, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 493, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, p_predictedPlayerState->clientNum);
  if ( (Entity->flags & 1) != 0 )
    CG_Foliage_ProcessCharacterEntity(localClientNum, Entity);
}

/*
==============
CG_Foliage_QueueProcessCharacterEntityCmd
==============
*/
void CG_Foliage_QueueProcessCharacterEntityCmd(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  __int64 v4; 

  Sys_EnterCriticalSection(CRITSECT_FOLIAGE);
  if ( s_foliageQueuedDataCount < 0x14 )
  {
    v4 = s_foliageQueuedDataCount++;
    s_foliageQueuedData[v4].localClientNum = localClientNum;
    s_foliageQueuedData[v4].cent = cent;
  }
  Sys_LeaveCriticalSection(CRITSECT_FOLIAGE);
}

/*
==============
CG_Foliage_StartProcessCharacterEntityCmds
==============
*/
void CG_Foliage_StartProcessCharacterEntityCmds(void)
{
  unsigned int v0; 
  unsigned int i; 
  unsigned int v2; 
  unsigned int v3; 
  __int64 v4; 
  __int64 v5; 
  __int128 data[3]; 
  unsigned int j; 

  Sys_EnterCriticalSection(CRITSECT_FOLIAGE);
  v0 = s_foliageQueuedDataCount;
  for ( i = 0; i < s_foliageQueuedDataCount; i += 3 )
  {
    v2 = v0 - i;
    if ( v2 > 3 )
      v2 = 3;
    v3 = 0;
    for ( j = v2; v3 < j; data[v5] = (__int128)s_foliageQueuedData[v4] )
    {
      v4 = v3 + i;
      v5 = v3++;
    }
    Sys_AddWorkerCmd(WRKCMD_CG_FOLIAGE_PROCESSCHARACTERENTITY, data);
    v0 = s_foliageQueuedDataCount;
  }
  s_foliageQueuedDataCount = 0;
  Sys_LeaveCriticalSection(CRITSECT_FOLIAGE);
}

/*
==============
CG_Foliage_WaitForProcessCharacterEntityCmds
==============
*/
void CG_Foliage_WaitForProcessCharacterEntityCmds(void)
{
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_CG_FOLIAGE_PROCESSCHARACTERENTITY);
}

