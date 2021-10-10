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
  __int64 v3; 
  int time; 
  int v5; 
  int v6; 
  CameraShakeSet *v7; 
  CameraShakeSet *v8; 
  int v9; 
  bool v15; 
  __int64 v17; 
  __int64 v18; 

  v3 = localClientNum;
  time = CG_GetLocalClientGlobals(localClientNum)->time;
  v5 = 0;
  v6 = 0;
  v7 = &s_cameraShakeSet[v3];
  v8 = &s_cameraShakeSet[v3];
  do
  {
    v9 = v6;
    if ( v8->shakes[0].time > time || (float)((float)v8->shakes[0].time + v8->shakes[0].length) <= (float)time )
    {
      v17 = v6;
      goto LABEL_19;
    }
    ++v6;
    v8 = (CameraShakeSet *)((char *)v8 + 68);
  }
  while ( v6 < 4 );
  _XMM6 = LODWORD(buildShake->size);
  if ( v9 != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 196, ASSERT_TYPE_ASSERT, "(i == 4)", (const char *)&queryFormat, "i == MAX_CAMERA_SHAKE") )
    __debugbreak();
  __asm { vminss  xmm2, xmm6, dword ptr [r14+r15+18h] }
  _XMM1 = LODWORD(s_cameraShakeSet[v3].shakes[1].size);
  _XMM0 = LODWORD(s_cameraShakeSet[v3].shakes[2].size);
  if ( *(float *)&_XMM6 <= s_cameraShakeSet[v3].shakes[0].size )
    v5 = v6;
  if ( *(float *)&_XMM2 > *(float *)&_XMM1 )
    v5 = 1;
  __asm { vminss  xmm2, xmm1, xmm2 }
  v15 = *(float *)&_XMM2 <= *(float *)&_XMM0;
  __asm { vminss  xmm0, xmm0, xmm2 }
  if ( !v15 )
    v5 = 2;
  if ( *(float *)&_XMM0 <= s_cameraShakeSet[v3].shakes[3].size )
  {
    if ( v5 == 4 )
      return;
    v17 = v5;
  }
  else
  {
    v17 = 3i64;
  }
LABEL_19:
  v18 = v17;
  *(__m256i *)&v7->shakes[v18].time = *(__m256i *)&buildShake->time;
  *(__m256i *)&v7->shakes[v18].useShakeControls = *(__m256i *)&buildShake->useShakeControls;
  v7->shakes[v18].fadeDown = buildShake->fadeDown;
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

  if ( !buildShake && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 220, ASSERT_TYPE_ASSERT, "(buildShake)", (const char *)&queryFormat, "buildShake") )
    __debugbreak();
  if ( duration <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 221, ASSERT_TYPE_ASSERT, "(duration > 0)", (const char *)&queryFormat, "duration > 0") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  buildShake->time = 0;
  *(_QWORD *)&buildShake->radius = 0i64;
  *(_QWORD *)&buildShake->src.y = 0i64;
  *(_QWORD *)&buildShake->useShakeControls = 0i64;
  *(_QWORD *)&buildShake->scalePitch = 0i64;
  *(_QWORD *)&buildShake->frequencyYaw = 0i64;
  *(_QWORD *)&buildShake->entNum = 0i64;
  buildShake->fadeDown = 0.0;
  buildShake->length = (float)duration;
  *(_QWORD *)&buildShake->size = 0i64;
  LODWORD(LocalClientGlobals) = LocalClientGlobals->time;
  buildShake->radius = radius;
  buildShake->time = (int)LocalClientGlobals;
}

/*
==============
CG_ShakeCamera
==============
*/
void CG_ShakeCamera(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  float v2; 
  float v3; 
  float v4; 
  __int64 v5; 
  cg_t *LocalClientGlobals; 
  float *p_rumbleScale; 
  float v8; 
  __int64 v9; 
  float v11; 
  float v14; 
  float v15; 
  __m128 v16; 
  __m128 v18; 
  __m128 v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  __m128 v24; 
  __m128 v25; 
  __m128 v26; 
  __m128 v27; 
  __m128 v28; 
  __m128 v29; 
  double v34; 
  const dvar_t *v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 

  v1 = localClientNum;
  v2 = FLOAT_10_0;
  v3 = FLOAT_8_0;
  v4 = FLOAT_15_0;
  v5 = v1;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_rumbleScale = &s_cameraShakeSet[v1].shakes[0].rumbleScale;
  v8 = 0.0;
  v9 = 4i64;
  _XMM11 = 0u;
  v11 = 0.0;
  v39 = (float)LocalClientGlobals->time * 0.0016666667;
  v38 = 0.0;
  v37 = 0.0;
  v36 = 0.0;
  do
  {
    if ( !CG_UpdateCameraShake((LocalClientNum_t)v1, LocalClientGlobals, (CameraShake *)(p_rumbleScale - 7)) )
      goto LABEL_12;
    _XMM0 = *((unsigned int *)p_rumbleScale - 1);
    __asm { vminss  xmm3, xmm0, cs:__real@3f800000 }
    if ( !*((_BYTE *)p_rumbleScale + 4) )
    {
      v28 = _XMM3;
      v28.m128_f32[0] = _XMM3.m128_f32[0] * *p_rumbleScale;
      v27 = v28;
      v28.m128_f32[0] = v28.m128_f32[0] * 18.0;
      _XMM4 = v28;
      v29 = v27;
      v29.m128_f32[0] = v27.m128_f32[0] * 16.0;
      v19 = v29;
      v22 = v27.m128_f32[0] * v2;
      goto LABEL_8;
    }
    v14 = *p_rumbleScale;
    v16 = 0i64;
    v16.m128_f32[0] = (float)*((__int16 *)p_rumbleScale + 6) * 0.0099999998;
    if ( *((_BYTE *)p_rumbleScale + 5) )
    {
      v24 = (__m128)*(unsigned int *)p_rumbleScale;
      v15 = (float)*((__int16 *)p_rumbleScale + 6) * 0.0099999998;
      v24.m128_f32[0] = (float)((float)(v14 * v15) * v15) * _XMM3.m128_f32[0];
      v25 = v24;
      v24.m128_f32[0] = v24.m128_f32[0] * 18.0;
      _XMM4 = v24;
      v26 = v25;
      v26.m128_f32[0] = v25.m128_f32[0] * 16.0;
      v19 = v26;
      v22 = v25.m128_f32[0] * v2;
LABEL_8:
      v20 = v3;
      v23 = v4;
      v21 = FLOAT_12_0;
      goto LABEL_9;
    }
    v16.m128_f32[0] = (float)(v16.m128_f32[0] * _XMM3.m128_f32[0]) * v14;
    _XMM4 = v16;
    v18 = _mm_cvtepi32_ps((__m128i)(unsigned int)*((__int16 *)p_rumbleScale + 8));
    v18.m128_f32[0] = (float)((float)(v18.m128_f32[0] * 0.0099999998) * _XMM3.m128_f32[0]) * v14;
    v19 = v18;
    v20 = _mm_cvtepi32_ps((__m128i)(unsigned int)*((__int16 *)p_rumbleScale + 9)).m128_f32[0] * 0.0099999998;
    v21 = _mm_cvtepi32_ps((__m128i)(unsigned int)*((__int16 *)p_rumbleScale + 11)).m128_f32[0] * 0.0099999998;
    v22 = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)*((__int16 *)p_rumbleScale + 7)).m128_f32[0] * 0.0099999998) * _XMM3.m128_f32[0]) * v14;
    v23 = _mm_cvtepi32_ps((__m128i)(unsigned int)*((__int16 *)p_rumbleScale + 10)).m128_f32[0] * 0.0099999998;
LABEL_9:
    __asm
    {
      vmaxss  xmm0, xmm4, xmm5
      vmaxss  xmm1, xmm11, xmm12
      vmaxss  xmm3, xmm0, xmm6
      vmaxss  xmm2, xmm1, xmm10
    }
    if ( *(float *)&_XMM3 > *(float *)&_XMM2 )
    {
      v36 = v20;
      v37 = v23;
      v38 = v21;
      v11 = _XMM4.m128_f32[0];
      _XMM11 = v19;
      v8 = v22;
    }
    v4 = FLOAT_15_0;
    v3 = FLOAT_8_0;
    v2 = FLOAT_10_0;
LABEL_12:
    p_rumbleScale += 17;
    --v9;
  }
  while ( v9 );
  if ( v11 > 0.0 || _XMM11.m128_f32[0] > 0.0 || v8 > 0.0 )
  {
    v35 = DCONST_DVARBOOL_cg_disableScreenShake;
    if ( !DCONST_DVARBOOL_cg_disableScreenShake && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_disableScreenShake") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
    if ( !v35->current.enabled )
    {
      LocalClientGlobals->refdefViewAngles.v[0] = (float)(sinf_0((float)((float)(3.1415927 * v36) * v39) + s_cameraShakeSet[v5].phase) * v11) + LocalClientGlobals->refdefViewAngles.v[0];
      LocalClientGlobals->refdefViewAngles.v[1] = (float)(sinf_0((float)((float)(3.1415927 * v37) * v39) + s_cameraShakeSet[v5].phase) * _XMM11.m128_f32[0]) + LocalClientGlobals->refdefViewAngles.v[1];
      LocalClientGlobals->refdefViewAngles.v[2] = (float)(sinf_0((float)((float)(3.1415927 * v38) * v39) + s_cameraShakeSet[v5].phase) * v8) + LocalClientGlobals->refdefViewAngles.v[2];
    }
  }
  else
  {
    v34 = I_crandom();
    s_cameraShakeSet[v5].phase = *(float *)&v34 * 3.1415927;
  }
}

/*
==============
CG_StartShakeCamera
==============
*/
void CG_StartShakeCamera(LocalClientNum_t localClientNum, float scale, int duration, const vec3_t *src, float radius)
{
  const cg_t *LocalClientGlobals; 
  float v10; 
  float v11; 
  __int64 v12; 
  int v13; 
  CameraShake buildShake; 

  if ( scale <= 0.0 )
  {
    v13 = (int)scale;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 282, ASSERT_TYPE_ASSERT, "( scale ) > ( 0.0f )", "%s > %s\n\t%i, %i", "scale", "0.0f", v13, 0i64) )
      __debugbreak();
  }
  if ( duration <= 0 )
  {
    LODWORD(v12) = duration;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 283, ASSERT_TYPE_ASSERT, "( duration ) > ( 0 )", "%s > %s\n\t%i, %i", "duration", "0", v12, 0i64) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  CG_SetupCameraShake_Common(localClientNum, &buildShake, duration, src, radius);
  v10 = src->v[1];
  buildShake.src.v[0] = src->v[0];
  v11 = src->v[2];
  buildShake.useShakeControls = 0;
  buildShake.src.v[2] = v11;
  buildShake.scaleGlobal = scale;
  buildShake.src.v[1] = v10;
  CG_UpdateCameraShake(localClientNum, LocalClientGlobals, &buildShake);
  CG_AddToShakeSlot(localClientNum, &buildShake);
}

/*
==============
CG_StartShakeCameraAll
==============
*/
void CG_StartShakeCameraAll(float p, int duration, const vec3_t *src, float radius)
{
  LocalClientNum_t v7; 
  connstate_t *p_connectionState; 
  const cg_t *LocalClientGlobals; 
  float v10; 
  float v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  CameraShake buildShake; 

  v7 = LOCAL_CLIENT_0;
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    p_connectionState = &clientUIActives[0].connectionState;
    do
    {
      if ( (unsigned int)v7 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v13) = 2;
        LODWORD(v12) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      if ( *p_connectionState == CA_ACTIVE )
      {
        if ( p <= 0.0 )
        {
          LODWORD(v14) = (int)p;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 282, ASSERT_TYPE_ASSERT, "( scale ) > ( 0.0f )", "%s > %s\n\t%i, %i", "scale", "0.0f", v14, 0i64) )
            __debugbreak();
        }
        if ( duration <= 0 )
        {
          LODWORD(v14) = duration;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 283, ASSERT_TYPE_ASSERT, "( duration ) > ( 0 )", "%s > %s\n\t%i, %i", "duration", "0", v14, 0i64) )
            __debugbreak();
        }
        LocalClientGlobals = CG_GetLocalClientGlobals(v7);
        CG_SetupCameraShake_Common(v7, &buildShake, duration, src, radius);
        v10 = src->v[1];
        buildShake.src.v[0] = src->v[0];
        v11 = src->v[2];
        buildShake.useShakeControls = 0;
        buildShake.src.v[2] = v11;
        buildShake.scaleGlobal = p;
        buildShake.src.v[1] = v10;
        CG_UpdateCameraShake(v7, LocalClientGlobals, &buildShake);
        CG_AddToShakeSlot(v7, &buildShake);
      }
      ++v7;
      p_connectionState += 110;
    }
    while ( v7 < SLODWORD(cl_maxLocalClients) );
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
  float v19; 
  float v20; 
  CameraShake buildShake; 

  if ( duration <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 298, ASSERT_TYPE_ASSERT, "( duration ) > ( 0 )", "%s > %s\n\t%i, %i", "duration", "0", duration, 0i64) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  CG_SetupCameraShake_Common(localClientNum, &buildShake, duration, src, radius);
  buildShake.frequencyPitch = freqPitch;
  buildShake.frequencyYaw = freqYaw;
  buildShake.scalePitch = pitch;
  buildShake.frequencyRoll = freqRoll;
  buildShake.scaleYaw = yaw;
  buildShake.isEarthquake = isEarthquake;
  buildShake.useShakeControls = 1;
  buildShake.scaleRoll = roll;
  buildShake.entNum = entNum;
  buildShake.fadeUp = fadeUp;
  buildShake.fadeDown = fadeDown;
  if ( entNum == 2047 )
  {
    v20 = src->v[1];
    buildShake.src.v[0] = src->v[0];
    v19 = src->v[2];
    buildShake.src.v[1] = v20;
  }
  else
  {
    v19 = 0.0;
    buildShake.src.v[0] = 0.0;
    buildShake.src.v[1] = 0.0;
  }
  buildShake.src.v[2] = v19;
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
  __int64 v5; 
  unsigned int v6; 
  __int64 entNum; 
  CgEntitySystem *v8; 
  const cpose_t *p_pose; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v14; 
  float v24; 
  int v25; 
  float v26; 
  float length; 
  float scaleGlobal; 
  float v29; 
  float v30; 
  unsigned int refdefViewOrg_aab; 
  float v32; 
  float fadeDown; 
  float v34; 
  float fadeUp; 
  __int64 v37; 
  __int64 v38; 
  int v39[8]; 
  __int128 v40; 

  *(_QWORD *)&v40 = -2i64;
  v5 = localClientNum;
  v6 = 1;
  if ( (LODWORD(shake->length) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 73, ASSERT_TYPE_SANITY, "( !IS_NAN( shake->length ) )", (const char *)&queryFormat, "!IS_NAN( shake->length )") )
    __debugbreak();
  if ( (LODWORD(shake->radius) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( shake->radius ) )", (const char *)&queryFormat, "!IS_NAN( shake->radius )") )
    __debugbreak();
  if ( !shake->useShakeControls )
  {
    if ( (LODWORD(shake->scaleGlobal) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 78, ASSERT_TYPE_SANITY, "( !IS_NAN( shake->scaleGlobal ) )", (const char *)&queryFormat, "!IS_NAN( shake->scaleGlobal )") )
      __debugbreak();
    if ( !shake->useShakeControls )
      goto LABEL_31;
  }
  entNum = shake->entNum;
  if ( (_DWORD)entNum != 2047 )
  {
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v5) )
      __debugbreak();
    if ( (unsigned int)v5 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v38) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v37) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v37, v38) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v5] )
    {
      LODWORD(v38) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v38) )
        __debugbreak();
    }
    v8 = CgEntitySystem::ms_entitySystemArray[v5];
    if ( (unsigned int)entNum >= 0x800 )
    {
      LODWORD(v38) = 2048;
      LODWORD(v37) = entNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v37, v38) )
        __debugbreak();
    }
    p_pose = &v8->m_entities[entNum].pose;
    if ( !p_pose )
      goto LABEL_71;
    if ( !p_pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
      __debugbreak();
    FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(p_pose->origin.Get_origin, p_pose);
    FunctionPointer_origin(&p_pose->origin.origin.origin, (vec3_t *)v39);
    if ( p_pose->isPosePrecise )
    {
      _XMM0 = (unsigned int)v39[0];
      __asm { vcvtdq2pd xmm0, xmm0 }
      *((_QWORD *)&v14 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v14 = *(double *)&_XMM0 * 0.000244140625;
      _XMM0 = v14;
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      v39[0] = _XMM1;
      _XMM2 = (unsigned int)v39[1];
      __asm { vcvtdq2pd xmm2, xmm2 }
      *((_QWORD *)&v14 + 1) = *((_QWORD *)&_XMM2 + 1);
      *(double *)&v14 = *(double *)&_XMM2 * 0.000244140625;
      _XMM0 = v14;
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      v39[1] = _XMM1;
      _XMM2 = (unsigned int)v39[2];
      __asm { vcvtdq2pd xmm2, xmm2 }
      *((_QWORD *)&v14 + 1) = *((_QWORD *)&_XMM2 + 1);
      *(double *)&v14 = *(double *)&_XMM2 * 0.000244140625;
      _XMM0 = v14;
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      v39[2] = _XMM1;
    }
  }
  else
  {
LABEL_31:
    v39[0] = LODWORD(shake->src.v[0]);
    v24 = shake->src.v[1];
    v39[2] = LODWORD(shake->src.v[2]);
    *(float *)&v39[1] = v24;
  }
  v25 = cgameGlob->time - shake->time;
  if ( v25 < 0 || (v26 = (float)v25, length = shake->length, v26 >= length) )
  {
LABEL_71:
    v6 = 0;
    goto LABEL_72;
  }
  if ( length <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 113, ASSERT_TYPE_ASSERT, "( ( shake->length > 0.0f ) )", "( shake->length ) = %g", length) )
    __debugbreak();
  if ( !shake->useShakeControls )
  {
    scaleGlobal = shake->scaleGlobal;
    if ( scaleGlobal <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 116, ASSERT_TYPE_ASSERT, "( ( shake->scaleGlobal > 0.0f ) )", "( shake->scaleGlobal ) = %g", scaleGlobal) )
      __debugbreak();
  }
  if ( shake->radius > 0.0 )
  {
    if ( cgameGlob == (const cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = cgameGlob->refdef.view.refdefViewOrg_aab;
    if ( cgameGlob == (const cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    v39[4] = LODWORD(cgameGlob->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)cgameGlob + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)cgameGlob + 26936)) + 2));
    v39[5] = LODWORD(cgameGlob->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)cgameGlob + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)cgameGlob + 26940)) + 2));
    v39[6] = ((refdefViewOrg_aab ^ ((_DWORD)cgameGlob + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)cgameGlob + 26944)) + 2)) ^ LODWORD(cgameGlob->refdef.view.org.org.v[2]);
    v29 = FLOAT_1_0;
    v30 = 1.0 - (float)(fsqrt((float)((float)((float)(*(float *)&v39[5] - *(float *)&v39[1]) * (float)(*(float *)&v39[5] - *(float *)&v39[1])) + (float)((float)(*(float *)&v39[4] - *(float *)v39) * (float)(*(float *)&v39[4] - *(float *)v39))) + (float)((float)(*(float *)&v39[6] - *(float *)&v39[2]) * (float)(*(float *)&v39[6] - *(float *)&v39[2]))) / shake->radius);
    memset(&v39[4], 0, 0xCui64);
  }
  else
  {
    v29 = FLOAT_1_0;
    v30 = FLOAT_1_0;
  }
  if ( !shake->useShakeControls )
  {
    v32 = v26 / shake->length;
    if ( (v32 < 0.0 || v32 >= v29) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 134, ASSERT_TYPE_ASSERT, "( ( timePercent >= 0.0f && timePercent < 1.0f ) )", "( timePercent ) = %g", v32) )
      __debugbreak();
    v29 = (float)(v29 - v32) * shake->scaleGlobal;
    goto LABEL_66;
  }
  I_fclamp(v30, 0.0, v29);
  fadeDown = shake->fadeDown;
  v34 = shake->length - fadeDown;
  fadeUp = shake->fadeUp;
  if ( v26 < fadeUp )
  {
    if ( fadeUp == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 145, ASSERT_TYPE_ASSERT, "(shake->fadeUp != 0)", (const char *)&queryFormat, "shake->fadeUp != 0") )
      __debugbreak();
    v29 = v26 / shake->fadeUp;
    goto LABEL_66;
  }
  if ( v26 > (float)(shake->length - fadeDown) )
  {
    if ( fadeDown == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camerashake.cpp", 150, ASSERT_TYPE_ASSERT, "(shake->fadeDown != 0)", (const char *)&queryFormat, "shake->fadeDown != 0") )
      __debugbreak();
    v29 = v29 - (float)((float)(v26 - v34) / shake->fadeDown);
LABEL_66:
    if ( v29 > 0.0 )
      goto LABEL_67;
    goto LABEL_71;
  }
LABEL_67:
  if ( v30 < 0.0 )
    shake->size = v30 / v29;
  else
    shake->size = v30 * v29;
  shake->rumbleScale = v29;
LABEL_72:
  memset(v39, 0, 0xCui64);
  return v6;
}

