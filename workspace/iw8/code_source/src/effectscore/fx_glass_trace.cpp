/*
==============
Glass_DoesPieceContainPoint
==============
*/

bool __fastcall Glass_DoesPieceContainPoint(const FxGlassPieceState *pieceState, const FxGlassGeometryData *geoData, int *point)
{
  return ?Glass_DoesPieceContainPoint@@YA_NPEIBUFxGlassPieceState@@PEBTFxGlassGeometryData@@PEIAH@Z(pieceState, geoData, point);
}

/*
==============
Glass_TraceLine
==============
*/

void __fastcall Glass_TraceLine(FxGlassSystem *glassSys, const vec3_t *start, const vec3_t *end, const vec3_t *playerOrigin)
{
  ?Glass_TraceLine@@YAXPEAUFxGlassSystem@@AEBTvec3_t@@11@Z(glassSys, start, end, playerOrigin);
}

/*
==============
Glass_CompareTraceHits
==============
*/
bool Glass_CompareTraceHits(const FxGlassTraceHit *hit0, const FxGlassTraceHit *hit1)
{
  return hit0->dist < hit1->dist;
}

/*
==============
Glass_DoesEdgeLoopContainPoint
==============
*/
bool Glass_DoesEdgeLoopContainPoint(const FxGlassVertex *firstVert, const FxGlassVertex *vertArray, unsigned int vertCount, int startingParity, const int *point)
{
  const FxGlassVertex *v6; 
  __int64 v7; 
  int v8; 
  int y; 
  int v10; 

  v6 = &vertArray[vertCount - 1];
  v7 = 0i64;
  v8 = point[1];
  while ( 1 )
  {
    y = v6->y;
    v10 = firstVert->y;
    if ( y > v8 )
    {
      if ( v10 <= v8 && (v8 - y) * (firstVert->x - v6->x) < (v10 - y) * (*point - v6->x) )
        ++startingParity;
    }
    else if ( v10 > v8 && (v8 - y) * (firstVert->x - v6->x) > (*point - v6->x) * (v10 - y) )
    {
      --startingParity;
    }
    if ( (_DWORD)v7 == vertCount )
      break;
    v6 = firstVert;
    firstVert = &vertArray[v7];
    v7 = (unsigned int)(v7 + 1);
  }
  return startingParity > 0;
}

/*
==============
Glass_DoesPieceContainPoint
==============
*/
char Glass_DoesPieceContainPoint(const FxGlassPieceState *pieceState, const FxGlassGeometryData *geoData, int *point)
{
  unsigned __int8 vertCount; 
  int v7; 
  unsigned __int8 holeDataCount; 
  __int64 v9; 
  const FxGlassGeometryData *v10; 
  const FxGlassGeometryData *v11; 
  unsigned __int8 touchVert; 
  const FxGlassVertex *p_vert; 
  unsigned int uniqueVertCount; 
  const FxGlassGeometryData *v15; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v20; 
  __int64 v21; 
  int v22[16]; 

  vertCount = pieceState->vertCount;
  if ( vertCount )
  {
    v7 = vertCount;
    if ( Glass_DoesEdgeLoopContainPoint(&geoData->vert, &geoData[1].vert, vertCount - 1, 0, point) )
    {
      holeDataCount = pieceState->holeDataCount;
      if ( !holeDataCount )
        return 1;
      v9 = 0i64;
      v10 = &geoData[vertCount];
      v11 = &v10[holeDataCount];
      while ( 1 )
      {
        touchVert = v10->hole.touchVert;
        if ( touchVert == 0xFF )
        {
          p_vert = &v10[2].vert;
          uniqueVertCount = v10->hole.uniqueVertCount - 1;
          v15 = v10 + 1;
        }
        else
        {
          v16 = v9;
          if ( (_DWORD)v9 )
          {
            do
            {
              v17 = (unsigned int)(v16 - 1);
              if ( touchVert >= (unsigned int)v22[v17] )
                break;
              --v16;
            }
            while ( (_DWORD)v17 );
          }
          uniqueVertCount = v10->hole.uniqueVertCount;
          p_vert = &v10[1].vert;
          v15 = &geoData[v16 + touchVert];
        }
        if ( !Glass_DoesEdgeLoopContainPoint(&v15->vert, p_vert, uniqueVertCount, 1, point) )
          break;
        if ( (unsigned int)v9 >= 0xF )
        {
          LODWORD(v21) = 15;
          LODWORD(v20) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_trace.cpp", 128, ASSERT_TYPE_ASSERT, "(unsigned)( holeCount ) < (unsigned)( ( sizeof( *array_counter( firstHoleVert ) ) + 0 ) )", "holeCount doesn't index ARRAY_COUNT( firstHoleVert )\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        v18 = v10->hole.uniqueVertCount;
        v22[v9] = v7;
        v9 = (unsigned int)(v9 + 1);
        v7 += v18;
        v10 += v18 + 1;
        if ( v10 == v11 )
          return 1;
      }
    }
  }
  return 0;
}

/*
==============
Glass_TraceAgainstPiece
==============
*/
void Glass_TraceAgainstPiece(FxGlassSystem *glassSys, FxGlassTrace *trace, unsigned int pieceIndex)
{
  __int128 v3; 
  __int128 v4; 
  FxGlassPiecePlace *piecePlaces; 
  __int64 hitCount; 
  __int64 v9; 
  __int64 v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  double v15; 
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
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  FxGlassPieceState *pieceStates; 
  __int64 geoDataStart; 
  FxGlassGeometryData *geoData; 
  unsigned __int8 vertCount; 
  const FxGlassVertex *p_vert; 
  int v48; 
  unsigned __int8 holeDataCount; 
  __int64 v50; 
  const FxGlassVertex *v51; 
  unsigned __int16 *v52; 
  unsigned __int8 y; 
  const FxGlassVertex *v54; 
  unsigned int x; 
  const FxGlassVertex *v56; 
  int v57; 
  __int64 v58; 
  __int64 v59; 
  __int16 v60; 
  int v61; 
  unsigned int v62; 
  __int64 v63; 
  __int64 v64; 
  int point; 
  int val; 
  unsigned int v67; 
  int v68[16]; 
  __int128 v69; 
  __int128 v70; 

  piecePlaces = glassSys->piecePlaces;
  hitCount = trace->hitCount;
  v9 = pieceIndex;
  v67 = pieceIndex;
  v10 = hitCount;
  v11 = piecePlaces[v9].frame.origin.v[0] - trace->start.v[0];
  v12 = piecePlaces[v9].frame.origin.v[1] - trace->start.v[1];
  v13 = piecePlaces[v9].frame.origin.v[2] - trace->start.v[2];
  v14 = (float)((float)(v12 * trace->dir.v[1]) + (float)(v11 * trace->dir.v[0])) + (float)(v13 * trace->dir.v[2]);
  v15 = I_fclamp(v14, 0.0, trace->len);
  v16 = (float)(COERCE_FLOAT(LODWORD(v15) ^ _xmm) * trace->dir.v[1]) + v12;
  v17 = (float)(COERCE_FLOAT(LODWORD(v14) ^ _xmm) * trace->dir.v[2]) + v13;
  if ( (float)((float)((float)(v16 * v16) + (float)((float)((float)(COERCE_FLOAT(LODWORD(v15) ^ _xmm) * trace->dir.v[0]) + v11) * (float)((float)(COERCE_FLOAT(LODWORD(v15) ^ _xmm) * trace->dir.v[0]) + v11))) + (float)(v17 * v17)) <= (float)(piecePlaces[v9].radius * piecePlaces[v9].radius) )
  {
    v18 = piecePlaces[v9].frame.quat.v[1];
    v19 = piecePlaces[v9].frame.quat.v[0];
    v20 = piecePlaces[v9].frame.quat.v[2];
    v21 = piecePlaces[v9].frame.quat.v[3];
    v70 = v3;
    v69 = v4;
    v22 = (float)((float)((float)(v19 * v19) + (float)(v18 * v18)) + (float)(v20 * v20)) + (float)(v21 * v21);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v22 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 770, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v19, v18, v20, v21, fsqrt(v22)) )
      __debugbreak();
    v23 = piecePlaces[v9].frame.quat.v[1];
    v24 = piecePlaces[v9].frame.quat.v[2];
    v25 = piecePlaces[v9].frame.quat.v[3];
    v26 = 2.0 * piecePlaces[v9].frame.quat.v[0];
    v27 = v26 * piecePlaces[v9].frame.quat.v[0];
    v28 = v23 * v26;
    v29 = v23 * (float)(v23 * 2.0);
    v30 = v24 * (float)(v23 * 2.0);
    v31 = v25 * (float)(v23 * 2.0);
    v32 = (float)(v24 * 2.0) * v25;
    v33 = (float)(v24 * 2.0) * v24;
    trace->hits[v10].axis.m[0].v[0] = 1.0 - (float)(v33 + v29);
    trace->hits[v10].axis.m[0].v[1] = v32 + v28;
    trace->hits[v10].axis.m[0].v[2] = (float)(v24 * v26) - v31;
    trace->hits[v10].axis.m[1].v[0] = v28 - v32;
    trace->hits[v10].axis.m[1].v[1] = 1.0 - (float)(v33 + v27);
    trace->hits[v10].axis.m[1].v[2] = v30 + (float)(v25 * v26);
    trace->hits[v10].axis.m[2].v[0] = v31 + (float)(v24 * v26);
    trace->hits[v10].axis.m[2].v[1] = v30 - (float)(v25 * v26);
    v34 = 1.0 - (float)(v29 + v27);
    trace->hits[v10].axis.m[2].v[2] = v34;
    v35 = trace->hits[v10].axis.m[2].v[1];
    v36 = trace->hits[v10].axis.m[2].v[0];
    v37 = (float)((float)(v35 * trace->dir.v[1]) + (float)(v36 * trace->dir.v[0])) + (float)(v34 * trace->dir.v[2]);
    if ( COERCE_FLOAT(LODWORD(v37) & _xmm) >= 0.001 )
    {
      v38 = (float)((float)((float)(v35 * (float)(piecePlaces[v9].frame.origin.v[1] - trace->start.v[1])) + (float)(v36 * (float)(piecePlaces[v9].frame.origin.v[0] - trace->start.v[0]))) + (float)((float)(1.0 - (float)(v29 + v27)) * (float)(piecePlaces[v9].frame.origin.v[2] - trace->start.v[2]))) / v37;
      trace->hits[v10].dist = v38;
      if ( v38 > 0.0 && v38 < trace->len )
      {
        pieceStates = glassSys->pieceStates;
        geoDataStart = pieceStates[v9].geoDataStart;
        _XMM0 = 0i64;
        __asm { vroundss xmm0, xmm0, xmm1, 1 }
        point = (int)*(float *)&_XMM0;
        _XMM1 = 0i64;
        __asm { vroundss xmm1, xmm1, xmm3, 1 }
        val = (int)*(float *)&_XMM1;
        geoData = glassSys->geoData;
        vertCount = pieceStates[v9].vertCount;
        p_vert = &geoData[geoDataStart].vert;
        if ( vertCount )
        {
          v48 = vertCount;
          if ( Glass_DoesEdgeLoopContainPoint(p_vert, p_vert + 1, vertCount - 1, 0, &point) )
          {
            holeDataCount = pieceStates[v9].holeDataCount;
            if ( holeDataCount )
            {
              v50 = 0i64;
              v51 = &p_vert[vertCount];
              v52 = (unsigned __int16 *)&v51[holeDataCount];
              while ( 1 )
              {
                y = v51->y;
                if ( y == 0xFF )
                {
                  v54 = v51 + 2;
                  x = (unsigned __int16)v51->x - 1;
                  v56 = v51 + 1;
                }
                else
                {
                  v57 = v50;
                  if ( (_DWORD)v50 )
                  {
                    do
                    {
                      v58 = (unsigned int)(v57 - 1);
                      if ( y >= (unsigned int)v68[v58] )
                        break;
                      --v57;
                    }
                    while ( (_DWORD)v58 );
                  }
                  x = (unsigned __int16)v51->x;
                  v54 = v51 + 1;
                  v56 = &p_vert[v57 + y];
                }
                if ( !Glass_DoesEdgeLoopContainPoint(v56, v54, x, 1, &point) )
                  break;
                if ( (unsigned int)v50 >= 0xF )
                {
                  LODWORD(v64) = 15;
                  LODWORD(v63) = v50;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_trace.cpp", 128, ASSERT_TYPE_ASSERT, "(unsigned)( holeCount ) < (unsigned)( ( sizeof( *array_counter( firstHoleVert ) ) + 0 ) )", "holeCount doesn't index ARRAY_COUNT( firstHoleVert )\n\t%i not in [0, %i)", v63, v64) )
                    __debugbreak();
                }
                v59 = (unsigned __int16)v51->x;
                v68[v50] = v48;
                v50 = (unsigned int)(v50 + 1);
                v48 += v59;
                v51 += v59 + 1;
                if ( v51 == (const FxGlassVertex *)v52 )
                  goto LABEL_23;
              }
            }
            else
            {
LABEL_23:
              v60 = truncate_cast<short,int>(point);
              v61 = val;
              trace->hits[v10].breakOrg.x = v60;
              trace->hits[v10].breakOrg.y = truncate_cast<short,int>(v61);
              trace->hits[v10].pieceIndex = v67;
              v62 = trace->hitCount;
              if ( v62 == 4 )
                std::_Sort_unchecked<FxGlassTraceHit *,bool (*)(FxGlassTraceHit const &,FxGlassTraceHit const &)>(trace->hits, (FxGlassTraceHit *)&trace[1], 5i64, Glass_CompareTraceHits);
              else
                trace->hitCount = v62 + 1;
            }
          }
        }
      }
    }
  }
}

/*
==============
Glass_TraceLine
==============
*/
void Glass_TraceLine(FxGlassSystem *glassSys, const vec3_t *start, const vec3_t *end, const vec3_t *playerOrigin)
{
  __int128 v4; 
  __int128 v5; 
  const vec3_t *v6; 
  const vec3_t *v8; 
  float v10; 
  float v11; 
  float v12; 
  unsigned int pieceWordCount; 
  float v14; 
  float v15; 
  unsigned int v16; 
  unsigned int hitCount; 
  unsigned int v18; 
  float v19; 
  float v20; 
  __int128 v21; 
  unsigned int v25; 
  __int64 v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int pieceIndex; 
  float dist; 
  __int64 v31; 
  __int64 v32; 
  unsigned int v33; 
  vec3_t impactPos; 
  FxGlassTrace trace; 
  __int128 v38; 
  __int128 v39; 

  v6 = start;
  v8 = playerOrigin;
  if ( Sys_IsWorkerCmdWaiting(WRKCMD_DPVS_CELL_GLASS, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_trace.cpp", 206, ASSERT_TYPE_ASSERT, "(!Sys_IsWorkerCmdWaiting( WRKCMD_DPVS_CELL_GLASS, nullptr ))", (const char *)&queryFormat, "!Sys_IsWorkerCmdWaiting( WRKCMD_DPVS_CELL_GLASS, nullptr )") )
    __debugbreak();
  if ( glass_break->current.enabled )
  {
    v10 = v6->v[0];
    v11 = v6->v[1];
    v12 = v6->v[2];
    pieceWordCount = glassSys->pieceWordCount;
    v14 = end->v[0] - v6->v[0];
    v15 = end->v[2];
    v16 = 0;
    hitCount = 0;
    v39 = v4;
    v18 = 0;
    v38 = v5;
    trace.hitCount = 0;
    v33 = pieceWordCount;
    v19 = v15 - v12;
    trace.start.v[0] = v10;
    v21 = LODWORD(end->v[1]);
    v20 = end->v[1] - v11;
    trace.start.v[2] = v12;
    trace.start.v[1] = v11;
    *(float *)&v21 = fsqrt((float)((float)(v20 * v20) + (float)(v14 * v14)) + (float)(v19 * v19));
    _XMM4 = v21;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
    }
    trace.dir.v[0] = v14 * (float)(1.0 / *(float *)&_XMM0);
    trace.dir.v[2] = v19 * (float)(1.0 / *(float *)&_XMM0);
    trace.dir.v[1] = v20 * (float)(1.0 / *(float *)&_XMM0);
    trace.len = *(float *)&v21;
    if ( pieceWordCount )
    {
      v25 = pieceWordCount;
      v26 = 0i64;
      do
      {
        v27 = glassSys->isInUse[v26];
        if ( v27 )
        {
          do
          {
            v28 = __lzcnt(v27);
            if ( v28 >= 0x20 )
            {
              LODWORD(v32) = 32;
              LODWORD(v31) = v28;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v31, v32) )
                __debugbreak();
            }
            v27 &= ~(0x80000000 >> v28);
            Glass_TraceAgainstPiece(glassSys, &trace, v28 | (32 * v18));
          }
          while ( v27 );
          v25 = v33;
        }
        ++v18;
        ++v26;
      }
      while ( v18 < v25 );
      hitCount = trace.hitCount;
      v6 = start;
      v8 = playerOrigin;
    }
    if ( hitCount )
    {
      do
      {
        pieceIndex = trace.hits[v16].pieceIndex;
        if ( (glassSys->pieceStates[pieceIndex].flags & 2) != 0 )
        {
          dist = trace.hits[v16].dist;
          impactPos.v[0] = (float)(dist * trace.dir.v[0]) + v6->v[0];
          impactPos.v[1] = (float)(dist * trace.dir.v[1]) + v6->v[1];
          impactPos.v[2] = (float)(dist * trace.dir.v[2]) + v6->v[2];
          Glass_DestroySimplePiece(glassSys, pieceIndex, &impactPos, &trace.dir, v8);
          hitCount = trace.hitCount;
        }
        ++v16;
      }
      while ( v16 < hitCount );
    }
    Glass_CompactData(glassSys);
  }
}

