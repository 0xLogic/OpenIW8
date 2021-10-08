/*
==============
Stream_CalculateDistanceSq_ApplyZoomFactor
==============
*/

float __fastcall Stream_CalculateDistanceSq_ApplyZoomFactor(const float4 *minBound, const float4 *maxBound, float distanceSq, const float4 *pt, const float4 *viewPos, const float4 *viewDir, float zoomFactor, float cosFovLimit, float viewDistanceScaleSq)
{
  return ?Stream_CalculateDistanceSq_ApplyZoomFactor@@YAMUfloat4@@0M000MMM@Z(minBound, maxBound, distanceSq, pt, viewPos, viewDir, zoomFactor, cosFovLimit, viewDistanceScaleSq);
}

/*
==============
Stream_CalculateDistanceSq_Sphere
==============
*/

float __fastcall Stream_CalculateDistanceSq_Sphere(const vec3_t *sphereCenter, float sphereRadius, const float4 *viewPos, const float4 *viewDir, float zoomFactor, float cosFovLimit, float viewDistanceScaleSq)
{
  return ?Stream_CalculateDistanceSq_Sphere@@YAMAEBTvec3_t@@MUfloat4@@1MMM@Z(sphereCenter, sphereRadius, viewPos, viewDir, zoomFactor, cosFovLimit, viewDistanceScaleSq);
}

/*
==============
Stream_CalculateDistanceSq_ApplyZoomFactor
==============
*/

float __fastcall Stream_CalculateDistanceSq_ApplyZoomFactor(const float4 *minBound, const float4 *maxBound, double distanceSq, const float4 *pt, const float4 *viewPos, const float4 *viewDir, float zoomFactor)
{
  char v15; 
  char v16; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-18h], xmm6
    vmovaps [rsp+98h+var_28], xmm7
  }
  _RDI = maxBound;
  _RBX = DCONST_DVARFLT_stream_minZoomFactorForViewDirectionRelativeCalculations;
  __asm { vmovaps xmm6, xmm2 }
  if ( !DCONST_DVARFLT_stream_minZoomFactorForViewDirectionRelativeCalculations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_minZoomFactorForViewDirectionRelativeCalculations") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm7, [rsp+98h+arg_30]
    vcomiss xmm7, dword ptr [rbx+28h]
  }
  if ( v15 | v16 )
  {
    __asm { vmulss  xmm0, xmm6, [rsp+98h+arg_40] }
  }
  else
  {
    __asm
    {
      vmovaps [rsp+98h+var_38], xmm8
      vxorps  xmm8, xmm8, xmm8
      vcomiss xmm6, xmm8
    }
    if ( v15 | v16 )
    {
      __asm { vmulss  xmm0, xmm6, [rsp+98h+arg_40] }
    }
    else
    {
      __asm
      {
        vmovups xmm1, xmmword ptr [rdi]
        vaddps  xmm1, xmm1, xmmword ptr [rsi]
        vmulps  xmm1, xmm1, cs:__xmm@3f0000003f0000003f0000003f000000
        vsubps  xmm2, xmm1, xmmword ptr [rcx]
        vmulps  xmm3, xmm2, xmmword ptr [rax]
        vhaddps xmm0, xmm3, xmm3
        vmovups xmm3, xmmword ptr [rdi]
        vhaddps xmm0, xmm0, xmm0
        vmulps  xmm1, xmm0, xmmword ptr [rax]
        vaddps  xmm2, xmm1, xmmword ptr [rcx]
        vminps  xmm3, xmm3, xmm2
        vmaxps  xmm5, xmm3, xmmword ptr [rsi]
        vsubps  xmm2, xmm5, xmmword ptr [rcx]
        vmulps  xmm0, xmm2, xmmword ptr [rax]
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm5, xmm1, xmm1
        vcomiss xmm5, xmm8
        vmovaps [rsp+98h+var_48], xmm9
        vmovss  xmm9, cs:__real@3f800000
        vsubss  xmm3, xmm9, [rsp+98h+arg_38]
      }
      if ( !(v15 | v16) )
      {
        __asm
        {
          vmulps  xmm0, xmm2, xmm2
          vhaddps xmm1, xmm0, xmm0
          vhaddps xmm0, xmm1, xmm1
          vsqrtps xmm4, xmm0
          vmulss  xmm0, xmm3, xmm3
          vmulss  xmm1, xmm0, xmm6
          vminss  xmm2, xmm1, xmm9
          vmulss  xmm3, xmm2, [rsp+98h+arg_38]
          vmulss  xmm0, xmm3, xmm4
          vcomiss xmm5, xmm0
        }
        if ( !(v15 | v16) )
        {
          __asm
          {
            vsubss  xmm1, xmm5, xmm0
            vsubss  xmm0, xmm4, xmm0
            vdivss  xmm1, xmm1, xmm0
            vmulss  xmm2, xmm1, xmm1
            vmulss  xmm3, xmm2, xmm7
            vsubss  xmm0, xmm9, xmm2
            vaddss  xmm1, xmm3, xmm0
            vmulss  xmm2, xmm1, xmm1
            vdivss  xmm6, xmm6, xmm2
          }
        }
      }
      __asm
      {
        vmulss  xmm0, xmm6, [rsp+98h+arg_40]
        vmovaps xmm9, [rsp+98h+var_48]
      }
    }
    __asm { vmovaps xmm8, [rsp+98h+var_38] }
  }
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_18]
    vmovaps xmm7, [rsp+98h+var_28]
  }
  return *(float *)&_XMM0;
}

/*
==============
Stream_CalculateDistanceSq_Sphere
==============
*/

float __fastcall Stream_CalculateDistanceSq_Sphere(const vec3_t *sphereCenter, double sphereRadius, const float4 *viewPos, const float4 *viewDir, float zoomFactor)
{
  __int128 v31; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm7, cs:__real@3f800000
    vmovaps xmm6, xmm1
  }
  HIDWORD(v31) = 0;
  __asm
  {
    vmovups xmm2, xmmword ptr [rsp]
    vmovss  xmm2, xmm2, xmm0
    vinsertps xmm2, xmm2, dword ptr [rcx+4], 10h
    vinsertps xmm2, xmm2, dword ptr [rcx+8], 20h ; ' '
    vsubps  xmm5, xmm2, xmmword ptr [r8]
    vmulps  xmm0, xmm5, xmm5
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm3, xmm0
    vsubss  xmm2, xmm3, xmm6
    vmovss  xmm6, [rsp+48h+arg_20]
    vcomiss xmm6, xmm7
    vdivss  xmm0, xmm2, xmm3
    vshufps xmm0, xmm0, xmm0, 0
    vmulps  xmm0, xmm0, xmm5
    vaddps  xmm3, xmm0, xmmword ptr [r8]
    vmulss  xmm4, xmm2, xmm2
    vmulss  xmm0, xmm4, [rsp+48h+arg_30]
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
  return *(float *)&_XMM0;
}

