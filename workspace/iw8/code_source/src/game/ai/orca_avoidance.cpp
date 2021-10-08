/*
==============
ORCA_RateVelocity
==============
*/

AvoidanceResult __fastcall ORCA_RateVelocity(const AvoidingEntityInfo *avoidingEntityInfo, const AvoidSettings *settings, const vec3_t *desiredDirection, float *result)
{
  return ?ORCA_RateVelocity@@YA?AW4AvoidanceResult@@PEBUAvoidingEntityInfo@@PEBUAvoidSettings@@AEBTvec3_t@@AEAM@Z(avoidingEntityInfo, settings, desiredDirection, result);
}

/*
==============
ORCA_DoAvoidance
==============
*/

AvoidanceResult __fastcall ORCA_DoAvoidance(AvoidingEntityInfo *avoidingEntityInfo, const AvoidSettings *settings, vec3_t *outAvoidingVelocity, AvoidanceResult (__fastcall *fnCollisionCheck)(const AvoidingEntityInfo *, const AvoidSettings *, const vec3_t *, float *), int *outColliderEntNums, int *outColliderCount)
{
  return ?ORCA_DoAvoidance@@YA?AW4AvoidanceResult@@PEAUAvoidingEntityInfo@@PEBUAvoidSettings@@AEATvec3_t@@P6A?AW41@PEBU2@1AEBT4@AEAM@ZPEAHAEAH@Z(avoidingEntityInfo, settings, outAvoidingVelocity, fnCollisionCheck, outColliderEntNums, outColliderCount);
}

/*
==============
Avoid
==============
*/
__int64 Avoid(const AvoidingEntityInfo *avoidingEntityInfo, const AvoidSettings *settings, vec3_t *avoidancePoly, int numberOfVertices, vec3_t *outAvoidingVelocity, AvoidanceResult (*fnCollisionCheck)(const AvoidingEntityInfo *, const AvoidSettings *, const vec3_t *, float *))
{
  __int64 v14; 
  __int64 result; 
  __int64 v19; 
  int v20; 
  AvoidSettings *v45; 
  signed int v46; 
  int v47; 
  const vec3_t *v49; 
  const vec3_t *v50; 
  __int64 v52; 
  vec3_t *v53; 
  AvoidanceResult v54; 
  char v55; 
  bool v56; 
  AvoidanceResult v57; 
  char v70; 
  bool v71; 
  int numberOfFoundPointsOut; 
  int v100; 
  int v101; 
  int v102; 
  AvoidSettings *settingsa; 
  AvoidanceResult (__fastcall *v104)(const AvoidingEntityInfo *, const AvoidSettings *, const vec3_t *, float *); 
  vec3_t *v105; 
  vec3_t v106; 
  vec3_t center; 
  vec4_t color; 
  vec3_t resultingPoints[4]; 

  _R13 = avoidancePoly;
  _R14 = outAvoidingVelocity;
  _RSI = settings;
  v14 = numberOfVertices;
  _R15 = avoidingEntityInfo;
  v102 = numberOfVertices;
  v104 = fnCollisionCheck;
  v105 = avoidancePoly;
  settingsa = (AvoidSettings *)settings;
  if ( !numberOfVertices )
    return 0i64;
  __asm
  {
    vmovaps [rsp+150h+var_50], xmm6
    vmovaps [rsp+150h+var_60], xmm7
  }
  if ( numberOfVertices <= 0 )
  {
LABEL_7:
    if ( fnCollisionCheck(_R15, settings, &_R15->desiredVelocity, (float *)&v101) == AVOIDANCE_SUCCESS )
    {
      if ( _R15->drawAvoidance )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r15+10h]
          vaddss  xmm1, xmm0, dword ptr [r15+1Ch]
          vmovss  xmm2, dword ptr [r15+20h]
          vaddss  xmm0, xmm2, dword ptr [r15+14h]
          vmovss  dword ptr [rsp+150h+var_F8], xmm1
          vmovss  xmm1, dword ptr [r15+24h]
          vaddss  xmm2, xmm1, dword ptr [r15+18h]
          vmovss  xmm1, cs:__real@40a00000; radius
          vmovss  dword ptr [rsp+150h+var_F8+8], xmm2
          vmovss  dword ptr [rsp+150h+var_F8+4], xmm0
        }
        G_DebugCircle(&v106, *(float *)&_XMM1, &colorGreen, 0, 1, 0);
      }
      *outAvoidingVelocity = _R15->desiredVelocity;
      result = 5i64;
    }
    else
    {
      *outAvoidingVelocity = _R15->desiredVelocity;
      result = 4i64;
    }
    goto LABEL_35;
  }
  __asm
  {
    vmovss  xmm5, dword ptr [rcx+1Ch]
    vmovss  xmm6, dword ptr [rcx+20h]
  }
  v19 = 0i64;
  v20 = 1;
  _R9 = _R13;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  while ( 1 )
  {
    __asm
    {
      vmovss  xmm4, dword ptr [r9+4]
      vsubss  xmm0, xmm5, dword ptr [r9]
    }
    _RCX = 3i64 * (v20 % (int)v14);
    __asm
    {
      vsubss  xmm1, xmm4, dword ptr [r13+rcx*4+4]
      vmulss  xmm3, xmm1, xmm0
      vmovss  xmm1, dword ptr [r13+rcx*4+0]
      vsubss  xmm2, xmm1, dword ptr [r9]
      vsubss  xmm0, xmm6, xmm4
      vmulss  xmm2, xmm2, xmm0
      vaddss  xmm1, xmm3, xmm2
      vcomiss xmm1, xmm7
    }
    if ( v55 )
      break;
    ++v20;
    ++v19;
    ++_R9;
    if ( v19 >= v14 )
      goto LABEL_7;
  }
  v56 = !_R15->drawAvoidance;
  __asm
  {
    vmovaps [rsp+150h+var_70], xmm8
    vmovaps [rsp+150h+var_80], xmm9
    vmovss  xmm9, cs:__real@40a00000
    vmovaps [rsp+150h+var_90], xmm10
  }
  if ( !v56 )
  {
    __asm
    {
      vmovups xmm0, cs:__xmm@3f8000003f800000000000003f800000
      vmovss  xmm1, dword ptr [rsi+8]; radius
      vmovups xmmword ptr [rsp+150h+color], xmm0
    }
    G_DebugCircle(&_R15->position, *(float *)&_XMM1, &color, 0, 1, 0);
    __asm
    {
      vmovss  xmm0, dword ptr [r15+1Ch]
      vaddss  xmm1, xmm0, dword ptr [r15+10h]
      vmovss  xmm2, dword ptr [r15+20h]
      vaddss  xmm0, xmm2, dword ptr [r15+14h]
      vmovss  dword ptr [rsp+150h+center], xmm1
      vmovss  xmm1, dword ptr [r15+24h]
      vaddss  xmm2, xmm1, dword ptr [r15+18h]
      vmovaps xmm1, xmm9; radius
      vmovss  dword ptr [rsp+150h+center+8], xmm2
      vmovss  dword ptr [rsp+150h+center+4], xmm0
    }
    G_DebugCircle(&center, *(float *)&_XMM1, &colorRed, 0, 1, 0);
  }
  __asm
  {
    vmovss  xmm10, cs:__real@3e2aaaab
    vmovss  xmm8, cs:__real@3f800000
  }
  v45 = settingsa;
  v46 = 0;
  v47 = 0;
  *(_QWORD *)center.v = _R13;
  __asm { vmovaps xmm6, xmm7 }
  v49 = _R13;
  do
  {
    numberOfFoundPointsOut = 0;
    v101 = v47 + 1;
    GetPointsFromSegment(_R15, v45, v49, &_R13[(v47 + 1) % (int)v14], (vec3_t (*)[4])resultingPoints, &numberOfFoundPointsOut);
    if ( numberOfFoundPointsOut <= 0 )
      goto LABEL_25;
    _RBX = &resultingPoints[0].v[2];
    v52 = (unsigned int)numberOfFoundPointsOut;
    v53 = resultingPoints;
    do
    {
      v54 = v104(_R15, v45, v53, (float *)&v100);
      v55 = 0;
      v56 = !_R15->drawAvoidance;
      v57 = v54;
      if ( _R15->drawAvoidance )
      {
        __asm
        {
          vmulss  xmm1, xmm10, [rsp+150h+var_11C]
          vmaxss  xmm1, xmm1, xmm7
          vminss  xmm2, xmm1, xmm8
          vsubss  xmm0, xmm8, xmm2
          vmovss  dword ptr [rsp+150h+color], xmm0
          vmovss  xmm0, dword ptr [rbx-8]
          vaddss  xmm1, xmm0, dword ptr [r15+10h]
          vmovss  dword ptr [rsp+150h+color+4], xmm2
          vmovss  xmm2, dword ptr [rbx-4]
          vaddss  xmm0, xmm2, dword ptr [r15+14h]
          vmovss  dword ptr [rsp+150h+var_F8], xmm1
          vmovss  xmm1, dword ptr [r15+18h]
          vaddss  xmm2, xmm1, dword ptr [rbx]
          vmovaps xmm1, xmm9; radius
          vmovss  dword ptr [rsp+150h+var_F8+8], xmm2
          vmovss  dword ptr [rbp+50h+color+8], xmm7
          vmovss  dword ptr [rbp+50h+color+0Ch], xmm8
          vmovss  dword ptr [rsp+150h+var_F8+4], xmm0
        }
        G_DebugCircle(&v106, *(float *)&_XMM1, &color, 0, 1, 0);
      }
      __asm
      {
        vmovss  xmm0, [rsp+150h+var_11C]
        vucomiss xmm0, xmm7
      }
      if ( v56 )
      {
        if ( v57 <= v46 )
          goto LABEL_23;
        goto LABEL_22;
      }
      __asm { vcomiss xmm0, xmm6 }
      if ( !(v55 | v56) || v57 > v46 )
      {
        *outAvoidingVelocity = *(vec3_t *)(_RBX - 2);
        __asm { vmovaps xmm6, xmm0 }
LABEL_22:
        v46 = v57;
      }
LABEL_23:
      v45 = settingsa;
      ++v53;
      _RBX += 3;
      --v52;
    }
    while ( v52 );
    LODWORD(v14) = v102;
    v50 = *(const vec3_t **)center.v;
    _R13 = v105;
LABEL_25:
    v47 = v101;
    v49 = v50 + 1;
    *(_QWORD *)center.v = v49;
  }
  while ( v101 < (int)v14 );
  v70 = 0;
  v71 = !_R15->drawAvoidance;
  __asm { vmovaps xmm10, [rsp+150h+var_90] }
  if ( _R15->drawAvoidance )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vaddss  xmm2, xmm0, dword ptr [r15+10h]
      vmovss  xmm3, dword ptr [r14+4]
      vaddss  xmm0, xmm3, dword ptr [r15+14h]
      vmovss  dword ptr [rsp+150h+var_F8], xmm2
      vmovss  xmm2, dword ptr [r14+8]
      vaddss  xmm3, xmm2, dword ptr [r15+18h]
      vmovaps xmm1, xmm9; radius
      vmovss  dword ptr [rsp+150h+var_F8+8], xmm3
      vmovss  dword ptr [rsp+150h+var_F8+4], xmm0
    }
    G_DebugCircle(&v106, *(float *)&_XMM1, &colorBlue, 0, 1, 0);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  xmm2, dword ptr [r14]
    vmovss  xmm3, dword ptr [r14+8]
    vmovaps xmm9, [rsp+150h+var_80]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vcomiss xmm2, xmm8
    vmovaps xmm8, [rsp+150h+var_70]
  }
  if ( !(v70 | v71) || ((v46 - 1) & 0xFFFFFFFB) != 0 )
    result = (unsigned int)v46;
  else
    result = 2i64;
LABEL_35:
  __asm
  {
    vmovaps xmm6, [rsp+150h+var_50]
    vmovaps xmm7, [rsp+150h+var_60]
  }
  return result;
}

/*
==============
BuildVelocityObstaclePlanes
==============
*/
void BuildVelocityObstaclePlanes(const AvoidingEntityInfo *avoidingEntityInfo, const AvoidSettings *settings, const OrcaColliderInfo *colliderInfos, int numberOfColliders, vec4_t *planes, int *numberOfPlanesOut)
{
  __int64 v6; 
  AINavigator *Navigator; 
  AINavigator2D *v10; 
  const bfx::PathSpec *PathSpec; 
  const bfx::AreaHandle *hHintArea; 
  const bfx::PathSpec *v13; 
  const bfx::PathSpec *v31; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  bfx::AreaHandle desiredVelocityPointArea; 
  AvoidSettings *settingsa; 
  int *v47; 
  bfx::AreaHandle hStartArea; 
  __int64 v49; 
  vec3_t pos; 
  vec4_t color; 
  vec3_t center; 
  vec4_t outPlane; 
  vec3_t outSnappedPos; 

  v49 = -2i64;
  v6 = numberOfColliders;
  _RDI = colliderInfos;
  settingsa = (AvoidSettings *)settings;
  _RSI = avoidingEntityInfo;
  *(_QWORD *)center.v = planes;
  v47 = numberOfPlanesOut;
  bfx::AreaHandle::AreaHandle(&desiredVelocityPointArea);
  Navigator = Nav_GetNavigator(_RSI->ent);
  if ( !Navigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\orca_avoidance.cpp", 798, ASSERT_TYPE_ASSERT, "(pNavigator)", (const char *)&queryFormat, "pNavigator") )
    __debugbreak();
  v10 = Navigator->Get2DNavigator(Navigator);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\orca_avoidance.cpp", 800, ASSERT_TYPE_ASSERT, "(pNav2D)", (const char *)&queryFormat, "pNav2D") )
    __debugbreak();
  bfx::AreaHandle::AreaHandle(&hStartArea);
  PathSpec = AINavigator2D::GetPathSpec(v10);
  hHintArea = AINavigator2D::GetCurArea(v10);
  if ( Nav_IsPointOnMeshCustomWithHint(v10->m_pSpace, &_RSI->position, v10->m_Layer, PathSpec, &outSnappedPos, hHintArea, &hStartArea) && (v13 = AINavigator2D::GetPathSpec(v10), Nav_IsStraightLineReachable(&outSnappedPos, &hStartArea, &_RSI->posAlongPath->m_Pos, &_RSI->posAlongPath->m_hArea, v13)) )
  {
    _RDX = _RSI->posAlongPath;
    __asm
    {
      vmovss  xmm0, dword ptr [rdx]
      vmovss  dword ptr [rbp+47h+pos], xmm0
      vmovss  xmm1, dword ptr [rdx+4]
      vmovss  dword ptr [rbp+47h+pos+4], xmm1
      vmovss  xmm0, dword ptr [rdx+8]
      vmovss  dword ptr [rbp+47h+pos+8], xmm0
    }
    bfx::AreaHandle::operator=(&desiredVelocityPointArea, &_RDX->m_hArea);
    _RAX = _RSI->posAlongPath;
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vsubss  xmm1, xmm0, dword ptr [rsi+10h]
      vmovss  dword ptr [rbp+47h+color], xmm1
      vmovss  xmm2, dword ptr [rax+4]
      vsubss  xmm0, xmm2, dword ptr [rsi+14h]
      vmovss  dword ptr [rbp+47h+color+4], xmm0
      vmovss  xmm1, dword ptr [rax+8]
      vsubss  xmm2, xmm1, dword ptr [rsi+18h]
      vmovss  dword ptr [rbp+47h+color+8], xmm2
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+1Ch]
      vaddss  xmm1, xmm0, dword ptr [rsi+10h]
      vmovss  dword ptr [rbp+47h+pos], xmm1
      vmovss  xmm2, dword ptr [rsi+20h]
      vaddss  xmm0, xmm2, dword ptr [rsi+14h]
      vmovss  dword ptr [rbp+47h+pos+4], xmm0
      vmovss  xmm1, dword ptr [rsi+24h]
      vaddss  xmm2, xmm1, dword ptr [rsi+18h]
      vmovss  dword ptr [rbp+47h+pos+8], xmm2
    }
    v31 = AINavigator2D::GetPathSpec(v10);
    if ( !Nav_IsPointOnMeshCustom(v10->m_pSpace, &pos, v10->m_Layer, v31, &pos, &desiredVelocityPointArea) )
      bfx::AreaHandle::Release(&desiredVelocityPointArea);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+28h]
      vmovss  dword ptr [rbp+47h+color], xmm0
      vmovss  xmm1, dword ptr [rsi+2Ch]
      vmovss  dword ptr [rbp+47h+color+4], xmm1
      vmovss  xmm0, dword ptr [rsi+30h]
      vmovss  dword ptr [rbp+47h+color+8], xmm0
    }
  }
  v35 = *numberOfPlanesOut;
  if ( v6 > 0 )
  {
    v36 = *numberOfPlanesOut;
    v37 = 0i64;
    _RBX = *(_QWORD *)center.v + 16 * v35 + 8;
    do
    {
      if ( _RSI->drawAvoidance )
      {
        __asm
        {
          vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000
          vmovups xmmword ptr [rbp+47h+color], xmm0
          vmovss  xmm1, dword ptr [rdi+4]
          vmovss  dword ptr [rbp+47h+center], xmm1
          vmovss  xmm0, dword ptr [rdi+8]
          vmovss  dword ptr [rbp+47h+center+4], xmm0
          vmovss  xmm1, dword ptr [rsi+18h]
          vmovss  dword ptr [rbp+47h+center+8], xmm1
          vmovss  xmm1, dword ptr [rdi]; radius
        }
        G_DebugCircle(&center, *(float *)&_XMM1, &color, 0, 1, 0);
      }
      GetVelocityObstaclePlane(_RSI, settingsa, (const vec3_t *)&color, &pos, &desiredVelocityPointArea, _RDI, &outPlane);
      if ( v36 >= 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\orca_avoidance.cpp", 841, ASSERT_TYPE_ASSERT, "(numberOfPlanes < 32)", (const char *)&queryFormat, "numberOfPlanes < MAX_PLANES") )
        __debugbreak();
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+47h+outPlane]
        vmovups xmmword ptr [rbx-8], xmm0
      }
      LODWORD(v35) = v35 + 1;
      ++v36;
      _RBX += 16i64;
      if ( v36 >= 32 )
        break;
      ++v37;
      ++_RDI;
    }
    while ( v37 < v6 );
  }
  *v47 = v35;
  bfx::AreaHandle::~AreaHandle(&hStartArea);
  bfx::AreaHandle::~AreaHandle(&desiredVelocityPointArea);
}

/*
==============
DrawPolygon
==============
*/
void DrawPolygon(const vec3_t (*polygon)[32], int numberOfVertices, const vec3_t *offset, const vec4_t *color)
{
  float *v6; 
  __int64 v7; 
  vec3_t end; 
  vec3_t start; 

  if ( numberOfVertices )
  {
    _RDI = offset;
    if ( numberOfVertices > 1i64 )
    {
      v6 = &(*polygon)[0].v[2];
      v7 = numberOfVertices - 1i64;
      do
      {
        __asm
        {
          vmovss  xmm4, dword ptr [rdi]
          vaddss  xmm0, xmm4, dword ptr [rbx-8]
          vmovss  xmm3, dword ptr [rdi+4]
          vmovss  xmm2, dword ptr [rdi+8]
          vmovss  dword ptr [rsp+68h+start], xmm0
          vaddss  xmm0, xmm3, dword ptr [rbx-4]
          vmovss  dword ptr [rsp+68h+start+4], xmm0
          vaddss  xmm1, xmm2, dword ptr [rbx]
          vmovss  dword ptr [rsp+68h+start+8], xmm1
          vaddss  xmm0, xmm4, dword ptr [rbx+4]
          vmovss  dword ptr [rsp+68h+end], xmm0
          vaddss  xmm1, xmm3, dword ptr [rbx+8]
          vmovss  dword ptr [rsp+68h+end+4], xmm1
        }
        v6 += 3;
        __asm
        {
          vaddss  xmm0, xmm2, dword ptr [rbx]
          vmovss  dword ptr [rsp+68h+end+8], xmm0
        }
        G_DebugLine(&start, &end, color, 1);
        --v7;
      }
      while ( v7 );
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rdi]
      vmovss  xmm3, dword ptr [rdi+4]
      vmovss  xmm2, dword ptr [rdi+8]
      vaddss  xmm0, xmm1, dword ptr [rsi+rax*4-0Ch]
      vaddss  xmm1, xmm1, dword ptr [rsi]
      vmovss  dword ptr [rsp+68h+start], xmm0
      vaddss  xmm0, xmm3, dword ptr [rsi+rax*4-8]
      vmovss  dword ptr [rsp+68h+start+4], xmm0
      vaddss  xmm0, xmm2, dword ptr [rsi+rax*4-4]
      vmovss  dword ptr [rsp+68h+start+8], xmm0
      vaddss  xmm0, xmm3, dword ptr [rsi+4]
      vmovss  dword ptr [rsp+68h+end], xmm1
      vaddss  xmm1, xmm2, dword ptr [rsi+8]
      vmovss  dword ptr [rsp+68h+end+4], xmm0
      vmovss  dword ptr [rsp+68h+end+8], xmm1
    }
    G_DebugLine(&start, &end, color, 1);
  }
}

/*
==============
GetPointsFromSegment
==============
*/
void GetPointsFromSegment(const AvoidingEntityInfo *avoidingEntityInfo, const AvoidSettings *settings, const vec3_t *pointA, const vec3_t *pointB, vec3_t (*resultingPoints)[4], int *numberOfFoundPointsOut)
{
  char v26; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm2, dword ptr [r9]
    vmovss  xmm3, dword ptr [r8]
    vmovss  xmm1, dword ptr [r9+4]
    vmovss  xmm5, dword ptr [r8+4]
    vmovss  xmm0, dword ptr [r9+8]
  }
  _R11 = resultingPoints;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vsubss  xmm7, xmm0, dword ptr [r8+8]
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vxorps  xmm10, xmm10, xmm10
    vsubss  xmm9, xmm2, xmm3
    vucomiss xmm9, xmm10
    vsubss  xmm8, xmm1, xmm5
    vucomiss xmm8, xmm10
    vucomiss xmm7, xmm10
    vmovss  dword ptr [r11], xmm9
    vmovss  dword ptr [r11+4], xmm8
    vmovss  dword ptr [r11+8], xmm7
  }
  *numberOfFoundPointsOut = 1;
  _R11 = &v26;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
GetVelocityObstaclePlane
==============
*/
void GetVelocityObstaclePlane(const AvoidingEntityInfo *avoidingEntityInfo, const AvoidSettings *settings, const vec3_t *desiredVelocity, const vec3_t *desiredVelocityPoint, const bfx::AreaHandle *desiredVelocityPointArea, const OrcaColliderInfo *colliderInfo, vec4_t *outPlane)
{
  bool v85; 
  AINavigator *Navigator; 
  __int64 v87; 
  nav_space_s *v88; 
  const bfx::PathSpec *PathSpec; 
  AINavLayer v90; 
  char v94; 
  __int64 v95; 
  nav_space_s *v99; 
  bool IsStraightLineReachable; 
  bool IsValid; 
  char v138; 
  bool v139; 
  bool v181; 
  __int64 v228; 
  int v229; 
  AINavLayer layer; 
  const OrcaColliderInfo *v238; 
  nav_space_s *pSpace; 
  bfx::AreaHandle *hEndArea; 
  bfx::AreaHandle hStartArea; 
  vec3_t *endPos; 
  vec4_t *v249; 
  bfx::AreaHandle v250; 
  bfx::AreaHandle hHintArea; 
  __int64 v252; 
  vec3_t outSnappedPos; 
  vec3_t pos; 
  vec3_t v255; 
  vec3_t startPos; 
  vec3_t v257; 
  int v260[4]; 
  char v261; 
  void *retaddr; 

  _RAX = &retaddr;
  v252 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  endPos = (vec3_t *)desiredVelocityPoint;
  hEndArea = (bfx::AreaHandle *)desiredVelocityPointArea;
  v238 = colliderInfo;
  _R13 = outPlane;
  v249 = outPlane;
  _RBX = &colliderInfo->position;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vsubss  xmm5, xmm0, dword ptr [rcx+10h]
    vmovss  xmm1, dword ptr [rbx+4]
    vsubss  xmm6, xmm1, dword ptr [rcx+14h]
    vmovss  xmm8, cs:__real@3f800000
    vdivss  xmm2, xmm8, dword ptr [rdx+20h]
    vmulss  xmm13, xmm5, xmm2
    vmovss  [rsp+220h+var_1AC], xmm13
    vmulss  xmm14, xmm6, xmm2
    vmovss  [rsp+220h+var_1A8], xmm14
    vmovss  xmm0, dword ptr [rdx+10h]
    vaddss  xmm1, xmm0, dword ptr [rax]
    vmulss  xmm15, xmm2, xmm1
    vmovss  [rsp+220h+var_1A4], xmm15
    vaddss  xmm3, xmm15, cs:__real@40a00000
    vmulss  xmm2, xmm14, xmm14
    vmulss  xmm0, xmm13, xmm13
    vaddss  xmm7, xmm2, xmm0
    vmulss  xmm1, xmm3, xmm3
    vcomiss xmm7, xmm1
  }
  if ( (unsigned __int64)&v228 != _security_cookie )
  {
    __asm
    {
      vmovss  xmm3, cs:__real@3f000000
      vmulss  xmm1, xmm13, xmm3
      vmulss  xmm2, xmm14, xmm3
      vsqrtss xmm0, xmm7, xmm7
      vmulss  xmm5, xmm0, xmm3
      vsubss  xmm9, xmm1, xmm13
      vsubss  xmm10, xmm2, xmm14
      vmulss  xmm1, xmm10, xmm10
      vmulss  xmm0, xmm9, xmm9
      vaddss  xmm2, xmm1, xmm0
      vsqrtss xmm4, xmm2, xmm2
      vmulss  xmm11, xmm15, xmm15
      vmulss  xmm0, xmm7, cs:__real@3e800000
      vsubss  xmm1, xmm11, xmm0
      vaddss  xmm2, xmm1, xmm2
      vdivss  xmm0, xmm3, xmm4
      vmulss  xmm3, xmm2, xmm0
      vdivss  xmm12, xmm8, xmm4
      vmulss  xmm1, xmm3, xmm12
      vmulss  xmm0, xmm1, xmm9
      vaddss  xmm7, xmm0, xmm13
      vmulss  xmm1, xmm1, xmm10
      vaddss  xmm6, xmm1, xmm14
      vsubss  xmm0, xmm15, xmm5
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vxorps  xmm13, xmm13, xmm13
      vcomiss xmm4, xmm0
      vmulss  xmm0, xmm3, xmm3
      vsubss  xmm1, xmm11, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vmulss  xmm3, xmm2, xmm12
      vmulss  xmm4, xmm3, xmm10
      vmulss  xmm0, xmm3, xmm9
      vaddss  xmm9, xmm0, xmm6
      vsubss  xmm12, xmm7, xmm4
      vmovss  [rbp+120h+var_F0], xmm12
      vmovss  [rbp+120h+var_EC], xmm9
      vsubss  xmm6, xmm6, xmm0
      vaddss  xmm7, xmm7, xmm4
      vxorps  xmm11, xmm11, xmm11
      vxorps  xmm10, xmm10, xmm10
      vmovss  [rbp+120h+var_DC], xmm11
      vmovss  [rbp+120h+var_E0], xmm6
      vmovss  [rbp+120h+var_E4], xmm7
      vmovss  [rbp+120h+var_E8], xmm10
      vmovss  xmm0, dword ptr [rcx+28h]
      vsubss  xmm14, xmm0, dword ptr [rax+10h]
      vmovss  xmm1, dword ptr [rcx+2Ch]
      vsubss  xmm15, xmm1, dword ptr [rax+14h]
      vmovss  xmm0, dword ptr [rcx+30h]
      vsubss  xmm0, xmm0, dword ptr [rax+18h]
      vmovss  [rsp+220h+var_1B0], xmm0
      vxorps  xmm1, xmm1, xmm1
      vmovss  [rsp+220h+var_1D4], xmm1
      vxorps  xmm2, xmm2, xmm2
      vmovss  [rsp+220h+var_1D0], xmm2
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+220h+var_1DC], xmm0
      vmovss  [rsp+220h+var_1D8], xmm1
      vmovss  xmm5, cs:__real@bf800000
      vmovss  [rsp+220h+var_1C8], xmm5
      vmovss  xmm2, cs:__real@7f7fffff
      vmovss  dword ptr [rsp+220h+var_1C0], xmm2
    }
    v85 = 0;
    Navigator = Nav_GetNavigator(avoidingEntityInfo->ent);
    v87 = (__int64)Navigator->Get2DNavigator(Navigator);
    if ( !v87 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\orca_avoidance.cpp", 630, ASSERT_TYPE_ASSERT, "(pNav2D)", (const char *)&queryFormat, "pNav2D") )
      __debugbreak();
    pSpace = Navigator->m_pSpace;
    v88 = pSpace;
    PathSpec = AINavigator2D::GetPathSpec((AINavigator2D *)v87);
    v90 = *(_DWORD *)(v87 + 112);
    layer = v90;
    bfx::AreaHandle::AreaHandle(&hHintArea, &v238->hArea);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  dword ptr [rbp+120h+outSnappedPos], xmm0
      vmovss  xmm1, dword ptr [rbx+4]
      vmovss  dword ptr [rbp+120h+outSnappedPos+4], xmm1
      vmovss  xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rbp+120h+outSnappedPos+8], xmm0
    }
    LOBYTE(v229) = Nav_IsPointOnMeshCustomWithHint(v88, _RBX, v90, PathSpec, &outSnappedPos, &hHintArea, &hHintArea);
    __asm { vucomiss xmm12, xmm7 }
    if ( !v94 )
      goto LABEL_8;
    __asm { vucomiss xmm9, xmm6 }
    if ( !v94 )
      goto LABEL_8;
    __asm { vucomiss xmm10, xmm11 }
    v95 = 1i64;
    if ( !v94 )
LABEL_8:
      v95 = 2i64;
    __asm { vmovaps xmm5, xmm8 }
    _R14 = v260;
    __asm { vmovss  xmm10, cs:__real@80000000 }
    v99 = pSpace;
    _RAX = v238;
    do
    {
      __asm
      {
        vmovss  xmm4, [rsp+220h+var_1C8]
        vmovss  [rbp+120h+var_19C], xmm4
        vmovss  xmm7, dword ptr [r14-4]
        vmovss  xmm6, dword ptr [r14-8]
        vmovss  xmm9, dword ptr [r14]
        vmulss  xmm1, xmm6, xmm6
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm9, xmm9
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, xmm10
        vblendvps xmm1, xmm3, xmm8, xmm0
        vmovss  [rsp+220h+var_1CC], xmm1
        vdivss  xmm0, xmm8, xmm1
        vmulss  xmm10, xmm6, xmm0
        vmulss  xmm11, xmm7, xmm0
        vmulss  xmm12, xmm0, xmm9
        vmulss  xmm0, xmm11, xmm4
        vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm4, xmm10, xmm4
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm3, xmm3
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm1, xmm2, xmm8, xmm0
        vmovss  [rsp+220h+var_1CC], xmm1
        vdivss  xmm0, xmm8, xmm1
        vmulss  xmm1, xmm3, xmm0
        vmovss  [rsp+220h+var_1CC], xmm1
        vmulss  xmm0, xmm4, xmm0
        vmovss  [rbp+120h+var_1A0], xmm0
      }
      IsStraightLineReachable = 0;
      __asm
      {
        vmovss  [rsp+220h+var_1C8], xmm5
        vucomiss xmm13, dword ptr [rax+1Ch]
        vaddss  xmm0, xmm6, dword ptr [rdi+10h]
        vmovss  dword ptr [rbp+120h+pos], xmm0
        vaddss  xmm1, xmm7, dword ptr [rdi+14h]
        vmovss  dword ptr [rbp+120h+pos+4], xmm1
        vaddss  xmm2, xmm9, dword ptr [rdi+18h]
        vmovss  dword ptr [rbp+120h+pos+8], xmm2
        vmovss  xmm0, dword ptr [rbp+120h+outSnappedPos]
        vmovss  dword ptr [rbp+120h+var_120], xmm0
        vmovss  xmm1, dword ptr [rbp+120h+outSnappedPos+4]
        vmovss  dword ptr [rbp+120h+var_120+4], xmm1
        vmovss  dword ptr [rbp+120h+var_120+8], xmm2
      }
      IsValid = bfx::AreaHandle::IsValid(hEndArea);
      v138 = 0;
      v139 = !IsValid;
      if ( IsValid )
      {
        bfx::AreaHandle::AreaHandle(&hStartArea);
        if ( Nav_IsPointOnMeshCustom(v99, &pos, layer, PathSpec, &startPos, &hStartArea) && Nav_IsStraightLineReachable(&startPos, &hStartArea, endPos, hEndArea, PathSpec) )
        {
          if ( (_BYTE)v229 )
          {
            bfx::AreaHandle::AreaHandle(&v250);
            if ( Nav_IsPointOnMeshCustom(v99, &v255, layer, PathSpec, &v257, &v250) )
              IsStraightLineReachable = Nav_IsStraightLineReachable(&v257, &v250, &startPos, &hStartArea, PathSpec);
            bfx::AreaHandle::~AreaHandle(&v250);
          }
          else
          {
            IsStraightLineReachable = 1;
          }
        }
        bfx::AreaHandle::~AreaHandle(&hStartArea);
      }
      _RAX = v238;
      __asm
      {
        vmulss  xmm1, xmm10, xmm6
        vmulss  xmm0, xmm11, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm12, xmm9
        vaddss  xmm4, xmm2, xmm1
        vmulss  xmm3, xmm15, xmm11
        vmulss  xmm0, xmm14, xmm10
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm1, xmm12, [rsp+220h+var_1B0]
        vaddss  xmm5, xmm2, xmm1
        vcomiss xmm5, xmm4
      }
      if ( v138 )
      {
        __asm
        {
          vsubss  xmm3, xmm14, [rsp+220h+var_1AC]
          vsubss  xmm4, xmm15, [rsp+220h+var_1A8]
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm3, xmm3
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm2, xmm1, xmm1
          vmovss  xmm10, cs:__real@80000000
          vcmpless xmm0, xmm2, xmm10
          vblendvps xmm1, xmm2, xmm8, xmm0
          vmovss  [rsp+220h+var_1CC], xmm1
          vdivss  xmm0, xmm8, xmm1
          vmulss  xmm6, xmm0, xmm3
          vmulss  xmm7, xmm0, xmm4
          vmulss  xmm0, xmm6, [rsp+220h+var_1A4]
          vaddss  xmm3, xmm0, [rsp+220h+var_1AC]
          vmulss  xmm1, xmm7, [rsp+220h+var_1A4]
          vaddss  xmm2, xmm1, [rsp+220h+var_1A8]
          vsubss  xmm4, xmm3, xmm14
          vsubss  xmm5, xmm2, xmm15
        }
      }
      else
      {
        __asm
        {
          vmulss  xmm0, xmm10, xmm5
          vmulss  xmm1, xmm11, xmm5
          vsubss  xmm4, xmm0, xmm14
          vsubss  xmm5, xmm1, xmm15
          vmulss  xmm1, xmm5, xmm5
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm2, xmm1, xmm1
          vmovss  xmm10, cs:__real@80000000
          vcmpless xmm0, xmm2, xmm10
          vblendvps xmm1, xmm2, xmm8, xmm0
          vdivss  xmm0, xmm8, xmm1
          vmulss  xmm6, xmm4, xmm0
          vmulss  xmm7, xmm5, xmm0
          vmulss  xmm1, xmm15, [rbp+120h+var_1A0]
          vmulss  xmm0, xmm14, [rsp+220h+var_1CC]
          vaddss  xmm2, xmm1, xmm0
          vcomiss xmm2, xmm13
        }
        if ( !(v138 | v139) )
        {
          __asm
          {
            vxorps  xmm6, xmm6, cs:__xmm@80000000800000008000000080000000
            vxorps  xmm7, xmm7, cs:__xmm@80000000800000008000000080000000
          }
        }
      }
      v181 = !v85;
      if ( v85 )
      {
        v181 = !IsStraightLineReachable;
        if ( !IsStraightLineReachable )
          goto LABEL_29;
      }
      __asm
      {
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm0, dword ptr [rsp+220h+var_1C0]
        vcomiss xmm0, xmm2
      }
      if ( !v181 )
        goto LABEL_28;
      if ( v85 || !IsStraightLineReachable )
      {
LABEL_29:
        __asm
        {
          vmovss  xmm6, [rsp+220h+var_1DC]
          vmovss  xmm7, [rsp+220h+var_1D8]
          vmovss  xmm0, [rsp+220h+var_1D4]
          vmovss  xmm2, [rsp+220h+var_1D0]
        }
      }
      else
      {
LABEL_28:
        v85 = IsStraightLineReachable;
        __asm
        {
          vmovss  dword ptr [rsp+220h+var_1C0], xmm2
          vmovaps xmm0, xmm4
          vmovss  [rsp+220h+var_1D4], xmm4
          vmovaps xmm2, xmm5
          vmovss  [rsp+220h+var_1D0], xmm5
          vmovss  [rsp+220h+var_1DC], xmm6
          vmovss  [rsp+220h+var_1D8], xmm7
        }
      }
      _R14 += 3;
      __asm { vmovss  xmm5, [rbp+120h+var_19C] }
      --v95;
    }
    while ( v95 );
    __asm
    {
      vsubss  xmm1, xmm8, dword ptr [rax+1Ch]
      vmulss  xmm0, xmm0, xmm1
      vaddss  xmm5, xmm0, dword ptr [rdi+28h]
      vmulss  xmm1, xmm2, xmm1
      vaddss  xmm4, xmm1, dword ptr [rdi+2Ch]
      vmulss  xmm2, xmm7, xmm7
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm1, xmm2, xmm0
      vsqrtss xmm3, xmm1, xmm1
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm1, xmm3, xmm8, xmm0
      vdivss  xmm0, xmm8, xmm1
      vmulss  xmm2, xmm6, xmm0
      vmulss  xmm3, xmm7, xmm0
      vmulss  xmm1, xmm4, xmm3
      vmulss  xmm0, xmm5, xmm2
      vaddss  xmm4, xmm1, xmm0
    }
    _R13 = (__int64)v249;
    __asm
    {
      vmovss  dword ptr [r13+0], xmm2
      vmovss  dword ptr [r13+4], xmm3
    }
    *(_DWORD *)(_R13 + 8) = 0;
    __asm { vmovss  dword ptr [r13+0Ch], xmm4 }
    bfx::AreaHandle::~AreaHandle(&hHintArea);
  }
  else
  {
    __asm
    {
      vmulss  xmm1, xmm6, xmm6
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm8, xmm0
      vdivss  xmm4, xmm8, xmm0
      vmulss  xmm1, xmm5, xmm4
      vxorps  xmm3, xmm1, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm0, xmm6, xmm4
      vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [r13+0], xmm3
      vmovss  dword ptr [r13+4], xmm2
    }
    *(_QWORD *)&outPlane->xyz.z = 0i64;
  }
  _R11 = &v261;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
ORCA_DoAvoidance
==============
*/
__int64 ORCA_DoAvoidance(AvoidingEntityInfo *avoidingEntityInfo, const AvoidSettings *settings, vec3_t *outAvoidingVelocity, AvoidanceResult (*fnCollisionCheck)(const AvoidingEntityInfo *, const AvoidSettings *, const vec3_t *, float *), int *outColliderEntNums, int *outColliderCount)
{
  signed __int64 v6; 
  void *v17; 
  int v20; 
  __int64 v27; 
  const gentity_s *ent; 
  __int64 (__fastcall ***v65)(_QWORD); 
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 
  char v68; 
  sentient_s *v74; 
  const gentity_s **p_ent; 
  AICommonInterface *m_pAI; 
  __int64 v78; 
  __int64 v79; 
  char v80; 
  bool v126; 
  bool v151; 
  AINavigator *pNavigator; 
  AINavigator2D *v186; 
  const bfx::AreaHandle *CurArea; 
  _DWORD *v188; 
  unsigned __int64 eTeam; 
  int v194; 
  bool v196; 
  gentity_s *ignoreEnt; 
  __int64 v214; 
  _DWORD *v263; 
  AINavigator *Navigator; 
  __int64 v267; 
  __int64 v279; 
  __int64 v280; 
  bool v285; 
  bool v286; 
  int v287; 
  int v288; 
  bool v289; 
  bool v292; 
  int v302; 
  unsigned int v303; 
  const dvar_t *v313; 
  __int64 result; 
  int destructor; 
  int *numberOfPlanesOut; 
  __int64 v336; 
  int numberOfVerticesOut; 
  int v338; 
  AvoidSettings *settingsa; 
  AIActorInterface v351; 
  AIAgentInterface v352; 
  __int64 (__fastcall ***v353)(_QWORD); 
  __int64 v354; 
  AICommonWrapper v355; 
  Bounds box; 
  vec4_t plane; 
  bitarray<224> iTeamFlags; 
  AvoidanceResult (__fastcall *fnCollisionChecka[2])(const AvoidingEntityInfo *, const AvoidSettings *, const vec3_t *, float *); 
  vec4_t color; 
  vec3_t *outAvoidingVelocitya[2]; 
  char v362[20]; 
  bfx::AreaHandle v363; 
  bfx::LinkHandle v364; 
  vec3_t polygon[32]; 
  vec4_t planes[32]; 
  OrcaColliderInfo ptr[272]; 
  char v378; 

  v17 = alloca(v6);
  v354 = -2i64;
  __asm
  {
    vmovaps [rsp+3DE0h+var_50], xmm6
    vmovaps [rsp+3DE0h+var_60], xmm7
    vmovaps [rsp+3DE0h+var_70], xmm8
    vmovaps [rsp+3DE0h+var_80], xmm9
    vmovaps [rsp+3DE0h+var_90], xmm10
    vmovaps [rsp+3DE0h+var_A0], xmm11
    vmovaps [rsp+3DE0h+var_B0], xmm12
    vmovaps [rsp+3DE0h+var_C0], xmm13
    vmovaps [rsp+3DE0h+var_D0], xmm14
    vmovaps [rsp+3DE0h+var_E0], xmm15
  }
  fnCollisionChecka[0] = fnCollisionCheck;
  outAvoidingVelocitya[0] = outAvoidingVelocity;
  _RDI = settings;
  settingsa = (AvoidSettings *)settings;
  _R15 = avoidingEntityInfo;
  *(_QWORD *)plane.v = outColliderEntNums;
  *(_QWORD *)color.v = outColliderCount;
  `eh vector constructor iterator'(ptr, 0x34ui64, 0x110ui64, (void (__fastcall *)(void *))OrcaColliderInfo::OrcaColliderInfo, (void (__fastcall *)(void *))OrcaColliderInfo::~OrcaColliderInfo);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Orca_DoAvoidance");
  v20 = 0;
  numberOfVerticesOut = 0;
  __asm
  {
    vmovss  xmm2, dword ptr [r15+10h]
    vmovss  dword ptr [rbp+3CE0h+box.midPoint], xmm2
    vmovss  xmm3, dword ptr [r15+14h]
    vmovss  dword ptr [rbp+3CE0h+box.midPoint+4], xmm3
    vmovss  xmm4, dword ptr [r15+18h]
    vmovss  dword ptr [rbp+3CE0h+box.midPoint+8], xmm4
    vmovss  xmm0, dword ptr [rdi+14h]
    vmovss  dword ptr [rbp+3CE0h+box.halfSize], xmm0
    vmovss  xmm1, dword ptr [rdi+18h]
    vmovss  dword ptr [rbp+3CE0h+box.halfSize+4], xmm1
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vmovss  dword ptr [rbp+3CE0h+box.halfSize+8], xmm0
  }
  v27 = 0i64;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+34h]
    vsubss  xmm7, xmm0, xmm2
    vmovss  xmm1, dword ptr [r15+38h]
    vsubss  xmm6, xmm1, xmm3
    vmovss  xmm0, dword ptr [r15+3Ch]
    vsubss  xmm5, xmm0, xmm4
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm0, xmm3, xmm0
    vmovss  [rsp+3DE0h+var_3D70], xmm0
    vsqrtss xmm8, xmm0, xmm0
    vmovss  xmm12, cs:__real@80000000
    vcmpless xmm0, xmm8, xmm12
    vmovss  xmm11, cs:__real@3f800000
    vblendvps xmm1, xmm8, xmm11, xmm0
    vmovss  [rsp+3DE0h+var_3D80], xmm1
    vdivss  xmm0, xmm11, xmm1
    vmulss  xmm1, xmm0, xmm7
    vmovss  [rsp+3DE0h+var_3D68], xmm1
    vmulss  xmm1, xmm0, xmm6
    vmovss  [rsp+3DE0h+var_3D6C], xmm1
    vmulss  xmm0, xmm0, xmm5
    vmovss  [rsp+3DE0h+var_3D64], xmm0
    vmovss  xmm5, dword ptr [r15+2Ch]
    vmovss  xmm3, dword ptr [r15+28h]
    vmovss  xmm4, dword ptr [r15+30h]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm2, xmm2, xmm2
    vmovss  [rsp+3DE0h+var_3D80], xmm2
    vcmpless xmm0, xmm2, xmm12
    vblendvps xmm1, xmm2, xmm11, xmm0
    vmovss  [rsp+3DE0h+var_3D84], xmm1
    vdivss  xmm0, xmm11, xmm1
    vmulss  xmm1, xmm3, xmm0
    vmovss  [rsp+3DE0h+var_3D78], xmm1
    vmulss  xmm1, xmm5, xmm0
    vmovss  [rsp+3DE0h+var_3D7C], xmm1
    vmulss  xmm0, xmm4, xmm0
    vmovss  [rsp+3DE0h+var_3D74], xmm0
    vdivss  xmm0, xmm8, xmm2
    vmovss  [rsp+3DE0h+var_3D8C], xmm0
  }
  ent = _R15->ent;
  AIActorInterface::AIActorInterface(&v351);
  AIAgentInterface::AIAgentInterface(&v352);
  v352.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  v65 = NULL;
  v353 = NULL;
  if ( !ent )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 79, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    v65 = v353;
  }
  if ( ent->agent )
  {
    if ( SV_Agent_IsScripted(ent->s.number) )
    {
      ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(ent);
      if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
        __debugbreak();
      if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
        __debugbreak();
      AINewAgentInterface::SetAgent((AINewAgentInterface *)&v352, ScriptedAgentInfo);
      v65 = (__int64 (__fastcall ***)(_QWORD))&v352;
      v353 = (__int64 (__fastcall ***)(_QWORD))&v352;
      goto LABEL_21;
    }
    v65 = v353;
  }
  actor = ent->actor;
  if ( actor )
  {
    if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
      __debugbreak();
    AIActorInterface::SetActor(&v351, ent->actor);
    v65 = (__int64 (__fastcall ***)(_QWORD))&v351;
    v353 = (__int64 (__fastcall ***)(_QWORD))&v351;
    goto LABEL_21;
  }
  v68 = 0;
  if ( v65 )
LABEL_21:
    v27 = (**v65)(v65);
  __asm
  {
    vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm9, dword ptr [rdi+4]
  }
  if ( v68 )
  {
    _RAX = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? Com_TeamsSP_GetAllTeamFlags() : Com_TeamsMP_GetAllTeamFlags();
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbp+3CE0h+iTeamFlags.array], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rbp+3CE0h+iTeamFlags.array+10h], xmm1
    }
    iTeamFlags.array[6] = _RAX->array[6];
    v74 = Sentient_FirstSentient(&iTeamFlags);
    if ( v74 )
    {
      _RBX = &ptr[0].position.v[1];
      while ( 1 )
      {
        if ( v74->ent != _R15->ent && v74->ent != _R15->ignoreEnt )
        {
          p_ent = (const gentity_s **)&v74->ai->ent;
          if ( p_ent )
          {
            AIActorInterface::AIActorInterface(&v355.m_actorInterface);
            AIAgentInterface::AIAgentInterface(&v355.m_newAgentInterface);
            v355.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
            AICommonInterface::AICommonInterface(&v355.m_botInterface);
            v355.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
            AICommonInterface::AICommonInterface(&v355.m_botAgentInterface);
            v355.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
            v355.m_pAI = NULL;
            AICommonWrapper::Setup(&v355, *p_ent);
            m_pAI = v355.m_pAI;
            if ( !v355.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\orca_avoidance.cpp", 1151, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
              __debugbreak();
            if ( m_pAI->IsAlive(m_pAI) )
            {
              v78 = m_pAI->GetAI(m_pAI);
              if ( *(_BYTE *)(v78 + 442) )
              {
                v79 = numberOfVerticesOut;
                Sentient_GetOrigin(v74, &ptr[v79].position);
                __asm
                {
                  vmovss  xmm0, dword ptr [rbx-4]
                  vsubss  xmm1, xmm0, dword ptr [rbp+3CE0h+box.midPoint]
                  vandps  xmm1, xmm1, xmm6
                  vcomiss xmm1, dword ptr [rbp+3CE0h+box.halfSize]
                }
                if ( v80 )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbx]
                    vsubss  xmm1, xmm0, dword ptr [rbp+3CE0h+box.midPoint+4]
                    vandps  xmm1, xmm1, xmm6
                    vcomiss xmm1, dword ptr [rbp+3CE0h+box.halfSize+4]
                  }
                  if ( v80 )
                  {
                    __asm
                    {
                      vmovss  xmm0, dword ptr [rbx+4]
                      vsubss  xmm1, xmm0, dword ptr [rbp+3CE0h+box.midPoint+8]
                      vandps  xmm1, xmm1, xmm6
                      vcomiss xmm1, dword ptr [rbp+3CE0h+box.halfSize+8]
                    }
                    if ( v80 )
                    {
                      Sentient_GetVelocity(v74, &ptr[v79].velocity);
                      __asm
                      {
                        vmovss  xmm4, dword ptr [rbx+0Ch]
                        vmovss  xmm3, dword ptr [rbx+8]
                        vmovss  xmm5, dword ptr [rbx+10h]
                        vmulss  xmm1, xmm4, xmm4
                        vmulss  xmm0, xmm3, xmm3
                        vaddss  xmm2, xmm1, xmm0
                        vmulss  xmm1, xmm5, xmm5
                        vaddss  xmm2, xmm2, xmm1
                        vsqrtss xmm7, xmm2, xmm2
                        vcmpless xmm0, xmm7, xmm12
                        vblendvps xmm1, xmm7, xmm11, xmm0
                        vmovss  [rsp+3DE0h+var_3D84], xmm1
                        vdivss  xmm0, xmm11, xmm1
                        vmulss  xmm9, xmm0, xmm3
                        vmulss  xmm10, xmm0, xmm4
                        vmulss  xmm11, xmm0, xmm5
                        vmovss  xmm6, dword ptr [rbx-4]
                        vmovss  xmm14, dword ptr [r15+10h]
                        vsubss  xmm5, xmm6, xmm14
                        vmovss  xmm8, dword ptr [rbx]
                        vmovss  xmm15, dword ptr [r15+14h]
                        vsubss  xmm4, xmm8, xmm15
                        vmovss  xmm13, dword ptr [rbx+4]
                        vsubss  xmm3, xmm13, dword ptr [r15+18h]
                        vmulss  xmm1, xmm5, xmm5
                        vmulss  xmm0, xmm4, xmm4
                        vaddss  xmm2, xmm1, xmm0
                        vmulss  xmm1, xmm3, xmm3
                        vaddss  xmm2, xmm2, xmm1
                        vsqrtss xmm12, xmm2, xmm2
                        vcmpless xmm0, xmm12, cs:__real@80000000
                        vmovss  xmm2, cs:__real@3f800000
                        vblendvps xmm1, xmm12, xmm2, xmm0
                        vmovss  [rsp+3DE0h+var_3D84], xmm1
                        vdivss  xmm0, xmm2, xmm1
                        vmulss  xmm1, xmm0, xmm5
                        vmovss  [rbp+3CE0h+var_3D5C], xmm1
                        vmulss  xmm1, xmm0, xmm4
                        vmovss  [rbp+3CE0h+var_3D60], xmm1
                        vmulss  xmm0, xmm0, xmm3
                        vmovss  [rsp+3DE0h+var_3D84], xmm0
                      }
                      v126 = *(_BYTE *)(v78 + 441) == 0;
                      if ( !*(_BYTE *)(v78 + 441) )
                        goto LABEL_46;
                      __asm { vcomiss xmm7, cs:__real@41200000 }
                      if ( !*(_BYTE *)(v78 + 441) )
                        goto LABEL_46;
                      v126 = !settingsa->othersAvoidMe;
                      if ( settingsa->othersAvoidMe )
                      {
                        __asm
                        {
                          vmovss  xmm0, dword ptr [r15+34h]
                          vsubss  xmm6, xmm0, xmm6
                          vmovss  xmm1, dword ptr [r15+38h]
                          vsubss  xmm5, xmm1, xmm8
                          vmovss  xmm0, dword ptr [r15+3Ch]
                          vsubss  xmm4, xmm0, xmm13
                          vmulss  xmm2, xmm6, xmm6
                          vmulss  xmm1, xmm5, xmm5
                          vaddss  xmm3, xmm2, xmm1
                          vmulss  xmm0, xmm4, xmm4
                          vaddss  xmm2, xmm3, xmm0
                          vsqrtss xmm8, xmm2, xmm2
                          vcmpless xmm0, xmm8, cs:__real@80000000
                          vmovss  xmm2, cs:__real@3f800000
                          vblendvps xmm1, xmm8, xmm2, xmm0
                          vdivss  xmm2, xmm2, xmm1
                          vmulss  xmm4, xmm2, xmm4
                          vmulss  xmm0, xmm2, xmm5
                          vmulss  xmm3, xmm0, [rsp+3DE0h+var_3D6C]
                          vmulss  xmm1, xmm2, xmm6
                          vmulss  xmm2, xmm1, [rsp+3DE0h+var_3D68]
                          vaddss  xmm3, xmm3, xmm2
                          vmulss  xmm0, xmm4, [rsp+3DE0h+var_3D64]
                          vaddss  xmm1, xmm3, xmm0
                          vcomiss xmm1, cs:__real@00000000
                        }
                        _RBX[5] = *(float *)(v78 + 444);
                        v151 = v27 == 0;
                        if ( !v27 || (v151 = *(_BYTE *)(v27 + 2988) == 0, *(_BYTE *)(v27 + 2988)) )
                        {
                          __asm
                          {
                            vmovss  xmm8, [rsp+3DE0h+var_3D7C]
                            vmulss  xmm1, xmm8, [rbp+3CE0h+var_3D60]
                            vmovss  xmm6, [rsp+3DE0h+var_3D78]
                            vmulss  xmm0, xmm6, [rbp+3CE0h+var_3D5C]
                            vaddss  xmm2, xmm1, xmm0
                            vmovss  xmm13, [rsp+3DE0h+var_3D74]
                            vmulss  xmm1, xmm13, [rsp+3DE0h+var_3D84]
                            vaddss  xmm2, xmm2, xmm1
                            vcomiss xmm2, cs:__real@3f68b439
                          }
                          if ( !v151 )
                          {
                            __asm
                            {
                              vmulss  xmm1, xmm10, xmm8
                              vmulss  xmm0, xmm9, xmm6
                              vaddss  xmm2, xmm1, xmm0
                              vmulss  xmm1, xmm13, xmm11
                              vaddss  xmm2, xmm2, xmm1
                              vcomiss xmm2, cs:__real@3f770a3d
                            }
                            _RBX[5] = 0.0;
                            __asm
                            {
                              vmovss  xmm0, [rsp+3DE0h+var_3D80]
                              vcomiss xmm0, xmm7
                              vmovss  xmm11, cs:__real@3f800000
                              vcomiss xmm12, cs:__real@43160000
                              vmovss  xmm12, cs:__real@80000000
                            }
                            goto LABEL_54;
                          }
                        }
                      }
                      else
                      {
LABEL_46:
                        __asm { vucomiss xmm7, cs:__real@00000000 }
                        if ( v126 )
                        {
                          __asm
                          {
                            vmovss  xmm1, [rsp+3DE0h+var_3D70]
                            vsqrtss xmm0, xmm1, xmm1
                            vaddss  xmm0, xmm0, cs:__real@41c80000
                            vcomiss xmm0, xmm12
                          }
                        }
                        __asm
                        {
                          vsubss  xmm0, xmm14, xmm6
                          vsubss  xmm1, xmm15, xmm8
                          vmovss  xmm2, dword ptr [r15+18h]
                          vsubss  xmm3, xmm2, xmm13
                        }
                        if ( !*(_BYTE *)(v78 + 440) )
                          goto LABEL_52;
                        __asm
                        {
                          vmulss  xmm1, xmm1, xmm10
                          vmulss  xmm0, xmm0, xmm9
                          vaddss  xmm2, xmm1, xmm0
                          vmulss  xmm1, xmm3, xmm11
                          vaddss  xmm2, xmm2, xmm1
                          vcomiss xmm2, cs:__real@3f68b439
                        }
                        if ( !*(_BYTE *)(v78 + 440) )
                          goto LABEL_52;
                        __asm
                        {
                          vmulss  xmm1, xmm10, [rsp+3DE0h+var_3D7C]
                          vmulss  xmm0, xmm9, [rsp+3DE0h+var_3D78]
                          vaddss  xmm2, xmm1, xmm0
                          vmulss  xmm1, xmm11, [rsp+3DE0h+var_3D74]
                          vaddss  xmm2, xmm2, xmm1
                          vcomiss xmm2, cs:__real@3f770a3d
                        }
                        if ( *(_BYTE *)(v78 + 440) )
                          _RBX[5] = 1.0;
                        else
LABEL_52:
                          _RBX[5] = 0.0;
                      }
                      __asm
                      {
                        vmovss  xmm12, cs:__real@80000000
                        vmovss  xmm11, cs:__real@3f800000
                      }
LABEL_54:
                      pNavigator = v74->ai->pNavigator;
                      if ( pNavigator )
                      {
                        v186 = pNavigator->Get2DNavigator(pNavigator);
                        if ( v186 )
                        {
                          CurArea = AINavigator2D::GetCurArea(v186);
                          bfx::AreaHandle::operator=(&ptr[v79].hArea, CurArea);
                        }
                      }
                      *(_RBX - 2) = *(float *)(v78 + 456);
                      *((_DWORD *)_RBX + 10) = v74->ent->s.number;
                      v188 = *(_DWORD **)color.v;
                      *(_DWORD *)(*(_QWORD *)plane.v + 4i64 * (int)**(_DWORD **)color.v) = v74->ent->s.number;
                      ++*v188;
                      v20 = ++numberOfVerticesOut;
                      _RBX += 13;
                      __asm { vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
                      goto LABEL_59;
                    }
                  }
                }
              }
            }
          }
          v20 = numberOfVerticesOut;
        }
LABEL_59:
        v74 = Sentient_NextSentient(v74, &iTeamFlags);
        if ( !v74 )
        {
          __asm { vxorps  xmm9, xmm9, xmm9 }
          break;
        }
      }
    }
  }
  __asm
  {
    vmovss  xmm7, dword ptr [rbp+3CE0h+box.midPoint]
    vmovss  [rsp+3DE0h+var_3D80], xmm7
    vmovss  xmm15, dword ptr [rbp+3CE0h+box.midPoint+4]
    vmovss  xmm14, dword ptr [rbp+3CE0h+box.midPoint+8]
  }
  eTeam = (unsigned int)_R15->ent->sentient->eTeam;
  memset(&iTeamFlags, 0, sizeof(iTeamFlags));
  if ( (unsigned int)eTeam >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", eTeam, 224) )
    __debugbreak();
  iTeamFlags.array[eTeam >> 5] |= 0x80000000 >> (eTeam & 0x1F);
  v194 = Nav_TranslateTeamFlagsToRepulsorUsageFlags(&iTeamFlags);
  _RBX = Nav_GetFirstRepulsor();
  if ( _RBX )
  {
    v196 = (unsigned __int128)(52 * (__int128)v20) >> 64 != 0;
    _RDI = &ptr[v20].velocity.v[2];
    __asm { vmovss  xmm13, cs:__real@461c4000 }
    do
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+30h]
        vaddss  xmm4, xmm2, dword ptr [rbp+3CE0h+box.halfSize+4]
        vaddss  xmm3, xmm2, dword ptr [rbp+3CE0h+box.halfSize]
        vmovss  xmm2, dword ptr [rbp+3CE0h+box.halfSize+8]
        vmovss  xmm0, dword ptr [rbx+24h]
        vsubss  xmm1, xmm0, xmm7
        vandps  xmm1, xmm1, xmm6
        vcomiss xmm1, xmm3
      }
      if ( !v196 )
        goto LABEL_104;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+28h]
        vsubss  xmm1, xmm0, xmm15
        vandps  xmm1, xmm1, xmm6
        vcomiss xmm1, xmm4
      }
      if ( !v196 )
        goto LABEL_104;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+2Ch]
        vsubss  xmm1, xmm0, xmm14
        vandps  xmm1, xmm1, xmm6
        vcomiss xmm1, xmm2
      }
      if ( !v196 || _R15->ent && _R15->ent->s.number == _RBX->entNum )
        goto LABEL_104;
      ignoreEnt = _R15->ignoreEnt;
      if ( ignoreEnt )
      {
        if ( ignoreEnt->s.number == _RBX->entNum )
          goto LABEL_104;
      }
      if ( (v194 & _RBX->usageFlags) == 0 )
        goto LABEL_104;
      _R14 = &g_entities[_RBX->entNum];
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v214 = _R14 - g_entities;
      if ( (unsigned int)v214 >= 0x800 )
      {
        LODWORD(v336) = 2048;
        LODWORD(numberOfPlanesOut) = _R14 - g_entities;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", numberOfPlanesOut, v336) )
          __debugbreak();
      }
      v214 = (__int16)v214;
      if ( (unsigned int)(__int16)v214 >= 0x800 )
      {
        LODWORD(v336) = 2048;
        LODWORD(numberOfPlanesOut) = v214;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", numberOfPlanesOut, v336) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v214].r.isInUse != g_entityIsInUse[v214] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v214] && _R14->s.eType == ET_PLAYER )
      {
        __asm
        {
          vmovss  xmm4, dword ptr [r14+130h]
          vsubss  xmm7, xmm4, dword ptr [r15+10h]
          vmovss  xmm5, dword ptr [r14+134h]
          vsubss  xmm8, xmm5, dword ptr [r15+14h]
          vmovss  xmm6, dword ptr [r14+138h]
          vsubss  xmm9, xmm6, dword ptr [r15+18h]
          vmulss  xmm1, xmm8, xmm8
          vmulss  xmm0, xmm7, xmm7
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm9, xmm9
          vaddss  xmm10, xmm2, xmm1
          vsubss  xmm0, xmm10, cs:__real@451c4000
          vmovss  xmm1, [rsp+3DE0h+var_3D70]
          vcomiss xmm1, xmm0
        }
        if ( _R14->s.eType )
        {
          __asm { vxorps  xmm9, xmm9, xmm9 }
        }
        else
        {
          _RAX = _R14->client;
          __asm
          {
            vmovss  xmm2, dword ptr [rax+40h]
            vmovss  xmm0, dword ptr [rax+3Ch]
            vmovss  xmm3, dword ptr [rax+44h]
            vmulss  xmm1, xmm0, xmm0
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm12, xmm2, xmm2
            vucomiss xmm12, cs:__real@00000000
          }
          if ( _R14->s.eType == ET_PLAYER )
          {
            __asm { vxorps  xmm9, xmm9, xmm9 }
LABEL_103:
            v20 = numberOfVerticesOut;
            goto LABEL_104;
          }
          __asm
          {
            vsubss  xmm3, xmm4, dword ptr [r15+34h]
            vsubss  xmm4, xmm5, dword ptr [r15+38h]
            vsubss  xmm6, xmm6, dword ptr [r15+3Ch]
            vmulss  xmm1, xmm4, xmm4
            vmulss  xmm0, xmm3, xmm3
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm6, xmm6
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm11, xmm2, xmm2
            vcmpless xmm0, xmm11, cs:__real@80000000
            vmovss  xmm2, cs:__real@3f800000
            vblendvps xmm1, xmm11, xmm2, xmm0
            vdivss  xmm5, xmm2, xmm1
            vmulss  xmm0, xmm3, xmm5
            vmulss  xmm3, xmm0, xmm7
            vmulss  xmm1, xmm4, xmm5
            vmulss  xmm2, xmm1, xmm8
            vaddss  xmm4, xmm3, xmm2
            vmulss  xmm0, xmm6, xmm5
            vmulss  xmm1, xmm0, xmm9
            vaddss  xmm2, xmm4, xmm1
            vxorps  xmm9, xmm9, xmm9
            vcomiss xmm2, xmm9
          }
          if ( _R14->s.eType == ET_FIRST )
          {
            __asm
            {
              vdivss  xmm0, xmm11, xmm12
              vmovss  xmm1, [rsp+3DE0h+var_3D8C]
              vcomiss xmm1, xmm0
            }
            if ( _R14->s.eType == ET_FIRST )
              goto LABEL_103;
          }
        }
        if ( settingsa->pushPlayerEnabled )
          __asm { vcomiss xmm10, xmm13 }
        *(_RDI - 2) = _RBX->velocity.v[0];
        *(_RDI - 1) = _RBX->velocity.v[1];
        *_RDI = _RBX->velocity.v[2];
        _RDI[1] = 0.0;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+30h]
          vmulss  xmm1, xmm0, cs:__real@40000000
          vmovss  dword ptr [rdi-18h], xmm1
        }
        v263 = *(_DWORD **)color.v;
        *(_DWORD *)(*(_QWORD *)plane.v + 4i64 * (int)**(_DWORD **)color.v) = _RBX->entNum;
        ++*v263;
      }
      else
      {
        *(_RDI - 2) = _RBX->velocity.v[0];
        *(_RDI - 1) = _RBX->velocity.v[1];
        *_RDI = _RBX->velocity.v[2];
        _RDI[1] = 0.0;
        *(_RDI - 6) = _RBX->radius;
      }
      *(_RDI - 5) = _RBX->origin.v[0];
      *(_RDI - 4) = _RBX->origin.v[1];
      *(_RDI - 3) = _RBX->origin.v[2];
      v20 = ++numberOfVerticesOut;
      _RDI += 13;
      __asm { vxorps  xmm9, xmm9, xmm9 }
LABEL_104:
      _RBX = Nav_GetNextRepulsor(_RBX);
      v196 = 0;
      __asm
      {
        vmovss  xmm6, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmovss  xmm7, [rsp+3DE0h+var_3D80]
      }
    }
    while ( _RBX );
  }
  Navigator = Nav_GetNavigator(_R15->ent);
  v267 = (__int64)Navigator->Get2DNavigator(Navigator);
  __asm
  {
    vmovss  xmm2, dword ptr [r15+20h]
    vmovss  xmm0, dword ptr [r15+1Ch]
    vmovss  xmm3, dword ptr [r15+24h]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm6, xmm2, xmm2
  }
  bfx::AreaHandle::AreaHandle(&v363);
  bfx::LinkHandle::LinkHandle(&v364);
  _R12 = settingsa;
  __asm { vmulss  xmm1, xmm6, dword ptr [r12+20h] }
  LOBYTE(destructor) = 1;
  LOBYTE(v279) = 1;
  (*(void (__fastcall **)(__int64, __int64, __int64, char *, int))(*(_QWORD *)v267 + 416i64))(v267, v280, v279, v362, destructor);
  _R15->posAlongPath = (nav_posAlongPathResults_t *)v362;
  v338 = 0;
  BuildVelocityObstaclePlanes(_R15, _R12, ptr, v20, planes, &v338);
  __asm
  {
    vmovss  xmm1, dword ptr [r12+8]
    vmovss  dword ptr [rbp+3CE0h+polygon], xmm1
    vmovss  dword ptr [rbp+3CE0h+polygon+4], xmm1
    vmovss  dword ptr [rbp+3CE0h+polygon+8], xmm9
    vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
    vmovss  [rbp+3CE0h+var_3BA4], xmm0
    vmovss  [rbp+3CE0h+var_3BA0], xmm1
    vmovss  [rbp+3CE0h+var_3B9C], xmm9
    vmovss  [rbp+3CE0h+var_3B98], xmm0
    vmovss  [rbp+3CE0h+var_3B94], xmm0
    vmovss  [rbp+3CE0h+var_3B90], xmm9
    vmovss  [rbp+3CE0h+var_3B8C], xmm1
    vmovss  [rbp+3CE0h+var_3B88], xmm0
    vmovss  [rbp+3CE0h+var_3B84], xmm9
  }
  numberOfVerticesOut = 4;
  __asm
  {
    vmovss  xmm1, dword ptr [r15+20h]
    vmovss  xmm0, dword ptr [r15+1Ch]
    vmovss  dword ptr [rbp+3CE0h+plane], xmm0
    vmovss  dword ptr [rbp+3CE0h+plane+4], xmm1
    vmovss  dword ptr [rbp+3CE0h+plane+8], xmm9
    vmovss  dword ptr [rbp+3CE0h+plane+0Ch], xmm9
  }
  v285 = SplitPolygon(polygon, 32, &numberOfVerticesOut, &plane);
  v286 = !v285;
  if ( !v285 )
    goto LABEL_124;
  v287 = 0;
  v288 = v338;
  v289 = v338 == 0;
  if ( v338 <= 0 )
    goto LABEL_128;
  _RDI = &planes[0].xyz + 1;
  do
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r12+8]
      vcomiss xmm0, dword ptr [rdi]
    }
    if ( !v289 )
    {
      v292 = SplitPolygon(polygon, 32, &numberOfVerticesOut, &planes[v287]);
      v286 = !v292;
      if ( !v292 )
        break;
    }
    ++v287;
    _RDI = (vec3_t *)((char *)_RDI + 16);
    v289 = v287 <= (unsigned int)v288;
  }
  while ( v287 < v288 );
  if ( v286 )
  {
LABEL_124:
    Sys_ProfEndNamedEvent();
    v303 = 3;
  }
  else
  {
LABEL_128:
    if ( _R15->drawAvoidance )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r15+10h]
        vaddss  xmm1, xmm0, dword ptr [r15+1Ch]
        vmovss  dword ptr [rbp+3CE0h+plane], xmm1
        vmovss  xmm2, dword ptr [r15+14h]
        vaddss  xmm0, xmm2, dword ptr [r15+20h]
        vmovss  dword ptr [rbp+3CE0h+plane+4], xmm0
        vmovss  xmm1, dword ptr [r15+18h]
        vaddss  xmm2, xmm1, dword ptr [r15+24h]
        vmovss  dword ptr [rbp+3CE0h+plane+8], xmm2
        vmovups xmm0, cs:__xmm@3f800000000000003f8000003f800000
        vmovups xmmword ptr [rbp+3CE0h+color], xmm0
      }
      G_DebugLine(&_R15->position, (const vec3_t *)&plane, &color, 0);
      __asm { vmovaps xmm2, xmm9; yaw }
      G_DebugBox(&vec3_origin, &box, *(float *)&_XMM2, &colorCyan, 0, 1);
    }
    _RSI = outAvoidingVelocitya[0];
    v302 = numberOfVerticesOut;
    v303 = Avoid(_R15, _R12, polygon, numberOfVerticesOut, outAvoidingVelocitya[0], fnCollisionChecka[0]);
    __asm
    {
      vmovss  xmm2, dword ptr [rsi+4]
      vmovss  xmm0, dword ptr [rsi]
      vmovss  xmm3, dword ptr [rsi+8]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vcomiss xmm3, xmm9
    }
    if ( !(v68 | v126) )
      _RSI->v[2] = _R15->desiredVelocity.v[2];
    Sys_ProfEndNamedEvent();
    if ( _R15->drawAvoidance )
    {
      __asm
      {
        vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000
        vmovups xmmword ptr [rbp+3CE0h+fnCollisionCheck], xmm0
      }
      DrawPolygon((const vec3_t (*)[32])polygon, v302, &_R15->position, (const vec4_t *)fnCollisionChecka);
    }
    v313 = DCONST_DVARINT_ai_showRepulsors;
    if ( !DCONST_DVARINT_ai_showRepulsors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showRepulsors") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v313);
    if ( v313->current.integer == 2 || _R15->drawAvoidance )
    {
      __asm { vmovss  xmm1, dword ptr [r12+10h]; radius }
      G_DebugCircle(&_R15->position, *(float *)&_XMM1, &colorWhite, 0, 1, 1);
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vaddss  xmm1, xmm0, dword ptr [r15+10h]
        vmovss  dword ptr [rbp+3CE0h+fnCollisionCheck], xmm1
        vmovss  xmm2, dword ptr [r15+14h]
        vaddss  xmm0, xmm2, dword ptr [rsi+4]
        vmovss  dword ptr [rbp+3CE0h+fnCollisionCheck+4], xmm0
        vmovss  xmm1, dword ptr [r15+18h]
        vaddss  xmm2, xmm1, dword ptr [rsi+8]
        vmovss  dword ptr [rbp+3CE0h+fnCollisionCheck+8], xmm2
        vmovups xmm0, cs:__xmm@3f8000003f800000000000003f800000
        vmovups xmmword ptr [rbp+3CE0h+outAvoidingVelocity], xmm0
      }
      G_DebugLine(&_R15->position, (const vec3_t *)fnCollisionChecka, (const vec4_t *)outAvoidingVelocitya, 0);
    }
  }
  bfx::LinkHandle::~LinkHandle(&v364);
  bfx::AreaHandle::~AreaHandle(&v363);
  `eh vector destructor iterator'(ptr, 0x34ui64, 0x110ui64, (void (__fastcall *)(void *))OrcaColliderInfo::~OrcaColliderInfo);
  result = v303;
  _R11 = &v378;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
  return result;
}

/*
==============
ORCA_RateDistance
==============
*/

float __fastcall ORCA_RateDistance(double distance, double minWeight, double maxWeight, float minDist, float maxDist)
{
  __asm
  {
    vmovss  xmm4, [rsp+48h+maxDist]
    vmovaps [rsp+48h+var_18], xmm6
    vsubss  xmm4, xmm4, xmm3
    vcvtss2sd xmm5, xmm4, xmm4
    vcomisd xmm5, cs:__real@3eb0c6f7a0b5ed8d
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
    vmovss  xmm2, cs:__real@3f800000; max
    vsubss  xmm0, xmm0, xmm3
    vdivss  xmm0, xmm0, xmm4; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vsubss  xmm1, xmm7, xmm6
    vmovaps xmm7, [rsp+48h+var_28]
    vmulss  xmm0, xmm0, xmm1
    vaddss  xmm0, xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
ORCA_RateVelocity
==============
*/
__int64 ORCA_RateVelocity(const AvoidingEntityInfo *avoidingEntityInfo, const AvoidSettings *settings, const vec3_t *desiredDirection, float *result)
{
  char v55; 
  const char *v65; 
  const char *v89; 
  AINavigator *Navigator; 
  AINavigator2D *v93; 
  const bfx::AreaHandle *CurArea; 
  const bfx::PathSpec *PathSpec; 
  nav_space_s *v102; 
  char v106; 
  const char *v119; 
  const bfx::PathSpec *v126; 
  bool IsPointOnMeshCustom; 
  const bfx::AreaHandle *NextCornerArea; 
  unsigned int v156; 
  bool v157; 
  const char *v160; 
  __int64 v163; 
  int duration; 
  signed int layer; 
  bfx::AreaHandle outAreaHandle; 
  bfx::AreaHandle hStartArea; 
  __int64 v177; 
  vec3_t xyz; 
  vec3_t targetPos; 
  vec3_t v180; 
  vec4_t color; 
  vec3_t hSpace; 
  vec3_t pos; 
  vec3_t startPos; 
  vec3_t outSnappedPos; 
  vec3_t outUp; 
  nav_probe_results_s pOutResults; 
  nav_probe_results_s v188; 
  char v189; 
  void *retaddr; 

  _RAX = &retaddr;
  v177 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
  }
  _R15 = result;
  _R14 = desiredDirection;
  _RDI = avoidingEntityInfo;
  __asm
  {
    vmovss  xmm6, dword ptr [r8+4]
    vmovss  xmm7, dword ptr [r8]
    vmovss  xmm8, dword ptr [r8+8]
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm10, xmm2, xmm2
    vcomiss xmm10, dword ptr [rdx+0Ch]
    vmovss  xmm5, dword ptr [rcx+20h]
    vmovss  xmm3, dword ptr [rcx+1Ch]
    vmovss  xmm4, dword ptr [rcx+24h]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm12, xmm2, xmm2
    vsubss  xmm3, xmm7, xmm3
    vsubss  xmm0, xmm6, xmm5
    vsubss  xmm4, xmm8, xmm4
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vcvtss2sd xmm13, xmm12, xmm12
    vmovss  xmm11, cs:__real@3f800000
    vxorps  xmm7, xmm7, xmm7
    vcomisd xmm13, cs:__real@3eb0c6f7a0b5ed8d
    vsqrtss xmm1, xmm3, xmm3
    vdivss  xmm0, xmm11, xmm12
    vmulss  xmm0, xmm1, xmm0; val
    vmovaps xmm2, xmm11; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:__real@40000000
    vmulss  xmm1, xmm0, xmm2
    vsubss  xmm8, xmm2, xmm1
    vmovss  xmm9, cs:__real@3e4ccccd
    vmovss  xmm6, cs:__real@c1000000
  }
  v55 = 0;
  if ( _RDI->drawAvoidance )
  {
    __asm
    {
      vmovups xmm0, cs:__xmm@3f8000003f800000000000003f800000
      vmovups xmmword ptr [rbp+160h+color], xmm0
      vmovss  xmm1, dword ptr [rdi+10h]
      vaddss  xmm0, xmm1, dword ptr [r14]
      vmovss  dword ptr [rsp+260h+xyz], xmm0
      vmovss  xmm2, dword ptr [rdi+14h]
      vaddss  xmm1, xmm2, dword ptr [r14+4]
      vmovss  dword ptr [rsp+260h+xyz+4], xmm1
      vmovss  xmm0, dword ptr [rdi+18h]
      vaddss  xmm2, xmm0, dword ptr [r14+8]
      vmovss  dword ptr [rsp+260h+xyz+8], xmm2
      vcvtss2sd xmm1, xmm8, xmm8
      vmovq   rdx, xmm1
    }
    v65 = j_va("code dir:%f", _RDX);
    __asm { vmovaps xmm2, xmm9; scale }
    G_Main_AddDebugStringWithDuration(&xyz, &color, *(float *)&_XMM2, v65, 1);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rsp+260h+xyz+8]
      vmovss  dword ptr [rsp+260h+xyz+8], xmm1
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vsubss  xmm3, xmm0, dword ptr [rdi+28h]
    vmovss  xmm1, dword ptr [r14+4]
    vsubss  xmm2, xmm1, dword ptr [rdi+2Ch]
    vmovss  xmm0, dword ptr [r14+8]
    vsubss  xmm4, xmm0, dword ptr [rdi+30h]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcomisd xmm13, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( v55 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vdivss  xmm0, xmm1, xmm12; val
      vmovaps xmm2, xmm11; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm2, cs:__real@3fc00000
      vmulss  xmm1, xmm0, xmm2
      vsubss  xmm0, xmm2, xmm1
    }
  }
  __asm { vaddss  xmm12, xmm8, xmm0 }
  if ( _RDI->drawAvoidance )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovq   rdx, xmm1
    }
    v89 = j_va("curr dir:%f", _RDX);
    __asm { vmovaps xmm2, xmm9; scale }
    G_Main_AddDebugStringWithDuration(&xyz, &color, *(float *)&_XMM2, v89, 1);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rsp+260h+xyz+8]
      vmovss  dword ptr [rsp+260h+xyz+8], xmm1
    }
  }
  Navigator = Nav_GetNavigator(_RDI->ent);
  v93 = Navigator->Get2DNavigator(Navigator);
  if ( !v93 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\orca_avoidance.cpp", 936, ASSERT_TYPE_ASSERT, "(pNav2D)", (const char *)&queryFormat, "pNav2D") )
    __debugbreak();
  v93->GetCurPos(v93, &startPos);
  CurArea = AINavigator2D::GetCurArea(v93);
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vaddss  xmm1, xmm0, dword ptr [rdi+10h]
    vmovss  dword ptr [rbp+160h+targetPos], xmm1
    vmovss  xmm2, dword ptr [rdi+14h]
    vaddss  xmm0, xmm2, dword ptr [r14+4]
    vmovss  dword ptr [rbp+160h+targetPos+4], xmm0
    vmovss  xmm1, dword ptr [rdi+18h]
    vaddss  xmm2, xmm1, dword ptr [r14+8]
    vmovss  dword ptr [rbp+160h+targetPos+8], xmm2
  }
  bfx::AreaHandle::AreaHandle(&pOutResults.m_hEndArea);
  bfx::AreaHandle::AreaHandle(&v188.m_hEndArea);
  PathSpec = AINavigator2D::GetPathSpec(v93);
  *(_QWORD *)hSpace.v = Navigator->m_pSpace;
  layer = Navigator->m_Layer;
  bfx::AreaHandle::AreaHandle(&hStartArea);
  AINavigator::GetUpVector(Navigator, &outUp);
  v102 = *(nav_space_s **)hSpace.v;
  Nav_GetClosestVerticalPos(&targetPos, &outUp, layer, *(bfx::SpaceHandle **)hSpace.v, PathSpec, &targetPos, &hStartArea);
  Nav_Trace(&startPos, CurArea, &targetPos, PathSpec, &pOutResults);
  Nav_Trace(&targetPos, &hStartArea, &startPos, PathSpec, &v188);
  __asm
  {
    vmovss  xmm4, [rbp+160h+pOutResults.m_DistTraveled]
    vaddss  xmm1, xmm4, [rbp+160h+var_110.m_DistTraveled]
    vsubss  xmm2, xmm10, xmm1
    vcomiss xmm2, xmm11
  }
  v106 = v55;
  if ( !level.frameDuration )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    __asm { vmovss  xmm4, [rbp+160h+pOutResults.m_DistTraveled] }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vmulss  xmm3, xmm1, xmm10
    vcomiss xmm4, xmm3
    vmovss  xmm8, cs:__real@3f000000
    vmulss  xmm3, xmm10, xmm8; minDist
    vmovss  [rsp+260h+duration], xmm10
    vmovaps xmm2, xmm11; maxWeight
    vxorps  xmm1, xmm1, xmm1; minWeight
    vmovaps xmm0, xmm4; distance
  }
  *(float *)&_XMM0 = ORCA_RateDistance(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, *(float *)&_XMM3, *(float *)&duration);
  __asm { vaddss  xmm10, xmm12, xmm0 }
  if ( _RDI->drawAvoidance )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm0, xmm0
      vmovq   rdx, xmm1
    }
    v119 = j_va("NavTrace dist:%f", _RDX);
    __asm { vmovaps xmm2, xmm9; scale }
    G_Main_AddDebugStringWithDuration(&xyz, &color, *(float *)&_XMM2, v119, 1);
    __asm
    {
      vaddss  xmm1, xmm6, dword ptr [rsp+260h+xyz+8]
      vmovss  dword ptr [rsp+260h+xyz+8], xmm1
    }
  }
  if ( v106 )
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [rbp+160h+targetPos]
      vmovsd  qword ptr [rbp+160h+var_1D0], xmm0
    }
    v180.v[2] = targetPos.v[2];
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+160h+pOutResults.m_EndPos]
      vmovss  dword ptr [rbp+160h+var_1D0], xmm0
      vmovss  xmm1, dword ptr [rbp+160h+pOutResults.m_EndPos+4]
      vmovss  dword ptr [rbp+160h+var_1D0+4], xmm1
      vmovss  xmm0, dword ptr [rbp+160h+pOutResults.m_EndPos+8]
      vmovss  dword ptr [rbp+160h+var_1D0+8], xmm0
    }
  }
  v126 = AINavigator2D::GetPathSpec(v93);
  if ( !Nav_IsStraightLineReachable(&v180, &pOutResults.m_hEndArea, &_RDI->posAlongPath->m_Pos, &_RDI->posAlongPath->m_hArea, v126) )
  {
    if ( _RDI->drawAvoidance )
    {
      __asm { vmovaps xmm2, xmm9; scale }
      G_Main_AddDebugStringWithDuration(&xyz, &color, *(float *)&_XMM2, "Cornercheck Failed", 1);
      __asm
      {
        vaddss  xmm1, xmm6, dword ptr [rsp+260h+xyz+8]
        vmovss  dword ptr [rsp+260h+xyz+8], xmm1
      }
    }
    bfx::AreaHandle::AreaHandle(&outAreaHandle);
    __asm
    {
      vmovss  xmm6, dword ptr [r14+4]
      vmovss  xmm3, dword ptr [r14]
      vmovss  xmm5, dword ptr [r14+8]
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm1, xmm4, xmm11, xmm0
      vmovss  dword ptr [rbp+160h+hSpace], xmm1
      vdivss  xmm0, xmm11, xmm1
      vmulss  xmm2, xmm0, xmm3
      vmulss  xmm3, xmm0, xmm6
      vmulss  xmm5, xmm0, xmm5
      vmulss  xmm4, xmm4, xmm8
      vmulss  xmm0, xmm2, xmm4
      vaddss  xmm1, xmm0, dword ptr [rdi+10h]
      vmovss  dword ptr [rbp+160h+pos], xmm1
      vmulss  xmm2, xmm3, xmm4
      vaddss  xmm0, xmm2, dword ptr [rdi+14h]
      vmovss  dword ptr [rbp+160h+pos+4], xmm0
      vmulss  xmm1, xmm5, xmm4
      vaddss  xmm2, xmm1, dword ptr [rdi+18h]
      vmovss  dword ptr [rbp+160h+pos+8], xmm2
    }
    IsPointOnMeshCustom = Nav_IsPointOnMeshCustom(v102, &pos, (AINavLayer)layer, PathSpec, &outSnappedPos, &outAreaHandle);
    if ( IsPointOnMeshCustom && Nav_IsStraightLineReachable(&outSnappedPos, &outAreaHandle, &_RDI->posAlongPath->m_Pos, &_RDI->posAlongPath->m_hArea, PathSpec) )
    {
      __asm { vmovss  xmm8, cs:__real@3e800000 }
    }
    else
    {
      if ( !v93->HasPath(v93) || (v93->GetNextCorner(v93, &hSpace), !IsPointOnMeshCustom) || (NextCornerArea = AINavigator2D::GetNextCornerArea(v93), !Nav_IsStraightLineReachable(&outSnappedPos, &outAreaHandle, &hSpace, NextCornerArea, PathSpec)) )
      {
        *_R15 = 0.0;
        bfx::AreaHandle::~AreaHandle(&outAreaHandle);
        v156 = 1;
        goto LABEL_35;
      }
      __asm { vxorps  xmm8, xmm8, xmm8 }
    }
    bfx::AreaHandle::~AreaHandle(&outAreaHandle);
  }
  __asm { vaddss  xmm6, xmm10, xmm8 }
  v156 = 0;
  v157 = !_RDI->drawAvoidance;
  if ( _RDI->drawAvoidance )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm6, xmm6
      vmovq   rdx, xmm1
    }
    v160 = j_va("Final:%f", _RDX);
    __asm { vmovaps xmm2, xmm9; scale }
    G_Main_AddDebugStringWithDuration(&xyz, &color, *(float *)&_XMM2, v160, 1);
    __asm { vmovss  xmm1, cs:__real@40a00000; radius }
    G_DebugCircle(&xyz, *(float *)&_XMM1, &color, 1, 1, 0);
  }
  __asm
  {
    vmovss  dword ptr [r15], xmm6
    vucomiss xmm6, xmm7
  }
  if ( !v157 )
    v156 = 5;
LABEL_35:
  bfx::AreaHandle::~AreaHandle(&hStartArea);
  bfx::AreaHandle::~AreaHandle(&v188.m_hEndArea);
  bfx::AreaHandle::~AreaHandle(&pOutResults.m_hEndArea);
  v163 = v156;
  _R11 = &v189;
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
  }
  return v163;
}

/*
==============
SplitPolygon
==============
*/
char SplitPolygon(vec3_t *polygon, int capacity, int *numberOfVerticesOut, const vec4_t *plane)
{
  int v16; 
  int v17; 
  int v20; 
  __int64 v22; 
  __int64 v23; 
  char v33; 
  char v34; 
  char v35; 
  int v78; 
  int v79; 
  char Src[384]; 
  void *retaddr; 

  _R11 = &retaddr;
  _RSI = polygon;
  v16 = *numberOfVerticesOut;
  v17 = 0;
  _R15 = plane;
  v79 = *numberOfVerticesOut;
  if ( *numberOfVerticesOut <= 0 )
    return 0;
  _RBX = Src;
  v20 = 1;
  _R13 = &_RSI->v[2];
  __asm { vmovaps xmmword ptr [r11-48h], xmm6 }
  v22 = 0i64;
  __asm { vmovaps xmmword ptr [r11-58h], xmm7 }
  v23 = 0i64;
  __asm
  {
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-88h], xmm10
    vmovaps xmmword ptr [r11-98h], xmm11
    vmovaps xmmword ptr [r11-0A8h], xmm12
    vmovaps xmmword ptr [r11-0B8h], xmm13
    vmovaps xmmword ptr [r11-0C8h], xmm14
    vmovaps xmmword ptr [r11-0D8h], xmm15
  }
  v78 = 1;
  do
  {
    __asm
    {
      vmovss  xmm11, dword ptr [r13-8]
      vmovss  xmm12, dword ptr [r13-4]
      vmulss  xmm1, xmm11, dword ptr [r15]
      vmulss  xmm0, xmm12, dword ptr [r15+4]
      vmovss  xmm13, dword ptr [r13+0]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm13, dword ptr [r15+8]
      vaddss  xmm2, xmm2, xmm1
      vsubss  xmm10, xmm2, dword ptr [r15+0Ch]
    }
    v35 = v33 | v34;
    _R14 = 3i64 * (v20 % v16);
    __asm
    {
      vmovss  xmm9, dword ptr [rsi+r14*4]
      vmovss  xmm7, dword ptr [rsi+r14*4+4]
      vmulss  xmm3, xmm7, dword ptr [r15+4]
      vmulss  xmm0, xmm9, dword ptr [r15]
      vmovss  xmm8, dword ptr [rsi+r14*4+8]
      vmulss  xmm1, xmm8, dword ptr [r15+8]
      vaddss  xmm2, xmm3, xmm0
      vaddss  xmm2, xmm2, xmm1
      vsubss  xmm3, xmm2, dword ptr [r15+0Ch]
      vmulss  xmm0, xmm3, xmm10
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
      vsubss  xmm14, xmm9, xmm11
      vsubss  xmm15, xmm7, xmm12
    }
    if ( v33 )
    {
      __asm
      {
        vsubss  xmm0, xmm10, xmm3
        vdivss  xmm2, xmm10, xmm0
        vmulss  xmm1, xmm14, xmm2
        vaddss  xmm6, xmm1, xmm11
        vsubss  xmm1, xmm8, xmm13
        vmulss  xmm1, xmm1, xmm2
        vmulss  xmm0, xmm15, xmm2
        vaddss  xmm8, xmm1, xmm13
        vaddss  xmm7, xmm0, xmm12
        vmovss  dword ptr [rbx], xmm6
        vmovss  dword ptr [rbx+4], xmm7
        vmovss  dword ptr [rbx+8], xmm8
      }
      _RBX += 12;
      ++v17;
      v35 = (unsigned __int64)++v22 <= 0x20;
      if ( v22 >= 32 )
        break;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+r14*4+4]
      vmovss  xmm1, dword ptr [rsi+r14*4]
      vmulss  xmm2, xmm1, dword ptr [r15]
      vmulss  xmm3, xmm0, dword ptr [r15+4]
      vmovss  xmm0, dword ptr [rsi+r14*4+8]
      vmulss  xmm1, xmm0, dword ptr [r15+8]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vcomiss xmm2, dword ptr [r15+0Ch]
    }
    if ( !v35 )
    {
      ++v17;
      *(float *)_RBX = _RSI[v20 % v16].v[0];
      ++v22;
      *((_DWORD *)_RBX + 1) = LODWORD(_RSI[v20 % v16].v[1]);
      *((_DWORD *)_RBX + 2) = LODWORD(_RSI[v20 % v16].v[2]);
      _RBX += 12;
      if ( v22 >= 32 )
        break;
    }
    v16 = v79;
    v20 = v78 + 1;
    ++v23;
    ++v78;
    _R13 += 3;
  }
  while ( v23 < v79 );
  __asm
  {
    vmovaps xmm15, [rsp+2B8h+var_D8]
    vmovaps xmm14, [rsp+2B8h+var_C8]
    vmovaps xmm13, [rsp+2B8h+var_B8]
    vmovaps xmm12, [rsp+2B8h+var_A8]
    vmovaps xmm11, [rsp+2B8h+var_98]
    vmovaps xmm10, [rsp+2B8h+var_88]
    vmovaps xmm9, [rsp+2B8h+var_78]
    vmovaps xmm8, [rsp+2B8h+var_68]
    vmovaps xmm7, [rsp+2B8h+var_58]
    vmovaps xmm6, [rsp+2B8h+var_48]
  }
  if ( !v17 )
    return 0;
  if ( v17 >= capacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\orca_avoidance.cpp", 183, ASSERT_TYPE_ASSERT, "(newPolygonVertexCount < capacity)", (const char *)&queryFormat, "newPolygonVertexCount < capacity") )
    __debugbreak();
  *numberOfVerticesOut = v17;
  memcpy_0(_RSI, Src, 12i64 * v17);
  return 1;
}

