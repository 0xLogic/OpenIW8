/*
==============
ATClient_TraverseAddRandomInBounds
==============
*/

void __fastcall ATClient_TraverseAddRandomInBounds(const vec3_t *min, const vec3_t *max, const vec3_t *angles)
{
  ?ATClient_TraverseAddRandomInBounds@@YAXAEBTvec3_t@@0PEBT1@@Z(min, max, angles);
}

/*
==============
ATClient_TraversalNavGeneratePerfPositions
==============
*/

void ATClient_TraversalNavGeneratePerfPositions(void)
{
  ?ATClient_TraversalNavGeneratePerfPositions@@YAXXZ();
}

/*
==============
ATClient_TraverseAddReferenceQA
==============
*/

void __fastcall ATClient_TraverseAddReferenceQA(const vec3_t *angle)
{
  ?ATClient_TraverseAddReferenceQA@@YAXPEBTvec3_t@@@Z(angle);
}

/*
==============
ATCLient_TraverseInit
==============
*/

void __fastcall ATCLient_TraverseInit(const bool regenerate)
{
  ?ATCLient_TraverseInit@@YAX_N@Z(regenerate);
}

/*
==============
ATCLient_TraverseShutdown
==============
*/

void ATCLient_TraverseShutdown(void)
{
  ?ATCLient_TraverseShutdown@@YAXXZ();
}

/*
==============
ATClient_TraverseReset
==============
*/

void ATClient_TraverseReset(void)
{
  ?ATClient_TraverseReset@@YAXXZ();
}

/*
==============
ATClient_TraverseGetRandomAngle
==============
*/

void __fastcall ATClient_TraverseGetRandomAngle(const float minPitchDegrees, const float maxPitchDegrees, vec3_t *outAngles)
{
  ?ATClient_TraverseGetRandomAngle@@YAXMMPEATvec3_t@@@Z(minPitchDegrees, maxPitchDegrees, outAngles);
}

/*
==============
ATCLient_TraverseGetIndexMax
==============
*/

int __fastcall ATCLient_TraverseGetIndexMax()
{
  return ?ATCLient_TraverseGetIndexMax@@YAHXZ();
}

/*
==============
ATClient_TraverseGetByIndex
==============
*/

bool __fastcall ATClient_TraverseGetByIndex(const int index, vec3_t *pos, vec3_t *angles)
{
  return ?ATClient_TraverseGetByIndex@@YA_NHPEATvec3_t@@0@Z(index, pos, angles);
}

/*
==============
ATClient_TraverseGetAngle
==============
*/

bool __fastcall ATClient_TraverseGetAngle(const int index, vec3_t *angles)
{
  return ?ATClient_TraverseGetAngle@@YA_NHPEATvec3_t@@@Z(index, angles);
}

/*
==============
ATClient_TraverseGetRandomInBounds
==============
*/

void __fastcall ATClient_TraverseGetRandomInBounds(const vec3_t *boundsMin, const vec3_t *boundsMax, vec3_t *outPos)
{
  ?ATClient_TraverseGetRandomInBounds@@YAXAEBTvec3_t@@0PEAT1@@Z(boundsMin, boundsMax, outPos);
}

/*
==============
ATCLient_TraverseGetIndexMax
==============
*/
__int64 ATCLient_TraverseGetIndexMax()
{
  return (unsigned int)s_samplePosUsed;
}

/*
==============
ATCLient_TraverseInit
==============
*/
void ATCLient_TraverseInit(const bool regenerate)
{
  const dvar_t *v1; 
  int integer; 
  const dvar_t *v4; 
  int v5; 
  const dvar_t *v6; 
  int v7; 
  const dvar_t *v8; 
  float value; 
  const dvar_t *v10; 
  __int64 v11; 
  float outRadius; 

  v1 = DVARINT_ATClient_PerfProbeSampleCountMax;
  s_samplePosUsed = 0;
  if ( !DVARINT_ATClient_PerfProbeSampleCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfProbeSampleCountMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  v4 = DVARINT_ATClient_PerfMode;
  if ( integer > 200 )
    integer = 200;
  s_samplePosUseMax = integer;
  if ( !DVARINT_ATClient_PerfMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfMode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = v4->current.integer;
  v6 = DVARINT_ATClient_PerfModeAngles;
  s_traversalMode = v5;
  if ( !DVARINT_ATClient_PerfModeAngles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfModeAngles") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = v6->current.integer;
  v8 = DVARFLT_ATClient_PerfClientPitchMin;
  s_traversalModeAngles = v7;
  if ( !DVARFLT_ATClient_PerfClientPitchMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfClientPitchMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  value = v8->current.value;
  v10 = DVARFLT_ATClient_PerfClientPitchMax;
  s_minPitchDegrees = value;
  if ( !DVARFLT_ATClient_PerfClientPitchMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfClientPitchMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  s_maxPitchDegrees = v10->current.value;
  if ( s_maxPitchDegrees < s_minPitchDegrees && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 366, ASSERT_TYPE_ASSERT, "(s_maxPitchDegrees >= s_minPitchDegrees)", (const char *)&queryFormat, "s_maxPitchDegrees >= s_minPitchDegrees") )
    __debugbreak();
  if ( s_maxPitchDegrees < -90.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 367, ASSERT_TYPE_ASSERT, "(s_maxPitchDegrees >= -90.0f)", (const char *)&queryFormat, "s_maxPitchDegrees >= -90.0f") )
    __debugbreak();
  if ( s_maxPitchDegrees > 90.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 368, ASSERT_TYPE_ASSERT, "(s_maxPitchDegrees <= 90.0f)", (const char *)&queryFormat, "s_maxPitchDegrees <= 90.0f") )
    __debugbreak();
  if ( s_minPitchDegrees < -90.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 369, ASSERT_TYPE_ASSERT, "(s_minPitchDegrees >= -90.0f)", (const char *)&queryFormat, "s_minPitchDegrees >= -90.0f") )
    __debugbreak();
  if ( s_minPitchDegrees > 90.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 370, ASSERT_TYPE_ASSERT, "(s_minPitchDegrees <= 90.0f)", (const char *)&queryFormat, "s_minPitchDegrees <= 90.0f") )
    __debugbreak();
  ATClient_NavGetPerfTestBounds(&s_worldBoundMin, &s_worldBoundMax);
  outRadius = 0.0;
  s_hasBounds = ATClient_NavGetMeshBoundsMinMax(&s_tileBoundMin, &s_tileBoundMax, &outRadius);
  switch ( s_traversalMode )
  {
    case -1:
      v11 = s_samplePosUsed;
      s_samplePos[s_samplePosUsed] = s_samplePosDEV[0];
      s_samplePos[v11 + 1] = s_samplePosDEV[1];
      s_samplePos[v11 + 2] = s_samplePosDEV[2];
      s_samplePos[v11 + 3] = s_samplePosDEV[3];
      s_samplePos[v11 + 4] = s_samplePosDEV[4];
      s_samplePos[v11 + 5] = s_samplePosDEV[5];
      s_samplePos[v11 + 6] = s_samplePosDEV[6];
      s_samplePos[v11 + 7] = s_samplePosDEV[7];
      s_samplePos[v11 + 8] = s_samplePosDEV[8];
      s_samplePos[v11 + 9] = s_samplePosDEV[9];
      s_samplePos[v11 + 10] = s_samplePosDEV[10];
      s_samplePos[v11 + 11] = s_samplePosDEV[11];
      s_samplePos[v11 + 12] = s_samplePosDEV[12];
      s_samplePos[v11 + 13] = s_samplePosDEV[13];
      s_samplePos[v11 + 14] = s_samplePosDEV[14];
      s_samplePos[v11 + 15] = s_samplePosDEV[15];
      s_samplePos[v11 + 16] = s_samplePosDEV[16];
      s_samplePosUsed = v11 + 17;
      break;
    case 0:
      ATCLient_TraverseInitQA(s_traversalModeAngles);
      break;
    case 1:
      goto LABEL_38;
    case 3:
      ATCLient_TraverseInitQA(s_traversalModeAngles);
LABEL_38:
      ATCLient_TraverseInitRandom(s_samplePosUseMax, s_traversalModeAngles, regenerate);
      break;
  }
  s_initializedTraversal = 1;
}

/*
==============
ATCLient_TraverseInitQA
==============
*/
void ATCLient_TraverseInitQA(const int angleSelection)
{
  int v1; 
  int v2; 
  const vec6_t *v3; 
  int v4; 
  int v5; 
  double v6; 
  __int64 v7; 
  __int64 v8; 
  __int128 v9; 
  double v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  double v14; 
  __int64 v15; 
  __int64 v16; 
  __int128 v17; 
  double v18; 
  __int64 v19; 

  v1 = angleSelection - 1;
  if ( !v1 )
  {
    ATClient_TraverseAddReferenceQA(s_sampleAngles);
    ATClient_TraverseAddReferenceQA(&s_sampleAngles[2]);
    ATClient_TraverseAddReferenceQA(&s_sampleAngles[4]);
    ATClient_TraverseAddReferenceQA(&s_sampleAngles[6]);
    return;
  }
  v2 = v1 - 1;
  if ( !v2 )
  {
LABEL_10:
    ATClient_TraverseAddReferenceQA(s_sampleAngles);
    ATClient_TraverseAddReferenceQA(&s_sampleAngles[2]);
    ATClient_TraverseAddReferenceQA(&s_sampleAngles[4]);
    ATClient_TraverseAddReferenceQA(&s_sampleAngles[6]);
    ATClient_TraverseAddReferenceQA(&s_sampleAngles[8]);
    ATClient_TraverseAddReferenceQA(&s_sampleAngles[9]);
    return;
  }
  v3 = &s_samplePosQA[1];
  if ( v2 == 1 )
  {
    v12 = s_samplePosUsed;
    v13 = s_samplePosUsed;
    do
    {
      v14 = *(double *)&v3[-1].angles.$B0B35713D2416F72F0CC0945BCE8E7B6::y;
      v15 = v13;
      v13 += 2;
      v16 = v15;
      *(_OWORD *)s_samplePos[v16].v = *(_OWORD *)v3[-1].v;
      v17 = *(_OWORD *)v3->v;
      *(double *)&s_samplePos[v16].angles.$B0B35713D2416F72F0CC0945BCE8E7B6::y = v14;
      v18 = *(double *)&v3->angles.$B0B35713D2416F72F0CC0945BCE8E7B6::y;
      v19 = v15;
      v3 += 2;
      *(_OWORD *)s_samplePos[v19 + 1].v = v17;
      *(double *)&s_samplePos[v19 + 1].angles.$B0B35713D2416F72F0CC0945BCE8E7B6::y = v18;
    }
    while ( (__int64)v3 < (__int64)&s_samplePosDEV[0].pos.z );
    s_samplePosUsed = v12 + 132;
    goto LABEL_10;
  }
  v4 = s_samplePosUsed;
  v5 = s_samplePosUsed;
  do
  {
    v6 = *(double *)&v3[-1].angles.$B0B35713D2416F72F0CC0945BCE8E7B6::y;
    v7 = v5;
    v5 += 2;
    v8 = v7;
    *(_OWORD *)s_samplePos[v8].v = *(_OWORD *)v3[-1].v;
    v9 = *(_OWORD *)v3->v;
    *(double *)&s_samplePos[v8].angles.$B0B35713D2416F72F0CC0945BCE8E7B6::y = v6;
    v10 = *(double *)&v3->angles.$B0B35713D2416F72F0CC0945BCE8E7B6::y;
    v11 = v7;
    v3 += 2;
    *(_OWORD *)s_samplePos[v11 + 1].v = v9;
    *(double *)&s_samplePos[v11 + 1].angles.$B0B35713D2416F72F0CC0945BCE8E7B6::y = v10;
  }
  while ( (__int64)v3 < (__int64)&s_samplePosDEV[0].pos.z );
  s_samplePosUsed = v4 + 132;
}

/*
==============
ATCLient_TraverseInitRandom
==============
*/
void ATCLient_TraverseInitRandom(const int numPointsMax, const int angleSelection, const bool regenerate)
{
  const dvar_t *v3; 
  int value; 
  float v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  unsigned int v12; 
  unsigned int v13; 
  signed int v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  int v21; 
  bool v22; 
  signed int v23; 
  unsigned int UInt; 
  __int128 v28; 
  vec6_t *v30; 
  float v31[6]; 

  v3 = DVARFLT_ATClient_PerfClientPaddingXY;
  if ( !DVARFLT_ATClient_PerfClientPaddingXY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_PerfClientPaddingXY") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  value = (int)v3->current.value;
  if ( value < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 308, ASSERT_TYPE_ASSERT, "(padding >=0)", (const char *)&queryFormat, "padding >=0") )
    __debugbreak();
  v6 = (float)(2 * value);
  v7 = (int)(float)(s_worldBoundMax.v[0] - (float)(v6 + s_worldBoundMin.v[0]));
  if ( v7 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 311, ASSERT_TYPE_ASSERT, "(xSpan >= 0)", (const char *)&queryFormat, "xSpan >= 0") )
    __debugbreak();
  v8 = (int)(float)(s_worldBoundMax.v[1] - (float)(v6 + s_worldBoundMin.v[1]));
  if ( v8 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 313, ASSERT_TYPE_ASSERT, "(ySpan >= 0)", (const char *)&queryFormat, "ySpan >= 0") )
    __debugbreak();
  v9 = (int)(float)(s_worldBoundMax.v[2] - s_worldBoundMin.v[2]);
  if ( v9 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 315, ASSERT_TYPE_ASSERT, "(zSpan >= 0)", (const char *)&queryFormat, "zSpan >= 0") )
    __debugbreak();
  v10 = s_samplePosUsed;
  v11 = s_samplePosUseMax;
  if ( regenerate )
    v10 = 0;
  s_samplePosUsed = v10;
  if ( v10 < s_samplePosUseMax )
  {
    v30 = &s_samplePos[v10];
    do
    {
      if ( v7 <= 0 )
        v12 = 0;
      else
        v12 = bdRandom::nextUInt(&s_randTraverse) % v7;
      if ( v8 <= 0 )
        v13 = 0;
      else
        v13 = bdRandom::nextUInt(&s_randTraverse) % v8;
      if ( v9 <= 0 )
      {
        v14 = 0;
      }
      else
      {
        v14 = bdRandom::nextUInt(&s_randTraverse) % v9;
        if ( v14 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 327, ASSERT_TYPE_ASSERT, "(zofs >= 0)", (const char *)&queryFormat, "zofs >= 0") )
          __debugbreak();
      }
      v15 = (float)(int)(v12 + value) + s_worldBoundMin.v[0];
      v16 = (float)(int)(v13 + value) + s_worldBoundMin.v[1];
      v17 = (float)v14 + s_worldBoundMin.v[2];
      v31[1] = v16;
      v31[0] = v15;
      v31[2] = v17;
      if ( v15 < s_worldBoundMin.v[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 333, ASSERT_TYPE_ASSERT, "(vec[0] >= s_worldBoundMin[0])", (const char *)&queryFormat, "vec[0] >= s_worldBoundMin[0]") )
        __debugbreak();
      if ( v15 > s_worldBoundMax.v[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 334, ASSERT_TYPE_ASSERT, "(vec[0] <= s_worldBoundMax[0])", (const char *)&queryFormat, "vec[0] <= s_worldBoundMax[0]") )
        __debugbreak();
      if ( v16 < s_worldBoundMin.v[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 335, ASSERT_TYPE_ASSERT, "(vec[1] >= s_worldBoundMin[1])", (const char *)&queryFormat, "vec[1] >= s_worldBoundMin[1]") )
        __debugbreak();
      if ( v16 > s_worldBoundMax.v[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 336, ASSERT_TYPE_ASSERT, "(vec[1] <= s_worldBoundMax[1])", (const char *)&queryFormat, "vec[1] <= s_worldBoundMax[1]") )
        __debugbreak();
      if ( v17 < s_worldBoundMin.v[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 337, ASSERT_TYPE_ASSERT, "(vec[2] >= s_worldBoundMin[2])", (const char *)&queryFormat, "vec[2] >= s_worldBoundMin[2]") )
        __debugbreak();
      if ( v17 > s_worldBoundMax.v[2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 338, ASSERT_TYPE_ASSERT, "(vec[2] <= s_worldBoundMax[2])", (const char *)&queryFormat, "vec[2] <= s_worldBoundMax[2]") )
        __debugbreak();
      v18 = s_minPitchDegrees;
      _XMM2 = 0i64;
      __asm { vroundss xmm2, xmm2, xmm1, 1 }
      v21 = (int)*(float *)&_XMM2;
      v22 = (int)*(float *)&_XMM2 <= 0;
      if ( (int)*(float *)&_XMM2 < 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 443, ASSERT_TYPE_ASSERT, "(pitchSpan >= 0)", (const char *)&queryFormat, "pitchSpan >= 0") )
          __debugbreak();
        v22 = v21 <= 0;
      }
      if ( v22 )
        v23 = 0;
      else
        v23 = bdRandom::nextUInt(&s_randTraverse) % v21;
      AngleNormalize360((float)v23 + v18);
      _XMM0 = *(_OWORD *)v31;
      ++v10;
      UInt = bdRandom::nextUInt(&s_randTraverse);
      v11 = s_samplePosUseMax;
      __asm { vinsertps xmm0, xmm0, xmm6, 30h ; '0' }
      v28 = 0i64;
      *(float *)&v28 = (float)(UInt % 0x168);
      _XMM1 = v28;
      *(_OWORD *)v30->v = _XMM0;
      __asm { vunpcklps xmm0, xmm1, xmm9 }
      *(double *)&v30->angles.$B0B35713D2416F72F0CC0945BCE8E7B6::y = *(double *)&_XMM0;
      ++v30;
    }
    while ( v10 < v11 );
  }
  s_samplePosUsed = v11;
}

/*
==============
ATCLient_TraverseShutdown
==============
*/
void ATCLient_TraverseShutdown(void)
{
  s_samplePosUsed = 0;
  s_initializedTraversal = 0;
}

/*
==============
ATClient_TraversalNavGeneratePerfPositions
==============
*/
void ATClient_TraversalNavGeneratePerfPositions(void)
{
  nav_space_s *DefaultSpace; 
  float v1; 
  float v2; 
  __int128 v4; 
  int v6; 
  int v7; 
  float v8; 
  float v9; 
  float v10; 
  int v11; 
  float v12; 
  int i; 
  bfx::SpaceHandle v14; 
  unsigned int v15; 
  float v16; 
  float v17; 
  __int64 v18; 
  bfx::SpaceHandle v19; 
  float v20; 
  float v21; 
  float v22; 
  bfx::SpaceHandle v23; 
  bfx::SpaceHandle rhs; 
  __int64 v25; 
  Bounds pOutBounds; 
  vec3_t start; 
  vec3_t end; 
  vec3_t testPoint; 
  vec3_t outPoint; 
  trace_t results; 

  v25 = -2i64;
  DefaultSpace = Nav_GetDefaultSpace();
  bfx::SpaceHandle::SpaceHandle(&rhs, &DefaultSpace->hSpace);
  if ( Nav_GetBounds(&pOutBounds) )
  {
    if ( pOutBounds.halfSize.v[0] == -3.4028235e38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 566, ASSERT_TYPE_ASSERT, "(navBounds.halfSize[0] != ( -3.402823466e+38F ))", (const char *)&queryFormat, "navBounds.halfSize[0] != BOUND_CLEAR_MIN") )
      __debugbreak();
    sampleBounds = pOutBounds;
    v1 = pOutBounds.halfSize.v[0] * 2.0;
    v22 = pOutBounds.halfSize.v[0] * 2.0;
    v2 = pOutBounds.halfSize.v[1] * 2.0;
    v21 = pOutBounds.halfSize.v[1] * 2.0;
    v4 = LODWORD(FLOAT_2_0);
    *(float *)&v4 = 2.0 * pOutBounds.halfSize.v[2];
    _XMM2 = v4;
    __asm { vmaxss  xmm9, xmm2, cs:__real@42000000 }
    v6 = (int)(float)((float)(pOutBounds.halfSize.v[0] * 2.0) * 0.013888889);
    if ( v6 < 1 )
      v6 = 1;
    if ( v6 > 100 )
      v6 = 100;
    v7 = (int)(float)(v2 * 0.013888889);
    if ( v7 < 1 )
      v7 = 1;
    if ( v7 > 100 )
      v7 = 100;
    v8 = 1.0 / (float)v6;
    v9 = 1.0 / (float)v7;
    s_samplesX = v6;
    s_samplesY = v7;
    s_sampleSizeX = (float)(2.0 * pOutBounds.halfSize.v[0]) * v8;
    s_sampleSizeY = (float)(2.0 * pOutBounds.halfSize.v[1]) * v9;
    v10 = pOutBounds.halfSize.v[2] + pOutBounds.midPoint.v[2];
    v20 = pOutBounds.halfSize.v[2] + pOutBounds.midPoint.v[2];
    v11 = 0;
    while ( 1 )
    {
      v12 = (float)(pOutBounds.midPoint.v[0] - pOutBounds.halfSize.v[0]) + (float)((float)((float)((float)v11 + 0.5) * v8) * v1);
      for ( i = 0; i < v7; ++i )
      {
        testPoint.v[0] = v12;
        testPoint.v[1] = (float)(pOutBounds.midPoint.v[1] - pOutBounds.halfSize.v[1]) + (float)((float)((float)((float)i + 0.5) * v9) * v2);
        testPoint.v[2] = v10;
        bfx::SpaceHandle::SpaceHandle(&v23, &rhs);
        if ( Nav_TryFindPointOnMeshBelowPoint(v14, 0, &testPoint, *(const float *)&_XMM9, &outPoint) )
        {
          while ( 1 )
          {
            testPoint.v[2] = outPoint.v[2] - 12.0;
            start.v[0] = outPoint.v[0];
            start.v[1] = outPoint.v[1];
            end.v[0] = outPoint.v[0];
            end.v[1] = outPoint.v[1];
            start.v[2] = outPoint.v[2] + 24.0;
            end.v[2] = outPoint.v[2] - 120.0;
            PhysicsQuery_LegacyCapsuleTrace(PHYSICS_WORLD_ID_FIRST, &results, &start, &end, &actorBox, NULL, 0, 65553, NULL, 0, NULL, NULL);
            if ( results.fraction > 0.0 && results.fraction < 1.0 )
            {
              v15 = s_numPositions;
              if ( s_numPositions >= 0x3E8 )
              {
                Com_PrintWarning(20, "Physics Performance Test - too many pmove samples\n");
                goto LABEL_26;
              }
              v16 = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
              v17 = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
              v18 = s_numPositions;
              s_positions[v18].v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
              s_positions[v18].v[1] = v16;
              s_positions[v18].v[2] = v17;
              s_numPositions = v15 + 1;
            }
            bfx::SpaceHandle::SpaceHandle(&v23, &rhs);
            if ( !Nav_TryFindPointOnMeshBelowPoint(v19, 0, &testPoint, *(const float *)&_XMM9, &outPoint) )
            {
              v10 = v20;
              v2 = v21;
              break;
            }
          }
        }
        v9 = 1.0 / (float)v7;
      }
      if ( ++v11 >= v6 )
        break;
      v8 = 1.0 / (float)v6;
      v1 = v22;
    }
  }
LABEL_26:
  bfx::SpaceHandle::~SpaceHandle(&rhs);
}

/*
==============
ATClient_TraverseAddRandomInBounds
==============
*/
void ATClient_TraverseAddRandomInBounds(const vec3_t *min, const vec3_t *max, const vec3_t *angles)
{
  float v4; 
  int v5; 
  __int64 v6; 
  float v7; 
  float v8; 
  double v9; 
  vec3_t outPos; 
  vec3_t outAngles; 

  ATClient_TraverseGetRandomInBounds(min, max, &outPos);
  if ( angles )
  {
    v4 = outPos.v[2];
    v5 = s_samplePosUsed;
    v6 = s_samplePosUsed;
    *(double *)s_samplePos[v6].v = *(double *)outPos.v;
    s_samplePos[v6].v[2] = v4;
    *(double *)s_samplePos[v6].angles.$B0B35713D2416F72F0CC0945BCE8E7B6::v = *(double *)angles->v;
    v7 = angles->v[2];
  }
  else
  {
    ATClient_TraverseGetRandomAngle(-45.0, 45.0, &outAngles);
    v8 = outPos.v[2];
    v5 = s_samplePosUsed;
    v6 = s_samplePosUsed;
    *(double *)s_samplePos[v6].v = *(double *)outPos.v;
    v9 = *(double *)outAngles.v;
    s_samplePos[v6].v[2] = v8;
    v7 = outAngles.v[2];
    *(double *)s_samplePos[v6].angles.$B0B35713D2416F72F0CC0945BCE8E7B6::v = v9;
  }
  s_samplePos[v6].v[5] = v7;
  s_samplePosUsed = v5 + 1;
}

/*
==============
ATClient_TraverseAddReferenceQA
==============
*/
void ATClient_TraverseAddReferenceQA(const vec3_t *angle)
{
  const vec6_t *v1; 
  int v3; 
  int v4; 
  double v5; 
  __int64 v6; 
  __int64 v7; 
  __int128 v8; 
  double v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  float v14; 
  double v15; 
  __int64 v16; 
  float v17; 

  v1 = &s_samplePosQA[1];
  if ( angle )
  {
    v11 = s_samplePosUsed;
    do
    {
      v12 = v11;
      v11 += 2;
      v13 = v12;
      v14 = v1[-1].v[2];
      *(double *)s_samplePos[v13].v = *(double *)v1[-1].v;
      s_samplePos[v13].v[2] = v14;
      *(double *)s_samplePos[v13].angles.$B0B35713D2416F72F0CC0945BCE8E7B6::v = *(double *)angle->v;
      v15 = *(double *)v1->v;
      s_samplePos[v13].v[5] = angle->v[2];
      v16 = 2 * (3 * v12 + 3);
      v17 = v1->v[2];
      *(double *)&s_samplePos[0].v[v16] = v15;
      s_samplePos[0].v[v16 + 2] = v17;
      v1 += 2;
      *(double *)&s_samplePos[0].angles.$B0B35713D2416F72F0CC0945BCE8E7B6::v[v16] = *(double *)angle->v;
      s_samplePos[0].v[v16 + 5] = angle->v[2];
    }
    while ( (__int64)v1 < (__int64)&s_samplePosDEV[0].pos.z );
  }
  else
  {
    v3 = s_samplePosUsed;
    v4 = s_samplePosUsed;
    do
    {
      v5 = *(double *)&v1[-1].angles.$B0B35713D2416F72F0CC0945BCE8E7B6::y;
      v6 = v4;
      v4 += 2;
      v7 = v6;
      *(_OWORD *)s_samplePos[v7].v = *(_OWORD *)v1[-1].v;
      v8 = *(_OWORD *)v1->v;
      *(double *)&s_samplePos[v7].angles.$B0B35713D2416F72F0CC0945BCE8E7B6::y = v5;
      v9 = *(double *)&v1->angles.$B0B35713D2416F72F0CC0945BCE8E7B6::y;
      v10 = v6;
      v1 += 2;
      *(_OWORD *)s_samplePos[v10 + 1].v = v8;
      *(double *)&s_samplePos[v10 + 1].angles.$B0B35713D2416F72F0CC0945BCE8E7B6::y = v9;
    }
    while ( (__int64)v1 < (__int64)&s_samplePosDEV[0].pos.z );
    s_samplePosUsed = v3 + 132;
  }
}

/*
==============
ATClient_TraverseGetAngle
==============
*/
char ATClient_TraverseGetAngle(const int index, vec3_t *angles)
{
  __int64 v2; 

  v2 = index;
  if ( (unsigned int)index > 9 )
    return 0;
  if ( !angles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 520, ASSERT_TYPE_ASSERT, "(angles)", (const char *)&queryFormat, "angles") )
    __debugbreak();
  *(double *)angles->v = *(double *)s_sampleAngles[v2].v;
  angles->v[2] = s_sampleAngles[v2].v[2];
  return 1;
}

/*
==============
ATClient_TraverseGetByIndex
==============
*/
char ATClient_TraverseGetByIndex(const int index, vec3_t *pos, vec3_t *angles)
{
  __int64 v3; 

  v3 = index;
  if ( index < 0 || index >= s_samplePosUsed )
    return 0;
  if ( !pos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 504, ASSERT_TYPE_ASSERT, "(pos)", (const char *)&queryFormat, "pos") )
    __debugbreak();
  *(double *)pos->v = *(double *)s_samplePos[v3].v;
  pos->v[2] = s_samplePos[v3].v[2];
  if ( angles )
  {
    *(double *)angles->v = *(double *)s_samplePos[v3].angles.$B0B35713D2416F72F0CC0945BCE8E7B6::v;
    angles->v[2] = s_samplePos[v3].v[5];
  }
  return 1;
}

/*
==============
ATClient_TraverseGetRandomAngle
==============
*/
void ATClient_TraverseGetRandomAngle(const float minPitchDegrees, const float maxPitchDegrees, vec3_t *outAngles)
{
  int v6; 
  bool v7; 
  signed int v8; 
  double v9; 
  unsigned int UInt; 

  if ( !outAngles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 440, ASSERT_TYPE_ASSERT, "(outAngles)", (const char *)&queryFormat, "outAngles") )
    __debugbreak();
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm0, 1 }
  v6 = (int)*(float *)&_XMM1;
  v7 = (int)*(float *)&_XMM1 <= 0;
  if ( (int)*(float *)&_XMM1 < 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 443, ASSERT_TYPE_ASSERT, "(pitchSpan >= 0)", (const char *)&queryFormat, "pitchSpan >= 0") )
      __debugbreak();
    v7 = v6 <= 0;
  }
  if ( v7 )
    v8 = 0;
  else
    v8 = bdRandom::nextUInt(&s_randTraverse) % v6;
  v9 = AngleNormalize360((float)v8 + minPitchDegrees);
  outAngles->v[0] = *(float *)&v9;
  UInt = bdRandom::nextUInt(&s_randTraverse);
  outAngles->v[2] = 0.0;
  outAngles->v[1] = (float)(UInt % 0x168);
}

/*
==============
ATClient_TraverseGetRandomInBounds
==============
*/
void ATClient_TraverseGetRandomInBounds(const vec3_t *boundsMin, const vec3_t *boundsMax, vec3_t *outPos)
{
  unsigned int v5; 
  signed __int64 v6; 
  signed __int64 v7; 
  bool v8; 
  int v9; 
  float v10; 
  int v11; 
  float v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  double v18; 
  float v19; 

  if ( !outPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 457, ASSERT_TYPE_ASSERT, "(outPos)", (const char *)&queryFormat, "outPos") )
    __debugbreak();
  v5 = 0;
  v6 = (char *)&v18 - (char *)boundsMax;
  v7 = (char *)boundsMin - (char *)boundsMax;
  v8 = 1;
  do
  {
    if ( !v8 )
    {
      LODWORD(v15) = 3;
      LODWORD(v13) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v15) )
        __debugbreak();
    }
    v9 = (int)*(float *)((char *)boundsMax->v + v7);
    if ( v5 >= 3 )
    {
      LODWORD(v15) = 3;
      LODWORD(v13) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v15) )
        __debugbreak();
      LODWORD(v16) = 3;
      LODWORD(v14) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v14, v16) )
        __debugbreak();
    }
    v10 = boundsMax->v[0] - *(float *)((char *)boundsMax->v + v7);
    v11 = v9 + bdRandom::nextUInt(&s_randTraverse) % (int)v10;
    if ( v5 >= 3 )
    {
      LODWORD(v15) = 3;
      LODWORD(v13) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v15) )
        __debugbreak();
    }
    if ( v11 > (int)boundsMax->v[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\autotest\\atclient_traversal.cpp", 465, ASSERT_TYPE_ASSERT, "(r <= int( boundsMax[i] ))", (const char *)&queryFormat, "r <= int( boundsMax[i] )") )
      __debugbreak();
    if ( v5 >= 3 )
    {
      LODWORD(v15) = 3;
      LODWORD(v13) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v15) )
        __debugbreak();
    }
    *(float *)((char *)boundsMax->v + v6) = (float)v11;
    boundsMax = (const vec3_t *)((char *)boundsMax + 4);
    v8 = ++v5 < 3;
  }
  while ( (int)v5 < 3 );
  v12 = v19;
  *(double *)outPos->v = v18;
  outPos->v[2] = v12;
}

/*
==============
ATClient_TraverseReset
==============
*/
void ATClient_TraverseReset(void)
{
  s_samplePosUsed = 0;
}

