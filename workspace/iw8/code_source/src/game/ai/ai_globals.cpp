/*
==============
GetMaxSpeedForPathLength
==============
*/

double __fastcall GetMaxSpeedForPathLength(float pathLength)
{
  double result; 

  *(float *)&result = ?GetMaxSpeedForPathLength@@YAMM@Z(pathLength);
  return result;
}

/*
==============
GetApproxGunParams
==============
*/

void __fastcall GetApproxGunParams(const weapClass_t weaponClass, ApproxGunParams *paramsOut)
{
  ?GetApproxGunParams@@YAXW4weapClass_t@@AEAUApproxGunParams@@@Z(weaponClass, paramsOut);
}

/*
==============
HasAnimSpeedThresholdEntryForArchetype
==============
*/

bool __fastcall HasAnimSpeedThresholdEntryForArchetype(scr_string_t archetypeName, scr_string_t thresholdName)
{
  return ?HasAnimSpeedThresholdEntryForArchetype@@YA_NW4scr_string_t@@0@Z(archetypeName, thresholdName);
}

/*
==============
IsNode3DType
==============
*/

bool __fastcall IsNode3DType(unsigned __int16 nodeType)
{
  return ?IsNode3DType@@YA_NG@Z(nodeType);
}

/*
==============
HasAnimSpeedThresholdsForArchetype
==============
*/

bool __fastcall HasAnimSpeedThresholdsForArchetype(scr_string_t archetypeName)
{
  return ?HasAnimSpeedThresholdsForArchetype@@YA_NW4scr_string_t@@@Z(archetypeName);
}

/*
==============
GetApproxGunParamsForRiotshield
==============
*/

void __fastcall GetApproxGunParamsForRiotshield(ApproxGunParams *paramsOut)
{
  ?GetApproxGunParamsForRiotshield@@YAXAEAUApproxGunParams@@@Z(paramsOut);
}

/*
==============
GetMaxAnimSpeedThreshold
==============
*/

double __fastcall GetMaxAnimSpeedThreshold(scr_string_t archetypeName)
{
  double result; 

  *(float *)&result = ?GetMaxAnimSpeedThreshold@@YAMW4scr_string_t@@@Z(archetypeName);
  return result;
}

/*
==============
InitializeMaxSpeedForPathLengthTable
==============
*/

void InitializeMaxSpeedForPathLengthTable(void)
{
  ?InitializeMaxSpeedForPathLengthTable@@YAXXZ();
}

/*
==============
GetNextLowestSpeedThresholdName
==============
*/

scr_string_t __fastcall GetNextLowestSpeedThresholdName(scr_string_t archetypeName, float desiredSpeed)
{
  return ?GetNextLowestSpeedThresholdName@@YA?AW4scr_string_t@@W41@M@Z(archetypeName, desiredSpeed);
}

/*
==============
SetSpeedThresholdEntry
==============
*/

void __fastcall SetSpeedThresholdEntry(scr_string_t archetypeName, scr_string_t thresholdName, int thresholdValue)
{
  ?SetSpeedThresholdEntry@@YAXW4scr_string_t@@0H@Z(archetypeName, thresholdName, thresholdValue);
}

/*
==============
GetNodeExposedEyeOffset
==============
*/

void __fastcall GetNodeExposedEyeOffset(unsigned __int16 nodeType, ai_stance_e stance, vec3_t *outEyeOffset)
{
  ?GetNodeExposedEyeOffset@@YAXGW4ai_stance_e@@AEATvec3_t@@@Z(nodeType, stance, outEyeOffset);
}

/*
==============
GetAnimSpeedBetweenThresholdEntries
==============
*/

double __fastcall GetAnimSpeedBetweenThresholdEntries(scr_string_t archetypeName, scr_string_t firstThresholdName, scr_string_t secondThresholdName, float fractionValue)
{
  double result; 

  *(float *)&result = ?GetAnimSpeedBetweenThresholdEntries@@YAMW4scr_string_t@@00M@Z(archetypeName, firstThresholdName, secondThresholdName, fractionValue);
  return result;
}

/*
==============
GetCoverAngleLimits
==============
*/

const float *__fastcall GetCoverAngleLimits(unsigned __int16 nodeType, ai_stance_e coverStance, int *outLimitsCount)
{
  return ?GetCoverAngleLimits@@YAPEBMGW4ai_stance_e@@AEAH@Z(nodeType, coverStance, outLimitsCount);
}

/*
==============
GetCoverCrouchAngleLimits
==============
*/

const float *__fastcall GetCoverCrouchAngleLimits(scr_string_t nodeType, int *outLimitsCount)
{
  return ?GetCoverCrouchAngleLimits@@YAPEBMW4scr_string_t@@AEAH@Z(nodeType, outLimitsCount);
}

/*
==============
GetApproxGunParamsForMountedLMG
==============
*/

void __fastcall GetApproxGunParamsForMountedLMG(ApproxGunParams *paramsOut)
{
  ?GetApproxGunParamsForMountedLMG@@YAXAEAUApproxGunParams@@@Z(paramsOut);
}

/*
==============
InitializeSpeedThresholds
==============
*/

void InitializeSpeedThresholds(void)
{
  ?InitializeSpeedThresholds@@YAXXZ();
}

/*
==============
GetNearestSpeedThresholdString
==============
*/

scr_string_t __fastcall GetNearestSpeedThresholdString(scr_string_t archetypeName, float desiredSpeed)
{
  return ?GetNearestSpeedThresholdString@@YA?AW4scr_string_t@@W41@M@Z(archetypeName, desiredSpeed);
}

/*
==============
SpeedThresholdSave
==============
*/

void __fastcall SpeedThresholdSave(MemoryFile *memFile)
{
  ?SpeedThresholdSave@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
GetAnimSpeedThresholdValue
==============
*/

int __fastcall GetAnimSpeedThresholdValue(scr_string_t archetypeName, scr_string_t thresholdName)
{
  return ?GetAnimSpeedThresholdValue@@YAHW4scr_string_t@@0@Z(archetypeName, thresholdName);
}

/*
==============
SpeedThresholdLoad
==============
*/

void __fastcall SpeedThresholdLoad(SaveGame *save)
{
  ?SpeedThresholdLoad@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
ShutdownSpeedThresholds
==============
*/

void ShutdownSpeedThresholds(void)
{
  ?ShutdownSpeedThresholds@@YAXXZ();
}

/*
==============
Get3DCoverAngleLimits
==============
*/

const float *__fastcall Get3DCoverAngleLimits(unsigned __int16 nodeType, int *outLimitsCount)
{
  return ?Get3DCoverAngleLimits@@YAPEBMGAEAH@Z(nodeType, outLimitsCount);
}

/*
==============
CompareAnimSpeedThresholdValues
==============
*/
_BOOL8 CompareAnimSpeedThresholdValues(const void *const speedThresholdPtr1, const void *const speedThresholdPtr2)
{
  int v2; 

  v2 = *((_DWORD *)speedThresholdPtr1 + 1);
  return v2 > *((_DWORD *)speedThresholdPtr2 + 1) || !v2;
}

/*
==============
Get3DCoverAngleLimits
==============
*/
const float *Get3DCoverAngleLimits(unsigned __int16 nodeType, int *outLimitsCount)
{
  __int64 v4; 

  if ( !IsNode3DType(nodeType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_globals.cpp", 112, ASSERT_TYPE_ASSERT, "(IsNode3DType( nodeType ))", "%s\n\tTrying to get 3D cover angle limits for a non-3D node", "IsNode3DType( nodeType )") )
    __debugbreak();
  v4 = 0i64;
  *outLimitsCount = 4;
  if ( nodeType != 21 )
    v4 = 1i64;
  return s_cover3DAngleLimitsTable[v4];
}

/*
==============
GetAnimSpeedBetweenThresholdEntries
==============
*/
float GetAnimSpeedBetweenThresholdEntries(scr_string_t archetypeName, scr_string_t firstThresholdName, scr_string_t secondThresholdName, float fractionValue)
{
  scr_string_t *v6; 
  int v7; 
  int v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  const char *v23; 

  v6 = &s_animSpeedThresholdTables;
  v7 = 0;
  while ( *v6 != archetypeName )
  {
    ++v7;
    v6 += 17;
    if ( (__int64)v6 >= (__int64)s_MaxSpeedForPathTable )
      return FLOAT_N1_0;
  }
  v9 = -1;
  v10 = 68i64 * v7;
  v11 = -1;
  v12 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 4);
  if ( v12 == firstThresholdName )
  {
    v9 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 8);
  }
  else if ( v12 == secondThresholdName )
  {
    v11 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 8);
  }
  v13 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 12);
  if ( v13 == firstThresholdName )
  {
    v9 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 16);
  }
  else if ( v13 == secondThresholdName )
  {
    v11 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 16);
  }
  v14 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 20);
  if ( v14 == firstThresholdName )
  {
    v9 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 24);
  }
  else if ( v14 == secondThresholdName )
  {
    v11 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 24);
  }
  v15 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 28);
  if ( v15 == firstThresholdName )
  {
    v9 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 32);
  }
  else if ( v15 == secondThresholdName )
  {
    v11 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 32);
  }
  v16 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 36);
  if ( v16 == firstThresholdName )
  {
    v9 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 40);
  }
  else if ( v16 == secondThresholdName )
  {
    v11 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 40);
  }
  v17 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 44);
  if ( v17 == firstThresholdName )
  {
    v9 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 48);
  }
  else if ( v17 == secondThresholdName )
  {
    v11 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 48);
  }
  v18 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 52);
  if ( v18 == firstThresholdName )
  {
    v9 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 56);
  }
  else if ( v18 == secondThresholdName )
  {
    v11 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 56);
  }
  v19 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 60);
  if ( v19 == firstThresholdName )
  {
    v9 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 64);
  }
  else if ( v19 == secondThresholdName )
  {
    v11 = *(scr_string_t *)((char *)&s_animSpeedThresholdTables + v10 + 64);
  }
  if ( v9 <= 0 )
  {
    v20 = SL_ConvertToString(firstThresholdName);
    v21 = SL_ConvertToString(archetypeName);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_globals.cpp", 585, ASSERT_TYPE_ASSERT, "(firstValue > 0)", "%s\n\t%s archetype does not have a %s speed threshold table entry", "firstValue > 0", v21, v20) )
      __debugbreak();
  }
  if ( v11 <= 0 )
  {
    v22 = SL_ConvertToString(secondThresholdName);
    v23 = SL_ConvertToString(archetypeName);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_globals.cpp", 586, ASSERT_TYPE_ASSERT, "(secondValue > 0)", "%s\n\t%s archetype does not have a %s speed threshold table entry", "secondValue > 0", v23, v22) )
      __debugbreak();
  }
  return (float)((float)(v11 - v9) * fractionValue) + (float)v9;
}

/*
==============
GetAnimSpeedThresholdValue
==============
*/
__int64 GetAnimSpeedThresholdValue(scr_string_t archetypeName, scr_string_t thresholdName)
{
  int v2; 
  int v3; 
  scr_string_t *v4; 
  __int64 v6; 
  scr_string_t *v7; 
  _DWORD *i; 

  v2 = 0;
  v3 = 0;
  v4 = &s_animSpeedThresholdTables;
  while ( *v4 != archetypeName )
  {
    ++v3;
    v4 += 17;
    if ( (__int64)v4 >= (__int64)s_MaxSpeedForPathTable )
      return 0xFFFFFFFFi64;
  }
  v6 = 0i64;
  v7 = &s_animSpeedThresholdTables + 17 * v3;
  for ( i = v7 + 1; *i != thresholdName; i += 2 )
  {
    ++v2;
    if ( ++v6 >= 8 )
      return 0xFFFFFFFFi64;
  }
  return (unsigned int)v7[2 * v2 + 2];
}

/*
==============
GetApproxGunParams
==============
*/
void GetApproxGunParams(const weapClass_t weaponClass, ApproxGunParams *paramsOut)
{
  __int64 v2; 

  v2 = weaponClass;
  if ( weaponClass >= WEAPCLASS_NUM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_globals.cpp", 641, ASSERT_TYPE_ASSERT, "(weaponClass < WEAPCLASS_NUM)", (const char *)&queryFormat, "weaponClass < WEAPCLASS_NUM") )
    __debugbreak();
  *paramsOut = g_ApproxGunParamTable[v2];
}

/*
==============
GetApproxGunParamsForMountedLMG
==============
*/
void GetApproxGunParamsForMountedLMG(ApproxGunParams *paramsOut)
{
  *(_QWORD *)paramsOut->m_offset.v = 1107296256i64;
  paramsOut->m_offset.v[2] = -5.0;
  paramsOut->m_length = 10.0;
}

/*
==============
GetApproxGunParamsForRiotshield
==============
*/
void GetApproxGunParamsForRiotshield(ApproxGunParams *paramsOut)
{
  paramsOut->m_offset.v[0] = 0.0;
  paramsOut->m_offset.v[1] = -11.0;
  paramsOut->m_offset.v[2] = -5.0;
  paramsOut->m_length = 24.0;
}

/*
==============
GetCoverAngleLimits
==============
*/
const float *GetCoverAngleLimits(unsigned __int16 nodeType, ai_stance_e coverStance, int *outLimitsCount)
{
  __int64 v6; 

  if ( IsNode3DType(nodeType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_globals.cpp", 79, ASSERT_TYPE_ASSERT, "(!IsNode3DType( nodeType ))", "%s\n\tTrying to get non-3D cover angle limits for a 3D node", "!IsNode3DType( nodeType )") )
    __debugbreak();
  *outLimitsCount = 6;
  if ( nodeType == 6 )
  {
    v6 = coverStance != STANCE_STAND;
  }
  else
  {
    v6 = 4i64;
    if ( nodeType == 7 )
      v6 = (coverStance != STANCE_STAND) + 2i64;
  }
  return s_coverAngleLimitsTable[v6];
}

/*
==============
GetCoverCrouchAngleLimits
==============
*/
const float *GetCoverCrouchAngleLimits(scr_string_t nodeType, int *outLimitsCount)
{
  __int64 v2; 

  *outLimitsCount = 4;
  if ( nodeType == scr_const.cover_right_crouch || nodeType == scr_const.cover_right_crouch_cc )
  {
    v2 = 0i64;
  }
  else
  {
    if ( nodeType == scr_const.cover_left_crouch )
      return s_coverCrouchAngleLimitsTable[1];
    v2 = 2i64;
    if ( nodeType == scr_const.cover_left_crouch_cc )
      return s_coverCrouchAngleLimitsTable[1];
  }
  return s_coverCrouchAngleLimitsTable[v2];
}

/*
==============
GetMaxAnimSpeedThreshold
==============
*/
float GetMaxAnimSpeedThreshold(scr_string_t archetypeName)
{
  scr_string_t *v1; 
  __int64 v2; 
  _DWORD *v3; 
  int v4; 
  const char *v5; 

  v1 = &s_animSpeedThresholdTables;
  while ( *v1 != archetypeName )
  {
LABEL_6:
    v1 += 17;
    if ( (__int64)v1 >= (__int64)s_MaxSpeedForPathTable )
    {
      v5 = SL_ConvertToString(archetypeName);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_globals.cpp", 610, ASSERT_TYPE_ASSERT, "(false)", "%s\n\t%s archetype has no valid max anim speed threshold", "false", v5) )
        __debugbreak();
      return FLOAT_250_0;
    }
  }
  v2 = 7i64;
  v3 = v1 + 15;
  v4 = 7;
  while ( !*v3 )
  {
    --v4;
    v3 -= 2;
    if ( --v2 < 0 )
      goto LABEL_6;
  }
  return (float)v1[2 * v4 + 2];
}

/*
==============
GetMaxSpeedForPathLength
==============
*/
float GetMaxSpeedForPathLength(float pathLength)
{
  unsigned int v2; 
  float *p_arrivalExitDist; 

  if ( !s_MaxSpeedForPathTableInitialized )
    return FLOAT_250_0;
  v2 = 4;
  p_arrivalExitDist = &s_MaxSpeedForPathTable[4].arrivalExitDist;
  do
  {
    if ( pathLength < *p_arrivalExitDist )
      break;
    ++v2;
    p_arrivalExitDist += 4;
  }
  while ( v2 < 6 );
  if ( v2 )
    return s_MaxSpeedForPathTable[v2 - 1].maxSpeed;
  else
    return FLOAT_30_0;
}

/*
==============
GetNearestSpeedThresholdString
==============
*/
__int64 GetNearestSpeedThresholdString(scr_string_t archetypeName, float desiredSpeed)
{
  int v2; 
  int v3; 
  scr_string_t *v4; 
  __int64 v6; 
  scr_string_t *v7; 
  _DWORD *v8; 
  scr_string_t v9; 

  v2 = 0;
  v3 = 0;
  v4 = &s_animSpeedThresholdTables;
  while ( *v4 != archetypeName )
  {
    ++v3;
    v4 += 17;
    if ( (__int64)v4 >= (__int64)s_MaxSpeedForPathTable )
      return 0i64;
  }
  v6 = 0i64;
  v7 = &s_animSpeedThresholdTables + 17 * v3;
  v8 = v7 + 1;
  do
  {
    if ( (float)(int)v8[1] > desiredSpeed )
      break;
    if ( !*v8 )
      break;
    ++v2;
    ++v6;
    v8 += 2;
  }
  while ( v6 < 8 );
  v9 = v7[2 * v2 + 1];
  if ( !v2 )
    return (unsigned int)v9;
  if ( !v9 )
    return (unsigned int)v7[2 * v2 - 1];
  if ( v2 == 8 )
    return (unsigned int)v7[2 * v2 - 1];
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, ecx }
  if ( (float)(desiredSpeed - (float)v7[2 * v2]) <= *(double *)&_XMM0 * 0.5 )
    return (unsigned int)v7[2 * v2 - 1];
  else
    return (unsigned int)v9;
}

/*
==============
GetNextLowestSpeedThresholdName
==============
*/
__int64 GetNextLowestSpeedThresholdName(scr_string_t archetypeName, float desiredSpeed)
{
  int v2; 
  int v3; 
  scr_string_t *v4; 
  __int64 v6; 
  scr_string_t *v7; 
  _DWORD *v8; 

  v2 = 0;
  v3 = 0;
  v4 = &s_animSpeedThresholdTables;
  while ( *v4 != archetypeName )
  {
    ++v3;
    v4 += 17;
    if ( (__int64)v4 >= (__int64)s_MaxSpeedForPathTable )
      return 0i64;
  }
  v6 = 0i64;
  v7 = &s_animSpeedThresholdTables + 17 * v3;
  v8 = v7 + 1;
  do
  {
    if ( (float)(int)v8[1] > desiredSpeed )
      break;
    if ( !*v8 )
      break;
    ++v2;
    ++v6;
    v8 += 2;
  }
  while ( v6 < 8 );
  if ( v2 )
    return (unsigned int)v7[2 * v2 - 1];
  else
    return *((unsigned int *)v7 + 1);
}

/*
==============
GetNodeExposedEyeOffset
==============
*/
void GetNodeExposedEyeOffset(unsigned __int16 nodeType, ai_stance_e stance, vec3_t *outEyeOffset)
{
  *(_QWORD *)outEyeOffset->v = 0i64;
  outEyeOffset->v[2] = 0.0;
  switch ( nodeType )
  {
    case 2u:
    case 0xAu:
    case 0x12u:
    case 0x16u:
      outEyeOffset->v[0] = -3.7;
      outEyeOffset->v[1] = -22.0;
      outEyeOffset->v[2] = 63.0;
      break;
    case 3u:
    case 4u:
    case 0xBu:
      outEyeOffset->v[0] = 3.5;
      outEyeOffset->v[1] = -12.5;
      outEyeOffset->v[2] = 45.0;
      break;
    case 5u:
    case 0xCu:
      outEyeOffset->v[1] = 30.0;
      outEyeOffset->v[2] = 13.0;
      break;
    case 6u:
      _XMM4 = LODWORD(FLOAT_36_0);
      _XMM0 = (unsigned int)stance;
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM0 = LODWORD(FLOAT_43_5);
      __asm { vblendvps xmm1, xmm0, xmm4, xmm2 }
      _XMM0 = (unsigned int)stance;
      outEyeOffset->v[0] = *(float *)&_XMM1;
      _XMM1 = LODWORD(FLOAT_11_0);
      __asm
      {
        vpcmpeqd xmm3, xmm0, xmm2
        vblendvps xmm0, xmm1, xmm2, xmm3
      }
      outEyeOffset->v[1] = *(float *)&_XMM0;
      _XMM0 = (unsigned int)stance;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm4, xmm1, xmm2
      }
      outEyeOffset->v[2] = *(float *)&_XMM0;
      break;
    case 7u:
      _XMM0 = (unsigned int)stance;
      __asm { vpcmpeqd xmm3, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_N26_0);
      __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
      outEyeOffset->v[0] = *(float *)&_XMM0;
      _XMM0 = (unsigned int)stance;
      __asm { vpcmpeqd xmm3, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_0_40000001);
      __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
      outEyeOffset->v[1] = *(float *)&_XMM0;
      _XMM0 = (unsigned int)stance;
      __asm { vpcmpeqd xmm3, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_36_0);
      __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
      outEyeOffset->v[2] = *(float *)&_XMM0;
      break;
    default:
      return;
  }
}

/*
==============
HasAnimSpeedThresholdEntryForArchetype
==============
*/
char HasAnimSpeedThresholdEntryForArchetype(scr_string_t archetypeName, scr_string_t thresholdName)
{
  scr_string_t *v2; 
  __int64 v3; 
  __int64 v4; 
  scr_string_t *v5; 

  v2 = &s_animSpeedThresholdTables + 1;
  v3 = 0i64;
  while ( *((_DWORD *)v2 - 1) != archetypeName )
  {
LABEL_6:
    v3 += 68i64;
    v2 += 17;
    if ( v3 >= 544 )
      return 0;
  }
  v4 = 0i64;
  v5 = v2;
  while ( *v5 != thresholdName )
  {
    ++v4;
    v5 += 2;
    if ( v4 >= 8 )
      goto LABEL_6;
  }
  return 1;
}

/*
==============
HasAnimSpeedThresholdsForArchetype
==============
*/
char HasAnimSpeedThresholdsForArchetype(scr_string_t archetypeName)
{
  scr_string_t *v1; 

  v1 = &s_animSpeedThresholdTables;
  while ( *v1 != archetypeName )
  {
    v1 += 17;
    if ( (__int64)v1 >= (__int64)s_MaxSpeedForPathTable )
      return 0;
  }
  return 1;
}

/*
==============
InitializeMaxSpeedForPathLengthTable
==============
*/
void InitializeMaxSpeedForPathLengthTable(void)
{
  if ( dword_14913E8F4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14913E8F4);
    if ( dword_14913E8F4 == -1 )
    {
      s_Speeds[0] = (const scr_string_t)scr_const.shuffle;
      s_Speeds[1] = (const scr_string_t)scr_const.walk;
      s_Speeds[2] = (const scr_string_t)scr_const.fast;
      s_Speeds[3] = (const scr_string_t)scr_const.jog;
      s_Speeds[4] = (const scr_string_t)scr_const.run;
      s_Speeds[5] = (const scr_string_t)scr_const.sprint;
      j__Init_thread_footer(&dword_14913E8F4);
    }
  }
  if ( !s_MaxSpeedForPathTableInitialized )
  {
    s_MaxSpeedForPathTable[0].arrivalExitDist = FLOAT_105_0;
    s_MaxSpeedForPathTable[0].maxSpeed = FLOAT_39_5;
    s_MaxSpeedForPathTable[0].arrivalSpeed = s_Speeds[0];
    s_MaxSpeedForPathTable[0].exitSpeed = s_Speeds[0];
    s_MaxSpeedForPathTable[1].arrivalExitDist = FLOAT_115_0;
    s_MaxSpeedForPathTable[1].maxSpeed = FLOAT_88_0;
    s_MaxSpeedForPathTable[1].arrivalSpeed = s_Speeds[1];
    s_MaxSpeedForPathTable[1].exitSpeed = s_Speeds[1];
    s_MaxSpeedForPathTable[2].arrivalExitDist = FLOAT_125_0;
    s_MaxSpeedForPathTable[2].maxSpeed = FLOAT_145_0;
    s_MaxSpeedForPathTable[2].arrivalSpeed = s_Speeds[2];
    s_MaxSpeedForPathTable[2].exitSpeed = s_Speeds[2];
    s_MaxSpeedForPathTable[3].arrivalExitDist = FLOAT_140_0;
    s_MaxSpeedForPathTable[3].maxSpeed = FLOAT_195_0;
    s_MaxSpeedForPathTable[3].arrivalSpeed = s_Speeds[3];
    s_MaxSpeedForPathTable[3].exitSpeed = s_Speeds[3];
    s_MaxSpeedForPathTable[4].arrivalExitDist = FLOAT_149_0;
    s_MaxSpeedForPathTable[4].maxSpeed = FLOAT_235_0;
    s_MaxSpeedForPathTable[4].arrivalSpeed = s_Speeds[4];
    s_MaxSpeedForPathTable[4].exitSpeed = s_Speeds[4];
    s_MaxSpeedForPathTable[5].arrivalExitDist = FLOAT_156_0;
    s_MaxSpeedForPathTable[5].maxSpeed = FLOAT_250_0;
    s_MaxSpeedForPathTable[5].arrivalSpeed = s_Speeds[5];
    s_MaxSpeedForPathTable[5].exitSpeed = s_Speeds[5];
    s_MaxSpeedForPathTableInitialized = 1;
  }
}

/*
==============
InitializeSpeedThresholds
==============
*/
void InitializeSpeedThresholds(void)
{
  scr_string_t *v0; 

  v0 = &s_animSpeedThresholdTables + 4;
  do
  {
    *((_QWORD *)v0 - 2) = 0i64;
    *((_QWORD *)v0 - 1) = 0i64;
    *(_QWORD *)v0 = 0i64;
    *((_QWORD *)v0 + 1) = 0i64;
    *((_QWORD *)v0 + 2) = 0i64;
    *((_QWORD *)v0 + 3) = 0i64;
    *((_QWORD *)v0 + 4) = 0i64;
    *((_QWORD *)v0 + 5) = 0i64;
    *((_DWORD *)v0 + 12) = 0;
    v0 += 17;
  }
  while ( (__int64)v0 < (__int64)&s_MaxSpeedForPathTable[1] );
}

/*
==============
IsNode3DType
==============
*/
bool IsNode3DType(unsigned __int16 nodeType)
{
  return (unsigned __int16)(nodeType - 20) <= 2u || nodeType == 25;
}

/*
==============
SetSpeedThresholdEntry
==============
*/
void SetSpeedThresholdEntry(scr_string_t archetypeName, scr_string_t thresholdName, int thresholdValue)
{
  scr_string_t *v6; 
  scr_string_t *v7; 
  __int64 v8; 
  scr_string_t *v9; 
  scr_string_t *v10; 

  if ( thresholdValue <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_globals.cpp", 375, ASSERT_TYPE_ASSERT, "(thresholdValue > 0)", "%s\n\tSpeed threshold values need to be greater than 0", "thresholdValue > 0") )
    __debugbreak();
  v6 = &s_animSpeedThresholdTables;
  do
  {
    v7 = v6;
    if ( !*v6 )
      break;
    if ( *v6 == archetypeName )
      break;
    v6 += 17;
  }
  while ( (__int64)v6 < (__int64)s_MaxSpeedForPathTable );
  Scr_SetString(v7, archetypeName);
  v8 = 0i64;
  v9 = v7 + 1;
  do
  {
    v10 = v9;
    if ( !*v9 )
      break;
    if ( *v9 == thresholdName )
      break;
    ++v8;
    v9 += 2;
  }
  while ( v8 < 8 );
  Scr_SetString(v10, thresholdName);
  *((_DWORD *)v10 + 1) = thresholdValue;
  qsort(v7 + 1, 8ui64, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CompareAnimSpeedThresholdValues);
}

/*
==============
ShutdownSpeedThresholds
==============
*/
void ShutdownSpeedThresholds(void)
{
  scr_string_t *v0; 
  __int64 v1; 
  scr_string_t *v2; 
  scr_string_t *v3; 
  __int64 v4; 

  v0 = &s_animSpeedThresholdTables;
  v1 = 8i64;
  v2 = &s_animSpeedThresholdTables;
  do
  {
    if ( *v0 )
    {
      Scr_SetString(v2, (scr_string_t)0);
      v3 = v2 + 1;
      v4 = 8i64;
      do
      {
        Scr_SetString(v3, (scr_string_t)0);
        v3 += 2;
        --v4;
      }
      while ( v4 );
    }
    v2 += 17;
    v0 += 17;
    --v1;
  }
  while ( v1 );
}

/*
==============
SpeedThresholdLoad
==============
*/
void SpeedThresholdLoad(SaveGame *save)
{
  int v2; 
  scr_string_t *v3; 
  MemoryFile *MemoryFile; 
  const char *CString; 
  int v6; 
  _DWORD *v7; 
  MemoryFile *v8; 
  const char *v9; 
  int v10; 
  int buffer; 

  buffer = 0;
  v10 = 0;
  SaveMemory_LoadRead(&buffer, 4, save);
  v2 = 0;
  if ( buffer > 0 )
  {
    v3 = &s_animSpeedThresholdTables;
    do
    {
      MemoryFile = SaveMemory_GetMemoryFile(save);
      CString = MemFile_ReadCString(MemoryFile);
      if ( CString )
        Scr_SetStringFromCharString(v3, CString);
      else
        *v3 = 0;
      SaveMemory_LoadRead(&v10, 4, save);
      v6 = 0;
      if ( v10 > 0 )
      {
        v7 = v3 + 1;
        do
        {
          v8 = SaveMemory_GetMemoryFile(save);
          v9 = MemFile_ReadCString(v8);
          if ( v9 )
            Scr_SetStringFromCharString(&v3[2 * v6 + 1], v9);
          else
            *v7 = 0;
          SaveMemory_LoadRead(&v3[2 * v6++ + 2], 4, save);
          v7 += 2;
        }
        while ( v6 < v10 );
      }
      ++v2;
      v3 += 17;
    }
    while ( v2 < buffer );
  }
}

/*
==============
SpeedThresholdSave
==============
*/
void SpeedThresholdSave(MemoryFile *memFile)
{
  scr_string_t *v1; 
  int i; 
  int j; 
  const char *v5; 
  int v6; 
  int v7; 
  scr_string_t *v8; 
  const char *v9; 
  int v10; 
  int p; 

  v1 = &s_animSpeedThresholdTables;
  p = 0;
  for ( i = 0; i < 8; p = i )
  {
    if ( !*((_DWORD *)&s_animSpeedThresholdTables + 17 * i) )
      break;
    ++i;
  }
  MemFile_WriteData(memFile, 4ui64, &p);
  for ( j = 0; j < p; v1 += 17 )
  {
    v5 = SL_ConvertToString(*v1);
    MemFile_WriteCString(memFile, v5);
    v6 = 0;
    v10 = 0;
    do
    {
      if ( !v1[2 * v6 + 1] )
        break;
      v10 = ++v6;
    }
    while ( v6 < 8 );
    MemFile_WriteData(memFile, 4ui64, &v10);
    v7 = 0;
    if ( v10 > 0 )
    {
      v8 = v1 + 1;
      do
      {
        v9 = SL_ConvertToString(*v8);
        MemFile_WriteCString(memFile, v9);
        MemFile_WriteData(memFile, 4ui64, &v1[2 * v7++ + 2]);
        v8 += 2;
      }
      while ( v7 < v10 );
    }
    ++j;
  }
}

