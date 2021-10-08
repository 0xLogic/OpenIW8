/*
==============
Particle_GetCurveValueFloat4
==============
*/

float4 *__fastcall Particle_GetCurveValueFloat4(float4 *result, const ParticleCurveDef *pCurveList, float life)
{
  return ?Particle_GetCurveValueFloat4@@YA?AUfloat4@@PEBUParticleCurveDef@@M@Z(result, pCurveList, life);
}

/*
==============
Particle_GetCurveValueFloat4WithScale
==============
*/

float4 *__fastcall Particle_GetCurveValueFloat4WithScale(float4 *result, const ParticleCurveDef *pCurveList, float life, const float4 *scale)
{
  return ?Particle_GetCurveValueFloat4WithScale@@YA?AUfloat4@@PEBUParticleCurveDef@@MAEBU1@@Z(result, pCurveList, life, scale);
}

/*
==============
Particle_GetColorValueFromCurveList
==============
*/

void __fastcall Particle_GetColorValueFromCurveList(const ParticleCurveDef *pCurveList, const float time, float4 *outCurve)
{
  ?Particle_GetColorValueFromCurveList@@YAXPEBUParticleCurveDef@@MAEAUfloat4@@@Z(pCurveList, time, outCurve);
}

/*
==============
Particle_GetCurveValue
==============
*/

double __fastcall Particle_GetCurveValue(const ParticleCurveDef *rCurve, const float time)
{
  double result; 

  *(float *)&result = ?Particle_GetCurveValue@@YAMAEBUParticleCurveDef@@M@Z(rCurve, time);
  return result;
}

/*
==============
Particle_GetCurveValueFloatRandomize
==============
*/

double __fastcall Particle_GetCurveValueFloatRandomize(const ParticleCurveDef *rCurve1, const ParticleCurveDef *rCurve2, FxRandKey key, int seed, float life)
{
  double result; 

  *(float *)&result = ?Particle_GetCurveValueFloatRandomize@@YAMAEBUParticleCurveDef@@0W4FxRandKey@@HM@Z(rCurve1, rCurve2, key, seed, life);
  return result;
}

/*
==============
Particle_GetCurveValue
==============
*/

float __fastcall Particle_GetCurveValue(const ParticleCurveDef *rCurve, double time)
{
  __int64 numControlPoints; 
  signed __int64 v6; 
  int v8; 
  int v9; 
  int v10; 
  bool v12; 
  bool v22; 
  bool v24; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( rCurve->numControlPoints < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlecurve.h", 17, ASSERT_TYPE_ASSERT, "(rCurve.numControlPoints >= 2)", (const char *)&queryFormat, "rCurve.numControlPoints >= 2") )
    __debugbreak();
  numControlPoints = rCurve->numControlPoints;
  v6 = 0i64;
  _RDI = rCurve->controlPoints;
  v8 = 0;
  if ( (int)numControlPoints <= 8 )
  {
    v22 = (unsigned __int64)numControlPoints <= 4;
    if ( numControlPoints < 4 )
    {
LABEL_28:
      if ( v6 < numControlPoints )
      {
        v24 = __CFADD__(_RDI, 16 * v6) || &_RDI[v6] == NULL;
        _RAX = &_RDI[v6];
        do
        {
          __asm { vcomiss xmm6, dword ptr [rax] }
          if ( v24 )
            break;
          ++v8;
          ++v6;
          ++_RAX;
          v24 = v6 <= (unsigned __int64)numControlPoints;
        }
        while ( v6 < numControlPoints );
      }
    }
    else
    {
      _RDX = _RDI + 2;
      while ( 1 )
      {
        __asm { vcomiss xmm6, dword ptr [rdx-20h] }
        if ( v22 )
          break;
        __asm
        {
          vcomiss xmm6, dword ptr [rdx-10h]
          vcomiss xmm6, dword ptr [rdx]
          vcomiss xmm6, dword ptr [rdx+10h]
        }
        v8 += 4;
        v6 += 4i64;
        _RDX += 4;
        v22 = v6 <= (unsigned __int64)(numControlPoints - 3);
        if ( v6 >= numControlPoints - 3 )
          goto LABEL_28;
      }
    }
    if ( v8 == (_DWORD)numControlPoints )
    {
      _RAX = 2i64 * v8;
      __asm { vmovss  xmm0, dword ptr [rdi+rax*8-0Ch] }
      goto LABEL_35;
    }
  }
  else
  {
    v9 = numControlPoints - 1;
    if ( (int)numControlPoints - 1 >= 0 )
    {
      do
      {
        v10 = (v9 + v8) >> 1;
        _RAX = 2i64 * v10;
        __asm { vcomiss xmm6, dword ptr [rdi+rax*8] }
        if ( __CFADD__(v10, v10) || _RAX == 0 )
        {
          if ( !__CFADD__(v10, v10) )
          {
            _RAX = 2i64 * v8;
            __asm { vmovss  xmm0, dword ptr [rdi+rax*8+4] }
            goto LABEL_35;
          }
          v9 = v10 - 1;
        }
        else
        {
          v8 = v10 + 1;
        }
      }
      while ( v8 <= v9 );
    }
    v12 = v8 == (_DWORD)numControlPoints;
    if ( v8 > (int)numControlPoints )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlecurve.h", 47, ASSERT_TYPE_ASSERT, "(controlPointIndex <= numControlPoints)", (const char *)&queryFormat, "controlPointIndex <= numControlPoints") )
        __debugbreak();
      v12 = v8 == (_DWORD)numControlPoints;
    }
    if ( v12 )
    {
      _RAX = 2 * numControlPoints;
      __asm { vmovss  xmm0, dword ptr [rdi+rax*8-0Ch] }
      goto LABEL_35;
    }
    if ( (v8 < 0 || v8 >= (int)numControlPoints) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlecurve.h", 53, ASSERT_TYPE_ASSERT, "(controlPointIndex >= 0 && controlPointIndex < numControlPoints)", (const char *)&queryFormat, "controlPointIndex >= 0 && controlPointIndex < numControlPoints") )
      __debugbreak();
  }
  if ( v8 <= 0 )
  {
    __asm { vmovss  xmm0, dword ptr [rdi+4] }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vsubss  xmm0, xmm6, dword ptr [rdi+rax*8-10h]
      vmulss  xmm4, xmm0, dword ptr [rdi+rax*8+8]
      vmulss  xmm0, xmm4, dword ptr [rdi+rax*8+4]
      vsubss  xmm2, xmm1, xmm4
      vmulss  xmm3, xmm2, dword ptr [rdi+rax*8-0Ch]
      vaddss  xmm0, xmm3, xmm0
    }
  }
LABEL_35:
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return *(float *)&_XMM0;
}

/*
==============
Particle_GetCurveValueFloat4
==============
*/

float4 *__fastcall Particle_GetCurveValueFloat4(float4 *result, const ParticleCurveDef *pCurveList, double life)
{
  float4 *v15; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  _RDI = result;
  __asm
  {
    vmovaps [rsp+68h+var_38], xmm8
    vmovaps xmm8, xmm2
  }
  if ( !pCurveList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlecurve.h", 179, ASSERT_TYPE_ASSERT, "(pCurveList)", (const char *)&queryFormat, "pCurveList") )
    __debugbreak();
  __asm { vmovaps xmm1, xmm8; time }
  *(double *)&_XMM0 = Particle_GetCurveValue(pCurveList + 2, *(const float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm8; time
    vmovaps xmm7, xmm0
  }
  *(double *)&_XMM0 = Particle_GetCurveValue(pCurveList + 1, *(const float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm8; time
    vmovaps xmm6, xmm0
  }
  Particle_GetCurveValue(pCurveList, *(const float *)&_XMM1);
  v15 = _RDI;
  __asm
  {
    vmovaps xmm8, [rsp+68h+var_38]
    vxorps  xmm1, xmm1, xmm1
    vinsertps xmm1, xmm1, xmm0, 0
    vinsertps xmm1, xmm1, xmm6, 10h
    vmovaps xmm6, [rsp+68h+var_18]
    vinsertps xmm1, xmm1, xmm7, 20h ; ' '
    vmovaps xmm7, [rsp+68h+var_28]
    vmovups xmmword ptr [rdi], xmm1
  }
  return v15;
}

/*
==============
Particle_GetColorValueFromCurveList
==============
*/

void __fastcall Particle_GetColorValueFromCurveList(const ParticleCurveDef *pCurveList, double time, float4 *outCurve)
{
  __int64 numControlPoints; 
  int v10; 
  signed __int64 v12; 
  bool v14; 
  bool v16; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RDI = outCurve;
  __asm { vmovaps xmm6, xmm1 }
  if ( pCurveList->numControlPoints < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlecurve.h", 87, ASSERT_TYPE_ASSERT, "(pCurveList[0].numControlPoints >= 2)", (const char *)&queryFormat, "pCurveList[0].numControlPoints >= 2") )
    __debugbreak();
  if ( pCurveList[1].numControlPoints < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlecurve.h", 88, ASSERT_TYPE_ASSERT, "(pCurveList[1].numControlPoints >= 2)", (const char *)&queryFormat, "pCurveList[1].numControlPoints >= 2") )
    __debugbreak();
  if ( pCurveList[2].numControlPoints < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlecurve.h", 89, ASSERT_TYPE_ASSERT, "(pCurveList[2].numControlPoints >= 2)", (const char *)&queryFormat, "pCurveList[2].numControlPoints >= 2") )
    __debugbreak();
  if ( pCurveList[3].numControlPoints < 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlecurve.h", 90, ASSERT_TYPE_ASSERT, "(pCurveList[3].numControlPoints >= 2)", (const char *)&queryFormat, "pCurveList[3].numControlPoints >= 2") )
    __debugbreak();
  __asm { vmovaps xmm1, xmm6; time }
  *(double *)&_XMM0 = Particle_GetCurveValue(pCurveList + 3, *(const float *)&_XMM1);
  numControlPoints = pCurveList->numControlPoints;
  v10 = 0;
  _R10 = pCurveList->controlPoints;
  v12 = 0i64;
  __asm { vmovaps xmm2, xmm0 }
  v14 = (unsigned __int64)numControlPoints <= 4;
  if ( numControlPoints < 4 )
  {
LABEL_20:
    if ( v12 < numControlPoints )
    {
      v16 = __CFADD__(_R10, 16 * v12) || &_R10[v12] == NULL;
      _RAX = &_R10[v12];
      do
      {
        __asm { vcomiss xmm6, dword ptr [rax] }
        if ( v16 )
          break;
        ++v10;
        ++v12;
        ++_RAX;
        v16 = v12 <= (unsigned __int64)numControlPoints;
      }
      while ( v12 < numControlPoints );
    }
  }
  else
  {
    _R8 = _R10 + 2;
    while ( 1 )
    {
      __asm { vcomiss xmm6, dword ptr [r8-20h] }
      if ( v14 )
        break;
      __asm { vcomiss xmm6, dword ptr [r8-10h] }
      if ( v14 )
      {
        ++v10;
        break;
      }
      __asm { vcomiss xmm6, dword ptr [r8] }
      if ( v14 )
      {
        v10 += 2;
        break;
      }
      __asm { vcomiss xmm6, dword ptr [r8+10h] }
      if ( v14 )
      {
        v10 += 3;
        break;
      }
      v10 += 4;
      v12 += 4i64;
      _R8 += 4;
      v14 = v12 <= (unsigned __int64)(numControlPoints - 3);
      if ( v12 >= numControlPoints - 3 )
        goto LABEL_20;
    }
  }
  if ( v10 == (_DWORD)numControlPoints )
  {
    _RCX = 2i64 * v10;
    __asm
    {
      vmovss  xmm0, dword ptr [r10+rcx*8-0Ch]
      vinsertps xmm0, xmm0, dword ptr [rax+rcx*8-0Ch], 10h
      vinsertps xmm0, xmm0, dword ptr [r8+rcx*8-0Ch], 20h ; ' '
    }
LABEL_32:
    __asm
    {
      vinsertps xmm0, xmm0, xmm2, 30h ; '0'
      vmovups xmmword ptr [rdi], xmm0
    }
    goto LABEL_33;
  }
  if ( v10 <= 0 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r10+4]
      vinsertps xmm0, xmm0, dword ptr [rax+4], 10h
      vinsertps xmm0, xmm0, dword ptr [r8+4], 20h ; ' '
    }
    goto LABEL_32;
  }
  _RDX = v10;
  _RCX = 2i64 * v10;
  _RDX *= 2i64;
  __asm
  {
    vmovss  xmm4, dword ptr [r10+rcx*8-0Ch]
    vinsertps xmm4, xmm4, dword ptr [rax+rcx*8-0Ch], 10h
    vmovss  xmm0, dword ptr [r10+rdx*8+4]
    vinsertps xmm0, xmm0, dword ptr [rax+rdx*8+4], 10h
    vinsertps xmm0, xmm0, dword ptr [r8+rdx*8+4], 20h ; ' '
    vinsertps xmm4, xmm4, dword ptr [r8+rcx*8-0Ch], 20h ; ' '
    vinsertps xmm0, xmm0, xmm2, 30h ; '0'
    vinsertps xmm4, xmm4, xmm2, 30h ; '0'
    vsubss  xmm2, xmm6, dword ptr [r10+rcx*8-10h]
    vsubps  xmm3, xmm0, xmm4
    vmovss  xmm0, dword ptr [r10+rdx*8]
    vsubss  xmm1, xmm0, dword ptr [r10+rcx*8-10h]
    vdivss  xmm2, xmm2, xmm1
    vshufps xmm2, xmm2, xmm2, 0
    vmulps  xmm0, xmm3, xmm2
    vaddps  xmm1, xmm0, xmm4
    vmovups xmmword ptr [rdi], xmm1
  }
LABEL_33:
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
Particle_GetCurveValueFloat4WithScale
==============
*/

float4 *__fastcall Particle_GetCurveValueFloat4WithScale(float4 *result, const ParticleCurveDef *pCurveList, double life, const float4 *scale)
{
  float4 *v22; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovaps [rsp+88h+var_38], xmm7
    vmovaps xmmword ptr [r11-48h], xmm8
  }
  _RDI = result;
  __asm { vmovaps xmm8, xmm2 }
  if ( !pCurveList )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlecurve.h", 194, ASSERT_TYPE_ASSERT, "(pCurveList)", (const char *)&queryFormat, "pCurveList") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlecurve.h", 179, ASSERT_TYPE_ASSERT, "(pCurveList)", (const char *)&queryFormat, "pCurveList") )
      __debugbreak();
  }
  __asm { vmovaps xmm1, xmm8; time }
  *(double *)&_XMM0 = Particle_GetCurveValue(pCurveList + 2, *(const float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm8; time
    vmovaps xmm7, xmm0
  }
  *(double *)&_XMM0 = Particle_GetCurveValue(pCurveList + 1, *(const float *)&_XMM1);
  __asm
  {
    vmovaps xmm1, xmm8; time
    vmovaps xmm6, xmm0
  }
  Particle_GetCurveValue(pCurveList, *(const float *)&_XMM1);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vinsertps xmm1, xmm1, xmm0, 0
    vinsertps xmm1, xmm1, xmm6, 10h
    vinsertps xmm1, xmm1, xmm7, 20h ; ' '
    vmovups xmmword ptr [rdi], xmm1
    vmulps  xmm0, xmm1, xmmword ptr [rsi]
    vmovups xmmword ptr [rdi], xmm0
  }
  v22 = _RDI;
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_28]
    vmovaps xmm7, [rsp+88h+var_38]
    vmovaps xmm8, [rsp+88h+var_48]
  }
  return v22;
}

/*
==============
Particle_GetCurveValueFloatRandomize
==============
*/
float Particle_GetCurveValueFloatRandomize(const ParticleCurveDef *rCurve1, const ParticleCurveDef *rCurve2, FxRandKey key, int seed, float life)
{
  __asm
  {
    vmovss  xmm1, [rsp+38h+life]; time
    vmovaps [rsp+38h+var_18], xmm7
  }
  *(double *)&_XMM0 = Particle_GetCurveValue(rCurve1, *(const float *)&_XMM1);
  __asm
  {
    vmovss  xmm1, [rsp+38h+life]; time
    vmulss  xmm7, xmm0, dword ptr [rbx+0Ch]
  }
  *(double *)&_XMM0 = Particle_GetCurveValue(rCurve2, *(const float *)&_XMM1);
  __asm
  {
    vmulss  xmm4, xmm0, dword ptr [rdi+0Ch]
    vmovss  xmm0, cs:__real@3f800000
    vsubss  xmm1, xmm0, dword ptr [rax+rcx*4]
    vmulss  xmm2, xmm4, dword ptr [rax+rcx*4]
    vmulss  xmm3, xmm1, xmm7
    vmovaps xmm7, [rsp+38h+var_18]
    vaddss  xmm0, xmm3, xmm2
  }
  return *(float *)&_XMM0;
}

