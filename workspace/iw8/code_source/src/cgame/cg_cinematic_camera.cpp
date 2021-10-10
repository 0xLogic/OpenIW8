/*
==============
CG_CinematicCameraShouldRenderCharacter
==============
*/

int __fastcall CG_CinematicCameraShouldRenderCharacter(LocalClientNum_t localClientNum, int entityId)
{
  return ?CG_CinematicCameraShouldRenderCharacter@@YAHW4LocalClientNum_t@@H@Z(localClientNum, entityId);
}

/*
==============
CG_CinematicCameraMyChanges
==============
*/

void CG_CinematicCameraMyChanges(void)
{
  ?CG_CinematicCameraMyChanges@@YAXXZ();
}

/*
==============
CG_CinematicCamera_FreeClientMemory
==============
*/

void CG_CinematicCamera_FreeClientMemory(void)
{
  ?CG_CinematicCamera_FreeClientMemory@@YAXXZ();
}

/*
==============
CG_CinematicCameraSetDof
==============
*/

void __fastcall CG_CinematicCameraSetDof(LocalClientNum_t localClientNum)
{
  ?CG_CinematicCameraSetDof@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DevCinematicCameraRunScene_f
==============
*/

void CG_DevCinematicCameraRunScene_f(void)
{
  ?CG_DevCinematicCameraRunScene_f@@YAXXZ();
}

/*
==============
CG_IsCinematicCameraActive
==============
*/

int __fastcall CG_IsCinematicCameraActive(LocalClientNum_t localClientNum)
{
  return ?CG_IsCinematicCameraActive@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CinematicCamera_Init
==============
*/

void __fastcall CG_CinematicCamera_Init(const LocalClientNum_t localClientNum)
{
  ?CG_CinematicCamera_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_StopCinematicCameras
==============
*/

void __fastcall CG_StopCinematicCameras(LocalClientNum_t localClientNum)
{
  ?CG_StopCinematicCameras@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayCinematicCamera
==============
*/

void __fastcall CG_PlayCinematicCamera(LocalClientNum_t localClientNum, const char *sceneName, int leadingActorId, int supportingActorId)
{
  ?CG_PlayCinematicCamera@@YAXW4LocalClientNum_t@@PEBDHH@Z(localClientNum, sceneName, leadingActorId, supportingActorId);
}

/*
==============
CG_CinematicCamera_AllocateClientMemory
==============
*/

void __fastcall CG_CinematicCamera_AllocateClientMemory(HunkUser *hunkUser, const unsigned int maxLocalClients)
{
  ?CG_CinematicCamera_AllocateClientMemory@@YAXPEAUHunkUser@@I@Z(hunkUser, maxLocalClients);
}

/*
==============
CG_CinematicCameraGetFov
==============
*/

double __fastcall CG_CinematicCameraGetFov(LocalClientNum_t localClientNum, const float currentFov)
{
  double result; 

  *(float *)&result = ?CG_CinematicCameraGetFov@@YAMW4LocalClientNum_t@@M@Z(localClientNum, currentFov);
  return result;
}

/*
==============
CG_UpdateCinematicCamera
==============
*/

void __fastcall CG_UpdateCinematicCamera(LocalClientNum_t localClientNum)
{
  ?CG_UpdateCinematicCamera@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawDebugCinematicCamera
==============
*/

void __fastcall CG_DrawDebugCinematicCamera(LocalClientNum_t localClientNum)
{
  ?CG_DrawDebugCinematicCamera@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_TransitionCinematicCamera
==============
*/

void __fastcall CG_TransitionCinematicCamera(LocalClientNum_t localClientNum)
{
  ?CG_TransitionCinematicCamera@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CameraRotateUpdateAngles
==============
*/
void CG_CameraRotateUpdateAngles(const RotatingCamera *rotatingCamera, const float percentTime, const float totalCamTime, const float deltaSeconds, CameraCutData *cutData, vec3_t *outAngles)
{
  float v9; 
  float v10; 
  double v11; 
  double v12; 
  double v13; 

  if ( !rotatingCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1124, ASSERT_TYPE_ASSERT, "(rotatingCamera)", (const char *)&queryFormat, "rotatingCamera") )
    __debugbreak();
  if ( deltaSeconds > 0.0 && totalCamTime > 0.0 && !cutData->detached )
  {
    v9 = rotatingCamera->amountToRotate.v[1];
    v10 = rotatingCamera->amountToRotate.v[2];
    cutData->angles.v[0] = (float)((float)(deltaSeconds / totalCamTime) * rotatingCamera->amountToRotate.v[0]) + cutData->angles.v[0];
    cutData->angles.v[1] = (float)((float)(deltaSeconds / totalCamTime) * v9) + cutData->angles.v[1];
    cutData->angles.v[2] = (float)((float)(deltaSeconds / totalCamTime) * v10) + cutData->angles.v[2];
  }
  v11 = AngleNormalize360(cutData->angles.v[0] + outAngles->v[0]);
  outAngles->v[0] = *(float *)&v11;
  v12 = AngleNormalize360(cutData->angles.v[1] + outAngles->v[1]);
  outAngles->v[1] = *(float *)&v12;
  v13 = AngleNormalize360(cutData->angles.v[2] + outAngles->v[2]);
  outAngles->v[2] = *(float *)&v13;
}

/*
==============
CG_CameraRotateYawToViewActor
==============
*/
void CG_CameraRotateYawToViewActor(LocalClientNum_t localClientNum, const RotatingCamera *rotatingCamera, const float percentTime, const float distanceToFocalPoint, const vec3_t *focusPosition, vec3_t *outAngles)
{
  bool focusOnSupportingActor; 
  int IsCinematicCameraActive; 
  unsigned int leadingActorId; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  __int128 v16; 
  float v20; 
  float v21; 
  vec2_t vec; 
  int v25; 
  vec3_t outPosition; 
  vec3_t forward; 
  vec2_t v28; 
  float v29; 

  if ( !rotatingCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1167, ASSERT_TYPE_ASSERT, "(rotatingCamera)", (const char *)&queryFormat, "rotatingCamera") )
    __debugbreak();
  focusOnSupportingActor = rotatingCamera->focusOnSupportingActor;
  IsCinematicCameraActive = CG_IsCinematicCameraActive(localClientNum);
  if ( focusOnSupportingActor )
  {
    if ( !IsCinematicCameraActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 872, ASSERT_TYPE_ASSERT, "(CG_IsCinematicCameraActive( localClientNum ))", (const char *)&queryFormat, "CG_IsCinematicCameraActive( localClientNum )") )
      __debugbreak();
    leadingActorId = CG_CinematicCamera_GetSceneData(localClientNum)->leadingActorId;
  }
  else
  {
    if ( !IsCinematicCameraActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 872, ASSERT_TYPE_ASSERT, "(CG_IsCinematicCameraActive( localClientNum ))", (const char *)&queryFormat, "CG_IsCinematicCameraActive( localClientNum )") )
      __debugbreak();
    leadingActorId = CG_CinematicCamera_GetSceneData(localClientNum)->supportingActorId;
  }
  if ( CG_CinematicCameraGetEntityOffsetPosition(localClientNum, leadingActorId, (const EntityPositionOffset *)rotatingCamera, &outPosition) )
  {
    v12 = focusPosition->v[1];
    v13 = focusPosition->v[0];
    v14 = focusPosition->v[2];
    if ( (float)((float)((float)((float)(v12 - outPosition.v[1]) * (float)(v12 - outPosition.v[1])) + (float)((float)(v13 - outPosition.v[0]) * (float)(v13 - outPosition.v[0]))) + (float)((float)(v14 - outPosition.v[2]) * (float)(v14 - outPosition.v[2]))) > 0.001 )
    {
      v16 = LODWORD(outPosition.v[1]);
      v15 = outPosition.v[1] - v12;
      *(float *)&v16 = fsqrt((float)((float)(v15 * v15) + (float)((float)(outPosition.v[0] - v13) * (float)(outPosition.v[0] - v13))) + (float)((float)(outPosition.v[2] - v14) * (float)(outPosition.v[2] - v14)));
      _XMM3 = v16;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm8, xmm0
      }
      v28.v[0] = (float)((float)(1.0 / *(float *)&_XMM0) * (float)(outPosition.v[0] - v13)) * distanceToFocalPoint;
      v29 = (float)((float)(1.0 / *(float *)&_XMM0) * (float)(outPosition.v[2] - v14)) * distanceToFocalPoint;
      v28.v[1] = (float)((float)(1.0 / *(float *)&_XMM0) * v15) * distanceToFocalPoint;
      AngleVectors(outAngles, &forward, NULL, NULL);
      LODWORD(vec.v[0]) = COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(distanceToFocalPoint) ^ _xmm) * forward.v[0]) ^ _xmm;
      LODWORD(vec.v[1]) = COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(distanceToFocalPoint) ^ _xmm) * forward.v[1]) ^ _xmm;
      v25 = COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(distanceToFocalPoint) ^ _xmm) * forward.v[2]) ^ _xmm;
      *(double *)&_XMM0 = vectoyaw(&vec);
      v20 = *(float *)&_XMM0;
      *(double *)&_XMM0 = vectoyaw(&v28);
      v21 = (float)(*(float *)&_XMM0 - v20) * 0.0027777778;
      _XMM1 = 0i64;
      __asm { vroundss xmm3, xmm1, xmm5, 1 }
      *(double *)&_XMM0 = I_fclamp(percentTime * 1.5, 0.0, 1.0);
      outAngles->v[1] = (float)((float)((float)(v21 - *(float *)&_XMM3) * 360.0) * *(float *)&_XMM0) + v20;
    }
  }
  else
  {
    Com_Printf(0, "<rotate> camera can't focus on other actor id %d\n", leadingActorId);
  }
}

/*
==============
CG_CinematicCameraGetEntityOffsetPosition
==============
*/
const centity_t *CG_CinematicCameraGetEntityOffsetPosition(LocalClientNum_t localClientNum, const int entityId, const EntityPositionOffset *entityPositionData, vec3_t *outPosition)
{
  __int64 v4; 
  __int64 v6; 
  CgEntitySystem *v8; 
  __int64 v9; 
  const DObj *ClientDObj; 
  float v12; 
  float v13; 
  __int64 v14; 
  __int64 v15; 
  vec3_t angles; 
  vec3_t forward; 

  v4 = entityId;
  v6 = localClientNum;
  if ( !entityPositionData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 369, ASSERT_TYPE_ASSERT, "(entityPositionData)", (const char *)&queryFormat, "entityPositionData") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x800 )
  {
    LODWORD(v14) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 370, ASSERT_TYPE_ASSERT, "(unsigned)( entityId ) < (unsigned)( ( 2048 ) )", "entityId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, 2048) )
      __debugbreak();
  }
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
  {
    LODWORD(v15) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v15) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v15) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v14) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v6] )
  {
    LODWORD(v15) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v15) )
      __debugbreak();
  }
  v8 = CgEntitySystem::ms_entitySystemArray[v6];
  if ( (unsigned int)v4 >= 0x800 )
  {
    LODWORD(v15) = 2048;
    LODWORD(v14) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  v9 = (__int64)&v8->m_entities[v4];
  if ( (*(_BYTE *)(v9 + 648) & 1) == 0 )
    return 0i64;
  CG_GetPoseOrigin((const cpose_t *)v9, outPosition);
  if ( entityPositionData->optionalTagName )
  {
    ClientDObj = Com_GetClientDObj(*(__int16 *)(v9 + 400), (LocalClientNum_t)v6);
    if ( ClientDObj )
      CG_DObjGetWorldTagPos((const cpose_t *)v9, ClientDObj, entityPositionData->optionalTagName, outPosition);
  }
  if ( entityPositionData->deltaAnglesRange != 0.0 )
  {
    angles.v[0] = *(float *)(v9 + 72) + entityPositionData->deltaAngles.v[0];
    angles.v[1] = *(float *)(v9 + 76) + entityPositionData->deltaAngles.v[1];
    angles.v[2] = *(float *)(v9 + 80) + entityPositionData->deltaAngles.v[2];
    AngleVectors(&angles, &forward, NULL, NULL);
    LODWORD(v12) = LODWORD(entityPositionData->deltaAnglesRange) ^ _xmm;
    v13 = v12 * forward.v[2];
    outPosition->v[0] = (float)(v12 * forward.v[0]) + outPosition->v[0];
    outPosition->v[1] = (float)(v12 * forward.v[1]) + outPosition->v[1];
    outPosition->v[2] = v13 + outPosition->v[2];
  }
  return (const centity_t *)v9;
}

/*
==============
CG_CinematicCameraGetFov
==============
*/
float CG_CinematicCameraGetFov(LocalClientNum_t localClientNum, const float currentFov)
{
  const dvar_t *v4; 
  CinematicCameraScene *currentCameraScene; 
  cg_t *LocalClientGlobals; 
  CameraSceneData *SceneData; 
  float startTime; 
  float v9; 
  float v10; 
  int durationBlend; 
  float v12; 
  float v13; 
  int v14; 
  float v15; 
  float v16; 
  int v17; 
  float v18; 
  float v19; 
  int v20; 
  float v21; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1795, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA )") )
    __debugbreak();
  v4 = DCONST_DVARBOOL_cg_cinematicCameraFovEnabled;
  if ( !DCONST_DVARBOOL_cg_cinematicCameraFovEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraFovEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    if ( !CG_IsCinematicCameraActive(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1800, ASSERT_TYPE_ASSERT, "(CG_IsCinematicCameraActive( localClientNum ))", (const char *)&queryFormat, "CG_IsCinematicCameraActive( localClientNum )") )
      __debugbreak();
    currentCameraScene = CG_CinematicCamera_GetSceneData(localClientNum)->currentCameraScene;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    SceneData = CG_CinematicCamera_GetSceneData(localClientNum);
    startTime = currentCameraScene->fovSettings[0].startTime;
    v10 = (float)(LocalClientGlobals->time - SceneData->sceneStartTime) * 0.001;
    v9 = v10;
    if ( startTime >= 0.0 && v10 >= startTime )
    {
      durationBlend = currentCameraScene->fovSettings[0].durationBlend;
      if ( durationBlend <= 0 || (v12 = (float)durationBlend * 0.001, (float)(v10 - startTime) >= v12) )
        currentFov = currentCameraScene->fovSettings[0].fov;
      else
        currentFov = (float)((float)(1.0 - (float)((float)(v10 - startTime) / v12)) * currentFov) + (float)(currentCameraScene->fovSettings[0].fov * (float)((float)(v10 - startTime) / v12));
    }
    v13 = currentCameraScene->fovSettings[1].startTime;
    if ( v13 >= 0.0 && v10 >= v13 )
    {
      v14 = currentCameraScene->fovSettings[1].durationBlend;
      if ( v14 <= 0 || (v15 = (float)v14 * 0.001, (float)(v9 - v13) >= v15) )
        currentFov = currentCameraScene->fovSettings[1].fov;
      else
        currentFov = (float)((float)(1.0 - (float)((float)(v9 - v13) / v15)) * currentFov) + (float)(currentCameraScene->fovSettings[1].fov * (float)((float)(v9 - v13) / v15));
    }
    v16 = currentCameraScene->fovSettings[2].startTime;
    if ( v16 >= 0.0 && v9 >= v16 )
    {
      v17 = currentCameraScene->fovSettings[2].durationBlend;
      if ( v17 <= 0 || (v18 = (float)v17 * 0.001, (float)(v9 - v16) >= v18) )
        currentFov = currentCameraScene->fovSettings[2].fov;
      else
        currentFov = (float)((float)(1.0 - (float)((float)(v9 - v16) / v18)) * currentFov) + (float)(currentCameraScene->fovSettings[2].fov * (float)((float)(v9 - v16) / v18));
    }
    v19 = currentCameraScene->fovSettings[3].startTime;
    if ( v19 >= 0.0 && v9 >= v19 )
    {
      v20 = currentCameraScene->fovSettings[3].durationBlend;
      if ( v20 <= 0 )
        return currentCameraScene->fovSettings[3].fov;
      v21 = (float)v20 * 0.001;
      if ( (float)(v9 - v19) >= v21 )
        return currentCameraScene->fovSettings[3].fov;
      else
        return (float)((float)(1.0 - (float)((float)(v9 - v19) / v21)) * currentFov) + (float)(currentCameraScene->fovSettings[3].fov * (float)((float)(v9 - v19) / v21));
    }
  }
  return currentFov;
}

/*
==============
CG_CinematicCameraMyChanges
==============
*/
void CG_CinematicCameraMyChanges(void)
{
  int i; 
  CinematicCameraScene *Scene; 
  char dest[32]; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_OFFHAND_END) && s_cameraScenes )
  {
    for ( i = 0; i < 2; ++i )
    {
      Scene = CG_CinematicCamera_GetScene(i);
      if ( Scene )
      {
        if ( Scene->sceneName[0] )
        {
          Core_strcpy(dest, 0x20ui64, Scene->sceneName);
          CG_LoadCinematicCameraFile(dest, i);
        }
      }
    }
  }
}

/*
==============
CG_CinematicCameraParseComError
==============
*/
void CG_CinematicCameraParseComError(ComErrorCode uniqueErrorCode, const char *msg, ...)
{
  int CurrentParseLine; 
  char dest[512]; 
  va_list va; 

  va_start(va, msg);
  Com_vsprintf(dest, 0x200ui64, msg, va);
  CurrentParseLine = Com_GetCurrentParseLine();
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144276470, (unsigned int)uniqueErrorCode, dest, CurrentParseLine);
}

/*
==============
CG_CinematicCameraSetDof
==============
*/
void CG_CinematicCameraSetDof(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1716, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA )") )
    __debugbreak();
  v1 = DCONST_DVARBOOL_cg_cinematicCameraDofEnabled;
  if ( !DCONST_DVARBOOL_cg_cinematicCameraDofEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraDofEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
    Com_PrintError(1, "CG_CinematicCameraSetDof: Physical depth of field not implemented for cinematic cameras.\n");
}

/*
==============
CG_CinematicCameraShouldRenderCharacter
==============
*/
_BOOL8 CG_CinematicCameraShouldRenderCharacter(LocalClientNum_t localClientNum, int entityId)
{
  CameraSceneData *SceneData; 
  CinematicCameraScene *currentCameraScene; 
  __int64 currentCutIndex; 
  __int64 v8; 
  __int64 v9; 

  if ( !CG_IsCinematicCameraActive(localClientNum) )
    return 1i64;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1852, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA )") )
    __debugbreak();
  SceneData = CG_CinematicCamera_GetSceneData(localClientNum);
  currentCameraScene = SceneData->currentCameraScene;
  if ( !SceneData->currentCameraScene && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1857, ASSERT_TYPE_ASSERT, "(scene)", (const char *)&queryFormat, "scene") )
    __debugbreak();
  if ( currentCameraScene->numCameraCuts >= 8u )
  {
    LODWORD(v8) = currentCameraScene->numCameraCuts;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1858, ASSERT_TYPE_ASSERT, "(unsigned)( scene->numCameraCuts ) < (unsigned)( 8 )", "scene->numCameraCuts doesn't index MAX_SCENE_CUTS\n\t%i not in [0, %i)", v8, 8) )
      __debugbreak();
  }
  if ( SceneData->currentCutIndex >= (unsigned int)currentCameraScene->numCameraCuts )
  {
    LODWORD(v9) = currentCameraScene->numCameraCuts;
    LODWORD(v8) = SceneData->currentCutIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1859, ASSERT_TYPE_ASSERT, "(unsigned)( sceneData->currentCutIndex ) < (unsigned)( scene->numCameraCuts )", "sceneData->currentCutIndex doesn't index scene->numCameraCuts\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  currentCutIndex = SceneData->currentCutIndex;
  if ( currentCameraScene->cameraCuts[currentCutIndex].hideLeadActor && SceneData->leadingActorId == entityId )
    return 0i64;
  return !currentCameraScene->cameraCuts[currentCutIndex].hideSupportActor || SceneData->supportingActorId != entityId;
}

/*
==============
CG_CinematicCamera_AllocateClientMemory
==============
*/
void CG_CinematicCamera_AllocateClientMemory(HunkUser *hunkUser, const unsigned int maxLocalClients)
{
  __int64 v3; 

  v3 = maxLocalClients;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 80, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA )") )
    __debugbreak();
  if ( s_sceneData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 82, ASSERT_TYPE_ASSERT, "(s_sceneData == 0)", (const char *)&queryFormat, "s_sceneData == NULL") )
    __debugbreak();
  if ( s_cameraScenes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 83, ASSERT_TYPE_ASSERT, "(s_cameraScenes == 0)", (const char *)&queryFormat, "s_cameraScenes == NULL") )
    __debugbreak();
  s_sceneData = (CameraSceneData *)Mem_HunkUser_AllocInternal(hunkUser, 160 * v3, 8ui64, "CG_CinematicCamera_AllocateClientMemory");
  s_cameraScenes = (CinematicCameraScene *)Mem_HunkUser_AllocInternal(hunkUser, 0xB78ui64, 4ui64, "CG_CinematicCamera_AllocateClientMemory");
  memset_0(s_cameraScenes, 0, 0xB78ui64);
}

/*
==============
CG_CinematicCamera_FreeClientMemory
==============
*/
void CG_CinematicCamera_FreeClientMemory(void)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 101, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA )") )
    __debugbreak();
  s_sceneData = NULL;
  s_cameraScenes = NULL;
}

/*
==============
CG_CinematicCamera_GetScene
==============
*/
CinematicCameraScene *CG_CinematicCamera_GetScene(const int sceneIndex)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 

  v1 = sceneIndex;
  if ( !s_cameraScenes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 118, ASSERT_TYPE_ASSERT, "(s_cameraScenes)", (const char *)&queryFormat, "s_cameraScenes") )
    __debugbreak();
  if ( (unsigned int)v1 >= 2 )
  {
    v4 = 2;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 119, ASSERT_TYPE_ASSERT, "(unsigned)( sceneIndex ) < (unsigned)( 2 )", "sceneIndex doesn't index MAX_CINEMATIC_SCENES\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return &s_cameraScenes[v1];
}

/*
==============
CG_CinematicCamera_GetSceneData
==============
*/
CameraSceneData *CG_CinematicCamera_GetSceneData(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 

  v1 = localClientNum;
  if ( !s_sceneData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 110, ASSERT_TYPE_ASSERT, "(s_sceneData)", (const char *)&queryFormat, "s_sceneData") )
    __debugbreak();
  if ( (unsigned int)v1 >= cg_maxLocalClients )
  {
    v4 = cg_maxLocalClients;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_maxLocalClients )", "localClientNum doesn't index cg_maxLocalClients\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return &s_sceneData[v1];
}

/*
==============
CG_CinematicCamera_Init
==============
*/
void CG_CinematicCamera_Init(const LocalClientNum_t localClientNum)
{
  CameraSceneData *SceneData; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 125, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA )") )
    __debugbreak();
  SceneData = CG_CinematicCamera_GetSceneData(localClientNum);
  memset_0(SceneData, 0, sizeof(CameraSceneData));
}

/*
==============
CG_ClearCutData
==============
*/
void CG_ClearCutData(CameraCutData *cutData)
{
  if ( !cutData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 224, ASSERT_TYPE_ASSERT, "(cutData)", (const char *)&queryFormat, "cutData") )
    __debugbreak();
  *(_QWORD *)cutData->startPosition.v = 0i64;
  *(_QWORD *)&cutData->startPosition.z = 0i64;
  *(_QWORD *)&cutData->endPosition.y = 0i64;
  *(_QWORD *)cutData->angles.v = 0i64;
  *(_QWORD *)&cutData->angles.z = 0i64;
  cutData->startTime = 0;
  cutData->heightOffset = 0.0;
  cutData->idealPitch = 360.0;
  *(_WORD *)&cutData->useCurrentAsStartPosition = 0;
}

/*
==============
CG_DevCinematicCameraRunScene_f
==============
*/
void CG_DevCinematicCameraRunScene_f(void)
{
  const dvar_t *v0; 
  int v1; 
  const char *v2; 
  int v3; 
  LocalClientNum_t v4; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_OFFHAND_END) )
  {
    v0 = DCONST_DVARBOOL_cg_cinematicCameraEnabled;
    if ( !DCONST_DVARBOOL_cg_cinematicCameraEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    if ( v0->current.enabled )
    {
      if ( Cmd_Argc() >= 2 )
      {
        v1 = 2047;
        v2 = Cmd_Argv(1);
        v3 = 2047;
        if ( Cmd_Argc() > 2 )
        {
          v1 = Cmd_ArgInt(2);
          if ( Cmd_Argc() > 3 )
            v3 = Cmd_ArgInt(3);
        }
        v4 = Cmd_LocalClientNum();
        CG_PlayCinematicCamera(v4, v2, v1, v3);
      }
      else
      {
        Com_Printf(0, "USAGE: cg_devCinematicCameraRunScene <scene_name> <optional: leading actor> <optional: supporting actor>\n");
      }
    }
    else
    {
      Com_Printf(0, "cg_devCinematicCameraRunScene requires dvar 'cg_cinematicCameraEnabled' to be enabled.\n");
    }
  }
}

/*
==============
CG_DrawDebugCinematicCamera
==============
*/
void CG_DrawDebugCinematicCamera(LocalClientNum_t localClientNum)
{
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int64 v4; 
  const dvar_t *v5; 
  cg_t *LocalClientGlobals; 
  CameraSceneData *SceneData; 
  CinematicCameraScene *currentCameraScene; 
  __int64 currentCutIndex; 
  float v10; 
  __int64 v11; 
  float time; 
  float v13; 
  float v14; 
  float v15; 
  int startTime; 
  float v17; 
  float v18; 
  int supportingActorId; 
  int leadingActorId; 
  int v21; 
  int numCameraCuts; 
  double SceneElapsedTime; 
  bool v24; 
  const ScreenPlacement *v25; 
  GfxFont *FontHandle; 
  __int64 y; 
  __int64 horzAlign; 
  char dest[2048]; 
  __int128 v30; 
  __int128 v31; 
  __int128 v32; 

  v4 = localClientNum;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_OFFHAND_END) )
  {
    v5 = DCONST_DVARBOOL_cg_cinematicCameraDebug;
    if ( !DCONST_DVARBOOL_cg_cinematicCameraDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
    {
      if ( CG_IsCinematicCameraActive((LocalClientNum_t)v4) )
      {
        v32 = v1;
        v31 = v2;
        v30 = v3;
        LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
        SceneData = CG_CinematicCamera_GetSceneData((const LocalClientNum_t)v4);
        currentCameraScene = SceneData->currentCameraScene;
        if ( !SceneData->currentCameraScene && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 3054, ASSERT_TYPE_ASSERT, "(scene)", (const char *)&queryFormat, "scene") )
          __debugbreak();
        if ( currentCameraScene->numCameraCuts >= 8u )
        {
          LODWORD(horzAlign) = 8;
          LODWORD(y) = currentCameraScene->numCameraCuts;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 3056, ASSERT_TYPE_ASSERT, "(unsigned)( scene->numCameraCuts ) < (unsigned)( 8 )", "scene->numCameraCuts doesn't index MAX_SCENE_CUTS\n\t%i not in [0, %i)", y, horzAlign) )
            __debugbreak();
        }
        currentCutIndex = SceneData->currentCutIndex;
        v10 = 0.0;
        v11 = currentCutIndex;
        time = currentCameraScene->cameraCuts[currentCutIndex].time;
        if ( time > 0.0 )
        {
          v13 = (float)((float)(LocalClientGlobals->time - SceneData->currentCutData.startTime) * 0.001) / time;
          I_fclamp(v13, 0.0, 1.0);
          v10 = v13;
        }
        v14 = FLOAT_N1_0;
        v15 = FLOAT_N1_0;
        if ( !CG_IsRunningLastSceneCut(SceneData) )
        {
          startTime = SceneData->nextCutData.startTime;
          if ( (float)startTime >= 0.0 )
          {
            v15 = 0.0;
            v14 = currentCameraScene->cameraCuts[SceneData->currentCutIndex + 1].time;
            if ( v14 > 0.0 )
            {
              v17 = (float)((float)(LocalClientGlobals->time - startTime) * 0.001) / v14;
              I_fclamp(v17, 0.0, 1.0);
              v15 = v17;
            }
          }
        }
        v18 = currentCameraScene->cameraCuts[v11].time;
        supportingActorId = SceneData->supportingActorId;
        leadingActorId = SceneData->leadingActorId;
        v21 = SceneData->currentCutIndex;
        numCameraCuts = currentCameraScene->numCameraCuts;
        SceneElapsedTime = CG_GetSceneElapsedTime((LocalClientNum_t)v4);
        LODWORD(horzAlign) = v21;
        LODWORD(y) = numCameraCuts;
        Com_sprintf(dest, 0x800ui64, "^7Scene name: ^5%s\n^7Scene time: ^5%g\n^7Num Cuts: ^5%d\n^7Cut Index: ^5%d\n^7Cut Time: ^5%g, %.3g\n^7Next cut time: ^5%g, %.3g\n^7Actors: ^5%d, %d\n", currentCameraScene->sceneName, SceneElapsedTime, y, horzAlign, v18, v10, v14, v15, leadingActorId, supportingActorId);
      }
      else
      {
        Com_sprintf(dest, 0x800ui64, "^7Scene name: ^5<not active>");
      }
      if ( activeScreenPlacementMode )
      {
        if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
        {
          v25 = &scrPlaceViewDisplay[v4];
          goto LABEL_28;
        }
        if ( activeScreenPlacementMode == SCRMODE_INVALID )
          v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
        else
          v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
        if ( v24 )
          __debugbreak();
      }
      v25 = &scrPlaceFull;
LABEL_28:
      FontHandle = UI_GetFontHandle(v25, 6, 0.25);
      UI_DrawText(v25, dest, 2048, FontHandle, 0.0, 20.0, 1, 1, 0.25, &colorWhite, 3);
    }
  }
}

/*
==============
CG_GetCameraPositionAngles
==============
*/
int CG_GetCameraPositionAngles(LocalClientNum_t localClientNum, const CinematicCameraSettings *camSettings, CameraCutData *cutData, const float percentTime, vec3_t *outPosition, vec3_t *outAngles)
{
  vec3_t *v10; 

  if ( !camSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1424, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  if ( !cutData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1425, ASSERT_TYPE_ASSERT, "(cutData)", (const char *)&queryFormat, "cutData") )
    __debugbreak();
  switch ( camSettings->cameraMovementType )
  {
    case 1u:
      return CG_UpdateCinematicCameraFixed(localClientNum, camSettings, cutData, percentTime, outPosition, outAngles);
    case 2u:
      return CG_UpdateCinematicCameraPan(localClientNum, camSettings, cutData, percentTime, outPosition, outAngles);
    case 3u:
      return CG_UpdateCinematicCameraRotate(localClientNum, camSettings, cutData, percentTime, outPosition, outAngles);
    case 4u:
      return CG_UpdateCinematicCameraZoom(localClientNum, camSettings, cutData, percentTime, outPosition, outAngles);
  }
  LODWORD(v10) = camSettings->cameraMovementType;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1442, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_UpdateCinematicCamera: unknown camera type index %d", v10) )
    __debugbreak();
  return 1;
}

/*
==============
CG_GetSceneElapsedTime
==============
*/
float CG_GetSceneElapsedTime(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return (float)(LocalClientGlobals->time - CG_CinematicCamera_GetSceneData(localClientNum)->sceneStartTime) * 0.001;
}

/*
==============
CG_InitCameraCutData
==============
*/
void CG_InitCameraCutData(LocalClientNum_t localClientNum, const CinematicCameraSettings *camSettings, CameraCutData *cutData)
{
  __int64 v6; 

  if ( !camSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1522, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  if ( !cutData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1523, ASSERT_TYPE_ASSERT, "(cutData)", (const char *)&queryFormat, "cutData") )
    __debugbreak();
  cutData->startTime = CG_GetLocalClientGlobals(localClientNum)->time;
  if ( camSettings->cameraMovementType != 1 && camSettings->cameraMovementType != 2 )
  {
    if ( camSettings->cameraMovementType == 3 )
    {
      CG_InitCameraCutDataRotate(localClientNum, camSettings, cutData);
    }
    else if ( camSettings->cameraMovementType != 4 )
    {
      LODWORD(v6) = camSettings->cameraMovementType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1546, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_InitCameraCutData: unknown camera type index %d", v6) )
        __debugbreak();
    }
  }
}

/*
==============
CG_InitCameraCutDataRotate
==============
*/
void CG_InitCameraCutDataRotate(LocalClientNum_t localClientNum, const CinematicCameraSettings *camSettings, CameraCutData *cutData)
{
  int cameraAnglesType; 
  int v7; 
  int v8; 
  int v9; 
  bool focusOnSupportingActor; 
  int IsCinematicCameraActive; 
  unsigned int supportingActorId; 
  const centity_t *EntityOffsetPosition; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  __int128 angles; 
  vec3_t outPosition; 
  vec3_t forward; 
  vec3_t vec; 

  if ( !camSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1467, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  if ( !cutData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1468, ASSERT_TYPE_ASSERT, "(cutData)", (const char *)&queryFormat, "cutData") )
    __debugbreak();
  LODWORD(cutData->angles.v[0]) = camSettings->panningCamera.targetPan.startEntityPosition.optionalTagName;
  cutData->angles.v[1] = camSettings->fixedCamera.worldPosition.v[1];
  cutData->angles.v[2] = camSettings->fixedCamera.worldPosition.v[2];
  cameraAnglesType = camSettings->cameraAnglesType;
  *(float *)&angles = 0.0;
  *((float *)&angles + 1) = 0.0;
  *((float *)&angles + 2) = 0.0;
  v7 = cameraAnglesType - 1;
  if ( !v7 )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144275E60, 1223i64);
    return;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v14 = camSettings->fixedCamera.fixedAngles.v[1];
    LODWORD(outPosition.v[0]) = camSettings->fixedCamera.linkedFocusTarget.optionalTagName;
    outPosition.v[2] = camSettings->fixedCamera.fixedAngles.v[2];
    outPosition.v[1] = v14;
    goto LABEL_27;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    focusOnSupportingActor = camSettings->rotatingCamera.focusOnSupportingActor;
    IsCinematicCameraActive = CG_IsCinematicCameraActive(localClientNum);
    if ( focusOnSupportingActor )
    {
      if ( !IsCinematicCameraActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 872, ASSERT_TYPE_ASSERT, "(CG_IsCinematicCameraActive( localClientNum ))", (const char *)&queryFormat, "CG_IsCinematicCameraActive( localClientNum )", angles) )
        __debugbreak();
      supportingActorId = CG_CinematicCamera_GetSceneData(localClientNum)->supportingActorId;
    }
    else
    {
      if ( !IsCinematicCameraActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 872, ASSERT_TYPE_ASSERT, "(CG_IsCinematicCameraActive( localClientNum ))", (const char *)&queryFormat, "CG_IsCinematicCameraActive( localClientNum )", angles) )
        __debugbreak();
      supportingActorId = CG_CinematicCamera_GetSceneData(localClientNum)->leadingActorId;
    }
    EntityOffsetPosition = CG_CinematicCameraGetEntityOffsetPosition(localClientNum, supportingActorId, (const EntityPositionOffset *)camSettings, &outPosition);
    if ( !EntityOffsetPosition )
    {
      Com_Printf(0, "<rotate> camera (transition) does not have valid entity id %d\n", supportingActorId);
      return;
    }
    if ( !camSettings->rotatingCamera.worldDeltaAngles )
    {
      *(_QWORD *)&angles = *(_QWORD *)EntityOffsetPosition->pose.angles.v;
      DWORD2(angles) = LODWORD(EntityOffsetPosition->pose.angles.v[2]);
    }
    goto LABEL_27;
  }
  if ( v9 != 1 )
  {
LABEL_27:
    CG_CameraRotateUpdateAngles((const RotatingCamera *)camSettings, 0.0, camSettings->time, 0.0, cutData, (vec3_t *)&angles);
    v15 = camSettings->panningCamera.fixedPan.endWorldPosition.v[0];
    AngleVectors((const vec3_t *)&angles, &forward, NULL, NULL);
    LODWORD(v16) = LODWORD(v15) ^ _xmm;
    v17 = (float)(COERCE_FLOAT(LODWORD(v15) ^ _xmm) * forward.v[0]) + outPosition.v[0];
    v18 = (float)(v16 * forward.v[1]) + outPosition.v[1];
    v19 = (float)(v16 * forward.v[2]) + outPosition.v[2];
    vec.v[0] = outPosition.v[0] - v17;
    v20 = outPosition.v[1] - v18;
    vec.v[2] = outPosition.v[2] - v19;
    cutData->endPosition.v[0] = v17;
    cutData->endPosition.v[1] = v18;
    cutData->endPosition.v[2] = v19;
    vec.v[1] = v20;
    vectoangles(&vec, (vec3_t *)&angles);
    return;
  }
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144275EF0, 1224i64);
}

/*
==============
CG_IsCinematicCameraActive
==============
*/
_BOOL8 CG_IsCinematicCameraActive(LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_OFFHAND_END) )
    return 0i64;
  v2 = DCONST_DVARBOOL_cg_cinematicCameraEnabled;
  if ( !DCONST_DVARBOOL_cg_cinematicCameraEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return v2->current.enabled && CG_CinematicCamera_GetSceneData(localClientNum)->currentCameraScene != NULL;
}

/*
==============
CG_IsRunningLastSceneCut
==============
*/
_BOOL8 CG_IsRunningLastSceneCut(const CameraSceneData *sceneData)
{
  if ( !sceneData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1556, ASSERT_TYPE_ASSERT, "(sceneData)", (const char *)&queryFormat, "sceneData") )
    __debugbreak();
  return !sceneData->currentCameraScene || sceneData->currentCutIndex + 1 >= sceneData->currentCameraScene->numCameraCuts;
}

/*
==============
CG_LoadCinematicCameraFile
==============
*/
void CG_LoadCinematicCameraFile(const char *fileName, const int sceneSlotIndex)
{
  char *m_ptr; 
  const dvar_t *v6; 
  CinematicCameraScene *Scene; 
  char *RawTextFile; 
  int v9; 
  int v10; 
  const char *i; 
  __int64 v12; 
  const char *v13; 
  int v14; 
  int v15; 
  int v17; 
  int v18; 
  const char *v19; 
  int v20; 
  __int64 v21; 
  unsigned __int64 v22; 
  const char *v23; 
  int v24; 
  int v25; 
  int v27; 
  int v28; 
  int v29; 
  CinematicCameraScene *v30; 
  __int64 v31; 
  const char *v32; 
  int v33; 
  int v34; 
  int v36; 
  int v37; 
  const char *v38; 
  const char *v40; 
  const char *v41; 
  __int64 v42; 
  const char *v43; 
  int v44; 
  int v45; 
  int v47; 
  int v48; 
  __int64 numCameraCuts; 
  int v50; 
  unsigned __int64 v51; 
  const char *v52; 
  char *fmt; 
  __int64 v54; 
  __int64 v55; 
  char *data_p; 
  int currentVisionIndex; 
  int currentSoundIndex; 
  int currentFovIndex; 
  int sceneIndex; 
  CinematicCameraSettings *camSettings; 
  __int64 v62; 
  Mem_LargeLocal v63; 
  char token[64]; 
  char dest[64]; 

  v62 = -2i64;
  sceneIndex = sceneSlotIndex;
  Mem_LargeLocal::Mem_LargeLocal(&v63, 0x1000ui64, "max_camera_scenes_file_buf buf");
  m_ptr = (char *)v63.m_ptr;
  v6 = DCONST_DVARBOOL_cg_cinematicCameraEnabled;
  if ( !DCONST_DVARBOOL_cg_cinematicCameraEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    Scene = CG_CinematicCamera_GetScene(sceneSlotIndex);
    if ( Scene == (CinematicCameraScene *)fileName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2811, ASSERT_TYPE_ASSERT, "(scene->sceneName != fileName)", (const char *)&queryFormat, "scene->sceneName != fileName") )
      __debugbreak();
    memset_0(Scene, 0, sizeof(CinematicCameraScene));
    if ( !fileName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2815, ASSERT_TYPE_ASSERT, "(fileName)", (const char *)&queryFormat, "fileName") )
      __debugbreak();
    if ( !*fileName )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2816, ASSERT_TYPE_ASSERT, "(fileName[0])", (const char *)&queryFormat, "fileName[0]") )
        __debugbreak();
      if ( !*fileName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2817, ASSERT_TYPE_ASSERT, "(fileName[0] != '\\0')", (const char *)&queryFormat, "fileName[0] != '\\0'") )
        __debugbreak();
    }
    Com_sprintf(dest, 0x40ui64, "%s%s%s", "mp/cinematic_camera/", fileName, ".txt");
    RawTextFile = (char *)Com_LoadRawTextFile(dest, m_ptr, 4096);
    if ( !RawTextFile )
      CG_CinematicCameraParseComError(COM_ERR_5378, "Couldn't load cinematic camera scene: %s", fileName);
    v9 = -1;
    v10 = -1;
    currentVisionIndex = -1;
    currentSoundIndex = -1;
    currentFovIndex = -1;
    camSettings = Scene->cameraCuts;
    if ( !Scene && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2707, ASSERT_TYPE_ASSERT, "(scene)", (const char *)&queryFormat, "scene") )
      __debugbreak();
    Scene->visionSetSettings[0].visionName[0] = 0;
    Scene->visionSetSettings[0].startTime = -1.0;
    Scene->visionSetSettings[0].duration = 0;
    Scene->visionSetSettings[1].visionName[0] = 0;
    Scene->visionSetSettings[1].startTime = -1.0;
    Scene->visionSetSettings[1].duration = 0;
    Scene->visionSetSettings[2].visionName[0] = 0;
    Scene->visionSetSettings[2].startTime = -1.0;
    Scene->visionSetSettings[2].duration = 0;
    Scene->visionSetSettings[3].visionName[0] = 0;
    Scene->visionSetSettings[3].startTime = -1.0;
    Scene->visionSetSettings[3].duration = 0;
    Scene->soundSettings[0].name[0] = 0;
    Scene->soundSettings[0].startTime = -1.0;
    Scene->soundSettings[0].zoneFadeDuration = 0;
    Scene->soundSettings[0].nameIsAudioZone = 0;
    Scene->soundSettings[1].name[0] = 0;
    Scene->soundSettings[1].startTime = -1.0;
    Scene->soundSettings[1].zoneFadeDuration = 0;
    Scene->soundSettings[1].nameIsAudioZone = 0;
    Scene->soundSettings[2].name[0] = 0;
    Scene->soundSettings[2].startTime = -1.0;
    Scene->soundSettings[2].zoneFadeDuration = 0;
    Scene->soundSettings[2].nameIsAudioZone = 0;
    Scene->soundSettings[3].name[0] = 0;
    Scene->soundSettings[3].startTime = -1.0;
    Scene->soundSettings[3].zoneFadeDuration = 0;
    Scene->soundSettings[3].nameIsAudioZone = 0;
    Scene->soundSettings[4].name[0] = 0;
    Scene->soundSettings[4].startTime = -1.0;
    Scene->soundSettings[4].zoneFadeDuration = 0;
    Scene->soundSettings[4].nameIsAudioZone = 0;
    Scene->soundSettings[5].name[0] = 0;
    Scene->soundSettings[5].startTime = -1.0;
    Scene->soundSettings[5].zoneFadeDuration = 0;
    Scene->soundSettings[5].nameIsAudioZone = 0;
    Scene->fovSettings[0].startTime = -1.0;
    Scene->fovSettings[0].durationBlend = 0;
    Scene->fovSettings[0].fov = -1.0;
    Scene->fovSettings[1].startTime = -1.0;
    Scene->fovSettings[1].durationBlend = 0;
    Scene->fovSettings[1].fov = -1.0;
    Scene->fovSettings[2].startTime = -1.0;
    Scene->fovSettings[2].durationBlend = 0;
    Scene->fovSettings[2].fov = -1.0;
    Scene->fovSettings[3].startTime = -1.0;
    Scene->fovSettings[3].durationBlend = 0;
    Scene->fovSettings[3].fov = -1.0;
    Scene->numCameraCuts = 0;
    Core_strcpy(Scene->sceneName, 0x20ui64, fileName);
    data_p = RawTextFile;
    Com_BeginParseSession("CG_LoadCinematicCameraFile");
    for ( i = Com_Parse((const char **)&data_p); i; i = Com_Parse((const char **)&data_p) )
    {
      if ( !*i )
        break;
      v12 = 0x7FFFFFFFi64;
      v13 = "<version>";
      do
      {
        v14 = (unsigned __int8)v13[i - "<version>"];
        v15 = *(unsigned __int8 *)v13++;
        if ( !v12-- )
          break;
        if ( v14 != v15 )
        {
          v17 = v14 + 32;
          if ( (unsigned int)(v14 - 65) > 0x19 )
            v17 = v14;
          v14 = v17;
          v18 = v15 + 32;
          if ( (unsigned int)(v15 - 65) > 0x19 )
            v18 = v15;
          if ( v14 != v18 )
          {
            if ( v9 == -1 )
              CG_CinematicCameraParseComError(COM_ERR_5380, "Scene %s: <version> must be first parameter.", Scene->sceneName);
            v21 = tls_index;
            if ( dword_150E23A04 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
            {
              j__Init_thread_header(&dword_150E23A04);
              if ( dword_150E23A04 == -1 )
              {
                slowmo_prefix = 7i64;
                j__Init_thread_footer(&dword_150E23A04);
              }
            }
            v22 = slowmo_prefix;
            v23 = "<slowmo";
            while ( 1 )
            {
              v24 = (unsigned __int8)v23[i - "<slowmo"];
              v25 = *(unsigned __int8 *)v23++;
              if ( !v22-- )
              {
LABEL_51:
                CG_CinematicCameraParseComError(COM_ERR_5381, "Scene %s: <slowmo> has been deprecated", Scene->sceneName);
                goto LABEL_52;
              }
              if ( v24 != v25 )
              {
                v27 = v24 + 32;
                if ( (unsigned int)(v24 - 65) > 0x19 )
                  v27 = v24;
                v24 = v27;
                v28 = v25 + 32;
                if ( (unsigned int)(v25 - 65) > 0x19 )
                  v28 = v25;
                if ( v24 != v28 )
                  break;
              }
              if ( !v24 )
                goto LABEL_51;
            }
            if ( v9 < 3 )
            {
              v31 = 0x7FFFFFFFi64;
              v32 = "<vision>";
              do
              {
                v33 = (unsigned __int8)v32[i - "<vision>"];
                v34 = *(unsigned __int8 *)v32++;
                if ( !v31-- )
                  break;
                if ( v33 != v34 )
                {
                  v36 = v33 + 32;
                  if ( (unsigned int)(v33 - 65) > 0x19 )
                    v36 = v33;
                  v33 = v36;
                  v37 = v34 + 32;
                  if ( (unsigned int)(v34 - 65) > 0x19 )
                    v37 = v34;
                  if ( v33 != v37 )
                    goto LABEL_79;
                }
              }
              while ( v33 );
              if ( !data_p && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2555, ASSERT_TYPE_ASSERT, "(*text_pp)", (const char *)&queryFormat, "*text_pp") )
                __debugbreak();
              currentVisionIndex = ++v10;
              if ( v10 >= 4 )
                CG_CinematicCameraParseComError(COM_ERR_5369, "Scene %s: Exceeded max <vision> settings (%d)\n", Scene->sceneName, 4i64);
              v38 = Com_Parse((const char **)&data_p);
              *(double *)&_XMM0 = atof(v38);
              __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
              Scene->visionSetSettings[v10].startTime = *(float *)&_XMM1;
              v40 = Com_Parse((const char **)&data_p);
              Core_strcpy(Scene->visionSetSettings[v10].visionName, 0x40ui64, v40);
              v41 = Com_Parse((const char **)&data_p);
              Scene->visionSetSettings[v10].duration = atoi(v41);
            }
            else
            {
              if ( dword_150E23A14 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v21) + 1772i64) )
              {
                j__Init_thread_header(&dword_150E23A14);
                if ( dword_150E23A14 == -1 )
                {
                  vision_prefix = 7i64;
                  j__Init_thread_footer(&dword_150E23A14);
                }
              }
              if ( I_strnicmp(i, "<vision", vision_prefix) )
              {
LABEL_79:
                if ( dword_150E23A24 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v21) + 1772i64) )
                {
                  j__Init_thread_header(&dword_150E23A24);
                  if ( dword_150E23A24 == -1 )
                  {
                    dof_prefix = 4i64;
                    j__Init_thread_footer(&dword_150E23A24);
                  }
                }
                if ( I_strnicmp(i, "<dof", dof_prefix) )
                {
                  if ( dword_150E23A34 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v21) + 1772i64) )
                  {
                    j__Init_thread_header(&dword_150E23A34);
                    if ( dword_150E23A34 == -1 )
                    {
                      sound_prefix = 6i64;
                      j__Init_thread_footer(&dword_150E23A34);
                    }
                  }
                  if ( I_strnicmp(i, "<sound", sound_prefix) )
                  {
                    if ( dword_150E23A44 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v21) + 1772i64) )
                    {
                      j__Init_thread_header(&dword_150E23A44);
                      if ( dword_150E23A44 == -1 )
                      {
                        fov_prefix = 4i64;
                        j__Init_thread_footer(&dword_150E23A44);
                      }
                    }
                    if ( I_strnicmp(i, "<fov", fov_prefix) )
                    {
                      v42 = 0x7FFFFFFFi64;
                      v43 = "<cut>";
                      while ( 1 )
                      {
                        v44 = (unsigned __int8)v43[i - "<cut>"];
                        v45 = *(unsigned __int8 *)v43++;
                        if ( !v42-- )
                        {
LABEL_103:
                          numCameraCuts = Scene->numCameraCuts;
                          v50 = numCameraCuts;
                          if ( (int)numCameraCuts >= 8 )
                          {
                            CG_CinematicCameraParseComError(COM_ERR_5382, "Scene '%s': Exceeded max camera cuts: %d", Scene->sceneName, 8i64);
                            v50 = Scene->numCameraCuts;
                          }
                          camSettings = &Scene->cameraCuts[numCameraCuts];
                          Scene->numCameraCuts = v50 + 1;
                          memset_0(&Scene->cameraCuts[numCameraCuts], 0, sizeof(Scene->cameraCuts[numCameraCuts]));
                          Scene->cameraCuts[numCameraCuts].collision = 1;
                          goto LABEL_52;
                        }
                        if ( v44 != v45 )
                        {
                          v47 = v44 + 32;
                          if ( (unsigned int)(v44 - 65) > 0x19 )
                            v47 = v44;
                          v44 = v47;
                          v48 = v45 + 32;
                          if ( (unsigned int)(v45 - 65) > 0x19 )
                            v48 = v45;
                          if ( v44 != v48 )
                            break;
                        }
                        if ( !v44 )
                          goto LABEL_103;
                      }
                      v51 = -1i64;
                      do
                        ++v51;
                      while ( i[v51] );
                      if ( v51 >= 0x40 )
                      {
                        LODWORD(fmt) = 64;
                        CG_CinematicCameraParseComError(COM_ERR_5383, "Scene '%s': token '%s', exceeded max characters (%d)\n", Scene->sceneName, i, fmt);
                      }
                      Core_strcpy(token, 0x40ui64, i);
                      v52 = Com_Parse((const char **)&data_p);
                      if ( !CG_ParseCinematicCameraCutToken(token, v52, Scene->sceneName, v9, camSettings) )
                        CG_CinematicCameraParseComError(COM_ERR_5384, "Scene '%s': invalid token '%s'", Scene->sceneName, token);
                    }
                    else
                    {
                      CG_ParseFovSettings(Scene, &i[fov_prefix], (const char **)&data_p, &currentFovIndex);
                    }
                  }
                  else
                  {
                    CG_ParseSoundSettings(Scene, &i[sound_prefix], (const char **)&data_p, &currentSoundIndex);
                  }
                }
                else
                {
                  Com_PrintError(1, "CG_ParseDofSettings: Physical depth of field not implemented for cinematic cameras.\n");
                }
              }
              else
              {
                CG_ParseVisionSetSettings(Scene, &i[vision_prefix], (const char **)&data_p, &currentVisionIndex);
                v10 = currentVisionIndex;
              }
            }
            goto LABEL_52;
          }
        }
      }
      while ( v14 );
      if ( v9 != -1 )
        CG_CinematicCameraParseComError(COM_ERR_5379, "Scene %s: already parsed <version> as (%d)", Scene->sceneName, (unsigned int)v9);
      v19 = Com_Parse((const char **)&data_p);
      v20 = atoi(v19);
      v9 = v20;
      if ( v20 < 2 )
      {
        LODWORD(fmt) = 5;
        Com_PrintWarning(10, "%s: disregarding file version %d. must update file syntax to code version %d\n", fileName, (unsigned int)v20, fmt);
        goto LABEL_57;
      }
LABEL_52:
      ;
    }
    Com_EndParseSession();
    v29 = sceneIndex;
    if ( (unsigned int)sceneIndex >= 2 )
    {
      LODWORD(v55) = 2;
      LODWORD(v54) = sceneIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2766, ASSERT_TYPE_ASSERT, "(unsigned)( sceneSlotIndex ) < (unsigned)( 2 )", "sceneSlotIndex doesn't index MAX_CINEMATIC_SCENES\n\t%i not in [0, %i)", v54, v55) )
        __debugbreak();
    }
    v30 = CG_CinematicCamera_GetScene(v29);
    qsort(v30->visionSetSettings, 4ui64, 0x48ui64, (_CoreCrtNonSecureSearchSortCompareFunction)compare_setting_start_time_CinematicCameraVisionSetSettings_);
    qsort(v30->fovSettings, 4ui64, 0xCui64, (_CoreCrtNonSecureSearchSortCompareFunction)compare_setting_start_time_CinematicCameraFovSettings_);
    qsort(v30->soundSettings, 6ui64, 0x4Cui64, (_CoreCrtNonSecureSearchSortCompareFunction)compare_setting_start_time_CinematicCameraSoundSettings_);
  }
LABEL_57:
  Mem_LargeLocal::~Mem_LargeLocal(&v63);
}

/*
==============
CG_ParseAnglesToken
==============
*/
__int64 CG_ParseAnglesToken(const char *matchPrefix, const char *token, const char *tokenValue, vec3_t *outAngles)
{
  unsigned __int64 v9; 
  __int64 v10; 
  bool v11; 
  const char *v12; 
  __int64 v13; 
  const char *v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  int v18; 
  int v19; 
  const char *v22; 
  __int64 v23; 
  int v24; 
  __int64 v25; 
  int v26; 
  int v27; 
  int v28; 
  const char *v30; 
  signed __int64 v31; 
  int v32; 
  __int64 v33; 
  int v34; 
  int v35; 
  int v36; 

  if ( !matchPrefix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2011, ASSERT_TYPE_ASSERT, "(matchPrefix)", (const char *)&queryFormat, "matchPrefix") )
    __debugbreak();
  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2012, ASSERT_TYPE_ASSERT, "(token)", (const char *)&queryFormat, "token") )
    __debugbreak();
  if ( !tokenValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2013, ASSERT_TYPE_ASSERT, "(tokenValue)", (const char *)&queryFormat, "tokenValue") )
    __debugbreak();
  v9 = -1i64;
  do
    ++v9;
  while ( matchPrefix[v9] );
  if ( I_strnicmp(token, matchPrefix, v9) )
    return 0i64;
  v10 = 0x7FFFFFFFi64;
  v11 = &token[v9] == NULL;
  v12 = &token[v9];
  v13 = 0x7FFFFFFFi64;
  v14 = "_pitch>";
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v15 = (unsigned __int8)v14[v12 - "_pitch>"];
    v16 = v13;
    v17 = *(unsigned __int8 *)v14++;
    --v13;
    if ( !v16 )
    {
LABEL_24:
      *(double *)&_XMM0 = atof(tokenValue);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      outAngles->v[0] = *(float *)&_XMM1;
      return 1i64;
    }
    if ( v15 != v17 )
    {
      v18 = v15 + 32;
      if ( (unsigned int)(v15 - 65) > 0x19 )
        v18 = v15;
      v15 = v18;
      v19 = v17 + 32;
      if ( (unsigned int)(v17 - 65) > 0x19 )
        v19 = v17;
      if ( v15 != v19 )
        break;
    }
    if ( !v15 )
      goto LABEL_24;
  }
  v22 = "_yaw>";
  v23 = 0x7FFFFFFFi64;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v24 = (unsigned __int8)v22[v12 - "_yaw>"];
    v25 = v23;
    v26 = *(unsigned __int8 *)v22++;
    --v23;
    if ( !v25 )
    {
LABEL_36:
      *(double *)&_XMM0 = atof(tokenValue);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      outAngles->v[1] = *(float *)&_XMM1;
      return 1i64;
    }
    if ( v24 != v26 )
    {
      v27 = v24 + 32;
      if ( (unsigned int)(v24 - 65) > 0x19 )
        v27 = v24;
      v24 = v27;
      v28 = v26 + 32;
      if ( (unsigned int)(v26 - 65) > 0x19 )
        v28 = v26;
      if ( v24 != v28 )
        break;
    }
    if ( !v24 )
      goto LABEL_36;
  }
  v30 = "_roll>";
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v31 = v12 - "_roll>";
  do
  {
    v32 = (unsigned __int8)v30[v31];
    v33 = v10;
    v34 = *(unsigned __int8 *)v30++;
    --v10;
    if ( !v33 )
      break;
    if ( v32 != v34 )
    {
      v35 = v32 + 32;
      if ( (unsigned int)(v32 - 65) > 0x19 )
        v35 = v32;
      v32 = v35;
      v36 = v34 + 32;
      if ( (unsigned int)(v34 - 65) > 0x19 )
        v36 = v34;
      if ( v32 != v36 )
        return 0i64;
    }
  }
  while ( v32 );
  *(double *)&_XMM0 = atof(tokenValue);
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  outAngles->v[2] = *(float *)&_XMM1;
  return 1i64;
}

/*
==============
CG_ParseCinematicCameraCutToken
==============
*/
__int64 CG_ParseCinematicCameraCutToken(const char *token, const char *tokenValue, const char *sceneName, const int fileVersion, CinematicCameraSettings *camSettings)
{
  const char *v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  int v17; 
  unsigned int v18; 
  __int64 v19; 
  __int64 result; 
  const char *v21; 
  __int64 v22; 
  int v23; 
  __int64 v24; 
  int v25; 
  int v26; 
  int v27; 
  unsigned int v28; 
  __int64 v29; 
  const char *v30; 
  __int64 v31; 
  int v32; 
  __int64 v33; 
  int v34; 
  int v35; 
  int v36; 
  const char *v38; 
  __int64 v39; 
  int v40; 
  __int64 v41; 
  int v42; 
  int v43; 
  int v44; 
  double v46; 
  const char *v47; 
  __int64 v48; 
  int v49; 
  __int64 v50; 
  int v51; 
  int v52; 
  int v53; 
  const char *v54; 
  __int64 v55; 
  int v56; 
  __int64 v57; 
  int v58; 
  int v59; 
  int v60; 
  const char *v61; 
  __int64 v62; 
  int v63; 
  __int64 v64; 
  int v65; 
  int v66; 
  int v67; 
  const char *v68; 
  int v69; 
  __int64 v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  char *s0; 
  const char *v76; 
  const char *v77; 
  const char *v78; 
  const char *v79; 

  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2420, ASSERT_TYPE_ASSERT, "(token)", (const char *)&queryFormat, "token") )
    __debugbreak();
  if ( !tokenValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2421, ASSERT_TYPE_ASSERT, "(tokenValue)", (const char *)&queryFormat, "tokenValue") )
    __debugbreak();
  if ( !sceneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2422, ASSERT_TYPE_ASSERT, "(sceneName)", (const char *)&queryFormat, "sceneName") )
    __debugbreak();
  if ( !camSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2423, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  v10 = "<movement>";
  v11 = 0x7FFFFFFFi64;
  v12 = 0x7FFFFFFFi64;
  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v13 = (unsigned __int8)v10[token - "<movement>"];
    v14 = v12;
    v15 = *(unsigned __int8 *)v10++;
    --v12;
    if ( !v14 )
    {
LABEL_24:
      if ( camSettings->cameraMovementType )
        return 0i64;
      s0 = "none";
      v76 = "fixed";
      v77 = "pan";
      v78 = "rotate";
      v79 = "zoom";
      if ( !tokenValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1966, ASSERT_TYPE_ASSERT, "(stringMatch)", (const char *)&queryFormat, "stringMatch", s0, v76, v77, v78, v79) )
        __debugbreak();
      v18 = 0;
      v19 = 0i64;
      while ( I_strnicmp((&s0)[v19], tokenValue, 0x7FFFFFFFui64) )
      {
        ++v18;
        if ( ++v19 >= 5 )
          goto LABEL_31;
      }
      if ( v18 > 4 )
      {
LABEL_31:
        Com_Printf(0, "Cinematic Camera: <movement> %s not supported.\n", tokenValue);
        return 0i64;
      }
      camSettings->cameraMovementType = v18;
      return 1i64;
    }
    if ( v13 != v15 )
    {
      v16 = v13 + 32;
      if ( (unsigned int)(v13 - 65) > 0x19 )
        v16 = v13;
      v13 = v16;
      v17 = v15 + 32;
      if ( (unsigned int)(v15 - 65) > 0x19 )
        v17 = v15;
      if ( v13 != v17 )
        break;
    }
    if ( !v13 )
      goto LABEL_24;
  }
  v21 = "<orientation>";
  v22 = 0x7FFFFFFFi64;
  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v23 = (unsigned __int8)v21[token - "<orientation>"];
    v24 = v22;
    v25 = *(unsigned __int8 *)v21++;
    --v22;
    if ( !v24 )
      break;
    if ( v23 != v25 )
    {
      v26 = v23 + 32;
      if ( (unsigned int)(v23 - 65) > 0x19 )
        v26 = v23;
      v23 = v26;
      v27 = v25 + 32;
      if ( (unsigned int)(v25 - 65) > 0x19 )
        v27 = v25;
      if ( v23 != v27 )
      {
        if ( camSettings->cameraMovementType )
        {
          if ( camSettings->cameraAnglesType )
          {
            v30 = "<time>";
            v31 = 0x7FFFFFFFi64;
            if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            while ( 1 )
            {
              v32 = (unsigned __int8)v30[token - "<time>"];
              v33 = v31;
              v34 = *(unsigned __int8 *)v30++;
              --v31;
              if ( !v33 )
              {
LABEL_67:
                *(double *)&_XMM0 = atof(tokenValue);
                __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
                camSettings->time = *(float *)&_XMM1;
                return 1i64;
              }
              if ( v32 != v34 )
              {
                v35 = v32 + 32;
                if ( (unsigned int)(v32 - 65) > 0x19 )
                  v35 = v32;
                v32 = v35;
                v36 = v34 + 32;
                if ( (unsigned int)(v34 - 65) > 0x19 )
                  v36 = v34;
                if ( v32 != v36 )
                  break;
              }
              if ( !v32 )
                goto LABEL_67;
            }
            v38 = "<lerp>";
            v39 = 0x7FFFFFFFi64;
            if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            while ( 1 )
            {
              v40 = (unsigned __int8)v38[token - "<lerp>"];
              v41 = v39;
              v42 = *(unsigned __int8 *)v38++;
              --v39;
              if ( !v41 )
              {
LABEL_79:
                *(double *)&_XMM0 = atof(tokenValue);
                __asm { vcvtsd2ss xmm0, xmm0, xmm0 }
                camSettings->lerp = *(float *)&_XMM0;
                if ( *(float *)&_XMM0 < 0.0 || *(float *)&_XMM0 > 1.0 )
                {
                  Com_Printf(0, "Cinematic Camera: <lerp> %s, must be between 0 and 1\n", tokenValue);
                  *(float *)&_XMM0 = camSettings->lerp;
                }
                v46 = I_fclamp(*(float *)&_XMM0, 0.0, 1.0);
                result = 1i64;
                camSettings->lerp = *(float *)&v46;
                return result;
              }
              if ( v40 != v42 )
              {
                v43 = v40 + 32;
                if ( (unsigned int)(v40 - 65) > 0x19 )
                  v43 = v40;
                v40 = v43;
                v44 = v42 + 32;
                if ( (unsigned int)(v42 - 65) > 0x19 )
                  v44 = v42;
                if ( v40 != v44 )
                  break;
              }
              if ( !v40 )
                goto LABEL_79;
            }
            v47 = "<collision>";
            v48 = 0x7FFFFFFFi64;
            if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            while ( 1 )
            {
              v49 = (unsigned __int8)v47[token - "<collision>"];
              v50 = v48;
              v51 = *(unsigned __int8 *)v47++;
              --v48;
              if ( !v50 )
              {
LABEL_94:
                camSettings->collision = atoi(tokenValue) > 0;
                return 1i64;
              }
              if ( v49 != v51 )
              {
                v52 = v49 + 32;
                if ( (unsigned int)(v49 - 65) > 0x19 )
                  v52 = v49;
                v49 = v52;
                v53 = v51 + 32;
                if ( (unsigned int)(v51 - 65) > 0x19 )
                  v53 = v51;
                if ( v49 != v53 )
                  break;
              }
              if ( !v49 )
                goto LABEL_94;
            }
            v54 = "<start_pos_from_current>";
            v55 = 0x7FFFFFFFi64;
            if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            while ( 1 )
            {
              v56 = (unsigned __int8)v54[token - "<start_pos_from_current>"];
              v57 = v55;
              v58 = *(unsigned __int8 *)v54++;
              --v55;
              if ( !v57 )
              {
LABEL_106:
                camSettings->useCurrentAsStartPosition = atoi(tokenValue) > 0;
                return 1i64;
              }
              if ( v56 != v58 )
              {
                v59 = v56 + 32;
                if ( (unsigned int)(v56 - 65) > 0x19 )
                  v59 = v56;
                v56 = v59;
                v60 = v58 + 32;
                if ( (unsigned int)(v58 - 65) > 0x19 )
                  v60 = v58;
                if ( v56 != v60 )
                  break;
              }
              if ( !v56 )
                goto LABEL_106;
            }
            v61 = "<hide_lead_actor>";
            v62 = 0x7FFFFFFFi64;
            if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            while ( 1 )
            {
              v63 = (unsigned __int8)v61[token - "<hide_lead_actor>"];
              v64 = v62;
              v65 = *(unsigned __int8 *)v61++;
              --v62;
              if ( !v64 )
              {
LABEL_118:
                camSettings->hideLeadActor = atoi(tokenValue) > 0;
                return 1i64;
              }
              if ( v63 != v65 )
              {
                v66 = v63 + 32;
                if ( (unsigned int)(v63 - 65) > 0x19 )
                  v66 = v63;
                v63 = v66;
                v67 = v65 + 32;
                if ( (unsigned int)(v65 - 65) > 0x19 )
                  v67 = v65;
                if ( v63 != v67 )
                  break;
              }
              if ( !v63 )
                goto LABEL_118;
            }
            v68 = "<hide_support_actor>";
            if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            while ( 1 )
            {
              v69 = (unsigned __int8)v68[token - "<hide_support_actor>"];
              v70 = v11;
              v71 = *(unsigned __int8 *)v68++;
              --v11;
              if ( !v70 )
              {
LABEL_130:
                camSettings->hideSupportActor = atoi(tokenValue) > 0;
                return 1i64;
              }
              if ( v69 != v71 )
              {
                v72 = v69 + 32;
                if ( (unsigned int)(v69 - 65) > 0x19 )
                  v72 = v69;
                v69 = v72;
                v73 = v71 + 32;
                if ( (unsigned int)(v71 - 65) > 0x19 )
                  v73 = v71;
                if ( v69 != v73 )
                  break;
              }
              if ( !v69 )
                goto LABEL_130;
            }
            switch ( camSettings->cameraMovementType )
            {
              case 1u:
                v74 = CG_ParseFixedCameraToken(token, tokenValue, fileVersion, camSettings);
                break;
              case 2u:
                v74 = CG_ParsePanCameraToken(token, tokenValue, fileVersion, camSettings);
                break;
              case 3u:
                v74 = CG_ParseRotateCameraToken(token, tokenValue, fileVersion, camSettings);
                break;
              case 4u:
                v74 = CG_ParseZoomCameraToken(token, tokenValue, fileVersion, camSettings);
                break;
              default:
                CG_CinematicCameraParseComError(COM_ERR_5368, "CG_ParseCinematicCameraCutToken: unknown camera movement index %d\n", camSettings->cameraMovementType);
                return 0i64;
            }
            if ( v74 )
              return 1i64;
          }
          else
          {
            Com_Printf(0, "Cinematic Camera: <orientation> must be set before setting token %s.\n", token);
          }
        }
        else
        {
          Com_Printf(0, "Cinematic Camera: <movement> must be set before setting token %s.\n", token);
        }
        return 0i64;
      }
    }
  }
  while ( v23 );
  if ( camSettings->cameraAnglesType )
    return 0i64;
  s0 = "none";
  v76 = "fixed";
  v77 = "position";
  v78 = "target";
  v79 = "attached";
  if ( !tokenValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1966, ASSERT_TYPE_ASSERT, "(stringMatch)", (const char *)&queryFormat, "stringMatch", s0, v76, v77, v78, v79) )
    __debugbreak();
  v28 = 0;
  v29 = 0i64;
  while ( I_strnicmp((&s0)[v29], tokenValue, 0x7FFFFFFFui64) )
  {
    ++v28;
    if ( ++v29 >= 5 )
      goto LABEL_51;
  }
  if ( v28 > 4 )
  {
LABEL_51:
    Com_Printf(0, "Cinematic Camera: <orientation> %s not supported.\n", tokenValue);
    return 0i64;
  }
  camSettings->cameraAnglesType = v28;
  return 1i64;
}

/*
==============
CG_ParseFixedCameraToken
==============
*/
__int64 CG_ParseFixedCameraToken(const char *token, const char *tokenValue, const int fileVersion, CinematicCameraSettings *camSettings)
{
  __int64 result; 
  int v8; 
  const char *v9; 
  __int64 v10; 
  signed __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  bool v18; 
  bool v19; 

  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2129, ASSERT_TYPE_ASSERT, "(token)", (const char *)&queryFormat, "token") )
    __debugbreak();
  if ( !tokenValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2130, ASSERT_TYPE_ASSERT, "(tokenValue)", (const char *)&queryFormat, "tokenValue") )
    __debugbreak();
  if ( !camSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2131, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  if ( camSettings->cameraAnglesType == 1 )
  {
    if ( (unsigned int)CG_ParseAnglesToken("<angles", token, tokenValue, &camSettings->fixedCamera.fixedAngles) )
      return 1i64;
  }
  else
  {
    if ( camSettings->cameraAnglesType == 2 )
    {
      v8 = CG_ParsePositionToken("<aim", token, tokenValue, &camSettings->fixedCamera.fixedAngles);
    }
    else
    {
      if ( camSettings->cameraAnglesType != 3 && camSettings->cameraAnglesType != 4 )
      {
        CG_CinematicCameraParseComError(COM_ERR_5364, "CG_ParseFixedCameraToken: unknown camera orientation index %d\n", camSettings->cameraAnglesType);
        return 0i64;
      }
      v8 = CG_ParseLinkedEntityToken("<tag", token, tokenValue, (EntityPositionOffset *)camSettings);
    }
    if ( v8 )
      return 1i64;
  }
  if ( CG_ParsePositionToken("<position", token, tokenValue, &camSettings->fixedCamera.worldPosition) )
    return 1i64;
  v9 = "<fixed_use_supporting_actor>";
  v10 = 0x7FFFFFFFi64;
  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v11 = token - "<fixed_use_supporting_actor>";
  while ( 1 )
  {
    v12 = (unsigned __int8)v9[v11];
    v13 = v10;
    v14 = *(unsigned __int8 *)v9++;
    --v10;
    if ( !v13 )
    {
LABEL_33:
      v17 = atoi(tokenValue);
      v18 = v17 == 0;
      v19 = v17 < 0;
      result = 1i64;
      camSettings->fixedCamera.actorIsSupporting = !v19 && !v18;
      return result;
    }
    if ( v12 != v14 )
    {
      v15 = v12 + 32;
      if ( (unsigned int)(v12 - 65) > 0x19 )
        v15 = v12;
      v12 = v15;
      v16 = v14 + 32;
      if ( (unsigned int)(v14 - 65) > 0x19 )
        v16 = v14;
      if ( v12 != v16 )
        return 0i64;
    }
    if ( !v12 )
      goto LABEL_33;
  }
}

/*
==============
CG_ParseFovSettings
==============
*/
void CG_ParseFovSettings(CinematicCameraScene *scene, const char *token, const char **text_pp, int *currentFovIndex)
{
  const char *v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  int v17; 
  int v18; 
  __int64 v19; 
  const char *v20; 
  __int64 v21; 
  int v22; 
  __int64 v23; 
  int v24; 
  int v25; 
  int v26; 
  const char *v27; 
  const char *v29; 
  __int64 v30; 
  int v31; 
  __int64 v32; 
  int v33; 
  int v34; 
  int v35; 
  const char *v36; 
  const char *v38; 
  int v39; 
  __int64 v40; 
  int v41; 
  int v42; 
  int v43; 
  const char *v44; 

  if ( !scene && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2668, ASSERT_TYPE_ASSERT, "(scene)", (const char *)&queryFormat, "scene") )
    __debugbreak();
  if ( !text_pp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2669, ASSERT_TYPE_ASSERT, "(text_pp)", (const char *)&queryFormat, "text_pp") )
    __debugbreak();
  if ( !*text_pp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2670, ASSERT_TYPE_ASSERT, "(*text_pp)", (const char *)&queryFormat, "*text_pp") )
    __debugbreak();
  if ( !currentFovIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2671, ASSERT_TYPE_ASSERT, "(currentFovIndex)", (const char *)&queryFormat, "currentFovIndex") )
    __debugbreak();
  v9 = ">";
  v10 = 0x7FFFFFFFi64;
  v11 = 0x7FFFFFFFi64;
  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v12 = (unsigned __int8)v9[token - ">"];
    v13 = v11;
    v14 = *(unsigned __int8 *)v9++;
    --v11;
    if ( !v13 )
    {
LABEL_24:
      v17 = 0;
      goto LABEL_25;
    }
    if ( v12 != v14 )
    {
      v15 = v12 + 32;
      if ( v12 - 65 > 0x19 )
        v15 = v12;
      v12 = v15;
      v16 = v14 + 32;
      if ( v14 - 65 > 0x19 )
        v16 = v14;
      if ( v12 != v16 )
        break;
    }
    if ( !v12 )
      goto LABEL_24;
  }
  v17 = 1;
  if ( v12 < v16 )
    v17 = -1;
LABEL_25:
  v18 = *currentFovIndex;
  if ( v17 )
  {
    if ( v18 >= 4 )
    {
      CG_CinematicCameraParseComError(COM_ERR_5376, "Scene %s: Exceeded max <fov> settings (%d)\n", scene->sceneName, 6i64);
      v18 = *currentFovIndex;
    }
    v19 = 0x7FFFFFFFi64;
    v20 = "_start_time>";
    v21 = v18;
    if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    while ( 1 )
    {
      v22 = (unsigned __int8)v20[token - "_start_time>"];
      v23 = v19;
      v24 = *(unsigned __int8 *)v20++;
      --v19;
      if ( !v23 )
      {
LABEL_43:
        v27 = Com_Parse(text_pp);
        *(double *)&_XMM0 = atof(v27);
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        scene->fovSettings[v21].startTime = *(float *)&_XMM1;
        return;
      }
      if ( v22 != v24 )
      {
        v25 = v22 + 32;
        if ( (unsigned int)(v22 - 65) > 0x19 )
          v25 = v22;
        v22 = v25;
        v26 = v24 + 32;
        if ( (unsigned int)(v24 - 65) > 0x19 )
          v26 = v24;
        if ( v22 != v26 )
          break;
      }
      if ( !v22 )
        goto LABEL_43;
    }
    v29 = "_value>";
    v30 = 0x7FFFFFFFi64;
    if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    while ( 1 )
    {
      v31 = (unsigned __int8)v29[token - "_value>"];
      v32 = v30;
      v33 = *(unsigned __int8 *)v29++;
      --v30;
      if ( !v32 )
      {
LABEL_55:
        v36 = Com_Parse(text_pp);
        *(double *)&_XMM0 = atof(v36);
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        scene->fovSettings[v21].fov = *(float *)&_XMM1;
        return;
      }
      if ( v31 != v33 )
      {
        v34 = v31 + 32;
        if ( (unsigned int)(v31 - 65) > 0x19 )
          v34 = v31;
        v31 = v34;
        v35 = v33 + 32;
        if ( (unsigned int)(v33 - 65) > 0x19 )
          v35 = v33;
        if ( v31 != v35 )
          break;
      }
      if ( !v31 )
        goto LABEL_55;
    }
    v38 = "_blend_duration>";
    if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    while ( 1 )
    {
      v39 = (unsigned __int8)v38[token - "_blend_duration>"];
      v40 = v10;
      v41 = *(unsigned __int8 *)v38++;
      --v10;
      if ( !v40 )
      {
LABEL_67:
        v44 = Com_Parse(text_pp);
        scene->fovSettings[v21].durationBlend = atoi(v44);
        return;
      }
      if ( v39 != v41 )
      {
        v42 = v39 + 32;
        if ( (unsigned int)(v39 - 65) > 0x19 )
          v42 = v39;
        v39 = v42;
        v43 = v41 + 32;
        if ( (unsigned int)(v41 - 65) > 0x19 )
          v43 = v41;
        if ( v39 != v43 )
          break;
      }
      if ( !v39 )
        goto LABEL_67;
    }
    CG_CinematicCameraParseComError(COM_ERR_5377, "Scene %s: invalid <fov> token '%s'", scene->sceneName, token);
  }
  else
  {
    *currentFovIndex = v18 + 1;
  }
}

/*
==============
CG_ParseLinkedEntityToken
==============
*/
_BOOL8 CG_ParseLinkedEntityToken(const char *matchPrefix, const char *token, const char *tokenValue, EntityPositionOffset *offsetData)
{
  unsigned __int64 v9; 
  const char *v10; 
  __int64 v11; 
  const char *v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  int v18; 
  const char *v20; 
  signed __int64 v21; 
  int v22; 
  __int64 v23; 
  int v24; 
  int v25; 
  int v26; 

  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2079, ASSERT_TYPE_ASSERT, "(token)", (const char *)&queryFormat, "token") )
    __debugbreak();
  if ( !tokenValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2080, ASSERT_TYPE_ASSERT, "(tokenValue)", (const char *)&queryFormat, "tokenValue") )
    __debugbreak();
  if ( !offsetData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2081, ASSERT_TYPE_ASSERT, "(offsetData)", (const char *)&queryFormat, "offsetData") )
    __debugbreak();
  v9 = -1i64;
  do
    ++v9;
  while ( matchPrefix[v9] );
  if ( I_strnicmp(token, matchPrefix, v9) )
    return 0i64;
  v10 = &token[v9];
  v11 = 0x7FFFFFFFi64;
  v12 = ">";
  v13 = 0x7FFFFFFFi64;
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v14 = (unsigned __int8)v12[v10 - ">"];
    v15 = v13;
    v16 = *(unsigned __int8 *)v12++;
    --v13;
    if ( !v15 )
    {
LABEL_24:
      offsetData->optionalTagName = SL_FindString(tokenValue);
      return 1i64;
    }
    if ( v14 != v16 )
    {
      v17 = v14 + 32;
      if ( (unsigned int)(v14 - 65) > 0x19 )
        v17 = v14;
      v14 = v17;
      v18 = v16 + 32;
      if ( (unsigned int)(v16 - 65) > 0x19 )
        v18 = v16;
      if ( v14 != v18 )
        break;
    }
    if ( !v14 )
      goto LABEL_24;
  }
  v20 = "_range>";
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v21 = v10 - "_range>";
  while ( 1 )
  {
    v22 = (unsigned __int8)v20[v21];
    v23 = v11;
    v24 = *(unsigned __int8 *)v20++;
    --v11;
    if ( !v23 )
    {
LABEL_37:
      *(double *)&_XMM0 = atof(tokenValue);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      offsetData->deltaAnglesRange = *(float *)&_XMM1;
      return 1i64;
    }
    if ( v22 != v24 )
    {
      v25 = v22 + 32;
      if ( (unsigned int)(v22 - 65) > 0x19 )
        v25 = v22;
      v22 = v25;
      v26 = v24 + 32;
      if ( (unsigned int)(v24 - 65) > 0x19 )
        v26 = v24;
      if ( v22 != v26 )
        return (unsigned int)CG_ParseAnglesToken(matchPrefix, token, tokenValue, &offsetData->deltaAngles) != 0;
    }
    if ( !v22 )
      goto LABEL_37;
  }
}

/*
==============
CG_ParsePanCameraToken
==============
*/
_BOOL8 CG_ParsePanCameraToken(const char *token, const char *tokenValue, const int fileVersion, CinematicCameraSettings *camSettings)
{
  const char *v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  int v17; 
  const char *v19; 
  __int64 v20; 
  int v21; 
  __int64 v22; 
  int v23; 
  int v24; 
  int v25; 
  const char *v27; 
  __int64 v28; 
  int v29; 
  __int64 v30; 
  int v31; 
  int v32; 
  int v33; 
  const char *v34; 
  __int64 v35; 
  int v36; 
  __int64 v37; 
  int v38; 
  int v39; 
  int v40; 
  const char *v41; 
  __int64 v42; 
  int v43; 
  __int64 v44; 
  int v45; 
  int v46; 
  int v47; 
  const char *v48; 
  signed __int64 v49; 
  int v50; 
  __int64 v51; 
  int v52; 
  int v53; 
  int v54; 
  const char *v55; 
  __int64 v56; 
  __int64 v57; 
  int v58; 
  __int64 v59; 
  int v60; 
  int v61; 
  int v62; 
  unsigned int CurrentParseLine; 
  const char *v64; 
  signed __int64 v65; 
  int v66; 
  __int64 v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  vec3_t outPosition; 

  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2172, ASSERT_TYPE_ASSERT, "(token)", (const char *)&queryFormat, "token") )
    __debugbreak();
  if ( !tokenValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2173, ASSERT_TYPE_ASSERT, "(tokenValue)", (const char *)&queryFormat, "tokenValue") )
    __debugbreak();
  if ( !camSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2174, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  switch ( camSettings->cameraAnglesType )
  {
    case 1u:
      v71 = CG_ParseAnglesToken("<angles", token, tokenValue, &camSettings->fixedCamera.fixedAngles);
      return v71 || CG_ParsePositionToken("<position_start", token, tokenValue, &camSettings->fixedCamera.worldPosition) || CG_ParsePositionToken("<position_end", token, tokenValue, &camSettings->panningCamera.fixedPan.endWorldPosition);
    case 2u:
      v71 = CG_ParsePositionToken("<aim", token, tokenValue, &camSettings->fixedCamera.fixedAngles);
      return v71 || CG_ParsePositionToken("<position_start", token, tokenValue, &camSettings->fixedCamera.worldPosition) || CG_ParsePositionToken("<position_end", token, tokenValue, &camSettings->panningCamera.fixedPan.endWorldPosition);
    case 3u:
      if ( fileVersion < 4 )
      {
        if ( CG_ParsePositionToken("<position_start", token, tokenValue, &outPosition) )
        {
          CurrentParseLine = Com_GetCurrentParseLine();
          Com_Printf(0, "Cinematic Camera: <position_start_> is deprecated for fileVersion %d (line %d)\n", 5i64, CurrentParseLine);
          return 1i64;
        }
      }
      else if ( CG_ParseLinkedEntityToken("<tag_start", token, tokenValue, &camSettings->panningCamera.targetPan.startEntityPosition) )
      {
        return 1i64;
      }
      if ( !CG_ParseLinkedEntityToken("<tag_end", token, tokenValue, &camSettings->panningCamera.targetPan.endEntityPosition) && !CG_ParseLinkedEntityToken("<tag_focus", token, tokenValue, (EntityPositionOffset *)camSettings) )
      {
        v55 = "<pan_to_supporting_actor>";
        v56 = 0x7FFFFFFFi64;
        v57 = 0x7FFFFFFFi64;
        if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        while ( 1 )
        {
          v58 = (unsigned __int8)v55[token - "<pan_to_supporting_actor>"];
          v59 = v57;
          v60 = *(unsigned __int8 *)v55++;
          --v57;
          if ( !v59 )
          {
LABEL_106:
            camSettings->panningCamera.targetPan.panToSupportingActor = atoi(tokenValue) > 0;
            return 1i64;
          }
          if ( v58 != v60 )
          {
            v61 = v58 + 32;
            if ( (unsigned int)(v58 - 65) > 0x19 )
              v61 = v58;
            v58 = v61;
            v62 = v60 + 32;
            if ( (unsigned int)(v60 - 65) > 0x19 )
              v62 = v60;
            if ( v58 != v62 )
              break;
          }
          if ( !v58 )
            goto LABEL_106;
        }
        v64 = "<pan_focus_supporting_actor>";
        if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v65 = token - "<pan_focus_supporting_actor>";
        do
        {
          v66 = (unsigned __int8)v64[v65];
          v67 = v56;
          v68 = *(unsigned __int8 *)v64++;
          --v56;
          if ( !v67 )
            break;
          if ( v66 != v68 )
          {
            v69 = v66 + 32;
            if ( (unsigned int)(v66 - 65) > 0x19 )
              v69 = v66;
            v66 = v69;
            v70 = v68 + 32;
            if ( (unsigned int)(v68 - 65) > 0x19 )
              v70 = v68;
            if ( v66 != v70 )
              return 0i64;
          }
        }
        while ( v66 );
        camSettings->panningCamera.targetPan.focusOnSupportingActor = atoi(tokenValue) > 0;
      }
      return 1i64;
  }
  if ( camSettings->cameraAnglesType != 4 )
  {
    CG_CinematicCameraParseComError(COM_ERR_5365, "CG_ParsePanCameraToken: unknown camera orientation index %d\n", camSettings->cameraAnglesType);
    return 0i64;
  }
  if ( !CG_ParseLinkedEntityToken("<tag", token, tokenValue, (EntityPositionOffset *)camSettings) )
  {
    v10 = "<pan_focus_range>";
    v11 = 0x7FFFFFFFi64;
    v12 = 0x7FFFFFFFi64;
    if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    while ( 1 )
    {
      v13 = (unsigned __int8)v10[token - "<pan_focus_range>"];
      v14 = v12;
      v15 = *(unsigned __int8 *)v10++;
      --v12;
      if ( !v14 )
      {
LABEL_28:
        *(double *)&_XMM0 = atof(tokenValue);
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        camSettings->fixedCamera.worldPosition.v[0] = *(float *)&_XMM1;
        return 1i64;
      }
      if ( v13 != v15 )
      {
        v16 = v13 + 32;
        if ( (unsigned int)(v13 - 65) > 0x19 )
          v16 = v13;
        v13 = v16;
        v17 = v15 + 32;
        if ( (unsigned int)(v15 - 65) > 0x19 )
          v17 = v15;
        if ( v13 != v17 )
          break;
      }
      if ( !v13 )
        goto LABEL_28;
    }
    v19 = "<pan_distance>";
    v20 = 0x7FFFFFFFi64;
    if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    while ( 1 )
    {
      v21 = (unsigned __int8)v19[token - "<pan_distance>"];
      v22 = v20;
      v23 = *(unsigned __int8 *)v19++;
      --v20;
      if ( !v22 )
      {
LABEL_40:
        *(double *)&_XMM0 = atof(tokenValue);
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        camSettings->fixedCamera.worldPosition.v[1] = *(float *)&_XMM1;
        return 1i64;
      }
      if ( v21 != v23 )
      {
        v24 = v21 + 32;
        if ( (unsigned int)(v21 - 65) > 0x19 )
          v24 = v21;
        v21 = v24;
        v25 = v23 + 32;
        if ( (unsigned int)(v23 - 65) > 0x19 )
          v25 = v23;
        if ( v21 != v25 )
          break;
      }
      if ( !v21 )
        goto LABEL_40;
    }
    v27 = "<pan_mounted_to_actor>";
    v28 = 0x7FFFFFFFi64;
    if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    while ( 1 )
    {
      v29 = (unsigned __int8)v27[token - "<pan_mounted_to_actor>"];
      v30 = v28;
      v31 = *(unsigned __int8 *)v27++;
      --v28;
      if ( !v30 )
      {
LABEL_52:
        camSettings->panningCamera.attachedPan.mountedToActor = atoi(tokenValue) > 0;
        return 1i64;
      }
      if ( v29 != v31 )
      {
        v32 = v29 + 32;
        if ( (unsigned int)(v29 - 65) > 0x19 )
          v32 = v29;
        v29 = v32;
        v33 = v31 + 32;
        if ( (unsigned int)(v31 - 65) > 0x19 )
          v33 = v31;
        if ( v29 != v33 )
          break;
      }
      if ( !v29 )
        goto LABEL_52;
    }
    if ( !(unsigned int)CG_ParseAnglesToken("<pan_mounted_angles", token, tokenValue, &camSettings->panningCamera.attachedPan.mountedAnglesOffset) )
    {
      v34 = "<pan_to_supporting_actor>";
      v35 = 0x7FFFFFFFi64;
      if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      while ( 1 )
      {
        v36 = (unsigned __int8)v34[token - "<pan_to_supporting_actor>"];
        v37 = v35;
        v38 = *(unsigned __int8 *)v34++;
        --v35;
        if ( !v37 )
        {
LABEL_65:
          camSettings->panningCamera.attachedPan.panToSupportingActor = atoi(tokenValue) > 0;
          return 1i64;
        }
        if ( v36 != v38 )
        {
          v39 = v36 + 32;
          if ( (unsigned int)(v36 - 65) > 0x19 )
            v39 = v36;
          v36 = v39;
          v40 = v38 + 32;
          if ( (unsigned int)(v38 - 65) > 0x19 )
            v40 = v38;
          if ( v36 != v40 )
            break;
        }
        if ( !v36 )
          goto LABEL_65;
      }
      v41 = "<pan_focus_supporting_actor>";
      v42 = 0x7FFFFFFFi64;
      if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      while ( 1 )
      {
        v43 = (unsigned __int8)v41[token - "<pan_focus_supporting_actor>"];
        v44 = v42;
        v45 = *(unsigned __int8 *)v41++;
        --v42;
        if ( !v44 )
        {
LABEL_77:
          camSettings->panningCamera.attachedPan.focusOnSupportingActor = atoi(tokenValue) > 0;
          return 1i64;
        }
        if ( v43 != v45 )
        {
          v46 = v43 + 32;
          if ( (unsigned int)(v43 - 65) > 0x19 )
            v46 = v43;
          v43 = v46;
          v47 = v45 + 32;
          if ( (unsigned int)(v45 - 65) > 0x19 )
            v47 = v45;
          if ( v43 != v47 )
            break;
        }
        if ( !v43 )
          goto LABEL_77;
      }
      v48 = "<pan_right_to_left>";
      if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v49 = token - "<pan_right_to_left>";
      do
      {
        v50 = (unsigned __int8)v48[v49];
        v51 = v11;
        v52 = *(unsigned __int8 *)v48++;
        --v11;
        if ( !v51 )
          break;
        if ( v50 != v52 )
        {
          v53 = v50 + 32;
          if ( (unsigned int)(v50 - 65) > 0x19 )
            v53 = v50;
          v54 = v52 + 32;
          v50 = v53;
          if ( (unsigned int)(v52 - 65) > 0x19 )
            v54 = v52;
          if ( v53 != v54 )
            return 0i64;
        }
      }
      while ( v50 );
      camSettings->panningCamera.attachedPan.panRightToLeft = atoi(tokenValue) > 0;
    }
  }
  return 1i64;
}

/*
==============
CG_ParsePositionToken
==============
*/
__int64 CG_ParsePositionToken(const char *matchPrefix, const char *token, const char *tokenValue, vec3_t *outPosition)
{
  unsigned __int64 v9; 
  __int64 v10; 
  bool v11; 
  const char *v12; 
  __int64 v13; 
  const char *v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  int v18; 
  int v19; 
  const char *v22; 
  __int64 v23; 
  int v24; 
  __int64 v25; 
  int v26; 
  int v27; 
  int v28; 
  const char *v30; 
  signed __int64 v31; 
  int v32; 
  __int64 v33; 
  int v34; 
  int v35; 
  int v36; 

  if ( !matchPrefix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2044, ASSERT_TYPE_ASSERT, "(matchPrefix)", (const char *)&queryFormat, "matchPrefix") )
    __debugbreak();
  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2045, ASSERT_TYPE_ASSERT, "(token)", (const char *)&queryFormat, "token") )
    __debugbreak();
  if ( !tokenValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2046, ASSERT_TYPE_ASSERT, "(tokenValue)", (const char *)&queryFormat, "tokenValue") )
    __debugbreak();
  v9 = -1i64;
  do
    ++v9;
  while ( matchPrefix[v9] );
  if ( I_strnicmp(token, matchPrefix, v9) )
    return 0i64;
  v10 = 0x7FFFFFFFi64;
  v11 = &token[v9] == NULL;
  v12 = &token[v9];
  v13 = 0x7FFFFFFFi64;
  v14 = "_x>";
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v15 = (unsigned __int8)v14[v12 - "_x>"];
    v16 = v13;
    v17 = *(unsigned __int8 *)v14++;
    --v13;
    if ( !v16 )
    {
LABEL_24:
      *(double *)&_XMM0 = atof(tokenValue);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      outPosition->v[0] = *(float *)&_XMM1;
      return 1i64;
    }
    if ( v15 != v17 )
    {
      v18 = v15 + 32;
      if ( (unsigned int)(v15 - 65) > 0x19 )
        v18 = v15;
      v15 = v18;
      v19 = v17 + 32;
      if ( (unsigned int)(v17 - 65) > 0x19 )
        v19 = v17;
      if ( v15 != v19 )
        break;
    }
    if ( !v15 )
      goto LABEL_24;
  }
  v22 = "_y>";
  v23 = 0x7FFFFFFFi64;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v24 = (unsigned __int8)v22[v12 - "_y>"];
    v25 = v23;
    v26 = *(unsigned __int8 *)v22++;
    --v23;
    if ( !v25 )
    {
LABEL_36:
      *(double *)&_XMM0 = atof(tokenValue);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      outPosition->v[1] = *(float *)&_XMM1;
      return 1i64;
    }
    if ( v24 != v26 )
    {
      v27 = v24 + 32;
      if ( (unsigned int)(v24 - 65) > 0x19 )
        v27 = v24;
      v24 = v27;
      v28 = v26 + 32;
      if ( (unsigned int)(v26 - 65) > 0x19 )
        v28 = v26;
      if ( v24 != v28 )
        break;
    }
    if ( !v24 )
      goto LABEL_36;
  }
  v30 = "_z>";
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v31 = v12 - "_z>";
  do
  {
    v32 = (unsigned __int8)v30[v31];
    v33 = v10;
    v34 = *(unsigned __int8 *)v30++;
    --v10;
    if ( !v33 )
      break;
    if ( v32 != v34 )
    {
      v35 = v32 + 32;
      if ( (unsigned int)(v32 - 65) > 0x19 )
        v35 = v32;
      v32 = v35;
      v36 = v34 + 32;
      if ( (unsigned int)(v34 - 65) > 0x19 )
        v36 = v34;
      if ( v32 != v36 )
        return 0i64;
    }
  }
  while ( v32 );
  *(double *)&_XMM0 = atof(tokenValue);
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  outPosition->v[2] = *(float *)&_XMM1;
  return 1i64;
}

/*
==============
CG_ParseRotateCameraToken
==============
*/
__int64 CG_ParseRotateCameraToken(const char *token, const char *tokenValue, const int fileVersion, CinematicCameraSettings *camSettings)
{
  __int64 v8; 
  const char *v10; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 
  const char *v17; 
  __int64 v18; 
  int v19; 
  __int64 v20; 
  int v21; 
  int v22; 
  int v23; 
  const char *v25; 
  __int64 v26; 
  int v27; 
  __int64 v28; 
  int v29; 
  int v30; 
  int v31; 
  const char *v33; 
  __int64 v34; 
  int v35; 
  __int64 v36; 
  int v37; 
  int v38; 
  int v39; 
  const char *v40; 
  signed __int64 v41; 
  int v42; 
  __int64 v43; 
  int v44; 
  int v45; 
  int v46; 

  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2284, ASSERT_TYPE_ASSERT, "(token)", (const char *)&queryFormat, "token") )
    __debugbreak();
  if ( !tokenValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2285, ASSERT_TYPE_ASSERT, "(tokenValue)", (const char *)&queryFormat, "tokenValue") )
    __debugbreak();
  if ( !camSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2286, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  if ( camSettings->cameraAnglesType == 1 )
  {
    Com_Printf(0, "Cinematic Camera: Combination not suppported: <movement> rotate <orientation> fixed\n");
    return 0i64;
  }
  v8 = 0x7FFFFFFFi64;
  switch ( camSettings->cameraAnglesType )
  {
    case 2u:
      if ( !(unsigned int)CG_ParsePositionToken("<position", token, tokenValue, &camSettings->fixedCamera.fixedAngles) )
      {
LABEL_32:
        if ( !(unsigned int)CG_ParseAnglesToken("<angles", token, tokenValue, &camSettings->fixedCamera.worldPosition) && !(unsigned int)CG_ParseAnglesToken("<rotate_degrees", token, tokenValue, &camSettings->rotatingCamera.amountToRotate) )
        {
          v17 = "<angles_range_start>";
          v18 = 0x7FFFFFFFi64;
          if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          while ( 1 )
          {
            v19 = (unsigned __int8)v17[token - "<angles_range_start>"];
            v20 = v18;
            v21 = *(unsigned __int8 *)v17++;
            --v18;
            if ( !v20 )
            {
LABEL_45:
              *(double *)&_XMM0 = atof(tokenValue);
              __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
              camSettings->panningCamera.fixedPan.endWorldPosition.v[0] = *(float *)&_XMM1;
              return 1i64;
            }
            if ( v19 != v21 )
            {
              v22 = v19 + 32;
              if ( (unsigned int)(v19 - 65) > 0x19 )
                v22 = v19;
              v19 = v22;
              v23 = v21 + 32;
              if ( (unsigned int)(v21 - 65) > 0x19 )
                v23 = v21;
              if ( v19 != v23 )
                break;
            }
            if ( !v19 )
              goto LABEL_45;
          }
          v25 = "<angles_range_end>";
          v26 = 0x7FFFFFFFi64;
          if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          while ( 1 )
          {
            v27 = (unsigned __int8)v25[token - "<angles_range_end>"];
            v28 = v26;
            v29 = *(unsigned __int8 *)v25++;
            --v26;
            if ( !v28 )
            {
LABEL_57:
              *(double *)&_XMM0 = atof(tokenValue);
              __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
              camSettings->panningCamera.fixedPan.endWorldPosition.v[1] = *(float *)&_XMM1;
              return 1i64;
            }
            if ( v27 != v29 )
            {
              v30 = v27 + 32;
              if ( (unsigned int)(v27 - 65) > 0x19 )
                v30 = v27;
              v27 = v30;
              v31 = v29 + 32;
              if ( (unsigned int)(v29 - 65) > 0x19 )
                v31 = v29;
              if ( v27 != v31 )
                break;
            }
            if ( !v27 )
              goto LABEL_57;
          }
          v33 = "<rotate_focus_supporting_actor>";
          v34 = 0x7FFFFFFFi64;
          if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          while ( 1 )
          {
            v35 = (unsigned __int8)v33[token - "<rotate_focus_supporting_actor>"];
            v36 = v34;
            v37 = *(unsigned __int8 *)v33++;
            --v34;
            if ( !v36 )
            {
LABEL_69:
              camSettings->rotatingCamera.focusOnSupportingActor = atoi(tokenValue) > 0;
              return 1i64;
            }
            if ( v35 != v37 )
            {
              v38 = v35 + 32;
              if ( (unsigned int)(v35 - 65) > 0x19 )
                v38 = v35;
              v35 = v38;
              v39 = v37 + 32;
              if ( (unsigned int)(v37 - 65) > 0x19 )
                v39 = v37;
              if ( v35 != v39 )
                break;
            }
            if ( !v35 )
              goto LABEL_69;
          }
          v40 = "<rotate_yaw_both_actors>";
          if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          v41 = token - "<rotate_yaw_both_actors>";
          do
          {
            v42 = (unsigned __int8)v40[v41];
            v43 = v8;
            v44 = *(unsigned __int8 *)v40++;
            --v8;
            if ( !v43 )
              break;
            if ( v42 != v44 )
            {
              v45 = v42 + 32;
              if ( (unsigned int)(v42 - 65) > 0x19 )
                v45 = v42;
              v42 = v45;
              v46 = v44 + 32;
              if ( (unsigned int)(v44 - 65) > 0x19 )
                v46 = v44;
              if ( v42 != v46 )
                return 0i64;
            }
          }
          while ( v42 );
          camSettings->rotatingCamera.rotateYawBothActors = atoi(tokenValue) > 0;
        }
      }
      return 1i64;
    case 3u:
      if ( !CG_ParseLinkedEntityToken("<tag", token, tokenValue, (EntityPositionOffset *)camSettings) )
      {
        v10 = "<rotate_angles_world>";
        v11 = 0x7FFFFFFFi64;
        if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        do
        {
          v12 = (unsigned __int8)v10[token - "<rotate_angles_world>"];
          v13 = v11;
          v14 = *(unsigned __int8 *)v10++;
          --v11;
          if ( !v13 )
            break;
          if ( v12 != v14 )
          {
            v15 = v12 + 32;
            if ( (unsigned int)(v12 - 65) > 0x19 )
              v15 = v12;
            v12 = v15;
            v16 = v14 + 32;
            if ( (unsigned int)(v14 - 65) > 0x19 )
              v16 = v14;
            if ( v12 != v16 )
              goto LABEL_32;
          }
        }
        while ( v12 );
        camSettings->rotatingCamera.worldDeltaAngles = atoi(tokenValue) > 0;
      }
      return 1i64;
    case 4u:
      Com_Printf(0, "Cinematic Camera: Combination not suppported: <movement> rotate <orientation> attached\n");
      return 0i64;
    default:
      CG_CinematicCameraParseComError(COM_ERR_5366, "CG_ParseRotateCameraToken: unknown camera orientation index %d\n", camSettings->cameraAnglesType);
      return 0i64;
  }
}

/*
==============
CG_ParseSoundSettings
==============
*/
void CG_ParseSoundSettings(CinematicCameraScene *scene, const char *token, const char **text_pp, int *currentSoundIndex)
{
  const char *v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  int v17; 
  int v18; 
  const char *v19; 
  __int64 v20; 
  __int64 v21; 
  int v22; 
  __int64 v23; 
  int v24; 
  int v25; 
  int v26; 
  const char *v27; 
  const char *v29; 
  __int64 v30; 
  int v31; 
  __int64 v32; 
  int v33; 
  int v34; 
  int v35; 
  const char *v36; 
  const char *v37; 
  __int64 v38; 
  int v39; 
  __int64 v40; 
  int v41; 
  int v42; 
  int v43; 
  const char *v44; 
  const char *v45; 
  int v46; 
  __int64 v47; 
  int v48; 
  int v49; 
  int v50; 
  const char *v51; 

  if ( !scene && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2624, ASSERT_TYPE_ASSERT, "(scene)", (const char *)&queryFormat, "scene") )
    __debugbreak();
  if ( !text_pp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2625, ASSERT_TYPE_ASSERT, "(text_pp)", (const char *)&queryFormat, "text_pp") )
    __debugbreak();
  if ( !*text_pp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2626, ASSERT_TYPE_ASSERT, "(*text_pp)", (const char *)&queryFormat, "*text_pp") )
    __debugbreak();
  if ( !currentSoundIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2627, ASSERT_TYPE_ASSERT, "(currentSoundIndex)", (const char *)&queryFormat, "currentSoundIndex") )
    __debugbreak();
  v9 = ">";
  v10 = 0x7FFFFFFFi64;
  v11 = 0x7FFFFFFFi64;
  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v12 = (unsigned __int8)v9[token - ">"];
    v13 = v11;
    v14 = *(unsigned __int8 *)v9++;
    --v11;
    if ( !v13 )
    {
LABEL_24:
      v17 = 0;
      goto LABEL_25;
    }
    if ( v12 != v14 )
    {
      v15 = v12 + 32;
      if ( v12 - 65 > 0x19 )
        v15 = v12;
      v12 = v15;
      v16 = v14 + 32;
      if ( v14 - 65 > 0x19 )
        v16 = v14;
      if ( v12 != v16 )
        break;
    }
    if ( !v12 )
      goto LABEL_24;
  }
  v17 = 1;
  if ( v12 < v16 )
    v17 = -1;
LABEL_25:
  v18 = *currentSoundIndex;
  if ( v17 )
  {
    if ( v18 >= 6 )
    {
      CG_CinematicCameraParseComError(COM_ERR_5374, "Scene %s: Exceeded max <sound> settings (%d)\n", scene->sceneName, 6i64);
      v18 = *currentSoundIndex;
    }
    v19 = "_start_time>";
    v20 = v18;
    v21 = 0x7FFFFFFFi64;
    if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    while ( 1 )
    {
      v22 = (unsigned __int8)v19[token - "_start_time>"];
      v23 = v21;
      v24 = *(unsigned __int8 *)v19++;
      --v21;
      if ( !v23 )
      {
LABEL_43:
        v27 = Com_Parse(text_pp);
        *(double *)&_XMM0 = atof(v27);
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        scene->soundSettings[v20].startTime = *(float *)&_XMM1;
        return;
      }
      if ( v22 != v24 )
      {
        v25 = v22 + 32;
        if ( (unsigned int)(v22 - 65) > 0x19 )
          v25 = v22;
        v22 = v25;
        v26 = v24 + 32;
        if ( (unsigned int)(v24 - 65) > 0x19 )
          v26 = v24;
        if ( v22 != v26 )
          break;
      }
      if ( !v22 )
        goto LABEL_43;
    }
    v29 = "_name>";
    v30 = 0x7FFFFFFFi64;
    if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    while ( 1 )
    {
      v31 = (unsigned __int8)v29[token - "_name>"];
      v32 = v30;
      v33 = *(unsigned __int8 *)v29++;
      --v30;
      if ( !v32 )
      {
LABEL_55:
        v36 = Com_Parse(text_pp);
        Core_strcpy(scene->soundSettings[v20].name, 0x40ui64, v36);
        return;
      }
      if ( v31 != v33 )
      {
        v34 = v31 + 32;
        if ( (unsigned int)(v31 - 65) > 0x19 )
          v34 = v31;
        v31 = v34;
        v35 = v33 + 32;
        if ( (unsigned int)(v33 - 65) > 0x19 )
          v35 = v33;
        if ( v31 != v35 )
          break;
      }
      if ( !v31 )
        goto LABEL_55;
    }
    v37 = "_is_zone_override>";
    v38 = 0x7FFFFFFFi64;
    if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    while ( 1 )
    {
      v39 = (unsigned __int8)v37[token - "_is_zone_override>"];
      v40 = v38;
      v41 = *(unsigned __int8 *)v37++;
      --v38;
      if ( !v40 )
      {
LABEL_67:
        v44 = Com_Parse(text_pp);
        scene->soundSettings[v20].nameIsAudioZone = atoi(v44) > 0;
        return;
      }
      if ( v39 != v41 )
      {
        v42 = v39 + 32;
        if ( (unsigned int)(v39 - 65) > 0x19 )
          v42 = v39;
        v39 = v42;
        v43 = v41 + 32;
        if ( (unsigned int)(v41 - 65) > 0x19 )
          v43 = v41;
        if ( v39 != v43 )
          break;
      }
      if ( !v39 )
        goto LABEL_67;
    }
    v45 = "_fade_duration>";
    if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    while ( 1 )
    {
      v46 = (unsigned __int8)v45[token - "_fade_duration>"];
      v47 = v10;
      v48 = *(unsigned __int8 *)v45++;
      --v10;
      if ( !v47 )
      {
LABEL_79:
        v51 = Com_Parse(text_pp);
        scene->soundSettings[v20].zoneFadeDuration = atoi(v51);
        return;
      }
      if ( v46 != v48 )
      {
        v49 = v46 + 32;
        if ( (unsigned int)(v46 - 65) > 0x19 )
          v49 = v46;
        v46 = v49;
        v50 = v48 + 32;
        if ( (unsigned int)(v48 - 65) > 0x19 )
          v50 = v48;
        if ( v46 != v50 )
          break;
      }
      if ( !v46 )
        goto LABEL_79;
    }
    CG_CinematicCameraParseComError(COM_ERR_5375, "Scene %s: invalid <sound> token '%s'", scene->sceneName, token);
  }
  else
  {
    *currentSoundIndex = v18 + 1;
  }
}

/*
==============
CG_ParseVisionSetSettings
==============
*/
void CG_ParseVisionSetSettings(CinematicCameraScene *scene, const char *token, const char **text_pp, int *currentVisionIndex)
{
  const char *v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  int v17; 
  int v18; 
  __int64 v19; 
  const char *v20; 
  CinematicCameraVisionSetSettings *v21; 
  int v22; 
  __int64 v23; 
  int v24; 
  int v25; 
  int v26; 
  const char *v27; 
  const char *v29; 
  __int64 v30; 
  int v31; 
  __int64 v32; 
  int v33; 
  int v34; 
  int v35; 
  const char *v36; 
  const char *v37; 
  int v38; 
  __int64 v39; 
  int v40; 
  int v41; 
  int v42; 
  const char *v43; 

  if ( !scene && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2575, ASSERT_TYPE_ASSERT, "(scene)", (const char *)&queryFormat, "scene") )
    __debugbreak();
  if ( !text_pp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2576, ASSERT_TYPE_ASSERT, "(text_pp)", (const char *)&queryFormat, "text_pp") )
    __debugbreak();
  if ( !*text_pp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2577, ASSERT_TYPE_ASSERT, "(*text_pp)", (const char *)&queryFormat, "*text_pp") )
    __debugbreak();
  if ( !currentVisionIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2578, ASSERT_TYPE_ASSERT, "(currentVisionIndex)", (const char *)&queryFormat, "currentVisionIndex") )
    __debugbreak();
  v9 = ">";
  v10 = 0x7FFFFFFFi64;
  v11 = 0x7FFFFFFFi64;
  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v12 = (unsigned __int8)v9[token - ">"];
    v13 = v11;
    v14 = *(unsigned __int8 *)v9++;
    --v11;
    if ( !v13 )
    {
LABEL_24:
      v17 = 0;
      goto LABEL_25;
    }
    if ( v12 != v14 )
    {
      v15 = v12 + 32;
      if ( v12 - 65 > 0x19 )
        v15 = v12;
      v12 = v15;
      v16 = v14 + 32;
      if ( v14 - 65 > 0x19 )
        v16 = v14;
      if ( v12 != v16 )
        break;
    }
    if ( !v12 )
      goto LABEL_24;
  }
  v17 = 1;
  if ( v12 < v16 )
    v17 = -1;
LABEL_25:
  v18 = *currentVisionIndex;
  if ( v17 )
  {
    if ( v18 >= 4 )
    {
      CG_CinematicCameraParseComError(COM_ERR_5370, "Scene %s: Exceeded max <vision> settings (%d)\n", scene->sceneName, 4i64);
      v18 = *currentVisionIndex;
    }
    v19 = 0x7FFFFFFFi64;
    v20 = "_start_time>";
    v21 = &scene->visionSetSettings[v18];
    if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    while ( 1 )
    {
      v22 = (unsigned __int8)v20[token - "_start_time>"];
      v23 = v19;
      v24 = *(unsigned __int8 *)v20++;
      --v19;
      if ( !v23 )
      {
LABEL_43:
        v27 = Com_Parse(text_pp);
        *(double *)&_XMM0 = atof(v27);
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        v21->startTime = *(float *)&_XMM1;
        return;
      }
      if ( v22 != v24 )
      {
        v25 = v22 + 32;
        if ( (unsigned int)(v22 - 65) > 0x19 )
          v25 = v22;
        v22 = v25;
        v26 = v24 + 32;
        if ( (unsigned int)(v24 - 65) > 0x19 )
          v26 = v24;
        if ( v22 != v26 )
          break;
      }
      if ( !v22 )
        goto LABEL_43;
    }
    v29 = "_name>";
    v30 = 0x7FFFFFFFi64;
    if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    while ( 1 )
    {
      v31 = (unsigned __int8)v29[token - "_name>"];
      v32 = v30;
      v33 = *(unsigned __int8 *)v29++;
      --v30;
      if ( !v32 )
      {
LABEL_55:
        v36 = Com_Parse(text_pp);
        Core_strcpy(v21->visionName, 0x40ui64, v36);
        return;
      }
      if ( v31 != v33 )
      {
        v34 = v31 + 32;
        if ( (unsigned int)(v31 - 65) > 0x19 )
          v34 = v31;
        v31 = v34;
        v35 = v33 + 32;
        if ( (unsigned int)(v33 - 65) > 0x19 )
          v35 = v33;
        if ( v31 != v35 )
          break;
      }
      if ( !v31 )
        goto LABEL_55;
    }
    v37 = "_blend_duration>";
    if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    while ( 1 )
    {
      v38 = (unsigned __int8)v37[token - "_blend_duration>"];
      v39 = v10;
      v40 = *(unsigned __int8 *)v37++;
      --v10;
      if ( !v39 )
      {
LABEL_67:
        v43 = Com_Parse(text_pp);
        v21->duration = atoi(v43);
        return;
      }
      if ( v38 != v40 )
      {
        v41 = v38 + 32;
        if ( (unsigned int)(v38 - 65) > 0x19 )
          v41 = v38;
        v38 = v41;
        v42 = v40 + 32;
        if ( (unsigned int)(v40 - 65) > 0x19 )
          v42 = v40;
        if ( v38 != v42 )
          break;
      }
      if ( !v38 )
        goto LABEL_67;
    }
    CG_CinematicCameraParseComError(COM_ERR_5371, "Scene %s: invalid <vision> token '%s'", scene->sceneName, token);
  }
  else
  {
    *currentVisionIndex = v18 + 1;
  }
}

/*
==============
CG_ParseZoomCameraToken
==============
*/
__int64 CG_ParseZoomCameraToken(const char *token, const char *tokenValue, const int fileVersion, CinematicCameraSettings *camSettings)
{
  int v9; 
  const char *v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  int v17; 
  const char *v19; 
  __int64 v20; 
  int v21; 
  __int64 v22; 
  int v23; 
  int v24; 
  int v25; 
  const char *v27; 
  signed __int64 v28; 
  int v29; 
  __int64 v30; 
  int v31; 
  int v32; 
  int v33; 

  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2351, ASSERT_TYPE_ASSERT, "(token)", (const char *)&queryFormat, "token") )
    __debugbreak();
  if ( !tokenValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2352, ASSERT_TYPE_ASSERT, "(tokenValue)", (const char *)&queryFormat, "tokenValue") )
    __debugbreak();
  if ( !camSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2353, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  if ( camSettings->cameraAnglesType == 1 )
  {
    if ( (unsigned int)CG_ParsePositionToken("<position_start", token, tokenValue, &camSettings->fixedCamera.fixedAngles) || (unsigned int)CG_ParsePositionToken("<position_end", token, tokenValue, &camSettings->fixedCamera.worldPosition) )
      return 1i64;
  }
  else
  {
    if ( camSettings->cameraAnglesType == 2 )
    {
      if ( CG_ParseLinkedEntityToken("<tag_start", token, tokenValue, (EntityPositionOffset *)camSettings) )
        return 1i64;
      v9 = CG_ParsePositionToken("<position_end", token, tokenValue, &camSettings->fixedCamera.worldPosition);
    }
    else
    {
      if ( camSettings->cameraAnglesType != 3 && camSettings->cameraAnglesType != 4 )
      {
        CG_CinematicCameraParseComError(COM_ERR_5367, "CG_ParseZoomCameraToken: unknown camera orientation index %d\n", camSettings->cameraAnglesType);
        return 0i64;
      }
      if ( CG_ParseLinkedEntityToken("<tag_start", token, tokenValue, (EntityPositionOffset *)camSettings) )
        return 1i64;
      v9 = CG_ParseLinkedEntityToken("<tag_end", token, tokenValue, &camSettings->panningCamera.targetPan.startEntityPosition);
    }
    if ( v9 )
      return 1i64;
  }
  v10 = "<zoom_end_radius>";
  v11 = 0x7FFFFFFFi64;
  v12 = 0x7FFFFFFFi64;
  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v13 = (unsigned __int8)v10[token - "<zoom_end_radius>"];
    v14 = v12;
    v15 = *(unsigned __int8 *)v10++;
    --v12;
    if ( !v14 )
    {
LABEL_34:
      *(double *)&_XMM0 = atof(tokenValue);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      camSettings->panningCamera.fixedPan.endWorldPosition.v[2] = *(float *)&_XMM1;
      return 1i64;
    }
    if ( v13 != v15 )
    {
      v16 = v13 + 32;
      if ( (unsigned int)(v13 - 65) > 0x19 )
        v16 = v13;
      v13 = v16;
      v17 = v15 + 32;
      if ( (unsigned int)(v15 - 65) > 0x19 )
        v17 = v15;
      if ( v13 != v17 )
        break;
    }
    if ( !v13 )
      goto LABEL_34;
  }
  v19 = "<zoom_end_radius_angles>";
  v20 = 0x7FFFFFFFi64;
  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v21 = (unsigned __int8)v19[token - "<zoom_end_radius_angles>"];
    v22 = v20;
    v23 = *(unsigned __int8 *)v19++;
    --v20;
    if ( !v22 )
    {
LABEL_47:
      *(double *)&_XMM0 = atof(tokenValue);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      camSettings->panningCamera.targetPan.endEntityPosition.deltaAngles.v[0] = *(float *)&_XMM1;
      return 1i64;
    }
    if ( v21 != v23 )
    {
      v24 = v21 + 32;
      if ( (unsigned int)(v21 - 65) > 0x19 )
        v24 = v21;
      v21 = v24;
      v25 = v23 + 32;
      if ( (unsigned int)(v23 - 65) > 0x19 )
        v25 = v23;
      if ( v21 != v25 )
        break;
    }
    if ( !v21 )
      goto LABEL_47;
  }
  v27 = "<zoom_reverse_actor_roles>";
  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v28 = token - "<zoom_reverse_actor_roles>";
  while ( 1 )
  {
    v29 = (unsigned __int8)v27[v28];
    v30 = v11;
    v31 = *(unsigned __int8 *)v27++;
    --v11;
    if ( !v30 )
    {
LABEL_60:
      camSettings->zoomingCamera.reverseActorRoles = atoi(tokenValue) > 0;
      return 1i64;
    }
    if ( v29 != v31 )
    {
      v32 = v29 + 32;
      if ( (unsigned int)(v29 - 65) > 0x19 )
        v32 = v29;
      v29 = v32;
      v33 = v31 + 32;
      if ( (unsigned int)(v31 - 65) > 0x19 )
        v33 = v31;
      if ( v29 != v33 )
        return 0i64;
    }
    if ( !v29 )
      goto LABEL_60;
  }
}

/*
==============
CG_PlayCinematicCamera
==============
*/
void CG_PlayCinematicCamera(LocalClientNum_t localClientNum, const char *sceneName, int leadingActorId, int supportingActorId)
{
  const char *v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 
  int i; 
  CinematicCameraScene *Scene; 
  CameraSceneData *SceneData; 
  int v18; 
  int v19; 
  int v20; 
  int *v21; 
  int v22; 
  const dvar_t *v23; 
  cg_t *LocalClientGlobals; 
  CameraSceneData *v25; 
  __int64 v26; 
  __int64 v27; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 182, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA )") )
    __debugbreak();
  if ( sceneName && *sceneName )
  {
    v8 = "unknown";
    v9 = 0x7FFFFFFFi64;
    do
    {
      v10 = (unsigned __int8)v8[sceneName - "unknown"];
      v11 = v9;
      v12 = *(unsigned __int8 *)v8++;
      --v9;
      if ( !v11 )
        break;
      if ( v10 != v12 )
      {
        v13 = v10 + 32;
        if ( (unsigned int)(v10 - 65) > 0x19 )
          v13 = v10;
        v10 = v13;
        v14 = v12 + 32;
        if ( (unsigned int)(v12 - 65) > 0x19 )
          v14 = v12;
        if ( v10 != v14 )
        {
          for ( i = 0; i < 2; ++i )
          {
            Scene = CG_CinematicCamera_GetScene(i);
            if ( !I_strnicmp(Scene->sceneName, sceneName, 0x7FFFFFFFui64) )
              break;
          }
          if ( i == 2 )
          {
            SceneData = CG_CinematicCamera_GetSceneData(localClientNum);
            v18 = 0;
            v19 = 1;
            v20 = SceneData->lastUsedTime[0];
            v21 = &SceneData->lastUsedTime[1];
            do
            {
              v22 = *v21++;
              i = v19;
              if ( v22 >= v20 )
                i = v18;
              ++v19;
              v18 = i;
              if ( v22 >= v20 )
                v22 = v20;
              v20 = v22;
            }
            while ( v19 < 2 );
            CG_LoadCinematicCameraFile(sceneName, i);
          }
          v23 = DCONST_DVARBOOL_cg_cinematicCameraEnabled;
          if ( !DCONST_DVARBOOL_cg_cinematicCameraEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraEnabled") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v23);
          if ( v23->current.enabled )
          {
            CG_StopCinematicCameras(localClientNum);
            LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
            v25 = CG_CinematicCamera_GetSceneData(localClientNum);
            v25->currentCameraScene = CG_CinematicCamera_GetScene(i);
            v25->currentCutIndex = 0;
            v25->sceneStartTime = LocalClientGlobals->time;
            v25->leadingActorId = leadingActorId;
            if ( supportingActorId < 0 || (unsigned int)supportingActorId >= 0x7FF )
              supportingActorId = leadingActorId;
            v25->supportingActorId = supportingActorId;
            v25->currentCutData.useCurrentAsStartPosition = 0;
            if ( (unsigned int)i >= 2 )
            {
              LODWORD(v27) = 2;
              LODWORD(v26) = i;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 169, ASSERT_TYPE_ASSERT, "(unsigned)( sceneIndex ) < (unsigned)( 2 )", "sceneIndex doesn't index MAX_CINEMATIC_SCENES\n\t%i not in [0, %i)", v26, v27) )
                __debugbreak();
            }
            v25->lastUsedTime[i] = LocalClientGlobals->time;
          }
          return;
        }
      }
    }
    while ( v10 );
  }
  CG_StopCinematicCameras(localClientNum);
}

/*
==============
CG_StopCinematicCameras
==============
*/
void CG_StopCinematicCameras(LocalClientNum_t localClientNum)
{
  CameraSceneData *SceneData; 
  CameraCutData *p_nextCutData; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_OFFHAND_END) )
  {
    SceneData = CG_CinematicCamera_GetSceneData(localClientNum);
    SceneData->currentCameraScene = NULL;
    *(_QWORD *)&SceneData->sceneStartTime = -1i64;
    *(_QWORD *)&SceneData->leadingActorId = -1i64;
    *(_QWORD *)SceneData->visionSlotActivated = 0i64;
    *(_WORD *)&SceneData->soundSlotActivated[4] = 0;
    if ( SceneData == (CameraSceneData *)-28i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 224, ASSERT_TYPE_ASSERT, "(cutData)", (const char *)&queryFormat, "cutData") )
      __debugbreak();
    *(_QWORD *)SceneData->currentCutData.startPosition.v = 0i64;
    *(_QWORD *)&SceneData->currentCutData.startPosition.z = 0i64;
    *(_QWORD *)&SceneData->currentCutData.endPosition.y = 0i64;
    *(_QWORD *)SceneData->currentCutData.angles.v = 0i64;
    *(_QWORD *)&SceneData->currentCutData.angles.z = 0i64;
    SceneData->currentCutData.startTime = 0;
    SceneData->currentCutData.heightOffset = 0.0;
    SceneData->currentCutData.idealPitch = 360.0;
    *(_WORD *)&SceneData->currentCutData.useCurrentAsStartPosition = 0;
    p_nextCutData = &SceneData->nextCutData;
    if ( !p_nextCutData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 224, ASSERT_TYPE_ASSERT, "(cutData)", (const char *)&queryFormat, "cutData") )
      __debugbreak();
    *(_QWORD *)p_nextCutData->startPosition.v = 0i64;
    *(_QWORD *)&p_nextCutData->startPosition.z = 0i64;
    *(_QWORD *)&p_nextCutData->endPosition.y = 0i64;
    *(_QWORD *)p_nextCutData->angles.v = 0i64;
    *(_QWORD *)&p_nextCutData->angles.z = 0i64;
    p_nextCutData->startTime = 0;
    p_nextCutData->heightOffset = 0.0;
    p_nextCutData->idealPitch = 360.0;
    *(_WORD *)&p_nextCutData->useCurrentAsStartPosition = 0;
    CG_ClearAudioOverride(localClientNum, CTAUD_OVERRIDE_CINEMA, 0.0);
  }
}

/*
==============
CG_TransitionCinematicCamera
==============
*/
void CG_TransitionCinematicCamera(LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  CameraSceneData *SceneData; 
  OmnvarType type; 
  unsigned int lastTimeModifiedNcsString; 
  unsigned int timeModified; 
  const char *v7; 
  char *v8; 
  __int64 v9; 
  signed __int64 v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  int v15; 
  OmnvarDef *optionalOutDef; 
  char *result; 
  int supportingActorId; 
  int leadingActorId; 
  OmnvarData *optionalOutData; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 294, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA )") )
    __debugbreak();
  v2 = DCONST_DVARBOOL_cg_cinematicCameraEnabled;
  if ( !DCONST_DVARBOOL_cg_cinematicCameraEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    optionalOutData = NULL;
    if ( CG_GetOmnvar_StringByName(localClientNum, "cam_scene_name", (const char **)&result, (const OmnvarDef **)&optionalOutDef, (const OmnvarData **)&optionalOutData) )
    {
      SceneData = CG_CinematicCamera_GetSceneData(localClientNum);
      if ( !optionalOutData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 327, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
        __debugbreak();
      if ( !optionalOutDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 328, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
        __debugbreak();
      type = optionalOutDef->type;
      if ( type != OMNVAR_TYPE_NCS_LUI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 329, ASSERT_TYPE_ASSERT, "( def->type ) == ( OMNVAR_TYPE_NCS_LUI )", "%s == %s\n\t%i, %i", "def->type", "OMNVAR_TYPE_NCS_LUI", type, 5) )
        __debugbreak();
      lastTimeModifiedNcsString = SceneData->lastTimeModifiedNcsString;
      timeModified = optionalOutData->timeModified;
      SceneData->lastTimeModifiedNcsString = optionalOutData->timeModified;
      if ( lastTimeModifiedNcsString != timeModified )
      {
        v7 = "unknown";
        v8 = result;
        v9 = 0x7FFFFFFFi64;
        if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v10 = v8 - "unknown";
        do
        {
          v11 = (unsigned __int8)v7[v10];
          v12 = v9;
          v13 = *(unsigned __int8 *)v7++;
          --v9;
          if ( !v12 )
            break;
          if ( v11 != v13 )
          {
            v14 = v11 + 32;
            if ( (unsigned int)(v11 - 65) > 0x19 )
              v14 = v11;
            v11 = v14;
            v15 = v13 + 32;
            if ( (unsigned int)(v13 - 65) > 0x19 )
              v15 = v13;
            if ( v11 != v15 )
            {
              if ( CG_GetOmnvar_IntegerByName(localClientNum, "cam_scene_lead", &leadingActorId, NULL, NULL) )
              {
                if ( CG_GetOmnvar_IntegerByName(localClientNum, "cam_scene_support", &supportingActorId, NULL, NULL) )
                  CG_PlayCinematicCamera(localClientNum, result, leadingActorId, supportingActorId);
                else
                  Com_PrintError(1, "CG_PlayCinematicCameraFromOmnvar: failed retrieving value for omnvar 'cam_scene_support'\n");
              }
              else
              {
                Com_PrintError(1, "CG_PlayCinematicCameraFromOmnvar: failed retrieving value omnvar for 'cam_scene_lead'\n");
              }
              return;
            }
          }
        }
        while ( v11 );
        if ( CG_IsCinematicCameraActive(localClientNum) )
          CG_StopCinematicCameras(localClientNum);
      }
    }
    else
    {
      Com_PrintError(1, "CG_PlayCinematicCameraFromOmnvar: failed retrieving value omnvar for 'cam_scene_name'\n");
      if ( CG_IsCinematicCameraActive(localClientNum) )
        CG_StopCinematicCameras(localClientNum);
    }
  }
}

/*
==============
CG_UpdateCinematicCamera
==============
*/
void CG_UpdateCinematicCamera(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  CameraSceneData *SceneData; 
  __int64 sceneName; 
  CameraCutData *p_currentCutData; 
  __int64 currentCutIndex; 
  const CinematicCameraSettings *v7; 
  unsigned int refdefViewOrg_aab; 
  unsigned int *p_org; 
  float v10; 
  float time; 
  float v12; 
  int CameraPositionAngles; 
  unsigned int refdefViewOrg_set_aab; 
  const dvar_t *v15; 
  __int64 v16; 
  cg_t *v17; 
  CameraSceneData *v18; 
  CinematicCameraScene *currentCameraScene; 
  cg_t *v20; 
  float v21; 
  __int64 v22; 
  const int *p_duration; 
  float v24; 
  ClientVisionSetData *p_cvsData; 
  const dvar_t *v26; 
  CameraSceneData *v27; 
  CinematicCameraScene *v28; 
  cg_t *v29; 
  float v30; 
  char *name; 
  float v32; 
  char v33; 
  float v34; 
  unsigned int v35; 
  CameraCutData *p_nextCutData; 
  __int64 v37; 
  vec3_t *outAngles; 
  vec3_t *outAnglesa; 
  __int64 v40; 
  int v41; 
  vec3_t outPosition; 
  __int64 v43; 
  __int64 v44; 
  vec3_t cameraAngles; 

  v44 = -2i64;
  if ( !CG_IsCinematicCameraActive(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1888, ASSERT_TYPE_ASSERT, "(CG_IsCinematicCameraActive( localClientNum ))", (const char *)&queryFormat, "CG_IsCinematicCameraActive( localClientNum )") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1889, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  SceneData = CG_CinematicCamera_GetSceneData(localClientNum);
  sceneName = (__int64)SceneData->currentCameraScene->sceneName;
  v43 = sceneName;
  p_currentCutData = &SceneData->currentCutData;
  if ( !sceneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1896, ASSERT_TYPE_ASSERT, "(scene)", (const char *)&queryFormat, "scene") )
    __debugbreak();
  if ( *(_DWORD *)(sceneName + 32) >= 8u )
  {
    LODWORD(outAngles) = *(_DWORD *)(sceneName + 32);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1897, ASSERT_TYPE_ASSERT, "(unsigned)( scene->numCameraCuts ) < (unsigned)( 8 )", "scene->numCameraCuts doesn't index MAX_SCENE_CUTS\n\t%i not in [0, %i)", outAngles, 8) )
      __debugbreak();
  }
  if ( SceneData->currentCutIndex >= *(_DWORD *)(sceneName + 32) )
  {
    LODWORD(v40) = *(_DWORD *)(sceneName + 32);
    LODWORD(outAngles) = SceneData->currentCutIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1898, ASSERT_TYPE_ASSERT, "(unsigned)( sceneData->currentCutIndex ) < (unsigned)( scene->numCameraCuts )", "sceneData->currentCutIndex doesn't index scene->numCameraCuts\n\t%i not in [0, %i)", outAngles, v40) )
      __debugbreak();
  }
  currentCutIndex = SceneData->currentCutIndex;
  v7 = (const CinematicCameraSettings *)(sceneName + 80 * currentCutIndex + 36);
  if ( !p_currentCutData->startTime )
    CG_InitCameraCutData(localClientNum, (const CinematicCameraSettings *)(sceneName + 80 * currentCutIndex + 36), p_currentCutData);
  if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
    __debugbreak();
  refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
  p_org = (unsigned int *)&LocalClientGlobals->refdef.view.org;
  if ( LocalClientGlobals == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  LODWORD(outPosition.v[0]) = *p_org ^ ((refdefViewOrg_aab ^ (unsigned int)p_org) * ((refdefViewOrg_aab ^ (unsigned int)p_org) + 2));
  LODWORD(outPosition.v[1]) = LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
  LODWORD(outPosition.v[2]) = LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) + 2));
  cameraAngles.v[0] = 0.0;
  cameraAngles.v[1] = 0.0;
  cameraAngles.v[2] = 0.0;
  v10 = 0.0;
  time = v7->time;
  if ( time > 0.0 )
  {
    v12 = (float)((float)(LocalClientGlobals->time - p_currentCutData->startTime) * 0.001) / time;
    I_fclamp(v12, 0.0, 1.0);
    v10 = v12;
  }
  CameraPositionAngles = CG_GetCameraPositionAngles(localClientNum, v7, p_currentCutData, v10, &outPosition, &cameraAngles);
  v41 = CameraPositionAngles;
  CG_UpdateCinematicCameraLerp(localClientNum, SceneData, v10, &outPosition, &cameraAngles);
  if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1304, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
    __debugbreak();
  refdefViewOrg_set_aab = LocalClientGlobals->refdef.view.refdefViewOrg_set_aab;
  if ( LocalClientGlobals == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1262, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  LocalClientGlobals->refdef.view.refdefViewOrg_aab += refdefViewOrg_set_aab;
  *p_org = LODWORD(outPosition.v[0]) ^ (((unsigned int)p_org ^ LocalClientGlobals->refdef.view.refdefViewOrg_aab) * (((unsigned int)p_org ^ LocalClientGlobals->refdef.view.refdefViewOrg_aab) + 2));
  LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) = LODWORD(outPosition.v[1]) ^ ((((_DWORD)LocalClientGlobals + 26940) ^ LocalClientGlobals->refdef.view.refdefViewOrg_aab) * ((((_DWORD)LocalClientGlobals + 26940) ^ LocalClientGlobals->refdef.view.refdefViewOrg_aab) + 2));
  LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]) = ((((_DWORD)LocalClientGlobals + 26944) ^ LocalClientGlobals->refdef.view.refdefViewOrg_aab) * ((((_DWORD)LocalClientGlobals + 26944) ^ LocalClientGlobals->refdef.view.refdefViewOrg_aab) + 2)) ^ LODWORD(outPosition.v[2]);
  AnglesToAxis(&cameraAngles, &LocalClientGlobals->refdef.view.axis);
  v15 = DCONST_DVARBOOL_cg_cinematicCameraVisionEnabled;
  if ( !DCONST_DVARBOOL_cg_cinematicCameraVisionEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraVisionEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  v16 = 0i64;
  if ( v15->current.enabled )
  {
    if ( !CG_IsCinematicCameraActive(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1674, ASSERT_TYPE_ASSERT, "(CG_IsCinematicCameraActive( localClientNum ))", (const char *)&queryFormat, "CG_IsCinematicCameraActive( localClientNum )") )
      __debugbreak();
    v17 = CG_GetLocalClientGlobals(localClientNum);
    v18 = CG_CinematicCamera_GetSceneData(localClientNum);
    currentCameraScene = v18->currentCameraScene;
    v20 = CG_GetLocalClientGlobals(localClientNum);
    v21 = (float)(v20->time - CG_CinematicCamera_GetSceneData(localClientNum)->sceneStartTime) * 0.001;
    v22 = 0i64;
    p_duration = &currentCameraScene->visionSetSettings[0].duration;
    do
    {
      v24 = *((float *)p_duration - 1);
      if ( v24 >= 0.0 && (float)*p_duration >= 0.0 && v21 >= v24 && !v18->visionSlotActivated[v22] )
      {
        v18->visionSlotActivated[v22] = 1;
        p_cvsData = &v17->cvsData;
        if ( *((_BYTE *)p_duration - 68) )
        {
          CG_VisionSetRegisterLeafByFileSimple(p_cvsData, VISIONSET_LEAFTYPE_CINEMATIC_CAMERA, (const char *)p_duration - 68);
          CG_VisionSetRegisterBlendStart(&v17->cvsData, VISIONSET_BLENDTYPE_CINEMATIC_CAMERA, v17->time, *p_duration, 1, VISIONSETLERP_SMOOTH);
        }
        else
        {
          CG_VisionSetRegisterBlendStart(p_cvsData, VISIONSET_BLENDTYPE_CINEMATIC_CAMERA, v17->time, *p_duration, 0, VISIONSETLERP_SMOOTH);
        }
      }
      ++v22;
      p_duration += 18;
    }
    while ( v22 < 4 );
    p_currentCutData = &SceneData->currentCutData;
    CameraPositionAngles = v41;
  }
  v26 = DCONST_DVARBOOL_cg_cinematicCameraSoundEnabled;
  if ( !DCONST_DVARBOOL_cg_cinematicCameraSoundEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraSoundEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  if ( v26->current.enabled )
  {
    if ( !CG_IsCinematicCameraActive(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1739, ASSERT_TYPE_ASSERT, "(CG_IsCinematicCameraActive( localClientNum ))", (const char *)&queryFormat, "CG_IsCinematicCameraActive( localClientNum )") )
      __debugbreak();
    CG_GetLocalClientGlobals(localClientNum);
    v27 = CG_CinematicCamera_GetSceneData(localClientNum);
    v28 = v27->currentCameraScene;
    v29 = CG_GetLocalClientGlobals(localClientNum);
    v30 = (float)(v29->time - CG_CinematicCamera_GetSceneData(localClientNum)->sceneStartTime) * 0.001;
    name = v28->soundSettings[0].name;
    do
    {
      v32 = *((float *)name - 1);
      if ( v32 >= 0.0 && v30 >= v32 && !v27->soundSlotActivated[v16] )
      {
        v27->soundSlotActivated[v16] = 1;
        v33 = *name;
        if ( name[68] )
        {
          v34 = (float)*((int *)name + 16) * 0.001;
          if ( v33 )
            CG_SetAudioOverride(localClientNum, name, CTAUD_OVERRIDE_CINEMA, v34, 2047);
          else
            CG_ClearAudioOverride(localClientNum, CTAUD_OVERRIDE_CINEMA, v34);
        }
        else if ( v33 )
        {
          SND_PlayLocalSoundAliasAsync(localClientNum, name, SASYS_UI);
        }
      }
      ++v16;
      name += 76;
    }
    while ( v16 < 6 );
  }
  if ( CameraPositionAngles )
  {
    if ( CG_IsRunningLastSceneCut(SceneData) )
    {
      CG_StopCinematicCameras(localClientNum);
    }
    else
    {
      v35 = SceneData->currentCutIndex + 1;
      SceneData->currentCutIndex = v35;
      p_nextCutData = &SceneData->nextCutData;
      if ( SceneData->nextCutData.startTime <= 0 )
      {
        v37 = v43;
        if ( v35 >= *(_DWORD *)(v43 + 32) )
        {
          LODWORD(v40) = *(_DWORD *)(v43 + 32);
          LODWORD(outAnglesa) = v35;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1947, ASSERT_TYPE_ASSERT, "(unsigned)( sceneData->currentCutIndex ) < (unsigned)( scene->numCameraCuts )", "sceneData->currentCutIndex doesn't index scene->numCameraCuts\n\t%i not in [0, %i)", outAnglesa, v40) )
            __debugbreak();
        }
        CG_InitCameraCutData(localClientNum, (const CinematicCameraSettings *)(v37 + 80i64 * SceneData->currentCutIndex + 36), p_currentCutData);
      }
      else
      {
        *(__m256i *)&p_currentCutData->startTime = *(__m256i *)&p_nextCutData->startTime;
        *(_OWORD *)&p_currentCutData->angles.y = *(_OWORD *)&SceneData->nextCutData.angles.y;
        *(double *)&p_currentCutData->idealPitch = *(double *)&SceneData->nextCutData.idealPitch;
        CG_ClearCutData(p_nextCutData);
      }
      CG_UpdateCinematicCamera(localClientNum);
    }
  }
  memset(&outPosition, 0, sizeof(outPosition));
}

/*
==============
CG_UpdateCinematicCameraFixed
==============
*/
__int64 CG_UpdateCinematicCameraFixed(LocalClientNum_t localClientNum, const CinematicCameraSettings *camSettings, CameraCutData *cutData, const float percentTime, vec3_t *outPosition, vec3_t *outAngles)
{
  unsigned __int8 cameraMovementType; 
  bool actorIsSupporting; 
  int IsCinematicCameraActive; 
  int supportingActorId; 
  const centity_t *EntityOffsetPosition; 
  float v16; 
  float v17; 
  float v18; 
  __int64 v19; 
  vec3_t vec; 
  vec3_t v21; 

  if ( !cutData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 894, ASSERT_TYPE_ASSERT, "(cutData)", (const char *)&queryFormat, "cutData") )
    __debugbreak();
  if ( !camSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 895, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  cameraMovementType = camSettings->cameraMovementType;
  if ( cameraMovementType != 1 )
  {
    LODWORD(v19) = cameraMovementType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 896, ASSERT_TYPE_ASSERT, "( ( camSettings->cameraMovementType == CAMERAMOVEMENTTYPE_FIXED ) )", "( camSettings->cameraMovementType ) = %i", v19) )
      __debugbreak();
  }
  if ( percentTime < 0.0 || percentTime > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 897, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( percentTime ) && ( percentTime ) <= ( 1.0f )", "percentTime not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", percentTime, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  actorIsSupporting = camSettings->fixedCamera.actorIsSupporting;
  IsCinematicCameraActive = CG_IsCinematicCameraActive(localClientNum);
  if ( actorIsSupporting )
  {
    if ( !IsCinematicCameraActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 872, ASSERT_TYPE_ASSERT, "(CG_IsCinematicCameraActive( localClientNum ))", (const char *)&queryFormat, "CG_IsCinematicCameraActive( localClientNum )") )
      __debugbreak();
    supportingActorId = CG_CinematicCamera_GetSceneData(localClientNum)->supportingActorId;
  }
  else
  {
    if ( !IsCinematicCameraActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 872, ASSERT_TYPE_ASSERT, "(CG_IsCinematicCameraActive( localClientNum ))", (const char *)&queryFormat, "CG_IsCinematicCameraActive( localClientNum )") )
      __debugbreak();
    supportingActorId = CG_CinematicCamera_GetSceneData(localClientNum)->leadingActorId;
  }
  switch ( camSettings->cameraAnglesType )
  {
    case 1u:
      *outPosition = *(vec3_t *)&camSettings->zoomingCamera.endEntityPosition.optionalTagName;
      *outAngles = camSettings->fixedCamera.fixedAngles;
      return percentTime >= 1.0;
    case 2u:
      *outPosition = *(vec3_t *)&camSettings->zoomingCamera.endEntityPosition.optionalTagName;
      v16 = camSettings->fixedCamera.fixedAngles.v[1];
      vec.v[0] = camSettings->fixedCamera.fixedAngles.v[0] - camSettings->fixedCamera.worldPosition.v[0];
      v17 = camSettings->fixedCamera.fixedAngles.v[2];
      goto LABEL_36;
    case 3u:
      *outPosition = *(vec3_t *)&camSettings->zoomingCamera.endEntityPosition.optionalTagName;
      if ( !CG_CinematicCameraGetEntityOffsetPosition(localClientNum, supportingActorId, (const EntityPositionOffset *)camSettings, &v21) )
        return percentTime >= 1.0;
      v16 = v21.v[1];
      vec.v[0] = v21.v[0] - camSettings->fixedCamera.worldPosition.v[0];
      v17 = v21.v[2];
LABEL_36:
      v18 = v16 - camSettings->fixedCamera.worldPosition.v[1];
      vec.v[2] = v17 - camSettings->fixedCamera.worldPosition.v[2];
      vec.v[1] = v18;
      vectoangles(&vec, outAngles);
      return percentTime >= 1.0;
    case 4u:
      EntityOffsetPosition = CG_CinematicCameraGetEntityOffsetPosition(localClientNum, supportingActorId, (const EntityPositionOffset *)camSettings, outPosition);
      if ( EntityOffsetPosition )
      {
        *outAngles = EntityOffsetPosition->pose.angles;
        if ( camSettings->collision )
          CameraFixedAttachedTrace(localClientNum, EntityOffsetPosition, camSettings->fixedCamera.linkedFocusTarget.optionalTagName, 3.0, outPosition);
      }
      return percentTime >= 1.0;
  }
  LODWORD(v19) = camSettings->cameraAnglesType;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 945, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_UpdateCinematicCameraFixed: unknown camera orientation index %d", v19) )
    __debugbreak();
  return 1i64;
}

/*
==============
CG_UpdateCinematicCameraLerp
==============
*/
void CG_UpdateCinematicCameraLerp(LocalClientNum_t localClientNum, CameraSceneData *sceneData, const float percentTime, vec3_t *cameraPosition, vec3_t *cameraAngles)
{
  CinematicCameraScene *currentCameraScene; 
  __int64 currentCutIndex; 
  const CinematicCameraSettings *v10; 
  float lerp; 
  cg_t *LocalClientGlobals; 
  float v13; 
  float v14; 
  float v15; 
  cg_t *v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v30; 
  float v32; 
  float v34; 
  float v35; 
  vec3_t outPosition; 
  vec3_t outAngles; 

  if ( !CG_IsCinematicCameraActive(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1583, ASSERT_TYPE_ASSERT, "(CG_IsCinematicCameraActive( localClientNum ))", (const char *)&queryFormat, "CG_IsCinematicCameraActive( localClientNum )") )
    __debugbreak();
  if ( !sceneData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1584, ASSERT_TYPE_ASSERT, "(sceneData)", (const char *)&queryFormat, "sceneData") )
    __debugbreak();
  currentCameraScene = sceneData->currentCameraScene;
  if ( !CG_IsRunningLastSceneCut(sceneData) )
  {
    currentCutIndex = sceneData->currentCutIndex;
    v10 = &currentCameraScene->cameraCuts[currentCutIndex + 1];
    lerp = currentCameraScene->cameraCuts[currentCutIndex + 1].lerp;
    if ( lerp > 0.0 && currentCameraScene->cameraCuts[currentCutIndex].time > 0.0 && (float)(1.0 - percentTime) <= lerp )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      v13 = v10->lerp;
      v14 = 1.0 - (float)((float)(1.0 - percentTime) / v13);
      v15 = v13 * v14;
      v16 = LocalClientGlobals;
      if ( (float)(v13 * v14) < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1613, ASSERT_TYPE_ASSERT, "( ( percentTimeIntoNextCut >= 0.0f ) )", "( percentTimeIntoNextCut ) = %g", v15) )
        __debugbreak();
      if ( sceneData->nextCutData.startTime <= 0 )
      {
        sceneData->nextCutData.useCurrentAsStartPosition = 1;
        CG_InitCameraCutData(localClientNum, v10, &sceneData->nextCutData);
      }
      v17 = cameraPosition->v[1];
      outPosition.v[0] = cameraPosition->v[0];
      v18 = cameraPosition->v[2];
      outPosition.v[1] = v17;
      v19 = cameraAngles->v[0];
      outPosition.v[2] = v18;
      v20 = cameraAngles->v[1];
      outAngles.v[0] = v19;
      v21 = cameraAngles->v[2];
      outAngles.v[1] = v20;
      outAngles.v[2] = v21;
      CG_GetCameraPositionAngles(localClientNum, v10, &sceneData->nextCutData, v15, &outPosition, &outAngles);
      v22 = outPosition.v[0];
      if ( percentTime >= 1.0 )
      {
        cameraPosition->v[1] = outPosition.v[1];
        v34 = outAngles.v[0];
        cameraPosition->v[0] = v22;
        cameraPosition->v[2] = outPosition.v[2];
        v35 = outAngles.v[1];
        cameraAngles->v[0] = v34;
        cameraAngles->v[2] = outAngles.v[2];
        cameraAngles->v[1] = v35;
        sceneData->nextCutData.startTime = v16->time - (int)(float)((float)(v10->time * v10->lerp) * 1000.0);
      }
      else
      {
        v23 = outPosition.v[1] - cameraPosition->v[1];
        v24 = outPosition.v[2];
        cameraPosition->v[0] = (float)((float)(outPosition.v[0] - cameraPosition->v[0]) * v14) + cameraPosition->v[0];
        v25 = v23 * v14;
        v26 = v24 - cameraPosition->v[2];
        v27 = outAngles.v[0];
        cameraPosition->v[1] = v25 + cameraPosition->v[1];
        cameraPosition->v[2] = (float)(v26 * v14) + cameraPosition->v[2];
        _XMM9 = 0i64;
        __asm { vroundss xmm2, xmm9, xmm1, 1 }
        v30 = (float)(outAngles.v[1] - cameraAngles->v[1]) * 0.0027777778;
        cameraAngles->v[0] = (float)((float)((float)((float)((float)(v27 - cameraAngles->v[0]) * 0.0027777778) - *(float *)&_XMM2) * 360.0) * v14) + cameraAngles->v[0];
        __asm { vroundss xmm3, xmm9, xmm2, 1 }
        v32 = (float)(outAngles.v[2] - cameraAngles->v[2]) * 0.0027777778;
        cameraAngles->v[1] = (float)((float)((float)(v30 - *(float *)&_XMM3) * 360.0) * v14) + cameraAngles->v[1];
        __asm { vroundss xmm3, xmm9, xmm2, 1 }
        cameraAngles->v[2] = (float)((float)((float)(v32 - *(float *)&_XMM3) * 360.0) * v14) + cameraAngles->v[2];
      }
    }
  }
}

/*
==============
CG_UpdateCinematicCameraPan
==============
*/
_BOOL8 CG_UpdateCinematicCameraPan(LocalClientNum_t localClientNum, const CinematicCameraSettings *camSettings, CameraCutData *cutData, const float percentTime, vec3_t *outPosition, vec3_t *outAngles)
{
  unsigned __int8 cameraMovementType; 
  CameraSceneData *SceneData; 
  unsigned int leadingActorId; 
  unsigned int supportingActorId; 
  const centity_t *EntityOffsetPosition; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  unsigned int v32; 
  unsigned int v33; 
  int v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  CinematicCameraSettings *camSettingsa; 
  int time; 
  unsigned int entityId; 
  vec3_t v49; 
  vec3_t start; 
  vec3_t vec; 
  vec3_t end; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t right; 
  vec3_t v56; 

  if ( !cutData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 974, ASSERT_TYPE_ASSERT, "(cutData)", (const char *)&queryFormat, "cutData") )
    __debugbreak();
  if ( !camSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 975, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  cameraMovementType = camSettings->cameraMovementType;
  if ( cameraMovementType != 2 )
  {
    LODWORD(camSettingsa) = cameraMovementType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 976, ASSERT_TYPE_ASSERT, "( ( camSettings->cameraMovementType == CAMERAMOVEMENTTYPE_PAN ) )", "( camSettings->cameraMovementType ) = %i", camSettingsa) )
      __debugbreak();
  }
  if ( percentTime < 0.0 || percentTime > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 977, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( percentTime ) && ( percentTime ) <= ( 1.0f )", "percentTime not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", percentTime, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  if ( !CG_IsCinematicCameraActive(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 872, ASSERT_TYPE_ASSERT, "(CG_IsCinematicCameraActive( localClientNum ))", (const char *)&queryFormat, "CG_IsCinematicCameraActive( localClientNum )") )
    __debugbreak();
  SceneData = CG_CinematicCamera_GetSceneData(localClientNum);
  leadingActorId = SceneData->leadingActorId;
  supportingActorId = SceneData->supportingActorId;
  time = CG_GetLocalClientGlobals(localClientNum)->time;
  switch ( camSettings->cameraAnglesType )
  {
    case 1u:
      outPosition->v[0] = (float)((float)(camSettings->panningCamera.fixedPan.endWorldPosition.v[0] - camSettings->fixedCamera.worldPosition.v[0]) * percentTime) + camSettings->fixedCamera.worldPosition.v[0];
      outPosition->v[1] = (float)((float)(camSettings->panningCamera.fixedPan.endWorldPosition.v[1] - camSettings->fixedCamera.worldPosition.v[1]) * percentTime) + camSettings->fixedCamera.worldPosition.v[1];
      outPosition->v[2] = (float)((float)(camSettings->panningCamera.fixedPan.endWorldPosition.v[2] - camSettings->fixedCamera.worldPosition.v[2]) * percentTime) + camSettings->fixedCamera.worldPosition.v[2];
      *(_QWORD *)outAngles->v = *(_QWORD *)camSettings->fixedCamera.fixedAngles.v;
      v31 = camSettings->fixedCamera.fixedAngles.v[2];
LABEL_58:
      outAngles->v[2] = v31;
      return percentTime >= 1.0;
    case 2u:
      v36 = camSettings->fixedCamera.worldPosition.v[1];
      LODWORD(start.v[0]) = camSettings->panningCamera.targetPan.startEntityPosition.optionalTagName;
      start.v[2] = camSettings->fixedCamera.worldPosition.v[2];
      v37 = camSettings->panningCamera.fixedPan.endWorldPosition.v[1];
      start.v[1] = v36;
      v38 = camSettings->panningCamera.fixedPan.endWorldPosition.v[0];
      end.v[1] = v37;
      v39 = camSettings->fixedCamera.fixedAngles.v[0];
      end.v[0] = v38;
      v40 = camSettings->panningCamera.fixedPan.endWorldPosition.v[2];
      v49.v[0] = v39;
      v41 = camSettings->fixedCamera.fixedAngles.v[2];
      end.v[2] = v40;
      v42 = camSettings->fixedCamera.fixedAngles.v[1];
      v49.v[2] = v41;
      v49.v[1] = v42;
      v34 = 2047;
LABEL_53:
      v43 = camSettings->time;
      if ( v43 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1094, ASSERT_TYPE_ASSERT, "( ( camSettings->time > 0.0f ) )", "( camSettings->time ) = %g", v43) )
        __debugbreak();
      CameraLerpTrace(localClientNum, &start, &end, percentTime, v34, camSettings, cutData, outPosition);
      v44 = v49.v[1] - outPosition->v[1];
      vec.v[0] = v49.v[0] - outPosition->v[0];
      vec.v[2] = v49.v[2] - outPosition->v[2];
      vec.v[1] = v44;
      vectoangles(&vec, &v56);
      v45 = v56.v[1];
      outAngles->v[0] = v56.v[0];
      outAngles->v[2] = v56.v[2];
      outAngles->v[1] = v45;
      return percentTime >= 1.0;
    case 3u:
      v32 = supportingActorId;
      if ( !camSettings->panningCamera.targetPan.focusOnSupportingActor )
        v32 = leadingActorId;
      entityId = v32;
      v33 = supportingActorId;
      if ( camSettings->panningCamera.targetPan.panToSupportingActor )
      {
        supportingActorId = leadingActorId;
        leadingActorId = v33;
      }
      if ( !CG_CinematicCameraGetEntityOffsetPosition(localClientNum, supportingActorId, &camSettings->panningCamera.targetPan.startEntityPosition, &start) )
      {
        Com_Printf(0, "<movement> pan <orientation> target does not have valid end entity id %d\n", supportingActorId);
        return 1i64;
      }
      if ( !CG_CinematicCameraGetEntityOffsetPosition(localClientNum, leadingActorId, &camSettings->panningCamera.targetPan.endEntityPosition, &end) )
      {
        Com_Printf(0, "<movement> pan <orientation> target does not have valid end entity id %d\n", leadingActorId);
        return 1i64;
      }
      v34 = entityId;
      if ( !CG_CinematicCameraGetEntityOffsetPosition(localClientNum, entityId, (const EntityPositionOffset *)camSettings, &v49) )
      {
        Com_Printf(0, "<movement> pan <orientation> target does not have valid focus entity id %d\n", entityId);
        return 1i64;
      }
      if ( cutData->useCurrentAsStartPosition || camSettings->useCurrentAsStartPosition )
      {
        if ( cutData->startTime == time )
          cutData->startPosition = *outPosition;
        v35 = cutData->startPosition.v[1];
        start.v[0] = cutData->startPosition.v[0];
        start.v[2] = cutData->startPosition.v[2];
        start.v[1] = v35;
      }
      goto LABEL_53;
    case 4u:
      if ( !camSettings->panningCamera.targetPan.focusOnSupportingActor )
        leadingActorId = supportingActorId;
      EntityOffsetPosition = CG_CinematicCameraGetEntityOffsetPosition(localClientNum, leadingActorId, (const EntityPositionOffset *)camSettings, &v49);
      if ( !EntityOffsetPosition )
      {
        Com_Printf(0, "<pan> camera does not have valid entity id %d\n", leadingActorId);
        return 1i64;
      }
      if ( camSettings->panningCamera.attachedPan.mountedToActor || cutData->startTime == time )
      {
        v18 = EntityOffsetPosition->pose.angles.v[1] + camSettings->panningCamera.fixedPan.endWorldPosition.v[0];
        v19 = camSettings->fixedCamera.worldPosition.v[0];
        angles.v[0] = camSettings->fixedCamera.worldPosition.v[2] + EntityOffsetPosition->pose.angles.v[0];
        v20 = camSettings->fixedCamera.worldPosition.v[1];
        angles.v[2] = EntityOffsetPosition->pose.angles.v[2] + camSettings->panningCamera.fixedPan.endWorldPosition.v[1];
        angles.v[1] = v18;
        AngleVectors(&angles, &forward, &right, NULL);
        v21 = (float)(v19 * forward.v[0]) + v49.v[0];
        v22 = (float)(v19 * forward.v[1]) + v49.v[1];
        v23 = (float)(v19 * forward.v[2]) + v49.v[2];
        vec.v[0] = v49.v[0] - v21;
        vec.v[2] = v49.v[2] - v23;
        vec.v[1] = v49.v[1] - v22;
        vectoangles(&vec, &cutData->angles);
        v24 = (float)(v20 * 0.5) * right.v[1];
        cutData->startPosition.v[0] = (float)((float)(v20 * 0.5) * right.v[0]) + v21;
        v25 = v24 + v22;
        v26 = (float)(v20 * 0.5) * right.v[2];
        v27 = (float)(v20 * -0.5) * right.v[1];
        cutData->startPosition.v[1] = v25;
        v28 = v26 + v23;
        v29 = (float)(v20 * -0.5) * right.v[0];
        cutData->startPosition.v[2] = v28;
        cutData->endPosition.v[0] = v29 + v21;
        cutData->endPosition.v[2] = (float)((float)(v20 * -0.5) * right.v[2]) + v23;
        cutData->endPosition.v[1] = v27 + v22;
      }
      if ( camSettings->panningCamera.attachedPan.panRightToLeft )
      {
        outPosition->v[0] = (float)((float)(cutData->startPosition.v[0] - cutData->endPosition.v[0]) * percentTime) + cutData->endPosition.v[0];
        outPosition->v[1] = (float)((float)(cutData->startPosition.v[1] - cutData->endPosition.v[1]) * percentTime) + cutData->endPosition.v[1];
        v30 = (float)((float)(cutData->startPosition.v[2] - cutData->endPosition.v[2]) * percentTime) + cutData->endPosition.v[2];
      }
      else
      {
        outPosition->v[0] = (float)((float)(cutData->endPosition.v[0] - cutData->startPosition.v[0]) * percentTime) + cutData->startPosition.v[0];
        outPosition->v[1] = (float)((float)(cutData->endPosition.v[1] - cutData->startPosition.v[1]) * percentTime) + cutData->startPosition.v[1];
        v30 = (float)((float)(cutData->endPosition.v[2] - cutData->startPosition.v[2]) * percentTime) + cutData->startPosition.v[2];
      }
      outPosition->v[2] = v30;
      if ( camSettings->collision )
        CameraFixedAttachedTrace(localClientNum, EntityOffsetPosition, camSettings->fixedCamera.linkedFocusTarget.optionalTagName, 1.0, outPosition);
      *(_QWORD *)outAngles->v = *(_QWORD *)cutData->angles.v;
      v31 = cutData->angles.v[2];
      goto LABEL_58;
  }
  LODWORD(camSettingsa) = camSettings->cameraAnglesType;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1089, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_UpdateCinematicCameraPan: unknown camera orientation index %d", camSettingsa) )
    __debugbreak();
  return 1i64;
}

/*
==============
CG_UpdateCinematicCameraRotate
==============
*/
__int64 CG_UpdateCinematicCameraRotate(LocalClientNum_t localClientNum, const CinematicCameraSettings *camSettings, CameraCutData *cutData, const float percentTime, vec3_t *outPosition, vec3_t *outAngles)
{
  vec3_t *v7; 
  unsigned __int8 cameraMovementType; 
  unsigned int v14; 
  const centity_t *cent; 
  cg_t *LocalClientGlobals; 
  float time; 
  float v18; 
  float v19; 
  float v20; 
  CameraSceneData *SceneData; 
  unsigned int supportingActorId; 
  const centity_t *EntityOffsetPosition; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  vec3_t *v34; 
  vec3_t *v35; 
  vec3_t angles; 
  vec3_t focusPosition; 
  vec3_t end; 
  vec3_t forward; 
  vec3_t vec; 

  v7 = outAngles;
  if ( !cutData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1221, ASSERT_TYPE_ASSERT, "(cutData)", (const char *)&queryFormat, "cutData") )
    __debugbreak();
  if ( !camSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1222, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  cameraMovementType = camSettings->cameraMovementType;
  if ( cameraMovementType != 3 )
  {
    LODWORD(v34) = cameraMovementType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1223, ASSERT_TYPE_ASSERT, "( ( camSettings->cameraMovementType == CAMERAMOVEMENTTYPE_ROTATE ) )", "( camSettings->cameraMovementType ) = %i", v34) )
      __debugbreak();
  }
  if ( percentTime < 0.0 || percentTime > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1224, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( percentTime ) && ( percentTime ) <= ( 1.0f )", "percentTime not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", percentTime, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  v14 = 0;
  cent = NULL;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  time = camSettings->time;
  v18 = (float)LocalClientGlobals->frametime * 0.001;
  angles.v[0] = 0.0;
  angles.v[1] = 0.0;
  angles.v[2] = 0.0;
  CG_CameraRotateUpdateAngles((const RotatingCamera *)camSettings, percentTime, time, v18, cutData, &angles);
  if ( camSettings->time <= 0.0 || (v19 = camSettings->panningCamera.fixedPan.endWorldPosition.v[1], v19 <= 0.0) )
    v20 = camSettings->panningCamera.fixedPan.endWorldPosition.v[0];
  else
    v20 = (float)((float)(1.0 - percentTime) * camSettings->panningCamera.fixedPan.endWorldPosition.v[0]) + (float)(v19 * percentTime);
  if ( camSettings->cameraAnglesType == 1 )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144275B30, 1221i64);
    return 1i64;
  }
  if ( camSettings->cameraAnglesType == 2 )
  {
    v31 = camSettings->fixedCamera.fixedAngles.v[1];
    LODWORD(focusPosition.v[0]) = camSettings->fixedCamera.linkedFocusTarget.optionalTagName;
    focusPosition.v[2] = camSettings->fixedCamera.fixedAngles.v[2];
    focusPosition.v[1] = v31;
  }
  else
  {
    if ( camSettings->cameraAnglesType != 3 )
    {
      if ( camSettings->cameraAnglesType == 4 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_144275BB0, 1222i64);
      }
      else
      {
        LODWORD(v35) = camSettings->cameraAnglesType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1273, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_UpdateCinematicCameraRotate: unknown camera orientation index %d", v35) )
          __debugbreak();
      }
      return 1i64;
    }
    if ( !CG_IsCinematicCameraActive(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 872, ASSERT_TYPE_ASSERT, "(CG_IsCinematicCameraActive( localClientNum ))", (const char *)&queryFormat, "CG_IsCinematicCameraActive( localClientNum )") )
      __debugbreak();
    SceneData = CG_CinematicCamera_GetSceneData(localClientNum);
    supportingActorId = SceneData->supportingActorId;
    if ( !camSettings->rotatingCamera.focusOnSupportingActor )
      supportingActorId = SceneData->leadingActorId;
    EntityOffsetPosition = CG_CinematicCameraGetEntityOffsetPosition(localClientNum, supportingActorId, (const EntityPositionOffset *)camSettings, &focusPosition);
    cent = EntityOffsetPosition;
    if ( !EntityOffsetPosition )
    {
      Com_Printf(0, "<rotate> camera does not have valid entity id %d\n", supportingActorId);
      return 1i64;
    }
    if ( !camSettings->rotatingCamera.worldDeltaAngles )
    {
      angles.v[0] = angles.v[0] + EntityOffsetPosition->pose.angles.v[0];
      angles.v[1] = angles.v[1] + EntityOffsetPosition->pose.angles.v[1];
      angles.v[2] = angles.v[2] + EntityOffsetPosition->pose.angles.v[2];
    }
    if ( camSettings->rotatingCamera.rotateYawBothActors )
      CG_CameraRotateYawToViewActor(localClientNum, (const RotatingCamera *)camSettings, percentTime, v20, &focusPosition, &angles);
    v7 = outAngles;
  }
  AngleVectors(&angles, &forward, NULL, NULL);
  v24 = focusPosition.v[0];
  v25 = focusPosition.v[1];
  v26 = (float)(COERCE_FLOAT(LODWORD(v20) ^ _xmm) * forward.v[0]) + focusPosition.v[0];
  v27 = (float)(COERCE_FLOAT(LODWORD(v20) ^ _xmm) * forward.v[1]) + focusPosition.v[1];
  v28 = focusPosition.v[2];
  v29 = (float)(COERCE_FLOAT(LODWORD(v20) ^ _xmm) * forward.v[2]) + focusPosition.v[2];
  end.v[2] = v29;
  end.v[0] = v26;
  end.v[1] = v27;
  if ( camSettings->collision )
  {
    if ( cutData->detached )
    {
      v30 = cutData->endPosition.v[1];
      end.v[0] = cutData->endPosition.v[0];
      end.v[2] = cutData->endPosition.v[2];
      end.v[1] = v30;
    }
    CameraRotateTrace(localClientNum, (const RotatingCamera *)camSettings, percentTime, &focusPosition, &end, v20, cent, cutData, outPosition);
    v26 = outPosition->v[0];
    v28 = focusPosition.v[2];
    v25 = focusPosition.v[1];
    v24 = focusPosition.v[0];
  }
  else
  {
    outPosition->v[0] = v26;
    outPosition->v[1] = v27;
    outPosition->v[2] = v29;
  }
  cutData->endPosition.v[0] = v26;
  *(_QWORD *)&cutData->endPosition.y = *(_QWORD *)&outPosition->y;
  v32 = v25 - outPosition->v[1];
  vec.v[0] = v24 - outPosition->v[0];
  vec.v[2] = v28 - outPosition->v[2];
  vec.v[1] = v32;
  vectoangles(&vec, v7);
  LOBYTE(v14) = percentTime >= 1.0;
  return v14;
}

/*
==============
CG_UpdateCinematicCameraZoom
==============
*/
_BOOL8 CG_UpdateCinematicCameraZoom(LocalClientNum_t localClientNum, const CinematicCameraSettings *camSettings, CameraCutData *cutData, const float percentTime, vec3_t *outPosition, vec3_t *outAngles)
{
  unsigned __int8 cameraMovementType; 
  cg_t *LocalClientGlobals; 
  CameraSceneData *SceneData; 
  unsigned int leadingActorId; 
  unsigned int supportingActorId; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float time; 
  float v25; 
  float v26; 
  __int128 v27; 
  float v28; 
  float v31; 
  float v32; 
  CinematicCameraSettings *camSettingsa; 
  vec3_t end; 
  vec3_t start; 
  vec3_t vec; 

  if ( !cutData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1316, ASSERT_TYPE_ASSERT, "(cutData)", (const char *)&queryFormat, "cutData") )
    __debugbreak();
  if ( !camSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1317, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  cameraMovementType = camSettings->cameraMovementType;
  if ( cameraMovementType != 4 )
  {
    LODWORD(camSettingsa) = cameraMovementType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1318, ASSERT_TYPE_ASSERT, "( ( camSettings->cameraMovementType == CAMERAMOVEMENTTYPE_ZOOM ) )", "( camSettings->cameraMovementType ) = %i", camSettingsa) )
      __debugbreak();
  }
  if ( percentTime < 0.0 || percentTime > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1319, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( percentTime ) && ( percentTime ) <= ( 1.0f )", "percentTime not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", percentTime, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !CG_IsCinematicCameraActive(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 872, ASSERT_TYPE_ASSERT, "(CG_IsCinematicCameraActive( localClientNum ))", (const char *)&queryFormat, "CG_IsCinematicCameraActive( localClientNum )") )
    __debugbreak();
  SceneData = CG_CinematicCamera_GetSceneData(localClientNum);
  leadingActorId = SceneData->leadingActorId;
  supportingActorId = SceneData->supportingActorId;
  if ( camSettings->zoomingCamera.reverseActorRoles )
  {
    leadingActorId = SceneData->supportingActorId;
    supportingActorId = SceneData->leadingActorId;
  }
  switch ( camSettings->cameraAnglesType )
  {
    case 1u:
      v19 = camSettings->fixedCamera.fixedAngles.v[1];
      LODWORD(start.v[0]) = camSettings->fixedCamera.linkedFocusTarget.optionalTagName;
      v20 = camSettings->fixedCamera.fixedAngles.v[2];
      start.v[1] = v19;
      v21 = camSettings->fixedCamera.worldPosition.v[0];
      start.v[2] = v20;
      v22 = camSettings->fixedCamera.worldPosition.v[1];
      end.v[0] = v21;
      v23 = camSettings->fixedCamera.worldPosition.v[2];
      end.v[1] = v22;
      end.v[2] = v23;
      leadingActorId = -1;
      break;
    case 2u:
      if ( !CG_CinematicCameraGetEntityOffsetPosition(localClientNum, leadingActorId, (const EntityPositionOffset *)camSettings, &start) )
        goto LABEL_32;
      v18 = camSettings->fixedCamera.worldPosition.v[1];
      LODWORD(end.v[0]) = camSettings->panningCamera.targetPan.startEntityPosition.optionalTagName;
      end.v[2] = camSettings->fixedCamera.worldPosition.v[2];
      end.v[1] = v18;
      break;
    case 3u:
      if ( CG_CinematicCameraGetEntityOffsetPosition(localClientNum, leadingActorId, (const EntityPositionOffset *)camSettings, &start) )
      {
LABEL_29:
        if ( !CG_CinematicCameraGetEntityOffsetPosition(localClientNum, leadingActorId, &camSettings->panningCamera.targetPan.startEntityPosition, &end) )
        {
          Com_Printf(0, "<zoom> camera does not have valid end entity id %d\n", leadingActorId);
          return 1i64;
        }
        break;
      }
LABEL_32:
      Com_Printf(0, "<zoom> camera does not have valid start entity id %d\n", leadingActorId);
      return 1i64;
    case 4u:
      if ( !CG_CinematicCameraGetEntityOffsetPosition(localClientNum, supportingActorId, (const EntityPositionOffset *)camSettings, &start) )
      {
        Com_Printf(0, "<zoom> camera does not have valid start entity id %d\n", supportingActorId);
        return 1i64;
      }
      goto LABEL_29;
    default:
      LODWORD(camSettingsa) = camSettings->cameraAnglesType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1386, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_UpdateCinematicCameraZoom: unknown camera orientation index %d", camSettingsa) )
        __debugbreak();
      return 1i64;
  }
  time = camSettings->time;
  if ( time <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1391, ASSERT_TYPE_ASSERT, "( ( camSettings->time > 0.0f ) )", "( camSettings->time ) = %g", time) )
    __debugbreak();
  if ( cutData->useCurrentAsStartPosition || camSettings->useCurrentAsStartPosition )
  {
    if ( LocalClientGlobals->time == cutData->startTime )
      cutData->startPosition = *outPosition;
    v25 = cutData->startPosition.v[1];
    start.v[0] = cutData->startPosition.v[0];
    start.v[2] = cutData->startPosition.v[2];
    start.v[1] = v25;
  }
  v26 = camSettings->panningCamera.fixedPan.endWorldPosition.v[2];
  if ( v26 > 0.0 && (float)((float)((float)((float)(end.v[1] - start.v[1]) * (float)(end.v[1] - start.v[1])) + (float)((float)(end.v[0] - start.v[0]) * (float)(end.v[0] - start.v[0]))) + (float)((float)(end.v[2] - start.v[2]) * (float)(end.v[2] - start.v[2]))) > (float)(v26 * v26) )
  {
    v27 = LODWORD(start.v[1]);
    vec.v[1] = start.v[1] - end.v[1];
    vec.v[0] = start.v[0] - end.v[0];
    *(float *)&v27 = (float)((float)((float)(start.v[1] - end.v[1]) * (float)(start.v[1] - end.v[1])) + (float)((float)(start.v[0] - end.v[0]) * (float)(start.v[0] - end.v[0]))) + (float)((float)(start.v[2] - end.v[2]) * (float)(start.v[2] - end.v[2]));
    vec.v[2] = start.v[2] - end.v[2];
    if ( *(float *)&v27 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
      __debugbreak();
    v28 = camSettings->panningCamera.fixedPan.endWorldPosition.v[2];
    _XMM1 = v27;
    __asm { vrsqrtss xmm5, xmm1, xmm1 }
    end.v[0] = (float)((float)(*(float *)&_XMM5 * vec.v[0]) * v28) + end.v[0];
    end.v[2] = (float)((float)(*(float *)&_XMM5 * vec.v[2]) * v28) + end.v[2];
    end.v[1] = (float)((float)(*(float *)&_XMM5 * vec.v[1]) * v28) + end.v[1];
  }
  CameraLerpTrace(localClientNum, &start, &end, percentTime, leadingActorId, camSettings, cutData, outPosition);
  v31 = end.v[0] - outPosition->v[0];
  v32 = end.v[2] - outPosition->v[2];
  vec.v[1] = end.v[1] - outPosition->v[1];
  vec.v[0] = v31;
  vec.v[2] = v32;
  if ( (float)((float)((float)(vec.v[1] * vec.v[1]) + (float)(v31 * v31)) + (float)(v32 * v32)) > 0.001 )
    vectoangles(&vec, outAngles);
  return percentTime >= 1.0;
}

/*
==============
CameraFixedAttachedTrace
==============
*/
void CameraFixedAttachedTrace(LocalClientNum_t localClientNum, const centity_t *cent, scr_string_t tagName, const float collisionRadius, vec3_t *result)
{
  const DObj *ClientDObj; 
  int skipEntity; 
  __int32 v10; 
  float v11; 
  float v12; 
  float v13; 
  float fraction; 
  float v15; 
  float v16; 
  vec3_t outOrigin; 
  vec3_t end; 
  Bounds bounds; 
  trace_t results; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 410, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  if ( tagName )
  {
    ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
    if ( ClientDObj )
      CG_DObjGetWorldTagPos(&cent->pose, ClientDObj, tagName, &outOrigin);
  }
  skipEntity = cent->nextState.number;
  v10 = 3 * localClientNum + 2;
  bounds.midPoint.v[0] = 0.0;
  bounds.midPoint.v[1] = 0.0;
  bounds.midPoint.v[2] = 0.0;
  bounds.halfSize.v[0] = collisionRadius;
  bounds.halfSize.v[1] = collisionRadius;
  bounds.halfSize.v[2] = collisionRadius;
  PhysicsQuery_LegacyTrace((Physics_WorldId)v10, &results, &outOrigin, result, &bounds, skipEntity, 0, 33636369, 0, NULL, All);
  if ( results.startsolid )
  {
    v11 = outOrigin.v[1];
    result->v[0] = outOrigin.v[0];
    result->v[2] = outOrigin.v[2] + 15.0;
    result->v[1] = v11;
  }
  else if ( results.fraction != 1.0 )
  {
    v12 = (float)(result->v[1] - outOrigin.v[1]) * results.fraction;
    v13 = result->v[2] - outOrigin.v[2];
    end.v[0] = (float)((float)(result->v[0] - outOrigin.v[0]) * results.fraction) + outOrigin.v[0];
    end.v[1] = v12 + outOrigin.v[1];
    end.v[2] = (float)((float)(v13 * results.fraction) + outOrigin.v[2]) + (float)((float)(1.0 - results.fraction) * 15.0);
    PhysicsQuery_LegacyTrace((Physics_WorldId)v10, &results, &outOrigin, &end, &bounds, skipEntity, 0, 33636369, 0, NULL, All);
    fraction = results.fraction;
    v15 = end.v[1];
    result->v[0] = (float)((float)(end.v[0] - outOrigin.v[0]) * results.fraction) + outOrigin.v[0];
    v16 = (float)(end.v[2] - outOrigin.v[2]) * fraction;
    result->v[1] = (float)((float)(v15 - outOrigin.v[1]) * fraction) + outOrigin.v[1];
    result->v[2] = v16 + outOrigin.v[2];
  }
}

/*
==============
CameraLerpTrace
==============
*/
void CameraLerpTrace(LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, const float interpolation, const int passEntityNum, const CinematicCameraSettings *camSettings, CameraCutData *cutData, vec3_t *result)
{
  float time; 
  __int32 v12; 
  float fraction; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  Bounds bounds; 
  trace_t results; 

  if ( !camSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 461, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  if ( !cutData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 462, ASSERT_TYPE_ASSERT, "(cutData)", (const char *)&queryFormat, "cutData") )
    __debugbreak();
  result->v[0] = (float)((float)(end->v[0] - start->v[0]) * interpolation) + start->v[0];
  result->v[1] = (float)((float)(end->v[1] - start->v[1]) * interpolation) + start->v[1];
  result->v[2] = (float)((float)(end->v[2] - start->v[2]) * interpolation) + start->v[2];
  if ( camSettings->collision && !VecNCompareCustomEpsilon(start->v, end->v, 0.001, 3) )
  {
    time = camSettings->time;
    if ( time <= 0.0 )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442754C0, 1220i64, time);
    v12 = 3 * localClientNum + 2;
    bounds.halfSize.v[1] = FLOAT_3_0;
    bounds.halfSize.v[2] = FLOAT_3_0;
    *(_OWORD *)bounds.midPoint.v = _xmm;
    PhysicsQuery_LegacyTrace((Physics_WorldId)v12, &results, start, end, &bounds, passEntityNum, 0, 33636369, 0, NULL, All);
    fraction = results.fraction;
    if ( results.fraction < 1.0 && interpolation > results.fraction )
    {
      PhysicsQuery_LegacyTrace((Physics_WorldId)v12, &results, start, end, &bounds, passEntityNum, 0, 33636369, 0, NULL, All);
      v14 = (float)((float)(start->v[0] - end->v[0]) * results.fraction) + end->v[0];
      v15 = (float)((float)(start->v[1] - end->v[1]) * results.fraction) + end->v[1];
      v16 = (float)((float)(start->v[2] - end->v[2]) * results.fraction) + end->v[2];
      v17 = (float)((float)(interpolation - fraction) / (float)(1.0 - fraction)) + (float)((float)(1.0 - (float)((float)(interpolation - fraction) / (float)(1.0 - fraction))) * fraction);
      result->v[0] = (float)((float)(end->v[0] - v14) * v17) + v14;
      result->v[1] = (float)((float)(end->v[1] - v15) * v17) + v15;
      result->v[2] = (float)((float)(end->v[2] - v16) * v17) + v16;
    }
  }
}

/*
==============
CameraRotateTrace
==============
*/
void CameraRotateTrace(LocalClientNum_t localClientNum, const RotatingCamera *rotatingCamera, const float percentTime, const vec3_t *start, const vec3_t *end, const float reattachDistance, const centity_t *cent, CameraCutData *cutData, vec3_t *result)
{
  const dvar_t *v9; 
  float value; 
  const dvar_t *v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  int skipEntity; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float maxCollisionDistance; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  const dvar_t *v36; 
  __int128 unsignedInt; 
  const dvar_t *v38; 
  int v39; 
  float v40; 
  __int128 v45; 
  float v46; 
  double v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  __int128 v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v59; 
  int integer; 
  float v62; 
  vec3_t v63; 
  vec3_t vec; 
  vec3_t angles; 
  vec3_t forward; 
  Bounds bounds; 
  trace_t results; 

  v9 = DCONST_DVARFLT_cg_cinematicCameraRotateMinDistance;
  if ( !DCONST_DVARFLT_cg_cinematicCameraRotateMinDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraRotateMinDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  value = v9->current.value;
  v14 = DCONST_DVARFLT_cg_cinematicCameraRotateDetachDistance;
  v62 = value;
  if ( !DCONST_DVARFLT_cg_cinematicCameraRotateDetachDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraRotateDetachDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  v15 = value * value;
  v16 = v14->current.value * v14->current.value;
  v59 = value * value;
  v18 = (float)CG_GetLocalClientGlobals(localClientNum)->frametime * 0.001;
  v17 = v18;
  if ( cent )
    skipEntity = cent->nextState.number;
  else
    skipEntity = 2047;
  bounds.halfSize.v[1] = FLOAT_3_0;
  bounds.halfSize.v[2] = FLOAT_3_0;
  *(_OWORD *)bounds.midPoint.v = _xmm;
  if ( !cutData->detached )
  {
    PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, start, end, &bounds, skipEntity, 0, 33636369, 0, NULL, All);
    if ( results.fraction == 1.0 )
    {
      CameraRotateTrace_ReturnToIdealOrientation(rotatingCamera, v18, start, end, cutData, result);
      return;
    }
    v20 = start->v[0];
    v21 = start->v[1];
    v22 = start->v[2];
    v23 = (float)((float)(end->v[1] - v21) * results.fraction) + v21;
    v24 = (float)((float)((float)(end->v[2] - v22) * results.fraction) + v22) + (float)((float)(1.0 - results.fraction) * 15.0);
    v25 = v24 - v22;
    v63.v[0] = (float)((float)(end->v[0] - v20) * results.fraction) + v20;
    v63.v[1] = v23;
    v26 = v63.v[0] - v20;
    v27 = v23 - v21;
    v63.v[2] = v24;
    v28 = (float)((float)(v27 * v27) + (float)(v26 * v26)) + (float)(v25 * v25);
    if ( v28 >= v16 )
    {
      maxCollisionDistance = cutData->maxCollisionDistance;
      if ( maxCollisionDistance > 0.0 && (float)(maxCollisionDistance * maxCollisionDistance) < v28 )
      {
        v30 = maxCollisionDistance / fsqrt(v28);
        v63.v[0] = (float)(v30 * v26) + v20;
        v63.v[2] = (float)(v30 * v25) + v22;
        v63.v[1] = (float)(v30 * v27) + v21;
      }
      CameraRotateTrace_RetraceEndPos(localClientNum, start, &v63, skipEntity, &results, result);
      CameraRotateTrace_StoreReturnDistanceOffsets(rotatingCamera, percentTime, v18, start, result, cutData);
      return;
    }
    v15 = v59;
  }
  if ( !cutData->detached && cent )
  {
    cutData->angles.v[0] = cent->pose.angles.v[0] + cutData->angles.v[0];
    cutData->angles.v[1] = cutData->angles.v[1] + cent->pose.angles.v[1];
    cutData->angles.v[2] = cutData->angles.v[2] + cent->pose.angles.v[2];
  }
  cutData->maxCollisionDistance = 0.0;
  cutData->detached = 1;
  v31 = cutData->endPosition.v[1];
  v63.v[0] = cutData->endPosition.v[0];
  v63.v[2] = cutData->endPosition.v[2];
  v63.v[1] = v31;
  CameraRotateTrace_RetraceEndPos(localClientNum, start, &v63, skipEntity, &results, result);
  v32 = result->v[1] - start->v[1];
  v33 = result->v[2] - start->v[2];
  v34 = (float)((float)((float)(result->v[0] - start->v[0]) * (float)(result->v[0] - start->v[0])) + (float)(v32 * v32)) + (float)(v33 * v33);
  if ( v34 >= v15 )
  {
    cutData->endPosition = *result;
    v35 = start->v[1] - result->v[1];
    vec.v[0] = start->v[0] - result->v[0];
    vec.v[2] = start->v[2] - result->v[2];
    vec.v[1] = v35;
    vectoangles(&vec, &cutData->angles);
    if ( v34 < (float)(reattachDistance * reattachDistance) )
      return;
    cutData->detached = 0;
    CameraRotateTrace_StoreReturnDistanceOffsets(rotatingCamera, percentTime, v17, start, result, cutData);
    if ( !cent )
      return;
LABEL_41:
    AnglesSubtract(&cutData->angles, &cent->pose.angles, &cutData->angles);
    return;
  }
  v36 = DCONST_DVARFLT_cg_cinematicCameraRotateCollisionDegreesSkip;
  if ( !DCONST_DVARFLT_cg_cinematicCameraRotateCollisionDegreesSkip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraRotateCollisionDegreesSkip") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  unsignedInt = v36->current.unsignedInt;
  v38 = DCONST_DVARINT_cg_cinematicCameraRotateMaxTracesPerFrame;
  if ( !DCONST_DVARINT_cg_cinematicCameraRotateMaxTracesPerFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraRotateMaxTracesPerFrame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v38);
  v39 = 0;
  integer = v38->current.integer;
  v40 = cutData->angles.v[1];
  angles.v[0] = cutData->angles.v[0];
  angles.v[2] = cutData->angles.v[2];
  _XMM0 = 0i64;
  __asm { vcmpless xmm1, xmm0, dword ptr [rax+2Ch] }
  _XMM2 = unsignedInt ^ (unsigned int)_xmm;
  __asm { vblendvps xmm1, xmm2, xmm6, xmm1 }
  angles.v[1] = v40;
  if ( integer <= 0 )
  {
LABEL_37:
    *(_QWORD *)result->v = *(_QWORD *)start->v;
    result->v[2] = v62 + start->v[2];
    return;
  }
  v45 = (unsigned int)_XMM1;
  LODWORD(v46) = LODWORD(reattachDistance) ^ _xmm;
  while ( 1 )
  {
    v47 = AngleNormalize360(v40 + *(float *)&v45);
    angles.v[1] = *(float *)&v47;
    AngleVectors(&angles, &forward, NULL, NULL);
    ++v39;
    v63.v[0] = (float)(v46 * forward.v[0]) + start->v[0];
    v63.v[1] = (float)(v46 * forward.v[1]) + start->v[1];
    v63.v[2] = (float)(v46 * forward.v[2]) + start->v[2];
    PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, start, &v63, &bounds, skipEntity, 0, 33636369, 0, NULL, All);
    if ( results.fraction == 1.0 )
      break;
    v48 = start->v[0];
    v49 = start->v[1];
    v50 = start->v[2];
    v51 = (float)((float)((float)((float)(v63.v[2] - v50) * results.fraction) + v50) + (float)((float)(1.0 - results.fraction) * 15.0)) - v50;
    v63.v[2] = (float)((float)((float)(v63.v[2] - v50) * results.fraction) + v50) + (float)((float)(1.0 - results.fraction) * 15.0);
    v63.v[0] = (float)((float)(v63.v[0] - v48) * results.fraction) + v48;
    v63.v[1] = (float)((float)(v63.v[1] - v49) * results.fraction) + v49;
    if ( (float)((float)((float)((float)(v63.v[1] - v49) * (float)(v63.v[1] - v49)) + (float)((float)(v63.v[0] - v48) * (float)(v63.v[0] - v48))) + (float)(v51 * v51)) >= v59 )
    {
      CameraRotateTrace_RetraceEndPos(localClientNum, start, &v63, skipEntity, &results, result);
      CameraRotateTrace_StoreReturnDistanceOffsets(rotatingCamera, percentTime, v17, start, result, cutData);
      v53 = start->v[1] - result->v[1];
      vec.v[0] = start->v[0] - result->v[0];
      vec.v[2] = start->v[2] - result->v[2];
      vec.v[1] = v53;
      vectoangles(&vec, &cutData->angles);
      return;
    }
    v40 = angles.v[1] - *(float *)&v45;
    angles.v[1] = angles.v[1] - *(float *)&v45;
    v52 = v45;
    *(float *)&v52 = *(float *)&v45 * 2.0;
    v45 = v52;
    if ( v39 >= integer )
      goto LABEL_37;
  }
  v54 = v63.v[0];
  v55 = v63.v[1];
  v56 = v63.v[2];
  cutData->detached = 0;
  result->v[0] = v54;
  result->v[1] = v55;
  result->v[2] = v56;
  v57 = start->v[1] - v55;
  vec.v[0] = start->v[0] - v54;
  vec.v[2] = start->v[2] - v56;
  vec.v[1] = v57;
  vectoangles(&vec, &cutData->angles);
  CameraRotateTrace_StoreReturnDistanceOffsets(rotatingCamera, percentTime, v17, start, result, cutData);
  if ( cent )
    goto LABEL_41;
}

/*
==============
CameraRotateTrace_PushOutMaxDistance
==============
*/

void __fastcall CameraRotateTrace_PushOutMaxDistance(const float deltaSeconds, double max, float *outValue)
{
  const dvar_t *v3; 
  __int128 unsignedInt; 
  float v7; 
  __int128 v8; 

  v3 = DCONST_DVARFLT_cg_cinematicCameraRotateReturnDistanceRate;
  _XMM6 = *(_OWORD *)&max;
  if ( !DCONST_DVARFLT_cg_cinematicCameraRotateReturnDistanceRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraRotateReturnDistanceRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  unsignedInt = v3->current.unsignedInt;
  if ( !outValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 538, ASSERT_TYPE_ASSERT, "(outValue)", (const char *)&queryFormat, "outValue") )
    __debugbreak();
  v7 = *outValue;
  if ( *outValue > 0.0 && v7 < *(float *)&_XMM6 )
  {
    v8 = unsignedInt;
    *(float *)&v8 = (float)(*(float *)&unsignedInt * deltaSeconds) + v7;
    _XMM1 = v8;
    __asm
    {
      vcmpltss xmm0, xmm6, xmm1
      vblendvps xmm0, xmm1, xmm6, xmm0
    }
    *outValue = *(float *)&_XMM0;
  }
}

/*
==============
CameraRotateTrace_RetraceEndPos
==============
*/
void CameraRotateTrace_RetraceEndPos(LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, const int passEntityNum, trace_t *trace, vec3_t *result)
{
  float fraction; 
  Bounds bounds; 

  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 684, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  bounds.halfSize.v[1] = FLOAT_3_0;
  bounds.halfSize.v[2] = FLOAT_3_0;
  *(_OWORD *)bounds.midPoint.v = _xmm;
  PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), trace, start, end, &bounds, passEntityNum, 0, 33636369, 0, NULL, All);
  fraction = trace->fraction;
  result->v[0] = (float)((float)(end->v[0] - start->v[0]) * trace->fraction) + start->v[0];
  result->v[1] = (float)((float)(end->v[1] - start->v[1]) * fraction) + start->v[1];
  result->v[2] = (float)((float)(end->v[2] - start->v[2]) * fraction) + start->v[2];
}

/*
==============
CameraRotateTrace_ReturnToIdealOrientation
==============
*/
void CameraRotateTrace_ReturnToIdealOrientation(const RotatingCamera *rotatingCamera, const float deltaSeconds, const vec3_t *start, const vec3_t *end, CameraCutData *cutData, vec3_t *result)
{
  const dvar_t *v7; 
  float value; 
  float v12; 
  float maxCollisionDistance; 
  double v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float *p_heightOffset; 
  float v22; 
  const dvar_t *v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float idealPitch; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 

  v7 = DCONST_DVARFLT_cg_cinematicCameraRotateReturnPitchRate;
  if ( !DCONST_DVARFLT_cg_cinematicCameraRotateReturnPitchRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraRotateReturnPitchRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  value = v7->current.value;
  if ( !rotatingCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 584, ASSERT_TYPE_ASSERT, "(rotatingCamera)", (const char *)&queryFormat, "rotatingCamera") )
    __debugbreak();
  if ( !cutData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 585, ASSERT_TYPE_ASSERT, "(cutData)", (const char *)&queryFormat, "cutData") )
    __debugbreak();
  *(_QWORD *)&v14 = LODWORD(end->v[1]);
  *(float *)&v14 = end->v[1] - start->v[1];
  v12 = end->v[2] - start->v[2];
  maxCollisionDistance = cutData->maxCollisionDistance;
  *(float *)&v14 = fsqrt((float)((float)(*(float *)&v14 * *(float *)&v14) + (float)((float)(end->v[0] - start->v[0]) * (float)(end->v[0] - start->v[0]))) + (float)(v12 * v12));
  if ( maxCollisionDistance <= 0.0 || maxCollisionDistance >= *(float *)&v14 )
  {
    cutData->maxCollisionDistance = 0.0;
    v15 = 0.0;
  }
  else
  {
    CameraRotateTrace_PushOutMaxDistance(deltaSeconds, v14, &cutData->maxCollisionDistance);
    v15 = cutData->maxCollisionDistance;
  }
  *result = *end;
  if ( v15 > 0.0 )
  {
    v16 = end->v[1] - start->v[1];
    v17 = end->v[0] - start->v[0];
    v18 = end->v[2] - start->v[2];
    v19 = (float)((float)(v16 * v16) + (float)(v17 * v17)) + (float)(v18 * v18);
    if ( (float)(v15 * v15) < v19 )
    {
      v20 = v15 / fsqrt(v19);
      result->v[0] = (float)(v20 * v17) + start->v[0];
      result->v[1] = (float)(v20 * v16) + start->v[1];
      result->v[2] = (float)(v20 * v18) + start->v[2];
    }
  }
  p_heightOffset = &cutData->heightOffset;
  if ( cutData->heightOffset != 0.0 )
  {
    v22 = end->v[2] - start->v[2];
    v23 = DCONST_DVARFLT_cg_cinematicCameraRotateReturnHeightRate;
    if ( !DCONST_DVARFLT_cg_cinematicCameraRotateReturnHeightRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraRotateReturnHeightRate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    v24 = v23->current.value;
    if ( cutData == (CameraCutData *)-44i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 504, ASSERT_TYPE_ASSERT, "(outValue)", (const char *)&queryFormat, "outValue") )
      __debugbreak();
    v25 = *p_heightOffset;
    LODWORD(v26) = 0x80000000 - *(_DWORD *)p_heightOffset;
    if ( *(int *)p_heightOffset >= 0 )
      v26 = *p_heightOffset;
    LODWORD(v27) = 0x80000000 - LODWORD(v22);
    if ( v22 >= 0.0 )
      v27 = v22;
    if ( (int)abs32(LODWORD(v27) - LODWORD(v26)) > 8 )
    {
      v28 = v24 * deltaSeconds;
      if ( (float)(v22 - v25) <= 0.0 )
      {
        v29 = v25 - v28;
        *p_heightOffset = v25 - v28;
        if ( (float)(v25 - v28) > v22 )
          goto LABEL_34;
      }
      else
      {
        v29 = v25 + v28;
        *p_heightOffset = v25 + v28;
        if ( (float)(v25 + v28) < v22 )
          goto LABEL_34;
      }
    }
    *p_heightOffset = 0.0;
    v29 = 0.0;
LABEL_34:
    if ( v29 != 0.0 )
      result->v[2] = v29 + start->v[2];
  }
  idealPitch = cutData->idealPitch;
  v31 = cutData->angles.v[0];
  if ( value > 0.0 && idealPitch < 360.0 )
  {
    LODWORD(v32) = 0x80000000 - LODWORD(v31);
    if ( v31 >= 0.0 )
      v32 = cutData->angles.v[0];
    LODWORD(v33) = 0x80000000 - LODWORD(idealPitch);
    if ( idealPitch >= 0.0 )
      v33 = cutData->idealPitch;
    if ( (int)abs32(LODWORD(v33) - LODWORD(v32)) > 8 )
    {
      v34 = value * deltaSeconds;
      if ( idealPitch <= v31 )
      {
        cutData->angles.v[0] = v31 - v34;
        if ( (float)(v31 - v34) >= idealPitch )
          return;
      }
      else
      {
        cutData->angles.v[0] = v31 + v34;
        if ( (float)(v31 + v34) <= idealPitch )
          return;
      }
      cutData->angles.v[0] = idealPitch;
      cutData->idealPitch = 360.0;
    }
  }
}

/*
==============
CameraRotateTrace_StoreReturnDistanceOffsets
==============
*/
void CameraRotateTrace_StoreReturnDistanceOffsets(const RotatingCamera *rotatingCamera, const float percentTime, const float deltaSeconds, const vec3_t *start, const vec3_t *end, CameraCutData *cutData)
{
  float v8; 
  float maxCollisionDistance; 
  double v10; 
  float v11; 
  float heightOffset; 

  if ( !rotatingCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 642, ASSERT_TYPE_ASSERT, "(rotatingCamera)", (const char *)&queryFormat, "rotatingCamera") )
    __debugbreak();
  if ( !cutData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 643, ASSERT_TYPE_ASSERT, "(cutData)", (const char *)&queryFormat, "cutData") )
    __debugbreak();
  *(_QWORD *)&v10 = LODWORD(end->v[1]);
  *(float *)&v10 = end->v[1] - start->v[1];
  v8 = end->v[2] - start->v[2];
  maxCollisionDistance = cutData->maxCollisionDistance;
  *(float *)&v10 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)((float)(end->v[0] - start->v[0]) * (float)(end->v[0] - start->v[0]))) + (float)(v8 * v8));
  if ( maxCollisionDistance == 0.0 || *(float *)&v10 < maxCollisionDistance )
    cutData->maxCollisionDistance = *(float *)&v10;
  else
    CameraRotateTrace_PushOutMaxDistance(deltaSeconds, v10, &cutData->maxCollisionDistance);
  v11 = end->v[2] - start->v[2];
  heightOffset = cutData->heightOffset;
  if ( v11 <= 0.0 )
  {
    if ( heightOffset <= 0.0 && v11 < heightOffset )
      goto LABEL_17;
  }
  else if ( heightOffset >= 0.0 && v11 > heightOffset )
  {
LABEL_17:
    cutData->heightOffset = v11;
  }
  cutData->idealPitch = (float)(percentTime * rotatingCamera->amountToRotate.v[0]) + rotatingCamera->startDeltaAngles.v[0];
}

