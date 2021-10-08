/*
==============
FX_CullSphere
==============
*/

bool __fastcall FX_CullSphere(const FxCamera *camera, unsigned int frustumPlaneCount, const float4 *posWorld, float radius, bool ignoreIsValidCamera)
{
  return ?FX_CullSphere@@YA_NPEBUFxCamera@@IAEBUfloat4@@M_N@Z(camera, frustumPlaneCount, posWorld, radius, ignoreIsValidCamera);
}

/*
==============
FX_CullSphere
==============
*/

bool __fastcall FX_CullSphere(const FxCamera *camera, unsigned int frustumPlaneCount, const float4 *posWorld, double radius, bool ignoreIsValidCamera)
{
  unsigned int v13; 
  bool v18; 
  bool result; 
  double v47; 
  double v48; 
  double v49; 

  __asm
  {
    vmovaps [rsp+0C8h+var_38], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !ignoreIsValidCamera && !camera->isValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.h", 24, ASSERT_TYPE_ASSERT, "(ignoreIsValidCamera || camera->isValid)", (const char *)&queryFormat, "ignoreIsValidCamera || camera->isValid") )
    __debugbreak();
  if ( frustumPlaneCount != camera->frustumPlaneCount && frustumPlaneCount != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_update_util.h", 25, ASSERT_TYPE_ASSERT, "(frustumPlaneCount == camera->frustumPlaneCount || frustumPlaneCount == 5)", "%s\n\t%i, %i", "frustumPlaneCount == camera->frustumPlaneCount || frustumPlaneCount == 5", frustumPlaneCount, camera->frustumPlaneCount) )
    __debugbreak();
  __asm { vxorps  xmm6, xmm6, cs:__xmm@80000000800000008000000080000000 }
  v13 = 0;
  __asm
  {
    vmovaps [rsp+0C8h+var_48], xmm7
    vmovaps [rsp+0C8h+var_58], xmm8
    vmovaps [rsp+0C8h+var_68], xmm9
    vshufps xmm6, xmm6, xmm6, 0
  }
  if ( frustumPlaneCount )
  {
    __asm
    {
      vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm8, cs:__real@3f800000
      vmovss  xmm9, cs:__real@3b83126f
    }
    v18 = __CFADD__(camera, 16i64);
    _RBX = camera->frustum;
    while ( 1 )
    {
      __asm
      {
        vmovups xmm3, xmmword ptr [rbx]
        vmulss  xmm1, xmm3, xmm3
        vshufps xmm4, xmm3, xmm3, 55h ; 'U'
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vshufps xmm5, xmm3, xmm3, 0AAh ; 'ª'
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm2, xmm1
        vsubss  xmm0, xmm2, xmm8
        vandps  xmm0, xmm0, xmm7
        vcomiss xmm0, xmm9
      }
      if ( !v18 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm5, xmm5
          vmovsd  [rsp+0C8h+var_88], xmm0
          vcvtss2sd xmm1, xmm4, xmm4
          vmovsd  [rsp+0C8h+var_90], xmm1
          vcvtss2sd xmm2, xmm3, xmm3
          vmovsd  [rsp+0C8h+var_98], xmm2
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particleutil.h", 127, ASSERT_TYPE_ASSERT, "(Particle_Vec3IsNormalized( normalVec ))", "%s\n\t%g %g %g", "Particle_Vec3IsNormalized( normalVec )", v47, v48, v49) )
          __debugbreak();
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]
        vmulps  xmm1, xmm0, xmmword ptr [rbp+0]
        vinsertps xmm2, xmm1, xmm1, 8
        vshufps xmm3, xmm0, xmm0, 0FFh
        vhaddps xmm0, xmm2, xmm2
        vhaddps xmm1, xmm0, xmm0
        vsubps  xmm2, xmm1, xmm3
        vcmpltps xmm0, xmm6, xmm2
        vmovmskps eax, xmm0
      }
      if ( (_EAX & 0xF) == 0 )
        break;
      ++v13;
      ++_RBX;
      v18 = v13 < frustumPlaneCount;
      if ( v13 >= frustumPlaneCount )
        goto LABEL_16;
    }
    result = 1;
  }
  else
  {
LABEL_16:
    result = 0;
  }
  __asm
  {
    vmovaps xmm9, [rsp+0C8h+var_68]
    vmovaps xmm8, [rsp+0C8h+var_58]
    vmovaps xmm7, [rsp+0C8h+var_48]
    vmovaps xmm6, [rsp+0C8h+var_38]
  }
  return result;
}

