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

void __fastcall CG_CameraRotateUpdateAngles(const RotatingCamera *rotatingCamera, const float percentTime, double totalCamTime, double deltaSeconds, CameraCutData *cutData, vec3_t *outAngles)
{
  bool v14; 
  bool v15; 

  _RBX = cutData;
  _RSI = rotatingCamera;
  _RDI = outAngles;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm3
  }
  v14 = rotatingCamera == NULL;
  if ( !rotatingCamera )
  {
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1124, ASSERT_TYPE_ASSERT, "(rotatingCamera)", (const char *)&queryFormat, "rotatingCamera");
    v14 = !v15;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( !v14 )
  {
    __asm { vcomiss xmm7, xmm0 }
    if ( !cutData->detached )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rsi+2Ch]
        vmovss  xmm3, dword ptr [rsi+30h]
        vdivss  xmm4, xmm6, xmm7
        vmulss  xmm0, xmm4, dword ptr [rsi+28h]
        vaddss  xmm1, xmm0, dword ptr [rbx+1Ch]
        vmovss  dword ptr [rbx+1Ch], xmm1
        vmulss  xmm2, xmm4, xmm2
        vaddss  xmm0, xmm2, dword ptr [rbx+20h]
        vmulss  xmm1, xmm4, xmm3
        vmovss  dword ptr [rbx+20h], xmm0
        vaddss  xmm2, xmm1, dword ptr [rbx+24h]
        vmovss  dword ptr [rbx+24h], xmm2
      }
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vaddss  xmm0, xmm0, dword ptr [rdi]; angle
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm1, dword ptr [rbx+20h]
    vaddss  xmm0, xmm1, dword ptr [rdi+4]; angle
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovss  dword ptr [rdi+4], xmm0
    vmovss  xmm1, dword ptr [rbx+24h]
    vaddss  xmm0, xmm1, dword ptr [rdi+8]; angle
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovss  dword ptr [rdi+8], xmm0
  }
}

/*
==============
CG_CameraRotateYawToViewActor
==============
*/

void __fastcall CG_CameraRotateYawToViewActor(LocalClientNum_t localClientNum, const RotatingCamera *rotatingCamera, double percentTime, double distanceToFocalPoint, const vec3_t *focusPosition, vec3_t *outAngles)
{
  bool focusOnSupportingActor; 
  int IsCinematicCameraActive; 
  unsigned int leadingActorId; 
  const centity_t *EntityOffsetPosition; 
  bool v22; 
  vec2_t vec; 
  vec3_t outPosition; 
  vec3_t forward; 
  vec2_t v90; 
  char v96; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-68h], xmm10
    vmovaps xmmword ptr [r11-78h], xmm11
  }
  _RBP = outAngles;
  __asm
  {
    vmovaps xmm10, xmm3
    vmovaps xmm11, xmm2
  }
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
  EntityOffsetPosition = CG_CinematicCameraGetEntityOffsetPosition(localClientNum, leadingActorId, (const EntityPositionOffset *)rotatingCamera, &outPosition);
  v22 = EntityOffsetPosition == NULL;
  if ( EntityOffsetPosition )
  {
    _RAX = focusPosition;
    __asm
    {
      vmovss  xmm5, dword ptr [rsp+0F8h+outPosition]
      vmovaps [rsp+0F8h+var_28], xmm6
      vmovaps [rsp+0F8h+var_38], xmm7
      vmovss  xmm6, dword ptr [rax+4]
      vmovss  xmm7, dword ptr [rsp+0F8h+outPosition+4]
      vmovss  xmm4, dword ptr [rax]
      vsubss  xmm0, xmm6, xmm7
      vmulss  xmm1, xmm0, xmm0
      vmovaps [rsp+0F8h+var_48], xmm8
      vmovss  xmm8, dword ptr [rax+8]
      vsubss  xmm2, xmm4, xmm5
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmovaps [rsp+0F8h+var_58], xmm9
      vmovss  xmm9, dword ptr [rsp+0F8h+outPosition+8]
      vsubss  xmm3, xmm8, xmm9
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, cs:__real@3a83126f
    }
    if ( !v22 )
    {
      __asm
      {
        vsubss  xmm5, xmm5, xmm4
        vsubss  xmm6, xmm7, xmm6
        vmulss  xmm0, xmm5, xmm5
        vsubss  xmm7, xmm9, xmm8
        vmovss  xmm8, cs:__real@3f800000
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm8, xmm0
        vdivss  xmm4, xmm8, xmm0
        vmulss  xmm0, xmm4, xmm5
        vmulss  xmm1, xmm0, xmm10
        vmulss  xmm2, xmm4, xmm6
        vmulss  xmm0, xmm2, xmm10
        vmovss  dword ptr [rsp+0F8h+var_98], xmm1
        vmulss  xmm1, xmm4, xmm7
        vmulss  xmm2, xmm1, xmm10
        vmovss  [rsp+0F8h+var_90], xmm2
        vmovss  dword ptr [rsp+0F8h+vec], xmm5
        vmovss  dword ptr [rsp+0F8h+vec+4], xmm6
        vmovss  [rsp+0F8h+var_C0], xmm7
        vmovss  dword ptr [rsp+0F8h+var_98+4], xmm0
      }
      AngleVectors(outAngles, &forward, NULL, NULL);
      __asm
      {
        vmovss  xmm4, dword ptr cs:__xmm@80000000800000008000000080000000
        vxorps  xmm3, xmm10, xmm4
        vmulss  xmm1, xmm3, dword ptr [rsp+0F8h+forward]
        vxorps  xmm2, xmm1, xmm4
        vmulss  xmm1, xmm3, dword ptr [rsp+0F8h+forward+4]
        vmovss  dword ptr [rsp+0F8h+vec], xmm2
        vxorps  xmm2, xmm1, xmm4
        vmulss  xmm1, xmm3, dword ptr [rsp+0F8h+forward+8]
        vmovss  dword ptr [rsp+0F8h+vec+4], xmm2
        vxorps  xmm2, xmm1, xmm4
        vmovss  [rsp+0F8h+var_C0], xmm2
      }
      *(double *)&_XMM0 = vectoyaw(&vec);
      __asm { vmovaps xmm7, xmm0 }
      *(double *)&_XMM0 = vectoyaw(&v90);
      __asm
      {
        vsubss  xmm1, xmm0, xmm7
        vmulss  xmm6, xmm1, cs:__real@3b360b61
        vaddss  xmm4, xmm6, cs:__real@3f000000
        vmulss  xmm0, xmm11, cs:__real@3fc00000; val
        vxorps  xmm3, xmm3, xmm3
        vmovss  xmm5, xmm3, xmm4
        vxorps  xmm1, xmm1, xmm1; min
        vroundss xmm3, xmm1, xmm5, 1
        vsubss  xmm3, xmm6, xmm3
        vmulss  xmm6, xmm3, cs:__real@43b40000
        vmovaps xmm2, xmm8; max
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm1, xmm6, xmm0
        vaddss  xmm2, xmm1, xmm7
        vmovss  dword ptr [rbp+4], xmm2
      }
    }
    __asm
    {
      vmovaps xmm8, [rsp+0F8h+var_48]
      vmovaps xmm7, [rsp+0F8h+var_38]
      vmovaps xmm6, [rsp+0F8h+var_28]
      vmovaps xmm9, [rsp+0F8h+var_58]
    }
  }
  else
  {
    Com_Printf(0, "<rotate> camera can't focus on other actor id %d\n", leadingActorId);
  }
  _R11 = &v96;
  __asm
  {
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
}

/*
==============
CG_CinematicCameraGetEntityOffsetPosition
==============
*/
const centity_t *CG_CinematicCameraGetEntityOffsetPosition(LocalClientNum_t localClientNum, const int entityId, const EntityPositionOffset *entityPositionData, vec3_t *outPosition)
{
  __int64 v5; 
  __int64 v7; 
  CgEntitySystem *v9; 
  bool v12; 
  const DObj *ClientDObj; 
  __int64 v29; 
  __int64 v30; 
  vec3_t angles; 
  vec3_t forward; 

  v5 = entityId;
  _RBP = outPosition;
  v7 = localClientNum;
  _RSI = entityPositionData;
  if ( !entityPositionData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 369, ASSERT_TYPE_ASSERT, "(entityPositionData)", (const char *)&queryFormat, "entityPositionData") )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x800 )
  {
    LODWORD(v29) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 370, ASSERT_TYPE_ASSERT, "(unsigned)( entityId ) < (unsigned)( ( 2048 ) )", "entityId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v29, 2048) )
      __debugbreak();
  }
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
  {
    LODWORD(v30) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v30) )
      __debugbreak();
  }
  if ( (unsigned int)v7 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v30) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v29) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v29, v30) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v7] )
  {
    LODWORD(v30) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v30) )
      __debugbreak();
  }
  v9 = CgEntitySystem::ms_entitySystemArray[v7];
  if ( (unsigned int)v5 >= 0x800 )
  {
    LODWORD(v30) = 2048;
    LODWORD(v29) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v29, v30) )
      __debugbreak();
  }
  _RBX = (__int64)&v9->m_entities[v5];
  if ( (*(_BYTE *)(_RBX + 648) & 1) == 0 )
    return 0i64;
  CG_GetPoseOrigin((const cpose_t *)_RBX, _RBP);
  v12 = _RSI->optionalTagName == 0;
  if ( _RSI->optionalTagName )
  {
    ClientDObj = Com_GetClientDObj(*(__int16 *)(_RBX + 400), (LocalClientNum_t)v7);
    v12 = ClientDObj == NULL;
    if ( ClientDObj )
      CG_DObjGetWorldTagPos((const cpose_t *)_RBX, ClientDObj, _RSI->optionalTagName, _RBP);
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rsi+10h]
  }
  if ( !v12 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+48h]
      vaddss  xmm1, xmm0, dword ptr [rsi+4]
      vmovss  dword ptr [rsp+0A8h+angles], xmm1
      vmovss  xmm2, dword ptr [rbx+4Ch]
      vaddss  xmm0, xmm2, dword ptr [rsi+8]
      vmovss  dword ptr [rsp+0A8h+angles+4], xmm0
      vmovss  xmm1, dword ptr [rbx+50h]
      vaddss  xmm2, xmm1, dword ptr [rsi+0Ch]
      vmovss  dword ptr [rsp+0A8h+angles+8], xmm2
    }
    AngleVectors(&angles, &forward, NULL, NULL);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+10h]
      vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm2, xmm3, dword ptr [rsp+0A8h+forward]
      vaddss  xmm0, xmm2, dword ptr [rbp+0]
      vmulss  xmm1, xmm3, dword ptr [rsp+0A8h+forward+8]
      vmovss  dword ptr [rbp+0], xmm0
      vmulss  xmm0, xmm3, dword ptr [rsp+0A8h+forward+4]
      vaddss  xmm2, xmm0, dword ptr [rbp+4]
      vmovss  dword ptr [rbp+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbp+8]
      vmovss  dword ptr [rbp+8], xmm2
    }
  }
  return (const centity_t *)_RBX;
}

/*
==============
CG_CinematicCameraGetFov
==============
*/

float __fastcall CG_CinematicCameraGetFov(LocalClientNum_t localClientNum, double currentFov)
{
  const dvar_t *v8; 
  cg_t *LocalClientGlobals; 
  CameraSceneData *SceneData; 
  bool v14; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1795, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA )") )
    __debugbreak();
  v8 = DCONST_DVARBOOL_cg_cinematicCameraFovEnabled;
  if ( !DCONST_DVARBOOL_cg_cinematicCameraFovEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraFovEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+78h+var_28], xmm7
      vmovaps [rsp+78h+var_38], xmm8
    }
    if ( !CG_IsCinematicCameraActive(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1800, ASSERT_TYPE_ASSERT, "(CG_IsCinematicCameraActive( localClientNum ))", (const char *)&queryFormat, "CG_IsCinematicCameraActive( localClientNum )") )
      __debugbreak();
    _RDI = (int *)CG_CinematicCamera_GetSceneData(localClientNum)->currentCameraScene->sceneName;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    SceneData = CG_CinematicCamera_GetSceneData(localClientNum);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+58Ch]
      vmovss  xmm5, cs:__real@3a83126f
    }
    v14 = LocalClientGlobals->time < (unsigned int)SceneData->sceneStartTime;
    __asm
    {
      vmovss  xmm8, cs:__real@3f800000
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm7, xmm7, xmm7
      vcomiss xmm1, xmm7
      vcvtsi2ss xmm0, xmm0, ecx
      vmulss  xmm3, xmm0, xmm5
    }
    if ( LocalClientGlobals->time >= (unsigned int)SceneData->sceneStartTime )
    {
      __asm { vcomiss xmm3, xmm1 }
      if ( LocalClientGlobals->time >= (unsigned int)SceneData->sceneStartTime )
      {
        __asm { vmovss  xmm4, dword ptr [rdi+590h] }
        v14 = 0;
        if ( _RDI[357] > 0 )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm2, xmm0, xmm5
            vsubss  xmm1, xmm3, xmm1
            vcomiss xmm1, xmm2
          }
        }
        __asm { vmovaps xmm6, xmm4 }
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+598h]
      vcomiss xmm0, xmm7
    }
    if ( !v14 )
    {
      __asm
      {
        vcomiss xmm3, xmm0
        vmovss  xmm4, dword ptr [rdi+59Ch]
      }
      v14 = 0;
      if ( _RDI[360] > 0 )
      {
        __asm
        {
          vsubss  xmm1, xmm3, xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm2, xmm0, xmm5
          vcomiss xmm1, xmm2
        }
      }
      __asm { vmovaps xmm6, xmm4 }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+5A4h]
      vcomiss xmm0, xmm7
    }
    if ( !v14 )
    {
      __asm
      {
        vcomiss xmm3, xmm0
        vmovss  xmm4, dword ptr [rdi+5A8h]
      }
      v14 = 0;
      if ( _RDI[363] > 0 )
      {
        __asm
        {
          vsubss  xmm1, xmm3, xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm2, xmm0, xmm5
          vcomiss xmm1, xmm2
        }
      }
      __asm { vmovaps xmm6, xmm4 }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+5B0h]
      vcomiss xmm0, xmm7
      vmovaps xmm7, [rsp+78h+var_28]
    }
    if ( !v14 )
    {
      __asm
      {
        vcomiss xmm3, xmm0
        vmovss  xmm4, dword ptr [rdi+5B4h]
      }
      if ( _RDI[366] > 0 )
      {
        __asm
        {
          vsubss  xmm1, xmm3, xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm2, xmm0, xmm5
          vcomiss xmm1, xmm2
        }
      }
      __asm { vmovaps xmm6, xmm4 }
    }
    __asm { vmovaps xmm8, [rsp+78h+var_38] }
  }
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+78h+var_18]
  }
  return *(float *)&_XMM0;
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

void __fastcall CG_DrawDebugCinematicCamera(LocalClientNum_t localClientNum, double _XMM1_8)
{
  __int64 v8; 
  const dvar_t *v9; 
  CameraSceneData *SceneData; 
  __int64 currentCutIndex; 
  __int64 v26; 
  int supportingActorId; 
  int leadingActorId; 
  int v36; 
  int numCameraCuts; 
  bool v46; 
  const ScreenPlacement *v47; 
  GfxFont *FontHandle; 
  char *fmt; 
  float fmta; 
  __int64 y; 
  float ya; 
  __int64 horzAlign; 
  double vertAlign; 
  double v60; 
  float v61; 
  vec4_t *color; 
  double style; 
  char dest[2048]; 

  v8 = localClientNum;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_OFFHAND_END) )
  {
    v9 = DCONST_DVARBOOL_cg_cinematicCameraDebug;
    if ( !DCONST_DVARBOOL_cg_cinematicCameraDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
    {
      __asm
      {
        vmovaps [rsp+8E8h+var_28], xmm6
        vmovaps [rsp+8E8h+var_38], xmm7
        vxorps  xmm7, xmm7, xmm7
      }
      if ( CG_IsCinematicCameraActive((LocalClientNum_t)v8) )
      {
        __asm
        {
          vmovaps [rsp+8E8h+var_48], xmm8
          vmovaps [rsp+8E8h+var_58], xmm9
          vmovaps [rsp+8E8h+var_68], xmm11
        }
        CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
        SceneData = CG_CinematicCamera_GetSceneData((const LocalClientNum_t)v8);
        _R15 = SceneData->currentCameraScene;
        if ( !SceneData->currentCameraScene && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 3054, ASSERT_TYPE_ASSERT, "(scene)", (const char *)&queryFormat, "scene") )
          __debugbreak();
        if ( _R15->numCameraCuts >= 8u )
        {
          LODWORD(horzAlign) = 8;
          LODWORD(y) = _R15->numCameraCuts;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 3056, ASSERT_TYPE_ASSERT, "(unsigned)( scene->numCameraCuts ) < (unsigned)( 8 )", "scene->numCameraCuts doesn't index MAX_SCENE_CUTS\n\t%i not in [0, %i)", y, horzAlign) )
            __debugbreak();
        }
        currentCutIndex = SceneData->currentCutIndex;
        __asm
        {
          vmovss  xmm6, cs:__real@3a83126f
          vxorps  xmm11, xmm11, xmm11
        }
        _RBP = 10 * currentCutIndex;
        __asm
        {
          vmovss  xmm2, dword ptr [r15+rbp*8+64h]
          vcomiss xmm2, xmm7
        }
        if ( !__CFADD__(5 * currentCutIndex, 5 * currentCutIndex) && 10 * currentCutIndex != 0 )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, xmm6
            vdivss  xmm0, xmm1, xmm2; val
            vmovss  xmm2, cs:__real@3f800000; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1_8, *(float *)&_XMM2);
          __asm { vmovaps xmm11, xmm0 }
        }
        __asm
        {
          vmovss  xmm8, cs:__real@bf800000
          vmovaps xmm9, xmm8
        }
        if ( !CG_IsRunningLastSceneCut(SceneData) )
        {
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, edx
            vcomiss xmm1, xmm7
          }
          v26 = SceneData->currentCutIndex;
          __asm { vxorps  xmm9, xmm9, xmm9 }
          _RCX = 10 * v26;
          __asm
          {
            vmovss  xmm8, dword ptr [r15+rcx*8+0B4h]
            vcomiss xmm8, xmm7
          }
          if ( !__CFADD__(5 * v26, 5 * v26) && 10 * v26 != 0 )
          {
            __asm
            {
              vmovss  xmm2, cs:__real@3f800000; max
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vmulss  xmm1, xmm0, xmm6
              vdivss  xmm0, xmm1, xmm8; val
              vxorps  xmm1, xmm1, xmm1; min
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm { vmovaps xmm9, xmm0 }
          }
        }
        __asm { vmovss  xmm6, dword ptr [r15+rbp*8+64h] }
        supportingActorId = SceneData->supportingActorId;
        leadingActorId = SceneData->leadingActorId;
        v36 = SceneData->currentCutIndex;
        numCameraCuts = _R15->numCameraCuts;
        __asm { vcvtss2sd xmm6, xmm6, xmm6 }
        *(float *)&_XMM0 = CG_GetSceneElapsedTime((LocalClientNum_t)v8);
        __asm
        {
          vcvtss2sd xmm3, xmm0, xmm0
          vcvtss2sd xmm1, xmm9, xmm9
          vmovsd  qword ptr [rsp+8E8h+style], xmm1
          vcvtss2sd xmm2, xmm8, xmm8
          vmovsd  [rsp+8E8h+color], xmm2
          vcvtss2sd xmm0, xmm11, xmm11
          vmovsd  [rsp+8E8h+var_8A8], xmm0
          vmovsd  qword ptr [rsp+8E8h+vertAlign], xmm6
        }
        LODWORD(horzAlign) = v36;
        LODWORD(y) = numCameraCuts;
        __asm { vmovsd  [rsp+8E8h+fmt], xmm3 }
        Com_sprintf(dest, 0x800ui64, "^7Scene name: ^5%s\n^7Scene time: ^5%g\n^7Num Cuts: ^5%d\n^7Cut Index: ^5%d\n^7Cut Time: ^5%g, %.3g\n^7Next cut time: ^5%g, %.3g\n^7Actors: ^5%d, %d\n", _R15->sceneName, *(double *)&fmt, y, horzAlign, vertAlign, v60, *(double *)&color, style, leadingActorId, supportingActorId);
        __asm
        {
          vmovaps xmm11, [rsp+8E8h+var_68]
          vmovaps xmm9, [rsp+8E8h+var_58]
          vmovaps xmm8, [rsp+8E8h+var_48]
        }
      }
      else
      {
        Com_sprintf(dest, 0x800ui64, "^7Scene name: ^5<not active>");
      }
      if ( activeScreenPlacementMode )
      {
        if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
        {
          v47 = &scrPlaceViewDisplay[v8];
          goto LABEL_27;
        }
        if ( activeScreenPlacementMode == SCRMODE_INVALID )
          v46 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
        else
          v46 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
        if ( v46 )
          __debugbreak();
      }
      v47 = &scrPlaceFull;
LABEL_27:
      __asm
      {
        vmovss  xmm6, cs:__real@3e800000
        vmovaps xmm2, xmm6; scale
      }
      FontHandle = UI_GetFontHandle(v47, 6, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm0, cs:__real@41a00000
        vmovss  dword ptr [rsp+8E8h+var_8A8], xmm6
        vmovss  [rsp+8E8h+y], xmm0
        vmovss  dword ptr [rsp+8E8h+fmt], xmm7
      }
      UI_DrawText(v47, dest, 2048, FontHandle, fmta, ya, 1, 1, v61, &colorWhite, 3);
      __asm
      {
        vmovaps xmm7, [rsp+8E8h+var_38]
        vmovaps xmm6, [rsp+8E8h+var_28]
      }
    }
  }
}

/*
==============
CG_GetCameraPositionAngles
==============
*/

int __fastcall CG_GetCameraPositionAngles(LocalClientNum_t localClientNum, const CinematicCameraSettings *camSettings, CameraCutData *cutData, double percentTime, vec3_t *outPosition, vec3_t *outAngles)
{
  int result; 
  vec3_t *v17; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !camSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1424, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  if ( !cutData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1425, ASSERT_TYPE_ASSERT, "(cutData)", (const char *)&queryFormat, "cutData") )
    __debugbreak();
  switch ( camSettings->cameraMovementType )
  {
    case 1u:
      __asm { vmovaps xmm3, xmm6; percentTime }
      result = CG_UpdateCinematicCameraFixed(localClientNum, camSettings, cutData, *(const float *)&_XMM3, outPosition, outAngles);
      break;
    case 2u:
      __asm { vmovaps xmm3, xmm6; percentTime }
      result = CG_UpdateCinematicCameraPan(localClientNum, camSettings, cutData, *(const float *)&_XMM3, outPosition, outAngles);
      break;
    case 3u:
      __asm { vmovaps xmm3, xmm6; percentTime }
      result = CG_UpdateCinematicCameraRotate(localClientNum, camSettings, cutData, *(const float *)&_XMM3, outPosition, outAngles);
      break;
    case 4u:
      __asm { vmovaps xmm3, xmm6; percentTime }
      result = CG_UpdateCinematicCameraZoom(localClientNum, camSettings, cutData, *(const float *)&_XMM3, outPosition, outAngles);
      break;
    default:
      LODWORD(v17) = camSettings->cameraMovementType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1442, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_UpdateCinematicCamera: unknown camera type index %d", v17) )
        __debugbreak();
      result = 1;
      break;
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

/*
==============
CG_GetSceneElapsedTime
==============
*/
float CG_GetSceneElapsedTime(LocalClientNum_t localClientNum)
{
  CG_GetLocalClientGlobals(localClientNum);
  CG_CinematicCamera_GetSceneData(localClientNum);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm0, xmm0, cs:__real@3a83126f
  }
  return *(float *)&_XMM0;
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

void __fastcall CG_InitCameraCutDataRotate(LocalClientNum_t localClientNum, const CinematicCameraSettings *camSettings, CameraCutData *cutData, double _XMM3_8)
{
  int cameraAnglesType; 
  int v12; 
  int v13; 
  int v14; 
  bool focusOnSupportingActor; 
  int IsCinematicCameraActive; 
  unsigned int supportingActorId; 
  __int128 angles; 
  vec3_t outPosition; 
  vec3_t forward; 
  vec3_t vec; 

  __asm { vmovaps [rsp+0C0h+var_30], xmm6 }
  _RSI = cutData;
  _RDI = camSettings;
  if ( !camSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1467, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1468, ASSERT_TYPE_ASSERT, "(cutData)", (const char *)&queryFormat, "cutData") )
    __debugbreak();
  LODWORD(_RSI->angles.v[0]) = _RDI->panningCamera.targetPan.startEntityPosition.optionalTagName;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  _RSI->angles.v[1] = _RDI->fixedCamera.worldPosition.v[1];
  _RSI->angles.v[2] = _RDI->fixedCamera.worldPosition.v[2];
  cameraAnglesType = _RDI->cameraAnglesType;
  __asm
  {
    vmovss  dword ptr [rbp+57h+angles], xmm6
    vmovss  dword ptr [rbp+57h+angles+4], xmm6
    vmovss  dword ptr [rbp+57h+angles+8], xmm6
  }
  v12 = cameraAnglesType - 1;
  if ( !v12 )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144275E60, 1223i64);
    goto LABEL_12;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  xmm2, dword ptr [rdi+4]
      vmovss  dword ptr [rbp+57h+outPosition], xmm0
      vmovss  xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [rbp+57h+outPosition+8], xmm0
      vmovss  dword ptr [rbp+57h+outPosition+4], xmm2
    }
    goto LABEL_27;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    focusOnSupportingActor = _RDI->rotatingCamera.focusOnSupportingActor;
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
    if ( !CG_CinematicCameraGetEntityOffsetPosition(localClientNum, supportingActorId, (const EntityPositionOffset *)_RDI, &outPosition) )
    {
      Com_Printf(0, "<rotate> camera (transition) does not have valid entity id %d\n", supportingActorId);
      goto LABEL_12;
    }
    if ( !_RDI->rotatingCamera.worldDeltaAngles )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+48h]
        vmovss  dword ptr [rbp+57h+angles], xmm0
        vmovss  xmm1, dword ptr [rax+4Ch]
        vmovss  dword ptr [rbp+57h+angles+4], xmm1
        vmovss  xmm0, dword ptr [rax+50h]
        vmovss  dword ptr [rbp+57h+angles+8], xmm0
      }
    }
LABEL_27:
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+40h]; totalCamTime
      vmovaps [rsp+0C0h+var_40], xmm7
      vxorps  xmm3, xmm3, xmm3; deltaSeconds
      vxorps  xmm1, xmm1, xmm1; percentTime
    }
    CG_CameraRotateUpdateAngles((const RotatingCamera *)_RDI, *(const float *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, _RSI, (vec3_t *)&angles);
    __asm { vmovss  xmm6, dword ptr [rdi+20h] }
    AngleVectors((const vec3_t *)&angles, &forward, NULL, NULL);
    __asm
    {
      vxorps  xmm2, xmm6, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm1, xmm2, dword ptr [rbp+57h+forward]
      vmovss  xmm7, dword ptr [rbp+57h+outPosition]
      vmovss  xmm5, dword ptr [rbp+57h+outPosition+4]
      vmovss  xmm3, dword ptr [rbp+57h+outPosition+8]
      vaddss  xmm6, xmm1, xmm7
      vmulss  xmm1, xmm2, dword ptr [rbp+57h+forward+4]
      vaddss  xmm4, xmm1, xmm5
      vmulss  xmm1, xmm2, dword ptr [rbp+57h+forward+8]
      vaddss  xmm2, xmm1, xmm3
      vsubss  xmm0, xmm7, xmm6
      vmovss  dword ptr [rbp+57h+vec], xmm0
      vsubss  xmm0, xmm3, xmm2
      vsubss  xmm1, xmm5, xmm4
      vmovss  dword ptr [rbp+57h+vec+8], xmm0
      vmovss  dword ptr [rsi+10h], xmm6
      vmovss  dword ptr [rsi+14h], xmm4
      vmovss  dword ptr [rsi+18h], xmm2
      vmovss  dword ptr [rbp+57h+vec+4], xmm1
    }
    vectoangles(&vec, (vec3_t *)&angles);
    __asm { vmovaps xmm7, [rsp+0C0h+var_40] }
    goto LABEL_12;
  }
  if ( v14 != 1 )
    goto LABEL_27;
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144275EF0, 1224i64);
LABEL_12:
  __asm { vmovaps xmm6, [rsp+0C0h+var_30] }
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
  const char *v39; 
  const char *v41; 
  const char *v42; 
  __int64 v43; 
  const char *v44; 
  int v45; 
  int v46; 
  int v48; 
  int v49; 
  __int64 numCameraCuts; 
  int v51; 
  unsigned __int64 v52; 
  const char *v53; 
  char *fmt; 
  __int64 v55; 
  __int64 v56; 
  char *data_p; 
  int currentVisionIndex; 
  int currentSoundIndex; 
  int currentFovIndex; 
  int sceneIndex; 
  CinematicCameraSettings *camSettings; 
  __int64 v63; 
  Mem_LargeLocal v64; 
  char token[64]; 
  char dest[64]; 

  v63 = -2i64;
  sceneIndex = sceneSlotIndex;
  Mem_LargeLocal::Mem_LargeLocal(&v64, 0x1000ui64, "max_camera_scenes_file_buf buf");
  m_ptr = (char *)v64.m_ptr;
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
              _RBX = Scene->visionSetSettings[v10].visionName;
              v39 = Com_Parse((const char **)&data_p);
              *(double *)&_XMM0 = atof(v39);
              __asm
              {
                vcvtsd2ss xmm1, xmm0, xmm0
                vmovss  dword ptr [rbx+40h], xmm1
              }
              v41 = Com_Parse((const char **)&data_p);
              Core_strcpy(_RBX, 0x40ui64, v41);
              v42 = Com_Parse((const char **)&data_p);
              Scene->visionSetSettings[v10].duration = atoi(v42);
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
                      v43 = 0x7FFFFFFFi64;
                      v44 = "<cut>";
                      while ( 1 )
                      {
                        v45 = (unsigned __int8)v44[i - "<cut>"];
                        v46 = *(unsigned __int8 *)v44++;
                        if ( !v43-- )
                        {
LABEL_103:
                          numCameraCuts = Scene->numCameraCuts;
                          v51 = numCameraCuts;
                          if ( (int)numCameraCuts >= 8 )
                          {
                            CG_CinematicCameraParseComError(COM_ERR_5382, "Scene '%s': Exceeded max camera cuts: %d", Scene->sceneName, 8i64);
                            v51 = Scene->numCameraCuts;
                          }
                          camSettings = &Scene->cameraCuts[numCameraCuts];
                          Scene->numCameraCuts = v51 + 1;
                          memset_0(&Scene->cameraCuts[numCameraCuts], 0, sizeof(Scene->cameraCuts[numCameraCuts]));
                          Scene->cameraCuts[numCameraCuts].collision = 1;
                          goto LABEL_52;
                        }
                        if ( v45 != v46 )
                        {
                          v48 = v45 + 32;
                          if ( (unsigned int)(v45 - 65) > 0x19 )
                            v48 = v45;
                          v45 = v48;
                          v49 = v46 + 32;
                          if ( (unsigned int)(v46 - 65) > 0x19 )
                            v49 = v46;
                          if ( v45 != v49 )
                            break;
                        }
                        if ( !v45 )
                          goto LABEL_103;
                      }
                      v52 = -1i64;
                      do
                        ++v52;
                      while ( i[v52] );
                      if ( v52 >= 0x40 )
                      {
                        LODWORD(fmt) = 64;
                        CG_CinematicCameraParseComError(COM_ERR_5383, "Scene '%s': token '%s', exceeded max characters (%d)\n", Scene->sceneName, i, fmt);
                      }
                      Core_strcpy(token, 0x40ui64, i);
                      v53 = Com_Parse((const char **)&data_p);
                      if ( !CG_ParseCinematicCameraCutToken(token, v53, Scene->sceneName, v9, camSettings) )
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
      LODWORD(v56) = 2;
      LODWORD(v55) = sceneIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2766, ASSERT_TYPE_ASSERT, "(unsigned)( sceneSlotIndex ) < (unsigned)( 2 )", "sceneSlotIndex doesn't index MAX_CINEMATIC_SCENES\n\t%i not in [0, %i)", v55, v56) )
        __debugbreak();
    }
    v30 = CG_CinematicCamera_GetScene(v29);
    qsort(v30->visionSetSettings, 4ui64, 0x48ui64, (_CoreCrtNonSecureSearchSortCompareFunction)compare_setting_start_time_CinematicCameraVisionSetSettings_);
    qsort(v30->fovSettings, 4ui64, 0xCui64, (_CoreCrtNonSecureSearchSortCompareFunction)compare_setting_start_time_CinematicCameraFovSettings_);
    qsort(v30->soundSettings, 6ui64, 0x4Cui64, (_CoreCrtNonSecureSearchSortCompareFunction)compare_setting_start_time_CinematicCameraSoundSettings_);
  }
LABEL_57:
  Mem_LargeLocal::~Mem_LargeLocal(&v64);
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

  _R15 = outAngles;
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
      __asm
      {
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  dword ptr [r15], xmm1
      }
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
      __asm
      {
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  dword ptr [r15+4], xmm1
      }
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
  __asm
  {
    vcvtsd2ss xmm1, xmm0, xmm0
    vmovss  dword ptr [r15+8], xmm1
  }
  return 1i64;
}

/*
==============
CG_ParseCinematicCameraCutToken
==============
*/
__int64 CG_ParseCinematicCameraCutToken(const char *token, const char *tokenValue, const char *sceneName, const int fileVersion, CinematicCameraSettings *camSettings)
{
  const char *v13; 
  __int64 v14; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  int v19; 
  int v20; 
  unsigned int v21; 
  __int64 v22; 
  __int64 result; 
  const char *v24; 
  __int64 v25; 
  int v26; 
  __int64 v27; 
  int v28; 
  int v29; 
  int v30; 
  unsigned int v31; 
  __int64 v32; 
  const char *v33; 
  __int64 v34; 
  int v35; 
  __int64 v36; 
  int v37; 
  int v38; 
  int v39; 
  const char *v41; 
  __int64 v42; 
  int v43; 
  __int64 v44; 
  int v45; 
  int v46; 
  int v47; 
  char v48; 
  char v49; 
  const char *v55; 
  __int64 v56; 
  int v57; 
  __int64 v58; 
  int v59; 
  int v60; 
  int v61; 
  const char *v62; 
  __int64 v63; 
  int v64; 
  __int64 v65; 
  int v66; 
  int v67; 
  int v68; 
  const char *v69; 
  __int64 v70; 
  int v71; 
  __int64 v72; 
  int v73; 
  int v74; 
  int v75; 
  const char *v76; 
  int v77; 
  __int64 v78; 
  int v79; 
  int v80; 
  int v81; 
  int v82; 
  char *s0; 
  const char *v84; 
  const char *v85; 
  const char *v86; 
  const char *v87; 

  _R14 = camSettings;
  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2420, ASSERT_TYPE_ASSERT, "(token)", (const char *)&queryFormat, "token") )
    __debugbreak();
  if ( !tokenValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2421, ASSERT_TYPE_ASSERT, "(tokenValue)", (const char *)&queryFormat, "tokenValue") )
    __debugbreak();
  if ( !sceneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2422, ASSERT_TYPE_ASSERT, "(sceneName)", (const char *)&queryFormat, "sceneName") )
    __debugbreak();
  if ( !camSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2423, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  v13 = "<movement>";
  v14 = 0x7FFFFFFFi64;
  v15 = 0x7FFFFFFFi64;
  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v16 = (unsigned __int8)v13[token - "<movement>"];
    v17 = v15;
    v18 = *(unsigned __int8 *)v13++;
    --v15;
    if ( !v17 )
    {
LABEL_24:
      if ( camSettings->cameraMovementType )
        return 0i64;
      s0 = "none";
      v84 = "fixed";
      v85 = "pan";
      v86 = "rotate";
      v87 = "zoom";
      if ( !tokenValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1966, ASSERT_TYPE_ASSERT, "(stringMatch)", (const char *)&queryFormat, "stringMatch", s0, v84, v85, v86, v87) )
        __debugbreak();
      v21 = 0;
      v22 = 0i64;
      while ( I_strnicmp((&s0)[v22], tokenValue, 0x7FFFFFFFui64) )
      {
        ++v21;
        if ( ++v22 >= 5 )
          goto LABEL_31;
      }
      if ( v21 > 4 )
      {
LABEL_31:
        Com_Printf(0, "Cinematic Camera: <movement> %s not supported.\n", tokenValue);
        return 0i64;
      }
      camSettings->cameraMovementType = v21;
      return 1i64;
    }
    if ( v16 != v18 )
    {
      v19 = v16 + 32;
      if ( (unsigned int)(v16 - 65) > 0x19 )
        v19 = v16;
      v16 = v19;
      v20 = v18 + 32;
      if ( (unsigned int)(v18 - 65) > 0x19 )
        v20 = v18;
      if ( v16 != v20 )
        break;
    }
    if ( !v16 )
      goto LABEL_24;
  }
  v24 = "<orientation>";
  v25 = 0x7FFFFFFFi64;
  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  do
  {
    v26 = (unsigned __int8)v24[token - "<orientation>"];
    v27 = v25;
    v28 = *(unsigned __int8 *)v24++;
    --v25;
    if ( !v27 )
      break;
    if ( v26 != v28 )
    {
      v29 = v26 + 32;
      if ( (unsigned int)(v26 - 65) > 0x19 )
        v29 = v26;
      v26 = v29;
      v30 = v28 + 32;
      if ( (unsigned int)(v28 - 65) > 0x19 )
        v30 = v28;
      if ( v26 != v30 )
      {
        if ( camSettings->cameraMovementType )
        {
          if ( camSettings->cameraAnglesType )
          {
            v33 = "<time>";
            v34 = 0x7FFFFFFFi64;
            if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            while ( 1 )
            {
              v35 = (unsigned __int8)v33[token - "<time>"];
              v36 = v34;
              v37 = *(unsigned __int8 *)v33++;
              --v34;
              if ( !v36 )
              {
LABEL_67:
                *(double *)&_XMM0 = atof(tokenValue);
                __asm
                {
                  vcvtsd2ss xmm1, xmm0, xmm0
                  vmovss  dword ptr [r14+40h], xmm1
                }
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
                goto LABEL_67;
            }
            v41 = "<lerp>";
            v42 = 0x7FFFFFFFi64;
            if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            while ( 1 )
            {
              v43 = (unsigned __int8)v41[token - "<lerp>"];
              v44 = v42;
              v45 = *(unsigned __int8 *)v41++;
              --v42;
              if ( !v44 )
              {
LABEL_79:
                __asm { vmovaps [rsp+0A8h+var_48], xmm7 }
                *(double *)&_XMM0 = atof(tokenValue);
                __asm
                {
                  vcvtsd2ss xmm0, xmm0, xmm0
                  vxorps  xmm7, xmm7, xmm7
                  vcomiss xmm0, xmm7
                  vmovss  dword ptr [r14+44h], xmm0
                }
                if ( v48 )
                  goto LABEL_81;
                __asm { vcomiss xmm0, cs:__real@3f800000 }
                if ( !(v48 | v49) )
                {
LABEL_81:
                  Com_Printf(0, "Cinematic Camera: <lerp> %s, must be between 0 and 1\n", tokenValue);
                  __asm { vmovss  xmm0, dword ptr [r14+44h]; val }
                }
                __asm
                {
                  vmovss  xmm2, cs:__real@3f800000; max
                  vxorps  xmm1, xmm1, xmm1; min
                }
                *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                __asm { vmovaps xmm7, [rsp+0A8h+var_48] }
                result = 1i64;
                __asm { vmovss  dword ptr [r14+44h], xmm0 }
                return result;
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
                goto LABEL_79;
            }
            v55 = "<collision>";
            v56 = 0x7FFFFFFFi64;
            if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            while ( 1 )
            {
              v57 = (unsigned __int8)v55[token - "<collision>"];
              v58 = v56;
              v59 = *(unsigned __int8 *)v55++;
              --v56;
              if ( !v58 )
              {
LABEL_94:
                camSettings->collision = atoi(tokenValue) > 0;
                return 1i64;
              }
              if ( v57 != v59 )
              {
                v60 = v57 + 32;
                if ( (unsigned int)(v57 - 65) > 0x19 )
                  v60 = v57;
                v57 = v60;
                v61 = v59 + 32;
                if ( (unsigned int)(v59 - 65) > 0x19 )
                  v61 = v59;
                if ( v57 != v61 )
                  break;
              }
              if ( !v57 )
                goto LABEL_94;
            }
            v62 = "<start_pos_from_current>";
            v63 = 0x7FFFFFFFi64;
            if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            while ( 1 )
            {
              v64 = (unsigned __int8)v62[token - "<start_pos_from_current>"];
              v65 = v63;
              v66 = *(unsigned __int8 *)v62++;
              --v63;
              if ( !v65 )
              {
LABEL_106:
                camSettings->useCurrentAsStartPosition = atoi(tokenValue) > 0;
                return 1i64;
              }
              if ( v64 != v66 )
              {
                v67 = v64 + 32;
                if ( (unsigned int)(v64 - 65) > 0x19 )
                  v67 = v64;
                v64 = v67;
                v68 = v66 + 32;
                if ( (unsigned int)(v66 - 65) > 0x19 )
                  v68 = v66;
                if ( v64 != v68 )
                  break;
              }
              if ( !v64 )
                goto LABEL_106;
            }
            v69 = "<hide_lead_actor>";
            v70 = 0x7FFFFFFFi64;
            if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            while ( 1 )
            {
              v71 = (unsigned __int8)v69[token - "<hide_lead_actor>"];
              v72 = v70;
              v73 = *(unsigned __int8 *)v69++;
              --v70;
              if ( !v72 )
              {
LABEL_118:
                camSettings->hideLeadActor = atoi(tokenValue) > 0;
                return 1i64;
              }
              if ( v71 != v73 )
              {
                v74 = v71 + 32;
                if ( (unsigned int)(v71 - 65) > 0x19 )
                  v74 = v71;
                v71 = v74;
                v75 = v73 + 32;
                if ( (unsigned int)(v73 - 65) > 0x19 )
                  v75 = v73;
                if ( v71 != v75 )
                  break;
              }
              if ( !v71 )
                goto LABEL_118;
            }
            v76 = "<hide_support_actor>";
            if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
              __debugbreak();
            while ( 1 )
            {
              v77 = (unsigned __int8)v76[token - "<hide_support_actor>"];
              v78 = v14;
              v79 = *(unsigned __int8 *)v76++;
              --v14;
              if ( !v78 )
              {
LABEL_130:
                camSettings->hideSupportActor = atoi(tokenValue) > 0;
                return 1i64;
              }
              if ( v77 != v79 )
              {
                v80 = v77 + 32;
                if ( (unsigned int)(v77 - 65) > 0x19 )
                  v80 = v77;
                v77 = v80;
                v81 = v79 + 32;
                if ( (unsigned int)(v79 - 65) > 0x19 )
                  v81 = v79;
                if ( v77 != v81 )
                  break;
              }
              if ( !v77 )
                goto LABEL_130;
            }
            switch ( camSettings->cameraMovementType )
            {
              case 1u:
                v82 = CG_ParseFixedCameraToken(token, tokenValue, fileVersion, camSettings);
                break;
              case 2u:
                v82 = CG_ParsePanCameraToken(token, tokenValue, fileVersion, camSettings);
                break;
              case 3u:
                v82 = CG_ParseRotateCameraToken(token, tokenValue, fileVersion, camSettings);
                break;
              case 4u:
                v82 = CG_ParseZoomCameraToken(token, tokenValue, fileVersion, camSettings);
                break;
              default:
                CG_CinematicCameraParseComError(COM_ERR_5368, "CG_ParseCinematicCameraCutToken: unknown camera movement index %d\n", camSettings->cameraMovementType);
                return 0i64;
            }
            if ( v82 )
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
  while ( v26 );
  if ( camSettings->cameraAnglesType )
    return 0i64;
  s0 = "none";
  v84 = "fixed";
  v85 = "position";
  v86 = "target";
  v87 = "attached";
  if ( !tokenValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1966, ASSERT_TYPE_ASSERT, "(stringMatch)", (const char *)&queryFormat, "stringMatch", s0, v84, v85, v86, v87) )
    __debugbreak();
  v31 = 0;
  v32 = 0i64;
  while ( I_strnicmp((&s0)[v32], tokenValue, 0x7FFFFFFFui64) )
  {
    ++v31;
    if ( ++v32 >= 5 )
      goto LABEL_51;
  }
  if ( v31 > 4 )
  {
LABEL_51:
    Com_Printf(0, "Cinematic Camera: <orientation> %s not supported.\n", tokenValue);
    return 0i64;
  }
  camSettings->cameraAnglesType = v31;
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

  _R15 = scene;
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
      CG_CinematicCameraParseComError(COM_ERR_5376, "Scene %s: Exceeded max <fov> settings (%d)\n", _R15->sceneName, 6i64);
      v18 = *currentFovIndex;
    }
    v19 = 0x7FFFFFFFi64;
    v20 = "_start_time>";
    _R14 = v18;
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
        __asm
        {
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovss  dword ptr [r15+r14*4+58Ch], xmm1
        }
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
        __asm
        {
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovss  dword ptr [r15+r14*4+590h], xmm1
        }
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
        _R15->fovSettings[_R14].durationBlend = atoi(v44);
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
    CG_CinematicCameraParseComError(COM_ERR_5377, "Scene %s: invalid <fov> token '%s'", _R15->sceneName, token);
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

  _R15 = offsetData;
  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2079, ASSERT_TYPE_ASSERT, "(token)", (const char *)&queryFormat, "token") )
    __debugbreak();
  if ( !tokenValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2080, ASSERT_TYPE_ASSERT, "(tokenValue)", (const char *)&queryFormat, "tokenValue") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2081, ASSERT_TYPE_ASSERT, "(offsetData)", (const char *)&queryFormat, "offsetData") )
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
      _R15->optionalTagName = SL_FindString(tokenValue);
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
      __asm
      {
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  dword ptr [r15+10h], xmm1
      }
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
        return (unsigned int)CG_ParseAnglesToken(matchPrefix, token, tokenValue, &_R15->deltaAngles) != 0;
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

  _R14 = camSettings;
  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2172, ASSERT_TYPE_ASSERT, "(token)", (const char *)&queryFormat, "token") )
    __debugbreak();
  if ( !tokenValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2173, ASSERT_TYPE_ASSERT, "(tokenValue)", (const char *)&queryFormat, "tokenValue") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2174, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  switch ( _R14->cameraAnglesType )
  {
    case 1u:
      v71 = CG_ParseAnglesToken("<angles", token, tokenValue, &_R14->fixedCamera.fixedAngles);
      return v71 || CG_ParsePositionToken("<position_start", token, tokenValue, &_R14->fixedCamera.worldPosition) || CG_ParsePositionToken("<position_end", token, tokenValue, &_R14->panningCamera.fixedPan.endWorldPosition);
    case 2u:
      v71 = CG_ParsePositionToken("<aim", token, tokenValue, &_R14->fixedCamera.fixedAngles);
      return v71 || CG_ParsePositionToken("<position_start", token, tokenValue, &_R14->fixedCamera.worldPosition) || CG_ParsePositionToken("<position_end", token, tokenValue, &_R14->panningCamera.fixedPan.endWorldPosition);
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
      else if ( CG_ParseLinkedEntityToken("<tag_start", token, tokenValue, &_R14->panningCamera.targetPan.startEntityPosition) )
      {
        return 1i64;
      }
      if ( !CG_ParseLinkedEntityToken("<tag_end", token, tokenValue, &_R14->panningCamera.targetPan.endEntityPosition) && !CG_ParseLinkedEntityToken("<tag_focus", token, tokenValue, (EntityPositionOffset *)_R14) )
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
            _R14->panningCamera.targetPan.panToSupportingActor = atoi(tokenValue) > 0;
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
        _R14->panningCamera.targetPan.focusOnSupportingActor = atoi(tokenValue) > 0;
      }
      return 1i64;
  }
  if ( _R14->cameraAnglesType != 4 )
  {
    CG_CinematicCameraParseComError(COM_ERR_5365, "CG_ParsePanCameraToken: unknown camera orientation index %d\n", _R14->cameraAnglesType);
    return 0i64;
  }
  if ( !CG_ParseLinkedEntityToken("<tag", token, tokenValue, (EntityPositionOffset *)_R14) )
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
        __asm
        {
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovss  dword ptr [r14+14h], xmm1
        }
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
        __asm
        {
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovss  dword ptr [r14+18h], xmm1
        }
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
        _R14->panningCamera.attachedPan.mountedToActor = atoi(tokenValue) > 0;
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
    if ( !(unsigned int)CG_ParseAnglesToken("<pan_mounted_angles", token, tokenValue, &_R14->panningCamera.attachedPan.mountedAnglesOffset) )
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
          _R14->panningCamera.attachedPan.panToSupportingActor = atoi(tokenValue) > 0;
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
          _R14->panningCamera.attachedPan.focusOnSupportingActor = atoi(tokenValue) > 0;
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
      _R14->panningCamera.attachedPan.panRightToLeft = atoi(tokenValue) > 0;
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

  _R15 = outPosition;
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
      __asm
      {
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  dword ptr [r15], xmm1
      }
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
      __asm
      {
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  dword ptr [r15+4], xmm1
      }
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
  __asm
  {
    vcvtsd2ss xmm1, xmm0, xmm0
    vmovss  dword ptr [r15+8], xmm1
  }
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

  _R14 = camSettings;
  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2284, ASSERT_TYPE_ASSERT, "(token)", (const char *)&queryFormat, "token") )
    __debugbreak();
  if ( !tokenValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2285, ASSERT_TYPE_ASSERT, "(tokenValue)", (const char *)&queryFormat, "tokenValue") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2286, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  if ( _R14->cameraAnglesType == 1 )
  {
    Com_Printf(0, "Cinematic Camera: Combination not suppported: <movement> rotate <orientation> fixed\n");
    return 0i64;
  }
  v8 = 0x7FFFFFFFi64;
  switch ( _R14->cameraAnglesType )
  {
    case 2u:
      if ( !(unsigned int)CG_ParsePositionToken("<position", token, tokenValue, &_R14->fixedCamera.fixedAngles) )
      {
LABEL_32:
        if ( !(unsigned int)CG_ParseAnglesToken("<angles", token, tokenValue, &_R14->fixedCamera.worldPosition) && !(unsigned int)CG_ParseAnglesToken("<rotate_degrees", token, tokenValue, &_R14->rotatingCamera.amountToRotate) )
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
              __asm
              {
                vcvtsd2ss xmm1, xmm0, xmm0
                vmovss  dword ptr [r14+20h], xmm1
              }
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
              __asm
              {
                vcvtsd2ss xmm1, xmm0, xmm0
                vmovss  dword ptr [r14+24h], xmm1
              }
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
              _R14->rotatingCamera.focusOnSupportingActor = atoi(tokenValue) > 0;
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
          _R14->rotatingCamera.rotateYawBothActors = atoi(tokenValue) > 0;
        }
      }
      return 1i64;
    case 3u:
      if ( !CG_ParseLinkedEntityToken("<tag", token, tokenValue, (EntityPositionOffset *)_R14) )
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
        _R14->rotatingCamera.worldDeltaAngles = atoi(tokenValue) > 0;
      }
      return 1i64;
    case 4u:
      Com_Printf(0, "Cinematic Camera: Combination not suppported: <movement> rotate <orientation> attached\n");
      return 0i64;
    default:
      CG_CinematicCameraParseComError(COM_ERR_5366, "CG_ParseRotateCameraToken: unknown camera orientation index %d\n", _R14->cameraAnglesType);
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

  _R15 = scene;
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
      CG_CinematicCameraParseComError(COM_ERR_5374, "Scene %s: Exceeded max <sound> settings (%d)\n", _R15->sceneName, 6i64);
      v18 = *currentSoundIndex;
    }
    v19 = "_start_time>";
    _RSI = v18;
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
        __asm
        {
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovss  dword ptr [rsi+r15+3C4h], xmm1
        }
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
        Core_strcpy(_R15->soundSettings[_RSI].name, 0x40ui64, v36);
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
        _R15->soundSettings[_RSI].nameIsAudioZone = atoi(v44) > 0;
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
        _R15->soundSettings[_RSI].zoneFadeDuration = atoi(v51);
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
    CG_CinematicCameraParseComError(COM_ERR_5375, "Scene %s: invalid <sound> token '%s'", _R15->sceneName, token);
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
    _R14 = &scene->visionSetSettings[v18];
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
        __asm
        {
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovss  dword ptr [r14+40h], xmm1
        }
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
        Core_strcpy(_R14->visionName, 0x40ui64, v36);
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
        _R14->duration = atoi(v43);
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

  _RSI = camSettings;
  if ( !token && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2351, ASSERT_TYPE_ASSERT, "(token)", (const char *)&queryFormat, "token") )
    __debugbreak();
  if ( !tokenValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2352, ASSERT_TYPE_ASSERT, "(tokenValue)", (const char *)&queryFormat, "tokenValue") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 2353, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  if ( _RSI->cameraAnglesType == 1 )
  {
    if ( (unsigned int)CG_ParsePositionToken("<position_start", token, tokenValue, &_RSI->fixedCamera.fixedAngles) || (unsigned int)CG_ParsePositionToken("<position_end", token, tokenValue, &_RSI->fixedCamera.worldPosition) )
      return 1i64;
  }
  else
  {
    if ( _RSI->cameraAnglesType == 2 )
    {
      if ( CG_ParseLinkedEntityToken("<tag_start", token, tokenValue, (EntityPositionOffset *)_RSI) )
        return 1i64;
      v9 = CG_ParsePositionToken("<position_end", token, tokenValue, &_RSI->fixedCamera.worldPosition);
    }
    else
    {
      if ( _RSI->cameraAnglesType != 3 && _RSI->cameraAnglesType != 4 )
      {
        CG_CinematicCameraParseComError(COM_ERR_5367, "CG_ParseZoomCameraToken: unknown camera orientation index %d\n", _RSI->cameraAnglesType);
        return 0i64;
      }
      if ( CG_ParseLinkedEntityToken("<tag_start", token, tokenValue, (EntityPositionOffset *)_RSI) )
        return 1i64;
      v9 = CG_ParseLinkedEntityToken("<tag_end", token, tokenValue, &_RSI->panningCamera.targetPan.startEntityPosition);
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
      __asm
      {
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  dword ptr [rsi+28h], xmm1
      }
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
      __asm
      {
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  dword ptr [rsi+2Ch], xmm1
      }
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
      _RSI->zoomingCamera.reverseActorRoles = atoi(tokenValue) > 0;
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

void __fastcall CG_StopCinematicCameras(LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
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
    __asm { vxorps  xmm2, xmm2, xmm2; fadeTime }
    p_nextCutData->startTime = 0;
    p_nextCutData->heightOffset = 0.0;
    p_nextCutData->idealPitch = 360.0;
    *(_WORD *)&p_nextCutData->useCurrentAsStartPosition = 0;
    CG_ClearAudioOverride(localClientNum, CTAUD_OVERRIDE_CINEMA, *(float *)&_XMM2);
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
  __int64 currentCutIndex; 
  unsigned int refdefViewOrg_aab; 
  unsigned int *p_org; 
  bool v15; 
  int CameraPositionAngles; 
  unsigned int refdefViewOrg_set_aab; 
  const dvar_t *v29; 
  __int64 v30; 
  cg_t *v31; 
  CameraSceneData *v32; 
  CinematicCameraScene *currentCameraScene; 
  __int64 v36; 
  bool v37; 
  ClientVisionSetData *p_cvsData; 
  const dvar_t *v42; 
  CameraSceneData *v43; 
  CinematicCameraScene *v44; 
  bool v48; 
  char v51; 
  unsigned int v56; 
  __int64 v61; 
  vec3_t *outAngles; 
  vec3_t *outAnglesa; 
  __int64 v68; 
  int v69; 
  int v70; 
  vec3_t outPosition; 
  __int64 v72; 
  __int64 v73; 
  vec3_t cameraAngles; 
  char v75; 
  void *retaddr; 

  _RAX = &retaddr;
  v73 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  if ( !CG_IsCinematicCameraActive(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1888, ASSERT_TYPE_ASSERT, "(CG_IsCinematicCameraActive( localClientNum ))", (const char *)&queryFormat, "CG_IsCinematicCameraActive( localClientNum )") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1889, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  SceneData = CG_CinematicCamera_GetSceneData(localClientNum);
  sceneName = (__int64)SceneData->currentCameraScene->sceneName;
  v72 = sceneName;
  _R12 = &SceneData->currentCutData;
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
    LODWORD(v68) = *(_DWORD *)(sceneName + 32);
    LODWORD(outAngles) = SceneData->currentCutIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1898, ASSERT_TYPE_ASSERT, "(unsigned)( sceneData->currentCutIndex ) < (unsigned)( scene->numCameraCuts )", "sceneData->currentCutIndex doesn't index scene->numCameraCuts\n\t%i not in [0, %i)", outAngles, v68) )
      __debugbreak();
  }
  currentCutIndex = SceneData->currentCutIndex;
  _RSI = (const CinematicCameraSettings *)(sceneName + 80 * currentCutIndex + 36);
  if ( !_R12->startTime )
    CG_InitCameraCutData(localClientNum, (const CinematicCameraSettings *)(sceneName + 80 * currentCutIndex + 36), _R12);
  if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
    __debugbreak();
  refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
  p_org = (unsigned int *)&LocalClientGlobals->refdef.view.org;
  if ( LocalClientGlobals == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  LODWORD(outPosition.v[0]) = *p_org ^ ((refdefViewOrg_aab ^ (unsigned int)p_org) * ((refdefViewOrg_aab ^ (unsigned int)p_org) + 2));
  LODWORD(outPosition.v[1]) = LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
  v69 = refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944);
  v15 = LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]) == v69 * (v69 + 2);
  LODWORD(outPosition.v[2]) = LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]) ^ (v69 * (v69 + 2));
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rsp+0E8h+cameraAngles], xmm6
    vmovss  dword ptr [rsp+0E8h+cameraAngles+4], xmm6
    vmovss  dword ptr [rsp+0E8h+cameraAngles+8], xmm6
    vxorps  xmm7, xmm7, xmm7
    vmovss  xmm2, dword ptr [rsi+40h]
    vmovss  xmm8, cs:__real@3a83126f
    vcomiss xmm2, xmm6
  }
  if ( !v15 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm8
      vdivss  xmm0, xmm1, xmm2; val
      vmovss  xmm2, cs:__real@3f800000; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm7, xmm0 }
  }
  __asm { vmovaps xmm3, xmm7; percentTime }
  CameraPositionAngles = CG_GetCameraPositionAngles(localClientNum, _RSI, _R12, *(double *)&_XMM3, &outPosition, &cameraAngles);
  v70 = CameraPositionAngles;
  __asm { vmovaps xmm2, xmm7; percentTime }
  CG_UpdateCinematicCameraLerp(localClientNum, SceneData, *(const float *)&_XMM2, &outPosition, &cameraAngles);
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
  v29 = DCONST_DVARBOOL_cg_cinematicCameraVisionEnabled;
  if ( !DCONST_DVARBOOL_cg_cinematicCameraVisionEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraVisionEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  v30 = 0i64;
  if ( v29->current.enabled )
  {
    if ( !CG_IsCinematicCameraActive(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1674, ASSERT_TYPE_ASSERT, "(CG_IsCinematicCameraActive( localClientNum ))", (const char *)&queryFormat, "CG_IsCinematicCameraActive( localClientNum )") )
      __debugbreak();
    v31 = CG_GetLocalClientGlobals(localClientNum);
    v32 = CG_CinematicCamera_GetSceneData(localClientNum);
    currentCameraScene = v32->currentCameraScene;
    CG_GetLocalClientGlobals(localClientNum);
    CG_CinematicCamera_GetSceneData(localClientNum);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vmulss  xmm7, xmm0, xmm8
    }
    v36 = 0i64;
    v37 = __CFADD__(currentCameraScene, 744i64);
    _RBX = &currentCameraScene->visionSetSettings[0].duration;
    do
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx-4]
        vcomiss xmm1, xmm6
      }
      if ( !v37 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rbx]
          vcomiss xmm0, xmm6
          vcomiss xmm7, xmm1
        }
        if ( !v32->visionSlotActivated[v36] )
        {
          v32->visionSlotActivated[v36] = 1;
          p_cvsData = &v31->cvsData;
          if ( *((_BYTE *)_RBX - 68) )
          {
            CG_VisionSetRegisterLeafByFileSimple(p_cvsData, VISIONSET_LEAFTYPE_CINEMATIC_CAMERA, (const char *)_RBX - 68);
            CG_VisionSetRegisterBlendStart(&v31->cvsData, VISIONSET_BLENDTYPE_CINEMATIC_CAMERA, v31->time, *_RBX, 1, VISIONSETLERP_SMOOTH);
          }
          else
          {
            CG_VisionSetRegisterBlendStart(p_cvsData, VISIONSET_BLENDTYPE_CINEMATIC_CAMERA, v31->time, *_RBX, 0, VISIONSETLERP_SMOOTH);
          }
        }
      }
      ++v36;
      _RBX += 18;
      v37 = (unsigned __int64)v36 < 4;
    }
    while ( v36 < 4 );
    _R12 = &SceneData->currentCutData;
    CameraPositionAngles = v70;
  }
  v42 = DCONST_DVARBOOL_cg_cinematicCameraSoundEnabled;
  if ( !DCONST_DVARBOOL_cg_cinematicCameraSoundEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraSoundEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  if ( v42->current.enabled )
  {
    if ( !CG_IsCinematicCameraActive(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1739, ASSERT_TYPE_ASSERT, "(CG_IsCinematicCameraActive( localClientNum ))", (const char *)&queryFormat, "CG_IsCinematicCameraActive( localClientNum )") )
      __debugbreak();
    CG_GetLocalClientGlobals(localClientNum);
    v43 = CG_CinematicCamera_GetSceneData(localClientNum);
    v44 = v43->currentCameraScene;
    CG_GetLocalClientGlobals(localClientNum);
    CG_CinematicCamera_GetSceneData(localClientNum);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vmulss  xmm7, xmm0, xmm8
    }
    v48 = __CFADD__(v44, 968i64);
    _RBX = v44->soundSettings[0].name;
    do
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx-4]
        vcomiss xmm0, xmm6
      }
      if ( !v48 )
      {
        __asm { vcomiss xmm7, xmm0 }
        if ( !v43->soundSlotActivated[v30] )
        {
          v43->soundSlotActivated[v30] = 1;
          v51 = *_RBX;
          if ( _RBX[68] )
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, dword ptr [rbx+40h]
              vmulss  xmm2, xmm0, xmm8; fadeTime
            }
            if ( v51 )
            {
              __asm { vmovaps xmm3, xmm2; fadeTime }
              CG_SetAudioOverride(localClientNum, _RBX, CTAUD_OVERRIDE_CINEMA, *(float *)&_XMM3, 2047);
            }
            else
            {
              CG_ClearAudioOverride(localClientNum, CTAUD_OVERRIDE_CINEMA, *(float *)&_XMM2);
            }
          }
          else if ( v51 )
          {
            SND_PlayLocalSoundAliasAsync(localClientNum, _RBX, SASYS_UI);
          }
        }
      }
      ++v30;
      _RBX += 76;
      v48 = (unsigned __int64)v30 < 6;
    }
    while ( v30 < 6 );
  }
  if ( CameraPositionAngles )
  {
    if ( CG_IsRunningLastSceneCut(SceneData) )
    {
      CG_StopCinematicCameras(localClientNum);
    }
    else
    {
      v56 = SceneData->currentCutIndex + 1;
      SceneData->currentCutIndex = v56;
      _RCX = &SceneData->nextCutData;
      if ( SceneData->nextCutData.startTime <= 0 )
      {
        v61 = v72;
        if ( v56 >= *(_DWORD *)(v72 + 32) )
        {
          LODWORD(v68) = *(_DWORD *)(v72 + 32);
          LODWORD(outAnglesa) = v56;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1947, ASSERT_TYPE_ASSERT, "(unsigned)( sceneData->currentCutIndex ) < (unsigned)( scene->numCameraCuts )", "sceneData->currentCutIndex doesn't index scene->numCameraCuts\n\t%i not in [0, %i)", outAnglesa, v68) )
            __debugbreak();
        }
        CG_InitCameraCutData(localClientNum, (const CinematicCameraSettings *)(v61 + 80i64 * SceneData->currentCutIndex + 36), _R12);
      }
      else
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx]
          vmovups ymmword ptr [r12], ymm0
          vmovups xmm1, xmmword ptr [rcx+20h]
          vmovups xmmword ptr [r12+20h], xmm1
          vmovsd  xmm0, qword ptr [rcx+30h]
          vmovsd  qword ptr [r12+30h], xmm0
        }
        CG_ClearCutData(_RCX);
      }
      CG_UpdateCinematicCamera(localClientNum);
    }
  }
  memset(&outPosition, 0, sizeof(outPosition));
  _R11 = &v75;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_UpdateCinematicCameraFixed
==============
*/

__int64 __fastcall CG_UpdateCinematicCameraFixed(LocalClientNum_t localClientNum, const CinematicCameraSettings *camSettings, CameraCutData *cutData, double percentTime, vec3_t *outPosition, vec3_t *outAngles)
{
  unsigned __int8 cameraMovementType; 
  bool v13; 
  bool v14; 
  bool v15; 
  bool actorIsSupporting; 
  int IsCinematicCameraActive; 
  int supportingActorId; 
  __int64 result; 
  const centity_t *EntityOffsetPosition; 
  __int64 v35; 
  double v36; 
  double v37; 
  double v38; 
  vec3_t vec; 
  vec3_t v40; 

  __asm { vmovaps [rsp+0A8h+var_38], xmm6 }
  _RDI = camSettings;
  __asm { vmovaps xmm6, xmm3 }
  if ( !cutData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 894, ASSERT_TYPE_ASSERT, "(cutData)", (const char *)&queryFormat, "cutData") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 895, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  cameraMovementType = _RDI->cameraMovementType;
  v13 = cameraMovementType == 0;
  v14 = cameraMovementType <= 1u;
  if ( cameraMovementType != 1 )
  {
    LODWORD(v35) = cameraMovementType;
    v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 896, ASSERT_TYPE_ASSERT, "( ( camSettings->cameraMovementType == CAMERAMOVEMENTTYPE_FIXED ) )", "( camSettings->cameraMovementType ) = %i", v35);
    v13 = 0;
    v14 = !v15;
    if ( v15 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v13 )
    goto LABEL_42;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v14 )
  {
LABEL_42:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+0A8h+var_70], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+0A8h+var_78], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+0A8h+var_80], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 897, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( percentTime ) && ( percentTime ) <= ( 1.0f )", "percentTime not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v36, v37, v38) )
      __debugbreak();
  }
  actorIsSupporting = _RDI->fixedCamera.actorIsSupporting;
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
  switch ( _RDI->cameraAnglesType )
  {
    case 1u:
      *outPosition = *(vec3_t *)&_RDI->zoomingCamera.endEntityPosition.optionalTagName;
      *outAngles = _RDI->fixedCamera.fixedAngles;
      goto LABEL_38;
    case 2u:
      *outPosition = *(vec3_t *)&_RDI->zoomingCamera.endEntityPosition.optionalTagName;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vsubss  xmm1, xmm0, dword ptr [rdi+14h]
        vmovss  xmm2, dword ptr [rdi+4]
        vmovss  dword ptr [rsp+0A8h+vec], xmm1
        vmovss  xmm1, dword ptr [rdi+8]
      }
      goto LABEL_36;
    case 3u:
      *outPosition = *(vec3_t *)&_RDI->zoomingCamera.endEntityPosition.optionalTagName;
      if ( !CG_CinematicCameraGetEntityOffsetPosition(localClientNum, supportingActorId, (const EntityPositionOffset *)_RDI, &v40) )
      {
LABEL_38:
        __asm { vcomiss xmm6, cs:__real@3f800000 }
        result = 1i64;
        goto LABEL_39;
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0A8h+var_50]
        vsubss  xmm1, xmm0, dword ptr [rdi+14h]
        vmovss  xmm2, dword ptr [rsp+0A8h+var_50+4]
        vmovss  dword ptr [rsp+0A8h+vec], xmm1
        vmovss  xmm1, dword ptr [rsp+0A8h+var_50+8]
      }
LABEL_36:
      __asm
      {
        vsubss  xmm0, xmm2, dword ptr [rdi+18h]
        vsubss  xmm2, xmm1, dword ptr [rdi+1Ch]
        vmovss  dword ptr [rsp+0A8h+vec+8], xmm2
        vmovss  dword ptr [rsp+0A8h+vec+4], xmm0
      }
      vectoangles(&vec, outAngles);
      goto LABEL_38;
    case 4u:
      EntityOffsetPosition = CG_CinematicCameraGetEntityOffsetPosition(localClientNum, supportingActorId, (const EntityPositionOffset *)_RDI, outPosition);
      if ( EntityOffsetPosition )
      {
        *outAngles = EntityOffsetPosition->pose.angles;
        if ( _RDI->collision )
        {
          __asm { vmovss  xmm3, cs:__real@40400000; collisionRadius }
          CameraFixedAttachedTrace(localClientNum, EntityOffsetPosition, _RDI->fixedCamera.linkedFocusTarget.optionalTagName, *(const float *)&_XMM3, outPosition);
        }
      }
      goto LABEL_38;
  }
  LODWORD(v35) = _RDI->cameraAnglesType;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 945, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_UpdateCinematicCameraFixed: unknown camera orientation index %d", v35) )
    __debugbreak();
  result = 1i64;
LABEL_39:
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  return result;
}

/*
==============
CG_UpdateCinematicCameraLerp
==============
*/

void __fastcall CG_UpdateCinematicCameraLerp(LocalClientNum_t localClientNum, CameraSceneData *sceneData, double percentTime, vec3_t *cameraPosition, vec3_t *cameraAngles)
{
  __int64 currentCutIndex; 
  cg_t *LocalClientGlobals; 
  cg_t *v28; 
  char v29; 
  vec3_t *outAngles; 
  vec3_t outPosition; 
  vec3_t v97; 

  __asm { vmovaps [rsp+0E8h+var_78], xmm9 }
  _RBP = cameraAngles;
  _RSI = cameraPosition;
  __asm { vmovaps xmm9, xmm2 }
  if ( !CG_IsCinematicCameraActive(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1583, ASSERT_TYPE_ASSERT, "(CG_IsCinematicCameraActive( localClientNum ))", (const char *)&queryFormat, "CG_IsCinematicCameraActive( localClientNum )") )
    __debugbreak();
  if ( !sceneData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1584, ASSERT_TYPE_ASSERT, "(sceneData)", (const char *)&queryFormat, "sceneData") )
    __debugbreak();
  _R14 = sceneData->currentCameraScene;
  if ( !CG_IsRunningLastSceneCut(sceneData) )
  {
    currentCutIndex = sceneData->currentCutIndex;
    __asm
    {
      vmovaps [rsp+0E8h+var_48], xmm6
      vxorps  xmm6, xmm6, xmm6
    }
    _RDI = &_R14->cameraCuts[currentCutIndex + 1];
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+44h]
      vcomiss xmm0, xmm6
    }
    if ( !__CFADD__(5 * currentCutIndex, 5 * currentCutIndex) && 10 * currentCutIndex != 0 )
    {
      _RAX = 10 * currentCutIndex;
      __asm { vcomiss xmm6, dword ptr [r14+rax*8+64h] }
      if ( __CFADD__(5 * currentCutIndex, 5 * currentCutIndex) )
      {
        __asm
        {
          vmovaps [rsp+0E8h+var_58], xmm7
          vmovss  xmm7, cs:__real@3f800000
          vmovaps [rsp+0E8h+var_68], xmm8
          vsubss  xmm8, xmm7, xmm9
          vcomiss xmm8, xmm0
        }
        if ( __CFADD__(5 * currentCutIndex, 5 * currentCutIndex) || 10 * currentCutIndex == 0 )
        {
          __asm { vmovaps [rsp+0E8h+var_88], xmm10 }
          LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
          __asm
          {
            vmovss  xmm1, dword ptr [rdi+44h]
            vdivss  xmm0, xmm8, xmm1
            vsubss  xmm10, xmm7, xmm0
            vmulss  xmm8, xmm1, xmm10
            vcomiss xmm8, xmm6
          }
          v28 = LocalClientGlobals;
          if ( v29 )
          {
            __asm
            {
              vcvtss2sd xmm0, xmm8, xmm8
              vmovsd  [rsp+0E8h+outAngles], xmm0
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1613, ASSERT_TYPE_ASSERT, "( ( percentTimeIntoNextCut >= 0.0f ) )", "( percentTimeIntoNextCut ) = %g", *(double *)&outAngles) )
              __debugbreak();
          }
          if ( sceneData->nextCutData.startTime <= 0 )
          {
            sceneData->nextCutData.useCurrentAsStartPosition = 1;
            CG_InitCameraCutData(localClientNum, _RDI, &sceneData->nextCutData);
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rsi]
            vmovss  xmm1, dword ptr [rsi+4]
            vmovss  dword ptr [rsp+0E8h+outPosition], xmm0
            vmovss  xmm0, dword ptr [rsi+8]
            vmovss  dword ptr [rsp+0E8h+outPosition+4], xmm1
            vmovss  xmm1, dword ptr [rbp+0]
            vmovss  dword ptr [rsp+0E8h+outPosition+8], xmm0
            vmovss  xmm0, dword ptr [rbp+4]
            vmovss  dword ptr [rsp+0E8h+var_A8], xmm1
            vmovss  xmm1, dword ptr [rbp+8]
            vmovaps xmm3, xmm8; percentTime
            vmovss  dword ptr [rsp+0E8h+var_A8+4], xmm0
            vmovss  dword ptr [rsp+0E8h+var_A8+8], xmm1
          }
          CG_GetCameraPositionAngles(localClientNum, _RDI, &sceneData->nextCutData, *(double *)&_XMM3, &outPosition, &v97);
          __asm
          {
            vcomiss xmm9, xmm7
            vmovss  xmm0, dword ptr [rsp+0E8h+outPosition]
          }
          if ( v29 )
          {
            __asm
            {
              vsubss  xmm1, xmm0, dword ptr [rsi]
              vmovss  xmm8, cs:__real@3b360b61
              vmovss  xmm7, cs:__real@3f000000
              vmovss  xmm6, cs:__real@43b40000
              vmovss  xmm0, dword ptr [rsp+0E8h+outPosition+4]
              vmulss  xmm2, xmm1, xmm10
              vsubss  xmm1, xmm0, dword ptr [rsi+4]
              vaddss  xmm3, xmm2, dword ptr [rsi]
              vmovss  xmm0, dword ptr [rsp+0E8h+outPosition+8]
              vmovss  dword ptr [rsi], xmm3
              vmulss  xmm2, xmm1, xmm10
              vsubss  xmm1, xmm0, dword ptr [rsi+8]
              vaddss  xmm3, xmm2, dword ptr [rsi+4]
              vmovss  xmm0, dword ptr [rsp+0E8h+var_A8]
              vmovss  dword ptr [rsi+4], xmm3
              vmulss  xmm2, xmm1, xmm10
              vaddss  xmm3, xmm2, dword ptr [rsi+8]
              vmovss  dword ptr [rsi+8], xmm3
              vsubss  xmm1, xmm0, dword ptr [rbp+0]
              vmulss  xmm3, xmm1, xmm8
              vaddss  xmm1, xmm3, xmm7
              vxorps  xmm9, xmm9, xmm9
              vroundss xmm2, xmm9, xmm1, 1
              vsubss  xmm0, xmm3, xmm2
              vmulss  xmm0, xmm0, xmm6
              vmulss  xmm1, xmm0, xmm10
              vaddss  xmm2, xmm1, dword ptr [rbp+0]
              vmovss  xmm0, dword ptr [rsp+0E8h+var_A8+4]
              vsubss  xmm1, xmm0, dword ptr [rbp+4]
              vmulss  xmm4, xmm1, xmm8
              vmovss  dword ptr [rbp+0], xmm2
              vaddss  xmm2, xmm4, xmm7
              vroundss xmm3, xmm9, xmm2, 1
              vsubss  xmm0, xmm4, xmm3
              vmulss  xmm1, xmm0, xmm6
              vmovss  xmm0, dword ptr [rsp+0E8h+var_A8+8]
              vmulss  xmm2, xmm1, xmm10
              vsubss  xmm1, xmm0, dword ptr [rbp+8]
              vaddss  xmm3, xmm2, dword ptr [rbp+4]
              vmulss  xmm4, xmm1, xmm8
              vaddss  xmm2, xmm4, xmm7
              vmovss  dword ptr [rbp+4], xmm3
              vroundss xmm3, xmm9, xmm2, 1
              vsubss  xmm0, xmm4, xmm3
              vmulss  xmm1, xmm0, xmm6
              vmulss  xmm2, xmm1, xmm10
              vaddss  xmm3, xmm2, dword ptr [rbp+8]
              vmovss  dword ptr [rbp+8], xmm3
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rsp+0E8h+outPosition+4]
              vmovss  dword ptr [rsi+4], xmm1
              vmovss  xmm1, dword ptr [rsp+0E8h+var_A8]
              vmovss  dword ptr [rsi], xmm0
              vmovss  xmm0, dword ptr [rsp+0E8h+outPosition+8]
              vmovss  dword ptr [rsi+8], xmm0
              vmovss  xmm0, dword ptr [rsp+0E8h+var_A8+4]
              vmovss  dword ptr [rbp+0], xmm1
              vmovss  xmm1, dword ptr [rsp+0E8h+var_A8+8]
              vmovss  dword ptr [rbp+8], xmm1
              vmovss  dword ptr [rbp+4], xmm0
              vmovss  xmm0, dword ptr [rdi+40h]
              vmulss  xmm2, xmm0, dword ptr [rdi+44h]
              vmulss  xmm1, xmm2, cs:__real@447a0000
              vcvttss2si eax, xmm1
            }
            sceneData->nextCutData.startTime = v28->time - _EAX;
          }
          __asm { vmovaps xmm10, [rsp+0E8h+var_88] }
        }
        __asm
        {
          vmovaps xmm7, [rsp+0E8h+var_58]
          vmovaps xmm8, [rsp+0E8h+var_68]
        }
      }
    }
    __asm { vmovaps xmm6, [rsp+0E8h+var_48] }
  }
  __asm { vmovaps xmm9, [rsp+0E8h+var_78] }
}

/*
==============
CG_UpdateCinematicCameraPan
==============
*/

__int64 __fastcall CG_UpdateCinematicCameraPan(LocalClientNum_t localClientNum, const CinematicCameraSettings *camSettings, CameraCutData *cutData, double percentTime, vec3_t *outPosition, vec3_t *outAngles)
{
  unsigned __int8 cameraMovementType; 
  bool v21; 
  bool v22; 
  bool v23; 
  CameraSceneData *SceneData; 
  unsigned int leadingActorId; 
  unsigned int supportingActorId; 
  bool v32; 
  __int64 v33; 
  float v97; 
  unsigned int v98; 
  unsigned int v99; 
  int v100; 
  CinematicCameraSettings *camSettingsa; 
  CinematicCameraSettings *camSettingsb; 
  CinematicCameraSettings *camSettingsc; 
  CameraCutData *cutDataa; 
  vec3_t *result; 
  unsigned int time; 
  unsigned int entityId; 
  vec3_t v148; 
  vec3_t start; 
  vec3_t vec; 
  vec3_t end; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t right; 
  vec3_t v155; 
  char v163; 

  __asm
  {
    vmovaps [rsp+180h+var_50], xmm6
    vmovaps [rsp+180h+var_A0], xmm11
    vmovaps [rsp+180h+var_B0], xmm12
  }
  _RSI = outPosition;
  _RDI = cutData;
  _R12 = outAngles;
  _RBX = camSettings;
  __asm { vmovaps xmm11, xmm3 }
  if ( !cutData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 974, ASSERT_TYPE_ASSERT, "(cutData)", (const char *)&queryFormat, "cutData") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 975, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  cameraMovementType = _RBX->cameraMovementType;
  v21 = cameraMovementType < 2u;
  v22 = cameraMovementType <= 2u;
  if ( cameraMovementType != 2 )
  {
    LODWORD(camSettingsa) = cameraMovementType;
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 976, ASSERT_TYPE_ASSERT, "( ( camSettings->cameraMovementType == CAMERAMOVEMENTTYPE_PAN ) )", "( camSettings->cameraMovementType ) = %i", camSettingsa);
    v21 = 0;
    v22 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm12, cs:__real@3f800000
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm11, xmm6
  }
  if ( v21 )
    goto LABEL_63;
  __asm { vcomiss xmm11, xmm12 }
  if ( !v22 )
  {
LABEL_63:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+180h+result], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+180h+cutData], xmm1
      vcvtss2sd xmm2, xmm11, xmm11
      vmovsd  [rsp+180h+camSettings], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 977, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( percentTime ) && ( percentTime ) <= ( 1.0f )", "percentTime not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&camSettingsb, *(double *)&cutDataa, *(double *)&result) )
      __debugbreak();
  }
  if ( !CG_IsCinematicCameraActive(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 872, ASSERT_TYPE_ASSERT, "(CG_IsCinematicCameraActive( localClientNum ))", (const char *)&queryFormat, "CG_IsCinematicCameraActive( localClientNum )") )
    __debugbreak();
  SceneData = CG_CinematicCamera_GetSceneData(localClientNum);
  leadingActorId = SceneData->leadingActorId;
  supportingActorId = SceneData->supportingActorId;
  time = CG_GetLocalClientGlobals(localClientNum)->time;
  if ( _RBX->cameraAnglesType == 1 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+20h]
      vsubss  xmm1, xmm0, dword ptr [rbx+14h]
      vmulss  xmm2, xmm1, xmm11
      vaddss  xmm3, xmm2, dword ptr [rbx+14h]
      vmovss  dword ptr [rsi], xmm3
      vmovss  xmm0, dword ptr [rbx+24h]
      vsubss  xmm1, xmm0, dword ptr [rbx+18h]
      vmulss  xmm2, xmm1, xmm11
      vaddss  xmm3, xmm2, dword ptr [rbx+18h]
      vmovss  dword ptr [rsi+4], xmm3
      vmovss  xmm0, dword ptr [rbx+28h]
      vsubss  xmm1, xmm0, dword ptr [rbx+1Ch]
      vmulss  xmm2, xmm1, xmm11
      vaddss  xmm3, xmm2, dword ptr [rbx+1Ch]
      vmovss  dword ptr [rsi+8], xmm3
    }
    *(_QWORD *)outAngles->v = *(_QWORD *)_RBX->fixedCamera.fixedAngles.v;
    v97 = _RBX->fixedCamera.fixedAngles.v[2];
LABEL_58:
    outAngles->v[2] = v97;
LABEL_59:
    __asm { vcomiss xmm11, xmm12 }
    v33 = 1i64;
    goto LABEL_60;
  }
  v32 = _RBX->cameraAnglesType == 1 || _RBX->cameraAnglesType == 2;
  switch ( _RBX->cameraAnglesType )
  {
    case 2u:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+14h]
        vmovss  xmm1, dword ptr [rbx+18h]
        vmovss  dword ptr [rsp+180h+start], xmm0
        vmovss  xmm0, dword ptr [rbx+1Ch]
        vmovss  dword ptr [rsp+180h+start+8], xmm0
        vmovss  xmm0, dword ptr [rbx+24h]
        vmovss  dword ptr [rsp+180h+start+4], xmm1
        vmovss  xmm1, dword ptr [rbx+20h]
        vmovss  dword ptr [rsp+180h+end+4], xmm0
        vmovss  xmm0, dword ptr [rbx]
        vmovss  dword ptr [rsp+180h+end], xmm1
        vmovss  xmm1, dword ptr [rbx+28h]
        vmovss  dword ptr [rsp+180h+var_138], xmm0
        vmovss  xmm0, dword ptr [rbx+8]
        vmovss  dword ptr [rbp+80h+end+8], xmm1
        vmovss  xmm1, dword ptr [rbx+4]
        vmovss  dword ptr [rsp+180h+var_138+8], xmm0
        vmovss  dword ptr [rsp+180h+var_138+4], xmm1
      }
      v100 = 2047;
LABEL_53:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+40h]
        vcomiss xmm0, xmm6
      }
      if ( v32 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+180h+camSettings], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1094, ASSERT_TYPE_ASSERT, "( ( camSettings->time > 0.0f ) )", "( camSettings->time ) = %g", *(double *)&camSettingsc) )
          __debugbreak();
      }
      __asm { vmovaps xmm3, xmm11; interpolation }
      CameraLerpTrace(localClientNum, &start, &end, *(const float *)&_XMM3, v100, _RBX, _RDI, outPosition);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+180h+var_138]
        vsubss  xmm1, xmm0, dword ptr [rsi]
        vmovss  xmm2, dword ptr [rsp+180h+var_138+4]
        vsubss  xmm0, xmm2, dword ptr [rsi+4]
        vmovss  dword ptr [rsp+180h+vec], xmm1
        vmovss  xmm1, dword ptr [rsp+180h+var_138+8]
        vsubss  xmm2, xmm1, dword ptr [rsi+8]
        vmovss  dword ptr [rsp+180h+vec+8], xmm2
        vmovss  dword ptr [rsp+180h+vec+4], xmm0
      }
      vectoangles(&vec, &v155);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+80h+var_C8]
        vmovss  xmm1, dword ptr [rbp+80h+var_C8+4]
        vmovss  dword ptr [r12], xmm0
        vmovss  xmm0, dword ptr [rbp+80h+var_C8+8]
        vmovss  dword ptr [r12+8], xmm0
        vmovss  dword ptr [r12+4], xmm1
      }
      goto LABEL_59;
    case 3u:
      v98 = supportingActorId;
      if ( !_RBX->panningCamera.targetPan.focusOnSupportingActor )
        v98 = leadingActorId;
      entityId = v98;
      v99 = supportingActorId;
      if ( _RBX->panningCamera.targetPan.panToSupportingActor )
      {
        supportingActorId = leadingActorId;
        leadingActorId = v99;
      }
      if ( !CG_CinematicCameraGetEntityOffsetPosition(localClientNum, supportingActorId, &_RBX->panningCamera.targetPan.startEntityPosition, &start) )
      {
        Com_Printf(0, "<movement> pan <orientation> target does not have valid end entity id %d\n", supportingActorId);
        v33 = 1i64;
        goto LABEL_60;
      }
      if ( !CG_CinematicCameraGetEntityOffsetPosition(localClientNum, leadingActorId, &_RBX->panningCamera.targetPan.endEntityPosition, &end) )
      {
        Com_Printf(0, "<movement> pan <orientation> target does not have valid end entity id %d\n", leadingActorId);
        v33 = 1i64;
        goto LABEL_60;
      }
      v100 = entityId;
      if ( !CG_CinematicCameraGetEntityOffsetPosition(localClientNum, entityId, (const EntityPositionOffset *)_RBX, &v148) )
      {
        Com_Printf(0, "<movement> pan <orientation> target does not have valid focus entity id %d\n", entityId);
        v33 = 1i64;
        goto LABEL_60;
      }
      if ( _RDI->useCurrentAsStartPosition || (v32 = !_RBX->useCurrentAsStartPosition, _RBX->useCurrentAsStartPosition) )
      {
        v32 = _RDI->startTime <= time;
        if ( _RDI->startTime == time )
          _RDI->startPosition = *outPosition;
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+4]
          vmovss  xmm1, dword ptr [rdi+8]
          vmovss  dword ptr [rsp+180h+start], xmm0
          vmovss  xmm0, dword ptr [rdi+0Ch]
          vmovss  dword ptr [rsp+180h+start+8], xmm0
          vmovss  dword ptr [rsp+180h+start+4], xmm1
        }
      }
      goto LABEL_53;
    case 4u:
      if ( !_RBX->panningCamera.targetPan.focusOnSupportingActor )
        leadingActorId = supportingActorId;
      _R13 = CG_CinematicCameraGetEntityOffsetPosition(localClientNum, leadingActorId, (const EntityPositionOffset *)_RBX, &v148);
      if ( !_R13 )
      {
        Com_Printf(0, "<pan> camera does not have valid entity id %d\n", leadingActorId);
        v33 = 1i64;
        goto LABEL_60;
      }
      if ( _RBX->panningCamera.attachedPan.mountedToActor || _RDI->startTime == time )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+1Ch]
          vaddss  xmm1, xmm0, dword ptr [r13+48h]
          vmovss  xmm2, dword ptr [r13+4Ch]
          vaddss  xmm0, xmm2, dword ptr [rbx+20h]
          vmovss  xmm6, dword ptr [rbx+14h]
          vmovaps [rsp+180h+var_60], xmm7
          vmovss  dword ptr [rbp+80h+angles], xmm1
          vmovss  xmm1, dword ptr [r13+50h]
          vaddss  xmm2, xmm1, dword ptr [rbx+24h]
          vmovaps [rsp+180h+var_70], xmm8
          vmovaps [rsp+180h+var_80], xmm9
          vmovaps [rsp+180h+var_90], xmm10
          vmovss  xmm10, dword ptr [rbx+18h]
          vmovss  dword ptr [rbp+80h+angles+8], xmm2
          vmovss  dword ptr [rbp+80h+angles+4], xmm0
        }
        AngleVectors(&angles, &forward, &right, NULL);
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [rbp+80h+forward]
          vmovss  xmm4, dword ptr [rsp+180h+var_138]
          vmovss  xmm3, dword ptr [rsp+180h+var_138+4]
          vmovss  xmm2, dword ptr [rsp+180h+var_138+8]
          vaddss  xmm9, xmm1, xmm4
          vmulss  xmm1, xmm6, dword ptr [rbp+80h+forward+4]
          vaddss  xmm8, xmm1, xmm3
          vmulss  xmm1, xmm6, dword ptr [rbp+80h+forward+8]
          vsubss  xmm0, xmm4, xmm9
          vaddss  xmm7, xmm1, xmm2
          vmovss  dword ptr [rsp+180h+vec], xmm0
          vsubss  xmm0, xmm2, xmm7
          vsubss  xmm1, xmm3, xmm8
          vmovss  dword ptr [rsp+180h+vec+8], xmm0
          vmovss  dword ptr [rsp+180h+vec+4], xmm1
        }
        vectoangles(&vec, &_RDI->angles);
        __asm
        {
          vmulss  xmm2, xmm10, cs:__real@3f000000
          vmulss  xmm0, xmm2, dword ptr [rbp+80h+right]
          vmulss  xmm3, xmm10, cs:__real@bf000000
          vmovaps xmm10, [rsp+180h+var_90]
          vaddss  xmm1, xmm0, xmm9
          vmulss  xmm0, xmm2, dword ptr [rbp+80h+right+4]
          vmovss  dword ptr [rdi+4], xmm1
          vaddss  xmm1, xmm0, xmm8
          vmulss  xmm0, xmm2, dword ptr [rbp+80h+right+8]
          vmulss  xmm2, xmm3, dword ptr [rbp+80h+right+4]
          vmovss  dword ptr [rdi+8], xmm1
          vaddss  xmm1, xmm0, xmm7
          vmulss  xmm0, xmm3, dword ptr [rbp+80h+right]
          vmovss  dword ptr [rdi+0Ch], xmm1
          vaddss  xmm1, xmm0, xmm9
          vmovaps xmm9, [rsp+180h+var_80]
          vaddss  xmm0, xmm2, xmm8
          vmovaps xmm8, [rsp+180h+var_70]
          vmovss  dword ptr [rdi+10h], xmm1
          vmulss  xmm1, xmm3, dword ptr [rbp+80h+right+8]
          vaddss  xmm2, xmm1, xmm7
          vmovaps xmm7, [rsp+180h+var_60]
          vmovss  dword ptr [rdi+18h], xmm2
          vmovss  dword ptr [rdi+14h], xmm0
        }
      }
      if ( _RBX->panningCamera.attachedPan.panRightToLeft )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+4]
          vsubss  xmm1, xmm0, dword ptr [rdi+10h]
          vmulss  xmm2, xmm1, xmm11
          vaddss  xmm3, xmm2, dword ptr [rdi+10h]
          vmovss  dword ptr [rsi], xmm3
          vmovss  xmm0, dword ptr [rdi+8]
          vsubss  xmm1, xmm0, dword ptr [rdi+14h]
          vmulss  xmm2, xmm1, xmm11
          vaddss  xmm3, xmm2, dword ptr [rdi+14h]
          vmovss  dword ptr [rsi+4], xmm3
          vmovss  xmm0, dword ptr [rdi+0Ch]
          vsubss  xmm1, xmm0, dword ptr [rdi+18h]
          vmulss  xmm2, xmm1, xmm11
          vaddss  xmm3, xmm2, dword ptr [rdi+18h]
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+10h]
          vsubss  xmm1, xmm0, dword ptr [rdi+4]
          vmulss  xmm2, xmm1, xmm11
          vaddss  xmm3, xmm2, dword ptr [rdi+4]
          vmovss  dword ptr [rsi], xmm3
          vmovss  xmm0, dword ptr [rdi+14h]
          vsubss  xmm1, xmm0, dword ptr [rdi+8]
          vmulss  xmm2, xmm1, xmm11
          vaddss  xmm3, xmm2, dword ptr [rdi+8]
          vmovss  dword ptr [rsi+4], xmm3
          vmovss  xmm0, dword ptr [rdi+18h]
          vsubss  xmm1, xmm0, dword ptr [rdi+0Ch]
          vmulss  xmm2, xmm1, xmm11
          vaddss  xmm3, xmm2, dword ptr [rdi+0Ch]
        }
      }
      __asm { vmovss  dword ptr [rsi+8], xmm3 }
      if ( _RBX->collision )
      {
        __asm { vmovaps xmm3, xmm12; collisionRadius }
        CameraFixedAttachedTrace(localClientNum, _R13, _RBX->fixedCamera.linkedFocusTarget.optionalTagName, *(const float *)&_XMM3, outPosition);
      }
      *(_QWORD *)outAngles->v = *(_QWORD *)_RDI->angles.v;
      v97 = _RDI->angles.v[2];
      goto LABEL_58;
  }
  LODWORD(camSettingsa) = _RBX->cameraAnglesType;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1089, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_UpdateCinematicCameraPan: unknown camera orientation index %d", camSettingsa) )
    __debugbreak();
  v33 = 1i64;
LABEL_60:
  _R11 = &v163;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
  }
  return v33;
}

/*
==============
CG_UpdateCinematicCameraRotate
==============
*/

__int64 __fastcall CG_UpdateCinematicCameraRotate(LocalClientNum_t localClientNum, const CinematicCameraSettings *camSettings, CameraCutData *cutData, double percentTime, vec3_t *outPosition, vec3_t *outAngles)
{
  vec3_t *v13; 
  unsigned __int8 cameraMovementType; 
  bool v20; 
  bool v21; 
  bool v22; 
  unsigned int v27; 
  const centity_t *EntityOffsetPosition; 
  char v34; 
  char v35; 
  CameraSceneData *SceneData; 
  unsigned int supportingActorId; 
  __int64 result; 
  vec3_t *v78; 
  vec3_t *v79; 
  vec3_t *v80; 
  float v81; 
  centity_t *cent; 
  CameraCutData *cutDataa; 
  vec3_t angles; 
  vec3_t focusPosition; 
  vec3_t end; 
  vec3_t forward; 
  vec3_t vec; 
  char v90; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-88h], xmm9
  }
  v13 = outAngles;
  _RSI = outPosition;
  _RDI = cutData;
  _RBX = camSettings;
  __asm { vmovaps xmm6, xmm3 }
  if ( !cutData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1221, ASSERT_TYPE_ASSERT, "(cutData)", (const char *)&queryFormat, "cutData") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1222, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  cameraMovementType = _RBX->cameraMovementType;
  v20 = cameraMovementType < 3u;
  v21 = cameraMovementType <= 3u;
  if ( cameraMovementType != 3 )
  {
    LODWORD(v78) = cameraMovementType;
    v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1223, ASSERT_TYPE_ASSERT, "( ( camSettings->cameraMovementType == CAMERAMOVEMENTTYPE_ROTATE ) )", "( camSettings->cameraMovementType ) = %i", v78);
    v20 = 0;
    v21 = !v22;
    if ( v22 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
  }
  if ( v20 )
    goto LABEL_49;
  __asm { vcomiss xmm6, xmm9 }
  if ( !v21 )
  {
LABEL_49:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+130h+cutData], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+130h+cent], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+130h+var_108], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1224, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( percentTime ) && ( percentTime ) <= ( 1.0f )", "percentTime not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&v79, *(double *)&cent, *(double *)&cutDataa) )
      __debugbreak();
  }
  v27 = 0;
  EntityOffsetPosition = NULL;
  CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+40h]; totalCamTime
    vxorps  xmm0, xmm0, xmm0
    vmovaps xmm1, xmm6; percentTime
    vcvtsi2ss xmm0, xmm0, dword ptr [rax+65E4h]
    vmulss  xmm3, xmm0, cs:__real@3a83126f; deltaSeconds
    vmovss  dword ptr [rsp+130h+angles], xmm7
    vmovss  dword ptr [rsp+130h+angles+4], xmm7
    vmovss  dword ptr [rsp+130h+angles+8], xmm7
  }
  CG_CameraRotateUpdateAngles((const RotatingCamera *)_RBX, *(const float *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, _RDI, &angles);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+40h]
    vcomiss xmm0, xmm7
  }
  if ( v34 | v35 )
    goto LABEL_17;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+24h]
    vcomiss xmm1, xmm7
  }
  if ( v34 | v35 )
  {
LABEL_17:
    __asm { vmovss  xmm7, dword ptr [rbx+20h] }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm9, xmm6
      vmulss  xmm2, xmm0, dword ptr [rbx+20h]
      vmulss  xmm1, xmm1, xmm6
      vaddss  xmm7, xmm2, xmm1
    }
  }
  if ( _RBX->cameraAnglesType == 1 )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144275B30, 1221i64);
    goto LABEL_45;
  }
  if ( _RBX->cameraAnglesType == 2 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  dword ptr [rsp+130h+focusPosition], xmm0
      vmovss  xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rbp+47h+focusPosition+8], xmm0
      vmovss  dword ptr [rbp+47h+focusPosition+4], xmm1
    }
  }
  else
  {
    if ( _RBX->cameraAnglesType != 3 )
    {
      if ( _RBX->cameraAnglesType == 4 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&unk_144275BB0, 1222i64);
      }
      else
      {
        LODWORD(v80) = _RBX->cameraAnglesType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1273, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_UpdateCinematicCameraRotate: unknown camera orientation index %d", v80) )
          __debugbreak();
      }
      goto LABEL_45;
    }
    if ( !CG_IsCinematicCameraActive(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 872, ASSERT_TYPE_ASSERT, "(CG_IsCinematicCameraActive( localClientNum ))", (const char *)&queryFormat, "CG_IsCinematicCameraActive( localClientNum )") )
      __debugbreak();
    SceneData = CG_CinematicCamera_GetSceneData(localClientNum);
    supportingActorId = SceneData->supportingActorId;
    if ( !_RBX->rotatingCamera.focusOnSupportingActor )
      supportingActorId = SceneData->leadingActorId;
    EntityOffsetPosition = CG_CinematicCameraGetEntityOffsetPosition(localClientNum, supportingActorId, (const EntityPositionOffset *)_RBX, &focusPosition);
    if ( !EntityOffsetPosition )
    {
      Com_Printf(0, "<rotate> camera does not have valid entity id %d\n", supportingActorId);
LABEL_45:
      result = 1i64;
      goto LABEL_46;
    }
    if ( !_RBX->rotatingCamera.worldDeltaAngles )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+130h+angles]
        vaddss  xmm1, xmm0, dword ptr [rax+48h]
        vmovss  xmm2, dword ptr [rsp+130h+angles+4]
        vmovss  dword ptr [rsp+130h+angles], xmm1
        vaddss  xmm0, xmm2, dword ptr [rax+4Ch]
        vmovss  xmm1, dword ptr [rsp+130h+angles+8]
        vmovss  dword ptr [rsp+130h+angles+4], xmm0
        vaddss  xmm2, xmm1, dword ptr [rax+50h]
        vmovss  dword ptr [rsp+130h+angles+8], xmm2
      }
    }
    if ( _RBX->rotatingCamera.rotateYawBothActors )
    {
      __asm
      {
        vmovaps xmm3, xmm7; distanceToFocalPoint
        vmovaps xmm2, xmm6; percentTime
      }
      CG_CameraRotateYawToViewActor(localClientNum, (const RotatingCamera *)_RBX, *(double *)&_XMM2, *(double *)&_XMM3, &focusPosition, &angles);
    }
    v13 = outAngles;
  }
  __asm { vmovaps xmmword ptr [rsp+130h+var_78+8], xmm8 }
  AngleVectors(&angles, &forward, NULL, NULL);
  __asm
  {
    vxorps  xmm2, xmm7, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm1, xmm2, dword ptr [rbp+47h+forward]
    vmovss  xmm4, dword ptr [rsp+130h+focusPosition]
    vmovss  xmm5, dword ptr [rbp+47h+focusPosition+4]
    vaddss  xmm3, xmm1, xmm4
    vmulss  xmm1, xmm2, dword ptr [rbp+47h+forward+4]
    vaddss  xmm8, xmm1, xmm5
    vmulss  xmm1, xmm2, dword ptr [rbp+47h+forward+8]
    vmovss  xmm2, dword ptr [rbp+47h+focusPosition+8]
    vaddss  xmm0, xmm1, xmm2
    vmovss  dword ptr [rbp+47h+end+8], xmm0
    vmovss  dword ptr [rbp+47h+end], xmm3
    vmovss  dword ptr [rbp+47h+end+4], xmm8
  }
  if ( _RBX->collision )
  {
    if ( _RDI->detached )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+10h]
        vmovss  xmm1, dword ptr [rdi+14h]
        vmovss  dword ptr [rbp+47h+end], xmm0
        vmovss  xmm0, dword ptr [rdi+18h]
        vmovss  dword ptr [rbp+47h+end+8], xmm0
        vmovss  dword ptr [rbp+47h+end+4], xmm1
      }
    }
    __asm
    {
      vmovss  dword ptr [rsp+130h+var_108], xmm7
      vmovaps xmm2, xmm6; percentTime
    }
    CameraRotateTrace(localClientNum, (const RotatingCamera *)_RBX, *(const float *)&_XMM2, &focusPosition, &end, v81, EntityOffsetPosition, _RDI, outPosition);
    __asm
    {
      vmovss  xmm3, dword ptr [rsi]
      vmovss  xmm2, dword ptr [rbp+47h+focusPosition+8]
      vmovss  xmm5, dword ptr [rbp+47h+focusPosition+4]
      vmovss  xmm4, dword ptr [rsp+130h+focusPosition]
    }
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [rsi], xmm3
      vmovss  dword ptr [rsi+4], xmm8
      vmovss  dword ptr [rsi+8], xmm0
    }
  }
  __asm { vmovss  dword ptr [rdi+10h], xmm3 }
  *(_QWORD *)&_RDI->endPosition.y = *(_QWORD *)&outPosition->y;
  __asm
  {
    vsubss  xmm0, xmm4, dword ptr [rsi]
    vsubss  xmm1, xmm5, dword ptr [rsi+4]
    vmovss  dword ptr [rbp+47h+vec], xmm0
    vsubss  xmm0, xmm2, dword ptr [rsi+8]
    vmovss  dword ptr [rbp+47h+vec+8], xmm0
    vmovss  dword ptr [rbp+47h+vec+4], xmm1
  }
  vectoangles(&vec, v13);
  __asm
  {
    vmovaps xmm8, xmmword ptr [rsp+130h+var_78+8]
    vcomiss xmm6, xmm9
  }
  LOBYTE(v27) = !v20;
  result = v27;
LABEL_46:
  _R11 = &v90;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
  return result;
}

/*
==============
CG_UpdateCinematicCameraZoom
==============
*/

__int64 __fastcall CG_UpdateCinematicCameraZoom(LocalClientNum_t localClientNum, const CinematicCameraSettings *camSettings, CameraCutData *cutData, double percentTime, vec3_t *outPosition, vec3_t *outAngles)
{
  unsigned __int8 cameraMovementType; 
  bool v20; 
  bool v21; 
  bool v22; 
  cg_t *LocalClientGlobals; 
  CameraSceneData *SceneData; 
  unsigned int leadingActorId; 
  unsigned int supportingActorId; 
  int cameraAnglesType; 
  bool v32; 
  int v33; 
  int v34; 
  int v35; 
  __int64 result; 
  const centity_t *EntityOffsetPosition; 
  const centity_t *v38; 
  bool v50; 
  char v107; 
  CinematicCameraSettings *camSettingsa; 
  CinematicCameraSettings *camSettingsb; 
  CinematicCameraSettings *camSettingsc; 
  CameraCutData *cutDataa; 
  double v114; 
  vec3_t end; 
  vec3_t start; 
  vec3_t vec; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  _RSI = cutData;
  _RBX = camSettings;
  __asm { vmovaps xmm6, xmm3 }
  if ( !cutData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1316, ASSERT_TYPE_ASSERT, "(cutData)", (const char *)&queryFormat, "cutData") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1317, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  cameraMovementType = _RBX->cameraMovementType;
  v20 = cameraMovementType < 4u;
  v21 = cameraMovementType <= 4u;
  if ( cameraMovementType != 4 )
  {
    LODWORD(camSettingsa) = cameraMovementType;
    v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1318, ASSERT_TYPE_ASSERT, "( ( camSettings->cameraMovementType == CAMERAMOVEMENTTYPE_ZOOM ) )", "( camSettings->cameraMovementType ) = %i", camSettingsa);
    v20 = 0;
    v21 = !v22;
    if ( v22 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
  }
  if ( v20 )
    goto LABEL_56;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v21 )
  {
LABEL_56:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  qword ptr [rsp+38h], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+140h+cutData], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+140h+camSettings], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1319, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( percentTime ) && ( percentTime ) <= ( 1.0f )", "percentTime not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(double *)&camSettingsb, *(double *)&cutDataa, v114) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !CG_IsCinematicCameraActive(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 872, ASSERT_TYPE_ASSERT, "(CG_IsCinematicCameraActive( localClientNum ))", (const char *)&queryFormat, "CG_IsCinematicCameraActive( localClientNum )") )
    __debugbreak();
  SceneData = CG_CinematicCamera_GetSceneData(localClientNum);
  leadingActorId = SceneData->leadingActorId;
  supportingActorId = SceneData->supportingActorId;
  if ( _RBX->zoomingCamera.reverseActorRoles )
  {
    leadingActorId = SceneData->supportingActorId;
    supportingActorId = SceneData->leadingActorId;
  }
  cameraAnglesType = _RBX->cameraAnglesType;
  v20 = cameraAnglesType == 0;
  v33 = cameraAnglesType - 1;
  v32 = v20 || v33 == 0;
  if ( v33 )
  {
    v34 = v33 - 1;
    if ( v34 )
    {
      v35 = v34 - 1;
      if ( v35 )
      {
        if ( v35 != 1 )
        {
          LODWORD(camSettingsa) = _RBX->cameraAnglesType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1386, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_UpdateCinematicCameraZoom: unknown camera orientation index %d", camSettingsa) )
            __debugbreak();
          result = 1i64;
          goto LABEL_53;
        }
        if ( !CG_CinematicCameraGetEntityOffsetPosition(localClientNum, supportingActorId, (const EntityPositionOffset *)_RBX, &start) )
        {
          Com_Printf(0, "<zoom> camera does not have valid start entity id %d\n", supportingActorId);
          result = 1i64;
          goto LABEL_53;
        }
        goto LABEL_29;
      }
      if ( CG_CinematicCameraGetEntityOffsetPosition(localClientNum, leadingActorId, (const EntityPositionOffset *)_RBX, &start) )
      {
LABEL_29:
        EntityOffsetPosition = CG_CinematicCameraGetEntityOffsetPosition(localClientNum, leadingActorId, &_RBX->panningCamera.targetPan.startEntityPosition, &end);
        v32 = EntityOffsetPosition == NULL;
        if ( !EntityOffsetPosition )
        {
          Com_Printf(0, "<zoom> camera does not have valid end entity id %d\n", leadingActorId);
          result = 1i64;
          goto LABEL_53;
        }
        goto LABEL_35;
      }
LABEL_32:
      Com_Printf(0, "<zoom> camera does not have valid start entity id %d\n", leadingActorId);
      result = 1i64;
      goto LABEL_53;
    }
    v38 = CG_CinematicCameraGetEntityOffsetPosition(localClientNum, leadingActorId, (const EntityPositionOffset *)_RBX, &start);
    v32 = v38 == NULL;
    if ( !v38 )
      goto LABEL_32;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+14h]
      vmovss  xmm1, dword ptr [rbx+18h]
      vmovss  dword ptr [rsp+140h+end], xmm0
      vmovss  xmm0, dword ptr [rbx+1Ch]
      vmovss  dword ptr [rsp+140h+end+8], xmm0
      vmovss  dword ptr [rsp+140h+end+4], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  dword ptr [rsp+140h+start], xmm0
      vmovss  xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rsp+140h+start+4], xmm1
      vmovss  xmm1, dword ptr [rbx+14h]
      vmovss  dword ptr [rsp+140h+start+8], xmm0
      vmovss  xmm0, dword ptr [rbx+18h]
      vmovss  dword ptr [rsp+140h+end], xmm1
      vmovss  xmm1, dword ptr [rbx+1Ch]
      vmovss  dword ptr [rsp+140h+end+4], xmm0
      vmovss  dword ptr [rsp+140h+end+8], xmm1
    }
    leadingActorId = -1;
  }
LABEL_35:
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+40h]
    vcomiss xmm0, xmm7
  }
  if ( v32 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+140h+camSettings], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 1391, ASSERT_TYPE_ASSERT, "( ( camSettings->time > 0.0f ) )", "( camSettings->time ) = %g", *(double *)&camSettingsc) )
      __debugbreak();
  }
  if ( _RSI->useCurrentAsStartPosition || (v50 = !_RBX->useCurrentAsStartPosition, _RBX->useCurrentAsStartPosition) )
  {
    v50 = LocalClientGlobals->time <= (unsigned int)_RSI->startTime;
    if ( LocalClientGlobals->time == _RSI->startTime )
      _RSI->startPosition = *outPosition;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+4]
      vmovss  xmm1, dword ptr [rsi+8]
      vmovss  dword ptr [rsp+140h+start], xmm0
      vmovss  xmm0, dword ptr [rsi+0Ch]
      vmovss  dword ptr [rsp+140h+start+8], xmm0
      vmovss  dword ptr [rsp+140h+start+4], xmm1
    }
  }
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+28h]
    vcomiss xmm4, xmm7
  }
  if ( !v50 )
  {
    __asm
    {
      vmovss  xmm5, dword ptr [rsp+140h+end]
      vmovaps [rsp+140h+var_78+8], xmm8
      vmovss  xmm8, dword ptr [rsp+140h+start]
      vmovaps [rsp+140h+var_88+8], xmm9
      vmovss  xmm9, dword ptr [rsp+140h+end+4]
      vmovaps [rsp+140h+var_98+8], xmm10
      vmovss  xmm10, dword ptr [rsp+140h+start+4]
      vsubss  xmm0, xmm9, xmm10
      vmulss  xmm1, xmm0, xmm0
      vmovaps [rsp+140h+var_A8+8], xmm11
      vmovss  xmm11, dword ptr [rsp+140h+end+8]
      vsubss  xmm2, xmm5, xmm8
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmovaps [rsp+140h+var_B8+8], xmm12
      vmovss  xmm12, dword ptr [rsp+140h+start+8]
      vsubss  xmm3, xmm11, xmm12
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vcomiss xmm3, xmm0
      vsubss  xmm2, xmm8, xmm5
      vsubss  xmm0, xmm10, xmm9
      vmulss  xmm1, xmm0, xmm0
      vsubss  xmm3, xmm12, xmm11
      vmovss  dword ptr [rsp+140h+vec+4], xmm0
      vmulss  xmm0, xmm2, xmm2
      vmovss  dword ptr [rsp+140h+vec], xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm8, xmm2, xmm1
      vcomiss xmm8, xmm7
      vmovss  dword ptr [rsp+140h+vec+8], xmm3
    }
    if ( v50 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
      __debugbreak();
    __asm
    {
      vmovss  xmm4, dword ptr [rbx+28h]
      vmovaps xmm1, xmm8
      vrsqrtss xmm5, xmm1, xmm1
      vmulss  xmm1, xmm5, dword ptr [rsp+140h+vec]
      vmulss  xmm2, xmm5, dword ptr [rsp+140h+vec+4]
      vmulss  xmm3, xmm1, xmm4
      vaddss  xmm0, xmm3, dword ptr [rsp+140h+end]
      vmulss  xmm3, xmm2, xmm4
      vaddss  xmm1, xmm3, dword ptr [rsp+140h+end+4]
      vmovss  dword ptr [rsp+140h+end], xmm0
      vmulss  xmm0, xmm5, dword ptr [rsp+140h+vec+8]
      vmulss  xmm3, xmm0, xmm4
      vaddss  xmm2, xmm3, dword ptr [rsp+140h+end+8]
      vmovss  dword ptr [rsp+140h+end+8], xmm2
      vmovss  dword ptr [rsp+140h+end+4], xmm1
      vmovaps xmm11, [rsp+140h+var_A8+8]
      vmovaps xmm10, [rsp+140h+var_98+8]
      vmovaps xmm9, [rsp+140h+var_88+8]
      vmovaps xmm8, [rsp+140h+var_78+8]
      vmovaps xmm12, [rsp+140h+var_B8+8]
    }
  }
  __asm { vmovaps xmm3, xmm6; interpolation }
  CameraLerpTrace(localClientNum, &start, &end, *(const float *)&_XMM3, leadingActorId, _RBX, _RSI, outPosition);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+140h+end]
    vsubss  xmm4, xmm0, dword ptr [r12]
    vmovss  xmm1, dword ptr [rsp+140h+end+4]
    vsubss  xmm2, xmm1, dword ptr [r12+4]
    vmovss  xmm0, dword ptr [rsp+140h+end+8]
    vsubss  xmm3, xmm0, dword ptr [r12+8]
    vmulss  xmm1, xmm2, xmm2
    vmovss  dword ptr [rsp+140h+vec+4], xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vcomiss xmm2, cs:__real@3a83126f
    vmovss  dword ptr [rsp+140h+vec], xmm4
    vmovss  dword ptr [rsp+140h+vec+8], xmm3
  }
  if ( !(v20 | v107) )
    vectoangles(&vec, outAngles);
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  result = 1i64;
LABEL_53:
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+140h+var_58+8]
    vmovaps xmm7, [rsp+140h+var_68+8]
  }
  return result;
}

/*
==============
CameraFixedAttachedTrace
==============
*/

void __fastcall CameraFixedAttachedTrace(LocalClientNum_t localClientNum, const centity_t *cent, scr_string_t tagName, double collisionRadius, vec3_t *result)
{
  const DObj *ClientDObj; 
  int skipEntity; 
  vec3_t outOrigin; 
  Bounds bounds; 
  trace_t results; 

  __asm { vmovaps [rsp+140h+var_30], xmm6 }
  _RDI = result;
  __asm { vmovaps xmm6, xmm3 }
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
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rbp+40h+bounds.midPoint], xmm0
    vmovss  dword ptr [rbp+40h+bounds.midPoint+4], xmm0
    vmovss  dword ptr [rbp+40h+bounds.midPoint+8], xmm0
    vmovss  dword ptr [rbp+40h+bounds.halfSize], xmm6
    vmovss  dword ptr [rbp+40h+bounds.halfSize+4], xmm6
    vmovss  dword ptr [rbp+40h+bounds.halfSize+8], xmm6
  }
  PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &outOrigin, result, &bounds, skipEntity, 0, 33636369, 0, NULL, All);
  if ( results.startsolid )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+140h+outOrigin]
      vmovss  xmm1, dword ptr [rsp+140h+outOrigin+4]
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm0, dword ptr [rsp+140h+outOrigin+8]
      vaddss  xmm2, xmm0, cs:__real@41700000
      vmovss  dword ptr [rdi+8], xmm2
      vmovss  dword ptr [rdi+4], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm4, [rbp+40h+results.fraction]
      vmovss  xmm5, cs:__real@3f800000
      vucomiss xmm4, xmm5
    }
  }
  __asm { vmovaps xmm6, [rsp+140h+var_30] }
}

/*
==============
CameraLerpTrace
==============
*/

void __fastcall CameraLerpTrace(LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, double interpolation, const int passEntityNum, const CinematicCameraSettings *camSettings, CameraCutData *cutData, vec3_t *result)
{
  __int32 v39; 
  char v40; 
  char v41; 
  Bounds bounds; 
  trace_t results; 
  char v90; 

  __asm { vmovaps [rsp+178h+var_68], xmm9 }
  _RSI = camSettings;
  _RBP = result;
  _RBX = end;
  _RDI = start;
  __asm { vmovaps xmm9, xmm3 }
  if ( !camSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 461, ASSERT_TYPE_ASSERT, "(camSettings)", (const char *)&queryFormat, "camSettings") )
    __debugbreak();
  if ( !cutData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 462, ASSERT_TYPE_ASSERT, "(cutData)", (const char *)&queryFormat, "cutData") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm1, xmm0, dword ptr [rdi]
    vmulss  xmm2, xmm1, xmm9
    vaddss  xmm3, xmm2, dword ptr [rdi]
    vmovss  dword ptr [rbp+0], xmm3
    vmovss  xmm0, dword ptr [rbx+4]
    vsubss  xmm1, xmm0, dword ptr [rdi+4]
    vmulss  xmm2, xmm1, xmm9
    vaddss  xmm3, xmm2, dword ptr [rdi+4]
    vmovss  dword ptr [rbp+4], xmm3
    vmovss  xmm0, dword ptr [rbx+8]
    vsubss  xmm1, xmm0, dword ptr [rdi+8]
    vmulss  xmm2, xmm1, xmm9
    vaddss  xmm3, xmm2, dword ptr [rdi+8]
    vmovss  dword ptr [rbp+8], xmm3
  }
  if ( camSettings->collision )
  {
    __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
    if ( !VecNCompareCustomEpsilon(_RDI->v, _RBX->v, *(float *)&_XMM2, 3) )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rsi+40h]
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm1, xmm0
        vmovaps [rsp+178h+var_78], xmm10
        vmovaps [rsp+178h+var_88], xmm11
        vcvtss2sd xmm3, xmm1, xmm1
        vmovq   r9, xmm3
      }
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442754C0, 1220i64, _R9);
      __asm
      {
        vmovss  xmm1, cs:__real@40400000
        vmovups xmm0, cs:__xmm@40400000000000000000000000000000
      }
      v39 = 3 * localClientNum + 2;
      __asm
      {
        vmovss  dword ptr [rsp+178h+bounds.halfSize+4], xmm1
        vmovss  dword ptr [rsp+178h+bounds.halfSize+8], xmm1
        vmovups xmmword ptr [rsp+178h+bounds.midPoint], xmm0
      }
      PhysicsQuery_LegacyTrace((Physics_WorldId)v39, &results, _RDI, _RBX, &bounds, passEntityNum, 0, 33636369, 0, NULL, All);
      __asm
      {
        vmovss  xmm10, [rsp+178h+results.fraction]
        vmovss  xmm11, cs:__real@3f800000
        vcomiss xmm10, xmm11
      }
      if ( v40 )
      {
        __asm { vcomiss xmm9, xmm10 }
        if ( !(v40 | v41) )
        {
          __asm
          {
            vmovaps [rsp+178h+var_38], xmm6
            vmovaps [rsp+178h+var_48], xmm7
            vmovaps [rsp+178h+var_58], xmm8
          }
          PhysicsQuery_LegacyTrace((Physics_WorldId)v39, &results, _RDI, _RBX, &bounds, passEntityNum, 0, 33636369, 0, NULL, All);
          __asm
          {
            vmovss  xmm8, dword ptr [rbx]
            vmovss  xmm0, dword ptr [rdi]
            vmovss  xmm5, [rsp+178h+results.fraction]
            vsubss  xmm1, xmm0, xmm8
            vmovss  xmm0, dword ptr [rdi+4]
            vmulss  xmm1, xmm1, xmm5
            vaddss  xmm6, xmm1, xmm8
            vsubss  xmm1, xmm0, dword ptr [rbx+4]
            vmovss  xmm0, dword ptr [rdi+8]
            vmulss  xmm2, xmm1, xmm5
            vaddss  xmm7, xmm2, dword ptr [rbx+4]
            vsubss  xmm1, xmm0, dword ptr [rbx+8]
            vmulss  xmm2, xmm1, xmm5
            vaddss  xmm5, xmm2, dword ptr [rbx+8]
            vsubss  xmm3, xmm9, xmm10
            vsubss  xmm0, xmm11, xmm10
            vdivss  xmm2, xmm3, xmm0
            vsubss  xmm1, xmm11, xmm2
            vmulss  xmm0, xmm1, xmm10
            vaddss  xmm4, xmm2, xmm0
            vsubss  xmm2, xmm8, xmm6
            vmovaps xmm8, [rsp+178h+var_58]
            vmulss  xmm1, xmm2, xmm4
            vaddss  xmm0, xmm1, xmm6
            vmovaps xmm6, [rsp+178h+var_38]
            vmovss  dword ptr [rbp+0], xmm0
            vmovss  xmm2, dword ptr [rbx+4]
            vsubss  xmm1, xmm2, xmm7
            vmulss  xmm0, xmm1, xmm4
            vaddss  xmm3, xmm0, xmm7
            vmovaps xmm7, [rsp+178h+var_48]
            vmovss  dword ptr [rbp+4], xmm3
            vmovss  xmm1, dword ptr [rbx+8]
            vsubss  xmm0, xmm1, xmm5
            vmulss  xmm2, xmm0, xmm4
            vaddss  xmm3, xmm2, xmm5
            vmovss  dword ptr [rbp+8], xmm3
          }
        }
      }
      __asm
      {
        vmovaps xmm10, [rsp+178h+var_78]
        vmovaps xmm11, [rsp+178h+var_88]
      }
    }
  }
  _R11 = &v90;
  __asm { vmovaps xmm9, xmmword ptr [r11-40h] }
}

/*
==============
CameraRotateTrace
==============
*/

void __fastcall CameraRotateTrace(LocalClientNum_t localClientNum, const RotatingCamera *rotatingCamera, double percentTime, const vec3_t *start, const vec3_t *end, const float reattachDistance, const centity_t *cent, CameraCutData *cutData, vec3_t *result)
{
  int skipEntity; 
  char v40; 
  char v41; 
  const dvar_t *v115; 
  int v116; 
  char v136; 
  int integer; 
  vec3_t v203; 
  vec3_t vec; 
  vec3_t angles; 
  vec3_t forward; 
  Bounds bounds; 
  trace_t results; 
  char v213; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _R15 = DCONST_DVARFLT_cg_cinematicCameraRotateMinDistance;
  _R14 = cent;
  _RBX = start;
  _RSI = cutData;
  _RDI = result;
  __asm { vmovaps xmm15, xmm2 }
  if ( !DCONST_DVARFLT_cg_cinematicCameraRotateMinDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraRotateMinDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R15);
  __asm { vmovss  xmm6, dword ptr [r15+28h] }
  _R15 = DCONST_DVARFLT_cg_cinematicCameraRotateDetachDistance;
  __asm { vmovss  [rbp+120h+var_1A0], xmm6 }
  if ( !DCONST_DVARFLT_cg_cinematicCameraRotateDetachDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraRotateDetachDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R15);
  __asm
  {
    vmovss  xmm0, dword ptr [r15+28h]
    vmulss  xmm7, xmm6, xmm6
    vmulss  xmm10, xmm0, xmm0
    vmovss  [rsp+220h+var_1B8], xmm7
  }
  CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rax+65E4h]
    vmulss  xmm12, xmm0, cs:__real@3a83126f
  }
  if ( cent )
    skipEntity = cent->nextState.number;
  else
    skipEntity = 2047;
  __asm
  {
    vmovss  xmm1, cs:__real@40400000
    vmovups xmm0, cs:__xmm@40400000000000000000000000000000
    vmovss  xmm14, cs:__real@3f800000
    vmovaps xmmword ptr [rsp+220h+var_68+8], xmm8
    vmovss  dword ptr [rbp+120h+bounds.halfSize+4], xmm1
    vmovss  dword ptr [rbp+120h+bounds.halfSize+8], xmm1
    vmovaps [rsp+220h+var_78+8], xmm9
    vmovups xmmword ptr [rbp+120h+bounds.midPoint], xmm0
  }
  if ( !cutData->detached )
  {
    _R15 = end;
    PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, _RBX, end, &bounds, skipEntity, 0, 33636369, 0, NULL, All);
    __asm
    {
      vmovss  xmm6, [rbp+120h+results.fraction]
      vucomiss xmm6, xmm14
    }
    if ( v41 )
    {
      __asm { vmovaps xmm1, xmm12; deltaSeconds }
      CameraRotateTrace_ReturnToIdealOrientation(rotatingCamera, *(const float *)&_XMM1, _RBX, end, cutData, result);
      goto LABEL_39;
    }
    __asm
    {
      vmovss  xmm7, dword ptr [rbx]
      vmovss  xmm8, dword ptr [rbx+4]
      vmovss  xmm9, dword ptr [rbx+8]
      vmovss  xmm0, dword ptr [r15]
      vsubss  xmm1, xmm0, xmm7
      vmovss  xmm0, dword ptr [r15+4]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm5, xmm2, xmm7
      vsubss  xmm1, xmm0, xmm8
      vmovss  xmm0, dword ptr [r15+8]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm4, xmm2, xmm8
      vsubss  xmm1, xmm0, xmm9
      vmulss  xmm2, xmm1, xmm6
      vsubss  xmm0, xmm14, xmm6
      vmulss  xmm1, xmm0, cs:__real@41700000
      vaddss  xmm3, xmm2, xmm9
      vaddss  xmm2, xmm3, xmm1
      vsubss  xmm6, xmm2, xmm9
      vmovss  dword ptr [rbp+120h+var_198], xmm5
      vmovss  dword ptr [rbp+120h+var_198+4], xmm4
      vsubss  xmm5, xmm5, xmm7
      vsubss  xmm4, xmm4, xmm8
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm5, xmm5
      vmovss  dword ptr [rbp+120h+var_198+8], xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm1
      vcomiss xmm3, xmm10
    }
    if ( !v40 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rsi+28h]
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm1, xmm0
      }
      if ( !(v40 | v41) )
      {
        __asm
        {
          vmulss  xmm0, xmm1, xmm1
          vcomiss xmm0, xmm3
        }
        if ( v40 )
        {
          __asm
          {
            vsqrtss xmm0, xmm3, xmm3
            vdivss  xmm3, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm5
            vaddss  xmm2, xmm1, xmm7
            vmulss  xmm0, xmm3, xmm4
            vaddss  xmm1, xmm0, xmm8
            vmovss  dword ptr [rbp+120h+var_198], xmm2
            vmulss  xmm2, xmm3, xmm6
            vaddss  xmm0, xmm2, xmm9
            vmovss  dword ptr [rbp+120h+var_198+8], xmm0
            vmovss  dword ptr [rbp+120h+var_198+4], xmm1
          }
        }
      }
      CameraRotateTrace_RetraceEndPos(localClientNum, _RBX, &v203, skipEntity, &results, result);
      __asm
      {
        vmovaps xmm2, xmm12; deltaSeconds
        vmovaps xmm1, xmm15; percentTime
      }
      CameraRotateTrace_StoreReturnDistanceOffsets(rotatingCamera, *(const float *)&_XMM1, *(const float *)&_XMM2, _RBX, result, cutData);
      goto LABEL_39;
    }
    __asm { vmovss  xmm7, [rsp+220h+var_1B8] }
  }
  if ( !cutData->detached && cent )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r14+48h]
      vaddss  xmm1, xmm0, dword ptr [rsi+1Ch]
      vmovss  dword ptr [rsi+1Ch], xmm1
      vmovss  xmm2, dword ptr [rsi+20h]
      vaddss  xmm0, xmm2, dword ptr [r14+4Ch]
      vmovss  dword ptr [rsi+20h], xmm0
      vmovss  xmm1, dword ptr [rsi+24h]
      vaddss  xmm2, xmm1, dword ptr [r14+50h]
      vmovss  dword ptr [rsi+24h], xmm2
    }
  }
  cutData->maxCollisionDistance = 0.0;
  cutData->detached = 1;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+10h]
    vmovss  xmm1, dword ptr [rsi+14h]
    vmovss  dword ptr [rbp+120h+var_198], xmm0
    vmovss  xmm0, dword ptr [rsi+18h]
    vmovss  dword ptr [rbp+120h+var_198+8], xmm0
    vmovss  dword ptr [rbp+120h+var_198+4], xmm1
  }
  CameraRotateTrace_RetraceEndPos(localClientNum, _RBX, &v203, skipEntity, &results, result);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vsubss  xmm1, xmm0, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  xmm5, dword ptr [rdi]
    vsubss  xmm2, xmm5, dword ptr [rbx]
    vsubss  xmm4, xmm0, dword ptr [rbx+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm1, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm6, xmm3, xmm0
    vcomiss xmm6, xmm7
  }
  if ( v40 )
  {
    _R15 = DCONST_DVARFLT_cg_cinematicCameraRotateCollisionDegreesSkip;
    if ( !DCONST_DVARFLT_cg_cinematicCameraRotateCollisionDegreesSkip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraRotateCollisionDegreesSkip") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R15);
    __asm { vmovss  xmm6, dword ptr [r15+28h] }
    v115 = DCONST_DVARINT_cg_cinematicCameraRotateMaxTracesPerFrame;
    if ( !DCONST_DVARINT_cg_cinematicCameraRotateMaxTracesPerFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraRotateMaxTracesPerFrame") )
      __debugbreak();
    __asm
    {
      vmovaps xmmword ptr [rsp+220h+var_98+8], xmm11
      vmovaps xmmword ptr [rsp+220h+var_B8+8], xmm13
    }
    Dvar_CheckFrontendServerThread(v115);
    v116 = 0;
    integer = v115->current.integer;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+1Ch]
      vmovss  xmm4, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm3, dword ptr [rsi+20h]
      vmovss  dword ptr [rbp+120h+angles], xmm0
      vmovss  xmm0, dword ptr [rsi+24h]
      vmovss  dword ptr [rbp+120h+angles+8], xmm0
      vxorps  xmm0, xmm0, xmm0
      vcmpless xmm1, xmm0, dword ptr [rax+2Ch]
      vxorps  xmm2, xmm6, xmm4
      vblendvps xmm1, xmm2, xmm6, xmm1
      vmovss  [rsp+220h+worldId], xmm1
      vmovss  dword ptr [rbp+120h+angles+4], xmm3
    }
    if ( integer <= 0 )
    {
LABEL_37:
      __asm { vmovss  xmm0, [rbp+120h+var_1A0] }
      *(_QWORD *)result->v = *(_QWORD *)_RBX->v;
      __asm
      {
        vaddss  xmm0, xmm0, dword ptr [rbx+8]
        vmovss  dword ptr [rdi+8], xmm0
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, [rbp+120h+reattachDistance]
        vmovss  xmm13, cs:__real@40000000
        vmovss  xmm9, [rsp+220h+worldId]
        vxorps  xmm11, xmm0, xmm4
      }
      while ( 1 )
      {
        __asm { vaddss  xmm0, xmm3, xmm9; angle }
        *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
        __asm { vmovss  dword ptr [rbp+120h+angles+4], xmm0 }
        AngleVectors(&angles, &forward, NULL, NULL);
        __asm
        {
          vmulss  xmm1, xmm11, dword ptr [rbp+120h+forward]
          vaddss  xmm2, xmm1, dword ptr [rbx]
          vmulss  xmm1, xmm11, dword ptr [rbp+120h+forward+4]
        }
        ++v116;
        __asm
        {
          vmovss  dword ptr [rbp+120h+var_198], xmm2
          vaddss  xmm2, xmm1, dword ptr [rbx+4]
          vmulss  xmm1, xmm11, dword ptr [rbp+120h+forward+8]
          vmovss  dword ptr [rbp+120h+var_198+4], xmm2
          vaddss  xmm2, xmm1, dword ptr [rbx+8]
          vmovss  dword ptr [rbp+120h+var_198+8], xmm2
        }
        PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, _RBX, &v203, &bounds, skipEntity, 0, 33636369, 0, NULL, All);
        __asm
        {
          vmovss  xmm10, [rbp+120h+results.fraction]
          vucomiss xmm10, xmm14
        }
        if ( v41 )
          break;
        __asm
        {
          vmovss  xmm8, dword ptr [rbx]
          vmovss  xmm0, dword ptr [rbp+120h+var_198]
          vmovss  xmm7, dword ptr [rbx+4]
          vmovss  xmm5, dword ptr [rbx+8]
          vsubss  xmm1, xmm0, xmm8
          vmovss  xmm0, dword ptr [rbp+120h+var_198+4]
          vmulss  xmm2, xmm1, xmm10
          vaddss  xmm4, xmm2, xmm8
          vsubss  xmm1, xmm0, xmm7
          vmovss  xmm0, dword ptr [rbp+120h+var_198+8]
          vmulss  xmm2, xmm1, xmm10
          vaddss  xmm6, xmm2, xmm7
          vsubss  xmm1, xmm0, xmm5
          vmulss  xmm2, xmm1, xmm10
          vaddss  xmm3, xmm2, xmm5
          vsubss  xmm0, xmm14, xmm10
          vmulss  xmm1, xmm0, cs:__real@41700000
          vaddss  xmm2, xmm3, xmm1
          vsubss  xmm3, xmm2, xmm5
          vsubss  xmm0, xmm6, xmm7
          vmulss  xmm1, xmm0, xmm0
          vmovss  dword ptr [rbp+120h+var_198+8], xmm2
          vmovss  dword ptr [rbp+120h+var_198], xmm4
          vsubss  xmm4, xmm4, xmm8
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vcomiss xmm2, [rsp+220h+var_1B8]
          vmovss  dword ptr [rbp+120h+var_198+4], xmm6
        }
        if ( !v136 )
        {
          CameraRotateTrace_RetraceEndPos(localClientNum, _RBX, &v203, skipEntity, &results, result);
          __asm
          {
            vmovaps xmm2, xmm12; deltaSeconds
            vmovaps xmm1, xmm15; percentTime
          }
          CameraRotateTrace_StoreReturnDistanceOffsets(rotatingCamera, *(const float *)&_XMM1, *(const float *)&_XMM2, _RBX, result, cutData);
          __asm
          {
            vmovss  xmm0, dword ptr [rbx]
            vsubss  xmm1, xmm0, dword ptr [rdi]
            vmovss  xmm2, dword ptr [rbx+4]
            vsubss  xmm0, xmm2, dword ptr [rdi+4]
            vmovss  dword ptr [rbp+120h+vec], xmm1
            vmovss  xmm1, dword ptr [rbx+8]
            vsubss  xmm2, xmm1, dword ptr [rdi+8]
            vmovss  dword ptr [rbp+120h+vec+8], xmm2
            vmovss  dword ptr [rbp+120h+vec+4], xmm0
          }
          vectoangles(&vec, &cutData->angles);
          goto LABEL_38;
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+120h+angles+4]
          vsubss  xmm3, xmm0, xmm9
          vmovss  dword ptr [rbp+120h+angles+4], xmm3
          vmulss  xmm9, xmm9, xmm13
        }
        if ( v116 >= integer )
          goto LABEL_37;
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+120h+var_198]
        vmovss  xmm3, dword ptr [rbp+120h+var_198+4]
        vmovss  xmm4, dword ptr [rbp+120h+var_198+8]
      }
      cutData->detached = 0;
      __asm
      {
        vmovss  dword ptr [rdi], xmm1
        vmovss  dword ptr [rdi+4], xmm3
        vmovss  dword ptr [rdi+8], xmm4
        vmovss  xmm0, dword ptr [rbx]
        vmovss  xmm2, dword ptr [rbx+4]
        vsubss  xmm1, xmm0, xmm1
        vsubss  xmm0, xmm2, xmm3
        vmovss  dword ptr [rbp+120h+vec], xmm1
        vmovss  xmm1, dword ptr [rbx+8]
        vsubss  xmm2, xmm1, xmm4
        vmovss  dword ptr [rbp+120h+vec+8], xmm2
        vmovss  dword ptr [rbp+120h+vec+4], xmm0
      }
      vectoangles(&vec, &cutData->angles);
      __asm
      {
        vmovaps xmm2, xmm12; deltaSeconds
        vmovaps xmm1, xmm15; percentTime
      }
      CameraRotateTrace_StoreReturnDistanceOffsets(rotatingCamera, *(const float *)&_XMM1, *(const float *)&_XMM2, _RBX, result, cutData);
      if ( cent )
        AnglesSubtract(&cutData->angles, &cent->pose.angles, &cutData->angles);
    }
LABEL_38:
    __asm
    {
      vmovaps xmm11, xmmword ptr [rsp+220h+var_98+8]
      vmovaps xmm13, xmmword ptr [rsp+220h+var_B8+8]
    }
  }
  else
  {
    __asm { vmovss  dword ptr [rsi+10h], xmm5 }
    *(_QWORD *)&cutData->endPosition.y = *(_QWORD *)&result->y;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vsubss  xmm1, xmm0, dword ptr [rdi]
      vmovss  xmm2, dword ptr [rbx+4]
      vsubss  xmm0, xmm2, dword ptr [rdi+4]
      vmovss  dword ptr [rbp+120h+vec], xmm1
      vmovss  xmm1, dword ptr [rbx+8]
      vsubss  xmm2, xmm1, dword ptr [rdi+8]
      vmovss  dword ptr [rbp+120h+vec+8], xmm2
      vmovss  dword ptr [rbp+120h+vec+4], xmm0
    }
    vectoangles(&vec, &cutData->angles);
    __asm
    {
      vmovss  xmm0, [rbp+120h+reattachDistance]
      vmulss  xmm1, xmm0, xmm0
      vcomiss xmm6, xmm1
    }
    if ( !v40 )
    {
      __asm
      {
        vmovaps xmm2, xmm12; deltaSeconds
        vmovaps xmm1, xmm15; percentTime
      }
      cutData->detached = 0;
      CameraRotateTrace_StoreReturnDistanceOffsets(rotatingCamera, *(const float *)&_XMM1, *(const float *)&_XMM2, _RBX, result, cutData);
      if ( cent )
        AnglesSubtract(&cutData->angles, &cent->pose.angles, &cutData->angles);
    }
  }
LABEL_39:
  __asm
  {
    vmovaps xmm9, [rsp+220h+var_78+8]
    vmovaps xmm8, xmmword ptr [rsp+220h+var_68+8]
  }
  _R11 = &v213;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
CameraRotateTrace_PushOutMaxDistance
==============
*/

void __fastcall CameraRotateTrace_PushOutMaxDistance(double deltaSeconds, double max, float *outValue)
{
  bool v11; 
  bool v12; 

  _RBX = DCONST_DVARFLT_cg_cinematicCameraRotateReturnDistanceRate;
  _RDI = outValue;
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps xmm8, xmm0
    vmovaps xmm6, xmm1
  }
  if ( !DCONST_DVARFLT_cg_cinematicCameraRotateReturnDistanceRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraRotateReturnDistanceRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  v11 = _RDI == NULL;
  if ( !_RDI )
  {
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 538, ASSERT_TYPE_ASSERT, "(outValue)", (const char *)&queryFormat, "outValue");
    v11 = !v12;
    if ( v12 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rdi]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  if ( !v11 )
    __asm { vcomiss xmm1, xmm6 }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
  }
}

/*
==============
CameraRotateTrace_RetraceEndPos
==============
*/
void CameraRotateTrace_RetraceEndPos(LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, const int passEntityNum, trace_t *trace, vec3_t *result)
{
  Bounds bounds; 

  __asm { vmovaps [rsp+0C8h+var_48], xmm6 }
  _RBX = trace;
  _RBP = result;
  _RSI = end;
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 684, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, cs:__real@40400000
    vmovups xmm0, cs:__xmm@40400000000000000000000000000000
    vmovss  dword ptr [rsp+0C8h+bounds.halfSize+4], xmm1
    vmovss  dword ptr [rsp+0C8h+bounds.halfSize+8], xmm1
    vmovups xmmword ptr [rsp+0C8h+bounds.midPoint], xmm0
  }
  PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), trace, start, _RSI, &bounds, passEntityNum, 0, 33636369, 0, NULL, All);
  __asm
  {
    vmovss  xmm6, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm1, xmm0, dword ptr [rdi]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rdi]
    vmovss  dword ptr [rbp+0], xmm3
    vmovss  xmm0, dword ptr [rsi+4]
    vsubss  xmm1, xmm0, dword ptr [rdi+4]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rdi+4]
    vmovss  dword ptr [rbp+4], xmm3
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm1, xmm0, dword ptr [rdi+8]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rdi+8]
    vmovss  dword ptr [rbp+8], xmm3
    vmovaps xmm6, [rsp+0C8h+var_48]
  }
}

/*
==============
CameraRotateTrace_ReturnToIdealOrientation
==============
*/

void __fastcall CameraRotateTrace_ReturnToIdealOrientation(const RotatingCamera *rotatingCamera, double deltaSeconds, const vec3_t *start, const vec3_t *end, CameraCutData *cutData, vec3_t *result)
{
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = cutData;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
  }
  _RDI = DCONST_DVARFLT_cg_cinematicCameraRotateReturnPitchRate;
  _R14 = (vec3_t *)end;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmm9, xmm1
  }
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_cinematicCameraRotateReturnPitchRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm10, dword ptr [rdi+28h] }
  if ( !rotatingCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 584, ASSERT_TYPE_ASSERT, "(rotatingCamera)", (const char *)&queryFormat, "rotatingCamera") )
    __debugbreak();
  if ( !cutData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 585, ASSERT_TYPE_ASSERT, "(cutData)", (const char *)&queryFormat, "cutData") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vsubss  xmm3, xmm0, dword ptr [r15]
    vmovss  xmm0, dword ptr [r14+4]
    vsubss  xmm1, xmm0, dword ptr [r15+4]
    vmovss  xmm0, dword ptr [r14+8]
    vsubss  xmm4, xmm0, dword ptr [r15+8]
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vmovss  xmm0, dword ptr [rbx+28h]
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm0, xmm6
    vsqrtss xmm1, xmm2, xmm2; max
  }
  cutData->maxCollisionDistance = 0.0;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vcomiss xmm3, xmm6
  }
  *result = *_R14;
  __asm
  {
    vmovaps [rsp+0C8h+var_48], xmm7
    vmovaps [rsp+0C8h+var_58], xmm8
  }
  _RDI = &cutData->heightOffset;
  __asm
  {
    vucomiss xmm6, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rbx+30h]
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmovaps xmm8, [rsp+0C8h+var_58]
    vmovaps xmm7, [rsp+0C8h+var_48]
    vcomiss xmm10, xmm6
    vmovaps xmm6, [rsp+0C8h+var_38]
    vmovss  [rsp+0C8h+var_88], xmm1
    vmovss  [rsp+0C8h+var_84], xmm0
    vmovaps xmm9, [rsp+0C8h+var_68]
    vmovaps xmm10, [rsp+0C8h+var_78]
  }
}

/*
==============
CameraRotateTrace_StoreReturnDistanceOffsets
==============
*/

void __fastcall CameraRotateTrace_StoreReturnDistanceOffsets(const RotatingCamera *rotatingCamera, double percentTime, double deltaSeconds, const vec3_t *start, const vec3_t *end, CameraCutData *cutData)
{
  char v12; 
  bool v13; 
  bool v14; 

  _RBX = cutData;
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm7, xmm2
  }
  if ( !rotatingCamera && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 642, ASSERT_TYPE_ASSERT, "(rotatingCamera)", (const char *)&queryFormat, "rotatingCamera") )
    __debugbreak();
  v12 = 0;
  v13 = cutData == NULL;
  if ( !cutData )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_cinematic_camera.cpp", 643, ASSERT_TYPE_ASSERT, "(cutData)", (const char *)&queryFormat, "cutData");
    v12 = 0;
    v13 = !v14;
    if ( v14 )
      __debugbreak();
  }
  _RBP = end;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  xmm0, dword ptr [rbp+0]
    vsubss  xmm3, xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rbp+4]
    vsubss  xmm2, xmm1, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rbp+8]
    vsubss  xmm4, xmm0, dword ptr [rsi+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vmovss  xmm0, dword ptr [rbx+28h]
    vucomiss xmm0, xmm6
    vsqrtss xmm1, xmm2, xmm2; max
  }
  if ( v13 )
  {
    __asm { vmovss  dword ptr [rbx+28h], xmm1 }
  }
  else
  {
    __asm
    {
      vcomiss xmm1, xmm0
      vmovaps xmm0, xmm7; deltaSeconds
    }
    CameraRotateTrace_PushOutMaxDistance(*(double *)&_XMM0, *(double *)&_XMM1, &cutData->maxCollisionDistance);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vsubss  xmm1, xmm0, dword ptr [rsi+8]
    vcomiss xmm1, xmm6
    vmovss  xmm2, dword ptr [rbx+2Ch]
  }
  if ( v12 | v13 )
  {
    __asm { vcomiss xmm2, xmm6 }
    if ( v12 | v13 )
    {
      __asm { vcomiss xmm1, xmm2 }
      if ( v12 )
        goto LABEL_16;
    }
  }
  else
  {
    __asm { vcomiss xmm2, xmm6 }
    if ( !v12 )
    {
      __asm { vcomiss xmm1, xmm2 }
      if ( !(v12 | v13) )
LABEL_16:
        __asm { vmovss  dword ptr [rbx+2Ch], xmm1 }
    }
  }
  __asm
  {
    vmulss  xmm0, xmm8, dword ptr [rdi+28h]
    vaddss  xmm1, xmm0, dword ptr [rdi+14h]
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
    vmovss  dword ptr [rbx+30h], xmm1
  }
}

