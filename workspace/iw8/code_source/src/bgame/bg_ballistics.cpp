/*
==============
BG_Ballistics_CalculateDisplacement
==============
*/

void __fastcall BG_Ballistics_CalculateDisplacement(const BallisticInfo *ballisticInfo, const int timeInFlightMs, const float scalar, const vec3_t *dir, vec3_t *outDisplacement)
{
  ?BG_Ballistics_CalculateDisplacement@@YAXPEBUBallisticInfo@@HMAEBTvec3_t@@AEAT2@@Z(ballisticInfo, timeInFlightMs, scalar, dir, outDisplacement);
}

/*
==============
BG_Ballistics_HorizontalTravelTimeToTarget
==============
*/

double __fastcall BG_Ballistics_HorizontalTravelTimeToTarget(const Weapon *weapon, const bool isAlternate, const vec3_t *shooterPos, const vec3_t *shooterDir, const vec3_t *targetPos)
{
  double result; 

  *(float *)&result = ?BG_Ballistics_HorizontalTravelTimeToTarget@@YAMAEBUWeapon@@_NAEBTvec3_t@@22@Z(weapon, isAlternate, shooterPos, shooterDir, targetPos);
  return result;
}

/*
==============
BG_Ballistics_TravelTimeForDistance
==============
*/

double __fastcall BG_Ballistics_TravelTimeForDistance(const Weapon *weapon, const bool isAlternate, const float distance)
{
  double result; 

  *(float *)&result = ?BG_Ballistics_TravelTimeForDistance@@YAMAEBUWeapon@@_NM@Z(weapon, isAlternate, distance);
  return result;
}

/*
==============
BG_Ballistics_CalculateDisplacement
==============
*/

void __fastcall BG_Ballistics_CalculateDisplacement(const BallisticInfo *ballisticInfo, const int timeInFlightMs, double scalar, const vec3_t *dir, vec3_t *outDisplacement)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RDI = ballisticInfo;
  __asm { vmovaps xmm6, xmm2 }
  if ( !ballisticInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.cpp", 334, ASSERT_TYPE_ASSERT, "(ballisticInfo)", (const char *)&queryFormat, "ballisticInfo") )
    __debugbreak();
  if ( timeInFlightMs < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.cpp", 335, ASSERT_TYPE_ASSERT, "(timeInFlightMs >= 0)", (const char *)&queryFormat, "timeInFlightMs >= 0") )
    __debugbreak();
  __asm
  {
    vmulss  xmm1, xmm6, dword ptr [rax+rcx*4]
    vmulss  xmm0, xmm1, dword ptr [rsi]
  }
  _RAX = outDisplacement;
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovss  dword ptr [rax], xmm0
    vmulss  xmm0, xmm1, dword ptr [rsi+4]
    vmovss  dword ptr [rax+4], xmm0
    vmulss  xmm4, xmm1, dword ptr [rsi+8]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebx
    vmulss  xmm3, xmm0, cs:__real@3a83126f
    vmovss  dword ptr [rax+8], xmm4
    vmovss  xmm1, dword ptr [rdi+10h]
    vmulss  xmm2, xmm1, cs:__real@43410000
    vmulss  xmm0, xmm2, xmm3
    vmulss  xmm3, xmm0, xmm3
    vsubss  xmm1, xmm4, xmm3
    vmovss  dword ptr [rax+8], xmm1
  }
}

/*
==============
BG_Ballistics_HorizontalTravelTimeToTarget
==============
*/
float BG_Ballistics_HorizontalTravelTimeToTarget(const Weapon *weapon, const bool isAlternate, const vec3_t *shooterPos, const vec3_t *shooterDir, const vec3_t *targetPos)
{
  bool v25; 
  bool v27; 
  double v58; 
  char v68; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [r9]
    vmovss  xmm2, dword ptr [r9+4]
    vmovss  xmm3, dword ptr [r9+8]
    vmulss  xmm1, xmm0, xmm0
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RBX = shooterDir;
  __asm
  {
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmovaps xmmword ptr [rax-48h], xmm8
    vmulss  xmm1, xmm3, xmm3
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovss  xmm10, cs:__real@3f800000
    vaddss  xmm3, xmm2, xmm1
    vsubss  xmm0, xmm3, xmm10
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3b03126f
  }
  v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.cpp", 303, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( shooterDir ))", (const char *)&queryFormat, "Vec3IsNormalized( shooterDir )");
  v27 = !v25;
  if ( v25 )
    __debugbreak();
  _RAX = targetPos;
  __asm
  {
    vmovss  xmm8, dword ptr [rbx+4]
    vmovss  xmm9, dword ptr [rbx]
    vxorps  xmm5, xmm5, xmm5
    vmovss  xmm0, dword ptr [rax]
    vmovss  xmm1, dword ptr [rax+4]
    vsubss  xmm6, xmm0, dword ptr [rdi]
    vsubss  xmm7, xmm1, dword ptr [rdi+4]
    vmulss  xmm1, xmm8, xmm7
    vmulss  xmm0, xmm9, xmm6
    vaddss  xmm3, xmm1, xmm0
    vmovss  xmm1, dword ptr [rax+8]
    vsubss  xmm2, xmm1, dword ptr [rdi+8]
    vmulss  xmm0, xmm2, dword ptr [rbx+8]
    vaddss  xmm3, xmm3, xmm0
    vcomiss xmm3, xmm5
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm4, xmm1, xmm1
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm10, xmm0
    vdivss  xmm1, xmm10, xmm0
    vmulss  xmm0, xmm6, xmm1
    vmulss  xmm1, xmm7, xmm1
    vmulss  xmm3, xmm0, xmm9
    vmulss  xmm2, xmm1, xmm8
    vaddss  xmm1, xmm3, xmm2
    vcvtss2sd xmm0, xmm1, xmm1
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
    vdivss  xmm6, xmm4, xmm1
    vcomiss xmm6, xmm5
  }
  if ( v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.cpp", 326, ASSERT_TYPE_ASSERT, "(distanceFromBulletOriginAtHorizontalCrossing > 0.0f)", (const char *)&queryFormat, "distanceFromBulletOriginAtHorizontalCrossing > 0.0f") )
    __debugbreak();
  __asm { vmovaps xmm2, xmm6; distance }
  v58 = BG_Ballistics_TravelTimeForDistance(weapon, isAlternate, *(const float *)&_XMM2);
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
  _R11 = &v68;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm7, [rsp+98h+var_38]
  }
  return *(float *)&v58;
}

/*
==============
BG_Ballistics_TravelTimeForDistance
==============
*/

float __fastcall BG_Ballistics_TravelTimeForDistance(const Weapon *weapon, const bool isAlternate, double distance)
{
  const BallisticInfo *BallisticInfo; 
  float *distances; 
  char v19; 
  BallisticInfoCalculated *calculated; 
  int v22; 
  __int64 numDistanceEntries; 
  __int64 v24; 
  __int64 v35; 
  unsigned __int64 v37; 
  _BYTE v53[3008]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm8
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm2, xmm6
    vmovaps xmm8, xmm2
  }
  BallisticInfo = BG_GetBallisticInfo(weapon, isAlternate);
  distances = BallisticInfo->calculated->distances;
  *(double *)&_XMM0 = BG_GetBallisticMuzzleVelocityScale(weapon, isAlternate);
  __asm
  {
    vucomiss xmm0, cs:__real@3f800000
    vmovaps xmm1, xmm0
    vshufps xmm1, xmm1, xmm1, 0
    vinsertf128 ymm1, ymm1, xmm1, 1
    vmovaps xmm2, xmm0
  }
  if ( !v19 )
  {
    calculated = BallisticInfo->calculated;
    _RDX = 0i64;
    v22 = 0;
    numDistanceEntries = calculated->numDistanceEntries;
    if ( (int)numDistanceEntries > 0 && (unsigned int)numDistanceEntries >= 0x10 )
    {
      v24 = (int)numDistanceEntries - 1;
      if ( (float *)v53 > &calculated->distances[v24] || (float *)&v53[4 * v24] < calculated->distances )
      {
        do
        {
          __asm
          {
            vmulps  ymm0, ymm1, ymmword ptr [r9+rdx*4]
            vmovups [rsp+rdx*4+0C48h+var_C18], ymm0
            vmulps  ymm0, ymm1, ymmword ptr [r9+rdx*4+20h]
            vmovups [rsp+rdx*4+0C48h+var_BF8], ymm0
          }
          _RDX += 16i64;
          v22 += 16;
        }
        while ( _RDX < (int)numDistanceEntries - (int)numDistanceEntries % 16 );
      }
    }
    _RDX = v22;
    if ( v22 < numDistanceEntries )
    {
      if ( numDistanceEntries - v22 >= 4 )
      {
        do
        {
          __asm
          {
            vmulss  xmm0, xmm2, dword ptr [r9+rdx*4]
            vmulss  xmm1, xmm2, dword ptr [r9+rdx*4+4]
          }
          _RCX = &v53[4 * _RDX + 4];
          _RDX += 4i64;
          __asm
          {
            vmovss  dword ptr [rcx-4], xmm0
            vmulss  xmm0, xmm2, dword ptr [rax+r10]
            vmovss  dword ptr [rcx+4], xmm0
            vmulss  xmm0, xmm2, dword ptr [rax+r11]
            vmovss  dword ptr [rcx+8], xmm0
            vmovss  dword ptr [rcx], xmm1
          }
        }
        while ( _RDX < numDistanceEntries - 3 );
      }
      for ( ; _RDX < numDistanceEntries; ++_RDX )
      {
        __asm
        {
          vmulss  xmm0, xmm2, dword ptr [rax+rdx*4]
          vmovss  dword ptr [rsp+rdx*4+0C48h+var_C18], xmm0
        }
      }
    }
    distances = (float *)v53;
  }
  _RBX = distances;
  v35 = BallisticInfo->calculated->numDistanceEntries;
  if ( (int)v35 > 0 )
  {
    do
    {
      _RCX = v35 >> 1;
      __asm { vcomiss xmm8, dword ptr [rbx+rcx*4] }
      if ( v35 & 1 | (v35 >> 1 == 0) )
      {
        v35 >>= 1;
      }
      else
      {
        _RBX += _RCX + 1;
        v35 += -1 - _RCX;
      }
    }
    while ( v35 > 0 );
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.cpp", 274, ASSERT_TYPE_ASSERT, "(closestDistance)", (const char *)&queryFormat, "closestDistance") )
    __debugbreak();
  v37 = (int)(_RBX - distances);
  if ( v37 < BallisticInfo->calculated->numDistanceEntries )
  {
    if ( v37 )
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rbx-4]
        vmovss  xmm0, dword ptr [rbx]
        vmovaps [rsp+0C48h+var_38], xmm7
        vsubss  xmm7, xmm0, xmm6
        vcvtss2sd xmm1, xmm7, xmm7
        vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
        vsubss  xmm0, xmm8, xmm6
        vdivss  xmm1, xmm0, xmm7
        vmulss  xmm2, xmm1, cs:__real@3c03126f
        vmovaps xmm7, [rsp+0C48h+var_38]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
      }
      if ( (__int64)(8 * v37 - 8) < 0 )
        __asm { vaddss  xmm0, xmm0, cs:__real@5f800000 }
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@3a83126f
        vaddss  xmm0, xmm2, xmm0
      }
    }
    else
    {
      __asm { vmovaps xmm0, xmm6 }
    }
  }
  else
  {
    __asm { vmovss  xmm0, cs:__real@ff7fffff }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0C48h+var_28]
    vmovaps xmm8, [rsp+0C48h+var_48]
  }
  return *(float *)&_XMM0;
}

