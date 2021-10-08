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

void __fastcall R_EyeSensor_AddLightSensors(const GfxViewInfo *viewInfo, GfxSceneEntity *sceneEnt, __int64 a3, double _XMM3_8)
{
  const cpose_t *pose; 
  const DObj *obj; 
  int v12; 
  vec3_t v13; 
  vec3_t outOrigin; 

  if ( r_eyeSensor->current.enabled && (*((_DWORD *)sceneEnt + 346) & 0x3FFC00u) < 0x200000 )
  {
    if ( s_sensorCount < 0x10 )
    {
      GfxSceneEntity_GetPlacementOrigin(sceneEnt, &outOrigin);
      _RAX = CG_GetEntity((const LocalClientNum_t)frontEndDataOut->localClientNum, (*((_DWORD *)sceneEnt + 346) >> 10) & 0xFFF);
      _RDI = _RAX;
      __asm { vxorps  xmm0, xmm0, xmm0 }
      if ( _RAX->nextState.eType == ET_ACTOR )
        __asm { vmovss  xmm3, dword ptr [rax+200h] }
      else
        __asm { vxorps  xmm3, xmm3, xmm3; scriptPupilDiameter }
      pose = sceneEnt->info.pose;
      obj = sceneEnt->obj;
      v12 = (*((_DWORD *)sceneEnt + 346) >> 10) & 0xFFF;
      __asm { vucomiss xmm3, xmm0 }
      if ( v12 )
      {
        *(float *)&_XMM0 = R_EyeSensor_GetPupilSizeFromScript(obj, pose, v12, *(float *)&_XMM3);
      }
      else
      {
        __asm { vmovsd  xmm0, qword ptr [rsp+58h+outOrigin] }
        v13.v[2] = outOrigin.v[2];
        __asm { vmovsd  [rsp+58h+var_38], xmm0 }
        *(float *)&_XMM0 = R_EyeSensor_GetPupilSizeFromSensor(obj, pose, &v13, (unsigned __int8)v12);
      }
      __asm { vmovss  dword ptr [rdi+2E8h], xmm0 }
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

void __fastcall R_EyeSensor_AddLightSensors(const GfxViewInfo *viewInfo, GfxSceneModel *sceneModel, __int64 a3, double _XMM3_8)
{
  unsigned int v6; 
  int localClientNum; 
  const cpose_t *Pose; 
  const DObj *obj; 
  int v14; 
  vec3_t v15; 

  _RDI = sceneModel;
  if ( r_eyeSensor->current.enabled )
  {
    v6 = (*((_DWORD *)sceneModel + 30) >> 10) & 0xFFF;
    if ( v6 < 0x800 )
    {
      if ( _RDI->obj )
      {
        if ( s_sensorCount < 0x10 )
        {
          localClientNum = frontEndDataOut->localClientNum;
          Pose = CG_GetPose((LocalClientNum_t)localClientNum, v6);
          _RAX = CG_GetEntity((const LocalClientNum_t)localClientNum, (*((_DWORD *)_RDI + 30) >> 10) & 0xFFF);
          _RBX = _RAX;
          __asm { vxorps  xmm0, xmm0, xmm0 }
          if ( _RAX->nextState.eType == ET_ACTOR )
            __asm { vmovss  xmm3, dword ptr [rax+200h] }
          else
            __asm { vxorps  xmm3, xmm3, xmm3; scriptPupilDiameter }
          __asm { vucomiss xmm3, xmm0 }
          obj = _RDI->obj;
          if ( _RAX->nextState.eType == ET_ACTOR )
          {
            __asm { vmovsd  xmm0, qword ptr [rdi+48h] }
            v14 = (*((_DWORD *)_RDI + 30) >> 10) & 0xFFF;
            v15.v[2] = _RDI->placement.base.origin.v[2];
            __asm { vmovsd  [rsp+38h+var_18], xmm0 }
            *(float *)&_XMM0 = R_EyeSensor_GetPupilSizeFromSensor(obj, Pose, &v15, v14);
          }
          else
          {
            *(float *)&_XMM0 = R_EyeSensor_GetPupilSizeFromScript(obj, Pose, (*((_DWORD *)_RDI + 30) >> 10) & 0xFFF, *(float *)&_XMM3);
          }
          __asm { vmovss  dword ptr [rbx+2E8h], xmm0 }
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
  unsigned int v10; 
  int WorldBoneMatrix; 
  unsigned __int16 outBoneIndex[2]; 
  int outModelIndex; 
  tmat33_t<vec3_t> outTagMat; 
  DObjPartBits partBits; 

  _R15 = boneDirection;
  _RSI = bonePos;
  outBoneIndex[0] = 254;
  if ( !DObjGetBoneAndModelIndexClient(obj, name, outBoneIndex, &outModelIndex) )
    return 0i64;
  v10 = 0;
  _RDI = &partBits;
  __asm
  {
    vmovaps [rsp+0E8h+var_48], xmm6
    vpxor   xmm6, xmm6, xmm6
  }
  do
  {
    __asm { vmovdqu xmmword ptr [rdi], xmm6 }
    _RDI = (DObjPartBits *)((char *)_RDI + 16);
    ++v10;
  }
  while ( v10 < 2 );
  XAnimSetPartBit(&partBits, outBoneIndex[0]);
  CG_LocationTraceDobjCalcPose(obj, pose, &partBits);
  WorldBoneMatrix = CG_DObjGetWorldBoneMatrix(pose, obj, outBoneIndex[0], &outTagMat, _RSI);
  __asm { vmovaps xmm6, [rsp+0E8h+var_48] }
  if ( !WorldBoneMatrix )
    return 0i64;
  __asm
  {
    vmovss  xmm2, cs:__real@bf800000
    vmulss  xmm1, xmm2, dword ptr [rsp+0E8h+outTagMat+10h]
    vmulss  xmm3, xmm2, dword ptr [rsp+0E8h+outTagMat+0Ch]
    vmovss  xmm4, cs:__real@40a00000
    vmovss  dword ptr [r15+4], xmm1
    vmulss  xmm1, xmm2, dword ptr [rsp+0E8h+outTagMat+14h]
    vmovss  dword ptr [r15+8], xmm1
    vmovss  dword ptr [r15], xmm3
    vmulss  xmm0, xmm3, xmm4
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vmovss  dword ptr [rsi], xmm1
    vmulss  xmm1, xmm4, dword ptr [r15+4]
    vaddss  xmm2, xmm1, dword ptr [rsi+4]
    vmovss  dword ptr [rsi+4], xmm2
    vmulss  xmm1, xmm4, dword ptr [r15+8]
    vaddss  xmm2, xmm1, dword ptr [rsi+8]
    vmovss  dword ptr [rsi+8], xmm2
  }
  return 1i64;
}

/*
==============
R_EyeSensor_GetPupilSizeFromScript
==============
*/

float __fastcall R_EyeSensor_GetPupilSizeFromScript(const DObj *obj, const cpose_t *pose, unsigned int entnum, double scriptPupilDiameter)
{
  int localClientNum; 
  GfxEyeSensorEntity *v15; 
  const char *v31; 
  int v45; 
  vec3_t point; 
  vec3_t sensorPos; 
  vec3_t sensorDirection; 
  char v49; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovss  xmm7, cs:__real@41000000
    vmovss  xmm1, cs:__real@40000000; min
    vmovaps xmm2, xmm7; max
  }
  localClientNum = frontEndDataOut->localClientNum;
  __asm { vmovaps xmm0, xmm3; val }
  v15 = &s_eyeSensorEntity[entnum];
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm2, xmm0; newPupilDiameter }
  R_EyeSensor_UpdatePupil((LocalClientNum_t)localClientNum, v15, *(float *)&_XMM2);
  *(float *)&_XMM0 = R_EyeSensor_UnrestStateStarkNoise_0((LocalClientNum_t)localClientNum);
  __asm
  {
    vaddss  xmm8, xmm0, dword ptr [rdi]
    vmovss  xmm1, cs:__real@40000000; min
    vmovaps xmm0, xmm8; val
    vmovaps xmm2, xmm7; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@3da39409; val
    vmovss  xmm2, cs:__real@3f800000; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm6, xmm0 }
  if ( R_EyeSensor_GetSensorPos(obj, pose, &sensorPos, &sensorDirection) )
  {
    __asm { vmovsd  xmm1, qword ptr [rsp+0B8h+sensorPos] }
    point.v[2] = sensorPos.v[2];
    __asm { vmovsd  qword ptr [rsp+0B8h+point], xmm1 }
    if ( r_eyeSensorDebug->current.enabled )
    {
      __asm
      {
        vmulss  xmm0, xmm6, cs:__real@42c80000
        vcvtss2sd xmm2, xmm0, xmm0
        vcvtss2sd xmm1, xmm8, xmm8
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
      }
      v31 = j_va("SCRIPTED - %.2fmm - %.2f%%", _RDX, _R8);
      __asm
      {
        vmovss  xmm0, cs:__real@3d99999a
        vmovss  [rsp+0B8h+var_98], xmm0
      }
      CG_DebugStarWithText(&point, &colorRed, &colorRed, v31, *(float *)&v45, 0);
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rsp+0B8h+sensorDirection]
        vaddss  xmm2, xmm1, dword ptr [rsp+0B8h+point]
        vmulss  xmm1, xmm7, dword ptr [rsp+0B8h+sensorDirection+4]
        vmovss  dword ptr [rsp+0B8h+sensorPos], xmm2
        vaddss  xmm2, xmm1, dword ptr [rsp+0B8h+point+4]
        vmulss  xmm1, xmm7, dword ptr [rsp+0B8h+sensorDirection+8]
        vmovss  dword ptr [rsp+0B8h+sensorPos+4], xmm2
        vaddss  xmm2, xmm1, dword ptr [rsp+0B8h+point+8]
        vmovss  dword ptr [rsp+0B8h+sensorPos+8], xmm2
      }
      CG_DebugLine(&point, &sensorPos, &colorBlue, 0, 0);
    }
  }
  __asm { vmovaps xmm0, xmm6 }
  _R11 = &v49;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return *(float *)&_XMM0;
}

/*
==============
R_EyeSensor_GetPupilSizeFromSensor
==============
*/
float R_EyeSensor_GetPupilSizeFromSensor(const DObj *obj, const cpose_t *pose, vec3_t *origin, unsigned int entnum)
{
  __int64 v8; 
  int localClientNum; 
  char v21; 
  float sampleNml; 
  vec3_t v46; 
  vec3_t v47; 
  vec3_t outPos; 
  vec3_t sensorPos; 
  GfxLightSensorEntityResult lightSensorOut; 

  v8 = entnum;
  localClientNum = frontEndDataOut->localClientNum;
  CL_GetViewPos((LocalClientNum_t)localClientNum, &outPos);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1D8h+outPos]
    vsubss  xmm3, xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rsp+1D8h+outPos+4]
    vsubss  xmm2, xmm1, dword ptr [rbx+4]
    vmovss  xmm0, dword ptr [rsp+1D8h+outPos+8]
    vsubss  xmm4, xmm0, dword ptr [rbx+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vcomiss xmm2, cs:__real@471c4000
  }
  if ( v21 && R_EyeSensor_GetSensorPos(obj, pose, &sensorPos, &outPos) )
  {
    __asm
    {
      vmovaps [rsp+1D8h+var_38], xmm6
      vmovaps [rsp+1D8h+var_48], xmm7
      vxorps  xmm3, xmm3, xmm3; pointSize
    }
    R_AllocLightSensors(v8 + 2048, &sensorPos, 1u, *(float *)&_XMM3, &outPos);
    if ( R_LightSensor_QueryEntity(v8 + 2048, &lightSensorOut) )
    {
      __asm
      {
        vmovss  xmm0, [rsp+1D8h+lightSensorOut.sampleLuminance]
        vmulss  xmm1, xmm0, dword ptr [rax+28h]
        vmulss  xmm0, xmm1, cs:__real@447a0000; X
        vmovss  [rsp+1D8h+lightSensorOut.sampleLuminance], xmm1
      }
      *(float *)&_XMM0 = log10f_0(*(float *)&_XMM0);
      __asm { vmulss  xmm0, xmm0, cs:__real@3ecccccd; X }
      *(float *)&_XMM0 = tanhf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm2, xmm0, cs:__real@40400000
        vmovss  xmm1, cs:__real@40a00000
        vsubss  xmm2, xmm1, xmm2; newPupilDiameter
      }
      R_EyeSensor_UpdatePupil((LocalClientNum_t)localClientNum, &s_eyeSensorEntity[v8], *(float *)&_XMM2);
    }
    ++s_sensorCount;
    *(float *)&_XMM0 = R_EyeSensor_UnrestStateStarkNoise_0((LocalClientNum_t)localClientNum);
    __asm
    {
      vaddss  xmm7, xmm0, dword ptr [rdi]
      vmovss  xmm2, cs:__real@41000000; max
      vmovss  xmm1, cs:__real@40000000; min
      vmovaps xmm0, xmm7; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@3da39409; val
      vmovss  xmm2, cs:__real@3f800000; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovsd  xmm1, qword ptr [rsp+1D8h+outPos]
      vmovss  xmm2, [rsp+1D8h+lightSensorOut.sampleLuminance]
      vmovsd  [rsp+1D8h+var_1A8], xmm1
      vmovsd  xmm1, qword ptr [rsp+1D8h+sensorPos]
    }
    v46.v[2] = outPos.v[2];
    __asm
    {
      vmovaps xmm3, xmm7
      vmovsd  [rsp+1D8h+var_198], xmm1
      vmovss  dword ptr [rsp+1D8h+sampleNml], xmm0
      vmovaps xmm6, xmm0
    }
    v47.v[2] = sensorPos.v[2];
    R_LightSensor_DebugText(&v47, &v46, *(float *)&_XMM2, *(float *)&_XMM3, sampleNml, 0);
    __asm
    {
      vmovaps xmm7, [rsp+1D8h+var_48]
      vmovaps xmm0, xmm6
      vmovaps xmm6, [rsp+1D8h+var_38]
    }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
R_EyeSensor_GetSensorPos
==============
*/
__int64 R_EyeSensor_GetSensorPos(const DObj *obj, const cpose_t *pose, vec3_t *sensorPos, vec3_t *sensorDirection)
{
  int v26; 
  __int64 result; 
  vec3_t bonePos; 
  vec3_t boneDirection; 

  __asm
  {
    vmovaps [rsp+0B8h+var_38], xmm6
    vmovaps [rsp+0B8h+var_48], xmm7
    vmovaps [rsp+0B8h+var_58], xmm8
  }
  _RBX = sensorPos;
  *(_QWORD *)sensorPos->v = 0i64;
  _RDI = sensorDirection;
  sensorPos->v[2] = 0.0;
  *(_QWORD *)sensorDirection->v = 0i64;
  sensorDirection->v[2] = 0.0;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vxorps  xmm6, xmm6, xmm6
    vmovss  xmm7, cs:__real@3f800000
  }
  if ( (unsigned int)R_EyeSensor_GetBonePos(obj, scr_const.j_eyeball_le, pose, &bonePos, &boneDirection) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0B8h+bonePos]
      vaddss  xmm1, xmm0, dword ptr [rbx]
      vmovss  xmm2, dword ptr [rsp+0B8h+bonePos+4]
      vaddss  xmm0, xmm2, dword ptr [rbx+4]
      vmovss  dword ptr [rbx], xmm1
      vmovss  xmm1, dword ptr [rsp+0B8h+bonePos+8]
      vaddss  xmm2, xmm1, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+4], xmm0
      vmovss  xmm0, dword ptr [rsp+0B8h+var_78]
      vmovss  dword ptr [rbx+8], xmm2
      vaddss  xmm1, xmm0, dword ptr [rdi]
      vmovss  xmm2, dword ptr [rsp+0B8h+var_78+4]
      vaddss  xmm0, xmm2, dword ptr [rdi+4]
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm1, dword ptr [rsp+0B8h+var_78+8]
      vaddss  xmm2, xmm1, dword ptr [rdi+8]
      vmovss  dword ptr [rdi+8], xmm2
      vmovss  dword ptr [rdi+4], xmm0
      vmovaps xmm6, xmm7
    }
  }
  v26 = R_EyeSensor_GetBonePos(obj, scr_const.j_eyeball_ri, pose, &bonePos, &boneDirection);
  if ( v26 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0B8h+bonePos]
      vaddss  xmm1, xmm0, dword ptr [rbx]
      vmovss  xmm2, dword ptr [rsp+0B8h+bonePos+4]
      vaddss  xmm0, xmm2, dword ptr [rbx+4]
      vmovss  dword ptr [rbx], xmm1
      vmovss  xmm1, dword ptr [rsp+0B8h+bonePos+8]
      vaddss  xmm2, xmm1, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+4], xmm0
      vmovss  xmm0, dword ptr [rsp+0B8h+var_78]
      vmovss  dword ptr [rbx+8], xmm2
      vaddss  xmm1, xmm0, dword ptr [rdi]
      vmovss  xmm2, dword ptr [rsp+0B8h+var_78+4]
      vaddss  xmm0, xmm2, dword ptr [rdi+4]
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm1, dword ptr [rsp+0B8h+var_78+8]
      vaddss  xmm2, xmm1, dword ptr [rdi+8]
      vmovss  dword ptr [rdi+8], xmm2
      vmovss  dword ptr [rdi+4], xmm0
      vaddss  xmm6, xmm6, xmm7
    }
  }
  __asm { vcomiss xmm6, xmm8 }
  if ( v26 )
  {
    __asm
    {
      vdivss  xmm2, xmm7, xmm6
      vmulss  xmm0, xmm2, dword ptr [rbx]
      vmulss  xmm1, xmm2, dword ptr [rbx+4]
      vmovss  dword ptr [rbx], xmm0
      vmulss  xmm0, xmm2, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  dword ptr [rbx+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rdi]
      vmulss  xmm1, xmm2, dword ptr [rdi+4]
      vmovss  dword ptr [rdi], xmm0
      vmulss  xmm0, xmm2, dword ptr [rdi+8]
      vmovss  dword ptr [rdi+8], xmm0
      vmovss  dword ptr [rdi+4], xmm1
    }
    result = 1i64;
  }
  else
  {
    result = 0i64;
  }
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_38]
    vmovaps xmm7, [rsp+0B8h+var_48]
    vmovaps xmm8, [rsp+0B8h+var_58]
  }
  return result;
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

float __fastcall R_EyeSensor_PokornySmithNitsToDiameter(double luminanceKnits)
{
  __asm { vmulss  xmm0, xmm0, cs:__real@447a0000; X }
  *(float *)&_XMM0 = log10f_0(*(float *)&_XMM0);
  __asm { vmulss  xmm0, xmm0, cs:__real@3ecccccd; X }
  *(float *)&_XMM0 = tanhf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@40400000
    vmovss  xmm1, cs:__real@40a00000
    vsubss  xmm0, xmm1, xmm2
  }
  return *(float *)&_XMM0;
}

/*
==============
R_EyeSensor_Reset
==============
*/
void R_EyeSensor_Reset()
{
  GfxBackEndData *v2; 
  LocalClientNum_t localClientNum; 
  int v20; 
  float sampleNml; 
  vec3_t v40; 
  vec3_t v41; 
  vec3_t outPos; 
  vec3_t v43; 
  GfxLightSensorEntityResult lightSensorOut; 
  void *retaddr; 

  _R11 = &retaddr;
  s_sensorCount = 0;
  if ( r_eyeSensor->current.enabled && r_eyeSensorDebug->current.enabled )
  {
    v2 = frontEndDataOut;
    __asm { vmovaps xmmword ptr [r11-18h], xmm6 }
    localClientNum = v2->localClientNum;
    CL_GetViewPos(localClientNum, &outPos);
    _RAX = CG_GetLocalClientGlobals(localClientNum);
    __asm
    {
      vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm3, cs:__real@42480000
      vmovss  xmm5, dword ptr [rax+6948h]
      vmovss  xmm4, dword ptr [rax+6944h]
      vmovss  xmm6, dword ptr [rax+694Ch]
      vxorps  xmm1, xmm5, xmm2
      vmovss  dword ptr [rsp+1A0h+var_140+4], xmm1
      vxorps  xmm0, xmm4, xmm2
      vmulss  xmm1, xmm4, xmm3
      vaddss  xmm1, xmm1, dword ptr [rsp+1A0h+outPos]
      vmovss  dword ptr [rsp+1A0h+outPos], xmm1
      vmovss  dword ptr [rsp+1A0h+var_140], xmm0
      vxorps  xmm0, xmm6, xmm2
      vmulss  xmm2, xmm5, xmm3
      vaddss  xmm1, xmm2, dword ptr [rsp+1A0h+outPos+4]
      vmulss  xmm3, xmm6, xmm3
      vmovss  dword ptr [rsp+1A0h+outPos+4], xmm1
      vaddss  xmm1, xmm3, dword ptr [rsp+1A0h+outPos+8]
      vxorps  xmm3, xmm3, xmm3; pointSize
      vmovss  dword ptr [rsp+1A0h+outPos+8], xmm1
      vmovss  dword ptr [rsp+1A0h+var_140+8], xmm0
    }
    R_AllocLightSensors(0x1000u, &outPos, 1u, *(float *)&_XMM3, &v43);
    v20 = R_LightSensor_QueryEntity(0x1000u, &lightSensorOut);
    __asm { vmovaps xmm6, xmmword ptr [rsp+1A0h+var_18+8] }
    if ( v20 )
    {
      __asm
      {
        vmovss  xmm0, [rsp+1A0h+lightSensorOut.sampleLuminance]
        vmulss  xmm1, xmm0, dword ptr [rax+28h]
        vmulss  xmm0, xmm1, cs:__real@447a0000; X
        vmovss  [rsp+1A0h+lightSensorOut.sampleLuminance], xmm1
      }
      *(float *)&_XMM0 = log10f_0(*(float *)&_XMM0);
      __asm { vmulss  xmm0, xmm0, cs:__real@3ecccccd; X }
      *(float *)&_XMM0 = tanhf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm3, xmm0, cs:__real@40400000
        vmovss  xmm2, cs:__real@40a00000
        vsubss  xmm2, xmm2, xmm3; newPupilDiameter
      }
      R_EyeSensor_UpdatePupil(localClientNum, &s_eyeSensorEntity[2048], *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm2, cs:__real@41000000; max
        vmovss  xmm1, cs:__real@40000000; min
        vmovss  xmm0, cs:s_eyeSensorEntity.pupilDiameter+44000h; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@3da39409; val
        vmovss  xmm2, cs:__real@3f800000; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovsd  xmm1, qword ptr [rsp+1A0h+var_140]
        vmovss  xmm3, cs:s_eyeSensorEntity.pupilDiameter+44000h
        vmovss  xmm2, [rsp+1A0h+lightSensorOut.sampleLuminance]
        vmovsd  qword ptr [rsp+1A0h+var_170], xmm1
        vmovsd  xmm1, qword ptr [rsp+1A0h+outPos]
      }
      v40.v[2] = v43.v[2];
      __asm
      {
        vmovsd  qword ptr [rsp+1A0h+var_160], xmm1
        vmovss  dword ptr [rsp+1A0h+sampleNml], xmm0
      }
      v41.v[2] = outPos.v[2];
      R_LightSensor_DebugText(&v41, &v40, *(float *)&_XMM2, *(float *)&_XMM3, sampleNml, 0);
    }
    ++s_sensorCount;
  }
}

/*
==============
R_EyeSensor_ToggleFrame
==============
*/

void __fastcall R_EyeSensor_ToggleFrame(double _XMM0_8)
{
  float v2; 
  vec3_t point; 

  if ( r_eyeSensorDebug->current.enabled )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+58h+point], xmm0
      vmovss  dword ptr [rsp+58h+point+4], xmm0
      vmovss  dword ptr [rsp+58h+point+8], xmm0
      vmovss  [rsp+58h+var_38], xmm0
    }
    CG_DebugStarWithText(&point, &colorBlack, &colorBlack, "*", v2, 0);
  }
}

/*
==============
R_EyeSensor_UnrestStateStarkNoise
==============
*/

float __fastcall R_EyeSensor_UnrestStateStarkNoise(double t)
{
  float *v28; 
  char v90; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovups xmm1, cs:__xmm@c0000000c0000000c0000000c0000000
    vmovaps xmmword ptr [rax-18h], xmm6
  }
  _EBX = 0;
  __asm
  {
    vmovups xmm6, cs:__xmm@3b0000003b0000003b0000003b000000
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovups xmm7, cs:__xmm@3a8000003a8000003a8000003a800000
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovups xmm11, cs:__xmm@41200000412000004120000041200000
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmm10, xmm0
    vmovaps [rsp+0D8h+var_88], xmm13
    vmovaps [rsp+0D8h+var_98], xmm14
    vmovaps [rsp+0D8h+var_A8], xmm15
    vmovdqu xmm15, cs:__xmm@00000003000000020000000100000000
    vmovups xmm0, xmm11
    vshufps xmm10, xmm10, xmm10, 0
    vxorps  xmm9, xmm9, xmm9
  }
  *(double *)&_XMM0 = j___vdecl_powf4();
  __asm
  {
    vmovups xmm1, cs:__xmm@3f0ccccd3f0ccccd3f0ccccd3f0ccccd
    vmovups xmm12, xmm0
    vmovups xmm0, xmm11
  }
  *(double *)&_XMM0 = j___vdecl_powf4();
  __asm
  {
    vmovups xmm13, cs:__xmm@40000000400000004000000040000000
    vmovups xmm14, cs:__xmm@40c90fdb40c90fdb40c90fdb40c90fdb
    vsubps  xmm4, xmm0, xmm12
    vmovups [rsp+0D8h+var_B8], xmm4
  }
  v28 = s_unrestPhaseShift;
  do
  {
    __asm
    {
      vmovd   xmm0, ebx
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm0, xmm0, xmm15
      vcvtdq2ps xmm1, xmm0
      vmulps  xmm2, xmm1, xmm6
      vaddps  xmm3, xmm2, xmm7
      vmulps  xmm0, xmm3, xmm4
      vaddps  xmm8, xmm0, xmm12
      vmovups xmm0, xmm8
    }
    *(double *)&_XMM0 = j___vdecl_log10f4();
    __asm
    {
      vaddps  xmm7, xmm0, xmm13
      vmulps  xmm1, xmm7, cs:__xmm@3d5543233d5543233d5543233d554323
      vmovups xmm0, cs:__xmm@400e8769400e8769400e8769400e8769
      vsubps  xmm6, xmm0, xmm1
      vmovups xmm1, xmm13
      vmovups xmm0, xmm7
    }
    *(double *)&_XMM0 = j___vdecl_powf4();
    __asm
    {
      vmulps  xmm1, xmm0, cs:__xmm@3f09197f3f09197f3f09197f3f09197f
      vsubps  xmm6, xmm6, xmm1
      vmovups xmm1, cs:__xmm@40400000404000004040000040400000
      vmovups xmm0, xmm7
    }
    *(double *)&_XMM0 = j___vdecl_powf4();
    __asm
    {
      vmulps  xmm1, xmm0, cs:__xmm@3ed94d4d3ed94d4d3ed94d4d3ed94d4d
      vaddps  xmm6, xmm6, xmm1
      vmovups xmm1, cs:__xmm@40800000408000004080000040800000
      vmovups xmm0, xmm7
    }
    *(double *)&_XMM0 = j___vdecl_powf4();
    __asm
    {
      vmulps  xmm1, xmm0, cs:__xmm@3ea7af433ea7af433ea7af433ea7af43
      vsubps  xmm6, xmm6, xmm1
      vmovups xmm1, cs:__xmm@40a0000040a0000040a0000040a00000
      vmovups xmm0, xmm7
    }
    *(double *)&_XMM0 = j___vdecl_powf4();
    __asm
    {
      vmulps  xmm1, xmm0, cs:__xmm@3d4278893d4278893d4278893d427889
      vaddps  xmm1, xmm6, xmm1
      vmovups xmm0, xmm11
    }
    *(double *)&_XMM0 = j___vdecl_powf4();
    __asm
    {
      vmulps  xmm1, xmm8, xmm14
      vmulps  xmm2, xmm1, xmm10
      vmulps  xmm1, xmm14, xmmword ptr [rdi]
      vsqrtps xmm6, xmm0
      vaddps  xmm0, xmm2, xmm1
    }
    j___vdecl_sinf4();
    __asm
    {
      vmovups xmm7, cs:__xmm@3a8000003a8000003a8000003a800000
      vmovups xmm4, [rsp+0D8h+var_B8]
      vmulps  xmm1, xmm6, xmm0
      vmovups xmm6, cs:__xmm@3b0000003b0000003b0000003b000000
    }
    _EBX += 4;
    v28 += 4;
    __asm { vaddps  xmm9, xmm1, xmm9 }
  }
  while ( _EBX < 512 );
  __asm { vmovaps xmm14, [rsp+0D8h+var_98] }
  _R11 = &v90;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm15, [rsp+0D8h+var_A8]
    vmovhlps xmm0, xmm9, xmm9
    vaddps  xmm1, xmm0, xmm9
    vmovaps xmm9, xmmword ptr [r11-40h]
    vshufps xmm0, xmm1, xmm1, 0F5h ; 'õ'
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm1, cs:__real@3c23d70a
  }
  return *(float *)&_XMM0;
}

/*
==============
R_EyeSensor_UpdatePupil
==============
*/

void __fastcall R_EyeSensor_UpdatePupil(LocalClientNum_t localClientNum, GfxEyeSensorEntity *entity, double newPupilDiameter)
{
  char v7; 
  unsigned int v34; 
  int v49; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = entity;
  __asm
  {
    vmovaps [rsp+48h+var_28], xmm8
    vmovaps xmm6, xmm2
  }
  CG_GetLocalClientGlobals(localClientNum);
  _RDX = _RBX->pupilDiameterIndex;
  __asm
  {
    vmulss  xmm1, xmm6, xmm6
    vxorps  xmm8, xmm8, xmm8
    vcvtsi2ss xmm8, xmm8, dword ptr [rax+65E4h]
    vmovss  xmm0, dword ptr [rbx+rdx*4+4]
  }
  _RAX = r_eyeSensorDilationSpeed;
  __asm
  {
    vmulss  xmm0, xmm0, xmm0
    vsubss  xmm5, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1; min
    vcomiss xmm5, xmm1
  }
  if ( v7 )
    _RAX = r_eyeSensorContractionSpeed;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vmulss  xmm4, xmm0, xmm5
    vandps  xmm0, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vminss  xmm3, xmm0, dword ptr [rax+28h]
    vxorps  xmm2, xmm3, cs:__xmm@80000000800000008000000080000000
    vcmpless xmm0, xmm1, xmm4
    vblendvps xmm0, xmm2, xmm3, xmm0
    vmovss  [rsp+48h+arg_10], xmm0
  }
  if ( v7 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vsubss  xmm0, xmm0, cs:__real@40000000
      vmulss  xmm0, xmm0, cs:__real@3f000000; val
      vmovss  xmm2, cs:__real@3f800000; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovss  xmm1, cs:__real@40000000; Y }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    LODWORD(_RDX) = _RBX->pupilDiameterIndex;
    __asm { vmovaps xmm3, xmm0 }
  }
  else
  {
    __asm { vmovss  xmm3, cs:__real@3f800000 }
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]
    vmulss  xmm1, xmm8, [rsp+48h+arg_10]
    vmovaps xmm6, [rsp+48h+var_18]
  }
  v34 = 31;
  __asm
  {
    vmulss  xmm3, xmm1, xmm3
    vmaxss  xmm1, xmm8, cs:__real@358637bd
    vmovaps xmm8, [rsp+48h+var_28]
    vmulss  xmm2, xmm2, xmm2
    vaddss  xmm0, xmm3, xmm2
    vsqrtss xmm5, xmm0, xmm0
    vmovss  dword ptr [rbx], xmm5
  }
  _RAX = r_eyeSensorDelay;
  __asm { vmovss  xmm0, dword ptr [rax+28h] }
  _RAX = (int)_RDX;
  __asm
  {
    vdivss  xmm1, xmm0, xmm1
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rbx+rax*4+4], xmm5
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si ecx, xmm1
  }
  v49 = _ECX + 1;
  if ( v49 < 31 )
    v34 = v49;
  _RBX->pupilDiameterIndex = (_RBX->pupilDiameterIndex + 1) % v34;
}

/*
==============
R_InitEyeSensor
==============
*/

void __fastcall R_InitEyeSensor(double _XMM0_8)
{
  __int64 v13; 
  unsigned int v22; 
  char v27; 
  float *v42; 
  __int64 v43; 
  char v58; 
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
    vmovaps [rsp+0C8h+var_88], xmm13
    vmovaps [rsp+0C8h+var_98], xmm14
    vmovaps [rsp+0C8h+var_A8], xmm15
  }
  srand(0);
  _RBX = s_unrestPhaseShift;
  v13 = 512i64;
  do
  {
    _XMM0_8 = I_random();
    __asm { vmovss  dword ptr [rbx], xmm0 }
    ++_RBX;
    --v13;
  }
  while ( v13 );
  __asm
  {
    vmovss  xmm11, cs:__real@3c888889
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm12, cs:__real@3a11a2b4
    vmovss  xmm13, cs:__real@3a5a740e
    vmovss  xmm10, cs:__real@42000000
    vmovss  xmm14, cs:__real@40000000
    vmovss  xmm15, cs:__real@40400000
  }
  _RDI = s_unrestLUT;
  v22 = 0;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  do
  {
    __asm
    {
      vxorps  xmm9, xmm9, xmm9
      vcvtsi2ss xmm9, xmm9, rax
      vmulss  xmm6, xmm9, xmm11
      vmovaps xmm0, xmm6; t
    }
    *(float *)&_XMM0 = R_EyeSensor_UnrestStateStarkNoise(*(double *)&_XMM0);
    __asm
    {
      vcomiss xmm6, xmm8
      vmovaps xmm4, xmm0
    }
    if ( v27 )
    {
      __asm { vmovaps xmm3, xmm8 }
    }
    else
    {
      __asm { vcomiss xmm6, xmm7 }
      if ( v27 )
      {
        __asm
        {
          vmulss  xmm0, xmm6, xmm12
          vsubss  xmm1, xmm13, xmm0
          vmulss  xmm0, xmm9, xmm9
          vmulss  xmm3, xmm1, xmm0
        }
      }
      else
      {
        __asm { vmovaps xmm3, xmm7 }
      }
    }
    __asm
    {
      vsubss  xmm2, xmm10, xmm6
      vcomiss xmm2, xmm8
    }
    if ( v27 )
    {
      __asm { vmovaps xmm0, xmm8 }
    }
    else
    {
      __asm { vcomiss xmm2, xmm7 }
      if ( v27 )
      {
        __asm
        {
          vmulss  xmm0, xmm2, xmm14
          vsubss  xmm1, xmm15, xmm0
          vmulss  xmm0, xmm2, xmm2
          vmulss  xmm0, xmm1, xmm0
        }
      }
      else
      {
        __asm { vmovaps xmm0, xmm7 }
      }
    }
    __asm
    {
      vmulss  xmm0, xmm0, xmm3
      vmulss  xmm1, xmm0, xmm4
      vmovss  dword ptr [rdi], xmm1
    }
    ++_RDI;
    ++v22;
  }
  while ( v22 < 0x780 );
  v42 = &s_eyeSensorEntity[0].pupilDiameterHistory[2];
  v43 = 2049i64;
  do
  {
    *(v42 - 3) = 2.0;
    *(v42 - 2) = 2.0;
    *(v42 - 1) = 2.0;
    *v42 = 2.0;
    v42[1] = 2.0;
    v42[2] = 2.0;
    v42[3] = 2.0;
    v42[4] = 2.0;
    v42[5] = 2.0;
    v42[6] = 2.0;
    v42[7] = 2.0;
    v42[8] = 2.0;
    v42[9] = 2.0;
    v42[10] = 2.0;
    v42[11] = 2.0;
    v42[12] = 2.0;
    v42[13] = 2.0;
    v42[14] = 2.0;
    v42[15] = 2.0;
    v42[16] = 2.0;
    v42[17] = 2.0;
    v42[18] = 2.0;
    v42[19] = 2.0;
    v42[20] = 2.0;
    v42[21] = 2.0;
    v42[22] = 2.0;
    v42[23] = 2.0;
    v42[24] = 2.0;
    v42[25] = 2.0;
    v42[26] = 2.0;
    v42[27] = 2.0;
    v42[28] = 2.0;
    *(_QWORD *)(v42 + 29) = 0x40000000i64;
    v42 += 34;
    --v43;
  }
  while ( v43 );
  __asm { vmovaps xmm14, [rsp+0C8h+var_98] }
  _R11 = &v58;
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
    vmovaps xmm15, [rsp+0C8h+var_A8]
  }
}

/*
==============
R_LightSensor_DebugText
==============
*/

void __fastcall R_LightSensor_DebugText(const vec3_t *sensorPos, const vec3_t *sensorDirection, double luminanceKnits, double pupilDiameter, float pupilSize, int scripted)
{
  const char *v16; 
  __int64 v29; 
  int v30; 
  vec3_t end; 

  __asm
  {
    vmovss  xmm0, [rsp+58h+arg_20]
    vmovaps xmm1, xmm3
  }
  if ( r_eyeSensorDebug->current.enabled )
  {
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@42c80000
      vcomiss xmm2, cs:__real@3c23d70a
      vcvtss2sd xmm3, xmm0, xmm0
      vcvtss2sd xmm4, xmm1, xmm1
    }
    if ( scripted )
    {
      __asm
      {
        vmovaps xmm2, xmm3
        vmovaps xmm1, xmm4
        vmovq   r8, xmm2
        vmovq   rdx, xmm1
      }
      v16 = j_va("SCRIPTED - %.2fmm - %.2f%%", _RDX, _R8);
    }
    else
    {
      __asm
      {
        vmovsd  qword ptr [rsp+58h+var_38], xmm3
        vmovaps xmm3, xmm4
        vcvtss2sd xmm1, xmm2, xmm2
        vmovq   r9, xmm3
        vmovq   rdx, xmm1
      }
      v16 = j_va("AUTO - %.2f%s - %.2fmm - %.2f%%", _RDX, "kn", _R9, v29);
    }
    __asm
    {
      vmovss  xmm0, cs:__real@3d99999a
      vmovss  [rsp+58h+var_38], xmm0
    }
    CG_DebugStarWithText(sensorPos, &colorRed, &colorRed, v16, *(float *)&v30, 0);
    __asm
    {
      vmovss  xmm3, cs:__real@41000000
      vmulss  xmm0, xmm3, dword ptr [rdi]
      vaddss  xmm1, xmm0, dword ptr [rbx]
      vmulss  xmm0, xmm3, dword ptr [rdi+4]
      vmovss  dword ptr [rsp+58h+end], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx+4]
      vmulss  xmm0, xmm3, dword ptr [rdi+8]
      vmovss  dword ptr [rsp+58h+end+4], xmm1
      vaddss  xmm1, xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rsp+58h+end+8], xmm1
    }
    CG_DebugLine(sensorPos, &end, &colorBlue, 0, 0);
  }
}

/*
==============
R_RegisterEyeSensorDvars
==============
*/

void __fastcall R_RegisterEyeSensorDvars(__int64 a1, __int64 a2, double _XMM2_8)
{
  const dvar_t *v8; 
  const dvar_t *v12; 
  const dvar_t *v16; 
  const dvar_t *v20; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovss  xmm6, cs:__real@3f800000
    vmovss  xmm1, cs:__real@3a3b3ee7; value
  }
  r_eyeSensor = Dvar_RegisterBool("MTMTPRPOLL", 1, 0x40u, "Enables dynamic pupil dilation based on lighting arriving to the eye");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v8 = Dvar_RegisterFloat("MPQLSORKKO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Pupil average dilation speed. Technically the inverse of the exponential decay time constant");
  __asm { vmovss  xmm1, cs:__real@3b23d70a; value }
  r_eyeSensorDilationSpeed = v8;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v12 = Dvar_RegisterFloat("RQQMQPPTK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Pupil average contraction speed. Technically the inverse of the exponential decay time constant");
  __asm { vmovss  xmm1, cs:__real@3d99999a; value }
  r_eyeSensorContractionSpeed = v12;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v16 = Dvar_RegisterFloat("NOMOKONLQK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Pupil maximum dilation/contraction speed");
  __asm
  {
    vmovss  xmm3, cs:__real@447a0000; max
    vmovss  xmm1, cs:__real@43fa0000; value
  }
  r_eyeSensorMaxSpeed = v16;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v20 = Dvar_RegisterFloat("NTNKRQSKLS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Pupil reaction delay in milliseconds");
  __asm
  {
    vmovss  xmm3, cs:__real@40800000; max
    vmovss  xmm1, cs:__real@3f400000; value
  }
  r_eyeSensorDelay = v20;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  r_eyeSensorUnrest = Dvar_RegisterFloat("LNPPTSPKMO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Maximum unrest animation distance in millimeters");
  __asm { vmovss  xmm3, cs:__real@42c80000; max }
  r_eyeSensorUnrestLut = Dvar_RegisterBool("MKKQMMTOLR", 1, 4u, "Enables baked unrest LUT");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  r_eyeSensorLuminanceScale = Dvar_RegisterFloat("OLSOSNTLMP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "Luminance scale to hack the response to light");
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
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

