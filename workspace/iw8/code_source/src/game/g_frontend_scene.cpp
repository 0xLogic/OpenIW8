/*
==============
G_FrontEndScene_GetCommandState
==============
*/

const BgScriptedCameraState *__fastcall G_FrontEndScene_GetCommandState()
{
  return ?G_FrontEndScene_GetCommandState@@YAPEBUBgScriptedCameraState@@XZ();
}

/*
==============
G_FrontEndScene_GetActiveSectionName
==============
*/

const char *__fastcall G_FrontEndScene_GetActiveSectionName()
{
  return ?G_FrontEndScene_GetActiveSectionName@@YAPEBDXZ();
}

/*
==============
G_FrontEndScene_SetCameraCinematicPlayback
==============
*/

void __fastcall G_FrontEndScene_SetCameraCinematicPlayback(const char *binkName, const bool isLooping, const int activateTime)
{
  ?G_FrontEndScene_SetCameraCinematicPlayback@@YAXPEBD_NH@Z(binkName, isLooping, activateTime);
}

/*
==============
G_FrontEndScene_Init
==============
*/

void __fastcall G_FrontEndScene_Init(bool isFrontEnd)
{
  ?G_FrontEndScene_Init@@YAX_N@Z(isFrontEnd);
}

/*
==============
G_FrontEndScene_SetCameraFov
==============
*/

void __fastcall G_FrontEndScene_SetCameraFov(const int targetFov, const int startTime, const int endtime)
{
  ?G_FrontEndScene_SetCameraFov@@YAXHHH@Z(targetFov, startTime, endtime);
}

/*
==============
G_FrontEndScene_SetCameraCharacters
==============
*/

void __fastcall G_FrontEndScene_SetCameraCharacters(const bool *requiredCharacters, const int activateTime)
{
  ?G_FrontEndScene_SetCameraCharacters@@YAXQEB_NH@Z(requiredCharacters, activateTime);
}

/*
==============
G_FrontEndScene_SetCameraFade
==============
*/

void __fastcall G_FrontEndScene_SetCameraFade(const BgScriptedCameraFadeState targetState, const int startTime, const int endTime)
{
  ?G_FrontEndScene_SetCameraFade@@YAXW4BgScriptedCameraFadeState@@HH@Z(targetState, startTime, endTime);
}

/*
==============
G_FrontEndScene_UpdateClientState
==============
*/

void G_FrontEndScene_UpdateClientState(void)
{
  ?G_FrontEndScene_UpdateClientState@@YAXXZ();
}

/*
==============
G_FrontEndScene_GetActiveSectionParam
==============
*/

unsigned int __fastcall G_FrontEndScene_GetActiveSectionParam()
{
  return ?G_FrontEndScene_GetActiveSectionParam@@YAIXZ();
}

/*
==============
G_FrontEndScene_GetActiveSectionName
==============
*/
GFrontEndSceneState *G_FrontEndScene_GetActiveSectionName()
{
  return &s_gFrontEndSceneData;
}

/*
==============
G_FrontEndScene_GetActiveSectionParam
==============
*/
__int64 G_FrontEndScene_GetActiveSectionParam()
{
  return s_gFrontEndSceneData.m_activeSectionParam;
}

/*
==============
G_FrontEndScene_GetCommandState
==============
*/
BgScriptedCameraState *G_FrontEndScene_GetCommandState()
{
  return &s_gFrontEndSceneData.m_cameraState;
}

/*
==============
G_FrontEndScene_Init
==============
*/
void G_FrontEndScene_Init(bool isFrontEnd)
{
  memset_0(&s_gFrontEndSceneData, 0, sizeof(s_gFrontEndSceneData));
  s_gFrontEndSceneData.m_cameraState.m_fadeTarget = VISIBLE;
  s_gFrontEndSceneData.m_cameraState.m_fovTarget = 65;
  if ( isFrontEnd )
    CG_FrontEndScene_GetActiveSectionNameAndParam(s_gFrontEndSceneData.m_activeSectionName, 0x40ui64, &s_gFrontEndSceneData.m_activeSectionParam);
}

/*
==============
G_FrontEndScene_SetCameraCharacters
==============
*/
void G_FrontEndScene_SetCameraCharacters(const bool *requiredCharacters, const int activateTime)
{
  _RBX = requiredCharacters;
  if ( !requiredCharacters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_frontend_scene.cpp", 82, ASSERT_TYPE_ASSERT, "( requiredCharacters )", (const char *)&queryFormat, "requiredCharacters") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr cs:s_gFrontEndSceneData.m_cameraState.m_requiredCharacters, xmm0
    vmovsd  xmm1, qword ptr [rbx+10h]
    vmovsd  qword ptr cs:s_gFrontEndSceneData.m_cameraState.m_requiredCharacters+10h, xmm1
  }
  s_gFrontEndSceneData.m_cameraState.m_requiredCharacersTime = activateTime;
}

/*
==============
G_FrontEndScene_SetCameraCinematicPlayback
==============
*/
void G_FrontEndScene_SetCameraCinematicPlayback(const char *binkName, const bool isLooping, const int activateTime)
{
  Core_strcpy(s_gFrontEndSceneData.m_cameraState.m_cinematicPlaybackName, 0x40ui64, binkName);
  s_gFrontEndSceneData.m_cameraState.m_cinematicPlaybackLooping = isLooping;
  s_gFrontEndSceneData.m_cameraState.m_cinematicPlaybackTime = activateTime;
}

/*
==============
G_FrontEndScene_SetCameraFade
==============
*/
void G_FrontEndScene_SetCameraFade(const BgScriptedCameraFadeState targetState, const int startTime, const int endTime)
{
  s_gFrontEndSceneData.m_cameraState.m_fadeTarget = targetState;
  s_gFrontEndSceneData.m_cameraState.m_fadeStartTime = startTime;
  s_gFrontEndSceneData.m_cameraState.m_fadeEndTime = endTime;
}

/*
==============
G_FrontEndScene_SetCameraFov
==============
*/
void G_FrontEndScene_SetCameraFov(const int targetFov, const int startTime, const int endtime)
{
  s_gFrontEndSceneData.m_cameraState.m_fovSource = s_gFrontEndSceneData.m_cameraState.m_fovTarget;
  s_gFrontEndSceneData.m_cameraState.m_fovTarget = targetFov;
  s_gFrontEndSceneData.m_cameraState.m_fovStartTime = startTime;
  s_gFrontEndSceneData.m_cameraState.m_fovEndTime = endtime;
}

/*
==============
G_FrontEndScene_UpdateClientState
==============
*/
void G_FrontEndScene_UpdateClientState(void)
{
  CG_FrontEndScene_GetActiveSectionNameAndParam(s_gFrontEndSceneData.m_activeSectionName, 0x40ui64, &s_gFrontEndSceneData.m_activeSectionParam);
}

