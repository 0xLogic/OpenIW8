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
  double v12; 
  float v13; 
  float v14; 
  BGTurretVehicleCamInfo camInfo; 
  tmat33_t<vec3_t> outAxis; 
  vec3_t outFocusPos; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 561, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  *outPos = *eyePos;
  type = vehDef->type;
  if ( type == VEH_TREADED && vehDef->vehiclePhysicsDef.physics_gameProfile < VEH_GAMEPROFILE_JEEP || type == VEH_CAR && vehDef->vehiclePhysicsDef.physics_animProfile == VEH_ANIMPROFILE_VINDIA )
  {
    v12 = *(double *)eyePos->v;
    camInfo.eyePos.v[2] = eyePos->v[2];
    *(double *)camInfo.eyePos.v = v12;
    BG_AxisFromForward(inOutForward, &identityMatrix33.m[2], &camInfo.eyeView);
    v13 = vehEntAngles->v[2];
    *(_QWORD *)camInfo.vehEntAngles.v = *(_QWORD *)vehEntAngles->v;
    camInfo.inKillcam = 0;
    camInfo.ps = ps;
    camInfo.traceMask = 2705;
    camInfo.vehDef = vehDef;
    camInfo.vehEntAngles.v[2] = v13;
    camInfo.vehEntNum = vehEntNum;
    camInfo.worldId = PHYSICS_WORLD_ID_FIRST;
    BG_Camera_VehicleTurret(&camInfo, outPos, &outAxis, &outFocusPos, 0.0);
    v14 = outAxis.m[0].v[1];
    inOutForward->v[0] = outAxis.m[0].v[0];
    inOutForward->v[2] = outAxis.m[0].v[2];
    inOutForward->v[1] = v14;
  }
}

/*
==============
BG_Camera_AxisFromEyeFocus
==============
*/
void BG_Camera_AxisFromEyeFocus(const vec3_t *eyePos, const vec3_t *focusPoint, const vec3_t *vehUp, tmat33_t<vec3_t> *outAxis)
{
  float v4; 
  float v5; 
  vec3_t v0; 
  float v1[4]; 

  v4 = focusPoint->v[1] - eyePos->v[1];
  v0.v[0] = focusPoint->v[0] - eyePos->v[0];
  v5 = focusPoint->v[2] - eyePos->v[2];
  v0.v[1] = v4;
  v0.v[2] = v5;
  v1[0] = 0.0;
  v1[1] = 0.0;
  v1[2] = 0.0;
  if ( VecNCompareCustomEpsilon(v0.v, v1, 0.001, 3) )
    *outAxis = identityMatrix33;
  else
    BG_AxisFromForward(&v0, vehUp, outAxis);
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
  int *v9; 
  int i; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  double RaycastHitFraction; 
  bool HasHit; 
  hkMemoryAllocator *v15; 
  hkMemoryAllocator *v16; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v19; 

  v9 = (int *)ignoreEntities;
  if ( (!ignoreEntities || ignoreEntCount <= 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 421, ASSERT_TYPE_ASSERT, "( ignoreEntities && ignoreEntCount > 0 )", "BG_Camera_CustomCameraRayCast(): This function is designed to work with ignore entities") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v19, ignoreEntCount, 0);
  for ( i = 0; i < ignoreEntCount; ++v9 )
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v19, i++, *v9, 1, 1, 1, 0, 1);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = contentsMask;
  extendedData.ignoreBodies = &v19;
  ClosestResult = PhysicsQuery_GetClosestResult(worldId);
  if ( !ClosestResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 435, ASSERT_TYPE_ASSERT, "(castResult)", (const char *)&queryFormat, "castResult") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  Physics_Raycast(worldId, start, end, &extendedData, ClosestResult);
  if ( HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
    RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(ClosestResult, 0);
  else
    *(float *)&RaycastHitFraction = FLOAT_1_0;
  *outRawFrac = *(float *)&RaycastHitFraction;
  HasHit = HavokPhysics_CollisionQueryResult::HasHit(ClosestResult);
  v15 = hkMemHeapAllocator();
  v19.m_ignoreBodies.m_size = 0;
  if ( v19.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v15, v19.m_ignoreBodies.m_data, 4, v19.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v19.m_ignoreBodies.m_data = NULL;
  v19.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v16 = hkMemHeapAllocator();
  v19.m_ignoreEntities.m_size = 0;
  if ( v19.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v16, v19.m_ignoreEntities.m_data, 8, v19.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return HasHit;
}

/*
==============
BG_Camera_VehicleCameraShapeCast
==============
*/
_BOOL8 BG_Camera_VehicleCameraShapeCast(Physics_WorldId worldId, const int *ignoreEntities, int ignoreEntCount, int contentsMask, const vec3_t *start, const vec3_t *end, float *outRawFrac)
{
  int v10; 
  int v11; 
  __int64 v12; 
  __int64 i; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  bool HasHit; 
  int v18; 
  double ShapecastHitFraction; 
  int ShapecastHitRef; 
  Physics_RefSystem RefSystem; 
  __int16 RefEntityType; 
  const entityType_s *v23; 
  unsigned int ShapecastHitBodyId; 
  Physics_RefSystem v25; 
  int EntityNum; 
  hkMemoryAllocator *v27; 
  hkMemoryAllocator *v28; 
  HavokPhysics_IgnoreBodies v30; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v32; 

  v32 = -2i64;
  v10 = 0;
  if ( ignoreEntities )
    v10 = ignoreEntCount;
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v30, v10, 0);
  v11 = 0;
  if ( ignoreEntities )
  {
    v12 = v10;
    for ( i = 0i64; i < v12; ++i )
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v30, v11++, ignoreEntities[i], 1, 1, 1, 0, 1);
  }
  extendedData.startTolerance = 0.0;
  _XMM0 = LODWORD(FLOAT_0_016000001);
  extendedData.accuracy = FLOAT_0_016000001;
  extendedData.simplifyStart = 0;
  extendedData.collisionBuffer = 0.0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&extendedData.nonBrushShape = _XMM0;
  extendedData.phaseSelection = All;
  extendedData.permitOutwardTrace = 0;
  extendedData.contents = contentsMask;
  extendedData.ignoreBodies = &v30;
  if ( !s_sphereShapeCam )
    s_sphereShapeCam = Physics_CreateShapeSphere(&vec3_origin, 20.0, s_sphereShapeBuffer, 432);
  ClosestResult = PhysicsQuery_GetClosestResult(worldId);
  if ( ClosestResult )
  {
    v18 = 4;
    while ( 1 )
    {
      HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
      Physics_Shapecast(worldId, s_sphereShapeCam, start, end, &quat_identity, &extendedData, ClosestResult, NULL);
      if ( !HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
        break;
      ShapecastHitFraction = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(ClosestResult, 0);
      *outRawFrac = *(float *)&ShapecastHitFraction;
      ShapecastHitRef = HavokPhysics_CollisionQueryResult::GetShapecastHitRef(ClosestResult, 0);
      RefSystem = Physics_GetRefSystem(ShapecastHitRef);
      RefEntityType = Physics_GetRefEntityType(worldId, RefSystem, ShapecastHitRef);
      v23 = IGNORE_ETYPES;
      while ( *v23 != RefEntityType )
      {
        if ( (__int64)++v23 >= (__int64)&unk_143CA0430 )
        {
          ShapecastHitBodyId = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(ClosestResult, 0);
          if ( ShapecastHitBodyId == 0xFFFFFF )
            goto LABEL_24;
          v25 = Physics_GetRefSystem(ShapecastHitRef);
          if ( Physics_GetRefEntityType(worldId, v25, ShapecastHitRef) != 6 || !Physics_IsRigidBodyKeyframed(worldId, ShapecastHitBodyId) )
            goto LABEL_24;
          break;
        }
      }
      EntityNum = Physics_GetEntityNum(ShapecastHitRef);
      HavokPhysics_IgnoreBodies::AddIgnoreEntity(&v30, EntityNum, 1, 1, 1, 0, 1);
      if ( --v18 <= 0 )
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
  v27 = hkMemHeapAllocator();
  v30.m_ignoreBodies.m_size = 0;
  if ( v30.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v27, v30.m_ignoreBodies.m_data, 4, v30.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v30.m_ignoreBodies.m_data = NULL;
  v30.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v28 = hkMemHeapAllocator();
  v30.m_ignoreEntities.m_size = 0;
  if ( v30.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v28, v30.m_ignoreEntities.m_data, 8, v30.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return HasHit;
}

/*
==============
BG_Camera_VehicleCameraShapeRadius
==============
*/
float BG_Camera_VehicleCameraShapeRadius()
{
  return FLOAT_20_0;
}

/*
==============
BG_Camera_VehicleTurret
==============
*/
void BG_Camera_VehicleTurret(const BGTurretVehicleCamInfo *camInfo, vec3_t *outEyePos, tmat33_t<vec3_t> *outAxis, vec3_t *outFocusPos)
{
  float pitchContrib; 
  float v11; 
  int vehEntNum; 
  float v13; 
  int traceMask; 
  Physics_WorldId worldId; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  __int128 v24; 
  float v25; 
  const dvar_t *v26; 
  float v30; 
  __int128 v31; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  __int128 v39; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float radiusHeight; 
  float radiusBack; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  __int128 v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float rollContrib; 
  float v67; 
  float outRawFrac; 
  int ignoreEntities; 
  BGTurretVehicleCamConfig v70; 
  vec3_t angles; 
  vec3_t vec; 
  vec3_t outFocusPoint; 
  vec3_t forward; 
  vec3_t start; 
  vec3_t v76; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  AnglesToAxis(&camInfo->vehEntAngles, &axis);
  if ( BGTurretVehicleCamConfig::Init(&v70, camInfo) )
  {
    pitchContrib = v70.pitchContrib;
    if ( v70.pitchContrib <= 0.001 )
    {
      v11 = camInfo->eyeView.m[0].v[2];
      *(_QWORD *)forward.v = *(_QWORD *)camInfo->eyeView.m[0].v;
      forward.v[2] = v11;
    }
    else
    {
      AxisToAngles(&camInfo->eyeView, &angles);
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm2, 1 }
      angles.v[0] = (float)((float)((float)((float)(camInfo->vehEntAngles.v[0] * 0.0027777778) - *(float *)&_XMM4) * 360.0) * pitchContrib) + angles.v[0];
      AngleVectors(&angles, &forward, NULL, NULL);
    }
    BG_EyeOffsetForRemoteTurretVehicle(camInfo, outEyePos, &outFocusPoint);
    vehEntNum = camInfo->vehEntNum;
    v13 = 20.0 * camInfo->eyeView.m[0].v[1];
    traceMask = camInfo->traceMask;
    worldId = camInfo->worldId;
    v16 = camInfo->eyePos.v[1];
    start.v[0] = camInfo->eyePos.v[0] - (float)(20.0 * camInfo->eyeView.m[0].v[0]);
    v17 = v16 - v13;
    v18 = 20.0 * camInfo->eyeView.m[0].v[2];
    v19 = camInfo->eyePos.v[2];
    ignoreEntities = vehEntNum;
    start.v[1] = v17;
    start.v[2] = v19 - v18;
    outRawFrac = FLOAT_1_0;
    BG_Camera_VehicleCameraShapeCast(worldId, &ignoreEntities, 1, traceMask, &start, outEyePos, &outRawFrac);
    v20 = outRawFrac;
    outEyePos->v[0] = (float)((float)(outEyePos->v[0] - camInfo->eyePos.v[0]) * outRawFrac) + camInfo->eyePos.v[0];
    v21 = outEyePos->v[2];
    outEyePos->v[1] = (float)((float)(outEyePos->v[1] - camInfo->eyePos.v[1]) * v20) + camInfo->eyePos.v[1];
    outEyePos->v[2] = (float)((float)(v21 - camInfo->eyePos.v[2]) * v20) + camInfo->eyePos.v[2];
    AxisTranspose(&axis, &out);
    v22 = outEyePos->v[0] - camInfo->eyePos.v[0];
    v24 = LODWORD(outEyePos->v[1]);
    v23 = outEyePos->v[1] - camInfo->eyePos.v[1];
    v25 = outEyePos->v[2] - camInfo->eyePos.v[2];
    v26 = DCONST_DVARBOOL_bg_vehTurretElevLocal;
    *(float *)&v24 = fsqrt((float)((float)(v23 * v23) + (float)(v22 * v22)) + (float)(v25 * v25));
    _XMM7 = v24;
    __asm
    {
      vcmpless xmm0, xmm7, xmm11
      vblendvps xmm0, xmm7, xmm9, xmm0
    }
    vec.v[0] = v22 * (float)(1.0 / *(float *)&_XMM0);
    vec.v[2] = v25 * (float)(1.0 / *(float *)&_XMM0);
    vec.v[1] = v23 * (float)(1.0 / *(float *)&_XMM0);
    if ( !DCONST_DVARBOOL_bg_vehTurretElevLocal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehTurretElevLocal") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    if ( v26->current.enabled )
    {
      AxisTransformVec3(&out, &vec, &angles);
      v30 = angles.v[2];
      if ( angles.v[2] < 0.0 )
        v30 = angles.v[2] * v70.elevationFactor;
      v31 = LODWORD(angles.v[0]);
      *(float *)&v31 = fsqrt((float)((float)(*(float *)&v31 * *(float *)&v31) + (float)(angles.v[1] * angles.v[1])) + (float)(v30 * v30));
      _XMM3 = v31;
      __asm
      {
        vcmpless xmm0, xmm3, xmm11
        vblendvps xmm0, xmm3, xmm9, xmm0
      }
      angles.v[0] = angles.v[0] * (float)(1.0 / *(float *)&_XMM0);
      angles.v[2] = v30 * (float)(1.0 / *(float *)&_XMM0);
      angles.v[1] = angles.v[1] * (float)(1.0 / *(float *)&_XMM0);
      AxisTransformVec3(&axis, &angles, &vec);
      v35 = vec.v[2];
      v36 = vec.v[1];
      v37 = vec.v[0];
    }
    else
    {
      v38 = vec.v[2];
      if ( vec.v[2] < 0.0 )
        v38 = vec.v[2] * v70.elevationFactor;
      v39 = LODWORD(vec.v[1]);
      *(float *)&v39 = fsqrt((float)((float)(*(float *)&v39 * *(float *)&v39) + (float)(vec.v[0] * vec.v[0])) + (float)(v38 * v38));
      _XMM3 = v39;
      __asm
      {
        vcmpless xmm0, xmm3, xmm11
        vblendvps xmm0, xmm3, xmm9, xmm0
      }
      v43 = 1.0 / *(float *)&_XMM0;
      v37 = vec.v[0] * (float)(1.0 / *(float *)&_XMM0);
      v35 = v38 * v43;
      v36 = vec.v[1] * v43;
    }
    v44 = (float)(v37 * *(float *)&_XMM7) + camInfo->eyePos.v[0];
    outEyePos->v[0] = v44;
    v45 = (float)(v36 * *(float *)&_XMM7) + camInfo->eyePos.v[1];
    outEyePos->v[1] = v45;
    v46 = (float)(v35 * *(float *)&_XMM7) + camInfo->eyePos.v[2];
    outEyePos->v[2] = v46;
    v47 = camInfo->eyePos.v[0];
    if ( (float)((float)((float)((float)(v44 - v47) * (float)(v44 - v47)) + (float)((float)(v45 - camInfo->eyePos.v[1]) * (float)(v45 - camInfo->eyePos.v[1]))) + (float)((float)(v46 - camInfo->eyePos.v[2]) * (float)(v46 - camInfo->eyePos.v[2]))) < (float)(v70.radiusClose * v70.radiusClose) )
    {
      radiusHeight = v70.radiusHeight;
      radiusBack = v70.radiusBack;
      v50 = (float)(v70.radiusHeight * camInfo->eyeView.m[2].v[0]) + v47;
      outEyePos->v[0] = v50;
      v51 = (float)(radiusHeight * camInfo->eyeView.m[2].v[1]) + camInfo->eyePos.v[1];
      outEyePos->v[1] = v51;
      v52 = (float)(radiusHeight * camInfo->eyeView.m[2].v[2]) + camInfo->eyePos.v[2];
      v53 = radiusBack * forward.v[1];
      outEyePos->v[0] = (float)(radiusBack * forward.v[0]) + v50;
      v54 = radiusBack * forward.v[2];
      outEyePos->v[1] = v53 + v51;
      outEyePos->v[2] = v54 + v52;
    }
    BG_Camera_VehicleCameraRayCast(camInfo->worldId, &ignoreEntities, 1, 2705, outEyePos, &outFocusPoint, &outRawFrac);
    v55 = outEyePos->v[1];
    v56 = outEyePos->v[2];
    v57 = (float)((float)(outFocusPoint.v[0] - outEyePos->v[0]) * outRawFrac) + outEyePos->v[0];
    v58 = LODWORD(outFocusPoint.v[1]);
    *(float *)&v58 = (float)(outFocusPoint.v[1] - v55) * outRawFrac;
    v59 = (float)((float)(outFocusPoint.v[2] - v56) * outRawFrac) + v56;
    v60 = v59 - v56;
    outFocusPoint.v[1] = *(float *)&v58 + v55;
    v61 = (float)(*(float *)&v58 + v55) - v55;
    outFocusPoint.v[0] = v57;
    v62 = v57 - outEyePos->v[0];
    outFocusPoint.v[2] = v59;
    *(float *)&v58 = fsqrt((float)((float)((float)(outFocusPoint.v[1] - v55) * (float)(outFocusPoint.v[1] - v55)) + (float)(v62 * v62)) + (float)(v60 * v60));
    _XMM3 = v58;
    __asm
    {
      vcmpless xmm0, xmm3, xmm11
      vblendvps xmm0, xmm3, xmm9, xmm0
    }
    v76.v[0] = (float)(1.0 / *(float *)&_XMM0) * v62;
    v76.v[2] = (float)(1.0 / *(float *)&_XMM0) * v60;
    v76.v[1] = (float)(1.0 / *(float *)&_XMM0) * v61;
    BG_AxisFromForward(&v76, &identityMatrix33.m[2], outAxis);
    rollContrib = v70.rollContrib;
    if ( v70.rollContrib > 0.001 )
    {
      AxisToAngles(outAxis, &angles);
      angles.v[2] = (float)(camInfo->vehEntAngles.v[2] - angles.v[2]) * rollContrib;
      AnglesToAxis(&angles, outAxis);
    }
    if ( outFocusPos )
    {
      v67 = outFocusPoint.v[1];
      outFocusPos->v[0] = outFocusPoint.v[0];
      outFocusPos->v[2] = outFocusPoint.v[2];
      outFocusPos->v[1] = v67;
    }
  }
  else
  {
    outEyePos->v[0] = camInfo->eyePos.v[0];
    outEyePos->v[1] = camInfo->eyePos.v[1];
    outEyePos->v[2] = camInfo->eyePos.v[2];
    MatrixCopy33(&camInfo->eyeView, outAxis);
    if ( outFocusPos )
    {
      outFocusPos->v[0] = camInfo->eyePos.v[0] + camInfo->eyeView.m[0].v[0];
      outFocusPos->v[1] = camInfo->eyePos.v[1] + camInfo->eyeView.m[0].v[1];
      outFocusPos->v[2] = camInfo->eyePos.v[2] + camInfo->eyeView.m[0].v[2];
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
  float traceLen; 
  float back; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float height; 
  float v14; 
  float v15; 
  float horizOffset; 
  float v17; 
  BGTurretVehicleCamConfig v18; 

  if ( !camInfo->vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 266, ASSERT_TYPE_ASSERT, "(camInfo.vehDef)", (const char *)&queryFormat, "camInfo.vehDef") )
    __debugbreak();
  if ( !camInfo->vehDef->vehiclePhysicsDef.physicsEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 267, ASSERT_TYPE_ASSERT, "(camInfo.vehDef->vehiclePhysicsDef.physicsEnabled)", (const char *)&queryFormat, "camInfo.vehDef->vehiclePhysicsDef.physicsEnabled") )
    __debugbreak();
  if ( BGTurretVehicleCamConfig::Init(&v18, camInfo) )
  {
    traceLen = v18.traceLen;
    back = v18.back;
    outFocusPoint->v[0] = (float)(v18.traceLen * camInfo->eyeView.m[0].v[0]) + camInfo->eyePos.v[0];
    outFocusPoint->v[1] = (float)(traceLen * camInfo->eyeView.m[0].v[1]) + camInfo->eyePos.v[1];
    outFocusPoint->v[2] = (float)(traceLen * camInfo->eyeView.m[0].v[2]) + camInfo->eyePos.v[2];
    v8 = camInfo->eyeView.m[0].v[2];
    v9 = camInfo->eyeView.m[0].v[1];
    v10 = camInfo->eyePos.v[0] - (float)(back * camInfo->eyeView.m[0].v[0]);
    outEyePos->v[0] = v10;
    v11 = camInfo->eyePos.v[1] - (float)(back * v9);
    outEyePos->v[1] = v11;
    v12 = camInfo->eyePos.v[2] - (float)(back * v8);
    height = v18.height;
    outEyePos->v[2] = v12;
    v14 = (float)(height * camInfo->eyeView.m[2].v[0]) + v10;
    outEyePos->v[0] = v14;
    v15 = (float)(height * camInfo->eyeView.m[2].v[1]) + v11;
    horizOffset = v18.horizOffset;
    outEyePos->v[1] = v15;
    v17 = (float)(height * camInfo->eyeView.m[2].v[2]) + v12;
    outEyePos->v[2] = v17;
    outEyePos->v[0] = (float)(horizOffset * camInfo->eyeView.m[1].v[0]) + v14;
    outEyePos->v[1] = (float)(horizOffset * camInfo->eyeView.m[1].v[1]) + v15;
    outEyePos->v[2] = (float)(horizOffset * camInfo->eyeView.m[1].v[2]) + v17;
  }
  else
  {
    outFocusPoint->v[0] = camInfo->eyeView.m[0].v[0] + camInfo->eyePos.v[0];
    outFocusPoint->v[1] = camInfo->eyePos.v[1] + camInfo->eyeView.m[0].v[1];
    outFocusPoint->v[2] = camInfo->eyePos.v[2] + camInfo->eyeView.m[0].v[2];
    outEyePos->v[0] = camInfo->eyePos.v[0];
    outEyePos->v[1] = camInfo->eyePos.v[1];
    outEyePos->v[2] = camInfo->eyePos.v[2];
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
  const dvar_t *v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  float value; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  const char *v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  double v21; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  const dvar_t *v24; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  double Float_Internal_DebugName; 
  const dvar_t *v31; 
  const dvar_t *v32; 
  const dvar_t *v33; 
  const dvar_t *v34; 
  const dvar_t *v35; 

  if ( !camInfo->vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_camera.cpp", 204, ASSERT_TYPE_ASSERT, "(camInfo.vehDef)", (const char *)&queryFormat, "camInfo.vehDef") )
    __debugbreak();
  vehDef = camInfo->vehDef;
  type = vehDef->type;
  if ( type == VEH_CAR )
  {
    if ( vehDef->vehiclePhysicsDef.physics_animProfile == VEH_ANIMPROFILE_VINDIA )
    {
      v6 = DCONST_DVARFLT_bg_vindiaCamTraceLen;
      if ( !DCONST_DVARFLT_bg_vindiaCamTraceLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vindiaCamTraceLen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      LODWORD(this->traceLen) = v6->current.integer;
      v7 = DCONST_DVARFLT_bg_vindiaCamHeight;
      if ( !DCONST_DVARFLT_bg_vindiaCamHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vindiaCamHeight") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      LODWORD(this->height) = v7->current.integer;
      v8 = DCONST_DVARFLT_bg_vindiaCamRange;
      if ( !DCONST_DVARFLT_bg_vindiaCamRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vindiaCamRange") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      LODWORD(this->back) = v8->current.integer;
      if ( camInfo->inKillcam )
      {
        value = 0.0;
      }
      else
      {
        v10 = DCONST_DVARFLT_bg_vindiaCamHorizOffset;
        if ( !DCONST_DVARFLT_bg_vindiaCamHorizOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vindiaCamHorizOffset") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v10);
        value = v10->current.value;
      }
      this->horizOffset = value;
      v11 = DCONST_DVARFLT_bg_vindiaCamPitchContrib;
      if ( !DCONST_DVARFLT_bg_vindiaCamPitchContrib && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vindiaCamPitchContrib") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      LODWORD(this->pitchContrib) = v11->current.integer;
      v12 = DCONST_DVARFLT_bg_vindiaCamRollContrib;
      if ( !DCONST_DVARFLT_bg_vindiaCamRollContrib && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vindiaCamRollContrib") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      LODWORD(this->rollContrib) = v12->current.integer;
      v13 = DCONST_DVARFLT_bg_vehCamVindiaElevFactor;
      if ( !DCONST_DVARFLT_bg_vehCamVindiaElevFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamVindiaElevFactor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      LODWORD(this->elevationFactor) = v13->current.integer;
      v14 = DCONST_DVARFLT_bg_vindiaCamRadiusClose;
      if ( !DCONST_DVARFLT_bg_vindiaCamRadiusClose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vindiaCamRadiusClose") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      LODWORD(this->radiusClose) = v14->current.integer;
      v15 = DCONST_DVARFLT_bg_vindiaCamRadiusBack;
      if ( !DCONST_DVARFLT_bg_vindiaCamRadiusBack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vindiaCamRadiusBack") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      LODWORD(this->radiusBack) = v15->current.integer;
      v16 = DCONST_DVARFLT_bg_vindiaCamRadiusUp;
      if ( DCONST_DVARFLT_bg_vindiaCamRadiusUp )
        goto LABEL_101;
      v17 = "bg_vindiaCamRadiusUp";
LABEL_99:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v17) )
        __debugbreak();
LABEL_101:
      Dvar_CheckFrontendServerThread(v16);
      LODWORD(this->radiusHeight) = v16->current.integer;
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
      LODWORD(this->traceLen) = v27->current.integer;
      v28 = DCONST_DVARFLT_bg_bradleyCamHeight;
      if ( !DCONST_DVARFLT_bg_bradleyCamHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyCamHeight") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v28);
      LODWORD(this->height) = v28->current.integer;
      v29 = DCONST_DVARFLT_bg_bradleyCamRange;
      if ( !DCONST_DVARFLT_bg_bradleyCamRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyCamRange") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v29);
      LODWORD(this->back) = v29->current.integer;
      if ( camInfo->inKillcam )
        LODWORD(Float_Internal_DebugName) = 0;
      else
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_bradleyCamHorizOffset, "bg_bradleyCamHorizOffset");
      this->horizOffset = *(float *)&Float_Internal_DebugName;
      v31 = DCONST_DVARFLT_bg_bradleyCamPitchContrib;
      if ( !DCONST_DVARFLT_bg_bradleyCamPitchContrib && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyCamPitchContrib") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v31);
      LODWORD(this->pitchContrib) = v31->current.integer;
      v32 = DCONST_DVARFLT_bg_bradleyCamRollContrib;
      if ( !DCONST_DVARFLT_bg_bradleyCamRollContrib && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyCamRollContrib") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v32);
      LODWORD(this->rollContrib) = v32->current.integer;
      v33 = DCONST_DVARFLT_bg_vehCamBradleyElevFactor;
      if ( !DCONST_DVARFLT_bg_vehCamBradleyElevFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamBradleyElevFactor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v33);
      LODWORD(this->elevationFactor) = v33->current.integer;
      v34 = DCONST_DVARFLT_bg_bradleyCamRadiusClose;
      if ( !DCONST_DVARFLT_bg_bradleyCamRadiusClose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyCamRadiusClose") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v34);
      LODWORD(this->radiusClose) = v34->current.integer;
      v35 = DCONST_DVARFLT_bg_bradleyCamRadiusBack;
      if ( !DCONST_DVARFLT_bg_bradleyCamRadiusBack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bradleyCamRadiusBack") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v35);
      LODWORD(this->radiusBack) = v35->current.integer;
      v16 = DCONST_DVARFLT_bg_bradleyCamRadiusUp;
      if ( DCONST_DVARFLT_bg_bradleyCamRadiusUp )
        goto LABEL_101;
      v17 = "bg_bradleyCamRadiusUp";
      goto LABEL_99;
    }
    if ( vehDef->vehiclePhysicsDef.physics_gameProfile == VEH_GAMEPROFILE_WHEELSON )
    {
      v18 = DCONST_DVARFLT_bg_wheelsonCamTraceLen;
      if ( !DCONST_DVARFLT_bg_wheelsonCamTraceLen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonCamTraceLen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      LODWORD(this->traceLen) = v18->current.integer;
      v19 = DCONST_DVARFLT_bg_wheelsonCamHeight;
      if ( !DCONST_DVARFLT_bg_wheelsonCamHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonCamHeight") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      LODWORD(this->height) = v19->current.integer;
      v20 = DCONST_DVARFLT_bg_wheelsonCamRange;
      if ( !DCONST_DVARFLT_bg_wheelsonCamRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonCamRange") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      LODWORD(this->back) = v20->current.integer;
      if ( camInfo->inKillcam )
        LODWORD(v21) = 0;
      else
        v21 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_wheelsonCamHorizOffset, "bg_wheelsonCamHorizOffset");
      this->horizOffset = *(float *)&v21;
      v22 = DCONST_DVARFLT_bg_wheelsonCamPitchContrib;
      if ( !DCONST_DVARFLT_bg_wheelsonCamPitchContrib && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonCamPitchContrib") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v22);
      LODWORD(this->pitchContrib) = v22->current.integer;
      v23 = DCONST_DVARFLT_bg_wheelsonCamRollContrib;
      if ( !DCONST_DVARFLT_bg_wheelsonCamRollContrib && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonCamRollContrib") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      LODWORD(this->rollContrib) = v23->current.integer;
      v24 = DCONST_DVARFLT_bg_vehCamWheelsonElevFactor;
      if ( !DCONST_DVARFLT_bg_vehCamWheelsonElevFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamWheelsonElevFactor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v24);
      LODWORD(this->elevationFactor) = v24->current.integer;
      v25 = DCONST_DVARFLT_bg_wheelsonCamRadiusClose;
      if ( !DCONST_DVARFLT_bg_wheelsonCamRadiusClose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonCamRadiusClose") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      LODWORD(this->radiusClose) = v25->current.integer;
      v26 = DCONST_DVARFLT_bg_wheelsonCamRadiusBack;
      if ( !DCONST_DVARFLT_bg_wheelsonCamRadiusBack && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_wheelsonCamRadiusBack") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      LODWORD(this->radiusBack) = v26->current.integer;
      v16 = DCONST_DVARFLT_bg_wheelsonCamRadiusUp;
      if ( DCONST_DVARFLT_bg_wheelsonCamRadiusUp )
        goto LABEL_101;
      v17 = "bg_wheelsonCamRadiusUp";
      goto LABEL_99;
    }
  }
  return 0;
}

