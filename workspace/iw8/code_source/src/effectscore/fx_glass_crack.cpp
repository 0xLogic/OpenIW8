/*
==============
Glass_CreatePhysicsFromDeferredData
==============
*/

void __fastcall Glass_CreatePhysicsFromDeferredData(ParticleDeferredPhysicsGlassCreateData *pDeferredPhysicsGlassCreateData, Physics_WorldId authWorldId)
{
  ?Glass_CreatePhysicsFromDeferredData@@YAXPEAUParticleDeferredPhysicsGlassCreateData@@W4Physics_WorldId@@@Z(pDeferredPhysicsGlassCreateData, authWorldId);
}

/*
==============
Glass_SetCrackEdgeDelta
==============
*/

void __fastcall Glass_SetCrackEdgeDelta(const FxGlassCrackWork *work, FxGlassCrackEdge *edge)
{
  ?Glass_SetCrackEdgeDelta@@YAXPEBUFxGlassCrackWork@@PEAUFxGlassCrackEdge@@@Z(work, edge);
}

/*
==============
Glass_DestroySimplePiece
==============
*/

void __fastcall Glass_DestroySimplePiece(FxGlassSystem *glassSys, unsigned int pieceIndex, const vec3_t *impactPos, const vec3_t *impactDir, const vec3_t *playerOrigin)
{
  ?Glass_DestroySimplePiece@@YAXPEIAUFxGlassSystem@@IAEBTvec3_t@@11@Z(glassSys, pieceIndex, impactPos, impactDir, playerOrigin);
}

/*
==============
Glass_CreatePhysics
==============
*/

void __fastcall Glass_CreatePhysics(FxGlassSystem *glassSys, unsigned int pieceIndex, bool addImmediate, bool trySpawnDeactived)
{
  ?Glass_CreatePhysics@@YAXPEIAUFxGlassSystem@@I_N1@Z(glassSys, pieceIndex, addImmediate, trySpawnDeactived);
}

/*
==============
Glass_DestroyPiece
==============
*/

void __fastcall Glass_DestroyPiece(FxGlassSystem *glassSys, unsigned int pieceIndex, const vec3_t *impactPos, const vec3_t *impactDir, Glass_BreakData *breakData)
{
  ?Glass_DestroyPiece@@YAXPEIAUFxGlassSystem@@IAEBTvec3_t@@1PEAUGlass_BreakData@@@Z(glassSys, pieceIndex, impactPos, impactDir, breakData);
}

/*
==============
Glass_ForceRandomSeed
==============
*/

void __fastcall Glass_ForceRandomSeed(int seed)
{
  ?Glass_ForceRandomSeed@@YAXH@Z(seed);
}

/*
==============
Particle_AddDeferredPhysicsGlassCreate
==============
*/

void __fastcall Particle_AddDeferredPhysicsGlassCreate(LocalClientNum_t localClientNum, FxGlassSystem *glassSys, unsigned int pieceIndex, const vec3_t *vel, const vec3_t *avel, bool createJoint)
{
  ?Particle_AddDeferredPhysicsGlassCreate@@YAXW4LocalClientNum_t@@PEIAUFxGlassSystem@@IAEBTvec3_t@@2_N@Z(localClientNum, glassSys, pieceIndex, vel, avel, createJoint);
}

/*
==============
Glass_CrackPiece
==============
*/

void __fastcall Glass_CrackPiece(FxGlassCrackWork *work, FxGlassSystem *glassSys, unsigned int pieceIndex, const tmat33_t<vec3_t> *axis, const FxGlassVertex breakOrg, const vec3_t *breakDir, float avgCrackLength)
{
  ?Glass_CrackPiece@@YAXPEAUFxGlassCrackWork@@PEAUFxGlassSystem@@IAEBT?$tmat33_t@Tvec3_t@@@@UFxGlassVertex@@AEBTvec3_t@@M@Z(work, glassSys, pieceIndex, axis, breakOrg, breakDir, avgCrackLength);
}

/*
==============
Glass_SetupPieceFall
==============
*/

void __fastcall Glass_SetupPieceFall(FxGlassSystem *glassSys, unsigned int pieceIndex, const vec3_t *vel, const vec3_t *avel)
{
  ?Glass_SetupPieceFall@@YAXPEIAUFxGlassSystem@@IAEBTvec3_t@@1@Z(glassSys, pieceIndex, vel, avel);
}

/*
==============
Glass_StartDelayedFall
==============
*/

void __fastcall Glass_StartDelayedFall(FxGlassSystem *glassSys, unsigned int pieceIndex)
{
  ?Glass_StartDelayedFall@@YAXPEIAUFxGlassSystem@@I@Z(glassSys, pieceIndex);
}

/*
==============
Glass_FinalizeShard
==============
*/

void __fastcall Glass_FinalizeShard(FxGlassCrackWork *work, const FxGlassShard *shard)
{
  ?Glass_FinalizeShard@@YAXPEIAUFxGlassCrackWork@@PEIBUFxGlassShard@@@Z(work, shard);
}

/*
==============
CompareFringePieceArea
==============
*/
bool CompareFringePieceArea(const unsigned __int16 *index0, const unsigned __int16 *index1)
{
  return s_fringePieceSortWork->glassSys->pieceStates[*index1].areaX2 < s_fringePieceSortWork->glassSys->pieceStates[*index0].areaX2;
}

/*
==============
Glass_AllocCrackEdge
==============
*/
FxGlassCrackEdge *Glass_AllocCrackEdge(FxGlassCrackWork *work, unsigned int i0, unsigned int i1, unsigned int loopIndex, unsigned __int8 edgeType)
{
  unsigned __int8 v5; 
  FxGlassCrackEdge *FreeEdge; 
  __int64 v11; 
  __int64 v12; 
  unsigned int ptCount; 

  v5 = loopIndex;
  if ( i0 == i1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 220, ASSERT_TYPE_ASSERT, "(i0 != i1)", (const char *)&queryFormat, "i0 != i1") )
    __debugbreak();
  if ( i0 >= work->ptCount )
  {
    ptCount = work->ptCount;
    LODWORD(v11) = i0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 221, ASSERT_TYPE_ASSERT, "(unsigned)( i0 ) < (unsigned)( work->ptCount )", "i0 doesn't index work->ptCount\n\t%i not in [0, %i)", v11, ptCount) )
      __debugbreak();
  }
  if ( i1 >= work->ptCount )
  {
    LODWORD(v12) = work->ptCount;
    LODWORD(v11) = i1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 222, ASSERT_TYPE_ASSERT, "(unsigned)( i1 ) < (unsigned)( work->ptCount )", "i1 doesn't index work->ptCount\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  FreeEdge = Glass_GetFreeEdge(work);
  FreeEdge->type = edgeType;
  FreeEdge->i0 = i0;
  FreeEdge->i1 = i1;
  FreeEdge->loopIndex = v5;
  FreeEdge->twin = NULL;
  Glass_SetCrackEdgeDelta(work, FreeEdge);
  return FreeEdge;
}

/*
==============
Glass_CalcLoopBounds
==============
*/
void Glass_CalcLoopBounds(FxGlassCrackWork *work, FxGlassCrackLoop *loop)
{
  FxGlassCrackEdge *firstEdge; 
  vec2_t *p_mins; 
  vec2_t *p_maxs; 
  unsigned __int64 nextFree; 
  __int64 i0; 
  FxGlassCrackEdge *next; 

  firstEdge = loop->firstEdge;
  p_mins = &loop->mins;
  p_maxs = &loop->maxs;
  nextFree = (unsigned __int64)loop->firstEdge->nextFree;
  loop->mins.v[0] = work->pts[nextFree].xy.v[0];
  loop->mins.v[1] = work->pts[nextFree].xy.v[1];
  i0 = firstEdge->i0;
  p_maxs->v[0] = work->pts[i0].xy.v[0];
  p_maxs->v[1] = work->pts[i0].xy.v[1];
  next = firstEdge->next;
  do
  {
    AddPointToBounds2D(&work->pts[next->i0].xy, p_mins, p_maxs);
    next = next->next;
  }
  while ( next != firstEdge );
}

/*
==============
Glass_ClipSegmentWithinEdgeLoop
==============
*/
void Glass_ClipSegmentWithinEdgeLoop(FxGlassCrackWork *work, FxGlassClipSegment *clip, FxGlassCrackEdge *edgeLoop)
{
  FxGlassCrackEdge *v6; 
  FxGlassCrackPoint *v7; 
  FxGlassCrackEdge *v8; 
  __int64 v9; 
  __int64 v10; 

  if ( !work && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1732, ASSERT_TYPE_ASSERT, "(work)", (const char *)&queryFormat, "work") )
    __debugbreak();
  if ( !clip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1733, ASSERT_TYPE_ASSERT, "(clip)", (const char *)&queryFormat, "clip") )
    __debugbreak();
  if ( !edgeLoop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1734, ASSERT_TYPE_ASSERT, "(edgeLoop)", (const char *)&queryFormat, "edgeLoop") )
    __debugbreak();
  if ( (unsigned int)(((char *)edgeLoop - (char *)work - 3064) >> 5) >= work->edgeCount )
  {
    LODWORD(v9) = ((char *)edgeLoop - (char *)work - 3064) >> 5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1735, ASSERT_TYPE_ASSERT, "(unsigned)( edgeLoop - work->edges ) < (unsigned)( work->edgeCount )", "edgeLoop - work->edges doesn't index work->edgeCount\n\t%i not in [0, %i)", v9, work->edgeCount) )
      __debugbreak();
  }
  v6 = edgeLoop;
  v7 = &work->pts[clip->startIndex];
  do
  {
    v8 = v6;
    v6 = v6->next;
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1743, ASSERT_TYPE_ASSERT, "(edgeIter)", (const char *)&queryFormat, "edgeIter") )
      __debugbreak();
    if ( (unsigned int)(((char *)v6 - (char *)work - 3064) >> 5) >= work->edgeCount )
    {
      LODWORD(v10) = work->edgeCount;
      LODWORD(v9) = ((char *)v6 - (char *)work - 3064) >> 5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1744, ASSERT_TYPE_ASSERT, "(unsigned)( edgeIter - work->edges ) < (unsigned)( work->edgeCount )", "edgeIter - work->edges doesn't index work->edgeCount\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( v6->i0 != clip->startIndex && v6->i1 != clip->startIndex )
      Glass_TraceCrackAgainstEdge(work, clip, &v7->xy, v6, v8);
  }
  while ( v6 != edgeLoop );
}

/*
==============
Glass_ConsiderBreakingPiece
==============
*/
void Glass_ConsiderBreakingPiece(FxGlassCrackWork *work, unsigned int pieceIndex)
{
  FxGlassSystem *glassSys; 
  __int64 v4; 
  float v5; 
  float v6; 

  glassSys = work->glassSys;
  v4 = (__int64)&glassSys->pieceStates[pieceIndex];
  v5 = *(float *)(v4 + 28);
  if ( v5 <= work->maxPieceArea )
  {
    if ( !*(_DWORD *)(v4 + 8) )
      return;
    if ( v5 <= work->maxEdgePieceArea )
      goto LABEL_7;
  }
  if ( work->pieceStackLevel >= 0x20 )
  {
LABEL_7:
    if ( *(_DWORD *)(v4 + 8) && glassSys->pieceDynamics[pieceIndex].fallTime == 0x7FFFFFFF && work->fringePieceCount < 0x20 )
    {
      work->fringePieces[work->fringePieceCount] = truncate_cast<unsigned short,unsigned int>(pieceIndex);
      v6 = *(float *)(v4 + 28) + work->fringeAreaX2;
      ++work->fringePieceCount;
      work->fringeAreaX2 = v6;
    }
  }
  else
  {
    work->pieceStack[work->pieceStackLevel++] = truncate_cast<unsigned short,unsigned int>(pieceIndex);
  }
}

/*
==============
Glass_CrackPiece
==============
*/
void Glass_CrackPiece(FxGlassCrackWork *work, FxGlassSystem *glassSys, unsigned int pieceIndex, const tmat33_t<vec3_t> *axis, const FxGlassVertex breakOrg, const vec3_t *breakDir, float avgCrackLength)
{
  unsigned int v8; 
  __int64 v11; 
  FxGlassPieceState *v12; 
  const FxGlassDef *v13; 
  float halfThickness; 
  int v16; 
  bool Cracks; 

  work->glassSys = glassSys;
  v8 = 0;
  work->ptCount = 0;
  work->edgeCount = 0;
  work->firstFreeEdge = NULL;
  work->branchStackLevel = 0;
  work->pieceIndex = pieceIndex;
  v11 = pieceIndex;
  work->piecePlace = &glassSys->piecePlaces[v11];
  v12 = &glassSys->pieceStates[v11];
  work->pieceState = v12;
  v13 = &fxWorld.glassGlob.defs[v12->defIndex];
  work->def = v13;
  halfThickness = v13->halfThickness;
  work->crackLengthMin = avgCrackLength * 0.75;
  work->halfThickness = halfThickness;
  work->crackLengthMax = avgCrackLength;
  work->impactDir = *breakDir;
  work->axis = *axis;
  _XMM0 = LODWORD(FLOAT_N1_0);
  v16 = s_glassRandSeed;
  _XMM2 = 0i64;
  __asm
  {
    vcmpless xmm5, xmm2, xmm3
    vblendvps xmm1, xmm0, xmm1, xmm5
  }
  work->angleSign = *(float *)&_XMM1;
  s_glassCrackAssert.avgCrackLength = avgCrackLength;
  s_glassCrackAssert.work = work;
  s_glassCrackAssert.breakOrg = breakOrg;
  s_glassCrackAssert.randSeed = v16;
  SetAssertCallbackHandler(Glass_PrintCrackPieceAssertReproData);
  if ( glass_spam->current.enabled )
    Glass_PrintCrackPieceAssertReproData();
  Glass_MakeOuterPieceLoop(work);
  Glass_MakeHolePieceLoops(work);
  Glass_MakeCrackPieceLoops(work);
  if ( work->loopCount )
  {
    do
      Glass_CalcLoopBounds(work, &work->loops[v8++]);
    while ( v8 < work->loopCount );
  }
  work->breakOrgIndex = Glass_UnpackAndAddVertex(work, breakOrg);
  Cracks = Glass_CreateCracks(work);
  SetAssertCallbackHandler(NULL);
  if ( Cracks )
    Glass_FreePiece(glassSys, pieceIndex);
  else
    Glass_ConsiderBreakingPiece(work, pieceIndex);
}

/*
==============
Glass_CreateCracks
==============
*/
char Glass_CreateCracks(FxGlassCrackWork *work)
{
  __int128 v1; 
  FxGlassCrackEdge *v3; 
  FxGlassCrackEdge *v4; 
  unsigned int v5; 
  unsigned int i1; 
  FxGlassCrackEdge *next; 
  float v8; 
  __int128 v9; 
  float v10; 
  FxGlassCrackEdge *twin; 
  __int128 v17; 
  float v18; 
  FxGlassCrackEdge *i; 
  float v20; 
  __int128 v21; 
  float v24; 
  unsigned __int8 *v25; 
  unsigned __int8 *v26; 
  __int128 v30; 
  int v31; 
  unsigned int v32; 
  float v33; 
  float v34; 
  int v36; 
  float v37; 
  unsigned int branchStackLevel; 
  unsigned int v39; 
  float v40; 
  float v41; 
  float v44; 
  unsigned int v45; 
  __int64 v46; 
  __int128 v47; 
  float v48; 
  int v49; 
  __int64 v50; 
  float v51; 
  unsigned int v54; 
  FxGlassCrackEdge *firstEdge; 
  FxGlassCrackEdge *v56; 
  unsigned int loopCount; 
  FxGlassCrackEdge *v58; 
  FxGlassCrackEdge *v59; 
  FxGlassCrackEdge *v60; 
  __int64 v61; 
  __int64 v62; 
  float c; 
  float s; 
  vec2_t outSeedDir; 
  FxGlassShard outShard; 
  FxGlassCrackEdge *inLoops[32]; 
  __int128 v68; 

  v3 = Glass_PickSeedDir(work, &outSeedDir);
  v4 = v3;
  v5 = 1;
  if ( v3 )
  {
    i1 = v3->i1;
    work->breakOrgIndex = i1;
    next = v3->next;
    v8 = v3->dir.v[1];
    v9 = LODWORD(v3->dir.v[0]);
    v68 = v1;
    v10 = atan2f_0((float)(v8 * next->dir.v[0]) - (float)(*(float *)&v9 * next->dir.v[1]), COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v9 * next->dir.v[0]) + (float)(v8 * next->dir.v[1])) ^ _xmm));
    _XMM13 = LODWORD(FLOAT_6_2831855);
    twin = v4->twin;
    _XMM12 = 0i64;
    __asm
    {
      vcmpless xmm1, xmm12, xmm0
      vblendvps xmm1, xmm13, xmm12, xmm1
    }
    *(float *)&_XMM8 = *(float *)&_XMM1 + v10;
    v17 = v9 ^ (unsigned int)_xmm;
    LODWORD(v18) = LODWORD(v8) ^ _xmm;
    if ( twin && twin->next == v4 )
    {
      for ( i = next->next; i->i1 != i1; i = i->next )
        ;
      if ( i == v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2668, ASSERT_TYPE_ASSERT, "(prevEdge != onEdge)", (const char *)&queryFormat, "prevEdge != onEdge") )
        __debugbreak();
      v20 = i->dir.v[1];
      v21 = LODWORD(i->dir.v[0]);
      __asm
      {
        vcmpless xmm1, xmm12, xmm0
        vblendvps xmm1, xmm13, xmm12, xmm1
      }
      v24 = *(float *)&_XMM1 + atan2f_0((float)(v20 * v4->next->dir.v[0]) - (float)(*(float *)&v21 * v4->next->dir.v[1]), COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&v21 * v4->next->dir.v[0]) + (float)(v20 * v4->next->dir.v[1])) ^ _xmm));
      if ( *(float *)&_XMM8 > v24 )
      {
        *(float *)&_XMM8 = v24;
        v17 = v21 ^ (unsigned int)_xmm;
        LODWORD(v18) = LODWORD(v20) ^ _xmm;
      }
    }
    else
    {
      v25 = (unsigned __int8 *)&next->twin->0;
      if ( v25 )
      {
        v26 = (unsigned __int8 *)&next->next->0;
        if ( v26 == v25 )
        {
          for ( ; *v26 != i1; v26 = (unsigned __int8 *)*((_QWORD *)v26 + 3) )
            ;
          if ( v26 == (unsigned __int8 *)next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2685, ASSERT_TYPE_ASSERT, "(nextEdge != onEdge->next)", (const char *)&queryFormat, "nextEdge != onEdge->next") )
            __debugbreak();
          __asm
          {
            vcmpless xmm1, xmm12, xmm0
            vblendvps xmm1, xmm13, xmm12, xmm1
          }
          v30 = _XMM1;
          *(float *)&v30 = *(float *)&_XMM1 + atan2f_0((float)(*((float *)v26 + 2) * v4->dir.v[1]) - (float)(*((float *)v26 + 3) * v4->dir.v[0]), COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*((float *)v26 + 3) * v4->dir.v[1]) + (float)(*((float *)v26 + 2) * v4->dir.v[0])) ^ _xmm));
          _XMM0 = v30;
          __asm { vminss  xmm8, xmm0, xmm8 }
        }
      }
    }
    v31 = s_glassRandSeed + 1;
    s_glassRandSeed = v31;
    if ( v31 == 16361 )
    {
      s_glassRandSeed = 0;
      v31 = 0;
    }
    v32 = (int)(float)((float)((float)(fx_randomTable[v31] + 1.0) * 0.4774648) * *(float *)&_XMM8);
    if ( !v32 )
    {
      if ( *(float *)&_XMM8 <= 1.0461504 )
        return 0;
      v32 = 1;
    }
    v33 = (float)(v32 + 1);
    v34 = *(float *)&_XMM8 / v33;
  }
  else
  {
    v36 = s_glassRandSeed + 1;
    s_glassRandSeed = v36;
    if ( v36 == 16361 )
    {
      s_glassRandSeed = 0;
      v36 = 0;
    }
    v18 = outSeedDir.v[1];
    v17 = LODWORD(outSeedDir.v[0]);
    v32 = (int)(float)(fx_randomTable[v36] * 3.0) + 3;
    v37 = (float)v32;
    v34 = 6.2831855 / v37;
  }
  branchStackLevel = work->branchStackLevel;
  work->breakOrgLoop = v4;
  FastSinCos(v34, &s, &c);
  work->branchStackLevel += v32;
  v39 = work->branchStackLevel;
  v40 = c;
  v41 = (float)(c * 0.25) + 0.75;
  if ( v32 )
  {
    _XMM9 = LODWORD(FLOAT_0_5);
    _XMM12 = LODWORD(FLOAT_N1_0);
    v44 = (float)((float)((float)(c * 0.25) + 0.75) + 1.0) * 0.5;
    v45 = branchStackLevel;
    v46 = v32;
    while ( 1 )
    {
      v47 = v17;
      *(float *)&v47 = (float)(*(float *)&v17 * v40) - (float)(v18 * s);
      v48 = *(float *)&v47;
      v18 = (float)(*(float *)&v17 * s) + (float)(v18 * v40);
      outSeedDir.v[1] = v18;
      outSeedDir.v[0] = *(float *)&v47;
      v17 = v47;
      if ( v45 >= 0x20 )
      {
        LODWORD(v62) = 32;
        LODWORD(v61) = v45;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2722, ASSERT_TYPE_ASSERT, "(unsigned)( initialBranchStackLevel + angleIter ) < (unsigned)( ( sizeof( *array_counter( work->branchStack ) ) + 0 ) )", "initialBranchStackLevel + angleIter doesn't index ARRAY_COUNT( work->branchStack )\n\t%i not in [0, %i)", v61, v62) )
          __debugbreak();
      }
      v49 = 0;
      v50 = v45;
      work->branchStack[v50].afterEdge = NULL;
      work->branchStack[v50].startIndex = work->breakOrgIndex;
      if ( s_glassRandSeed != 16360 )
        v49 = s_glassRandSeed + 1;
      v51 = fx_randomTable[v49] + 3.5;
      s_glassRandSeed = v49 + 1;
      work->branchStack[v45].len = v51;
      if ( v49 == 16360 )
        s_glassRandSeed = 0;
      __asm
      {
        vcmpless xmm0, xmm9, dword ptr [r15+rax*4]
        vblendvps xmm2, xmm12, xmm14, xmm0; sign
      }
      Glass_DeflectVectorWithSign(v44, 1.0, *(float *)&_XMM2, &outSeedDir, &work->branchStack[v45].dir);
      work->branchStack[v45].baseDir.v[0] = v48;
      work->branchStack[v45++].baseDir.v[1] = v18;
      work->branchStack[v50].priorCrackLength = 0.0;
      work->branchStack[v50].deflectLimit = v41;
      if ( !--v46 )
        break;
      v40 = c;
    }
    v39 = work->branchStackLevel;
    v5 = 1;
  }
  for ( ; v39 > branchStackLevel; v39 = work->branchStackLevel )
  {
    v54 = v39 - 1;
    work->branchStackLevel = v54;
    if ( v54 >= 0x20 )
    {
      LODWORD(v62) = 32;
      LODWORD(v61) = v54;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1428, ASSERT_TYPE_ASSERT, "(unsigned)( work->branchStackLevel ) < (unsigned)( 32 )", "work->branchStackLevel doesn't index GLASS_CRACK_STACK_SIZE\n\t%i not in [0, %i)", v61, v62) )
        __debugbreak();
    }
    Glass_ProcessCrack(work, &work->branchStack[work->branchStackLevel]);
  }
  firstEdge = work->loops[0].firstEdge;
  v56 = firstEdge;
  while ( v56->twin )
  {
    v56 = v56->next;
    if ( v56 == firstEdge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1980, ASSERT_TYPE_ASSERT, "(edgeIter != edgeLoop)", (const char *)&queryFormat, "edgeIter != edgeLoop") )
      __debugbreak();
  }
  loopCount = work->loopCount;
  inLoops[0] = v56;
  if ( loopCount > 1 )
  {
    do
    {
      inLoops[v5] = NULL;
      v58 = work->loops[v5].firstEdge;
      v59 = v58;
      while ( v59->twin )
      {
        v60 = v59->next;
        if ( v60->i1 == v59->i0 )
        {
          inLoops[v5] = v59;
          v60 = v59->next;
        }
        v59 = v60;
        if ( v60 == v58 )
        {
          v59 = inLoops[v5];
          goto LABEL_59;
        }
      }
      inLoops[v5] = v59;
LABEL_59:
      if ( !v59 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2002, ASSERT_TYPE_ASSERT, "(loops[loopIter] != 0)", (const char *)&queryFormat, "loops[loopIter] != NULL") )
        __debugbreak();
      loopCount = work->loopCount;
      ++v5;
    }
    while ( v5 < loopCount );
  }
  if ( Glass_ConvertLoopsToPiece(work, inLoops, loopCount, &outShard) )
    Glass_FinalizeShard(work, &outShard);
  return 1;
}

/*
==============
Glass_CreatePhysics
==============
*/
void Glass_CreatePhysics(FxGlassSystem *glassSys, unsigned int pieceIndex, bool addImmediate, bool trySpawnDeactived)
{
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  FxGlassPieceState *pieceStates; 
  FxGlassPiecePlace *piecePlaces; 
  FxGlassPieceDynamics *pieceDynamics; 
  __int64 v15; 
  __int64 v17; 
  __int64 v18; 
  float v19; 
  unsigned __int16 v20; 
  unsigned __int8 v21; 
  int v22; 
  unsigned __int64 v23; 
  FxGlassGeometryData *v24; 
  signed __int64 v25; 
  __int64 v26; 
  float halfThickness; 
  __int128 v28; 
  __int128 v29; 
  unsigned __int64 v30; 
  __int64 v31; 
  float *v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  signed __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  unsigned __int64 v43; 
  FxGlassGeometryData *v44; 
  FxGlassGeometryData v45; 
  float v46; 
  float v47; 
  FxGlassGeometryData v48; 
  float v49; 
  float v50; 
  FxGlassGeometryData v51; 
  float v52; 
  __int128 v53; 
  __int128 v54; 
  __int128 v55; 
  __int128 v56; 
  FxGlassGeometryData v57; 
  float v58; 
  __int128 v59; 
  __int128 v60; 
  float v61; 
  float *v62; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  FxGlassGeometryData v66; 
  float v67; 
  float v68; 
  __int128 v69; 
  __int128 v70; 
  float v71; 
  hknpShape *ShapeConvexHull; 
  unsigned int v73; 
  bool v74; 
  FxGlassDef *v77; 
  int v78; 
  int ref; 
  FxGlassGeometryData *v80; 
  __int64 v81; 
  __int64 v82; 
  __int64 v83; 
  __int64 v84; 
  __int64 v85; 
  FxGlassPieceDynamics *v86; 
  FxGlassGeometryData *v87; 
  FxGlassPiecePlace *v88; 
  PhysicsAsset *physicsAsset; 
  Physics_InstantiateShapeOverride shapeOverride; 
  vec4_t orientationAsQuat; 
  vec3_t centerOfMass; 
  hkMassProperties massProperties; 
  vec3_t verts[64]; 
  __int128 v95; 
  __int128 v96; 
  __int128 v97; 
  __int128 v98; 
  __int128 v99; 
  _OWORD v100[2]; 

  pieceStates = glassSys->pieceStates;
  piecePlaces = glassSys->piecePlaces;
  v100[0] = v5;
  pieceDynamics = glassSys->pieceDynamics;
  v99 = v6;
  v98 = v7;
  v97 = v8;
  v15 = 32i64 * pieceIndex;
  v96 = v9;
  v88 = piecePlaces;
  v17 = *(&pieceStates->defIndex + v15);
  v18 = 5i64 * pieceIndex;
  *(_QWORD *)orientationAsQuat.v = *(_QWORD *)((char *)piecePlaces->frame.quat.v + v15);
  v19 = *(float *)((char *)&piecePlaces->frame.quat.v[2] + v15);
  v95 = v10;
  orientationAsQuat.v[2] = v19;
  orientationAsQuat.v[3] = *(float *)((char *)&piecePlaces->frame.quat.v[3] + v15);
  v84 = v15;
  v85 = v18;
  v86 = pieceDynamics;
  v77 = &fxWorld.glassGlob.defs[v17];
  if ( !pieceDynamics[pieceIndex].pendingCreation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 941, ASSERT_TYPE_ASSERT, "(pieceDynamics->pendingCreation)", (const char *)&queryFormat, "pieceDynamics->pendingCreation") )
    __debugbreak();
  if ( pieceIndex >= 0x400000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 944, ASSERT_TYPE_ASSERT, "(pieceIndex < g_PhysicsMaxNumSupportedParticles)", (const char *)&queryFormat, "pieceIndex < g_PhysicsMaxNumSupportedParticles") )
    __debugbreak();
  v20 = truncate_cast<unsigned short,unsigned int>((unsigned __int16)pieceIndex);
  v21 = truncate_cast<unsigned char,unsigned int>(HIWORD(pieceIndex));
  v22 = Physics_MakeRef(Physics_RefSystem_Particles, Physics_RelationshipSystem_None, v21 | 0x40, v20);
  v23 = pieceStates->pad[v15 + 1];
  ref = v22;
  physicsAsset = (PhysicsAsset *)v77->physicsAsset;
  v78 = v23;
  v24 = &glassSys->geoData[*(unsigned int *)((char *)&pieceStates->geoDataStart + v15)];
  v87 = v24;
  if ( (unsigned int)v23 < 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 952, ASSERT_TYPE_ASSERT, "(vertexCount >= 3)", (const char *)&queryFormat, "vertexCount >= 3") )
    __debugbreak();
  if ( (unsigned int)v23 > 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 953, ASSERT_TYPE_ASSERT, "(vertexCount <= 32)", (const char *)&queryFormat, "vertexCount <= GLASS_VERT_PER_BORDER_LIMIT") )
    __debugbreak();
  v25 = v23;
  v26 = 0i64;
  halfThickness = fxWorld.glassGlob.defs[*(&pieceStates->defIndex + v15)].halfThickness;
  v28 = 0i64;
  v29 = 0i64;
  if ( v23 >= 4 )
  {
    v100[1] = v4;
    v80 = v24 + 2;
    v30 = (v23 - 4) >> 2;
    v31 = 12 * v23;
    v32 = &verts[v23].v[2];
    v81 = 0x3FFFFFFFFFFFFFFDi64 * v23;
    v33 = -4i64 - 12 * v23;
    v34 = 8 - 12 * v23;
    v35 = 20 - 12 * v23;
    v36 = 32 - v31;
    v37 = -8 - v31;
    v38 = 12 - v31;
    v39 = 16 - v31;
    v82 = 3 * (2 - v25);
    v40 = 3 - v25;
    v41 = 28 - v31;
    v42 = 4 - v31;
    v43 = v30 + 1;
    v83 = 4 * v43;
    v44 = v80;
    do
    {
      v45 = v44[-2];
      *(float *)((char *)v32 + v37) = (float)v45.vert.x * 0.03125;
      v46 = (float)v45.vert.y * 0.03125;
      *(float *)((char *)v32 + v33) = v46;
      v47 = *(float *)((char *)v32 + v37);
      v32[v81] = halfThickness;
      *(v32 - 2) = *(float *)((char *)v32 + v37);
      *(v32 - 1) = *(float *)((char *)v32 + v33);
      *v32 = COERCE_FLOAT(LODWORD(v32[v81]) ^ _xmm);
      v48 = v44[-1];
      *(float *)((char *)v32 + v42) = (float)v48.vert.x * 0.03125;
      v49 = (float)v48.vert.y * 0.03125;
      *(float *)((char *)v32 + v34) = v49;
      v50 = *(float *)((char *)v32 + v42);
      *(float *)((char *)v32 + v38) = halfThickness;
      v32[1] = *(float *)((char *)v32 + v42);
      v32[2] = *(float *)((char *)v32 + v34);
      v32[3] = COERCE_FLOAT(*(_DWORD *)((char *)v32 + v38) ^ _xmm);
      v51 = *v44;
      *(float *)((char *)v32 + v39) = (float)v44->vert.x * 0.03125;
      v52 = (float)v51.vert.y * 0.03125;
      *(float *)((char *)v32 + v35) = v52;
      v53 = v28;
      *(float *)&v53 = (float)((float)(*(float *)&v28 + v47) + v50) + *(float *)((char *)v32 + v39);
      v54 = v53;
      v32[v82] = halfThickness;
      v32[4] = *(float *)((char *)v32 + v39);
      v32[5] = *(float *)((char *)v32 + v35);
      v55 = v29;
      *(float *)&v55 = (float)((float)(*(float *)&v29 + v46) + v49) + v52;
      v56 = v55;
      v32[6] = COERCE_FLOAT(LODWORD(v32[v82]) ^ _xmm);
      v57 = v44[1];
      *(float *)((char *)v32 + v41) = (float)v57.vert.x * 0.03125;
      v58 = (float)v57.vert.y * 0.03125;
      v44 += 4;
      *(float *)((char *)v32 + v36) = v58;
      v59 = v54;
      *(float *)&v59 = *(float *)&v54 + *(float *)((char *)v32 + v41);
      v28 = v59;
      v60 = v56;
      *(float *)&v60 = *(float *)&v56 + v58;
      v29 = v60;
      v32[3 * v40] = halfThickness;
      v32[7] = *(float *)((char *)v32 + v41);
      v32[8] = *(float *)((char *)v32 + v36);
      v61 = v32[3 * v40];
      v32 += 12;
      *(v32 - 3) = COERCE_FLOAT(LODWORD(v61) ^ _xmm);
      --v43;
    }
    while ( v43 );
    LODWORD(v23) = v78;
    v26 = v83;
    v15 = v84;
    v25 = v78;
    v18 = v85;
    pieceDynamics = v86;
    v24 = v87;
  }
  if ( v26 < v25 )
  {
    v62 = &verts[v26 + v25].v[2];
    v63 = -4 - 12 * v25;
    v64 = -3 * v25;
    v65 = -8 - 12 * v25;
    do
    {
      v66 = v24[v26];
      v62 += 3;
      ++v26;
      v67 = (float)v66.vert.x * 0.03125;
      *(float *)((char *)v62 + v65 - 12) = v67;
      v68 = (float)v66.vert.y * 0.03125;
      *(float *)((char *)v62 + v63 - 12) = v68;
      v62[v64 - 3] = halfThickness;
      *(v62 - 5) = *(float *)((char *)v62 + v65 - 12);
      *(v62 - 4) = *(float *)((char *)v62 + v63 - 12);
      v69 = v29;
      *(float *)&v69 = *(float *)&v29 + v68;
      v29 = v69;
      *(v62 - 3) = COERCE_FLOAT(LODWORD(v62[v64 - 3]) ^ _xmm);
      v70 = v28;
      *(float *)&v70 = *(float *)&v28 + v67;
      v28 = v70;
    }
    while ( v26 < v25 );
  }
  v71 = 1.0 / (float)(int)v23;
  centerOfMass.v[0] = *(float *)&v28 * v71;
  centerOfMass.v[1] = *(float *)&v29 * v71;
  centerOfMass.v[2] = 0.0;
  ShapeConvexHull = Physics_CreateShapeConvexHull(verts, 2 * (int)v23, 0, 0);
  shape = ShapeConvexHull;
  if ( !ShapeConvexHull )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 971, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
      __debugbreak();
    ShapeConvexHull = shape;
  }
  massProperties.m_volume = 0.0;
  massProperties.m_mass = 0.0;
  memset(&massProperties.m_centerOfMass, 0, 64);
  Physics_CalculateMassProperties(ShapeConvexHull, glass_piece_mass->current.value, &massProperties);
  Physics_SetMassPropertiesCenterOfMass(&massProperties, &centerOfMass);
  if ( *(&pieceDynamics->physicsInstance + 2 * v18) != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 977, ASSERT_TYPE_ASSERT, "(pieceDynamics->physicsInstance == 0xFFFFFFFF)", (const char *)&queryFormat, "pieceDynamics->physicsInstance == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( *(&pieceDynamics->physicsDetailInstance + 2 * v18) != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 978, ASSERT_TYPE_ASSERT, "(pieceDynamics->physicsDetailInstance == 0xFFFFFFFF)", (const char *)&queryFormat, "pieceDynamics->physicsDetailInstance == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  shapeOverride.customShape = shape;
  shapeOverride.massProperties = &massProperties;
  shapeOverride.physicsAssetAddendum = NULL;
  shapeOverride.shapeOverride = -1;
  shapeOverride.shapeAddendum = -1;
  *(_WORD *)&shapeOverride.overrideMass = 256;
  shapeOverride.overrideTensor = 1;
  *(&pieceDynamics->physicsInstance + 2 * v18) = Physics_InstantiateAsset(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, NULL, physicsAsset, ref, (const vec3_t *)((char *)&v88->frame.origin + v15), &orientationAsQuat, 1, addImmediate, trySpawnDeactived, &shapeOverride, Physics_InstantiationForceTypeNone, Physics_InstantiationFilterTypeNone, 0);
  v73 = Physics_InstantiateAsset(PHYSICS_WORLD_ID_CLIENT0_DETAIL, NULL, physicsAsset, ref, (const vec3_t *)((char *)&v88->frame.origin + v15), &orientationAsQuat, 1, addImmediate, trySpawnDeactived, &shapeOverride, Physics_InstantiationForceTypeKeyframedAtMost, Physics_InstantiationFilterTypeNone, 0);
  v74 = *(&pieceDynamics->physicsInstance + 2 * v18) == -1;
  *(&pieceDynamics->physicsDetailInstance + 2 * v18) = v73;
  if ( v74 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 986, ASSERT_TYPE_ASSERT, "(pieceDynamics->physicsInstance != 0xFFFFFFFF)", (const char *)&queryFormat, "pieceDynamics->physicsInstance != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( *(&pieceDynamics->physicsDetailInstance + 2 * v18) == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 987, ASSERT_TYPE_ASSERT, "(pieceDynamics->physicsDetailInstance != 0xFFFFFFFF)", (const char *)&queryFormat, "pieceDynamics->physicsDetailInstance != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  Physics_ReleaseShape(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, shape, 0);
  *(&pieceDynamics->pendingCreation + 8 * v18) = 0;
}

/*
==============
Glass_CreatePhysicsFromDeferredData
==============
*/
void Glass_CreatePhysicsFromDeferredData(ParticleDeferredPhysicsGlassCreateData *pDeferredPhysicsGlassCreateData, Physics_WorldId authWorldId)
{
  double FixedMemoryPoolUsage; 
  __int64 pieceIndex; 
  FxGlassSystem *glassSys; 
  FxGlassPieceDynamics *pieceDynamics; 
  unsigned int v8; 
  unsigned int physicsInstance; 
  unsigned int m_serialAndIndex; 
  __int64 v11; 
  unsigned int NumRigidBodys; 
  hknpBodyId result; 

  if ( !pDeferredPhysicsGlassCreateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1023, ASSERT_TYPE_ASSERT, "(pDeferredPhysicsGlassCreateData)", (const char *)&queryFormat, "pDeferredPhysicsGlassCreateData") )
    __debugbreak();
  FixedMemoryPoolUsage = Physics_GetFixedMemoryPoolUsage(authWorldId);
  if ( *(float *)&FixedMemoryPoolUsage <= glass_physics_memory_threshold->current.value )
  {
    pieceIndex = pDeferredPhysicsGlassCreateData->pieceIndex;
    glassSys = pDeferredPhysicsGlassCreateData->glassSys;
    pieceDynamics = pDeferredPhysicsGlassCreateData->glassSys->pieceDynamics;
    Glass_CreatePhysics(pDeferredPhysicsGlassCreateData->glassSys, pDeferredPhysicsGlassCreateData->pieceIndex, 0, 0);
    v8 = 0;
    NumRigidBodys = Physics_GetNumRigidBodys(authWorldId, pieceDynamics[pieceIndex].physicsInstance);
    if ( NumRigidBodys )
    {
      do
      {
        physicsInstance = pieceDynamics[pieceIndex].physicsInstance;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)authWorldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
        {
          LODWORD(v11) = authWorldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v11) )
            __debugbreak();
        }
        if ( physicsInstance == -1 )
        {
          LODWORD(v11) = authWorldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v11) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(authWorldId - 2) <= 5 )
        {
          LODWORD(v11) = authWorldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v11) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)authWorldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
        {
          LODWORD(v11) = authWorldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v11) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, authWorldId, physicsInstance, v8)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1043, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        Physics_SetRigidBodyLinAngVel(authWorldId, m_serialAndIndex, &pDeferredPhysicsGlassCreateData->vel, &pDeferredPhysicsGlassCreateData->avel);
        ++v8;
      }
      while ( v8 < NumRigidBodys );
    }
    if ( pDeferredPhysicsGlassCreateData->createJoint )
    {
      if ( pieceDynamics[pieceIndex].fallTime == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1050, ASSERT_TYPE_ASSERT, "(pieceDynamics->fallTime != 2147483647)", (const char *)&queryFormat, "pieceDynamics->fallTime != INT_MAX") )
        __debugbreak();
      Glass_CreatePieceJoint(glassSys, pieceIndex);
    }
  }
}

/*
==============
Glass_CreatePieceJoint
==============
*/
void Glass_CreatePieceJoint(FxGlassSystem *glassSys, unsigned int pieceIndex)
{
  FxGlassPieceState *pieceStates; 
  unsigned __int64 v4; 
  FxGlassPiecePlace *v5; 
  FxGlassGeometryData *geoData; 
  int v7; 
  unsigned int supportMask; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  FxGlassGeometryData *v14; 
  unsigned int v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  unsigned int v22; 
  unsigned int v23; 
  __int64 v24; 
  bool v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  __int128 v31; 
  float v35; 
  __int64 friction; 
  __int64 angleMin; 
  FxGlassGeometryData *v38; 
  __int64 v39; 
  FxGlassPieceDynamics *pieceDynamics; 
  vec3_t direction; 
  tmat33_t<vec3_t> axis; 
  vec3_t position; 
  vec3_t v44; 

  pieceStates = glassSys->pieceStates;
  v4 = pieceIndex;
  v5 = &glassSys->piecePlaces[v4];
  pieceDynamics = glassSys->pieceDynamics;
  v39 = pieceIndex;
  if ( pieceDynamics[pieceIndex].physicsDetailInstance == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 862, ASSERT_TYPE_ASSERT, "(pieceDynamics->physicsDetailInstance != 0xFFFFFFFF)", (const char *)&queryFormat, "pieceDynamics->physicsDetailInstance != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  UnitQuatToAxis(&v5->frame.quat, &axis);
  geoData = glassSys->geoData;
  v7 = 0;
  supportMask = pieceStates[v4].supportMask;
  v9 = axis.m[1].v[2];
  v10 = axis.m[1].v[1];
  v11 = axis.m[1].v[0];
  v12 = axis.m[0].v[2];
  v13 = axis.m[0].v[1];
  v14 = &geoData[pieceStates[v4].geoDataStart];
  v38 = v14;
  do
  {
    v15 = __lzcnt(supportMask);
    if ( v15 >= 0x20 )
    {
      LODWORD(angleMin) = 32;
      LODWORD(friction) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", friction, angleMin) )
        __debugbreak();
    }
    v16 = axis.m[0].v[0];
    supportMask &= ~(0x80000000 >> v15);
    v17 = _mm_cvtepi32_ps((__m128i)(unsigned int)(__int16)HIWORD(*(_DWORD *)&v14[v15])).m128_f32[0] * 0.03125;
    v18 = _mm_cvtepi32_ps((__m128i)(unsigned int)(__int16)*(_DWORD *)&v14[v15]).m128_f32[0] * 0.03125;
    v19 = (float)((float)(axis.m[0].v[0] * v18) + v5->frame.origin.v[0]) + (float)(v11 * v17);
    v20 = (float)((float)(v13 * v18) + v5->frame.origin.v[1]) + (float)(v10 * v17);
    v21 = (float)((float)(v12 * v18) + v5->frame.origin.v[2]) + (float)(v9 * v17);
    if ( v7 )
    {
      if ( v21 >= position.v[2] )
      {
        if ( v7 != 1 && v21 >= position.v[2] )
          goto LABEL_16;
        v44.v[0] = (float)((float)(axis.m[0].v[0] * v18) + v5->frame.origin.v[0]) + (float)(v11 * v17);
        v44.v[1] = v20;
        v44.v[2] = v21;
      }
      else
      {
        v44 = position;
        position.v[0] = v19;
        position.v[1] = v20;
        position.v[2] = v21;
      }
      v7 = 2;
LABEL_16:
      v16 = axis.m[0].v[0];
      goto LABEL_17;
    }
    position.v[0] = (float)((float)(axis.m[0].v[0] * v18) + v5->frame.origin.v[0]) + (float)(v11 * v17);
    position.v[1] = v20;
    position.v[2] = v21;
    v7 = 1;
LABEL_17:
    v22 = pieceStates[v4].supportMask;
    v23 = (v15 + 1) % pieceStates[v4].vertCount;
    v24 = v23;
    if ( v23 >= 0x20 )
    {
      LODWORD(angleMin) = 32;
      LODWORD(friction) = v23;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", friction, angleMin) )
        __debugbreak();
    }
    v25 = ((0x80000000 >> v24) & v22) == 0;
    v14 = v38;
    if ( v25 )
    {
      v26 = _mm_cvtepi32_ps((__m128i)(unsigned int)(__int16)HIWORD(*(_DWORD *)&v38[v24])).m128_f32[0] * 0.03125;
      v27 = _mm_cvtepi32_ps((__m128i)(unsigned int)(__int16)*(_DWORD *)&v38[v24]).m128_f32[0] * 0.03125;
      v28 = (float)((float)(v16 * v27) + v5->frame.origin.v[0]) + (float)(v11 * v26);
      v29 = (float)((float)(v13 * v27) + v5->frame.origin.v[1]) + (float)(v10 * v26);
      v30 = (float)((float)(v12 * v27) + v5->frame.origin.v[2]) + (float)(v9 * v26);
      if ( v30 < position.v[2] )
      {
        v44 = position;
        position.v[0] = v28;
        position.v[1] = v29;
        position.v[2] = v30;
LABEL_26:
        v7 = 2;
        continue;
      }
      if ( v7 == 1 || v30 < position.v[2] )
      {
        v44.v[0] = (float)((float)(v16 * v27) + v5->frame.origin.v[0]) + (float)(v11 * v26);
        v44.v[1] = v29;
        v44.v[2] = v30;
        goto LABEL_26;
      }
    }
  }
  while ( supportMask );
  if ( v7 != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 882, ASSERT_TYPE_ASSERT, "(hingeVertCount == 2)", (const char *)&queryFormat, "hingeVertCount == 2") )
    __debugbreak();
  v31 = LODWORD(v44.v[1]);
  *(float *)&v31 = fsqrt((float)((float)((float)(v44.v[1] - position.v[1]) * (float)(v44.v[1] - position.v[1])) + (float)((float)(v44.v[0] - position.v[0]) * (float)(v44.v[0] - position.v[0]))) + (float)((float)(v44.v[2] - position.v[2]) * (float)(v44.v[2] - position.v[2])));
  _XMM10 = v31;
  __asm
  {
    vcmpless xmm0, xmm10, cs:__real@80000000
    vblendvps xmm0, xmm10, xmm1, xmm0
  }
  direction.v[1] = (float)(v44.v[1] - position.v[1]) * (float)(1.0 / *(float *)&_XMM0);
  direction.v[0] = (float)(v44.v[0] - position.v[0]) * (float)(1.0 / *(float *)&_XMM0);
  direction.v[2] = (float)(v44.v[2] - position.v[2]) * (float)(1.0 / *(float *)&_XMM0);
  v35 = (float)((float)((float)(v5->frame.origin.v[1] - position.v[1]) * direction.v[1]) + (float)((float)(v5->frame.origin.v[0] - position.v[0]) * direction.v[0])) + (float)((float)(v5->frame.origin.v[2] - position.v[2]) * direction.v[2]);
  if ( v35 >= 0.0 && v35 <= *(float *)&_XMM10 && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v44.v[2] - position.v[2]) * (float)(1.0 / *(float *)&_XMM0)) & _xmm) < 0.5 )
    Physics_InstantiateHingeConstraint(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, pieceDynamics[v39].physicsInstance, 0, &position, &direction, glass_hinge_friction->current.value, -0.78539819, 0.78539819, 3.4028235e38, NULL);
  pieceStates[v4].supportMask = 0;
}

/*
==============
Glass_DeflectVectorWithSign
==============
*/
void Glass_DeflectVectorWithSign(float cosMin, float cosMax, float sign, const vec2_t *inDir, vec2_t *outDir)
{
  int v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 

  if ( cosMin >= cosMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1465, ASSERT_TYPE_ASSERT, "( cosMin ) < ( cosMax )", "%s < %s\n\t%g, %g", "cosMin", "cosMax", cosMin, cosMax) )
    __debugbreak();
  v6 = s_glassRandSeed + 1;
  s_glassRandSeed = v6;
  if ( v6 == 16361 )
  {
    v6 = 0;
    s_glassRandSeed = 0;
  }
  v7 = inDir->v[1];
  v8 = (float)((float)(fx_randomTable[v6] * fx_randomTable[v6]) * (float)(cosMin - cosMax)) + cosMax;
  v9 = fsqrt(1.0 - (float)(v8 * v8)) * sign;
  v10 = (float)(v8 * v7) + (float)(v9 * inDir->v[0]);
  outDir->v[0] = (float)(v8 * inDir->v[0]) - (float)(v9 * v7);
  outDir->v[1] = v10;
}

/*
==============
Glass_DestroyPiece
==============
*/
void Glass_DestroyPiece(FxGlassSystem *glassSys, unsigned int pieceIndex, const vec3_t *impactPos, const vec3_t *impactDir, Glass_BreakData *breakData)
{
  signed __int64 v5; 
  void *v6; 
  Glass_BreakData *v7; 
  const vec3_t *v10; 
  FxGlassPieceState *pieceStates; 
  unsigned __int64 v12; 
  const vec4_t *v13; 
  unsigned __int16 flags; 
  LocalClientNum_t v15; 
  connstate_t *p_connectionState; 
  float areaX2; 
  __int16 v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  unsigned int pieceStackLevel; 
  unsigned __int16 v25; 
  char v26; 
  __int128 totalAreaX2_low; 
  __int128 v28; 
  float v31; 
  __int64 v32; 
  __int64 v33; 
  int v34; 
  unsigned int v35; 
  FxGlassDef *v36; 
  unsigned int v37; 
  __int64 v38; 
  unsigned int v39; 
  FxGlassPieceState *v40; 
  float fringeAreaX2; 
  unsigned int v42; 
  __int64 v43; 
  __int64 v44; 
  FxGlassPieceState *v45; 
  FxGlassGeometryData *geoData; 
  __int64 geoDataStart; 
  int v48; 
  FxGlassVertex v49; 
  FxGlassPieceState *v50; 
  FxGlassGeometryData *v51; 
  bool *p_valid; 
  int v53; 
  const FxGlassGeometryData *v54; 
  __int64 v55; 
  int v56; 
  vec3_t *breakDir; 
  __int64 avgCrackLength; 
  char v59; 
  FxGlassVertex v60; 
  int quantizedPos[2]; 
  unsigned int v62; 
  int point[2]; 
  const vec3_t *v64; 
  FxGlassDef *v65; 
  vec3_t *impactDira; 
  FxGlassCrackWork work; 
  tmat33_t<vec3_t> axis; 
  FxGlassInitialCrackVert outputVerts[32]; 

  v6 = alloca(v5);
  v7 = breakData;
  *(_QWORD *)quantizedPos = breakData;
  impactDira = (vec3_t *)impactDir;
  v10 = impactPos;
  v64 = impactPos;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "Glass_DestroyPiece");
  pieceStates = glassSys->pieceStates;
  v12 = pieceIndex;
  *(_QWORD *)point = &glassSys->piecePlaces[v12];
  v13 = *(const vec4_t **)point;
  UnitQuatToAxis(*(const vec4_t **)point, &axis);
  v65 = &fxWorld.glassGlob.defs[pieceStates[v12].defIndex];
  Glass_ReprojectCrackDecals(glassSys, pieceIndex, impactDira, &axis);
  flags = pieceStates[v12].flags;
  if ( (flags & 2) == 0 )
  {
    v15 = LOCAL_CLIENT_0;
    if ( SLODWORD(cl_maxLocalClients) > 0 )
    {
      p_connectionState = &clientUIActives[0].connectionState;
      do
      {
        if ( (unsigned int)v15 >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(avgCrackLength) = 2;
          LODWORD(breakDir) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", breakDir, avgCrackLength) )
            __debugbreak();
        }
        if ( *p_connectionState == CA_ACTIVE )
          FX_MarkGlassDetachAll(v15, pieceIndex);
        ++v15;
        p_connectionState += 110;
      }
      while ( v15 < SLODWORD(cl_maxLocalClients) );
      flags = pieceStates[v12].flags;
      v13 = *(const vec4_t **)point;
      v10 = v64;
    }
    v7 = *(Glass_BreakData **)quantizedPos;
  }
  pieceStates[v12].flags = flags | 2;
  work.pieceStackLevel = 0;
  work.fringePieceCount = 0;
  work.fringeAreaX2 = 0.0;
  areaX2 = pieceStates[v12].areaX2;
  Glass_GetVertexForPos(glassSys, pieceIndex, v10, &axis, quantizedPos);
  v60.x = truncate_cast<short,int>(quantizedPos[0]);
  v18 = truncate_cast<short,int>(quantizedPos[1]);
  v19 = v10->v[1];
  work.impactPos.v[0] = v10->v[0];
  v20 = v10->v[2];
  work.impactPos.v[1] = v19;
  v21 = v7->playerOrigin.v[0];
  work.impactPos.v[2] = v20;
  v22 = v7->playerOrigin.v[1];
  work.playerOrigin.v[0] = v21;
  v23 = v7->playerOrigin.v[2];
  work.playerOrigin.v[1] = v22;
  work.playerOrigin.v[2] = v23;
  v60.y = v18;
  pieceStackLevel = work.pieceStackLevel;
  work.originalRadius = v13[1].v[3];
  if ( pieceStates[v12].vertCount )
    pieceStackLevel = 1;
  work.pieceStackLevel = pieceStackLevel;
  v25 = truncate_cast<unsigned short,unsigned int>(pieceIndex);
  v26 = 1;
  totalAreaX2_low = LODWORD(v7->totalAreaX2);
  work.pieceStack[0] = v25;
  v59 = 1;
  work.maxEdgePieceArea = glass_fringe_maxsize->current.value * 2.0;
  v28 = totalAreaX2_low;
  *(float *)&v28 = (float)(*(float *)&totalAreaX2_low / (float)glass_max_pieces_per_frame->current.integer) * 1.5;
  _XMM3 = v28;
  __asm { vmaxss  xmm0, xmm3, xmm2 }
  v31 = impactDira->v[1];
  *(float *)&_XMM3 = impactDira->v[2];
  work.maxPieceArea = *(float *)&_XMM0;
  if ( (float)((float)((float)(impactDira->v[0] * impactDira->v[0]) + (float)(v31 * v31)) + (float)(*(float *)&_XMM3 * *(float *)&_XMM3)) > 0.0 )
    Glass_PlayShatterEffects(glassSys, pieceIndex, &axis, impactDira, (float)(pieceStates[v12].areaX2 / *(float *)&totalAreaX2_low) * (float)glass_max_shatter_fx_per_frame->current.integer);
  LODWORD(v32) = work.pieceStackLevel;
  v33 = 0i64;
  v34 = -1;
  v35 = 0;
  LODWORD(v64) = -1;
  if ( work.pieceStackLevel )
  {
    v36 = v65;
    while ( 1 )
    {
      v32 = (unsigned int)(v32 - 1);
      work.pieceStackLevel = v32;
      v37 = work.pieceStack[v32];
      v38 = work.pieceStack[v32];
      if ( v37 != v34 )
        break;
      v62 = ++v35;
      if ( v35 <= 0xA || v35 <= 2 * (unsigned int)glassSys->pieceStates[v37].vertCount )
        goto LABEL_30;
LABEL_21:
      v34 = (int)v64;
LABEL_22:
      v26 = v59;
      v33 = 0i64;
      if ( !(_DWORD)v32 )
        goto LABEL_23;
    }
    v62 = 0;
LABEL_30:
    v44 = v38;
    if ( v26 )
    {
      v45 = &glassSys->pieceStates[v44];
      point[0] = v60.x;
      geoData = glassSys->geoData;
      point[1] = v60.y;
      v59 = 0;
      if ( Glass_DoesPieceContainPoint(v45, &geoData[v45->geoDataStart], point) )
      {
        v60.x = truncate_cast<short,int>(point[0]);
        v60.y = truncate_cast<short,int>(point[1]);
        v49 = v60;
      }
      else
      {
        geoDataStart = v45->geoDataStart;
        v48 = s_glassRandSeed + 1;
        s_glassRandSeed = v48;
        if ( v48 == 16361 )
        {
          s_glassRandSeed = 0;
          v48 = 0;
        }
        v49 = (FxGlassVertex)geoData[geoDataStart + (unsigned int)(int)(float)((float)v45->vertCount * fx_randomTable[v48])];
        v60 = v49;
      }
      if ( v36->numCrackRings >= 0 )
        Glass_GetVertexPatternForCracks(glassSys, v37, v49, &axis, outputVerts);
    }
    else
    {
      v50 = &glassSys->pieceStates[v44];
      v51 = glassSys->geoData;
      if ( v65->numCrackRings < 0 )
      {
        v55 = v50->geoDataStart;
        v56 = s_glassRandSeed + 1;
        s_glassRandSeed = v56;
        if ( v56 == 16361 )
        {
          s_glassRandSeed = 0;
          v56 = 0;
        }
        v49 = (FxGlassVertex)v51[v55 + (unsigned int)(int)(float)((float)v50->vertCount * fx_randomTable[v56])];
        v60 = v49;
      }
      else
      {
        p_valid = &outputVerts[0].valid;
        v53 = 0;
        v54 = &v51[v50->geoDataStart];
        while ( 1 )
        {
          Glass_GetVertexForPos(glassSys, v37, &outputVerts[v53].pos, &axis, quantizedPos);
          if ( *p_valid && Glass_DoesPieceContainPoint(v50, v54, quantizedPos) )
            break;
          ++v53;
          ++v33;
          p_valid += 16;
          if ( v53 >= 32 )
          {
            LODWORD(v32) = work.pieceStackLevel;
            v35 = v62;
            v36 = v65;
            goto LABEL_21;
          }
        }
        v60.x = quantizedPos[0];
        v60.y = quantizedPos[1];
        v49 = v60;
        outputVerts[v33].valid = 0;
      }
      v36 = v65;
    }
    Glass_CrackPiece(&work, glassSys, v37, &axis, v49, impactDira, 8.0);
    LODWORD(v32) = work.pieceStackLevel;
    v35 = v62;
    v34 = v37;
    LODWORD(v64) = v37;
    goto LABEL_22;
  }
LABEL_23:
  if ( work.fringeAreaX2 > (float)(areaX2 * glass_fringe_maxcoverage->current.value) )
  {
    s_fringePieceSortWork = &work;
    std::_Sort_unchecked<unsigned short *,bool (*)(unsigned short const &,unsigned short const &)>(work.fringePieces, &work.fringePieces[work.fringePieceCount], work.fringePieceCount, CompareFringePieceArea);
    v39 = 0;
    if ( work.fringePieceCount )
    {
      v40 = glassSys->pieceStates;
      fringeAreaX2 = work.fringeAreaX2;
      do
      {
        v42 = work.fringePieces[v39];
        v43 = work.fringePieces[v39];
        work.fringeAreaX2 = fringeAreaX2 - v40[v43].areaX2;
        v40[v43].supportMask = 0;
        Glass_StartImmediateFall(&work, v42, v42);
        fringeAreaX2 = work.fringeAreaX2;
        if ( work.fringeAreaX2 <= (float)(areaX2 * glass_fringe_maxcoverage->current.value) )
          break;
        ++v39;
      }
      while ( v39 < work.fringePieceCount );
    }
  }
  Glass_CompactData(glassSys);
  Sys_ProfEndNamedEvent();
}

/*
==============
Glass_DestroySimplePiece
==============
*/
void Glass_DestroySimplePiece(FxGlassSystem *glassSys, unsigned int pieceIndex, const vec3_t *impactPos, const vec3_t *impactDir, const vec3_t *playerOrigin)
{
  signed __int64 v5; 
  void *v6; 
  __int64 v9; 
  const vec4_t *v12; 
  LocalClientNum_t v13; 
  connstate_t *p_connectionState; 
  float v15; 
  __int16 v16; 
  __int16 v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  int v23; 
  FxGlassPieceState *pieceStates; 
  const FxGlassPieceState *v25; 
  int v26; 
  FxGlassGeometryData *geoData; 
  __int64 geoDataStart; 
  int v29; 
  FxGlassVertex v30; 
  FxGlassPieceState *v31; 
  __int64 v32; 
  bool v33; 
  FxCombinedDef *p_crackDecalEffect; 
  const vec3_t *v35; 
  vec3_t *breakDir; 
  __int64 avgCrackLength; 
  int quantizedPos[2]; 
  const vec4_t *v39; 
  tmat33_t<vec3_t> axis; 
  FxGlassCrackWork work; 

  v6 = alloca(v5);
  v9 = 32i64 * pieceIndex;
  v12 = (vec4_t *)((char *)&glassSys->piecePlaces->frame.quat + v9);
  *(_QWORD *)quantizedPos = v9;
  v39 = v12;
  UnitQuatToAxis(v12, &axis);
  v13 = LOCAL_CLIENT_0;
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    p_connectionState = &clientUIActives[0].connectionState;
    do
    {
      if ( (unsigned int)v13 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(avgCrackLength) = 2;
        LODWORD(breakDir) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", breakDir, avgCrackLength) )
          __debugbreak();
      }
      if ( *p_connectionState == CA_ACTIVE )
        FX_MarkGlassDetachAll(v13, pieceIndex);
      ++v13;
      p_connectionState += 110;
    }
    while ( v13 < SLODWORD(cl_maxLocalClients) );
    v9 = *(_QWORD *)quantizedPos;
  }
  v15 = impactPos->v[1];
  work.impactPos.v[0] = impactPos->v[0];
  work.impactPos.v[2] = impactPos->v[2];
  work.impactPos.v[1] = v15;
  Glass_GetVertexForPos(glassSys, pieceIndex, impactPos, &axis, quantizedPos);
  v16 = truncate_cast<short,int>(quantizedPos[0]);
  v17 = truncate_cast<short,int>(quantizedPos[1]);
  v18 = impactDir->v[1];
  v19 = impactDir->v[2];
  work.originalRadius = v39[1].v[3];
  work.playerOrigin.v[0] = playerOrigin->v[0];
  v20 = playerOrigin->v[2];
  work.maxPieceArea = FLOAT_3_4028235e38;
  work.maxEdgePieceArea = FLOAT_3_4028235e38;
  v21 = playerOrigin->v[1];
  work.playerOrigin.v[2] = v20;
  v22 = impactDir->v[0];
  work.playerOrigin.v[1] = v21;
  work.pieceStackLevel = 0;
  if ( (float)((float)((float)(v22 * v22) + (float)(v18 * v18)) + (float)(v19 * v19)) > 0.0 )
    Glass_PlayShatterEffects(glassSys, pieceIndex, &axis, impactDir, 1.0);
  v23 = v16;
  pieceStates = glassSys->pieceStates;
  quantizedPos[0] = v23;
  v25 = (FxGlassPieceState *)((char *)pieceStates + v9);
  v26 = v17;
  geoData = glassSys->geoData;
  quantizedPos[1] = v26;
  if ( Glass_DoesPieceContainPoint(v25, &geoData[v25->geoDataStart], quantizedPos) )
  {
    LOWORD(v39) = truncate_cast<short,int>(quantizedPos[0]);
    WORD1(v39) = truncate_cast<short,int>(quantizedPos[1]);
    v30 = (FxGlassVertex)v39;
  }
  else
  {
    geoDataStart = v25->geoDataStart;
    v29 = s_glassRandSeed + 1;
    s_glassRandSeed = v29;
    if ( v29 == 16361 )
    {
      s_glassRandSeed = 0;
      v29 = 0;
    }
    v30 = (FxGlassVertex)geoData[geoDataStart + (unsigned int)(int)(float)((float)v25->vertCount * fx_randomTable[v29])];
  }
  Glass_CrackPiece(&work, glassSys, pieceIndex, &axis, v30, impactDir, 8.0);
  Glass_CompactData(glassSys);
  v31 = glassSys->pieceStates;
  if ( (*((_BYTE *)&v31->flags + v9) & 0x48) == 0 )
  {
    v32 = *(&v31->defIndex + v9);
    v33 = fxWorld.glassGlob.defs[v32].crackDecalEffect.particleSystemDef == NULL;
    p_crackDecalEffect = &fxWorld.glassGlob.defs[v32].crackDecalEffect;
    if ( !v33 )
    {
      if ( impactDir->v[0] != 0.0 || impactDir->v[1] != 0.0 || (v35 = &axis.m[2], impactDir->v[2] != 0.0) )
        v35 = impactDir;
      Glass_PlayEffectWithMark(p_crackDecalEffect, impactPos, v35);
    }
  }
}

/*
==============
Glass_DoCrackWalk
==============
*/
char Glass_DoCrackWalk(FxGlassCrackWork *work, FxGlassCrackWalk *walk)
{
  char v4; 
  __int64 startIndex; 
  unsigned int v8; 
  float len; 
  float v10; 
  unsigned int v11; 
  FxGlassCrackEdge *hitEdge; 
  unsigned __int64 nextFree; 
  __int64 v14; 
  float v15; 
  float v16; 
  FxGlassVertex v25; 
  FxGlassCrackEdge *v26; 
  FxGlassCrackEdge *FreeEdge; 
  FxGlassCrackEdge *v28; 
  float v29; 
  FxGlassCrackEdge *v30; 
  float v31; 
  int v32; 
  int v33; 
  int v34; 
  float v35; 
  FxGlassCrackEdge *frontTail; 
  float totalCrackLength; 
  __int64 branchStackLevel; 
  float v39; 
  float v40; 
  __int64 v41; 
  int v42; 
  int v43; 
  __int64 v44; 
  int v45; 
  FxGlassCrackEdge *v49; 
  FxGlassCrackEdge *hitEdgePrev; 
  FxGlassCrackEdge *v51; 
  __int64 v52; 
  __int64 v53; 
  vec2_t maxs; 
  vec2_t mins; 
  vec2_t v; 
  vec2_t outDir; 

  _XMM9 = LODWORD(FLOAT_0_5);
  v4 = 0;
  walk->frontHead = NULL;
  walk->backHead = NULL;
  walk->frontTail = NULL;
  walk->backTail = NULL;
  walk->clip.hitEdge = NULL;
  walk->clip.hitAtVertex = 0;
LABEL_2:
  _XMM7 = LODWORD(FLOAT_N1_0);
  while ( 1 )
  {
    startIndex = walk->clip.startIndex;
    walk->clip.len = walk->clip.len + 4.0;
    v8 = 0;
    walk->clip.isBad = 0;
    while ( 1 )
    {
      walk->clip.wasDeflected = 0;
      Glass_ClipSegmentWithinEdgeLoop(work, &walk->clip, work->loops[0].firstEdge);
      if ( work->loopCount > 1 )
      {
        len = walk->clip.len;
        v10 = len * walk->clip.dir.v[1];
        v.v[0] = (float)(len * walk->clip.dir.v[0]) + work->pts[startIndex].xy.v[0];
        v.v[1] = v10 + work->pts[startIndex].xy.v[1];
        mins = work->pts[startIndex].xy;
        maxs = work->pts[startIndex].xy;
        AddPointToBounds2D(&v, &mins, &maxs);
        v11 = 1;
        do
        {
          if ( BoundsOverlap2D(&mins, &maxs, &work->loops[v11].mins, &work->loops[v11].maxs) )
            Glass_ClipSegmentWithinEdgeLoop(work, &walk->clip, work->loops[v11].firstEdge);
          ++v11;
        }
        while ( v11 < work->loopCount );
      }
      if ( !walk->clip.wasDeflected )
        break;
      if ( !walk->clip.hitAtVertex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1793, ASSERT_TYPE_ASSERT, "(clip->hitAtVertex)", (const char *)&queryFormat, "clip->hitAtVertex") )
        __debugbreak();
      ++v8;
      walk->clip.dir.v[0] = walk->clip.deflectDir.v[0];
      walk->clip.dir.v[1] = walk->clip.deflectDir.v[1];
      walk->clip.len = walk->clip.deflectLen + 0.0099999998;
      if ( v8 > work->ptCount )
      {
        walk->clip.isBad = 1;
        goto LABEL_17;
      }
    }
    if ( !walk->clip.hitEdge )
      walk->clip.len = walk->clip.len - 4.0;
LABEL_17:
    if ( walk->clip.isBad )
      return 0;
    hitEdge = walk->clip.hitEdge;
    if ( hitEdge )
    {
      if ( hitEdge->loopIndex == walk->loopIndex && work->loopCount >= 0x20 )
        return 0;
    }
    if ( walk->clip.hitAtVertex )
    {
      if ( !hitEdge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1878, ASSERT_TYPE_ASSERT, "(walk->clip.hitEdge)", (const char *)&queryFormat, "walk->clip.hitEdge") )
        __debugbreak();
      nextFree = (unsigned __int64)walk->clip.hitEdge->nextFree;
    }
    else
    {
      if ( work->ptCount >= 0xFF )
      {
        LODWORD(v53) = 255;
        LODWORD(v52) = work->ptCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1883, ASSERT_TYPE_ASSERT, "(unsigned)( work->ptCount ) < (unsigned)( ( sizeof( *array_counter( work->pts ) ) + 0 ) )", "work->ptCount doesn't index ARRAY_COUNT( work->pts )\n\t%i not in [0, %i)", v52, v53) )
          __debugbreak();
      }
      v14 = walk->clip.startIndex;
      v15 = walk->clip.len;
      nextFree = work->ptCount;
      work->pts[nextFree].xy.v[0] = (float)(v15 * walk->clip.dir.v[0]) + work->pts[v14].xy.v[0];
      v16 = (float)(v15 * walk->clip.dir.v[1]) + work->pts[v14].xy.v[1];
      _XMM2 = 0i64;
      __asm { vroundss xmm2, xmm2, xmm1, 1 }
      work->pts[nextFree].xy.v[1] = v16;
      if ( (int)abs32((int)*(float *)&_XMM2) > 0x7FFF )
        goto LABEL_67;
      _XMM2 = 0i64;
      __asm { vroundss xmm2, xmm2, xmm1, 1 }
      if ( (int)abs32((int)*(float *)&_XMM2) > 0x7FFF )
      {
LABEL_67:
        Com_PrintWarning(1, "Glass_DoCrackWalk: Failed to pack glass vertex, bailing out.\n");
        return 0;
      }
      ++work->ptCount;
      _XMM0 = 0i64;
      __asm { vroundss xmm0, xmm0, xmm2, 1 }
      work->packedPts[nextFree].x = truncate_cast<short,int>((int)*(float *)&_XMM0);
      _XMM0 = 0i64;
      __asm { vroundss xmm0, xmm0, xmm2, 1 }
      work->packedPts[nextFree].y = truncate_cast<short,int>((int)*(float *)&_XMM0);
      v25 = work->packedPts[nextFree];
      work->pts[nextFree].xy.v[0] = (float)v25.x * 0.03125;
      work->pts[nextFree].xy.v[1] = (float)v25.y * 0.03125;
    }
    AddPointToBounds2D(&work->pts[nextFree].xy, &work->loops[walk->loopIndex].mins, &work->loops[walk->loopIndex].maxs);
    v26 = Glass_AllocCrackEdge(work, walk->clip.startIndex, nextFree, walk->loopIndex, 1u);
    FreeEdge = Glass_GetFreeEdge(work);
    v28 = FreeEdge;
    FreeEdge->i0 = v26->i1;
    FreeEdge->i1 = v26->i0;
    FreeEdge->loopIndex = v26->loopIndex;
    FreeEdge->type = v26->type;
    FreeEdge->twin = v26;
    v29 = v26->len;
    v26->twin = FreeEdge;
    FreeEdge->len = v29;
    FreeEdge->dir.v[0] = COERCE_FLOAT(LODWORD(v26->dir.v[0]) ^ _xmm);
    FreeEdge->dir.v[1] = COERCE_FLOAT(LODWORD(v26->dir.v[1]) ^ _xmm);
    if ( walk->frontHead )
    {
      if ( walk->frontTail->i1 != v26->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1901, ASSERT_TYPE_ASSERT, "(walk->frontTail->i1 == newFrontEdge->i0)", (const char *)&queryFormat, "walk->frontTail->i1 == newFrontEdge->i0") )
        __debugbreak();
      if ( v28->i1 != walk->backHead->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1902, ASSERT_TYPE_ASSERT, "(newBackEdge->i1 == walk->backHead->i0)", (const char *)&queryFormat, "newBackEdge->i1 == walk->backHead->i0") )
        __debugbreak();
      walk->frontTail->next = v26;
      v28->next = walk->backHead;
    }
    else
    {
      walk->frontHead = v26;
      walk->backTail = FreeEdge;
    }
    v30 = walk->clip.hitEdge;
    walk->frontTail = v26;
    walk->backHead = v28;
    if ( v30 )
      break;
    v31 = walk->clip.len;
    v32 = s_glassRandSeed;
    ++v4;
    walk->totalCrackLength = v31 + walk->totalCrackLength;
    if ( work->branchStackLevel != 32 )
    {
      v33 = ++v32;
      if ( v32 == 16361 )
      {
        v32 = 0;
        v33 = 0;
      }
      if ( (int)LOWORD(fx_randomTable[v32]) >> 12 < 1 << v4 )
      {
        v34 = v33 + 1;
        v4 = 0;
        s_glassRandSeed = v33 + 1;
        if ( v33 == 16360 )
        {
          s_glassRandSeed = 0;
          v34 = 0;
        }
        v35 = (float)((float)(0.4375 * fx_randomTable[v34]) + 1.53125) * v31;
        Glass_DeflectVectorWithSign(0.70710677, 0.96592581, -1.0, &walk->clip.dir, &outDir);
        frontTail = walk->frontTail;
        totalCrackLength = walk->totalCrackLength;
        if ( work->branchStackLevel >= 0x20 )
        {
          LODWORD(v53) = 32;
          LODWORD(v52) = work->branchStackLevel;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1411, ASSERT_TYPE_ASSERT, "(unsigned)( work->branchStackLevel ) < (unsigned)( 32 )", "work->branchStackLevel doesn't index GLASS_CRACK_STACK_SIZE\n\t%i not in [0, %i)", v52, v53) )
            __debugbreak();
        }
        branchStackLevel = work->branchStackLevel;
        v39 = outDir.v[0];
        v40 = outDir.v[1];
        v41 = branchStackLevel;
        work->branchStackLevel = branchStackLevel + 1;
        work->branchStack[v41].afterEdge = frontTail;
        work->branchStack[v41].startIndex = frontTail->i1;
        LODWORD(branchStackLevel) = s_glassRandSeed;
        work->branchStack[v41].dir.v[0] = v39;
        work->branchStack[v41].dir.v[1] = v40;
        work->branchStack[v41].len = v35;
        work->branchStack[v41].baseDir.v[0] = v39;
        work->branchStack[v41].baseDir.v[1] = v40;
        v42 = branchStackLevel + 1;
        work->branchStack[v41].deflectLimit = 0.96592581;
        s_glassRandSeed = v42;
        work->branchStack[v41].priorCrackLength = totalCrackLength;
        walk->clip.startIndex = nextFree;
        if ( v42 == 16361 )
        {
          s_glassRandSeed = 0;
          v42 = 0;
        }
        walk->clip.len = (float)((float)(0.4375 * fx_randomTable[v42]) + 1.53125) * walk->clip.len;
        Glass_DeflectVectorWithSign(0.70710677, 0.96592581, 1.0, &walk->clip.dir, &walk->clip.dir);
        walk->clip.baseDir.v[0] = walk->clip.dir.v[0];
        walk->clip.baseDir.v[1] = walk->clip.dir.v[1];
        walk->clip.deflectLimit = 0.96592581;
        goto LABEL_2;
      }
    }
    walk->clip.baseDir.v[0] = walk->clip.dir.v[0];
    v43 = 0;
    walk->clip.baseDir.v[1] = walk->clip.dir.v[1];
    walk->clip.deflectLimit = 0.70710677;
    walk->clip.startIndex = nextFree;
    if ( v32 != 16360 )
      v43 = v32 + 1;
    v44 = v43;
    v45 = v43 + 1;
    s_glassRandSeed = v45;
    walk->clip.len = (float)((float)(0.4375 * fx_randomTable[v44]) + 1.53125) * v31;
    if ( v45 == 16361 )
      s_glassRandSeed = 0;
    __asm
    {
      vcmpless xmm0, xmm9, dword ptr [r12+rax*4]
      vblendvps xmm2, xmm7, xmm6, xmm0; sign
    }
    Glass_DeflectVectorWithSign(0.70710677, 0.96592581, *(float *)&_XMM2, &walk->clip.dir, &walk->clip.dir);
  }
  if ( walk->clip.hitAtVertex )
  {
    walk->clippedEdge = walk->clip.hitEdgePrev;
    return 1;
  }
  else
  {
    v49 = Glass_AllocCrackEdge(work, v30->i0, nextFree, v30->loopIndex, v30->type);
    hitEdgePrev = walk->clip.hitEdgePrev;
    walk->clippedEdge = v49;
    if ( hitEdgePrev->i1 != v49->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1924, ASSERT_TYPE_ASSERT, "(walk->clip.hitEdgePrev->i1 == walk->clippedEdge->i0)", (const char *)&queryFormat, "walk->clip.hitEdgePrev->i1 == walk->clippedEdge->i0") )
      __debugbreak();
    walk->clip.hitEdgePrev->next = walk->clippedEdge;
    walk->clippedEdge->next = walk->clip.hitEdge;
    walk->clip.hitEdge->i0 = truncate_cast<unsigned char,unsigned int>(nextFree);
    Glass_SetCrackEdgeDelta(work, walk->clip.hitEdge);
    v51 = walk->clip.hitEdge;
    if ( v51->twin )
      Glass_SplitTwin(work, walk->clippedEdge, v51);
    return 1;
  }
}

/*
==============
Glass_DoesLoopContainLoop
==============
*/
bool Glass_DoesLoopContainLoop(const FxGlassCrackWork *work, const FxGlassCrackLoop *outerLoop, const FxGlassCrackLoop *innerLoop)
{
  FxGlassCrackEdge *firstEdge; 
  FxGlassCrackEdge *v5; 
  FxGlassCrackEdge *twin; 
  __int64 i0; 
  int v9; 
  __int64 i1; 
  FxGlassCrackEdge *v11; 
  FxGlassCrackPoint *v12; 
  float v13; 
  float v14; 
  __int64 v15; 
  float *v16; 
  float v17; 
  float v18; 

  if ( outerLoop->mins.v[0] > innerLoop->mins.v[0] || outerLoop->maxs.v[0] < innerLoop->maxs.v[0] || outerLoop->mins.v[1] > innerLoop->mins.v[1] || outerLoop->maxs.v[1] < innerLoop->maxs.v[1] )
    return 0;
  firstEdge = outerLoop->firstEdge;
  v5 = innerLoop->firstEdge;
  while ( 1 )
  {
    twin = v5->twin;
    if ( !twin || twin->loopIndex != outerLoop->firstEdge->loopIndex )
      break;
    v5 = v5->next;
    if ( v5 == innerLoop->firstEdge )
      return 1;
  }
  i0 = v5->i0;
  v9 = 0;
  i1 = v5->i1;
  v11 = firstEdge;
  v12 = &work->pts[firstEdge->i0];
  v13 = (float)(work->pts[i0].xy.v[0] + work->pts[i1].xy.v[0]) * 0.5;
  v14 = (float)(work->pts[i0].xy.v[1] + work->pts[i1].xy.v[1]) * 0.5;
  do
  {
    v15 = v11->i1;
    v16 = (float *)v12;
    v17 = v12->xy.v[1];
    v12 = &work->pts[v15];
    v18 = work->pts[v15].xy.v[1];
    if ( v17 > v14 )
    {
      if ( v18 <= v14 && (float)((float)(v12->xy.v[0] - *v16) * (float)(v14 - v17)) < (float)((float)(v13 - *v16) * (float)(v18 - v17)) )
        ++v9;
    }
    else if ( v18 > v14 && (float)((float)(v12->xy.v[0] - *v16) * (float)(v14 - v17)) > (float)((float)(v13 - *v16) * (float)(v18 - v17)) )
    {
      --v9;
    }
    v11 = v11->next;
  }
  while ( v11 != firstEdge );
  return v9 > 0;
}

/*
==============
Glass_DoesSegmentIntersectEitherEdge
==============
*/
bool Glass_DoesSegmentIntersectEitherEdge(const FxGlassCrackWork *work, const vec2_t *start, const vec2_t *end, const FxGlassCrackEdge *edgePrev, const FxGlassCrackEdge *edge)
{
  unsigned __int8 i1; 
  unsigned __int8 i0; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 

  if ( !edgePrev && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1495, ASSERT_TYPE_ASSERT, "(edgePrev)", (const char *)&queryFormat, "edgePrev") )
    __debugbreak();
  if ( !edge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1496, ASSERT_TYPE_ASSERT, "(edge)", (const char *)&queryFormat, "edge") )
    __debugbreak();
  i1 = edgePrev->i1;
  i0 = edge->i0;
  if ( i1 != edge->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1497, ASSERT_TYPE_ASSERT, "( edgePrev->i1 ) == ( edge->i0 )", "%s == %s\n\t%i, %i", "edgePrev->i1", "edge->i0", i1, edge->i0) )
    __debugbreak();
  v11 = start->v[0];
  v12 = start->v[1];
  v13 = work->pts[i0].xy.v[0];
  v14 = work->pts[i0].xy.v[1];
  v15 = end->v[0] - v13;
  v16 = start->v[0] - v13;
  v17 = end->v[1];
  v18 = v12 - v14;
  v19 = v17 - v12;
  v20 = end->v[0] - start->v[0];
  return (float)((float)((float)(v15 * edge->dir.v[1]) - (float)((float)(v17 - v14) * edge->dir.v[0])) * (float)((float)(v16 * edge->dir.v[1]) - (float)((float)(v12 - v14) * edge->dir.v[0]))) < 0.0 && (float)((float)((float)((float)(work->pts[edge->i1].xy.v[0] - v11) * v19) - (float)((float)(work->pts[edge->i1].xy.v[1] - v12) * v20)) * (float)((float)(v20 * v18) - (float)(v16 * v19))) < 0.0 || (float)((float)((float)(v15 * edgePrev->dir.v[1]) - (float)((float)(v17 - v14) * edgePrev->dir.v[0])) * (float)((float)(v16 * edgePrev->dir.v[1]) - (float)(v18 * edgePrev->dir.v[0]))) < 0.0 && (float)((float)((float)((float)(work->pts[edgePrev->i0].xy.v[0] - v11) * v19) - (float)((float)(work->pts[edgePrev->i0].xy.v[1] - v12) * v20)) * (float)((float)(v18 * v20) - (float)(v16 * v19))) < 0.0;
}

/*
==============
Glass_FinalizeShard
==============
*/
void Glass_FinalizeShard(FxGlassCrackWork *work, const FxGlassShard *shard)
{
  __int64 pieceIndex; 
  int vertCount_low; 
  int v6; 
  int v7; 
  unsigned __int8 v8; 
  unsigned int v9; 
  __int64 v10; 
  FxGlassSystem *glassSys; 
  unsigned __int16 vertCount; 
  __int64 v13; 
  FxGlassPieceState *pieceStates; 
  FxGlassPiecePlace *piecePlaces; 
  FxGlassSystem *v16; 
  float v17; 
  float v18; 
  FxGlassPiecePlace *v19; 
  FxGlassPieceState *v20; 
  __int64 v21; 
  float v22; 
  float v23; 
  FxGlassDef *v24; 
  const dvar_t *v25; 
  int y; 
  float v27; 
  float *p_halfThickness; 
  float v29; 
  float v30; 
  FxGlassSystem *v31; 
  unsigned __int16 flags; 
  size_t v33; 
  __int64 v34; 
  int v35; 

  pieceIndex = work->pieceIndex;
  vertCount_low = LOBYTE(shard->loops[0].vertCount);
  v6 = truncate_cast<unsigned char,unsigned int>(shard->holeDataCount);
  v7 = truncate_cast<unsigned char,unsigned int>(shard->crackDataCount);
  v8 = truncate_cast<unsigned char,unsigned int>(shard->fanDataCount);
  if ( v6 + v7 - shard->crackCount - shard->loopCount + vertCount_low + 1 > 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1343, ASSERT_TYPE_ASSERT, "(totalVertCount <= 128)", (const char *)&queryFormat, "totalVertCount <= GLASS_VERT_PER_PIECE_LIMIT") )
    __debugbreak();
  v9 = Glass_AllocPiece(work->glassSys, vertCount_low, v6, v7, v8);
  v10 = v9;
  if ( v9 != 0xFFFF )
  {
    glassSys = work->glassSys;
    vertCount = shard->loops[0].vertCount;
    v13 = (unsigned int)v10;
    pieceStates = glassSys->pieceStates;
    piecePlaces = glassSys->piecePlaces;
    if ( pieceStates[v13].vertCount != vertCount )
    {
      v35 = vertCount;
      LODWORD(v34) = pieceStates[v13].vertCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1352, ASSERT_TYPE_SANITY, "( newPieceState->vertCount ) == ( shard->loops[0].vertCount )", "newPieceState->vertCount == shard->loops[0].vertCount\n\t%i, %i", v34, v35) )
        __debugbreak();
    }
    v16 = work->glassSys;
    v17 = shard->centroid.v[0];
    v18 = shard->centroid.v[1];
    v19 = v16->piecePlaces;
    v20 = v16->pieceStates;
    v21 = pieceIndex;
    v22 = v17 * work->axis.m[0].v[1];
    piecePlaces[v13].frame.origin.v[0] = (float)((float)(v17 * work->axis.m[0].v[0]) + v19[pieceIndex].frame.origin.v[0]) + (float)(v18 * work->axis.m[1].v[0]);
    v23 = v17 * work->axis.m[0].v[2];
    piecePlaces[v13].frame.origin.v[1] = (float)(v22 + v19[pieceIndex].frame.origin.v[1]) + (float)(v18 * work->axis.m[1].v[1]);
    piecePlaces[v13].frame.origin.v[2] = (float)(v23 + v19[pieceIndex].frame.origin.v[2]) + (float)(v18 * work->axis.m[1].v[2]);
    piecePlaces[v13].nextFree = v19[pieceIndex].nextFree;
    piecePlaces[v13].frame.quat.v[1] = v19[pieceIndex].frame.quat.v[1];
    piecePlaces[v13].frame.quat.v[2] = v19[pieceIndex].frame.quat.v[2];
    piecePlaces[v13].frame.quat.v[3] = v19[pieceIndex].frame.quat.v[3];
    piecePlaces[v13].radius = shard->radius;
    if ( (v20[pieceIndex].flags & 1) == 0 || (v24 = &fxWorld.glassGlob.defs[v20[pieceIndex].defIndex], v24->materialShattered == v24->material) )
    {
      p_halfThickness = &work->def->halfThickness;
      v29 = _mm_cvtepi32_ps((__m128i)(unsigned int)shard->packedCentroid.x).m128_f32[0];
      v30 = _mm_cvtepi32_ps((__m128i)(unsigned int)shard->packedCentroid.y).m128_f32[0];
      pieceStates[v13].texCoordOrigin.v[0] = (float)((float)(v29 * p_halfThickness[1]) + v20[v21].texCoordOrigin.v[0]) + (float)(v30 * p_halfThickness[2]);
      v27 = (float)((float)(v29 * p_halfThickness[3]) + v20[v21].texCoordOrigin.v[1]) + (float)(v30 * p_halfThickness[4]);
    }
    else
    {
      v25 = glass_shattered_scale;
      y = shard->packedCentroid.y;
      pieceStates[v13].texCoordOrigin.v[0] = (float)((float)((float)shard->packedCentroid.x * 0.03125) / glass_shattered_scale->current.value) + v20[v21].texCoordOrigin.v[0];
      v27 = (float)((float)((float)y * 0.03125) / v25->current.value) + v20[v21].texCoordOrigin.v[1];
    }
    pieceStates[v13].texCoordOrigin.v[1] = v27;
    v31 = work->glassSys;
    pieceStates[v13].supportMask = shard->supportMask;
    pieceStates[v13].initIndex = v20[v21].initIndex;
    pieceStates[v13].defIndex = v20[v21].defIndex;
    flags = v20[v21].flags;
    v33 = 4i64 * shard->geoDataUsed;
    pieceStates[v13].flags = flags & 0xFFF9 | 2;
    pieceStates[v13].areaX2 = shard->areaX2;
    v31->halfThickness[v10] = v31->halfThickness[pieceIndex];
    memcpy_0(&v31->geoData[pieceStates[v13].geoDataStart], shard->geoData, v33);
    Glass_SetupDynamics(work, shard, v10, pieceIndex, NULL);
    if ( ((0x80000000 >> (v10 & 0x1F)) & work->glassSys->isInUse[(unsigned __int64)(unsigned int)v10 >> 5]) != 0 )
      Glass_ConsiderBreakingPiece(work, v10);
  }
}

/*
==============
Glass_FindExistingEdgeBeforeNewEdge
==============
*/
FxGlassCrackEdge *Glass_FindExistingEdgeBeforeNewEdge(FxGlassCrackWork *work, unsigned int i0, unsigned int i1)
{
  unsigned int loopCount; 
  int v4; 
  FxGlassCrackEdge *v5; 
  __int64 v6; 
  float v8; 
  __int128 v9; 
  FxGlassCrackEdge *firstEdge; 
  float v12; 
  __int128 v13; 
  __int128 v17; 
  __int128 v20; 
  FxGlassCrackEdge *v24; 
  float v26; 

  loopCount = work->loopCount;
  v4 = 0;
  v5 = NULL;
  v6 = i0;
  *(float *)&_XMM5 = FLOAT_3_4028235e38;
  if ( loopCount )
  {
    v8 = v26;
    v9 = LODWORD(v26);
    _XMM10 = 0i64;
    while ( 1 )
    {
      firstEdge = work->loops[--loopCount].firstEdge;
      do
      {
        if ( firstEdge->i1 == (_DWORD)v6 )
        {
          if ( v4 )
          {
            if ( v4 == 1 )
            {
              v12 = work->pts[i1].xy.v[0] - work->pts[v6].xy.v[0];
              v13 = LODWORD(work->pts[i1].xy.v[1]);
              *(float *)&v13 = work->pts[i1].xy.v[1] - work->pts[v6].xy.v[1];
              *(float *)&v13 = fsqrt((float)(*(float *)&v13 * *(float *)&v13) + (float)(v12 * v12));
              _XMM3 = v13;
              __asm
              {
                vcmpless xmm0, xmm3, xmm11
                vblendvps xmm0, xmm3, xmm8, xmm0
              }
              v17 = LODWORD(FLOAT_1_0);
              v8 = (float)(1.0 / *(float *)&_XMM0) * (float)(work->pts[i1].xy.v[1] - work->pts[v6].xy.v[1]);
              *(float *)&v17 = (float)(1.0 / *(float *)&_XMM0) * v12;
              v9 = v17;
              *(float *)&v17 = (float)((float)(*(float *)&v17 * v5->dir.v[0]) + (float)(v8 * v5->dir.v[1])) - 1.0;
              __asm { vcmpless xmm0, xmm10, xmm1 }
              _XMM3 = v17 ^ (unsigned int)_xmm;
              __asm { vblendvps xmm5, xmm3, xmm4, xmm0 }
            }
            v20 = v9;
            *(float *)&v20 = (float)((float)(*(float *)&v9 * firstEdge->dir.v[0]) + (float)(v8 * firstEdge->dir.v[1])) - 1.0;
            __asm { vcmpless xmm0, xmm10, xmm1 }
            _XMM3 = v20 ^ (unsigned int)_xmm;
            __asm { vblendvps xmm2, xmm3, xmm4, xmm0 }
            ++v4;
            v24 = firstEdge;
            if ( *(float *)&_XMM5 <= *(float *)&_XMM2 )
              v24 = v5;
            v5 = v24;
            __asm { vminss  xmm5, xmm2, xmm5 }
          }
          else
          {
            v5 = firstEdge;
            v4 = 1;
          }
        }
        firstEdge = firstEdge->next;
      }
      while ( firstEdge != work->loops[loopCount].firstEdge );
      if ( v5 )
        return v5;
      if ( !loopCount )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 390, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "inconceivable") )
      __debugbreak();
    return 0i64;
  }
}

/*
==============
Glass_ForceRandomSeed
==============
*/
void Glass_ForceRandomSeed(int seed)
{
  int v3; 

  if ( (unsigned int)seed >= 0x3FE9 )
  {
    v3 = 16361;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 133, ASSERT_TYPE_ASSERT, "(unsigned)( seed ) < (unsigned)( 16361 )", "seed doesn't index FX_RANDOM_TABLE_SIZE\n\t%i not in [0, %i)", seed, v3) )
      __debugbreak();
  }
  s_glassRandSeed = seed;
}

/*
==============
Glass_GetFreeEdge
==============
*/
FxGlassCrackEdge *Glass_GetFreeEdge(FxGlassCrackWork *work)
{
  FxGlassCrackEdge *result; 
  __int64 v3; 
  unsigned int edgeCount; 
  int v5; 

  result = work->firstFreeEdge;
  if ( result )
  {
    work->firstFreeEdge = result->nextFree;
  }
  else
  {
    if ( work->edgeCount >= 0x200 )
    {
      v5 = 512;
      edgeCount = work->edgeCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 207, ASSERT_TYPE_ASSERT, "(unsigned)( work->edgeCount ) < (unsigned)( ( sizeof( *array_counter( work->edges ) ) + 0 ) )", "work->edgeCount doesn't index ARRAY_COUNT( work->edges )\n\t%i not in [0, %i)", edgeCount, v5) )
        __debugbreak();
    }
    v3 = work->edgeCount++;
    return &work->edges[v3];
  }
  return result;
}

/*
==============
Glass_GetVertexForPos
==============
*/
void Glass_GetVertexForPos(FxGlassSystem *glassSys, unsigned int pieceIndex, const vec3_t *impactPos, const tmat33_t<vec3_t> *axis, int *quantizedPos)
{
  if ( !quantizedPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2915, ASSERT_TYPE_ASSERT, "(quantizedPos)", (const char *)&queryFormat, "quantizedPos") )
    __debugbreak();
  _XMM0 = 0i64;
  __asm { vroundss xmm0, xmm0, xmm1, 1 }
  *quantizedPos = (int)*(float *)&_XMM0;
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm3, 1 }
  quantizedPos[1] = (int)*(float *)&_XMM1;
}

/*
==============
Glass_GetVertexPatternForCracks
==============
*/
void Glass_GetVertexPatternForCracks(FxGlassSystem *glassSys, unsigned int pieceIndex, FxGlassVertex impactVertex, const tmat33_t<vec3_t> *axis, FxGlassInitialCrackVert *outputVerts)
{
  FxGlassPiecePlace *piecePlaces; 
  int v6; 
  __int16 x; 
  unsigned __int64 v9; 
  int v11; 
  __int128 v12; 
  __int128 radius_low; 
  int numCrackRings; 
  float *v15; 
  int v16; 
  FxGlassPiecePlace *v17; 
  float v18; 
  float v19; 
  __int128 v20; 
  int v21; 
  __int16 y; 
  _BYTE v23[64]; 

  piecePlaces = glassSys->piecePlaces;
  v6 = 0;
  x = impactVertex.x;
  v9 = pieceIndex;
  *(__m256i *)v23 = _ymm;
  *(__m256i *)&v23[32] = _ymm_bf3504f3bf3504f3bf80000000000000bf3504f33f3504f3000000003f800000;
  v11 = 0;
  y = impactVertex.y;
  radius_low = LODWORD(piecePlaces[v9].radius);
  *(float *)&radius_low = piecePlaces[v9].radius * glass_crack_pattern_scale->current.value;
  v12 = radius_low;
  numCrackRings = fxWorld.glassGlob.defs[glassSys->pieceStates[v9].defIndex].numCrackRings;
  if ( numCrackRings > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2979, ASSERT_TYPE_ASSERT, "( numRings ) <= ( 4 )", "%s <= %s\n\t%i, %i", "numRings", "GLASS_MAX_CRACK_RINGS", fxWorld.glassGlob.defs[glassSys->pieceStates[v9].defIndex].numCrackRings, 4) )
    __debugbreak();
  v15 = &outputVerts->pos.v[1];
  do
  {
    if ( v6 >= numCrackRings )
      break;
    *((_BYTE *)v15 + 8) = 1;
    v16 = v11 % 8;
    v17 = glassSys->piecePlaces;
    ++v11;
    v18 = _mm_cvtepi32_ps((__m128i)(unsigned int)(__int16)(y + (int)(float)(*(float *)&v12 * *(float *)&v23[8 * v16 + 4]))).m128_f32[0] * 0.03125;
    v19 = _mm_cvtepi32_ps((__m128i)(unsigned int)(__int16)(x + (int)(float)(*(float *)&v12 * *(float *)&v23[8 * v16]))).m128_f32[0];
    *(v15 - 1) = (float)((float)((float)(v19 * 0.03125) * axis->m[0].v[0]) + v17[v9].frame.origin.v[0]) + (float)(v18 * axis->m[1].v[0]);
    *v15 = (float)((float)((float)(v19 * 0.03125) * axis->m[0].v[1]) + v17[v9].frame.origin.v[1]) + (float)(v18 * axis->m[1].v[1]);
    v15[1] = (float)((float)((float)(v19 * 0.03125) * axis->m[0].v[2]) + v17[v9].frame.origin.v[2]) + (float)(v18 * axis->m[1].v[2]);
    v15 += 4;
    if ( !(v11 % 8) )
    {
      v20 = v12;
      *(float *)&v20 = *(float *)&v12 * 2.0;
      v12 = v20;
    }
    v21 = v6 + 1;
    if ( v11 % 8 )
      v21 = v6;
    v6 = v21;
  }
  while ( v11 < 32 );
}

/*
==============
Glass_InertiaScale
==============
*/
float Glass_InertiaScale(float areaX2)
{
  double v1; 
  __int128 v3; 

  v1 = I_fclamp(areaX2, 128.0, 2048.0);
  if ( *(float *)&v1 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
    __debugbreak();
  v3 = 0i64;
  *(float *)&v3 = *(float *)&v1;
  _XMM2 = v3;
  __asm { vrsqrtss xmm2, xmm2, xmm2 }
  return *(float *)&_XMM2 * 11.313708;
}

/*
==============
Glass_MakeCrackPieceLoops
==============
*/
void Glass_MakeCrackPieceLoops(FxGlassCrackWork *work)
{
  const FxGlassPieceState *pieceState; 
  unsigned int v3; 
  FxGlassGeometryData *v4; 
  unsigned int ptCount; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int uniqueVertCount; 
  unsigned int v10; 
  FxGlassVertex v11; 
  unsigned int v12; 
  __int64 v13; 
  float v14; 
  unsigned __int8 touchVert; 
  unsigned int loopCount; 
  FxGlassCrackEdge *ExistingEdgeBeforeNewEdge; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  FxGlassCrackEdge *v22; 
  FxGlassCrackEdge *v23; 
  FxGlassCrackEdge *v24; 
  unsigned int v25; 
  FxGlassCrackEdge *v26; 
  __int64 v27; 
  unsigned int v28; 
  FxGlassCrackEdge *v29; 
  FxGlassCrackEdge *firstFreeEdge; 
  FxGlassCrackEdge *v31; 
  float len; 
  float v33; 
  __int64 *p_next; 
  unsigned __int8 v35; 
  unsigned __int8 v36; 
  FxGlassCrackEdge *v37; 
  unsigned __int8 i1; 
  unsigned __int8 i0; 
  unsigned __int8 v40; 
  unsigned int v41; 
  FxGlassCrackEdge *v42; 
  unsigned int loopIndex; 
  unsigned int v44; 
  FxGlassCrackEdge *v45; 
  FxGlassCrackEdge *firstEdge; 
  FxGlassCrackEdge *v47; 
  __int64 v48; 
  FxGlassCrackEdge *v49; 
  FxGlassCrackEdge *v50; 
  FxGlassCrackEdge *v51; 
  FxGlassCrackEdge *v52; 
  FxGlassCrackEdge *v53; 
  __int64 v54; 
  __int64 v55; 
  FxGlassCrackEdge *v56; 
  float v57; 
  float v58; 
  __int64 v59; 
  __int64 v60; 
  __int64 v61; 
  __int64 v62; 
  int crackDataCount; 
  FxGlassCrackEdge *v64; 
  FxGlassCrackEdge *v65; 
  FxGlassGeometryData *v66; 
  __int64 *v67; 
  FxGlassCrackEdge *v68; 
  __int64 v69; 
  unsigned int v70; 
  unsigned int v71; 
  unsigned int v72; 
  FxGlassCrackEdge *v73; 

  pieceState = work->pieceState;
  crackDataCount = pieceState->crackDataCount;
  if ( pieceState->crackDataCount )
  {
    v3 = 0;
    v4 = &work->glassSys->geoData[pieceState->geoDataStart + pieceState->vertCount + pieceState->holeDataCount];
    v66 = v4;
    do
    {
      ptCount = work->ptCount;
      v6 = 0;
      v7 = v3;
      v8 = v3 + 1;
      v69 = v7;
      v72 = v8;
      v71 = ptCount;
      uniqueVertCount = v4[v7].hole.uniqueVertCount;
      v70 = uniqueVertCount;
      if ( v4[v7].vert.x )
      {
        v10 = v8;
        do
        {
          v11 = (FxGlassVertex)v4[v6 + v10];
          v12 = work->ptCount;
          LODWORD(v73) = v11;
          if ( v12 >= 0xFF )
          {
            LODWORD(v60) = 255;
            LODWORD(v59) = v12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 299, ASSERT_TYPE_ASSERT, "(unsigned)( work->ptCount ) < (unsigned)( ( sizeof( *array_counter( work->pts ) ) + 0 ) )", "work->ptCount doesn't index ARRAY_COUNT( work->pts )\n\t%i not in [0, %i)", v59, v60) )
              __debugbreak();
            v4 = v66;
          }
          v13 = work->ptCount;
          ++v6;
          work->ptCount = v13 + 1;
          work->packedPts[v13] = v11;
          v14 = (float)SWORD1(v73);
          work->pts[v13].xy.v[0] = (float)v11.x * 0.03125;
          work->pts[v13].xy.v[1] = v14 * 0.03125;
        }
        while ( v6 < uniqueVertCount );
        ptCount = v71;
      }
      touchVert = v4[v7].hole.touchVert;
      if ( touchVert == 0xFF )
      {
        loopCount = work->loopCount;
        ExistingEdgeBeforeNewEdge = NULL;
        v68 = NULL;
        v18 = 1;
        v19 = ptCount;
      }
      else
      {
        v18 = 0;
        v19 = touchVert;
        if ( uniqueVertCount )
          v20 = ptCount;
        else
          v20 = v4[v7].hole.pad[0];
        ExistingEdgeBeforeNewEdge = Glass_FindExistingEdgeBeforeNewEdge(work, touchVert, v20);
        v68 = ExistingEdgeBeforeNewEdge;
        loopCount = ExistingEdgeBeforeNewEdge->loopIndex;
      }
      v21 = v70;
      v22 = NULL;
      v67 = (__int64 *)&v73;
      v23 = NULL;
      v73 = NULL;
      v65 = NULL;
      v64 = NULL;
      if ( v18 >= v70 )
      {
        p_next = (__int64 *)&v73;
      }
      else
      {
        v24 = NULL;
        v25 = v18 + ptCount;
        v26 = NULL;
        v27 = v70 - v18;
        do
        {
          v28 = v19;
          v19 = v25;
          v29 = Glass_AllocCrackEdge(work, v28, v25, loopCount, 1u);
          firstFreeEdge = work->firstFreeEdge;
          v31 = v29;
          if ( firstFreeEdge )
          {
            work->firstFreeEdge = firstFreeEdge->nextFree;
          }
          else
          {
            if ( work->edgeCount >= 0x200 )
            {
              LODWORD(v60) = 512;
              LODWORD(v59) = work->edgeCount;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 207, ASSERT_TYPE_ASSERT, "(unsigned)( work->edgeCount ) < (unsigned)( ( sizeof( *array_counter( work->edges ) ) + 0 ) )", "work->edgeCount doesn't index ARRAY_COUNT( work->edges )\n\t%i not in [0, %i)", v59, v60) )
                __debugbreak();
            }
            firstFreeEdge = &work->edges[work->edgeCount++];
          }
          firstFreeEdge->i0 = v31->i1;
          firstFreeEdge->i1 = v31->i0;
          firstFreeEdge->loopIndex = v31->loopIndex;
          firstFreeEdge->type = v31->type;
          firstFreeEdge->twin = v31;
          len = v31->len;
          v31->twin = firstFreeEdge;
          firstFreeEdge->len = len;
          firstFreeEdge->dir.v[0] = COERCE_FLOAT(LODWORD(v31->dir.v[0]) ^ _xmm);
          v33 = v31->dir.v[1];
          *v67 = (__int64)v31;
          p_next = (__int64 *)&v31->next;
          v67 = p_next;
          firstFreeEdge->dir.v[1] = COERCE_FLOAT(LODWORD(v33) ^ _xmm);
          firstFreeEdge->next = v26;
          v26 = firstFreeEdge;
          if ( v24 )
            firstFreeEdge = v24;
          ++v25;
          v24 = firstFreeEdge;
          --v27;
        }
        while ( v27 );
        v22 = v73;
        v23 = firstFreeEdge;
        ExistingEdgeBeforeNewEdge = v68;
        v65 = v26;
        ptCount = v71;
        v64 = firstFreeEdge;
        v21 = v70;
      }
      v35 = v66[v69].hole.touchVert;
      v36 = v66[v69].hole.pad[0];
      if ( v35 == 0xFF )
      {
        if ( v36 != 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 610, ASSERT_TYPE_ASSERT, "(crack->endVertIndex == 0xff)", (const char *)&queryFormat, "crack->endVertIndex == GLASS_VERT_INDEX_NONE") )
          __debugbreak();
        if ( work->loopCount >= 0x20 )
        {
          LODWORD(v60) = 32;
          LODWORD(v59) = work->loopCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 611, ASSERT_TYPE_ASSERT, "(unsigned)( work->loopCount ) < (unsigned)( ( sizeof( *array_counter( work->loops ) ) + 0 ) )", "work->loopCount doesn't index ARRAY_COUNT( work->loops )\n\t%i not in [0, %i)", v59, v60) )
            __debugbreak();
        }
        if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 612, ASSERT_TYPE_ASSERT, "(frontHead)", (const char *)&queryFormat, "frontHead") )
          __debugbreak();
        if ( !v65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 613, ASSERT_TYPE_ASSERT, "(backHead)", (const char *)&queryFormat, "backHead") )
          __debugbreak();
        *v67 = (__int64)v65;
        v37 = v73;
        v23->next = v73;
        work->loops[work->loopCount++].firstEdge = v37;
      }
      else
      {
        if ( v36 != 0xFF )
        {
          v41 = ptCount + v21 - 1;
          if ( !v21 )
            v41 = v35;
          v42 = Glass_FindExistingEdgeBeforeNewEdge(work, v36, v41);
          if ( v68->loopIndex != loopCount )
          {
            LODWORD(v62) = loopCount;
            LODWORD(v61) = v68->loopIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 632, ASSERT_TYPE_ASSERT, "( afterEdge->loopIndex ) == ( loopIndex )", "%s == %s\n\t%i, %i", "afterEdge->loopIndex", "loopIndex", v61, v62) )
              __debugbreak();
          }
          if ( v42->loopIndex == loopCount )
          {
            LODWORD(v62) = loopCount;
            LODWORD(v61) = v42->loopIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 633, ASSERT_TYPE_ASSERT, "( beforeEdge->loopIndex ) != ( loopIndex )", "%s != %s\n\t%i, %i", "beforeEdge->loopIndex", "loopIndex", v61, v62) )
              __debugbreak();
          }
          loopIndex = v42->loopIndex;
          if ( loopCount < loopIndex )
          {
            v44 = loopCount;
            loopCount = v42->loopIndex;
            goto LABEL_62;
          }
          v44 = v42->loopIndex;
          if ( v22 )
          {
            v45 = v64;
            *p_next = (__int64)v65;
            v54 = (__int64)v73;
            v64->next = v73;
            if ( !v54 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 517, ASSERT_TYPE_ASSERT, "(edgeLoop)", (const char *)&queryFormat, "edgeLoop") )
              __debugbreak();
            v55 = v54;
            do
            {
              *(_BYTE *)(v55 + 2) = loopIndex;
              v55 = *(_QWORD *)(v55 + 24);
            }
            while ( v55 != v54 );
          }
          else
          {
LABEL_62:
            v45 = v64;
          }
          firstEdge = work->loops[loopCount].firstEdge;
          if ( !firstEdge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 517, ASSERT_TYPE_ASSERT, "(edgeLoop)", (const char *)&queryFormat, "edgeLoop") )
            __debugbreak();
          v47 = firstEdge;
          do
          {
            v47->loopIndex = v44;
            v47 = v47->next;
          }
          while ( v47 != firstEdge );
          v48 = --work->loopCount;
          if ( (_DWORD)v48 != loopCount )
          {
            *(_OWORD *)&work->loops[loopCount].firstEdge = *(_OWORD *)&work->loops[v48].firstEdge;
            work->loops[loopCount].maxs = work->loops[v48].maxs;
            v49 = work->loops[loopCount].firstEdge;
            if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 517, ASSERT_TYPE_ASSERT, "(edgeLoop)", (const char *)&queryFormat, "edgeLoop") )
              __debugbreak();
            v50 = v49;
            do
            {
              v50->loopIndex = loopCount;
              v50 = v50->next;
            }
            while ( v50 != v49 );
          }
          v51 = Glass_AllocCrackEdge(work, v41, v66[v69].hole.pad[0], v44, 1u);
          v52 = work->firstFreeEdge;
          v53 = v51;
          if ( v52 )
          {
            work->firstFreeEdge = v52->nextFree;
          }
          else
          {
            if ( work->edgeCount >= 0x200 )
            {
              LODWORD(v60) = 512;
              LODWORD(v59) = work->edgeCount;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 207, ASSERT_TYPE_ASSERT, "(unsigned)( work->edgeCount ) < (unsigned)( ( sizeof( *array_counter( work->edges ) ) + 0 ) )", "work->edgeCount doesn't index ARRAY_COUNT( work->edges )\n\t%i not in [0, %i)", v59, v60) )
                __debugbreak();
            }
            v52 = &work->edges[work->edgeCount++];
          }
          v56 = v52;
          v52->i0 = v53->i1;
          if ( v45 )
            v56 = v45;
          v52->i1 = v53->i0;
          v52->loopIndex = v53->loopIndex;
          v52->type = v53->type;
          v52->twin = v53;
          v57 = v53->len;
          v53->twin = v52;
          v52->len = v57;
          v52->dir.v[0] = COERCE_FLOAT(LODWORD(v53->dir.v[0]) ^ _xmm);
          v58 = v53->dir.v[1];
          *v67 = (__int64)v53;
          v52->dir.v[1] = COERCE_FLOAT(LODWORD(v58) ^ _xmm);
          v52->next = v65;
          v56->next = v68->next;
          v68->next = v73;
          v53->next = v42->next;
          v42->next = v52;
          goto LABEL_90;
        }
        i1 = v23->i1;
        i0 = ExistingEdgeBeforeNewEdge->next->i0;
        if ( i1 != i0 )
        {
          LODWORD(v62) = i0;
          LODWORD(v61) = i1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 622, ASSERT_TYPE_ASSERT, "( backTail->i1 ) == ( afterEdge->next->i0 )", "%s == %s\n\t%i, %i", "backTail->i1", "afterEdge->next->i0", v61, v62) )
            __debugbreak();
        }
        v40 = ExistingEdgeBeforeNewEdge->i1;
        if ( v40 != v22->i0 )
        {
          LODWORD(v62) = v22->i0;
          LODWORD(v61) = v40;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 623, ASSERT_TYPE_ASSERT, "( afterEdge->i1 ) == ( frontHead->i0 )", "%s == %s\n\t%i, %i", "afterEdge->i1", "frontHead->i0", v61, v62) )
            __debugbreak();
        }
        *p_next = (__int64)v65;
        v23->next = ExistingEdgeBeforeNewEdge->next;
        ExistingEdgeBeforeNewEdge->next = v73;
      }
LABEL_90:
      v3 = v70 + v72;
      v4 = v66;
    }
    while ( v70 + v72 != crackDataCount );
  }
}

/*
==============
Glass_MakeHolePieceLoops
==============
*/
void Glass_MakeHolePieceLoops(FxGlassCrackWork *work)
{
  const FxGlassPieceState *pieceState; 
  FxGlassGeometryData *v3; 
  unsigned int v4; 
  unsigned int ptCount; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int uniqueVertCount; 
  FxGlassVertex v10; 
  __int64 v11; 
  unsigned __int8 touchVert; 
  FxGlassCrackEdge *ExistingEdgeBeforeNewEdge; 
  FxGlassCrackEdge *next; 
  FxGlassCrackEdge *v15; 
  FxGlassCrackEdge **v16; 
  __int64 v17; 
  unsigned int v18; 
  FxGlassCrackEdge *v19; 
  FxGlassCrackEdge *v20; 
  __int64 loopCount; 
  unsigned int v22; 
  FxGlassCrackLoop *p_next; 
  __int64 v24; 
  unsigned int v25; 
  FxGlassCrackEdge *v26; 
  FxGlassCrackEdge *v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  int holeDataCount; 
  FxGlassGeometryData *v33; 

  pieceState = work->pieceState;
  holeDataCount = pieceState->holeDataCount;
  if ( pieceState->holeDataCount )
  {
    v3 = &work->glassSys->geoData[pieceState->geoDataStart + pieceState->vertCount];
    v4 = 0;
    v33 = v3;
    do
    {
      if ( work->loopCount >= 0x20 )
      {
        LODWORD(v30) = 32;
        LODWORD(v29) = work->loopCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 456, ASSERT_TYPE_ASSERT, "(unsigned)( work->loopCount ) < (unsigned)( ( sizeof( *array_counter( work->loops ) ) + 0 ) )", "work->loopCount doesn't index ARRAY_COUNT( work->loops )\n\t%i not in [0, %i)", v29, v30) )
          __debugbreak();
      }
      ptCount = work->ptCount;
      v6 = 0;
      v7 = v4;
      v8 = v4 + 1;
      v31 = v7;
      uniqueVertCount = v3[v7].hole.uniqueVertCount;
      if ( v3[v7].vert.x )
      {
        do
        {
          v10 = (FxGlassVertex)v3[v6 + v8];
          if ( work->ptCount >= 0xFF )
          {
            LODWORD(v30) = 255;
            LODWORD(v29) = work->ptCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 299, ASSERT_TYPE_ASSERT, "(unsigned)( work->ptCount ) < (unsigned)( ( sizeof( *array_counter( work->pts ) ) + 0 ) )", "work->ptCount doesn't index ARRAY_COUNT( work->pts )\n\t%i not in [0, %i)", v29, v30) )
              __debugbreak();
          }
          v11 = work->ptCount;
          ++v6;
          work->ptCount = v11 + 1;
          work->packedPts[v11] = v10;
          work->pts[v11].xy.v[0] = (float)v10.x * 0.03125;
          work->pts[v11].xy.v[1] = (float)v10.y * 0.03125;
        }
        while ( v6 < uniqueVertCount );
        v7 = v31;
      }
      touchVert = v3[v7].hole.touchVert;
      if ( touchVert == 0xFF )
      {
        loopCount = work->loopCount;
        v22 = ptCount;
        p_next = &work->loops[loopCount];
        if ( uniqueVertCount != 1 )
        {
          v24 = uniqueVertCount - 1;
          do
          {
            v25 = v22++;
            v26 = Glass_AllocCrackEdge(work, v25, v22, work->loopCount, 1u);
            p_next->firstEdge = v26;
            p_next = (FxGlassCrackLoop *)&v26->next;
            --v24;
          }
          while ( v24 );
          LODWORD(loopCount) = work->loopCount;
        }
        v27 = Glass_AllocCrackEdge(work, v22, ptCount, loopCount, 1u);
        p_next->firstEdge = v27;
        v28 = work->loopCount;
        v27->next = work->loops[work->loopCount].firstEdge;
        if ( !Glass_IsEdgeLoopBackwards(work, work->loops[v28].firstEdge) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 505, ASSERT_TYPE_ASSERT, "(Glass_IsEdgeLoopBackwards( work, work->loops[work->loopCount].firstEdge ))", (const char *)&queryFormat, "Glass_IsEdgeLoopBackwards( work, work->loops[work->loopCount].firstEdge )") )
          __debugbreak();
        ++work->loopCount;
      }
      else
      {
        if ( touchVert >= work->ptCount )
        {
          LODWORD(v30) = work->ptCount;
          LODWORD(v29) = touchVert;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 467, ASSERT_TYPE_ASSERT, "(unsigned)( hole->touchVert ) < (unsigned)( work->ptCount )", "hole->touchVert doesn't index work->ptCount\n\t%i not in [0, %i)", v29, v30) )
            __debugbreak();
        }
        ExistingEdgeBeforeNewEdge = Glass_FindExistingEdgeBeforeNewEdge(work, v3[v7].hole.touchVert, ptCount);
        next = ExistingEdgeBeforeNewEdge->next;
        v15 = Glass_AllocCrackEdge(work, v33[v7].hole.touchVert, ptCount, ExistingEdgeBeforeNewEdge->loopIndex, 1u);
        ExistingEdgeBeforeNewEdge->next = v15;
        v16 = &v15->next;
        if ( uniqueVertCount != 1 )
        {
          v17 = uniqueVertCount - 1;
          do
          {
            v18 = ptCount++;
            v19 = Glass_AllocCrackEdge(work, v18, ptCount, ExistingEdgeBeforeNewEdge->loopIndex, 1u);
            *v16 = v19;
            v16 = &v19->next;
            --v17;
          }
          while ( v17 );
          v7 = v31;
        }
        v20 = Glass_AllocCrackEdge(work, ptCount, v33[v7].hole.touchVert, ExistingEdgeBeforeNewEdge->loopIndex, 1u);
        *v16 = v20;
        v20->next = next;
        if ( Glass_IsEdgeLoopBackwards(work, work->loops[work->loopCount - 1].firstEdge) != (work->loopCount != 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 487, ASSERT_TYPE_ASSERT, "(Glass_IsEdgeLoopBackwards( work, work->loops[work->loopCount - 1].firstEdge ) == (work->loopCount != 1))", (const char *)&queryFormat, "Glass_IsEdgeLoopBackwards( work, work->loops[work->loopCount - 1].firstEdge ) == (work->loopCount != 1)") )
          __debugbreak();
      }
      v3 = v33;
      v4 = uniqueVertCount + v8;
    }
    while ( v4 != holeDataCount );
  }
}

/*
==============
Glass_MakeOuterPieceLoop
==============
*/
void Glass_MakeOuterPieceLoop(FxGlassCrackWork *work)
{
  const FxGlassPieceState *pieceState; 
  unsigned int v2; 
  __int64 geoDataStart; 
  unsigned int vertCount; 
  FxGlassSystem *glassSys; 
  FxGlassGeometryData *v7; 
  __int64 v8; 
  FxGlassVertex vert; 
  __int64 ptCount; 
  FxGlassCrackLoop *loops; 
  FxGlassCrackLoop *p_next; 
  unsigned int v13; 
  unsigned int supportMask; 
  FxGlassCrackEdge *v15; 
  unsigned int v16; 
  FxGlassCrackEdge *v17; 
  const FxGlassCrackEdge *firstEdge; 
  __int64 v19; 
  __int64 v20; 
  FxGlassVertex v21; 

  pieceState = work->pieceState;
  v2 = 0;
  geoDataStart = pieceState->geoDataStart;
  vertCount = pieceState->vertCount;
  glassSys = work->glassSys;
  work->ptCount = 0;
  v7 = &glassSys->geoData[geoDataStart];
  if ( vertCount )
  {
    v8 = vertCount;
    do
    {
      vert = v7->vert;
      v21 = v7->vert;
      if ( work->ptCount >= 0xFF )
      {
        LODWORD(v20) = 255;
        LODWORD(v19) = work->ptCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 299, ASSERT_TYPE_ASSERT, "(unsigned)( work->ptCount ) < (unsigned)( ( sizeof( *array_counter( work->pts ) ) + 0 ) )", "work->ptCount doesn't index ARRAY_COUNT( work->pts )\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      ptCount = work->ptCount;
      ++v7;
      work->ptCount = ptCount + 1;
      work->packedPts[ptCount] = vert;
      work->pts[ptCount].xy.v[0] = (float)vert.x * 0.03125;
      work->pts[ptCount].xy.v[1] = (float)v21.y * 0.03125;
      --v8;
    }
    while ( v8 );
  }
  work->loopCount = 1;
  loops = work->loops;
  p_next = work->loops;
  v13 = vertCount - 1;
  if ( v13 )
  {
    do
    {
      supportMask = pieceState->supportMask;
      if ( v2 >= 0x20 )
      {
        LODWORD(v20) = 32;
        LODWORD(v19) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      v15 = Glass_AllocCrackEdge(work, v2, v2 + 1, 0, ((0x80000000 >> v2) & supportMask) == 0);
      p_next->firstEdge = v15;
      ++v2;
      p_next = (FxGlassCrackLoop *)&v15->next;
    }
    while ( v2 < v13 );
    loops = work->loops;
  }
  v16 = pieceState->supportMask;
  if ( v2 >= 0x20 )
  {
    LODWORD(v20) = 32;
    LODWORD(v19) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  v17 = Glass_AllocCrackEdge(work, v2, 0, 0, ((0x80000000 >> v2) & v16) == 0);
  p_next->firstEdge = v17;
  firstEdge = loops->firstEdge;
  v17->next = loops->firstEdge;
  if ( Glass_IsEdgeLoopBackwards(work, firstEdge) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 424, ASSERT_TYPE_ASSERT, "(!Glass_IsEdgeLoopBackwards( work, work->loops[0].firstEdge ))", (const char *)&queryFormat, "!Glass_IsEdgeLoopBackwards( work, work->loops[0].firstEdge )") )
    __debugbreak();
}

/*
==============
Glass_MakePiece
==============
*/
void Glass_MakePiece(FxGlassCrackWork *work, FxGlassCrackEdge **loops, unsigned int loopCount)
{
  FxGlassCrackEdge **v4; 
  FxGlassCrackEdge *v5; 
  FxGlassCrackEdge *v6; 
  unsigned __int8 loopIndex; 
  FxGlassCrackEdge *twin; 
  FxGlassCrackWork *v9; 
  FxGlassCrackEdge **v10; 
  __int64 v11; 
  FxGlassCrackEdge *v12; 
  FxGlassCrackEdge *v13; 
  FxGlassCrackEdge *v14; 
  unsigned __int8 v15; 
  FxGlassCrackEdge *v16; 
  bool v17; 
  FxGlassShard outShard; 

  v4 = loops;
  if ( !work && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2022, ASSERT_TYPE_ASSERT, "(work)", (const char *)&queryFormat, "work") )
    __debugbreak();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2023, ASSERT_TYPE_ASSERT, "(loops)", (const char *)&queryFormat, "loops") )
    __debugbreak();
  if ( !loopCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2024, ASSERT_TYPE_ASSERT, "(loopCount > 0)", (const char *)&queryFormat, "loopCount > 0") )
    __debugbreak();
  v5 = *v4;
  v6 = NULL;
  if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2029, ASSERT_TYPE_ASSERT, "(edgeIter)", (const char *)&queryFormat, "edgeIter") )
    __debugbreak();
  loopIndex = v5->loopIndex;
  do
  {
    twin = v5->twin;
    if ( !twin )
      goto LABEL_17;
    if ( twin->loopIndex != loopIndex )
    {
      twin->twin = NULL;
      v5->twin = NULL;
LABEL_17:
      v6 = v5;
    }
    if ( !v5->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2044, ASSERT_TYPE_ASSERT, "(edgeIter->next)", (const char *)&queryFormat, "edgeIter->next") )
      __debugbreak();
    v5 = v5->next;
  }
  while ( v5 != *v4 );
  v9 = work;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2048, ASSERT_TYPE_ASSERT, "(border)", (const char *)&queryFormat, "border") )
    __debugbreak();
  *v4 = v6;
  if ( loopCount > 1 )
  {
    v10 = v4 + 1;
    v11 = loopCount - 1;
    do
    {
      v12 = *v10;
      v13 = NULL;
      v14 = NULL;
      v15 = (*v10)->loopIndex;
      do
      {
        v16 = v12->twin;
        if ( v16 )
        {
          if ( v16->loopIndex == v15 )
          {
            if ( v12->next->i1 == v12->i0 )
              v14 = v12;
          }
          else
          {
            v16->twin = NULL;
            v13 = v12;
            v12->twin = NULL;
          }
        }
        else
        {
          v13 = v12;
        }
        v12 = v12->next;
      }
      while ( v12 != *v10 );
      v17 = v13 == NULL;
      if ( !v13 )
      {
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2076, ASSERT_TYPE_ASSERT, "(holeEdge || crackEdge)", (const char *)&queryFormat, "holeEdge || crackEdge") )
          __debugbreak();
        v17 = 1;
      }
      if ( v17 )
        v13 = v14;
      *v10++ = v13;
      --v11;
    }
    while ( v11 );
    v4 = loops;
    v9 = work;
  }
  if ( Glass_ConvertLoopsToPiece(v9, v4, loopCount, &outShard) )
    Glass_FinalizeShard(v9, &outShard);
}

/*
==============
Glass_MakePieceForOuterLoop
==============
*/
void Glass_MakePieceForOuterLoop(FxGlassCrackWork *work, unsigned int otherPieceLoopIndex)
{
  __int64 v4; 
  const FxGlassCrackLoop *v5; 
  char v6; 
  unsigned int v7; 
  FxGlassCrackLoop *v8; 
  __int64 v9; 
  unsigned int loopCount; 
  unsigned int v11; 
  FxGlassCrackEdge *firstEdge; 
  FxGlassCrackEdge *v13; 
  FxGlassCrackEdge **v14; 
  FxGlassCrackEdge *v15; 
  FxGlassCrackEdge *next; 
  FxGlassCrackLoop *outerLoop; 
  FxGlassCrackEdge *loops[32]; 

  v4 = 1i64;
  v5 = &work->loops[otherPieceLoopIndex];
  outerLoop = &work->loops[work->loopCount];
  loops[0] = outerLoop->firstEdge;
  v6 = 0;
  v7 = 1;
  if ( Glass_DoesLoopContainLoop(work, outerLoop, v5) )
    v6 = 1;
  if ( work->loopCount > 1 )
  {
    do
    {
      if ( v7 == otherPieceLoopIndex || (v8 = &work->loops[v7], !Glass_DoesLoopContainLoop(work, outerLoop, v8)) || v6 && Glass_DoesLoopContainLoop(work, v5, &work->loops[v7]) )
      {
        ++v7;
      }
      else
      {
        loops[v4] = v8->firstEdge;
        v4 = (unsigned int)(v4 + 1);
        v9 = --work->loopCount;
        *(_OWORD *)&v8->firstEdge = *(_OWORD *)&work->loops[v9].firstEdge;
        work->loops[v7].maxs = work->loops[v9].maxs;
      }
      loopCount = work->loopCount;
    }
    while ( v7 < loopCount );
    v11 = 1;
    if ( (_DWORD)v4 != 1 && loopCount > 1 )
    {
      do
      {
        firstEdge = work->loops[v11].firstEdge;
        if ( firstEdge->loopIndex != v11 )
        {
          if ( !firstEdge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 517, ASSERT_TYPE_ASSERT, "(edgeLoop)", (const char *)&queryFormat, "edgeLoop") )
            __debugbreak();
          v13 = firstEdge;
          do
          {
            v13->loopIndex = v11;
            v13 = v13->next;
          }
          while ( v13 != firstEdge );
        }
        ++v11;
      }
      while ( v11 < work->loopCount );
    }
  }
  Glass_MakePiece(work, loops, v4);
  if ( (_DWORD)v4 )
  {
    v14 = loops;
    do
    {
      if ( !*v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 270, ASSERT_TYPE_ASSERT, "(loops[loopIter])", (const char *)&queryFormat, "loops[loopIter]") )
        __debugbreak();
      v15 = *v14;
      do
      {
        if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 274, ASSERT_TYPE_ASSERT, "(edge)", (const char *)&queryFormat, "edge") )
          __debugbreak();
        if ( !v15->next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 275, ASSERT_TYPE_ASSERT, "(edge->next)", (const char *)&queryFormat, "edge->next") )
          __debugbreak();
        next = v15->next;
        v15->dir = (vec2_t)-1i64;
        v15->twin = (FxGlassCrackEdge *)-1i64;
        v15->next = (FxGlassCrackEdge *)-1i64;
        v15->nextFree = work->firstFreeEdge;
        work->firstFreeEdge = v15;
        v15 = next;
      }
      while ( next && next != *v14 );
      ++v14;
      --v4;
    }
    while ( v4 );
  }
}

/*
==============
Glass_PickSeedDir
==============
*/
FxGlassCrackEdge *Glass_PickSeedDir(FxGlassCrackWork *work, vec2_t *outSeedDir)
{
  FxGlassCrackEdge *v2; 
  float v3; 
  unsigned int v5; 
  __int64 v6; 
  float v8; 
  FxGlassCrackPoint *inOutBreakOrg; 
  float v10; 
  float v11; 
  FxGlassCrackEdge *firstEdge; 
  FxGlassCrackEdge *v13; 
  FxGlassCrackEdge *v14; 
  __int64 i0; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v25; 
  float v26; 
  float v27; 

  v2 = NULL;
  v3 = FLOAT_3_4028235e38;
  v5 = 0;
  v6 = work->ptCount - 1;
  *outSeedDir = 0i64;
  _XMM8 = 0i64;
  v8 = 0.0;
  inOutBreakOrg = &work->pts[v6];
  if ( work->loopCount )
  {
    do
    {
      v10 = 0.0;
      v11 = 0.0;
      firstEdge = work->loops[v5].firstEdge;
      v13 = firstEdge;
      do
      {
        v14 = v13;
        v13 = v13->next;
        i0 = v13->i0;
        v16 = v13->dir.v[0];
        v17 = inOutBreakOrg->xy.v[0] - work->pts[i0].xy.v[0];
        v18 = inOutBreakOrg->xy.v[1] - work->pts[i0].xy.v[1];
        v19 = (float)(v18 * v18) + (float)(v17 * v17);
        v20 = (float)(v18 * v13->dir.v[1]) + (float)(v16 * v17);
        v21 = (float)(v13->len * 0.5) - COERCE_FLOAT(COERCE_UNSIGNED_INT(v20 - (float)(v13->len * 0.5)) & _xmm);
        if ( v21 <= 0.0 || (v11 = v19 - (float)(v20 * v20), v10 = (float)(v18 * v13->dir.v[1]) + (float)(v16 * v17), v11 >= 1.0) )
        {
          if ( v21 < 4.0 )
          {
            __asm
            {
              vcmpless xmm0, xmm8, xmm12
              vblendvps xmm1, xmm8, xmm13, xmm0
            }
            v10 = *(float *)&_XMM1;
            v11 = (float)((float)(*(float *)&_XMM1 - (float)(v20 * 2.0)) * *(float *)&_XMM1) + v19;
          }
        }
        if ( v3 > v11 )
        {
          outSeedDir->v[0] = (float)(v16 * COERCE_FLOAT(LODWORD(v10) ^ _xmm)) + v17;
          outSeedDir->v[1] = (float)(COERCE_FLOAT(LODWORD(v10) ^ _xmm) * v13->dir.v[1]) + v18;
          v3 = v11;
          v2 = v14;
          v8 = v10;
        }
      }
      while ( v13 != firstEdge );
      ++v5;
    }
    while ( v5 < work->loopCount );
    if ( v3 <= 1.0 )
      return Glass_SnapSeedDirToEdge(work, v2, v8, v3, &inOutBreakOrg->xy, outSeedDir);
  }
  v25 = -1.0 / fsqrt(v3);
  v26 = v25 * outSeedDir->v[0];
  v27 = v25 * outSeedDir->v[1];
  outSeedDir->v[0] = v26;
  outSeedDir->v[1] = v27;
  return 0i64;
}

/*
==============
Glass_PlayShatterEffects
==============
*/
void Glass_PlayShatterEffects(FxGlassSystem *glassSys, unsigned int pieceIndex, const tmat33_t<vec3_t> *axis, const vec3_t *shatterDir, float maxEffects)
{
  float v7; 
  float v8; 
  float v9; 
  FxGlassPiecePlace *piecePlaces; 
  __int64 v11; 
  const FxGlassPieceState *v12; 
  FxCombinedDef *v13; 
  bool v14; 
  int v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  __int64 geoDataStart; 
  FxGlassGeometryData *geoData; 
  int y; 
  FxGlassGeometryData *v23; 
  unsigned int vertCount; 
  int v25; 
  int x; 
  int v27; 
  FxGlassGeometryData *v28; 
  __int64 v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  __int64 v46; 
  __int64 v47; 
  int v48; 
  int v49; 
  int v50; 
  __int64 v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  int point; 
  unsigned int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  const FxGlassPieceState *v70; 
  __int64 v71; 
  __int64 v72; 
  FxGlassPiecePlace *v73; 
  FxCombinedDef *v74; 
  vec3_t normal; 
  vec3_t v76; 
  vec3_t origin; 

  v7 = axis->m[2].v[1];
  v8 = axis->m[2].v[0];
  v9 = axis->m[2].v[2];
  if ( (float)((float)((float)(v7 * shatterDir->v[1]) + (float)(v8 * shatterDir->v[0])) + (float)(v9 * shatterDir->v[2])) <= 0.0 )
  {
    LODWORD(normal.v[0]) = LODWORD(v8) ^ _xmm;
    LODWORD(normal.v[2]) = LODWORD(v9) ^ _xmm;
    LODWORD(normal.v[1]) = LODWORD(v7) ^ _xmm;
  }
  else
  {
    normal.v[0] = axis->m[2].v[0];
    normal.v[1] = v7;
    normal.v[2] = v9;
  }
  piecePlaces = glassSys->piecePlaces;
  v11 = 32i64 * pieceIndex;
  v12 = (FxGlassPieceState *)((char *)glassSys->pieceStates + v11);
  v72 = v11;
  v70 = v12;
  v73 = piecePlaces;
  v13 = (FxCombinedDef *)&fxWorld.glassGlob.defs[v12->defIndex];
  v14 = v12->areaX2 >= 2048.0;
  v74 = v13;
  if ( !v14 )
  {
    if ( maxEffects >= 0.5 )
      goto LABEL_9;
    v15 = s_glassRandSeed + 1;
    s_glassRandSeed = v15;
    if ( v15 == 16361 )
    {
      s_glassRandSeed = 0;
      v15 = 0;
    }
    if ( (float)(0.5 * fx_randomTable[v15]) <= maxEffects )
    {
LABEL_9:
      v16 = 0.03125 * axis->m[1].v[0];
      point = 0;
      v62 = 1;
      v17 = v16 + *(float *)((char *)piecePlaces->frame.origin.v + v11);
      v18 = 0.03125 * axis->m[1].v[1];
      origin.v[0] = v17;
      v19 = 0.03125 * axis->m[1].v[2];
      origin.v[1] = v18 + *(float *)((char *)&piecePlaces->frame.origin.v[1] + v11);
      origin.v[2] = v19 + *(float *)((char *)&piecePlaces->frame.origin.v[2] + v11);
      Glass_PlayEffect(v13 + 8, &origin, &normal);
    }
    return;
  }
  geoDataStart = v12->geoDataStart;
  geoData = glassSys->geoData;
  y = geoData[geoDataStart].vert.y;
  v23 = &geoData[geoDataStart];
  vertCount = v12->vertCount;
  v25 = y;
  x = v23->vert.x;
  v65 = y;
  v27 = x;
  *(_QWORD *)origin.v = v23;
  if ( vertCount > 1 )
  {
    v28 = v23 + 1;
    v29 = vertCount - 1;
    do
    {
      v30 = v27;
      v27 = v28->vert.x;
      v31 = x;
      ++v28;
      v14 = v27 < x;
      v32 = v25;
      v25 = v28[-1].vert.y;
      v33 = y;
      x = v27;
      y = v25;
      if ( !v14 )
        x = v31;
      if ( v25 >= v33 )
        y = v33;
      if ( v27 <= v30 )
        v27 = v30;
      if ( v25 <= v32 )
        v25 = v32;
      --v29;
    }
    while ( v29 );
    v12 = v70;
    v65 = y;
  }
  v34 = v27 - x;
  v35 = v25 - y;
  v36 = (int)(float)((float)v34 * 0.00048828125);
  v67 = v34;
  v66 = v35;
  v37 = (int)(float)((float)v35 * 0.00048828125);
  if ( v36 < 1 )
    v36 = 1;
  if ( v37 < 1 )
    v37 = 1;
  if ( (float)(v36 * v37) > maxEffects )
  {
    v38 = s_glassRandSeed + 1;
    s_glassRandSeed = v38;
    _XMM1 = 0i64;
    __asm { vroundss xmm1, xmm1, xmm2, 1 }
    if ( v38 == 16361 )
    {
      s_glassRandSeed = 0;
      v38 = 0;
    }
    v41 = (int)*(float *)&_XMM1 + 1;
    if ( (float)(maxEffects - *(float *)&_XMM1) <= fx_randomTable[v38] )
      v41 = (int)*(float *)&_XMM1;
    if ( v41 < 1 )
      return;
    if ( v36 * v37 > v41 )
    {
      do
      {
        v42 = v36 - 1;
        if ( v36 <= 1 )
          v42 = v36;
        v36 = v42;
        v43 = v37 - 1;
        if ( v37 <= 1 )
          v43 = v37;
        v37 = v43;
      }
      while ( v36 * v43 > v41 );
    }
  }
  v44 = 2 * v37;
  v63 = 0;
  v68 = 2 * v37;
  if ( 2 * v37 <= 1 )
  {
LABEL_49:
    v57 = 0.03125 * axis->m[1].v[0];
    point = 0;
    v62 = 1;
    v58 = v57 + *(float *)((char *)piecePlaces->frame.origin.v + v11);
    v59 = 0.03125 * axis->m[1].v[1];
    v76.v[0] = v58;
    v60 = 0.03125 * axis->m[1].v[2];
    v76.v[1] = v59 + *(float *)((char *)&piecePlaces->frame.origin.v[1] + v11);
    v76.v[2] = v60 + *(float *)((char *)&piecePlaces->frame.origin.v[2] + v11);
    Glass_PlayEffect(v74 + 7, &v76, &normal);
    return;
  }
  v45 = 2 * v36;
  v46 = ((unsigned int)(v44 - 2) >> 1) + 1;
  v64 = 2 * v36;
  v71 = (unsigned int)v46;
  v69 = 2 * v35;
  do
  {
    v62 = y + v35 / v44;
    if ( v45 > 1 )
    {
      v47 = v72;
      v48 = 2 * v34;
      v49 = v34;
      v50 = v64;
      v51 = ((unsigned int)(v64 - 2) >> 1) + 1;
      do
      {
        point = x + v49 / v50;
        if ( Glass_DoesPieceContainPoint(v12, *(const FxGlassGeometryData **)origin.v, &point) )
        {
          v52 = _mm_cvtepi32_ps((__m128i)(unsigned int)point).m128_f32[0];
          v53 = _mm_cvtepi32_ps((__m128i)v62).m128_f32[0] * 0.03125;
          v54 = (float)((float)(v52 * 0.03125) * axis->m[0].v[1]) + *(float *)((char *)&v73->frame.origin.v[1] + v47);
          v76.v[0] = (float)((float)((float)(v52 * 0.03125) * axis->m[0].v[0]) + *(float *)((char *)v73->frame.origin.v + v47)) + (float)(v53 * axis->m[1].v[0]);
          v55 = v54 + (float)(v53 * axis->m[1].v[1]);
          v56 = (float)((float)(v52 * 0.03125) * axis->m[0].v[2]) + *(float *)((char *)&v73->frame.origin.v[2] + v47);
          v76.v[1] = v55;
          v76.v[2] = v56 + (float)(v53 * axis->m[1].v[2]);
          Glass_PlayEffect(v74 + 7, &v76, &normal);
          ++v63;
        }
        v12 = v70;
        v49 += v48;
        --v51;
      }
      while ( v51 );
      v35 = v66;
      v34 = v67;
      v45 = v64;
      y = v65;
      v46 = v71;
      v44 = v68;
    }
    v35 += v69;
    v12 = v70;
    v71 = --v46;
    v66 = v35;
  }
  while ( v46 );
  if ( !v63 )
  {
    v11 = v72;
    piecePlaces = v73;
    goto LABEL_49;
  }
}

/*
==============
Glass_PrintCrackPieceAssertReproData
==============
*/
void Glass_PrintCrackPieceAssertReproData()
{
  const FxGlassCrackWork *work; 
  __int64 geoDataStart; 
  FxGlassGeometryData *geoData; 
  FxGlassGeometryData *v3; 
  const char *v4; 
  const char *v5; 
  float v6; 
  const char *v7; 
  float v8; 
  const char *v9; 
  float v10; 
  const char *v11; 
  const char *v12; 
  float v13; 
  const char *v14; 
  float v15; 
  const char *v16; 
  float v17; 
  float v18; 
  const char *v19; 
  float v20; 
  const char *v21; 
  float v22; 
  const char *v23; 
  float v24; 
  const char *v25; 
  float v26; 
  const char *v27; 
  float v28; 
  const char *v29; 
  float v30; 
  const char *v31; 
  float v32; 
  const char *v33; 
  float v34; 
  unsigned __int8 vertCount; 
  __int64 v36; 
  FxGlassGeometryData *v37; 
  unsigned __int8 holeDataCount; 
  FxGlassGeometryData *v39; 
  __int64 v40; 
  __int64 v41; 
  unsigned __int8 crackDataCount; 
  FxGlassGeometryData *v43; 
  __int64 v44; 
  FxGlassGeometryData *v45; 

  work = s_glassCrackAssert.work;
  geoDataStart = s_glassCrackAssert.work->pieceState->geoDataStart;
  geoData = s_glassCrackAssert.work->glassSys->geoData;
  v3 = &geoData[geoDataStart];
  Com_Printf(1, "---------------------------------------------------------------\n");
  Com_Printf(1, "Glass assert repro data\n");
  Com_Printf(1, "\tconst uint randomSeed = %i;\n", (unsigned int)s_glassCrackAssert.randSeed);
  Com_Printf(1, "\tconst float avgCrackLength = ");
  v4 = "%.8g.0f%s";
  v5 = "%.8g.0f%s";
  if ( s_glassCrackAssert.avgCrackLength != (float)(int)s_glassCrackAssert.avgCrackLength )
    v5 = "%.8gf%s";
  Com_Printf(1, v5, s_glassCrackAssert.avgCrackLength, ";\n");
  Com_Printf(1, "\tconst FxGlassVertex breakOrg = { %i, %i };\n", (unsigned int)s_glassCrackAssert.breakOrg.x, (unsigned int)s_glassCrackAssert.breakOrg.y);
  Com_Printf(1, "\tconst vec3_t breakDir = { ");
  v6 = work->impactDir.v[0];
  v7 = "%.8g.0f%s";
  if ( v6 != (float)(int)v6 )
    v7 = "%.8gf%s";
  Com_Printf(1, v7, v6, ", ");
  v8 = work->impactDir.v[1];
  v9 = "%.8g.0f%s";
  if ( v8 != (float)(int)v8 )
    v9 = "%.8gf%s";
  Com_Printf(1, v9, v8, ", ");
  v10 = work->impactDir.v[2];
  v11 = "%.8g.0f%s";
  if ( v10 != (float)(int)v10 )
    v11 = "%.8gf%s";
  Com_Printf(1, v11, v10, " };\n");
  Com_Printf(1, "\n");
  Com_Printf(1, "\tconst vec3_t origin = { ");
  v12 = "%.8g.0f%s";
  v13 = work->piecePlace->frame.origin.v[0];
  if ( v13 != (float)(int)v13 )
    v12 = "%.8gf%s";
  Com_Printf(1, v12, v13, ", ");
  v14 = "%.8g.0f%s";
  v15 = work->piecePlace->frame.origin.v[1];
  if ( v15 != (float)(int)v15 )
    v14 = "%.8gf%s";
  Com_Printf(1, v14, v15, ", ");
  v16 = "%.8g.0f%s";
  v17 = work->piecePlace->frame.origin.v[2];
  if ( v17 != (float)(int)v17 )
    v16 = "%.8gf%s";
  Com_Printf(1, v16, v17, " };\n");
  Com_Printf(1, "\tconst mat33_t axis = \n");
  Com_Printf(1, "\t{\n");
  Com_Printf(1, "\t\t{ ");
  v18 = work->axis.m[0].v[0];
  v19 = "%.8g.0f%s";
  if ( v18 != (float)(int)v18 )
    v19 = "%.8gf%s";
  Com_Printf(1, v19, v18, ", ");
  v20 = work->axis.m[0].v[1];
  v21 = "%.8g.0f%s";
  if ( v20 != (float)(int)v20 )
    v21 = "%.8gf%s";
  Com_Printf(1, v21, v20, ", ");
  v22 = work->axis.m[0].v[2];
  v23 = "%.8g.0f%s";
  if ( v22 != (float)(int)v22 )
    v23 = "%.8gf%s";
  Com_Printf(1, v23, v22, " },\n");
  Com_Printf(1, "\t\t{ ");
  v24 = work->axis.m[1].v[0];
  v25 = "%.8g.0f%s";
  if ( v24 != (float)(int)v24 )
    v25 = "%.8gf%s";
  Com_Printf(1, v25, v24, ", ");
  v26 = work->axis.m[1].v[1];
  v27 = "%.8g.0f%s";
  if ( v26 != (float)(int)v26 )
    v27 = "%.8gf%s";
  Com_Printf(1, v27, v26, ", ");
  v28 = work->axis.m[1].v[2];
  v29 = "%.8g.0f%s";
  if ( v28 != (float)(int)v28 )
    v29 = "%.8gf%s";
  Com_Printf(1, v29, v28, " },\n");
  Com_Printf(1, "\t\t{ ");
  v30 = work->axis.m[2].v[0];
  v31 = "%.8g.0f%s";
  if ( v30 != (float)(int)v30 )
    v31 = "%.8gf%s";
  Com_Printf(1, v31, v30, ", ");
  v32 = work->axis.m[2].v[1];
  v33 = "%.8g.0f%s";
  if ( v32 != (float)(int)v32 )
    v33 = "%.8gf%s";
  Com_Printf(1, v33, v32, ", ");
  v34 = work->axis.m[2].v[2];
  if ( v34 != (float)(int)v34 )
    v4 = "%.8gf%s";
  Com_Printf(1, v4, v34, " },\n");
  Com_Printf(1, "\t};\n");
  Com_Printf(1, "\n");
  Com_Printf(1, "\tconst uint supportMask = 0x%08x;\n", work->pieceState->supportMask);
  Com_Printf(1, "\tconst uint vertCount = %i;\n", work->pieceState->vertCount);
  Com_Printf(1, "\tconst uint holeDataCount = %i;\n", work->pieceState->holeDataCount);
  Com_Printf(1, "\tconst uint crackDataCount = %i;\n", work->pieceState->crackDataCount);
  Com_Printf(1, "\tconst uint fanDataCount = %i;\n", work->pieceState->fanDataCount);
  Com_Printf(1, "\n");
  Com_Printf(1, "\tconst FxGlassGeometryData srcGeoData[] =\n");
  Com_Printf(1, "\t{\n");
  vertCount = work->pieceState->vertCount;
  Com_Printf(1, (const char *)&queryFormat, "\t\t
  if ( vertCount )
  {
    v36 = vertCount;
    do
    {
      Com_Printf(1, "\t\t{ %i, %i },\n", (unsigned int)v3->vert.x, (unsigned int)v3->vert.y);
      ++v3;
      --v36;
    }
    while ( v36 );
  }
  v37 = &geoData[geoDataStart + vertCount];
  holeDataCount = work->pieceState->holeDataCount;
  Com_Printf(1, (const char *)&queryFormat, "\n\t\t
  if ( holeDataCount )
  {
    v39 = v37;
    v40 = holeDataCount;
    do
    {
      Com_Printf(1, "\t\t{ %i, %i },\n", (unsigned int)v39->vert.x, (unsigned int)v39->vert.y);
      ++v39;
      --v40;
    }
    while ( v40 );
  }
  v41 = holeDataCount;
  crackDataCount = work->pieceState->crackDataCount;
  v43 = &v37[v41];
  Com_Printf(1, (const char *)&queryFormat, "\n\t\t
  if ( crackDataCount )
  {
    v44 = crackDataCount;
    do
    {
      Com_Printf(1, "\t\t{ %i, %i },\n", (unsigned int)v43->vert.x, (unsigned int)v43->vert.y);
      ++v43;
      --v44;
    }
    while ( v44 );
  }
  v45 = &v37[v41 + crackDataCount];
  LOBYTE(work) = work->pieceState->fanDataCount;
  Com_Printf(1, (const char *)&queryFormat, "\n\t\t
  if ( (_BYTE)work )
  {
    work = (const FxGlassCrackWork *)(unsigned __int8)work;
    do
    {
      Com_Printf(1, "\t\t{ %i, %i },\n", (unsigned int)v45->vert.x, (unsigned int)v45->vert.y);
      ++v45;
      work = (const FxGlassCrackWork *)((char *)work - 1);
    }
    while ( work );
  }
  Com_Printf(1, "\t};\n");
  Com_Printf(1, "---------------------------------------------------------------\n");
}

/*
==============
Glass_ProcessCrack
==============
*/
void Glass_ProcessCrack(FxGlassCrackWork *work, const FxGlassCrackBranch *branch)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  unsigned int startIndex; 
  FxGlassCrackEdge *breakOrgLoop; 
  __int64 loopIndex; 
  __int64 breakOrgIndex; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  int v19; 
  float priorCrackLength; 
  float deflectLimit; 
  FxGlassCrackEdge *next; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  const char *v31; 
  int v32; 
  const char *v33; 
  FxGlassCrackEdge *clippedEdge; 
  __int64 v35; 
  FxGlassCrackEdge *frontHead; 
  FxGlassCrackEdge *backTail; 
  FxGlassCrackEdge *frontTail; 
  __int64 v39; 
  unsigned __int8 v40; 
  __int64 v41; 
  unsigned __int8 v42; 
  __int64 v43; 
  FxGlassCrackEdge *hitEdge; 
  FxGlassCrackEdge *backHead; 
  FxGlassCrackEdge *v46; 
  FxGlassCrackEdge *v47; 
  FxGlassCrackEdge *v48; 
  FxGlassCrackEdge *v49; 
  FxGlassCrackEdge *v50; 
  FxGlassCrackWork *v51; 
  unsigned int loopCount; 
  FxGlassCrackEdge *v53; 
  __int64 v54; 
  FxGlassCrackEdge *v55; 
  __int64 v56; 
  unsigned int v57; 
  FxGlassCrackEdge *v58; 
  FxGlassCrackEdge *v59; 
  FxGlassCrackEdge *v60; 
  FxGlassCrackEdge *v61; 
  FxGlassCrackEdge *v62; 
  __int64 v63; 
  unsigned __int8 v64; 
  int v65; 
  FxGlassCrackWalk walk; 
  __int128 v67; 
  __int128 v68; 
  __int128 v69; 
  __int128 v70; 

  startIndex = branch->startIndex;
  v68 = v4;
  v67 = v5;
  walk.clip.startIndex = startIndex;
  if ( startIndex == work->breakOrgIndex )
  {
    if ( branch->afterEdge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2262, ASSERT_TYPE_SANITY, "( branch->afterEdge == 0 )", (const char *)&queryFormat, "branch->afterEdge == NULL") )
      __debugbreak();
    breakOrgLoop = work->breakOrgLoop;
    if ( !breakOrgLoop )
    {
      breakOrgIndex = work->breakOrgIndex;
      walk.loopIndex = work->loopCount;
      loopIndex = walk.loopIndex;
      v12 = 3i64 * walk.loopIndex + 2436;
      work->packedPts[2 * v12] = (FxGlassVertex)LODWORD(work->pts[breakOrgIndex].xy.v[0]);
      work->packedPts[2 * v12 + 1] = (FxGlassVertex)LODWORD(work->pts[breakOrgIndex].xy.v[1]);
      v13 = loopIndex;
      v14 = work->breakOrgIndex;
      work->loops[v13].maxs.v[0] = work->pts[v14].xy.v[0];
      work->loops[v13].maxs.v[1] = work->pts[v14].xy.v[1];
      goto LABEL_12;
    }
    if ( breakOrgLoop->i1 != startIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2272, ASSERT_TYPE_SANITY, "( startEdge->i1 == walk.clip.startIndex )", (const char *)&queryFormat, "startEdge->i1 == walk.clip.startIndex") )
      __debugbreak();
  }
  else
  {
    breakOrgLoop = branch->afterEdge;
  }
  walk.loopIndex = breakOrgLoop->loopIndex;
LABEL_12:
  v15 = branch->baseDir.v[0];
  v16 = branch->dir.v[0];
  v17 = branch->dir.v[1];
  walk.clip.len = branch->len;
  v18 = branch->baseDir.v[1];
  v19 = s_glassRandSeed + 1;
  s_glassRandSeed = v19;
  walk.clip.baseDir.v[1] = v18;
  priorCrackLength = branch->priorCrackLength;
  walk.clip.baseDir.v[0] = v15;
  deflectLimit = branch->deflectLimit;
  walk.totalCrackLength = priorCrackLength;
  walk.clip.dir.v[0] = v16;
  walk.clip.dir.v[1] = v17;
  walk.clip.deflectLimit = deflectLimit;
  if ( v19 == 16361 )
  {
    v19 = 0;
    s_glassRandSeed = 0;
  }
  walk.cutoffCrackLength = (float)((float)(work->crackLengthMax - work->crackLengthMin) * fx_randomTable[v19]) + work->crackLengthMin;
  if ( breakOrgLoop )
  {
    next = breakOrgLoop->next;
    v23 = breakOrgLoop->dir.v[0];
    v70 = v2;
    v24 = breakOrgLoop->dir.v[1];
    v25 = v24 * next->dir.v[1];
    v26 = v23 * next->dir.v[0];
    v69 = v3;
    v27 = v26 + v25;
    v28 = (float)(v24 * v17) + (float)(v23 * v16);
    v29 = v16 * v24;
    v30 = v17 * v23;
    if ( (float)(v23 * next->dir.v[1]) >= (float)(v24 * next->dir.v[0]) )
    {
      if ( v30 < v29 || v28 >= v27 )
        goto LABEL_24;
      v31 = "Glass_IsConvexCorner( edge0, dir ) || dotTest >= dotRef";
      v32 = 1402;
      v33 = "(Glass_IsConvexCorner( edge0, dir ) || dotTest >= dotRef)";
    }
    else
    {
      if ( v30 < v29 && v28 <= v27 )
        goto LABEL_24;
      v31 = "Glass_IsConvexCorner( edge0, dir ) && dotTest <= dotRef";
      v32 = 1400;
      v33 = "(Glass_IsConvexCorner( edge0, dir ) && dotTest <= dotRef)";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", v32, ASSERT_TYPE_ASSERT, v33, (const char *)&queryFormat, v31) )
      __debugbreak();
  }
LABEL_24:
  if ( Glass_DoCrackWalk(work, &walk) )
  {
    clippedEdge = walk.clippedEdge;
    if ( !walk.clippedEdge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2295, ASSERT_TYPE_ASSERT, "(walk.clippedEdge)", (const char *)&queryFormat, "walk.clippedEdge") )
      __debugbreak();
    v35 = walk.loopIndex;
    if ( clippedEdge->loopIndex != walk.loopIndex )
    {
      if ( clippedEdge->i1 != walk.backHead->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2299, ASSERT_TYPE_ASSERT, "(walk.clippedEdge->i1 == walk.backHead->i0)", (const char *)&queryFormat, "walk.clippedEdge->i1 == walk.backHead->i0") )
        __debugbreak();
      frontHead = walk.frontHead;
      backTail = walk.backTail;
      if ( walk.backTail->i1 != walk.frontHead->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2300, ASSERT_TYPE_ASSERT, "(walk.backTail->i1 == walk.frontHead->i0)", (const char *)&queryFormat, "walk.backTail->i1 == walk.frontHead->i0") )
        __debugbreak();
      frontTail = walk.frontTail;
      if ( walk.frontTail->i1 != walk.clip.hitEdge->i0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2301, ASSERT_TYPE_ASSERT, "(walk.frontTail->i1 == walk.clip.hitEdge->i0)", (const char *)&queryFormat, "walk.frontTail->i1 == walk.clip.hitEdge->i0") )
          __debugbreak();
        frontTail = walk.frontTail;
      }
      v39 = clippedEdge->loopIndex;
      if ( (unsigned int)v35 >= (unsigned int)v39 )
      {
        v42 = clippedEdge->loopIndex;
        frontTail->next = walk.backHead;
        v65 = v39;
        LODWORD(v39) = v35;
        v64 = v42;
        backTail->next = frontHead;
        Glass_RenumberLoop(frontHead, v42);
        if ( (unsigned int)v35 >= work->loopCount )
        {
LABEL_44:
          ExpandBounds2D(&work->loops[(unsigned int)v39].mins, &work->loops[(unsigned int)v39].maxs, &work->loops[v65].mins, &work->loops[v65].maxs);
          if ( breakOrgLoop )
          {
            v43 = work->loopCount - 1;
            work->loopCount = v43;
            if ( (_DWORD)v39 != (_DWORD)v43 )
            {
              *(_OWORD *)&work->loops[(unsigned int)v39].firstEdge = *(_OWORD *)&work->loops[v43].firstEdge;
              work->loops[(unsigned int)v39].maxs = work->loops[v43].maxs;
              Glass_RenumberLoop(work->loops[(unsigned int)v39].firstEdge, v39);
            }
            backTail->next = breakOrgLoop->next;
            breakOrgLoop->next = frontHead;
          }
          else
          {
            backTail->next = frontHead;
            work->breakOrgLoop = backTail;
          }
          hitEdge = walk.clip.hitEdge;
          clippedEdge->next = walk.backHead;
          walk.frontTail->next = hitEdge;
          if ( work->breakOrgLoop->i1 != work->breakOrgIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2345, ASSERT_TYPE_SANITY, "( work->breakOrgLoop->i1 == work->breakOrgIndex )", (const char *)&queryFormat, "work->breakOrgLoop->i1 == work->breakOrgIndex") )
            __debugbreak();
          return;
        }
        v40 = v64;
        v41 = v35;
      }
      else
      {
        v40 = v35;
        v41 = v39;
        v65 = v35;
      }
      Glass_RenumberLoop(work->loops[v41].firstEdge, v40);
      goto LABEL_44;
    }
    if ( work->loopCount >= 0x20 )
    {
      LODWORD(v63) = work->loopCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2350, ASSERT_TYPE_ASSERT, "(unsigned)( work->loopCount ) < (unsigned)( ( sizeof( *array_counter( work->loops ) ) + 0 ) )", "work->loopCount doesn't index ARRAY_COUNT( work->loops )\n\t%i not in [0, %i)", v63, 32) )
        __debugbreak();
    }
    if ( !breakOrgLoop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2353, ASSERT_TYPE_ASSERT, "(startEdge)", (const char *)&queryFormat, "startEdge") )
      __debugbreak();
    backHead = walk.backHead;
    if ( clippedEdge->i1 != walk.backHead->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2354, ASSERT_TYPE_ASSERT, "(walk.clippedEdge->i1 == walk.backHead->i0)", (const char *)&queryFormat, "walk.clippedEdge->i1 == walk.backHead->i0") )
      __debugbreak();
    v46 = walk.backTail;
    if ( walk.backTail->i1 != breakOrgLoop->next->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2355, ASSERT_TYPE_ASSERT, "(walk.backTail->i1 == startEdge->next->i0)", (const char *)&queryFormat, "walk.backTail->i1 == startEdge->next->i0") )
      __debugbreak();
    v47 = walk.frontHead;
    clippedEdge->next = backHead;
    v46->next = breakOrgLoop->next;
    if ( breakOrgLoop->i1 != v47->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2360, ASSERT_TYPE_ASSERT, "(startEdge->i1 == walk.frontHead->i0)", (const char *)&queryFormat, "startEdge->i1 == walk.frontHead->i0") )
      __debugbreak();
    v48 = walk.clip.hitEdge;
    v49 = walk.frontTail;
    if ( walk.frontTail->i1 != walk.clip.hitEdge->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2361, ASSERT_TYPE_ASSERT, "(walk.frontTail->i1 == walk.clip.hitEdge->i0)", (const char *)&queryFormat, "walk.frontTail->i1 == walk.clip.hitEdge->i0") )
      __debugbreak();
    breakOrgLoop->next = v47;
    v50 = breakOrgLoop;
    v49->next = v48;
    v51 = work;
    if ( (_DWORD)v35 )
    {
      if ( Glass_IsEdgeLoopBackwards(work, breakOrgLoop) )
      {
        loopCount = work->loopCount;
        v53 = clippedEdge;
        v50 = breakOrgLoop;
      }
      else
      {
        Glass_RenumberLoop(work->loops[0].firstEdge, work->loopCount);
        loopCount = 0;
        v53 = breakOrgLoop;
        v54 = work->loopCount;
        *(_OWORD *)&work->loops[v54].firstEdge = *(_OWORD *)&work->loops[0].firstEdge;
        work->loops[v54].maxs = work->loops[0].maxs;
        v50 = clippedEdge;
      }
      v51 = work;
    }
    else
    {
      loopCount = work->loopCount;
      v53 = clippedEdge;
    }
    Glass_SplitLoop(v51, v50, v53, loopCount);
    Glass_MakePieceForOuterLoop(work, breakOrgLoop->loopIndex);
  }
  else
  {
    v55 = walk.frontHead;
    if ( walk.frontHead )
    {
      if ( breakOrgLoop )
      {
        v60 = walk.backTail;
        if ( walk.backTail->i1 != breakOrgLoop->next->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2411, ASSERT_TYPE_ASSERT, "(walk.backTail->i1 == startEdge->next->i0)", (const char *)&queryFormat, "walk.backTail->i1 == startEdge->next->i0") )
          __debugbreak();
        v61 = walk.backHead;
        v62 = walk.frontTail;
        if ( walk.frontTail->i1 != walk.backHead->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2412, ASSERT_TYPE_ASSERT, "(walk.frontTail->i1 == walk.backHead->i0)", (const char *)&queryFormat, "walk.frontTail->i1 == walk.backHead->i0") )
          __debugbreak();
        if ( breakOrgLoop->i1 != v55->i0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2413, ASSERT_TYPE_ASSERT, "(startEdge->i1 == walk.frontHead->i0)", (const char *)&queryFormat, "startEdge->i1 == walk.frontHead->i0") )
          __debugbreak();
        v60->next = breakOrgLoop->next;
        v62->next = v61;
        breakOrgLoop->next = v55;
      }
      else
      {
        v56 = walk.loopIndex;
        v57 = work->loopCount;
        if ( walk.loopIndex != v57 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2402, ASSERT_TYPE_ASSERT, "(walk.loopIndex == work->loopCount)", (const char *)&queryFormat, "walk.loopIndex == work->loopCount") )
          __debugbreak();
        work->loopCount = v57 + 1;
        v58 = walk.backHead;
        work->loops[v56].firstEdge = v55;
        walk.frontTail->next = v58;
        v59 = walk.backTail;
        work->breakOrgLoop = walk.backTail;
        v59->next = v55;
      }
    }
  }
}

/*
==============
Glass_RenumberLoop
==============
*/
void Glass_RenumberLoop(FxGlassCrackEdge *edgeLoop, unsigned __int8 newLoopIndex)
{
  FxGlassCrackEdge *v4; 

  if ( !edgeLoop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 517, ASSERT_TYPE_ASSERT, "(edgeLoop)", (const char *)&queryFormat, "edgeLoop") )
    __debugbreak();
  v4 = edgeLoop;
  do
  {
    v4->loopIndex = newLoopIndex;
    v4 = v4->next;
  }
  while ( v4 != edgeLoop );
}

/*
==============
Glass_ReprojectCrackDecals
==============
*/
void Glass_ReprojectCrackDecals(FxGlassSystem *glassSys, unsigned int pieceIndex, const vec3_t *impactDir, const tmat33_t<vec3_t> *axis)
{
  FxGlassDef *v6; 
  LocalClientNum_t v7; 
  connstate_t *p_connectionState; 
  FxMarksSystem *MarksSystem; 
  unsigned __int16 firstGlassMarkHandle; 
  __int64 v11; 
  const vec3_t *v12; 
  __int64 v13; 
  __int64 v14; 
  connstate_t *v15; 
  LocalClientNum_t v16; 

  v6 = &fxWorld.glassGlob.defs[glassSys->pieceStates[pieceIndex].defIndex];
  if ( v6->crackDecalEffect.particleSystemDef )
  {
    v7 = LOCAL_CLIENT_0;
    v16 = LOCAL_CLIENT_0;
    if ( SLODWORD(cl_maxLocalClients) > 0 )
    {
      p_connectionState = &clientUIActives[0].connectionState;
      v15 = &clientUIActives[0].connectionState;
      do
      {
        if ( (unsigned int)v7 >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(v14) = 2;
          LODWORD(v13) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v13, v14) )
            __debugbreak();
        }
        if ( *p_connectionState == CA_ACTIVE )
        {
          MarksSystem = FX_GetMarksSystem(v7);
          firstGlassMarkHandle = MarksSystem->firstGlassMarkHandle;
          if ( firstGlassMarkHandle != 0xFFFF )
          {
            do
            {
              if ( firstGlassMarkHandle >= 0x200u )
              {
                LODWORD(v14) = 512;
                LODWORD(v13) = firstGlassMarkHandle;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_marks.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( 512 )", "handle doesn't index FX_MARKS_LIMIT\n\t%i not in [0, %i)", v13, v14) )
                  __debugbreak();
              }
              v11 = (__int64)&MarksSystem->marks[firstGlassMarkHandle];
              firstGlassMarkHandle = *(_WORD *)(v11 + 2);
              if ( v11 == -76 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2157, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
                  __debugbreak();
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1996, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
                  __debugbreak();
              }
              if ( *(_BYTE *)(v11 + 76) != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 2158, ASSERT_TYPE_ASSERT, "(FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_GLASS)", (const char *)&queryFormat, "FX_GetMarkContext_ModelType( context ) == MARK_MODEL_TYPE_GLASS") )
                __debugbreak();
              if ( *(unsigned __int16 *)(v11 + 80) == pieceIndex )
              {
                if ( impactDir->v[0] != 0.0 || impactDir->v[1] != 0.0 || (v12 = &axis->m[2], impactDir->v[2] != 0.0) )
                  v12 = impactDir;
                Glass_PlayEffectWithMark(&v6->crackDecalEffect, (const vec3_t *)(v11 + 16), v12);
              }
            }
            while ( firstGlassMarkHandle != 0xFFFF );
            v7 = v16;
            p_connectionState = v15;
          }
        }
        ++v7;
        p_connectionState += 110;
        v16 = v7;
        v15 = p_connectionState;
      }
      while ( v7 < SLODWORD(cl_maxLocalClients) );
    }
  }
}

/*
==============
Glass_RotatePieceAroundEdge
==============
*/
void Glass_RotatePieceAroundEdge(const FxGlassCrackWork *work, const FxGlassShard *shard, FxGlassPiecePlace *piecePlace, const FxGlassCrackEdge *pivotEdge)
{
  float v8; 
  __int128 v9; 
  float v10; 
  float v11; 
  float v12; 
  int v13; 
  float v14; 
  __int128 v15; 
  float v16; 
  float v17; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  __int64 i0; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  vec3_t dir; 
  tmat33_t<vec3_t> mat; 
  tmat33_t<vec3_t> out; 

  v8 = Glass_InertiaScale(shard->areaX2);
  if ( pivotEdge->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 910, ASSERT_TYPE_ASSERT, "(pivotEdge->type == FX_GLASS_EDGE_SUPPORTING)", (const char *)&queryFormat, "pivotEdge->type == FX_GLASS_EDGE_SUPPORTING") )
    __debugbreak();
  v9 = LODWORD(pivotEdge->dir.v[1]);
  v10 = pivotEdge->dir.v[0];
  v11 = v10 * work->axis.m[0].v[0];
  v12 = *(float *)&v9 * work->axis.m[1].v[0];
  v13 = s_glassRandSeed + 1;
  s_glassRandSeed = v13;
  v14 = v12 + v11;
  v15 = v9;
  v16 = (float)(*(float *)&v9 * work->axis.m[1].v[1]) + (float)(v10 * work->axis.m[0].v[1]);
  v17 = (float)(*(float *)&v9 * work->axis.m[1].v[2]) + (float)(v10 * work->axis.m[0].v[2]);
  *(float *)&v15 = fsqrt((float)((float)(v16 * v16) + (float)(v14 * v14)) + (float)(v17 * v17));
  _XMM1 = v15;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm8, xmm0
  }
  dir.v[0] = v14 * (float)(1.0 / *(float *)&_XMM0);
  dir.v[2] = v17 * (float)(1.0 / *(float *)&_XMM0);
  dir.v[1] = v16 * (float)(1.0 / *(float *)&_XMM0);
  if ( v13 == 16361 )
  {
    v13 = 0;
    s_glassRandSeed = 0;
  }
  MatrixRotationRad(&mat, &dir, (float)((float)((float)((float)(glass_edge_angle->current.vector.v[1] - glass_edge_angle->current.value) * fx_randomTable[v13]) + glass_edge_angle->current.value) * (float)(v8 * work->angleSign)) * 0.017453292);
  MatrixMultiply(&work->axis, &mat, &out);
  AxisToQuat(&out, &piecePlace->frame.quat);
  v21 = piecePlace->frame.quat.v[1];
  v22 = piecePlace->frame.quat.v[0];
  v23 = piecePlace->frame.quat.v[2];
  v24 = piecePlace->frame.quat.v[3];
  v25 = (float)((float)((float)(v22 * v22) + (float)(v21 * v21)) + (float)(v23 * v23)) + (float)(v24 * v24);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v25 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 917, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( piecePlace->frame.quat ) )", "(%g, %g, %g, %g) len: %g", v22, v21, v23, v24, fsqrt(v25)) )
    __debugbreak();
  i0 = pivotEdge->i0;
  v27 = work->pts[i0].xy.v[0] - shard->centroid.v[0];
  v28 = work->pts[i0].xy.v[1] - shard->centroid.v[1];
  v29 = (float)(v28 * work->axis.m[1].v[0]) + (float)(v27 * work->axis.m[0].v[0]);
  v30 = (float)(v28 * work->axis.m[1].v[1]) + (float)(v27 * work->axis.m[0].v[1]);
  v31 = (float)(v27 * work->axis.m[0].v[2]) + (float)(v28 * work->axis.m[1].v[2]);
  v32 = (float)((float)(v30 * mat.m[1].v[1]) + (float)(v29 * mat.m[0].v[1])) + (float)(v31 * mat.m[2].v[1]);
  v33 = v30 * mat.m[1].v[2];
  piecePlace->frame.origin.v[0] = (float)(v29 - (float)((float)((float)(v30 * mat.m[1].v[0]) + (float)(v29 * mat.m[0].v[0])) + (float)(v31 * mat.m[2].v[0]))) + piecePlace->frame.origin.v[0];
  v34 = (float)(v30 - v32) + piecePlace->frame.origin.v[1];
  v35 = (float)(v33 + (float)(v29 * mat.m[0].v[2])) + (float)(v31 * mat.m[2].v[2]);
  piecePlace->frame.origin.v[1] = v34;
  piecePlace->frame.origin.v[2] = (float)(v31 - v35) + piecePlace->frame.origin.v[2];
}

/*
==============
Glass_SetCrackEdgeDelta
==============
*/
void Glass_SetCrackEdgeDelta(const FxGlassCrackWork *work, FxGlassCrackEdge *edge)
{
  __int64 i1; 
  __int64 i0; 
  float v4; 
  float v5; 
  __int128 v7; 

  i1 = edge->i1;
  i0 = edge->i0;
  v7 = LODWORD(work->pts[i1].xy.v[0]);
  v4 = work->pts[i1].xy.v[0] - work->pts[i0].xy.v[0];
  edge->dir.v[0] = v4;
  v5 = work->pts[i1].xy.v[1] - work->pts[i0].xy.v[1];
  edge->dir.v[1] = v5;
  *(float *)&v7 = fsqrt((float)(v4 * v4) + (float)(v5 * v5));
  _XMM4 = v7;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  edge->dir.v[0] = v4 * (float)(1.0 / *(float *)&_XMM0);
  edge->dir.v[1] = (float)(1.0 / *(float *)&_XMM0) * edge->dir.v[1];
  edge->len = *(float *)&v7;
  if ( *(float *)&v7 <= 0.072499998 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 178, ASSERT_TYPE_ASSERT, "( edge->len ) > ( (1.0f / (32.0f)) * 2 + 0.01f )", "%s > %s\n\t%g, %g", "edge->len", "GLASS_FIXED_POINT_SCALE * 2 + GLASS_CRACK_EQUAL_EPSILON", *(float *)&v7, DOUBLE_0_07249999791383743) )
    __debugbreak();
}

/*
==============
Glass_SetupDynamics
==============
*/
void Glass_SetupDynamics(const FxGlassCrackWork *work, const FxGlassShard *shard, unsigned int newPieceIndex, unsigned int basePieceIndex, const FxGlassCrackEdge *pivotEdge)
{
  FxGlassSystem *glassSys; 
  FxGlassPieceDynamics *pieceDynamics; 
  __int64 v10; 
  FxGlassPieceState *pieceStates; 
  __int64 v12; 
  FxGlassPiecePlace *v13; 
  FxGlassPieceState *v14; 
  __int64 v15; 
  float v16; 
  float v17; 
  float v18; 
  FxGlassCrackEdge *firstEdge; 
  __int128 v20; 
  float v21; 
  float v22; 
  __int128 v23; 
  char v24; 
  int v25; 
  FxGlassSystem *v28; 
  unsigned int v29; 
  FxGlassPieceState *v30; 
  __int64 v31; 
  __int64 v32; 

  glassSys = work->glassSys;
  pieceDynamics = glassSys->pieceDynamics;
  v10 = 5i64 * newPieceIndex;
  pieceStates = glassSys->pieceStates;
  v12 = newPieceIndex;
  v13 = &glassSys->piecePlaces[v12];
  v14 = &pieceStates[basePieceIndex];
  v29 = basePieceIndex;
  v15 = 5i64 * basePieceIndex;
  v32 = v10;
  v30 = v14;
  v31 = v15;
  if ( *(&pieceDynamics->physicsInstance + 2 * v10) != -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1207, ASSERT_TYPE_SANITY, "( newPieceDynamics->physicsInstance == 0xFFFFFFFF )", (const char *)&queryFormat, "newPieceDynamics->physicsInstance == PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    v10 = v32;
    v15 = v31;
    basePieceIndex = v29;
    v14 = v30;
  }
  v16 = v13->frame.origin.v[0] - work->playerOrigin.v[0];
  v17 = v13->frame.origin.v[1] - work->playerOrigin.v[1];
  v18 = v13->frame.origin.v[2] - work->playerOrigin.v[2];
  if ( (float)((float)((float)(v17 * v17) + (float)(v16 * v16)) + (float)(v18 * v18)) > (float)(glass_physics_maxdist->current.value * glass_physics_maxdist->current.value) )
    pieceStates[v12].flags |= 4u;
  if ( pieceStates[v12].supportMask )
  {
    firstEdge = shard->loops[0].firstEdge;
    v20 = 0i64;
    do
    {
      if ( !firstEdge->type )
      {
        v21 = (float)(firstEdge->dir.v[0] * work->axis.m[1].v[2]) - (float)(firstEdge->dir.v[1] * work->axis.m[0].v[2]);
        v22 = (float)(0.75 - (float)((float)((float)(v21 * 0.25) * v21) * v21)) * firstEdge->len;
        v23 = v20;
        *(float *)&v23 = *(float *)&v20 + v22;
        v20 = v23;
      }
      firstEdge = firstEdge->next;
    }
    while ( firstEdge != shard->loops[0].firstEdge );
    if ( (float)((float)(shard->radius / *(float *)&v20) * (float)(shard->radius / *(float *)&v20)) > glass_fall_ratio->current.value )
    {
      v24 = 1;
      _XMM1 = 0i64;
      __asm { vroundss xmm3, xmm1, xmm4, 1 }
      v25 = work->glassSys->time + (int)*(float *)&_XMM3;
    }
    else
    {
      v24 = 0;
      v25 = 0x7FFFFFFF;
    }
    *(&pieceDynamics->fallTime + 2 * v10) = v25;
    if ( !v24 )
    {
      if ( pivotEdge )
        Glass_RotatePieceAroundEdge(work, shard, v13, pivotEdge);
      Glass_LinkPiece_Static(work->glassSys, newPieceIndex);
      return;
    }
    if ( *(&pieceDynamics->physicsInstance + 2 * v15) != -1 )
      pieceStates[v12].supportMask = 0;
  }
  v28 = work->glassSys;
  if ( v28->time )
  {
    if ( (v14->flags & 8) != 0 && !pieceStates[v12].supportMask )
      pieceStates[v12].flags |= 8u;
    Glass_StartImmediateFall(work, newPieceIndex, basePieceIndex);
  }
  else
  {
    Glass_FreePiece(v28, newPieceIndex);
  }
}

/*
==============
Glass_SetupPieceFall
==============
*/
void Glass_SetupPieceFall(FxGlassSystem *glassSys, unsigned int pieceIndex, const vec3_t *vel, const vec3_t *avel)
{
  __int64 v4; 
  FxGlassPieceDynamics *v8; 
  FxGlassPieceState *v9; 
  bool v10; 
  int v11; 
  unsigned __int16 flags; 
  bool v13; 
  bool v14; 
  double FixedMemoryPoolUsage; 
  __int64 createJoint; 

  v4 = pieceIndex;
  if ( !glassSys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1062, ASSERT_TYPE_ASSERT, "(glassSys)", (const char *)&queryFormat, "glassSys") )
    __debugbreak();
  if ( (unsigned int)v4 >= glassSys->pieceLimit )
  {
    LODWORD(createJoint) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1063, ASSERT_TYPE_ASSERT, "(unsigned)( pieceIndex ) < (unsigned)( glassSys->pieceLimit )", "pieceIndex doesn't index glassSys->pieceLimit\n\t%i not in [0, %i)", createJoint, glassSys->pieceLimit) )
      __debugbreak();
  }
  v8 = &glassSys->pieceDynamics[v4];
  v9 = &glassSys->pieceStates[v4];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1068, ASSERT_TYPE_ASSERT, "(pieceState)", (const char *)&queryFormat, "pieceState") )
    __debugbreak();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1069, ASSERT_TYPE_ASSERT, "(pieceDynamics)", (const char *)&queryFormat, "pieceDynamics") )
    __debugbreak();
  v10 = 0;
  v11 = s_glassRandSeed + 1;
  v9->supportMask = 0;
  s_glassRandSeed = v11;
  if ( v11 == 16361 )
  {
    s_glassRandSeed = 0;
    v11 = 0;
  }
  flags = v9->flags;
  v13 = fx_randomTable[v11] <= glass_physics_chance->current.value;
  if ( (flags & 8) != 0 )
    v13 = 1;
  if ( (flags & 4) == 0 )
    v10 = v13;
  if ( v10 )
  {
    v8->fallTime = 0x7FFFFFFF;
    FixedMemoryPoolUsage = Physics_GetFixedMemoryPoolUsage(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE);
    if ( *(float *)&FixedMemoryPoolUsage <= glass_physics_memory_threshold->current.value && v8->physicsInstance == -1 )
      Particle_AddDeferredPhysicsGlassCreate(LOCAL_CLIENT_0, glassSys, v4, vel, avel, 0);
  }
  else
  {
    v14 = v8->physicsInstance == -1;
    v8->fallTime = glassSys->time;
    if ( !v14 )
      Glass_FreePiecePhysicsObject(v8);
    v8->vel.v[0] = vel->v[0];
    v8->vel.v[1] = vel->v[1];
    v8->vel.v[2] = vel->v[2];
    v8->avel.v[0] = avel->v[0];
    v8->avel.v[1] = avel->v[1];
    v8->avel.v[2] = avel->v[2];
    v9->flags |= 0x40u;
  }
}

/*
==============
Glass_SnapSeedDirToEdge
==============
*/
FxGlassCrackEdge *Glass_SnapSeedDirToEdge(FxGlassCrackWork *work, FxGlassCrackEdge *hitEdgePrev, float hitEdgeLen, float __formal, vec2_t *inOutBreakOrg, vec2_t *inOutSeedDir)
{
  FxGlassCrackEdge *next; 
  float v9; 
  float v13; 
  float v14; 
  float v15; 
  unsigned int ptCount; 
  FxGlassCrackEdge *v22; 

  next = hitEdgePrev->next;
  v9 = hitEdgeLen;
  _XMM8 = 0i64;
  if ( (float)((float)(next->len * 0.5) - COERCE_FLOAT(COERCE_UNSIGNED_INT(hitEdgeLen - (float)(next->len * 0.5)) & _xmm)) >= 1.0 )
  {
    v14 = inOutSeedDir->v[0];
  }
  else
  {
    __asm
    {
      vcmpless xmm0, xmm8, xmm3
      vblendvps xmm1, xmm8, xmm4, xmm0
    }
    v13 = hitEdgeLen - *(float *)&_XMM1;
    v14 = (float)(v13 * next->dir.v[0]) + inOutSeedDir->v[0];
    inOutSeedDir->v[0] = v14;
    v9 = *(float *)&_XMM1;
    inOutSeedDir->v[1] = (float)(v13 * next->dir.v[1]) + inOutSeedDir->v[1];
  }
  v15 = inOutBreakOrg->v[1];
  inOutBreakOrg->v[0] = inOutBreakOrg->v[0] - v14;
  inOutBreakOrg->v[1] = v15 - inOutSeedDir->v[1];
  ptCount = work->ptCount;
  if ( work->breakOrgIndex != ptCount - 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2493, ASSERT_TYPE_SANITY, "( work->breakOrgIndex ) == ( work->ptCount - 1 )", "work->breakOrgIndex == work->ptCount - 1\n\t%i, %i", work->breakOrgIndex, ptCount - 1) )
    __debugbreak();
  if ( inOutBreakOrg != (vec2_t *)&work->pts[work->breakOrgIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2494, ASSERT_TYPE_SANITY, "( &inOutBreakOrg == &work->pts[work->breakOrgIndex].xy )", (const char *)&queryFormat, "&inOutBreakOrg == &work->pts[work->breakOrgIndex].xy") )
    __debugbreak();
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  inOutBreakOrg->v[0] = *(float *)&_XMM2 * 0.03125;
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm0, 1 }
  inOutBreakOrg->v[1] = *(float *)&_XMM3 * 0.03125;
  Glass_PackVertex(inOutBreakOrg, &work->packedPts[work->breakOrgIndex]);
  if ( v9 == 0.0 )
  {
    --work->ptCount;
    return hitEdgePrev;
  }
  else if ( v9 == next->len )
  {
    --work->ptCount;
    return next;
  }
  else
  {
    v22 = Glass_AllocCrackEdge(work, next->i0, work->breakOrgIndex, next->loopIndex, next->type);
    next->i0 = truncate_cast<unsigned char,unsigned int>(work->breakOrgIndex);
    v22->next = next;
    hitEdgePrev->next = v22;
    Glass_SetCrackEdgeDelta(work, v22);
    Glass_SetCrackEdgeDelta(work, next);
    if ( next->twin )
      Glass_SplitTwin(work, v22, next);
    return v22;
  }
}

/*
==============
Glass_SplitLoop
==============
*/
void Glass_SplitLoop(FxGlassCrackWork *work, FxGlassCrackEdge *edge0, FxGlassCrackEdge *edge1, unsigned int loopIndex1)
{
  __int64 v4; 
  FxGlassCrackLoop *v8; 

  v4 = loopIndex1;
  if ( loopIndex1 >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2234, ASSERT_TYPE_ASSERT, "(unsigned)( loopIndex1 ) < (unsigned)( ( sizeof( *array_counter( work->loops ) ) + 0 ) )", "loopIndex1 doesn't index ARRAY_COUNT( work->loops )\n\t%i not in [0, %i)", loopIndex1, 32) )
    __debugbreak();
  if ( (_DWORD)v4 == edge1->loopIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2235, ASSERT_TYPE_ASSERT, "(loopIndex1 != edge1->loopIndex)", (const char *)&queryFormat, "loopIndex1 != edge1->loopIndex") )
    __debugbreak();
  if ( edge0->loopIndex != edge1->loopIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 2236, ASSERT_TYPE_ASSERT, "(edge0->loopIndex == edge1->loopIndex)", (const char *)&queryFormat, "edge0->loopIndex == edge1->loopIndex") )
    __debugbreak();
  v8 = &work->loops[edge0->loopIndex];
  v8->firstEdge = edge0;
  Glass_CalcLoopBounds(work, v8);
  work->loops[v4].firstEdge = edge1;
  Glass_RenumberLoop(edge1, v4);
  Glass_CalcLoopBounds(work, &work->loops[v4]);
}

/*
==============
Glass_SplitTwin
==============
*/
void Glass_SplitTwin(FxGlassCrackWork *work, FxGlassCrackEdge *edge01, FxGlassCrackEdge *edge12)
{
  FxGlassCrackEdge *twin; 
  unsigned __int8 i1; 
  FxGlassCrackEdge *FreeEdge; 
  float len; 
  FxGlassCrackEdge *next; 
  FxGlassCrackEdge *i; 
  int v12; 
  int i0; 

  if ( (edge01->next != edge12 || edge01->i1 != edge12->i0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1818, ASSERT_TYPE_ASSERT, "(edge01->next == edge12 && edge01->i1 == edge12->i0)", (const char *)&queryFormat, "edge01->next == edge12 && edge01->i1 == edge12->i0") )
    __debugbreak();
  if ( (edge01->twin || !edge12->twin) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1819, ASSERT_TYPE_ASSERT, "(edge01->twin == 0 && edge12->twin != 0)", (const char *)&queryFormat, "edge01->twin == NULL && edge12->twin != NULL") )
    __debugbreak();
  twin = edge12->twin;
  i1 = twin->i1;
  if ( i1 != edge01->i0 )
  {
    i0 = edge01->i0;
    v12 = i1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1822, ASSERT_TYPE_ASSERT, "( twin10->i1 ) == ( edge01->i0 )", "%s == %s\n\t%i, %i", "twin10->i1", "edge01->i0", v12, i0) )
      __debugbreak();
  }
  twin->i0 = edge01->i1;
  twin->len = edge01->len;
  twin->dir.v[0] = COERCE_FLOAT(LODWORD(edge01->dir.v[0]) ^ _xmm);
  twin->dir.v[1] = COERCE_FLOAT(LODWORD(edge01->dir.v[1]) ^ _xmm);
  twin->twin = edge01;
  edge01->twin = twin;
  FreeEdge = Glass_GetFreeEdge(work);
  FreeEdge->i0 = edge12->i1;
  FreeEdge->i1 = edge12->i0;
  FreeEdge->loopIndex = edge12->loopIndex;
  FreeEdge->type = edge12->type;
  FreeEdge->twin = edge12;
  len = edge12->len;
  edge12->twin = FreeEdge;
  FreeEdge->len = len;
  FreeEdge->dir.v[0] = COERCE_FLOAT(LODWORD(edge12->dir.v[0]) ^ _xmm);
  FreeEdge->dir.v[1] = COERCE_FLOAT(LODWORD(edge12->dir.v[1]) ^ _xmm);
  FreeEdge->next = twin;
  next = edge12->next->twin;
  if ( !next || next->next != twin )
  {
    next = twin->next;
    for ( i = next->next; i != twin; i = i->next )
      next = i;
  }
  next->next = FreeEdge;
}

/*
==============
Glass_StartDelayedFall
==============
*/
void Glass_StartDelayedFall(FxGlassSystem *glassSys, unsigned int pieceIndex)
{
  FxGlassPieceDynamics *pieceDynamics; 
  FxGlassPieceState *v4; 
  unsigned __int16 flags; 
  __int64 v7; 
  unsigned int physicsInstance; 
  unsigned int RigidBodyID; 
  int v10; 
  hknpBodyId v11; 
  float v12; 
  float v13; 
  int v14; 
  float v15; 
  int v16; 
  int v17; 
  float v18; 
  __int64 v19; 
  int v20; 
  vec3_t vel; 
  hkVector4f linVel; 
  hkVector4f angVel; 

  pieceDynamics = glassSys->pieceDynamics;
  v4 = &glassSys->pieceStates[pieceIndex];
  flags = v4->flags;
  v7 = pieceIndex;
  if ( (flags & 4) == 0 )
    v4->flags = flags | 8;
  physicsInstance = pieceDynamics[pieceIndex].physicsInstance;
  if ( physicsInstance == -1 )
  {
    v14 = 0;
    if ( s_glassRandSeed != 16360 )
      v14 = s_glassRandSeed + 1;
    v15 = 3.0 * fx_randomTable[v14];
    v16 = v14 + 1;
    v17 = 0;
    v18 = v15 - 1.5;
    if ( v16 != 16361 )
      v17 = v16;
    v19 = v17;
    v20 = v17 + 1;
    s_glassRandSeed = v20;
    vel.v[0] = v18;
    vel.v[1] = (float)(3.0 * fx_randomTable[v19]) - 1.5;
    if ( v20 == 16361 )
    {
      s_glassRandSeed = 0;
      v20 = 0;
    }
    vel.v[2] = (float)(3.0 * fx_randomTable[v20]) - 1.5;
    Glass_SetupPieceFall(glassSys, pieceIndex, &vec3_origin, &vel);
  }
  else
  {
    if ( !Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, physicsInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1264, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( authWorldId, pieceDynamics->physicsInstance ) >= 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( authWorldId, pieceDynamics->physicsInstance ) >= 1") )
      __debugbreak();
    RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, pieceDynamics[v7].physicsInstance, 0);
    v10 = RigidBodyID & 0xFFFFFF;
    v11.m_serialAndIndex = RigidBodyID;
    if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1266, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
      __debugbreak();
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 311, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( v10 == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 313, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", 3) )
      __debugbreak();
    HavokPhysics_GetRigidBodyLinAngVel(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, v11, &linVel, &angVel);
    v12 = 32.0 * linVel.m_quad.m128_f32[0];
    v13 = 32.0 * linVel.m_quad.m128_f32[2];
    vel.v[1] = 32.0 * linVel.m_quad.m128_f32[1];
    linVel.m_quad.m128_f32[0] = angVel.m_quad.m128_f32[0];
    vel.v[0] = v12;
    linVel.m_quad.m128_f32[2] = angVel.m_quad.m128_f32[2];
    vel.v[2] = v13;
    linVel.m_quad.m128_f32[1] = angVel.m_quad.m128_f32[1];
    Glass_SetupPieceFall(glassSys, pieceIndex, &vel, (const vec3_t *)&linVel);
  }
}

/*
==============
Glass_StartImmediateFall
==============
*/
void Glass_StartImmediateFall(const FxGlassCrackWork *work, unsigned int newPieceIndex, unsigned int basePieceIndex)
{
  __int64 v3; 
  FxGlassSystem *glassSys; 
  __int64 v7; 
  FxGlassPieceState *pieceStates; 
  FxGlassPiecePlace *piecePlaces; 
  __int64 v10; 
  FxGlassPieceDynamics *pieceDynamics; 
  float v12; 
  unsigned int physicsInstance; 
  float v14; 
  unsigned int RigidBodyID; 
  float v16; 
  float v17; 
  float v18; 
  int v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  int v27; 
  int v28; 
  int v29; 
  float v30; 
  int v31; 
  float v32; 
  float v33; 
  __int128 v34; 
  float v35; 
  float v36; 
  float v37; 
  vec3_t *v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  int v49; 
  float v50; 
  float v51; 
  float v52; 
  double FixedMemoryPoolUsage; 
  __int128 linVel; 
  vec3_t avel; 

  v3 = newPieceIndex;
  glassSys = work->glassSys;
  v7 = v3;
  pieceStates = glassSys->pieceStates;
  piecePlaces = glassSys->piecePlaces;
  v10 = basePieceIndex;
  pieceDynamics = glassSys->pieceDynamics;
  v12 = Glass_InertiaScale(pieceStates[v7].areaX2);
  physicsInstance = pieceDynamics[v10].physicsInstance;
  v14 = v12;
  if ( physicsInstance == -1 )
  {
    v18 = 0.0;
    v17 = 0.0;
    v16 = 0.0;
  }
  else
  {
    if ( !Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, physicsInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1141, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( authWorldId, basePieceDynamics->physicsInstance ) >= 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( authWorldId, basePieceDynamics->physicsInstance ) >= 1") )
      __debugbreak();
    RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, pieceDynamics[v10].physicsInstance, 0);
    if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1143, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
      __debugbreak();
    Physics_GetRigidBodyLinVel(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, RigidBodyID, (vec3_t *)&linVel);
    v16 = *((float *)&linVel + 2);
    v17 = *((float *)&linVel + 1);
    v18 = *(float *)&linVel;
  }
  v19 = s_glassRandSeed + 1;
  s_glassRandSeed = v19;
  if ( v19 == 16361 )
  {
    s_glassRandSeed = 0;
    v19 = 0;
  }
  v20 = work->impactDir.v[0];
  v21 = work->impactDir.v[1];
  v22 = (float)((float)((float)(glass_linear_vel->current.vector.v[1] - glass_linear_vel->current.value) * fx_randomTable[v19]) + glass_linear_vel->current.value) * v12;
  v23 = (float)(v20 * v22) + v18;
  v24 = (float)(v21 * v22) + v17;
  v25 = work->impactDir.v[2];
  v26 = (float)(v25 * v22) + v16;
  *(float *)&linVel = v23;
  *((float *)&linVel + 1) = v24;
  *((float *)&linVel + 2) = v26;
  if ( (float)((float)((float)(v21 * v21) + (float)(v20 * v20)) + (float)(v25 * v25)) == 0.0 )
  {
    v27 = v19 + 1;
    v28 = 0;
    if ( v27 != 16361 )
      v28 = v27;
    v29 = 0;
    v30 = (float)(3.0 * fx_randomTable[v28]) - 1.5;
    if ( v28 != 16360 )
      v29 = v28 + 1;
    v31 = v29 + 1;
    s_glassRandSeed = v29 + 1;
    v32 = (float)(3.0 * fx_randomTable[v29]) - 1.5;
    if ( v29 == 16360 )
    {
      s_glassRandSeed = 0;
      v31 = 0;
    }
    avel.v[1] = v32 * v12;
    avel.v[0] = v30 * v12;
    avel.v[2] = (float)((float)(3.0 * fx_randomTable[v31]) - 1.5) * v12;
  }
  else
  {
    v33 = (float)(v22 * 0.5) / work->originalRadius;
    v34 = LODWORD(piecePlaces[v7].frame.origin.v[1]);
    v35 = (float)(piecePlaces[v7].frame.origin.v[1] - work->impactPos.v[1]) * v33;
    v36 = (float)(piecePlaces[v7].frame.origin.v[0] - work->impactPos.v[0]) * v33;
    v37 = (float)(piecePlaces[v7].frame.origin.v[2] - work->impactPos.v[2]) * v33;
    *(float *)&linVel = v36 + v23;
    *((float *)&linVel + 1) = v35 + v24;
    *((float *)&linVel + 2) = v37 + v26;
    *(float *)&v34 = fsqrt((float)((float)(v35 * v35) + (float)(v36 * v36)) + (float)(v37 * v37));
    _XMM4 = v34;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
    }
    v41 = &work->axis.m[2];
    v42 = v35 * (float)(1.0 / *(float *)&_XMM0);
    v43 = v37 * (float)(1.0 / *(float *)&_XMM0);
    v44 = v36 * (float)(1.0 / *(float *)&_XMM0);
    if ( &work->axis.row2 == &avel && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross", linVel) )
      __debugbreak();
    v45 = v43 * work->axis.m[2].v[1];
    v46 = v42 * work->axis.m[2].v[2];
    v47 = v44 * work->axis.m[2].v[2];
    v48 = v42 * v41->v[0];
    v49 = s_glassRandSeed + 1;
    s_glassRandSeed = v49;
    v50 = v47 - (float)(v43 * v41->v[0]);
    v51 = v48 - (float)(v44 * work->axis.m[2].v[1]);
    if ( v49 == 16361 )
    {
      s_glassRandSeed = 0;
      v49 = 0;
    }
    v52 = (float)((float)((float)(glass_angular_vel->current.vector.v[1] - glass_angular_vel->current.value) * fx_randomTable[v49]) + glass_angular_vel->current.value) * (float)(v14 * work->angleSign);
    avel.v[0] = v52 * (float)(v45 - v46);
    avel.v[2] = v52 * v51;
    avel.v[1] = v52 * v50;
  }
  if ( pieceStates[v7].supportMask )
  {
    FixedMemoryPoolUsage = Physics_GetFixedMemoryPoolUsage(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE);
    if ( *(float *)&FixedMemoryPoolUsage <= glass_physics_memory_threshold->current.value )
      Particle_AddDeferredPhysicsGlassCreate(LOCAL_CLIENT_0, work->glassSys, newPieceIndex, (const vec3_t *)&linVel, &avel, 1);
  }
  else
  {
    Glass_SetupPieceFall(work->glassSys, newPieceIndex, (const vec3_t *)&linVel, &avel);
  }
}

/*
==============
Glass_TraceCrackAgainstEdge
==============
*/
void Glass_TraceCrackAgainstEdge(FxGlassCrackWork *work, FxGlassClipSegment *clip, const vec2_t *start, FxGlassCrackEdge *edgeIter, FxGlassCrackEdge *edgeIterPrev)
{
  float v5; 
  float v6; 
  float v8; 
  float v10; 
  float v11; 
  __int64 i0; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float len; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  int v27; 
  int wasDeflected; 
  FxGlassCrackPoint *v29; 
  float v30; 
  float v31; 
  __int128 v33; 
  float deflectLen; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  FxGlassCrackEdge *v41; 
  FxGlassCrackEdge *v42; 
  float v43; 
  __int128 v44; 
  __int128 v45; 
  __int128 v46; 
  __int128 v47; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 

  v5 = clip->dir.v[1];
  v6 = clip->dir.v[0];
  v8 = edgeIter->dir.v[0];
  v10 = edgeIter->dir.v[1];
  v11 = (float)(v8 * v5) - (float)(v10 * v6);
  _XMM12 = 0i64;
  if ( v11 > 0.0 )
  {
    i0 = edgeIter->i0;
    v14 = start->v[0] - work->pts[i0].xy.v[0];
    v15 = start->v[1] - work->pts[i0].xy.v[1];
    v17 = (float)(v14 * v10) - (float)(v15 * v8);
    v16 = v17;
    v54 = v14;
    v55 = v15;
    if ( v17 > 0.0 )
    {
      v18 = v11 * 0.0099999998;
      len = clip->len;
      v20 = v17 - (float)(len * v11);
      if ( v20 <= (float)(v11 * 0.0099999998) )
      {
        v21 = v11 * 4.0;
        v22 = (float)(v14 * v5) - (float)(v15 * v6);
        if ( v22 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 * 4.0) ^ _xmm) )
        {
          v23 = v11 * edgeIter->len;
          if ( v22 <= (float)(v23 + v21) )
          {
            v24 = v22 - (float)(v23 * 0.5);
            v26 = (float)(v23 * 0.5) - COERCE_FLOAT(LODWORD(v24) & _xmm);
            v25 = v26;
            if ( v26 >= v21 )
            {
              clip->len = v16 / v11;
              clip->hitEdgePrev = edgeIterPrev;
              *(_QWORD *)&clip->isBad = 0i64;
              clip->hitAtVertex = 0;
              clip->hitEdge = edgeIter;
              return;
            }
            v27 = 0;
            LOBYTE(v27) = COERCE_FLOAT(LODWORD(v26) & _xmm) > v18;
            if ( COERCE_FLOAT(LODWORD(v26) & _xmm) <= v18 )
            {
              if ( !clip->hitAtVertex )
                goto LABEL_42;
              v41 = v24 <= 0.0 ? clip->hitEdge : clip->hitEdgePrev;
              if ( edgeIter != v41 )
              {
                if ( v20 <= (float)(v18 * -2.0) )
                  goto LABEL_42;
                v42 = v24 <= 0.0 ? edgeIter : edgeIter->next;
                v43 = clip->dir.v[1];
                v44 = LODWORD(clip->dir.v[0]);
                v45 = v44;
                *(float *)&v45 = (float)((float)(*(float *)&v44 * v42->dir.v[0]) + (float)(v43 * v42->dir.v[1])) - 1.0;
                v46 = v45;
                v47 = v44;
                _XMM3 = v46 ^ _xmm;
                *(float *)&v47 = (float)((float)(*(float *)&v44 * clip->hitEdge->dir.v[0]) + (float)(v43 * clip->hitEdge->dir.v[1])) - 1.0;
                __asm
                {
                  vcmpless xmm0, xmm12, xmm1
                  vblendvps xmm4, xmm3, xmm8, xmm0
                }
                _XMM3 = v47 ^ _xmm;
                __asm
                {
                  vcmpless xmm0, xmm12, xmm2
                  vblendvps xmm0, xmm3, xmm9, xmm0
                }
                if ( *(float *)&_XMM4 <= *(float *)&_XMM0 )
                  goto LABEL_42;
              }
            }
            else
            {
              wasDeflected = clip->wasDeflected;
              if ( !wasDeflected && v26 >= (float)(v18 * -0.5) )
              {
                clip->hitAtVertex = 0;
                clip->isBad = 1;
              }
              if ( v24 > 0.0 )
                LOBYTE(i0) = edgeIter->i1;
              v29 = &work->pts[(unsigned __int8)i0];
              v30 = v29->xy.v[0] - start->v[0];
              v33 = LODWORD(work->pts[(unsigned __int8)i0].xy.v[1]);
              v31 = work->pts[(unsigned __int8)i0].xy.v[1] - start->v[1];
              *(float *)&v33 = fsqrt((float)(v31 * v31) + (float)(v30 * v30));
              _XMM7 = v33;
              __asm
              {
                vcmpless xmm0, xmm7, cs:__real@80000000
                vblendvps xmm0, xmm7, xmm1, xmm0
              }
              v57 = v30 * (float)(1.0 / *(float *)&_XMM0);
              v56 = v31 * (float)(1.0 / *(float *)&_XMM0);
              if ( *(float *)&v33 <= len || v25 > 0.0 )
              {
                if ( !clip->hitAtVertex || *(float *)&v33 <= (float)(len - 0.02) || wasDeflected && ((deflectLen = clip->deflectLen, *(float *)&v33 <= deflectLen) || (v37 = clip->deflectDir.v[1], v38 = clip->deflectDir.v[0], v39 = (float)(v8 * v37) - (float)(v10 * v38), v39 > 0.0) && (float)(v16 - (float)(deflectLen * v39)) <= (float)(v39 * 0.0099999998) && (v40 = (float)(v37 * v54) - (float)(v38 * v55), v40 >= (float)(v39 * -4.0)) && v40 <= (float)((float)(edgeIter->len + 4.0) * v39)) )
                {
                  if ( !clip->hitEdge || !Glass_DoesSegmentIntersectEitherEdge(work, &work->pts[clip->startIndex].xy, &v29->xy, clip->hitEdgePrev, clip->hitEdge) )
                  {
                    if ( (float)((float)(v56 * clip->baseDir.v[1]) + (float)(v57 * clip->baseDir.v[0])) < clip->deflectLimit )
                    {
                      if ( v25 <= 0.0 )
                        return;
                      *(_QWORD *)&clip->wasDeflected = 0i64;
                      clip->isBad = (float)(v21 * 0.5) > v25;
                      clip->len = v16 / v11;
                      goto LABEL_29;
                    }
                    clip->deflectLen = *(float *)&_XMM7;
                    clip->deflectDir.v[0] = v57;
                    clip->deflectDir.v[1] = v56;
LABEL_42:
                    clip->len = v16 / v11;
                    clip->isBad = 0;
                    clip->hitAtVertex = 1;
                    clip->wasDeflected = v27;
                    if ( v24 > 0.0 )
                    {
                      clip->hitEdge = edgeIter->next;
                      clip->hitEdgePrev = edgeIter;
                      return;
                    }
LABEL_29:
                    clip->hitEdgePrev = edgeIterPrev;
                    clip->hitEdge = edgeIter;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

/*
==============
Glass_UnpackAndAddVertex
==============
*/
__int64 Glass_UnpackAndAddVertex(FxGlassCrackWork *work, FxGlassVertex vert)
{
  __int64 result; 
  unsigned int ptCount; 
  int v6; 
  __int16 y; 

  y = vert.y;
  if ( work->ptCount >= 0xFF )
  {
    v6 = 255;
    ptCount = work->ptCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 299, ASSERT_TYPE_ASSERT, "(unsigned)( work->ptCount ) < (unsigned)( ( sizeof( *array_counter( work->pts ) ) + 0 ) )", "work->ptCount doesn't index ARRAY_COUNT( work->pts )\n\t%i not in [0, %i)", ptCount, v6) )
      __debugbreak();
  }
  result = work->ptCount;
  work->ptCount = result + 1;
  work->packedPts[result] = vert;
  work->pts[result].xy.v[0] = (float)vert.x * 0.03125;
  work->pts[result].xy.v[1] = (float)y * 0.03125;
  return result;
}

/*
==============
Particle_AddDeferredPhysicsGlassCreate
==============
*/
void Particle_AddDeferredPhysicsGlassCreate(LocalClientNum_t localClientNum, FxGlassSystem *glassSys, unsigned int pieceIndex, const vec3_t *vel, const vec3_t *avel, bool createJoint)
{
  __int64 v6; 
  __int64 v8; 
  __int64 v10; 
  volatile signed __int32 *v11; 
  signed __int32 v12; 
  __int64 v13; 
  FxGlassPieceDynamics *pieceDynamics; 
  __int64 v15; 

  v6 = pieceIndex;
  v8 = localClientNum;
  if ( !glassSys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 999, ASSERT_TYPE_ASSERT, "(glassSys)", (const char *)&queryFormat, "glassSys") )
    __debugbreak();
  if ( glassSys->pieceDynamics[v6].physicsInstance != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1000, ASSERT_TYPE_ASSERT, "(glassSys->pieceDynamics[pieceIndex].physicsInstance == 0xFFFFFFFF)", (const char *)&queryFormat, "glassSys->pieceDynamics[pieceIndex].physicsInstance == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( glassSys->pieceDynamics[v6].physicsDetailInstance != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1001, ASSERT_TYPE_ASSERT, "(glassSys->pieceDynamics[pieceIndex].physicsDetailInstance == 0xFFFFFFFF)", (const char *)&queryFormat, "glassSys->pieceDynamics[pieceIndex].physicsDetailInstance == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v10 = v8;
  v11 = &g_particleDeferredPhysicsGlassCreateListCount[v8];
  if ( ((unsigned __int8)v11 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_particleDeferredPhysicsGlassCreateListCount[v8]) )
    __debugbreak();
  v12 = _InterlockedExchangeAdd(v11, 1u);
  if ( (unsigned int)v12 >= 0x800 )
  {
    LODWORD(v15) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1004, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( PARTICLE_DEFERRED_PHYSICS_GLASS_LIST_MAX )", "index doesn't index PARTICLE_DEFERRED_PHYSICS_GLASS_LIST_MAX\n\t%i not in [0, %i)", v15, 2048) )
      __debugbreak();
  }
  v13 = v12 + (v10 << 11);
  g_particleDeferredPhysicsGlassCreateList[0][v13].glassSys = glassSys;
  g_particleDeferredPhysicsGlassCreateList[0][v13].pieceIndex = v6;
  g_particleDeferredPhysicsGlassCreateList[0][v13].vel.v[0] = vel->v[0];
  g_particleDeferredPhysicsGlassCreateList[0][v13].vel.v[1] = vel->v[1];
  g_particleDeferredPhysicsGlassCreateList[0][v13].vel.v[2] = vel->v[2];
  g_particleDeferredPhysicsGlassCreateList[0][v13].avel.v[0] = avel->v[0];
  g_particleDeferredPhysicsGlassCreateList[0][v13].avel.v[1] = avel->v[1];
  g_particleDeferredPhysicsGlassCreateList[0][v13].avel.v[2] = avel->v[2];
  g_particleDeferredPhysicsGlassCreateList[0][v13].createJoint = createJoint;
  pieceDynamics = glassSys->pieceDynamics;
  g_particleDeferredPhysicsGlassCreateList[0][v13].skipCreation = 0;
  if ( pieceDynamics[v6].pendingCreation )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_glass_crack.cpp", 1016, ASSERT_TYPE_ASSERT, "(!glassSys->pieceDynamics[pieceIndex].pendingCreation)", (const char *)&queryFormat, "!glassSys->pieceDynamics[pieceIndex].pendingCreation") )
      __debugbreak();
    pieceDynamics = glassSys->pieceDynamics;
  }
  pieceDynamics[v6].pendingCreation = 1;
}

