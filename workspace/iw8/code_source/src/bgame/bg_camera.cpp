/*
==============
BG_Camera_VehicleCameraShapeCast
==============
*/

bool __fastcall BG_Camera_VehicleCameraShapeCast(Physics_WorldId worldId, const int *ignoreEntities, int ignoreEntCount, int contentsMask, const vec3_t *start, const vec3_t *end, float *outRawFrac)
{
  return ?BG_Camera_VehicleCameraShapeCast@@YA_NW4Physics_WorldId@@PEBHHHAEBTvec3_t@@2AEAM@Z(worldId, ignoreEntities, ignoreEntCount, contentsMask, start, end, outRawFrac);
}

/*
==============
BG_Camera_GetDef
==============
*/

const CameraDef *__fastcall BG_Camera_GetDef(int cameraIndex)
{
  return ?BG_Camera_GetDef@@YAPEBUCameraDef@@H@Z(cameraIndex);
}

/*
==============
BG_Camera_Init
==============
*/

void __fastcall BG_Camera_Init(bool isFullInit)
{
  ?BG_Camera_Init@@YAX_N@Z(isFullInit);
}

/*
==============
BGTurretVehicleCamConfig::Init
==============
*/

bool __fastcall BGTurretVehicleCamConfig::Init(BGTurretVehicleCamConfig *this, const BGTurretVehicleCamInfo *camInfo)
{
  return ?Init@BGTurretVehicleCamConfig@@QEAA_NAEBUBGTurretVehicleCamInfo@@@Z(this, camInfo);
}

/*
==============
BG_Camera_GetSkydiveOrbitDefIndex
==============
*/

unsigned int __fastcall BG_Camera_GetSkydiveOrbitDefIndex()
{
  return ?BG_Camera_GetSkydiveOrbitDefIndex@@YAIXZ();
}

/*
==============
BG_Camera_GetDefIndex
==============
*/

bool __fastcall BG_Camera_GetDefIndex(const char *cameraName, unsigned int *outIndex)
{
  return ?BG_Camera_GetDefIndex@@YA_NPEBDAEAI@Z(cameraName, outIndex);
}

/*
==============
BG_Camera_Clear
==============
*/

void BG_Camera_Clear(void)
{
  ?BG_Camera_Clear@@YAXXZ();
}

/*
==============
BG_Camera_AdjustEyePosForRemoteTurretVehicle
==============
*/

void __fastcall BG_Camera_AdjustEyePosForRemoteTurretVehicle(const VehicleDef *vehDef, const vec3_t *vehEntAngles, int vehEntNum, const vec3_t *eyePos, const playerState_s *ps, vec3_t *outPos, vec3_t *inOutForward)
{
  ?BG_Camera_AdjustEyePosForRemoteTurretVehicle@@YAXPEBUVehicleDef@@AEBTvec3_t@@H1PEBUplayerState_s@@AEAT2@3@Z(vehDef, vehEntAngles, vehEntNum, eyePos, ps, outPos, inOutForward);
}

/*
==============
BG_Camera_VehicleCameraShapeRadius
==============
*/

double __fastcall BG_Camera_VehicleCameraShapeRadius()
{
  double result; 

  *(float *)&result = ?BG_Camera_VehicleCameraShapeRadius@@YAMXZ();
  return result;
}

/*
==============
BG_Camera_VehicleTurret
==============
*/

void __fastcall BG_Camera_VehicleTurret(const BGTurretVehicleCamInfo *camInfo, vec3_t *outEyePos, tmat33_t<vec3_t> *outAxis, vec3_t *outFocusPos, float dt)
{
  ?BG_Camera_VehicleTurret@@YAXAEBUBGTurretVehicleCamInfo@@AEATvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@PEAT2@M@Z(camInfo, outEyePos, outAxis, outFocusPos, dt);
}

/*
==============
BG_Camera_MyChanges
==============
*/

void BG_Camera_MyChanges(void)
{
  ?BG_Camera_MyChanges@@YAXXZ();
}

/*
==============
BG_EyeOffsetForRemoteTurretVehicle
==============
*/

void __fastcall BG_EyeOffsetForRemoteTurretVehicle(const BGTurretVehicleCamInfo *camInfo, vec3_t *outEyePos, vec3_t *outFocusPoint)
{
  ?BG_EyeOffsetForRemoteTurretVehicle@@YAXAEBUBGTurretVehicleCamInfo@@AEATvec3_t@@1@Z(camInfo, outEyePos, outFocusPoint);
}

/*
==============
BG_Camera_VehicleCameraRayCast
==============
*/

bool __fastcall BG_Camera_VehicleCameraRayCast(Physics_WorldId worldId, const int *ignoreEntities, int ignoreEntCount, int contentsMask, const vec3_t *start, const vec3_t *end, float *outRawFrac)
{
  return ?BG_Camera_VehicleCameraRayCast@@YA_NW4Physics_WorldId@@PEBHHHAEBTvec3_t@@2AEAM@Z(worldId, ignoreEntities, ignoreEntCount, contentsMask, start, end, outRawFrac);
}

/*
==============
BG_Camera_AxisFromEyeFocus
==============
*/

void __fastcall BG_Camera_AxisFromEyeFocus(const vec3_t *eyePos, const vec3_t *focusPoint, const vec3_t *vehUp, tmat33_t<vec3_t> *outAxis)
{
  ?BG_Camera_AxisFromEyeFocus@@YAXAEBTvec3_t@@00AEAT?$tmat33_t@Tvec3_t@@@@@Z(eyePos, focusPoint, vehUp, outAxis);
}

/*
==============
BG_Camera_GetTypeForDefPtr
==============
*/

CameraType __fastcall BG_Camera_GetTypeForDefPtr(const CameraDef *const def)
{
  return ?BG_Camera_GetTypeForDefPtr@@YA?AW4CameraType@@QEBUCameraDef@@@Z(def);
}

/*
==============
BG_Camera_AdjustEyePosForRemoteTurretVehicle
==============
*/
void BG_Camera_AdjustEyePosForRemoteTurretVehicle(const VehicleDef *vehDef, const vec3_t *vehEntAngles, int vehEntNum, const vec3_t *eyePos, const playerState_s *ps, vec3_t *outPos, vec3_t *inOutForward)
{
  VehicleType type; 
  float v15; 
  float fmt; 
  BGTurretVehicleCamInfo camInfo; 
  tmat33_t<vec3_t> outAxis; 
  vec3_t outFocusPos; 

  _RDI = eyePos;
  _R14 = inOutForward;
  _R15 = vehEntAngles;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 561, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *outPos = *_RDI;
  type = vehDef->type;
  if ( type == VEH_TREADED && vehDef->vehiclePhysicsDef.physics_gameProfile < VEH_GAMEPROFILE_JEEP || type == VEH_CAR && vehDef->vehiclePhysicsDef.physics_animProfile == VEH_ANIMPROFILE_VINDIA )
  {
    __asm { vmovsd  xmm0, qword ptr [rdi] }
    camInfo.eyePos.v[2] = _RDI->v[2];
    __asm { vmovsd  qword ptr [rsp+108h+camInfo.eyePos], xmm0 }
    BG_AxisFromForward(inOutForward, &identityMatrix33.m[2], &camInfo.eyeView);
    __asm { vmovsd  xmm0, qword ptr [r15] }
    v15 = _R15->v[2];
    __asm
    {
      vmovsd  qword ptr [rsp+108h+camInfo.vehEntAngles], xmm0
      vxorps  xmm0, xmm0, xmm0
    }
    camInfo.inKillcam = 0;
    camInfo.ps = ps;
    camInfo.traceMask = 2705;
    __asm { vmovss  dword ptr [rsp+108h+fmt], xmm0 }
    camInfo.vehDef = vehDef;
    camInfo.vehEntAngles.v[2] = v15;
    camInfo.vehEntNum = vehEntNum;
    camInfo.worldId = PHYSICS_WORLD_ID_FIRST;
    BG_Camera_VehicleTurret(&camInfo, outPos, &outAxis, &outFocusPos, fmt);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+108h+outAxis]
      vmovss  xmm1, dword ptr [rsp+108h+outAxis+4]
      vmovss  dword ptr [r14], xmm0
      vmovss  xmm0, dword ptr [rsp+108h+outAxis+8]
      vmovss  dword ptr [r14+8], xmm0
      vmovss  dword ptr [r14+4], xmm1
    }
  }
}

/*
==============
BG_Camera_AxisFromEyeFocus
==============
*/
void BG_Camera_AxisFromEyeFocus(const vec3_t *eyePos, const vec3_t *focusPoint, const vec3_t *vehUp, tmat33_t<vec3_t> *outAxis)
{
  vec3_t v0; 
  float v1[4]; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm1, xmm0, dword ptr [rcx]
    vmovss  xmm2, dword ptr [rdx+4]
    vsubss  xmm0, xmm2, dword ptr [rcx+4]
    vmovss  [rsp+58h+v0], xmm1
    vmovss  xmm1, dword ptr [rdx+8]
    vsubss  xmm2, xmm1, dword ptr [rcx+8]
    vmovss  [rsp+58h+var_34], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+58h+var_30], xmm2
    vmovss  xmm2, cs:__real@3a83126f; epsilon
  }
  _RBX = outAxis;
  __asm
  {
    vmovss  [rsp+58h+v1], xmm0
    vmovss  [rsp+58h+var_24], xmm0
    vmovss  [rsp+58h+var_20], xmm0
  }
  if ( VecNCompareCustomEpsilon(v0.v, v1, *(float *)&_XMM2, 3) )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B; tmat33_t<vec3_t> const identityMatrix33
      vmovups ymmword ptr [rbx], ymm0
    }
    _RBX->m[2].v[2] = identityMatrix33.m[2].v[2];
  }
  else
  {
    BG_AxisFromForward(&v0, vehUp, _RBX);
  }
}

/*
==============
BG_Camera_Clear
==============
*/
void BG_Camera_Clear(void)
{
  s_bgCameraDefsInitialized = 0;
  memset_0(s_bgCameraDefs, 0, sizeof(s_bgCameraDefs));
}

/*
==============
BG_Camera_GetDef
==============
*/
CameraDef *BG_Camera_GetDef(int cameraIndex)
{
  __int64 v1; 
  int v4; 

  v1 = cameraIndex;
  if ( (unsigned int)cameraIndex >= 0x100 )
  {
    v4 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 51, ASSERT_TYPE_ASSERT, "(unsigned)( cameraIndex ) < (unsigned)( ( sizeof( *array_counter( s_bgCameraDefs ) ) + 0 ) )", "cameraIndex doesn't index ARRAY_COUNT( s_bgCameraDefs )\n\t%i not in [0, %i)", cameraIndex, v4) )
      __debugbreak();
  }
  if ( !s_bgCameraDefsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 52, ASSERT_TYPE_ASSERT, "(s_bgCameraDefsInitialized)", (const char *)&queryFormat, "s_bgCameraDefsInitialized") )
    __debugbreak();
  if ( !s_bgCameraDefs[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 53, ASSERT_TYPE_ASSERT, "(s_bgCameraDefs[cameraIndex])", (const char *)&queryFormat, "s_bgCameraDefs[cameraIndex]") )
    __debugbreak();
  if ( (_DWORD)v1 && (int)v1 < 256 && (unsigned int)(v1 - 1) < 0xFA )
    return s_bgCameraDefs[v1];
  else
    return 0i64;
}

/*
==============
BG_Camera_GetDefIndex
==============
*/
bool BG_Camera_GetDefIndex(const char *cameraName, unsigned int *outIndex)
{
  __int64 v4; 
  const char *name; 
  const char *v6; 
  char v7; 
  __int64 v8; 
  char v9; 
  bool result; 
  __int64 v11; 

  if ( (!cameraName || !*cameraName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 72, ASSERT_TYPE_ASSERT, "(cameraName && *cameraName)", (const char *)&queryFormat, "cameraName && *cameraName") )
    __debugbreak();
  if ( NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_CAMERA, cameraName, outIndex) )
  {
    if ( *outIndex >= 0xFA )
    {
      LODWORD(v11) = 250;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 76, ASSERT_TYPE_ASSERT, "( outIndex < CameraType_Def_Count() )", "Max. no. of camera defs reached. We allow for max %d", v11) )
        __debugbreak();
    }
    if ( !s_bgCameraDefs[*outIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 77, ASSERT_TYPE_ASSERT, "( s_bgCameraDefs[outIndex] != nullptr )", "Camera def is null") )
      __debugbreak();
    v4 = 0x7FFFFFFFi64;
    name = s_bgCameraDefs[*outIndex]->name;
    if ( !cameraName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v6 = (const char *)(cameraName - name);
    while ( 1 )
    {
      v7 = name[(_QWORD)v6];
      v8 = v4;
      v9 = *name++;
      --v4;
      if ( !v8 )
        break;
      if ( v7 != v9 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 78, ASSERT_TYPE_ASSERT, "( !I_strcmp( cameraName, s_bgCameraDefs[outIndex]->name ) )", "Camera name mismatch") )
          __debugbreak();
        return 1;
      }
      if ( !v7 )
        return 1;
    }
    return 1;
  }
  else
  {
    Com_PrintError(1, "BG_Camera_GetDefIndex: Unknown camera definition '%s'\n", cameraName);
    result = 0;
    *outIndex = 0;
  }
  return result;
}

/*
==============
BG_Camera_GetSkydiveOrbitDefIndex
==============
*/
__int64 BG_Camera_GetSkydiveOrbitDefIndex()
{
  return s_bgSkydiveCameraIndex;
}

/*
==============
BG_Camera_GetTypeForDefPtr
==============
*/
__int64 BG_Camera_GetTypeForDefPtr(const CameraDef *const def)
{
  __int64 v1; 
  int v3; 
  int v4; 

  if ( !s_bgCameraDefsInitialized || !def )
    return 0i64;
  v1 = 0i64;
  while ( s_bgCameraDefs[v1] != def )
  {
    if ( (unsigned __int64)++v1 >= 0x100 )
      return 0i64;
  }
  if ( (unsigned int)v1 >= 0xFA )
  {
    v4 = 250;
    v3 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 105, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( CameraType_Def_Count() )", "index doesn't index CameraType_Def_Count()\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CameraType_Is_Def(v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 106, ASSERT_TYPE_ASSERT, "(CameraType_Is_Def( static_cast<uint>( index ) ))", (const char *)&queryFormat, "CameraType_Is_Def( static_cast<uint>( index ) )") )
    __debugbreak();
  return (unsigned int)v1;
}

/*
==============
BG_Camera_Init
==============
*/
void BG_Camera_Init(bool isFullInit)
{
  if ( isFullInit )
  {
    NetConstStrings_CallForAllCameraStrings(BG_Camera_LoadCache_Callback);
    s_bgCameraDefsInitialized = 1;
  }
  else
  {
    if ( !s_bgCameraDefsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 170, ASSERT_TYPE_ASSERT, "(s_bgCameraDefsInitialized)", (const char *)&queryFormat, "s_bgCameraDefsInitialized") )
      __debugbreak();
    NetConstStrings_CallForAllCameraStrings(BG_Camera_Validate_Callback);
  }
}

/*
==============
BG_Camera_LoadCache_Callback
==============
*/
void BG_Camera_LoadCache_Callback(const unsigned int cameraIndex, const char *cameraName)
{
  CameraDef *v2; 
  __int64 v3; 
  int v5; 
  unsigned int v6; 

  v2 = NULL;
  v3 = cameraIndex;
  if ( !cameraName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 119, ASSERT_TYPE_ASSERT, "(cameraName)", (const char *)&queryFormat, "cameraName") )
    __debugbreak();
  if ( (_DWORD)v3 && ((int)v3 >= 256 || (unsigned int)(v3 - 1) >= 0xFA) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143C9FE10, 302i64);
  if ( *cameraName )
    v2 = Camera_Register(cameraName);
  v5 = I_strcmp(cameraName, "skydive_orbit");
  v6 = s_bgSkydiveCameraIndex;
  if ( !v5 )
    v6 = v3;
  s_bgCameraDefs[v3] = v2;
  s_bgSkydiveCameraIndex = v6;
}

/*
==============
BG_Camera_MyChanges
==============
*/
void BG_Camera_MyChanges(void)
{
  s_bgCameraDefsInitialized = 0;
  memset_0(s_bgCameraDefs, 0, sizeof(s_bgCameraDefs));
  if ( NetConstStrings_AreStringsLoaded() )
  {
    NetConstStrings_CallForAllCameraStrings(BG_Camera_LoadCache_Callback);
    s_bgCameraDefsInitialized = 1;
  }
}

/*
==============
BG_Camera_Validate_Callback
==============
*/
void BG_Camera_Validate_Callback(const unsigned int cameraIndex, const char *cameraName)
{
  __int64 v2; 
  const char *v3; 
  CameraDef **v4; 
  __int64 v5; 
  const char *name; 
  signed __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  __int64 v13; 

  v2 = cameraIndex;
  v3 = cameraName;
  if ( !cameraName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 143, ASSERT_TYPE_ASSERT, "(cameraName)", (const char *)&queryFormat, "cameraName") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xFA )
  {
    LODWORD(v13) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 144, ASSERT_TYPE_ASSERT, "(unsigned)( cameraIndex ) < (unsigned)( CameraType_Def_Count() )", "cameraIndex doesn't index CameraType_Def_Count()\n\t%i not in [0, %i)", v13, 250) )
      __debugbreak();
  }
  v4 = &s_bgCameraDefs[v2];
  if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 146, ASSERT_TYPE_ASSERT, "(s_bgCameraDefs[cameraIndex])", (const char *)&queryFormat, "s_bgCameraDefs[cameraIndex]") )
    __debugbreak();
  v5 = 0x7FFFFFFFi64;
  name = (*v4)->name;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v7 = name - v3;
  do
  {
    v8 = (unsigned __int8)v3[v7];
    v9 = v5;
    v10 = *(unsigned __int8 *)v3++;
    --v5;
    if ( !v9 )
      break;
    if ( v8 != v10 )
    {
      v11 = v8 + 32;
      if ( (unsigned int)(v8 - 65) > 0x19 )
        v11 = v8;
      v8 = v11;
      v12 = v10 + 32;
      if ( (unsigned int)(v10 - 65) > 0x19 )
        v12 = v10;
      if ( v8 != v12 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 147, ASSERT_TYPE_ASSERT, "( !I_stricmp( s_bgCameraDefs[cameraIndex]->name, cameraName ) )", "Invalid camera mapping") )
          __debugbreak();
        return;
      }
    }
  }
  while ( v8 );
}

/*
==============
BG_Camera_VehicleCameraRayCast
==============
*/
_BOOL8 BG_Camera_VehicleCameraRayCast(Physics_WorldId worldId, const int *ignoreEntities, int ignoreEntCount, int contentsMask, const vec3_t *start, const vec3_t *end, float *outRawFrac)
{
  int *v10; 
  int i; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  bool HasHit; 
  hkMemoryAllocator *v17; 
  hkMemoryAllocator *v18; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v21; 

  v10 = (int *)ignoreEntities;
  if ( (!ignoreEntities || ignoreEntCount <= 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 421, ASSERT_TYPE_ASSERT, "( ignoreEntities && ignoreEntCount > 0 )", "BG_Camera_CustomCameraRayCast(): This function is designed to work with ignore entities") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v21, ignoreEntCount, 0);
  for ( i = 0; i < ignoreEntCount; ++v10 )
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v21, i++, *v10, 1, 1, 1, 0, 1);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0C8h+extendedData.collisionBuffer], xmm0
  }
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = contentsMask;
  extendedData.ignoreBodies = &v21;
  ClosestResult = PhysicsQuery_GetClosestResult(worldId);
  if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 435, ASSERT_TYPE_ASSERT, "(castResult)", (const char *)&queryFormat, "castResult") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  Physics_Raycast(worldId, start, end, &extendedData, ClosestResult);
  if ( HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
    *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(ClosestResult, 0);
  else
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  _RAX = outRawFrac;
  __asm { vmovss  dword ptr [rax], xmm0 }
  HasHit = HavokPhysics_CollisionQueryResult::HasHit(ClosestResult);
  v17 = hkMemHeapAllocator();
  v21.m_ignoreBodies.m_size = 0;
  if ( v21.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v17, v21.m_ignoreBodies.m_data, 4, v21.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v21.m_ignoreBodies.m_data = NULL;
  v21.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v18 = hkMemHeapAllocator();
  v21.m_ignoreEntities.m_size = 0;
  if ( v21.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v18, v21.m_ignoreEntities.m_data, 8, v21.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return HasHit;
}

/*
==============
BG_Camera_VehicleCameraShapeCast
==============
*/
_BOOL8 BG_Camera_VehicleCameraShapeCast(Physics_WorldId worldId, const int *ignoreEntities, int ignoreEntCount, int contentsMask, const vec3_t *start, const vec3_t *end, float *outRawFrac)
{
  int v11; 
  int v12; 
  __int64 v13; 
  __int64 i; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  bool HasHit; 
  int v21; 
  int ShapecastHitRef; 
  Physics_RefSystem RefSystem; 
  __int16 RefEntityType; 
  const entityType_s *v26; 
  unsigned int ShapecastHitBodyId; 
  Physics_RefSystem v28; 
  int EntityNum; 
  hkMemoryAllocator *v30; 
  hkMemoryAllocator *v31; 
  HavokPhysics_IgnoreBodies v33; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v35; 

  v35 = -2i64;
  v11 = 0;
  if ( ignoreEntities )
    v11 = ignoreEntCount;
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v33, v11, 0);
  v12 = 0;
  if ( ignoreEntities )
  {
    v13 = v11;
    for ( i = 0i64; i < v13; ++i )
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v33, v12++, ignoreEntities[i], 1, 1, 1, 0, 1);
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rsp+0E8h+extendedData.startTolerance], xmm1
    vmovss  xmm0, cs:__real@3c83126f
    vmovss  [rsp+0E8h+extendedData.accuracy], xmm0
  }
  extendedData.simplifyStart = 0;
  __asm
  {
    vmovss  [rsp+0E8h+extendedData.collisionBuffer], xmm1
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+0E8h+extendedData.nonBrushShape], xmm0
  }
  extendedData.phaseSelection = All;
  extendedData.permitOutwardTrace = 0;
  extendedData.contents = contentsMask;
  extendedData.ignoreBodies = &v33;
  if ( !s_sphereShapeCam )
  {
    __asm { vmovss  xmm1, cs:__real@41a00000; radius }
    s_sphereShapeCam = Physics_CreateShapeSphere(&vec3_origin, *(float *)&_XMM1, s_sphereShapeBuffer, 432);
  }
  ClosestResult = PhysicsQuery_GetClosestResult(worldId);
  if ( ClosestResult )
  {
    v21 = 4;
    _R15 = outRawFrac;
    while ( 1 )
    {
      HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
      Physics_Shapecast(worldId, s_sphereShapeCam, start, end, &quat_identity, &extendedData, ClosestResult, NULL);
      if ( !HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
        break;
      *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(ClosestResult, 0);
      __asm { vmovss  dword ptr [r15], xmm0 }
      ShapecastHitRef = HavokPhysics_CollisionQueryResult::GetShapecastHitRef(ClosestResult, 0);
      RefSystem = Physics_GetRefSystem(ShapecastHitRef);
      RefEntityType = Physics_GetRefEntityType(worldId, RefSystem, ShapecastHitRef);
      v26 = IGNORE_ETYPES;
      while ( *v26 != RefEntityType )
      {
        if ( (__int64)++v26 >= (__int64)&unk_143CA0430 )
        {
          ShapecastHitBodyId = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(ClosestResult, 0);
          if ( ShapecastHitBodyId == 0xFFFFFF )
            goto LABEL_24;
          v28 = Physics_GetRefSystem(ShapecastHitRef);
          if ( Physics_GetRefEntityType(worldId, v28, ShapecastHitRef) != 6 || !Physics_IsRigidBodyKeyframed(worldId, ShapecastHitBodyId) )
            goto LABEL_24;
          break;
        }
      }
      EntityNum = Physics_GetEntityNum(ShapecastHitRef);
      HavokPhysics_IgnoreBodies::AddIgnoreEntity(&v33, EntityNum, 1, 1, 1, 0, 1);
      if ( --v21 <= 0 )
        goto LABEL_24;
    }
    *outRawFrac = 1.0;
LABEL_24:
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(ClosestResult);
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 372, ASSERT_TYPE_ASSERT, "(castResult)", (const char *)&queryFormat, "castResult") )
      __debugbreak();
    *outRawFrac = 1.0;
    HasHit = 0;
  }
  v30 = hkMemHeapAllocator();
  v33.m_ignoreBodies.m_size = 0;
  if ( v33.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v30, v33.m_ignoreBodies.m_data, 4, v33.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v33.m_ignoreBodies.m_data = NULL;
  v33.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v31 = hkMemHeapAllocator();
  v33.m_ignoreEntities.m_size = 0;
  if ( v33.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v31, v33.m_ignoreEntities.m_data, 8, v33.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return HasHit;
}

/*
==============
BG_Camera_VehicleCameraShapeRadius
==============
*/
float BG_Camera_VehicleCameraShapeRadius()
{
  __asm { vmovss  xmm0, cs:__real@41a00000 }
  return *(float *)&_XMM0;
}

/*
==============
BG_Camera_VehicleTurret
==============
*/
void BG_Camera_VehicleTurret(const BGTurretVehicleCamInfo *camInfo, vec3_t *outEyePos, tmat33_t<vec3_t> *outAxis, vec3_t *outFocusPos)
{
  vec3_t *end; 
  int vehEntNum; 
  int traceMask; 
  Physics_WorldId worldId; 
  const dvar_t *v62; 
  char v75; 
  char v173; 
  float outRawFrac; 
  int ignoreEntities; 
  BGTurretVehicleCamConfig v183; 
  vec3_t angles; 
  vec3_t vec; 
  vec3_t outFocusPoint; 
  vec3_t forward; 
  vec3_t start; 
  vec3_t v189; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  end = outEyePos;
  _RBX = camInfo;
  _RSI = outFocusPos;
  AnglesToAxis(&camInfo->vehEntAngles, &axis);
  if ( BGTurretVehicleCamConfig::Init(&v183, _RBX) )
  {
    __asm
    {
      vmovaps [rsp+1A0h+var_40], xmm6
      vmovss  xmm6, [rsp+1A0h+var_158.pitchContrib]
      vcomiss xmm6, cs:__real@3a83126f
      vmovaps [rsp+1A0h+var_50], xmm7
      vmovaps [rsp+1A0h+var_60], xmm9
      vmovaps [rsp+1A0h+var_70], xmm11
    }
    AxisToAngles(&_RBX->eyeView, &angles);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+1Ch]
      vmulss  xmm5, xmm0, cs:__real@3b360b61
      vaddss  xmm2, xmm5, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm4, xmm0, xmm2, 1
      vsubss  xmm1, xmm5, xmm4
      vmulss  xmm0, xmm1, cs:__real@43b40000
      vmulss  xmm3, xmm0, xmm6
      vaddss  xmm1, xmm3, dword ptr [rsp+1A0h+angles]
      vmovss  dword ptr [rsp+1A0h+angles], xmm1
    }
    AngleVectors(&angles, &forward, NULL, NULL);
    BG_EyeOffsetForRemoteTurretVehicle(_RBX, end, &outFocusPoint);
    __asm
    {
      vmovss  xmm4, cs:__real@41a00000
      vmovss  xmm0, dword ptr [rbx+28h]
    }
    vehEntNum = _RBX->vehEntNum;
    __asm
    {
      vmulss  xmm3, xmm4, dword ptr [rbx+38h]
      vmulss  xmm1, xmm4, dword ptr [rbx+34h]
      vmovss  xmm9, cs:__real@3f800000
    }
    traceMask = _RBX->traceMask;
    worldId = _RBX->worldId;
    __asm
    {
      vsubss  xmm1, xmm0, xmm1
      vmovss  xmm0, dword ptr [rbx+2Ch]
      vmovss  dword ptr [rbp+0A0h+var_F0], xmm1
      vsubss  xmm1, xmm0, xmm3
      vmulss  xmm3, xmm4, dword ptr [rbx+3Ch]
      vmovss  xmm0, dword ptr [rbx+30h]
    }
    ignoreEntities = vehEntNum;
    __asm
    {
      vmovss  dword ptr [rbp+0A0h+var_F0+4], xmm1
      vsubss  xmm1, xmm0, xmm3
      vmovss  dword ptr [rbp+0A0h+var_F0+8], xmm1
      vmovss  [rsp+1A0h+var_160], xmm9
    }
    BG_Camera_VehicleCameraShapeCast(worldId, &ignoreEntities, 1, traceMask, &start, end, &outRawFrac);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vsubss  xmm1, xmm0, dword ptr [rbx+28h]
      vmovss  xmm5, [rsp+1A0h+var_160]
      vmulss  xmm1, xmm1, xmm5
      vaddss  xmm0, xmm1, dword ptr [rbx+28h]
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm0, dword ptr [rdi+4]
      vsubss  xmm1, xmm0, dword ptr [rbx+2Ch]
      vmovss  xmm0, dword ptr [rdi+8]
      vmulss  xmm2, xmm1, xmm5
      vaddss  xmm3, xmm2, dword ptr [rbx+2Ch]
      vmovss  dword ptr [rdi+4], xmm3
      vsubss  xmm1, xmm0, dword ptr [rbx+30h]
      vmulss  xmm2, xmm1, xmm5
      vaddss  xmm3, xmm2, dword ptr [rbx+30h]
      vmovss  dword ptr [rdi+8], xmm3
    }
    AxisTranspose(&axis, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vsubss  xmm4, xmm0, dword ptr [rbx+28h]
      vmovss  xmm1, dword ptr [rdi+4]
      vsubss  xmm5, xmm1, dword ptr [rbx+2Ch]
      vmovss  xmm0, dword ptr [rdi+8]
      vsubss  xmm6, xmm0, dword ptr [rbx+30h]
      vmovss  xmm11, cs:__real@80000000
    }
    v62 = DCONST_DVARBOOL_bg_vehTurretElevLocal;
    __asm
    {
      vmulss  xmm0, xmm6, xmm6
      vmulss  xmm2, xmm5, xmm5
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm7, xmm2, xmm2
      vcmpless xmm0, xmm7, xmm11
      vblendvps xmm0, xmm7, xmm9, xmm0
      vdivss  xmm2, xmm9, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rbp+0A0h+vec], xmm0
      vmulss  xmm0, xmm6, xmm2
      vmulss  xmm1, xmm5, xmm2
      vmovss  dword ptr [rbp+0A0h+vec+8], xmm0
      vmovss  dword ptr [rbp+0A0h+vec+4], xmm1
    }
    if ( !DCONST_DVARBOOL_bg_vehTurretElevLocal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehTurretElevLocal") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v62);
    v75 = 0;
    if ( v62->current.enabled )
    {
      AxisTransformVec3(&out, &vec, &angles);
      __asm
      {
        vmovss  xmm6, dword ptr [rsp+1A0h+angles+8]
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm6, xmm0
      }
      if ( v75 )
        __asm { vmulss  xmm6, xmm6, [rsp+1A0h+var_158.elevationFactor] }
      __asm
      {
        vmovss  xmm4, dword ptr [rsp+1A0h+angles]
        vmovss  xmm5, dword ptr [rsp+1A0h+angles+4]
        vmulss  xmm0, xmm5, xmm5
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, xmm11
        vblendvps xmm0, xmm3, xmm9, xmm0
        vdivss  xmm2, xmm9, xmm0
        vmulss  xmm0, xmm4, xmm2
        vmovss  dword ptr [rsp+1A0h+angles], xmm0
        vmulss  xmm0, xmm6, xmm2
        vmulss  xmm1, xmm5, xmm2
        vmovss  dword ptr [rsp+1A0h+angles+8], xmm0
        vmovss  dword ptr [rsp+1A0h+angles+4], xmm1
      }
      AxisTransformVec3(&axis, &angles, &vec);
      __asm
      {
        vmovss  xmm4, dword ptr [rbp+0A0h+vec+8]
        vmovss  xmm2, dword ptr [rbp+0A0h+vec+4]
        vmovss  xmm0, dword ptr [rbp+0A0h+vec]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rbp+0A0h+vec+8]
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm6, xmm0
        vmovss  xmm4, dword ptr [rbp+0A0h+vec]
        vmovss  xmm5, dword ptr [rbp+0A0h+vec+4]
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, xmm11
        vblendvps xmm0, xmm3, xmm9, xmm0
        vdivss  xmm1, xmm9, xmm0
        vmulss  xmm0, xmm4, xmm1
        vmulss  xmm4, xmm6, xmm1
        vmulss  xmm2, xmm5, xmm1
      }
    }
    __asm
    {
      vmulss  xmm0, xmm0, xmm7
      vaddss  xmm3, xmm0, dword ptr [rbx+28h]
      vmovss  dword ptr [rdi], xmm3
      vmulss  xmm1, xmm2, xmm7
      vaddss  xmm2, xmm1, dword ptr [rbx+2Ch]
      vmovss  dword ptr [rdi+4], xmm2
      vmulss  xmm0, xmm4, xmm7
      vaddss  xmm1, xmm0, dword ptr [rbx+30h]
      vmovss  dword ptr [rdi+8], xmm1
      vsubss  xmm2, xmm2, dword ptr [rbx+2Ch]
      vmovss  xmm4, dword ptr [rbx+28h]
      vsubss  xmm0, xmm3, xmm4
      vsubss  xmm3, xmm1, dword ptr [rbx+30h]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm0, [rsp+1A0h+var_158.radiusClose]
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm2, xmm0, xmm0
      vcomiss xmm3, xmm2
    }
    if ( v75 )
    {
      __asm
      {
        vmovss  xmm1, [rsp+1A0h+var_158.radiusHeight]
        vmulss  xmm0, xmm1, dword ptr [rbx+4Ch]
        vmovss  xmm3, [rsp+1A0h+var_158.radiusBack]
        vaddss  xmm2, xmm0, xmm4
        vmovss  dword ptr [rdi], xmm2
        vmulss  xmm0, xmm1, dword ptr [rbx+50h]
        vaddss  xmm4, xmm0, dword ptr [rbx+2Ch]
        vmovss  dword ptr [rdi+4], xmm4
        vmulss  xmm0, xmm1, dword ptr [rbx+54h]
        vaddss  xmm5, xmm0, dword ptr [rbx+30h]
        vmulss  xmm0, xmm3, dword ptr [rbp+0A0h+forward]
        vaddss  xmm2, xmm0, xmm2
        vmulss  xmm0, xmm3, dword ptr [rbp+0A0h+forward+4]
        vmovss  dword ptr [rdi], xmm2
        vaddss  xmm2, xmm0, xmm4
        vmulss  xmm0, xmm3, dword ptr [rbp+0A0h+forward+8]
        vmovss  dword ptr [rdi+4], xmm2
        vaddss  xmm2, xmm0, xmm5
        vmovss  dword ptr [rdi+8], xmm2
      }
    }
    BG_Camera_VehicleCameraRayCast(_RBX->worldId, &ignoreEntities, 1, 2705, end, &outFocusPoint, &outRawFrac);
    __asm
    {
      vmovss  xmm3, [rsp+1A0h+var_160]
      vmovss  xmm0, dword ptr [rbp+0A0h+outFocusPoint]
      vsubss  xmm1, xmm0, dword ptr [rdi]
      vmovss  xmm6, dword ptr [rdi+4]
      vmovss  xmm0, dword ptr [rbp+0A0h+outFocusPoint+4]
      vmovss  xmm4, dword ptr [rdi+8]
      vmulss  xmm1, xmm1, xmm3
      vaddss  xmm7, xmm1, dword ptr [rdi]
      vsubss  xmm1, xmm0, xmm6
      vmovss  xmm0, dword ptr [rbp+0A0h+outFocusPoint+8]
      vmulss  xmm2, xmm1, xmm3
      vsubss  xmm1, xmm0, xmm4
      vaddss  xmm5, xmm2, xmm6
      vmulss  xmm2, xmm1, xmm3
      vaddss  xmm3, xmm2, xmm4
      vsubss  xmm4, xmm3, xmm4
      vmovss  dword ptr [rbp+0A0h+outFocusPoint+4], xmm5
      vsubss  xmm5, xmm5, xmm6
      vmulss  xmm1, xmm5, xmm5
      vmovss  dword ptr [rbp+0A0h+outFocusPoint], xmm7
      vsubss  xmm7, xmm7, dword ptr [rdi]
      vmulss  xmm0, xmm7, xmm7
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm2, xmm1
      vmovss  dword ptr [rbp+0A0h+outFocusPoint+8], xmm3
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm11
      vblendvps xmm0, xmm3, xmm9, xmm0
      vdivss  xmm2, xmm9, xmm0
      vmulss  xmm0, xmm2, xmm7
      vmovss  dword ptr [rbp+0A0h+var_E0], xmm0
      vmulss  xmm0, xmm2, xmm4
      vmulss  xmm1, xmm2, xmm5
      vmovss  dword ptr [rbp+0A0h+var_E0+8], xmm0
      vmovss  dword ptr [rbp+0A0h+var_E0+4], xmm1
    }
    BG_AxisFromForward(&v189, &identityMatrix33.m[2], outAxis);
    __asm
    {
      vmovss  xmm6, [rsp+1A0h+var_158.rollContrib]
      vcomiss xmm6, cs:__real@3a83126f
      vmovaps xmm11, [rsp+1A0h+var_70]
      vmovaps xmm9, [rsp+1A0h+var_60]
      vmovaps xmm7, [rsp+1A0h+var_50]
    }
    if ( !(v75 | v173) )
    {
      AxisToAngles(outAxis, &angles);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+24h]
        vsubss  xmm1, xmm0, dword ptr [rsp+1A0h+angles+8]
        vmulss  xmm2, xmm1, xmm6
        vmovss  dword ptr [rsp+1A0h+angles+8], xmm2
      }
      AnglesToAxis(&angles, outAxis);
    }
    __asm { vmovaps xmm6, [rsp+1A0h+var_40] }
    if ( _RSI )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0A0h+outFocusPoint]
        vmovss  xmm1, dword ptr [rbp+0A0h+outFocusPoint+4]
        vmovss  dword ptr [rsi], xmm0
        vmovss  xmm0, dword ptr [rbp+0A0h+outFocusPoint+8]
        vmovss  dword ptr [rsi+8], xmm0
        vmovss  dword ptr [rsi+4], xmm1
      }
    }
  }
  else
  {
    end->v[0] = _RBX->eyePos.v[0];
    end->v[1] = _RBX->eyePos.v[1];
    end->v[2] = _RBX->eyePos.v[2];
    MatrixCopy33(&_RBX->eyeView, outAxis);
    if ( _RSI )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vaddss  xmm1, xmm0, dword ptr [rbx+34h]
        vmovss  dword ptr [rsi], xmm1
        vmovss  xmm2, dword ptr [rbx+2Ch]
        vaddss  xmm0, xmm2, dword ptr [rbx+38h]
        vmovss  dword ptr [rsi+4], xmm0
        vmovss  xmm1, dword ptr [rbx+30h]
        vaddss  xmm2, xmm1, dword ptr [rbx+3Ch]
        vmovss  dword ptr [rsi+8], xmm2
      }
    }
  }
}

/*
==============
BG_EyeOffsetForRemoteTurretVehicle
==============
*/
void BG_EyeOffsetForRemoteTurretVehicle(const BGTurretVehicleCamInfo *camInfo, vec3_t *outEyePos, vec3_t *outFocusPoint)
{
  BGTurretVehicleCamConfig v46; 

  _RSI = outFocusPoint;
  _RDI = outEyePos;
  _RBX = camInfo;
  if ( !camInfo->vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 266, ASSERT_TYPE_ASSERT, "(camInfo.vehDef)", (const char *)&queryFormat, "camInfo.vehDef") )
    __debugbreak();
  if ( !_RBX->vehDef->vehiclePhysicsDef.physicsEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 267, ASSERT_TYPE_ASSERT, "(camInfo.vehDef->vehiclePhysicsDef.physicsEnabled)", (const char *)&queryFormat, "camInfo.vehDef->vehiclePhysicsDef.physicsEnabled") )
    __debugbreak();
  if ( BGTurretVehicleCamConfig::Init(&v46, _RBX) )
  {
    __asm
    {
      vmovss  xmm2, [rsp+78h+var_48.traceLen]
      vmulss  xmm0, xmm2, dword ptr [rbx+34h]
      vaddss  xmm1, xmm0, dword ptr [rbx+28h]
      vmovss  xmm3, [rsp+78h+var_48.back]
      vmovss  dword ptr [rsi], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+38h]
      vaddss  xmm1, xmm0, dword ptr [rbx+2Ch]
      vmovss  dword ptr [rsi+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+3Ch]
      vaddss  xmm1, xmm0, dword ptr [rbx+30h]
      vmovss  dword ptr [rsi+8], xmm1
      vmulss  xmm1, xmm3, dword ptr [rbx+34h]
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovss  xmm4, dword ptr [rbx+3Ch]
      vmovss  xmm2, dword ptr [rbx+38h]
      vsubss  xmm5, xmm0, xmm1
      vmovss  dword ptr [rdi], xmm5
      vmovss  xmm0, dword ptr [rbx+2Ch]
      vmulss  xmm2, xmm3, xmm2
      vsubss  xmm2, xmm0, xmm2
      vmovss  dword ptr [rdi+4], xmm2
      vmovss  xmm0, dword ptr [rbx+30h]
      vmulss  xmm1, xmm3, xmm4
      vsubss  xmm3, xmm0, xmm1
      vmovss  xmm1, [rsp+78h+var_48.height]
      vmovss  dword ptr [rdi+8], xmm3
      vmulss  xmm0, xmm1, dword ptr [rbx+4Ch]
      vaddss  xmm4, xmm0, xmm5
      vmovss  dword ptr [rdi], xmm4
      vmulss  xmm0, xmm1, dword ptr [rbx+50h]
      vaddss  xmm5, xmm0, xmm2
      vmovss  xmm2, [rsp+78h+var_48.horizOffset]
      vmovss  dword ptr [rdi+4], xmm5
      vmulss  xmm0, xmm1, dword ptr [rbx+54h]
      vaddss  xmm3, xmm0, xmm3
      vmovss  dword ptr [rdi+8], xmm3
      vmulss  xmm0, xmm2, dword ptr [rbx+40h]
      vaddss  xmm1, xmm0, xmm4
      vmovss  dword ptr [rdi], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+44h]
      vaddss  xmm1, xmm0, xmm5
      vmovss  dword ptr [rdi+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+48h]
      vaddss  xmm1, xmm0, xmm3
      vmovss  dword ptr [rdi+8], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+34h]
      vaddss  xmm1, xmm0, dword ptr [rbx+28h]
      vmovss  dword ptr [rsi], xmm1
      vmovss  xmm2, dword ptr [rbx+2Ch]
      vaddss  xmm0, xmm2, dword ptr [rbx+38h]
      vmovss  dword ptr [rsi+4], xmm0
      vmovss  xmm1, dword ptr [rbx+30h]
      vaddss  xmm2, xmm1, dword ptr [rbx+3Ch]
      vmovss  dword ptr [rsi+8], xmm2
    }
    _RDI->v[0] = _RBX->eyePos.v[0];
    _RDI->v[1] = _RBX->eyePos.v[1];
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+30h]
      vmovss  dword ptr [rdi+8], xmm0
    }
  }
}

/*
==============
BGTurretVehicleCamConfig::Init
==============
*/
char BGTurretVehicleCamConfig::Init(BGTurretVehicleCamConfig *this, const BGTurretVehicleCamInfo *camInfo)
{
  const VehicleDef *vehDef; 
  VehicleType type; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  const char *v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  const dvar_t *v24; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  const dvar_t *v32; 
  const dvar_t *v33; 
  const dvar_t *v34; 

  _RBX = this;
  if ( !camInfo->vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 204, ASSERT_TYPE_ASSERT, "(camInfo.vehDef)", (const char *)&queryFormat, "camInfo.vehDef") )
    __debugbreak();
  vehDef = camInfo->vehDef;
  type = vehDef->type;
  if ( type == VEH_CAR )
  {
    if ( vehDef->vehiclePhysicsDef.physics_animProfile == VEH_ANIMPROFILE_VINDIA )
    {
      v7 = DCONST_DVARFLT_bg_vindiaCamTraceLen;
      if ( !DCONST_DVARFLT_bg_vindiaCamTraceLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vindiaCamTraceLen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      LODWORD(_RBX->traceLen) = v7->current.integer;
      v8 = DCONST_DVARFLT_bg_vindiaCamHeight;
      if ( !DCONST_DVARFLT_bg_vindiaCamHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vindiaCamHeight") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      LODWORD(_RBX->height) = v8->current.integer;
      v9 = DCONST_DVARFLT_bg_vindiaCamRange;
      if ( !DCONST_DVARFLT_bg_vindiaCamRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vindiaCamRange") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      LODWORD(_RBX->back) = v9->current.integer;
      if ( camInfo->inKillcam )
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
      }
      else
      {
        _RBP = DCONST_DVARFLT_bg_vindiaCamHorizOffset;
        if ( !DCONST_DVARFLT_bg_vindiaCamHorizOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vindiaCamHorizOffset") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBP);
        __asm { vmovss  xmm0, dword ptr [rbp+28h] }
      }
      __asm { vmovss  dword ptr [rbx+0Ch], xmm0 }
      v12 = DCONST_DVARFLT_bg_vindiaCamPitchContrib;
      if ( !DCONST_DVARFLT_bg_vindiaCamPitchContrib && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vindiaCamPitchContrib") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      LODWORD(_RBX->pitchContrib) = v12->current.integer;
      v13 = DCONST_DVARFLT_bg_vindiaCamRollContrib;
      if ( !DCONST_DVARFLT_bg_vindiaCamRollContrib && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vindiaCamRollContrib") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      LODWORD(_RBX->rollContrib) = v13->current.integer;
      v14 = DCONST_DVARFLT_bg_vehCamVindiaElevFactor;
      if ( !DCONST_DVARFLT_bg_vehCamVindiaElevFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamVindiaElevFactor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      LODWORD(_RBX->elevationFactor) = v14->current.integer;
      v15 = DCONST_DVARFLT_bg_vindiaCamRadiusClose;
      if ( !DCONST_DVARFLT_bg_vindiaCamRadiusClose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vindiaCamRadiusClose") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      LODWORD(_RBX->radiusClose) = v15->current.integer;
      v16 = DCONST_DVARFLT_bg_vindiaCamRadiusBack;
      if ( !DCONST_DVARFLT_bg_vindiaCamRadiusBack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vindiaCamRadiusBack") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      LODWORD(_RBX->radiusBack) = v16->current.integer;
      v17 = DCONST_DVARFLT_bg_vindiaCamRadiusUp;
      if ( DCONST_DVARFLT_bg_vindiaCamRadiusUp )
        goto LABEL_101;
      v18 = "bg_vindiaCamRadiusUp";
LABEL_99:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v18) )
        __debugbreak();
LABEL_101:
      Dvar_CheckFrontendServerThread(v17);
      LODWORD(_RBX->radiusHeight) = v17->current.integer;
      return 1;
    }
  }
  else if ( type == VEH_TREADED )
  {
    if ( vehDef->vehiclePhysicsDef.physics_gameProfile == VEH_GAMEPROFILE_BRADLEY )
    {
      v27 = DCONST_DVARFLT_bg_bradleyCamTraceLen;
      if ( !DCONST_DVARFLT_bg_bradleyCamTraceLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyCamTraceLen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v27);
      LODWORD(_RBX->traceLen) = v27->current.integer;
      v28 = DCONST_DVARFLT_bg_bradleyCamHeight;
      if ( !DCONST_DVARFLT_bg_bradleyCamHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyCamHeight") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v28);
      LODWORD(_RBX->height) = v28->current.integer;
      v29 = DCONST_DVARFLT_bg_bradleyCamRange;
      if ( !DCONST_DVARFLT_bg_bradleyCamRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyCamRange") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v29);
      LODWORD(_RBX->back) = v29->current.integer;
      if ( camInfo->inKillcam )
        __asm { vxorps  xmm0, xmm0, xmm0 }
      else
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_bradleyCamHorizOffset, "bg_bradleyCamHorizOffset");
      __asm { vmovss  dword ptr [rbx+0Ch], xmm0 }
      v30 = DCONST_DVARFLT_bg_bradleyCamPitchContrib;
      if ( !DCONST_DVARFLT_bg_bradleyCamPitchContrib && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyCamPitchContrib") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v30);
      LODWORD(_RBX->pitchContrib) = v30->current.integer;
      v31 = DCONST_DVARFLT_bg_bradleyCamRollContrib;
      if ( !DCONST_DVARFLT_bg_bradleyCamRollContrib && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyCamRollContrib") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v31);
      LODWORD(_RBX->rollContrib) = v31->current.integer;
      v32 = DCONST_DVARFLT_bg_vehCamBradleyElevFactor;
      if ( !DCONST_DVARFLT_bg_vehCamBradleyElevFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamBradleyElevFactor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v32);
      LODWORD(_RBX->elevationFactor) = v32->current.integer;
      v33 = DCONST_DVARFLT_bg_bradleyCamRadiusClose;
      if ( !DCONST_DVARFLT_bg_bradleyCamRadiusClose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyCamRadiusClose") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v33);
      LODWORD(_RBX->radiusClose) = v33->current.integer;
      v34 = DCONST_DVARFLT_bg_bradleyCamRadiusBack;
      if ( !DCONST_DVARFLT_bg_bradleyCamRadiusBack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyCamRadiusBack") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v34);
      LODWORD(_RBX->radiusBack) = v34->current.integer;
      v17 = DCONST_DVARFLT_bg_bradleyCamRadiusUp;
      if ( DCONST_DVARFLT_bg_bradleyCamRadiusUp )
        goto LABEL_101;
      v18 = "bg_bradleyCamRadiusUp";
      goto LABEL_99;
    }
    if ( vehDef->vehiclePhysicsDef.physics_gameProfile == VEH_GAMEPROFILE_WHEELSON )
    {
      v19 = DCONST_DVARFLT_bg_wheelsonCamTraceLen;
      if ( !DCONST_DVARFLT_bg_wheelsonCamTraceLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonCamTraceLen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      LODWORD(_RBX->traceLen) = v19->current.integer;
      v20 = DCONST_DVARFLT_bg_wheelsonCamHeight;
      if ( !DCONST_DVARFLT_bg_wheelsonCamHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonCamHeight") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      LODWORD(_RBX->height) = v20->current.integer;
      v21 = DCONST_DVARFLT_bg_wheelsonCamRange;
      if ( !DCONST_DVARFLT_bg_wheelsonCamRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonCamRange") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      LODWORD(_RBX->back) = v21->current.integer;
      if ( camInfo->inKillcam )
        __asm { vxorps  xmm0, xmm0, xmm0 }
      else
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_wheelsonCamHorizOffset, "bg_wheelsonCamHorizOffset");
      __asm { vmovss  dword ptr [rbx+0Ch], xmm0 }
      v22 = DCONST_DVARFLT_bg_wheelsonCamPitchContrib;
      if ( !DCONST_DVARFLT_bg_wheelsonCamPitchContrib && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonCamPitchContrib") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v22);
      LODWORD(_RBX->pitchContrib) = v22->current.integer;
      v23 = DCONST_DVARFLT_bg_wheelsonCamRollContrib;
      if ( !DCONST_DVARFLT_bg_wheelsonCamRollContrib && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonCamRollContrib") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      LODWORD(_RBX->rollContrib) = v23->current.integer;
      v24 = DCONST_DVARFLT_bg_vehCamWheelsonElevFactor;
      if ( !DCONST_DVARFLT_bg_vehCamWheelsonElevFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamWheelsonElevFactor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v24);
      LODWORD(_RBX->elevationFactor) = v24->current.integer;
      v25 = DCONST_DVARFLT_bg_wheelsonCamRadiusClose;
      if ( !DCONST_DVARFLT_bg_wheelsonCamRadiusClose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonCamRadiusClose") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      LODWORD(_RBX->radiusClose) = v25->current.integer;
      v26 = DCONST_DVARFLT_bg_wheelsonCamRadiusBack;
      if ( !DCONST_DVARFLT_bg_wheelsonCamRadiusBack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonCamRadiusBack") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      LODWORD(_RBX->radiusBack) = v26->current.integer;
      v17 = DCONST_DVARFLT_bg_wheelsonCamRadiusUp;
      if ( DCONST_DVARFLT_bg_wheelsonCamRadiusUp )
        goto LABEL_101;
      v18 = "bg_wheelsonCamRadiusUp";
      goto LABEL_99;
    }
  }
  return 0;
}

