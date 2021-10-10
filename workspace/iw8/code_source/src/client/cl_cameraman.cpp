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
  __int64 v6; 
  __int64 v7; 
  CameramanKeyframe *Keyframes; 
  const dvar_t *v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  CameramanKeyframe *v13; 
  const dvar_t *v14; 
  double TimeScale; 
  ClActiveClient *Client; 

  kf = s_cameraman.kf;
  v3 = prevKF;
  maxKeyframe = s_cameraman.kf->maxKeyframe;
  v5 = prevKF + 1;
  if ( (int)maxKeyframe < s_cameraman.kf->kfsAvailable )
  {
    if ( maxKeyframe > prevKF + 2 )
    {
      v6 = maxKeyframe;
      v7 = maxKeyframe - (prevKF + 2);
      do
      {
        Keyframes = kf->Keyframes;
        --v6;
        *(__m256i *)&Keyframes[v6 + 1].frame = *(__m256i *)&kf->Keyframes[v6].frame;
        *(double *)Keyframes[v6 + 1].angles.v = *(double *)Keyframes[v6].angles.v;
        Keyframes[v6 + 1].angles.v[2] = Keyframes[v6].angles.v[2];
        kf = s_cameraman.kf;
        --v7;
      }
      while ( v7 );
    }
    kf->curKeyframe = v5;
    ++s_cameraman.kf->maxKeyframe;
    v9 = DVARFLT_cameraman_time;
    if ( !DVARFLT_cameraman_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    v10 = v3 + 1;
    v11 = 0;
    v12 = (int)(float)(v9->current.value * 60.0);
    v13 = &s_cameraman.kf->Keyframes[v10];
    v13->frame = v12;
    v13->origin = s_cameraman.cam->origin;
    v13->angles = s_cameraman.cam->angles;
    v13->flags = 0;
    v14 = DVARFLT_cameraman_fov;
    if ( !DVARFLT_cameraman_fov && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_fov") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    LODWORD(v13->fov) = v14->current.integer;
    s_cameraman.currentTime = (float)v12 * 0.016666668;
    s_cameraman.currentFrame = v12;
    s_cameraman.kf->curKeyframe = v5;
    if ( SV_IsDemoPlaying() )
    {
      if ( SV_IsDemoPlaying() )
        LODWORD(TimeScale) = 0;
      else
        TimeScale = SV_Demo_GetTimeScale();
      v13->demo_scale = *(float *)&TimeScale;
      if ( !clientUIActives[0].frontEndSceneState[0] && clientUIActives[0].cgameInitialized )
      {
        Client = ClActiveClient::GetClient(LOCAL_CLIENT_0);
        v11 = Client->GetServerTime(Client);
      }
      v13->demo_time = v11;
    }
    else
    {
      v13->demo_scale = 1.0;
      v13->demo_time = (int)(float)(s_cameraman.currentTime * 1000.0);
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
  float v2; 
  double v3; 
  __int128 v5; 

  v2 = (float)((float)((float)(q1->v[1] * q2->v[1]) + (float)(q1->v[0] * q2->v[0])) + (float)(q1->v[2] * q2->v[2])) + (float)(q1->v[3] * q2->v[3]);
  v3 = I_fclamp((float)((float)(v2 * 2.0) * v2) - 1.0, -1.0, 1.0);
  *(float *)&v3 = acosf_0(*(float *)&v3);
  v5 = *(unsigned __int64 *)&v3;
  *(float *)&v5 = *(float *)&v3 * 57.295776;
  _XMM3 = v5;
  _XMM0 = LODWORD(FLOAT_180_0);
  __asm
  {
    vcmpltss xmm1, xmm0, xmm3
    vblendvps xmm4, xmm3, xmm2, xmm1
    vcmpltss xmm0, xmm4, cs:__real@c3340000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
CL_Cameraman_ApplyKeyframe
==============
*/
void CL_Cameraman_ApplyKeyframe(int k, float t, bool useSmooth)
{
  float demo_scale; 

  if ( useSmooth )
    CL_Cameraman_SmoothKeyframe(t, &s_cameraman.cam->origin, &s_cameraman.cam->angles, &s_cameraman.cam->fov, &demo_scale);
  else
    CL_Cameraman_GetValuesAtTimeKf(k, t, &s_cameraman.cam->origin, &s_cameraman.cam->angles, &s_cameraman.cam->fov, &demo_scale);
  s_cameraman.currentFrame = (int)(float)(t * 60.0);
  s_cameraman.currentTime = t;
  Dvar_SetFloat_Internal(DVARFLT_cameraman_fov, s_cameraman.cam->fov);
  Dvar_SetFloat_Internal(DVARFLT_cameraman_demoscale, demo_scale);
  Dvar_SetFloat_Internal(DVARFLT_cameraman_time, s_cameraman.currentTime);
}

/*
==============
CL_Cameraman_CalcViewValues
==============
*/
void CL_Cameraman_CalcViewValues(LocalClientNum_t localClientNum, bool forLod)
{
  cg_t *LocalClientGlobals; 
  cg_t *v5; 
  const vec3_t *p_refdefViewAngles; 
  Camera_t cam; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v5 = LocalClientGlobals;
  if ( forLod )
  {
    RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &s_cameraman.cachedCamera.origin);
    p_refdefViewAngles = &v5->refdefViewAngles;
    v5->refdefViewAngles = s_cameraman.cachedCamera.angles;
  }
  else
  {
    if ( s_cameraman.lerpMode && s_cameraman.lerpSmooth || s_cameraman.steadyCamReady )
    {
      *(_OWORD *)cam.origin.v = *(_OWORD *)s_cameraman.alt_cam.origin.v;
      cam.angles.v[1] = s_cameraman.alt_cam.angles.v[1];
      cam.angles.v[2] = s_cameraman.alt_cam.angles.v[2];
    }
    else
    {
      CL_Cameraman_GetCamera(localClientNum, &cam, NULL, 0, 0.0);
    }
    RefdefView_SetOrg(&v5->refdef.view, &cam.origin);
    p_refdefViewAngles = &v5->refdefViewAngles;
    v5->refdefViewAngles = cam.angles;
    RefdefView_GetOrg(&v5->refdef.view, &s_cameraman.cachedCamera.origin);
    s_cameraman.cachedCamera.angles = v5->refdefViewAngles;
  }
  AnglesToAxis(p_refdefViewAngles, &v5->refdef.view.axis);
}

/*
==============
CL_Cameraman_DampingFraction
==============
*/
float CL_Cameraman_DampingFraction(float dampingFrac, const float dampingMin, const float dampingMin2, const float dampingMax2, const float dampingMax, float v)
{
  float v6; 
  float v8; 
  float v9; 

  v6 = dampingFrac;
  if ( v <= dampingMin )
    return FLOAT_1_0;
  if ( v >= dampingMax )
    return FLOAT_1_0;
  if ( v < dampingMin2 )
  {
    v8 = v - dampingMin2;
    v9 = dampingMin - dampingMin2;
    return (float)((float)(v8 / v9) * (float)(1.0 - v6)) + v6;
  }
  if ( v > dampingMax2 )
  {
    v8 = v - dampingMax2;
    v9 = dampingMax - dampingMax2;
    return (float)((float)(v8 / v9) * (float)(1.0 - v6)) + v6;
  }
  return dampingFrac;
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
  const dvar_t *v2; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  Camera_t *cam; 
  const centity_t *cent; 
  entFocus_t *EntFocus; 
  const char *v11; 
  int clientNum; 
  entFocus_t *v13; 
  entFocus_t *v14; 
  int focus_idx; 
  const char *name; 
  entFocus_t *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  const dvar_t *v22; 
  const char *v23; 
  int currentRecording; 
  int kfsAvailable; 
  int maxKeyframe; 
  int curKeyframe; 
  const char *v28; 
  const dvar_t *v29; 
  CameramanRecording_t *kf; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  __int64 v39; 
  __int64 v40; 
  int v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  const vec4_t *v46; 
  char *fmt; 
  char *fmta; 
  __int64 post_color_index; 
  char clanTagBuf[16]; 
  char dest[64]; 
  char nameBuf[48]; 
  char string[256]; 

  v2 = DVARBOOL_cameraman_enabled;
  if ( !DVARBOOL_cameraman_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    v5 = DVARINT_cameraman_debugDraw;
    if ( !DVARINT_cameraman_debugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_debugDraw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.integer )
    {
      v6 = DVARINT_cameraman_debugDraw;
      if ( !DVARINT_cameraman_debugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_debugDraw") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( v6->current.integer == 1 )
        goto LABEL_52;
      v7 = DVARINT_cameraman_debugDraw;
      if ( !DVARINT_cameraman_debugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_debugDraw") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      if ( v7->current.integer == 2 )
      {
LABEL_52:
        v22 = DVARFLT_cameraman_time;
        v23 = (char *)&queryFormat.fmt + 3;
        currentRecording = s_cameraman.currentRecording;
        if ( s_cameraman.smoothPlayback )
          v23 = "smooth";
        kfsAvailable = s_cameraman.kf->kfsAvailable;
        maxKeyframe = s_cameraman.kf->maxKeyframe;
        curKeyframe = s_cameraman.kf->curKeyframe;
        if ( !DVARFLT_cameraman_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_time") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v22);
        if ( s_cameraman.cameraman_focus )
        {
          v28 = "cameraman(0)";
          if ( s_cameraman.was_enabled )
            v28 = "cameraman(1)";
        }
        else
        {
          v28 = "demo";
        }
        LODWORD(post_color_index) = currentRecording;
        Com_sprintf(string, 0x100ui64, "controls:%s   playback time:%6.2f  edit time:%6.2f  keyframe(%d):%3d/%3d/%d  %s", v28, s_cameraman.currentTime, v22->current.value, post_color_index, curKeyframe, maxKeyframe, kfsAvailable, v23);
        goto LABEL_63;
      }
      cam = s_cameraman.cam;
      if ( s_cameraman.lerpMode && s_cameraman.lerpSmooth || s_cameraman.steadyCamReady )
        cam = &s_cameraman.alt_cam;
      if ( !s_cameraman.focus_idx )
      {
        Com_sprintf(dest, (unsigned int)(s_cameraman.focus_idx + 64), "main");
LABEL_37:
        v18 = (char *)&queryFormat.fmt + 3;
        v19 = (char *)&queryFormat.fmt + 3;
        if ( s_cameraman.rollCorrect )
          v19 = "rollCorrect";
        if ( s_cameraman.steadyCamMode )
        {
          v20 = "steady";
          if ( s_cameraman.steadyTwoAxis )
            v20 = "steady2";
        }
        else
        {
          v20 = (char *)&queryFormat.fmt + 3;
        }
        if ( s_cameraman.lerpMode )
          v18 = "lerp";
        if ( s_cameraman.cameraman_focus )
        {
          v21 = "cameraman(0)";
          if ( s_cameraman.was_enabled )
            v21 = "cameraman(1)";
        }
        else
        {
          v21 = "demo";
        }
        Com_sprintf(string, 0x100ui64, "controls:%s   pos=(%.0f,%.0f,%.0f) ang=(%.0f,%.0f,%.0f) fov=%.0f focus=%s  %s %s %s", v21, cam->origin.v[0], cam->origin.v[1], cam->origin.v[2], cam->angles.v[0], cam->angles.v[1], cam->angles.v[2], cam->fov, dest, v18, v20, v19);
LABEL_63:
        CG_DrawStringExt(scrPlace, 32.0, 24.0, string, &colorGreen, 0, 1, 12.0, 0);
        v29 = DVARINT_cameraman_debugDraw;
        if ( !DVARINT_cameraman_debugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_debugDraw") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v29);
        if ( v29->current.integer == 2 )
        {
          kf = s_cameraman.kf;
          v31 = 6;
          v32 = s_cameraman.kf->curKeyframe;
          v33 = v32 - 3;
          v34 = v32 + 3;
          if ( v33 >= 0 )
            v31 = v34;
          v35 = 0;
          if ( v33 >= 0 )
            v35 = v33;
          v36 = s_cameraman.kf->maxKeyframe;
          if ( v31 >= v36 )
          {
            v37 = v35 - v31;
            v31 = v36 - 1;
            v35 = v37 + v36 - 1;
          }
          v38 = 0;
          if ( v35 >= 0 )
            v38 = v35;
          if ( v38 <= (__int64)v31 )
          {
            v39 = v38;
            v40 = v31 - (__int64)v38 + 1;
            v41 = 0;
            while ( 1 )
            {
              v42 = 0.0;
              if ( v38 > 0 )
              {
                v43 = kf->Keyframes[v39].origin.v[0] - kf->Keyframes[v39 - 1].origin.v[0];
                v44 = kf->Keyframes[v39].origin.v[1] - kf->Keyframes[v39 - 1].origin.v[1];
                v45 = kf->Keyframes[v39].origin.v[2] - kf->Keyframes[v39 - 1].origin.v[2];
                v42 = fsqrt((float)((float)(v44 * v44) + (float)(v43 * v43)) + (float)(v45 * v45));
              }
              Com_sprintf(string, 0x100ui64, " kf(%d) t=%.0f dist=%0.f", (unsigned int)v38, (float)((float)kf->Keyframes[v39].frame * 0.016666668), v42);
              v46 = &colorRed;
              if ( v38 != s_cameraman.kf->curKeyframe )
                v46 = &colorGreen;
              CG_DrawStringExt(scrPlace, 32.0, (float)((float)v41 * 10.0) + 32.0, string, v46, 0, 1, 12.0, 0);
              ++v38;
              ++v41;
              ++v39;
              if ( !--v40 )
                break;
              kf = s_cameraman.kf;
            }
          }
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
        v11 = "BADCLIENTNUM(%d)->%s";
LABEL_35:
        Com_sprintf(dest, 0x40ui64, v11, (unsigned int)s_cameraman.focus_idx, s_bone2Camera[EntFocus->camJoint].name);
        goto LABEL_37;
      }
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
      {
        if ( (cent->flags & 1) == 0 )
        {
          EntFocus = CL_Cameraman_GetEntFocus(s_cameraman.focus_idx);
          v11 = "ent(%d)->%s";
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
            v13 = CL_Cameraman_GetEntFocus(s_cameraman.focus_idx);
            LODWORD(fmta) = s_cameraman.focus_idx;
            Com_sprintf(dest, 0x40ui64, "%s(%d)->%s", nameBuf, fmta, s_bone2Camera[v13->camJoint].name);
            goto LABEL_37;
          }
        }
      }
      v14 = CL_Cameraman_GetEntFocus(s_cameraman.focus_idx);
      focus_idx = s_cameraman.focus_idx;
      name = s_bone2Camera[v14->camJoint].name;
      v17 = CL_Cameraman_GetEntFocus(s_cameraman.focus_idx);
      LODWORD(fmt) = focus_idx;
      Com_sprintf(dest, 0x40ui64, "ent%d(%d)->%s", (unsigned int)v17->cent->nextState.number, fmt, name);
      goto LABEL_37;
    }
  }
}

/*
==============
CL_Cameraman_Dvars
==============
*/
void CL_Cameraman_Dvars(void)
{
  DVARBOOL_cameraman_enabled = Dvar_RegisterBool("cameraman_enabled", 0, 0, "Enables cameraman - so cameraman controls the camera and can edit/playback.");
  DVARFLT_cameraman_time = Dvar_RegisterFloat("cameraman_time", 0.0, 0.0, 1000000.0, 0, "The time used when keyframes are grabbed.  Updated during playback.");
  DVARFLT_cameraman_fov = Dvar_RegisterFloat("cameraman_fov", 65.0, 0.1, 90.0, 0, "Fov used when keyframes are grabbed.  Updated during playback.");
  DVARFLT_cameraman_demoscale = Dvar_RegisterFloat("cameraman_demoscale", 1.0, 0.1, 4.0, 0, "Demoscale used when keyframes are grabbed.  Updated during playback.");
  DVARINT_cameraman_debugDraw = Dvar_RegisterEnum("cameraman_debugDraw", s_debugDrawModes, 3, 0, "Controls the one line status display when cameraman is active");
  cameraman_angle_dist = Dvar_RegisterFloat("cameraman_angle_dist", 120.0, 0.1, 10000.0, 0, "In lerp mode, when distance to target is less than this, use target cameras angles for slerp.");
  cameraman_lerp_maxangle = Dvar_RegisterFloat("cameraman_lerp_maxangle", 1080.0, 1.0, 10000.0, 0, "In lerp mode, the max degrees per second the camera can rotate.");
  cameraman_lerp_speed = Dvar_RegisterFloat("cameraman_lerp_speed", 60.0, 1.0, 10000.0, 0, "In lerp mode, the max units per second the camera can translate.");
  cameraman_lerp_farspeed = Dvar_RegisterFloat("cameraman_lerp_farspeed", 1000.0, 1.0, 10000.0, 0, "In lerp mode, the max units per second the camera can translate when doing a far traversal.");
  cameraman_decel_minspeed = Dvar_RegisterFloat("cameraman_decel_minspeed", 20.0, 1.0, 10000.0, 0, "In lerp mode, the min units per second the camera can translate while decelerating.");
  cameraman_lerp_accel = Dvar_RegisterFloat("cameraman_lerp_accel", 1000.0, 1.0, 10000.0, 0, "In lerp mode, the acceleration in units per second^2.");
  cameraman_decel_dist = Dvar_RegisterFloat("cameraman_decel_dist", 120.0, 0.1, 10000.0, 0, "In lerp mode, the distance where we start to decelerate.");
  cameraman_lerp_fov_speed = Dvar_RegisterFloat("cameraman_lerp_fov_speed", 1.0, 1.0, 10000.0, 0, "In lerp mode, the max degrees per second the fov can change.");
  cameraman_trans_vel = Dvar_RegisterFloat("cameraman_trans_vel", 120.0, 0.1, 1000.0, 0, "cameraman translation velocity.");
  cameraman_pitch_vel = Dvar_RegisterFloat("cameraman_pitch_vel", 60.0, 0.1, 1000.0, 0, "cameraman pitch velocity.");
  cameraman_yaw_vel = Dvar_RegisterFloat("cameraman_yaw_vel", 60.0, 0.1, 1000.0, 0, "cameraman yaw velocity.");
  cameraman_roll_vel = Dvar_RegisterFloat("cameraman_roll_vel", 60.0, 0.1, 1000.0, 0, "cameraman roll velocity.");
  cameraman_fov_vel = Dvar_RegisterFloat("cameraman_fov_vel", 4.0, 0.1, 100.0, 0, "cameraman fov velocity.");
  cameraman_first_scale = Dvar_RegisterFloat("cameraman_first_scale", 2.0, 0.1, 1000.0, 0, "cameraman scale when rtrigger is pressed.");
  cameraman_second_scale = Dvar_RegisterFloat("cameraman_second_scale", 4.0, 0.1, 1000.0, 0, "cameraman scale when rshoulder is pressed.");
  cameraman_third_scale = Dvar_RegisterFloat("cameraman_third_scale", 8.0, 0.1, 1000.0, 0, "cameraman scale when rtrigger and rshoulder are pressed.");
  cameraman_disable_fov = Dvar_RegisterBool("cameraman_disable_fov", 0, 0, "Disable cameraman from providing fov.");
  cameraman_smooth_lookbehind = Dvar_RegisterFloat("cameraman_smooth_lookbehind", 0.5, 0.0099999998, 100.0, 0, "cameraman lookbehind when playing back with smoothing.");
  cameraman_smooth_lookahead = Dvar_RegisterFloat("cameraman_smooth_lookahead", 0.5, 0.0099999998, 100.0, 0, "cameraman lookahead when playing back with smoothing.");
  cameraman_dampingHFrac = Dvar_RegisterFloat("cameraman_dampingHFrac", 0.050000001, 0.000099999997, 1.0, 0, "cameraman steadyCam2 Horiz damping.");
  cameraman_dampingHMinVel = Dvar_RegisterFloat("cameraman_dampingHMinVel", 0.0099999998, 0.001, 10000.0, 0, "cameraman steadyCam2 Horiz minVel.");
  cameraman_dampingHMinVel2 = Dvar_RegisterFloat("cameraman_dampingHMinVel2", 0.30000001, 0.001, 10000.0, 0, "cameraman steadyCam2 Horiz minVel2.");
  cameraman_dampingHMaxVel2 = Dvar_RegisterFloat("cameraman_dampingHMaxVel2", 10.0, 0.001, 10000.0, 0, "cameraman steadyCam2 Horiz maxVel2.");
  cameraman_dampingHMaxVel = Dvar_RegisterFloat("cameraman_dampingHMaxVel", 45.0, 0.001, 10000.0, 0, "cameraman steadyCam2 Horiz maxVel.");
  cameraman_dampingVFrac = Dvar_RegisterFloat("cameraman_dampingVFrac", 0.02, 0.000099999997, 1.0, 0, "cameraman steadyCam2 Vert damping.");
  cameraman_dampingVMinVel = Dvar_RegisterFloat("cameraman_dampingVMinVel", 0.0099999998, 0.001, 10000.0, 0, "cameraman steadyCam2 Vert minVel.");
  cameraman_dampingVMinVel2 = Dvar_RegisterFloat("cameraman_dampingVMinVel2", 0.30000001, 0.001, 10000.0, 0, "cameraman steadyCam2 Vert minVel2.");
  cameraman_dampingVMaxVel2 = Dvar_RegisterFloat("cameraman_dampingVMaxVel2", 10.0, 0.001, 10000.0, 0, "cameraman steadyCam2 Vert maxVel2.");
  cameraman_dampingVMaxVel = Dvar_RegisterFloat("cameraman_dampingVMaxVel", 45.0, 0.001, 10000.0, 0, "cameraman steadyCam2 Vert maxVel.");
  cameraman_dampingFrac = Dvar_RegisterFloat("cameraman_dampingFrac", 0.050000001, 0.000099999997, 1.0, 0, "cameraman steadyCam damping.");
  cameraman_dampingMinVel = Dvar_RegisterFloat("cameraman_dampingMinVel", 0.0099999998, 0.001, 10000.0, 0, "cameraman steadyCam minVel.");
  cameraman_dampingMinVel2 = Dvar_RegisterFloat("cameraman_dampingMinVel2", 0.30000001, 0.001, 10000.0, 0, "cameraman steadyCam minVel2.");
  cameraman_dampingMaxVel2 = Dvar_RegisterFloat("cameraman_dampingMaxVel2", 10.0, 0.001, 10000.0, 0, "cameraman steadyCam maxVel2.");
  cameraman_dampingMaxVel = Dvar_RegisterFloat("cameraman_dampingMaxVel", 45.0, 0.001, 10000.0, 0, "cameraman steadyCam maxVel.");
  cameraman_dampingAFrac = Dvar_RegisterFloat("cameraman_dampingAFrac", 0.1, 0.000099999997, 1.0, 0, "cameraman steadyCam angle damping.");
  cameraman_dampingMinAngle = Dvar_RegisterFloat("cameraman_dampingMinAngle", 0.1, 0.001, 10000.0, 0, "cameraman steadyCam minAngle.");
  cameraman_dampingMinAngle2 = Dvar_RegisterFloat("cameraman_dampingMinAngle2", 0.5, 0.001, 10000.0, 0, "cameraman steadyCam minAngle2.");
  cameraman_dampingMaxAngle2 = Dvar_RegisterFloat("cameraman_dampingMaxAngle2", 10.0, 0.001, 10000.0, 0, "cameraman steadyCam maxAngle2.");
  cameraman_dampingMaxAngle = Dvar_RegisterFloat("cameraman_dampingMaxAngle", 15.0, 0.001, 10000.0, 0, "cameraman steadyCam maxAngle.");
  cameraman_rollDamping = Dvar_RegisterFloat("cameraman_rollDamping", 0.1, 0.000099999997, 1.0, 0, "cameraman rollDamping of the orientation from entities.");
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
  int *v7; 
  _DWORD *v; 
  entityType_s *p_eType; 
  int v10; 
  int v11; 
  bool v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  char *v16; 
  float v17; 
  int v18; 
  int v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  int v27; 
  __int64 v28; 
  float v29; 
  CameramanEntRecord_t *sortedEntList; 
  int sortedEntListCount; 
  CameramanEntRecord_t *v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  float *v37; 
  float v38; 
  float v39; 
  float v40; 
  vec3_t forward; 

  s_cameraman.sortedEntListCount = 0;
  EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
  if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cameraman.cpp", 1522, ASSERT_TYPE_ASSERT, "(cgEntSystem)", (const char *)&queryFormat, "cgEntSystem") )
    __debugbreak();
  AngleVectors(angles, &forward, NULL, NULL);
  v7 = (int *)&EntitySystem->m_entityOrigin[0].v[2];
  v = (_DWORD *)EntitySystem->m_entityOrigin[0].v;
  p_eType = &EntitySystem->m_entities[0].nextState.eType;
  v10 = 0;
  v11 = 686098;
  v12 = 1;
  do
  {
    if ( !v12 )
    {
      LODWORD(v36) = 2048;
      LODWORD(v35) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v35, v36) )
        __debugbreak();
    }
    if ( (p_eType[120] & 1) != 0 && *p_eType <= ET_ACTOR && _bittest(&v11, *(__int16 *)p_eType) )
    {
      v13 = *((__int16 *)p_eType - 4);
      if ( v13 > 0x9E4 )
      {
        LODWORD(v36) = *((__int16 *)p_eType - 4);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v36) )
          __debugbreak();
      }
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v36) = 2;
        LODWORD(v35) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      v14 = 2533 * localClientNum + v13;
      if ( v14 >= 0x13CA )
      {
        LODWORD(v36) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v36) )
          __debugbreak();
      }
      v15 = clientObjMap[v14];
      if ( !v15 )
        goto LABEL_52;
      if ( v15 >= (unsigned int)s_objCount )
      {
        LODWORD(v36) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v36) )
          __debugbreak();
      }
      v16 = s_objBuf[v15];
      if ( !v16 )
        goto LABEL_52;
      v17 = *((float *)v16 + 50);
      if ( (unsigned int)v10 >= 0x800 )
      {
        LODWORD(v36) = 2048;
        LODWORD(v35) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 486, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v10 > (int)ComCharacterLimits::ms_gameData.m_clientCount )
      {
        v22 = *((float *)v7 - 1);
        v38 = *((float *)v7 - 2);
        v40 = *(float *)v7;
        v39 = v22;
      }
      else
      {
        v18 = v[1];
        v37 = &v38;
        v19 = v18;
        LODWORD(v20) = (unsigned int)v ^ *v ^ ~s_entity_aab_X;
        LODWORD(v21) = (unsigned int)v ^ s_entity_aab_Y ^ *v ^ v18;
        LODWORD(v40) = v[2] ^ s_entity_aab_Z ^ (unsigned int)v ^ v19;
        v38 = v20;
        v39 = v21;
        memset(&v37, 0, sizeof(v37));
        *(float *)&v37 = v20;
        if ( (LODWORD(v20) & 0x7F800000) == 2139095040 || (*(float *)&v37 = v39, (LODWORD(v39) & 0x7F800000) == 2139095040) || (*(float *)&v37 = v40, (LODWORD(v40) & 0x7F800000) == 2139095040) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 448, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
            __debugbreak();
        }
      }
      v23 = v38 - origin->v[0];
      v24 = v39 - origin->v[1];
      v25 = v40 - origin->v[2];
      v26 = (float)((float)(v24 * forward.v[1]) + (float)(v23 * forward.v[0])) + (float)(v25 * forward.v[2]);
      if ( fsqrt((float)((float)((float)(v24 - (float)(v26 * forward.v[1])) * (float)(v24 - (float)(v26 * forward.v[1]))) + (float)((float)(v23 - (float)(v26 * forward.v[0])) * (float)(v23 - (float)(v26 * forward.v[0])))) + (float)((float)(v25 - (float)(v26 * forward.v[2])) * (float)(v25 - (float)(v26 * forward.v[2])))) < (float)((float)(v26 * 0.087155744) + v17) )
      {
        v27 = 0;
        v28 = 0i64;
        v29 = fsqrt((float)((float)(v24 * v24) + (float)(v23 * v23)) + (float)(v25 * v25));
        if ( s_cameraman.sortedEntListCount <= 0 )
        {
LABEL_43:
          v11 = 686098;
          if ( s_cameraman.sortedEntListCount < 10 )
          {
            s_cameraman.sortedEntList[s_cameraman.sortedEntListCount].cent = (centity_t *)(p_eType - 204);
            s_cameraman.sortedEntList[s_cameraman.sortedEntListCount++].distance = v29;
          }
        }
        else
        {
          sortedEntList = s_cameraman.sortedEntList;
          while ( v29 >= sortedEntList->distance )
          {
            ++v27;
            ++v28;
            ++sortedEntList;
            if ( v27 >= s_cameraman.sortedEntListCount )
              goto LABEL_43;
          }
          sortedEntListCount = 9;
          if ( s_cameraman.sortedEntListCount < 10 )
            sortedEntListCount = s_cameraman.sortedEntListCount;
          if ( sortedEntListCount > v28 )
          {
            v32 = &s_cameraman.sortedEntList[sortedEntListCount];
            v33 = sortedEntListCount - v28;
            do
            {
              *v32 = v32[-1];
              --v32;
              --v33;
            }
            while ( v33 );
          }
          v34 = v28;
          s_cameraman.sortedEntList[v34].distance = v29;
          s_cameraman.sortedEntList[v34].cent = (centity_t *)(p_eType - 204);
          v11 = 686098;
          if ( s_cameraman.sortedEntListCount < 10 )
            ++s_cameraman.sortedEntListCount;
        }
      }
      else
      {
LABEL_52:
        v11 = 686098;
      }
    }
    ++v10;
    v += 3;
    v7 += 3;
    p_eType += 380;
    v12 = (unsigned int)v10 < 0x800;
  }
  while ( v10 < 2048 );
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
  char v3; 
  int currentDemoTime; 

  if ( (_BYTE)play )
  {
    CL_Cameraman_fixup(play, reset, a3, (unsigned __int8)reset);
    if ( v3 )
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
        Dvar_SetFloat_Internal(DVARFLT_replay_speed, 0.0);
    }
    *(_WORD *)&s_cameraman.fullPlayback = 0;
    Dvar_SetFloat_Internal(DVARFLT_replay_speed, 1.0);
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
  __int64 camJoint; 
  const DObj *ClientDObj; 
  scr_string_t *joint; 
  const centity_t *focus_cent; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v18; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  char result; 
  float t; 
  float s[3]; 
  vec3_t v43; 
  vec3_t v44; 
  vec3_t prev_filt_angles; 
  vec3_t prev_filt_pos; 
  vec3_t p2; 
  vec3_t dir1; 
  vec3_t angles; 
  vec3_t v50; 
  tmat33_t<vec3_t> outTagMat; 
  tmat33_t<vec3_t> dst; 
  tmat33_t<vec3_t> axis; 

  if ( !s_cameraman.focus_cent )
  {
    cam->origin = s_cameraman.cam->origin;
    cam->angles = s_cameraman.cam->angles;
    result = 0;
    cam->fov = s_cameraman.cam->fov;
    return result;
  }
  camJoint = CL_Cameraman_GetEntFocus(s_cameraman.focus_idx)->camJoint;
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
      _XMM0 = LODWORD(p2.v[0]);
      _XMM2 = LODWORD(p2.v[1]);
      __asm { vcvtdq2pd xmm0, xmm0 }
      *((_QWORD *)&v18 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v18 = *(double *)&_XMM0 * 0.000244140625;
      _XMM0 = v18;
      __asm
      {
        vcvtsd2ss xmm1, xmm0, xmm0
        vcvtdq2pd xmm2, xmm2
      }
      *((_QWORD *)&v18 + 1) = *((_QWORD *)&_XMM2 + 1);
      *(double *)&v18 = *(double *)&_XMM2 * 0.000244140625;
      _XMM0 = v18;
      _XMM2 = LODWORD(p2.v[2]);
      p2.v[0] = *(float *)&_XMM1;
      __asm
      {
        vcvtsd2ss xmm1, xmm0, xmm0
        vcvtdq2pd xmm2, xmm2
      }
      *((_QWORD *)&v18 + 1) = *((_QWORD *)&_XMM2 + 1);
      *(double *)&v18 = *(double *)&_XMM2 * 0.000244140625;
      _XMM0 = v18;
      p2.v[1] = *(float *)&_XMM1;
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      p2.v[2] = *(float *)&_XMM1;
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
        v43 = angles;
        v44 = p2;
        prev_filt_angles = s_cameraman.prev_filt_angles;
        prev_filt_pos = s_cameraman.prev_filt_pos;
        s_cameraman.steadyCamReady = 1;
        CL_Cameraman_SteadyCam(dT, &prev_filt_pos, &prev_filt_angles, &v44, &v43, &v50, &dir1);
        p2 = v50;
        AnglesToAxis(&dir1, &dst);
        s_cameraman.prev_filt_pos = v50;
        v28 = dir1.v[1];
        s_cameraman.prev_filt_angles.v[0] = dir1.v[0];
        v27 = dir1.v[2];
        goto LABEL_19;
      }
    }
    else
    {
      s_cameraman.filterInited = 1;
    }
    s_cameraman.prev_filt_pos = p2;
    s_cameraman.prev_filt_angles.v[0] = angles.v[0];
    v27 = angles.v[2];
    v28 = angles.v[1];
LABEL_19:
    s_cameraman.prev_filt_angles.v[1] = v28;
    s_cameraman.prev_filt_angles.v[2] = v27;
  }
  MatrixMultiply(&s_bone2Camera[camJoint].bone2Camera, &dst, &outTagMat);
  if ( s_cameraman.rollCorrect )
  {
    AxisToAngles(&outTagMat, &dir1);
    dir1.v[2] = dir1.v[2] * cameraman_rollDamping->current.value;
    AnglesToAxis(&dir1, &outTagMat);
  }
  v29 = p2.v[2];
  v30 = p2.v[1];
  v31 = p2.v[0];
  if ( focus )
  {
    focus->v[0] = p2.v[0];
    focus->v[1] = v30;
    focus->v[2] = v29;
  }
  v32 = v30 + (float)(s_cameraman.cam->origin.v[0] * outTagMat.m[0].v[1]);
  v33 = v29 + (float)(s_cameraman.cam->origin.v[0] * outTagMat.m[0].v[2]);
  p2.v[0] = v31 + (float)(s_cameraman.cam->origin.v[0] * outTagMat.m[0].v[0]);
  p2.v[1] = v32;
  p2.v[2] = v33;
  v34 = s_cameraman.cam->origin.v[1];
  p2.v[2] = (float)(v34 * outTagMat.m[1].v[2]) + v33;
  p2.v[0] = (float)(v34 * outTagMat.m[1].v[0]) + p2.v[0];
  p2.v[1] = (float)(v34 * outTagMat.m[1].v[1]) + v32;
  v35 = s_cameraman.cam->origin.v[2];
  p2.v[0] = (float)(v35 * outTagMat.m[2].v[0]) + p2.v[0];
  p2.v[1] = (float)(v35 * outTagMat.m[2].v[1]) + p2.v[1];
  p2.v[2] = (float)(v35 * outTagMat.m[2].v[2]) + p2.v[2];
  AnglesToAxis(&s_cameraman.cam->angles, &axis);
  MatrixMultiply(&axis, &outTagMat, &dst);
  v36 = p2.v[1];
  cam->origin.v[0] = p2.v[0];
  cam->origin.v[2] = p2.v[2];
  cam->origin.v[1] = v36;
  AxisToAngles(&dst, &cam->angles);
  cam->fov = s_cameraman.cam->fov;
  if ( focus )
  {
    s[0] = FLOAT_10000_0;
    t = FLOAT_10000_0;
    dir1.v[2] = FLOAT_1_0;
    dir1.v[0] = 0.0;
    dir1.v[1] = 0.0;
    ClosestApproachOfTwoLines(focus, &dir1, &p2, dst.m, s, &t);
    v37 = t;
    v38 = t * dst.m[0].v[1];
    focus->v[0] = (float)(t * dst.m[0].v[0]) + p2.v[0];
    v39 = v37 * dst.m[0].v[2];
    focus->v[1] = v38 + p2.v[1];
    focus->v[2] = v39 + p2.v[2];
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
  float result; 

  if ( !cameraman_disable_fov->current.enabled )
  {
    if ( s_cameraman.lerpMode && s_cameraman.lerpSmooth || s_cameraman.steadyCamReady )
      return s_cameraman.alt_cam.fov;
    else
      return s_cameraman.cam->fov;
  }
  return result;
}

/*
==============
CL_Cameraman_GetValuesAtTimeKf
==============
*/
void CL_Cameraman_GetValuesAtTimeKf(int k, float t, vec3_t *origin, vec3_t *angles, float *fov, float *demo_scale)
{
  CameramanRecording_t *kf; 
  __int64 v7; 
  CameramanKeyframe *v11; 
  float v12; 
  float v13; 
  float v14; 

  kf = s_cameraman.kf;
  v7 = 0i64;
  v11 = &s_cameraman.kf->Keyframes[k];
  v12 = (float)v11->frame * 0.016666668;
  if ( v12 > t )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cameraman.cpp", 807, ASSERT_TYPE_ASSERT, "(prevT <= t)", (const char *)&queryFormat, "prevT <= t") )
      __debugbreak();
    kf = s_cameraman.kf;
  }
  if ( k + 1 < kf->maxKeyframe )
    v7 = (__int64)&kf->Keyframes[k + 1];
  if ( v11->frame == (int)(float)(t * 60.0) || !v7 )
  {
    origin->v[0] = v11->origin.v[0];
    origin->v[1] = v11->origin.v[1];
    origin->v[2] = v11->origin.v[2];
    angles->v[0] = v11->angles.v[0];
    angles->v[1] = v11->angles.v[1];
    angles->v[2] = v11->angles.v[2];
    *fov = v11->fov;
    *demo_scale = v11->demo_scale;
  }
  else
  {
    v13 = (float)*(int *)v7 * 0.016666668;
    if ( (v12 > t || t > v13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_cameraman.cpp", 822, ASSERT_TYPE_ASSERT, "(( prevT <= t ) && ( t <= nextT ))", (const char *)&queryFormat, "( prevT <= t ) && ( t <= nextT )") )
      __debugbreak();
    v14 = (float)(t - v12) / (float)(v13 - v12);
    origin->v[0] = (float)((float)(*(float *)(v7 + 20) - v11->origin.v[0]) * v14) + v11->origin.v[0];
    origin->v[1] = (float)((float)(*(float *)(v7 + 24) - v11->origin.v[1]) * v14) + v11->origin.v[1];
    origin->v[2] = (float)((float)(*(float *)(v7 + 28) - v11->origin.v[2]) * v14) + v11->origin.v[2];
    angles->v[0] = (float)((float)(*(float *)(v7 + 32) - v11->angles.v[0]) * v14) + v11->angles.v[0];
    angles->v[1] = (float)((float)(*(float *)(v7 + 36) - v11->angles.v[1]) * v14) + v11->angles.v[1];
    angles->v[2] = (float)((float)(*(float *)(v7 + 40) - v11->angles.v[2]) * v14) + v11->angles.v[2];
    *fov = (float)((float)(*(float *)(v7 + 8) - v11->fov) * v14) + v11->fov;
    *demo_scale = (float)((float)(*(float *)(v7 + 4) - v11->demo_scale) * v14) + v11->demo_scale;
  }
}

/*
==============
CL_Cameraman_GotoKeyframe
==============
*/
void CL_Cameraman_GotoKeyframe(int kf)
{
  CameramanRecording_t *v1; 
  int curKeyframe; 
  int maxKeyframe; 
  __int64 v4; 
  float v5; 
  float demo_scale; 

  s_cameraman.kf->curKeyframe = kf;
  v1 = s_cameraman.kf;
  curKeyframe = s_cameraman.kf->curKeyframe;
  if ( curKeyframe < 0 )
  {
    s_cameraman.kf->curKeyframe = 0;
LABEL_5:
    v1 = s_cameraman.kf;
    goto LABEL_6;
  }
  maxKeyframe = s_cameraman.kf->maxKeyframe;
  if ( curKeyframe >= maxKeyframe )
  {
    s_cameraman.kf->curKeyframe = maxKeyframe - 1;
    goto LABEL_5;
  }
LABEL_6:
  v4 = v1->curKeyframe;
  v5 = (float)v1->Keyframes[v4].frame * 0.016666668;
  CL_Cameraman_GetValuesAtTimeKf(v4, v5, &s_cameraman.cam->origin, &s_cameraman.cam->angles, &s_cameraman.cam->fov, &demo_scale);
  s_cameraman.currentFrame = (int)(float)(v5 * 60.0);
  s_cameraman.currentTime = v5;
  Dvar_SetFloat_Internal(DVARFLT_cameraman_fov, s_cameraman.cam->fov);
  Dvar_SetFloat_Internal(DVARFLT_cameraman_demoscale, demo_scale);
  Dvar_SetFloat_Internal(DVARFLT_cameraman_time, s_cameraman.currentTime);
}

/*
==============
CL_Cameraman_GrabKeyframe
==============
*/
void CL_Cameraman_GrabKeyframe()
{
  const dvar_t *v0; 
  int v1; 
  ClActiveClient *Client; 
  int v3; 
  float v4; 
  double TimeScale; 
  CameramanKeyframe *v6; 
  int v7; 
  const dvar_t *v8; 
  int v9; 
  __int64 maxKeyframe; 
  CameramanKeyframe *Keyframes; 
  __int64 v12; 
  int v13; 

  v0 = DVARFLT_cameraman_time;
  if ( !DVARFLT_cameraman_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  v1 = 0;
  if ( v0->current.value <= 0.0 && SV_IsDemoPlaying() )
  {
    if ( clientUIActives[0].frontEndSceneState[0] || !clientUIActives[0].cgameInitialized )
    {
      v3 = 0;
    }
    else
    {
      Client = ClActiveClient::GetClient(LOCAL_CLIENT_0);
      v3 = Client->GetServerTime(Client);
    }
    if ( s_cameraman.kf->maxKeyframe )
    {
      TimeScale = SV_Demo_GetTimeScale();
      if ( *(float *)&TimeScale != 1.0 )
        goto LABEL_17;
      v6 = &s_cameraman.kf->Keyframes[(int)CL_Cameraman_FindPreviousKF(s_cameraman.currentFrame)];
      v7 = v3 - v6->demo_time;
      if ( v7 < 0 )
        v4 = (float)v6->frame * 0.016666668;
      else
        v4 = (float)((float)v7 * 0.001) + (float)((float)v6->frame * 0.016666668);
    }
    else
    {
      v4 = (float)v3 * 0.001;
    }
    Dvar_SetFloat_Internal(DVARFLT_cameraman_time, v4);
  }
LABEL_17:
  v8 = DVARFLT_cameraman_time;
  if ( !DVARFLT_cameraman_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = (int)(float)(v8->current.value * 60.0);
  maxKeyframe = s_cameraman.kf->maxKeyframe;
  if ( (int)maxKeyframe <= 0 )
  {
LABEL_25:
    v13 = maxKeyframe - 1;
  }
  else
  {
    Keyframes = s_cameraman.kf->Keyframes;
    v12 = 0i64;
    while ( Keyframes->frame <= v9 )
    {
      if ( Keyframes->frame == v9 )
      {
        CL_Cameraman_ReplaceKeyframe(v1);
        return;
      }
      ++v1;
      ++v12;
      ++Keyframes;
      if ( v12 >= maxKeyframe )
        goto LABEL_25;
    }
    v13 = v1 - 1;
  }
  CL_Cameraman_AddKeyframe(v13, v9);
}

/*
==============
CL_Cameraman_HandleInput
==============
*/
char CL_Cameraman_HandleInput(LocalClientNum_t localClientNum, int key, int down)
{
  __int64 v4; 
  const dvar_t *v6; 
  __int64 altKey; 
  Cameraman_t *Keyframes; 
  bool v10; 
  bool Bool_Internal_DebugName; 
  __int64 shiftKey; 
  __int64 ctrlKey; 
  unsigned __int64 v14; 
  __int64 curKeyframe; 
  const dvar_t *v16; 
  int v17; 
  __int64 v18; 
  const dvar_t *v19; 
  __int64 v20; 
  CameramanRecording_t *kf; 
  int i; 
  int demo_time; 
  int maxKeyframe; 
  int currentDemoTime; 
  _BYTE *m_ptr; 
  char *v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  float v37; 
  int v38; 
  const centity_t *cent; 
  cg_t *LocalClientGlobals; 
  int v41; 
  centity_t *Entity; 
  int v43; 
  __int128 v49; 
  int sortedEntListCount; 
  int v52; 
  centity_t *v53; 
  entFocus_t *EntFocus; 
  int v55; 
  centity_t *NextValidClient; 
  bool v57; 
  const centity_t *focus_cent; 
  unsigned int v63; 
  int v64; 
  DObj *ClientDObj; 
  CameraJoints_e joint2Set; 
  CameramanRecording_t *v67; 
  int v68; 
  __int64 v69; 
  __int64 v70; 
  CameramanKeyframe *v71; 
  int v72; 
  vec3_t prev_cam_angles; 
  Mem_LargeLocal v74; 
  float demo_scale; 

  v4 = key;
  v6 = DVARBOOL_cameraman_enabled;
  if ( !DVARBOOL_cameraman_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.enabled )
    return 0;
  Keyframes = &s_cameraman;
  if ( down )
  {
    v10 = s_cameraman.keyDebounce[v4] == 0;
    s_cameraman.keyDebounce[v4] = 1;
  }
  else
  {
    s_cameraman.keyDebounce[v4] = 0;
    v10 = 0;
  }
  if ( (_DWORD)v4 == 20 )
  {
    if ( down && v10 )
    {
      down = s_cameraman.buttonShift;
      if ( !s_cameraman.buttonShift )
      {
        s_cameraman.cameraman_focus = !s_cameraman.cameraman_focus;
        shiftKey = (unsigned int)s_cameraman.shiftKey;
        ctrlKey = (unsigned int)s_cameraman.ctrlKey;
        goto LABEL_28;
      }
      Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_cameraman_enabled, "cameraman_enabled");
      Dvar_SetBool_Internal(DVARBOOL_cameraman_enabled, !Bool_Internal_DebugName);
    }
    shiftKey = (unsigned int)s_cameraman.shiftKey;
    ctrlKey = (unsigned int)s_cameraman.ctrlKey;
  }
  else
  {
    shiftKey = (unsigned int)s_cameraman.shiftKey;
    ctrlKey = (unsigned int)s_cameraman.ctrlKey;
    if ( (_DWORD)v4 == 18 )
    {
      s_cameraman.buttonShift = down;
      goto LABEL_28;
    }
    if ( (_DWORD)v4 == 5 )
    {
      s_cameraman.buttonAlt = down;
    }
    else
    {
      if ( (unsigned int)(v4 - 138) <= 1 )
        ctrlKey = (unsigned int)down;
      s_cameraman.ctrlKey = ctrlKey;
      if ( (unsigned int)(v4 - 140) <= 1 )
        shiftKey = (unsigned int)down;
      s_cameraman.shiftKey = shiftKey;
      altKey = (unsigned int)s_cameraman.altKey;
      if ( (unsigned int)(v4 - 136) <= 1 )
        altKey = (unsigned int)down;
      s_cameraman.altKey = altKey;
    }
  }
  down = s_cameraman.buttonShift;
LABEL_28:
  if ( !s_cameraman.cameraman_focus )
    return 0;
  if ( (_DWORD)v4 != 6 && (_DWORD)v4 != 19 && v10 )
  {
    v14 = 0x140000000ui64;
    switch ( (int)v4 )
    {
      case 1:
      case 2:
      case 4:
      case 5:
      case 6:
      case 16:
      case 20:
        return 1;
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
            CL_Cameraman_fixup(altKey, shiftKey, ctrlKey, 0x140000000ui64);
            s_cameraman.cameraman_playing = 0;
            if ( s_cameraman.fullPlayback || s_cameraman.pausedFullPlayback )
            {
              Dvar_SetFloat_Internal(DVARFLT_replay_speed, 0.0);
              s_cameraman.pausedFullPlayback = 1;
            }
          }
          return 1;
        }
        if ( s_cameraman.kf->maxKeyframe <= 0 )
          return 1;
        CL_Cameraman_fixup(altKey, shiftKey, ctrlKey, 0x140000000ui64);
        s_cameraman.cameraman_playing = 1;
        if ( !s_cameraman.fullPlayback && !s_cameraman.pausedFullPlayback )
          return 1;
        goto LABEL_73;
      case 14:
      case 114:
        if ( (_DWORD)shiftKey )
        {
          if ( s_cameraman.cameraman_playing )
          {
            if ( s_cameraman.kf->maxKeyframe > 0 )
            {
              CL_Cameraman_fixup(altKey, shiftKey, ctrlKey, 0x140000000ui64);
              s_cameraman.cameraman_playing = 0;
              if ( s_cameraman.fullPlayback || s_cameraman.pausedFullPlayback )
              {
                Dvar_SetFloat_Internal(DVARFLT_replay_speed, 0.0);
                s_cameraman.pausedFullPlayback = 1;
              }
            }
LABEL_215:
            if ( s_cameraman.kf->maxKeyframe > 0 )
            {
              CL_Cameraman_fixup(altKey, shiftKey, ctrlKey, v14);
              s_cameraman.cameraman_playing = 0;
              if ( s_cameraman.fullPlayback || s_cameraman.pausedFullPlayback )
                Dvar_SetFloat_Internal(DVARFLT_replay_speed, 0.0);
            }
            *(_WORD *)&s_cameraman.fullPlayback = 0;
LABEL_73:
            Dvar_SetFloat_Internal(DVARFLT_replay_speed, 1.0);
            s_cameraman.pausedFullPlayback = 0;
          }
          else
          {
            if ( s_cameraman.kf->maxKeyframe > 0 )
            {
              CL_Cameraman_fixup(altKey, shiftKey, ctrlKey, 0x140000000ui64);
              CL_Cameraman_SetToStart();
              s_cameraman.cameraman_playing = 1;
              if ( s_cameraman.fullPlayback || s_cameraman.pausedFullPlayback )
              {
                Dvar_SetFloat_Internal(DVARFLT_replay_speed, 1.0);
                s_cameraman.pausedFullPlayback = 0;
              }
            }
LABEL_65:
            CL_Cameraman_fixup(altKey, shiftKey, ctrlKey, v14);
            CL_Cameraman_SetToStart();
            currentDemoTime = s_cameraman.currentDemoTime;
            if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|0x80) )
              SV_DemoMP_SetMsecTime(currentDemoTime);
            else
              SV_DemoSP_SetMsecTime(currentDemoTime);
            *(_WORD *)&s_cameraman.fullPlayback = 1;
            s_cameraman.cameraman_playing = 0;
          }
          return 1;
        }
        if ( s_cameraman.liveRecording )
        {
          s_cameraman.liveRecording = 0;
          return 1;
        }
        s_cameraman.liveRecording = 1;
        *(_OWORD *)s_cameraman.velocity.v = 0i64;
        s_cameraman.angVel.v[1] = 0.0;
        s_cameraman.angVel.v[2] = 0.0;
        s_cameraman.fovVel = 0.0;
        CL_Cameraman_GetCamera(LOCAL_CLIENT_0, &s_cameraman.prevCam, NULL, 0, 0.0);
        maxKeyframe = s_cameraman.kf->maxKeyframe;
        if ( !maxKeyframe )
        {
          s_cameraman.currentFrame = 0;
          s_cameraman.currentTime = 0.0;
          goto LABEL_224;
        }
        goto LABEL_62;
      case 21:
        if ( down )
        {
          if ( s_cameraman.buttonAlt )
          {
            curKeyframe = s_cameraman.kf->curKeyframe;
            v16 = DVARFLT_cameraman_time;
            if ( !DVARFLT_cameraman_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_time") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v16);
            v17 = (int)(float)(v16->current.value * 60.0);
            if ( ((int)curKeyframe <= 0 || s_cameraman.kf->Keyframes[curKeyframe - 1].frame < v17) && ((int)curKeyframe >= s_cameraman.kf->maxKeyframe - 1 || s_cameraman.kf->Keyframes[curKeyframe + 1].frame > v17) )
              s_cameraman.kf->Keyframes[curKeyframe].frame = v17;
          }
          else
          {
            Dvar_SetFloat_Internal(DVARFLT_cameraman_time, 0.0);
            CL_Cameraman_GrabKeyframe();
          }
        }
        else if ( s_cameraman.buttonAlt )
        {
          v18 = s_cameraman.kf->curKeyframe;
          v19 = DVARFLT_cameraman_time;
          if ( !DVARFLT_cameraman_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_time") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v19);
          v20 = v18;
          kf = s_cameraman.kf;
          for ( i = (int)(float)(v19->current.value * 60.0) - s_cameraman.kf->Keyframes[v18].frame; (int)v18 < s_cameraman.kf->maxKeyframe; kf = s_cameraman.kf )
          {
            kf->Keyframes[v20].frame += i;
            LODWORD(v18) = v18 + 1;
            ++v20;
          }
        }
        else
        {
LABEL_224:
          CL_Cameraman_GrabKeyframe();
        }
        return 1;
      case 22:
        if ( !s_cameraman.buttonAlt )
        {
          CL_Cameraman_PrevKeyframe(altKey, shiftKey, ctrlKey);
          goto LABEL_53;
        }
        CL_Cameraman_GotoKeyframe(0);
        return 1;
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
          CL_Cameraman_NextKeyframe(altKey, shiftKey, ctrlKey);
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
        return 1;
      case 48:
        if ( (_DWORD)shiftKey )
        {
          Mem_LargeLocal::Mem_LargeLocal(&v74, 0x1B800ui64, "KeyframeHeap_t tempHeap");
          m_ptr = v74.m_ptr;
          v27 = (char *)v74.m_ptr;
          if ( s_cameraman.keyRecordings[1].Keyframes )
          {
            memcpy_0(v74.m_ptr, s_cameraman.keyRecordings[1].Keyframes, 44i64 * s_cameraman.keyRecordings[1].maxKeyframe);
            v27 = &m_ptr[44 * s_cameraman.keyRecordings[1].maxKeyframe];
            s_cameraman.keyRecordings[1].kfsAvailable = s_cameraman.keyRecordings[1].maxKeyframe;
          }
          if ( s_cameraman.keyRecordings[2].Keyframes )
          {
            memcpy_0(v27, s_cameraman.keyRecordings[2].Keyframes, 44i64 * s_cameraman.keyRecordings[2].maxKeyframe);
            v27 += 44 * s_cameraman.keyRecordings[2].maxKeyframe;
            s_cameraman.keyRecordings[2].kfsAvailable = s_cameraman.keyRecordings[2].maxKeyframe;
          }
          if ( s_cameraman.keyRecordings[3].Keyframes )
          {
            memcpy_0(v27, s_cameraman.keyRecordings[3].Keyframes, 44i64 * s_cameraman.keyRecordings[3].maxKeyframe);
            v27 += 44 * s_cameraman.keyRecordings[3].maxKeyframe;
            s_cameraman.keyRecordings[3].kfsAvailable = s_cameraman.keyRecordings[3].maxKeyframe;
          }
          if ( s_cameraman.keyRecordings[4].Keyframes )
          {
            memcpy_0(v27, s_cameraman.keyRecordings[4].Keyframes, 44i64 * s_cameraman.keyRecordings[4].maxKeyframe);
            v27 += 44 * s_cameraman.keyRecordings[4].maxKeyframe;
            s_cameraman.keyRecordings[4].kfsAvailable = s_cameraman.keyRecordings[4].maxKeyframe;
          }
          if ( s_cameraman.keyRecordings[5].Keyframes )
          {
            memcpy_0(v27, s_cameraman.keyRecordings[5].Keyframes, 44i64 * s_cameraman.keyRecordings[5].maxKeyframe);
            v27 += 44 * s_cameraman.keyRecordings[5].maxKeyframe;
            s_cameraman.keyRecordings[5].kfsAvailable = s_cameraman.keyRecordings[5].maxKeyframe;
          }
          if ( s_cameraman.keyRecordings[6].Keyframes )
          {
            memcpy_0(v27, s_cameraman.keyRecordings[6].Keyframes, 44i64 * s_cameraman.keyRecordings[6].maxKeyframe);
            v27 += 44 * s_cameraman.keyRecordings[6].maxKeyframe;
            s_cameraman.keyRecordings[6].kfsAvailable = s_cameraman.keyRecordings[6].maxKeyframe;
          }
          if ( s_cameraman.keyRecordings[7].Keyframes )
          {
            memcpy_0(v27, s_cameraman.keyRecordings[7].Keyframes, 44i64 * s_cameraman.keyRecordings[7].maxKeyframe);
            v27 += 44 * s_cameraman.keyRecordings[7].maxKeyframe;
            s_cameraman.keyRecordings[7].kfsAvailable = s_cameraman.keyRecordings[7].maxKeyframe;
          }
          if ( s_cameraman.keyRecordings[8].Keyframes )
          {
            memcpy_0(v27, s_cameraman.keyRecordings[8].Keyframes, 44i64 * s_cameraman.keyRecordings[8].maxKeyframe);
            v27 += 44 * s_cameraman.keyRecordings[8].maxKeyframe;
            s_cameraman.keyRecordings[8].kfsAvailable = s_cameraman.keyRecordings[8].maxKeyframe;
          }
          if ( s_cameraman.keyRecordings[9].Keyframes )
          {
            memcpy_0(v27, s_cameraman.keyRecordings[9].Keyframes, 44i64 * s_cameraman.keyRecordings[9].maxKeyframe);
            v27 += 44 * s_cameraman.keyRecordings[9].maxKeyframe;
            s_cameraman.keyRecordings[9].kfsAvailable = s_cameraman.keyRecordings[9].maxKeyframe;
          }
          if ( s_cameraman.keyRecordings[0].Keyframes && s_cameraman.keyRecordings[0].maxKeyframe )
            memcpy_0(v27, s_cameraman.keyRecordings[0].Keyframes, 44i64 * s_cameraman.keyRecordings[0].maxKeyframe);
          s_cameraman.keyRecordings[0].kfsAvailable = (m_ptr - v27 + 112640) / 44;
          if ( s_cameraman.keyRecordings[1].Keyframes )
          {
            s_cameraman.keyRecordings[1].Keyframes = (CameramanKeyframe *)&s_cameraman;
            memcpy_0(&s_cameraman, m_ptr, 44i64 * s_cameraman.keyRecordings[1].maxKeyframe);
            v28 = 44i64 * s_cameraman.keyRecordings[1].maxKeyframe;
            m_ptr += v28;
            Keyframes = (Cameraman_t *)((char *)&s_cameraman + v28);
          }
          if ( s_cameraman.keyRecordings[2].Keyframes )
          {
            s_cameraman.keyRecordings[2].Keyframes = (CameramanKeyframe *)Keyframes;
            memcpy_0(Keyframes, m_ptr, 44i64 * s_cameraman.keyRecordings[2].maxKeyframe);
            v29 = 44i64 * s_cameraman.keyRecordings[2].maxKeyframe;
            m_ptr += v29;
            Keyframes = (Cameraman_t *)((char *)Keyframes + v29);
          }
          if ( s_cameraman.keyRecordings[3].Keyframes )
          {
            s_cameraman.keyRecordings[3].Keyframes = (CameramanKeyframe *)Keyframes;
            memcpy_0(Keyframes, m_ptr, 44i64 * s_cameraman.keyRecordings[3].maxKeyframe);
            v30 = 44i64 * s_cameraman.keyRecordings[3].maxKeyframe;
            m_ptr += v30;
            Keyframes = (Cameraman_t *)((char *)Keyframes + v30);
          }
          if ( s_cameraman.keyRecordings[4].Keyframes )
          {
            s_cameraman.keyRecordings[4].Keyframes = (CameramanKeyframe *)Keyframes;
            memcpy_0(Keyframes, m_ptr, 44i64 * s_cameraman.keyRecordings[4].maxKeyframe);
            v31 = 44i64 * s_cameraman.keyRecordings[4].maxKeyframe;
            m_ptr += v31;
            Keyframes = (Cameraman_t *)((char *)Keyframes + v31);
          }
          if ( s_cameraman.keyRecordings[5].Keyframes )
          {
            s_cameraman.keyRecordings[5].Keyframes = (CameramanKeyframe *)Keyframes;
            memcpy_0(Keyframes, m_ptr, 44i64 * s_cameraman.keyRecordings[5].maxKeyframe);
            v32 = 44i64 * s_cameraman.keyRecordings[5].maxKeyframe;
            m_ptr += v32;
            Keyframes = (Cameraman_t *)((char *)Keyframes + v32);
          }
          if ( s_cameraman.keyRecordings[6].Keyframes )
          {
            s_cameraman.keyRecordings[6].Keyframes = (CameramanKeyframe *)Keyframes;
            memcpy_0(Keyframes, m_ptr, 44i64 * s_cameraman.keyRecordings[6].maxKeyframe);
            v33 = 44i64 * s_cameraman.keyRecordings[6].maxKeyframe;
            m_ptr += v33;
            Keyframes = (Cameraman_t *)((char *)Keyframes + v33);
          }
          if ( s_cameraman.keyRecordings[7].Keyframes )
          {
            s_cameraman.keyRecordings[7].Keyframes = (CameramanKeyframe *)Keyframes;
            memcpy_0(Keyframes, m_ptr, 44i64 * s_cameraman.keyRecordings[7].maxKeyframe);
            v34 = 44i64 * s_cameraman.keyRecordings[7].maxKeyframe;
            m_ptr += v34;
            Keyframes = (Cameraman_t *)((char *)Keyframes + v34);
          }
          if ( s_cameraman.keyRecordings[8].Keyframes )
          {
            s_cameraman.keyRecordings[8].Keyframes = (CameramanKeyframe *)Keyframes;
            memcpy_0(Keyframes, m_ptr, 44i64 * s_cameraman.keyRecordings[8].maxKeyframe);
            v35 = 44i64 * s_cameraman.keyRecordings[8].maxKeyframe;
            m_ptr += v35;
            Keyframes = (Cameraman_t *)((char *)Keyframes + v35);
          }
          if ( s_cameraman.keyRecordings[9].Keyframes )
          {
            s_cameraman.keyRecordings[9].Keyframes = (CameramanKeyframe *)Keyframes;
            memcpy_0(Keyframes, m_ptr, 44i64 * s_cameraman.keyRecordings[9].maxKeyframe);
            v36 = 44i64 * s_cameraman.keyRecordings[9].maxKeyframe;
            m_ptr += v36;
            Keyframes = (Cameraman_t *)((char *)Keyframes + v36);
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
            v37 = (float)s_cameraman.currentFrame * 0.016666668;
            s_cameraman.currentTime = v37;
            CL_Cameraman_GetValuesAtTimeKf(s_cameraman.keyRecordings[0].curKeyframe, v37, &s_cameraman.cam->origin, &s_cameraman.cam->angles, &s_cameraman.cam->fov, &demo_scale);
            s_cameraman.currentFrame = (int)(float)(v37 * 60.0);
            s_cameraman.currentTime = v37;
            Dvar_SetFloat_Internal(DVARFLT_cameraman_fov, s_cameraman.cam->fov);
            Dvar_SetFloat_Internal(DVARFLT_cameraman_demoscale, demo_scale);
            Dvar_SetFloat_Internal(DVARFLT_cameraman_time, s_cameraman.currentTime);
          }
          Mem_LargeLocal::~Mem_LargeLocal(&v74);
        }
        else
        {
          if ( (_DWORD)ctrlKey )
            CL_Cameraman_GetCamera(localClientNum, &s_cameraman.main_cam, NULL, 0, 0.0);
          s_cameraman.focus_cent = NULL;
          s_cameraman.cam = &s_cameraman.main_cam;
          s_cameraman.lerpSpeed = 0.0;
          s_cameraman.lerpSmooth = 1;
          *(_OWORD *)s_cameraman.prev_cam_pos.v = *(_OWORD *)s_cameraman.main_cam.origin.v;
          s_cameraman.prev_cam_angles.v[1] = s_cameraman.main_cam.angles.v[1];
          s_cameraman.prev_cam_angles.v[2] = s_cameraman.main_cam.angles.v[2];
        }
        return 1;
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
        v38 = v4 - 48;
        if ( (_DWORD)shiftKey )
        {
          if ( (_DWORD)ctrlKey )
            CL_Cameraman_GetEntFocus(v38)->initd = 0;
          else
            CL_Cameraman_Switch_Recordings(v38);
          return 1;
        }
        if ( (_DWORD)ctrlKey )
        {
          CL_Cameraman_InitFocusEnt(localClientNum, NULL, v38, 1, 1);
          return 1;
        }
        if ( CL_Cameraman_GetEntFocus(v38)->cent )
        {
          cent = CL_Cameraman_GetEntFocus(v38)->cent;
          if ( (cent->flags & 1) != 0 )
            CL_Cameraman_InitFocusEnt(localClientNum, cent, v38, 0, 0);
          else
            CL_Cameraman_GetEntFocus(v38)->cent = NULL;
          return 1;
        }
        if ( CL_Cameraman_GetEntFocus(v38)->notEnt )
        {
          CL_Cameraman_InitFocusEnt(localClientNum, NULL, v38, 0, 1);
          return 1;
        }
        LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
        v41 = truncate_cast<short,int>(LocalClientGlobals->clientNum);
        Entity = CG_GetEntity(localClientNum, v41);
        v43 = 1;
        if ( v38 <= 1 )
        {
LABEL_143:
          if ( Entity )
          {
LABEL_147:
            CL_Cameraman_GetEntFocus(v38)->cent = Entity;
            CL_Cameraman_InitFocusEnt(localClientNum, Entity, v38, 0, 0);
            return 1;
          }
        }
        else
        {
          while ( 1 )
          {
            Entity = CL_Cameraman_FindNextValidClient(localClientNum, Entity, 1, s_cameraman.altKey != 0);
            if ( !Entity )
              break;
            if ( ++v43 >= v38 )
              goto LABEL_143;
          }
        }
        if ( s_cameraman.focus_cent )
        {
          CL_Cameraman_InitFocusEnt(localClientNum, Entity, v38, 0, 0);
          goto LABEL_160;
        }
        Entity = CG_GetEntity(localClientNum, v41);
        goto LABEL_147;
      case 99:
        if ( (_DWORD)shiftKey )
        {
          s_cameraman.kf->maxKeyframe = 0;
          s_cameraman.kf->curKeyframe = 0;
        }
        else
        {
          v67 = s_cameraman.kf;
          v68 = s_cameraman.kf->maxKeyframe;
          if ( v68 > 0 )
          {
            v69 = s_cameraman.kf->curKeyframe;
            if ( (int)v69 < v68 - 1 )
            {
              v70 = v69;
              do
              {
                v71 = v67->Keyframes;
                *(__m256i *)&v71[v70].frame = *(__m256i *)&v71[v70 + 1].frame;
                *(double *)v71[v70].angles.v = *(double *)v71[v70 + 1].angles.v;
                v71[v70].angles.v[2] = v71[v70 + 1].angles.v[2];
                LODWORD(v69) = v69 + 1;
                ++v70;
                v67 = s_cameraman.kf;
              }
              while ( (int)v69 < s_cameraman.kf->maxKeyframe - 1 );
            }
            --v67->maxKeyframe;
            v67 = s_cameraman.kf;
          }
          v72 = v67->curKeyframe;
          if ( v72 > 0 )
            v67->curKeyframe = v72 - 1;
        }
        return 1;
      case 100:
        s_cameraman.joint2Set = CJ_ROOT;
        focus_cent = s_cameraman.focus_cent;
        if ( !s_cameraman.focus_cent )
          return 1;
        v57 = 1;
        goto LABEL_175;
      case 101:
        prev_cam_angles = s_cameraman.prev_cam_angles;
        v74.m_ptr = *(void **)s_cameraman.prev_cam_pos.v;
        *(float *)&v74.m_size = s_cameraman.prev_cam_pos.v[2];
        CL_Cameraman_FindClosestCEntities(localClientNum, (const vec3_t *)&v74, &prev_cam_angles);
        if ( s_cameraman.sortedEntListCount <= 0 )
          return 1;
        v53 = s_cameraman.sortedEntList[0].cent;
        s_cameraman.sortedEntListSelect = 0;
        if ( !s_cameraman.focus_cent )
          CL_Cameraman_InitFocusEnt(localClientNum, s_cameraman.sortedEntList[0].cent, 1, 1, 0);
        s_cameraman.focus_cent = v53;
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
          return 1;
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
          s_cameraman.alt_cam.origin = s_cameraman.prev_cam_angles;
          s_cameraman.alt_cam.angles = s_cameraman.prev_cam_angles;
          s_cameraman.alt_cam.fov = s_cameraman.cam->fov;
        }
        s_cameraman.filterInited = 0;
        s_cameraman.steadyCamReady = 0;
        return 1;
      case 108:
        s_cameraman.lerpMode = !s_cameraman.lerpMode;
        if ( s_cameraman.lerpMode )
        {
          s_cameraman.alt_cam.origin = s_cameraman.prev_cam_angles;
          s_cameraman.alt_cam.angles = s_cameraman.prev_cam_angles;
          s_cameraman.alt_cam.fov = s_cameraman.cam->fov;
        }
        return 1;
      case 109:
        s_cameraman.steadyTwoAxis = !s_cameraman.steadyTwoAxis;
        s_cameraman.filterInited = 0;
        s_cameraman.steadyCamReady = 0;
        return 1;
      case 110:
        s_cameraman.rollCorrect = !s_cameraman.rollCorrect;
        return 1;
      case 115:
        s_cameraman.smoothPlayback = !s_cameraman.smoothPlayback;
        return 1;
      case 134:
        if ( (_DWORD)shiftKey )
        {
          _XMM0 = (unsigned int)ctrlKey;
          __asm { vpcmpeqd xmm2, xmm0, xmm1 }
          _XMM1 = LODWORD(FLOAT_0_1);
          __asm { vblendvps xmm6, xmm1, xmm3, xmm2 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cameraman_time, "cameraman_time");
          v49 = _XMM0;
          *(float *)&v49 = *(float *)&_XMM0 - *(float *)&_XMM6;
          _XMM1 = v49;
          __asm { vmaxss  xmm1, xmm1, xmm0; value }
          Dvar_SetFloat_Internal(DVARFLT_cameraman_time, *(float *)&_XMM1);
          return 1;
        }
        if ( (_DWORD)ctrlKey )
        {
          sortedEntListCount = s_cameraman.sortedEntListCount;
          if ( s_cameraman.sortedEntListCount <= 0 )
            return 1;
          v52 = s_cameraman.sortedEntListSelect + s_cameraman.sortedEntListCount - 1;
          goto LABEL_153;
        }
        if ( !s_cameraman.focus_cent )
          return 1;
        EntFocus = CL_Cameraman_GetEntFocus(s_cameraman.focus_idx);
        v55 = -1;
        goto LABEL_157;
      case 135:
        if ( (_DWORD)shiftKey )
        {
          _XMM0 = (unsigned int)ctrlKey;
          __asm { vpcmpeqd xmm2, xmm0, xmm1 }
          _XMM1 = LODWORD(FLOAT_0_1);
          __asm { vblendvps xmm6, xmm1, xmm3, xmm2 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cameraman_time, "cameraman_time");
          Dvar_SetFloat_Internal(DVARFLT_cameraman_time, *(float *)&_XMM0 + *(float *)&_XMM6);
          return 1;
        }
        if ( (_DWORD)ctrlKey )
        {
          sortedEntListCount = s_cameraman.sortedEntListCount;
          if ( s_cameraman.sortedEntListCount <= 0 )
            return 1;
          v52 = s_cameraman.sortedEntListSelect + 1;
LABEL_153:
          s_cameraman.sortedEntListSelect = v52 % sortedEntListCount;
          v53 = s_cameraman.sortedEntList[v52 % sortedEntListCount].cent;
          s_cameraman.focus_cent = v53;
          if ( !v53 )
            return 1;
LABEL_172:
          CL_Cameraman_GetEntFocus(s_cameraman.focus_idx)->cent = v53;
LABEL_173:
          v57 = 1;
        }
        else
        {
          if ( !s_cameraman.focus_cent )
            return 1;
          EntFocus = CL_Cameraman_GetEntFocus(s_cameraman.focus_idx);
          v55 = 1;
LABEL_157:
          NextValidClient = CL_Cameraman_FindNextValidClient(localClientNum, EntFocus->cent, v55, 0);
          s_cameraman.focus_cent = NextValidClient;
          if ( !NextValidClient )
          {
            CL_Cameraman_GetEntFocus(s_cameraman.focus_idx)->cent = NULL;
LABEL_160:
            s_cameraman.focus_cent = NULL;
            s_cameraman.cam = &s_cameraman.main_cam;
            return 1;
          }
          CL_Cameraman_GetEntFocus(s_cameraman.focus_idx)->cent = NextValidClient;
          v57 = 0;
        }
        focus_cent = s_cameraman.focus_cent;
LABEL_175:
        CL_Cameraman_InitFocusEnt(localClientNum, focus_cent, s_cameraman.focus_idx, v57, 0);
        return 1;
      case 165:
        v63 = Dvar_GetInt_Internal_DebugName(DVARINT_cameraman_debugDraw, "cameraman_debugDraw") + 1;
        v64 = 0;
        if ( v63 < 4 )
          v64 = v63;
        Dvar_SetInt_Internal(DVARINT_cameraman_debugDraw, v64);
        return 1;
      default:
        return 0;
    }
  }
  return 1;
}

/*
==============
CL_Cameraman_Init
==============
*/
void CL_Cameraman_Init(bool isFullInit)
{
  Cameraman_t *Keyframes; 
  _BYTE *v2; 
  char *v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  float v13; 
  vec3_t *p_secondAngles; 
  __int64 v15; 
  float demo_scale; 
  __int64 v17; 
  tmat33_t<vec3_t> v18; 
  tmat33_t<vec3_t> axis; 

  v17 = -2i64;
  if ( isFullInit )
  {
    Keyframes = &s_cameraman;
    memset_0(&s_cameraman, 0, sizeof(s_cameraman));
    s_cameraman.cam = &s_cameraman.main_cam;
    Mem_LargeLocal::Mem_LargeLocal((Mem_LargeLocal *)&v18, 0x1B800ui64, "KeyframeHeap_t tempHeap");
    v2 = *(_BYTE **)v18.m[0].v;
    v3 = *(char **)v18.m[0].v;
    if ( s_cameraman.keyRecordings[1].Keyframes )
    {
      memcpy_0(*(void **)v18.m[0].v, s_cameraman.keyRecordings[1].Keyframes, 44i64 * s_cameraman.keyRecordings[1].maxKeyframe);
      v3 = &v2[44 * s_cameraman.keyRecordings[1].maxKeyframe];
      s_cameraman.keyRecordings[1].kfsAvailable = s_cameraman.keyRecordings[1].maxKeyframe;
    }
    if ( s_cameraman.keyRecordings[2].Keyframes )
    {
      memcpy_0(v3, s_cameraman.keyRecordings[2].Keyframes, 44i64 * s_cameraman.keyRecordings[2].maxKeyframe);
      v3 += 44 * s_cameraman.keyRecordings[2].maxKeyframe;
      s_cameraman.keyRecordings[2].kfsAvailable = s_cameraman.keyRecordings[2].maxKeyframe;
    }
    if ( s_cameraman.keyRecordings[3].Keyframes )
    {
      memcpy_0(v3, s_cameraman.keyRecordings[3].Keyframes, 44i64 * s_cameraman.keyRecordings[3].maxKeyframe);
      v3 += 44 * s_cameraman.keyRecordings[3].maxKeyframe;
      s_cameraman.keyRecordings[3].kfsAvailable = s_cameraman.keyRecordings[3].maxKeyframe;
    }
    if ( s_cameraman.keyRecordings[4].Keyframes )
    {
      memcpy_0(v3, s_cameraman.keyRecordings[4].Keyframes, 44i64 * s_cameraman.keyRecordings[4].maxKeyframe);
      v3 += 44 * s_cameraman.keyRecordings[4].maxKeyframe;
      s_cameraman.keyRecordings[4].kfsAvailable = s_cameraman.keyRecordings[4].maxKeyframe;
    }
    if ( s_cameraman.keyRecordings[5].Keyframes )
    {
      memcpy_0(v3, s_cameraman.keyRecordings[5].Keyframes, 44i64 * s_cameraman.keyRecordings[5].maxKeyframe);
      v3 += 44 * s_cameraman.keyRecordings[5].maxKeyframe;
      s_cameraman.keyRecordings[5].kfsAvailable = s_cameraman.keyRecordings[5].maxKeyframe;
    }
    if ( s_cameraman.keyRecordings[6].Keyframes )
    {
      memcpy_0(v3, s_cameraman.keyRecordings[6].Keyframes, 44i64 * s_cameraman.keyRecordings[6].maxKeyframe);
      v3 += 44 * s_cameraman.keyRecordings[6].maxKeyframe;
      s_cameraman.keyRecordings[6].kfsAvailable = s_cameraman.keyRecordings[6].maxKeyframe;
    }
    if ( s_cameraman.keyRecordings[7].Keyframes )
    {
      memcpy_0(v3, s_cameraman.keyRecordings[7].Keyframes, 44i64 * s_cameraman.keyRecordings[7].maxKeyframe);
      v3 += 44 * s_cameraman.keyRecordings[7].maxKeyframe;
      s_cameraman.keyRecordings[7].kfsAvailable = s_cameraman.keyRecordings[7].maxKeyframe;
    }
    if ( s_cameraman.keyRecordings[8].Keyframes )
    {
      memcpy_0(v3, s_cameraman.keyRecordings[8].Keyframes, 44i64 * s_cameraman.keyRecordings[8].maxKeyframe);
      v3 += 44 * s_cameraman.keyRecordings[8].maxKeyframe;
      s_cameraman.keyRecordings[8].kfsAvailable = s_cameraman.keyRecordings[8].maxKeyframe;
    }
    if ( s_cameraman.keyRecordings[9].Keyframes )
    {
      memcpy_0(v3, s_cameraman.keyRecordings[9].Keyframes, 44i64 * s_cameraman.keyRecordings[9].maxKeyframe);
      v3 += 44 * s_cameraman.keyRecordings[9].maxKeyframe;
      s_cameraman.keyRecordings[9].kfsAvailable = s_cameraman.keyRecordings[9].maxKeyframe;
    }
    if ( s_cameraman.keyRecordings[0].Keyframes && s_cameraman.keyRecordings[0].maxKeyframe )
      memcpy_0(v3, s_cameraman.keyRecordings[0].Keyframes, 44i64 * s_cameraman.keyRecordings[0].maxKeyframe);
    s_cameraman.keyRecordings[0].kfsAvailable = (v2 - v3 + 112640) / 44;
    if ( s_cameraman.keyRecordings[1].Keyframes )
    {
      s_cameraman.keyRecordings[1].Keyframes = (CameramanKeyframe *)&s_cameraman;
      memcpy_0(&s_cameraman, v2, 44i64 * s_cameraman.keyRecordings[1].maxKeyframe);
      v4 = 44i64 * s_cameraman.keyRecordings[1].maxKeyframe;
      v2 += v4;
      Keyframes = (Cameraman_t *)((char *)&s_cameraman + v4);
    }
    if ( s_cameraman.keyRecordings[2].Keyframes )
    {
      s_cameraman.keyRecordings[2].Keyframes = (CameramanKeyframe *)Keyframes;
      memcpy_0(Keyframes, v2, 44i64 * s_cameraman.keyRecordings[2].maxKeyframe);
      v5 = 44i64 * s_cameraman.keyRecordings[2].maxKeyframe;
      v2 += v5;
      Keyframes = (Cameraman_t *)((char *)Keyframes + v5);
    }
    if ( s_cameraman.keyRecordings[3].Keyframes )
    {
      s_cameraman.keyRecordings[3].Keyframes = (CameramanKeyframe *)Keyframes;
      memcpy_0(Keyframes, v2, 44i64 * s_cameraman.keyRecordings[3].maxKeyframe);
      v6 = 44i64 * s_cameraman.keyRecordings[3].maxKeyframe;
      v2 += v6;
      Keyframes = (Cameraman_t *)((char *)Keyframes + v6);
    }
    if ( s_cameraman.keyRecordings[4].Keyframes )
    {
      s_cameraman.keyRecordings[4].Keyframes = (CameramanKeyframe *)Keyframes;
      memcpy_0(Keyframes, v2, 44i64 * s_cameraman.keyRecordings[4].maxKeyframe);
      v7 = 44i64 * s_cameraman.keyRecordings[4].maxKeyframe;
      v2 += v7;
      Keyframes = (Cameraman_t *)((char *)Keyframes + v7);
    }
    if ( s_cameraman.keyRecordings[5].Keyframes )
    {
      s_cameraman.keyRecordings[5].Keyframes = (CameramanKeyframe *)Keyframes;
      memcpy_0(Keyframes, v2, 44i64 * s_cameraman.keyRecordings[5].maxKeyframe);
      v8 = 44i64 * s_cameraman.keyRecordings[5].maxKeyframe;
      v2 += v8;
      Keyframes = (Cameraman_t *)((char *)Keyframes + v8);
    }
    if ( s_cameraman.keyRecordings[6].Keyframes )
    {
      s_cameraman.keyRecordings[6].Keyframes = (CameramanKeyframe *)Keyframes;
      memcpy_0(Keyframes, v2, 44i64 * s_cameraman.keyRecordings[6].maxKeyframe);
      v9 = 44i64 * s_cameraman.keyRecordings[6].maxKeyframe;
      v2 += v9;
      Keyframes = (Cameraman_t *)((char *)Keyframes + v9);
    }
    if ( s_cameraman.keyRecordings[7].Keyframes )
    {
      s_cameraman.keyRecordings[7].Keyframes = (CameramanKeyframe *)Keyframes;
      memcpy_0(Keyframes, v2, 44i64 * s_cameraman.keyRecordings[7].maxKeyframe);
      v10 = 44i64 * s_cameraman.keyRecordings[7].maxKeyframe;
      v2 += v10;
      Keyframes = (Cameraman_t *)((char *)Keyframes + v10);
    }
    if ( s_cameraman.keyRecordings[8].Keyframes )
    {
      s_cameraman.keyRecordings[8].Keyframes = (CameramanKeyframe *)Keyframes;
      memcpy_0(Keyframes, v2, 44i64 * s_cameraman.keyRecordings[8].maxKeyframe);
      v11 = 44i64 * s_cameraman.keyRecordings[8].maxKeyframe;
      v2 += v11;
      Keyframes = (Cameraman_t *)((char *)Keyframes + v11);
    }
    if ( s_cameraman.keyRecordings[9].Keyframes )
    {
      s_cameraman.keyRecordings[9].Keyframes = (CameramanKeyframe *)Keyframes;
      memcpy_0(Keyframes, v2, 44i64 * s_cameraman.keyRecordings[9].maxKeyframe);
      v12 = 44i64 * s_cameraman.keyRecordings[9].maxKeyframe;
      v2 += v12;
      Keyframes = (Cameraman_t *)((char *)Keyframes + v12);
    }
    s_cameraman.keyRecordings[0].Keyframes = (CameramanKeyframe *)Keyframes;
    if ( s_cameraman.keyRecordings[0].maxKeyframe )
    {
      memcpy_0(Keyframes, v2, 44i64 * s_cameraman.keyRecordings[0].maxKeyframe);
      Keyframes = (Cameraman_t *)s_cameraman.keyRecordings[0].Keyframes;
    }
    s_cameraman.currentRecording = 0;
    s_cameraman.kf = s_cameraman.keyRecordings;
    if ( s_cameraman.keyRecordings[0].maxKeyframe > 0 )
    {
      s_cameraman.currentFrame = Keyframes->KeyframeHeap[s_cameraman.keyRecordings[0].curKeyframe].frame;
      v13 = (float)s_cameraman.currentFrame * 0.016666668;
      s_cameraman.currentTime = v13;
      CL_Cameraman_GetValuesAtTimeKf(s_cameraman.keyRecordings[0].curKeyframe, v13, &s_cameraman.cam->origin, &s_cameraman.cam->angles, &s_cameraman.cam->fov, &demo_scale);
      s_cameraman.currentFrame = (int)(float)(v13 * 60.0);
      s_cameraman.currentTime = v13;
      Dvar_SetFloat_Internal(DVARFLT_cameraman_fov, s_cameraman.cam->fov);
      Dvar_SetFloat_Internal(DVARFLT_cameraman_demoscale, demo_scale);
      Dvar_SetFloat_Internal(DVARFLT_cameraman_time, s_cameraman.currentTime);
    }
    Mem_LargeLocal::~Mem_LargeLocal((Mem_LargeLocal *)&v18);
    p_secondAngles = &s_bone2Camera[0].secondAngles;
    v15 = 5i64;
    do
    {
      AnglesToAxis(p_secondAngles - 1, &v18);
      AnglesToAxis(p_secondAngles, &axis);
      MatrixMultiply(&axis, &v18, (tmat33_t<vec3_t> *)&p_secondAngles[2]);
      p_secondAngles = (vec3_t *)((char *)p_secondAngles + 88);
      --v15;
    }
    while ( v15 );
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
  int v9; 
  entityType_s eType; 
  CameraJoints_e v11; 
  CameraJoints_e joint2Set; 
  bool v13; 
  CameraJoints_e v14; 
  __int64 v15; 
  entFocus_t *EntFocus; 
  entFocus_t *v17; 
  entityType_s v18; 
  Camera_t cam; 

  v9 = 655398;
  if ( !cent || !Com_GetClientDObj(cent->nextState.number, localClientNum) )
    goto LABEL_13;
  eType = cent->nextState.eType;
  if ( eType == ET_VEHICLE )
  {
    v11 = CJ_VEHICLE;
LABEL_14:
    s_cameraman.joint2Set = v11;
    goto LABEL_15;
  }
  if ( (cent->flags & 1) == 0 || (unsigned __int16)eType > ET_ACTOR || !_bittest(&v9, eType) )
  {
LABEL_13:
    v11 = CJ_ROOT;
    goto LABEL_14;
  }
  joint2Set = s_cameraman.joint2Set;
  v13 = s_cameraman.joint2Set <= (unsigned int)CJ_FLASH;
  v14 = s_cameraman.joint2Set;
  if ( s_cameraman.joint2Set > (unsigned int)CJ_FLASH )
    v14 = CJ_HEAD;
  s_cameraman.joint2Set = v14;
  v11 = CJ_HEAD;
  if ( v13 )
    v11 = joint2Set;
LABEL_15:
  v15 = v11;
  EntFocus = CL_Cameraman_GetEntFocus(focus_idx);
  v17 = EntFocus;
  if ( init || !EntFocus->initd )
  {
    EntFocus->cam.origin.v[0] = s_bone2Camera[v15].initOrigin.v[0];
    EntFocus->cam.origin.v[1] = s_bone2Camera[v15].initOrigin.v[1];
    EntFocus->cam.origin.v[2] = s_bone2Camera[v15].initOrigin.v[2];
    *(_QWORD *)EntFocus->cam.angles.v = 0i64;
    EntFocus->cam.angles.v[2] = 0.0;
    EntFocus->cam.fov = s_cameraman.main_cam.fov;
    EntFocus->camJoint = s_cameraman.joint2Set;
    EntFocus->notEnt = notEnt;
    EntFocus->initd = 1;
    EntFocus->cent = NULL;
    s_cameraman.filterInited = 0;
    if ( notEnt )
      CL_Cameraman_GetCamera(localClientNum, &EntFocus->cam, NULL, 0, 0.0);
  }
  CL_Cameraman_GetCamera(localClientNum, &s_cameraman.alt_cam, NULL, 0, 0.0);
  s_cameraman.focus_cent = cent;
  if ( cent )
  {
    v17->cent = cent;
    if ( init )
    {
      if ( (cent->flags & 1) == 0 || (v18 = cent->nextState.eType, (unsigned __int16)v18 > ET_ACTOR) || !_bittest(&v9, v18) )
      {
        if ( s_cameraman.joint2Set == CJ_ROOT )
        {
          *(_QWORD *)v17->cam.origin.v = 1128792064i64;
          *(_QWORD *)&v17->cam.origin.z = 0i64;
          *(_QWORD *)&v17->cam.angles.y = 0i64;
        }
      }
    }
  }
  else
  {
    v17->cent = NULL;
  }
  s_cameraman.focus_idx = focus_idx;
  s_cameraman.cam = &v17->cam;
  CL_Cameraman_GetCamera(localClientNum, &cam, NULL, 0, 0.0);
  *(_OWORD *)s_cameraman.prev_cam_pos.v = *(_OWORD *)cam.origin.v;
  s_cameraman.prev_cam_angles.v[1] = cam.angles.v[1];
  s_cameraman.prev_cam_angles.v[2] = cam.angles.v[2];
  if ( s_cameraman.lerpMode )
  {
    s_cameraman.lerpSpeed = 0.0;
    s_cameraman.lerpSmooth = 1;
  }
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
void CL_Cameraman_NextKeyframe()
{
  CameramanRecording_t *kf; 
  int maxKeyframe; 
  __int64 curKeyframe; 
  float v3; 
  float demo_scale; 

  ++s_cameraman.kf->curKeyframe;
  kf = s_cameraman.kf;
  maxKeyframe = s_cameraman.kf->maxKeyframe;
  if ( s_cameraman.kf->curKeyframe >= maxKeyframe )
  {
    s_cameraman.kf->curKeyframe = maxKeyframe - 1;
    kf = s_cameraman.kf;
  }
  curKeyframe = kf->curKeyframe;
  v3 = (float)kf->Keyframes[curKeyframe].frame * 0.016666668;
  CL_Cameraman_GetValuesAtTimeKf(curKeyframe, v3, &s_cameraman.cam->origin, &s_cameraman.cam->angles, &s_cameraman.cam->fov, &demo_scale);
  s_cameraman.currentFrame = (int)(float)(v3 * 60.0);
  s_cameraman.currentTime = v3;
  Dvar_SetFloat_Internal(DVARFLT_cameraman_fov, s_cameraman.cam->fov);
  Dvar_SetFloat_Internal(DVARFLT_cameraman_demoscale, demo_scale);
  Dvar_SetFloat_Internal(DVARFLT_cameraman_time, s_cameraman.currentTime);
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
      Dvar_SetFloat_Internal(DVARFLT_replay_speed, 1.0);
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
  char v4; 
  bool v5; 
  bool fullPlayback; 

  v4 = reset;
  v5 = play;
  if ( s_cameraman.kf->maxKeyframe > 0 )
  {
    CL_Cameraman_fixup(play, reset, a3, a4);
    if ( v4 )
      CL_Cameraman_SetToStart();
    s_cameraman.cameraman_playing = v5;
    if ( s_cameraman.fullPlayback || s_cameraman.pausedFullPlayback )
    {
      if ( v5 )
      {
        Dvar_SetFloat_Internal(DVARFLT_replay_speed, 1.0);
        s_cameraman.pausedFullPlayback = 0;
      }
      else
      {
        Dvar_SetFloat_Internal(DVARFLT_replay_speed, 0.0);
        fullPlayback = s_cameraman.fullPlayback;
        s_cameraman.pausedFullPlayback = 1;
        if ( v4 )
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
void CL_Cameraman_PrevKeyframe()
{
  CameramanRecording_t *kf; 
  __int64 curKeyframe; 
  float v2; 
  float demo_scale; 

  --s_cameraman.kf->curKeyframe;
  kf = s_cameraman.kf;
  if ( s_cameraman.kf->curKeyframe < 0 )
  {
    s_cameraman.kf->curKeyframe = 0;
    kf = s_cameraman.kf;
  }
  curKeyframe = kf->curKeyframe;
  v2 = (float)kf->Keyframes[curKeyframe].frame * 0.016666668;
  CL_Cameraman_GetValuesAtTimeKf(curKeyframe, v2, &s_cameraman.cam->origin, &s_cameraman.cam->angles, &s_cameraman.cam->fov, &demo_scale);
  s_cameraman.currentFrame = (int)(float)(v2 * 60.0);
  s_cameraman.currentTime = v2;
  Dvar_SetFloat_Internal(DVARFLT_cameraman_fov, s_cameraman.cam->fov);
  Dvar_SetFloat_Internal(DVARFLT_cameraman_demoscale, demo_scale);
  Dvar_SetFloat_Internal(DVARFLT_cameraman_time, s_cameraman.currentTime);
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
  const dvar_t *v1; 
  __int64 v2; 
  float value; 
  int v4; 
  __int64 v5; 
  CameramanKeyframe *Keyframes; 
  int v7; 
  const dvar_t *v8; 
  double TimeScale; 
  ClActiveClient *Client; 

  v1 = DVARFLT_cameraman_time;
  v2 = k;
  if ( !DVARFLT_cameraman_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  value = v1->current.value;
  v4 = 0;
  v5 = v2;
  Keyframes = s_cameraman.kf->Keyframes;
  v7 = (int)(float)(value * 60.0);
  Keyframes[v5].frame = v7;
  Keyframes[v5].origin = s_cameraman.cam->origin;
  Keyframes[v5].angles = s_cameraman.cam->angles;
  Keyframes[v5].flags = 0;
  v8 = DVARFLT_cameraman_fov;
  if ( !DVARFLT_cameraman_fov && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_fov") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  LODWORD(Keyframes[v5].fov) = v8->current.integer;
  s_cameraman.currentTime = (float)v7 * 0.016666668;
  s_cameraman.currentFrame = (int)(float)(value * 60.0);
  s_cameraman.kf->curKeyframe = v2;
  if ( SV_IsDemoPlaying() )
  {
    if ( SV_IsDemoPlaying() )
      LODWORD(TimeScale) = 0;
    else
      TimeScale = SV_Demo_GetTimeScale();
    Keyframes[v5].demo_scale = *(float *)&TimeScale;
    if ( !clientUIActives[0].frontEndSceneState[0] && clientUIActives[0].cgameInitialized )
    {
      Client = ClActiveClient::GetClient(LOCAL_CLIENT_0);
      v4 = Client->GetServerTime(Client);
    }
    Keyframes[v5].demo_time = v4;
  }
  else
  {
    Keyframes[v5].demo_scale = 1.0;
    Keyframes[v5].demo_time = (int)(float)(s_cameraman.currentTime * 1000.0);
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
      Dvar_SetFloat_Internal(DVARFLT_replay_speed, 1.0);
      s_cameraman.pausedFullPlayback = 0;
    }
  }
}

/*
==============
CL_Cameraman_SetToStart
==============
*/
void CL_Cameraman_SetToStart()
{
  float v0; 
  float currentTime; 
  float demo_scale; 

  if ( s_cameraman.kf->maxKeyframe > 0 )
  {
    v0 = (float)s_cameraman.kf->Keyframes->frame * 0.016666668;
    s_cameraman.currentFrame = s_cameraman.kf->Keyframes->frame;
    s_cameraman.currentTime = v0;
    s_cameraman.currentDemoTime = s_cameraman.kf->Keyframes->demo_time;
    Dvar_SetFloat_Internal(DVARFLT_cameraman_time, v0);
    currentTime = s_cameraman.currentTime;
    CL_Cameraman_GetValuesAtTimeKf(0, s_cameraman.currentTime, &s_cameraman.cam->origin, &s_cameraman.cam->angles, &s_cameraman.cam->fov, &demo_scale);
    s_cameraman.currentFrame = (int)(float)(currentTime * 60.0);
    s_cameraman.currentTime = currentTime;
    Dvar_SetFloat_Internal(DVARFLT_cameraman_fov, s_cameraman.cam->fov);
    Dvar_SetFloat_Internal(DVARFLT_cameraman_demoscale, demo_scale);
    Dvar_SetFloat_Internal(DVARFLT_cameraman_time, s_cameraman.currentTime);
  }
}

/*
==============
CL_Cameraman_SmoothKeyframe
==============
*/

void __fastcall CL_Cameraman_SmoothKeyframe(double t, vec3_t *origin, vec3_t *angles, float *fov, float *demo_scale)
{
  int v5; 
  __int64 maxKeyframe; 
  int v10; 
  __int128 v12; 
  int v14; 
  CameramanKeyframe *Keyframes; 
  __int64 i; 
  int v17; 
  int v18; 
  __int64 v19; 
  CameramanKeyframe *v20; 
  int frame; 
  __int128 v22; 
  int v25; 
  __int64 j; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
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
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  vec3_t origina; 
  vec3_t v51; 
  vec3_t anglesa; 
  vec3_t v53; 

  v5 = 0;
  maxKeyframe = s_cameraman.kf->maxKeyframe;
  v10 = 0;
  v12 = *(_OWORD *)&t;
  *(float *)&v12 = *(float *)&t - cameraman_smooth_lookbehind->current.value;
  _XMM2 = v12;
  __asm { vmaxss  xmm7, xmm2, xmm1 }
  v14 = (int)(float)(*(float *)&_XMM7 * 60.0);
  if ( (int)maxKeyframe > 0 )
  {
    Keyframes = s_cameraman.kf->Keyframes;
    for ( i = 0i64; i < maxKeyframe; ++i )
    {
      if ( Keyframes->frame > v14 )
      {
        if ( v10 )
          v17 = v10 - 1;
        else
          v17 = 0;
        goto LABEL_8;
      }
      ++v10;
      ++Keyframes;
    }
    if ( (int)maxKeyframe > 0 )
    {
      v17 = maxKeyframe - 1;
      if ( s_cameraman.kf->Keyframes[maxKeyframe - 1].frame == v14 )
        goto LABEL_8;
    }
  }
  v17 = s_cameraman.kf->maxKeyframe;
LABEL_8:
  CL_Cameraman_GetValuesAtTimeKf(v17, *(float *)&_XMM7, &origina, &anglesa, &v46, &v48);
  v18 = 0;
  v19 = s_cameraman.kf->maxKeyframe;
  v20 = s_cameraman.kf->Keyframes;
  frame = s_cameraman.kf->Keyframes[v19 - 1].frame;
  v22 = 0i64;
  *(float *)&v22 = (float)frame * 0.016666668;
  _XMM2 = v22;
  __asm { vminss  xmm8, xmm2, xmm1 }
  v25 = (int)(float)(*(float *)&_XMM8 * 60.0);
  if ( (int)v19 > 0 )
  {
    for ( j = 0i64; j < v19; ++j )
    {
      if ( v20->frame > v25 )
      {
        if ( v18 )
          v5 = v18 - 1;
        goto LABEL_15;
      }
      ++v18;
      ++v20;
    }
    if ( (int)v19 > 0 )
    {
      v5 = v19 - 1;
      if ( frame == v25 )
        goto LABEL_15;
    }
  }
  v5 = s_cameraman.kf->maxKeyframe;
LABEL_15:
  CL_Cameraman_GetValuesAtTimeKf(v5, *(float *)&_XMM8, &v51, &v53, &v47, &v49);
  v27 = (float)(*(float *)&t - *(float *)&_XMM7) / (float)(*(float *)&_XMM8 - *(float *)&_XMM7);
  v28 = v51.v[1] - origina.v[1];
  v29 = v51.v[2];
  origin->v[0] = (float)((float)(v51.v[0] - origina.v[0]) * v27) + origina.v[0];
  v30 = (float)(v28 * v27) + origina.v[1];
  v31 = v29 - origina.v[2];
  v32 = v53.v[0];
  origin->v[1] = v30;
  v33 = (float)(v31 * v27) + origina.v[2];
  v34 = v32 - anglesa.v[0];
  v35 = v53.v[1];
  origin->v[2] = v33;
  v36 = (float)(v34 * v27) + anglesa.v[0];
  v37 = v35 - anglesa.v[1];
  v38 = v53.v[2];
  angles->v[0] = v36;
  v39 = (float)(v37 * v27) + anglesa.v[1];
  v40 = v38 - anglesa.v[2];
  v41 = v47;
  angles->v[1] = v39;
  v42 = (float)(v40 * v27) + anglesa.v[2];
  v43 = v41 - v46;
  v44 = v49;
  angles->v[2] = v42;
  v45 = v44 - v48;
  *fov = (float)(v43 * v27) + v46;
  *demo_scale = (float)(v45 * v27) + v48;
}

/*
==============
CL_Cameraman_SteadyCam
==============
*/

void __fastcall CL_Cameraman_SteadyCam(double dT, const vec3_t *startOrigin, const vec3_t *startAngles, const vec3_t *targetOrigin, const vec3_t *targetAngles, vec3_t *outOrigin, vec3_t *outAngles)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  __int64 v15; 
  float *v16; 
  float *v17; 
  const vec3_t *v18; 
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
  double v32; 
  __int128 v34; 
  float v40; 
  float v41; 
  vec4_t to; 
  vec4_t quat; 
  vec4_t result; 
  tmat33_t<vec3_t> axis; 

  __asm { vmaxss  xmm2, xmm0, cs:__real@3c888889 }
  if ( s_cameraman.steadyTwoAxis )
  {
    v8 = targetOrigin->v[0] - startOrigin->v[0];
    v9 = targetOrigin->v[2] - startOrigin->v[2];
    v41 = 59.999996 * cameraman_dampingVMinVel->current.value;
    v10 = targetOrigin->v[1] - startOrigin->v[1];
    v11 = 59.999996 * cameraman_dampingVMinVel2->current.value;
    v12 = 59.999996 * cameraman_dampingVMaxVel2->current.value;
    v13 = 59.999996 * cameraman_dampingVMaxVel->current.value;
    v40 = 1.0 / *(float *)&_XMM2;
    v14 = CL_Cameraman_DampingFraction(cameraman_dampingHFrac->current.value, cameraman_dampingHMinVel->current.value * 59.999996, 59.999996 * cameraman_dampingHMinVel2->current.value, 59.999996 * cameraman_dampingHMaxVel2->current.value, 59.999996 * cameraman_dampingHMaxVel->current.value, fsqrt((float)(v10 * v10) + (float)(v8 * v8)) * (float)(1.0 / *(float *)&_XMM2));
    v19 = CL_Cameraman_DampingFraction(*(float *)(v15 + 40), v41, v11, v12, v13, COERCE_FLOAT(LODWORD(v9) & _xmm) * (float)(1.0 / *(float *)&_XMM2));
    v20 = FLOAT_59_999996;
    v21 = FLOAT_1_0;
    v22 = v19 * v9;
    v23 = v14 * v8;
    v24 = v14 * v10;
  }
  else
  {
    v20 = FLOAT_59_999996;
    v25 = targetOrigin->v[1] - startOrigin->v[1];
    v26 = targetOrigin->v[0] - startOrigin->v[0];
    v27 = targetOrigin->v[2] - startOrigin->v[2];
    v21 = FLOAT_1_0;
    v40 = 1.0 / *(float *)&_XMM2;
    v28 = CL_Cameraman_DampingFraction(cameraman_dampingFrac->current.value, 59.999996 * cameraman_dampingMinVel->current.value, 59.999996 * cameraman_dampingMinVel2->current.value, 59.999996 * cameraman_dampingMaxVel2->current.value, 59.999996 * cameraman_dampingMaxVel->current.value, fsqrt((float)((float)(v25 * v25) + (float)(v26 * v26)) + (float)(v27 * v27)) * (float)(1.0 / *(float *)&_XMM2));
    v22 = v28 * v27;
    v24 = v28 * v25;
    v23 = v28 * v26;
  }
  v29 = v22 + v16[2];
  v30 = v24 + v16[1];
  *v17 = v23 + *v16;
  v17[1] = v30;
  v17[2] = v29;
  AnglesToQuat(v18, &quat);
  AnglesToQuat(targetAngles, &to);
  v31 = (float)((float)((float)(quat.v[1] * to.v[1]) + (float)(quat.v[0] * to.v[0])) + (float)(quat.v[2] * to.v[2])) + (float)(quat.v[3] * to.v[3]);
  v32 = I_fclamp((float)((float)(v31 * 2.0) * v31) - v21, -1.0, v21);
  *(float *)&v32 = acosf_0(*(float *)&v32);
  v34 = *(unsigned __int64 *)&v32;
  *(float *)&v34 = *(float *)&v32 * 57.295776;
  _XMM3 = v34;
  _XMM0 = LODWORD(FLOAT_180_0);
  __asm
  {
    vcmpltss xmm1, xmm0, xmm3
    vblendvps xmm4, xmm3, xmm2, xmm1
    vcmpltss xmm0, xmm4, cs:__real@c3340000
    vblendvps xmm1, xmm4, xmm1, xmm0
  }
  *(float *)&_XMM0 = CL_Cameraman_DampingFraction(cameraman_dampingAFrac->current.value, v20 * cameraman_dampingMinAngle->current.value, v20 * cameraman_dampingMinAngle2->current.value, v20 * cameraman_dampingMaxAngle2->current.value, v20 * cameraman_dampingMaxAngle->current.value, COERCE_FLOAT(_XMM1 & _xmm) * v40);
  QuatSlerp(&quat, &to, *(float *)&_XMM0, &result);
  QuatToAxis(&result, &axis);
  AxisToAngles(&axis, outAngles);
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
      Dvar_SetFloat_Internal(DVARFLT_replay_speed, 0.0);
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
  __int64 v1; 
  _BYTE *m_ptr; 
  char *v3; 
  CameramanKeyframe *Keyframes; 
  __int64 maxKeyframe; 
  Cameraman_t *v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  float v18; 
  Mem_LargeLocal Src; 
  float demo_scale; 

  v1 = newRecording;
  Mem_LargeLocal::Mem_LargeLocal(&Src, 0x1B800ui64, "KeyframeHeap_t tempHeap");
  m_ptr = Src.m_ptr;
  v3 = (char *)Src.m_ptr;
  if ( (_DWORD)v1 && s_cameraman.keyRecordings[0].Keyframes )
  {
    memcpy_0(Src.m_ptr, s_cameraman.keyRecordings[0].Keyframes, 44i64 * s_cameraman.keyRecordings[0].maxKeyframe);
    v3 = &m_ptr[44 * s_cameraman.keyRecordings[0].maxKeyframe];
    s_cameraman.keyRecordings[0].kfsAvailable = s_cameraman.keyRecordings[0].maxKeyframe;
  }
  if ( (_DWORD)v1 != 1 && s_cameraman.keyRecordings[1].Keyframes )
  {
    memcpy_0(v3, s_cameraman.keyRecordings[1].Keyframes, 44i64 * s_cameraman.keyRecordings[1].maxKeyframe);
    v3 += 44 * s_cameraman.keyRecordings[1].maxKeyframe;
    s_cameraman.keyRecordings[1].kfsAvailable = s_cameraman.keyRecordings[1].maxKeyframe;
  }
  if ( (_DWORD)v1 != 2 && s_cameraman.keyRecordings[2].Keyframes )
  {
    memcpy_0(v3, s_cameraman.keyRecordings[2].Keyframes, 44i64 * s_cameraman.keyRecordings[2].maxKeyframe);
    v3 += 44 * s_cameraman.keyRecordings[2].maxKeyframe;
    s_cameraman.keyRecordings[2].kfsAvailable = s_cameraman.keyRecordings[2].maxKeyframe;
  }
  if ( (_DWORD)v1 != 3 && s_cameraman.keyRecordings[3].Keyframes )
  {
    memcpy_0(v3, s_cameraman.keyRecordings[3].Keyframes, 44i64 * s_cameraman.keyRecordings[3].maxKeyframe);
    v3 += 44 * s_cameraman.keyRecordings[3].maxKeyframe;
    s_cameraman.keyRecordings[3].kfsAvailable = s_cameraman.keyRecordings[3].maxKeyframe;
  }
  if ( (_DWORD)v1 != 4 && s_cameraman.keyRecordings[4].Keyframes )
  {
    memcpy_0(v3, s_cameraman.keyRecordings[4].Keyframes, 44i64 * s_cameraman.keyRecordings[4].maxKeyframe);
    v3 += 44 * s_cameraman.keyRecordings[4].maxKeyframe;
    s_cameraman.keyRecordings[4].kfsAvailable = s_cameraman.keyRecordings[4].maxKeyframe;
  }
  if ( (_DWORD)v1 != 5 && s_cameraman.keyRecordings[5].Keyframes )
  {
    memcpy_0(v3, s_cameraman.keyRecordings[5].Keyframes, 44i64 * s_cameraman.keyRecordings[5].maxKeyframe);
    v3 += 44 * s_cameraman.keyRecordings[5].maxKeyframe;
    s_cameraman.keyRecordings[5].kfsAvailable = s_cameraman.keyRecordings[5].maxKeyframe;
  }
  if ( (_DWORD)v1 != 6 && s_cameraman.keyRecordings[6].Keyframes )
  {
    memcpy_0(v3, s_cameraman.keyRecordings[6].Keyframes, 44i64 * s_cameraman.keyRecordings[6].maxKeyframe);
    v3 += 44 * s_cameraman.keyRecordings[6].maxKeyframe;
    s_cameraman.keyRecordings[6].kfsAvailable = s_cameraman.keyRecordings[6].maxKeyframe;
  }
  if ( (_DWORD)v1 != 7 && s_cameraman.keyRecordings[7].Keyframes )
  {
    memcpy_0(v3, s_cameraman.keyRecordings[7].Keyframes, 44i64 * s_cameraman.keyRecordings[7].maxKeyframe);
    v3 += 44 * s_cameraman.keyRecordings[7].maxKeyframe;
    s_cameraman.keyRecordings[7].kfsAvailable = s_cameraman.keyRecordings[7].maxKeyframe;
  }
  if ( (_DWORD)v1 != 8 && s_cameraman.keyRecordings[8].Keyframes )
  {
    memcpy_0(v3, s_cameraman.keyRecordings[8].Keyframes, 44i64 * s_cameraman.keyRecordings[8].maxKeyframe);
    v3 += 44 * s_cameraman.keyRecordings[8].maxKeyframe;
    s_cameraman.keyRecordings[8].kfsAvailable = s_cameraman.keyRecordings[8].maxKeyframe;
  }
  if ( (_DWORD)v1 != 9 && s_cameraman.keyRecordings[9].Keyframes )
  {
    memcpy_0(v3, s_cameraman.keyRecordings[9].Keyframes, 44i64 * s_cameraman.keyRecordings[9].maxKeyframe);
    v3 += 44 * s_cameraman.keyRecordings[9].maxKeyframe;
    s_cameraman.keyRecordings[9].kfsAvailable = s_cameraman.keyRecordings[9].maxKeyframe;
  }
  Keyframes = s_cameraman.keyRecordings[v1].Keyframes;
  if ( Keyframes )
  {
    maxKeyframe = s_cameraman.keyRecordings[v1].maxKeyframe;
    if ( (_DWORD)maxKeyframe )
      memcpy_0(v3, Keyframes, 44 * maxKeyframe);
  }
  s_cameraman.keyRecordings[v1].kfsAvailable = (m_ptr - v3 + 112640) / 44;
  v6 = &s_cameraman;
  if ( (_DWORD)v1 && s_cameraman.keyRecordings[0].Keyframes )
  {
    s_cameraman.keyRecordings[0].Keyframes = (CameramanKeyframe *)&s_cameraman;
    memcpy_0(&s_cameraman, m_ptr, 44i64 * s_cameraman.keyRecordings[0].maxKeyframe);
    v7 = 44i64 * s_cameraman.keyRecordings[0].maxKeyframe;
    m_ptr += v7;
    v6 = (Cameraman_t *)((char *)&s_cameraman + v7);
  }
  if ( (_DWORD)v1 != 1 && s_cameraman.keyRecordings[1].Keyframes )
  {
    s_cameraman.keyRecordings[1].Keyframes = (CameramanKeyframe *)v6;
    memcpy_0(v6, m_ptr, 44i64 * s_cameraman.keyRecordings[1].maxKeyframe);
    v8 = 44i64 * s_cameraman.keyRecordings[1].maxKeyframe;
    m_ptr += v8;
    v6 = (Cameraman_t *)((char *)v6 + v8);
  }
  if ( (_DWORD)v1 != 2 && s_cameraman.keyRecordings[2].Keyframes )
  {
    s_cameraman.keyRecordings[2].Keyframes = (CameramanKeyframe *)v6;
    memcpy_0(v6, m_ptr, 44i64 * s_cameraman.keyRecordings[2].maxKeyframe);
    v9 = 44i64 * s_cameraman.keyRecordings[2].maxKeyframe;
    m_ptr += v9;
    v6 = (Cameraman_t *)((char *)v6 + v9);
  }
  if ( (_DWORD)v1 != 3 && s_cameraman.keyRecordings[3].Keyframes )
  {
    s_cameraman.keyRecordings[3].Keyframes = (CameramanKeyframe *)v6;
    memcpy_0(v6, m_ptr, 44i64 * s_cameraman.keyRecordings[3].maxKeyframe);
    v10 = 44i64 * s_cameraman.keyRecordings[3].maxKeyframe;
    m_ptr += v10;
    v6 = (Cameraman_t *)((char *)v6 + v10);
  }
  if ( (_DWORD)v1 != 4 && s_cameraman.keyRecordings[4].Keyframes )
  {
    s_cameraman.keyRecordings[4].Keyframes = (CameramanKeyframe *)v6;
    memcpy_0(v6, m_ptr, 44i64 * s_cameraman.keyRecordings[4].maxKeyframe);
    v11 = 44i64 * s_cameraman.keyRecordings[4].maxKeyframe;
    m_ptr += v11;
    v6 = (Cameraman_t *)((char *)v6 + v11);
  }
  if ( (_DWORD)v1 != 5 && s_cameraman.keyRecordings[5].Keyframes )
  {
    s_cameraman.keyRecordings[5].Keyframes = (CameramanKeyframe *)v6;
    memcpy_0(v6, m_ptr, 44i64 * s_cameraman.keyRecordings[5].maxKeyframe);
    v12 = 44i64 * s_cameraman.keyRecordings[5].maxKeyframe;
    m_ptr += v12;
    v6 = (Cameraman_t *)((char *)v6 + v12);
  }
  if ( (_DWORD)v1 != 6 && s_cameraman.keyRecordings[6].Keyframes )
  {
    s_cameraman.keyRecordings[6].Keyframes = (CameramanKeyframe *)v6;
    memcpy_0(v6, m_ptr, 44i64 * s_cameraman.keyRecordings[6].maxKeyframe);
    v13 = 44i64 * s_cameraman.keyRecordings[6].maxKeyframe;
    m_ptr += v13;
    v6 = (Cameraman_t *)((char *)v6 + v13);
  }
  if ( (_DWORD)v1 != 7 && s_cameraman.keyRecordings[7].Keyframes )
  {
    s_cameraman.keyRecordings[7].Keyframes = (CameramanKeyframe *)v6;
    memcpy_0(v6, m_ptr, 44i64 * s_cameraman.keyRecordings[7].maxKeyframe);
    v14 = 44i64 * s_cameraman.keyRecordings[7].maxKeyframe;
    m_ptr += v14;
    v6 = (Cameraman_t *)((char *)v6 + v14);
  }
  if ( (_DWORD)v1 != 8 && s_cameraman.keyRecordings[8].Keyframes )
  {
    s_cameraman.keyRecordings[8].Keyframes = (CameramanKeyframe *)v6;
    memcpy_0(v6, m_ptr, 44i64 * s_cameraman.keyRecordings[8].maxKeyframe);
    v15 = 44i64 * s_cameraman.keyRecordings[8].maxKeyframe;
    m_ptr += v15;
    v6 = (Cameraman_t *)((char *)v6 + v15);
  }
  if ( (_DWORD)v1 != 9 && s_cameraman.keyRecordings[9].Keyframes )
  {
    s_cameraman.keyRecordings[9].Keyframes = (CameramanKeyframe *)v6;
    memcpy_0(v6, m_ptr, 44i64 * s_cameraman.keyRecordings[9].maxKeyframe);
    v16 = 44i64 * s_cameraman.keyRecordings[9].maxKeyframe;
    m_ptr += v16;
    v6 = (Cameraman_t *)((char *)v6 + v16);
  }
  s_cameraman.keyRecordings[v1].Keyframes = (CameramanKeyframe *)v6;
  v17 = s_cameraman.keyRecordings[v1].maxKeyframe;
  if ( (_DWORD)v17 )
    memcpy_0(v6, m_ptr, 44 * v17);
  s_cameraman.currentRecording = v1;
  s_cameraman.kf = &s_cameraman.keyRecordings[v1];
  if ( s_cameraman.keyRecordings[v1].maxKeyframe > 0 )
  {
    s_cameraman.currentFrame = s_cameraman.keyRecordings[v1].Keyframes[s_cameraman.keyRecordings[v1].curKeyframe].frame;
    v18 = (float)s_cameraman.currentFrame * 0.016666668;
    s_cameraman.currentTime = v18;
    CL_Cameraman_GetValuesAtTimeKf(s_cameraman.keyRecordings[v1].curKeyframe, v18, &s_cameraman.cam->origin, &s_cameraman.cam->angles, &s_cameraman.cam->fov, &demo_scale);
    s_cameraman.currentFrame = (int)(float)(v18 * 60.0);
    s_cameraman.currentTime = v18;
    Dvar_SetFloat_Internal(DVARFLT_cameraman_fov, s_cameraman.cam->fov);
    Dvar_SetFloat_Internal(DVARFLT_cameraman_demoscale, demo_scale);
    Dvar_SetFloat_Internal(DVARFLT_cameraman_time, s_cameraman.currentTime);
  }
  Mem_LargeLocal::~Mem_LargeLocal(&Src);
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
  const dvar_t *v1; 
  const dvar_t *v3; 
  cg_t *LocalClientGlobals; 
  __int64 v5; 
  double Float_Internal_DebugName; 
  const dvar_t *v7; 
  const dvar_t *v11; 
  int v12; 
  int v13; 
  int v14; 
  __int64 maxKeyframe; 
  CameramanKeyframe *Keyframes; 
  __int64 i; 
  int v18; 
  ClientFov result; 

  v1 = DVARBOOL_cameraman_enabled;
  _XMM6 = *(_OWORD *)&dT;
  if ( !DVARBOOL_cameraman_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( s_cameraman.was_enabled != v1->current.enabled )
  {
    if ( s_cameraman.delayEnable )
    {
      --s_cameraman.delayEnable;
      return;
    }
    v3 = DVARBOOL_cameraman_enabled;
    if ( !DVARBOOL_cameraman_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    s_cameraman.was_enabled = v3->current.enabled;
    if ( s_cameraman.was_enabled )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
      CL_Cameraman_UnbindUsedKeys();
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &s_cameraman.main_cam.origin);
      s_cameraman.main_cam.angles = LocalClientGlobals->refdefViewAngles;
      v5 = *(_QWORD *)&CG_GetViewFovBySpace(&result, LOCAL_CLIENT_0, CG_FovSpace_Scene, 0)->finalFov;
      LODWORD(s_cameraman.main_cam.fov) = v5;
      if ( *(float *)&v5 < 45.0 || *(float *)&v5 > 90.0 )
      {
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_fov, "cg_fov");
        s_cameraman.main_cam.fov = *(float *)&Float_Internal_DebugName;
      }
    }
  }
  v7 = DVARBOOL_cameraman_enabled;
  if ( !DVARBOOL_cameraman_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    _XMM0 = LODWORD(FLOAT_0_5);
    __asm
    {
      vcmpltss xmm2, xmm0, xmm6
      vblendvps xmm0, xmm6, xmm1, xmm2
    }
    if ( !s_cameraman.cameraman_playing && !s_cameraman.fullPlayback && !s_cameraman.pausedFullPlayback )
    {
      if ( s_cameraman.cameraman_focus )
      {
        CL_Cameraman_UpdateDebugFly(*(float *)&_XMM0);
        CL_Cameraman_UpdateLerp(*(float *)&_XMM0);
        if ( s_cameraman.liveRecording )
        {
          v11 = DVARFLT_cameraman_time;
          if ( !DVARFLT_cameraman_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_time") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v11);
          Dvar_SetFloat_Internal(DVARFLT_cameraman_time, *(float *)&_XMM0 + v11->current.value);
          CL_Cameraman_GrabKeyframe();
        }
      }
      return;
    }
    if ( SV_IsDemoPlaying() && s_cameraman.fullPlayback )
    {
      if ( s_cameraman.cameraman_playing )
      {
LABEL_35:
        v12 = 0;
        v13 = (int)(float)((float)(s_cameraman.currentTime + *(float *)&_XMM0) * 60.0);
        s_cameraman.currentFrame = v13;
        v14 = 0;
        s_cameraman.currentTime = s_cameraman.currentTime + *(float *)&_XMM0;
        maxKeyframe = s_cameraman.kf->maxKeyframe;
        if ( (int)maxKeyframe > 0 )
        {
          Keyframes = s_cameraman.kf->Keyframes;
          for ( i = 0i64; i < maxKeyframe; ++i )
          {
            if ( Keyframes->frame > v13 )
            {
              if ( v14 )
                v18 = v14 - 1;
              else
                v18 = 0;
              goto LABEL_42;
            }
            ++v14;
            ++Keyframes;
          }
          if ( (int)maxKeyframe > 0 )
          {
            v18 = maxKeyframe - 1;
            if ( s_cameraman.kf->Keyframes[maxKeyframe - 1].frame == v13 )
              goto LABEL_42;
          }
        }
        v18 = s_cameraman.kf->maxKeyframe;
LABEL_42:
        if ( v18 >= 0 )
          v12 = v18;
        if ( v12 >= (int)maxKeyframe )
        {
          v12 = maxKeyframe - 1;
          *(_WORD *)&s_cameraman.cameraman_playing = 0;
          s_cameraman.pausedFullPlayback = 0;
        }
        s_cameraman.kf->curKeyframe = v12;
        CL_Cameraman_ApplyKeyframe(v12, s_cameraman.currentTime, s_cameraman.smoothPlayback);
        return;
      }
      if ( s_cameraman.pausedFullPlayback || sv_demo.forwardTime || sv_demo.nextLevelTime )
        return;
      s_cameraman.cameraman_playing = 1;
      Dvar_SetFloat_Internal(DVARFLT_replay_speed, 1.0);
      s_cameraman.pausedFullPlayback = 0;
    }
    if ( !s_cameraman.cameraman_playing )
      return;
    goto LABEL_35;
  }
}

/*
==============
CL_Cameraman_UpdateDebugFly
==============
*/
void CL_Cameraman_UpdateDebugFly(float dT)
{
  double v2; 
  float v3; 
  double v4; 
  float v5; 
  double v6; 
  float v7; 
  double v8; 
  float v9; 
  float v10; 
  float value; 
  float v12; 
  int IsKeyDown; 
  int v14; 
  const dvar_t *v15; 
  float v16; 
  float v17; 
  float v18; 
  Camera_t *cam; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  Camera_t *v24; 
  float v25; 
  int v26; 
  float v27; 
  Camera_t *v28; 
  float v29; 
  Camera_t *v30; 
  Camera_t *v31; 
  float v32; 
  Camera_t *v33; 
  Camera_t *v34; 
  float v35; 
  float v36; 
  float v37; 
  tmat33_t<vec3_t> axis; 

  v2 = CL_GamepadAxisValue(LOCAL_CLIENT_0, 2);
  LODWORD(v3) = LODWORD(v2) ^ _xmm;
  v4 = CL_GamepadAxisValue(LOCAL_CLIENT_0, 3);
  v5 = *(float *)&v4;
  v6 = CL_GamepadAxisValue(LOCAL_CLIENT_0, 1);
  v7 = *(float *)&v6;
  v8 = CL_GamepadAxisValue(LOCAL_CLIENT_0, 0);
  v9 = FLOAT_1_0;
  v10 = *(float *)&v8;
  value = cameraman_pitch_vel->current.value;
  v36 = cameraman_yaw_vel->current.value;
  v12 = cameraman_roll_vel->current.value;
  v35 = cameraman_trans_vel->current.value;
  v37 = cameraman_fov_vel->current.value;
  IsKeyDown = CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 18);
  v14 = CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 5);
  if ( IsKeyDown )
  {
    if ( v14 )
      v15 = cameraman_third_scale;
    else
      v15 = cameraman_first_scale;
    goto LABEL_7;
  }
  if ( v14 )
  {
    v15 = cameraman_second_scale;
LABEL_7:
    v9 = v15->current.value;
  }
  if ( v5 < -0.1 || v5 > 0.1 )
  {
    s_cameraman.cam->angles.v[0] = s_cameraman.cam->angles.v[0] - (float)((float)((float)(v9 * value) * dT) * v5);
    v16 = s_cameraman.cam->angles.v[0];
    if ( v16 <= 90.0 )
    {
      if ( v16 < -90.0 )
        s_cameraman.cam->angles.v[0] = -90.0;
    }
    else
    {
      s_cameraman.cam->angles.v[0] = 90.0;
    }
  }
  if ( v3 < -0.1 || v3 > 0.1 )
  {
    s_cameraman.cam->angles.v[1] = (float)((float)((float)(v9 * v36) * dT) * v3) + s_cameraman.cam->angles.v[1];
    v17 = s_cameraman.cam->angles.v[1];
    if ( v17 > 360.0 )
    {
      v18 = v17 - 360.0;
LABEL_20:
      s_cameraman.cam->angles.v[1] = v18;
      goto LABEL_21;
    }
    if ( v17 < -360.0 )
    {
      v18 = v17 + 360.0;
      goto LABEL_20;
    }
  }
LABEL_21:
  if ( !CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 16) || !CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 17) )
  {
    if ( CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 16) )
    {
      cam = s_cameraman.cam;
      v20 = s_cameraman.cam->angles.v[2] - (float)((float)(v9 * v12) * dT);
    }
    else
    {
      if ( !CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 17) )
        goto LABEL_33;
      cam = s_cameraman.cam;
      v20 = (float)((float)(v9 * v12) * dT) + s_cameraman.cam->angles.v[2];
    }
    cam->angles.v[2] = v20;
    v21 = s_cameraman.cam->angles.v[2];
    if ( v21 <= 360.0 )
    {
      if ( v21 >= -360.0 )
        goto LABEL_33;
      v22 = v21 + 360.0;
    }
    else
    {
      v22 = v21 - 360.0;
    }
    s_cameraman.cam->angles.v[2] = v22;
    goto LABEL_33;
  }
  s_cameraman.cam->angles.v[2] = 0.0;
LABEL_33:
  AnglesToAxis(&s_cameraman.cam->angles, &axis);
  if ( v7 < -0.1 || v7 > 0.1 )
  {
    v24 = s_cameraman.cam;
    v23 = v9 * v35;
    v25 = (float)((float)(v9 * v35) * dT) * v7;
    s_cameraman.cam->origin.v[0] = (float)(v25 * axis.m[0].v[0]) + s_cameraman.cam->origin.v[0];
    v24->origin.v[1] = (float)(v25 * axis.m[0].v[1]) + v24->origin.v[1];
    v24->origin.v[2] = (float)(v25 * axis.m[0].v[2]) + v24->origin.v[2];
  }
  else
  {
    v23 = v9 * v35;
  }
  if ( v10 < -0.1 || v10 > 0.1 )
  {
    v28 = s_cameraman.cam;
    v26 = _xmm;
    v27 = v23 * dT;
    v29 = (float)(v23 * dT) * v10;
    s_cameraman.cam->origin.v[0] = (float)(COERCE_FLOAT(LODWORD(v29) ^ _xmm) * axis.m[1].v[0]) + s_cameraman.cam->origin.v[0];
    v28->origin.v[1] = (float)(COERCE_FLOAT(LODWORD(v29) ^ _xmm) * axis.m[1].v[1]) + v28->origin.v[1];
    v28->origin.v[2] = (float)(COERCE_FLOAT(LODWORD(v29) ^ _xmm) * axis.m[1].v[2]) + v28->origin.v[2];
  }
  else
  {
    v26 = _xmm;
    v27 = v23 * dT;
  }
  if ( CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 6) )
  {
    v30 = s_cameraman.cam;
    s_cameraman.cam->origin.v[0] = (float)(v27 * axis.m[2].v[0]) + s_cameraman.cam->origin.v[0];
    v30->origin.v[1] = (float)(v27 * axis.m[2].v[1]) + v30->origin.v[1];
    v30->origin.v[2] = (float)(v27 * axis.m[2].v[2]) + v30->origin.v[2];
  }
  if ( CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 19) )
  {
    v31 = s_cameraman.cam;
    s_cameraman.cam->origin.v[0] = (float)(COERCE_FLOAT(LODWORD(v27) ^ v26) * axis.m[2].v[0]) + s_cameraman.cam->origin.v[0];
    v31->origin.v[1] = (float)(COERCE_FLOAT(LODWORD(v27) ^ v26) * axis.m[2].v[1]) + v31->origin.v[1];
    v31->origin.v[2] = (float)(COERCE_FLOAT(LODWORD(v27) ^ v26) * axis.m[2].v[2]) + v31->origin.v[2];
  }
  v32 = v9 * v37;
  if ( CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 4) )
  {
    s_cameraman.cam->fov = s_cameraman.cam->fov - (float)(v32 * dT);
    v33 = s_cameraman.cam;
    if ( s_cameraman.cam->fov < 10.0 )
    {
      s_cameraman.cam->fov = 10.0;
      v33 = s_cameraman.cam;
    }
    Dvar_SetFloat_Internal(DVARFLT_cameraman_fov, v33->fov);
  }
  if ( CL_Keys_IsKeyDown(LOCAL_CLIENT_0, 1) )
  {
    s_cameraman.cam->fov = (float)(v32 * dT) + s_cameraman.cam->fov;
    v34 = s_cameraman.cam;
    if ( s_cameraman.cam->fov > 170.0 )
    {
      s_cameraman.cam->fov = 170.0;
      v34 = s_cameraman.cam;
    }
    Dvar_SetFloat_Internal(DVARFLT_cameraman_fov, v34->fov);
  }
}

/*
==============
CL_Cameraman_UpdateLerp
==============
*/

void __fastcall CL_Cameraman_UpdateLerp(double dT)
{
  __int128 v1; 
  float v2; 
  __int128 v3; 
  __int128 v4; 
  float v5; 
  __int128 v6; 
  __int128 v7; 
  float v8; 
  __int128 v9; 
  __int128 v10; 
  float v11; 
  __int128 v12; 
  float v16; 
  __int128 v17; 
  __int128 v18; 
  __int128 v19; 
  __int128 v20; 
  __int128 v21; 
  float v25; 
  float v26; 
  int v27; 
  __int128 v28; 
  float v29; 
  __int128 v30; 
  __int128 v31; 
  __int128 v32; 
  __int128 v33; 
  float v34; 
  __int128 v35; 
  float v39; 
  float v40; 
  __int128 v41; 
  float v45; 
  float v46; 
  int v47; 
  float v48; 
  float value; 
  float v50; 
  float v51; 
  float v52; 
  bool lerpSmooth; 
  __int128 v55; 
  float v57; 
  float v58; 
  float v59; 
  __m128 v60; 
  __m128 v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  vec4_t v68; 
  vec4_t v69; 
  Camera_t cam_8; 
  vec3_t focus; 
  tmat33_t<vec3_t> mat; 
  vec4_t out; 
  vec4_t quat; 
  vec4_t result; 

  v1 = *(_OWORD *)&dT;
  if ( s_cameraman.lerpMode && s_cameraman.lerpSmooth )
  {
    if ( CL_Cameraman_GetCamera(LOCAL_CLIENT_0, &cam_8, &focus, 0, 0.0) )
    {
      v2 = focus.v[0] - s_cameraman.alt_cam.origin.v[0];
      v4 = LODWORD(focus.v[2]);
      *(float *)&v4 = focus.v[2] - s_cameraman.alt_cam.origin.v[2];
      v3 = v4;
      v5 = cam_8.origin.v[0];
      v7 = LODWORD(focus.v[1]);
      *(float *)&v7 = focus.v[1] - s_cameraman.alt_cam.origin.v[1];
      v6 = v7;
      v8 = cam_8.origin.v[1];
    }
    else
    {
      v5 = cam_8.origin.v[0];
      v8 = cam_8.origin.v[1];
      v2 = cam_8.origin.v[0] - s_cameraman.alt_cam.origin.v[0];
      v9 = LODWORD(cam_8.origin.v[1]);
      *(float *)&v9 = cam_8.origin.v[1] - s_cameraman.alt_cam.origin.v[1];
      v6 = v9;
      v10 = LODWORD(cam_8.origin.v[2]);
      *(float *)&v10 = cam_8.origin.v[2] - s_cameraman.alt_cam.origin.v[2];
      v3 = v10;
    }
    v11 = s_cameraman.alt_cam.origin.v[0] + (float)(v5 - s_cameraman.prev_cam_pos.v[0]);
    v12 = v6;
    *(float *)&v12 = fsqrt((float)((float)(*(float *)&v6 * *(float *)&v6) + (float)(v2 * v2)) + (float)(*(float *)&v3 * *(float *)&v3));
    _XMM3 = v12;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm11, xmm0
    }
    v16 = v2 * (float)(1.0 / *(float *)&_XMM0);
    v18 = v6;
    *(float *)&v18 = *(float *)&v6 * (float)(1.0 / *(float *)&_XMM0);
    v17 = v18;
    v20 = v3;
    *(float *)&v20 = *(float *)&v3 * (float)(1.0 / *(float *)&_XMM0);
    v19 = v20;
    s_cameraman.alt_cam.origin.v[1] = s_cameraman.alt_cam.origin.v[1] + (float)(v8 - s_cameraman.prev_cam_pos.v[1]);
    v21 = LODWORD(cam_8.origin.v[1]);
    s_cameraman.alt_cam.origin.v[2] = s_cameraman.alt_cam.origin.v[2] + (float)(cam_8.origin.v[2] - s_cameraman.prev_cam_pos.v[2]);
    *(float *)&v21 = fsqrt((float)((float)((float)(cam_8.origin.v[1] - s_cameraman.alt_cam.origin.v[1]) * (float)(cam_8.origin.v[1] - s_cameraman.alt_cam.origin.v[1])) + (float)((float)(cam_8.origin.v[0] - v11) * (float)(cam_8.origin.v[0] - v11))) + (float)((float)(cam_8.origin.v[2] - s_cameraman.alt_cam.origin.v[2]) * (float)(cam_8.origin.v[2] - s_cameraman.alt_cam.origin.v[2])));
    _XMM12 = v21;
    __asm
    {
      vcmpless xmm0, xmm12, cs:__real@80000000
      vblendvps xmm0, xmm12, xmm11, xmm0
    }
    v25 = (float)(cam_8.origin.v[0] - v11) * (float)(1.0 / *(float *)&_XMM0);
    v26 = (float)(cam_8.origin.v[1] - s_cameraman.alt_cam.origin.v[1]) * (float)(1.0 / *(float *)&_XMM0);
    v65 = v25;
    v66 = v26;
    v67 = (float)(cam_8.origin.v[2] - s_cameraman.alt_cam.origin.v[2]) * (float)(1.0 / *(float *)&_XMM0);
    s_cameraman.alt_cam.origin.v[0] = v11;
    v64 = *(float *)&v17;
    AnglesToQuat(&s_cameraman.alt_cam.angles, &quat);
    v27 = _xmm;
    if ( *(float *)&v21 <= cameraman_angle_dist->current.value )
    {
      AnglesToQuat(&cam_8.angles, &out);
    }
    else
    {
      mat.m[0].v[0] = v16;
      if ( COERCE_FLOAT(v19 & _xmm) >= 0.99000001 )
      {
        mat.m[0].v[1] = *(float *)&v17;
        mat.m[0].v[2] = *(float *)&v19;
        PerpendicularVector(mat.m, &mat.m[2]);
        Vec3Cross(&mat.m[2], mat.m, &mat.m[1]);
      }
      else
      {
        v28 = v17 ^ _xmm;
        v29 = *(float *)&v19 * COERCE_FLOAT(v17 ^ _xmm);
        v31 = v28;
        *(float *)&v31 = *(float *)&v28 * *(float *)&v28;
        v30 = v31;
        v32 = v19;
        *(float *)&v32 = *(float *)&v19 * v16;
        v33 = v32 ^ _xmm;
        v34 = (float)(v16 * v16) - (float)(COERCE_FLOAT(v17 ^ _xmm) * *(float *)&v17);
        v35 = v30;
        *(float *)&v35 = fsqrt(*(float *)&v30 + (float)(v16 * v16));
        _XMM3 = v35;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm11, xmm0
        }
        v39 = *(float *)&v28 * (float)(1.0 / *(float *)&_XMM0);
        v40 = v16 * (float)(1.0 / *(float *)&_XMM0);
        v41 = v33;
        *(float *)&v41 = fsqrt((float)((float)(*(float *)&v33 * *(float *)&v33) + (float)(v29 * v29)) + (float)(v34 * v34));
        _XMM4 = v41;
        __asm
        {
          vcmpless xmm0, xmm4, cs:__real@80000000
          vblendvps xmm0, xmm4, xmm11, xmm0
        }
        *(float *)&v30 = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v33;
        v25 = v65;
        *(float *)&_XMM3 = (float)(1.0 / *(float *)&_XMM0) * v29;
        v26 = v66;
        mat.m[1].v[1] = v40;
        v27 = _xmm;
        mat.m[2].v[0] = *(float *)&v30;
        mat.m[2].v[1] = *(float *)&_XMM3;
        mat.m[2].v[2] = (float)(1.0 / *(float *)&_XMM0) * v34;
        mat.m[0].v[1] = v64;
        mat.m[0].v[2] = *(float *)&v19;
        mat.m[1].v[0] = v39;
        mat.m[1].v[2] = 0.0;
      }
      AxisToQuat(&mat, &out);
    }
    v68 = out;
    v69 = quat;
    v45 = CL_Cameraman_AngleBetweenQuats(&v69, &v68);
    v46 = *(float *)&v1 * cameraman_lerp_maxangle->current.value;
    v47 = LODWORD(v45) & v27;
    if ( *(float *)&v47 <= v46 )
      v48 = *(float *)&v47 / v46;
    else
      v48 = FLOAT_1_0;
    QuatSlerp(&quat, &out, v48, &result);
    QuatToAxis(&result, &mat);
    AxisToAngles(&mat, &s_cameraman.alt_cam.angles);
    if ( s_cameraman.lerpSmooth )
    {
      value = cameraman_decel_dist->current.value;
      if ( *(float *)&_XMM12 >= value )
      {
        v50 = s_cameraman.lerpSpeed + (float)(*(float *)&v1 * cameraman_lerp_accel->current.value);
        s_cameraman.lerpSpeed = v50;
        v52 = cameraman_lerp_farspeed->current.value;
        if ( v50 > v52 )
        {
          LODWORD(s_cameraman.lerpSpeed) = cameraman_lerp_farspeed->current.integer;
          v50 = v52;
        }
      }
      else
      {
        v50 = (float)((float)(1.0 - (float)((float)(1.0 - (float)(*(float *)&_XMM12 / value)) * (float)(1.0 - (float)(*(float *)&_XMM12 / value)))) * (float)(s_cameraman.lerpSpeed - cameraman_decel_minspeed->current.value)) + cameraman_decel_minspeed->current.value;
        s_cameraman.lerpSpeed = v50;
        v51 = cameraman_decel_minspeed->current.value;
        if ( v50 <= v51 )
        {
          LODWORD(s_cameraman.lerpSpeed) = cameraman_decel_minspeed->current.integer;
          v50 = v51;
        }
      }
    }
    else
    {
      v50 = cameraman_lerp_speed->current.value;
      s_cameraman.lerpSpeed = v50;
    }
    lerpSmooth = s_cameraman.lerpSmooth;
    v55 = v1;
    *(float *)&v55 = *(float *)&v1 * v50;
    _XMM0 = v55;
    __asm { vminss  xmm4, xmm0, xmm12 }
    if ( *(float *)&_XMM12 < 0.1 )
      lerpSmooth = 0;
    s_cameraman.alt_cam.origin.v[0] = (float)(v25 * *(float *)&_XMM4) + s_cameraman.alt_cam.origin.v[0];
    s_cameraman.alt_cam.origin.v[1] = (float)(v26 * *(float *)&_XMM4) + s_cameraman.alt_cam.origin.v[1];
    s_cameraman.lerpSmooth = lerpSmooth;
    v57 = cam_8.fov - s_cameraman.alt_cam.fov;
    s_cameraman.alt_cam.origin.v[2] = (float)(*(float *)&_XMM4 * v67) + s_cameraman.alt_cam.origin.v[2];
    v58 = *(float *)&v1 * cameraman_lerp_fov_speed->current.value;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(cam_8.fov - s_cameraman.alt_cam.fov) & v27) <= v58 )
    {
      v59 = s_cameraman.alt_cam.fov + v57;
    }
    else if ( v57 >= 0.0 )
    {
      v59 = s_cameraman.alt_cam.fov + v58;
    }
    else
    {
      v59 = s_cameraman.alt_cam.fov - v58;
    }
    s_cameraman.alt_cam.fov = v59;
    v60 = (__m128)*(unsigned __int64 *)s_cameraman.cam;
    v61 = (__m128)*(unsigned __int64 *)s_cameraman.cam->angles.v;
    v68.v[2] = s_cameraman.cam->angles.v[2];
    v62 = s_cameraman.cam->origin.v[2];
    LODWORD(s_cameraman.prev_cam_pos.v[1]) = _mm_shuffle_ps(v60, v60, 85).m128_u32[0];
    focus.v[2] = v62;
    s_cameraman.prev_cam_pos.v[2] = v62;
    LODWORD(s_cameraman.prev_cam_angles.v[1]) = _mm_shuffle_ps(v61, v61, 85).m128_u32[0];
    s_cameraman.prev_cam_angles.v[2] = v68.v[2];
    s_cameraman.prev_cam_pos.v[0] = v60.m128_f32[0];
    s_cameraman.prev_cam_angles.v[0] = v61.m128_f32[0];
  }
  else
  {
    if ( s_cameraman.steadyCamMode )
    {
      CL_Cameraman_GetCamera(LOCAL_CLIENT_0, &cam_8, NULL, 1, *(float *)&dT);
      v63 = cam_8.angles.v[2];
      s_cameraman.alt_cam = cam_8;
      s_cameraman.prev_cam_pos = cam_8.origin;
      s_cameraman.prev_cam_angles.v[0] = cam_8.angles.v[0];
    }
    else
    {
      CL_Cameraman_GetCamera(LOCAL_CLIENT_0, &cam_8, NULL, 0, 0.0);
      v63 = cam_8.angles.v[2];
      *(_OWORD *)s_cameraman.prev_cam_pos.v = *(_OWORD *)cam_8.origin.v;
    }
    s_cameraman.prev_cam_angles.v[1] = cam_8.angles.v[1];
    s_cameraman.prev_cam_angles.v[2] = v63;
  }
}

/*
==============
CL_Cameraman_addTime
==============
*/

void __fastcall CL_Cameraman_addTime(double _XMM0_8)
{
  const char *v1; 
  const dvar_t *v2; 

  if ( Cmd_Argc() == 2 )
  {
    v1 = Cmd_Argv(1);
    _XMM0_8 = atof(v1);
    v2 = DVARFLT_cameraman_time;
    __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
    if ( !DVARFLT_cameraman_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraman_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    Dvar_SetFloat_Internal(DVARFLT_cameraman_time, *(float *)&_XMM6 + v2->current.value);
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
  float v1; 
  float v2; 
  float v3; 
  int v4; 
  __int64 i; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 

  result = s_cameraman.kf;
  if ( s_cameraman.kf->maxKeyframe <= 0 )
    return result;
  v1 = s_cameraman.kf->Keyframes->angles.v[0];
  v2 = s_cameraman.kf->Keyframes->angles.v[1];
  if ( v1 <= 180.0 )
  {
    if ( v1 >= -180.0 )
      goto LABEL_7;
    v3 = v1 + 360.0;
  }
  else
  {
    v3 = v1 - 360.0;
  }
  s_cameraman.kf->Keyframes->angles.v[0] = v3;
  result = s_cameraman.kf;
LABEL_7:
  v4 = 1;
  if ( result->maxKeyframe > 1 )
  {
    for ( i = 1i64; ; ++i )
    {
      v7 = result->Keyframes[i].angles.v[1] - v2;
      v6 = v7;
      if ( v7 >= -180.0 )
      {
        if ( v7 > 180.0 )
          v6 = v7 + -360.0;
      }
      else
      {
        v6 = v7 + 360.0;
      }
      v2 = v6 + v2;
      result->Keyframes[i].angles.v[1] = v2;
      result = s_cameraman.kf;
      v8 = s_cameraman.kf->Keyframes[i].angles.v[0];
      if ( v8 > 180.0 )
        break;
      if ( v8 < -180.0 )
      {
        v9 = v8 + 360.0;
        goto LABEL_17;
      }
LABEL_18:
      if ( ++v4 >= result->maxKeyframe )
        return result;
    }
    v9 = v8 - 360.0;
LABEL_17:
    s_cameraman.kf->Keyframes[i].angles.v[0] = v9;
    result = s_cameraman.kf;
    goto LABEL_18;
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

