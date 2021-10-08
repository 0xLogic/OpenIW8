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
bool CG_Foliage_BulletTrace(const LocalClientNum_t localClientNum, const vec3_t *bulletStart, const vec3_t *bulletEnd, vec3_t *outHitPos)
{
  cg_t *LocalClientGlobals; 
  bool v11; 
  bool v13; 
  bool result; 
  float t; 
  vec3_t center; 
  vec3_t rayDir; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _RBP = bulletEnd;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 508, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v11 = __CFADD__(LocalClientGlobals, 8i64) || &LocalClientGlobals->predictedPlayerState == NULL;
  _RDI = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 512, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps");
    v11 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+30h]
    vmovss  dword ptr [rsp+0F8h+center], xmm0
    vmovss  xmm1, dword ptr [rdi+34h]
    vmovss  dword ptr [rsp+0F8h+center+4], xmm1
    vmovss  xmm0, dword ptr [rdi+38h]
    vmovss  xmm1, dword ptr [rbp+0]
    vsubss  xmm4, xmm1, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rbp+8]
    vsubss  xmm6, xmm1, dword ptr [rsi+8]
    vmovss  dword ptr [rsp+0F8h+center+8], xmm0
    vmovss  xmm0, dword ptr [rbp+4]
    vsubss  xmm5, xmm0, dword ptr [rsi+4]
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm2, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm3, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm7, xmm2, xmm2
    vcmpless xmm0, xmm7, cs:__real@80000000
    vblendvps xmm0, xmm7, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm2
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rsp+0F8h+rayDir+4], xmm1
    vcvtss2sd xmm1, xmm7, xmm7
    vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
    vmovss  dword ptr [rsp+0F8h+rayDir], xmm0
    vmulss  xmm0, xmm6, xmm2
    vmovss  dword ptr [rsp+0F8h+rayDir+8], xmm0
  }
  if ( !v11 )
  {
    _RDI = DCONST_DVARFLT_bg_foliagesnd_radius;
    __asm
    {
      vmovss  xmm0, cs:__real@ff7fffff
      vmovss  [rsp+0F8h+t], xmm0
    }
    if ( !DCONST_DVARFLT_bg_foliagesnd_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_foliagesnd_radius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm3, dword ptr [rdi+28h]; radius }
    if ( IntersectRaySphere(bulletStart, &rayDir, &center, *(const float *)&_XMM3, &t) )
    {
      __asm
      {
        vmovss  xmm0, [rsp+0F8h+t]
        vxorps  xmm1, xmm1, xmm1
        vcomiss xmm0, xmm1
        vcomiss xmm0, xmm7
      }
    }
  }
  result = 0;
  __asm
  {
    vmovaps xmm6, [rsp+0F8h+var_48]
    vmovaps xmm7, [rsp+0F8h+var_58]
  }
  return result;
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
  unsigned int vehEntNum; 
  LocalClientNum_t localClientNum; 
  int linkedEntNum; 
  int v17; 
  CgHandler *Handler; 
  int v19; 
  const entityState_t *EntityState; 
  bool v21; 
  LocalClientNum_t v22; 
  CgVehicleSystem *VehicleSystem; 
  float v33; 
  CgVehicleSystem *v73; 
  BgVehiclePhysics *v74; 
  unsigned int PhysicsBodyId; 
  hknpShape *Shape; 
  CgEntitySystem *EntitySystem; 
  EffectiveStance EffectiveStance; 
  int v79; 
  char v80; 
  char v81; 
  bool result; 
  unsigned int clientNum; 
  unsigned int number; 
  int time; 
  FoliageCharSoundSettings outFolSndSettings; 

  _RBP = cgameGlob;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 243, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 244, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 245, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !clientCi && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 246, ASSERT_TYPE_ASSERT, "(clientCi)", (const char *)&queryFormat, "clientCi") )
    __debugbreak();
  vehEntNum = 2047;
  localClientNum = _RBP->localClientNum;
  time = _RBP->time;
  clientNum = _RBP->predictedPlayerState.clientNum;
  number = cent->nextState.number;
  if ( !BG_IsPlayingVehicleOccupancyAnims(ci) )
    goto LABEL_21;
  linkedEntNum = ci->linkedEntNum;
  if ( linkedEntNum <= 0 )
    goto LABEL_21;
  v17 = linkedEntNum - 1;
  Handler = CgHandler::getHandler(localClientNum);
  if ( !Handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 131, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  v19 = *(_DWORD *)&BG_GetEntityState(Handler, v17)->clientLinkInfo & 0x7FF;
  if ( v19 && (EntityState = BG_GetEntityState(Handler, v19 - 1), EntityState->eType == ET_VEHICLE) )
  {
    vehEntNum = EntityState->number;
    v21 = 1;
  }
  else
  {
LABEL_21:
    v21 = 0;
  }
  v22 = _RBP->localClientNum;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 181, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( vehEntNum != 2047 )
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(v22);
    if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 189, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
      __debugbreak();
    _RDI = (__int64)VehicleSystem->PhysicsGetVehicleObject(VehicleSystem, vehEntNum);
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 192, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
      __debugbreak();
    if ( BgVehiclePhysics::IsDynamic((BgVehiclePhysics *)_RDI) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+1A4h]
        vmovss  xmm2, dword ptr [rdi+1A8h]
        vmovss  xmm3, dword ptr [rdi+1ACh]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm4, xmm2, xmm1
      }
    }
    else
    {
      __asm { vmovsd  xmm0, qword ptr [rdi+140h] }
      v33 = *(float *)(_RDI + 328);
      __asm
      {
        vmulss  xmm2, xmm0, xmm0
        vmovsd  qword ptr [rsp+108h+outFolSndSettings.radius], xmm0
        vmovss  xmm0, [rsp+108h+outFolSndSettings.minSpeed]
        vmulss  xmm1, xmm0, xmm0
        vaddss  xmm3, xmm2, xmm1
      }
      outFolSndSettings.maxSpeed = v33;
      __asm
      {
        vmovss  xmm2, [rsp+108h+outFolSndSettings.maxSpeed]
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm4, xmm3, xmm0
      }
    }
    __asm
    {
      vsqrtss xmm0, xmm4, xmm4
      vcvttss2si edi, xmm0
    }
  }
  __asm
  {
    vmovaps [rsp+108h+var_58], xmm6
    vmovaps [rsp+108h+var_68], xmm7
  }
  CG_Foliage_GetFoliageSndSettings(v21, &outFolSndSettings);
  CG_Foliage_GetCharacterOrigin(_RBP->localClientNum, &_RBP->predictedPlayerState, cent, number == clientNum, ci, vehEntNum, &outParams->origin);
  if ( number != clientNum )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+38h]
      vsubss  xmm3, xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rbp+3Ch]
      vsubss  xmm2, xmm1, dword ptr [rbx+4]
      vmovss  xmm0, dword ptr [rbp+40h]
      vsubss  xmm4, xmm0, dword ptr [rbx+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmovss  xmm1, [rsp+108h+outFolSndSettings.radius]
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm4, xmm3, xmm0
      vmulss  xmm2, xmm1, xmm1
      vcomiss xmm4, xmm2
    }
    if ( number > clientNum )
      goto LABEL_62;
  }
  __asm
  {
    vmovss  xmm6, [rsp+108h+outFolSndSettings.minSpeed]
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, edi
    vcomiss xmm7, xmm6
  }
  if ( number < clientNum )
  {
LABEL_62:
    if ( outFolSndSettings.resetInterval + clientCi->foliageInfo.foliageSoundTime < time )
      clientCi->foliageInfo.foliageSoundTime = 0;
    goto LABEL_64;
  }
  __asm
  {
    vmovaps [rsp+108h+var_78], xmm8
    vmovss  xmm8, [rsp+108h+outFolSndSettings.maxSpeed]
    vmovaps [rsp+108h+var_88], xmm9
    vsubss  xmm0, xmm8, xmm6
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm0, xmm9
  }
  if ( number <= clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 277, ASSERT_TYPE_SANITY, "( folSndSettings.maxSpeed - folSndSettings.minSpeed > 0 )", (const char *)&queryFormat, "folSndSettings.maxSpeed - folSndSettings.minSpeed > 0") )
    __debugbreak();
  __asm
  {
    vsubss  xmm2, xmm7, xmm6
    vsubss  xmm0, xmm8, xmm6
    vdivss  xmm0, xmm2, xmm0; val
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm9, [rsp+108h+var_88]
    vmovaps xmm8, [rsp+108h+var_78]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmulss  xmm2, xmm0, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rsp+108h+outFolSndSettings.slowInterval]
    vaddss  xmm2, xmm2, xmm0
    vcvttss2si ecx, xmm2
  }
  if ( clientCi->foliageInfo.foliageSoundTime + _ECX >= time )
    goto LABEL_64;
  outParams->shape = NULL;
  outParams->physicsWorld = 3 * _RBP->localClientNum + 2;
  if ( v21 && vehEntNum != 2047 )
  {
    v73 = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)_RBP->localClientNum);
    if ( !v73 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 296, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
      __debugbreak();
    v74 = (BgVehiclePhysics *)v73->PhysicsGetVehicleObject(v73, vehEntNum);
    if ( !v74 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 298, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
      __debugbreak();
    PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(v74);
    Shape = Physics_GetShape(outParams->physicsWorld, PhysicsBodyId);
    outParams->shape = Shape;
    outParams->localStorageShape = 0;
    if ( Shape )
      goto LABEL_61;
  }
  EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)_RBP->localClientNum);
  if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 307, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
    __debugbreak();
  EffectiveStance = CgEntitySystem::GetEffectiveStance(EntitySystem, &cent->nextState);
  v79 = number == clientNum ? _RBP->predictedPlayerState.suitIndex : ci->suitIndex;
  _RAX = BG_Suit_GetBounds(v79, EffectiveStance);
  __asm
  {
    vmovsd  xmm3, cs:__real@3eb0c6f7a0b5ed8d
    vmovups xmm2, xmmword ptr [rax]
    vmovups xmmword ptr [rsp+108h+outFolSndSettings.radius], xmm2
    vmovsd  xmm0, qword ptr [rax+10h]
    vshufps xmm2, xmm2, xmm2, 0FFh; radius
    vmovsd  qword ptr [rsp+108h+outFolSndSettings.fastInterval], xmm0
    vcvtss2sd xmm0, xmm2, xmm2
    vcomisd xmm0, xmm3
  }
  if ( v80 | v81 )
    goto LABEL_64;
  __asm
  {
    vmovss  xmm1, [rsp+108h+outFolSndSettings.resetInterval]; halfHeight
    vcvtss2sd xmm0, xmm1, xmm1
    vcomisd xmm0, xmm3
  }
  if ( v80 | v81 )
  {
LABEL_64:
    *(_QWORD *)outParams->origin.v = 0i64;
    result = 0;
    outParams->origin.v[2] = 0.0;
    outParams->physicsWorld = PHYSICS_WORLD_ID_INVALID;
    outParams->shape = NULL;
    *(_WORD *)&outParams->isLocalPlayer = 0;
    goto LABEL_65;
  }
  outParams->shape = Physics_CreateShapeCylinder((const vec3_t *)&outFolSndSettings, *(float *)&_XMM1, *(float *)&_XMM2, 16, 1);
  outParams->localStorageShape = 1;
LABEL_61:
  result = 1;
LABEL_65:
  __asm
  {
    vmovaps xmm7, [rsp+108h+var_68]
    vmovaps xmm6, [rsp+108h+var_58]
  }
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
  int v14; 
  int v15; 
  int v16; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v15 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 108, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v15) )
      __debugbreak();
  }
  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  v9 = DVARSTR_cg_foliagebulletsnd_alias;
  v10 = SoundSystem;
  if ( !DVARSTR_cg_foliagebulletsnd_alias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_foliagebulletsnd_alias") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  Alias = SND_FindAlias(v9->current.string);
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  dword ptr [rsp+48h+var_18], xmm0
    vmovss  dword ptr [rsp+48h+var_20], xmm0
  }
  ((void (__fastcall *)(CgSoundSystem *, _QWORD, const vec3_t *, SndAliasList *, const int, int, int, _DWORD))v10->PlaySurfaceSound)(v10, (unsigned int)cent->nextState.number, foliagePos, Alias, surfaceType, v14, v16, 0);
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
  __int64 v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  _QWORD v32[4]; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> axis; 

  v32[3] = -2i64;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 78, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 79, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (unsigned int)surfaceType >= 0x40 )
  {
    LODWORD(v27) = surfaceType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 80, ASSERT_TYPE_ASSERT, "(unsigned)( surfaceType ) < (unsigned)( 64 )", "surfaceType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", v27, 64) )
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
    _RDI = &cent->nextState.lerp.pos;
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
      __debugbreak();
    if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
    {
      v32[2] = v32;
      LODWORD(v32[1]) = LODWORD(_RDI->trBase.v[1]) ^ LODWORD(_RDI->trBase.v[2]) ^ s_trbase_aab_Z;
      HIDWORD(v32[0]) = LODWORD(_RDI->trBase.v[0]) ^ LODWORD(_RDI->trBase.v[1]) ^ s_trbase_aab_Y;
      LODWORD(v32[0]) = LODWORD(_RDI->trBase.v[0]) ^ ~s_trbase_aab_X;
      memset(&v32[2], 0, sizeof(_QWORD));
      __asm
      {
        vmovss  xmm0, [rbp+57h+var_90]
        vmovss  dword ptr [rbp+57h+var_80], xmm0
      }
      if ( (v32[2] & 0x7F800000) == 2139095040 )
        goto LABEL_28;
      __asm
      {
        vmovss  xmm0, [rbp+57h+var_8C]
        vmovss  dword ptr [rbp+57h+var_80], xmm0
      }
      if ( (v32[2] & 0x7F800000) == 2139095040 )
        goto LABEL_28;
      __asm
      {
        vmovss  xmm0, [rbp+57h+var_88]
        vmovss  dword ptr [rbp+57h+var_80], xmm0
      }
      if ( (v32[2] & 0x7F800000) == 2139095040 )
      {
LABEL_28:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
          __debugbreak();
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+0Ch]
        vmovss  [rbp+57h+var_90], xmm0
        vmovss  xmm1, dword ptr [rdi+10h]
        vmovss  [rbp+57h+var_8C], xmm1
        vmovss  xmm0, dword ptr [rdi+14h]
        vmovss  [rbp+57h+var_88], xmm0
      }
    }
    __asm
    {
      vmovss  xmm3, cs:__real@42480000
      vmulss  xmm1, xmm3, dword ptr [rbp+57h+axis]
      vaddss  xmm2, xmm1, [rbp+57h+var_90]
      vmovss  dword ptr [rbp+57h+outOrigin], xmm2
      vmulss  xmm1, xmm3, dword ptr [rbp+57h+axis+4]
      vaddss  xmm2, xmm1, [rbp+57h+var_8C]
      vmovss  dword ptr [rbp+57h+outOrigin+4], xmm2
      vmulss  xmm1, xmm3, dword ptr [rbp+57h+axis+8]
      vaddss  xmm2, xmm1, [rbp+57h+var_88]
      vmovss  dword ptr [rbp+57h+outOrigin+8], xmm2
      vmovss  xmm0, cs:__real@3f800000
      vmovss  dword ptr [rsp+0D0h+var_A0], xmm0
      vmovss  dword ptr [rsp+0D0h+var_A8], xmm0
    }
    ((void (__fastcall *)(CgSoundSystem *, __int64, vec3_t *, SndAliasList *, const int, int, int, _DWORD))SoundSystem->PlaySurfaceSoundAsync)(SoundSystem, 2046i64, &outOrigin, Alias, surfaceType, v28, v30, 0);
    memset(v32, 0, 0xCui64);
  }
  else
  {
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovss  dword ptr [rsp+0D0h+var_A0], xmm0
      vmovss  dword ptr [rsp+0D0h+var_A8], xmm0
    }
    ((void (__fastcall *)(CgSoundSystem *, _QWORD, vec3_t *, SndAliasList *, const int, int, int, _DWORD))SoundSystem->PlaySurfaceSoundAsync)(SoundSystem, (unsigned int)cent->nextState.number, &outOrigin, Alias, surfaceType, v29, v31, 0);
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
  float fmt; 
  Physics_GetClosestPointsExtendedData extendedData; 
  __int64 v17; 
  FoliageCharSoundQueryParams outParams; 

  v17 = -2i64;
  __asm { vmovaps [rsp+0E0h+var_40], xmm6 }
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 332, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 333, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 334, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !clientCi && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_foliage.cpp", 335, ASSERT_TYPE_ASSERT, "(clientCi)", (const char *)&queryFormat, "clientCi") )
    __debugbreak();
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rbp+57h+outParams.origin], xmm6
    vmovss  dword ptr [rbp+57h+outParams.origin+4], xmm6
    vmovss  dword ptr [rbp+57h+outParams.origin+8], xmm6
  }
  outParams.physicsWorld = PHYSICS_WORLD_ID_INVALID;
  ClosestPointHitHitSurfFlags = 0;
  outParams.shape = NULL;
  *(_WORD *)&outParams.isLocalPlayer = 0;
  if ( CG_Foliage_GetCharacterQueryParams(cgameGlob, cent, ci, clientCi, &outParams) )
  {
    Sys_ProfBeginNamedEvent(0xFFFF00FF, "CG_Foliage Physics Query");
    extendedData.simplify = 0;
    extendedData.ignoreBodies = NULL;
    __asm { vmovss  [rbp+57h+var_A0.collisionBuffer], xmm6 }
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
    __asm { vmovss  dword ptr [rsp+0E0h+fmt], xmm6 }
    Physics_GetClosestPoints(outParams.physicsWorld, outParams.shape, &outParams.origin, &quat_identity, fmt, &extendedData, result);
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
  __asm { vmovaps xmm6, [rsp+0E0h+var_40] }
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
  unsigned int v1; 
  unsigned int v3; 
  unsigned int v4; 
  __int128 data[3]; 
  unsigned int v9; 

  Sys_EnterCriticalSection(CRITSECT_FOLIAGE);
  v0 = s_foliageQueuedDataCount;
  v1 = 0;
  if ( s_foliageQueuedDataCount )
  {
    _RDI = s_foliageQueuedData;
    do
    {
      v3 = v0 - v1;
      if ( v3 > 3 )
        v3 = 3;
      v4 = 0;
      v9 = v3;
      while ( v4 < v9 )
      {
        _RDX = 2i64 * (v4 + v1);
        _RCX = 2i64 * v4++;
        __asm
        {
          vmovups xmm0, xmmword ptr [rdi+rdx*8]
          vmovups [rsp+rcx*8+68h+data], xmm0
        }
      }
      Sys_AddWorkerCmd(WRKCMD_CG_FOLIAGE_PROCESSCHARACTERENTITY, data);
      v0 = s_foliageQueuedDataCount;
      v1 += 3;
    }
    while ( v1 < s_foliageQueuedDataCount );
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

