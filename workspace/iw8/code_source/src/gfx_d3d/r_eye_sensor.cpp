/*
==============
R_InitEyeSensor
==============
*/

void R_InitEyeSensor(void)
{
  ?R_InitEyeSensor@@YAXXZ();
}

/*
==============
R_EyeSensor_IsEnabled
==============
*/

int __fastcall R_EyeSensor_IsEnabled()
{
  return ?R_EyeSensor_IsEnabled@@YAHXZ();
}

/*
==============
R_UsesEyeSensor
==============
*/

int __fastcall R_UsesEyeSensor(const DObj *obj)
{
  return ?R_UsesEyeSensor@@YAHPEBUDObj@@@Z(obj);
}

/*
==============
R_EyeSensor_AddLightSensors
==============
*/

void __fastcall R_EyeSensor_AddLightSensors(const GfxViewInfo *viewInfo, GfxSceneEntity *sceneEnt)
{
  ?R_EyeSensor_AddLightSensors@@YAXPEBUGfxViewInfo@@PEAUGfxSceneEntity@@@Z(viewInfo, sceneEnt);
}

/*
==============
R_RegisterEyeSensorDvars
==============
*/

void R_RegisterEyeSensorDvars(void)
{
  ?R_RegisterEyeSensorDvars@@YAXXZ();
}

/*
==============
R_EyeSensor_Reset
==============
*/

void R_EyeSensor_Reset(void)
{
  ?R_EyeSensor_Reset@@YAXXZ();
}

/*
==============
R_EyeSensor_PokornySmithNitsToDiameter
==============
*/

double __fastcall R_EyeSensor_PokornySmithNitsToDiameter(float luminanceKnits)
{
  double result; 

  *(float *)&result = ?R_EyeSensor_PokornySmithNitsToDiameter@@YAMM@Z(luminanceKnits);
  return result;
}

/*
==============
R_EyeSensor_ToggleFrame
==============
*/

void R_EyeSensor_ToggleFrame(void)
{
  ?R_EyeSensor_ToggleFrame@@YAXXZ();
}

/*
==============
R_EyeSensor_AddLightSensors
==============
*/

void __fastcall R_EyeSensor_AddLightSensors(const GfxViewInfo *viewInfo, GfxSceneModel *sceneModel)
{
  ?R_EyeSensor_AddLightSensors@@YAXPEBUGfxViewInfo@@PEAUGfxSceneModel@@@Z(viewInfo, sceneModel);
}

/*
==============
R_EyeSensor_AddLightSensors
==============
*/
void R_EyeSensor_AddLightSensors(const GfxViewInfo *viewInfo, GfxSceneEntity *sceneEnt)
{
  centity_t *Entity; 
  centity_t *v4; 
  float pupilDiameter; 
  const cpose_t *pose; 
  const DObj *obj; 
  int v8; 
  float PupilSizeFromSensor; 
  vec3_t v10; 
  vec3_t outOrigin; 

  if ( r_eyeSensor->current.enabled && (*((_DWORD *)sceneEnt + 346) & 0x3FFC00u) < 0x200000 )
  {
    if ( s_sensorCount < 0x10 )
    {
      GfxSceneEntity_GetPlacementOrigin(sceneEnt, &outOrigin);
      Entity = CG_GetEntity((const LocalClientNum_t)frontEndDataOut->localClientNum, (*((_DWORD *)sceneEnt + 346) >> 10) & 0xFFF);
      v4 = Entity;
      if ( Entity->nextState.eType == ET_ACTOR )
        pupilDiameter = Entity->nextState.lerp.u.actor.pupilDiameter;
      else
        pupilDiameter = 0.0;
      pose = sceneEnt->info.pose;
      obj = sceneEnt->obj;
      v8 = (*((_DWORD *)sceneEnt + 346) >> 10) & 0xFFF;
      if ( pupilDiameter == 0.0 )
      {
        v10 = outOrigin;
        PupilSizeFromSensor = R_EyeSensor_GetPupilSizeFromSensor(obj, pose, &v10, v8);
      }
      else
      {
        PupilSizeFromSensor = R_EyeSensor_GetPupilSizeFromScript(obj, pose, v8, pupilDiameter);
      }
      v4->eyeSensorPupilSize = PupilSizeFromSensor;
    }
    else
    {
      R_WarnOncePerFrame(R_WARN_EYE_SENSOR_LIMIT);
    }
  }
}

/*
==============
R_EyeSensor_AddLightSensors
==============
*/
void R_EyeSensor_AddLightSensors(const GfxViewInfo *viewInfo, GfxSceneModel *sceneModel)
{
  unsigned int v3; 
  int localClientNum; 
  const cpose_t *Pose; 
  centity_t *Entity; 
  centity_t *v7; 
  float pupilDiameter; 
  const DObj *obj; 
  double v10; 
  int v11; 
  float PupilSizeFromSensor; 
  vec3_t v13; 

  if ( r_eyeSensor->current.enabled )
  {
    v3 = (*((_DWORD *)sceneModel + 30) >> 10) & 0xFFF;
    if ( v3 < 0x800 )
    {
      if ( sceneModel->obj )
      {
        if ( s_sensorCount < 0x10 )
        {
          localClientNum = frontEndDataOut->localClientNum;
          Pose = CG_GetPose((LocalClientNum_t)localClientNum, v3);
          Entity = CG_GetEntity((const LocalClientNum_t)localClientNum, (*((_DWORD *)sceneModel + 30) >> 10) & 0xFFF);
          v7 = Entity;
          if ( Entity->nextState.eType == ET_ACTOR )
            pupilDiameter = Entity->nextState.lerp.u.actor.pupilDiameter;
          else
            pupilDiameter = 0.0;
          obj = sceneModel->obj;
          if ( pupilDiameter == 0.0 )
          {
            v10 = *(double *)sceneModel->placement.base.origin.v;
            v11 = (*((_DWORD *)sceneModel + 30) >> 10) & 0xFFF;
            v13.v[2] = sceneModel->placement.base.origin.v[2];
            *(double *)v13.v = v10;
            PupilSizeFromSensor = R_EyeSensor_GetPupilSizeFromSensor(obj, Pose, &v13, v11);
          }
          else
          {
            PupilSizeFromSensor = R_EyeSensor_GetPupilSizeFromScript(obj, Pose, (*((_DWORD *)sceneModel + 30) >> 10) & 0xFFF, pupilDiameter);
          }
          v7->eyeSensorPupilSize = PupilSizeFromSensor;
        }
        else
        {
          R_WarnOncePerFrame(R_WARN_EYE_SENSOR_LIMIT);
        }
      }
    }
  }
}

/*
==============
R_EyeSensor_GetBonePos
==============
*/
__int64 R_EyeSensor_GetBonePos(const DObj *obj, scr_string_t name, const cpose_t *pose, vec3_t *bonePos, vec3_t *boneDirection)
{
  unsigned int v9; 
  DObjPartBits *p_partBits; 
  float v12; 
  unsigned __int16 outBoneIndex[2]; 
  int outModelIndex; 
  tmat33_t<vec3_t> outTagMat; 
  DObjPartBits partBits; 
  __int128 v18; 

  outBoneIndex[0] = 254;
  if ( !DObjGetBoneAndModelIndexClient(obj, name, outBoneIndex, &outModelIndex) )
    return 0i64;
  v9 = 0;
  p_partBits = &partBits;
  v18 = _XMM6;
  __asm { vpxor   xmm6, xmm6, xmm6 }
  do
  {
    *(_OWORD *)p_partBits->array = _XMM6;
    p_partBits = (DObjPartBits *)((char *)p_partBits + 16);
    ++v9;
  }
  while ( v9 < 2 );
  XAnimSetPartBit(&partBits, outBoneIndex[0]);
  CG_LocationTraceDobjCalcPose(obj, pose, &partBits);
  if ( !CG_DObjGetWorldBoneMatrix(pose, obj, outBoneIndex[0], &outTagMat, bonePos) )
    return 0i64;
  v12 = -1.0 * outTagMat.m[1].v[0];
  boneDirection->v[1] = -1.0 * outTagMat.m[1].v[1];
  boneDirection->v[2] = -1.0 * outTagMat.m[1].v[2];
  boneDirection->v[0] = v12;
  bonePos->v[0] = (float)(v12 * 5.0) + bonePos->v[0];
  bonePos->v[1] = (float)(5.0 * boneDirection->v[1]) + bonePos->v[1];
  bonePos->v[2] = (float)(5.0 * boneDirection->v[2]) + bonePos->v[2];
  return 1i64;
}

/*
==============
R_EyeSensor_GetPupilSizeFromScript
==============
*/
float R_EyeSensor_GetPupilSizeFromScript(const DObj *obj, const cpose_t *pose, unsigned int entnum, float scriptPupilDiameter)
{
  int localClientNum; 
  GfxEyeSensorEntity *v7; 
  double v8; 
  float v9; 
  double v10; 
  double v11; 
  const char *v12; 
  vec3_t point; 
  vec3_t sensorPos; 
  vec3_t sensorDirection; 

  localClientNum = frontEndDataOut->localClientNum;
  v7 = &s_eyeSensorEntity[entnum];
  v8 = I_fclamp(scriptPupilDiameter, 2.0, 8.0);
  R_EyeSensor_UpdatePupil((LocalClientNum_t)localClientNum, v7, *(float *)&v8);
  v9 = R_EyeSensor_UnrestStateStarkNoise_0((LocalClientNum_t)localClientNum) + v7->pupilDiameter;
  v10 = I_fclamp(v9, 2.0, 8.0);
  v11 = I_fclamp(*(float *)&v10 * 0.079872198, 0.0, 1.0);
  if ( R_EyeSensor_GetSensorPos(obj, pose, &sensorPos, &sensorDirection) )
  {
    point = sensorPos;
    if ( r_eyeSensorDebug->current.enabled )
    {
      v12 = j_va("SCRIPTED - %.2fmm - %.2f%%", v9, (float)(*(float *)&v11 * 100.0));
      CG_DebugStarWithText(&point, &colorRed, &colorRed, v12, 0.075000003, 0);
      sensorPos.v[0] = (float)(8.0 * sensorDirection.v[0]) + point.v[0];
      sensorPos.v[1] = (float)(8.0 * sensorDirection.v[1]) + point.v[1];
      sensorPos.v[2] = (float)(8.0 * sensorDirection.v[2]) + point.v[2];
      CG_DebugLine(&point, &sensorPos, &colorBlue, 0, 0);
    }
  }
  return *(float *)&v11;
}

/*
==============
R_EyeSensor_GetPupilSizeFromSensor
==============
*/
float R_EyeSensor_GetPupilSizeFromSensor(const DObj *obj, const cpose_t *pose, vec3_t *origin, unsigned int entnum)
{
  __int64 v6; 
  int localClientNum; 
  GfxEyeSensorEntity *v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  double v14; 
  double v15; 
  vec3_t v17; 
  vec3_t v18; 
  vec3_t outPos; 
  vec3_t sensorPos; 
  GfxLightSensorEntityResult lightSensorOut; 

  v6 = entnum;
  localClientNum = frontEndDataOut->localClientNum;
  CL_GetViewPos((LocalClientNum_t)localClientNum, &outPos);
  if ( (float)((float)((float)((float)(outPos.v[1] - origin->v[1]) * (float)(outPos.v[1] - origin->v[1])) + (float)((float)(outPos.v[0] - origin->v[0]) * (float)(outPos.v[0] - origin->v[0]))) + (float)((float)(outPos.v[2] - origin->v[2]) * (float)(outPos.v[2] - origin->v[2]))) < 40000.0 && R_EyeSensor_GetSensorPos(obj, pose, &sensorPos, &outPos) )
  {
    v9 = &s_eyeSensorEntity[v6];
    R_AllocLightSensors(v6 + 2048, &sensorPos, 1u, 0.0, &outPos);
    if ( R_LightSensor_QueryEntity(v6 + 2048, &lightSensorOut) )
    {
      v10 = (float)(lightSensorOut.sampleLuminance[0] * r_eyeSensorLuminanceScale->current.value) * 1000.0;
      lightSensorOut.sampleLuminance[0] = lightSensorOut.sampleLuminance[0] * r_eyeSensorLuminanceScale->current.value;
      v11 = log10f_0(v10) * 0.40000001;
      v12 = tanhf_0(v11);
      R_EyeSensor_UpdatePupil((LocalClientNum_t)localClientNum, v9, 5.0 - (float)(v12 * 3.0));
    }
    ++s_sensorCount;
    v13 = R_EyeSensor_UnrestStateStarkNoise_0((LocalClientNum_t)localClientNum) + v9->pupilDiameter;
    v14 = I_fclamp(v13, 2.0, 8.0);
    v15 = I_fclamp(*(float *)&v14 * 0.079872198, 0.0, 1.0);
    v17 = outPos;
    v18 = sensorPos;
    R_LightSensor_DebugText(&v18, &v17, lightSensorOut.sampleLuminance[0], v13, *(float *)&v15, 0);
  }
  else
  {
    LODWORD(v15) = 0;
  }
  return *(float *)&v15;
}

/*
==============
R_EyeSensor_GetSensorPos
==============
*/
__int64 R_EyeSensor_GetSensorPos(const DObj *obj, const cpose_t *pose, vec3_t *sensorPos, vec3_t *sensorDirection)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  vec3_t bonePos; 
  vec3_t boneDirection; 

  *(_QWORD *)sensorPos->v = 0i64;
  sensorPos->v[2] = 0.0;
  *(_QWORD *)sensorDirection->v = 0i64;
  sensorDirection->v[2] = 0.0;
  v8 = 0.0;
  if ( (unsigned int)R_EyeSensor_GetBonePos(obj, scr_const.j_eyeball_le, pose, &bonePos, &boneDirection) )
  {
    v9 = bonePos.v[1] + sensorPos->v[1];
    sensorPos->v[0] = bonePos.v[0] + sensorPos->v[0];
    v10 = bonePos.v[2] + sensorPos->v[2];
    sensorPos->v[1] = v9;
    v11 = boneDirection.v[0];
    sensorPos->v[2] = v10;
    v12 = boneDirection.v[1] + sensorDirection->v[1];
    sensorDirection->v[0] = v11 + sensorDirection->v[0];
    sensorDirection->v[2] = boneDirection.v[2] + sensorDirection->v[2];
    sensorDirection->v[1] = v12;
    v8 = FLOAT_1_0;
  }
  if ( (unsigned int)R_EyeSensor_GetBonePos(obj, scr_const.j_eyeball_ri, pose, &bonePos, &boneDirection) )
  {
    v13 = bonePos.v[1] + sensorPos->v[1];
    sensorPos->v[0] = bonePos.v[0] + sensorPos->v[0];
    v14 = bonePos.v[2] + sensorPos->v[2];
    sensorPos->v[1] = v13;
    v15 = boneDirection.v[0];
    sensorPos->v[2] = v14;
    v16 = boneDirection.v[1] + sensorDirection->v[1];
    sensorDirection->v[0] = v15 + sensorDirection->v[0];
    sensorDirection->v[2] = boneDirection.v[2] + sensorDirection->v[2];
    sensorDirection->v[1] = v16;
    v8 = v8 + 1.0;
  }
  if ( v8 <= 0.0 )
    return 0i64;
  v17 = (float)(1.0 / v8) * sensorPos->v[1];
  sensorPos->v[0] = (float)(1.0 / v8) * sensorPos->v[0];
  sensorPos->v[2] = (float)(1.0 / v8) * sensorPos->v[2];
  sensorPos->v[1] = v17;
  v18 = (float)(1.0 / v8) * sensorDirection->v[1];
  sensorDirection->v[0] = (float)(1.0 / v8) * sensorDirection->v[0];
  sensorDirection->v[2] = (float)(1.0 / v8) * sensorDirection->v[2];
  sensorDirection->v[1] = v18;
  return 1i64;
}

/*
==============
R_EyeSensor_IsEnabled
==============
*/
__int64 R_EyeSensor_IsEnabled()
{
  return r_eyeSensor->current.color[0];
}

/*
==============
R_EyeSensor_PokornySmithNitsToDiameter
==============
*/
float R_EyeSensor_PokornySmithNitsToDiameter(float luminanceKnits)
{
  float v1; 

  v1 = log10f_0(luminanceKnits * 1000.0) * 0.40000001;
  return 5.0 - (float)(tanhf_0(v1) * 3.0);
}

/*
==============
R_EyeSensor_Reset
==============
*/
void R_EyeSensor_Reset(void)
{
  int localClientNum; 
  cg_t *LocalClientGlobals; 
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  double v8; 
  double v9; 
  vec3_t v10; 
  vec3_t v11; 
  vec3_t outPos; 
  vec3_t sampleNml; 
  GfxLightSensorEntityResult lightSensorOut; 

  s_sensorCount = 0;
  if ( r_eyeSensor->current.enabled && r_eyeSensorDebug->current.enabled )
  {
    localClientNum = frontEndDataOut->localClientNum;
    CL_GetViewPos((LocalClientNum_t)localClientNum, &outPos);
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)localClientNum);
    v2 = LocalClientGlobals->refdef.view.axis.m[0].v[1];
    v3 = LocalClientGlobals->refdef.view.axis.m[0].v[0];
    v4 = LocalClientGlobals->refdef.view.axis.m[0].v[2];
    LODWORD(sampleNml.v[1]) = LODWORD(v2) ^ _xmm;
    outPos.v[0] = (float)(v3 * 50.0) + outPos.v[0];
    LODWORD(sampleNml.v[0]) = LODWORD(v3) ^ _xmm;
    outPos.v[1] = (float)(v2 * 50.0) + outPos.v[1];
    outPos.v[2] = (float)(v4 * 50.0) + outPos.v[2];
    LODWORD(sampleNml.v[2]) = LODWORD(v4) ^ _xmm;
    R_AllocLightSensors(0x1000u, &outPos, 1u, 0.0, &sampleNml);
    if ( R_LightSensor_QueryEntity(0x1000u, &lightSensorOut) )
    {
      v5 = (float)(lightSensorOut.sampleLuminance[0] * r_eyeSensorLuminanceScale->current.value) * 1000.0;
      lightSensorOut.sampleLuminance[0] = lightSensorOut.sampleLuminance[0] * r_eyeSensorLuminanceScale->current.value;
      v6 = log10f_0(v5);
      v7 = tanhf_0(v6 * 0.40000001);
      R_EyeSensor_UpdatePupil((LocalClientNum_t)localClientNum, &s_eyeSensorEntity[2048], 5.0 - (float)(v7 * 3.0));
      v8 = I_fclamp(s_eyeSensorEntity[2048].pupilDiameter, 2.0, 8.0);
      v9 = I_fclamp(*(float *)&v8 * 0.079872198, 0.0, 1.0);
      v10 = sampleNml;
      v11 = outPos;
      R_LightSensor_DebugText(&v11, &v10, lightSensorOut.sampleLuminance[0], s_eyeSensorEntity[2048].pupilDiameter, *(float *)&v9, 0);
    }
    ++s_sensorCount;
  }
}

/*
==============
R_EyeSensor_ToggleFrame
==============
*/
void R_EyeSensor_ToggleFrame(void)
{
  vec3_t point; 

  if ( r_eyeSensorDebug->current.enabled )
  {
    point.v[0] = 0.0;
    point.v[1] = 0.0;
    point.v[2] = 0.0;
    CG_DebugStarWithText(&point, &colorBlack, &colorBlack, "*", 0.0, 0);
  }
}

/*
==============
R_EyeSensor_UnrestStateStarkNoise
==============
*/

float __fastcall R_EyeSensor_UnrestStateStarkNoise(double t)
{
  int v1; 
  __m128 v2; 
  __m128 v3; 
  __m128 v4; 
  __m128 v5; 
  __m128 v6; 
  __m128 v8; 
  __m128 v9; 
  __m128 *v10; 
  __m128 v14; 
  __m128 v15; 
  __m128 v16; 
  __m128 v17; 
  __m128 v18; 
  __m128 v19; 
  __m128 v20; 
  __m128 v21; 
  __m128 v23; 
  __m128 v25; 

  v1 = 0;
  v2 = (__m128)_xmm;
  v3 = (__m128)_xmm;
  v4 = *(__m128 *)&t;
  v5.m128_u64[1] = *((_QWORD *)&_xmm + 1);
  v6 = _mm_shuffle_ps(v4, v4, 0);
  _XMM9 = 0i64;
  *(double *)v5.m128_u64 = j___vdecl_powf4();
  v8 = v5;
  v5.m128_u64[1] = *((_QWORD *)&_xmm + 1);
  *(double *)v5.m128_u64 = j___vdecl_powf4();
  v9 = _mm128_sub_ps(v5, v8);
  v25 = v9;
  v10 = (__m128 *)s_unrestPhaseShift;
  do
  {
    _XMM0 = (unsigned int)v1;
    __asm
    {
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm0, xmm0, xmm15
    }
    v14 = _mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm_cvtepi32_ps((__m128i)_XMM0), v2), v3), v9), v8);
    _XMM0.m128_u64[1] = v14.m128_u64[1];
    *(double *)_XMM0.m128_u64 = j___vdecl_log10f4();
    v15 = _mm128_add_ps(_XMM0, (__m128)_xmm);
    _XMM0.m128_u64[1] = v15.m128_u64[1];
    *(double *)_XMM0.m128_u64 = j___vdecl_powf4();
    v16 = _mm128_sub_ps(_mm128_sub_ps((__m128)_xmm, _mm128_mul_ps(v15, (__m128)_xmm)), _mm128_mul_ps(_XMM0, (__m128)_xmm));
    _XMM0.m128_u64[1] = v15.m128_u64[1];
    *(double *)_XMM0.m128_u64 = j___vdecl_powf4();
    v17 = _mm128_add_ps(v16, _mm128_mul_ps(_XMM0, (__m128)_xmm));
    _XMM0.m128_u64[1] = v15.m128_u64[1];
    *(double *)_XMM0.m128_u64 = j___vdecl_powf4();
    v18 = _mm128_sub_ps(v17, _mm128_mul_ps(_XMM0, (__m128)_xmm));
    _XMM0.m128_u64[1] = v15.m128_u64[1];
    *(double *)_XMM0.m128_u64 = j___vdecl_powf4();
    _mm128_add_ps(v18, _mm128_mul_ps(_XMM0, (__m128)_xmm));
    _XMM0.m128_u64[1] = *((_QWORD *)&_xmm + 1);
    *(double *)_XMM0.m128_u64 = j___vdecl_powf4();
    v19 = _mm_sqrt_ps(_XMM0);
    v20 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(v14, (__m128)_xmm), v6), _mm128_mul_ps((__m128)_xmm, *v10));
    *(double *)v20.m128_u64 = j___vdecl_sinf4();
    v3 = (__m128)_xmm;
    v9 = v25;
    v21 = _mm128_mul_ps(v19, v20);
    v2 = (__m128)_xmm;
    v1 += 4;
    ++v10;
    _XMM9 = _mm128_add_ps(v21, _XMM9);
  }
  while ( v1 < 512 );
  __asm { vmovhlps xmm0, xmm9, xmm9 }
  v23 = _mm128_add_ps(_XMM0, _XMM9);
  return (float)(v23.m128_f32[0] + _mm_shuffle_ps(v23, v23, 245).m128_f32[0]) * 0.0099999998;
}

/*
==============
R_EyeSensor_UpdatePupil
==============
*/
void R_EyeSensor_UpdatePupil(LocalClientNum_t localClientNum, GfxEyeSensorEntity *entity, float newPupilDiameter)
{
  cg_t *LocalClientGlobals; 
  __int64 pupilDiameterIndex; 
  __int128 v7; 
  const dvar_t *v8; 
  float v9; 
  __int128 unsignedInt; 
  double v17; 
  float v18; 
  unsigned int v19; 
  float v21; 
  float v24; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  pupilDiameterIndex = entity->pupilDiameterIndex;
  v7 = 0i64;
  *(float *)&v7 = (float)LocalClientGlobals->frametime;
  _XMM8 = v7;
  v8 = r_eyeSensorDilationSpeed;
  v9 = (float)(newPupilDiameter * newPupilDiameter) - (float)(entity->pupilDiameterHistory[pupilDiameterIndex] * entity->pupilDiameterHistory[pupilDiameterIndex]);
  _XMM1 = 0i64;
  if ( v9 < 0.0 )
    v8 = r_eyeSensorContractionSpeed;
  unsignedInt = v8->current.unsignedInt;
  *(float *)&unsignedInt = v8->current.value * v9;
  _XMM0 = unsignedInt & _xmm;
  __asm { vminss  xmm3, xmm0, dword ptr [rax+28h] }
  _XMM2 = _XMM3 ^ _xmm;
  __asm
  {
    vcmpless xmm0, xmm1, xmm4
    vblendvps xmm0, xmm2, xmm3, xmm0
  }
  v24 = *(float *)&_XMM0;
  if ( v9 >= 0.0 )
  {
    v18 = FLOAT_1_0;
  }
  else
  {
    v17 = I_fclamp((float)(entity->pupilDiameter - 2.0) * 0.5, 0.0, 1.0);
    *(float *)&v17 = powf_0(*(float *)&v17, 2.0);
    LODWORD(pupilDiameterIndex) = entity->pupilDiameterIndex;
    v18 = *(float *)&v17;
  }
  v19 = 31;
  __asm { vmaxss  xmm1, xmm8, cs:__real@358637bd }
  v21 = fsqrt((float)((float)(*(float *)&_XMM8 * v24) * v18) + (float)(entity->pupilDiameter * entity->pupilDiameter));
  entity->pupilDiameter = v21;
  _XMM0 = 0i64;
  entity->pupilDiameterHistory[(int)pupilDiameterIndex] = v21;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  if ( (int)*(float *)&_XMM1 + 1 < 31 )
    v19 = (int)*(float *)&_XMM1 + 1;
  entity->pupilDiameterIndex = (entity->pupilDiameterIndex + 1) % v19;
}

/*
==============
R_InitEyeSensor
==============
*/
void R_InitEyeSensor(void)
{
  float *v0; 
  __int64 v1; 
  double v2; 
  float *v3; 
  unsigned int i; 
  float v5; 
  float v6; 
  double v7; 
  float v8; 
  float v9; 
  float v10; 
  float *v11; 
  __int64 v12; 

  srand(0);
  v0 = s_unrestPhaseShift;
  v1 = 512i64;
  do
  {
    v2 = I_random();
    *v0++ = *(float *)&v2;
    --v1;
  }
  while ( v1 );
  v3 = s_unrestLUT;
  for ( i = 0; i < 0x780; ++i )
  {
    HIDWORD(v7) = 0;
    v5 = (float)i;
    *(float *)&v7 = v5 * 0.016666668;
    v6 = v5 * 0.016666668;
    R_EyeSensor_UnrestStateStarkNoise(v7);
    if ( (float)(v5 * 0.016666668) >= 0.0 )
    {
      if ( *(float *)&v7 < 1.0 )
        v8 = (float)(0.00083333335 - (float)(*(float *)&v7 * 0.00055555557)) * (float)(v5 * v5);
      else
        v8 = FLOAT_1_0;
    }
    else
    {
      v8 = 0.0;
    }
    v9 = 32.0 - *(float *)&v7;
    if ( (float)(32.0 - v6) >= 0.0 )
    {
      if ( v9 < 1.0 )
        v10 = (float)(3.0 - (float)((float)(32.0 - v6) * 2.0)) * (float)((float)(32.0 - v6) * (float)(32.0 - v6));
      else
        v10 = FLOAT_1_0;
    }
    else
    {
      v10 = 0.0;
    }
    *v3++ = (float)(v10 * v8) * (float)(v5 * 0.016666668);
  }
  v11 = &s_eyeSensorEntity[0].pupilDiameterHistory[2];
  v12 = 2049i64;
  do
  {
    *(v11 - 3) = 2.0;
    *(v11 - 2) = 2.0;
    *(v11 - 1) = 2.0;
    *v11 = 2.0;
    v11[1] = 2.0;
    v11[2] = 2.0;
    v11[3] = 2.0;
    v11[4] = 2.0;
    v11[5] = 2.0;
    v11[6] = 2.0;
    v11[7] = 2.0;
    v11[8] = 2.0;
    v11[9] = 2.0;
    v11[10] = 2.0;
    v11[11] = 2.0;
    v11[12] = 2.0;
    v11[13] = 2.0;
    v11[14] = 2.0;
    v11[15] = 2.0;
    v11[16] = 2.0;
    v11[17] = 2.0;
    v11[18] = 2.0;
    v11[19] = 2.0;
    v11[20] = 2.0;
    v11[21] = 2.0;
    v11[22] = 2.0;
    v11[23] = 2.0;
    v11[24] = 2.0;
    v11[25] = 2.0;
    v11[26] = 2.0;
    v11[27] = 2.0;
    v11[28] = 2.0;
    *(_QWORD *)(v11 + 29) = 0x40000000i64;
    v11 += 34;
    --v12;
  }
  while ( v12 );
}

/*
==============
R_LightSensor_DebugText
==============
*/
void R_LightSensor_DebugText(const vec3_t *sensorPos, const vec3_t *sensorDirection, float luminanceKnits, float pupilDiameter, float pupilSize, int scripted)
{
  double v9; 
  const char *v10; 
  const char *v11; 
  float v12; 
  float v13; 
  vec3_t end; 

  if ( r_eyeSensorDebug->current.enabled )
  {
    v9 = (float)(pupilSize * 100.0);
    if ( scripted )
    {
      v10 = j_va("SCRIPTED - %.2fmm - %.2f%%", pupilDiameter, v9);
    }
    else
    {
      v11 = "kn";
      if ( luminanceKnits < 0.0099999998 )
        v11 = "n";
      if ( luminanceKnits < 0.0099999998 )
        luminanceKnits = luminanceKnits * 1000.0;
      v10 = j_va("AUTO - %.2f%s - %.2fmm - %.2f%%", luminanceKnits, v11, pupilDiameter, v9);
    }
    CG_DebugStarWithText(sensorPos, &colorRed, &colorRed, v10, 0.075000003, 0);
    v12 = 8.0 * sensorDirection->v[1];
    end.v[0] = (float)(8.0 * sensorDirection->v[0]) + sensorPos->v[0];
    v13 = 8.0 * sensorDirection->v[2];
    end.v[1] = v12 + sensorPos->v[1];
    end.v[2] = v13 + sensorPos->v[2];
    CG_DebugLine(sensorPos, &end, &colorBlue, 0, 0);
  }
}

/*
==============
R_RegisterEyeSensorDvars
==============
*/
void R_RegisterEyeSensorDvars(void)
{
  r_eyeSensor = Dvar_RegisterBool("MTMTPRPOLL", 1, 0x40u, "Enables dynamic pupil dilation based on lighting arriving to the eye");
  r_eyeSensorDilationSpeed = Dvar_RegisterFloat("MPQLSORKKO", 0.00071428571, 0.0, 1.0, 0x40u, "Pupil average dilation speed. Technically the inverse of the exponential decay time constant");
  r_eyeSensorContractionSpeed = Dvar_RegisterFloat("RQQMQPPTK", 0.0024999999, 0.0, 1.0, 0x40u, "Pupil average contraction speed. Technically the inverse of the exponential decay time constant");
  r_eyeSensorMaxSpeed = Dvar_RegisterFloat("NOMOKONLQK", 0.075000003, 0.0, 1.0, 0x40u, "Pupil maximum dilation/contraction speed");
  r_eyeSensorDelay = Dvar_RegisterFloat("NTNKRQSKLS", 500.0, 0.0, 1000.0, 0x40u, "Pupil reaction delay in milliseconds");
  r_eyeSensorUnrest = Dvar_RegisterFloat("LNPPTSPKMO", 0.75, 0.0, 4.0, 0x40u, "Maximum unrest animation distance in millimeters");
  r_eyeSensorUnrestLut = Dvar_RegisterBool("MKKQMMTOLR", 1, 4u, "Enables baked unrest LUT");
  r_eyeSensorLuminanceScale = Dvar_RegisterFloat("OLSOSNTLMP", 1.0, 0.0, 100.0, 0x40u, "Luminance scale to hack the response to light");
  r_eyeSensorDebug = Dvar_RegisterBool("NTOQQKQLTS", 0, 4u, "Shows locations where the lighting is calculated for pupil dilation");
}

/*
==============
R_UsesEyeSensor
==============
*/
int R_UsesEyeSensor(const DObj *obj)
{
  int result; 
  unsigned __int16 outBoneIndex; 
  int outModelIndex; 

  outBoneIndex = 254;
  if ( DObjGetBoneAndModelIndexClient(obj, scr_const.j_eyeball_le, &outBoneIndex, &outModelIndex) )
    return 1;
  outBoneIndex = 254;
  result = DObjGetBoneAndModelIndexClient(obj, scr_const.j_eyeball_ri, &outBoneIndex, &outModelIndex);
  if ( result )
    return 1;
  return result;
}

