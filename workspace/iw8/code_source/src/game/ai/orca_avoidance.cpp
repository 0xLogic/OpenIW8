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
  vec3_t *v6; 
  __int64 v7; 
  __int64 v10; 
  int v11; 
  float *v12; 
  float maxSpeed; 
  float v14; 
  AvoidSettings *v15; 
  AvoidanceResult v16; 
  int v17; 
  float v18; 
  const vec3_t *v19; 
  const vec3_t *v20; 
  float *v21; 
  __int64 v22; 
  vec3_t *v23; 
  AvoidanceResult v24; 
  __int128 v26; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  int numberOfFoundPointsOut; 
  float v34; 
  int v35; 
  int v36; 
  AvoidSettings *settingsa; 
  AvoidanceResult (__fastcall *v38)(const AvoidingEntityInfo *, const AvoidSettings *, const vec3_t *, float *); 
  vec3_t *v39; 
  vec3_t v40; 
  vec3_t center; 
  vec4_t color; 
  vec3_t resultingPoints[4]; 

  v6 = avoidancePoly;
  v7 = numberOfVertices;
  v36 = numberOfVertices;
  v38 = fnCollisionCheck;
  v39 = avoidancePoly;
  settingsa = (AvoidSettings *)settings;
  if ( !numberOfVertices )
    return 0i64;
  if ( numberOfVertices <= 0 )
  {
LABEL_7:
    if ( fnCollisionCheck(avoidingEntityInfo, settings, &avoidingEntityInfo->desiredVelocity, (float *)&v35) == AVOIDANCE_SUCCESS )
    {
      if ( avoidingEntityInfo->drawAvoidance )
      {
        v32 = avoidingEntityInfo->desiredVelocity.v[1] + avoidingEntityInfo->position.v[1];
        v40.v[0] = avoidingEntityInfo->position.v[0] + avoidingEntityInfo->desiredVelocity.v[0];
        v40.v[2] = avoidingEntityInfo->desiredVelocity.v[2] + avoidingEntityInfo->position.v[2];
        v40.v[1] = v32;
        G_DebugCircle(&v40, 5.0, &colorGreen, 0, 1, 0);
      }
      *outAvoidingVelocity = avoidingEntityInfo->desiredVelocity;
      return 5i64;
    }
    else
    {
      *outAvoidingVelocity = avoidingEntityInfo->desiredVelocity;
      return 4i64;
    }
  }
  v10 = 0i64;
  v11 = 1;
  v12 = (float *)v6;
  while ( (float)((float)((float)(v12[1] - v6[v11 % (int)v7].v[1]) * (float)(avoidingEntityInfo->desiredVelocity.v[0] - *v12)) + (float)((float)(v6[v11 % (int)v7].v[0] - *v12) * (float)(avoidingEntityInfo->desiredVelocity.v[1] - v12[1]))) >= 0.0 )
  {
    ++v11;
    ++v10;
    v12 += 3;
    if ( v10 >= v7 )
      goto LABEL_7;
  }
  if ( avoidingEntityInfo->drawAvoidance )
  {
    maxSpeed = settings->maxSpeed;
    color = (vec4_t)_xmm;
    G_DebugCircle(&avoidingEntityInfo->position, maxSpeed, &color, 0, 1, 0);
    v14 = avoidingEntityInfo->desiredVelocity.v[1] + avoidingEntityInfo->position.v[1];
    center.v[0] = avoidingEntityInfo->desiredVelocity.v[0] + avoidingEntityInfo->position.v[0];
    center.v[2] = avoidingEntityInfo->desiredVelocity.v[2] + avoidingEntityInfo->position.v[2];
    center.v[1] = v14;
    G_DebugCircle(&center, 5.0, &colorRed, 0, 1, 0);
  }
  v15 = settingsa;
  v16 = AVOIDANCE_BLOCKED;
  v17 = 0;
  *(_QWORD *)center.v = v6;
  v18 = 0.0;
  v19 = v6;
  do
  {
    numberOfFoundPointsOut = 0;
    v35 = v17 + 1;
    GetPointsFromSegment(avoidingEntityInfo, v15, v19, &v6[(v17 + 1) % (int)v7], (vec3_t (*)[4])resultingPoints, &numberOfFoundPointsOut);
    if ( numberOfFoundPointsOut <= 0 )
      goto LABEL_25;
    v21 = &resultingPoints[0].v[2];
    v22 = (unsigned int)numberOfFoundPointsOut;
    v23 = resultingPoints;
    do
    {
      v24 = v38(avoidingEntityInfo, v15, v23, &v34);
      if ( avoidingEntityInfo->drawAvoidance )
      {
        v26 = LODWORD(FLOAT_0_16666667);
        *(float *)&v26 = 0.16666667 * v34;
        _XMM1 = v26;
        __asm
        {
          vmaxss  xmm1, xmm1, xmm7
          vminss  xmm2, xmm1, xmm8
        }
        color.v[0] = 1.0 - *(float *)&_XMM2;
        *(float *)&_XMM1 = *(v21 - 2) + avoidingEntityInfo->position.v[0];
        color.v[1] = *(float *)&_XMM2;
        v29 = *(v21 - 1) + avoidingEntityInfo->position.v[1];
        v40.v[0] = *(float *)&_XMM1;
        v40.v[2] = avoidingEntityInfo->position.v[2] + *v21;
        color.v[2] = 0.0;
        color.v[3] = FLOAT_1_0;
        v40.v[1] = v29;
        G_DebugCircle(&v40, 5.0, &color, 0, 1, 0);
      }
      v30 = v34;
      if ( v34 == 0.0 )
      {
        if ( v24 <= v16 )
          goto LABEL_23;
        goto LABEL_22;
      }
      if ( v34 > v18 || v24 > v16 )
      {
        *outAvoidingVelocity = *(vec3_t *)(v21 - 2);
        v18 = v30;
LABEL_22:
        v16 = v24;
      }
LABEL_23:
      v15 = settingsa;
      ++v23;
      v21 += 3;
      --v22;
    }
    while ( v22 );
    LODWORD(v7) = v36;
    v20 = *(const vec3_t **)center.v;
    v6 = v39;
LABEL_25:
    v17 = v35;
    v19 = v20 + 1;
    *(_QWORD *)center.v = v19;
  }
  while ( v35 < (int)v7 );
  if ( avoidingEntityInfo->drawAvoidance )
  {
    v31 = outAvoidingVelocity->v[1] + avoidingEntityInfo->position.v[1];
    v40.v[0] = outAvoidingVelocity->v[0] + avoidingEntityInfo->position.v[0];
    v40.v[2] = outAvoidingVelocity->v[2] + avoidingEntityInfo->position.v[2];
    v40.v[1] = v31;
    G_DebugCircle(&v40, 5.0, &colorBlue, 0, 1, 0);
  }
  if ( (float)((float)((float)(outAvoidingVelocity->v[1] * outAvoidingVelocity->v[1]) + (float)(outAvoidingVelocity->v[0] * outAvoidingVelocity->v[0])) + (float)(outAvoidingVelocity->v[2] * outAvoidingVelocity->v[2])) > 1.0 || ((v16 - 1) & 0xFFFFFFFB) != 0 )
    return (unsigned int)v16;
  else
    return 2i64;
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
  nav_posAlongPathResults_t *posAlongPath; 
  nav_posAlongPathResults_t *v15; 
  const bfx::PathSpec *v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  bfx::AreaHandle desiredVelocityPointArea; 
  AvoidSettings *settingsa; 
  int *v23; 
  bfx::AreaHandle hStartArea; 
  __int64 v25; 
  vec3_t pos; 
  vec4_t color; 
  vec3_t center; 
  vec4_t outPlane; 
  vec3_t outSnappedPos; 

  v25 = -2i64;
  v6 = numberOfColliders;
  settingsa = (AvoidSettings *)settings;
  *(_QWORD *)center.v = planes;
  v23 = numberOfPlanesOut;
  bfx::AreaHandle::AreaHandle(&desiredVelocityPointArea);
  Navigator = Nav_GetNavigator(avoidingEntityInfo->ent);
  if ( !Navigator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\orca_avoidance.cpp", 798, ASSERT_TYPE_ASSERT, "(pNavigator)", (const char *)&queryFormat, "pNavigator") )
    __debugbreak();
  v10 = Navigator->Get2DNavigator(Navigator);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\orca_avoidance.cpp", 800, ASSERT_TYPE_ASSERT, "(pNav2D)", (const char *)&queryFormat, "pNav2D") )
    __debugbreak();
  bfx::AreaHandle::AreaHandle(&hStartArea);
  PathSpec = AINavigator2D::GetPathSpec(v10);
  hHintArea = AINavigator2D::GetCurArea(v10);
  if ( Nav_IsPointOnMeshCustomWithHint(v10->m_pSpace, &avoidingEntityInfo->position, v10->m_Layer, PathSpec, &outSnappedPos, hHintArea, &hStartArea) && (v13 = AINavigator2D::GetPathSpec(v10), Nav_IsStraightLineReachable(&outSnappedPos, &hStartArea, &avoidingEntityInfo->posAlongPath->m_Pos, &avoidingEntityInfo->posAlongPath->m_hArea, v13)) )
  {
    posAlongPath = avoidingEntityInfo->posAlongPath;
    pos = posAlongPath->m_Pos;
    bfx::AreaHandle::operator=(&desiredVelocityPointArea, &posAlongPath->m_hArea);
    v15 = avoidingEntityInfo->posAlongPath;
    color.v[0] = v15->m_Pos.v[0] - avoidingEntityInfo->position.v[0];
    color.v[1] = v15->m_Pos.v[1] - avoidingEntityInfo->position.v[1];
    color.v[2] = v15->m_Pos.v[2] - avoidingEntityInfo->position.v[2];
  }
  else
  {
    pos.v[0] = avoidingEntityInfo->desiredVelocity.v[0] + avoidingEntityInfo->position.v[0];
    pos.v[1] = avoidingEntityInfo->desiredVelocity.v[1] + avoidingEntityInfo->position.v[1];
    pos.v[2] = avoidingEntityInfo->desiredVelocity.v[2] + avoidingEntityInfo->position.v[2];
    v16 = AINavigator2D::GetPathSpec(v10);
    if ( !Nav_IsPointOnMeshCustom(v10->m_pSpace, &pos, v10->m_Layer, v16, &pos, &desiredVelocityPointArea) )
      bfx::AreaHandle::Release(&desiredVelocityPointArea);
    *(_QWORD *)color.v = *(_QWORD *)avoidingEntityInfo->currentVelocity.v;
    color.v[2] = avoidingEntityInfo->currentVelocity.v[2];
  }
  v17 = *numberOfPlanesOut;
  if ( v6 > 0 )
  {
    v18 = *numberOfPlanesOut;
    v19 = 0i64;
    v20 = *(_QWORD *)center.v + 16 * v17 + 8;
    do
    {
      if ( avoidingEntityInfo->drawAvoidance )
      {
        color = (vec4_t)_xmm;
        *(_QWORD *)center.v = *(_QWORD *)colliderInfos->position.v;
        center.v[2] = avoidingEntityInfo->position.v[2];
        G_DebugCircle(&center, colliderInfos->radius, &color, 0, 1, 0);
      }
      GetVelocityObstaclePlane(avoidingEntityInfo, settingsa, (const vec3_t *)&color, &pos, &desiredVelocityPointArea, colliderInfos, &outPlane);
      if ( v18 >= 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\orca_avoidance.cpp", 841, ASSERT_TYPE_ASSERT, "(numberOfPlanes < 32)", (const char *)&queryFormat, "numberOfPlanes < MAX_PLANES") )
        __debugbreak();
      *(vec4_t *)(v20 - 8) = outPlane;
      LODWORD(v17) = v17 + 1;
      ++v18;
      v20 += 16i64;
      if ( v18 >= 32 )
        break;
      ++v19;
      ++colliderInfos;
    }
    while ( v19 < v6 );
  }
  *v23 = v17;
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
  __int64 v5; 
  float *v8; 
  __int64 v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  vec3_t end; 
  vec3_t start; 

  if ( numberOfVertices )
  {
    v5 = numberOfVertices;
    if ( numberOfVertices > 1i64 )
    {
      v8 = &(*polygon)[0].v[2];
      v9 = numberOfVertices - 1i64;
      do
      {
        v10 = offset->v[0];
        v11 = offset->v[1];
        v12 = offset->v[2];
        start.v[0] = offset->v[0] + *(v8 - 2);
        start.v[1] = v11 + *(v8 - 1);
        start.v[2] = v12 + *v8;
        end.v[0] = v10 + v8[1];
        end.v[1] = v11 + v8[2];
        v8 += 3;
        end.v[2] = v12 + *v8;
        G_DebugLine(&start, &end, color, 1);
        --v9;
      }
      while ( v9 );
    }
    v13 = offset->v[1];
    v14 = offset->v[2];
    v15 = offset->v[0] + (*polygon)[0].v[0];
    start.v[0] = offset->v[0] + (*polygon)[v5 - 1].v[0];
    start.v[1] = v13 + (*polygon)[v5 - 1].v[1];
    start.v[2] = v14 + (*polygon)[v5 - 1].v[2];
    v16 = v13 + (*polygon)[0].v[1];
    end.v[0] = v15;
    v17 = v14 + (*polygon)[0].v[2];
    end.v[1] = v16;
    end.v[2] = v17;
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
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  unsigned int v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  __int64 v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  __int64 v23; 
  __int64 v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  float v37; 
  float v38; 
  __int64 v39; 

  v6 = pointB->v[0];
  v7 = pointA->v[0];
  v8 = pointB->v[1];
  v9 = pointA->v[1];
  v10 = 0;
  v11 = pointB->v[2] - pointA->v[2];
  v12 = pointB->v[0] - pointA->v[0];
  v14 = v8 - v9;
  v13 = v8 - v9;
  if ( v12 == 0.0 && v14 == 0.0 && v11 == 0.0 )
  {
    (*resultingPoints)[0].v[0] = v12;
    (*resultingPoints)[0].v[1] = v14;
    (*resultingPoints)[0].v[2] = 0;
    *numberOfFoundPointsOut = 1;
  }
  else
  {
    v15 = settings->maxSpeed * settings->maxSpeed;
    if ( (float)((float)(v9 * v9) + (float)(v7 * v7)) <= v15 )
    {
      (*resultingPoints)[0].v[0] = v7;
      v10 = 1;
      *(_QWORD *)&(*resultingPoints)[0].y = *(_QWORD *)&pointA->y;
    }
    if ( (float)((float)(v8 * v8) + (float)(v6 * v6)) <= v15 )
    {
      v16 = v10++;
      (*resultingPoints)[v16] = *pointB;
    }
    v17 = pointA->v[1];
    v18 = pointA->v[2];
    v19 = (float)(v12 * v12) + (float)(v14 * v14);
    v20 = (float)((float)((float)(avoidingEntityInfo->desiredVelocity.v[1] - v17) * v14) + (float)((float)(avoidingEntityInfo->desiredVelocity.v[0] - pointA->v[0]) * v12)) + (float)((float)(avoidingEntityInfo->desiredVelocity.v[2] - v18) * v11);
    if ( v20 > 0.0 && v20 < v19 )
    {
      v21 = (float)(v12 * (float)(v20 / v19)) + pointA->v[0];
      v22 = (float)(v13 * (float)(v20 / v19)) + v17;
      if ( (float)((float)(v22 * v22) + (float)(v21 * v21)) <= v15 )
      {
        v23 = v10++;
        v24 = v23;
        (*resultingPoints)[v24].v[0] = v21;
        (*resultingPoints)[v24].v[1] = v22;
        (*resultingPoints)[v24].v[2] = (float)(v11 * (float)(v20 / v19)) + v18;
      }
    }
    if ( v10 <= 2 )
    {
      v25 = pointA->v[1];
      v26 = pointA->v[0];
      v27 = pointA->v[2];
      v28 = (float)(v11 * v11) + v19;
      v29 = (float)((float)(pointA->v[0] * v12) + (float)(v13 * v25)) + (float)(v27 * v11);
      v30 = (float)((float)(v29 * v29) * 4.0) - (float)((float)((float)((float)((float)((float)(v25 * v25) + (float)(v26 * v26)) + (float)(v27 * v27)) - v15) * v28) * 4.0);
      if ( v30 >= 0.0 )
      {
        v31 = fsqrt(v30);
        v32 = (float)(v31 + (float)(v29 * -2.0)) * (float)(0.5 / v28);
        v33 = (float)((float)(v29 * -2.0) - v31) * (float)(0.5 / v28);
        if ( v32 >= 0.0 && v32 <= 1.0 )
        {
          v34 = v10++;
          v35 = v34;
          (*resultingPoints)[v35].v[0] = (float)(v12 * v32) + v26;
          (*resultingPoints)[v35].v[1] = (float)(v13 * v32) + v25;
          (*resultingPoints)[v35].v[2] = (float)(v11 * v32) + v27;
        }
        if ( v33 >= 0.0 && v33 <= 1.0 )
        {
          v36 = v10++;
          v37 = (float)(v11 * v33) + pointA->v[2];
          v38 = (float)(v13 * v33) + pointA->v[1];
          v39 = v36;
          (*resultingPoints)[v39].v[0] = (float)(v12 * v33) + pointA->v[0];
          (*resultingPoints)[v39].v[1] = v38;
          (*resultingPoints)[v39].v[2] = v37;
        }
      }
      *numberOfFoundPointsOut = v10;
    }
    else
    {
      *numberOfFoundPointsOut = v10;
    }
  }
}

/*
==============
GetVelocityObstaclePlane
==============
*/
void GetVelocityObstaclePlane(const AvoidingEntityInfo *avoidingEntityInfo, const AvoidSettings *settings, const vec3_t *desiredVelocity, const vec3_t *desiredVelocityPoint, const bfx::AreaHandle *desiredVelocityPointArea, const OrcaColliderInfo *colliderInfo, vec4_t *outPlane)
{
  vec3_t *p_position; 
  float v9; 
  __int128 v10; 
  __int128 v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  __int128 v34; 
  __int128 v35; 
  bool v36; 
  AINavigator *Navigator; 
  __int64 v38; 
  nav_space_s *m_pSpace; 
  const bfx::PathSpec *PathSpec; 
  __int64 v41; 
  float v42; 
  float *v43; 
  const OrcaColliderInfo *v44; 
  float v45; 
  __int128 v46; 
  float v47; 
  __int128 v48; 
  __int128 v52; 
  __int128 v53; 
  __int128 v54; 
  __int128 v55; 
  float v56; 
  __int128 v57; 
  bool IsStraightLineReachable; 
  float v62; 
  __int128 v63; 
  __int128 v67; 
  float v68; 
  __int128 v69; 
  float v70; 
  __int128 v71; 
  __int128 v72; 
  __int128 v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  __int128 v82; 
  float v86; 
  vec4_t *v87; 
  __int128 v88; 
  bool IsPointOnMeshCustomWithHint; 
  float v93; 
  float v94; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  AINavLayer layer; 
  float v100; 
  float v101; 
  float v102; 
  float v103; 
  float v104; 
  float v105; 
  nav_space_s *pSpace; 
  bfx::AreaHandle hStartArea; 
  vec3_t *endPos; 
  vec4_t *v109; 
  bfx::AreaHandle v110; 
  bfx::AreaHandle hHintArea; 
  __int64 v112; 
  vec3_t outSnappedPos; 
  vec3_t pos; 
  vec3_t v115; 
  vec3_t startPos; 
  vec3_t v117; 
  float v118; 
  float v119; 
  int v120[4]; 

  v112 = -2i64;
  endPos = (vec3_t *)desiredVelocityPoint;
  v109 = outPlane;
  p_position = &colliderInfo->position;
  v9 = colliderInfo->position.v[0] - avoidingEntityInfo->position.v[0];
  v11 = LODWORD(colliderInfo->position.v[1]);
  *(float *)&v11 = colliderInfo->position.v[1] - avoidingEntityInfo->position.v[1];
  v10 = v11;
  v12 = 1.0 / settings->lookAheadTime;
  v13 = v9 * v12;
  v14 = *(float *)&v11 * v12;
  v102 = v14;
  v16 = v12 * (float)(settings->radius + colliderInfo->radius);
  v15 = v16;
  v103 = v16;
  v17 = (float)(v14 * v14) + (float)(v13 * v13);
  if ( v17 <= (float)((float)(v16 + 5.0) * (float)(v16 + 5.0)) )
  {
    v88 = v10;
    *(float *)&v88 = fsqrt((float)(*(float *)&v10 * *(float *)&v10) + (float)(v9 * v9));
    _XMM2 = v88;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm8, xmm0
    }
    outPlane->v[0] = COERCE_FLOAT(COERCE_UNSIGNED_INT(v9 * (float)(1.0 / *(float *)&_XMM0)) ^ _xmm);
    outPlane->v[1] = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v10 * (float)(1.0 / *(float *)&_XMM0)) ^ _xmm);
    *(_QWORD *)&outPlane->xyz.z = 0i64;
  }
  else
  {
    v18 = fsqrt(v17) * 0.5;
    v19 = (float)(v13 * 0.5) - v13;
    v20 = (float)(v14 * 0.5) - v14;
    v21 = (float)(v20 * v20) + (float)(v19 * v19);
    v22 = fsqrt(v21);
    v23 = v16 * v16;
    v24 = (float)((float)((float)(v16 * v16) - (float)(v17 * 0.25)) + v21) * (float)(0.5 / v22);
    v25 = v24 * (float)(1.0 / v22);
    v26 = (float)(v25 * v19) + v13;
    v28 = (float)(v25 * v20) + v14;
    v27 = v28;
    if ( v22 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - v18) & _xmm) )
    {
      v31 = fsqrt(v23 - (float)(v24 * v24)) * (float)(1.0 / v22);
      v32 = v31 * v19;
      v30 = (float)(v31 * v19) + v28;
      v29 = v26 - (float)(v31 * v20);
      v118 = v29;
      v119 = v30;
      v27 = v28 - v32;
      v26 = v26 + (float)(v31 * v20);
    }
    else
    {
      v29 = (float)((float)(v24 * (float)(1.0 / v22)) * v19) + v13;
      v118 = v29;
      v30 = (float)(v25 * v20) + v14;
      v119 = v30;
    }
    *(float *)&v120[3] = 0.0;
    *(float *)&v120[2] = v27;
    *(float *)&v120[1] = v26;
    *(float *)v120 = 0.0;
    v33 = avoidingEntityInfo->currentVelocity.v[0] - colliderInfo->velocity.v[0];
    v35 = LODWORD(avoidingEntityInfo->currentVelocity.v[1]);
    *(float *)&v35 = avoidingEntityInfo->currentVelocity.v[1] - colliderInfo->velocity.v[1];
    v34 = v35;
    v101 = avoidingEntityInfo->currentVelocity.v[2] - colliderInfo->velocity.v[2];
    v95 = 0.0;
    v96 = 0.0;
    v93 = 0.0;
    v94 = 0.0;
    v98 = FLOAT_N1_0;
    v100 = FLOAT_3_4028235e38;
    v36 = 0;
    Navigator = Nav_GetNavigator(avoidingEntityInfo->ent);
    v38 = (__int64)Navigator->Get2DNavigator(Navigator);
    if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\orca_avoidance.cpp", 630, ASSERT_TYPE_ASSERT, "(pNav2D)", (const char *)&queryFormat, "pNav2D") )
      __debugbreak();
    m_pSpace = Navigator->m_pSpace;
    pSpace = m_pSpace;
    PathSpec = AINavigator2D::GetPathSpec((AINavigator2D *)v38);
    layer = *(_DWORD *)(v38 + 112);
    bfx::AreaHandle::AreaHandle(&hHintArea, &colliderInfo->hArea);
    *(_QWORD *)outSnappedPos.v = *(_QWORD *)p_position->v;
    outSnappedPos.v[2] = colliderInfo->position.v[2];
    IsPointOnMeshCustomWithHint = Nav_IsPointOnMeshCustomWithHint(m_pSpace, p_position, layer, PathSpec, &outSnappedPos, &hHintArea, &hHintArea);
    if ( v29 == v26 && v30 == v27 )
      v41 = 1i64;
    else
      v41 = 2i64;
    v42 = FLOAT_1_0;
    v43 = (float *)v120;
    v44 = colliderInfo;
    do
    {
      v105 = v98;
      v45 = *(v43 - 1);
      v46 = *((unsigned int *)v43 - 2);
      v47 = *v43;
      v48 = v46;
      *(float *)&v48 = fsqrt((float)((float)(*(float *)&v46 * *(float *)&v46) + (float)(v45 * v45)) + (float)(v47 * v47));
      _XMM3 = v48;
      __asm
      {
        vcmpless xmm0, xmm3, xmm10
        vblendvps xmm1, xmm3, xmm8, xmm0
      }
      v53 = v46;
      *(float *)&v53 = *(float *)&v46 * (float)(1.0 / *(float *)&_XMM1);
      v52 = v53;
      v55 = LODWORD(v45);
      *(float *)&v55 = v45 * (float)(1.0 / *(float *)&_XMM1);
      v54 = v55;
      v56 = (float)(1.0 / *(float *)&_XMM1) * *v43;
      LODWORD(_XMM3) = COERCE_UNSIGNED_INT(*(float *)&v55 * v98) ^ _xmm;
      v57 = v52;
      *(float *)&v57 = fsqrt((float)((float)(*(float *)&v52 * v98) * (float)(*(float *)&v52 * v98)) + (float)(*(float *)&_XMM3 * *(float *)&_XMM3));
      _XMM2 = v57;
      __asm
      {
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm1, xmm2, xmm8, xmm0
      }
      v97 = *(float *)&_XMM3 * (float)(1.0 / *(float *)&_XMM1);
      v104 = (float)(*(float *)&v52 * v98) * (float)(1.0 / *(float *)&_XMM1);
      IsStraightLineReachable = 0;
      v98 = v42;
      if ( v44->reciprocality == 0.0 )
      {
        pos.v[0] = *(float *)&v46 + avoidingEntityInfo->position.v[0];
        pos.v[1] = v45 + avoidingEntityInfo->position.v[1];
        pos.v[2] = v47 + avoidingEntityInfo->position.v[2];
        v115.v[0] = outSnappedPos.v[0];
        v115.v[1] = outSnappedPos.v[1];
        v115.v[2] = pos.v[2];
        if ( bfx::AreaHandle::IsValid((bfx::AreaHandle *)desiredVelocityPointArea) )
        {
          bfx::AreaHandle::AreaHandle(&hStartArea);
          if ( Nav_IsPointOnMeshCustom(pSpace, &pos, layer, PathSpec, &startPos, &hStartArea) && Nav_IsStraightLineReachable(&startPos, &hStartArea, endPos, desiredVelocityPointArea, PathSpec) )
          {
            if ( IsPointOnMeshCustomWithHint )
            {
              bfx::AreaHandle::AreaHandle(&v110);
              if ( Nav_IsPointOnMeshCustom(pSpace, &v115, layer, PathSpec, &v117, &v110) )
                IsStraightLineReachable = Nav_IsStraightLineReachable(&v117, &v110, &startPos, &hStartArea, PathSpec);
              bfx::AreaHandle::~AreaHandle(&v110);
            }
            else
            {
              IsStraightLineReachable = 1;
            }
          }
          bfx::AreaHandle::~AreaHandle(&hStartArea);
        }
        v44 = colliderInfo;
      }
      v62 = (float)((float)(*(float *)&v34 * *(float *)&v54) + (float)(v33 * *(float *)&v52)) + (float)(v56 * v101);
      if ( v62 >= (float)((float)((float)(*(float *)&v52 * *(float *)&v46) + (float)(*(float *)&v54 * v45)) + (float)(v56 * v47)) )
      {
        v72 = v54;
        v70 = (float)(*(float *)&v52 * v62) - v33;
        *(float *)&v72 = (float)(*(float *)&v54 * v62) - *(float *)&v34;
        v71 = v72;
        *(float *)&v72 = fsqrt((float)(*(float *)&v72 * *(float *)&v72) + (float)(v70 * v70));
        _XMM2 = v72;
        __asm
        {
          vcmpless xmm0, xmm2, xmm10
          vblendvps xmm1, xmm2, xmm8, xmm0
        }
        v68 = v70 * (float)(1.0 / *(float *)&_XMM1);
        v76 = v71;
        *(float *)&v76 = *(float *)&v71 * (float)(1.0 / *(float *)&_XMM1);
        v69 = v76;
        if ( (float)((float)(*(float *)&v34 * v104) + (float)(v33 * v97)) > 0.0 )
        {
          LODWORD(v68) ^= _xmm;
          v69 = v76 ^ _xmm;
        }
      }
      else
      {
        v63 = v34;
        *(float *)&v63 = fsqrt((float)((float)(*(float *)&v34 - v102) * (float)(*(float *)&v34 - v102)) + (float)((float)(v33 - v13) * (float)(v33 - v13)));
        _XMM2 = v63;
        __asm
        {
          vcmpless xmm0, xmm2, xmm10
          vblendvps xmm1, xmm2, xmm8, xmm0
        }
        v67 = LODWORD(FLOAT_1_0);
        v68 = (float)(1.0 / *(float *)&_XMM1) * (float)(v33 - v13);
        *(float *)&v67 = (float)(1.0 / *(float *)&_XMM1) * (float)(*(float *)&v34 - v102);
        v69 = v67;
        v70 = (float)((float)(v68 * v103) + v13) - v33;
        *(float *)&v71 = (float)((float)(*(float *)&v67 * v103) + v102) - *(float *)&v34;
      }
      if ( v36 && !IsStraightLineReachable || v100 <= (float)((float)(v70 * v70) + (float)(*(float *)&v71 * *(float *)&v71)) && (v36 || !IsStraightLineReachable) )
      {
        v68 = v93;
        v69 = LODWORD(v94);
        v77 = v95;
        v78 = v96;
      }
      else
      {
        v36 = IsStraightLineReachable;
        v100 = (float)(v70 * v70) + (float)(*(float *)&v71 * *(float *)&v71);
        v77 = v70;
        v95 = v70;
        v78 = *(float *)&v71;
        v96 = *(float *)&v71;
        v93 = v68;
        v94 = *(float *)&v69;
      }
      v43 += 3;
      v42 = v105;
      --v41;
    }
    while ( v41 );
    v79 = 1.0 - v44->reciprocality;
    v80 = (float)(v77 * v79) + avoidingEntityInfo->currentVelocity.v[0];
    v81 = (float)(v78 * v79) + avoidingEntityInfo->currentVelocity.v[1];
    v82 = v69;
    *(float *)&v82 = fsqrt((float)(*(float *)&v69 * *(float *)&v69) + (float)(v68 * v68));
    _XMM3 = v82;
    __asm
    {
      vcmpless xmm0, xmm3, xmm10
      vblendvps xmm1, xmm3, xmm8, xmm0
    }
    v86 = v68 * (float)(1.0 / *(float *)&_XMM1);
    *(float *)&_XMM3 = *(float *)&v69 * (float)(1.0 / *(float *)&_XMM1);
    v87 = v109;
    v109->v[0] = v86;
    v87->v[1] = *(float *)&_XMM3;
    v87->v[2] = 0.0;
    v87->v[3] = (float)(v81 * *(float *)&_XMM3) + (float)(v80 * v86);
    bfx::AreaHandle::~AreaHandle(&hHintArea);
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
  void *v7; 
  int v10; 
  __int64 v11; 
  float v12; 
  float v13; 
  __int128 v14; 
  float v15; 
  float v18; 
  float v20; 
  __int128 v21; 
  float v22; 
  __int128 v23; 
  gentity_s *ent; 
  __int64 (__fastcall ***v28)(_QWORD); 
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 
  int v31; 
  bitarray<224> *v32; 
  sentient_s *v33; 
  float *v34; 
  const gentity_s **p_ent; 
  AICommonInterface *m_pAI; 
  __int64 v37; 
  __int64 v38; 
  __int128 v39; 
  float v40; 
  float v41; 
  __int128 v42; 
  float v46; 
  float v47; 
  float v48; 
  __int128 v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  __int128 v56; 
  float v59; 
  float v60; 
  float v61; 
  __int128 v63; 
  __int128 v66; 
  __int128 v67; 
  vec3_t *v71; 
  __int128 v72; 
  float v73; 
  __int128 v74; 
  AINavigator *pNavigator; 
  AINavigator2D *v79; 
  const bfx::AreaHandle *CurArea; 
  _DWORD *v81; 
  float v82; 
  float v83; 
  float v84; 
  unsigned __int64 eTeam; 
  int v86; 
  nav_repulsor_s *FirstRepulsor; 
  float *v88; 
  float radius; 
  gentity_s *ignoreEnt; 
  gentity_s *v91; 
  __int64 v92; 
  float v93; 
  float v94; 
  __int128 v95; 
  float v96; 
  __int128 v97; 
  float v98; 
  float v99; 
  __int128 v100; 
  float *p_commandTime; 
  float v102; 
  float v103; 
  float v104; 
  float v105; 
  __int128 v107; 
  float v110; 
  __int128 v111; 
  __int128 v112; 
  float v116; 
  __int128 v118; 
  _DWORD *v121; 
  AINavigator *Navigator; 
  __int64 v123; 
  AvoidSettings *v124; 
  __int64 v125; 
  __int64 v126; 
  float v127; 
  bool v128; 
  bool v129; 
  int v130; 
  int v131; 
  vec3_t *v132; 
  bool v133; 
  vec3_t *v134; 
  int v135; 
  unsigned int v136; 
  const dvar_t *v137; 
  int destructor; 
  int *numberOfPlanesOut; 
  __int64 v141; 
  int numberOfVerticesOut; 
  float v143[2]; 
  float v144; 
  float v145; 
  float v146; 
  float v147; 
  float v148; 
  float v149; 
  float v150; 
  float v151; 
  float v152; 
  float v153; 
  float v154; 
  AvoidSettings *settingsa; 
  AIActorInterface v156; 
  AIAgentInterface v157; 
  __int64 (__fastcall ***v158)(_QWORD); 
  __int64 v159; 
  AICommonWrapper v160; 
  Bounds box; 
  vec4_t plane; 
  bitarray<224> iTeamFlags; 
  AvoidanceResult (__fastcall *fnCollisionChecka[2])(const AvoidingEntityInfo *, const AvoidSettings *, const vec3_t *, float *); 
  vec4_t color; 
  vec3_t *outAvoidingVelocitya[2]; 
  char v167[20]; 
  bfx::AreaHandle v168; 
  bfx::LinkHandle v169; 
  vec3_t polygon[32]; 
  vec4_t planes[32]; 
  OrcaColliderInfo ptr[272]; 

  v7 = alloca(v6);
  v159 = -2i64;
  fnCollisionChecka[0] = fnCollisionCheck;
  outAvoidingVelocitya[0] = outAvoidingVelocity;
  settingsa = (AvoidSettings *)settings;
  *(_QWORD *)plane.v = outColliderEntNums;
  *(_QWORD *)color.v = outColliderCount;
  `eh vector constructor iterator'(ptr, 0x34ui64, 0x110ui64, (void (__fastcall *)(void *))OrcaColliderInfo::OrcaColliderInfo, (void (__fastcall *)(void *))OrcaColliderInfo::~OrcaColliderInfo);
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Orca_DoAvoidance");
  v10 = 0;
  numberOfVerticesOut = 0;
  box.midPoint = avoidingEntityInfo->position;
  box.halfSize = settings->avoidanceBoundsHalfSize;
  v11 = 0i64;
  v12 = avoidingEntityInfo->goalPosition.v[0] - box.midPoint.v[0];
  v14 = LODWORD(avoidingEntityInfo->goalPosition.v[1]);
  v13 = avoidingEntityInfo->goalPosition.v[1] - box.midPoint.v[1];
  v15 = avoidingEntityInfo->goalPosition.v[2] - box.midPoint.v[2];
  v149 = (float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v15 * v15);
  *(float *)&v14 = fsqrt(v149);
  _XMM8 = v14;
  __asm { vcmpless xmm0, xmm8, xmm12 }
  v18 = FLOAT_1_0;
  __asm { vblendvps xmm1, xmm8, xmm11, xmm0 }
  v145 = *(float *)&_XMM1;
  v151 = (float)(1.0 / *(float *)&_XMM1) * v12;
  v150 = (float)(1.0 / *(float *)&_XMM1) * v13;
  v152 = (float)(1.0 / *(float *)&_XMM1) * v15;
  v20 = avoidingEntityInfo->currentVelocity.v[1];
  v21 = LODWORD(avoidingEntityInfo->currentVelocity.v[0]);
  v22 = avoidingEntityInfo->currentVelocity.v[2];
  v23 = v21;
  *(float *)&v23 = fsqrt((float)((float)(*(float *)&v21 * *(float *)&v21) + (float)(v20 * v20)) + (float)(v22 * v22));
  _XMM2 = v23;
  v145 = *(float *)&v23;
  __asm
  {
    vcmpless xmm0, xmm2, xmm12
    vblendvps xmm1, xmm2, xmm11, xmm0
  }
  v144 = *(float *)&_XMM1;
  v147 = *(float *)&v21 * (float)(1.0 / *(float *)&_XMM1);
  v146 = v20 * (float)(1.0 / *(float *)&_XMM1);
  v148 = v22 * (float)(1.0 / *(float *)&_XMM1);
  v143[0] = *(float *)&_XMM8 / *(float *)&v23;
  ent = avoidingEntityInfo->ent;
  AIActorInterface::AIActorInterface(&v156);
  AIAgentInterface::AIAgentInterface(&v157);
  v157.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
  v28 = NULL;
  v158 = NULL;
  if ( !ent )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 79, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    v28 = v158;
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
      AINewAgentInterface::SetAgent((AINewAgentInterface *)&v157, ScriptedAgentInfo);
      v28 = (__int64 (__fastcall ***)(_QWORD))&v157;
      v158 = (__int64 (__fastcall ***)(_QWORD))&v157;
      goto LABEL_21;
    }
    v28 = v158;
  }
  actor = ent->actor;
  if ( actor )
  {
    if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
      __debugbreak();
    AIActorInterface::SetActor(&v156, ent->actor);
    v28 = (__int64 (__fastcall ***)(_QWORD))&v156;
    v158 = (__int64 (__fastcall ***)(_QWORD))&v156;
    goto LABEL_21;
  }
  if ( v28 )
LABEL_21:
    v11 = (**v28)(v28);
  v31 = _xmm;
  if ( settings->reciprocality > 0.0 )
  {
    v32 = (bitarray<224> *)(Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? Com_TeamsSP_GetAllTeamFlags() : Com_TeamsMP_GetAllTeamFlags());
    iTeamFlags = *v32;
    v33 = Sentient_FirstSentient(&iTeamFlags);
    if ( v33 )
    {
      v34 = &ptr[0].position.v[1];
      do
      {
        if ( v33->ent != avoidingEntityInfo->ent && v33->ent != avoidingEntityInfo->ignoreEnt )
        {
          p_ent = (const gentity_s **)&v33->ai->ent;
          if ( p_ent )
          {
            AIActorInterface::AIActorInterface(&v160.m_actorInterface);
            AIAgentInterface::AIAgentInterface(&v160.m_newAgentInterface);
            v160.m_newAgentInterface.__vftable = (AINewAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
            AICommonInterface::AICommonInterface(&v160.m_botInterface);
            v160.m_botInterface.__vftable = (AIBotInterface_vtbl *)&AIBotInterface::`vftable';
            AICommonInterface::AICommonInterface(&v160.m_botAgentInterface);
            v160.m_botAgentInterface.__vftable = (AIBotAgentInterface_vtbl *)&AIBotAgentInterface::`vftable';
            v160.m_pAI = NULL;
            AICommonWrapper::Setup(&v160, *p_ent);
            m_pAI = v160.m_pAI;
            if ( !v160.m_pAI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\orca_avoidance.cpp", 1151, ASSERT_TYPE_ASSERT, "(pAI)", (const char *)&queryFormat, "pAI") )
              __debugbreak();
            if ( m_pAI->IsAlive(m_pAI) )
            {
              v37 = m_pAI->GetAI(m_pAI);
              if ( *(_BYTE *)(v37 + 442) )
              {
                v38 = numberOfVerticesOut;
                Sentient_GetOrigin(v33, &ptr[v38].position);
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(v34 - 1) - box.midPoint.v[0]) & v31) < box.halfSize.v[0] && COERCE_FLOAT(COERCE_UNSIGNED_INT(*v34 - box.midPoint.v[1]) & v31) < box.halfSize.v[1] && COERCE_FLOAT(COERCE_UNSIGNED_INT(v34[1] - box.midPoint.v[2]) & v31) < box.halfSize.v[2] )
                {
                  Sentient_GetVelocity(v33, &ptr[v38].velocity);
                  v39 = *((unsigned int *)v34 + 3);
                  v40 = v34[2];
                  v41 = v34[4];
                  v42 = v39;
                  *(float *)&v42 = fsqrt((float)((float)(*(float *)&v39 * *(float *)&v39) + (float)(v40 * v40)) + (float)(v41 * v41));
                  _XMM7 = v42;
                  __asm
                  {
                    vcmpless xmm0, xmm7, xmm12
                    vblendvps xmm1, xmm7, xmm11, xmm0
                  }
                  v144 = *(float *)&_XMM1;
                  v46 = (float)(v18 / *(float *)&_XMM1) * v40;
                  v47 = (float)(v18 / *(float *)&_XMM1) * *(float *)&v39;
                  v48 = (float)(v18 / *(float *)&_XMM1) * v41;
                  v49 = *((unsigned int *)v34 - 1);
                  v50 = avoidingEntityInfo->position.v[0];
                  v56 = v49;
                  v51 = *v34;
                  v52 = avoidingEntityInfo->position.v[1];
                  *(float *)&v39 = *v34 - v52;
                  v53 = v34[1];
                  v54 = v53 - avoidingEntityInfo->position.v[2];
                  *(float *)&v56 = fsqrt((float)((float)((float)(*(float *)&v49 - v50) * (float)(*(float *)&v49 - v50)) + (float)(*(float *)&v39 * *(float *)&v39)) + (float)(v54 * v54));
                  _XMM12 = v56;
                  __asm
                  {
                    vcmpless xmm0, xmm12, cs:__real@80000000
                    vblendvps xmm1, xmm12, xmm2, xmm0
                  }
                  v154 = (float)(1.0 / *(float *)&_XMM1) * (float)(*(float *)&v49 - v50);
                  v153 = (float)(1.0 / *(float *)&_XMM1) * *(float *)&v39;
                  v144 = (float)(1.0 / *(float *)&_XMM1) * v54;
                  if ( *(_BYTE *)(v37 + 441) && *(float *)&_XMM7 > 10.0 && settingsa->othersAvoidMe )
                  {
                    v63 = LODWORD(avoidingEntityInfo->goalPosition.v[0]);
                    v59 = avoidingEntityInfo->goalPosition.v[0] - *(float *)&v49;
                    v60 = avoidingEntityInfo->goalPosition.v[1] - v51;
                    v61 = avoidingEntityInfo->goalPosition.v[2] - v53;
                    *(float *)&v63 = fsqrt((float)((float)(v59 * v59) + (float)(v60 * v60)) + (float)(v61 * v61));
                    _XMM8 = v63;
                    __asm
                    {
                      vcmpless xmm0, xmm8, cs:__real@80000000
                      vblendvps xmm1, xmm8, xmm2, xmm0
                    }
                    if ( (float)((float)((float)((float)((float)(1.0 / *(float *)&_XMM1) * v60) * v150) + (float)((float)((float)(1.0 / *(float *)&_XMM1) * v59) * v151)) + (float)((float)((float)(1.0 / *(float *)&_XMM1) * v61) * v152)) >= 0.0 || v143[0] >= (float)(*(float *)&v63 / *(float *)&_XMM7) )
                    {
                      v34[5] = *(float *)(v37 + 444);
                      if ( v11 && !*(_BYTE *)(v11 + 2988) )
                        goto LABEL_58;
                      if ( (float)((float)((float)(v146 * v153) + (float)(v147 * v154)) + (float)(v148 * v144)) <= 0.90899998 )
                        goto LABEL_58;
                      if ( (float)((float)((float)(v47 * v146) + (float)(v46 * v147)) + (float)(v148 * v48)) <= 0.96499997 )
                        goto LABEL_58;
                      v34[5] = 0.0;
                      if ( v145 <= *(float *)&_XMM7 )
                        goto LABEL_58;
                      v18 = FLOAT_1_0;
                      if ( *(float *)&_XMM12 < 150.0 )
                      {
                        v66 = LODWORD(avoidingEntityInfo->desiredVelocity.v[0]);
                        v67 = v66;
                        *(float *)&v67 = fsqrt((float)((float)(*(float *)&v66 * *(float *)&v66) + (float)(avoidingEntityInfo->desiredVelocity.v[1] * avoidingEntityInfo->desiredVelocity.v[1])) + (float)(avoidingEntityInfo->desiredVelocity.v[2] * avoidingEntityInfo->desiredVelocity.v[2]));
                        _XMM4 = v67;
                        __asm
                        {
                          vcmpless xmm0, xmm4, xmm12
                          vblendvps xmm1, xmm4, xmm11, xmm0
                        }
                        avoidingEntityInfo->desiredVelocity.v[0] = (float)(1.0 / *(float *)&_XMM1) * *(float *)&v66;
                        avoidingEntityInfo->desiredVelocity.v[1] = (float)(1.0 / *(float *)&_XMM1) * avoidingEntityInfo->desiredVelocity.v[1];
                        avoidingEntityInfo->desiredVelocity.v[2] = (float)(1.0 / *(float *)&_XMM1) * avoidingEntityInfo->desiredVelocity.v[2];
                        avoidingEntityInfo->desiredVelocity.v[0] = *(float *)&_XMM7 * avoidingEntityInfo->desiredVelocity.v[0];
                        avoidingEntityInfo->desiredVelocity.v[1] = *(float *)&_XMM7 * avoidingEntityInfo->desiredVelocity.v[1];
                        avoidingEntityInfo->desiredVelocity.v[2] = *(float *)&_XMM7 * avoidingEntityInfo->desiredVelocity.v[2];
                        v71 = outAvoidingVelocitya[0];
                        *(float *)&v66 = outAvoidingVelocitya[0]->v[1];
                        v72 = (unsigned int)outAvoidingVelocitya[0]->v[0];
                        v73 = outAvoidingVelocitya[0]->v[2];
                        v74 = v72;
                        *(float *)&v74 = fsqrt((float)((float)(*(float *)&v72 * *(float *)&v72) + (float)(*(float *)&v66 * *(float *)&v66)) + (float)(v73 * v73));
                        _XMM3 = v74;
                        __asm
                        {
                          vcmpless xmm0, xmm3, xmm12
                          vblendvps xmm1, xmm3, xmm11, xmm0
                        }
                        outAvoidingVelocitya[0]->v[0] = (float)(*(float *)&v72 * (float)(1.0 / *(float *)&_XMM1)) * *(float *)&_XMM7;
                        v71->v[1] = (float)(*(float *)&v66 * (float)(1.0 / *(float *)&_XMM1)) * *(float *)&_XMM7;
                        v71->v[2] = (float)(v73 * (float)(1.0 / *(float *)&_XMM1)) * *(float *)&_XMM7;
                      }
                      goto LABEL_59;
                    }
                  }
                  else if ( *(float *)&_XMM7 != 0.0 || (float)(fsqrt(v149) + 25.0) >= *(float *)&v56 )
                  {
                    if ( *(_BYTE *)(v37 + 440) && (float)((float)((float)((float)(v52 - v51) * v47) + (float)((float)(v50 - *(float *)&v49) * v46)) + (float)((float)(avoidingEntityInfo->position.v[2] - v53) * v48)) > 0.90899998 && (float)((float)((float)(v47 * v146) + (float)(v46 * v147)) + (float)(v48 * v148)) > 0.96499997 )
                      v34[5] = 1.0;
                    else
                      v34[5] = 0.0;
LABEL_58:
                    v18 = FLOAT_1_0;
LABEL_59:
                    pNavigator = v33->ai->pNavigator;
                    if ( pNavigator )
                    {
                      v79 = pNavigator->Get2DNavigator(pNavigator);
                      if ( v79 )
                      {
                        CurArea = AINavigator2D::GetCurArea(v79);
                        bfx::AreaHandle::operator=(&ptr[v38].hArea, CurArea);
                      }
                    }
                    *(v34 - 2) = *(float *)(v37 + 456);
                    *((_DWORD *)v34 + 10) = v33->ent->s.number;
                    v81 = *(_DWORD **)color.v;
                    *(_DWORD *)(*(_QWORD *)plane.v + 4i64 * (int)**(_DWORD **)color.v) = v33->ent->s.number;
                    ++*v81;
                    v10 = ++numberOfVerticesOut;
                    v34 += 13;
                    v31 = _xmm;
                    goto LABEL_65;
                  }
                  v31 = _xmm;
                  v18 = FLOAT_1_0;
                }
              }
            }
          }
          v10 = numberOfVerticesOut;
        }
LABEL_65:
        v33 = Sentient_NextSentient(v33, &iTeamFlags);
      }
      while ( v33 );
    }
  }
  v82 = box.midPoint.v[0];
  v145 = box.midPoint.v[0];
  v83 = box.midPoint.v[1];
  v84 = box.midPoint.v[2];
  eTeam = (unsigned int)avoidingEntityInfo->ent->sentient->eTeam;
  memset(&iTeamFlags, 0, sizeof(iTeamFlags));
  if ( (unsigned int)eTeam >= 0xE0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", eTeam, 224) )
    __debugbreak();
  iTeamFlags.array[eTeam >> 5] |= 0x80000000 >> (eTeam & 0x1F);
  v86 = Nav_TranslateTeamFlagsToRepulsorUsageFlags(&iTeamFlags);
  FirstRepulsor = Nav_GetFirstRepulsor();
  if ( FirstRepulsor )
  {
    v88 = &ptr[v10].velocity.v[2];
    do
    {
      radius = FirstRepulsor->radius;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(FirstRepulsor->origin.v[0] - v82) & v31) >= (float)(radius + box.halfSize.v[0]) || COERCE_FLOAT(COERCE_UNSIGNED_INT(FirstRepulsor->origin.v[1] - v83) & v31) >= (float)(radius + box.halfSize.v[1]) || COERCE_FLOAT(COERCE_UNSIGNED_INT(FirstRepulsor->origin.v[2] - v84) & v31) >= box.halfSize.v[2] || avoidingEntityInfo->ent && avoidingEntityInfo->ent->s.number == FirstRepulsor->entNum )
        goto LABEL_107;
      ignoreEnt = avoidingEntityInfo->ignoreEnt;
      if ( ignoreEnt )
      {
        if ( ignoreEnt->s.number == FirstRepulsor->entNum )
          goto LABEL_107;
      }
      if ( (v86 & FirstRepulsor->usageFlags) == 0 )
        goto LABEL_107;
      v91 = &g_entities[FirstRepulsor->entNum];
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v92 = v91 - g_entities;
      if ( (unsigned int)v92 >= 0x800 )
      {
        LODWORD(v141) = 2048;
        LODWORD(numberOfPlanesOut) = v91 - g_entities;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", numberOfPlanesOut, v141) )
          __debugbreak();
      }
      v92 = (__int16)v92;
      if ( (unsigned int)(__int16)v92 >= 0x800 )
      {
        LODWORD(v141) = 2048;
        LODWORD(numberOfPlanesOut) = v92;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", numberOfPlanesOut, v141) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v92].r.isInUse != g_entityIsInUse[v92] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v92] && v91->s.eType == ET_PLAYER )
      {
        v93 = v91->r.currentOrigin.v[0];
        v94 = v93 - avoidingEntityInfo->position.v[0];
        v95 = LODWORD(v91->r.currentOrigin.v[1]);
        v97 = v95;
        v96 = *(float *)&v95 - avoidingEntityInfo->position.v[1];
        v98 = v91->r.currentOrigin.v[2];
        v99 = v98 - avoidingEntityInfo->position.v[2];
        *(float *)&v97 = (float)((float)(v96 * v96) + (float)(v94 * v94)) + (float)(v99 * v99);
        v100 = v97;
        if ( v149 < (float)(*(float *)&v97 - 2500.0) )
        {
          p_commandTime = (float *)&v91->client->ps.commandTime;
          v102 = fsqrt((float)((float)(p_commandTime[15] * p_commandTime[15]) + (float)(p_commandTime[16] * p_commandTime[16])) + (float)(p_commandTime[17] * p_commandTime[17]));
          if ( v102 == 0.0 )
            goto LABEL_106;
          v103 = v93 - avoidingEntityInfo->goalPosition.v[0];
          v107 = LODWORD(v91->r.currentOrigin.v[1]);
          v104 = *(float *)&v95 - avoidingEntityInfo->goalPosition.v[1];
          v105 = v98 - avoidingEntityInfo->goalPosition.v[2];
          *(float *)&v107 = fsqrt((float)((float)(v104 * v104) + (float)(v103 * v103)) + (float)(v105 * v105));
          _XMM11 = v107;
          __asm
          {
            vcmpless xmm0, xmm11, cs:__real@80000000
            vblendvps xmm1, xmm11, xmm2, xmm0
          }
          if ( (float)((float)((float)((float)(v103 * (float)(1.0 / *(float *)&_XMM1)) * v94) + (float)((float)(v104 * (float)(1.0 / *(float *)&_XMM1)) * v96)) + (float)((float)(v105 * (float)(1.0 / *(float *)&_XMM1)) * v99)) < 0.0 && v143[0] < (float)(*(float *)&v107 / v102) )
            goto LABEL_106;
        }
        if ( settingsa->pushPlayerEnabled && *(float *)&v100 < 10000.0 )
        {
          v110 = avoidingEntityInfo->desiredVelocity.v[1];
          v111 = LODWORD(avoidingEntityInfo->desiredVelocity.v[0]);
          v112 = v111;
          *(float *)&v112 = fsqrt((float)((float)(*(float *)&v111 * *(float *)&v111) + (float)(v110 * v110)) + (float)(avoidingEntityInfo->desiredVelocity.v[2] * avoidingEntityInfo->desiredVelocity.v[2]));
          _XMM4 = v112;
          __asm
          {
            vcmpless xmm0, xmm4, cs:__real@80000000
            vblendvps xmm1, xmm4, xmm3, xmm0
          }
          v116 = (float)(1.0 / *(float *)&_XMM1) * *(float *)&v111;
          *(float *)&_XMM4 = (float)(1.0 / *(float *)&_XMM1) * v110;
          v118 = v100;
          *(float *)&v118 = fsqrt(*(float *)&v100);
          _XMM1 = v118;
          __asm
          {
            vcmpless xmm0, xmm1, cs:__real@80000000
            vblendvps xmm1, xmm1, xmm3, xmm0
          }
          if ( (float)((float)((float)(v94 * (float)(1.0 / *(float *)&_XMM1)) * v116) + (float)((float)(v96 * (float)(1.0 / *(float *)&_XMM1)) * *(float *)&_XMM4)) > 0.0 )
          {
LABEL_106:
            v10 = numberOfVerticesOut;
            goto LABEL_107;
          }
        }
        *(v88 - 2) = FirstRepulsor->velocity.v[0];
        *(v88 - 1) = FirstRepulsor->velocity.v[1];
        *v88 = FirstRepulsor->velocity.v[2];
        v88[1] = 0.0;
        *(v88 - 6) = FirstRepulsor->radius * 2.0;
        v121 = *(_DWORD **)color.v;
        *(_DWORD *)(*(_QWORD *)plane.v + 4i64 * (int)**(_DWORD **)color.v) = FirstRepulsor->entNum;
        ++*v121;
      }
      else
      {
        *(v88 - 2) = FirstRepulsor->velocity.v[0];
        *(v88 - 1) = FirstRepulsor->velocity.v[1];
        *v88 = FirstRepulsor->velocity.v[2];
        v88[1] = 0.0;
        *(v88 - 6) = FirstRepulsor->radius;
      }
      *(v88 - 5) = FirstRepulsor->origin.v[0];
      *(v88 - 4) = FirstRepulsor->origin.v[1];
      *(v88 - 3) = FirstRepulsor->origin.v[2];
      v10 = ++numberOfVerticesOut;
      v88 += 13;
LABEL_107:
      FirstRepulsor = Nav_GetNextRepulsor(FirstRepulsor);
      v31 = _xmm;
      v82 = v145;
    }
    while ( FirstRepulsor );
  }
  Navigator = Nav_GetNavigator(avoidingEntityInfo->ent);
  v123 = (__int64)Navigator->Get2DNavigator(Navigator);
  fsqrt((float)((float)(avoidingEntityInfo->desiredVelocity.v[0] * avoidingEntityInfo->desiredVelocity.v[0]) + (float)(avoidingEntityInfo->desiredVelocity.v[1] * avoidingEntityInfo->desiredVelocity.v[1])) + (float)(avoidingEntityInfo->desiredVelocity.v[2] * avoidingEntityInfo->desiredVelocity.v[2]));
  bfx::AreaHandle::AreaHandle(&v168);
  bfx::LinkHandle::LinkHandle(&v169);
  v124 = settingsa;
  LOBYTE(destructor) = 1;
  LOBYTE(v125) = 1;
  (*(void (__fastcall **)(__int64, __int64, __int64, char *, int))(*(_QWORD *)v123 + 416i64))(v123, v126, v125, v167, destructor);
  avoidingEntityInfo->posAlongPath = (nav_posAlongPathResults_t *)v167;
  v143[0] = 0.0;
  BuildVelocityObstaclePlanes(avoidingEntityInfo, v124, ptr, v10, planes, (int *)v143);
  polygon[0].v[0] = v124->maxSpeed;
  polygon[0].v[1] = polygon[0].v[0];
  polygon[0].v[2] = 0.0;
  LODWORD(polygon[1].v[0]) = LODWORD(polygon[0].v[0]) ^ _xmm;
  polygon[1].v[1] = polygon[0].v[0];
  polygon[1].v[2] = 0.0;
  LODWORD(polygon[2].v[0]) = LODWORD(polygon[0].v[0]) ^ _xmm;
  LODWORD(polygon[2].v[1]) = LODWORD(polygon[0].v[0]) ^ _xmm;
  polygon[2].v[2] = 0.0;
  polygon[3].v[0] = polygon[0].v[0];
  LODWORD(polygon[3].v[1]) = LODWORD(polygon[0].v[0]) ^ _xmm;
  polygon[3].v[2] = 0.0;
  numberOfVerticesOut = 4;
  v127 = avoidingEntityInfo->desiredVelocity.v[1];
  plane.v[0] = avoidingEntityInfo->desiredVelocity.v[0];
  plane.v[1] = v127;
  plane.v[2] = 0.0;
  plane.v[3] = 0.0;
  v128 = SplitPolygon(polygon, 32, &numberOfVerticesOut, &plane);
  v129 = !v128;
  if ( !v128 )
    goto LABEL_127;
  v130 = 0;
  v131 = LODWORD(v143[0]);
  if ( SLODWORD(v143[0]) <= 0 )
    goto LABEL_131;
  v132 = &planes[0].xyz + 1;
  do
  {
    if ( v124->maxSpeed > v132->v[0] )
    {
      v133 = SplitPolygon(polygon, 32, &numberOfVerticesOut, &planes[v130]);
      v129 = !v133;
      if ( !v133 )
        break;
    }
    ++v130;
    v132 = (vec3_t *)((char *)v132 + 16);
  }
  while ( v130 < v131 );
  if ( v129 )
  {
LABEL_127:
    Sys_ProfEndNamedEvent();
    v136 = 3;
  }
  else
  {
LABEL_131:
    if ( avoidingEntityInfo->drawAvoidance )
    {
      plane.v[0] = avoidingEntityInfo->position.v[0] + avoidingEntityInfo->desiredVelocity.v[0];
      plane.v[1] = avoidingEntityInfo->position.v[1] + avoidingEntityInfo->desiredVelocity.v[1];
      plane.v[2] = avoidingEntityInfo->position.v[2] + avoidingEntityInfo->desiredVelocity.v[2];
      color = (vec4_t)_xmm;
      G_DebugLine(&avoidingEntityInfo->position, (const vec3_t *)&plane, &color, 0);
      G_DebugBox(&vec3_origin, &box, 0.0, &colorCyan, 0, 1);
    }
    v134 = outAvoidingVelocitya[0];
    v135 = numberOfVerticesOut;
    v136 = Avoid(avoidingEntityInfo, v124, polygon, numberOfVerticesOut, outAvoidingVelocitya[0], fnCollisionChecka[0]);
    if ( (float)((float)((float)(v134->v[0] * v134->v[0]) + (float)(v134->v[1] * v134->v[1])) + (float)(v134->v[2] * v134->v[2])) > 0.0 )
      v134->v[2] = avoidingEntityInfo->desiredVelocity.v[2];
    Sys_ProfEndNamedEvent();
    if ( avoidingEntityInfo->drawAvoidance )
    {
      *(_OWORD *)fnCollisionChecka = _xmm;
      DrawPolygon((const vec3_t (*)[32])polygon, v135, &avoidingEntityInfo->position, (const vec4_t *)fnCollisionChecka);
    }
    v137 = DCONST_DVARINT_ai_showRepulsors;
    if ( !DCONST_DVARINT_ai_showRepulsors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_showRepulsors") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v137);
    if ( v137->current.integer == 2 || avoidingEntityInfo->drawAvoidance )
    {
      G_DebugCircle(&avoidingEntityInfo->position, v124->radius, &colorWhite, 0, 1, 1);
      *(float *)fnCollisionChecka = v134->v[0] + avoidingEntityInfo->position.v[0];
      *((float *)fnCollisionChecka + 1) = avoidingEntityInfo->position.v[1] + v134->v[1];
      *(float *)&fnCollisionChecka[1] = avoidingEntityInfo->position.v[2] + v134->v[2];
      *(_OWORD *)outAvoidingVelocitya = _xmm;
      G_DebugLine(&avoidingEntityInfo->position, (const vec3_t *)fnCollisionChecka, (const vec4_t *)outAvoidingVelocitya, 0);
    }
  }
  bfx::LinkHandle::~LinkHandle(&v169);
  bfx::AreaHandle::~AreaHandle(&v168);
  `eh vector destructor iterator'(ptr, 0x34ui64, 0x110ui64, (void (__fastcall *)(void *))OrcaColliderInfo::~OrcaColliderInfo);
  return v136;
}

/*
==============
ORCA_RateDistance
==============
*/
float ORCA_RateDistance(float distance, float minWeight, float maxWeight, float minDist, float maxDist)
{
  double v6; 

  if ( (float)(maxDist - minDist) < 0.000001 )
    return 0.0;
  v6 = I_fclamp((float)(distance - minDist) / (float)(maxDist - minDist), 0.0, 1.0);
  return (float)(*(float *)&v6 * (float)(maxWeight - minWeight)) + minWeight;
}

/*
==============
ORCA_RateVelocity
==============
*/
__int64 ORCA_RateVelocity(const AvoidingEntityInfo *avoidingEntityInfo, const AvoidSettings *settings, const vec3_t *desiredDirection, float *result)
{
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  double v18; 
  const char *v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  double v24; 
  float v25; 
  const char *v26; 
  AINavigator *Navigator; 
  AINavigator2D *v28; 
  const bfx::AreaHandle *CurArea; 
  const bfx::PathSpec *PathSpec; 
  nav_space_s *v31; 
  float m_DistTraveled; 
  bool v33; 
  unsigned int v34; 
  float v35; 
  float v36; 
  float v37; 
  const char *v38; 
  const bfx::PathSpec *v39; 
  float v40; 
  __int128 v41; 
  float v42; 
  __int128 v43; 
  bool IsPointOnMeshCustom; 
  const bfx::AreaHandle *NextCornerArea; 
  float v49; 
  const char *v50; 
  signed int layer; 
  bfx::AreaHandle outAreaHandle; 
  bfx::AreaHandle hStartArea; 
  __int64 v54; 
  vec3_t xyz; 
  vec3_t targetPos; 
  vec3_t m_EndPos; 
  vec4_t color; 
  vec3_t hSpace; 
  vec3_t pos; 
  vec3_t startPos; 
  vec3_t outSnappedPos; 
  vec3_t outUp; 
  nav_probe_results_s pOutResults; 
  nav_probe_results_s v65; 

  v54 = -2i64;
  v7 = desiredDirection->v[1];
  v8 = desiredDirection->v[0];
  v9 = desiredDirection->v[2];
  v10 = fsqrt((float)((float)(v8 * v8) + (float)(v7 * v7)) + (float)(v9 * v9));
  if ( v10 < settings->minSpeed )
  {
    *result = 0.0;
    return 0i64;
  }
  v12 = avoidingEntityInfo->desiredVelocity.v[1];
  v13 = avoidingEntityInfo->desiredVelocity.v[0];
  v14 = avoidingEntityInfo->desiredVelocity.v[2];
  v15 = fsqrt((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14));
  v16 = (float)((float)((float)(v7 - v12) * (float)(v7 - v12)) + (float)((float)(v8 - v13) * (float)(v8 - v13))) + (float)((float)(v9 - v14) * (float)(v9 - v14));
  if ( v15 >= 0.000001 )
  {
    v18 = I_fclamp(fsqrt(v16) * (float)(1.0 / v15), 0.0, 1.0);
    v17 = 2.0 - (float)(*(float *)&v18 * 2.0);
  }
  else
  {
    v17 = 0.0;
  }
  if ( avoidingEntityInfo->drawAvoidance )
  {
    color = (vec4_t)_xmm;
    xyz.v[0] = avoidingEntityInfo->position.v[0] + desiredDirection->v[0];
    xyz.v[1] = avoidingEntityInfo->position.v[1] + desiredDirection->v[1];
    xyz.v[2] = avoidingEntityInfo->position.v[2] + desiredDirection->v[2];
    v19 = j_va("code dir:%f", v17);
    G_Main_AddDebugStringWithDuration(&xyz, &color, 0.2, v19, 1);
    xyz.v[2] = xyz.v[2] + -8.0;
  }
  v20 = desiredDirection->v[1] - avoidingEntityInfo->currentVelocity.v[1];
  v21 = desiredDirection->v[2] - avoidingEntityInfo->currentVelocity.v[2];
  v22 = fsqrt((float)((float)(v20 * v20) + (float)((float)(desiredDirection->v[0] - avoidingEntityInfo->currentVelocity.v[0]) * (float)(desiredDirection->v[0] - avoidingEntityInfo->currentVelocity.v[0]))) + (float)(v21 * v21));
  if ( v15 >= 0.000001 )
  {
    v24 = I_fclamp(v22 / v15, 0.0, 1.0);
    v23 = 1.5 - (float)(*(float *)&v24 * 1.5);
  }
  else
  {
    v23 = 0.0;
  }
  v25 = v17 + v23;
  if ( avoidingEntityInfo->drawAvoidance )
  {
    v26 = j_va("curr dir:%f", v23);
    G_Main_AddDebugStringWithDuration(&xyz, &color, 0.2, v26, 1);
    xyz.v[2] = xyz.v[2] + -8.0;
  }
  Navigator = Nav_GetNavigator(avoidingEntityInfo->ent);
  v28 = Navigator->Get2DNavigator(Navigator);
  if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\orca_avoidance.cpp", 936, ASSERT_TYPE_ASSERT, "(pNav2D)", (const char *)&queryFormat, "pNav2D") )
    __debugbreak();
  v28->GetCurPos(v28, &startPos);
  CurArea = AINavigator2D::GetCurArea(v28);
  targetPos.v[0] = desiredDirection->v[0] + avoidingEntityInfo->position.v[0];
  targetPos.v[1] = avoidingEntityInfo->position.v[1] + desiredDirection->v[1];
  targetPos.v[2] = avoidingEntityInfo->position.v[2] + desiredDirection->v[2];
  bfx::AreaHandle::AreaHandle(&pOutResults.m_hEndArea);
  bfx::AreaHandle::AreaHandle(&v65.m_hEndArea);
  PathSpec = AINavigator2D::GetPathSpec(v28);
  *(_QWORD *)hSpace.v = Navigator->m_pSpace;
  layer = Navigator->m_Layer;
  bfx::AreaHandle::AreaHandle(&hStartArea);
  AINavigator::GetUpVector(Navigator, &outUp);
  v31 = *(nav_space_s **)hSpace.v;
  Nav_GetClosestVerticalPos(&targetPos, &outUp, layer, *(bfx::SpaceHandle **)hSpace.v, PathSpec, &targetPos, &hStartArea);
  Nav_Trace(&startPos, CurArea, &targetPos, PathSpec, &pOutResults);
  Nav_Trace(&targetPos, &hStartArea, &startPos, PathSpec, &v65);
  m_DistTraveled = pOutResults.m_DistTraveled;
  v33 = (float)(v10 - (float)(pOutResults.m_DistTraveled + v65.m_DistTraveled)) < 1.0;
  if ( !level.frameDuration )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    m_DistTraveled = pOutResults.m_DistTraveled;
  }
  if ( m_DistTraveled < (float)((float)((float)level.frameDuration * 0.001) * v10) && !v33 )
  {
    if ( avoidingEntityInfo->drawAvoidance )
    {
      G_Main_AddDebugStringWithDuration(&xyz, &color, 0.2, "NavTrace failed", 1);
      xyz.v[2] = xyz.v[2] + -8.0;
    }
    v34 = 0;
    *result = 0.0;
    goto LABEL_45;
  }
  v35 = FLOAT_0_5;
  v36 = ORCA_RateDistance(m_DistTraveled, 0.0, 1.0, v10 * 0.5, v10);
  v37 = v25 + v36;
  if ( avoidingEntityInfo->drawAvoidance )
  {
    v38 = j_va("NavTrace dist:%f", v36);
    G_Main_AddDebugStringWithDuration(&xyz, &color, 0.2, v38, 1);
    xyz.v[2] = xyz.v[2] + -8.0;
  }
  if ( v33 )
    m_EndPos = targetPos;
  else
    m_EndPos = pOutResults.m_EndPos;
  v39 = AINavigator2D::GetPathSpec(v28);
  if ( Nav_IsStraightLineReachable(&m_EndPos, &pOutResults.m_hEndArea, &avoidingEntityInfo->posAlongPath->m_Pos, &avoidingEntityInfo->posAlongPath->m_hArea, v39) )
  {
LABEL_41:
    v49 = v37 + v35;
    v34 = 0;
    if ( avoidingEntityInfo->drawAvoidance )
    {
      v50 = j_va("Final:%f", v49);
      G_Main_AddDebugStringWithDuration(&xyz, &color, 0.2, v50, 1);
      G_DebugCircle(&xyz, 5.0, &color, 1, 1, 0);
    }
    *result = v49;
    if ( v49 != 0.0 )
      v34 = 5;
    goto LABEL_45;
  }
  if ( avoidingEntityInfo->drawAvoidance )
  {
    G_Main_AddDebugStringWithDuration(&xyz, &color, 0.2, "Cornercheck Failed", 1);
    xyz.v[2] = xyz.v[2] + -8.0;
  }
  bfx::AreaHandle::AreaHandle(&outAreaHandle);
  v40 = desiredDirection->v[1];
  v41 = LODWORD(desiredDirection->v[0]);
  v42 = desiredDirection->v[2];
  v43 = v41;
  *(float *)&v43 = fsqrt((float)((float)(*(float *)&v41 * *(float *)&v41) + (float)(v40 * v40)) + (float)(v42 * v42));
  _XMM4 = v43;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm1, xmm4, xmm11, xmm0
  }
  hSpace.v[0] = *(float *)&_XMM1;
  pos.v[0] = (float)((float)((float)(1.0 / *(float *)&_XMM1) * *(float *)&v41) * (float)(*(float *)&v43 * 0.5)) + avoidingEntityInfo->position.v[0];
  pos.v[1] = (float)((float)((float)(1.0 / *(float *)&_XMM1) * v40) * (float)(*(float *)&v43 * 0.5)) + avoidingEntityInfo->position.v[1];
  pos.v[2] = (float)((float)((float)(1.0 / *(float *)&_XMM1) * v42) * (float)(*(float *)&v43 * 0.5)) + avoidingEntityInfo->position.v[2];
  IsPointOnMeshCustom = Nav_IsPointOnMeshCustom(v31, &pos, (AINavLayer)layer, PathSpec, &outSnappedPos, &outAreaHandle);
  if ( IsPointOnMeshCustom && Nav_IsStraightLineReachable(&outSnappedPos, &outAreaHandle, &avoidingEntityInfo->posAlongPath->m_Pos, &avoidingEntityInfo->posAlongPath->m_hArea, PathSpec) )
  {
    v35 = FLOAT_0_25;
LABEL_40:
    bfx::AreaHandle::~AreaHandle(&outAreaHandle);
    goto LABEL_41;
  }
  if ( v28->HasPath(v28) )
  {
    v28->GetNextCorner(v28, &hSpace);
    if ( IsPointOnMeshCustom )
    {
      NextCornerArea = AINavigator2D::GetNextCornerArea(v28);
      if ( Nav_IsStraightLineReachable(&outSnappedPos, &outAreaHandle, &hSpace, NextCornerArea, PathSpec) )
      {
        v35 = 0.0;
        goto LABEL_40;
      }
    }
  }
  *result = 0.0;
  bfx::AreaHandle::~AreaHandle(&outAreaHandle);
  v34 = 1;
LABEL_45:
  bfx::AreaHandle::~AreaHandle(&hStartArea);
  bfx::AreaHandle::~AreaHandle(&v65.m_hEndArea);
  bfx::AreaHandle::~AreaHandle(&pOutResults.m_hEndArea);
  return v34;
}

/*
==============
SplitPolygon
==============
*/
char SplitPolygon(vec3_t *polygon, int capacity, int *numberOfVerticesOut, const vec4_t *plane)
{
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  int v15; 
  int v16; 
  float *v17; 
  int v18; 
  float *v19; 
  __int64 v20; 
  __int64 v21; 
  float v22; 
  float v23; 
  float v24; 
  __int64 v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  int v33; 
  int v34; 
  char Src[384]; 
  __int128 v37; 
  __int128 v38; 
  __int128 v39; 
  __int128 v40; 
  __int128 v41; 
  __int128 v42; 
  __int128 v43; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 

  v15 = *numberOfVerticesOut;
  v16 = 0;
  v34 = *numberOfVerticesOut;
  if ( *numberOfVerticesOut <= 0 )
    return 0;
  v17 = (float *)Src;
  v18 = 1;
  v19 = &polygon->v[2];
  v46 = v4;
  v20 = 0i64;
  v45 = v5;
  v21 = 0i64;
  v44 = v6;
  v43 = v7;
  v42 = v8;
  v41 = v9;
  v40 = v10;
  v39 = v11;
  v38 = v12;
  v37 = v13;
  v33 = 1;
  do
  {
    v22 = *(v19 - 2);
    v23 = *(v19 - 1);
    v24 = (float)((float)((float)(v22 * plane->v[0]) + (float)(v23 * plane->v[1])) + (float)(*v19 * plane->v[2])) - plane->v[3];
    v25 = v18 % v15;
    v26 = polygon[v25].v[0];
    v27 = polygon[v25].v[1];
    v28 = polygon[v25].v[2];
    v29 = (float)((float)((float)(v27 * plane->v[1]) + (float)(v26 * plane->v[0])) + (float)(v28 * plane->v[2])) - plane->v[3];
    if ( (float)(v29 * v24) < 0.0 )
    {
      v30 = v24 / (float)(v24 - v29);
      v31 = (float)((float)(v28 - *v19) * v30) + *v19;
      *v17 = (float)((float)(v26 - v22) * v30) + v22;
      v17[1] = (float)((float)(v27 - v23) * v30) + v23;
      v17[2] = v31;
      v17 += 3;
      ++v16;
      if ( ++v20 >= 32 )
        break;
    }
    if ( (float)((float)((float)(polygon[v25].v[1] * plane->v[1]) + (float)(polygon[v25].v[0] * plane->v[0])) + (float)(polygon[v25].v[2] * plane->v[2])) > plane->v[3] )
    {
      ++v16;
      *v17 = polygon[v25].v[0];
      ++v20;
      v17[1] = polygon[v25].v[1];
      v17[2] = polygon[v25].v[2];
      v17 += 3;
      if ( v20 >= 32 )
        break;
    }
    v15 = v34;
    v18 = v33 + 1;
    ++v21;
    ++v33;
    v19 += 3;
  }
  while ( v21 < v34 );
  if ( !v16 )
    return 0;
  if ( v16 >= capacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\orca_avoidance.cpp", 183, ASSERT_TYPE_ASSERT, "(newPolygonVertexCount < capacity)", (const char *)&queryFormat, "newPolygonVertexCount < capacity") )
    __debugbreak();
  *numberOfVerticesOut = v16;
  memcpy_0(polygon, Src, 12i64 * v16);
  return 1;
}

