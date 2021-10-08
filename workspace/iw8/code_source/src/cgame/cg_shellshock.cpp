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
  int v16; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v5 = LocalClientGlobals;
  if ( screenBlendTime > 0 )
  {
    if ( LocalClientGlobals->shellshock.hasSavedScreen )
    {
      _RAX = CG_GetLocalClientViewParams(localClientNum);
      __asm
      {
        vmovss  xmm0, dword ptr [rax+0Ch]
        vmovss  xmm3, dword ptr [rax+8]; viewWidth
        vmovss  xmm2, dword ptr [rax+4]; viewY
        vmovss  xmm1, dword ptr [rax]; viewX
        vmovss  [rsp+38h+var_18], xmm0
      }
      R_AddCmdBlendSavedScreenShockBlurred(screenBlendTime, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, *(float *)&v16, localClientNum);
    }
    if ( v5->shellshock.hasScissor )
    {
      v5->shellshock.wantSavedScreen = 1;
    }
    else
    {
      _RAX = CG_GetLocalClientViewParams(localClientNum);
      __asm
      {
        vmovss  xmm3, dword ptr [rax+0Ch]; viewHeight
        vmovss  xmm2, dword ptr [rax+8]; viewWidth
        vmovss  xmm1, dword ptr [rax+4]; viewY
        vmovss  xmm0, dword ptr [rax]; viewX
      }
      R_AddCmdSaveScreenSection(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, localClientNum);
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

void __fastcall CG_DrawShellShockSavedScreenBlendFlashed(LocalClientNum_t localClientNum, double _XMM1_8, double _XMM2_8)
{
  cg_t *LocalClientGlobals; 
  cg_t *v8; 
  int startTime; 
  int duration; 
  float v32; 
  float v33; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v8 = LocalClientGlobals;
  startTime = LocalClientGlobals->shellshock.startTime;
  if ( startTime && (duration = LocalClientGlobals->shellshock.duration, duration > 0) && startTime + duration - v8->time > 0 )
  {
    __asm
    {
      vmovaps [rsp+68h+var_18], xmm6
      vmovss  xmm6, cs:__real@3f800000
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, dword ptr [rdx+8]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vcomiss xmm0, xmm2
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [rdx+0Ch]
      vmovaps [rsp+68h+var_28], xmm7
      vmovaps xmm3, xmm6
      vcomiss xmm0, xmm1
      vmovaps xmm0, xmm3; percent
    }
    *(double *)&_XMM0 = BG_ShellshockBlendSmooth(*(float *)&_XMM0);
    __asm
    {
      vmovaps xmm7, xmm0
      vmovaps xmm0, xmm6; percent
    }
    *(double *)&_XMM0 = BG_ShellshockBlendSmooth(*(float *)&_XMM0);
    __asm { vmovaps xmm6, xmm0 }
    if ( v8->shellshock.hasSavedScreen )
    {
      CG_Draw_EndSceneCmds();
      _RAX = CG_GetLocalClientViewParams(localClientNum);
      __asm
      {
        vmovaps xmm0, xmm7; intensityWhiteout
        vmovss  xmm1, dword ptr [rax+0Ch]
        vmovss  xmm2, dword ptr [rax+8]
        vmovss  xmm3, dword ptr [rax+4]; viewY
        vmovss  [rsp+68h+var_40], xmm1
        vmovss  [rsp+68h+var_48], xmm2
        vmovss  xmm2, dword ptr [rax]; viewX
        vmovaps xmm1, xmm6; intensityScreengrab
      }
      R_AddCmdBlendSavedScreenShockFlashed(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v32, v33, localClientNum);
    }
    else if ( v8->shellshock.hasScissor )
    {
      v8->shellshock.wantSavedScreen = 1;
    }
    else
    {
      CG_Shellshock_SaveScreenToBuffer(localClientNum);
      v8->shellshock.hasSavedScreen = 1;
    }
    __asm
    {
      vmovaps xmm6, [rsp+68h+var_18]
      vmovaps xmm7, [rsp+68h+var_28]
    }
  }
  else
  {
    *(_QWORD *)&v8->shellshock.wantSavedScreen = 0i64;
  }
}

/*
==============
CG_DrawShellShockSavedScreenBlendPhoto
==============
*/

void __fastcall CG_DrawShellShockSavedScreenBlendPhoto(LocalClientNum_t localClientNum, double _XMM1_8)
{
  cg_t *LocalClientGlobals; 
  int startTime; 
  int duration; 
  float v23; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  startTime = LocalClientGlobals->shellshock.startTime;
  if ( startTime && (duration = LocalClientGlobals->shellshock.duration, duration > 0) && startTime + duration - LocalClientGlobals->nextSnap->serverTime > 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, r8d
      vcvtsi2ss xmm0, xmm0, dword ptr [rax+0Ch]
      vcomiss xmm1, xmm0
      vmovaps [rsp+48h+var_18], xmm6
      vmovss  xmm0, cs:__real@3f800000; percent
    }
    *(double *)&_XMM0 = BG_ShellshockBlendSmooth(*(float *)&_XMM0);
    __asm { vmovaps xmm6, xmm0 }
    if ( LocalClientGlobals->shellshock.hasSavedScreen )
    {
      CG_Draw_EndSceneCmds();
      _RAX = CG_GetLocalClientViewParams(localClientNum);
      __asm
      {
        vmovaps xmm0, xmm6; intensityScreengrab
        vmovss  xmm1, dword ptr [rax+0Ch]
        vmovss  xmm3, dword ptr [rax+8]; viewWidth
        vmovss  xmm2, dword ptr [rax+4]; viewY
        vmovss  [rsp+48h+var_28], xmm1
        vmovss  xmm1, dword ptr [rax]; viewX
      }
      R_AddCmdBlendSavedScreenShockPhoto(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v23, localClientNum);
      __asm { vmovaps xmm6, [rsp+48h+var_18] }
    }
    else if ( LocalClientGlobals->shellshock.hasScissor )
    {
      __asm { vmovaps xmm6, [rsp+48h+var_18] }
      LocalClientGlobals->shellshock.wantSavedScreen = 1;
    }
    else
    {
      CG_Shellshock_SaveScreenToBuffer(localClientNum);
      __asm { vmovaps xmm6, [rsp+48h+var_18] }
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
  const shellshock_parms_t *parms; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  startTime = LocalClientGlobals->shellshock.startTime;
  if ( !startTime )
    return 0i64;
  duration = LocalClientGlobals->shellshock.duration;
  if ( duration <= 0 )
    return 0i64;
  _ECX = startTime + duration - LocalClientGlobals->time;
  if ( _ECX <= 0 )
    return 0i64;
  parms = LocalClientGlobals->shellshock.parms;
  _ER8 = parms->screenBlend.blurredFadeTime;
  _EDX = parms->screenBlend.blurredEffectTime;
  if ( _ECX < parms->screenBlend.blurredFadeTime )
  {
    __asm
    {
      vmovd   xmm1, ecx
      vcvtdq2ps xmm1, xmm1
      vmovd   xmm0, r8d
      vcvtdq2ps xmm0, xmm0
      vdivss  xmm2, xmm1, xmm0
      vmovd   xmm1, edx
      vcvtdq2ps xmm1, xmm1
      vmulss  xmm2, xmm2, xmm1
      vaddss  xmm3, xmm2, cs:__real@3f000000
      vxorps  xmm1, xmm1, xmm1
      vroundss xmm2, xmm1, xmm3, 1
      vcvttss2si edx, xmm2
    }
  }
  return _EDX;
}

/*
==============
CG_PerturbCamera
==============
*/
void CG_PerturbCamera(cg_t *cgameGlob)
{
  char v4; 
  cg_t *v7; 
  tmat33_t<vec3_t> v1; 
  tmat33_t<vec3_t> out; 

  __asm
  {
    vmovss  xmm5, dword ptr [rcx+4A054h]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm5, xmm0
  }
  v7 = cgameGlob;
  if ( !v4 )
    goto LABEL_3;
  __asm { vucomiss xmm0, dword ptr [rcx+4A058h] }
  if ( !v4 )
  {
LABEL_3:
    __asm
    {
      vmovss  xmm4, dword ptr [rcx+4A058h]
      vmovss  dword ptr [rsp+0A8h+v0], xmm0
      vmovss  dword ptr [rsp+0A8h+v0+4], xmm0
      vmulss  xmm0, xmm5, xmm5
      vmulss  xmm1, xmm4, xmm4
      vmovaps [rsp+0A8h+var_18], xmm6
      vmovaps [rsp+0A8h+var_28], xmm8
      vmovss  xmm8, cs:__real@3f800000
      vaddss  xmm2, xmm0, xmm8
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm8, xmm0
      vdivss  xmm1, xmm8, xmm0
      vmulss  xmm0, xmm5, xmm1
      vmovss  dword ptr [rsp+0A8h+v1], xmm1
      vmulss  xmm1, xmm4, xmm1
      vmovss  dword ptr [rsp+0A8h+v1+8], xmm1
      vmovss  dword ptr [rsp+0A8h+v0+8], xmm8
      vmovss  dword ptr [rsp+0A8h+v1+4], xmm0
    }
    Vec3Cross(&v1.m[2], v1.m, &v1.m[1]);
    __asm
    {
      vmovss  xmm5, dword ptr [rsp+0A8h+cross]
      vmovss  xmm6, dword ptr [rsp+0A8h+cross+4]
      vmovss  xmm4, dword ptr [rsp+0A8h+cross+8]
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm3, xmm0, xmm0
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm8, xmm0
      vdivss  xmm2, xmm8, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rsp+0A8h+cross], xmm0
      vmulss  xmm0, xmm4, xmm2
      vmulss  xmm1, xmm6, xmm2
      vmovss  dword ptr [rsp+0A8h+cross+8], xmm0
      vmovss  dword ptr [rsp+0A8h+cross+4], xmm1
    }
    Vec3Cross(v1.m, &v1.m[1], &v1.m[2]);
    AxisCopy(&v7->refdef.view.axis, &out);
    MatrixMultiply(&v1, &out, &v7->refdef.view.axis);
    __asm
    {
      vmovaps xmm8, [rsp+0A8h+var_28]
      vmovaps xmm6, [rsp+0A8h+var_18]
    }
  }
}

/*
==============
CG_PrintPerturbationPoints
==============
*/

void __fastcall CG_PrintPerturbationPoints(double _XMM0_8)
{
  __int64 v8; 
  vec2_t *p_out; 
  char v17; 
  __int64 v19; 
  float c; 
  float s[3]; 
  vec2_t out; 
  char v32; 
  char v33; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovss  xmm2, cs:__real@3f000000; mindist
  }
  PerturbationPoint((const vec2_t *)&vec3_origin, &out, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm6, cs:__real@40490fdb
    vmovss  xmm7, cs:__real@3e800000
  }
  _RBX = &v32;
  v8 = 127i64;
  p_out = &out;
  do
  {
    do
    {
      _XMM0_8 = I_crandom();
      __asm { vmulss  xmm0, xmm0, xmm6; radians }
      FastSinCos(*(const float *)&_XMM0, s, &c);
      *(double *)&_XMM0 = I_random();
      __asm
      {
        vmulss  xmm2, xmm0, [rsp+468h+c]
        vmulss  xmm1, xmm0, [rsp+468h+s]
        vmovss  dword ptr [rbx], xmm2
        vmovss  dword ptr [rbx+4], xmm1
        vsubss  xmm3, xmm2, dword ptr [rdi]
        vsubss  xmm0, xmm1, dword ptr [rdi+4]
        vmulss  xmm2, xmm0, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vcomiss xmm2, xmm7
      }
    }
    while ( v17 );
    ++p_out;
    _RBX += 8;
    --v8;
  }
  while ( v8 );
  _RBX = &out;
  v19 = 128i64;
  do
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+4]
      vmovss  xmm2, dword ptr [rbx]
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm2, xmm2, xmm2
      vmovq   r9, xmm3
      vmovq   r8, xmm2
    }
    Com_Printf(17, "\t{%f, %f},\n", *(double *)&_XMM2, *(double *)&_XMM3);
    ++_RBX;
    --v19;
  }
  while ( v19 );
  _R11 = &v33;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
CG_Shellshock_SaveScreenToBuffer
==============
*/
void CG_Shellshock_SaveScreenToBuffer(LocalClientNum_t localClientNum)
{
  _RAX = CG_GetLocalClientViewParams(localClientNum);
  __asm
  {
    vmovss  xmm3, dword ptr [rax+0Ch]; viewHeight
    vmovss  xmm2, dword ptr [rax+8]; viewWidth
    vmovss  xmm1, dword ptr [rax+4]; viewY
    vmovss  xmm0, dword ptr [rax]; viewX
  }
  R_AddCmdSaveScreenSection(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, localClientNum);
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
  int v14; 
  cg_t *LocalClientGlobals; 
  char v26; 
  cg_t *v31; 
  cg_t *v35; 
  cg_t *v36; 
  cg_t *v39; 

  _RSI = parms;
  v14 = CG_GetLocalClientGlobals(localClientNum)->time - start;
  if ( start && v14 >= 0 )
  {
    UpdateShellShockSound(localClientNum, _RSI, v14, duration);
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shellshock.cpp", 583, ASSERT_TYPE_ASSERT, "(parms)", (const char *)&queryFormat, "parms") )
      __debugbreak();
    if ( duration < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shellshock.cpp", 585, ASSERT_TYPE_ASSERT, "(duration >= 0)", (const char *)&queryFormat, "duration >= 0") )
      __debugbreak();
    if ( !_RSI->lookControl.affect )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      __asm
      {
        vxorps  xmm2, xmm2, xmm2
        vxorps  xmm3, xmm3, xmm3
      }
      LocalClientGlobals->shellshock.sensitivity = 1.0;
      LocalClientGlobals->shellshock.lookControlActive = 0;
LABEL_20:
      CL_CapTurnRate(localClientNum, TURNRATECAPTYPE_SHELLSHOCK, *(float *)&_XMM2, *(float *)&_XMM3);
      UpdateShellShockCamera(localClientNum, _RSI, v14, duration);
      return;
    }
    __asm
    {
      vmovaps [rsp+58h+var_18], xmm6
      vmovaps [rsp+58h+var_28], xmm7
      vmovss  xmm6, cs:__real@3f800000
    }
    if ( duration - v14 < _RSI->lookControl.fadeTime )
    {
      if ( duration - v14 <= 0 )
      {
        v31 = CG_GetLocalClientGlobals(localClientNum);
        __asm
        {
          vxorps  xmm2, xmm2, xmm2; maxPitchSpeed
          vxorps  xmm3, xmm3, xmm3; maxYawSpeed
        }
        v31->shellshock.sensitivity = 1.0;
        v31->shellshock.lookControlActive = 0;
LABEL_19:
        __asm
        {
          vmovaps xmm6, [rsp+58h+var_18]
          vmovaps xmm7, [rsp+58h+var_28]
        }
        goto LABEL_20;
      }
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm1, xmm1, eax
        vcvtsi2ss xmm0, xmm0, ecx
        vdivss  xmm7, xmm1, xmm0
      }
    }
    else
    {
      __asm { vmovaps xmm7, xmm6 }
    }
    _RAX = CG_GetLocalClientGlobals(localClientNum);
    __asm { vucomiss xmm7, xmm6 }
    _RAX->shellshock.lookControlActive = 1;
    __asm { vmovss  xmm0, dword ptr [rsi+180h] }
    if ( v26 )
    {
      __asm
      {
        vmovss  dword ptr [rax+4A050h], xmm0
        vmovss  xmm2, dword ptr [rsi+184h]
        vmovss  xmm3, dword ptr [rsi+188h]
      }
    }
    else
    {
      __asm
      {
        vsubss  xmm0, xmm0, xmm6
        vmulss  xmm1, xmm0, xmm7
        vaddss  xmm2, xmm1, xmm6
        vdivss  xmm0, xmm6, xmm7
        vmovss  dword ptr [rax+4A050h], xmm2
        vmulss  xmm2, xmm0, dword ptr [rsi+184h]
        vmulss  xmm3, xmm0, dword ptr [rsi+188h]
      }
    }
    goto LABEL_19;
  }
  __asm { vxorps  xmm2, xmm2, xmm2; fadeTime }
  CG_ClearAudioOverride(localClientNum, CTAUD_OVERRIDE_SHELLSHOCK, *(float *)&_XMM2);
  v35 = CG_GetLocalClientGlobals(localClientNum);
  if ( v35->shellshock.loopEndTime )
  {
    v35->shellshock.loopEndTime = 0;
    SND_PlaySoundAlias("shellshock_end_abort", localClientNum, 2047, &vec3_origin, 0, SASYS_CGAME);
  }
  v36 = CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; maxYawSpeed
    vxorps  xmm2, xmm2, xmm2; maxPitchSpeed
  }
  v36->shellshock.sensitivity = 1.0;
  v36->shellshock.lookControlActive = 0;
  CL_CapTurnRate(localClientNum, TURNRATECAPTYPE_SHELLSHOCK, *(float *)&_XMM2, *(float *)&_XMM3);
  CG_GetLocalClientGlobals(localClientNum)->shellshock.viewDelta = 0i64;
  v39 = CG_GetLocalClientGlobals(localClientNum);
  if ( !v39->cvsData.transitory.thermalVisionActive )
    *(_QWORD *)&v39->shellshock.wantSavedScreen = 0i64;
}

/*
==============
EndShellShockSound
==============
*/

void __fastcall EndShellShockSound(LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  cg_t *LocalClientGlobals; 

  __asm { vxorps  xmm2, xmm2, xmm2; fadeTime }
  CG_ClearAudioOverride(localClientNum, CTAUD_OVERRIDE_SHELLSHOCK, *(float *)&_XMM2);
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

void __fastcall PerturbationPoint(const vec2_t *prev, vec2_t *out, double mindist)
{
  char v16; 
  float c; 
  float s[3]; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RDI = out;
  __asm
  {
    vmovaps [rsp+58h+var_28], xmm7
    vmovss  xmm7, cs:__real@40490fdb
    vmulss  xmm6, xmm2, xmm2
  }
  do
  {
    *(double *)&_XMM0 = I_crandom();
    __asm { vmulss  xmm0, xmm0, xmm7; radians }
    FastSinCos(*(const float *)&_XMM0, s, &c);
    *(double *)&_XMM0 = I_random();
    __asm
    {
      vmulss  xmm2, xmm0, [rsp+58h+c]
      vmulss  xmm1, xmm0, [rsp+58h+s]
      vmovss  dword ptr [rdi], xmm2
      vmovss  dword ptr [rdi+4], xmm1
      vsubss  xmm3, xmm2, dword ptr [rbx]
      vsubss  xmm0, xmm1, dword ptr [rbx+4]
      vmulss  xmm2, xmm0, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, xmm6
    }
  }
  while ( v16 );
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
}

/*
==============
UpdateShellShockCamera
==============
*/
void UpdateShellShockCamera(LocalClientNum_t localClientNum, const shellshock_parms_t *parms, int time, int duration)
{
  char v10; 
  int v11; 
  ClActiveClient *Client; 

  v10 = duration;
  v11 = duration - time;
  _ER14 = time;
  if ( duration - time > 0 )
  {
    Client = ClActiveClient::GetClient(localClientNum);
    if ( Client->GetFreeMoveType(Client) != FREEMOVE_UFO )
    {
      __asm
      {
        vmovaps [rsp+78h+var_18], xmm6
        vmovaps [rsp+78h+var_28], xmm7
        vmovaps [rsp+78h+var_38], xmm8
        vmovaps [rsp+78h+var_48], xmm9
      }
      if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shellshock.cpp", 650, ASSERT_TYPE_ASSERT, "(parms)", (const char *)&queryFormat, "parms") )
        __debugbreak();
      __asm { vmovss  xmm3, cs:__real@3f800000 }
      if ( v11 < parms->view.fadeTime )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm1, xmm1, ebx
          vcvtsi2ss xmm0, xmm0, eax
          vdivss  xmm3, xmm1, xmm0
        }
      }
      __asm
      {
        vmulss  xmm1, xmm3, cs:__real@40000000
        vmovss  xmm0, cs:__real@40400000
        vsubss  xmm1, xmm0, xmm1
        vmulss  xmm2, xmm1, xmm3
        vmulss  xmm3, xmm2, xmm3
        vmulss  xmm9, xmm3, dword ptr [rdi+1Ch]
        vmovd   xmm0, r14d
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm4, xmm0, dword ptr [rdi+18h]
        vmovaps xmm1, xmm4
        vmovaps xmm2, xmm1
        vxorps  xmm1, xmm1, xmm1
      }
      _RDI = cg_perturbations;
      __asm
      {
        vroundss xmm3, xmm1, xmm2, 1
        vcvttss2si eax, xmm3
        vmovd   xmm0, eax
        vcvtdq2ps xmm0, xmm0
      }
      _RBX = ((_BYTE)_EAX + 61 * v10) & 0x7F;
      __asm { vsubss  xmm8, xmm4, xmm0 }
      _RAX = CG_GetLocalClientGlobals(localClientNum);
      __asm
      {
        vmovss  xmm7, dword ptr [rdi+rbx*8+8]
        vmovss  xmm5, dword ptr [rdi+rbx*8]
        vmovss  xmm6, dword ptr [rdi+rbx*8+10h]
        vmovss  xmm0, dword ptr [rdi+rbx*8+18h]
        vsubss  xmm1, xmm0, xmm6
        vaddss  xmm2, xmm1, xmm7
        vsubss  xmm4, xmm2, xmm5
        vmulss  xmm1, xmm4, xmm8
        vsubss  xmm0, xmm5, xmm7
        vsubss  xmm3, xmm0, xmm4
        vaddss  xmm2, xmm3, xmm1
        vmulss  xmm4, xmm2, xmm8
        vsubss  xmm0, xmm6, xmm5
        vaddss  xmm1, xmm4, xmm0
        vmulss  xmm2, xmm1, xmm8
        vaddss  xmm3, xmm2, xmm7
        vmulss  xmm0, xmm3, xmm9
        vmovss  dword ptr [rax+4A054h], xmm0
        vmovss  xmm7, dword ptr [rdi+rbx*8+0Ch]
        vmovss  xmm6, dword ptr [rdi+rbx*8+14h]
        vmovss  xmm5, dword ptr [rdi+rbx*8+4]
        vmovss  xmm0, dword ptr [rdi+rbx*8+1Ch]
        vsubss  xmm1, xmm0, xmm6
        vaddss  xmm2, xmm1, xmm7
        vsubss  xmm4, xmm2, xmm5
        vmulss  xmm1, xmm4, xmm8
        vsubss  xmm0, xmm5, xmm7
        vsubss  xmm3, xmm0, xmm4
        vaddss  xmm2, xmm3, xmm1
        vmulss  xmm4, xmm2, xmm8
        vsubss  xmm0, xmm6, xmm5
        vmovaps xmm6, [rsp+78h+var_18]
        vaddss  xmm1, xmm4, xmm0
        vmulss  xmm2, xmm1, xmm8
        vmovaps xmm8, [rsp+78h+var_38]
        vaddss  xmm3, xmm2, xmm7
        vmovaps xmm7, [rsp+78h+var_28]
        vmulss  xmm0, xmm3, xmm9
        vmovaps xmm9, [rsp+78h+var_48]
        vmovss  dword ptr [rax+4A058h], xmm0
      }
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
  double v6; 
  int v14; 
  int loopFadeTime; 
  int v22; 
  const SndAliasList *Alias; 
  const SndAliasList *v30; 
  cg_t *LocalClientGlobals; 
  int v35; 
  int loopEndTime; 
  int v37; 
  float volumeScale; 
  float v39; 

  if ( !parms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shellshock.cpp", 514, ASSERT_TYPE_ASSERT, "(parms)", (const char *)&queryFormat, "parms") )
    __debugbreak();
  if ( time < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shellshock.cpp", 515, ASSERT_TYPE_ASSERT, "(time >= 0)", (const char *)&queryFormat, "time >= 0") )
    __debugbreak();
  if ( duration < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_shellshock.cpp", 516, ASSERT_TYPE_ASSERT, "(duration >= 0)", (const char *)&queryFormat, "duration >= 0") )
    __debugbreak();
  if ( parms->sound.affect )
  {
    v14 = duration + parms->sound.fadeOutTime + parms->sound.modEndDelay - time;
    __asm
    {
      vmovaps [rsp+88h+var_38], xmm7
      vxorps  xmm7, xmm7, xmm7
    }
    if ( time >= parms->sound.fadeInTime || CG_IsOverrideSet(localClientNum, CTAUD_OVERRIDE_SHELLSHOCK) )
    {
      if ( v14 <= parms->sound.fadeOutTime || CG_IsOverrideSet(localClientNum, CTAUD_OVERRIDE_SHELLSHOCK) )
      {
        if ( v14 >= 0 && v14 < parms->sound.fadeOutTime && CG_IsOverrideSet(localClientNum, CTAUD_OVERRIDE_SHELLSHOCK) )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, ebx
            vmulss  xmm2, xmm0, cs:__real@3a83126f; fadeTime
          }
          CG_ClearAudioOverride(localClientNum, CTAUD_OVERRIDE_SHELLSHOCK, *(float *)&_XMM2);
        }
      }
      else if ( parms->sound.audioZone[0] )
      {
        __asm { vxorps  xmm3, xmm3, xmm3; fadeTime }
        CG_SetAudioOverride(localClientNum, parms->sound.audioZone, CTAUD_OVERRIDE_SHELLSHOCK, *(float *)&_XMM3, 2047);
      }
    }
    else if ( parms->sound.audioZone[0] )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm3, xmm0, cs:__real@3a83126f; fadeTime
      }
      CG_SetAudioOverride(localClientNum, parms->sound.audioZone, CTAUD_OVERRIDE_SHELLSHOCK, *(float *)&_XMM3, 2047);
    }
    loopFadeTime = parms->sound.loopFadeTime;
    v22 = duration + parms->sound.loopEndDelay + loopFadeTime - time;
    if ( v22 > 0 )
    {
      __asm
      {
        vmovaps [rsp+88h+var_28], xmm6
        vmovss  xmm6, cs:__real@3f800000
      }
      if ( loopFadeTime && v22 <= loopFadeTime )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm1, xmm1, eax
          vcvtsi2ss xmm0, xmm0, ecx
          vdivss  xmm2, xmm1, xmm0
          vsubss  xmm7, xmm6, xmm2
        }
      }
      Alias = SND_FindAlias(parms->sound.loopSilent);
      v30 = SND_FindAlias(parms->sound.loop);
      __asm
      {
        vmovss  [rsp+88h+var_58], xmm6
        vmovss  [rsp+88h+volumeScale], xmm6
        vmovaps xmm2, xmm7; lerp
      }
      SND_PlayBlendedSoundAlias(v30, Alias, *(const float *)&_XMM2, localClientNum, 2047, volumeScale, v39, &vec3_origin, 0, SASYS_CGAME);
      __asm { vmovaps xmm6, [rsp+88h+var_28] }
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    __asm { vmovaps xmm7, [rsp+88h+var_38] }
    v35 = LocalClientGlobals->time;
    loopEndTime = LocalClientGlobals->shellshock.loopEndTime;
    v37 = duration + parms->sound.loopEndDelay + v35 - time;
    if ( v35 >= v37 )
    {
      if ( v37 != loopEndTime )
      {
        LocalClientGlobals->shellshock.loopEndTime = v37;
        SND_PlaySoundAlias(parms->sound.end, localClientNum, 2047, &vec3_origin, v35 - v37, SASYS_CGAME);
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
    EndShellShockSound(localClientNum, (__int64)parms, v6);
  }
}

