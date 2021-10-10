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
void BG_Ballistics_CalculateDisplacement(const BallisticInfo *ballisticInfo, const int timeInFlightMs, const float scalar, const vec3_t *dir, vec3_t *outDisplacement)
{
  BallisticInfoCalculated *calculated; 
  int numDistanceEntries; 
  int v10; 
  float v11; 
  float v12; 

  if ( !ballisticInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.cpp", 334, ASSERT_TYPE_ASSERT, "(ballisticInfo)", (const char *)&queryFormat, "ballisticInfo") )
    __debugbreak();
  if ( timeInFlightMs < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.cpp", 335, ASSERT_TYPE_ASSERT, "(timeInFlightMs >= 0)", (const char *)&queryFormat, "timeInFlightMs >= 0") )
    __debugbreak();
  calculated = ballisticInfo->calculated;
  numDistanceEntries = calculated->numDistanceEntries;
  v10 = numDistanceEntries - 1;
  if ( timeInFlightMs >> 3 < numDistanceEntries )
    v10 = timeInFlightMs >> 3;
  v11 = scalar * calculated->distances[v10];
  outDisplacement->v[0] = v11 * dir->v[0];
  outDisplacement->v[1] = v11 * dir->v[1];
  v12 = v11 * dir->v[2];
  outDisplacement->v[2] = v12;
  outDisplacement->v[2] = v12 - (float)((float)((float)(ballisticInfo->gravityFactor * 193.0) * (float)((float)timeInFlightMs * 0.001)) * (float)((float)timeInFlightMs * 0.001));
}

/*
==============
BG_Ballistics_HorizontalTravelTimeToTarget
==============
*/
float BG_Ballistics_HorizontalTravelTimeToTarget(const Weapon *weapon, const bool isAlternate, const vec3_t *shooterPos, const vec3_t *shooterDir, const vec3_t *targetPos)
{
  float v9; 
  float v10; 
  float v11; 
  __int128 v12; 
  float v16; 
  float v17; 
  double v18; 

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(shooterDir->v[0] * shooterDir->v[0]) + (float)(shooterDir->v[1] * shooterDir->v[1])) + (float)(shooterDir->v[2] * shooterDir->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.cpp", 303, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( shooterDir ))", (const char *)&queryFormat, "Vec3IsNormalized( shooterDir )") )
    __debugbreak();
  v9 = shooterDir->v[1];
  v10 = targetPos->v[0] - shooterPos->v[0];
  v12 = LODWORD(targetPos->v[1]);
  *(float *)&v12 = targetPos->v[1] - shooterPos->v[1];
  v11 = *(float *)&v12;
  if ( (float)((float)((float)(v9 * *(float *)&v12) + (float)(shooterDir->v[0] * v10)) + (float)((float)(targetPos->v[2] - shooterPos->v[2]) * shooterDir->v[2])) < 0.0 )
    return FLOAT_3_4028235e38;
  *(float *)&v12 = fsqrt((float)(*(float *)&v12 * *(float *)&v12) + (float)(v10 * v10));
  _XMM4 = v12;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm10, xmm0
  }
  v16 = (float)((float)(v10 * (float)(1.0 / *(float *)&_XMM0)) * shooterDir->v[0]) + (float)((float)(v11 * (float)(1.0 / *(float *)&_XMM0)) * v9);
  if ( v16 < 0.000001 )
    return FLOAT_3_4028235e38;
  v17 = *(float *)&v12 / v16;
  if ( (float)(*(float *)&_XMM4 / v16) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.cpp", 326, ASSERT_TYPE_ASSERT, "(distanceFromBulletOriginAtHorizontalCrossing > 0.0f)", (const char *)&queryFormat, "distanceFromBulletOriginAtHorizontalCrossing > 0.0f") )
    __debugbreak();
  v18 = BG_Ballistics_TravelTimeForDistance(weapon, isAlternate, v17);
  return *(float *)&v18;
}

/*
==============
BG_Ballistics_TravelTimeForDistance
==============
*/
float BG_Ballistics_TravelTimeForDistance(const Weapon *weapon, const bool isAlternate, const float distance)
{
  __m128 v3; 
  const BallisticInfo *BallisticInfo; 
  float *distances; 
  float v11; 
  BallisticInfoCalculated *calculated; 
  __int64 v13; 
  int v14; 
  __int64 numDistanceEntries; 
  float *v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned __int64 v19; 
  float v20; 
  float v21; 
  float *v22; 
  unsigned __int64 v23; 
  float *v24; 
  __int64 v25; 
  __int64 v26; 
  unsigned __int64 v27; 
  float v29; 
  float v30; 
  __int64 v31; 
  float v32; 
  float v33; 
  _BYTE v34[3008]; 

  if ( distance < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.cpp", 251, ASSERT_TYPE_ASSERT, "(distance >= 0.0f)", (const char *)&queryFormat, "distance >= 0.0f") )
    __debugbreak();
  BallisticInfo = BG_GetBallisticInfo(weapon, isAlternate);
  distances = BallisticInfo->calculated->distances;
  *(double *)v3.m128_u64 = BG_GetBallisticMuzzleVelocityScale(weapon, isAlternate);
  _YMM1 = (__m256i)*(unsigned __int128 *)&_mm_shuffle_ps(v3, v3, 0);
  __asm { vinsertf128 ymm1, ymm1, xmm1, 1 }
  v11 = v3.m128_f32[0];
  if ( v3.m128_f32[0] != 1.0 )
  {
    calculated = BallisticInfo->calculated;
    v13 = 0i64;
    v14 = 0;
    numDistanceEntries = calculated->numDistanceEntries;
    if ( (int)numDistanceEntries > 0 && (unsigned int)numDistanceEntries >= 0x10 )
    {
      v16 = calculated->distances;
      v17 = (int)numDistanceEntries - 1;
      if ( (float *)v34 > &calculated->distances[v17] || &v34[4 * v17] < (_BYTE *)v16 )
      {
        do
        {
          *(__m256 *)&v34[4 * v13] = _mm256_mul_ps(_YMM1, *(__m256 *)&v16[v13]);
          *(__m256 *)&v34[4 * v13 + 32] = _mm256_mul_ps(_YMM1, *(__m256 *)&v16[v13 + 8]);
          v13 += 16i64;
          v14 += 16;
        }
        while ( v13 < (int)numDistanceEntries - (int)numDistanceEntries % 16 );
      }
    }
    v18 = v14;
    if ( v14 < numDistanceEntries )
    {
      if ( numDistanceEntries - v14 >= 4 )
      {
        v19 = (unsigned __int64)calculated->distances;
        do
        {
          v20 = v11 * *(float *)(v19 + 4 * v18);
          v21 = v11 * *(float *)(v19 + 4 * v18 + 4);
          v22 = (float *)&v34[4 * v18 + 4];
          v18 += 4i64;
          *(v22 - 1) = v20;
          v22[1] = v11 * *(float *)((char *)v22 + v19 + 8i64 - (_QWORD)&v34[4]);
          v22[2] = v11 * *(float *)((char *)v22 + v19 + 12i64 - (_QWORD)&v34[4]);
          *v22 = v21;
        }
        while ( v18 < numDistanceEntries - 3 );
      }
      if ( v18 < numDistanceEntries )
      {
        v23 = (unsigned __int64)calculated->distances;
        do
        {
          *(float *)&v34[4 * v18] = v11 * *(float *)(v23 + 4 * v18);
          ++v18;
        }
        while ( v18 < numDistanceEntries );
      }
    }
    distances = (float *)v34;
  }
  v24 = distances;
  v25 = BallisticInfo->calculated->numDistanceEntries;
  if ( (int)v25 > 0 )
  {
    do
    {
      v26 = v25 >> 1;
      if ( distance <= v24[v25 >> 1] )
      {
        v25 >>= 1;
      }
      else
      {
        v24 += v26 + 1;
        v25 += -1 - v26;
      }
    }
    while ( v25 > 0 );
  }
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.cpp", 274, ASSERT_TYPE_ASSERT, "(closestDistance)", (const char *)&queryFormat, "closestDistance") )
    __debugbreak();
  v27 = (int)(v24 - distances);
  if ( v27 >= BallisticInfo->calculated->numDistanceEntries )
    return FLOAT_N3_4028235e38;
  if ( !v27 )
    return 0.0;
  v29 = *(v24 - 1);
  v30 = *v24 - v29;
  if ( v30 <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_ballistics.cpp", 293, ASSERT_TYPE_ASSERT, "(deltaTravel > 1.0E-6)", (const char *)&queryFormat, "deltaTravel > ZERO_EPSILON") )
    __debugbreak();
  v31 = 8 * v27 - 8;
  v32 = (float)v31;
  if ( v31 < 0 )
  {
    v33 = (float)v31;
    v32 = v33 + 1.8446744e19;
  }
  return (float)((float)((float)(distance - v29) / v30) * 0.0080000004) + (float)(v32 * 0.001);
}

