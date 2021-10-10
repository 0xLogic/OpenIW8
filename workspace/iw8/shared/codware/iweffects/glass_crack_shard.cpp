/*
==============
Glass_ConvertLoopsToPiece
==============
*/

bool __fastcall Glass_ConvertLoopsToPiece(FxGlassCrackShardWork *work, FxGlassCrackEdge *const *inLoops, unsigned int inLoopCount, FxGlassShard *outShard)
{
  return ?Glass_ConvertLoopsToPiece@@YA_NPEIAUFxGlassCrackShardWork@@QEBQEIAUFxGlassCrackEdge@@IPEAUFxGlassShard@@@Z(work, inLoops, inLoopCount, outShard);
}

/*
==============
Glass_IsEdgeLoopBackwards
==============
*/

bool __fastcall Glass_IsEdgeLoopBackwards(const FxGlassCrackShardWork *work, const FxGlassCrackEdge *edgeLoop)
{
  return ?Glass_IsEdgeLoopBackwards@@YA_NPEBUFxGlassCrackShardWork@@PEBUFxGlassCrackEdge@@@Z(work, edgeLoop);
}

/*
==============
Glass_AreaX2AndScaledCentroidForEdgeLoop
==============
*/
long double Glass_AreaX2AndScaledCentroidForEdgeLoop(const FxGlassCrackShardWork *work, const FxGlassCrackEdge *edgeLoop, long double *scaledCentroid)
{
  const FxGlassCrackEdge *v6; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 i0; 
  __int64 v10; 
  double v11; 
  __int128 v12; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 
  __int128 v17; 
  unsigned int v18; 
  double v19; 
  double v20; 
  double v21; 
  __int128 v22; 
  __int128 v23; 
  unsigned int v24; 
  double *v25; 
  double v26; 
  double v27; 
  double v28; 
  double v29; 
  double v30; 
  double v31; 
  double v32; 
  double v33; 
  double v34; 
  double v35; 
  double v36; 
  double v37; 
  double v38; 
  double v39; 
  double v40; 
  double v41; 
  double v42; 
  double v43; 
  double v44; 
  __int128 v45; 
  __int64 *v46; 
  __int64 v47; 
  double v48; 
  double v49; 
  double v50; 
  __int128 v51; 
  __int64 v53; 
  __int64 v54; 
  double v55; 
  double v56; 
  double v57; 
  double v58; 
  double v59; 
  double v60; 
  double v61; 

  v6 = edgeLoop;
  v7 = 0;
  do
  {
    v8 = v7;
    if ( v7 >= 0x80 )
    {
      LODWORD(v54) = 128;
      LODWORD(v53) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 779, ASSERT_TYPE_ASSERT, "(unsigned)( vertCount ) < (unsigned)( ( sizeof( *array_counter( coord ) ) + 0 ) )", "vertCount doesn't index ARRAY_COUNT( coord )\n\t%i not in [0, %i)", v53, v54) )
        __debugbreak();
    }
    i0 = v6->i0;
    v6 = v6->next;
    v10 = v7++;
    v10 *= 2i64;
    v11 = work->pts[i0].xy.v[0];
    v13 = work->pts[i0].xy.v[1];
    v12 = *(unsigned __int64 *)&v13;
    *(&v58 + v10) = v11;
    *(&v59 + v10) = v13;
  }
  while ( v6 != edgeLoop );
  v14 = v58;
  v15 = v59;
  *((_QWORD *)&v17 + 1) = 0i64;
  v16 = v13 - v61;
  v18 = 1;
  v19 = *(&v59 + 2 * v7 - 4);
  v20 = *(&v58 + 2 * v7 - 4);
  v21 = (v19 - v59) * v11;
  *(double *)&v17 = (v13 - v61) * v58 + v21;
  v22 = v17;
  v56 = (v58 - v20) * *(double *)&v12 * (v20 + v11 + v58) + (v60 - v11) * v59 * (v11 + v58 + v60) + *scaledCentroid;
  *scaledCentroid = v56;
  *((_QWORD *)&v17 + 1) = *((_QWORD *)&v12 + 1);
  *(double *)&v17 = (*(double *)&v12 + v15 + v61) * (v16 * v14) + (v19 + *(double *)&v12 + v15) * v21 + scaledCentroid[1];
  v23 = v17;
  scaledCentroid[1] = *(double *)&v17;
  v55 = *(double *)&v22;
  if ( v8 > 1 )
  {
    if ( v8 - 1 >= 4 )
    {
      v24 = 2;
      v25 = &v61;
      do
      {
        v26 = *(&v59 + 2 * v24);
        v27 = *(&v59 + 2 * v24 - 4);
        v28 = *(&v59 + 2 * v24 + 2);
        v29 = *(&v59 + 2 * v24 + 4);
        v30 = *(&v58 + 2 * v24 + 4);
        v31 = *(&v59 + 2 * v18);
        v32 = *(&v58 + 2 * v24 + 2);
        v57 = (v27 - v26) * *(v25 - 1);
        v33 = (v31 - v28) * v25[1];
        v34 = (v26 - v29) * v25[3];
        *((_QWORD *)&v45 + 1) = 0i64;
        *(double *)&v45 = (v27 + *v25 + v26) * v57 + *(double *)&v23 + (v31 + v25[2] + v28) * v33 + (v26 + v25[4] + v29) * v34;
        v35 = v57 + v55 + v33;
        v36 = *(&v58 + 2 * v24 - 4);
        v37 = v25[6];
        v38 = *(&v59 + 2 * v24 + 6);
        v39 = (v28 - v38) * v25[5];
        v40 = v35 + v34;
        v41 = *(&v58 + 2 * v24);
        v42 = *(&v58 + 2 * v24 + 6);
        v55 = v40 + v39;
        v43 = v37 + *(&v59 + 2 * v24 + 2);
        v44 = (v41 - v36) * *v25 * (v36 + *(v25 - 1) + v41) + v56 + (v32 - *(&v58 + 2 * v18)) * v25[2] * (*(&v58 + 2 * v18) + v25[1] + v32) + (v41 + v25[3] + v30) * ((v30 - v41) * v25[4]) + (v32 + v25[5] + v42) * ((v42 - v32) * v37);
        v56 = v44;
        v18 += 4;
        v25 += 8;
        v24 += 4;
        *(double *)&v45 = *(double *)&v45 + (v43 + v38) * v39;
        v23 = v45;
      }
      while ( v18 < v8 - 3 );
      v22 = *(unsigned __int64 *)&v55;
      *scaledCentroid = v44;
      scaledCentroid[1] = *(double *)&v45;
    }
    if ( v18 < v8 )
    {
      v46 = (__int64 *)(&v59 + 2 * v18);
      do
      {
        v47 = 2i64 * (v18 - 1);
        v46 += 2;
        ++v18;
        v48 = *(&v59 + v47);
        v49 = *(&v59 + 2 * v18);
        v50 = (v48 - v49) * *((double *)v46 - 3);
        *((_QWORD *)&v51 + 1) = *((_QWORD *)&v23 + 1);
        *(double *)&v51 = *(double *)&v23 + (v48 + *((double *)v46 - 2) + v49) * v50;
        v23 = v51;
        *scaledCentroid = (*(&v58 + v47) + *((double *)v46 - 3) + *(&v58 + 2 * v18)) * ((*(&v58 + 2 * v18) - *(&v58 + v47)) * *((double *)v46 - 2)) + *scaledCentroid;
        *((_QWORD *)&v51 + 1) = *((_QWORD *)&v22 + 1);
        *(double *)&v51 = *(double *)&v22 + v50;
        v22 = v51;
      }
      while ( v18 < v8 );
      scaledCentroid[1] = *(double *)&v23;
    }
  }
  return *(double *)&v22;
}

/*
==============
Glass_AssertValidLoopOrder
==============
*/
void Glass_AssertValidLoopOrder(const FxGlassShard *shard)
{
  unsigned int i; 
  unsigned __int16 parentLoopIndex; 

  for ( i = 0; i < shard->loopCount; ++i )
  {
    parentLoopIndex = shard->loops[i].parentLoopIndex;
    if ( parentLoopIndex != 0xFFFF && parentLoopIndex >= i && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1044, ASSERT_TYPE_SANITY, "( loop->parentLoopIndex == 0xffff || loop->parentLoopIndex < loopIter )", (const char *)&queryFormat, "loop->parentLoopIndex == USHRT_MAX || loop->parentLoopIndex < loopIter") )
      __debugbreak();
  }
}

/*
==============
Glass_CompareEvaluatedPoints
==============
*/
bool Glass_CompareEvaluatedPoints(const unsigned int i0, const unsigned int i1)
{
  FxGlassShardPointMetric *v2; 
  bool v3; 
  bool v4; 
  FxGlassShardPointMetric *v5; 
  __int64 tanDenom; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned int v11; 
  unsigned int v12; 

  v2 = &s_triang->metric[i0];
  v4 = __OFSUB__(v2->quadrant, s_triang->metric[i1].quadrant);
  v3 = v2->quadrant - s_triang->metric[i1].quadrant < 0;
  v5 = &s_triang->metric[i1];
  if ( v2->quadrant != v5->quadrant )
    return v3 ^ v4;
  tanDenom = v2->tanDenom;
  v7 = v5->tanDenom;
  v8 = v7 * v2->tanNumer;
  v9 = tanDenom * v5->tanNumer;
  v4 = __OFSUB__(v8, v9);
  v3 = v8 - v9 < 0;
  if ( v8 != v9 )
    return v3 ^ v4;
  if ( !(_DWORD)tanDenom )
  {
    if ( !v2->tanNumer && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 311, ASSERT_TYPE_SANITY, "( metric0->tanNumer )", (const char *)&queryFormat, "metric0->tanNumer") )
      __debugbreak();
    v11 = abs32(v5->tanNumer);
    v12 = abs32(v2->tanNumer);
    v4 = __OFSUB__(v12, v11);
    v3 = (int)(v12 - v11) < 0;
    return v3 ^ v4;
  }
  if ( (_DWORD)tanDenom == (_DWORD)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 307, ASSERT_TYPE_SANITY, "( metric0->tanDenom != metric1->tanDenom )", (const char *)&queryFormat, "metric0->tanDenom != metric1->tanDenom") )
    __debugbreak();
  return v2->tanDenom < v5->tanDenom;
}

/*
==============
Glass_ConvertLoopsToPiece
==============
*/
char Glass_ConvertLoopsToPiece(FxGlassCrackShardWork *work, FxGlassCrackEdge *const *inLoops, unsigned int inLoopCount, FxGlassShard *outShard)
{
  int v4; 
  unsigned int v9; 
  FxGlassCrackEdge *firstEdge; 
  unsigned __int8 ptCount; 
  FxGlassGeometryData *v12; 
  int v13; 
  __int16 v14; 
  float v15; 

  v4 = 0;
  outShard->loopCount = 0;
  outShard->crackCount = 0;
  v9 = 0;
  if ( inLoopCount )
  {
    while ( Glass_ExtractCracksAndHolesFromLoop(work, outShard, *inLoops) )
    {
      ++v9;
      ++inLoops;
      if ( v9 >= inLoopCount )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    if ( Glass_SetupShard(work, outShard) )
    {
      outShard->supportMask = 0;
      firstEdge = outShard->loops[0].firstEdge;
      do
      {
        ptCount = outShard->ptCount;
        if ( !firstEdge->type )
          outShard->supportMask |= 0x80000000 >> ptCount;
        v12 = &outShard->geoData[ptCount];
        Glass_EmitShardVertex(work, outShard, firstEdge->i0, &v12->vert);
        firstEdge = firstEdge->next;
        v13 = v12->vert.y * v12->vert.y + v12->vert.x * v12->vert.x;
        if ( v4 > v13 )
          v13 = v4;
        v4 = v13;
      }
      while ( firstEdge != outShard->loops[0].firstEdge );
      v14 = outShard->ptCount;
      v15 = (float)(unsigned int)v13;
      outShard->radius = fsqrt((float)(work->halfThickness * work->halfThickness) + (float)(v15 * 0.0009765625));
      if ( v14 != outShard->loops[0].vertCount && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1218, ASSERT_TYPE_SANITY, "( shard->ptCount == shard->loops[0].vertCount )", (const char *)&queryFormat, "shard->ptCount == shard->loops[0].vertCount") )
        __debugbreak();
      outShard->geoDataUsed += outShard->ptCount;
      if ( Glass_PackShardHoles(work, outShard) )
      {
        Glass_PackShardCracks(work, outShard);
        Glass_TriangulateShard(work, outShard);
        return 1;
      }
    }
  }
  return 0;
}

/*
==============
Glass_EmitShardVertex
==============
*/
void Glass_EmitShardVertex(const FxGlassCrackShardWork *work, FxGlassShard *shard, unsigned int ptIndex, FxGlassVertex *vert)
{
  unsigned __int8 ptCount; 
  __int64 v6; 
  __int16 v9; 
  int v10; 
  int v11; 

  ptCount = shard->ptCount;
  v6 = ptIndex;
  if ( ptCount >= 0x80u )
  {
    v11 = 128;
    v10 = ptCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1180, ASSERT_TYPE_ASSERT, "(unsigned)( shard->ptCount ) < (unsigned)( 128 )", "shard->ptCount doesn't index GLASS_VERT_PER_PIECE_LIMIT\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  if ( shard->ptIndexMap[v6] != 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1181, ASSERT_TYPE_SANITY, "( shard->ptIndexMap[ptIndex] == 0xff )", (const char *)&queryFormat, "shard->ptIndexMap[ptIndex] == GLASS_VERT_INDEX_NONE") )
    __debugbreak();
  shard->ptIndexMap[v6] = shard->ptCount;
  v9 = work->packedPts[v6].x - shard->packedCentroid.x;
  ++shard->ptCount;
  vert->x = v9;
  vert->y = work->packedPts[v6].y - shard->packedCentroid.y;
}

/*
==============
Glass_EvaluatePointVersusBaseEdge
==============
*/
void Glass_EvaluatePointVersusBaseEdge(const FxGlassCrackShardWork *work, FxGlassShardTriangulate *triang, const FxGlassCrackAngleEval *angleEval, unsigned int i)
{
  __int64 v4; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  FxGlassShardPointMetric *v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  __int64 v18; 

  v4 = i;
  v6 = work->packedPts[i].x - angleEval->org[0];
  v7 = v6;
  v8 = work->packedPts[i].y - angleEval->org[1];
  v9 = angleEval->delta[0];
  v10 = angleEval->delta[1];
  v11 = v10 * v8 + v9 * v6;
  v12 = v10 * v7 - v9 * v8;
  if ( !v12 && !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 270, ASSERT_TYPE_SANITY, "( scaledSine || scaledCosine )", (const char *)&queryFormat, "scaledSine || scaledCosine") )
    __debugbreak();
  v13 = &triang->metric[v4];
  v14 = (v11 >> 31) & 1;
  v15 = v14 + (v12 ^ (v11 >> 31));
  v13->tanNumer = v15;
  v16 = (v11 ^ (v11 >> 31)) + v14;
  v17 = v14 ^ (v12 >> 31) & 3;
  v13->quadrant = v17;
  v13->tanDenom = v16;
  if ( v16 < 0 || v15 && v15 < 0 != (v17 & 1) )
  {
    LODWORD(v18) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 281, ASSERT_TYPE_ASSERT, "( triang->metric[i].tanDenom >= 0 && (triang->metric[i].tanNumer == 0 || ((triang->metric[i].tanNumer < 0) == (triang->metric[i].quadrant & 1))) )", "%i, %i", v18, v11) )
      __debugbreak();
  }
}

/*
==============
Glass_ExtractCracksAndHolesFromLoop
==============
*/
char Glass_ExtractCracksAndHolesFromLoop(const FxGlassCrackShardWork *work, FxGlassShard *shard, FxGlassCrackEdge *edgeLoop)
{
  unsigned int loopCount; 
  __int64 v6; 
  FxGlassCrackEdge *v7; 
  FxGlassCrackEdge *v8; 
  __int64 v9; 
  FxGlassCrackEdge *next; 
  unsigned int v11; 
  __int64 v12; 
  __int64 i0; 
  __int64 crackCount; 
  __int64 v15; 
  unsigned __int64 i1; 
  __int64 v17; 
  unsigned int v18; 
  __int64 v19; 
  __int64 *v20; 
  __int64 v21; 
  char *v22; 
  char v23; 
  unsigned int v24; 
  unsigned int v25; 
  __int64 v26; 
  __int64 v27; 
  unsigned int v28; 
  __int64 v29; 
  unsigned int v30; 
  __int64 v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int v34; 
  FxGlassShardEdgeLoop *v35; 
  unsigned int v36; 
  FxGlassCrackEdge *v37; 
  bool v38; 
  FxGlassCrackEdge *v39; 
  __int64 v40; 
  unsigned int v42; 
  __int64 v43; 
  __int64 *v44; 
  FxGlassCrackEdge **v45; 
  __int64 v46; 
  char *v47; 
  char v48; 
  unsigned int v49; 
  unsigned int v50; 
  FxGlassCrackEdge *v51; 
  unsigned int v52; 
  unsigned __int8 v53; 
  unsigned int v54; 
  unsigned int v55; 
  FxGlassShardEdgeLoop *v56; 
  unsigned int v57; 
  unsigned int v58; 
  unsigned int v59; 
  __int64 v60; 
  FxGlassShardEdgeLoop *v61; 
  FxGlassShardEdgeLoop v62; 
  __int64 v63; 
  unsigned int v64; 
  __int16 v65; 
  __int64 v66; 
  unsigned __int16 parentLoopIndex; 
  __int64 v68; 
  __int64 v69; 
  FxGlassCrackEdge *v70; 
  FxGlassCrackEdge *v71; 
  FxGlassCrackEdge *v73; 
  __int64 v74[287]; 
  char v75[256]; 

  memset_0(v75, 255, work->ptCount);
  loopCount = shard->loopCount;
  LODWORD(v6) = 0;
  v7 = NULL;
  v8 = edgeLoop;
  v70 = NULL;
  do
  {
    v9 = (unsigned int)(v6 - 2);
    next = v8->next;
    v71 = next;
    v11 = (unsigned __int8)v75[v8->i1];
    if ( v11 == (_DWORD)v9 )
    {
      v6 = (unsigned int)(v6 - 1);
      if ( (unsigned __int8)v75[v8->i0] != (_DWORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 896, ASSERT_TYPE_SANITY, "( emitAtIndex[edgeIter->i0] == borderCount )", (const char *)&queryFormat, "emitAtIndex[edgeIter->i0] == borderCount") )
        __debugbreak();
      v12 = v74[v6 - 1];
      i0 = v8->i0;
      v70 = (FxGlassCrackEdge *)v12;
      *(_QWORD *)(v12 + 24) = v7;
      v7 = (FxGlassCrackEdge *)v12;
      v75[i0] = -1;
      if ( (*(_BYTE *)(v12 + 1) != v8->i0 || *(_BYTE *)v12 != v8->i1) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 900, ASSERT_TYPE_SANITY, "( activeCrack->i1 == edgeIter->i0 && activeCrack->i0 == edgeIter->i1 )", (const char *)&queryFormat, "activeCrack->i1 == edgeIter->i0 && activeCrack->i0 == edgeIter->i1") )
        __debugbreak();
      if ( *(_BYTE *)(v74[(unsigned int)(v6 - 1) - 1] + 1) != v8->i1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 901, ASSERT_TYPE_SANITY, "( border[borderCount - 1]->i1 == edgeIter->i1 )", (const char *)&queryFormat, "border[borderCount - 1]->i1 == edgeIter->i1") )
        __debugbreak();
      if ( *((_BYTE *)&v74[255] + v8->i1) )
      {
        crackCount = shard->crackCount;
        if ( (_DWORD)crackCount != 64 )
        {
          shard->cracks[crackCount] = v7;
          ++shard->crackCount;
        }
        v7 = NULL;
        v70 = NULL;
      }
    }
    else
    {
      if ( v7 )
      {
        v15 = shard->crackCount;
        if ( (_DWORD)v15 != 64 )
        {
          shard->cracks[v15] = v7;
          ++shard->crackCount;
        }
        v7 = NULL;
        v70 = NULL;
      }
      if ( v11 == 255 )
      {
        if ( (unsigned int)v6 >= 0xFF )
        {
          LODWORD(v69) = 255;
          LODWORD(v68) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 926, ASSERT_TYPE_ASSERT, "(unsigned)( borderCount ) < (unsigned)( ( sizeof( *array_counter( border ) ) + 0 ) )", "borderCount doesn't index ARRAY_COUNT( border )\n\t%i not in [0, %i)", v68, v69) )
            __debugbreak();
        }
        i1 = v8->i1;
        v75[i1] = v6;
        if ( i1 >= 0xFF )
        {
          j___report_rangecheckfailure(v9);
          JUMPOUT(0x141FF8F79i64);
        }
        *((_BYTE *)&v74[255] + i1) = 0;
        v17 = (unsigned int)v6;
        LODWORD(v6) = v6 + 1;
        v74[v17 - 1] = (__int64)v8;
      }
      else
      {
        v18 = shard->loopCount;
        if ( v18 == 16 || !(_DWORD)v6 )
          return 0;
        if ( v11 >= (unsigned int)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 941, ASSERT_TYPE_SANITY, "( priorIndex < borderCount - 2 )", (const char *)&queryFormat, "priorIndex < borderCount - 2") )
          __debugbreak();
        v19 = v11 + 2;
        if ( (unsigned int)v19 < (unsigned int)v6 )
        {
          v20 = &v74[v19 - 1];
          do
          {
            v21 = v74[(unsigned int)(v19 - 1) - 1];
            v75[*(unsigned __int8 *)(v21 + 1)] = -1;
            v22 = (char *)*v20;
            *(_QWORD *)(v21 + 24) = *v20;
            v23 = *v22;
            if ( *((_BYTE *)&v74[255] + (unsigned __int8)*v22) )
            {
              v24 = shard->loopCount;
              v25 = loopCount;
              if ( loopCount < v24 )
              {
                do
                {
                  if ( shard->loops[v25].firstEdge->i0 == v23 )
                    shard->loops[v25].parentLoopIndex = v24;
                  ++v25;
                  LOWORD(v24) = shard->loopCount;
                }
                while ( v25 < shard->loopCount );
              }
            }
            LODWORD(v19) = v19 + 1;
            ++v20;
          }
          while ( (unsigned int)v19 < (unsigned int)v6 );
          v18 = shard->loopCount;
        }
        v26 = v74[(unsigned int)(v6 - 1) - 1];
        v27 = *(unsigned __int8 *)(v26 + 1);
        *(_QWORD *)(v26 + 24) = v8;
        v28 = v18;
        v29 = v8->i0;
        v75[v27] = -1;
        if ( *((_BYTE *)&v74[255] + v29) )
        {
          v30 = loopCount;
          if ( loopCount < v18 )
          {
            do
            {
              if ( shard->loops[v30].firstEdge->i0 == (_BYTE)v29 )
                shard->loops[v30].parentLoopIndex = v18;
              v28 = shard->loopCount;
              ++v30;
              LOWORD(v18) = v28;
            }
            while ( v30 < v28 );
          }
        }
        v31 = v8->i1;
        v32 = v28;
        v8->next = (FxGlassCrackEdge *)v74[v11];
        if ( *((_BYTE *)&v74[255] + v31) )
        {
          v33 = loopCount;
          if ( loopCount < v28 )
          {
            do
            {
              if ( shard->loops[v33].firstEdge->i0 == (_BYTE)v31 )
                shard->loops[v33].parentLoopIndex = v28;
              v32 = shard->loopCount;
              ++v33;
              LOWORD(v28) = v32;
            }
            while ( v33 < v32 );
          }
        }
        v34 = v32;
        if ( v32 >= 0x10 )
        {
          LODWORD(v69) = 16;
          LODWORD(v68) = v32;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 953, ASSERT_TYPE_ASSERT, "(unsigned)( shard->loopCount ) < (unsigned)( ( sizeof( *array_counter( shard->loops ) ) + 0 ) )", "shard->loopCount doesn't index ARRAY_COUNT( shard->loops )\n\t%i not in [0, %i)", v68, v69) )
          {
            __debugbreak();
            v34 = shard->loopCount;
          }
        }
        v35 = &shard->loops[v34];
        v36 = v34 + 1;
        next = v71;
        shard->loopCount = v36;
        v37 = v8->next;
        v35->vertCount = v6 - v11;
        LODWORD(v6) = v11 + 1;
        v7 = v70;
        v35->firstEdge = v37;
        v35->parentLoopIndex = -1;
        *((_BYTE *)&v74[255] + v37->i0) = 1;
      }
    }
    v8 = next;
  }
  while ( next != edgeLoop );
  v38 = (_DWORD)v6 == 2;
  if ( (unsigned int)v6 < 2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 969, ASSERT_TYPE_SANITY, "( borderCount >= 2 )", (const char *)&queryFormat, "borderCount >= 2") )
      __debugbreak();
    v38 = (_DWORD)v6 == 2;
  }
  if ( v38 )
  {
    v39 = (FxGlassCrackEdge *)v74[0];
    if ( (v73->i0 != *(_BYTE *)(v74[0] + 1) || v73->i1 != *(_BYTE *)v74[0]) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 972, ASSERT_TYPE_SANITY, "( border[0]->i0 == border[1]->i1 && border[0]->i1 == border[1]->i0 )", (const char *)&queryFormat, "border[0]->i0 == border[1]->i1 && border[0]->i1 == border[1]->i0") )
      __debugbreak();
    v40 = shard->crackCount;
    v39->next = v7;
    if ( (_DWORD)v40 != 64 )
    {
      shard->cracks[v40] = v39;
      ++shard->crackCount;
    }
    Glass_ReverseLoopsStartingAt(shard, loopCount);
    return 1;
  }
  else
  {
    v42 = shard->loopCount;
    if ( v42 == 16 )
      return 0;
    if ( v7 )
    {
      v43 = shard->crackCount;
      if ( (_DWORD)v43 != 64 )
      {
        shard->cracks[v43] = v7;
        ++shard->crackCount;
        v42 = shard->loopCount;
      }
    }
    if ( (unsigned int)v6 > 1 )
    {
      v44 = v74;
      v45 = &v73;
      v46 = (unsigned int)(v6 - 1);
      do
      {
        v47 = (char *)*v44;
        (*v45)->next = (FxGlassCrackEdge *)*v44;
        v48 = *v47;
        if ( *((_BYTE *)&v74[255] + (unsigned __int8)*v47) )
        {
          v49 = shard->loopCount;
          v50 = loopCount;
          if ( loopCount < v49 )
          {
            do
            {
              if ( shard->loops[v50].firstEdge->i0 == v48 )
                shard->loops[v50].parentLoopIndex = v49;
              ++v50;
              LOWORD(v49) = shard->loopCount;
            }
            while ( v50 < shard->loopCount );
          }
        }
        ++v45;
        ++v44;
        --v46;
      }
      while ( v46 );
      v42 = shard->loopCount;
    }
    v51 = v73;
    *(_QWORD *)(v74[(unsigned int)(v6 - 1) - 1] + 24) = v73;
    v52 = v42;
    v53 = v51->i0;
    if ( *((_BYTE *)&v74[255] + v51->i0) )
    {
      v54 = loopCount;
      if ( loopCount < v42 )
      {
        do
        {
          if ( shard->loops[v54].firstEdge->i0 == v53 )
            shard->loops[v54].parentLoopIndex = v42;
          v52 = shard->loopCount;
          ++v54;
          LOWORD(v42) = v52;
        }
        while ( v54 < v52 );
      }
    }
    v55 = v52;
    if ( v52 >= 0x10 )
    {
      LODWORD(v69) = 16;
      LODWORD(v68) = v52;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1003, ASSERT_TYPE_ASSERT, "(unsigned)( shard->loopCount ) < (unsigned)( ( sizeof( *array_counter( shard->loops ) ) + 0 ) )", "shard->loopCount doesn't index ARRAY_COUNT( shard->loops )\n\t%i not in [0, %i)", v68, v69) )
      {
        __debugbreak();
        v55 = shard->loopCount;
      }
    }
    v56 = &shard->loops[v55];
    shard->loopCount = v55 + 1;
    v56->firstEdge = v51;
    v56->vertCount = v6;
    v56->parentLoopIndex = -1;
    v57 = shard->loopCount;
    if ( loopCount + 1 < v57 )
    {
      v58 = loopCount;
      v59 = v57 - 1;
      do
      {
        v60 = v58++;
        v61 = &shard->loops[v60];
        v62 = *v61;
        v63 = v59--;
        *v61 = shard->loops[v63];
        shard->loops[v63] = v62;
      }
      while ( v58 < v59 );
      v64 = shard->loopCount;
      v65 = v64 + loopCount - 1;
      if ( loopCount < v64 )
      {
        do
        {
          v66 = loopCount;
          parentLoopIndex = shard->loops[v66].parentLoopIndex;
          if ( parentLoopIndex != 0xFFFF )
            shard->loops[v66].parentLoopIndex = v65 - parentLoopIndex;
          ++loopCount;
        }
        while ( loopCount < shard->loopCount );
      }
    }
    return 1;
  }
}

/*
==============
Glass_GetShardTriangleFanForBaseEdge
==============
*/
__int64 Glass_GetShardTriangleFanForBaseEdge(const FxGlassCrackShardWork *work, FxGlassShardTriangulate *triang, unsigned __int8 evalTime, unsigned int baseEdge)
{
  __int64 v6; 
  __int64 i0; 
  __int64 i1; 
  int x; 
  int y; 
  int v12; 
  int v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  int v20; 
  unsigned int *v21; 
  unsigned int v22; 
  unsigned int v23; 
  int v24; 
  FxGlassVertex *v25; 
  int v26; 
  __int64 v27; 
  __int64 v28; 
  unsigned int *v29; 
  unsigned int v30; 
  unsigned int *p_Last; 
  __int64 v32; 
  char *v33; 
  __int64 v34; 
  unsigned int v35; 
  __int64 v36; 
  unsigned int v37; 
  unsigned int v38; 
  __int64 v39; 
  unsigned int *v40; 
  __int64 v41; 
  __int64 v42; 
  unsigned int *v43; 
  __int64 v44; 
  __int64 v45; 
  unsigned int *v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 fanDataUsed; 
  unsigned __int8 *v51; 
  int v52; 
  unsigned __int8 *v53; 
  __int64 v54; 
  FxGlassShardPointMetric *v55; 
  unsigned int *v56; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  __int64 v60; 
  __int64 v61; 
  __int64 v62; 
  unsigned int i; 
  unsigned int v64; 
  FxGlassCrackAngleEval angleEval; 
  FxGlassVertex *v66; 
  unsigned int *v67; 
  FxGlassShardEdge *v68; 
  unsigned __int8 *p_i1; 
  unsigned int _Last; 
  unsigned int v71; 
  unsigned int _First[513]; 
  char v73; 

  v6 = 0i64;
  i0 = triang->edges[baseEdge].fields.i0;
  i1 = triang->edges[baseEdge].fields.i1;
  p_i1 = &triang->edges[baseEdge].fields.i1;
  v68 = &triang->edges[baseEdge];
  x = work->packedPts[i0].x;
  y = work->packedPts[i0].y;
  v66 = &work->packedPts[i0];
  v12 = work->packedPts[i1].x - x;
  triang->evalTime[i0] = evalTime;
  angleEval.delta[0] = v12;
  v13 = work->packedPts[i1].y - y;
  angleEval.org[0] = x;
  v14 = 0;
  angleEval.delta[1] = v13;
  triang->evalTime[i1] = evalTime;
  v15 = 2;
  v64 = 2;
  angleEval.org[1] = y;
  _Last = i0;
  v71 = i1;
  for ( i = 0; (unsigned int)v6 < triang->edgeCount; v6 = (unsigned int)(v6 + 1) )
  {
    v16 = triang->edges[v6].fields.i0;
    if ( (_DWORD)v16 != (_DWORD)i0 )
    {
      v17 = work->packedPts[v16].y;
      v18 = triang->edges[v6].fields.i1;
      v19 = v14;
      v20 = work->packedPts[v16].x;
      v21 = &_First[4 * v19 + 510];
      v22 = v20 - work->packedPts[v18].x;
      v23 = work->packedPts[v18].y - v17;
      v67 = v21;
      v21[1] = v23;
      v21[2] = v22;
      v24 = v17 * v22 + v23 * v20;
      v25 = v66;
      v21[3] = v24;
      v26 = v23 * v25->x + v22 * v25->y - v24;
      if ( v26 >= 0 && (v26 || (_DWORD)v18 == (_DWORD)i0) )
      {
        if ( triang->evalTime[v16] != evalTime )
        {
          v27 = v15++;
          triang->evalTime[v16] = evalTime;
          *(&_Last + v27) = v16;
          Glass_EvaluatePointVersusBaseEdge(work, triang, &angleEval, v16);
          LODWORD(i0) = _Last;
        }
        if ( triang->evalTime[v18] != evalTime )
        {
          v28 = v15++;
          triang->evalTime[v18] = evalTime;
          *(&_Last + v28) = v18;
          Glass_EvaluatePointVersusBaseEdge(work, triang, &angleEval, v18);
          LODWORD(i0) = _Last;
        }
        v29 = v67;
        v14 = ++i;
        *(_WORD *)v67 = v16;
        *((_WORD *)v29 + 1) = v18;
      }
      else
      {
        v14 = i;
      }
    }
  }
  s_triang = triang;
  std::_Sort_unchecked<unsigned int *,bool (*)(unsigned int,unsigned int)>(_First, &_Last + v15, (4i64 * v15 - 112 + 104) >> 2, (bool (__fastcall *)(unsigned int, unsigned int))Glass_CompareEvaluatedPoints);
  v30 = 0;
  s_triang = NULL;
  if ( v15 )
  {
    p_Last = &_Last;
    do
    {
      v32 = *p_Last++;
      _First[v32 + 254] = v30++;
    }
    while ( v30 < v15 );
  }
  if ( i )
  {
    v33 = &v73;
    v34 = i;
    do
    {
      v35 = v15;
      v36 = *((unsigned __int16 *)v33 - 5);
      v37 = _First[*((unsigned __int16 *)v33 - 6) + 254];
      v38 = _First[v36 + 254];
      v39 = v37 + 1;
      if ( v37 <= v38 )
      {
        if ( (int)v15 < (int)v38 )
          v38 = v15;
        if ( (unsigned int)v39 < v38 )
        {
          v46 = &_Last + v39;
          v47 = v38 - (unsigned int)v39;
          do
          {
            v48 = *v46;
            if ( (_DWORD)v48 != 255 && *((_DWORD *)v33 - 1) * work->packedPts[v48].y + work->packedPts[v48].x * *((_DWORD *)v33 - 2) - *(_DWORD *)v33 < 0 )
              *v46 = 255;
            ++v46;
            --v47;
          }
          while ( v47 );
        }
      }
      else if ( (_DWORD)v36 == _Last )
      {
        v15 = v37 + 1;
        if ( v35 <= (unsigned int)v39 )
          v15 = v35;
      }
      else
      {
        if ( (unsigned int)v39 < v15 )
        {
          v40 = &_Last + v39;
          v41 = v15 - (unsigned int)v39;
          do
          {
            v42 = *v40;
            if ( (_DWORD)v42 != 255 && *((_DWORD *)v33 - 1) * work->packedPts[v42].y + work->packedPts[v42].x * *((_DWORD *)v33 - 2) - *(_DWORD *)v33 < 0 )
              *v40 = 255;
            ++v40;
            --v41;
          }
          while ( v41 );
        }
        if ( v38 > 2 )
        {
          v43 = _First;
          v44 = v38 - 2;
          do
          {
            v45 = *v43;
            if ( (_DWORD)v45 != 255 && *((_DWORD *)v33 - 2) * work->packedPts[v45].x + *((_DWORD *)v33 - 1) * work->packedPts[v45].y - *(_DWORD *)v33 < 0 )
              *v43 = 255;
            ++v43;
            --v44;
          }
          while ( v44 );
        }
      }
      v33 += 16;
      --v34;
    }
    while ( v34 );
  }
  fanDataUsed = triang->fanDataUsed;
  if ( (unsigned int)fanDataUsed + v15 >= triang->fanDataLimit )
    return 0xFFFFFFFFi64;
  v51 = &triang->fanData[fanDataUsed];
  v52 = v68->fields.i0;
  v53 = p_i1;
  *v51 = v52;
  v51[1] = *v53;
  if ( _Last != v52 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 451, ASSERT_TYPE_ASSERT, "( pts[0] ) == ( fanVerts[0] )", "%s == %s\n\t%i, %i", "pts[0]", "fanVerts[0]", _Last, v52) )
    __debugbreak();
  v54 = v71;
  if ( v71 != v51[1] )
  {
    LODWORD(v62) = v51[1];
    LODWORD(v61) = v71;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 452, ASSERT_TYPE_ASSERT, "( pts[1] ) == ( fanVerts[1] )", "%s == %s\n\t%i, %i", "pts[1]", "fanVerts[1]", v61, v62) )
      __debugbreak();
    v54 = v71;
  }
  *(_QWORD *)&triang->metric[v54].quadrant = 0i64;
  v55 = &triang->metric[v54];
  v55->tanDenom = 1;
  if ( v15 > 2 )
  {
    v56 = _First;
    v57 = v15 - 2;
    do
    {
      v58 = *v56;
      if ( (_DWORD)v58 != 255 && (v55->quadrant != triang->metric[v58].quadrant || v55->tanNumer * (__int64)triang->metric[v58].tanDenom != v55->tanDenom * (__int64)triang->metric[v58].tanNumer) )
      {
        v55 = &triang->metric[v58];
        if ( v64 + triang->fanDataUsed >= triang->fanDataLimit )
        {
          LODWORD(v60) = triang->fanDataLimit;
          LODWORD(v59) = v64 + triang->fanDataUsed;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 470, ASSERT_TYPE_ASSERT, "(unsigned)( triang->fanDataUsed + fanVertCount ) < (unsigned)( triang->fanDataLimit )", "triang->fanDataUsed + fanVertCount doesn't index triang->fanDataLimit\n\t%i not in [0, %i)", v59, v60) )
            __debugbreak();
        }
        v51[v64++] = v58;
      }
      ++v56;
      --v57;
    }
    while ( v57 );
  }
  return v64;
}

/*
==============
Glass_IsEdgeLoopBackwards
==============
*/
bool Glass_IsEdgeLoopBackwards(const FxGlassCrackShardWork *work, const FxGlassCrackEdge *edgeLoop)
{
  const FxGlassCrackEdge *v2; 
  __int128 v3; 
  FxGlassCrackPoint *v4; 
  __int64 i1; 
  float *v6; 
  float v7; 
  __int128 v8; 

  v2 = edgeLoop;
  v3 = 0i64;
  v4 = &work->pts[edgeLoop->i0];
  do
  {
    i1 = v2->i1;
    v6 = (float *)v4;
    v7 = v4->xy.v[1];
    v2 = v2->next;
    v4 = &work->pts[i1];
    v8 = v3;
    *(float *)&v8 = *(float *)&v3 + (float)((float)(v7 * v4->xy.v[0]) - (float)(work->pts[i1].xy.v[1] * *v6));
    v3 = v8;
  }
  while ( v2 != edgeLoop );
  return *(float *)&v8 < 0.0;
}

/*
==============
Glass_PackShardCracks
==============
*/
void Glass_PackShardCracks(const FxGlassCrackShardWork *work, FxGlassShard *shard)
{
  unsigned int v2; 
  bool v4; 
  __int64 geoDataUsed; 
  __int64 crackCount; 
  FxGlassGeometryData *v8; 
  FxGlassCrackEdge **v9; 
  unsigned __int8 *v10; 
  __int64 crackDataCount; 
  __int16 v12; 
  FxGlassGeometryData *v13; 
  unsigned __int8 v14; 
  __int64 v15; 
  int v16; 
  unsigned __int8 v17; 
  __int64 v18; 
  FxGlassCrackEdge **v19; 

  v2 = 0;
  v4 = shard->ptCount == 0x80;
  shard->crackDataCount = 0;
  if ( v4 )
    return;
  geoDataUsed = shard->geoDataUsed;
  crackCount = shard->crackCount;
  v8 = &shard->geoData[geoDataUsed];
  if ( !(_DWORD)crackCount )
    goto LABEL_37;
  v9 = &shard->cracks[crackCount];
  do
  {
    v10 = (unsigned __int8 *)*(v9 - 1);
    v19 = v9 - 1;
    LODWORD(crackCount) = crackCount - 1;
    crackDataCount = shard->crackDataCount;
    v12 = 0;
    v13 = &v8[crackDataCount];
    shard->crackDataCount = crackDataCount + 1;
    v14 = shard->ptIndexMap[*v10];
    v13->hole.touchVert = v14;
    v13->hole.pad[0] = -1;
    v13->vert.x = 0;
    if ( v14 == 0xFF )
    {
      v15 = shard->crackDataCount;
      if ( shard->ptCount >= 0x7Fu )
      {
        shard->crackDataCount = v15 - 1;
        goto LABEL_35;
      }
      Glass_EmitShardVertex(work, shard, *v10, &v8[v15].vert);
      ++shard->crackDataCount;
      v12 = ++v13->vert.x;
    }
    v16 = 128 - shard->ptCount;
    if ( v16 > 31 )
      v16 = 31;
    if ( v16 )
    {
      while ( 1 )
      {
        v18 = v10[1];
        if ( shard->ptIndexMap[v18] != 0xFF )
          break;
        Glass_EmitShardVertex(work, shard, v18, &v8[shard->crackDataCount].vert);
        ++shard->crackDataCount;
        --v16;
        ++v13->vert.x;
        v10 = (unsigned __int8 *)*((_QWORD *)v10 + 3);
        if ( !v10 || !v16 )
          goto LABEL_35;
      }
      if ( *((_QWORD *)v10 + 3) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1342, ASSERT_TYPE_SANITY, "( edgeIter->next == 0 )", (const char *)&queryFormat, "edgeIter->next == NULL") )
        __debugbreak();
      v13->hole.pad[0] = shard->ptIndexMap[v10[1]];
    }
    else if ( v13->hole.touchVert == 0xFF )
    {
      if ( v12 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1321, ASSERT_TYPE_SANITY, "( crack->uniqueVertCount == 1 )", (const char *)&queryFormat, "crack->uniqueVertCount == 1") )
        __debugbreak();
      if ( shard->ptIndexMap[v10[1]] != 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1322, ASSERT_TYPE_SANITY, "( shard->ptIndexMap[edgeIter->i1] == 0xff )", (const char *)&queryFormat, "shard->ptIndexMap[edgeIter->i1] == GLASS_VERT_INDEX_NONE") )
        __debugbreak();
      if ( shard->ptIndexMap[*v10] != shard->ptCount - 1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1323, ASSERT_TYPE_SANITY, "( shard->ptIndexMap[edgeIter->i0] == shard->ptCount - 1 )", (const char *)&queryFormat, "shard->ptIndexMap[edgeIter->i0] == shard->ptCount - 1") )
        __debugbreak();
      shard->ptIndexMap[*v10] = -1;
      --shard->ptCount;
      shard->crackDataCount -= 2;
    }
    else
    {
      if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1330, ASSERT_TYPE_SANITY, "( crack->uniqueVertCount == 0 )", (const char *)&queryFormat, "crack->uniqueVertCount == 0") )
        __debugbreak();
      v17 = shard->ptIndexMap[v10[1]];
      v13->hole.pad[0] = v17;
      if ( v17 == 0xFF )
        --shard->crackDataCount;
    }
LABEL_35:
    v9 = v19;
  }
  while ( (_DWORD)crackCount );
  LODWORD(geoDataUsed) = shard->geoDataUsed;
  v2 = shard->crackDataCount;
LABEL_37:
  shard->geoDataUsed = v2 + geoDataUsed;
}

/*
==============
Glass_PackShardHoles
==============
*/
char Glass_PackShardHoles(const FxGlassCrackShardWork *work, FxGlassShard *shard)
{
  FxGlassCrackEdge *v2; 
  __int128 v5; 
  FxGlassCrackEdge *firstEdge; 
  FxGlassCrackPoint *v7; 
  __int64 i1; 
  float *v9; 
  float v10; 
  __int128 v11; 
  int v12; 
  FxGlassGeometryData *v13; 
  __int128 v14; 
  FxGlassCrackEdge *v15; 
  FxGlassCrackEdge *v16; 
  FxGlassCrackPoint *v17; 
  __int64 v18; 
  float *v19; 
  float v20; 
  __int128 v21; 
  FxGlassCrackEdge *v22; 
  __int64 i0; 
  int uniqueVertCount; 

  v5 = 0i64;
  firstEdge = shard->loops[0].firstEdge;
  v2 = firstEdge;
  v7 = &work->pts[firstEdge->i0];
  do
  {
    i1 = firstEdge->i1;
    v9 = (float *)v7;
    v10 = v7->xy.v[1];
    firstEdge = firstEdge->next;
    v7 = &work->pts[i1];
    v11 = v5;
    *(float *)&v11 = *(float *)&v5 + (float)((float)(v10 * v7->xy.v[0]) - (float)(work->pts[i1].xy.v[1] * *v9));
    v5 = v11;
  }
  while ( firstEdge != v2 );
  if ( *(float *)&v11 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1230, ASSERT_TYPE_SANITY, "( !Glass_IsEdgeLoopBackwards( work, shard->loops[0].firstEdge ) )", (const char *)&queryFormat, "!Glass_IsEdgeLoopBackwards( work, shard->loops[0].firstEdge )") )
    __debugbreak();
  v12 = 1;
  v13 = &shard->geoData[shard->geoDataUsed];
  shard->holeDataCount = 0;
  if ( shard->loopCount <= 1 )
    return 1;
  while ( 1 )
  {
    v14 = 0i64;
    v15 = shard->loops[v12].firstEdge;
    v16 = v15;
    v17 = &work->pts[v15->i0];
    do
    {
      v18 = v16->i1;
      v19 = (float *)v17;
      v20 = v17->xy.v[1];
      v16 = v16->next;
      v17 = &work->pts[v18];
      v21 = v14;
      *(float *)&v21 = *(float *)&v14 + (float)((float)(v20 * v17->xy.v[0]) - (float)(work->pts[v18].xy.v[1] * *v19));
      v14 = v21;
    }
    while ( v16 != v15 );
    if ( *(float *)&v21 >= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1237, ASSERT_TYPE_SANITY, "( Glass_IsEdgeLoopBackwards( work, loop->firstEdge ) )", (const char *)&queryFormat, "Glass_IsEdgeLoopBackwards( work, loop->firstEdge )") )
      __debugbreak();
    v22 = shard->loops[v12].firstEdge;
    i0 = v22->i0;
    if ( shard->loops[v12].parentLoopIndex == 0xFFFF )
    {
      if ( shard->ptIndexMap[i0] != 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1241, ASSERT_TYPE_SANITY, "( shard->ptIndexMap[edgeIter->i0] == 0xff )", (const char *)&queryFormat, "shard->ptIndexMap[edgeIter->i0] == GLASS_VERT_INDEX_NONE") )
        __debugbreak();
      v13->vert.x = shard->loops[v12].vertCount;
      v13->vert.y = 255;
    }
    else
    {
      if ( shard->ptIndexMap[i0] == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1250, ASSERT_TYPE_SANITY, "( shard->ptIndexMap[edgeIter->i0] != 0xff )", (const char *)&queryFormat, "shard->ptIndexMap[edgeIter->i0] != GLASS_VERT_INDEX_NONE") )
        __debugbreak();
      v13->vert.x = shard->loops[v12].vertCount - 1;
      v13->vert.y = shard->ptIndexMap[v22->i0];
      v22 = v22->next;
    }
    uniqueVertCount = v13->hole.uniqueVertCount;
    if ( uniqueVertCount + (unsigned int)shard->ptCount > 0x80 )
      break;
    shard->geoDataUsed += uniqueVertCount + 1;
    shard->holeDataCount += v13->hole.uniqueVertCount + 1;
    ++v13;
    do
    {
      Glass_EmitShardVertex(work, shard, v22->i0, &v13->vert);
      v22 = v22->next;
      ++v13;
    }
    while ( v22 != shard->loops[v12].firstEdge );
    if ( v13 != &shard->geoData[shard->geoDataUsed] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1273, ASSERT_TYPE_SANITY, "( geoData == &shard->geoData[shard->geoDataUsed] )", (const char *)&queryFormat, "geoData == &shard->geoData[shard->geoDataUsed]") )
      __debugbreak();
    if ( ++v12 >= shard->loopCount )
      return 1;
  }
  return 0;
}

/*
==============
Glass_PickShardTriangleFanBaseEdge
==============
*/
__int64 Glass_PickShardTriangleFanBaseEdge(const FxGlassCrackShardWork *work, FxGlassShardTriangulate *triang, unsigned __int8 evalTime)
{
  unsigned int edgeCount; 
  __int64 result; 
  __int64 v7; 
  unsigned int v8; 
  FxGlassShardEdge *v10; 
  unsigned int v11; 
  int v12; 
  float v13; 
  float v14; 
  __int64 i0; 
  unsigned int v16; 
  float v17; 
  __int128 v18; 
  __int64 v19; 
  float v21; 
  __int128 v22; 
  __int64 v23; 
  __int128 v24; 
  __int128 v25; 
  __int128 v26; 
  __int128 v28; 
  float v29; 
  __int64 v30; 
  __int128 v31; 
  __int128 v33; 
  float v34; 
  int v36; 
  int v37; 
  FxGlassShardEdge *v42; 
  __int64 v43; 
  float v44; 
  __int128 v45; 
  unsigned int v46; 
  bool v48; 
  __int64 v49; 

  edgeCount = triang->edgeCount;
  if ( evalTime > 2u )
    return (3 * edgeCount) >> 4;
  v7 = 0i64;
  v8 = edgeCount;
  LODWORD(_XMM10) = 0;
  if ( edgeCount >= 4 )
  {
    v10 = &triang->edges[1];
    v11 = edgeCount - 3;
    v12 = 2;
    v13 = triang->awayFromPoint.v[0];
    v14 = triang->awayFromPoint.v[1];
    do
    {
      i0 = v10[-1].fields.i0;
      v10 += 4;
      v16 = v7;
      v17 = v13 - work->pts[i0].xy.v[0];
      v18 = LODWORD(triang->awayFromPoint.v[1]);
      *(float *)&v18 = v14 - work->pts[i0].xy.v[1];
      v19 = v10[-4].fields.i0;
      *(float *)&v18 = (float)(*(float *)&v18 * *(float *)&v18) + (float)(v17 * v17);
      _XMM8 = v18;
      v21 = v13 - work->pts[v19].xy.v[0];
      v22 = LODWORD(triang->awayFromPoint.v[1]);
      *(float *)&v22 = v14 - work->pts[v19].xy.v[1];
      v23 = v10[-3].fields.i0;
      *(float *)&v22 = *(float *)&v22 * *(float *)&v22;
      v24 = v22;
      if ( *(float *)&_XMM8 <= *(float *)&_XMM10 )
        v16 = edgeCount;
      edgeCount = v12 + 1;
      v26 = LODWORD(triang->awayFromPoint.v[1]);
      *(float *)&v26 = v14 - work->pts[v23].xy.v[1];
      v25 = v26;
      v28 = v24;
      *(float *)&v28 = *(float *)&v24 + (float)(v21 * v21);
      _XMM6 = v28;
      v29 = v13 - work->pts[v23].xy.v[0];
      v30 = v10[-2].fields.i0;
      v31 = v25;
      *(float *)&v31 = (float)(*(float *)&v25 * *(float *)&v25) + (float)(v29 * v29);
      _XMM4 = v31;
      v33 = LODWORD(triang->awayFromPoint.v[1]);
      *(float *)&v33 = v14 - work->pts[v30].xy.v[1];
      v34 = v13 - work->pts[v30].xy.v[0];
      __asm { vmaxss  xmm9, xmm8, xmm10 }
      v36 = v12 - 1;
      if ( *(float *)&_XMM6 <= *(float *)&_XMM9 )
        v36 = v16;
      v37 = v12;
      __asm { vmaxss  xmm7, xmm6, xmm9 }
      *(float *)&v33 = *(float *)&v33 * *(float *)&v33;
      if ( *(float *)&_XMM4 <= *(float *)&_XMM7 )
        v37 = v36;
      __asm { vmaxss  xmm5, xmm4, xmm7 }
      *(float *)&v33 = *(float *)&v33 + (float)(v34 * v34);
      _XMM3 = v33;
      __asm { vmaxss  xmm0, xmm3, xmm5 }
      if ( *(float *)&v33 <= *(float *)&_XMM5 )
        edgeCount = v37;
      v7 = (unsigned int)(v7 + 4);
      v12 += 4;
      LODWORD(_XMM10) = _XMM0;
    }
    while ( (unsigned int)v7 < v11 );
  }
  if ( (unsigned int)v7 < v8 )
  {
    v42 = &triang->edges[v7];
    do
    {
      v43 = v42->fields.i0;
      ++v42;
      v44 = triang->awayFromPoint.v[0] - work->pts[v43].xy.v[0];
      v45 = LODWORD(triang->awayFromPoint.v[1]);
      *(float *)&v45 = triang->awayFromPoint.v[1] - work->pts[v43].xy.v[1];
      v46 = v7;
      *(float *)&v45 = (float)(*(float *)&v45 * *(float *)&v45) + (float)(v44 * v44);
      _XMM3 = v45;
      v48 = *(float *)&v45 <= *(float *)&_XMM10;
      __asm { vmaxss  xmm10, xmm3, xmm10 }
      if ( v48 )
        v46 = edgeCount;
      LODWORD(v7) = v7 + 1;
      edgeCount = v46;
    }
    while ( (unsigned int)v7 < v8 );
  }
  result = edgeCount;
  v49 = triang->edges[edgeCount].fields.i0;
  triang->awayFromPoint.v[0] = work->pts[v49].xy.v[0];
  triang->awayFromPoint.v[1] = work->pts[v49].xy.v[1];
  return result;
}

/*
==============
Glass_ReverseLoopsStartingAt
==============
*/
void Glass_ReverseLoopsStartingAt(FxGlassShard *shard, unsigned int firstLoopIndex)
{
  unsigned int loopCount; 
  unsigned int v4; 
  unsigned int v5; 
  __int64 v6; 
  FxGlassShardEdgeLoop *v7; 
  FxGlassShardEdgeLoop v8; 
  __int64 v9; 
  unsigned int v10; 
  __int16 v11; 
  unsigned __int16 parentLoopIndex; 

  loopCount = shard->loopCount;
  if ( firstLoopIndex + 1 < loopCount )
  {
    v4 = firstLoopIndex;
    v5 = loopCount - 1;
    do
    {
      v6 = v4++;
      v7 = &shard->loops[v6];
      v8 = *v7;
      v9 = v5--;
      *v7 = shard->loops[v9];
      shard->loops[v9] = v8;
    }
    while ( v4 < v5 );
    v10 = shard->loopCount;
    v11 = v10 + firstLoopIndex - 1;
    if ( firstLoopIndex < v10 )
    {
      do
      {
        parentLoopIndex = shard->loops[firstLoopIndex].parentLoopIndex;
        if ( parentLoopIndex != 0xFFFF )
          shard->loops[firstLoopIndex].parentLoopIndex = v11 - parentLoopIndex;
        ++firstLoopIndex;
      }
      while ( firstLoopIndex < shard->loopCount );
    }
  }
}

/*
==============
Glass_RotateBorderVerts
==============
*/
void Glass_RotateBorderVerts(FxGlassShard *shard, unsigned int newZeroIndex)
{
  __int64 vertCount; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  unsigned int holeDataCount; 
  __int64 v8; 
  unsigned int v9; 
  FxGlassGeometryData *v10; 
  unsigned int touchVert; 
  FxGlassGeometryData *v12; 
  unsigned int v13; 
  unsigned int v14; 
  char Src[512]; 

  if ( newZeroIndex )
  {
    vertCount = shard->loops[0].vertCount;
    v4 = newZeroIndex;
    v5 = newZeroIndex;
    v6 = (unsigned int)vertCount - newZeroIndex;
    memcpy_0(Src, shard->geoData, v5 * 4);
    memmove_0(shard->geoData, &shard->geoData[v5], 4 * v6);
    memcpy_0(&shard->geoData[v6], Src, 4 * v4);
    holeDataCount = shard->holeDataCount;
    v8 = 0i64;
    shard->supportMask = (shard->supportMask << v4) | (shard->supportMask >> v6) & (-1 << (32 - vertCount));
    v9 = 0;
    if ( holeDataCount )
    {
      do
      {
        v10 = &shard->geoData[vertCount + v9];
        touchVert = v10->hole.touchVert;
        if ( touchVert < (unsigned int)vertCount )
          v10->hole.touchVert = ((unsigned int)v6 + touchVert) % (unsigned int)vertCount;
        v9 += v10->hole.uniqueVertCount + 1;
        holeDataCount = shard->holeDataCount;
      }
      while ( v9 != holeDataCount );
    }
    v12 = &shard->geoData[(unsigned int)vertCount + holeDataCount];
    if ( shard->crackDataCount )
    {
      do
      {
        v13 = v12[v8].hole.touchVert;
        if ( v13 < (unsigned int)vertCount )
          v12[v8].hole.touchVert = ((unsigned int)v6 + v13) % (unsigned int)vertCount;
        v14 = v12[v8].hole.pad[0];
        if ( v14 < (unsigned int)vertCount )
          v12[v8].hole.pad[0] = ((unsigned int)v6 + v14) % (unsigned int)vertCount;
        v8 = (unsigned int)v8 + v12[v8].hole.uniqueVertCount + 1;
      }
      while ( (_DWORD)v8 != shard->crackDataCount );
    }
  }
}

/*
==============
Glass_RotateLoops
==============
*/
void Glass_RotateLoops(FxGlassShard *shard, unsigned int i0, unsigned int i1)
{
  __int64 v3; 
  __int64 v5; 
  unsigned int v6; 
  FxGlassShardEdgeLoop *v7; 
  FxGlassShardEdgeLoop i; 
  unsigned int v9; 
  unsigned __int16 *p_parentLoopIndex; 
  unsigned int v11; 

  v3 = i1;
  v5 = i0;
  if ( i0 >= i1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1056, ASSERT_TYPE_SANITY, "( i0 < i1 )", (const char *)&queryFormat, "i0 < i1") )
    __debugbreak();
  v6 = v3;
  v7 = &shard->loops[v3];
  for ( i = *v7; v6 > (unsigned int)v5; v7[1] = shard->loops[v6] )
  {
    --v6;
    --v7;
  }
  v9 = v5 + 1;
  for ( shard->loops[v5] = i; v9 < shard->loopCount; ++v9 )
  {
    p_parentLoopIndex = &shard->loops[v9].parentLoopIndex;
    v11 = *p_parentLoopIndex;
    if ( v11 <= (unsigned int)v3 )
    {
      if ( v11 == (_DWORD)v3 )
      {
        *p_parentLoopIndex = v5;
      }
      else if ( v11 >= (unsigned int)v5 )
      {
        *p_parentLoopIndex = v11 + 1;
      }
    }
  }
}

/*
==============
Glass_SetupShard
==============
*/
char Glass_SetupShard(const FxGlassCrackShardWork *work, FxGlassShard *shard)
{
  unsigned int loopCount; 
  double v5; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v12; 
  double v13; 
  __int128 v14; 
  __int16 v22; 
  __int16 v25; 
  size_t ptCount; 
  FxGlassVertex packedCentroid; 
  long double scaledCentroid[2]; 

  loopCount = shard->loopCount;
  v5 = DOUBLE_8_0;
  v8 = 0;
  v9 = loopCount;
  __asm
  {
    vxorpd  xmm6, xmm6, xmm6
    vmovupd xmmword ptr [rsp+0B8h+scaledCentroid], xmm6
    vxorpd  xmm7, xmm7, xmm7
  }
  if ( loopCount )
  {
    v12 = loopCount;
    do
    {
      v13 = Glass_AreaX2AndScaledCentroidForEdgeLoop(work, shard->loops[v8].firstEdge, scaledCentroid);
      *((_QWORD *)&v14 + 1) = *((_QWORD *)&_XMM7 + 1);
      *(double *)&v14 = *(double *)&_XMM7 + v13;
      _XMM7 = v14;
      v9 = v12;
      if ( v5 < v13 )
      {
        if ( loopCount != v12 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1149, ASSERT_TYPE_SANITY, "( outerIndex == shard->loopCount )", (const char *)&queryFormat, "outerIndex == shard->loopCount") )
        {
          __debugbreak();
          v9 = shard->loopCount;
        }
        loopCount = v8;
        v5 = v13;
      }
      ++v8;
      v12 = v9;
    }
    while ( v8 < v9 );
    __asm { vmovupd xmm6, xmmword ptr [rsp+0B8h+scaledCentroid] }
  }
  __asm { vmovddup xmm8, xmm7 }
  if ( loopCount == v9 )
    return 0;
  if ( loopCount )
  {
    if ( shard->loops[loopCount].parentLoopIndex == 0xFFFF || (loopCount = Glass_SwapLoopParentChildRelationship_r(shard, loopCount)) != 0 )
    {
      Glass_RotateLoops(shard, 0, loopCount);
      Glass_AssertValidLoopOrder(shard);
    }
  }
  if ( shard->loops[0].vertCount > 0x20u )
    return 0;
  if ( *(double *)&_XMM7 <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1163, ASSERT_TYPE_SANITY, "( totalAreaX2 > 1.0E-6 )", (const char *)&queryFormat, "totalAreaX2 > ZERO_EPSILON") )
    __debugbreak();
  __asm
  {
    vmulpd  xmm1, xmm8, cs:__xmm@40080000000000004008000000000000
    vcvtsd2ss xmm0, xmm7, xmm7
  }
  shard->areaX2 = *(float *)&_XMM0;
  __asm
  {
    vdivpd  xmm0, xmm6, xmm1
    vcvtpd2ps xmm8, xmm0
  }
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  v22 = truncate_cast<short,int>((int)*(float *)&_XMM2);
  _mm_shuffle_ps(_XMM8, _XMM8, 85);
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  shard->packedCentroid.x = v22;
  v25 = truncate_cast<short,int>((int)*(float *)&_XMM2);
  ptCount = work->ptCount;
  shard->packedCentroid.y = v25;
  packedCentroid = shard->packedCentroid;
  shard->centroid.v[0] = (float)packedCentroid.x * 0.03125;
  shard->centroid.v[1] = (float)packedCentroid.y * 0.03125;
  shard->geoDataUsed = 0;
  shard->ptCount = 0;
  memset_0(shard->ptIndexMap, 255, ptCount);
  return 1;
}

/*
==============
Glass_SimplifyTriangleFan
==============
*/
__int64 Glass_SimplifyTriangleFan(const FxGlassCrackShardWork *work, FxGlassShardTriangulate *triang, unsigned int fanVertCount)
{
  unsigned int edgeCount; 
  unsigned __int8 *v7; 
  unsigned int v8; 
  unsigned __int8 v9; 
  unsigned __int8 v10; 
  unsigned __int8 *v11; 
  __int64 v12; 
  unsigned __int8 v13; 
  unsigned int v14; 
  FxGlassShardEdge *edges; 
  unsigned int v16; 
  FxGlassShardEdge *v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  __int64 v25; 
  __int16 v27; 
  __int16 v28; 

  if ( fanVertCount > 6 )
  {
    edgeCount = triang->edgeCount;
    if ( fanVertCount < edgeCount - 1 )
    {
      v7 = &triang->fanData[triang->fanDataUsed];
      v8 = 2;
      v9 = v7[1];
      v10 = v7[2];
      v11 = v7 + 3;
      v12 = fanVertCount - 3;
      while ( 1 )
      {
        v13 = v10;
        LOBYTE(v27) = v9;
        v10 = *v11;
        v14 = 0;
        HIBYTE(v27) = v13;
        if ( edgeCount )
        {
          edges = triang->edges;
          while ( edges->packed != v27 )
          {
            ++v14;
            ++edges;
            if ( v14 >= edgeCount )
              goto LABEL_9;
          }
        }
        else
        {
LABEL_9:
          v16 = 0;
          LOBYTE(v28) = v13;
          if ( edgeCount )
          {
            v17 = triang->edges;
            while ( 1 )
            {
              HIBYTE(v28) = *v11;
              if ( v17->packed == v28 )
                break;
              ++v16;
              ++v17;
              if ( v16 >= edgeCount )
                goto LABEL_13;
            }
          }
          else
          {
LABEL_13:
            v18 = work->pts[v13].xy.v[0];
            v19 = work->pts[v13].xy.v[1];
            v20 = work->pts[v9].xy.v[0];
            v21 = work->pts[v9].xy.v[1];
            v22 = work->pts[v10].xy.v[0];
            v23 = work->pts[v10].xy.v[1];
            v24 = (float)((float)(v22 - v18) * (float)(v19 - v21)) - (float)((float)(v23 - v19) * (float)(v18 - v20));
            if ( v24 > 0.0 && v24 >= (float)((float)((float)((float)(v23 - v19) * (float)(v19 - v21)) + (float)((float)(v22 - v18) * (float)(v18 - v20))) * 0.26794919) && (float)((float)((float)(v22 - work->pts[*v7].xy.v[0]) * (float)(work->pts[*v7].xy.v[1] - v21)) - (float)((float)(v23 - work->pts[*v7].xy.v[1]) * (float)(work->pts[*v7].xy.v[0] - v20))) < 0.0 )
              goto LABEL_17;
          }
        }
        v25 = v8;
        v9 = v13;
        ++v8;
        v7[v25] = v13;
LABEL_17:
        ++v11;
        if ( !--v12 )
        {
          v7[v8] = v7[fanVertCount - 1];
          return v8 + 1;
        }
      }
    }
  }
  return fanVertCount;
}

/*
==============
Glass_SwapLoopParentChildRelationship_r
==============
*/
__int64 Glass_SwapLoopParentChildRelationship_r(FxGlassShard *shard, unsigned int childIndex)
{
  char *v2; 
  FxGlassShard *v4; 
  __int64 v5; 
  char *v6; 
  unsigned int v7; 
  __int64 v8; 
  char v9; 

  v2 = (char *)shard + 16 * childIndex;
  v4 = shard;
  v5 = *((unsigned __int16 *)v2 + 17);
  if ( (unsigned int)v5 >= childIndex && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1084, ASSERT_TYPE_SANITY, "( parentIndex < childIndex )", (const char *)&queryFormat, "parentIndex < childIndex") )
    __debugbreak();
  v6 = (char *)v4 + 16 * v5;
  if ( *((_WORD *)v6 + 17) != 0xFFFF )
  {
    v7 = Glass_SwapLoopParentChildRelationship_r(v4, v5);
    v6 = (char *)v4 + 16 * v7;
    LODWORD(v5) = v7;
    if ( *((_WORD *)v6 + 17) != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1092, ASSERT_TYPE_SANITY, "( shard->loops[parentIndex].parentLoopIndex == 0xffff )", (const char *)&queryFormat, "shard->loops[parentIndex].parentLoopIndex == USHRT_MAX") )
      __debugbreak();
    if ( (unsigned int)v5 >= childIndex && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1093, ASSERT_TYPE_SANITY, "( parentIndex < childIndex )", (const char *)&queryFormat, "parentIndex < childIndex") )
      __debugbreak();
  }
  v8 = *((_QWORD *)v6 + 3);
  v9 = **((_BYTE **)v2 + 3);
  if ( *(_BYTE *)v8 != v9 )
  {
    do
    {
      v8 = *(_QWORD *)(v8 + 24);
      if ( v8 == *((_QWORD *)v6 + 3) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 1101, ASSERT_TYPE_SANITY, "( edgeIter != shard->loops[parentIndex].firstEdge )", (const char *)&queryFormat, "edgeIter != shard->loops[parentIndex].firstEdge") )
        __debugbreak();
    }
    while ( *(_BYTE *)v8 != v9 );
    v4 = shard;
  }
  *((_QWORD *)v6 + 3) = v8;
  *((_WORD *)v6 + 17) = childIndex;
  *((_WORD *)v2 + 17) = -1;
  Glass_RotateLoops(v4, v5, childIndex);
  Glass_AssertValidLoopOrder(v4);
  return (unsigned int)v5;
}

/*
==============
Glass_TriangulateShard
==============
*/
void Glass_TriangulateShard(const FxGlassCrackShardWork *work, FxGlassShard *shard)
{
  size_t ptCount; 
  FxGlassShard *v3; 
  const FxGlassCrackShardWork *v4; 
  __int64 geoDataUsed; 
  unsigned int loopCount; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  FxGlassShardEdgeLoop *loops; 
  __int64 v11; 
  FxGlassCrackEdge *firstEdge; 
  int v13; 
  FxGlassCrackEdge *v14; 
  __int64 i1; 
  __int64 v16; 
  unsigned __int8 i0; 
  float v18; 
  float v19; 
  unsigned int v20; 
  unsigned int ShardTriangleFanForBaseEdge; 
  unsigned int v22; 
  unsigned int fanDataLimit; 
  unsigned int fanDataUsed; 
  unsigned __int8 *fanData; 
  unsigned __int8 *v26; 
  unsigned __int8 v27; 
  __int64 v28; 
  unsigned int edgeCount; 
  unsigned __int8 v30; 
  int v31; 
  __int64 v32; 
  __int64 v33; 
  unsigned int v34; 
  unsigned int v35; 
  __int64 v36; 
  unsigned __int8 v37; 
  unsigned __int8 v38; 
  unsigned int v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  unsigned __int8 v44; 
  __int16 v45; 
  unsigned int v46; 
  FxGlassShardTriangulate triang; 

  ptCount = work->ptCount;
  v3 = shard;
  v4 = work;
  geoDataUsed = shard->geoDataUsed;
  triang.fanData = (unsigned __int8 *)&v3->geoData[geoDataUsed];
  triang.fanDataLimit = 4 * (231 - geoDataUsed);
  memset_0(triang.evalTime, 0, ptCount);
  loopCount = v3->loopCount;
  v7 = 0i64;
  v8 = 0;
  v9 = 0;
  triang.edgeCount = 0;
  triang.awayFromPoint.v[0] = 0.0;
  triang.awayFromPoint.v[1] = 0.0;
  if ( loopCount )
  {
    loops = v3->loops;
    v11 = loopCount;
    do
    {
      firstEdge = loops->firstEdge;
      v13 = 0;
      v14 = loops->firstEdge;
      do
      {
        i1 = v14->i1;
        ++v13;
        v16 = v8;
        i0 = v14->i0;
        v18 = triang.awayFromPoint.v[0] + v4->pts[i1].xy.v[0];
        v14 = v14->next;
        triang.awayFromPoint.v[1] = triang.awayFromPoint.v[1] + v4->pts[i1].xy.v[1];
        triang.awayFromPoint.v[0] = v18;
        triang.edges[v16].fields.i0 = i0;
        triang.edges[triang.edgeCount].fields.i1 = i1;
        v8 = ++triang.edgeCount;
      }
      while ( v14 != firstEdge );
      v9 += v13;
      ++loops;
      --v11;
    }
    while ( v11 );
  }
  v19 = (float)v9;
  triang.awayFromPoint.v[0] = (float)(1.0 / v19) * triang.awayFromPoint.v[0];
  triang.awayFromPoint.v[1] = (float)(1.0 / v19) * triang.awayFromPoint.v[1];
  triang.fanDataUsed = 0;
  v44 = 1;
  v20 = Glass_PickShardTriangleFanBaseEdge(v4, &triang, 1u);
  ShardTriangleFanForBaseEdge = Glass_GetShardTriangleFanForBaseEdge(v4, &triang, 1u, v20);
  v46 = Glass_SimplifyTriangleFan(v4, &triang, ShardTriangleFanForBaseEdge);
  v22 = v46;
  if ( v46 <= 2 )
  {
LABEL_27:
    Core_PrintWarning_Unchecked("GLASS: fanVertCount %u must be greater than 2. Shard will not be triangulated\n", v22);
LABEL_40:
    v3->fanDataCount = 0;
  }
  else
  {
    while ( 1 )
    {
      fanDataLimit = triang.fanDataLimit;
      fanDataUsed = triang.fanDataUsed;
      if ( v22 > triang.fanDataLimit - triang.fanDataUsed - 1 )
      {
        v3 = shard;
        goto LABEL_40;
      }
      fanData = triang.fanData;
      v26 = &triang.fanData[triang.fanDataUsed];
      v27 = v26[v22 - 1];
      if ( v22 )
      {
        v28 = v22;
        edgeCount = triang.edgeCount;
        do
        {
          v30 = v27;
          v27 = *v26;
          HIBYTE(v45) = *v26;
          v31 = 0;
          LOBYTE(v45) = v30;
          if ( edgeCount )
          {
            while ( triang.edges[v31].packed != v45 )
            {
              if ( ++v31 >= edgeCount )
                goto LABEL_13;
            }
            triang.edgeCount = edgeCount - 1;
            triang.edges[v31].packed = triang.edges[edgeCount - 1].packed;
            edgeCount = triang.edgeCount;
          }
          else
          {
LABEL_13:
            if ( edgeCount >= 0x200 )
            {
              LODWORD(v41) = 512;
              LODWORD(v40) = edgeCount;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 563, ASSERT_TYPE_ASSERT, "(unsigned)( triang->edgeCount ) < (unsigned)( 512 )", "triang->edgeCount doesn't index GLASS_CRACK_EDGE_LIMIT\n\t%i not in [0, %i)", v40, v41) )
                __debugbreak();
            }
            triang.edges[edgeCount].fields.i0 = v27;
            triang.edges[triang.edgeCount].fields.i1 = v30;
            edgeCount = ++triang.edgeCount;
          }
          ++v26;
          --v28;
        }
        while ( v28 );
        v4 = work;
        fanData = triang.fanData;
        fanDataLimit = triang.fanDataLimit;
        fanDataUsed = triang.fanDataUsed;
      }
      else
      {
        edgeCount = triang.edgeCount;
      }
      if ( fanDataUsed + v46 + 1 > fanDataLimit )
      {
        LODWORD(v43) = fanDataLimit;
        LODWORD(v42) = fanDataUsed + v46 + 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 723, ASSERT_TYPE_ASSERT, "( triang.fanDataUsed + fanVertCount + 1 ) <= ( triang.fanDataLimit )", "%s <= %s\n\t%i, %i", "triang.fanDataUsed + fanVertCount + 1", "triang.fanDataLimit", v42, v43) )
          __debugbreak();
      }
      v32 = fanDataUsed + v46;
      v33 = (unsigned int)(v32 + 1);
      triang.fanDataUsed = v32 + 1;
      fanData[v32] = -1;
      if ( !edgeCount )
        break;
      v34 = Glass_PickShardTriangleFanBaseEdge(v4, &triang, ++v44);
      v35 = Glass_GetShardTriangleFanForBaseEdge(v4, &triang, v44, v34);
      v46 = Glass_SimplifyTriangleFan(v4, &triang, v35);
      v22 = v46;
      if ( v46 <= 2 )
      {
        v3 = shard;
        goto LABEL_27;
      }
    }
    if ( v44 == 1 )
    {
      v36 = *fanData;
      shard->fanDataCount = 0;
      Glass_RotateBorderVerts(shard, shard->ptIndexMap[v36]);
    }
    else
    {
      if ( (_DWORD)v32 != -1 )
      {
        do
        {
          v37 = fanData[v7];
          if ( v37 != 0xFF )
          {
            v38 = shard->ptIndexMap[v37];
            fanData[v7] = v38;
            if ( v38 == 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\iweffects\\glass_crack_shard.cpp", 742, ASSERT_TYPE_SANITY, "( triang.fanData[fanVertIter] != 0xff )", (const char *)&queryFormat, "triang.fanData[fanVertIter] != GLASS_VERT_INDEX_NONE") )
              __debugbreak();
          }
          v7 = (unsigned int)(v7 + 1);
        }
        while ( (unsigned int)v7 < (unsigned int)v33 );
      }
      for ( ; (v33 & 3) != 0; v33 = (unsigned int)(v33 + 1) )
        fanData[v33] = -1;
      v39 = (unsigned int)v33 >> 2;
      shard->geoDataUsed += v39;
      shard->fanDataCount = v39;
    }
  }
}

