/*
==============
CL_Cameraman_HandleInput
==============
*/

bool __fastcall CL_Cameraman_HandleInput(LocalClientNum_t localClientNum, int key, int down)
{
  return ?CL_Cameraman_HandleInput@@YA_NW4LocalClientNum_t@@HH@Z(localClientNum, key, down);
}

/*
==============
CL_Cameraman_IsHumanJointSet
==============
*/

bool __fastcall CL_Cameraman_IsHumanJointSet(CameraJoints_e joint)
{
  return ?CL_Cameraman_IsHumanJointSet@@YA_NW4CameraJoints_e@@@Z(joint);
}

/*
==============
CL_Cameraman_Init
==============
*/

void __fastcall CL_Cameraman_Init(bool isFullInit)
{
  ?CL_Cameraman_Init@@YAX_N@Z(isFullInit);
}

/*
==============
CL_Cameraman_Dvars
==============
*/

void CL_Cameraman_Dvars(void)
{
  ?CL_Cameraman_Dvars@@YAXXZ();
}

/*
==============
CL_Cameraman_InitDevGuiMenu
==============
*/

void CL_Cameraman_InitDevGuiMenu(void)
{
  ?CL_Cameraman_InitDevGuiMenu@@YAXXZ();
}

/*
==============
CL_Cameraman_Playback
==============
*/

void __fastcall CL_Cameraman_Playback(bool play, bool reset)
{
  ?CL_Cameraman_Playback@@YAX_N0@Z(play, reset);
}

/*
==============
CL_Cameraman_GetFov
==============
*/

double __fastcall CL_Cameraman_GetFov(float fov)
{
  double result; 

  *(float *)&result = ?CL_Cameraman_GetFov@@YAMM@Z(fov);
  return result;
}

/*
==============
CL_Cameraman_IsDemoActive
==============
*/

bool __fastcall CL_Cameraman_IsDemoActive()
{
  return ?CL_Cameraman_IsDemoActive@@YA_NXZ();
}

/*
==============
CL_Cameraman_DevGuiChange
==============
*/

void __fastcall CL_Cameraman_DevGuiChange(LocalClientNum_t localClientNums, bool turningOn)
{
  ?CL_Cameraman_DevGuiChange@@YAXW4LocalClientNum_t@@_N@Z(localClientNums, turningOn);
}

/*
==============
CL_Cameraman_CalcViewValues
==============
*/

void __fastcall CL_Cameraman_CalcViewValues(LocalClientNum_t localClientNum, bool forLod)
{
  ?CL_Cameraman_CalcViewValues@@YAXW4LocalClientNum_t@@_N@Z(localClientNum, forLod);
}

/*
==============
CL_Cameraman_DrawDebugInformation
==============
*/

void __fastcall CL_Cameraman_DrawDebugInformation(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  ?CL_Cameraman_DrawDebugInformation@@YAXW4LocalClientNum_t@@PEBUScreenPlacement@@@Z(localClientNum, scrPlace);
}

/*
==============
CL_Cameraman_RegisterCommands
==============
*/

void CL_Cameraman_RegisterCommands(void)
{
  ?CL_Cameraman_RegisterCommands@@YAXXZ();
}

/*
==============
CL_Cameraman_isActive
==============
*/

bool __fastcall CL_Cameraman_isActive()
{
  return ?CL_Cameraman_isActive@@YA_NXZ();
}

/*
==============
CL_Cameraman_Update
==============
*/

void __fastcall CL_Cameraman_Update(float dT)
{
  ?CL_Cameraman_Update@@YAXM@Z(dT);
}

/*
==============
CL_Cameraman_Enabled
==============
*/

bool __fastcall CL_Cameraman_Enabled()
{
  return ?CL_Cameraman_Enabled@@YA_NXZ();
}

/*
==============
CL_Cameraman_FullPlayback
==============
*/

void __fastcall CL_Cameraman_FullPlayback(bool play, bool reset)
{
  ?CL_Cameraman_FullPlayback@@YAX_N0@Z(play, reset);
}

/*
==============
CL_Cameraman_AddKeyframe
==============
*/
void CL_Cameraman_AddKeyframe(int prevKF, int frame)
{
  CameramanRecording_t *kf; 
  __int64 v3; 
  __int64 maxKeyframe; 
  int v5; 
  __int64 v7; 
  __int64 v14; 
  int v15; 
  const dvar_t *v18; 
  ClActiveClient *Client; 

  kf = s_cameraman.kf;
  v3 = prevKF;
  maxKeyframe = s_cameraman.kf->maxKeyframe;
  v5 = prevKF + 1;
  if ( (int)maxKeyframe < s_cameraman.kf->kfsAvailable )
  {
    if ( maxKeyframe > prevKF + 2 )
    {
      _RDX = maxKeyframe;
      v7 = maxKeyframe - (prevKF + 2);
      do
      {
        _RCX = kf->Keyframes;
        --_RDX;
        __asm
        {
          vmovups ymm0, ymmword ptr [rdx+rcx]
          vmovups ymmword ptr [rdx+rcx+2Ch], ymm0
          vmovsd  xmm1, qword ptr [rdx+rcx+20h]
          vmovsd  qword ptr [rdx+rcx+4Ch], xmm1
        }
        _RCX[_RDX + 1].angles.v[2] = _RCX[_RDX].angles.v[2];
        kf = s_cameraman.kf;
        --v7;
      }
      while ( v7 );
    }
    kf->curKeyframe = v5;
    ++s_cameraman.kf->maxKeyframe;
    _RBX = DVARFLT_cameraman_time;
    if ( !DVARFLT_cameraman_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmulss  xmm1, xmm0, cs:__real@42700000
    }
    v14 = v3 + 1;
    v15 = 0;
    __asm { vcvttss2si ebp, xmm1 }
    _RBX = &s_cameraman.kf->Keyframes[v14];
    _RBX->frame = _EBP;
    _RBX->origin = s_cameraman.cam->origin;
    _RBX->angles = s_cameraman.cam->angles;
    _RBX->flags = 0;
    v18 = DVARFLT_cameraman_fov;
    if ( !DVARFLT_cameraman_fov && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_fov") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    LODWORD(_RBX->fov) = v18->current.integer;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebp
      vmulss  xmm1, xmm0, cs:__real@3c888889
      vmovss  cs:s_cameraman.currentTime, xmm1
    }
    s_cameraman.currentFrame = _EBP;
    s_cameraman.kf->curKeyframe = v5;
    if ( SV_IsDemoPlaying() )
    {
      if ( SV_IsDemoPlaying() )
        __asm { vxorps  xmm0, xmm0, xmm0 }
      else
        *(double *)&_XMM0 = SV_Demo_GetTimeScale();
      __asm { vmovss  dword ptr [rbx+4], xmm0 }
      if ( !clientUIActives[0].frontEndSceneState[0] && clientUIActives[0].cgameInitialized )
      {
        Client = ClActiveClient::GetClient(LOCAL_CLIENT_0);
        v15 = Client->GetServerTime(Client);
      }
      _RBX->demo_time = v15;
    }
    else
    {
      _RBX->demo_scale = 1.0;
      __asm
      {
        vmovss  xmm0, cs:s_cameraman.currentTime
        vmulss  xmm1, xmm0, cs:__real@447a0000
        vcvttss2si eax, xmm1
      }
      _RBX->demo_time = _EAX;
    }
  }
  else if ( s_cameraman.liveRecording )
  {
    s_cameraman.liveRecording = 0;
  }
}

/*
==============
CL_Cameraman_AngleBetweenQuats
==============
*/
float CL_Cameraman_AngleBetweenQuats(vec4_t *q1, vec4_t *q2)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmulss  xmm3, xmm0, dword ptr [rdx+4]
    vmovss  xmm1, dword ptr [rcx]
    vmulss  xmm2, xmm1, dword ptr [rdx]
    vmovss  xmm0, dword ptr [rcx+8]
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm2, dword ptr [rcx+0Ch]
    vmulss  xmm0, xmm2, dword ptr [rdx+0Ch]
    vmovss  xmm2, cs:__real@3f800000; max
    vaddss  xmm3, xmm4, xmm1
    vaddss  xmm3, xmm3, xmm0
    vmulss  xmm1, xmm3, cs:__real@40000000
    vmulss  xmm4, xmm1, xmm3
    vmovss  xmm1, cs:__real@bf800000; min
    vsubss  xmm0, xmm4, xmm2; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm3, xmm0, cs:__real@42652ee0
    vmovss  xmm0, cs:__real@43340000
    vsubss  xmm2, xmm3, cs:__real@43b40000
    vcmpltss xmm1, xmm0, xmm3
    vblendvps xmm4, xmm3, xmm2, xmm1
    vaddss  xmm1, xmm4, cs:__real@43b40000
    vcmpltss xmm0, xmm4, cs:__real@c3340000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vmovss  [rsp+28h+arg_0], xmm4
  }
  return *(float *)&_XMM0;
}

/*
==============
CL_Cameraman_ApplyKeyframe
==============
*/

void __fastcall CL_Cameraman_ApplyKeyframe(int k, double t, bool useSmooth)
{
  float demo_scale; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( useSmooth )
  {
    __asm { vmovaps xmm0, xmm6; t }
    CL_Cameraman_SmoothKeyframe(*(float *)&_XMM0, &s_cameraman.cam->origin, &s_cameraman.cam->angles, &s_cameraman.cam->fov, &demo_scale);
  }
  else
  {
    CL_Cameraman_GetValuesAtTimeKf(k, *(float *)&t, &s_cameraman.cam->origin, &s_cameraman.cam->angles, &s_cameraman.cam->fov, &demo_scale);
  }
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@42700000
    vcvttss2si eax, xmm0
  }
  s_cameraman.currentFrame = _EAX;
  _RAX = s_cameraman.cam;
  __asm
  {
    vmovss  cs:s_cameraman.currentTime, xmm6
    vmovss  xmm1, dword ptr [rax+18h]; value
  }
  Dvar_SetFloat_Internal(DVARFLT_cameraman_fov, *(float *)&_XMM1);
  __asm { vmovss  xmm1, [rsp+48h+arg_10]; value }
  Dvar_SetFloat_Internal(DVARFLT_cameraman_demoscale, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:s_cameraman.currentTime; value
    vmovaps xmm6, [rsp+48h+var_18]
  }
  Dvar_SetFloat_Internal(DVARFLT_cameraman_time, *(float *)&_XMM1);
}

/*
==============
CL_Cameraman_CalcViewValues
==============
*/
void CL_Cameraman_CalcViewValues(LocalClientNum_t localClientNum, bool forLod)
{
  cg_t *LocalClientGlobals; 
  float v21; 
  Camera_t cam; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _RDI = LocalClientGlobals;
  if ( forLod )
  {
    RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &s_cameraman.cachedCamera.origin);
    __asm { vmovss  xmm0, dword ptr cs:s_cameraman.cachedCamera.angles }
    _RSI = &_RDI->refdefViewAngles;
    __asm
    {
      vmovss  dword ptr [rsi], xmm0
      vmovss  xmm1, dword ptr cs:s_cameraman.cachedCamera.angles+4
      vmovss  dword ptr [rdi+178C4h], xmm1
      vmovss  xmm0, dword ptr cs:s_cameraman.cachedCamera.angles+8
      vmovss  dword ptr [rdi+178C8h], xmm0
    }
  }
  else
  {
    if ( s_cameraman.lerpMode && s_cameraman.lerpSmooth || s_cameraman.steadyCamReady )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr cs:s_cameraman.alt_cam.origin
        vmovss  xmm1, dword ptr cs:s_cameraman.alt_cam.angles+8
        vmovups xmmword ptr [rsp+68h+cam.origin], xmm0
        vmovss  xmm0, dword ptr cs:s_cameraman.alt_cam.angles+4
        vmovss  dword ptr [rsp+68h+cam.angles+4], xmm0
        vmovss  dword ptr [rsp+68h+cam.angles+8], xmm1
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rsp+68h+var_48], xmm0
      }
      CL_Cameraman_GetCamera(localClientNum, &cam, NULL, 0, v21);
    }
    RefdefView_SetOrg(&_RDI->refdef.view, &cam.origin);
    __asm { vmovss  xmm0, dword ptr [rsp+68h+cam.angles] }
    _RSI = &_RDI->refdefViewAngles;
    __asm
    {
      vmovss  dword ptr [rsi], xmm0
      vmovss  xmm1, dword ptr [rsp+68h+cam.angles+4]
      vmovss  dword ptr [rdi+178C4h], xmm1
      vmovss  xmm0, dword ptr [rsp+68h+cam.angles+8]
      vmovss  dword ptr [rdi+178C8h], xmm0
    }
    RefdefView_GetOrg(&_RDI->refdef.view, &s_cameraman.cachedCamera.origin);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovss  dword ptr cs:s_cameraman.cachedCamera.angles, xmm0
      vmovss  xmm1, dword ptr [rsi+4]
      vmovss  dword ptr cs:s_cameraman.cachedCamera.angles+4, xmm1
      vmovss  xmm0, dword ptr [rsi+8]
      vmovss  dword ptr cs:s_cameraman.cachedCamera.angles+8, xmm0
    }
  }
  AnglesToAxis(_RSI, &_RDI->refdef.view.axis);
}

/*
==============
CL_Cameraman_DampingFraction
==============
*/

float __fastcall CL_Cameraman_DampingFraction(double dampingFrac, double dampingMin, const float dampingMin2, const float dampingMax2, const float dampingMax, float v)
{
  __asm
  {
    vmovss  xmm4, cs:__real@3f800000
    vmovaps xmm5, xmm0
    vmovss  xmm0, [rsp+28h+v]
    vcomiss xmm0, xmm1
    vmovaps [rsp+28h+var_28], xmm7
    vmovaps xmm7, xmm1
    vmovaps [rsp+28h+var_18], xmm6
    vmovss  xmm6, [rsp+28h+dampingMax]
    vcomiss xmm0, xmm6
    vmovaps xmm6, [rsp+28h+var_18]
    vmovaps xmm0, xmm4
    vmovaps xmm7, [rsp+28h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
CL_Cameraman_DevGuiChange
==============
*/
void CL_Cameraman_DevGuiChange(LocalClientNum_t localClientNums, bool turningOn)
{
  *(_WORD *)&s_cameraman.keyDebounce[14] = 257;
}

/*
==============
CL_Cameraman_DrawDebugInformation
==============
*/
void CL_Cameraman_DrawDebugInformation(LocalClientNum_t localClientNum, const ScreenPlacement *scrPlace)
{
  const dvar_t *v6; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const centity_t *cent; 
  entFocus_t *EntFocus; 
  const char *v15; 
  int clientNum; 
  entFocus_t *v17; 
  entFocus_t *v18; 
  int focus_idx; 
  const char *name; 
  entFocus_t *v21; 
  const char *v22; 
  const char *v23; 
  const char *v24; 
  const char *v39; 
  const char *v41; 
  int currentRecording; 
  int kfsAvailable; 
  int maxKeyframe; 
  int curKeyframe; 
  const char *v49; 
  const dvar_t *v54; 
  CameramanRecording_t *kf; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  __int64 v67; 
  int v68; 
  const vec4_t *v87; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *fmtc; 
  char *fmtd; 
  double clanTagSize; 
  double clanTagSizea; 
  double clanTagSizeb; 
  __int64 post_color_index; 
  double post_color_indexa; 
  double charHeighta; 
  float charHeightb; 
  float charHeight; 
  double adjust; 
  double v110; 
  double v111; 
  char clanTagBuf[16]; 
  char dest[64]; 
  char nameBuf[48]; 
  char string[256]; 

  v6 = DVARBOOL_cameraman_enabled;
  if ( !DVARBOOL_cameraman_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    v9 = DVARINT_cameraman_debugDraw;
    if ( !DVARINT_cameraman_debugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_debugDraw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.integer )
    {
      v10 = DVARINT_cameraman_debugDraw;
      __asm
      {
        vmovaps [rsp+288h+var_48], xmm6
        vmovaps [rsp+288h+var_58], xmm7
      }
      if ( !DVARINT_cameraman_debugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_debugDraw") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( v10->current.integer == 1 )
        goto LABEL_52;
      v11 = DVARINT_cameraman_debugDraw;
      if ( !DVARINT_cameraman_debugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_debugDraw") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( v11->current.integer == 2 )
      {
LABEL_52:
        _RDI = DVARFLT_cameraman_time;
        v41 = (char *)&queryFormat.fmt + 3;
        currentRecording = s_cameraman.currentRecording;
        if ( s_cameraman.smoothPlayback )
          v41 = "smooth";
        kfsAvailable = s_cameraman.kf->kfsAvailable;
        maxKeyframe = s_cameraman.kf->maxKeyframe;
        curKeyframe = s_cameraman.kf->curKeyframe;
        if ( !DVARFLT_cameraman_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_time") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RDI);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+28h]
          vmovss  xmm1, cs:s_cameraman.currentTime
          vcvtss2sd xmm0, xmm0, xmm0
          vcvtss2sd xmm1, xmm1, xmm1
        }
        if ( s_cameraman.cameraman_focus )
        {
          v49 = "cameraman(0)";
          if ( s_cameraman.was_enabled )
            v49 = "cameraman(1)";
        }
        else
        {
          v49 = "demo";
        }
        LODWORD(post_color_index) = currentRecording;
        __asm
        {
          vmovsd  [rsp+288h+clanTagSize], xmm0
          vmovsd  [rsp+288h+fmt], xmm1
        }
        Com_sprintf(string, 0x100ui64, "controls:%s   playback time:%6.2f  edit time:%6.2f  keyframe(%d):%3d/%3d/%d  %s", v49, *(double *)&fmtc, clanTagSizea, post_color_index, curKeyframe, maxKeyframe, kfsAvailable, v41);
        goto LABEL_63;
      }
      _RSI = s_cameraman.cam;
      if ( s_cameraman.lerpMode && s_cameraman.lerpSmooth || s_cameraman.steadyCamReady )
        _RSI = &s_cameraman.alt_cam;
      if ( !s_cameraman.focus_idx )
      {
        Com_sprintf(dest, (unsigned int)(s_cameraman.focus_idx + 64), "main");
LABEL_37:
        v22 = (char *)&queryFormat.fmt + 3;
        v23 = (char *)&queryFormat.fmt + 3;
        if ( s_cameraman.rollCorrect )
          v23 = "rollCorrect";
        if ( s_cameraman.steadyCamMode )
        {
          v24 = "steady";
          if ( s_cameraman.steadyTwoAxis )
            v24 = "steady2";
        }
        else
        {
          v24 = (char *)&queryFormat.fmt + 3;
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+18h]
          vmovss  xmm1, dword ptr [rsi+14h]
          vmovss  xmm2, dword ptr [rsi+10h]
          vmovss  xmm3, dword ptr [rsi+0Ch]
          vmovss  xmm4, dword ptr [rsi+8]
          vmovss  xmm5, dword ptr [rsi+4]
          vmovss  xmm6, dword ptr [rsi]
        }
        if ( s_cameraman.lerpMode )
          v22 = "lerp";
        __asm
        {
          vcvtss2sd xmm0, xmm0, xmm0
          vcvtss2sd xmm1, xmm1, xmm1
          vcvtss2sd xmm2, xmm2, xmm2
          vcvtss2sd xmm3, xmm3, xmm3
          vcvtss2sd xmm4, xmm4, xmm4
          vcvtss2sd xmm5, xmm5, xmm5
          vcvtss2sd xmm6, xmm6, xmm6
        }
        if ( s_cameraman.cameraman_focus )
        {
          v39 = "cameraman(0)";
          if ( s_cameraman.was_enabled )
            v39 = "cameraman(1)";
        }
        else
        {
          v39 = "demo";
        }
        __asm
        {
          vmovsd  [rsp+288h+var_238], xmm0
          vmovsd  [rsp+288h+var_240], xmm1
          vmovsd  qword ptr [rsp+288h+adjust], xmm2
          vmovsd  qword ptr [rsp+288h+charHeight], xmm3
          vmovsd  qword ptr [rsp+288h+post_color_index], xmm4
          vmovsd  [rsp+288h+clanTagSize], xmm5
          vmovsd  [rsp+288h+fmt], xmm6
        }
        Com_sprintf(string, 0x100ui64, "controls:%s   pos=(%.0f,%.0f,%.0f) ang=(%.0f,%.0f,%.0f) fov=%.0f focus=%s  %s %s %s", v39, *(double *)&fmtb, clanTagSize, post_color_indexa, charHeighta, adjust, v110, v111, dest, v22, v24, v23);
LABEL_63:
        __asm
        {
          vmovss  xmm7, cs:__real@41400000
          vmovss  xmm6, cs:__real@42000000
          vmovss  xmm2, cs:__real@41c00000; y
          vmovss  [rsp+288h+charHeight], xmm7
          vmovaps xmm1, xmm6; x
        }
        CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, string, &colorGreen, 0, 1, charHeightb, 0);
        v54 = DVARINT_cameraman_debugDraw;
        if ( !DVARINT_cameraman_debugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_debugDraw") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v54);
        if ( v54->current.integer == 2 )
        {
          kf = s_cameraman.kf;
          v56 = 6;
          v57 = s_cameraman.kf->curKeyframe;
          v58 = v57 - 3;
          v59 = v57 + 3;
          if ( v58 >= 0 )
            v56 = v59;
          v60 = 0;
          if ( v58 >= 0 )
            v60 = v58;
          v61 = s_cameraman.kf->maxKeyframe;
          if ( v56 >= v61 )
          {
            v62 = v60 - v56;
            v56 = v61 - 1;
            v60 = v62 + v61 - 1;
          }
          v63 = 0;
          if ( v60 >= 0 )
            v63 = v60;
          if ( v63 <= (__int64)v56 )
          {
            __asm
            {
              vmovaps [rsp+288h+var_68], xmm8
              vmovss  xmm8, cs:__real@3c888889
            }
            _RBX = 44i64 * v63;
            __asm
            {
              vmovaps [rsp+288h+var_78], xmm9
              vmovss  xmm9, cs:__real@41200000
            }
            v67 = v56 - (__int64)v63 + 1;
            v68 = 0;
            while ( 1 )
            {
              __asm { vxorps  xmm0, xmm0, xmm0 }
              if ( v63 > 0 )
              {
                _RAX = kf->Keyframes;
                __asm
                {
                  vmovss  xmm0, dword ptr [rbx+rax+14h]
                  vsubss  xmm3, xmm0, dword ptr [rax+rbx-18h]
                  vmovss  xmm1, dword ptr [rbx+rax+18h]
                  vsubss  xmm2, xmm1, dword ptr [rax+rbx-14h]
                  vmovss  xmm0, dword ptr [rbx+rax+1Ch]
                  vsubss  xmm4, xmm0, dword ptr [rax+rbx-10h]
                  vmulss  xmm2, xmm2, xmm2
                  vmulss  xmm0, xmm4, xmm4
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm3, xmm2, xmm1
                  vaddss  xmm2, xmm3, xmm0
                  vsqrtss xmm0, xmm2, xmm2
                }
              }
              __asm
              {
                vcvtss2sd xmm3, xmm0, xmm0
                vxorps  xmm0, xmm0, xmm0
                vmovsd  [rsp+288h+clanTagSize], xmm3
                vcvtsi2ss xmm0, xmm0, dword ptr [rbx+rax]
                vmulss  xmm1, xmm0, xmm8
                vcvtss2sd xmm2, xmm1, xmm1
                vmovsd  [rsp+288h+fmt], xmm2
              }
              Com_sprintf(string, 0x100ui64, " kf(%d) t=%.0f dist=%0.f", (unsigned int)v63, *(double *)&fmtd, clanTagSizeb);
              v87 = &colorRed;
              __asm
              {
                vmovss  [rsp+288h+charHeight], xmm7
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, ebp
              }
              if ( v63 != s_cameraman.kf->curKeyframe )
                v87 = &colorGreen;
              __asm
              {
                vmulss  xmm1, xmm0, xmm9
                vaddss  xmm2, xmm1, xmm6; y
                vmovaps xmm1, xmm6; x
              }
              CG_DrawStringExt(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, string, v87, 0, 1, charHeight, 0);
              ++v63;
              ++v68;
              _RBX += 44i64;
              if ( !--v67 )
                break;
              kf = s_cameraman.kf;
            }
            __asm
            {
              vmovaps xmm8, [rsp+288h+var_68]
              vmovaps xmm9, [rsp+288h+var_78]
            }
          }
        }
        __asm
        {
          vmovaps xmm6, [rsp+288h+var_48]
          vmovaps xmm7, [rsp+288h+var_58]
        }
        return;
      }
      if ( CL_Cameraman_GetEntFocus(s_cameraman.focus_idx)->notEnt )
      {
        Com_sprintf(dest, 0x40ui64, "static%d", (unsigned int)s_cameraman.focus_idx);
        goto LABEL_37;
      }
      cent = CL_Cameraman_GetEntFocus(s_cameraman.focus_idx)->cent;
      if ( !cent )
      {
        EntFocus = CL_Cameraman_GetEntFocus(s_cameraman.focus_idx);
        v15 = "BADCLIENTNUM(%d)->%s";
LABEL_35:
        Com_sprintf(dest, 0x40ui64, v15, (unsigned int)s_cameraman.focus_idx, s_bone2Camera[EntFocus->camJoint].name);
        goto LABEL_37;
      }
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
      {
        if ( (cent->flags & 1) == 0 )
        {
          EntFocus = CL_Cameraman_GetEntFocus(s_cameraman.focus_idx);
          v15 = "ent(%d)->%s";
          goto LABEL_35;
        }
        if ( ((cent->nextState.eType - 1) & 0xFFEF) == 0 )
        {
          clientNum = cent->nextState.clientNum;
          if ( clientNum != -1 )
          {
            if ( !CL_GetClientNameAndClanTagColorize(localClientNum, clientNum, nameBuf, 0x24ui64, clanTagBuf, 0xCui64, 0) )
            {
              nameBuf[0] = 0;
              clanTagBuf[0] = 0;
            }
            v17 = CL_Cameraman_GetEntFocus(s_cameraman.focus_idx);
            LODWORD(fmta) = s_cameraman.focus_idx;
            Com_sprintf(dest, 0x40ui64, "%s(%d)->%s", nameBuf, fmta, s_bone2Camera[v17->camJoint].name);
            goto LABEL_37;
          }
        }
      }
      v18 = CL_Cameraman_GetEntFocus(s_cameraman.focus_idx);
      focus_idx = s_cameraman.focus_idx;
      name = s_bone2Camera[v18->camJoint].name;
      v21 = CL_Cameraman_GetEntFocus(s_cameraman.focus_idx);
      LODWORD(fmt) = focus_idx;
      Com_sprintf(dest, 0x40ui64, "ent%d(%d)->%s", (unsigned int)v21->cent->nextState.number, fmt, name);
      goto LABEL_37;
    }
  }
}

/*
==============
CL_Cameraman_Dvars
==============
*/

void __fastcall CL_Cameraman_Dvars(__int64 a1, double _XMM1_8, double _XMM2_8)
{
  const dvar_t *v16; 
  const dvar_t *v31; 
  const dvar_t *v43; 
  const dvar_t *v72; 
  const dvar_t *v79; 
  const dvar_t *v87; 
  const dvar_t *v91; 
  const dvar_t *v112; 
  const dvar_t *v150; 
  const dvar_t *v163; 
  char v176; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm13
    vmovaps [rsp+0C8h+var_88], xmm14
    vmovaps [rsp+0C8h+var_98], xmm15
    vmovss  xmm3, cs:__real@49742400; max
  }
  DVARBOOL_cameraman_enabled = Dvar_RegisterBool("cameraman_enabled", 0, 0, "Enables cameraman - so cameraman controls the camera and can edit/playback.");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v16 = Dvar_RegisterFloat("cameraman_time", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The time used when keyframes are grabbed.  Updated during playback.");
  __asm
  {
    vmovss  xmm10, cs:__real@3dcccccd
    vmovss  xmm3, cs:__real@42b40000; max
    vmovss  xmm1, cs:__real@42820000; value
  }
  DVARFLT_cameraman_time = v16;
  __asm
  {
    vmovaps xmm2, xmm10; min
    vmovss  xmm9, cs:__real@40800000
    vmovss  xmm15, cs:__real@3f800000
  }
  DVARFLT_cameraman_fov = Dvar_RegisterFloat("cameraman_fov", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Fov used when keyframes are grabbed.  Updated during playback.");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm10; min
    vmovaps xmm1, xmm15; value
  }
  DVARFLT_cameraman_demoscale = Dvar_RegisterFloat("cameraman_demoscale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Demoscale used when keyframes are grabbed.  Updated during playback.");
  __asm
  {
    vmovss  xmm14, cs:__real@461c4000
    vmovss  xmm6, cs:__real@42f00000
  }
  DVARINT_cameraman_debugDraw = Dvar_RegisterEnum("cameraman_debugDraw", s_debugDrawModes, 3, 0, "Controls the one line status display when cameraman is active");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm10; min
    vmovaps xmm1, xmm6; value
  }
  v31 = Dvar_RegisterFloat("cameraman_angle_dist", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "In lerp mode, when distance to target is less than this, use target cameras angles for slerp.");
  __asm { vmovss  xmm1, cs:__real@44870000; value }
  cameraman_angle_dist = v31;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm15; min
    vmovss  xmm7, cs:__real@42700000
  }
  cameraman_lerp_maxangle = Dvar_RegisterFloat("cameraman_lerp_maxangle", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "In lerp mode, the max degrees per second the camera can rotate.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm15; min
    vmovaps xmm1, xmm7; value
    vmovss  xmm8, cs:__real@447a0000
  }
  cameraman_lerp_speed = Dvar_RegisterFloat("cameraman_lerp_speed", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "In lerp mode, the max units per second the camera can translate.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm15; min
    vmovaps xmm1, xmm8; value
  }
  v43 = Dvar_RegisterFloat("cameraman_lerp_farspeed", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "In lerp mode, the max units per second the camera can translate when doing a far traversal.");
  __asm { vmovss  xmm1, cs:__real@41a00000; value }
  cameraman_lerp_farspeed = v43;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm15; min
  }
  cameraman_decel_minspeed = Dvar_RegisterFloat("cameraman_decel_minspeed", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "In lerp mode, the min units per second the camera can translate while decelerating.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm15; min
    vmovaps xmm1, xmm8; value
  }
  cameraman_lerp_accel = Dvar_RegisterFloat("cameraman_lerp_accel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "In lerp mode, the acceleration in units per second^2.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm10; min
    vmovaps xmm1, xmm6; value
  }
  cameraman_decel_dist = Dvar_RegisterFloat("cameraman_decel_dist", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "In lerp mode, the distance where we start to decelerate.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm15; min
    vmovaps xmm1, xmm15; value
  }
  cameraman_lerp_fov_speed = Dvar_RegisterFloat("cameraman_lerp_fov_speed", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "In lerp mode, the max degrees per second the fov can change.");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm2, xmm10; min
    vmovaps xmm1, xmm6; value
  }
  cameraman_trans_vel = Dvar_RegisterFloat("cameraman_trans_vel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman translation velocity.");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm2, xmm10; min
    vmovaps xmm1, xmm7; value
  }
  cameraman_pitch_vel = Dvar_RegisterFloat("cameraman_pitch_vel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman pitch velocity.");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm2, xmm10; min
    vmovaps xmm1, xmm7; value
  }
  cameraman_yaw_vel = Dvar_RegisterFloat("cameraman_yaw_vel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman yaw velocity.");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm2, xmm10; min
    vmovaps xmm1, xmm7; value
    vmovss  xmm6, cs:__real@42c80000
  }
  cameraman_roll_vel = Dvar_RegisterFloat("cameraman_roll_vel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman roll velocity.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm10; min
    vmovaps xmm1, xmm9; value
  }
  v72 = Dvar_RegisterFloat("cameraman_fov_vel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman fov velocity.");
  __asm { vmovss  xmm1, cs:__real@40000000; value }
  cameraman_fov_vel = v72;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm2, xmm10; min
  }
  cameraman_first_scale = Dvar_RegisterFloat("cameraman_first_scale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman scale when rtrigger is pressed.");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm2, xmm10; min
    vmovaps xmm1, xmm9; value
  }
  v79 = Dvar_RegisterFloat("cameraman_second_scale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman scale when rshoulder is pressed.");
  __asm { vmovss  xmm1, cs:__real@41000000; value }
  cameraman_second_scale = v79;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm2, xmm10; min
  }
  cameraman_third_scale = Dvar_RegisterFloat("cameraman_third_scale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman scale when rtrigger and rshoulder are pressed.");
  __asm
  {
    vmovss  xmm9, cs:__real@3c23d70a
    vmovss  xmm1, cs:__real@3f000000; value
  }
  cameraman_disable_fov = Dvar_RegisterBool("cameraman_disable_fov", 0, 0, "Disable cameraman from providing fov.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm9; min
  }
  v87 = Dvar_RegisterFloat("cameraman_smooth_lookbehind", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman lookbehind when playing back with smoothing.");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  cameraman_smooth_lookbehind = v87;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm9; min
  }
  v91 = Dvar_RegisterFloat("cameraman_smooth_lookahead", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman lookahead when playing back with smoothing.");
  __asm
  {
    vmovss  xmm13, cs:__real@38d1b717
    vmovss  xmm1, cs:__real@3d4ccccd; value
  }
  cameraman_smooth_lookahead = v91;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm13; min
    vmovss  xmm11, cs:__real@3a83126f
  }
  cameraman_dampingHFrac = Dvar_RegisterFloat("cameraman_dampingHFrac", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman steadyCam2 Horiz damping.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm11; min
    vmovaps xmm1, xmm9; value
    vmovss  xmm7, cs:__real@3e99999a
  }
  cameraman_dampingHMinVel = Dvar_RegisterFloat("cameraman_dampingHMinVel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman steadyCam2 Horiz minVel.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm11; min
    vmovaps xmm1, xmm7; value
    vmovss  xmm10, cs:__real@41200000
  }
  cameraman_dampingHMinVel2 = Dvar_RegisterFloat("cameraman_dampingHMinVel2", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman steadyCam2 Horiz minVel2.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm11; min
    vmovaps xmm1, xmm10; value
    vmovss  xmm6, cs:__real@42340000
  }
  cameraman_dampingHMaxVel2 = Dvar_RegisterFloat("cameraman_dampingHMaxVel2", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman steadyCam2 Horiz maxVel2.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm11; min
    vmovaps xmm1, xmm6; value
  }
  v112 = Dvar_RegisterFloat("cameraman_dampingHMaxVel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman steadyCam2 Horiz maxVel.");
  __asm { vmovss  xmm1, cs:__real@3ca3d70a; value }
  cameraman_dampingHMaxVel = v112;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm13; min
  }
  cameraman_dampingVFrac = Dvar_RegisterFloat("cameraman_dampingVFrac", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman steadyCam2 Vert damping.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm11; min
    vmovaps xmm1, xmm9; value
  }
  cameraman_dampingVMinVel = Dvar_RegisterFloat("cameraman_dampingVMinVel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman steadyCam2 Vert minVel.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm11; min
    vmovaps xmm1, xmm7; value
  }
  cameraman_dampingVMinVel2 = Dvar_RegisterFloat("cameraman_dampingVMinVel2", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman steadyCam2 Vert minVel2.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm11; min
    vmovaps xmm1, xmm10; value
  }
  cameraman_dampingVMaxVel2 = Dvar_RegisterFloat("cameraman_dampingVMaxVel2", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman steadyCam2 Vert maxVel2.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm11; min
    vmovaps xmm1, xmm6; value
  }
  cameraman_dampingVMaxVel = Dvar_RegisterFloat("cameraman_dampingVMaxVel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman steadyCam2 Vert maxVel.");
  __asm
  {
    vmovss  xmm1, cs:__real@3d4ccccd; value
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm13; min
  }
  cameraman_dampingFrac = Dvar_RegisterFloat("cameraman_dampingFrac", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman steadyCam damping.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm11; min
    vmovaps xmm1, xmm9; value
  }
  cameraman_dampingMinVel = Dvar_RegisterFloat("cameraman_dampingMinVel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman steadyCam minVel.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm11; min
    vmovaps xmm1, xmm7; value
  }
  cameraman_dampingMinVel2 = Dvar_RegisterFloat("cameraman_dampingMinVel2", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman steadyCam minVel2.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm11; min
    vmovaps xmm1, xmm10; value
  }
  cameraman_dampingMaxVel2 = Dvar_RegisterFloat("cameraman_dampingMaxVel2", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman steadyCam maxVel2.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm11; min
    vmovaps xmm1, xmm6; value
    vmovss  xmm6, cs:__real@3dcccccd
  }
  cameraman_dampingMaxVel = Dvar_RegisterFloat("cameraman_dampingMaxVel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman steadyCam maxVel.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm13; min
    vmovaps xmm1, xmm6; value
  }
  cameraman_dampingAFrac = Dvar_RegisterFloat("cameraman_dampingAFrac", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman steadyCam angle damping.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm11; min
    vmovaps xmm1, xmm6; value
  }
  v150 = Dvar_RegisterFloat("cameraman_dampingMinAngle", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman steadyCam minAngle.");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  cameraman_dampingMinAngle = v150;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm11; min
  }
  cameraman_dampingMinAngle2 = Dvar_RegisterFloat("cameraman_dampingMinAngle2", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman steadyCam minAngle2.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm11; min
    vmovaps xmm1, xmm10; value
  }
  cameraman_dampingMaxAngle2 = Dvar_RegisterFloat("cameraman_dampingMaxAngle2", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman steadyCam maxAngle2.");
  __asm
  {
    vmovss  xmm1, cs:__real@41700000; value
    vmovaps xmm3, xmm14; max
    vmovaps xmm2, xmm11; min
  }
  cameraman_dampingMaxAngle = Dvar_RegisterFloat("cameraman_dampingMaxAngle", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman steadyCam maxAngle.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm13; min
    vmovaps xmm1, xmm6; value
  }
  v163 = Dvar_RegisterFloat("cameraman_rollDamping", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "cameraman rollDamping of the orientation from entities.");
  __asm { vmovaps xmm15, [rsp+0C8h+var_98] }
  _R11 = &v176;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm13, xmmword ptr [r11-70h]
    vmovaps xmm14, xmmword ptr [r11-80h]
  }
  cameraman_rollDamping = v163;
}

/*
==============
CL_Cameraman_Enabled
==============
*/
_BOOL8 CL_Cameraman_Enabled()
{
  return s_cameraman.was_enabled;
}

/*
==============
CL_Cameraman_FindClosestCEntities
==============
*/
void CL_Cameraman_FindClosestCEntities(LocalClientNum_t localClientNum, const vec3_t *origin, const vec3_t *angles)
{
  CgEntitySystem *EntitySystem; 
  _DWORD *v; 
  entityType_s *p_eType; 
  unsigned int v17; 
  int v18; 
  bool v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  bool v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  bool v34; 
  int v67; 
  __int64 v68; 
  bool v69; 
  int sortedEntListCount; 
  __int64 v76; 
  __int64 v86; 
  __int64 v87; 
  int *v88; 
  int v89; 
  int v90; 
  unsigned int v91; 
  vec3_t forward; 

  __asm { vmovaps [rsp+118h+var_A8], xmm12 }
  s_cameraman.sortedEntListCount = 0;
  EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
  if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cameraman.cpp", 1522, ASSERT_TYPE_ASSERT, "(cgEntSystem)", (const char *)&queryFormat, "cgEntSystem") )
    __debugbreak();
  AngleVectors(angles, &forward, NULL, NULL);
  __asm
  {
    vmovss  xmm12, cs:__real@3db27eb6
    vmovaps [rsp+118h+var_48], xmm6
  }
  _RBP = &EntitySystem->m_entityOrigin[0].v[2];
  __asm { vmovaps [rsp+118h+var_58], xmm7 }
  v = (_DWORD *)EntitySystem->m_entityOrigin[0].v;
  __asm { vmovaps [rsp+118h+var_68], xmm8 }
  p_eType = &EntitySystem->m_entities[0].nextState.eType;
  __asm { vmovaps [rsp+118h+var_78], xmm9 }
  v17 = 0;
  __asm
  {
    vmovaps [rsp+118h+var_88], xmm10
    vmovaps [rsp+118h+var_98], xmm11
  }
  v18 = 686098;
  _R13 = 0x140000000ui64;
  v20 = 1;
  do
  {
    if ( !v20 )
    {
      LODWORD(v87) = 2048;
      LODWORD(v86) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v86, v87) )
        __debugbreak();
    }
    if ( (p_eType[120] & 1) != 0 && *p_eType <= ET_ACTOR && _bittest(&v18, *(__int16 *)p_eType) )
    {
      v21 = *((__int16 *)p_eType - 4);
      if ( v21 > 0x9E4 )
      {
        LODWORD(v87) = *((__int16 *)p_eType - 4);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v87) )
          __debugbreak();
      }
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v87) = 2;
        LODWORD(v86) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v86, v87) )
          __debugbreak();
      }
      v22 = 2533 * localClientNum + v21;
      if ( v22 >= 0x13CA )
      {
        LODWORD(v87) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v87) )
          __debugbreak();
      }
      v23 = clientObjMap[v22];
      if ( !v23 )
        goto LABEL_52;
      if ( v23 >= (unsigned int)s_objCount )
      {
        LODWORD(v87) = v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v87) )
          __debugbreak();
      }
      if ( !s_objBuf[v23] )
        goto LABEL_52;
      __asm { vmovss  xmm11, dword ptr [rcx+0C8h] }
      if ( v17 >= 0x800 )
      {
        LODWORD(v87) = 2048;
        LODWORD(v86) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 486, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v86, v87) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v26 = v17 < ComCharacterLimits::ms_gameData.m_clientCount;
      if ( (int)v17 > (int)ComCharacterLimits::ms_gameData.m_clientCount )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp-8]
          vmovss  xmm1, dword ptr [rbp-4]
          vmovss  [rsp+118h+var_D0], xmm0
          vmovss  xmm0, dword ptr [rbp+0]
          vmovss  [rsp+118h+var_C8], xmm0
          vmovss  [rsp+118h+var_CC], xmm1
        }
      }
      else
      {
        v27 = v[1];
        v88 = &v89;
        v28 = v27;
        v29 = (unsigned int)v ^ *v ^ ~s_entity_aab_X;
        v30 = (unsigned int)v ^ s_entity_aab_Y ^ *v ^ v27;
        v91 = v[2] ^ s_entity_aab_Z ^ (unsigned int)v ^ v28;
        v89 = v29;
        __asm { vmovss  xmm0, [rsp+118h+var_D0] }
        v90 = v30;
        memset(&v88, 0, sizeof(v88));
        __asm { vmovss  dword ptr [rsp+118h+var_D8], xmm0 }
        if ( ((unsigned int)v88 & 0x7F800000) == 2139095040 )
          goto LABEL_57;
        __asm
        {
          vmovss  xmm0, [rsp+118h+var_CC]
          vmovss  dword ptr [rsp+118h+var_D8], xmm0
        }
        if ( ((unsigned int)v88 & 0x7F800000) == 2139095040 )
          goto LABEL_57;
        __asm
        {
          vmovss  xmm0, [rsp+118h+var_C8]
          vmovss  dword ptr [rsp+118h+var_D8], xmm0
        }
        v26 = ((unsigned int)v88 & 0x7F800000) < 0x7F800000;
        if ( ((unsigned int)v88 & 0x7F800000) == 2139095040 )
        {
LABEL_57:
          v34 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 448, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )");
          v26 = 0;
          if ( v34 )
            __debugbreak();
        }
      }
      __asm
      {
        vmovss  xmm0, [rsp+118h+var_D0]
        vsubss  xmm8, xmm0, dword ptr [r12]
        vmovss  xmm1, [rsp+118h+var_CC]
        vsubss  xmm9, xmm1, dword ptr [r12+4]
        vmovss  xmm0, [rsp+118h+var_C8]
        vsubss  xmm10, xmm0, dword ptr [r12+8]
        vmulss  xmm0, xmm8, dword ptr [rsp+118h+forward]
        vmulss  xmm1, xmm9, dword ptr [rsp+118h+forward+4]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm10, dword ptr [rsp+118h+forward+8]
        vaddss  xmm7, xmm2, xmm1
        vmulss  xmm0, xmm7, dword ptr [rsp+118h+forward]
        vmulss  xmm1, xmm7, dword ptr [rsp+118h+forward+4]
        vsubss  xmm5, xmm8, xmm0
        vmulss  xmm0, xmm7, dword ptr [rsp+118h+forward+8]
        vsubss  xmm2, xmm9, xmm1
        vsubss  xmm4, xmm10, xmm0
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm1, xmm7, xmm12
        vsqrtss xmm4, xmm2, xmm2
        vaddss  xmm0, xmm1, xmm11
        vcomiss xmm4, xmm0
      }
      if ( v26 )
      {
        __asm
        {
          vmulss  xmm1, xmm9, xmm9
          vmulss  xmm0, xmm8, xmm8
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm10, xmm10
        }
        v67 = 0;
        v68 = 0i64;
        v69 = 0;
        __asm
        {
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm3, xmm2, xmm2
        }
        if ( s_cameraman.sortedEntListCount <= 0 )
        {
LABEL_43:
          v18 = 686098;
          if ( s_cameraman.sortedEntListCount < 10 )
          {
            s_cameraman.sortedEntList[s_cameraman.sortedEntListCount].cent = (centity_t *)(p_eType - 204);
            _RAX = 16i64 * s_cameraman.sortedEntListCount;
            __asm { vmovss  dword ptr [rax+r13+8C88018h], xmm3 }
            ++s_cameraman.sortedEntListCount;
          }
        }
        else
        {
          _RAX = s_cameraman.sortedEntList;
          while ( 1 )
          {
            __asm { vcomiss xmm3, dword ptr [rax] }
            if ( v69 )
              break;
            ++v67;
            ++v68;
            ++_RAX;
            v69 = (unsigned int)v67 < s_cameraman.sortedEntListCount;
            if ( v67 >= s_cameraman.sortedEntListCount )
              goto LABEL_43;
          }
          sortedEntListCount = 9;
          if ( s_cameraman.sortedEntListCount < 10 )
            sortedEntListCount = s_cameraman.sortedEntListCount;
          if ( sortedEntListCount > v68 )
          {
            _RCX = &s_cameraman.sortedEntList[sortedEntListCount];
            v76 = sortedEntListCount - v68;
            do
            {
              __asm
              {
                vmovups xmm0, xmmword ptr [rcx-10h]
                vmovups xmmword ptr [rcx], xmm0
              }
              --_RCX;
              --v76;
            }
            while ( v76 );
          }
          _RDI = v68;
          __asm { vmovss  dword ptr rva s_cameraman.sortedEntList.distance[r13+rdi*8], xmm3 }
          s_cameraman.sortedEntList[_RDI].cent = (centity_t *)(p_eType - 204);
          v18 = 686098;
          if ( s_cameraman.sortedEntListCount < 10 )
            ++s_cameraman.sortedEntListCount;
        }
      }
      else
      {
LABEL_52:
        v18 = 686098;
      }
    }
    ++v17;
    v += 3;
    _RBP += 3;
    p_eType += 380;
    v20 = v17 < 0x800;
  }
  while ( (int)v17 < 2048 );
  __asm
  {
    vmovaps xmm11, [rsp+118h+var_98]
    vmovaps xmm10, [rsp+118h+var_88]
    vmovaps xmm9, [rsp+118h+var_78]
    vmovaps xmm8, [rsp+118h+var_68]
    vmovaps xmm7, [rsp+118h+var_58]
    vmovaps xmm6, [rsp+118h+var_48]
    vmovaps xmm12, [rsp+118h+var_A8]
  }
}

/*
==============
CL_Cameraman_FindNextValidClient
==============
*/
centity_t *CL_Cameraman_FindNextValidClient(LocalClientNum_t localClientNum, const centity_t *cent, int dir, bool includeLocalClient)
{
  cg_t *LocalClientGlobals; 
  int clientNum; 
  int maxClients; 
  int v11; 
  int v12; 
  CgEntitySystem *EntitySystem; 
  __int64 v15; 
  __int64 v16; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( (cent->flags & 1) == 0 || ((cent->nextState.eType - 1) & 0xFFEF) != 0 )
    clientNum = -1;
  else
    clientNum = cent->nextState.clientNum;
  maxClients = cls.maxClients;
  v11 = 0;
  if ( cls.maxClients <= 0 )
    return 0i64;
  v12 = 0;
  if ( clientNum != -1 )
    v12 = clientNum;
  while ( 1 )
  {
    v12 += dir;
    if ( v12 <= maxClients )
    {
      if ( v12 < 0 )
        v12 += maxClients;
    }
    else
    {
      v12 = 0;
    }
    if ( !includeLocalClient && LocalClientGlobals->clientNum == v12 )
      goto LABEL_23;
    if ( (unsigned int)(v12 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v12, "signed", v12) )
      __debugbreak();
    EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
    if ( (unsigned int)(__int16)v12 >= 0x800 )
    {
      LODWORD(v16) = 2048;
      LODWORD(v15) = (__int16)v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    if ( (EntitySystem->m_entities[(__int16)v12].flags & 1) != 0 && ((EntitySystem->m_entities[(__int16)v12].nextState.eType - 1) & 0xFFEF) == 0 )
      return &EntitySystem->m_entities[(__int16)v12];
    maxClients = cls.maxClients;
LABEL_23:
    if ( ++v11 >= maxClients )
      return 0i64;
  }
}

/*
==============
CL_Cameraman_FindPreviousKF
==============
*/
__int64 CL_Cameraman_FindPreviousKF(int f)
{
  __int64 result; 
  __int64 maxKeyframe; 
  CameramanKeyframe *Keyframes; 
  __int64 i; 

  result = 0i64;
  maxKeyframe = s_cameraman.kf->maxKeyframe;
  if ( (int)maxKeyframe > 0 )
  {
    Keyframes = s_cameraman.kf->Keyframes;
    for ( i = 0i64; i < maxKeyframe; ++i )
    {
      if ( Keyframes->frame > f )
      {
        if ( (_DWORD)result )
          return (unsigned int)(result - 1);
        return result;
      }
      result = (unsigned int)(result + 1);
      ++Keyframes;
    }
    if ( (int)maxKeyframe > 0 )
    {
      result = (unsigned int)(maxKeyframe - 1);
      if ( s_cameraman.kf->Keyframes[maxKeyframe - 1].frame == f )
        return result;
    }
  }
  return (unsigned int)maxKeyframe;
}

/*
==============
CL_Cameraman_FullPlayback
==============
*/
void CL_Cameraman_FullPlayback(__int64 play, __int64 reset, __int64 a3)
{
  char v6; 
  int currentDemoTime; 

  if ( (_BYTE)play )
  {
    CL_Cameraman_fixup(play, reset, a3, (unsigned __int8)reset);
    if ( v6 )
      CL_Cameraman_SetToStart();
    currentDemoTime = s_cameraman.currentDemoTime;
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
      SV_DemoMP_SetMsecTime(currentDemoTime);
    else
      SV_DemoSP_SetMsecTime(currentDemoTime);
    *(_WORD *)&s_cameraman.fullPlayback = 1;
    s_cameraman.cameraman_playing = 0;
  }
  else
  {
    if ( s_cameraman.kf->maxKeyframe > 0 )
    {
      CL_Cameraman_fixup(play, reset, a3, (unsigned __int8)reset);
      s_cameraman.cameraman_playing = 0;
      if ( __PAIR16__(s_cameraman.fullPlayback, 0) != s_cameraman.pausedFullPlayback )
      {
        __asm { vxorps  xmm1, xmm1, xmm1; value }
        Dvar_SetFloat_Internal(DVARFLT_replay_speed, *(float *)&_XMM1);
      }
    }
    __asm { vmovss  xmm1, cs:__real@3f800000; value }
    *(_WORD *)&s_cameraman.fullPlayback = 0;
    Dvar_SetFloat_Internal(DVARFLT_replay_speed, *(float *)&_XMM1);
    s_cameraman.pausedFullPlayback = 0;
  }
}

/*
==============
CL_Cameraman_GetCamera
==============
*/
char CL_Cameraman_GetCamera(LocalClientNum_t localClientNum, Camera_t *cam, vec3_t *focus, bool applyFiltering, float dT)
{
  int focus_idx; 
  __int64 camJoint; 
  const DObj *ClientDObj; 
  scr_string_t *joint; 
  const centity_t *focus_cent; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  char result; 
  float t; 
  float s[3]; 
  vec3_t v90; 
  vec3_t v91; 
  vec3_t v92; 
  vec3_t v93; 
  vec3_t p2; 
  vec3_t dir1; 
  vec3_t angles; 
  vec3_t v97; 
  tmat33_t<vec3_t> outTagMat; 
  tmat33_t<vec3_t> dst; 
  tmat33_t<vec3_t> axis; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBX = focus;
  _RDI = cam;
  if ( !s_cameraman.focus_cent )
  {
    cam->origin = s_cameraman.cam->origin;
    cam->angles = s_cameraman.cam->angles;
    result = 0;
    cam->fov = s_cameraman.cam->fov;
    return result;
  }
  focus_idx = s_cameraman.focus_idx;
  __asm { vmovaps xmmword ptr [r11-48h], xmm6 }
  camJoint = CL_Cameraman_GetEntFocus(focus_idx)->camJoint;
  ClientDObj = Com_GetClientDObj(s_cameraman.focus_cent->nextState.number, localClientNum);
  if ( ClientDObj && (joint = s_bone2Camera[camJoint].joint) != NULL && CG_DObjGetWorldTagMatrix(&s_cameraman.focus_cent->pose, ClientDObj, *joint, &outTagMat, &p2) )
  {
    MatrixCopy33(&outTagMat, &dst);
  }
  else
  {
    focus_cent = s_cameraman.focus_cent;
    if ( !s_cameraman.focus_cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    if ( !focus_cent->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
      __debugbreak();
    FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(focus_cent->pose.origin.Get_origin, &focus_cent->pose);
    FunctionPointer_origin(&focus_cent->pose.origin.origin.origin, &p2);
    if ( focus_cent->pose.isPosePrecise )
    {
      __asm
      {
        vmovsd  xmm3, cs:__real@3f30000000000000
        vmovd   xmm0, dword ptr [rbp+90h+p2]
        vmovd   xmm2, dword ptr [rbp+90h+p2+4]
        vcvtdq2pd xmm0, xmm0
        vmulsd  xmm0, xmm0, xmm3
        vcvtsd2ss xmm1, xmm0, xmm0
        vcvtdq2pd xmm2, xmm2
        vmulsd  xmm0, xmm2, xmm3
        vmovd   xmm2, dword ptr [rbp+90h+p2+8]
        vmovss  dword ptr [rbp+90h+p2], xmm1
        vcvtsd2ss xmm1, xmm0, xmm0
        vcvtdq2pd xmm2, xmm2
        vmulsd  xmm0, xmm2, xmm3
        vmovss  dword ptr [rbp+90h+p2+4], xmm1
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  dword ptr [rbp+90h+p2+8], xmm1
      }
    }
    AnglesToAxis(&s_cameraman.focus_cent->pose.angles, &dst);
  }
  if ( applyFiltering )
  {
    AxisToAngles(&dst, &angles);
    if ( s_cameraman.filterInited )
    {
      if ( s_cameraman.steadyCamMode )
      {
        __asm { vmovsd  xmm0, qword ptr [rbp+90h+angles] }
        v90.v[2] = angles.v[2];
        v91.v[2] = p2.v[2];
        v92.v[2] = s_cameraman.prev_filt_angles.v[2];
        __asm
        {
          vmovsd  [rsp+190h+var_140], xmm0
          vmovsd  xmm0, qword ptr [rbp+90h+p2]
        }
        v93.v[2] = s_cameraman.prev_filt_pos.v[2];
        __asm
        {
          vmovsd  [rsp+190h+var_130], xmm0
          vmovsd  xmm0, qword ptr cs:s_cameraman.prev_filt_angles
          vmovsd  [rsp+190h+var_120], xmm0
          vmovsd  xmm0, qword ptr cs:s_cameraman.prev_filt_pos
          vmovsd  [rbp+90h+var_110], xmm0
          vmovss  xmm0, [rbp+90h+dT]
        }
        s_cameraman.steadyCamReady = 1;
        CL_Cameraman_SteadyCam(*(float *)&_XMM0, &v93, &v92, &v91, &v90, &v97, &dir1);
        __asm { vmovsd  xmm0, [rbp+90h+var_D0] }
        p2.v[2] = v97.v[2];
        __asm { vmovsd  qword ptr [rbp+90h+p2], xmm0 }
        AnglesToAxis(&dir1, &dst);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+90h+var_D0]
          vmovss  xmm1, dword ptr [rbp+90h+var_D0+4]
          vmovss  dword ptr cs:s_cameraman.prev_filt_pos, xmm0
          vmovss  xmm0, [rbp+90h+var_C8]
          vmovss  dword ptr cs:s_cameraman.prev_filt_pos+4, xmm1
          vmovss  xmm1, dword ptr [rbp+90h+dir1]
          vmovss  dword ptr cs:s_cameraman.prev_filt_pos+8, xmm0
          vmovss  xmm0, dword ptr [rbp+90h+dir1+4]
          vmovss  dword ptr cs:s_cameraman.prev_filt_angles, xmm1
          vmovss  xmm1, dword ptr [rbp+90h+dir1+8]
        }
        goto LABEL_19;
      }
    }
    else
    {
      s_cameraman.filterInited = 1;
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rbp+90h+p2+4]
      vmovss  xmm0, dword ptr [rbp+90h+p2]
      vmovss  dword ptr cs:s_cameraman.prev_filt_pos+4, xmm1
      vmovss  xmm1, dword ptr [rbp+90h+angles]
      vmovss  dword ptr cs:s_cameraman.prev_filt_pos, xmm0
      vmovss  xmm0, dword ptr [rbp+90h+p2+8]
      vmovss  dword ptr cs:s_cameraman.prev_filt_angles, xmm1
      vmovss  xmm1, dword ptr [rbp+90h+angles+8]
      vmovss  dword ptr cs:s_cameraman.prev_filt_pos+8, xmm0
      vmovss  xmm0, dword ptr [rbp+90h+angles+4]
    }
LABEL_19:
    __asm
    {
      vmovss  dword ptr cs:s_cameraman.prev_filt_angles+4, xmm0
      vmovss  dword ptr cs:s_cameraman.prev_filt_angles+8, xmm1
    }
  }
  MatrixMultiply(&s_bone2Camera[camJoint].bone2Camera, &dst, &outTagMat);
  if ( s_cameraman.rollCorrect )
  {
    AxisToAngles(&outTagMat, &dir1);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+90h+dir1+8]
      vmulss  xmm0, xmm0, dword ptr [rax+28h]
      vmovss  dword ptr [rbp+90h+dir1+8], xmm0
    }
    AnglesToAxis(&dir1, &outTagMat);
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rbp+90h+p2+8]
    vmovss  xmm5, dword ptr [rbp+90h+p2+4]
    vmovss  xmm4, dword ptr [rbp+90h+p2]
  }
  if ( _RBX )
  {
    __asm
    {
      vmovss  dword ptr [rbx], xmm4
      vmovss  dword ptr [rbx+4], xmm5
      vmovss  dword ptr [rbx+8], xmm3
    }
  }
  _RCX = s_cameraman.cam;
  __asm
  {
    vmovss  xmm2, dword ptr [rcx]
    vmulss  xmm1, xmm2, dword ptr [rbp+90h+outTagMat]
    vaddss  xmm4, xmm4, xmm1
    vmulss  xmm1, xmm2, dword ptr [rbp+90h+outTagMat+4]
    vaddss  xmm5, xmm5, xmm1
    vmulss  xmm1, xmm2, dword ptr [rbp+90h+outTagMat+8]
    vaddss  xmm3, xmm3, xmm1
    vmovss  dword ptr [rbp+90h+p2], xmm4
    vmovss  dword ptr [rbp+90h+p2+4], xmm5
    vmovss  dword ptr [rbp+90h+p2+8], xmm3
    vmovss  xmm2, dword ptr [rcx+4]
    vmulss  xmm1, xmm2, dword ptr [rbp+90h+outTagMat+0Ch]
    vaddss  xmm4, xmm1, xmm4
    vmulss  xmm1, xmm2, dword ptr [rbp+90h+outTagMat+10h]
    vaddss  xmm5, xmm1, xmm5
    vmulss  xmm1, xmm2, dword ptr [rbp+90h+outTagMat+14h]
    vaddss  xmm6, xmm1, xmm3
    vmovss  dword ptr [rbp+90h+p2+8], xmm6
    vmovss  dword ptr [rbp+90h+p2], xmm4
    vmovss  dword ptr [rbp+90h+p2+4], xmm5
    vmovss  xmm3, dword ptr [rcx+8]
    vmulss  xmm1, xmm3, dword ptr [rbp+90h+outTagMat+18h]
    vaddss  xmm2, xmm1, xmm4
    vmulss  xmm1, xmm3, dword ptr [rbp+90h+outTagMat+1Ch]
    vmovss  dword ptr [rbp+90h+p2], xmm2
    vaddss  xmm2, xmm1, xmm5
    vmulss  xmm1, xmm3, dword ptr [rbp+90h+outTagMat+20h]
    vmovss  dword ptr [rbp+90h+p2+4], xmm2
    vaddss  xmm2, xmm1, xmm6
    vmovss  dword ptr [rbp+90h+p2+8], xmm2
  }
  AnglesToAxis(&s_cameraman.cam->angles, &axis);
  MatrixMultiply(&axis, &outTagMat, &dst);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+90h+p2]
    vmovss  xmm1, dword ptr [rbp+90h+p2+4]
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm0, dword ptr [rbp+90h+p2+8]
    vmovss  dword ptr [rdi+8], xmm0
    vmovss  dword ptr [rdi+4], xmm1
  }
  AxisToAngles(&dst, &_RDI->angles);
  __asm { vmovaps xmm6, [rsp+190h+var_40] }
  _RDI->fov = s_cameraman.cam->fov;
  if ( _RBX )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@461c4000
      vxorps  xmm1, xmm1, xmm1
      vmovss  [rsp+190h+s], xmm0
      vmovss  [rsp+190h+var_150], xmm0
      vmovss  xmm0, cs:__real@3f800000
      vmovss  dword ptr [rbp+90h+dir1+8], xmm0
      vmovss  dword ptr [rbp+90h+dir1], xmm1
      vmovss  dword ptr [rbp+90h+dir1+4], xmm1
    }
    ClosestApproachOfTwoLines(_RBX, &dir1, &p2, dst.m, s, &t);
    __asm
    {
      vmovss  xmm3, [rsp+190h+var_150]
      vmulss  xmm1, xmm3, dword ptr [rbp+90h+dst]
      vaddss  xmm2, xmm1, dword ptr [rbp+90h+p2]
      vmulss  xmm1, xmm3, dword ptr [rbp+90h+dst+4]
      vmovss  dword ptr [rbx], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbp+90h+p2+4]
      vmulss  xmm1, xmm3, dword ptr [rbp+90h+dst+8]
      vmovss  dword ptr [rbx+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbp+90h+p2+8]
      vmovss  dword ptr [rbx+8], xmm2
    }
  }
  return 1;
}

/*
==============
CL_Cameraman_GetEntFocus
==============
*/
entFocus_t *CL_Cameraman_GetEntFocus(int focus_idx)
{
  if ( focus_idx <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cameraman.cpp", 341, ASSERT_TYPE_ASSERT, "(focus_idx > 0)", (const char *)&queryFormat, "focus_idx > 0") )
    __debugbreak();
  return (entFocus_t *)(&s_cameraman.prev_cam_pos.z + 12 * focus_idx);
}

/*
==============
CL_Cameraman_GetFov
==============
*/
float CL_Cameraman_GetFov(float fov)
{
  if ( !cameraman_disable_fov->current.enabled )
  {
    if ( s_cameraman.lerpMode && s_cameraman.lerpSmooth || s_cameraman.steadyCamReady )
    {
      __asm { vmovss  xmm0, cs:s_cameraman.alt_cam.fov }
    }
    else
    {
      _RAX = s_cameraman.cam;
      __asm { vmovss  xmm0, dword ptr [rax+18h] }
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
CL_Cameraman_GetValuesAtTimeKf
==============
*/

void __fastcall CL_Cameraman_GetValuesAtTimeKf(int k, double t, vec3_t *origin, vec3_t *angles, float *fov, float *demo_scale)
{
  CameramanRecording_t *kf; 
  __int64 v15; 
  bool v17; 
  __int128 v71; 
  char v74; 

  kf = s_cameraman.kf;
  __asm { vmovaps [rsp+78h+var_28], xmm6 }
  _RDI = 0i64;
  __asm { vmovaps [rsp+78h+var_38], xmm7 }
  _RSI = angles;
  _R14 = origin;
  v15 = k;
  __asm
  {
    vmovaps [rsp+78h+var_48], xmm8
    vmovss  xmm8, cs:__real@3c888889
  }
  v17 = __CFADD__(s_cameraman.kf->Keyframes, v15 * 44) || &s_cameraman.kf->Keyframes[v15] == NULL;
  _RBX = &s_cameraman.kf->Keyframes[v15];
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovaps xmm6, xmm1
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx]
    vmulss  xmm7, xmm0, xmm8
    vcomiss xmm7, xmm1
  }
  if ( !v17 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cameraman.cpp", 807, ASSERT_TYPE_ASSERT, "(prevT <= t)", (const char *)&queryFormat, "prevT <= t", v71) )
      __debugbreak();
    kf = s_cameraman.kf;
  }
  if ( k + 1 < kf->maxKeyframe )
    _RDI = (__int64)&kf->Keyframes[k + 1];
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@42700000
    vcvttss2si eax, xmm0
  }
  if ( _RBX->frame == _EAX || !_RDI )
  {
    _R14->v[0] = _RBX->origin.v[0];
    _R14->v[1] = _RBX->origin.v[1];
    _R14->v[2] = _RBX->origin.v[2];
    _RSI->v[0] = _RBX->angles.v[0];
    _RSI->v[1] = _RBX->angles.v[1];
    _RSI->v[2] = _RBX->angles.v[2];
    *fov = _RBX->fov;
    _RAX = demo_scale;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4]
      vmovss  dword ptr [rax], xmm0
    }
  }
  else
  {
    __asm
    {
      vcomiss xmm7, xmm6
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rdi]
      vmulss  xmm8, xmm0, xmm8
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cameraman.cpp", 822, ASSERT_TYPE_ASSERT, "(( prevT <= t ) && ( t <= nextT ))", (const char *)&queryFormat, "( prevT <= t ) && ( t <= nextT )") )
      __debugbreak();
    _RAX = fov;
    __asm
    {
      vsubss  xmm1, xmm6, xmm7
      vsubss  xmm0, xmm8, xmm7
      vdivss  xmm6, xmm1, xmm0
      vmovss  xmm0, dword ptr [rdi+14h]
      vsubss  xmm1, xmm0, dword ptr [rbx+14h]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rbx+14h]
      vmovss  dword ptr [r14], xmm3
      vmovss  xmm0, dword ptr [rdi+18h]
      vsubss  xmm1, xmm0, dword ptr [rbx+18h]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rbx+18h]
      vmovss  dword ptr [r14+4], xmm3
      vmovss  xmm0, dword ptr [rdi+1Ch]
      vsubss  xmm1, xmm0, dword ptr [rbx+1Ch]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rbx+1Ch]
      vmovss  dword ptr [r14+8], xmm3
      vmovss  xmm0, dword ptr [rdi+20h]
      vsubss  xmm1, xmm0, dword ptr [rbx+20h]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rbx+20h]
      vmovss  dword ptr [rsi], xmm3
      vmovss  xmm0, dword ptr [rdi+24h]
      vsubss  xmm1, xmm0, dword ptr [rbx+24h]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rbx+24h]
      vmovss  dword ptr [rsi+4], xmm3
      vmovss  xmm0, dword ptr [rdi+28h]
      vsubss  xmm1, xmm0, dword ptr [rbx+28h]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rbx+28h]
      vmovss  dword ptr [rsi+8], xmm3
      vmovss  xmm0, dword ptr [rdi+8]
      vsubss  xmm1, xmm0, dword ptr [rbx+8]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rbx+8]
      vmovss  dword ptr [rax], xmm3
      vmovss  xmm0, dword ptr [rdi+4]
      vsubss  xmm1, xmm0, dword ptr [rbx+4]
    }
    _RAX = demo_scale;
    __asm
    {
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rbx+4]
      vmovss  dword ptr [rax], xmm3
    }
  }
  __asm { vmovaps xmm6, [rsp+78h+var_28] }
  _R11 = &v74;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+78h+var_38]
  }
}

/*
==============
CL_Cameraman_GotoKeyframe
==============
*/
void CL_Cameraman_GotoKeyframe(int kf)
{
  CameramanRecording_t *v3; 
  int curKeyframe; 
  int maxKeyframe; 
  float demo_scale; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  s_cameraman.kf->curKeyframe = kf;
  v3 = s_cameraman.kf;
  curKeyframe = s_cameraman.kf->curKeyframe;
  if ( curKeyframe < 0 )
  {
    s_cameraman.kf->curKeyframe = 0;
LABEL_5:
    v3 = s_cameraman.kf;
    goto LABEL_6;
  }
  maxKeyframe = s_cameraman.kf->maxKeyframe;
  if ( curKeyframe >= maxKeyframe )
  {
    s_cameraman.kf->curKeyframe = maxKeyframe - 1;
    goto LABEL_5;
  }
LABEL_6:
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdx+rax]
    vmulss  xmm6, xmm0, cs:__real@3c888889
    vmovaps xmm1, xmm6; t
  }
  CL_Cameraman_GetValuesAtTimeKf(v3->curKeyframe, *(double *)&_XMM1, &s_cameraman.cam->origin, &s_cameraman.cam->angles, &s_cameraman.cam->fov, &demo_scale);
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@42700000
    vcvttss2si eax, xmm0
  }
  s_cameraman.currentFrame = _EAX;
  _RAX = s_cameraman.cam;
  __asm
  {
    vmovss  cs:s_cameraman.currentTime, xmm6
    vmovss  xmm1, dword ptr [rax+18h]; value
  }
  Dvar_SetFloat_Internal(DVARFLT_cameraman_fov, *(float *)&_XMM1);
  __asm { vmovss  xmm1, [rsp+48h+arg_0]; value }
  Dvar_SetFloat_Internal(DVARFLT_cameraman_demoscale, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:s_cameraman.currentTime; value
    vmovaps xmm6, [rsp+48h+var_18]
  }
  Dvar_SetFloat_Internal(DVARFLT_cameraman_time, *(float *)&_XMM1);
}

/*
==============
CL_Cameraman_GrabKeyframe
==============
*/

void __fastcall CL_Cameraman_GrabKeyframe(double _XMM0_8)
{
  int v3; 
  ClActiveClient *Client; 
  int v5; 
  char v9; 
  __int64 maxKeyframe; 
  CameramanKeyframe *Keyframes; 
  __int64 v22; 
  int v23; 

  _RDI = DVARFLT_cameraman_time;
  if ( !DVARFLT_cameraman_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vxorps  xmm0, xmm0, xmm0 }
  v3 = 0;
  __asm { vcomiss xmm0, dword ptr [rdi+28h] }
  if ( SV_IsDemoPlaying() )
  {
    if ( clientUIActives[0].frontEndSceneState[0] || !clientUIActives[0].cgameInitialized )
    {
      v5 = 0;
    }
    else
    {
      Client = ClActiveClient::GetClient(LOCAL_CLIENT_0);
      v5 = Client->GetServerTime(Client);
    }
    if ( s_cameraman.kf->maxKeyframe )
    {
      *(double *)&_XMM0 = SV_Demo_GetTimeScale();
      __asm { vucomiss xmm0, cs:__real@3f800000 }
      if ( !v9 )
        goto LABEL_16;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rdx]
        vmulss  xmm2, xmm0, cs:__real@3c888889
      }
      if ( v5 - s_cameraman.kf->Keyframes[(int)CL_Cameraman_FindPreviousKF(s_cameraman.currentFrame)].demo_time < 0 )
      {
        __asm { vmovaps xmm1, xmm2; value }
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, edi
          vmulss  xmm1, xmm0, cs:__real@3a83126f
          vaddss  xmm1, xmm1, xmm2
        }
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edi
        vmulss  xmm1, xmm0, cs:__real@3a83126f
      }
    }
    Dvar_SetFloat_Internal(DVARFLT_cameraman_time, *(float *)&_XMM1);
  }
LABEL_16:
  _RDI = DVARFLT_cameraman_time;
  if ( !DVARFLT_cameraman_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmulss  xmm1, xmm0, cs:__real@42700000
    vcvttss2si r8d, xmm1
  }
  maxKeyframe = s_cameraman.kf->maxKeyframe;
  if ( (int)maxKeyframe <= 0 )
  {
LABEL_24:
    v23 = maxKeyframe - 1;
  }
  else
  {
    Keyframes = s_cameraman.kf->Keyframes;
    v22 = 0i64;
    while ( Keyframes->frame <= _ER8 )
    {
      if ( Keyframes->frame == _ER8 )
      {
        CL_Cameraman_ReplaceKeyframe(v3);
        return;
      }
      ++v3;
      ++v22;
      ++Keyframes;
      if ( v22 >= maxKeyframe )
        goto LABEL_24;
    }
    v23 = v3 - 1;
  }
  CL_Cameraman_AddKeyframe(v23, _ER8);
}

/*
==============
CL_Cameraman_HandleInput
==============
*/
bool CL_Cameraman_HandleInput(LocalClientNum_t localClientNum, int key, int down)
{
  __int64 v8; 
  const dvar_t *v10; 
  __int64 altKey; 
  bool result; 
  Cameraman_t *Keyframes; 
  bool v14; 
  bool Bool_Internal_DebugName; 
  __int64 shiftKey; 
  unsigned __int64 v18; 
  __int64 curKeyframe; 
  __int64 v25; 
  __int64 v27; 
  CameramanRecording_t *kf; 
  int i; 
  int demo_time; 
  int maxKeyframe; 
  int currentDemoTime; 
  _BYTE *m_ptr; 
  char *v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  int v65; 
  const centity_t *cent; 
  cg_t *LocalClientGlobals; 
  int v68; 
  centity_t *Entity; 
  int v70; 
  int sortedEntListCount; 
  int v82; 
  centity_t *v83; 
  entFocus_t *EntFocus; 
  int v85; 
  centity_t *NextValidClient; 
  bool v87; 
  const centity_t *focus_cent; 
  unsigned int v99; 
  int v100; 
  DObj *ClientDObj; 
  CameraJoints_e joint2Set; 
  CameramanRecording_t *v113; 
  int v114; 
  __int64 v115; 
  int v120; 
  float fmt; 
  float fmta; 
  vec3_t v126; 
  Mem_LargeLocal v127; 
  char v128; 
  void *retaddr; 
  float demo_scale; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  v8 = key;
  v10 = DVARBOOL_cameraman_enabled;
  if ( !DVARBOOL_cameraman_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( !v10->current.enabled )
    goto LABEL_5;
  Keyframes = &s_cameraman;
  if ( down )
  {
    v14 = s_cameraman.keyDebounce[v8] == 0;
    s_cameraman.keyDebounce[v8] = 1;
  }
  else
  {
    s_cameraman.keyDebounce[v8] = 0;
    v14 = 0;
  }
  if ( (_DWORD)v8 == 20 )
  {
    if ( down && v14 )
    {
      down = s_cameraman.buttonShift;
      if ( !s_cameraman.buttonShift )
      {
        s_cameraman.cameraman_focus = !s_cameraman.cameraman_focus;
        shiftKey = (unsigned int)s_cameraman.shiftKey;
        _R8 = (unsigned int)s_cameraman.ctrlKey;
        goto LABEL_28;
      }
      Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_cameraman_enabled, "cameraman_enabled");
      Dvar_SetBool_Internal(DVARBOOL_cameraman_enabled, !Bool_Internal_DebugName);
    }
    shiftKey = (unsigned int)s_cameraman.shiftKey;
    _R8 = (unsigned int)s_cameraman.ctrlKey;
  }
  else
  {
    shiftKey = (unsigned int)s_cameraman.shiftKey;
    _R8 = (unsigned int)s_cameraman.ctrlKey;
    if ( (_DWORD)v8 == 18 )
    {
      s_cameraman.buttonShift = down;
      goto LABEL_28;
    }
    if ( (_DWORD)v8 == 5 )
    {
      s_cameraman.buttonAlt = down;
    }
    else
    {
      if ( (unsigned int)(v8 - 138) <= 1 )
        _R8 = (unsigned int)down;
      s_cameraman.ctrlKey = _R8;
      if ( (unsigned int)(v8 - 140) <= 1 )
        shiftKey = (unsigned int)down;
      s_cameraman.shiftKey = shiftKey;
      altKey = (unsigned int)s_cameraman.altKey;
      if ( (unsigned int)(v8 - 136) <= 1 )
        altKey = (unsigned int)down;
      s_cameraman.altKey = altKey;
    }
  }
  down = s_cameraman.buttonShift;
LABEL_28:
  if ( s_cameraman.cameraman_focus )
  {
    if ( (_DWORD)v8 == 6 || (_DWORD)v8 == 19 || !v14 )
      goto $LN25_11;
    v18 = 0x140000000ui64;
    switch ( (int)v8 )
    {
      case 1:
      case 2:
      case 4:
      case 5:
      case 6:
      case 16:
      case 20:
        goto $LN25_11;
      case 3:
        if ( down )
        {
          if ( s_cameraman.cameraman_playing )
            goto LABEL_215;
          goto LABEL_65;
        }
        if ( s_cameraman.cameraman_playing )
        {
          if ( s_cameraman.kf->maxKeyframe > 0 )
          {
            CL_Cameraman_fixup(altKey, shiftKey, _R8, 0x140000000ui64);
            s_cameraman.cameraman_playing = 0;
            if ( s_cameraman.fullPlayback || s_cameraman.pausedFullPlayback )
            {
              __asm { vxorps  xmm1, xmm1, xmm1; value }
              Dvar_SetFloat_Internal(DVARFLT_replay_speed, *(float *)&_XMM1);
              s_cameraman.pausedFullPlayback = 1;
            }
          }
          goto $LN25_11;
        }
        if ( s_cameraman.kf->maxKeyframe <= 0 )
          goto $LN25_11;
        CL_Cameraman_fixup(altKey, shiftKey, _R8, 0x140000000ui64);
        s_cameraman.cameraman_playing = 1;
        if ( !s_cameraman.fullPlayback && !s_cameraman.pausedFullPlayback )
          goto $LN25_11;
        goto LABEL_73;
      case 14:
      case 114:
        if ( (_DWORD)shiftKey )
        {
          if ( s_cameraman.cameraman_playing )
          {
            if ( s_cameraman.kf->maxKeyframe > 0 )
            {
              CL_Cameraman_fixup(altKey, shiftKey, _R8, 0x140000000ui64);
              s_cameraman.cameraman_playing = 0;
              if ( s_cameraman.fullPlayback || s_cameraman.pausedFullPlayback )
              {
                __asm { vxorps  xmm1, xmm1, xmm1; value }
                Dvar_SetFloat_Internal(DVARFLT_replay_speed, *(float *)&_XMM1);
                s_cameraman.pausedFullPlayback = 1;
              }
            }
LABEL_215:
            if ( s_cameraman.kf->maxKeyframe > 0 )
            {
              CL_Cameraman_fixup(altKey, shiftKey, _R8, v18);
              s_cameraman.cameraman_playing = 0;
              if ( s_cameraman.fullPlayback || s_cameraman.pausedFullPlayback )
              {
                __asm { vxorps  xmm1, xmm1, xmm1; value }
                Dvar_SetFloat_Internal(DVARFLT_replay_speed, *(float *)&_XMM1);
              }
            }
            *(_WORD *)&s_cameraman.fullPlayback = 0;
LABEL_73:
            __asm { vmovss  xmm1, cs:__real@3f800000; value }
            Dvar_SetFloat_Internal(DVARFLT_replay_speed, *(float *)&_XMM1);
            s_cameraman.pausedFullPlayback = 0;
          }
          else
          {
            if ( s_cameraman.kf->maxKeyframe > 0 )
            {
              CL_Cameraman_fixup(altKey, shiftKey, _R8, 0x140000000ui64);
              CL_Cameraman_SetToStart();
              s_cameraman.cameraman_playing = 1;
              if ( s_cameraman.fullPlayback || s_cameraman.pausedFullPlayback )
              {
                __asm { vmovss  xmm1, cs:__real@3f800000; value }
                Dvar_SetFloat_Internal(DVARFLT_replay_speed, *(float *)&_XMM1);
                s_cameraman.pausedFullPlayback = 0;
              }
            }
LABEL_65:
            CL_Cameraman_fixup(altKey, shiftKey, _R8, v18);
            CL_Cameraman_SetToStart();
            currentDemoTime = s_cameraman.currentDemoTime;
            if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
              SV_DemoMP_SetMsecTime(currentDemoTime);
            else
              SV_DemoSP_SetMsecTime(currentDemoTime);
            *(_WORD *)&s_cameraman.fullPlayback = 1;
            s_cameraman.cameraman_playing = 0;
          }
          goto $LN25_11;
        }
        if ( s_cameraman.liveRecording )
        {
          s_cameraman.liveRecording = 0;
          goto $LN25_11;
        }
        s_cameraman.liveRecording = 1;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovups xmmword ptr cs:s_cameraman.velocity, xmm0
          vxorps  xmm6, xmm6, xmm6
          vmovss  dword ptr cs:s_cameraman.angVel+4, xmm6
          vmovss  dword ptr cs:s_cameraman.angVel+8, xmm6
          vmovss  cs:s_cameraman.fovVel, xmm6
          vmovss  dword ptr [rsp+0B8h+fmt], xmm6
        }
        CL_Cameraman_GetCamera(LOCAL_CLIENT_0, &s_cameraman.prevCam, NULL, 0, fmta);
        maxKeyframe = s_cameraman.kf->maxKeyframe;
        if ( !maxKeyframe )
        {
          s_cameraman.currentFrame = 0;
          __asm { vmovss  cs:s_cameraman.currentTime, xmm6 }
          goto LABEL_224;
        }
        goto LABEL_62;
      case 21:
        if ( down )
        {
          if ( s_cameraman.buttonAlt )
          {
            curKeyframe = s_cameraman.kf->curKeyframe;
            _RDI = DVARFLT_cameraman_time;
            if ( !DVARFLT_cameraman_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_time") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(_RDI);
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+28h]
              vmulss  xmm1, xmm0, cs:__real@42700000
              vcvttss2si r9d, xmm1
            }
            if ( ((int)curKeyframe <= 0 || s_cameraman.kf->Keyframes[curKeyframe - 1].frame < _ER9) && ((int)curKeyframe >= s_cameraman.kf->maxKeyframe - 1 || s_cameraman.kf->Keyframes[curKeyframe + 1].frame > _ER9) )
              s_cameraman.kf->Keyframes[curKeyframe].frame = _ER9;
          }
          else
          {
            __asm { vxorps  xmm1, xmm1, xmm1; value }
            Dvar_SetFloat_Internal(DVARFLT_cameraman_time, *(float *)&_XMM1);
            CL_Cameraman_GrabKeyframe(*(double *)&_XMM0);
          }
        }
        else if ( s_cameraman.buttonAlt )
        {
          v25 = s_cameraman.kf->curKeyframe;
          _RDI = DVARFLT_cameraman_time;
          if ( !DVARFLT_cameraman_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_time") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RDI);
          v27 = v25;
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+28h]
            vmulss  xmm1, xmm0, cs:__real@42700000
            vcvttss2si r8d, xmm1
          }
          kf = s_cameraman.kf;
          for ( i = _ER8 - s_cameraman.kf->Keyframes[v25].frame; (int)v25 < s_cameraman.kf->maxKeyframe; kf = s_cameraman.kf )
          {
            kf->Keyframes[v27].frame += i;
            LODWORD(v25) = v25 + 1;
            ++v27;
          }
        }
        else
        {
LABEL_224:
          CL_Cameraman_GrabKeyframe(*(double *)&_XMM0);
        }
        goto $LN25_11;
      case 22:
        if ( !s_cameraman.buttonAlt )
        {
          CL_Cameraman_PrevKeyframe(altKey, shiftKey, _R8);
          goto LABEL_53;
        }
        CL_Cameraman_GotoKeyframe(0);
        goto $LN25_11;
      case 23:
        if ( s_cameraman.buttonAlt )
        {
          maxKeyframe = s_cameraman.kf->maxKeyframe;
          if ( maxKeyframe > 0 )
LABEL_62:
            CL_Cameraman_GotoKeyframe(maxKeyframe - 1);
        }
        else
        {
          CL_Cameraman_NextKeyframe(altKey, shiftKey, _R8);
LABEL_53:
          if ( down && SV_IsDemoPlaying() )
          {
            demo_time = s_cameraman.kf->Keyframes[s_cameraman.kf->curKeyframe].demo_time;
            if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
              SV_DemoMP_SetMsecTime(demo_time);
            else
              SV_DemoSP_SetMsecTime(demo_time);
          }
        }
        goto $LN25_11;
      case 48:
        if ( (_DWORD)shiftKey )
        {
          Mem_LargeLocal::Mem_LargeLocal(&v127, 0x1B800ui64, "KeyframeHeap_t tempHeap");
          m_ptr = v127.m_ptr;
          v41 = (char *)v127.m_ptr;
          if ( s_cameraman.keyRecordings[1].Keyframes )
          {
            memcpy_0(v127.m_ptr, s_cameraman.keyRecordings[1].Keyframes, 44i64 * s_cameraman.keyRecordings[1].maxKeyframe);
            v41 = &m_ptr[44 * s_cameraman.keyRecordings[1].maxKeyframe];
            s_cameraman.keyRecordings[1].kfsAvailable = s_cameraman.keyRecordings[1].maxKeyframe;
          }
          if ( s_cameraman.keyRecordings[2].Keyframes )
          {
            memcpy_0(v41, s_cameraman.keyRecordings[2].Keyframes, 44i64 * s_cameraman.keyRecordings[2].maxKeyframe);
            v41 += 44 * s_cameraman.keyRecordings[2].maxKeyframe;
            s_cameraman.keyRecordings[2].kfsAvailable = s_cameraman.keyRecordings[2].maxKeyframe;
          }
          if ( s_cameraman.keyRecordings[3].Keyframes )
          {
            memcpy_0(v41, s_cameraman.keyRecordings[3].Keyframes, 44i64 * s_cameraman.keyRecordings[3].maxKeyframe);
            v41 += 44 * s_cameraman.keyRecordings[3].maxKeyframe;
            s_cameraman.keyRecordings[3].kfsAvailable = s_cameraman.keyRecordings[3].maxKeyframe;
          }
          if ( s_cameraman.keyRecordings[4].Keyframes )
          {
            memcpy_0(v41, s_cameraman.keyRecordings[4].Keyframes, 44i64 * s_cameraman.keyRecordings[4].maxKeyframe);
            v41 += 44 * s_cameraman.keyRecordings[4].maxKeyframe;
            s_cameraman.keyRecordings[4].kfsAvailable = s_cameraman.keyRecordings[4].maxKeyframe;
          }
          if ( s_cameraman.keyRecordings[5].Keyframes )
          {
            memcpy_0(v41, s_cameraman.keyRecordings[5].Keyframes, 44i64 * s_cameraman.keyRecordings[5].maxKeyframe);
            v41 += 44 * s_cameraman.keyRecordings[5].maxKeyframe;
            s_cameraman.keyRecordings[5].kfsAvailable = s_cameraman.keyRecordings[5].maxKeyframe;
          }
          if ( s_cameraman.keyRecordings[6].Keyframes )
          {
            memcpy_0(v41, s_cameraman.keyRecordings[6].Keyframes, 44i64 * s_cameraman.keyRecordings[6].maxKeyframe);
            v41 += 44 * s_cameraman.keyRecordings[6].maxKeyframe;
            s_cameraman.keyRecordings[6].kfsAvailable = s_cameraman.keyRecordings[6].maxKeyframe;
          }
          if ( s_cameraman.keyRecordings[7].Keyframes )
          {
            memcpy_0(v41, s_cameraman.keyRecordings[7].Keyframes, 44i64 * s_cameraman.keyRecordings[7].maxKeyframe);
            v41 += 44 * s_cameraman.keyRecordings[7].maxKeyframe;
            s_cameraman.keyRecordings[7].kfsAvailable = s_cameraman.keyRecordings[7].maxKeyframe;
          }
          if ( s_cameraman.keyRecordings[8].Keyframes )
          {
            memcpy_0(v41, s_cameraman.keyRecordings[8].Keyframes, 44i64 * s_cameraman.keyRecordings[8].maxKeyframe);
            v41 += 44 * s_cameraman.keyRecordings[8].maxKeyframe;
            s_cameraman.keyRecordings[8].kfsAvailable = s_cameraman.keyRecordings[8].maxKeyframe;
          }
          if ( s_cameraman.keyRecordings[9].Keyframes )
          {
            memcpy_0(v41, s_cameraman.keyRecordings[9].Keyframes, 44i64 * s_cameraman.keyRecordings[9].maxKeyframe);
            v41 += 44 * s_cameraman.keyRecordings[9].maxKeyframe;
            s_cameraman.keyRecordings[9].kfsAvailable = s_cameraman.keyRecordings[9].maxKeyframe;
          }
          if ( s_cameraman.keyRecordings[0].Keyframes && s_cameraman.keyRecordings[0].maxKeyframe )
            memcpy_0(v41, s_cameraman.keyRecordings[0].Keyframes, 44i64 * s_cameraman.keyRecordings[0].maxKeyframe);
          s_cameraman.keyRecordings[0].kfsAvailable = (m_ptr - v41 + 112640) / 44;
          if ( s_cameraman.keyRecordings[1].Keyframes )
          {
            s_cameraman.keyRecordings[1].Keyframes = (CameramanKeyframe *)&s_cameraman;
            memcpy_0(&s_cameraman, m_ptr, 44i64 * s_cameraman.keyRecordings[1].maxKeyframe);
            v42 = 44i64 * s_cameraman.keyRecordings[1].maxKeyframe;
            m_ptr += v42;
            Keyframes = (Cameraman_t *)((char *)&s_cameraman + v42);
          }
          if ( s_cameraman.keyRecordings[2].Keyframes )
          {
            s_cameraman.keyRecordings[2].Keyframes = (CameramanKeyframe *)Keyframes;
            memcpy_0(Keyframes, m_ptr, 44i64 * s_cameraman.keyRecordings[2].maxKeyframe);
            v43 = 44i64 * s_cameraman.keyRecordings[2].maxKeyframe;
            m_ptr += v43;
            Keyframes = (Cameraman_t *)((char *)Keyframes + v43);
          }
          if ( s_cameraman.keyRecordings[3].Keyframes )
          {
            s_cameraman.keyRecordings[3].Keyframes = (CameramanKeyframe *)Keyframes;
            memcpy_0(Keyframes, m_ptr, 44i64 * s_cameraman.keyRecordings[3].maxKeyframe);
            v44 = 44i64 * s_cameraman.keyRecordings[3].maxKeyframe;
            m_ptr += v44;
            Keyframes = (Cameraman_t *)((char *)Keyframes + v44);
          }
          if ( s_cameraman.keyRecordings[4].Keyframes )
          {
            s_cameraman.keyRecordings[4].Keyframes = (CameramanKeyframe *)Keyframes;
            memcpy_0(Keyframes, m_ptr, 44i64 * s_cameraman.keyRecordings[4].maxKeyframe);
            v45 = 44i64 * s_cameraman.keyRecordings[4].maxKeyframe;
            m_ptr += v45;
            Keyframes = (Cameraman_t *)((char *)Keyframes + v45);
          }
          if ( s_cameraman.keyRecordings[5].Keyframes )
          {
            s_cameraman.keyRecordings[5].Keyframes = (CameramanKeyframe *)Keyframes;
            memcpy_0(Keyframes, m_ptr, 44i64 * s_cameraman.keyRecordings[5].maxKeyframe);
            v46 = 44i64 * s_cameraman.keyRecordings[5].maxKeyframe;
            m_ptr += v46;
            Keyframes = (Cameraman_t *)((char *)Keyframes + v46);
          }
          if ( s_cameraman.keyRecordings[6].Keyframes )
          {
            s_cameraman.keyRecordings[6].Keyframes = (CameramanKeyframe *)Keyframes;
            memcpy_0(Keyframes, m_ptr, 44i64 * s_cameraman.keyRecordings[6].maxKeyframe);
            v47 = 44i64 * s_cameraman.keyRecordings[6].maxKeyframe;
            m_ptr += v47;
            Keyframes = (Cameraman_t *)((char *)Keyframes + v47);
          }
          if ( s_cameraman.keyRecordings[7].Keyframes )
          {
            s_cameraman.keyRecordings[7].Keyframes = (CameramanKeyframe *)Keyframes;
            memcpy_0(Keyframes, m_ptr, 44i64 * s_cameraman.keyRecordings[7].maxKeyframe);
            v48 = 44i64 * s_cameraman.keyRecordings[7].maxKeyframe;
            m_ptr += v48;
            Keyframes = (Cameraman_t *)((char *)Keyframes + v48);
          }
          if ( s_cameraman.keyRecordings[8].Keyframes )
          {
            s_cameraman.keyRecordings[8].Keyframes = (CameramanKeyframe *)Keyframes;
            memcpy_0(Keyframes, m_ptr, 44i64 * s_cameraman.keyRecordings[8].maxKeyframe);
            v49 = 44i64 * s_cameraman.keyRecordings[8].maxKeyframe;
            m_ptr += v49;
            Keyframes = (Cameraman_t *)((char *)Keyframes + v49);
          }
          if ( s_cameraman.keyRecordings[9].Keyframes )
          {
            s_cameraman.keyRecordings[9].Keyframes = (CameramanKeyframe *)Keyframes;
            memcpy_0(Keyframes, m_ptr, 44i64 * s_cameraman.keyRecordings[9].maxKeyframe);
            v50 = 44i64 * s_cameraman.keyRecordings[9].maxKeyframe;
            m_ptr += v50;
            Keyframes = (Cameraman_t *)((char *)Keyframes + v50);
          }
          s_cameraman.keyRecordings[0].Keyframes = (CameramanKeyframe *)Keyframes;
          if ( s_cameraman.keyRecordings[0].maxKeyframe )
          {
            memcpy_0(Keyframes, m_ptr, 44i64 * s_cameraman.keyRecordings[0].maxKeyframe);
            Keyframes = (Cameraman_t *)s_cameraman.keyRecordings[0].Keyframes;
          }
          s_cameraman.currentRecording = 0;
          s_cameraman.kf = s_cameraman.keyRecordings;
          if ( s_cameraman.keyRecordings[0].maxKeyframe > 0 )
          {
            s_cameraman.currentFrame = Keyframes->KeyframeHeap[s_cameraman.keyRecordings[0].curKeyframe].frame;
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vmulss  xmm6, xmm0, cs:__real@3c888889
              vmovss  cs:s_cameraman.currentTime, xmm6
              vmovaps xmm1, xmm6; t
            }
            CL_Cameraman_GetValuesAtTimeKf(s_cameraman.keyRecordings[0].curKeyframe, *(double *)&_XMM1, &s_cameraman.cam->origin, &s_cameraman.cam->angles, &s_cameraman.cam->fov, &demo_scale);
            __asm
            {
              vmulss  xmm0, xmm6, cs:__real@42700000
              vcvttss2si eax, xmm0
            }
            s_cameraman.currentFrame = _EAX;
            __asm { vmovss  cs:s_cameraman.currentTime, xmm6 }
            _RAX = s_cameraman.cam;
            __asm { vmovss  xmm1, dword ptr [rax+18h]; value }
            Dvar_SetFloat_Internal(DVARFLT_cameraman_fov, *(float *)&_XMM1);
            __asm { vmovss  xmm1, [rsp+0B8h+arg_18]; value }
            Dvar_SetFloat_Internal(DVARFLT_cameraman_demoscale, *(float *)&_XMM1);
            __asm { vmovss  xmm1, cs:s_cameraman.currentTime; value }
            Dvar_SetFloat_Internal(DVARFLT_cameraman_time, *(float *)&_XMM1);
          }
          Mem_LargeLocal::~Mem_LargeLocal(&v127);
        }
        else
        {
          __asm { vxorps  xmm6, xmm6, xmm6 }
          if ( (_DWORD)_R8 )
          {
            __asm { vmovss  dword ptr [rsp+0B8h+fmt], xmm6 }
            CL_Cameraman_GetCamera(localClientNum, &s_cameraman.main_cam, NULL, 0, fmt);
          }
          s_cameraman.focus_cent = NULL;
          s_cameraman.cam = &s_cameraman.main_cam;
          __asm { vmovss  cs:s_cameraman.lerpSpeed, xmm6 }
          s_cameraman.lerpSmooth = 1;
          __asm
          {
            vmovups xmm0, xmmword ptr cs:s_cameraman.main_cam.origin
            vmovups xmmword ptr cs:s_cameraman.prev_cam_pos, xmm0
            vmovss  xmm0, dword ptr cs:s_cameraman.main_cam.angles+4
            vmovss  dword ptr cs:s_cameraman.prev_cam_angles+4, xmm0
            vmovss  xmm1, dword ptr cs:s_cameraman.main_cam.angles+8
            vmovss  dword ptr cs:s_cameraman.prev_cam_angles+8, xmm1
          }
        }
        goto $LN25_11;
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
        v65 = v8 - 48;
        if ( (_DWORD)shiftKey )
        {
          if ( (_DWORD)_R8 )
            CL_Cameraman_GetEntFocus(v65)->initd = 0;
          else
            CL_Cameraman_Switch_Recordings(v65);
$LN25_11:
          result = 1;
          goto LABEL_75;
        }
        if ( (_DWORD)_R8 )
        {
          CL_Cameraman_InitFocusEnt(localClientNum, NULL, v65, 1, 1);
          goto $LN25_11;
        }
        if ( CL_Cameraman_GetEntFocus(v65)->cent )
        {
          cent = CL_Cameraman_GetEntFocus(v65)->cent;
          if ( (cent->flags & 1) != 0 )
            CL_Cameraman_InitFocusEnt(localClientNum, cent, v65, 0, 0);
          else
            CL_Cameraman_GetEntFocus(v65)->cent = NULL;
          goto $LN25_11;
        }
        if ( CL_Cameraman_GetEntFocus(v65)->notEnt )
        {
          CL_Cameraman_InitFocusEnt(localClientNum, NULL, v65, 0, 1);
          goto $LN25_11;
        }
        LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
        v68 = truncate_cast<short,int>(LocalClientGlobals->clientNum);
        Entity = CG_GetEntity(localClientNum, v68);
        v70 = 1;
        if ( v65 <= 1 )
        {
LABEL_143:
          if ( Entity )
          {
LABEL_147:
            CL_Cameraman_GetEntFocus(v65)->cent = Entity;
            CL_Cameraman_InitFocusEnt(localClientNum, Entity, v65, 0, 0);
            goto $LN25_11;
          }
        }
        else
        {
          while ( 1 )
          {
            Entity = CL_Cameraman_FindNextValidClient(localClientNum, Entity, 1, s_cameraman.altKey != 0);
            if ( !Entity )
              break;
            if ( ++v70 >= v65 )
              goto LABEL_143;
          }
        }
        if ( s_cameraman.focus_cent )
        {
          CL_Cameraman_InitFocusEnt(localClientNum, Entity, v65, 0, 0);
          goto LABEL_160;
        }
        Entity = CG_GetEntity(localClientNum, v68);
        goto LABEL_147;
      case 99:
        if ( (_DWORD)shiftKey )
        {
          s_cameraman.kf->maxKeyframe = 0;
          s_cameraman.kf->curKeyframe = 0;
        }
        else
        {
          v113 = s_cameraman.kf;
          v114 = s_cameraman.kf->maxKeyframe;
          if ( v114 > 0 )
          {
            v115 = s_cameraman.kf->curKeyframe;
            if ( (int)v115 < v114 - 1 )
            {
              _RDX = v115;
              do
              {
                _RCX = v113->Keyframes;
                __asm
                {
                  vmovups ymm0, ymmword ptr [rdx+rcx+2Ch]
                  vmovups ymmword ptr [rdx+rcx], ymm0
                  vmovsd  xmm1, qword ptr [rdx+rcx+4Ch]
                  vmovsd  qword ptr [rdx+rcx+20h], xmm1
                }
                _RCX[_RDX].angles.v[2] = _RCX[_RDX + 1].angles.v[2];
                LODWORD(v115) = v115 + 1;
                ++_RDX;
                v113 = s_cameraman.kf;
              }
              while ( (int)v115 < s_cameraman.kf->maxKeyframe - 1 );
            }
            --v113->maxKeyframe;
            v113 = s_cameraman.kf;
          }
          v120 = v113->curKeyframe;
          if ( v120 > 0 )
            v113->curKeyframe = v120 - 1;
        }
        goto $LN25_11;
      case 100:
        s_cameraman.joint2Set = CJ_ROOT;
        focus_cent = s_cameraman.focus_cent;
        if ( !s_cameraman.focus_cent )
          goto $LN25_11;
        v87 = 1;
        goto LABEL_175;
      case 101:
        __asm
        {
          vmovsd  xmm0, qword ptr cs:s_cameraman.prev_cam_angles; jumptable 000000014042EC6D case 101
          vmovsd  [rsp+0B8h+var_68], xmm0
        }
        v126.v[2] = s_cameraman.prev_cam_angles.v[2];
        __asm
        {
          vmovsd  xmm0, qword ptr cs:s_cameraman.prev_cam_pos
          vmovsd  [rsp+0B8h+var_58.m_ptr], xmm0
        }
        *(float *)&v127.m_size = s_cameraman.prev_cam_pos.v[2];
        CL_Cameraman_FindClosestCEntities(localClientNum, (const vec3_t *)&v127, &v126);
        if ( s_cameraman.sortedEntListCount <= 0 )
          goto $LN25_11;
        v83 = s_cameraman.sortedEntList[0].cent;
        s_cameraman.sortedEntListSelect = 0;
        if ( !s_cameraman.focus_cent )
          CL_Cameraman_InitFocusEnt(localClientNum, s_cameraman.sortedEntList[0].cent, 1, 1, 0);
        s_cameraman.focus_cent = v83;
        goto LABEL_172;
      case 102:
        s_cameraman.joint2Set = CJ_MAIN;
        goto LABEL_187;
      case 103:
        s_cameraman.joint2Set = CJ_FLASH;
        goto LABEL_187;
      case 104:
        s_cameraman.joint2Set = CJ_HEAD;
LABEL_187:
        if ( !s_cameraman.focus_cent )
          goto $LN25_11;
        ClientDObj = Com_GetClientDObj(s_cameraman.focus_cent->nextState.number, localClientNum);
        joint2Set = s_cameraman.joint2Set;
        if ( !ClientDObj )
          joint2Set = CJ_ROOT;
        s_cameraman.joint2Set = joint2Set;
        goto LABEL_173;
      case 107:
        s_cameraman.steadyCamMode = !s_cameraman.steadyCamMode;
        if ( s_cameraman.steadyCamMode )
        {
          __asm
          {
            vmovss  xmm2, dword ptr cs:s_cameraman.prev_cam_angles
            vmovss  dword ptr cs:s_cameraman.alt_cam.origin, xmm2
            vmovss  xmm1, dword ptr cs:s_cameraman.prev_cam_angles+4
            vmovss  dword ptr cs:s_cameraman.alt_cam.origin+4, xmm1
            vmovss  xmm0, dword ptr cs:s_cameraman.prev_cam_angles+8
            vmovss  dword ptr cs:s_cameraman.alt_cam.origin+8, xmm0
            vmovss  dword ptr cs:s_cameraman.alt_cam.angles, xmm2
            vmovss  dword ptr cs:s_cameraman.alt_cam.angles+4, xmm1
            vmovss  dword ptr cs:s_cameraman.alt_cam.angles+8, xmm0
          }
          _RAX = s_cameraman.cam;
          __asm
          {
            vmovss  xmm0, dword ptr [rax+18h]
            vmovss  cs:s_cameraman.alt_cam.fov, xmm0
          }
        }
        s_cameraman.filterInited = 0;
        s_cameraman.steadyCamReady = 0;
        goto $LN25_11;
      case 108:
        s_cameraman.lerpMode = !s_cameraman.lerpMode;
        if ( s_cameraman.lerpMode )
        {
          __asm
          {
            vmovss  xmm2, dword ptr cs:s_cameraman.prev_cam_angles
            vmovss  dword ptr cs:s_cameraman.alt_cam.origin, xmm2
            vmovss  xmm1, dword ptr cs:s_cameraman.prev_cam_angles+4
            vmovss  dword ptr cs:s_cameraman.alt_cam.origin+4, xmm1
            vmovss  xmm0, dword ptr cs:s_cameraman.prev_cam_angles+8
            vmovss  dword ptr cs:s_cameraman.alt_cam.origin+8, xmm0
            vmovss  dword ptr cs:s_cameraman.alt_cam.angles, xmm2
            vmovss  dword ptr cs:s_cameraman.alt_cam.angles+4, xmm1
            vmovss  dword ptr cs:s_cameraman.alt_cam.angles+8, xmm0
          }
          _RAX = s_cameraman.cam;
          __asm
          {
            vmovss  xmm0, dword ptr [rax+18h]
            vmovss  cs:s_cameraman.alt_cam.fov, xmm0
          }
        }
        goto $LN25_11;
      case 109:
        s_cameraman.steadyTwoAxis = !s_cameraman.steadyTwoAxis;
        s_cameraman.filterInited = 0;
        s_cameraman.steadyCamReady = 0;
        goto $LN25_11;
      case 110:
        s_cameraman.rollCorrect = !s_cameraman.rollCorrect;
        goto $LN25_11;
      case 115:
        s_cameraman.smoothPlayback = !s_cameraman.smoothPlayback;
        goto $LN25_11;
      case 134:
        if ( (_DWORD)shiftKey )
        {
          __asm { vmovss  xmm3, cs:__real@3f800000 }
          _ECX = 0;
          __asm
          {
            vmovd   xmm1, ecx
            vmovd   xmm0, r8d
            vpcmpeqd xmm2, xmm0, xmm1
            vmovss  xmm1, cs:__real@3dcccccd
            vblendvps xmm6, xmm1, xmm3, xmm2
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cameraman_time, "cameraman_time");
          __asm
          {
            vsubss  xmm1, xmm0, xmm6
            vxorps  xmm0, xmm0, xmm0
            vmaxss  xmm1, xmm1, xmm0; value
          }
          Dvar_SetFloat_Internal(DVARFLT_cameraman_time, *(float *)&_XMM1);
          goto $LN25_11;
        }
        if ( (_DWORD)_R8 )
        {
          sortedEntListCount = s_cameraman.sortedEntListCount;
          if ( s_cameraman.sortedEntListCount <= 0 )
            goto $LN25_11;
          v82 = s_cameraman.sortedEntListSelect + s_cameraman.sortedEntListCount - 1;
          goto LABEL_153;
        }
        if ( !s_cameraman.focus_cent )
          goto $LN25_11;
        EntFocus = CL_Cameraman_GetEntFocus(s_cameraman.focus_idx);
        v85 = -1;
        goto LABEL_157;
      case 135:
        if ( (_DWORD)shiftKey )
        {
          __asm { vmovss  xmm3, cs:__real@3f800000 }
          _ECX = 0;
          __asm
          {
            vmovd   xmm1, ecx
            vmovd   xmm0, r8d
            vpcmpeqd xmm2, xmm0, xmm1
            vmovss  xmm1, cs:__real@3dcccccd
            vblendvps xmm6, xmm1, xmm3, xmm2
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cameraman_time, "cameraman_time");
          __asm { vaddss  xmm1, xmm0, xmm6; value }
          Dvar_SetFloat_Internal(DVARFLT_cameraman_time, *(float *)&_XMM1);
          goto $LN25_11;
        }
        if ( (_DWORD)_R8 )
        {
          sortedEntListCount = s_cameraman.sortedEntListCount;
          if ( s_cameraman.sortedEntListCount <= 0 )
            goto $LN25_11;
          v82 = s_cameraman.sortedEntListSelect + 1;
LABEL_153:
          s_cameraman.sortedEntListSelect = v82 % sortedEntListCount;
          v83 = s_cameraman.sortedEntList[v82 % sortedEntListCount].cent;
          s_cameraman.focus_cent = v83;
          if ( !v83 )
            goto $LN25_11;
LABEL_172:
          CL_Cameraman_GetEntFocus(s_cameraman.focus_idx)->cent = v83;
LABEL_173:
          v87 = 1;
        }
        else
        {
          if ( !s_cameraman.focus_cent )
            goto $LN25_11;
          EntFocus = CL_Cameraman_GetEntFocus(s_cameraman.focus_idx);
          v85 = 1;
LABEL_157:
          NextValidClient = CL_Cameraman_FindNextValidClient(localClientNum, EntFocus->cent, v85, 0);
          s_cameraman.focus_cent = NextValidClient;
          if ( !NextValidClient )
          {
            CL_Cameraman_GetEntFocus(s_cameraman.focus_idx)->cent = NULL;
LABEL_160:
            s_cameraman.focus_cent = NULL;
            s_cameraman.cam = &s_cameraman.main_cam;
            goto $LN25_11;
          }
          CL_Cameraman_GetEntFocus(s_cameraman.focus_idx)->cent = NextValidClient;
          v87 = 0;
        }
        focus_cent = s_cameraman.focus_cent;
LABEL_175:
        CL_Cameraman_InitFocusEnt(localClientNum, focus_cent, s_cameraman.focus_idx, v87, 0);
        goto $LN25_11;
      case 165:
        v99 = Dvar_GetInt_Internal_DebugName(DVARINT_cameraman_debugDraw, "cameraman_debugDraw") + 1;
        v100 = 0;
        if ( v99 < 4 )
          v100 = v99;
        Dvar_SetInt_Internal(DVARINT_cameraman_debugDraw, v100);
        goto $LN25_11;
      default:
        break;
    }
  }
LABEL_5:
  result = 0;
LABEL_75:
  _R11 = &v128;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
  return result;
}

/*
==============
CL_Cameraman_Init
==============
*/
void CL_Cameraman_Init(bool isFullInit)
{
  Cameraman_t *Keyframes; 
  _BYTE *v5; 
  char *v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  vec3_t *p_secondAngles; 
  __int64 v27; 
  float demo_scale; 
  __int64 v31; 
  tmat33_t<vec3_t> v32; 
  tmat33_t<vec3_t> axis; 
  char v34; 
  void *retaddr; 

  _RAX = &retaddr;
  v31 = -2i64;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  if ( isFullInit )
  {
    Keyframes = &s_cameraman;
    memset_0(&s_cameraman, 0, sizeof(s_cameraman));
    s_cameraman.cam = &s_cameraman.main_cam;
    Mem_LargeLocal::Mem_LargeLocal((Mem_LargeLocal *)&v32, 0x1B800ui64, "KeyframeHeap_t tempHeap");
    v5 = *(_BYTE **)v32.m[0].v;
    v6 = *(char **)v32.m[0].v;
    if ( s_cameraman.keyRecordings[1].Keyframes )
    {
      memcpy_0(*(void **)v32.m[0].v, s_cameraman.keyRecordings[1].Keyframes, 44i64 * s_cameraman.keyRecordings[1].maxKeyframe);
      v6 = &v5[44 * s_cameraman.keyRecordings[1].maxKeyframe];
      s_cameraman.keyRecordings[1].kfsAvailable = s_cameraman.keyRecordings[1].maxKeyframe;
    }
    if ( s_cameraman.keyRecordings[2].Keyframes )
    {
      memcpy_0(v6, s_cameraman.keyRecordings[2].Keyframes, 44i64 * s_cameraman.keyRecordings[2].maxKeyframe);
      v6 += 44 * s_cameraman.keyRecordings[2].maxKeyframe;
      s_cameraman.keyRecordings[2].kfsAvailable = s_cameraman.keyRecordings[2].maxKeyframe;
    }
    if ( s_cameraman.keyRecordings[3].Keyframes )
    {
      memcpy_0(v6, s_cameraman.keyRecordings[3].Keyframes, 44i64 * s_cameraman.keyRecordings[3].maxKeyframe);
      v6 += 44 * s_cameraman.keyRecordings[3].maxKeyframe;
      s_cameraman.keyRecordings[3].kfsAvailable = s_cameraman.keyRecordings[3].maxKeyframe;
    }
    if ( s_cameraman.keyRecordings[4].Keyframes )
    {
      memcpy_0(v6, s_cameraman.keyRecordings[4].Keyframes, 44i64 * s_cameraman.keyRecordings[4].maxKeyframe);
      v6 += 44 * s_cameraman.keyRecordings[4].maxKeyframe;
      s_cameraman.keyRecordings[4].kfsAvailable = s_cameraman.keyRecordings[4].maxKeyframe;
    }
    if ( s_cameraman.keyRecordings[5].Keyframes )
    {
      memcpy_0(v6, s_cameraman.keyRecordings[5].Keyframes, 44i64 * s_cameraman.keyRecordings[5].maxKeyframe);
      v6 += 44 * s_cameraman.keyRecordings[5].maxKeyframe;
      s_cameraman.keyRecordings[5].kfsAvailable = s_cameraman.keyRecordings[5].maxKeyframe;
    }
    if ( s_cameraman.keyRecordings[6].Keyframes )
    {
      memcpy_0(v6, s_cameraman.keyRecordings[6].Keyframes, 44i64 * s_cameraman.keyRecordings[6].maxKeyframe);
      v6 += 44 * s_cameraman.keyRecordings[6].maxKeyframe;
      s_cameraman.keyRecordings[6].kfsAvailable = s_cameraman.keyRecordings[6].maxKeyframe;
    }
    if ( s_cameraman.keyRecordings[7].Keyframes )
    {
      memcpy_0(v6, s_cameraman.keyRecordings[7].Keyframes, 44i64 * s_cameraman.keyRecordings[7].maxKeyframe);
      v6 += 44 * s_cameraman.keyRecordings[7].maxKeyframe;
      s_cameraman.keyRecordings[7].kfsAvailable = s_cameraman.keyRecordings[7].maxKeyframe;
    }
    if ( s_cameraman.keyRecordings[8].Keyframes )
    {
      memcpy_0(v6, s_cameraman.keyRecordings[8].Keyframes, 44i64 * s_cameraman.keyRecordings[8].maxKeyframe);
      v6 += 44 * s_cameraman.keyRecordings[8].maxKeyframe;
      s_cameraman.keyRecordings[8].kfsAvailable = s_cameraman.keyRecordings[8].maxKeyframe;
    }
    if ( s_cameraman.keyRecordings[9].Keyframes )
    {
      memcpy_0(v6, s_cameraman.keyRecordings[9].Keyframes, 44i64 * s_cameraman.keyRecordings[9].maxKeyframe);
      v6 += 44 * s_cameraman.keyRecordings[9].maxKeyframe;
      s_cameraman.keyRecordings[9].kfsAvailable = s_cameraman.keyRecordings[9].maxKeyframe;
    }
    if ( s_cameraman.keyRecordings[0].Keyframes && s_cameraman.keyRecordings[0].maxKeyframe )
      memcpy_0(v6, s_cameraman.keyRecordings[0].Keyframes, 44i64 * s_cameraman.keyRecordings[0].maxKeyframe);
    s_cameraman.keyRecordings[0].kfsAvailable = (v5 - v6 + 112640) / 44;
    if ( s_cameraman.keyRecordings[1].Keyframes )
    {
      s_cameraman.keyRecordings[1].Keyframes = (CameramanKeyframe *)&s_cameraman;
      memcpy_0(&s_cameraman, v5, 44i64 * s_cameraman.keyRecordings[1].maxKeyframe);
      v7 = 44i64 * s_cameraman.keyRecordings[1].maxKeyframe;
      v5 += v7;
      Keyframes = (Cameraman_t *)((char *)&s_cameraman + v7);
    }
    if ( s_cameraman.keyRecordings[2].Keyframes )
    {
      s_cameraman.keyRecordings[2].Keyframes = (CameramanKeyframe *)Keyframes;
      memcpy_0(Keyframes, v5, 44i64 * s_cameraman.keyRecordings[2].maxKeyframe);
      v8 = 44i64 * s_cameraman.keyRecordings[2].maxKeyframe;
      v5 += v8;
      Keyframes = (Cameraman_t *)((char *)Keyframes + v8);
    }
    if ( s_cameraman.keyRecordings[3].Keyframes )
    {
      s_cameraman.keyRecordings[3].Keyframes = (CameramanKeyframe *)Keyframes;
      memcpy_0(Keyframes, v5, 44i64 * s_cameraman.keyRecordings[3].maxKeyframe);
      v9 = 44i64 * s_cameraman.keyRecordings[3].maxKeyframe;
      v5 += v9;
      Keyframes = (Cameraman_t *)((char *)Keyframes + v9);
    }
    if ( s_cameraman.keyRecordings[4].Keyframes )
    {
      s_cameraman.keyRecordings[4].Keyframes = (CameramanKeyframe *)Keyframes;
      memcpy_0(Keyframes, v5, 44i64 * s_cameraman.keyRecordings[4].maxKeyframe);
      v10 = 44i64 * s_cameraman.keyRecordings[4].maxKeyframe;
      v5 += v10;
      Keyframes = (Cameraman_t *)((char *)Keyframes + v10);
    }
    if ( s_cameraman.keyRecordings[5].Keyframes )
    {
      s_cameraman.keyRecordings[5].Keyframes = (CameramanKeyframe *)Keyframes;
      memcpy_0(Keyframes, v5, 44i64 * s_cameraman.keyRecordings[5].maxKeyframe);
      v11 = 44i64 * s_cameraman.keyRecordings[5].maxKeyframe;
      v5 += v11;
      Keyframes = (Cameraman_t *)((char *)Keyframes + v11);
    }
    if ( s_cameraman.keyRecordings[6].Keyframes )
    {
      s_cameraman.keyRecordings[6].Keyframes = (CameramanKeyframe *)Keyframes;
      memcpy_0(Keyframes, v5, 44i64 * s_cameraman.keyRecordings[6].maxKeyframe);
      v12 = 44i64 * s_cameraman.keyRecordings[6].maxKeyframe;
      v5 += v12;
      Keyframes = (Cameraman_t *)((char *)Keyframes + v12);
    }
    if ( s_cameraman.keyRecordings[7].Keyframes )
    {
      s_cameraman.keyRecordings[7].Keyframes = (CameramanKeyframe *)Keyframes;
      memcpy_0(Keyframes, v5, 44i64 * s_cameraman.keyRecordings[7].maxKeyframe);
      v13 = 44i64 * s_cameraman.keyRecordings[7].maxKeyframe;
      v5 += v13;
      Keyframes = (Cameraman_t *)((char *)Keyframes + v13);
    }
    if ( s_cameraman.keyRecordings[8].Keyframes )
    {
      s_cameraman.keyRecordings[8].Keyframes = (CameramanKeyframe *)Keyframes;
      memcpy_0(Keyframes, v5, 44i64 * s_cameraman.keyRecordings[8].maxKeyframe);
      v14 = 44i64 * s_cameraman.keyRecordings[8].maxKeyframe;
      v5 += v14;
      Keyframes = (Cameraman_t *)((char *)Keyframes + v14);
    }
    if ( s_cameraman.keyRecordings[9].Keyframes )
    {
      s_cameraman.keyRecordings[9].Keyframes = (CameramanKeyframe *)Keyframes;
      memcpy_0(Keyframes, v5, 44i64 * s_cameraman.keyRecordings[9].maxKeyframe);
      v15 = 44i64 * s_cameraman.keyRecordings[9].maxKeyframe;
      v5 += v15;
      Keyframes = (Cameraman_t *)((char *)Keyframes + v15);
    }
    s_cameraman.keyRecordings[0].Keyframes = (CameramanKeyframe *)Keyframes;
    if ( s_cameraman.keyRecordings[0].maxKeyframe )
    {
      memcpy_0(Keyframes, v5, 44i64 * s_cameraman.keyRecordings[0].maxKeyframe);
      Keyframes = (Cameraman_t *)s_cameraman.keyRecordings[0].Keyframes;
    }
    s_cameraman.currentRecording = 0;
    s_cameraman.kf = s_cameraman.keyRecordings;
    if ( s_cameraman.keyRecordings[0].maxKeyframe > 0 )
    {
      s_cameraman.currentFrame = Keyframes->KeyframeHeap[s_cameraman.keyRecordings[0].curKeyframe].frame;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm6, xmm0, cs:__real@3c888889
        vmovss  cs:s_cameraman.currentTime, xmm6
        vmovaps xmm1, xmm6; t
      }
      CL_Cameraman_GetValuesAtTimeKf(s_cameraman.keyRecordings[0].curKeyframe, *(double *)&_XMM1, &s_cameraman.cam->origin, &s_cameraman.cam->angles, &s_cameraman.cam->fov, &demo_scale);
      __asm
      {
        vmulss  xmm0, xmm6, cs:__real@42700000
        vcvttss2si eax, xmm0
      }
      s_cameraman.currentFrame = _EAX;
      __asm { vmovss  cs:s_cameraman.currentTime, xmm6 }
      _RAX = s_cameraman.cam;
      __asm { vmovss  xmm1, dword ptr [rax+18h]; value }
      Dvar_SetFloat_Internal(DVARFLT_cameraman_fov, *(float *)&_XMM1);
      __asm { vmovss  xmm1, [rsp+0B8h+var_88]; value }
      Dvar_SetFloat_Internal(DVARFLT_cameraman_demoscale, *(float *)&_XMM1);
      __asm { vmovss  xmm1, cs:s_cameraman.currentTime; value }
      Dvar_SetFloat_Internal(DVARFLT_cameraman_time, *(float *)&_XMM1);
    }
    Mem_LargeLocal::~Mem_LargeLocal((Mem_LargeLocal *)&v32);
    p_secondAngles = &s_bone2Camera[0].secondAngles;
    v27 = 5i64;
    do
    {
      AnglesToAxis(p_secondAngles - 1, &v32);
      AnglesToAxis(p_secondAngles, &axis);
      MatrixMultiply(&axis, &v32, (tmat33_t<vec3_t> *)&p_secondAngles[2]);
      p_secondAngles = (vec3_t *)((char *)p_secondAngles + 88);
      --v27;
    }
    while ( v27 );
    s_cameraman.cameraman_focus = 1;
  }
  s_cameraman.entFocus[0].cent = NULL;
  s_cameraman.entFocus[1].cent = NULL;
  s_cameraman.entFocus[2].cent = NULL;
  s_cameraman.entFocus[3].cent = NULL;
  s_cameraman.entFocus[4].cent = NULL;
  s_cameraman.entFocus[5].cent = NULL;
  s_cameraman.entFocus[6].cent = NULL;
  s_cameraman.entFocus[7].cent = NULL;
  s_cameraman.entFocus[8].cent = NULL;
  s_cameraman.delayEnable = 10;
  _R11 = &v34;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
CL_Cameraman_InitDevGuiMenu
==============
*/
void CL_Cameraman_InitDevGuiMenu(void)
{
  DevGui_AddCommand("Cameraman/Toggle Camera", "togglep cameraman_enabled ");
  DevGui_AddCommand("Cameraman/Add 1 sec to time", "cameraman_addTime 1");
  DevGui_AddCommand("Cameraman/Start Playback", "cameraman_playback");
  DevGui_AddCommand("Cameraman/Start Stop", "cameraman_stop");
  DevGui_AddCommand("Cameraman/Replay", "cameraman_replay");
}

/*
==============
CL_Cameraman_InitFocusEnt
==============
*/
void CL_Cameraman_InitFocusEnt(LocalClientNum_t localClientNum, const centity_t *cent, int focus_idx, bool init, bool notEnt)
{
  int v10; 
  entityType_s eType; 
  CameraJoints_e v12; 
  CameraJoints_e joint2Set; 
  bool v14; 
  CameraJoints_e v15; 
  __int64 v16; 
  entFocus_t *EntFocus; 
  entityType_s v21; 
  float v26; 
  float v27; 
  float v28; 
  Camera_t cam; 

  __asm { vmovaps [rsp+0A8h+var_48], xmm6 }
  v10 = 655398;
  if ( !cent || !Com_GetClientDObj(cent->nextState.number, localClientNum) )
    goto LABEL_13;
  eType = cent->nextState.eType;
  if ( eType == ET_VEHICLE )
  {
    v12 = CJ_VEHICLE;
LABEL_14:
    s_cameraman.joint2Set = v12;
    goto LABEL_15;
  }
  if ( (cent->flags & 1) == 0 || (unsigned __int16)eType > ET_ACTOR || !_bittest(&v10, eType) )
  {
LABEL_13:
    v12 = CJ_ROOT;
    goto LABEL_14;
  }
  joint2Set = s_cameraman.joint2Set;
  v14 = s_cameraman.joint2Set <= (unsigned int)CJ_FLASH;
  v15 = s_cameraman.joint2Set;
  if ( s_cameraman.joint2Set > (unsigned int)CJ_FLASH )
    v15 = CJ_HEAD;
  s_cameraman.joint2Set = v15;
  v12 = CJ_HEAD;
  if ( v14 )
    v12 = joint2Set;
LABEL_15:
  v16 = v12;
  EntFocus = CL_Cameraman_GetEntFocus(focus_idx);
  _RBX = EntFocus;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( init || !EntFocus->initd )
  {
    EntFocus->cam.origin.v[0] = s_bone2Camera[v16].initOrigin.v[0];
    EntFocus->cam.origin.v[1] = s_bone2Camera[v16].initOrigin.v[1];
    EntFocus->cam.origin.v[2] = s_bone2Camera[v16].initOrigin.v[2];
    *(_QWORD *)EntFocus->cam.angles.v = 0i64;
    EntFocus->cam.angles.v[2] = 0.0;
    __asm
    {
      vmovss  xmm0, cs:s_cameraman.main_cam.fov
      vmovss  dword ptr [rbx+18h], xmm0
    }
    EntFocus->camJoint = s_cameraman.joint2Set;
    EntFocus->notEnt = notEnt;
    EntFocus->initd = 1;
    EntFocus->cent = NULL;
    s_cameraman.filterInited = 0;
    if ( notEnt )
    {
      __asm { vmovss  [rsp+0A8h+var_88], xmm6 }
      CL_Cameraman_GetCamera(localClientNum, &EntFocus->cam, NULL, 0, v26);
    }
  }
  __asm { vmovss  [rsp+0A8h+var_88], xmm6 }
  CL_Cameraman_GetCamera(localClientNum, &s_cameraman.alt_cam, NULL, 0, v27);
  s_cameraman.focus_cent = cent;
  if ( cent )
  {
    _RBX->cent = cent;
    if ( init )
    {
      if ( (cent->flags & 1) == 0 || (v21 = cent->nextState.eType, (unsigned __int16)v21 > ET_ACTOR) || !_bittest(&v10, v21) )
      {
        if ( s_cameraman.joint2Set == CJ_ROOT )
        {
          *(_QWORD *)_RBX->cam.origin.v = 1128792064i64;
          *(_QWORD *)&_RBX->cam.origin.z = 0i64;
          *(_QWORD *)&_RBX->cam.angles.y = 0i64;
        }
      }
    }
  }
  else
  {
    _RBX->cent = NULL;
  }
  s_cameraman.focus_idx = focus_idx;
  s_cameraman.cam = &_RBX->cam;
  __asm { vmovss  [rsp+0A8h+var_88], xmm6 }
  CL_Cameraman_GetCamera(localClientNum, &cam, NULL, 0, v28);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+0A8h+cam.origin]
    vmovss  xmm1, dword ptr [rsp+0A8h+cam.angles+8]
    vmovups xmmword ptr cs:s_cameraman.prev_cam_pos, xmm0
    vmovss  xmm0, dword ptr [rsp+0A8h+cam.angles+4]
    vmovss  dword ptr cs:s_cameraman.prev_cam_angles+4, xmm0
    vmovss  dword ptr cs:s_cameraman.prev_cam_angles+8, xmm1
  }
  if ( s_cameraman.lerpMode )
  {
    __asm { vmovss  cs:s_cameraman.lerpSpeed, xmm6 }
    s_cameraman.lerpSmooth = 1;
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_48] }
}

/*
==============
CL_Cameraman_IsDemoActive
==============
*/

bool __fastcall CL_Cameraman_IsDemoActive()
{
  return SV_IsDemoPlaying();
}

/*
==============
CL_Cameraman_IsHumanJointSet
==============
*/
bool CL_Cameraman_IsHumanJointSet(CameraJoints_e joint)
{
  return (unsigned int)joint <= CJ_FLASH;
}

/*
==============
CL_Cameraman_NextKeyframe
==============
*/

void __fastcall CL_Cameraman_NextKeyframe(double _XMM0_8)
{
  CameramanRecording_t *kf; 
  int maxKeyframe; 
  float demo_scale; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  ++s_cameraman.kf->curKeyframe;
  kf = s_cameraman.kf;
  maxKeyframe = s_cameraman.kf->maxKeyframe;
  if ( s_cameraman.kf->curKeyframe >= maxKeyframe )
  {
    s_cameraman.kf->curKeyframe = maxKeyframe - 1;
    kf = s_cameraman.kf;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdx+rax]
    vmulss  xmm6, xmm0, cs:__real@3c888889
    vmovaps xmm1, xmm6; t
  }
  CL_Cameraman_GetValuesAtTimeKf(kf->curKeyframe, *(double *)&_XMM1, &s_cameraman.cam->origin, &s_cameraman.cam->angles, &s_cameraman.cam->fov, &demo_scale);
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@42700000
    vcvttss2si eax, xmm0
  }
  s_cameraman.currentFrame = _EAX;
  _RAX = s_cameraman.cam;
  __asm
  {
    vmovss  cs:s_cameraman.currentTime, xmm6
    vmovss  xmm1, dword ptr [rax+18h]; value
  }
  Dvar_SetFloat_Internal(DVARFLT_cameraman_fov, *(float *)&_XMM1);
  __asm { vmovss  xmm1, [rsp+48h+arg_0]; value }
  Dvar_SetFloat_Internal(DVARFLT_cameraman_demoscale, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:s_cameraman.currentTime; value
    vmovaps xmm6, [rsp+48h+var_18]
  }
  Dvar_SetFloat_Internal(DVARFLT_cameraman_time, *(float *)&_XMM1);
}

/*
==============
CL_Cameraman_Play
==============
*/
void CL_Cameraman_Play(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( s_cameraman.kf->maxKeyframe > 0 )
  {
    CL_Cameraman_fixup(a1, a2, a3, a4);
    s_cameraman.cameraman_playing = 1;
    if ( s_cameraman.fullPlayback || s_cameraman.pausedFullPlayback )
    {
      __asm { vmovss  xmm1, cs:__real@3f800000; value }
      Dvar_SetFloat_Internal(DVARFLT_replay_speed, *(float *)&_XMM1);
      s_cameraman.pausedFullPlayback = 0;
    }
  }
}

/*
==============
CL_Cameraman_Playback
==============
*/
void CL_Cameraman_Playback(_BOOL8 play, __int64 reset, __int64 a3, __int64 a4)
{
  char v5; 
  bool v6; 
  bool fullPlayback; 

  v5 = reset;
  v6 = play;
  if ( s_cameraman.kf->maxKeyframe > 0 )
  {
    CL_Cameraman_fixup(play, reset, a3, a4);
    if ( v5 )
      CL_Cameraman_SetToStart();
    s_cameraman.cameraman_playing = v6;
    if ( s_cameraman.fullPlayback || s_cameraman.pausedFullPlayback )
    {
      if ( v6 )
      {
        __asm { vmovss  xmm1, cs:__real@3f800000; value }
        Dvar_SetFloat_Internal(DVARFLT_replay_speed, *(float *)&_XMM1);
        s_cameraman.pausedFullPlayback = 0;
      }
      else
      {
        __asm { vxorps  xmm1, xmm1, xmm1; value }
        Dvar_SetFloat_Internal(DVARFLT_replay_speed, *(float *)&_XMM1);
        fullPlayback = s_cameraman.fullPlayback;
        s_cameraman.pausedFullPlayback = 1;
        if ( v5 )
          fullPlayback = 0;
        s_cameraman.fullPlayback = fullPlayback;
      }
    }
  }
}

/*
==============
CL_Cameraman_PrevKeyframe
==============
*/

void __fastcall CL_Cameraman_PrevKeyframe(double _XMM0_8)
{
  CameramanRecording_t *kf; 
  float demo_scale; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  --s_cameraman.kf->curKeyframe;
  kf = s_cameraman.kf;
  if ( s_cameraman.kf->curKeyframe < 0 )
  {
    s_cameraman.kf->curKeyframe = 0;
    kf = s_cameraman.kf;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdx+rax]
    vmulss  xmm6, xmm0, cs:__real@3c888889
    vmovaps xmm1, xmm6; t
  }
  CL_Cameraman_GetValuesAtTimeKf(kf->curKeyframe, *(double *)&_XMM1, &s_cameraman.cam->origin, &s_cameraman.cam->angles, &s_cameraman.cam->fov, &demo_scale);
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@42700000
    vcvttss2si eax, xmm0
  }
  s_cameraman.currentFrame = _EAX;
  _RAX = s_cameraman.cam;
  __asm
  {
    vmovss  cs:s_cameraman.currentTime, xmm6
    vmovss  xmm1, dword ptr [rax+18h]; value
  }
  Dvar_SetFloat_Internal(DVARFLT_cameraman_fov, *(float *)&_XMM1);
  __asm { vmovss  xmm1, [rsp+48h+arg_0]; value }
  Dvar_SetFloat_Internal(DVARFLT_cameraman_demoscale, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, cs:s_cameraman.currentTime; value
    vmovaps xmm6, [rsp+48h+var_18]
  }
  Dvar_SetFloat_Internal(DVARFLT_cameraman_time, *(float *)&_XMM1);
}

/*
==============
CL_Cameraman_RegisterCommands
==============
*/
void CL_Cameraman_RegisterCommands(void)
{
  Cmd_AddCommandInternal("camerman_play", (void (__fastcall *)())CL_Cameraman_Play, &CL_Cameraman_Play_VAR);
  Cmd_AddCommandInternal("cameraman_stop", CL_Cameraman_Stop, &CL_Cameraman_Stop_VAR);
  Cmd_AddCommandInternal("cameraman_replay", CL_Cameraman_Replay, &CL_Cameraman_Replay_VAR);
  Cmd_AddCommandInternal("cameraman_addTime", CL_Cameraman_addTime, &CL_Cameraman_addTime_VAR);
}

/*
==============
CL_Cameraman_ReplaceKeyframe
==============
*/
void CL_Cameraman_ReplaceKeyframe(int k)
{
  __int64 v2; 
  int v4; 
  const dvar_t *v9; 
  ClActiveClient *Client; 

  _RBX = DVARFLT_cameraman_time;
  v2 = k;
  if ( !DVARFLT_cameraman_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  v4 = 0;
  __asm { vmulss  xmm1, xmm0, cs:__real@42700000 }
  _RBX = v2;
  _RDI = s_cameraman.kf->Keyframes;
  __asm { vcvttss2si ebp, xmm1 }
  _RDI[_RBX].frame = _EBP;
  _RDI[_RBX].origin = s_cameraman.cam->origin;
  _RDI[_RBX].angles = s_cameraman.cam->angles;
  _RDI[_RBX].flags = 0;
  v9 = DVARFLT_cameraman_fov;
  if ( !DVARFLT_cameraman_fov && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_fov") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  LODWORD(_RDI[_RBX].fov) = v9->current.integer;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebp
    vmulss  xmm1, xmm0, cs:__real@3c888889
    vmovss  cs:s_cameraman.currentTime, xmm1
  }
  s_cameraman.currentFrame = _EBP;
  s_cameraman.kf->curKeyframe = v2;
  if ( SV_IsDemoPlaying() )
  {
    if ( SV_IsDemoPlaying() )
      __asm { vxorps  xmm0, xmm0, xmm0 }
    else
      *(double *)&_XMM0 = SV_Demo_GetTimeScale();
    __asm { vmovss  dword ptr [rbx+rdi+4], xmm0 }
    if ( !clientUIActives[0].frontEndSceneState[0] && clientUIActives[0].cgameInitialized )
    {
      Client = ClActiveClient::GetClient(LOCAL_CLIENT_0);
      v4 = Client->GetServerTime(Client);
    }
    _RDI[_RBX].demo_time = v4;
  }
  else
  {
    _RDI[_RBX].demo_scale = 1.0;
    __asm
    {
      vmovss  xmm0, cs:s_cameraman.currentTime
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si eax, xmm1
    }
    _RDI[_RBX].demo_time = _EAX;
  }
}

/*
==============
CL_Cameraman_Replay
==============
*/
void CL_Cameraman_Replay(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( s_cameraman.kf->maxKeyframe > 0 )
  {
    CL_Cameraman_fixup(a1, a2, a3, a4);
    CL_Cameraman_SetToStart();
    s_cameraman.cameraman_playing = 1;
    if ( s_cameraman.fullPlayback || s_cameraman.pausedFullPlayback )
    {
      __asm { vmovss  xmm1, cs:__real@3f800000; value }
      Dvar_SetFloat_Internal(DVARFLT_replay_speed, *(float *)&_XMM1);
      s_cameraman.pausedFullPlayback = 0;
    }
  }
}

/*
==============
CL_Cameraman_SetToStart
==============
*/

void __fastcall CL_Cameraman_SetToStart(double _XMM0_8)
{
  float demo_scale; 

  if ( s_cameraman.kf->maxKeyframe > 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovaps [rsp+48h+var_18], xmm6
      vcvtsi2ss xmm0, xmm0, ecx
      vmulss  xmm1, xmm0, cs:__real@3c888889; value
    }
    s_cameraman.currentFrame = s_cameraman.kf->Keyframes->frame;
    __asm { vmovss  cs:s_cameraman.currentTime, xmm1 }
    s_cameraman.currentDemoTime = s_cameraman.kf->Keyframes->demo_time;
    Dvar_SetFloat_Internal(DVARFLT_cameraman_time, *(float *)&_XMM1);
    __asm
    {
      vmovss  xmm6, cs:s_cameraman.currentTime
      vmovaps xmm1, xmm6; t
    }
    CL_Cameraman_GetValuesAtTimeKf(0, *(double *)&_XMM1, &s_cameraman.cam->origin, &s_cameraman.cam->angles, &s_cameraman.cam->fov, &demo_scale);
    __asm
    {
      vmulss  xmm0, xmm6, cs:__real@42700000
      vcvttss2si eax, xmm0
    }
    s_cameraman.currentFrame = _EAX;
    _RAX = s_cameraman.cam;
    __asm
    {
      vmovss  cs:s_cameraman.currentTime, xmm6
      vmovss  xmm1, dword ptr [rax+18h]; value
    }
    Dvar_SetFloat_Internal(DVARFLT_cameraman_fov, *(float *)&_XMM1);
    __asm { vmovss  xmm1, [rsp+48h+arg_0]; value }
    Dvar_SetFloat_Internal(DVARFLT_cameraman_demoscale, *(float *)&_XMM1);
    __asm { vmovss  xmm1, cs:s_cameraman.currentTime; value }
    Dvar_SetFloat_Internal(DVARFLT_cameraman_time, *(float *)&_XMM1);
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
  }
}

/*
==============
CL_Cameraman_SmoothKeyframe
==============
*/

void __fastcall CL_Cameraman_SmoothKeyframe(double t, vec3_t *origin, vec3_t *angles, float *fov, float *demo_scale)
{
  int v12; 
  __int64 maxKeyframe; 
  int v20; 
  CameramanKeyframe *Keyframes; 
  __int64 i; 
  int v29; 
  int v31; 
  __int64 v34; 
  CameramanKeyframe *v35; 
  __int64 j; 
  float v83; 
  float v84; 
  float v85; 
  float v86; 
  vec3_t origina; 
  vec3_t v88; 
  vec3_t anglesa; 
  vec3_t v90; 
  char v91; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  _RAX = cameraman_smooth_lookahead;
  v12 = 0;
  _RSI = angles;
  __asm { vmovss  xmm6, cs:__real@42700000 }
  _R15 = demo_scale;
  _RDI = origin;
  __asm { vmovss  xmm8, dword ptr [rax+28h] }
  _R14 = fov;
  maxKeyframe = s_cameraman.kf->maxKeyframe;
  v20 = 0;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovaps xmm9, xmm0
    vsubss  xmm2, xmm0, dword ptr [rax+28h]
    vmaxss  xmm7, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm6
    vcvttss2si r8d, xmm0
  }
  if ( (int)maxKeyframe > 0 )
  {
    Keyframes = s_cameraman.kf->Keyframes;
    for ( i = 0i64; i < maxKeyframe; ++i )
    {
      if ( Keyframes->frame > _ER8 )
      {
        if ( v20 )
          v29 = v20 - 1;
        else
          v29 = 0;
        goto LABEL_8;
      }
      ++v20;
      ++Keyframes;
    }
    if ( (int)maxKeyframe > 0 )
    {
      v29 = maxKeyframe - 1;
      if ( s_cameraman.kf->Keyframes[maxKeyframe - 1].frame == _ER8 )
        goto LABEL_8;
    }
  }
  v29 = s_cameraman.kf->maxKeyframe;
LABEL_8:
  __asm { vmovaps xmm1, xmm7; t }
  CL_Cameraman_GetValuesAtTimeKf(v29, *(double *)&_XMM1, &origina, &anglesa, &v83, &v85);
  v31 = 0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vaddss  xmm1, xmm8, xmm9
  }
  v34 = s_cameraman.kf->maxKeyframe;
  v35 = s_cameraman.kf->Keyframes;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, r11d
    vmulss  xmm2, xmm0, cs:__real@3c888889
    vminss  xmm8, xmm2, xmm1
    vmulss  xmm0, xmm8, xmm6
    vcvttss2si r9d, xmm0
  }
  if ( (int)v34 > 0 )
  {
    for ( j = 0i64; j < v34; ++j )
    {
      if ( v35->frame > _ER9 )
      {
        if ( v31 )
          v12 = v31 - 1;
        goto LABEL_15;
      }
      ++v31;
      ++v35;
    }
    if ( (int)v34 > 0 )
    {
      v12 = v34 - 1;
      if ( s_cameraman.kf->Keyframes[v34 - 1].frame == _ER9 )
        goto LABEL_15;
    }
  }
  v12 = s_cameraman.kf->maxKeyframe;
LABEL_15:
  __asm { vmovaps xmm1, xmm8; t }
  CL_Cameraman_GetValuesAtTimeKf(v12, *(double *)&_XMM1, &v88, &v90, &v84, &v86);
  __asm
  {
    vsubss  xmm1, xmm9, xmm7
    vsubss  xmm0, xmm8, xmm7
    vdivss  xmm6, xmm1, xmm0
    vmovss  xmm1, dword ptr [rbp+4Fh+var_A0]
    vsubss  xmm0, xmm1, dword ptr [rbp+4Fh+origin]
    vmulss  xmm2, xmm0, xmm6
    vaddss  xmm3, xmm2, dword ptr [rbp+4Fh+origin]
    vmovss  xmm0, dword ptr [rbp+4Fh+var_A0+4]
    vsubss  xmm1, xmm0, dword ptr [rbp+4Fh+origin+4]
    vmovss  xmm0, dword ptr [rbp+4Fh+var_A0+8]
    vmovss  dword ptr [rdi], xmm3
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rbp+4Fh+origin+4]
    vsubss  xmm1, xmm0, dword ptr [rbp+4Fh+origin+8]
    vmovss  xmm0, dword ptr [rbp+4Fh+var_80]
    vmovss  dword ptr [rdi+4], xmm3
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rbp+4Fh+origin+8]
    vsubss  xmm1, xmm0, dword ptr [rbp+4Fh+angles]
    vmovss  xmm0, dword ptr [rbp+4Fh+var_80+4]
    vmovss  dword ptr [rdi+8], xmm3
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rbp+4Fh+angles]
    vsubss  xmm1, xmm0, dword ptr [rbp+4Fh+angles+4]
    vmovss  xmm0, dword ptr [rbp+4Fh+var_80+8]
    vmovss  dword ptr [rsi], xmm3
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rbp+4Fh+angles+4]
    vsubss  xmm1, xmm0, dword ptr [rbp+4Fh+angles+8]
    vmovss  xmm0, [rbp+4Fh+var_BC]
    vmovss  dword ptr [rsi+4], xmm3
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rbp+4Fh+angles+8]
    vsubss  xmm1, xmm0, [rbp+4Fh+var_C0]
    vmovss  xmm0, [rbp+4Fh+var_B4]
    vmovss  dword ptr [rsi+8], xmm3
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, [rbp+4Fh+var_C0]
    vsubss  xmm1, xmm0, [rbp+4Fh+var_B8]
    vmovss  dword ptr [r14], xmm3
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, [rbp+4Fh+var_B8]
    vmovss  dword ptr [r15], xmm3
  }
  _R11 = &v91;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
CL_Cameraman_SteadyCam
==============
*/

void __fastcall CL_Cameraman_SteadyCam(double dT, const vec3_t *startOrigin, const vec3_t *startAngles, const vec3_t *targetOrigin, const vec3_t *targetAngles, vec3_t *outOrigin, vec3_t *outAngles)
{
  const vec3_t *v52; 
  float v123; 
  float v124; 
  float v125; 
  float v126; 
  float v127; 
  float v128; 
  float v129; 
  float v130; 
  vec4_t to; 
  vec4_t quat; 
  vec4_t result; 
  tmat33_t<vec3_t> axis; 
  char v140; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm10
    vmovaps xmmword ptr [rax-58h], xmm11
    vmovaps xmmword ptr [rax-68h], xmm12
    vmovaps xmmword ptr [rax-78h], xmm13
    vmaxss  xmm2, xmm0, cs:__real@3c888889
  }
  if ( s_cameraman.steadyTwoAxis )
  {
    __asm
    {
      vmovss  xmm4, cs:__real@426fffff
      vmovss  xmm1, dword ptr [r9]
      vmovaps [rsp+128h+var_88], xmm14
      vsubss  xmm14, xmm1, dword ptr [rdx]
      vmulss  xmm0, xmm4, dword ptr [rcx+28h]
      vmovss  xmm1, dword ptr [r9+8]
      vsubss  xmm7, xmm1, dword ptr [rdx+8]
      vmovss  [rsp+128h+var_F4], xmm0
      vmovss  xmm0, dword ptr [r9+4]
      vsubss  xmm10, xmm0, dword ptr [rdx+4]
      vmulss  xmm13, xmm4, dword ptr [rcx+28h]
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm3, xmm0, xmm2
      vmulss  xmm1, xmm10, xmm10
      vmulss  xmm11, xmm4, dword ptr [rcx+28h]
      vmulss  xmm0, xmm14, xmm14
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vmulss  xmm8, xmm4, dword ptr [rcx+28h]
      vmulss  xmm6, xmm2, xmm3
      vmovss  [rsp+128h+var_F8], xmm3
      vmovss  [rsp+128h+var_100], xmm6
      vmulss  xmm5, xmm4, dword ptr [rcx+28h]
      vmovss  [rsp+128h+var_108], xmm5
      vmulss  xmm3, xmm4, dword ptr [rcx+28h]; dampingMax2
      vmulss  xmm2, xmm4, dword ptr [rcx+28h]; dampingMin2
    }
    _RCX = cameraman_dampingHMinVel;
    __asm { vmovss  xmm4, dword ptr [rcx+28h] }
    _RCX = cameraman_dampingHFrac;
    __asm
    {
      vmulss  xmm1, xmm4, cs:__real@426fffff; dampingMin
      vmovss  xmm0, dword ptr [rcx+28h]; dampingFrac
    }
    *(float *)&_XMM0 = CL_Cameraman_DampingFraction(*(double *)&_XMM0, *(double *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3, v123, v127);
    __asm
    {
      vandps  xmm4, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmulss  xmm4, xmm4, [rsp+128h+var_F8]
      vmovss  xmm1, [rsp+128h+var_F4]; dampingMin
      vmovaps xmm6, xmm0
      vmovss  xmm0, dword ptr [rax+28h]; dampingFrac
      vmovss  [rsp+128h+var_100], xmm4
      vmovaps xmm3, xmm11; dampingMax2
      vmovaps xmm2, xmm13; dampingMin2
      vmovss  [rsp+128h+var_108], xmm8
    }
    *(float *)&_XMM0 = CL_Cameraman_DampingFraction(*(double *)&_XMM0, *(double *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3, v124, v128);
    __asm
    {
      vmovss  xmm12, cs:__real@426fffff
      vmovss  xmm13, cs:__real@3f800000
      vmulss  xmm1, xmm0, xmm7
      vmulss  xmm0, xmm6, xmm14
      vmovaps xmm14, [rsp+128h+var_88]
      vmulss  xmm2, xmm6, xmm10
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm12, cs:__real@426fffff
      vmovss  xmm1, dword ptr [r9+4]
      vsubss  xmm8, xmm1, dword ptr [rdx+4]
      vmovss  xmm0, dword ptr [r9]
      vsubss  xmm10, xmm0, dword ptr [rdx]
      vmovss  xmm0, dword ptr [r9+8]
      vsubss  xmm6, xmm0, dword ptr [rdx+8]
      vmovss  xmm13, cs:__real@3f800000
      vdivss  xmm3, xmm13, xmm2
      vmulss  xmm1, xmm8, xmm8
      vmulss  xmm4, xmm12, dword ptr [rax+28h]
      vmulss  xmm0, xmm10, xmm10
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vmulss  xmm5, xmm0, xmm3
      vmovss  [rsp+128h+var_F8], xmm3
      vmulss  xmm3, xmm12, dword ptr [rax+28h]; dampingMax2
      vmovss  [rsp+128h+var_100], xmm5
      vmovss  [rsp+128h+var_108], xmm4
      vmulss  xmm2, xmm12, dword ptr [rax+28h]; dampingMin2
      vmulss  xmm1, xmm12, dword ptr [rax+28h]; dampingMin
    }
    _RAX = cameraman_dampingFrac;
    __asm { vmovss  xmm0, dword ptr [rax+28h]; dampingFrac }
    *(float *)&_XMM0 = CL_Cameraman_DampingFraction(*(double *)&_XMM0, *(double *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3, v125, v129);
    __asm
    {
      vmulss  xmm1, xmm0, xmm6
      vmulss  xmm2, xmm0, xmm8
      vmulss  xmm0, xmm0, xmm10
    }
  }
  __asm
  {
    vaddss  xmm3, xmm1, dword ptr [rdx+8]
    vaddss  xmm1, xmm0, dword ptr [rdx]
    vaddss  xmm4, xmm2, dword ptr [rdx+4]
    vmovss  dword ptr [r8], xmm1
    vmovss  dword ptr [r8+4], xmm4
    vmovss  dword ptr [r8+8], xmm3
  }
  AnglesToQuat(v52, &quat);
  AnglesToQuat(targetAngles, &to);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+128h+quat+4]
    vmulss  xmm4, xmm0, dword ptr [rsp+128h+to+4]
    vmovss  xmm1, dword ptr [rsp+128h+quat]
    vmulss  xmm3, xmm1, dword ptr [rsp+128h+to]
    vmovss  xmm0, dword ptr [rsp+128h+quat+8]
    vmulss  xmm1, xmm0, dword ptr [rsp+128h+to+8]
    vaddss  xmm5, xmm4, xmm3
    vmovss  xmm3, dword ptr [rsp+128h+quat+0Ch]
    vmulss  xmm0, xmm3, dword ptr [rsp+128h+to+0Ch]
    vaddss  xmm4, xmm5, xmm1
    vaddss  xmm4, xmm4, xmm0
    vmulss  xmm1, xmm4, cs:__real@40000000
    vmulss  xmm3, xmm1, xmm4
    vmovss  xmm1, cs:__real@bf800000; min
    vsubss  xmm0, xmm3, xmm13; val
    vmovaps xmm2, xmm13; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm3, xmm0, cs:__real@42652ee0
    vsubss  xmm2, xmm3, cs:__real@43b40000
    vmovss  xmm0, cs:__real@43340000
    vcmpltss xmm1, xmm0, xmm3
    vblendvps xmm4, xmm3, xmm2, xmm1
    vaddss  xmm1, xmm4, cs:__real@43b40000
    vcmpltss xmm0, xmm4, cs:__real@c3340000
    vblendvps xmm1, xmm4, xmm1, xmm0
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm5, xmm1, [rsp+128h+var_F8]
    vmovss  [rsp+128h+var_F4], xmm4
    vmulss  xmm4, xmm12, dword ptr [rax+28h]
    vmovss  [rsp+128h+var_100], xmm5
    vmovss  [rsp+128h+var_108], xmm4
    vmulss  xmm3, xmm12, dword ptr [rax+28h]; dampingMax2
    vmulss  xmm2, xmm12, dword ptr [rax+28h]; dampingMin2
    vmulss  xmm1, xmm12, dword ptr [rax+28h]; dampingMin
  }
  _RAX = cameraman_dampingAFrac;
  __asm { vmovss  xmm0, dword ptr [rax+28h]; dampingFrac }
  *(float *)&_XMM0 = CL_Cameraman_DampingFraction(*(double *)&_XMM0, *(double *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3, v126, v130);
  __asm { vmovaps xmm2, xmm0; frac }
  QuatSlerp(&quat, &to, *(float *)&_XMM2, &result);
  QuatToAxis(&result, &axis);
  AxisToAngles(&axis, outAngles);
  _R11 = &v140;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
    vmovaps xmm13, xmmword ptr [r11-70h]
  }
}

/*
==============
CL_Cameraman_Stop
==============
*/
void CL_Cameraman_Stop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( s_cameraman.kf->maxKeyframe > 0 )
  {
    CL_Cameraman_fixup(a1, a2, a3, a4);
    s_cameraman.cameraman_playing = 0;
    if ( s_cameraman.fullPlayback || s_cameraman.pausedFullPlayback )
    {
      __asm { vxorps  xmm1, xmm1, xmm1; value }
      Dvar_SetFloat_Internal(DVARFLT_replay_speed, *(float *)&_XMM1);
      s_cameraman.pausedFullPlayback = 1;
    }
  }
}

/*
==============
CL_Cameraman_Switch_Recordings
==============
*/
void CL_Cameraman_Switch_Recordings(int newRecording)
{
  __int64 v4; 
  _BYTE *m_ptr; 
  char *v6; 
  CameramanKeyframe *Keyframes; 
  __int64 maxKeyframe; 
  Cameraman_t *v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  Mem_LargeLocal Src; 
  void *retaddr; 
  float demo_scale; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  v4 = newRecording;
  Mem_LargeLocal::Mem_LargeLocal(&Src, 0x1B800ui64, "KeyframeHeap_t tempHeap");
  m_ptr = Src.m_ptr;
  v6 = (char *)Src.m_ptr;
  if ( (_DWORD)v4 && s_cameraman.keyRecordings[0].Keyframes )
  {
    memcpy_0(Src.m_ptr, s_cameraman.keyRecordings[0].Keyframes, 44i64 * s_cameraman.keyRecordings[0].maxKeyframe);
    v6 = &m_ptr[44 * s_cameraman.keyRecordings[0].maxKeyframe];
    s_cameraman.keyRecordings[0].kfsAvailable = s_cameraman.keyRecordings[0].maxKeyframe;
  }
  if ( (_DWORD)v4 != 1 && s_cameraman.keyRecordings[1].Keyframes )
  {
    memcpy_0(v6, s_cameraman.keyRecordings[1].Keyframes, 44i64 * s_cameraman.keyRecordings[1].maxKeyframe);
    v6 += 44 * s_cameraman.keyRecordings[1].maxKeyframe;
    s_cameraman.keyRecordings[1].kfsAvailable = s_cameraman.keyRecordings[1].maxKeyframe;
  }
  if ( (_DWORD)v4 != 2 && s_cameraman.keyRecordings[2].Keyframes )
  {
    memcpy_0(v6, s_cameraman.keyRecordings[2].Keyframes, 44i64 * s_cameraman.keyRecordings[2].maxKeyframe);
    v6 += 44 * s_cameraman.keyRecordings[2].maxKeyframe;
    s_cameraman.keyRecordings[2].kfsAvailable = s_cameraman.keyRecordings[2].maxKeyframe;
  }
  if ( (_DWORD)v4 != 3 && s_cameraman.keyRecordings[3].Keyframes )
  {
    memcpy_0(v6, s_cameraman.keyRecordings[3].Keyframes, 44i64 * s_cameraman.keyRecordings[3].maxKeyframe);
    v6 += 44 * s_cameraman.keyRecordings[3].maxKeyframe;
    s_cameraman.keyRecordings[3].kfsAvailable = s_cameraman.keyRecordings[3].maxKeyframe;
  }
  if ( (_DWORD)v4 != 4 && s_cameraman.keyRecordings[4].Keyframes )
  {
    memcpy_0(v6, s_cameraman.keyRecordings[4].Keyframes, 44i64 * s_cameraman.keyRecordings[4].maxKeyframe);
    v6 += 44 * s_cameraman.keyRecordings[4].maxKeyframe;
    s_cameraman.keyRecordings[4].kfsAvailable = s_cameraman.keyRecordings[4].maxKeyframe;
  }
  if ( (_DWORD)v4 != 5 && s_cameraman.keyRecordings[5].Keyframes )
  {
    memcpy_0(v6, s_cameraman.keyRecordings[5].Keyframes, 44i64 * s_cameraman.keyRecordings[5].maxKeyframe);
    v6 += 44 * s_cameraman.keyRecordings[5].maxKeyframe;
    s_cameraman.keyRecordings[5].kfsAvailable = s_cameraman.keyRecordings[5].maxKeyframe;
  }
  if ( (_DWORD)v4 != 6 && s_cameraman.keyRecordings[6].Keyframes )
  {
    memcpy_0(v6, s_cameraman.keyRecordings[6].Keyframes, 44i64 * s_cameraman.keyRecordings[6].maxKeyframe);
    v6 += 44 * s_cameraman.keyRecordings[6].maxKeyframe;
    s_cameraman.keyRecordings[6].kfsAvailable = s_cameraman.keyRecordings[6].maxKeyframe;
  }
  if ( (_DWORD)v4 != 7 && s_cameraman.keyRecordings[7].Keyframes )
  {
    memcpy_0(v6, s_cameraman.keyRecordings[7].Keyframes, 44i64 * s_cameraman.keyRecordings[7].maxKeyframe);
    v6 += 44 * s_cameraman.keyRecordings[7].maxKeyframe;
    s_cameraman.keyRecordings[7].kfsAvailable = s_cameraman.keyRecordings[7].maxKeyframe;
  }
  if ( (_DWORD)v4 != 8 && s_cameraman.keyRecordings[8].Keyframes )
  {
    memcpy_0(v6, s_cameraman.keyRecordings[8].Keyframes, 44i64 * s_cameraman.keyRecordings[8].maxKeyframe);
    v6 += 44 * s_cameraman.keyRecordings[8].maxKeyframe;
    s_cameraman.keyRecordings[8].kfsAvailable = s_cameraman.keyRecordings[8].maxKeyframe;
  }
  if ( (_DWORD)v4 != 9 && s_cameraman.keyRecordings[9].Keyframes )
  {
    memcpy_0(v6, s_cameraman.keyRecordings[9].Keyframes, 44i64 * s_cameraman.keyRecordings[9].maxKeyframe);
    v6 += 44 * s_cameraman.keyRecordings[9].maxKeyframe;
    s_cameraman.keyRecordings[9].kfsAvailable = s_cameraman.keyRecordings[9].maxKeyframe;
  }
  Keyframes = s_cameraman.keyRecordings[v4].Keyframes;
  if ( Keyframes )
  {
    maxKeyframe = s_cameraman.keyRecordings[v4].maxKeyframe;
    if ( (_DWORD)maxKeyframe )
      memcpy_0(v6, Keyframes, 44 * maxKeyframe);
  }
  s_cameraman.keyRecordings[v4].kfsAvailable = (m_ptr - v6 + 112640) / 44;
  v9 = &s_cameraman;
  if ( (_DWORD)v4 && s_cameraman.keyRecordings[0].Keyframes )
  {
    s_cameraman.keyRecordings[0].Keyframes = (CameramanKeyframe *)&s_cameraman;
    memcpy_0(&s_cameraman, m_ptr, 44i64 * s_cameraman.keyRecordings[0].maxKeyframe);
    v10 = 44i64 * s_cameraman.keyRecordings[0].maxKeyframe;
    m_ptr += v10;
    v9 = (Cameraman_t *)((char *)&s_cameraman + v10);
  }
  if ( (_DWORD)v4 != 1 && s_cameraman.keyRecordings[1].Keyframes )
  {
    s_cameraman.keyRecordings[1].Keyframes = (CameramanKeyframe *)v9;
    memcpy_0(v9, m_ptr, 44i64 * s_cameraman.keyRecordings[1].maxKeyframe);
    v11 = 44i64 * s_cameraman.keyRecordings[1].maxKeyframe;
    m_ptr += v11;
    v9 = (Cameraman_t *)((char *)v9 + v11);
  }
  if ( (_DWORD)v4 != 2 && s_cameraman.keyRecordings[2].Keyframes )
  {
    s_cameraman.keyRecordings[2].Keyframes = (CameramanKeyframe *)v9;
    memcpy_0(v9, m_ptr, 44i64 * s_cameraman.keyRecordings[2].maxKeyframe);
    v12 = 44i64 * s_cameraman.keyRecordings[2].maxKeyframe;
    m_ptr += v12;
    v9 = (Cameraman_t *)((char *)v9 + v12);
  }
  if ( (_DWORD)v4 != 3 && s_cameraman.keyRecordings[3].Keyframes )
  {
    s_cameraman.keyRecordings[3].Keyframes = (CameramanKeyframe *)v9;
    memcpy_0(v9, m_ptr, 44i64 * s_cameraman.keyRecordings[3].maxKeyframe);
    v13 = 44i64 * s_cameraman.keyRecordings[3].maxKeyframe;
    m_ptr += v13;
    v9 = (Cameraman_t *)((char *)v9 + v13);
  }
  if ( (_DWORD)v4 != 4 && s_cameraman.keyRecordings[4].Keyframes )
  {
    s_cameraman.keyRecordings[4].Keyframes = (CameramanKeyframe *)v9;
    memcpy_0(v9, m_ptr, 44i64 * s_cameraman.keyRecordings[4].maxKeyframe);
    v14 = 44i64 * s_cameraman.keyRecordings[4].maxKeyframe;
    m_ptr += v14;
    v9 = (Cameraman_t *)((char *)v9 + v14);
  }
  if ( (_DWORD)v4 != 5 && s_cameraman.keyRecordings[5].Keyframes )
  {
    s_cameraman.keyRecordings[5].Keyframes = (CameramanKeyframe *)v9;
    memcpy_0(v9, m_ptr, 44i64 * s_cameraman.keyRecordings[5].maxKeyframe);
    v15 = 44i64 * s_cameraman.keyRecordings[5].maxKeyframe;
    m_ptr += v15;
    v9 = (Cameraman_t *)((char *)v9 + v15);
  }
  if ( (_DWORD)v4 != 6 && s_cameraman.keyRecordings[6].Keyframes )
  {
    s_cameraman.keyRecordings[6].Keyframes = (CameramanKeyframe *)v9;
    memcpy_0(v9, m_ptr, 44i64 * s_cameraman.keyRecordings[6].maxKeyframe);
    v16 = 44i64 * s_cameraman.keyRecordings[6].maxKeyframe;
    m_ptr += v16;
    v9 = (Cameraman_t *)((char *)v9 + v16);
  }
  if ( (_DWORD)v4 != 7 && s_cameraman.keyRecordings[7].Keyframes )
  {
    s_cameraman.keyRecordings[7].Keyframes = (CameramanKeyframe *)v9;
    memcpy_0(v9, m_ptr, 44i64 * s_cameraman.keyRecordings[7].maxKeyframe);
    v17 = 44i64 * s_cameraman.keyRecordings[7].maxKeyframe;
    m_ptr += v17;
    v9 = (Cameraman_t *)((char *)v9 + v17);
  }
  if ( (_DWORD)v4 != 8 && s_cameraman.keyRecordings[8].Keyframes )
  {
    s_cameraman.keyRecordings[8].Keyframes = (CameramanKeyframe *)v9;
    memcpy_0(v9, m_ptr, 44i64 * s_cameraman.keyRecordings[8].maxKeyframe);
    v18 = 44i64 * s_cameraman.keyRecordings[8].maxKeyframe;
    m_ptr += v18;
    v9 = (Cameraman_t *)((char *)v9 + v18);
  }
  if ( (_DWORD)v4 != 9 && s_cameraman.keyRecordings[9].Keyframes )
  {
    s_cameraman.keyRecordings[9].Keyframes = (CameramanKeyframe *)v9;
    memcpy_0(v9, m_ptr, 44i64 * s_cameraman.keyRecordings[9].maxKeyframe);
    v19 = 44i64 * s_cameraman.keyRecordings[9].maxKeyframe;
    m_ptr += v19;
    v9 = (Cameraman_t *)((char *)v9 + v19);
  }
  s_cameraman.keyRecordings[v4].Keyframes = (CameramanKeyframe *)v9;
  v20 = s_cameraman.keyRecordings[v4].maxKeyframe;
  if ( (_DWORD)v20 )
    memcpy_0(v9, m_ptr, 44 * v20);
  s_cameraman.currentRecording = v4;
  s_cameraman.kf = &s_cameraman.keyRecordings[v4];
  if ( s_cameraman.keyRecordings[v4].maxKeyframe > 0 )
  {
    s_cameraman.currentFrame = s_cameraman.keyRecordings[v4].Keyframes[s_cameraman.keyRecordings[v4].curKeyframe].frame;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edx
      vmulss  xmm6, xmm0, cs:__real@3c888889
      vmovss  cs:s_cameraman.currentTime, xmm6
      vmovaps xmm1, xmm6; t
    }
    CL_Cameraman_GetValuesAtTimeKf(s_cameraman.keyRecordings[v4].curKeyframe, *(double *)&_XMM1, &s_cameraman.cam->origin, &s_cameraman.cam->angles, &s_cameraman.cam->fov, &demo_scale);
    __asm
    {
      vmulss  xmm0, xmm6, cs:__real@42700000
      vcvttss2si eax, xmm0
    }
    s_cameraman.currentFrame = _EAX;
    __asm { vmovss  cs:s_cameraman.currentTime, xmm6 }
    _RAX = s_cameraman.cam;
    __asm { vmovss  xmm1, dword ptr [rax+18h]; value }
    Dvar_SetFloat_Internal(DVARFLT_cameraman_fov, *(float *)&_XMM1);
    __asm { vmovss  xmm1, [rsp+78h+arg_0]; value }
    Dvar_SetFloat_Internal(DVARFLT_cameraman_demoscale, *(float *)&_XMM1);
    __asm { vmovss  xmm1, cs:s_cameraman.currentTime; value }
    Dvar_SetFloat_Internal(DVARFLT_cameraman_time, *(float *)&_XMM1);
  }
  Mem_LargeLocal::~Mem_LargeLocal(&Src);
  __asm { vmovaps xmm6, [rsp+78h+var_28] }
}

/*
==============
CL_Cameraman_UnbindUsedKeys
==============
*/
void CL_Cameraman_UnbindUsedKeys()
{
  int v0; 
  int ControllerFromClient; 
  const char *v2; 
  unsigned int v3; 
  const char **v4; 
  const char *v5; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  char dest[64]; 

  v6 = "leftarrow";
  v7 = "rightarrow";
  v8 = "s";
  v9 = "c";
  v10 = "C";
  v11 = "R";
  v12 = "h";
  v13 = "d";
  v14 = "g";
  v15 = "l";
  v16 = "e";
  v17 = "k";
  v18 = "m";
  v19 = "n";
  v20 = "f12";
  v0 = 0;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  do
  {
    Com_sprintf(dest, 0x40ui64, "unbind %d", (unsigned int)v0);
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 552, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()", v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20) )
      __debugbreak();
    Cmd_TokenizeString(dest);
    if ( Cmd_Argc() )
    {
      cmd_args.localClientNum[cmd_args.nesting] = LOCAL_CLIENT_0;
      cmd_args.controllerIndex[cmd_args.nesting] = ControllerFromClient;
      v2 = Cmd_Argv(0);
      if ( !Cmd_ExecuteCommandFunctions(v2, dest, &s_cmd_functions) && !Dvar_Command(0) )
        CL_Main_ForwardCommandToServer(LOCAL_CLIENT_0, dest);
    }
    Cmd_EndTokenizedString();
    ++v0;
  }
  while ( v0 < 10 );
  v3 = 0;
  v4 = &v6;
  do
  {
    Com_sprintf(dest, 0x40ui64, "unbind %s", *v4);
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 552, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    Cmd_TokenizeString(dest);
    if ( Cmd_Argc() )
    {
      cmd_args.localClientNum[cmd_args.nesting] = LOCAL_CLIENT_0;
      cmd_args.controllerIndex[cmd_args.nesting] = ControllerFromClient;
      v5 = Cmd_Argv(0);
      if ( !Cmd_ExecuteCommandFunctions(v5, dest, &s_cmd_functions) && !Dvar_Command(0) )
        CL_Main_ForwardCommandToServer(LOCAL_CLIENT_0, dest);
    }
    Cmd_EndTokenizedString();
    ++v3;
    ++v4;
  }
  while ( v3 < 0xF );
}

/*
==============
CL_Cameraman_Update
==============
*/

void __fastcall CL_Cameraman_Update(double dT)
{
  const dvar_t *v3; 
  const dvar_t *v5; 
  char v10; 
  char v11; 
  const dvar_t *v14; 
  const dvar_t *v22; 
  int v28; 
  int v30; 
  __int64 maxKeyframe; 
  CameramanKeyframe *Keyframes; 
  __int64 i; 
  int v34; 
  ClientFov result; 
  void *retaddr; 

  _RAX = &retaddr;
  v3 = DVARBOOL_cameraman_enabled;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmm6, xmm0
  }
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( s_cameraman.was_enabled != v3->current.enabled )
  {
    if ( s_cameraman.delayEnable )
    {
      --s_cameraman.delayEnable;
      goto LABEL_47;
    }
    v5 = DVARBOOL_cameraman_enabled;
    if ( !DVARBOOL_cameraman_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    s_cameraman.was_enabled = v5->current.enabled;
    if ( s_cameraman.was_enabled )
    {
      _RBX = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
      CL_Cameraman_UnbindUsedKeys();
      RefdefView_GetOrg(&_RBX->refdef.view, &s_cameraman.main_cam.origin);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+178C0h]
        vmovss  dword ptr cs:s_cameraman.main_cam.angles, xmm0
        vmovss  xmm1, dword ptr [rbx+178C4h]
        vmovss  dword ptr cs:s_cameraman.main_cam.angles+4, xmm1
        vmovss  xmm0, dword ptr [rbx+178C8h]
        vmovss  dword ptr cs:s_cameraman.main_cam.angles+8, xmm0
      }
      _RAX = CG_GetViewFovBySpace(&result, LOCAL_CLIENT_0, CG_FovSpace_Scene, 0);
      __asm
      {
        vmovsd  xmm0, qword ptr [rax]
        vcomiss xmm0, cs:__real@42340000
        vmovss  cs:s_cameraman.main_cam.fov, xmm0
      }
      if ( v10 )
        goto LABEL_13;
      __asm { vcomiss xmm0, cs:__real@42b40000 }
      if ( !(v10 | v11) )
      {
LABEL_13:
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_fov, "cg_fov");
        __asm { vmovss  cs:s_cameraman.main_cam.fov, xmm0 }
      }
    }
  }
  v14 = DVARBOOL_cameraman_enabled;
  if ( !DVARBOOL_cameraman_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f000000
      vmovss  xmm1, cs:__real@3d4ccccd
      vcmpltss xmm2, xmm0, xmm6
      vblendvps xmm0, xmm6, xmm1, xmm2
      vmovss  [rsp+68h+arg_0], xmm0
    }
    if ( !s_cameraman.cameraman_playing && !s_cameraman.fullPlayback && !s_cameraman.pausedFullPlayback )
    {
      if ( s_cameraman.cameraman_focus )
      {
        __asm
        {
          vmovss  xmm6, [rsp+68h+arg_0]
          vmovaps xmm0, xmm6; dT
        }
        CL_Cameraman_UpdateDebugFly(*(float *)&_XMM0);
        __asm { vmovaps xmm0, xmm6; dT }
        CL_Cameraman_UpdateLerp(*(float *)&_XMM0);
        if ( s_cameraman.liveRecording )
        {
          v22 = DVARFLT_cameraman_time;
          if ( !DVARFLT_cameraman_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_time") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v22);
          __asm { vaddss  xmm1, xmm6, dword ptr [rbx+28h]; value }
          Dvar_SetFloat_Internal(DVARFLT_cameraman_time, *(float *)&_XMM1);
          CL_Cameraman_GrabKeyframe(*(double *)&_XMM0);
        }
      }
      goto LABEL_47;
    }
    if ( SV_IsDemoPlaying() && s_cameraman.fullPlayback )
    {
      if ( s_cameraman.cameraman_playing )
      {
LABEL_35:
        __asm
        {
          vmovss  xmm0, cs:s_cameraman.currentTime
          vaddss  xmm1, xmm0, [rsp+68h+arg_0]
          vmulss  xmm0, xmm1, cs:__real@42700000
        }
        v28 = 0;
        __asm { vcvttss2si r10d, xmm0 }
        s_cameraman.currentFrame = _ER10;
        v30 = 0;
        __asm { vmovss  cs:s_cameraman.currentTime, xmm1 }
        maxKeyframe = s_cameraman.kf->maxKeyframe;
        if ( (int)maxKeyframe > 0 )
        {
          Keyframes = s_cameraman.kf->Keyframes;
          for ( i = 0i64; i < maxKeyframe; ++i )
          {
            if ( Keyframes->frame > _ER10 )
            {
              if ( v30 )
                v34 = v30 - 1;
              else
                v34 = 0;
              goto LABEL_42;
            }
            ++v30;
            ++Keyframes;
          }
          if ( (int)maxKeyframe > 0 )
          {
            v34 = maxKeyframe - 1;
            if ( s_cameraman.kf->Keyframes[maxKeyframe - 1].frame == _ER10 )
              goto LABEL_42;
          }
        }
        v34 = s_cameraman.kf->maxKeyframe;
LABEL_42:
        if ( v34 >= 0 )
          v28 = v34;
        if ( v28 >= (int)maxKeyframe )
        {
          v28 = maxKeyframe - 1;
          *(_WORD *)&s_cameraman.cameraman_playing = 0;
          s_cameraman.pausedFullPlayback = 0;
        }
        s_cameraman.kf->curKeyframe = v28;
        __asm { vmovss  xmm1, cs:s_cameraman.currentTime; t }
        CL_Cameraman_ApplyKeyframe(v28, *(double *)&_XMM1, s_cameraman.smoothPlayback);
        goto LABEL_47;
      }
      if ( s_cameraman.pausedFullPlayback || sv_demo.forwardTime || sv_demo.nextLevelTime )
        goto LABEL_47;
      __asm { vmovss  xmm1, cs:__real@3f800000; value }
      s_cameraman.cameraman_playing = 1;
      Dvar_SetFloat_Internal(DVARFLT_replay_speed, *(float *)&_XMM1);
      s_cameraman.pausedFullPlayback = 0;
    }
    if ( !s_cameraman.cameraman_playing )
      goto LABEL_47;
    goto LABEL_35;
  }
LABEL_47:
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
}

/*
==============
CL_Cameraman_UpdateDebugFly
==============
*/

void __fastcall CL_Cameraman_UpdateDebugFly(double dT)
{
  int IsKeyDown; 
  int v29; 
  bool v30; 
  int v52; 
  bool v53; 
  int v62; 
  char v65; 
  char v66; 
  int v105; 
  bool v106; 
  tmat33_t<vec3_t> axis; 
  char v137; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps [rsp+108h+var_98], xmm14
    vmovaps [rsp+108h+var_A8], xmm15
    vmovaps xmm8, xmm0
  }
  dT = CL_GamepadAxisValue(LOCAL_CLIENT_0, 2);
  __asm { vxorps  xmm12, xmm0, cs:__xmm@80000000800000008000000080000000 }
  dT = CL_GamepadAxisValue(LOCAL_CLIENT_0, 3);
  __asm { vmovaps xmm6, xmm0 }
  dT = CL_GamepadAxisValue(LOCAL_CLIENT_0, 1);
  __asm { vmovaps xmm14, xmm0 }
  dT = CL_GamepadAxisValue(LOCAL_CLIENT_0, 0);
  _RAX = cameraman_pitch_vel;
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovaps xmm13, xmm0
    vmovss  xmm11, dword ptr [rax+28h]
  }
  _RAX = cameraman_yaw_vel;
  __asm { vmovss  xmm0, dword ptr [rax+28h] }
  _RAX = cameraman_roll_vel;
  __asm
  {
    vmovss  [rsp+108h+var_E4], xmm0
    vmovss  xmm15, dword ptr [rax+28h]
  }
  _RAX = cameraman_trans_vel;
  __asm { vmovss  xmm0, dword ptr [rax+28h] }
  _RAX = cameraman_fov_vel;
  __asm
  {
    vmovss  [rsp+108h+var_E8], xmm0
    vmovss  xmm0, dword ptr [rax+28h]
    vmovss  [rsp+108h+var_E0], xmm0
  }
  IsKeyDown = CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 18);
  v29 = CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 5);
  if ( IsKeyDown )
  {
    v30 = v29 == 0;
    if ( v29 )
      _RAX = cameraman_third_scale;
    else
      _RAX = cameraman_first_scale;
  }
  else
  {
    v30 = v29 == 0;
    if ( !v29 )
      goto LABEL_8;
    _RAX = cameraman_second_scale;
  }
  __asm { vmovss  xmm7, dword ptr [rax+28h] }
LABEL_8:
  __asm
  {
    vmovss  xmm10, cs:__real@bdcccccd
    vcomiss xmm6, xmm10
    vmovss  xmm9, cs:__real@3dcccccd
    vcomiss xmm6, xmm9
  }
  if ( !v30 )
  {
    _RAX = s_cameraman.cam;
    __asm
    {
      vmulss  xmm0, xmm7, xmm11
      vmulss  xmm1, xmm0, xmm8
      vmulss  xmm3, xmm1, xmm6
      vmovss  xmm2, dword ptr [rax+0Ch]
      vsubss  xmm0, xmm2, xmm3
      vmovss  dword ptr [rax+0Ch], xmm0
    }
    _RAX = s_cameraman.cam;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+0Ch]
      vcomiss xmm0, cs:__real@42b40000
    }
    s_cameraman.cam->angles.v[0] = 90.0;
  }
  __asm
  {
    vcomiss xmm12, xmm10
    vmovss  xmm11, cs:__real@c3b40000
    vmovss  xmm6, cs:__real@43b40000
    vcomiss xmm12, xmm9
  }
  if ( !v30 )
  {
    _RAX = s_cameraman.cam;
    __asm
    {
      vmulss  xmm0, xmm7, [rsp+108h+var_E4]
      vmulss  xmm1, xmm0, xmm8
      vmulss  xmm2, xmm1, xmm12
      vaddss  xmm3, xmm2, dword ptr [rax+10h]
      vmovss  dword ptr [rax+10h], xmm3
    }
    _RAX = s_cameraman.cam;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+10h]
      vcomiss xmm0, xmm6
      vsubss  xmm0, xmm0, xmm6
      vmovss  dword ptr [rax+10h], xmm0
    }
  }
  if ( CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 16) && CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 17) )
  {
    s_cameraman.cam->angles.v[2] = 0.0;
  }
  else
  {
    v52 = CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 16);
    v53 = v52 == 0;
    if ( v52 )
    {
      _RAX = s_cameraman.cam;
      __asm
      {
        vmulss  xmm0, xmm7, xmm15
        vmulss  xmm2, xmm0, xmm8
        vmovss  xmm1, dword ptr [rax+14h]
        vsubss  xmm2, xmm1, xmm2
      }
    }
    else
    {
      v62 = CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 17);
      v53 = v62 == 0;
      if ( !v62 )
        goto LABEL_22;
      _RAX = s_cameraman.cam;
      __asm
      {
        vmulss  xmm0, xmm7, xmm15
        vmulss  xmm1, xmm0, xmm8
        vaddss  xmm2, xmm1, dword ptr [rax+14h]
      }
    }
    __asm { vmovss  dword ptr [rax+14h], xmm2 }
    _RAX = s_cameraman.cam;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+14h]
      vcomiss xmm0, xmm6
    }
    if ( v53 )
    {
      __asm { vcomiss xmm0, xmm11 }
    }
    else
    {
      __asm
      {
        vsubss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rax+14h], xmm0
      }
    }
  }
LABEL_22:
  AnglesToAxis(&s_cameraman.cam->angles, &axis);
  __asm { vcomiss xmm14, xmm10 }
  if ( v65 )
    goto LABEL_25;
  __asm { vcomiss xmm14, xmm9 }
  if ( !(v65 | v66) )
  {
LABEL_25:
    _RAX = s_cameraman.cam;
    __asm
    {
      vmulss  xmm4, xmm7, [rsp+108h+var_E8]
      vmulss  xmm0, xmm4, xmm8
      vmulss  xmm3, xmm0, xmm14
      vmulss  xmm1, xmm3, dword ptr [rsp+108h+axis]
      vaddss  xmm2, xmm1, dword ptr [rax]
      vmovss  dword ptr [rax], xmm2
      vmulss  xmm1, xmm3, dword ptr [rsp+108h+axis+4]
      vaddss  xmm2, xmm1, dword ptr [rax+4]
      vmovss  dword ptr [rax+4], xmm2
      vmulss  xmm1, xmm3, dword ptr [rsp+108h+axis+8]
      vaddss  xmm2, xmm1, dword ptr [rax+8]
      vmovss  dword ptr [rax+8], xmm2
    }
  }
  else
  {
    __asm { vmulss  xmm4, xmm7, [rsp+108h+var_E8] }
  }
  __asm { vcomiss xmm13, xmm10 }
  if ( v65 )
    goto LABEL_29;
  __asm { vcomiss xmm13, xmm9 }
  if ( !(v65 | v66) )
  {
LABEL_29:
    _RAX = s_cameraman.cam;
    __asm
    {
      vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
      vmulss  xmm6, xmm4, xmm8
      vmulss  xmm0, xmm6, xmm13
      vxorps  xmm3, xmm0, xmm9
      vmulss  xmm1, xmm3, dword ptr [rsp+108h+axis+0Ch]
      vaddss  xmm2, xmm1, dword ptr [rax]
      vmovss  dword ptr [rax], xmm2
      vmulss  xmm1, xmm3, dword ptr [rsp+108h+axis+10h]
      vaddss  xmm2, xmm1, dword ptr [rax+4]
      vmovss  dword ptr [rax+4], xmm2
      vmulss  xmm1, xmm3, dword ptr [rsp+108h+axis+14h]
      vaddss  xmm2, xmm1, dword ptr [rax+8]
      vmovss  dword ptr [rax+8], xmm2
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
      vmulss  xmm6, xmm4, xmm8
    }
  }
  if ( CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 6) )
  {
    _RAX = s_cameraman.cam;
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rsp+108h+axis+18h]
      vaddss  xmm2, xmm1, dword ptr [rax]
      vmovss  dword ptr [rax], xmm2
      vmulss  xmm1, xmm6, dword ptr [rsp+108h+axis+1Ch]
      vaddss  xmm2, xmm1, dword ptr [rax+4]
      vmovss  dword ptr [rax+4], xmm2
      vmulss  xmm1, xmm6, dword ptr [rsp+108h+axis+20h]
      vaddss  xmm2, xmm1, dword ptr [rax+8]
      vmovss  dword ptr [rax+8], xmm2
    }
  }
  if ( CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 19) )
  {
    _RAX = s_cameraman.cam;
    __asm
    {
      vxorps  xmm3, xmm6, xmm9
      vmulss  xmm1, xmm3, dword ptr [rsp+108h+axis+18h]
      vaddss  xmm2, xmm1, dword ptr [rax]
      vmovss  dword ptr [rax], xmm2
      vmulss  xmm1, xmm3, dword ptr [rsp+108h+axis+1Ch]
      vaddss  xmm2, xmm1, dword ptr [rax+4]
      vmovss  dword ptr [rax+4], xmm2
      vmulss  xmm1, xmm3, dword ptr [rsp+108h+axis+20h]
      vaddss  xmm2, xmm1, dword ptr [rax+8]
      vmovss  dword ptr [rax+8], xmm2
    }
  }
  __asm { vmulss  xmm6, xmm7, [rsp+108h+var_E0] }
  v105 = CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 4);
  v106 = v105 == 0;
  if ( v105 )
  {
    _RAX = s_cameraman.cam;
    __asm
    {
      vmulss  xmm1, xmm6, xmm8
      vmovss  xmm0, dword ptr [rax+18h]
      vsubss  xmm1, xmm0, xmm1
      vmovss  xmm0, cs:__real@41200000
      vmovss  dword ptr [rax+18h], xmm1
    }
    _RAX = s_cameraman.cam;
    __asm { vcomiss xmm0, dword ptr [rax+18h] }
    if ( !v106 )
    {
      s_cameraman.cam->fov = 10.0;
      _RAX = s_cameraman.cam;
    }
    __asm { vmovss  xmm1, dword ptr [rax+18h]; value }
    Dvar_SetFloat_Internal(DVARFLT_cameraman_fov, *(float *)&_XMM1);
  }
  if ( CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 1) )
  {
    _RAX = s_cameraman.cam;
    __asm
    {
      vmulss  xmm0, xmm6, xmm8
      vaddss  xmm1, xmm0, dword ptr [rax+18h]
      vmovss  xmm0, cs:__real@432a0000
      vmovss  dword ptr [rax+18h], xmm1
    }
    _RAX = s_cameraman.cam;
    __asm
    {
      vcomiss xmm0, dword ptr [rax+18h]
      vmovss  xmm1, dword ptr [rax+18h]; value
    }
    Dvar_SetFloat_Internal(DVARFLT_cameraman_fov, *(float *)&_XMM1);
  }
  _R11 = &v137;
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
    vmovaps xmm14, [rsp+108h+var_98]
    vmovaps xmm15, [rsp+108h+var_A8]
  }
}

/*
==============
CL_Cameraman_UpdateLerp
==============
*/

void __fastcall CL_Cameraman_UpdateLerp(double dT)
{
  char Camera; 
  char v63; 
  char v66; 
  float v139; 
  float v155; 
  float v156; 
  float v157; 
  vec4_t v162; 
  vec4_t v163; 
  Camera_t cam_8; 
  vec3_t focus; 
  tmat33_t<vec3_t> mat; 
  vec4_t out; 
  vec4_t quat; 
  vec4_t result; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm10
    vmovaps xmm10, xmm0
  }
  if ( s_cameraman.lerpMode && s_cameraman.lerpSmooth )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-28h], xmm7
      vmovaps xmmword ptr [r11-38h], xmm8
      vmovaps xmmword ptr [r11-48h], xmm9
      vmovaps xmmword ptr [r11-68h], xmm11
      vmovaps xmmword ptr [r11-78h], xmm12
      vmovaps xmmword ptr [r11-88h], xmm13
      vmovaps xmmword ptr [r11-98h], xmm14
      vxorps  xmm13, xmm13, xmm13
      vmovss  dword ptr [rsp+20h], xmm13
      vmovaps xmmword ptr [r11-0A8h], xmm15
    }
    Camera = CL_Cameraman_GetCamera(LOCAL_CLIENT_0, &cam_8, &focus, 0, v155);
    __asm
    {
      vmovss  xmm12, dword ptr [rsp+1A0h+cam.angles+4]
      vmovss  xmm2, dword ptr cs:s_cameraman.alt_cam.origin
      vmovss  xmm3, dword ptr cs:s_cameraman.alt_cam.origin+4
      vmovss  xmm5, dword ptr cs:s_cameraman.alt_cam.origin+8
    }
    if ( Camera )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+0A0h+focus]
        vmovss  xmm1, dword ptr [rbp+0A0h+focus+4]
        vsubss  xmm7, xmm0, xmm2
        vmovss  xmm0, dword ptr [rbp+0A0h+focus+8]
        vsubss  xmm9, xmm0, xmm5
        vmovss  xmm0, dword ptr [rsp+1A0h+cam.origin+8]
        vsubss  xmm8, xmm1, xmm3
        vmovss  xmm1, dword ptr [rsp+1A0h+cam.angles]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1A0h+cam.origin+8]
        vmovss  xmm1, dword ptr [rsp+1A0h+cam.angles]
        vsubss  xmm7, xmm0, xmm2
        vsubss  xmm8, xmm1, xmm3
        vsubss  xmm9, xmm12, xmm5
      }
    }
    __asm
    {
      vsubss  xmm0, xmm0, dword ptr cs:s_cameraman.prev_cam_pos
      vmovss  xmm11, cs:__real@3f800000
      vaddss  xmm6, xmm2, xmm0
      vsubss  xmm0, xmm1, dword ptr cs:s_cameraman.prev_cam_pos+4
      vaddss  xmm4, xmm3, xmm0
      vsubss  xmm0, xmm12, dword ptr cs:s_cameraman.prev_cam_pos+8
      vaddss  xmm5, xmm5, xmm0
      vmulss  xmm0, xmm7, xmm7
      vmulss  xmm1, xmm8, xmm8
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm9, xmm9
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm11, xmm0
      vdivss  xmm1, xmm11, xmm0
      vmovss  xmm0, dword ptr [rsp+1A0h+cam.origin+8]
      vsubss  xmm3, xmm0, xmm6
      vmovss  xmm0, dword ptr [rsp+1A0h+cam.angles]
      vmulss  xmm14, xmm7, xmm1
      vmulss  xmm7, xmm8, xmm1
      vmulss  xmm15, xmm9, xmm1
      vmovss  dword ptr cs:s_cameraman.alt_cam.origin+4, xmm4
      vsubss  xmm4, xmm0, xmm4
      vmulss  xmm0, xmm3, xmm3
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmovss  dword ptr cs:s_cameraman.alt_cam.origin+8, xmm5
      vsubss  xmm5, xmm12, xmm5
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm12, xmm2, xmm2
      vcmpless xmm0, xmm12, cs:__real@80000000
      vblendvps xmm0, xmm12, xmm11, xmm0
      vdivss  xmm1, xmm11, xmm0
      vmulss  xmm8, xmm3, xmm1
      vmulss  xmm9, xmm4, xmm1
      vmulss  xmm0, xmm5, xmm1
      vmovss  [rsp+1A0h+var_16C], xmm8
      vmovss  dword ptr [rsp+1A0h+var_168], xmm9
      vmovss  dword ptr [rsp+1A0h+var_168+4], xmm0
      vmovss  dword ptr cs:s_cameraman.alt_cam.origin, xmm6
      vmovss  [rsp+1A0h+var_170], xmm7
    }
    AnglesToQuat(&s_cameraman.alt_cam.angles, &quat);
    _RAX = cameraman_angle_dist;
    __asm
    {
      vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm12, dword ptr [rax+28h]
    }
    if ( v63 | v66 )
    {
      AnglesToQuat(&cam_8.angles, &out);
    }
    else
    {
      __asm
      {
        vandps  xmm0, xmm15, xmm6
        vcomiss xmm0, cs:__real@3f7d70a4
        vmovss  dword ptr [rbp+0A0h+mat], xmm14
      }
      if ( v63 )
      {
        __asm
        {
          vxorps  xmm4, xmm7, cs:__xmm@80000000800000008000000080000000
          vmulss  xmm9, xmm15, xmm4
          vmulss  xmm2, xmm4, xmm4
          vmulss  xmm0, xmm15, xmm14
          vxorps  xmm8, xmm0, cs:__xmm@80000000800000008000000080000000
          vmulss  xmm0, xmm4, xmm7
          vmulss  xmm1, xmm14, xmm14
          vsubss  xmm7, xmm1, xmm0
          vmulss  xmm1, xmm14, xmm14
          vaddss  xmm0, xmm2, xmm1
          vsqrtss xmm3, xmm0, xmm0
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm11, xmm0
          vdivss  xmm1, xmm11, xmm0
          vmulss  xmm5, xmm4, xmm1
          vmulss  xmm0, xmm9, xmm9
          vmulss  xmm6, xmm14, xmm1
          vmulss  xmm2, xmm8, xmm8
          vaddss  xmm3, xmm2, xmm0
          vmulss  xmm1, xmm7, xmm7
          vaddss  xmm2, xmm3, xmm1
          vsqrtss xmm4, xmm2, xmm2
          vcmpless xmm0, xmm4, cs:__real@80000000
          vblendvps xmm0, xmm4, xmm11, xmm0
          vmovss  xmm4, [rsp+1A0h+var_170]
          vdivss  xmm1, xmm11, xmm0
          vmulss  xmm2, xmm1, xmm8
          vmovss  xmm8, [rsp+1A0h+var_16C]
          vmulss  xmm3, xmm1, xmm9
          vmovss  xmm9, dword ptr [rsp+1A0h+var_168]
          vmulss  xmm0, xmm1, xmm7
          vmovss  dword ptr [rbp+0A0h+mat+10h], xmm6
          vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmovss  dword ptr [rbp+0A0h+mat+18h], xmm2
          vmovss  dword ptr [rbp+0A0h+mat+1Ch], xmm3
          vmovss  dword ptr [rbp+0A0h+mat+20h], xmm0
          vmovss  dword ptr [rbp+0A0h+mat+4], xmm4
          vmovss  dword ptr [rbp+0A0h+mat+8], xmm15
          vmovss  dword ptr [rbp+0A0h+mat+0Ch], xmm5
          vmovss  dword ptr [rbp+0A0h+mat+14h], xmm13
        }
      }
      else
      {
        __asm
        {
          vmovss  dword ptr [rbp+0A0h+mat+4], xmm7
          vmovss  dword ptr [rbp+0A0h+mat+8], xmm15
        }
        PerpendicularVector(mat.m, &mat.m[2]);
        Vec3Cross(&mat.m[2], mat.m, &mat.m[1]);
      }
      AxisToQuat(&mat, &out);
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0A0h+out]
      vmovups xmm1, xmmword ptr [rbp+0A0h+quat]
      vmovdqa [rsp+1A0h+var_168+8], xmm0
      vmovdqa [rsp+1A0h+var_158+8], xmm1
    }
    *(float *)&_XMM0 = CL_Cameraman_AngleBetweenQuats(&v163, &v162);
    __asm
    {
      vmovaps xmm15, [rsp+1A0h+var_A8+8]
      vmovaps xmm14, [rsp+1A0h+var_98+8]
      vmovaps xmm7, [rsp+1A0h+var_28+8]
      vmulss  xmm1, xmm10, dword ptr [rax+28h]
      vandps  xmm0, xmm0, xmm6
      vcomiss xmm0, xmm1
    }
    if ( v63 | v66 )
      __asm { vdivss  xmm2, xmm0, xmm1; frac }
    else
      __asm { vmovaps xmm2, xmm11 }
    QuatSlerp(&quat, &out, *(float *)&_XMM2, &result);
    QuatToAxis(&result, &mat);
    AxisToAngles(&mat, &s_cameraman.alt_cam.angles);
    if ( s_cameraman.lerpSmooth )
    {
      _RAX = cameraman_decel_dist;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+28h]
        vcomiss xmm12, xmm0
        vmovss  xmm0, cs:s_cameraman.lerpSpeed
        vmulss  xmm1, xmm10, dword ptr [rax+28h]
      }
      _RAX = cameraman_lerp_farspeed;
      __asm
      {
        vaddss  xmm4, xmm0, xmm1
        vmovss  cs:s_cameraman.lerpSpeed, xmm4
        vmovss  xmm0, dword ptr [rax+28h]
        vcomiss xmm4, xmm0
      }
      if ( s_cameraman.lerpSmooth )
      {
        __asm
        {
          vmovss  cs:s_cameraman.lerpSpeed, xmm0
          vmovaps xmm4, xmm0
        }
      }
    }
    else
    {
      _RAX = cameraman_lerp_speed;
      __asm
      {
        vmovss  xmm4, dword ptr [rax+28h]
        vmovss  cs:s_cameraman.lerpSpeed, xmm4
      }
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+78h]
      vmovaps xmm11, [rsp+1A0h+var_68+8]
      vcomiss xmm12, cs:__real@3dcccccd
      vmulss  xmm0, xmm10, xmm4
      vminss  xmm4, xmm0, xmm12
      vmovaps xmm12, [rsp+1A0h+var_78+8]
      vmulss  xmm2, xmm8, xmm4
      vaddss  xmm0, xmm2, dword ptr cs:s_cameraman.alt_cam.origin
      vmulss  xmm2, xmm4, dword ptr [rsp+1A0h+var_168+4]
      vmovaps xmm8, [rsp+1A0h+var_38+8]
      vmovss  dword ptr cs:s_cameraman.alt_cam.origin, xmm0
      vmulss  xmm3, xmm9, xmm4
      vaddss  xmm0, xmm3, dword ptr cs:s_cameraman.alt_cam.origin+4
      vmovss  xmm3, cs:s_cameraman.alt_cam.fov
      vmovaps xmm9, [rsp+1A0h+var_48+8]
      vmovss  dword ptr cs:s_cameraman.alt_cam.origin+4, xmm0
      vaddss  xmm0, xmm2, dword ptr cs:s_cameraman.alt_cam.origin+8
      vsubss  xmm2, xmm1, xmm3
      vmovss  dword ptr cs:s_cameraman.alt_cam.origin+8, xmm0
      vandps  xmm0, xmm2, xmm6
      vmulss  xmm1, xmm10, dword ptr [rax+28h]
      vcomiss xmm0, xmm1
      vaddss  xmm0, xmm3, xmm2
    }
    _RCX = s_cameraman.cam;
    __asm
    {
      vmovaps xmm13, [rsp+1A0h+var_88+8]
      vmovss  cs:s_cameraman.alt_cam.fov, xmm0
      vmovsd  xmm1, qword ptr [rcx]
      vmovsd  xmm2, qword ptr [rcx+0Ch]
      vshufps xmm0, xmm1, xmm1, 55h ; 'U'
    }
    v162.v[2] = s_cameraman.cam->angles.v[2];
    v139 = s_cameraman.cam->origin.v[2];
    __asm { vmovss  dword ptr cs:s_cameraman.prev_cam_pos+4, xmm0 }
    focus.v[2] = v139;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0A0h+focus+8]
      vmovss  dword ptr cs:s_cameraman.prev_cam_pos+8, xmm0
      vshufps xmm0, xmm2, xmm2, 55h ; 'U'
      vmovss  dword ptr cs:s_cameraman.prev_cam_angles+4, xmm0
      vmovss  xmm0, dword ptr [rsp+1A0h+var_158]
      vmovss  dword ptr cs:s_cameraman.prev_cam_angles+8, xmm0
      vmovss  dword ptr cs:s_cameraman.prev_cam_pos, xmm1
      vmovss  dword ptr cs:s_cameraman.prev_cam_angles, xmm2
    }
  }
  else
  {
    if ( s_cameraman.steadyCamMode )
    {
      __asm { vmovss  dword ptr [rsp+20h], xmm10 }
      CL_Cameraman_GetCamera(LOCAL_CLIENT_0, &cam_8, NULL, 1, v156);
      __asm
      {
        vmovss  xmm5, dword ptr [rsp+1A0h+cam.angles]
        vmovss  xmm4, dword ptr [rsp+1A0h+cam.angles+4]
        vmovss  xmm3, dword ptr [rsp+1A0h+cam.angles+8]
        vmovss  xmm2, [rsp+1A0h+cam.fov]
        vmovss  xmm6, dword ptr [rsp+1A0h+cam.origin+8]
        vmovss  xmm1, dword ptr [rsp+74h]
        vmovss  xmm0, dword ptr [rsp+78h]
        vmovss  dword ptr cs:s_cameraman.alt_cam.origin+4, xmm5
        vmovss  dword ptr cs:s_cameraman.alt_cam.origin+8, xmm4
        vmovss  dword ptr cs:s_cameraman.alt_cam.angles, xmm3
        vmovss  dword ptr cs:s_cameraman.alt_cam.angles+4, xmm2
        vmovss  dword ptr cs:s_cameraman.alt_cam.angles+8, xmm1
        vmovss  cs:s_cameraman.alt_cam.fov, xmm0
        vmovss  dword ptr cs:s_cameraman.prev_cam_pos+4, xmm5
        vmovss  dword ptr cs:s_cameraman.prev_cam_pos+8, xmm4
        vmovss  dword ptr cs:s_cameraman.prev_cam_angles, xmm3
        vmovss  dword ptr cs:s_cameraman.prev_cam_angles+4, xmm2
        vmovss  dword ptr cs:s_cameraman.alt_cam.origin, xmm6
        vmovss  dword ptr cs:s_cameraman.prev_cam_pos, xmm6
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+20h], xmm0
      }
      CL_Cameraman_GetCamera(LOCAL_CLIENT_0, &cam_8, NULL, 0, v157);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+1A0h+cam.origin+8]
        vmovss  xmm1, dword ptr [rsp+74h]
        vmovups xmmword ptr cs:s_cameraman.prev_cam_pos, xmm0
        vmovss  xmm0, [rsp+1A0h+cam.fov]
        vmovss  dword ptr cs:s_cameraman.prev_cam_angles+4, xmm0
      }
    }
    __asm { vmovss  dword ptr cs:s_cameraman.prev_cam_angles+8, xmm1 }
  }
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+1A0h+var_18+8]
    vmovaps xmm10, [rsp+1A0h+var_58+8]
  }
}

/*
==============
CL_Cameraman_addTime
==============
*/

void __fastcall CL_Cameraman_addTime(double _XMM0_8)
{
  const char *v2; 
  const dvar_t *v3; 

  if ( Cmd_Argc() == 2 )
  {
    __asm { vmovaps [rsp+58h+var_18], xmm6 }
    v2 = Cmd_Argv(1);
    _XMM0_8 = atof(v2);
    v3 = DVARFLT_cameraman_time;
    __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
    if ( !DVARFLT_cameraman_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rbx+28h]; value
      vmovaps xmm6, [rsp+58h+var_18]
    }
    Dvar_SetFloat_Internal(DVARFLT_cameraman_time, *(float *)&_XMM1);
  }
  else
  {
    Com_PrintError(1, "Usage: cameraman_addTime <time>\n");
  }
}

/*
==============
CL_Cameraman_fixup
==============
*/
CameramanRecording_t *CL_Cameraman_fixup()
{
  CameramanRecording_t *result; 
  int v9; 
  bool v10; 
  bool v11; 

  result = s_cameraman.kf;
  if ( s_cameraman.kf->maxKeyframe > 0 )
  {
    _RCX = s_cameraman.kf->Keyframes;
    __asm
    {
      vmovss  xmm5, cs:__real@43340000
      vmovss  xmm2, cs:__real@43b40000
      vmovss  xmm4, cs:__real@c3340000
      vmovss  xmm0, dword ptr [rcx+20h]
      vcomiss xmm0, xmm5
      vmovss  xmm3, dword ptr [rcx+24h]
    }
    if ( s_cameraman.kf->maxKeyframe )
    {
      __asm
      {
        vsubss  xmm0, xmm0, xmm2
        vmovss  dword ptr [rcx+20h], xmm0
      }
      result = s_cameraman.kf;
    }
    else
    {
      __asm { vcomiss xmm0, xmm4 }
    }
    v9 = 1;
    v10 = result->maxKeyframe == 0;
    v11 = result->maxKeyframe == 1;
    if ( result->maxKeyframe > 1 )
    {
      __asm { vmovaps [rsp+18h+var_18], xmm6 }
      _RCX = 44i64;
      __asm { vmovss  xmm6, cs:__real@c3b40000 }
      while ( 1 )
      {
        _R8 = result->Keyframes;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+r8+24h]
          vsubss  xmm1, xmm0, xmm3
          vcomiss xmm1, xmm4
        }
        if ( v10 )
        {
          __asm { vaddss  xmm1, xmm1, xmm2 }
        }
        else
        {
          __asm { vcomiss xmm1, xmm5 }
          if ( !v10 && !v11 )
            __asm { vaddss  xmm1, xmm1, xmm6 }
        }
        __asm
        {
          vaddss  xmm3, xmm1, xmm3
          vmovss  dword ptr [rcx+r8+24h], xmm3
        }
        result = s_cameraman.kf;
        _R8 = s_cameraman.kf->Keyframes;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+r8+20h]
          vcomiss xmm0, xmm5
        }
        if ( !v10 && !v11 )
          break;
        __asm { vcomiss xmm0, xmm4 }
        if ( v10 )
        {
          __asm { vaddss  xmm0, xmm0, xmm2 }
          goto LABEL_15;
        }
LABEL_16:
        ++v9;
        _RCX += 44i64;
        v10 = (unsigned int)v9 < result->maxKeyframe;
        v11 = v9 == result->maxKeyframe;
        if ( v9 >= result->maxKeyframe )
        {
          __asm { vmovaps xmm6, [rsp+18h+var_18] }
          return result;
        }
      }
      __asm { vsubss  xmm0, xmm0, xmm2 }
LABEL_15:
      __asm { vmovss  dword ptr [rcx+r8+20h], xmm0 }
      result = s_cameraman.kf;
      goto LABEL_16;
    }
  }
  return result;
}

/*
==============
CL_Cameraman_isActive
==============
*/
bool CL_Cameraman_isActive()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_cameraman_enabled;
  if ( !DVARBOOL_cameraman_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled && s_cameraman.cameraman_focus;
}

