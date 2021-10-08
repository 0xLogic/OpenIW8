/*
==============
CG_ArchiveCameraShake
==============
*/

void __fastcall CG_ArchiveCameraShake(LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  ?CG_ArchiveCameraShake@@YAXW4LocalClientNum_t@@PEAUMemoryFile@@@Z(localClientNum, memFile);
}

/*
==============
CG_ShakeCamera
==============
*/

void __fastcall CG_ShakeCamera(LocalClientNum_t localClientNum)
{
  ?CG_ShakeCamera@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_StartShakeCameraWithControls
==============
*/

void __fastcall CG_StartShakeCameraWithControls(LocalClientNum_t localClientNum, const int duration, const int entNum, const vec3_t *src, const float radius, const __int16 pitch, const __int16 yaw, const __int16 roll, __int16 freqPitch, __int16 freqYaw, __int16 freqRoll, const float fadeUp, const float fadeDown, const bool isEarthquake)
{
  ?CG_StartShakeCameraWithControls@@YAXW4LocalClientNum_t@@HHAEBTvec3_t@@MFFFFFFMM_N@Z(localClientNum, duration, entNum, src, radius, pitch, yaw, roll, freqPitch, freqYaw, freqRoll, fadeUp, fadeDown, isEarthquake);
}

/*
==============
CG_ClearCameraShakes
==============
*/

void __fastcall CG_ClearCameraShakes(LocalClientNum_t localClientNum)
{
  ?CG_ClearCameraShakes@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_StartShakeCamera
==============
*/

void __fastcall CG_StartShakeCamera(LocalClientNum_t localClientNum, float scale, int duration, const vec3_t *src, float radius)
{
  ?CG_StartShakeCamera@@YAXW4LocalClientNum_t@@MHAEBTvec3_t@@M@Z(localClientNum, scale, duration, src, radius);
}

/*
==============
CG_StartShakeCameraAll
==============
*/

void __fastcall CG_StartShakeCameraAll(float p, int duration, const vec3_t *src, float radius)
{
  ?CG_StartShakeCameraAll@@YAXMHAEBTvec3_t@@M@Z(p, duration, src, radius);
}

/*
==============
CG_AddToShakeSlot
==============
*/
void CG_AddToShakeSlot(LocalClientNum_t localClientNum, CameraShake *buildShake)
{
  int time; 
  int v8; 
  int v9; 
  CameraShakeSet *v11; 
  unsigned int v12; 
  bool v18; 
  bool v19; 
  __int64 v26; 

  _RDI = buildShake;
  _R14 = localClientNum;
  time = CG_GetLocalClientGlobals(localClientNum)->time;
  _R15 = s_cameraShakeSet;
  v8 = 0;
  v9 = 0;
  _RSI = &s_cameraShakeSet[_R14];
  v11 = &s_cameraShakeSet[_R14];
  do
  {
    v12 = v9;
    if ( v11->shakes[0].time > time )
      goto LABEL_18;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vaddss  xmm1, xmm0, dword ptr [rax+4]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r8d
      vcomiss xmm1, xmm0
    }
    if ( v11->shakes[0].time <= (unsigned int)time )
    {
LABEL_18:
      v26 = v9;
      goto LABEL_19;
    }
    ++v9;
    v11 = (CameraShakeSet *)((char *)v11 + 68);
  }
  while ( v9 < 4 );
  __asm
  {
    vmovaps [rsp+58h+var_28], xmm6
    vmovss  xmm6, dword ptr [rdi+18h]
  }
  v18 = v12 <= 3;
  if ( v12 != 3 )
  {
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 196, ASSERT_TYPE_ASSERT, "(i == 4)", (const char *)&queryFormat, "i == MAX_CAMERA_SHAKE");
    v18 = !v19;
    if ( v19 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm6, dword ptr [r14+r15+18h]
    vminss  xmm2, xmm6, dword ptr [r14+r15+18h]
    vmovss  xmm1, dword ptr [r14+r15+5Ch]
    vmovss  xmm0, dword ptr [r14+r15+0A0h]
    vmovaps xmm6, [rsp+58h+var_28]
  }
  if ( v18 )
    v8 = v9;
  __asm { vcomiss xmm2, xmm1 }
  if ( !v18 )
    v8 = 1;
  __asm
  {
    vminss  xmm2, xmm1, xmm2
    vcomiss xmm2, xmm0
    vminss  xmm0, xmm0, xmm2
  }
  if ( !v18 )
    v8 = 2;
  __asm { vcomiss xmm0, dword ptr [r14+r15+0E4h] }
  if ( v18 )
  {
    if ( v8 == 4 )
      return;
    v26 = v8;
  }
  else
  {
    v26 = 3i64;
  }
LABEL_19:
  __asm { vmovups ymm0, ymmword ptr [rdi] }
  _RCX = v26;
  __asm
  {
    vmovups ymmword ptr [rcx+rsi], ymm0
    vmovups ymm1, ymmword ptr [rdi+20h]
    vmovups ymmword ptr [rcx+rsi+20h], ymm1
  }
  _RSI->shakes[_RCX].fadeDown = _RDI->fadeDown;
}

/*
==============
CG_ArchiveCameraShake
==============
*/
void CG_ArchiveCameraShake(LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  CameraShakeSet *v3; 

  v3 = &s_cameraShakeSet[localClientNum];
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 397, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !memFile->archiveProc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 398, ASSERT_TYPE_ASSERT, "(memFile->archiveProc)", (const char *)&queryFormat, "memFile->archiveProc") )
    __debugbreak();
  memFile->archiveProc(memFile, 276ui64, v3);
}

/*
==============
CG_ClearCameraShakes
==============
*/
void CG_ClearCameraShakes(LocalClientNum_t localClientNum)
{
  memset_0(&s_cameraShakeSet[localClientNum], 0, 0x110ui64);
}

/*
==============
CG_SetupCameraShake_Common
==============
*/
void CG_SetupCameraShake_Common(LocalClientNum_t localClientNum, CameraShake *buildShake, const int duration, const vec3_t *src, const float radius)
{
  cg_t *LocalClientGlobals; 

  _RBX = buildShake;
  if ( !buildShake && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 220, ASSERT_TYPE_ASSERT, "(buildShake)", (const char *)&queryFormat, "buildShake") )
    __debugbreak();
  if ( duration <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 221, ASSERT_TYPE_ASSERT, "(duration > 0)", (const char *)&queryFormat, "duration > 0") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _RBX->time = 0;
  *(_QWORD *)&_RBX->radius = 0i64;
  *(_QWORD *)&_RBX->src.y = 0i64;
  *(_QWORD *)&_RBX->useShakeControls = 0i64;
  *(_QWORD *)&_RBX->scalePitch = 0i64;
  *(_QWORD *)&_RBX->frequencyYaw = 0i64;
  *(_QWORD *)&_RBX->entNum = 0i64;
  _RBX->fadeDown = 0.0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edi
    vmovss  dword ptr [rbx+4], xmm0
    vmovss  xmm0, [rsp+38h+radius]
  }
  *(_QWORD *)&_RBX->size = 0i64;
  LODWORD(LocalClientGlobals) = LocalClientGlobals->time;
  __asm { vmovss  dword ptr [rbx+8], xmm0 }
  _RBX->time = (int)LocalClientGlobals;
}

/*
==============
CG_ShakeCamera
==============
*/
void CG_ShakeCamera(LocalClientNum_t localClientNum)
{
  __int64 v13; 
  __int64 v29; 
  bool v34; 
  bool v75; 
  const dvar_t *v83; 
  __int64 v107; 
  __int64 v108; 
  __int64 v109; 
  char v116; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-0B8h], xmm13
  }
  v13 = localClientNum;
  __asm
  {
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps [rsp+148h+var_D8], xmm15
    vmovss  xmm13, cs:__real@3c23d70a
    vmovss  xmm14, cs:__real@41900000
    vmovss  xmm15, cs:__real@41800000
    vmovss  xmm7, cs:__real@41200000
    vmovss  xmm8, cs:__real@41000000
    vmovss  xmm9, cs:__real@41700000
  }
  _R14 = 276 * v13;
  __asm
  {
    vmovaps [rsp+148h+var_48], xmm6
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rax+65ECh]
    vmulss  xmm1, xmm0, cs:__real@3ada740e
  }
  _RSI = CG_GetLocalClientGlobals(localClientNum);
  _R15 = s_cameraShakeSet;
  _RBX = &s_cameraShakeSet[v13].shakes[0].rumbleScale;
  v108 = 0i64;
  __asm
  {
    vmovss  xmm3, dword ptr [rsp+148h+var_100+4]
    vmovss  xmm10, dword ptr [rsp+148h+var_100]
  }
  v109 = 0i64;
  v29 = 4i64;
  __asm { vmovss  xmm2, dword ptr [rsp+148h+var_F8] }
  v107 = 0i64;
  __asm
  {
    vmovss  xmm11, dword ptr [rsp+148h+var_108+4]
    vmovss  xmm12, dword ptr [rsp+148h+var_108]
    vmovss  [rsp+148h+arg_18], xmm1
    vmovss  xmm1, dword ptr [rsp+148h+var_F8+4]
    vmovss  [rsp+148h+arg_10], xmm1
    vmovss  [rsp+148h+arg_8], xmm2
    vmovss  [rsp+148h+arg_0], xmm3
  }
  do
  {
    if ( !CG_UpdateCameraShake((LocalClientNum_t)v13, _RSI, (CameraShake *)(_RBX - 7)) )
      goto LABEL_12;
    v34 = *((_BYTE *)_RBX + 4) == 0;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx-4]
      vminss  xmm3, xmm0, cs:__real@3f800000
    }
    if ( !*((_BYTE *)_RBX + 4) )
    {
      __asm
      {
        vmulss  xmm0, xmm3, dword ptr [rbx]
        vmulss  xmm4, xmm0, xmm14
        vmulss  xmm5, xmm0, xmm15
        vmulss  xmm6, xmm0, xmm7
      }
      goto LABEL_8;
    }
    v34 = *((_BYTE *)_RBX + 5) == 0;
    __asm
    {
      vmovss  xmm6, dword ptr [rbx]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm13
    }
    if ( *((_BYTE *)_RBX + 5) )
    {
      __asm
      {
        vmulss  xmm0, xmm6, xmm1
        vmulss  xmm1, xmm0, xmm1
        vmulss  xmm2, xmm1, xmm3
        vmulss  xmm4, xmm2, xmm14
        vmulss  xmm5, xmm2, xmm15
        vmulss  xmm6, xmm2, xmm7
      }
LABEL_8:
      __asm
      {
        vmovaps xmm7, xmm8
        vmovaps xmm8, xmm9
        vmovss  xmm9, cs:__real@41400000
      }
      goto LABEL_9;
    }
    _EAX = *((__int16 *)_RBX + 8);
    __asm
    {
      vmulss  xmm0, xmm1, xmm3
      vmulss  xmm4, xmm0, xmm6
      vmovd   xmm1, eax
    }
    _EAX = *((__int16 *)_RBX + 7);
    __asm
    {
      vcvtdq2ps xmm1, xmm1
      vmulss  xmm0, xmm1, xmm13
      vmulss  xmm2, xmm0, xmm3
      vmovd   xmm0, eax
    }
    _EAX = *((__int16 *)_RBX + 9);
    __asm
    {
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm1, xmm0, xmm13
      vmovd   xmm0, eax
    }
    _EAX = *((__int16 *)_RBX + 10);
    __asm
    {
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm5, xmm2, xmm6
      vmulss  xmm2, xmm1, xmm3
      vmovd   xmm1, eax
    }
    _EAX = *((__int16 *)_RBX + 11);
    __asm
    {
      vmulss  xmm7, xmm0, xmm13
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vcvtdq2ps xmm1, xmm1
      vmulss  xmm9, xmm0, xmm13
      vmulss  xmm6, xmm2, xmm6
      vmulss  xmm8, xmm1, xmm13
    }
LABEL_9:
    __asm
    {
      vmaxss  xmm0, xmm4, xmm5
      vmaxss  xmm1, xmm11, xmm12
      vmaxss  xmm3, xmm0, xmm6
      vmaxss  xmm2, xmm1, xmm10
      vcomiss xmm3, xmm2
    }
    if ( !v34 )
    {
      __asm
      {
        vmovss  [rsp+148h+arg_0], xmm7
        vmovss  [rsp+148h+arg_8], xmm8
        vmovss  [rsp+148h+arg_10], xmm9
        vmovaps xmm12, xmm4
        vmovaps xmm11, xmm5
        vmovaps xmm10, xmm6
      }
    }
    __asm
    {
      vmovss  xmm9, cs:__real@41700000
      vmovss  xmm8, cs:__real@41000000
      vmovss  xmm7, cs:__real@41200000
    }
LABEL_12:
    _RBX += 17;
    v75 = v29-- == 0;
  }
  while ( v29 );
  __asm
  {
    vmovaps xmm15, [rsp+148h+var_D8]
    vmovaps xmm14, [rsp+148h+var_C8]
    vmovaps xmm13, [rsp+148h+var_B8]
    vmovaps xmm9, [rsp+148h+var_78]
    vmovaps xmm8, [rsp+148h+var_68]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm12, xmm0
  }
  if ( !v75 && (unsigned __int8)v29 != 0i64 )
    goto LABEL_17;
  __asm { vcomiss xmm11, xmm0 }
  if ( !v75 && v29 != 0 )
    goto LABEL_17;
  __asm { vcomiss xmm10, xmm0 }
  if ( v75 || v29 == 0 )
  {
    *(double *)&_XMM0 = I_crandom();
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@40490fdb
      vmovss  dword ptr [r14+r15+110h], xmm1
    }
  }
  else
  {
LABEL_17:
    v83 = DCONST_DVARBOOL_cg_disableScreenShake;
    if ( !DCONST_DVARBOOL_cg_disableScreenShake && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_disableScreenShake") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v83);
    if ( !v83->current.enabled )
    {
      __asm
      {
        vmovss  xmm6, cs:__real@40490fdb
        vmulss  xmm0, xmm6, [rsp+148h+arg_0]
        vmovss  xmm7, [rsp+148h+arg_18]
        vmulss  xmm1, xmm0, xmm7
        vaddss  xmm0, xmm1, dword ptr [r14+r15+110h]; X
      }
      *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm1, xmm0, xmm12
        vaddss  xmm2, xmm1, dword ptr [rsi+178C0h]
        vmulss  xmm0, xmm6, [rsp+148h+arg_8]
        vmulss  xmm1, xmm0, xmm7
        vmovss  dword ptr [rsi+178C0h], xmm2
        vaddss  xmm0, xmm1, dword ptr [r14+r15+110h]; X
      }
      *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm1, xmm0, xmm11
        vaddss  xmm2, xmm1, dword ptr [rsi+178C4h]
        vmulss  xmm0, xmm6, [rsp+148h+arg_10]
        vmulss  xmm1, xmm0, xmm7
        vmovss  dword ptr [rsi+178C4h], xmm2
        vaddss  xmm0, xmm1, dword ptr [r14+r15+110h]; X
      }
      *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm1, xmm0, xmm10
        vaddss  xmm2, xmm1, dword ptr [rsi+178C8h]
        vmovss  dword ptr [rsi+178C8h], xmm2
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+148h+var_48] }
  _R11 = &v116;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-38h]
    vmovaps xmm10, xmmword ptr [r11-68h]
    vmovaps xmm11, xmmword ptr [r11-78h]
    vmovaps xmm12, xmmword ptr [r11-88h]
  }
}

/*
==============
CG_StartShakeCamera
==============
*/

void __fastcall CG_StartShakeCamera(LocalClientNum_t localClientNum, double scale, int duration, const vec3_t *src, float radius)
{
  const cg_t *LocalClientGlobals; 
  float fmt; 
  int v20; 
  __int64 v21; 
  CameraShake buildShake; 

  __asm
  {
    vmovaps [rsp+0E8h+var_38], xmm6
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  _RSI = src;
  __asm
  {
    vmovaps xmm6, xmm1
    vcvttss2si eax, xmm1
  }
  v20 = _EAX;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 282, ASSERT_TYPE_ASSERT, "( scale ) > ( 0.0f )", "%s > %s\n\t%i, %i", "scale", "0.0f", v20, 0i64) )
    __debugbreak();
  if ( duration <= 0 )
  {
    LODWORD(v21) = duration;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 283, ASSERT_TYPE_ASSERT, "( duration ) > ( 0 )", "%s > %s\n\t%i, %i", "duration", "0", v21, 0i64) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+0E8h+radius]
    vmovss  dword ptr [rsp+0E8h+fmt], xmm0
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  CG_SetupCameraShake_Common(localClientNum, &buildShake, duration, _RSI, fmt);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  dword ptr [rsp+0E8h+buildShake.src], xmm0
    vmovss  xmm0, dword ptr [rsi+8]
  }
  buildShake.useShakeControls = 0;
  __asm
  {
    vmovss  dword ptr [rsp+0E8h+buildShake.src+8], xmm0
    vmovss  [rsp+0E8h+buildShake.scaleGlobal], xmm6
    vmovss  dword ptr [rsp+0E8h+buildShake.src+4], xmm1
  }
  CG_UpdateCameraShake(localClientNum, LocalClientGlobals, &buildShake);
  CG_AddToShakeSlot(localClientNum, &buildShake);
  __asm { vmovaps xmm6, [rsp+0E8h+var_38] }
}

/*
==============
CG_StartShakeCameraAll
==============
*/

void __fastcall CG_StartShakeCameraAll(double p, int duration, const vec3_t *src, double radius)
{
  LocalClientNum_t v12; 
  connstate_t *p_connectionState; 
  const cg_t *LocalClientGlobals; 
  float fmt; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  CameraShake buildShake; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-68h], xmm8
  }
  _R14 = src;
  __asm
  {
    vmovaps xmm8, xmm3
    vmovaps xmm6, xmm0
  }
  v12 = LOCAL_CLIENT_0;
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    p_connectionState = &clientUIActives[0].connectionState;
    __asm
    {
      vmovaps xmmword ptr [r11-58h], xmm7
      vxorps  xmm7, xmm7, xmm7
    }
    do
    {
      if ( (unsigned int)v12 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v25) = 2;
        LODWORD(v24) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      if ( *p_connectionState == CA_ACTIVE )
      {
        __asm { vcomiss xmm6, xmm7 }
        if ( *p_connectionState <= (unsigned int)CA_ACTIVE )
        {
          __asm { vcvttss2si eax, xmm6 }
          LODWORD(v26) = _EAX;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 282, ASSERT_TYPE_ASSERT, "( scale ) > ( 0.0f )", "%s > %s\n\t%i, %i", "scale", "0.0f", v26, 0i64) )
            __debugbreak();
        }
        if ( duration <= 0 )
        {
          LODWORD(v26) = duration;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 283, ASSERT_TYPE_ASSERT, "( duration ) > ( 0 )", "%s > %s\n\t%i, %i", "duration", "0", v26, 0i64) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rsp+118h+fmt], xmm8 }
        LocalClientGlobals = CG_GetLocalClientGlobals(v12);
        CG_SetupCameraShake_Common(v12, &buildShake, duration, _R14, fmt);
        __asm
        {
          vmovss  xmm0, dword ptr [r14]
          vmovss  xmm1, dword ptr [r14+4]
          vmovss  dword ptr [rsp+118h+buildShake.src], xmm0
          vmovss  xmm0, dword ptr [r14+8]
        }
        buildShake.useShakeControls = 0;
        __asm
        {
          vmovss  dword ptr [rsp+118h+buildShake.src+8], xmm0
          vmovss  [rsp+118h+buildShake.scaleGlobal], xmm6
          vmovss  dword ptr [rsp+118h+buildShake.src+4], xmm1
        }
        CG_UpdateCameraShake(v12, LocalClientGlobals, &buildShake);
        CG_AddToShakeSlot(v12, &buildShake);
      }
      ++v12;
      p_connectionState += 110;
    }
    while ( v12 < SLODWORD(cl_maxLocalClients) );
    __asm { vmovaps xmm7, [rsp+118h+var_58] }
  }
  __asm
  {
    vmovaps xmm6, [rsp+118h+var_48]
    vmovaps xmm8, [rsp+118h+var_68]
  }
}

/*
==============
CG_StartShakeCameraWithControls
==============
*/
void CG_StartShakeCameraWithControls(LocalClientNum_t localClientNum, const int duration, const int entNum, const vec3_t *src, const float radius, const __int16 pitch, const __int16 yaw, const __int16 roll, __int16 freqPitch, __int16 freqYaw, __int16 freqRoll, const float fadeUp, const float fadeDown, const bool isEarthquake)
{
  const cg_t *LocalClientGlobals; 
  float fmt; 
  CameraShake buildShake; 

  _RBX = src;
  if ( duration <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 298, ASSERT_TYPE_ASSERT, "( duration ) > ( 0 )", "%s > %s\n\t%i, %i", "duration", "0", duration, 0i64) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rsp+0C8h+radius]
    vmovss  dword ptr [rsp+0C8h+fmt], xmm0
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  CG_SetupCameraShake_Common(localClientNum, &buildShake, duration, _RBX, fmt);
  buildShake.frequencyPitch = freqPitch;
  buildShake.frequencyYaw = freqYaw;
  buildShake.scalePitch = pitch;
  buildShake.frequencyRoll = freqRoll;
  buildShake.scaleYaw = yaw;
  buildShake.isEarthquake = isEarthquake;
  buildShake.useShakeControls = 1;
  buildShake.scaleRoll = roll;
  buildShake.entNum = entNum;
  __asm
  {
    vmovss  xmm0, [rsp+0C8h+fadeUp]
    vmovss  xmm1, [rsp+0C8h+fadeDown]
    vmovss  [rsp+0C8h+buildShake.fadeUp], xmm0
    vmovss  [rsp+0C8h+buildShake.fadeDown], xmm1
  }
  if ( entNum == 2047 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  dword ptr [rsp+0C8h+buildShake.src], xmm0
      vmovss  xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rsp+0C8h+buildShake.src+4], xmm1
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+0C8h+buildShake.src], xmm0
      vmovss  dword ptr [rsp+0C8h+buildShake.src+4], xmm0
    }
  }
  __asm { vmovss  dword ptr [rsp+0C8h+buildShake.src+8], xmm0 }
  CG_UpdateCameraShake(localClientNum, LocalClientGlobals, &buildShake);
  CG_AddToShakeSlot(localClientNum, &buildShake);
}

/*
==============
CG_UpdateCameraShake
==============
*/
__int64 CG_UpdateCameraShake(LocalClientNum_t localClientNum, const cg_t *cgameGlob, CameraShake *shake)
{
  __int64 v12; 
  unsigned int v14; 
  __int64 entNum; 
  CgEntitySystem *v18; 
  const cpose_t *p_pose; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  unsigned int time; 
  bool v36; 
  int v37; 
  bool v49; 
  char v50; 
  bool v51; 
  bool v60; 
  bool v61; 
  __int64 result; 
  __int64 v73; 
  double v74; 
  double v75; 
  double v76; 
  __int64 v77; 
  int v78; 
  int v79; 
  int v80; 
  int v81; 
  int v82[4]; 
  _QWORD v83[11]; 
  char v84; 
  void *retaddr; 

  _RAX = &retaddr;
  v83[0] = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rsp+0F0h+var_88+8], xmm10
  }
  _RBX = shake;
  v12 = localClientNum;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+4]
    vmovss  [rbp+57h+var_B0], xmm0
  }
  v14 = 1;
  if ( (v79 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 73, ASSERT_TYPE_SANITY, "( !IS_NAN( shake->length ) )", (const char *)&queryFormat, "!IS_NAN( shake->length )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rbp+57h+var_B0], xmm0
  }
  if ( (v80 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( shake->radius ) )", (const char *)&queryFormat, "!IS_NAN( shake->radius )") )
    __debugbreak();
  if ( !_RBX->useShakeControls )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+24h]
      vmovss  [rbp+57h+var_B0], xmm0
    }
    if ( (v81 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 78, ASSERT_TYPE_SANITY, "( !IS_NAN( shake->scaleGlobal ) )", (const char *)&queryFormat, "!IS_NAN( shake->scaleGlobal )") )
      __debugbreak();
    if ( !_RBX->useShakeControls )
      goto LABEL_31;
  }
  entNum = _RBX->entNum;
  if ( (_DWORD)entNum != 2047 )
  {
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      v78 = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v78) )
        __debugbreak();
    }
    if ( (unsigned int)v12 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v77) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v73) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v73, v77) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v12] )
    {
      LODWORD(v77) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v77) )
        __debugbreak();
    }
    v18 = CgEntitySystem::ms_entitySystemArray[v12];
    if ( (unsigned int)entNum >= 0x800 )
    {
      LODWORD(v77) = 2048;
      LODWORD(v73) = entNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v73, v77) )
        __debugbreak();
    }
    p_pose = &v18->m_entities[entNum].pose;
    if ( !p_pose )
      goto LABEL_59;
    if ( !p_pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
      __debugbreak();
    FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(p_pose->origin.Get_origin, p_pose);
    FunctionPointer_origin(&p_pose->origin.origin.origin, (vec3_t *)v82);
    if ( p_pose->isPosePrecise )
    {
      __asm
      {
        vmovd   xmm0, [rbp+57h+var_A8]
        vcvtdq2pd xmm0, xmm0
        vmovsd  xmm3, cs:__real@3f30000000000000
        vmulsd  xmm0, xmm0, xmm3
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  [rbp+57h+var_A8], xmm1
        vmovd   xmm2, [rbp+57h+var_A4]
        vcvtdq2pd xmm2, xmm2
        vmulsd  xmm0, xmm2, xmm3
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  [rbp+57h+var_A4], xmm1
        vmovd   xmm2, [rbp+57h+var_A0]
        vcvtdq2pd xmm2, xmm2
        vmulsd  xmm0, xmm2, xmm3
        vcvtsd2ss xmm1, xmm0, xmm0
        vmovss  [rbp+57h+var_A0], xmm1
      }
    }
  }
  else
  {
LABEL_31:
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+0Ch]
      vmovss  [rbp+57h+var_A8], xmm0
      vmovss  xmm0, dword ptr [rbx+14h]
      vmovss  xmm1, dword ptr [rbx+10h]
      vmovss  [rbp+57h+var_A0], xmm0
      vmovss  [rbp+57h+var_A4], xmm1
    }
  }
  time = cgameGlob->time;
  v36 = time < _RBX->time;
  v37 = time - _RBX->time;
  if ( v37 < 0 )
    goto LABEL_59;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vcvtsi2ss xmm8, xmm8, eax
    vmovss  xmm0, dword ptr [rbx+4]
    vcomiss xmm8, xmm0
  }
  if ( !v36 )
    goto LABEL_59;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm0, xmm7
  }
  if ( v36 || v37 == 0 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0F0h+var_C8], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 113, ASSERT_TYPE_ASSERT, "( ( shake->length > 0.0f ) )", "( shake->length ) = %g", v74) )
      __debugbreak();
  }
  if ( !_RBX->useShakeControls )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+24h]
      vcomiss xmm0, xmm7
    }
    if ( !_RBX->useShakeControls )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0F0h+var_C8], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 116, ASSERT_TYPE_ASSERT, "( ( shake->scaleGlobal > 0.0f ) )", "( shake->scaleGlobal ) = %g", v75) )
        __debugbreak();
    }
  }
  __asm
  {
    vcomiss xmm7, dword ptr [rbx+8]
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmm9, xmm6
  }
  if ( _RBX->useShakeControls )
  {
    __asm
    {
      vmovaps xmm2, xmm6; max
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm0, xmm9; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm9, xmm0
      vmovss  xmm2, dword ptr [rbx+40h]
      vmovss  xmm0, dword ptr [rbx+4]
      vsubss  xmm10, xmm0, xmm2
      vmovss  xmm1, dword ptr [rbx+3Ch]
      vcomiss xmm8, xmm1
    }
    if ( v50 )
    {
      __asm { vucomiss xmm1, xmm7 }
      if ( v51 )
      {
        v60 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 145, ASSERT_TYPE_ASSERT, "(shake->fadeUp != 0)", (const char *)&queryFormat, "shake->fadeUp != 0");
        v50 = 0;
        v51 = !v60;
        if ( v60 )
          __debugbreak();
      }
      __asm { vdivss  xmm6, xmm8, dword ptr [rbx+3Ch] }
    }
    else
    {
      __asm { vcomiss xmm8, xmm10 }
      if ( v50 | v51 )
        goto LABEL_56;
      __asm { vucomiss xmm2, xmm7 }
      if ( v51 )
      {
        v61 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 150, ASSERT_TYPE_ASSERT, "(shake->fadeDown != 0)", (const char *)&queryFormat, "shake->fadeDown != 0");
        v50 = 0;
        v51 = !v61;
        if ( v61 )
          __debugbreak();
      }
      __asm
      {
        vsubss  xmm0, xmm8, xmm10
        vdivss  xmm1, xmm0, dword ptr [rbx+40h]
        vsubss  xmm6, xmm6, xmm1
      }
    }
  }
  else
  {
    __asm
    {
      vdivss  xmm8, xmm8, dword ptr [rbx+4]
      vcomiss xmm8, xmm7
      vcomiss xmm8, xmm6
      vcvtss2sd xmm0, xmm8, xmm8
      vmovsd  [rsp+0F0h+var_C8], xmm0
    }
    v49 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 134, ASSERT_TYPE_ASSERT, "( ( timePercent >= 0.0f && timePercent < 1.0f ) )", "( timePercent ) = %g", v76);
    v50 = 0;
    v51 = !v49;
    if ( v49 )
      __debugbreak();
    __asm
    {
      vsubss  xmm0, xmm6, xmm8
      vmulss  xmm6, xmm0, dword ptr [rbx+24h]
    }
  }
  __asm { vcomiss xmm6, xmm7 }
  if ( v50 | v51 )
  {
LABEL_59:
    v14 = 0;
    goto LABEL_60;
  }
LABEL_56:
  __asm { vcomiss xmm9, xmm7 }
  if ( v50 )
  {
    __asm
    {
      vdivss  xmm0, xmm9, xmm6
      vmovss  dword ptr [rbx+18h], xmm0
      vmovss  dword ptr [rbx+1Ch], xmm6
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm0, xmm9, xmm6
      vmovss  dword ptr [rbx+18h], xmm0
      vmovss  dword ptr [rbx+1Ch], xmm6
    }
  }
LABEL_60:
  memset(v82, 0, 0xCui64);
  result = v14;
  _R11 = &v84;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return result;
}

