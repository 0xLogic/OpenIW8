/*
==============
CG_GetFlashbangedRemainingTime
==============
*/

int __fastcall CG_GetFlashbangedRemainingTime(LocalClientNum_t localClientNum)
{
  return ?CG_GetFlashbangedRemainingTime@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawShellShockSavedScreenBlendFlashed
==============
*/

void __fastcall CG_DrawShellShockSavedScreenBlendFlashed(LocalClientNum_t localClientNum)
{
  ?CG_DrawShellShockSavedScreenBlendFlashed@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GetShellShockBlendTime
==============
*/

int __fastcall CG_GetShellShockBlendTime(LocalClientNum_t localClientNum)
{
  return ?CG_GetShellShockBlendTime@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawShellShockSavedScreenBlendPhoto
==============
*/

void __fastcall CG_DrawShellShockSavedScreenBlendPhoto(LocalClientNum_t localClientNum)
{
  ?CG_DrawShellShockSavedScreenBlendPhoto@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PrintPerturbationPoints
==============
*/

void CG_PrintPerturbationPoints(void)
{
  ?CG_PrintPerturbationPoints@@YAXXZ();
}

/*
==============
CG_UpdateShellShock
==============
*/

void __fastcall CG_UpdateShellShock(LocalClientNum_t localClientNum, const shellshock_parms_t *parms, int start, int duration)
{
  ?CG_UpdateShellShock@@YAXW4LocalClientNum_t@@PEBUshellshock_parms_t@@HH@Z(localClientNum, parms, start, duration);
}

/*
==============
CG_ArchiveShellShock
==============
*/

void __fastcall CG_ArchiveShellShock(LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  ?CG_ArchiveShellShock@@YAXW4LocalClientNum_t@@PEAUMemoryFile@@@Z(localClientNum, memFile);
}

/*
==============
CG_PerturbCamera
==============
*/

void __fastcall CG_PerturbCamera(cg_t *cgameGlob)
{
  ?CG_PerturbCamera@@YAXPEAVcg_t@@@Z(cgameGlob);
}

/*
==============
CG_DrawShellShockSavedScreenBlendBlurred
==============
*/

void __fastcall CG_DrawShellShockSavedScreenBlendBlurred(LocalClientNum_t localClientNum, int screenBlendTime)
{
  ?CG_DrawShellShockSavedScreenBlendBlurred@@YAXW4LocalClientNum_t@@H@Z(localClientNum, screenBlendTime);
}

/*
==============
CG_StartShellShock
==============
*/

void __fastcall CG_StartShellShock(cg_t *cgameGlob, const shellshock_parms_t *parms, int start, int duration)
{
  ?CG_StartShellShock@@YAXPEAVcg_t@@PEBUshellshock_parms_t@@HH@Z(cgameGlob, parms, start, duration);
}

/*
==============
CG_ArchiveShellShock
==============
*/
void CG_ArchiveShellShock(LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  cg_t *LocalClientGlobals; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shellshock.cpp", 732, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 397, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !memFile->archiveProc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 398, ASSERT_TYPE_ASSERT, "(memFile->archiveProc)", (const char *)&queryFormat, "memFile->archiveProc") )
    __debugbreak();
  memFile->archiveProc(memFile, 4ui64, &LocalClientGlobals->shellshock.loopEndTime);
}

/*
==============
CG_DrawShellShockSavedScreenBlendBlurred
==============
*/
void CG_DrawShellShockSavedScreenBlendBlurred(LocalClientNum_t localClientNum, int screenBlendTime)
{
  cg_t *LocalClientGlobals; 
  cg_t *v5; 
  const ClientViewParams *LocalClientViewParams; 
  const ClientViewParams *v7; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v5 = LocalClientGlobals;
  if ( screenBlendTime > 0 )
  {
    if ( LocalClientGlobals->shellshock.hasSavedScreen )
    {
      LocalClientViewParams = CG_GetLocalClientViewParams(localClientNum);
      R_AddCmdBlendSavedScreenShockBlurred(screenBlendTime, LocalClientViewParams->x, LocalClientViewParams->y, LocalClientViewParams->width, LocalClientViewParams->height, localClientNum);
    }
    if ( v5->shellshock.hasScissor )
    {
      v5->shellshock.wantSavedScreen = 1;
    }
    else
    {
      v7 = CG_GetLocalClientViewParams(localClientNum);
      R_AddCmdSaveScreenSection(v7->x, v7->y, v7->width, v7->height, localClientNum);
      v5->shellshock.hasSavedScreen = 1;
    }
  }
  else
  {
    *(_QWORD *)&LocalClientGlobals->shellshock.wantSavedScreen = 0i64;
  }
}

/*
==============
CG_DrawShellShockSavedScreenBlendFlashed
==============
*/
void CG_DrawShellShockSavedScreenBlendFlashed(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  cg_t *v3; 
  int startTime; 
  const shellshock_parms_t *parms; 
  int duration; 
  int v7; 
  float v8; 
  float flashWhiteFadeTime; 
  float v10; 
  float flashShotFadeTime; 
  float v12; 
  double v13; 
  float v14; 
  double v15; 
  const ClientViewParams *LocalClientViewParams; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = LocalClientGlobals;
  startTime = LocalClientGlobals->shellshock.startTime;
  parms = LocalClientGlobals->shellshock.parms;
  if ( startTime && (duration = LocalClientGlobals->shellshock.duration, duration > 0) && (v7 = startTime + duration - v3->time, v7 > 0) )
  {
    v8 = FLOAT_1_0;
    flashWhiteFadeTime = (float)parms->screenBlend.flashWhiteFadeTime;
    v10 = (float)v7;
    flashShotFadeTime = (float)parms->screenBlend.flashShotFadeTime;
    if ( v10 >= flashWhiteFadeTime )
      v12 = FLOAT_1_0;
    else
      v12 = v10 / flashWhiteFadeTime;
    if ( v10 < flashShotFadeTime )
      v8 = v10 / flashShotFadeTime;
    v13 = BG_ShellshockBlendSmooth(v12);
    v14 = *(float *)&v13;
    v15 = BG_ShellshockBlendSmooth(v8);
    if ( v3->shellshock.hasSavedScreen )
    {
      CG_Draw_EndSceneCmds();
      LocalClientViewParams = CG_GetLocalClientViewParams(localClientNum);
      R_AddCmdBlendSavedScreenShockFlashed(v14, *(float *)&v15, LocalClientViewParams->x, LocalClientViewParams->y, LocalClientViewParams->width, LocalClientViewParams->height, localClientNum);
    }
    else if ( v3->shellshock.hasScissor )
    {
      v3->shellshock.wantSavedScreen = 1;
    }
    else
    {
      CG_Shellshock_SaveScreenToBuffer(localClientNum);
      v3->shellshock.hasSavedScreen = 1;
    }
  }
  else
  {
    *(_QWORD *)&v3->shellshock.wantSavedScreen = 0i64;
  }
}

/*
==============
CG_DrawShellShockSavedScreenBlendPhoto
==============
*/
void CG_DrawShellShockSavedScreenBlendPhoto(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  int startTime; 
  int duration; 
  int v5; 
  float v6; 
  float v7; 
  double v8; 
  const ClientViewParams *LocalClientViewParams; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  startTime = LocalClientGlobals->shellshock.startTime;
  if ( startTime && (duration = LocalClientGlobals->shellshock.duration, duration > 0) && (v5 = startTime + duration - LocalClientGlobals->nextSnap->serverTime, v5 > 0) )
  {
    v6 = (float)v5;
    if ( v6 >= (float)LocalClientGlobals->shellshock.parms->screenBlend.flashShotFadeTime )
      v7 = FLOAT_1_0;
    else
      v7 = v6 / (float)LocalClientGlobals->shellshock.parms->screenBlend.flashShotFadeTime;
    v8 = BG_ShellshockBlendSmooth(v7);
    if ( LocalClientGlobals->shellshock.hasSavedScreen )
    {
      CG_Draw_EndSceneCmds();
      LocalClientViewParams = CG_GetLocalClientViewParams(localClientNum);
      R_AddCmdBlendSavedScreenShockPhoto(*(float *)&v8, LocalClientViewParams->x, LocalClientViewParams->y, LocalClientViewParams->width, LocalClientViewParams->height, localClientNum);
    }
    else if ( LocalClientGlobals->shellshock.hasScissor )
    {
      LocalClientGlobals->shellshock.wantSavedScreen = 1;
    }
    else
    {
      CG_Shellshock_SaveScreenToBuffer(localClientNum);
      LocalClientGlobals->shellshock.hasSavedScreen = 1;
    }
  }
  else
  {
    *(_QWORD *)&LocalClientGlobals->shellshock.wantSavedScreen = 0i64;
  }
}

/*
==============
CG_GetFlashbangedRemainingTime
==============
*/
__int64 CG_GetFlashbangedRemainingTime(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  __int64 result; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  result = (unsigned int)(LocalClientGlobals->shellshock.duration + LocalClientGlobals->shellshock.startTime - LocalClientGlobals->time);
  if ( (int)result <= 0 || LocalClientGlobals->shellshock.parms->screenBlend.type != SHELLSHOCK_VIEWTYPE_FLASHED )
    return 0i64;
  return result;
}

/*
==============
CG_GetShellShockBlendTime
==============
*/
__int64 CG_GetShellShockBlendTime(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  int startTime; 
  int duration; 
  int v4; 
  const shellshock_parms_t *parms; 
  unsigned int blurredEffectTime; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  startTime = LocalClientGlobals->shellshock.startTime;
  if ( !startTime )
    return 0i64;
  duration = LocalClientGlobals->shellshock.duration;
  if ( duration <= 0 )
    return 0i64;
  v4 = startTime + duration - LocalClientGlobals->time;
  if ( v4 <= 0 )
    return 0i64;
  parms = LocalClientGlobals->shellshock.parms;
  blurredEffectTime = parms->screenBlend.blurredEffectTime;
  if ( v4 < parms->screenBlend.blurredFadeTime )
  {
    _mm_cvtepi32_ps((__m128i)(unsigned int)parms->screenBlend.blurredFadeTime);
    _mm_cvtepi32_ps((__m128i)(unsigned int)v4);
    _mm_cvtepi32_ps((__m128i)blurredEffectTime);
    _XMM1 = 0i64;
    __asm { vroundss xmm2, xmm1, xmm3, 1 }
    return (unsigned int)(int)*(float *)&_XMM2;
  }
  return blurredEffectTime;
}

/*
==============
CG_PerturbCamera
==============
*/
void CG_PerturbCamera(cg_t *cgameGlob)
{
  __int128 xmm5_1; 
  float v3; 
  __int128 v4; 
  __int128 v8; 
  tmat33_t<vec3_t> v1; 
  tmat33_t<vec3_t> out; 

  xmm5_1 = LODWORD(cgameGlob->shellshock.viewDelta.v[0]);
  if ( *(float *)&xmm5_1 != 0.0 || cgameGlob->shellshock.viewDelta.v[1] != 0.0 )
  {
    v3 = cgameGlob->shellshock.viewDelta.v[1];
    v1.m[2].v[0] = 0.0;
    v1.m[2].v[1] = 0.0;
    v4 = xmm5_1;
    *(float *)&v4 = fsqrt((float)((float)(*(float *)&xmm5_1 * *(float *)&xmm5_1) + 1.0) + (float)(v3 * v3));
    _XMM3 = v4;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm8, xmm0
    }
    v1.m[0].v[0] = 1.0 / *(float *)&_XMM0;
    v1.m[0].v[2] = v3 * (float)(1.0 / *(float *)&_XMM0);
    v1.m[2].v[2] = FLOAT_1_0;
    v1.m[0].v[1] = *(float *)&xmm5_1 * (float)(1.0 / *(float *)&_XMM0);
    Vec3Cross(&v1.m[2], v1.m, &v1.m[1]);
    v8 = LODWORD(v1.m[1].v[0]);
    *(float *)&v8 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)(v1.m[1].v[1] * v1.m[1].v[1])) + (float)(v1.m[1].v[2] * v1.m[1].v[2]));
    _XMM3 = v8;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm8, xmm0
    }
    v1.m[1].v[0] = v1.m[1].v[0] * (float)(1.0 / *(float *)&_XMM0);
    v1.m[1].v[2] = v1.m[1].v[2] * (float)(1.0 / *(float *)&_XMM0);
    v1.m[1].v[1] = v1.m[1].v[1] * (float)(1.0 / *(float *)&_XMM0);
    Vec3Cross(v1.m, &v1.m[1], &v1.m[2]);
    AxisCopy(&cgameGlob->refdef.view.axis, &out);
    MatrixMultiply(&v1, &out, &cgameGlob->refdef.view.axis);
  }
}

/*
==============
CG_PrintPerturbationPoints
==============
*/
void CG_PrintPerturbationPoints(void)
{
  float *v0; 
  __int64 v1; 
  vec2_t *p_out; 
  double v3; 
  double v4; 
  float v5; 
  float v6; 
  vec2_t *v7; 
  __int64 v8; 
  float c; 
  float s[3]; 
  vec2_t out; 
  char v12; 

  PerturbationPoint((const vec2_t *)&vec3_origin, &out, 0.5);
  v0 = (float *)&v12;
  v1 = 127i64;
  p_out = &out;
  do
  {
    do
    {
      v3 = I_crandom();
      FastSinCos(*(float *)&v3 * 3.1415927, s, &c);
      v4 = I_random();
      v5 = *(float *)&v4 * c;
      v6 = *(float *)&v4 * s[0];
      *v0 = *(float *)&v4 * c;
      v0[1] = v6;
    }
    while ( (float)((float)((float)(v6 - p_out->v[1]) * (float)(v6 - p_out->v[1])) + (float)((float)(v5 - p_out->v[0]) * (float)(v5 - p_out->v[0]))) < 0.25 );
    ++p_out;
    v0 += 2;
    --v1;
  }
  while ( v1 );
  v7 = &out;
  v8 = 128i64;
  do
  {
    Com_Printf(17, "\t{%f, %f},\n", v7->v[0], v7->v[1]);
    ++v7;
    --v8;
  }
  while ( v8 );
}

/*
==============
CG_Shellshock_SaveScreenToBuffer
==============
*/
void CG_Shellshock_SaveScreenToBuffer(LocalClientNum_t localClientNum)
{
  const ClientViewParams *LocalClientViewParams; 

  LocalClientViewParams = CG_GetLocalClientViewParams(localClientNum);
  R_AddCmdSaveScreenSection(LocalClientViewParams->x, LocalClientViewParams->y, LocalClientViewParams->width, LocalClientViewParams->height, localClientNum);
}

/*
==============
CG_StartShellShock
==============
*/
void CG_StartShellShock(cg_t *cgameGlob, const shellshock_parms_t *parms, int start, int duration)
{
  int v4; 

  cgameGlob->shellshock.parms = parms;
  v4 = 999999;
  cgameGlob->shellshock.startTime = start;
  if ( duration < 0xFFFF )
    v4 = duration;
  cgameGlob->shellshock.duration = v4;
}

/*
==============
CG_UpdateShellShock
==============
*/
void CG_UpdateShellShock(LocalClientNum_t localClientNum, const shellshock_parms_t *parms, int start, int duration)
{
  int v8; 
  int fadeTime; 
  int v10; 
  float v11; 
  cg_t *LocalClientGlobals; 
  float mouseSensitivity; 
  float maxPitchSpeed; 
  float maxYawSpeed; 
  cg_t *v16; 
  cg_t *v17; 
  cg_t *v18; 
  cg_t *v19; 

  v8 = CG_GetLocalClientGlobals(localClientNum)->time - start;
  if ( start && v8 >= 0 )
  {
    UpdateShellShockSound(localClientNum, parms, v8, duration);
    if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shellshock.cpp", 583, ASSERT_TYPE_ASSERT, "(parms)", (const char *)&queryFormat, "parms") )
      __debugbreak();
    if ( duration < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shellshock.cpp", 585, ASSERT_TYPE_ASSERT, "(duration >= 0)", (const char *)&queryFormat, "duration >= 0") )
      __debugbreak();
    if ( parms->lookControl.affect )
    {
      fadeTime = parms->lookControl.fadeTime;
      v10 = duration - v8;
      if ( duration - v8 >= fadeTime )
      {
        v11 = FLOAT_1_0;
        goto LABEL_14;
      }
      if ( v10 > 0 )
      {
        v11 = (float)v10 / (float)fadeTime;
LABEL_14:
        LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
        LocalClientGlobals->shellshock.lookControlActive = 1;
        mouseSensitivity = parms->lookControl.mouseSensitivity;
        if ( v11 == 1.0 )
        {
          LocalClientGlobals->shellshock.sensitivity = mouseSensitivity;
          maxPitchSpeed = parms->lookControl.maxPitchSpeed;
          maxYawSpeed = parms->lookControl.maxYawSpeed;
        }
        else
        {
          LocalClientGlobals->shellshock.sensitivity = (float)((float)(mouseSensitivity - 1.0) * v11) + 1.0;
          maxPitchSpeed = (float)(1.0 / v11) * parms->lookControl.maxPitchSpeed;
          maxYawSpeed = (float)(1.0 / v11) * parms->lookControl.maxYawSpeed;
        }
        goto LABEL_18;
      }
    }
    v16 = CG_GetLocalClientGlobals(localClientNum);
    maxPitchSpeed = 0.0;
    maxYawSpeed = 0.0;
    v16->shellshock.sensitivity = 1.0;
    v16->shellshock.lookControlActive = 0;
LABEL_18:
    CL_CapTurnRate(localClientNum, TURNRATECAPTYPE_SHELLSHOCK, maxPitchSpeed, maxYawSpeed);
    UpdateShellShockCamera(localClientNum, parms, v8, duration);
    return;
  }
  CG_ClearAudioOverride(localClientNum, CTAUD_OVERRIDE_SHELLSHOCK, 0.0);
  v17 = CG_GetLocalClientGlobals(localClientNum);
  if ( v17->shellshock.loopEndTime )
  {
    v17->shellshock.loopEndTime = 0;
    SND_PlaySoundAlias("shellshock_end_abort", localClientNum, 2047, &vec3_origin, 0, SASYS_CGAME);
  }
  v18 = CG_GetLocalClientGlobals(localClientNum);
  v18->shellshock.sensitivity = 1.0;
  v18->shellshock.lookControlActive = 0;
  CL_CapTurnRate(localClientNum, TURNRATECAPTYPE_SHELLSHOCK, 0.0, 0.0);
  CG_GetLocalClientGlobals(localClientNum)->shellshock.viewDelta = 0i64;
  v19 = CG_GetLocalClientGlobals(localClientNum);
  if ( !v19->cvsData.transitory.thermalVisionActive )
    *(_QWORD *)&v19->shellshock.wantSavedScreen = 0i64;
}

/*
==============
EndShellShockSound
==============
*/
void EndShellShockSound(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  CG_ClearAudioOverride(localClientNum, CTAUD_OVERRIDE_SHELLSHOCK, 0.0);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->shellshock.loopEndTime )
  {
    LocalClientGlobals->shellshock.loopEndTime = 0;
    SND_PlaySoundAlias("shellshock_end_abort", localClientNum, 2047, &vec3_origin, 0, SASYS_CGAME);
  }
}

/*
==============
PerturbationPoint
==============
*/
void PerturbationPoint(const vec2_t *prev, vec2_t *out, float mindist)
{
  float v5; 
  double v6; 
  double v7; 
  float v8; 
  float v9; 
  float c; 
  float s[3]; 

  v5 = mindist * mindist;
  do
  {
    v6 = I_crandom();
    FastSinCos(*(float *)&v6 * 3.1415927, s, &c);
    v7 = I_random();
    v8 = *(float *)&v7 * c;
    v9 = *(float *)&v7 * s[0];
    out->v[0] = *(float *)&v7 * c;
    out->v[1] = v9;
  }
  while ( (float)((float)((float)(v9 - prev->v[1]) * (float)(v9 - prev->v[1])) + (float)((float)(v8 - prev->v[0]) * (float)(v8 - prev->v[0]))) < v5 );
}

/*
==============
UpdateShellShockCamera
==============
*/
void UpdateShellShockCamera(LocalClientNum_t localClientNum, const shellshock_parms_t *parms, int time, int duration)
{
  char v4; 
  int v5; 
  ClActiveClient *Client; 
  int fadeTime; 
  float v11; 
  float v12; 
  __int64 v15; 
  float v16; 
  cg_t *LocalClientGlobals; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 

  v4 = duration;
  v5 = duration - time;
  if ( duration - time > 0 )
  {
    Client = ClActiveClient::GetClient(localClientNum);
    if ( Client->GetFreeMoveType(Client) != FREEMOVE_UFO )
    {
      if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shellshock.cpp", 650, ASSERT_TYPE_ASSERT, "(parms)", (const char *)&queryFormat, "parms") )
        __debugbreak();
      fadeTime = parms->view.fadeTime;
      v11 = FLOAT_1_0;
      if ( v5 < fadeTime )
        v11 = (float)v5 / (float)fadeTime;
      v12 = (float)((float)((float)(3.0 - (float)(v11 * 2.0)) * v11) * v11) * parms->view.kickRadius;
      _XMM1 = 0i64;
      __asm { vroundss xmm3, xmm1, xmm2, 1 }
      v15 = ((unsigned __int8)(int)*(float *)&_XMM3 + 61 * v4) & 0x7F;
      v16 = (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)time).m128_f32[0] * parms->view.kickRate) - _mm_cvtepi32_ps((__m128i)(unsigned int)(int)*(float *)&_XMM3).m128_f32[0];
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      v18 = cg_perturbations[v15 + 1].v[0];
      v19 = cg_perturbations[v15].v[0];
      v20 = cg_perturbations[v15 + 2].v[0];
      v21 = (float)((float)(cg_perturbations[v15 + 3].v[0] - v20) + v18) - v19;
      LocalClientGlobals->shellshock.viewDelta.v[0] = (float)((float)((float)((float)((float)((float)((float)(v19 - v18) - v21) + (float)(v21 * v16)) * v16) + (float)(v20 - v19)) * v16) + v18) * v12;
      v22 = cg_perturbations[v15 + 1].v[1];
      v23 = cg_perturbations[v15 + 2].v[1];
      v24 = cg_perturbations[v15].v[1];
      v25 = (float)((float)(cg_perturbations[v15 + 3].v[1] - v23) + v22) - v24;
      LocalClientGlobals->shellshock.viewDelta.v[1] = (float)((float)((float)((float)((float)((float)((float)(v24 - v22) - v25) + (float)(v25 * v16)) * v16) + (float)(v23 - v24)) * v16) + v22) * v12;
    }
  }
  else
  {
    CG_GetLocalClientGlobals(localClientNum)->shellshock.viewDelta = 0i64;
  }
}

/*
==============
UpdateShellShockSound
==============
*/
void UpdateShellShockSound(LocalClientNum_t localClientNum, const shellshock_parms_t *parms, int time, int duration)
{
  int v8; 
  float v9; 
  int loopFadeTime; 
  int v11; 
  const SndAliasList *Alias; 
  const SndAliasList *v13; 
  cg_t *LocalClientGlobals; 
  int v15; 
  int loopEndTime; 
  int v17; 

  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shellshock.cpp", 514, ASSERT_TYPE_ASSERT, "(parms)", (const char *)&queryFormat, "parms") )
    __debugbreak();
  if ( time < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shellshock.cpp", 515, ASSERT_TYPE_ASSERT, "(time >= 0)", (const char *)&queryFormat, "time >= 0") )
    __debugbreak();
  if ( duration < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shellshock.cpp", 516, ASSERT_TYPE_ASSERT, "(duration >= 0)", (const char *)&queryFormat, "duration >= 0") )
    __debugbreak();
  if ( parms->sound.affect )
  {
    v8 = duration + parms->sound.fadeOutTime + parms->sound.modEndDelay - time;
    v9 = 0.0;
    if ( time >= parms->sound.fadeInTime || CG_IsOverrideSet(localClientNum, CTAUD_OVERRIDE_SHELLSHOCK) )
    {
      if ( v8 <= parms->sound.fadeOutTime || CG_IsOverrideSet(localClientNum, CTAUD_OVERRIDE_SHELLSHOCK) )
      {
        if ( v8 >= 0 && v8 < parms->sound.fadeOutTime && CG_IsOverrideSet(localClientNum, CTAUD_OVERRIDE_SHELLSHOCK) )
          CG_ClearAudioOverride(localClientNum, CTAUD_OVERRIDE_SHELLSHOCK, (float)v8 * 0.001);
      }
      else if ( parms->sound.audioZone[0] )
      {
        CG_SetAudioOverride(localClientNum, parms->sound.audioZone, CTAUD_OVERRIDE_SHELLSHOCK, 0.0, 2047);
      }
    }
    else if ( parms->sound.audioZone[0] )
    {
      CG_SetAudioOverride(localClientNum, parms->sound.audioZone, CTAUD_OVERRIDE_SHELLSHOCK, (float)(parms->sound.fadeInTime - time) * 0.001, 2047);
    }
    loopFadeTime = parms->sound.loopFadeTime;
    v11 = duration + parms->sound.loopEndDelay + loopFadeTime - time;
    if ( v11 > 0 )
    {
      if ( loopFadeTime && v11 <= loopFadeTime )
        v9 = 1.0 - (float)((float)v11 / (float)loopFadeTime);
      Alias = SND_FindAlias(parms->sound.loopSilent);
      v13 = SND_FindAlias(parms->sound.loop);
      SND_PlayBlendedSoundAlias(v13, Alias, v9, localClientNum, 2047, 1.0, 1.0, &vec3_origin, 0, SASYS_CGAME);
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v15 = LocalClientGlobals->time;
    loopEndTime = LocalClientGlobals->shellshock.loopEndTime;
    v17 = duration + parms->sound.loopEndDelay + v15 - time;
    if ( v15 >= v17 )
    {
      if ( v17 != loopEndTime )
      {
        LocalClientGlobals->shellshock.loopEndTime = v17;
        SND_PlaySoundAlias(parms->sound.end, localClientNum, 2047, &vec3_origin, v15 - v17, SASYS_CGAME);
      }
    }
    else if ( loopEndTime )
    {
      LocalClientGlobals->shellshock.loopEndTime = 0;
      SND_PlaySoundAlias(parms->sound.endAbort, localClientNum, 2047, &vec3_origin, 0, SASYS_CGAME);
    }
  }
  else
  {
    EndShellShockSound(localClientNum);
  }
}

